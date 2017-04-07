/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.10.v201611111521.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <v1/com/ivis/MediaManager/PlaybackControlStubDefault.hpp>
#include <assert.h>

namespace v1 {
namespace com {
namespace ivis {
namespace MediaManager {

PlaybackControlStubDefault::PlaybackControlStubDefault():
        remoteEventHandler_(this),
        interfaceVersion_(PlaybackControl::getInterfaceVersion()) {
}

const CommonAPI::Version& PlaybackControlStubDefault::getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> _client) {
    (void)_client;
    return interfaceVersion_;
}

PlaybackControlStubRemoteEvent* PlaybackControlStubDefault::initStubAdapter(const std::shared_ptr< PlaybackControlStubAdapter> &_adapter) {
    CommonAPI::Stub<PlaybackControlStubAdapter, PlaybackControlStubRemoteEvent>::stubAdapter_ = _adapter;
    return &remoteEventHandler_;
}

const ::v1::com::ivis::MediaManager::MediaManagerTypes::RepeatMode& PlaybackControlStubDefault::getRepeatModeAttribute() {
    return repeatModeAttributeValue_;
}

const ::v1::com::ivis::MediaManager::MediaManagerTypes::RepeatMode& PlaybackControlStubDefault::getRepeatModeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) {
    (void)_client;
    return getRepeatModeAttribute();
}

void PlaybackControlStubDefault::setRepeatModeAttribute(::v1::com::ivis::MediaManager::MediaManagerTypes::RepeatMode _value) {
    const bool valueChanged = trySetRepeatModeAttribute(std::move(_value));
    if (valueChanged) {
        fireRepeatModeAttributeChanged(repeatModeAttributeValue_);
    }
}

bool PlaybackControlStubDefault::trySetRepeatModeAttribute(::v1::com::ivis::MediaManager::MediaManagerTypes::RepeatMode _value) {
    if (!validateRepeatModeAttributeRequestedValue(_value))
        return false;

    const bool valueChanged = (repeatModeAttributeValue_ != _value);
    repeatModeAttributeValue_ = std::move(_value);
    return valueChanged;
}

bool PlaybackControlStubDefault::validateRepeatModeAttributeRequestedValue(const ::v1::com::ivis::MediaManager::MediaManagerTypes::RepeatMode &_value) {
    (void)_value;
    return _value.validate();
}

void PlaybackControlStubDefault::setRepeatModeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::MediaManager::MediaManagerTypes::RepeatMode _value) {
    (void)_client;
    setRepeatModeAttribute(_value);
}

void PlaybackControlStubDefault::onRemoteRepeatModeAttributeChanged() {
    // No operation in default
}

void PlaybackControlStubDefault::RemoteEventHandler::onRemoteRepeatModeAttributeChanged() {
    assert(defaultStub_ !=NULL);
    defaultStub_->onRemoteRepeatModeAttributeChanged();
}

bool PlaybackControlStubDefault::RemoteEventHandler::onRemoteSetRepeatModeAttribute(::v1::com::ivis::MediaManager::MediaManagerTypes::RepeatMode _value) {
    assert(defaultStub_ !=NULL);
    return defaultStub_->trySetRepeatModeAttribute(std::move(_value));
}

bool PlaybackControlStubDefault::RemoteEventHandler::onRemoteSetRepeatModeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::MediaManager::MediaManagerTypes::RepeatMode _value) {
    (void)_client;
    return onRemoteSetRepeatModeAttribute(_value);
}

const ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayMode& PlaybackControlStubDefault::getPlayModeAttribute() {
    return playModeAttributeValue_;
}

const ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayMode& PlaybackControlStubDefault::getPlayModeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) {
    (void)_client;
    return getPlayModeAttribute();
}

void PlaybackControlStubDefault::setPlayModeAttribute(::v1::com::ivis::MediaManager::MediaManagerTypes::PlayMode _value) {
    const bool valueChanged = trySetPlayModeAttribute(std::move(_value));
    if (valueChanged) {
        firePlayModeAttributeChanged(playModeAttributeValue_);
    }
}

