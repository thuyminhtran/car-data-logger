/*
 * Copyright (C) 2016, IVIS
 *
 * This file is part of GENIVI Project CDL - Car Data Logger.
 *
 * This Source Code Form is subject to the terms of the
 * Mozilla Public License (MPL), v. 2.0.
 * If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * For further information see http://www.genivi.org/.
 */

/*!
 * \author Seung-Hyun Yun <shyun@ivisolution.com>
 *
 * \copyright Copyright (c) 2016, IVIS \n
 * License MPL-2.0: Mozilla Public License version 2.0 http://mozilla.org/MPL/2.0/.
 *
 * \file avinformationproviderhelper.cpp
*/

#include "AVInformationProviderHelper.h"
#include "AVDataManager.h"
#include "AlbumArtProvider.h"
#include <QSharedPointer>
#include <QPixmap>

Q_LOGGING_CATEGORY(avInformationProviderHelper, "cluster.hmi.avInformationProviderHelper")

#ifdef ENABLE_COMMONAPI
    std::shared_ptr<AVInformationProviderHelper> mAVInformationProviderHelper = Q_NULLPTR;
#endif

AVInformationProviderHelper::AVInformationProviderHelper(QObject *parent) : QObject(parent)
#ifdef ENABLE_COMMONAPI
    , m_AVInfoProxy(Q_NULLPTR)
    , gImageBuffer(std::vector<uint8_t>())
    , mPrevCoverArtIndex(0)
#endif
{
    qCDebug(avInformationProviderHelper) << "AVInformationProviderHelper()";
}

#ifdef ENABLE_COMMONAPI
std::shared_ptr<AVInformationProviderHelper> &AVInformationProviderHelper::getInstance()
{
    if ( mAVInformationProviderHelper == Q_NULLPTR )
    {
        mAVInformationProviderHelper = std::shared_ptr<AVInformationProviderHelper> (new AVInformationProviderHelper);
        mAVInformationProviderHelper.get()->init();
    }

    return mAVInformationProviderHelper;
}

void AVInformationProviderHelper::finalize()
{
    if ( mAVInformationProviderHelper != Q_NULLPTR )
    {
        mAVInformationProviderHelper = Q_NULLPTR;
    }
}

void AVInformationProviderHelper::init()
{
    qCDebug(avInformationProviderHelper) << "init";
    std::shared_ptr<CommonAPI::Runtime> runtime = CommonAPI::Runtime::get();
    m_AVInfoProxy = runtime->buildProxy<AVInformationProxy>("local", "com.ivis.AVInformationProvider.AVInformation.SomeIp");

    subscribeEvents();
}

void AVInformationProviderHelper::subscribeEvents()
{
    qCDebug(avInformationProviderHelper) << "subscribeEvents";

    if (m_AVInfoProxy)
    {
        m_AVInfoProxy.get()->getCurrentSourceAttribute().getChangedEvent().subscribe(
            std::bind(&AVInformationProviderHelper::onCurrentSourceChanged, this, std::placeholders::_1));

        m_AVInfoProxy.get()->getMetaDataAttribute().getChangedEvent().subscribe(
            std::bind(&AVInformationProviderHelper::onMetaDataChanged, this, std::placeholders::_1));

        m_AVInfoProxy.get()->getPlayPositionAttribute().getChangedEvent().subscribe(
            std::bind(&AVInformationProviderHelper::onPlayPositionChanged, this, std::placeholders::_1));

        m_AVInfoProxy.get()->getPlayStatusAttribute().getChangedEvent().subscribe(
            std::bind(&AVInformationProviderHelper::onPlayStatusChanged, this, std::placeholders::_1));

        m_AVInfoProxy.get()->getNotifyAlbumArtEvent().subscribe(
            std::bind(&AVInformationProviderHelper::onAlbumArtEvent, this,
                      std::placeholders::_1, std::placeholders::_2, std::placeholders::_3));
    }
}

void AVInformationProviderHelper::onCurrentSourceChanged(AVInformationTypes::Source source)
{
    qCDebug(avInformationProviderHelper) << "source: " << source;
    AVDataManager::instance()->setSource(static_cast<qint32>(source));
}

