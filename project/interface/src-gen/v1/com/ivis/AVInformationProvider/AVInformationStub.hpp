/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.10.v201611111521.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_COM_IVIS_AVINFORMATIONPROVIDER_AV_Information_STUB_HPP_
#define V1_COM_IVIS_AVINFORMATIONPROVIDER_AV_Information_STUB_HPP_

#include <functional>
#include <sstream>



#include <v1/com/ivis/AVInformationProvider/AVInformationTypes.hpp>

#include <v1/com/ivis/AVInformationProvider/AVInformation.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/Deployment.hpp>
#include <CommonAPI/InputStream.hpp>
#include <CommonAPI/OutputStream.hpp>
#include <CommonAPI/Struct.hpp>
#include <cstdint>
#include <string>
#include <unordered_set>
#include <vector>

#include <CommonAPI/Stub.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace com {
namespace ivis {
namespace AVInformationProvider {

/**
 * Receives messages from remote and handles all dispatching of deserialized calls
 * to a stub for the service AVInformation. Also provides means to send broadcasts
 * and attribute-changed-notifications of observable attributes as defined by this service.
 * An application developer should not need to bother with this class.
 */
class AVInformationStubAdapter
    : public virtual CommonAPI::StubAdapter,
      public virtual AVInformation {
 public:
    ///Notifies all remote listeners about a change of value of the attribute currentSource.
    virtual void fireCurrentSourceAttributeChanged(const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::Source& currentSource) = 0;
    ///Notifies all remote listeners about a change of value of the attribute metaData.
    virtual void fireMetaDataAttributeChanged(const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::MetaData& metaData) = 0;
    ///Notifies all remote listeners about a change of value of the attribute playPosition.
    virtual void firePlayPositionAttributeChanged(const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayPosition& playPosition) = 0;
    ///Notifies all remote listeners about a change of value of the attribute playStatus.
    virtual void firePlayStatusAttributeChanged(const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayStatus& playStatus) = 0;

    /**
    * Sends a broadcast event for notifyAlbumArt. Should not be called directly.
    * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
    */
    virtual void fireNotifyAlbumArtEvent(const uint32_t &_totalSegmentCount, const uint32_t &_currentIndex, const std::vector< uint8_t > &_imageData) = 0;


    virtual void deactivateManagedInstances() = 0;
protected:
    /**
     * Defines properties for storing the ClientIds of clients / proxies that have
     * subscribed to the selective broadcasts
     */
};

/**
 * Defines the necessary callbacks to handle remote set events related to the attributes
 * defined in the IDL description for AVInformation.
 * For each attribute two callbacks are defined:
 * - a verification callback that allows to verify the requested value and to prevent setting
 *   e.g. an invalid value ("onRemoteSet<AttributeName>").
 * - an action callback to do local work after the attribute value has been changed
 *   ("onRemote<AttributeName>Changed").
 *
 * This class and the one below are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class AVInformationStubRemoteEvent
{
public:
    virtual ~AVInformationStubRemoteEvent() { }

    /// Verification callback for remote set requests on the attribute currentSource
    virtual bool onRemoteSetCurrentSourceAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::AVInformationProvider::AVInformationTypes::Source _value) = 0;
    /// Action callback for remote set requests on the attribute currentSource
    virtual void onRemoteCurrentSourceAttributeChanged() = 0;
    /// Verification callback for remote set requests on the attribute metaData
    virtual bool onRemoteSetMetaDataAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::AVInformationProvider::AVInformationTypes::MetaData _value) = 0;
    /// Action callback for remote set requests on the attribute metaData
    virtual void onRemoteMetaDataAttributeChanged() = 0;
    /// Verification callback for remote set requests on the attribute playPosition
    virtual bool onRemoteSetPlayPositionAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayPosition _value) = 0;
    /// Action callback for remote set requests on the attribute playPosition
    virtual void onRemotePlayPositionAttributeChanged() = 0;
    /// Verification callback for remote set requests on the attribute playStatus
    virtual bool onRemoteSetPlayStatusAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayStatus _value) = 0;
    /// Action callback for remote set requests on the attribute playStatus
    virtual void onRemotePlayStatusAttributeChanged() = 0;
};

/**
 * Defines the interface that must be implemented by any class that should provide
 * the service AVInformation to remote clients.
 * This class and the one above are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class AVInformationStub
    : public virtual CommonAPI::Stub<AVInformationStubAdapter, AVInformationStubRemoteEvent>
{
public:
    typedef std::function<void ()>requestActionReply_t;

    virtual ~AVInformationStub() {}
    virtual const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> clientId) = 0;

    /// Provides getter access to the attribute currentSource
    virtual const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::Source &getCurrentSourceAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) = 0;
    /// sets attribute with the given value and propagates it to the adapter
    virtual void fireCurrentSourceAttributeChanged(::v1::com::ivis::AVInformationProvider::AVInformationTypes::Source _value) {
    auto stubAdapter = CommonAPI::Stub<AVInformationStubAdapter, AVInformationStubRemoteEvent>::stubAdapter_.lock();
    if (stubAdapter)
        stubAdapter->fireCurrentSourceAttributeChanged(_value);
    }
    /// Provides getter access to the attribute metaData
    virtual const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::MetaData &getMetaDataAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) = 0;
    /// sets attribute with the given value and propagates it to the adapter
    virtual void fireMetaDataAttributeChanged(::v1::com::ivis::AVInformationProvider::AVInformationTypes::MetaData _value) {
    auto stubAdapter = CommonAPI::Stub<AVInformationStubAdapter, AVInformationStubRemoteEvent>::stubAdapter_.lock();
    if (stubAdapter)
        stubAdapter->fireMetaDataAttributeChanged(_value);
    }
    /// Provides getter access to the attribute playPosition
    virtual const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayPosition &getPlayPositionAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) = 0;
    /// sets attribute with the given value and propagates it to the adapter
    virtual void firePlayPositionAttributeChanged(::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayPosition _value) {
    auto stubAdapter = CommonAPI::Stub<AVInformationStubAdapter, AVInformationStubRemoteEvent>::stubAdapter_.lock();
    if (stubAdapter)
        stubAdapter->firePlayPositionAttributeChanged(_value);
    }
    /// Provides getter access to the attribute playStatus
    virtual const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayStatus &getPlayStatusAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) = 0;
    /// sets attribute with the given value and propagates it to the adapter
    virtual void firePlayStatusAttributeChanged(::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayStatus _value) {
    auto stubAdapter = CommonAPI::Stub<AVInformationStubAdapter, AVInformationStubRemoteEvent>::stubAdapter_.lock();
    if (stubAdapter)
        stubAdapter->firePlayStatusAttributeChanged(_value);
    }

    /// This is the method that will be called on remote calls on the method requestAction.
    virtual void requestAction(const std::shared_ptr<CommonAPI::ClientId> _client, AVInformationTypes::Action _action, requestActionReply_t _reply) = 0;
    /// Sends a broadcast event for notifyAlbumArt.
    virtual void fireNotifyAlbumArtEvent(const uint32_t &_totalSegmentCount, const uint32_t &_currentIndex, const std::vector< uint8_t > &_imageData) {
        auto stubAdapter = CommonAPI::Stub<AVInformationStubAdapter, AVInformationStubRemoteEvent>::stubAdapter_.lock();
        if (stubAdapter)
            stubAdapter->fireNotifyAlbumArtEvent(_totalSegmentCount, _currentIndex, _imageData);
    }

    
    using CommonAPI::Stub<AVInformationStubAdapter, AVInformationStubRemoteEvent>::initStubAdapter;
    typedef CommonAPI::Stub<AVInformationStubAdapter, AVInformationStubRemoteEvent>::StubAdapterType StubAdapterType;
    typedef CommonAPI::Stub<AVInformationStubAdapter, AVInformationStubRemoteEvent>::RemoteEventHandlerType RemoteEventHandlerType;
    typedef AVInformationStubRemoteEvent RemoteEventType;
    typedef AVInformation StubInterface;
};

} // namespace AVInformationProvider
} // namespace ivis
} // namespace com
} // namespace v1


// Compatibility
namespace v1_0 = v1;

#endif // V1_COM_IVIS_AVINFORMATIONPROVIDER_AV_Information_STUB_HPP_