bool PlaybackControlStubDefault::trySetPlayModeAttribute(::v1::com::ivis::MediaManager::MediaManagerTypes::PlayMode _value) {
    if (!validatePlayModeAttributeRequestedValue(_value))
        return false;

    const bool valueChanged = (playModeAttributeValue_ != _value);
    playModeAttributeValue_ = std::move(_value);
    return valueChanged;
}

bool PlaybackControlStubDefault::validatePlayModeAttributeRequestedValue(const ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayMode &_value) {
    (void)_value;
    return _value.validate();
}

void PlaybackControlStubDefault::setPlayModeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayMode _value) {
    (void)_client;
    setPlayModeAttribute(_value);
}

void PlaybackControlStubDefault::onRemotePlayModeAttributeChanged() {
    // No operation in default
}

void PlaybackControlStubDefault::RemoteEventHandler::onRemotePlayModeAttributeChanged() {
    assert(defaultStub_ !=NULL);
    defaultStub_->onRemotePlayModeAttributeChanged();
}

bool PlaybackControlStubDefault::RemoteEventHandler::onRemoteSetPlayModeAttribute(::v1::com::ivis::MediaManager::MediaManagerTypes::PlayMode _value) {
    assert(defaultStub_ !=NULL);
    return defaultStub_->trySetPlayModeAttribute(std::move(_value));
}

bool PlaybackControlStubDefault::RemoteEventHandler::onRemoteSetPlayModeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayMode _value) {
    (void)_client;
    return onRemoteSetPlayModeAttribute(_value);
}

const ::v1::com::ivis::MediaManager::MediaManagerTypes::TrackInfo& PlaybackControlStubDefault::getCurrentTrackInfoAttribute() {
    return currentTrackInfoAttributeValue_;
}

const ::v1::com::ivis::MediaManager::MediaManagerTypes::TrackInfo& PlaybackControlStubDefault::getCurrentTrackInfoAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) {
    (void)_client;
    return getCurrentTrackInfoAttribute();
}

void PlaybackControlStubDefault::setCurrentTrackInfoAttribute(::v1::com::ivis::MediaManager::MediaManagerTypes::TrackInfo _value) {
    const bool valueChanged = trySetCurrentTrackInfoAttribute(std::move(_value));
    if (valueChanged) {
        fireCurrentTrackInfoAttributeChanged(currentTrackInfoAttributeValue_);
    }
}

bool PlaybackControlStubDefault::trySetCurrentTrackInfoAttribute(::v1::com::ivis::MediaManager::MediaManagerTypes::TrackInfo _value) {
    if (!validateCurrentTrackInfoAttributeRequestedValue(_value))
        return false;

    const bool valueChanged = (currentTrackInfoAttributeValue_ != _value);
    currentTrackInfoAttributeValue_ = std::move(_value);
    return valueChanged;
}

bool PlaybackControlStubDefault::validateCurrentTrackInfoAttributeRequestedValue(const ::v1::com::ivis::MediaManager::MediaManagerTypes::TrackInfo &_value) {
    (void)_value;
    return true;
}

void PlaybackControlStubDefault::setCurrentTrackInfoAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::MediaManager::MediaManagerTypes::TrackInfo _value) {
    (void)_client;
    setCurrentTrackInfoAttribute(_value);
}

void PlaybackControlStubDefault::onRemoteCurrentTrackInfoAttributeChanged() {
    // No operation in default
}

void PlaybackControlStubDefault::RemoteEventHandler::onRemoteCurrentTrackInfoAttributeChanged() {
    assert(defaultStub_ !=NULL);
    defaultStub_->onRemoteCurrentTrackInfoAttributeChanged();
}

bool PlaybackControlStubDefault::RemoteEventHandler::onRemoteSetCurrentTrackInfoAttribute(::v1::com::ivis::MediaManager::MediaManagerTypes::TrackInfo _value) {
    assert(defaultStub_ !=NULL);
    return defaultStub_->trySetCurrentTrackInfoAttribute(std::move(_value));
}

bool PlaybackControlStubDefault::RemoteEventHandler::onRemoteSetCurrentTrackInfoAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::MediaManager::MediaManagerTypes::TrackInfo _value) {
    (void)_client;
    return onRemoteSetCurrentTrackInfoAttribute(_value);
}