void AVInformationProviderHelper::onMetaDataChanged(AVInformationTypes::MetaData metaData)
{
    QString str = QString::fromLatin1("title: %1, album: %2, artist: %3, totalTrackNumber: %4, currentTrackNumber: %5")
                  .arg(QString::fromStdString(metaData.getTitle()))
                  .arg(QString::fromStdString(metaData.getAlbum()))
                  .arg(QString::fromStdString(metaData.getArtist()))
                  .arg(metaData.getTotalTrackNumber())
                  .arg(metaData.getCurrentTrackNumber());
    qCDebug(avInformationProviderHelper) << str.toLocal8Bit().data();

    AVDataManager *avDataManager = AVDataManager::instance();

    if (avDataManager->source() == AVInformationTypes::Source::FM || avDataManager->source() == AVInformationTypes::Source::AM)
    {
        // radio
        avDataManager->setFrequency(QString::fromStdString(metaData.getTitle()));
        avDataManager->setPsName(QString::fromStdString(metaData.getAlbum()));
        avDataManager->setPresetIndex(QString::fromStdString(metaData.getArtist()));
    }
    else if (avDataManager->source() == AVInformationTypes::Source::USB_MUSIC)
    {
        // media
        avDataManager->setTitle(QString::fromStdString(metaData.getTitle()));
        avDataManager->setAlbum(QString::fromStdString(metaData.getAlbum()));
        avDataManager->setArtist(QString::fromStdString(metaData.getArtist()));
        avDataManager->setTotalTrackNumber(metaData.getTotalTrackNumber());
        avDataManager->setCurrentTrackNumber(metaData.getCurrentTrackNumber());
    }
    else if (avDataManager->source() == AVInformationTypes::Source::USB_VIDEO)
    {
        avDataManager->setFileName(QString::fromStdString(metaData.getTitle()));
    }
    else
    {

    }
}

void AVInformationProviderHelper::onPlayPositionChanged(AVInformationTypes::PlayPosition playPosition)
{
    QString str = QString::fromLatin1("currentPosition: %1, duration: %2")
                  .arg(playPosition.getCurrentPosition()).arg(playPosition.getDuration());
    //qCDebug(avInformationProviderHelper) << str.toLocal8Bit().data();

    AVDataManager *avDataManager = AVDataManager::instance();
    avDataManager->setCurrentPosition(playPosition.getCurrentPosition());
    avDataManager->setDuration(playPosition.getDuration());
}

void AVInformationProviderHelper::onPlayStatusChanged(AVInformationTypes::PlayStatus playStatus)
{
    qCDebug(avInformationProviderHelper) << "playStatus: " << playStatus;
    AVDataManager::instance()->setPlayStatus(playStatus);
}

void AVInformationProviderHelper::onAlbumArtEvent(uint32_t totalSegmentCount, uint32_t currentIndex, std::vector<uint8_t> imageData)
{
    qCDebug(avInformationProviderHelper) << "";

    if (currentIndex == 1)
    {
        gImageBuffer.clear();

        mPrevCoverArtIndex = 0;
    }

    if ( currentIndex > mPrevCoverArtIndex )
    {
        gImageBuffer.insert(gImageBuffer.end(), imageData.begin(), imageData.end());

        mPrevCoverArtIndex = currentIndex;
    }

    if (currentIndex == totalSegmentCount)
    {
        QPixmap image;
        QImage sendImage;
        AVDataManager *aVDataManager = AVDataManager::instance();
        image.loadFromData((const uchar*)gImageBuffer.data(), gImageBuffer.size());

        sendImage = image.toImage();

        AlbumArtProvider *albumArtProvider = AlbumArtProvider::instance();
        if(sendImage.isNull())
        {
            qCDebug(avInformationProviderHelper) << "received image is NULL";
        }
        else
        {
            qCDebug(avInformationProviderHelper) << "receive image success";
            albumArtProvider->setAlbumArt(sendImage);
            emit aVDataManager->albumArtChanged();
        }
    }
}
#endif