const uint32_t& PlaybackControlStubDefault::getCurrentTrackNumberAttribute() {
    return currentTrackNumberAttributeValue_;
}

const uint32_t& PlaybackControlStubDefault::getCurrentTrackNumberAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) {
    (void)_client;
    return getCurrentTrackNumberAttribute();
}

void PlaybackControlStubDefault::setCurrentTrackNumberAttribute(uint32_t _value) {
    const bool valueChanged = trySetCurrentTrackNumberAttribute(std::move(_value));
    if (valueChanged) {
        fireCurrentTrackNumberAttributeChanged(currentTrackNumberAttributeValue_);
    }
}

bool PlaybackControlStubDefault::trySetCurrentTrackNumberAttribute(uint32_t _value) {
    if (!validateCurrentTrackNumberAttributeRequestedValue(_value))
        return false;

    const bool valueChanged = (currentTrackNumberAttributeValue_ != _value);
    currentTrackNumberAttributeValue_ = std::move(_value);
    return valueChanged;
}

bool PlaybackControlStubDefault::validateCurrentTrackNumberAttributeRequestedValue(const uint32_t &_value) {
    (void)_value;
    return true;
}

void PlaybackControlStubDefault::setCurrentTrackNumberAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, uint32_t _value) {
    (void)_client;
    setCurrentTrackNumberAttribute(_value);
}

void PlaybackControlStubDefault::onRemoteCurrentTrackNumberAttributeChanged() {
    // No operation in default
}

void PlaybackControlStubDefault::RemoteEventHandler::onRemoteCurrentTrackNumberAttributeChanged() {
    assert(defaultStub_ !=NULL);
    defaultStub_->onRemoteCurrentTrackNumberAttributeChanged();
}

bool PlaybackControlStubDefault::RemoteEventHandler::onRemoteSetCurrentTrackNumberAttribute(uint32_t _value) {
    assert(defaultStub_ !=NULL);
    return defaultStub_->trySetCurrentTrackNumberAttribute(std::move(_value));
}

bool PlaybackControlStubDefault::RemoteEventHandler::onRemoteSetCurrentTrackNumberAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, uint32_t _value) {
    (void)_client;
    return onRemoteSetCurrentTrackNumberAttribute(_value);
}

const uint32_t& PlaybackControlStubDefault::getTotalTrackNumberAttribute() {
    return totalTrackNumberAttributeValue_;
}

const uint32_t& PlaybackControlStubDefault::getTotalTrackNumberAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) {
    (void)_client;
    return getTotalTrackNumberAttribute();
}

void PlaybackControlStubDefault::setTotalTrackNumberAttribute(uint32_t _value) {
    const bool valueChanged = trySetTotalTrackNumberAttribute(std::move(_value));
    if (valueChanged) {
        fireTotalTrackNumberAttributeChanged(totalTrackNumberAttributeValue_);
    }
}

bool PlaybackControlStubDefault::trySetTotalTrackNumberAttribute(uint32_t _value) {
    if (!validateTotalTrackNumberAttributeRequestedValue(_value))
        return false;

    const bool valueChanged = (totalTrackNumberAttributeValue_ != _value);
    totalTrackNumberAttributeValue_ = std::move(_value);
    return valueChanged;
}

bool PlaybackControlStubDefault::validateTotalTrackNumberAttributeRequestedValue(const uint32_t &_value) {
    (void)_value;
    return true;
}

void PlaybackControlStubDefault::setTotalTrackNumberAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, uint32_t _value) {
    (void)_client;
    setTotalTrackNumberAttribute(_value);
}

void PlaybackControlStubDefault::onRemoteTotalTrackNumberAttributeChanged() {
    // No operation in default
}

void PlaybackControlStubDefault::RemoteEventHandler::onRemoteTotalTrackNumberAttributeChanged() {
    assert(defaultStub_ !=NULL);
    defaultStub_->onRemoteTotalTrackNumberAttributeChanged();
}

bool PlaybackControlStubDefault::RemoteEventHandler::onRemoteSetTotalTrackNumberAttribute(uint32_t _value) {
    assert(defaultStub_ !=NULL);
    return defaultStub_->trySetTotalTrackNumberAttribute(std::move(_value));
}

bool PlaybackControlStubDefault::RemoteEventHandler::onRemoteSetTotalTrackNumberAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, uint32_t _value) {
    (void)_client;
    return onRemoteSetTotalTrackNumberAttribute(_value);
}

const bool& PlaybackControlStubDefault::getVideoVisibleAttribute() {
    return videoVisibleAttributeValue_;
}

const bool& PlaybackControlStubDefault::getVideoVisibleAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) {
    (void)_client;
    return getVideoVisibleAttribute();
}

void PlaybackControlStubDefault::setVideoVisibleAttribute(bool _value) {
    const bool valueChanged = trySetVideoVisibleAttribute(std::move(_value));
    if (valueChanged) {
        fireVideoVisibleAttributeChanged(videoVisibleAttributeValue_);
    }
}

bool PlaybackControlStubDefault::trySetVideoVisibleAttribute(bool _value) {
    if (!validateVideoVisibleAttributeRequestedValue(_value))
        return false;

    const bool valueChanged = (videoVisibleAttributeValue_ != _value);
    videoVisibleAttributeValue_ = std::move(_value);
    return valueChanged;
}

bool PlaybackControlStubDefault::validateVideoVisibleAttributeRequestedValue(const bool &_value) {
    (void)_value;
    return true;
}

void PlaybackControlStubDefault::setVideoVisibleAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, bool _value) {
    (void)_client;
    setVideoVisibleAttribute(_value);
}

void PlaybackControlStubDefault::onRemoteVideoVisibleAttributeChanged() {
    // No operation in default
}

void PlaybackControlStubDefault::RemoteEventHandler::onRemoteVideoVisibleAttributeChanged() {
    assert(defaultStub_ !=NULL);
    defaultStub_->onRemoteVideoVisibleAttributeChanged();
}

bool PlaybackControlStubDefault::RemoteEventHandler::onRemoteSetVideoVisibleAttribute(bool _value) {
    assert(defaultStub_ !=NULL);
    return defaultStub_->trySetVideoVisibleAttribute(std::move(_value));
}

bool PlaybackControlStubDefault::RemoteEventHandler::onRemoteSetVideoVisibleAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, bool _value) {
    (void)_client;
    return onRemoteSetVideoVisibleAttribute(_value);
}

const ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayStateInfo& PlaybackControlStubDefault::getPlayStateInfoAttribute() {
    return playStateInfoAttributeValue_;
}

const ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayStateInfo& PlaybackControlStubDefault::getPlayStateInfoAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) {
    (void)_client;
    return getPlayStateInfoAttribute();
}

void PlaybackControlStubDefault::setPlayStateInfoAttribute(::v1::com::ivis::MediaManager::MediaManagerTypes::PlayStateInfo _value) {
    const bool valueChanged = trySetPlayStateInfoAttribute(std::move(_value));
    if (valueChanged) {
        firePlayStateInfoAttributeChanged(playStateInfoAttributeValue_);
    }
}

bool PlaybackControlStubDefault::trySetPlayStateInfoAttribute(::v1::com::ivis::MediaManager::MediaManagerTypes::PlayStateInfo _value) {
    if (!validatePlayStateInfoAttributeRequestedValue(_value))
        return false;

    const bool valueChanged = (playStateInfoAttributeValue_ != _value);
    playStateInfoAttributeValue_ = std::move(_value);
    return valueChanged;
}

bool PlaybackControlStubDefault::validatePlayStateInfoAttributeRequestedValue(const ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayStateInfo &_value) {
    (void)_value;
    return true;
}

void PlaybackControlStubDefault::setPlayStateInfoAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayStateInfo _value) {
    (void)_client;
    setPlayStateInfoAttribute(_value);
}

void PlaybackControlStubDefault::onRemotePlayStateInfoAttributeChanged() {
    // No operation in default
}

void PlaybackControlStubDefault::RemoteEventHandler::onRemotePlayStateInfoAttributeChanged() {
    assert(defaultStub_ !=NULL);
    defaultStub_->onRemotePlayStateInfoAttributeChanged();
}

bool PlaybackControlStubDefault::RemoteEventHandler::onRemoteSetPlayStateInfoAttribute(::v1::com::ivis::MediaManager::MediaManagerTypes::PlayStateInfo _value) {
    assert(defaultStub_ !=NULL);
    return defaultStub_->trySetPlayStateInfoAttribute(std::move(_value));
}

bool PlaybackControlStubDefault::RemoteEventHandler::onRemoteSetPlayStateInfoAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayStateInfo _value) {
    (void)_client;
    return onRemoteSetPlayStateInfoAttribute(_value);
}


void PlaybackControlStubDefault::requestAction(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::MediaManager::MediaManagerTypes::Action _action, uint64_t _value, requestActionReply_t _reply) {
    (void)_client;
    (void)_action;
    (void)_value;
    _reply();
}

void PlaybackControlStubDefault::requestPlay(const std::shared_ptr<CommonAPI::ClientId> _client, uint64_t _indexOfplaylist, requestPlayReply_t _reply) {
    (void)_client;
    (void)_indexOfplaylist;
    _reply();
}

void PlaybackControlStubDefault::requestPlayBrowsingSession(const std::shared_ptr<CommonAPI::ClientId> _client, uint64_t _browsingSessionId, uint64_t _uniqueId, requestPlayBrowsingSessionReply_t _reply) {
    (void)_client;
    (void)_browsingSessionId;
    (void)_uniqueId;
    _reply();
}

void PlaybackControlStubDefault::requestSetTimePosition(const std::shared_ptr<CommonAPI::ClientId> _client, uint32_t _time, requestSetTimePositionReply_t _reply) {
    (void)_client;
    (void)_time;
    _reply();
}

void PlaybackControlStubDefault::requestGetPlaylist(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::MediaManager::MediaManagerTypes::ResultTypeList _resultTypes, uint32_t _startIndex, int32_t _amount, requestGetPlaylistReply_t _reply) {
    (void)_client;
    (void)_resultTypes;
    (void)_startIndex;
    (void)_amount;
    _reply();
}

void PlaybackControlStubDefault::requestSetRepeatMode(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::MediaManager::MediaManagerTypes::RepeatMode _mode, requestSetRepeatModeReply_t _reply) {
    (void)_client;
    (void)_mode;
    _reply();
}

void PlaybackControlStubDefault::requestSetPlayMode(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayMode _mode, requestSetPlayModeReply_t _reply) {
    (void)_client;
    (void)_mode;
    _reply();
}


void PlaybackControlStubDefault::fireNotifiyTimePositionInfoChangedEvent(const ::v1::com::ivis::MediaManager::MediaManagerTypes::TimePositionInfo &_timePositionInfo) {
    PlaybackControlStub::fireNotifiyTimePositionInfoChangedEvent(_timePositionInfo);
}
void PlaybackControlStubDefault::fireResponseGetPlaylistEvent(const uint32_t &_startIndex, const int32_t &_amount, const ::v1::com::ivis::MediaManager::MediaManagerTypes::Playlist &_playlist) {
    PlaybackControlStub::fireResponseGetPlaylistEvent(_startIndex, _amount, _playlist);
}
void PlaybackControlStubDefault::fireNotifyPlaylistChangedEvent() {
    PlaybackControlStub::fireNotifyPlaylistChangedEvent();
}
void PlaybackControlStubDefault::fireNotifyPlaybackErrorEvent(const ::v1::com::ivis::MediaManager::MediaManagerTypes::PlaybackError &_errType) {
    if (!_errType.validate()) {
        return;
    }
    PlaybackControlStub::fireNotifyPlaybackErrorEvent(_errType);
}


PlaybackControlStubDefault::RemoteEventHandler::RemoteEventHandler(PlaybackControlStubDefault *_defaultStub)
    : 
      defaultStub_(_defaultStub) {
}

} // namespace MediaManager
} // namespace ivis
} // namespace com
} // namespace v1
