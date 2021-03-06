/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.10.v201611111521.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_COM_IVIS_CLUSTERDATA_Cluster_Data_STUB_HPP_
#define V1_COM_IVIS_CLUSTERDATA_Cluster_Data_STUB_HPP_

#include <functional>
#include <sstream>




#include <v1/com/ivis/ClusterData/ClusterData.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif


#include <CommonAPI/Stub.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace com {
namespace ivis {
namespace ClusterData {

/**
 * Receives messages from remote and handles all dispatching of deserialized calls
 * to a stub for the service ClusterData. Also provides means to send broadcasts
 * and attribute-changed-notifications of observable attributes as defined by this service.
 * An application developer should not need to bother with this class.
 */
class ClusterDataStubAdapter
    : public virtual CommonAPI::StubAdapter,
      public virtual ClusterData {
 public:
    ///Notifies all remote listeners about a change of value of the attribute vehicleSpeed.
    virtual void fireVehicleSpeedAttributeChanged(const uint16_t& vehicleSpeed) = 0;
    ///Notifies all remote listeners about a change of value of the attribute engineSpeed.
    virtual void fireEngineSpeedAttributeChanged(const uint16_t& engineSpeed) = 0;
    ///Notifies all remote listeners about a change of value of the attribute fuelLevel.
    virtual void fireFuelLevelAttributeChanged(const uint8_t& fuelLevel) = 0;



    virtual void deactivateManagedInstances() = 0;
protected:
    /**
     * Defines properties for storing the ClientIds of clients / proxies that have
     * subscribed to the selective broadcasts
     */
};

/**
 * Defines the necessary callbacks to handle remote set events related to the attributes
 * defined in the IDL description for ClusterData.
 * For each attribute two callbacks are defined:
 * - a verification callback that allows to verify the requested value and to prevent setting
 *   e.g. an invalid value ("onRemoteSet<AttributeName>").
 * - an action callback to do local work after the attribute value has been changed
 *   ("onRemote<AttributeName>Changed").
 *
 * This class and the one below are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class ClusterDataStubRemoteEvent
{
public:
    virtual ~ClusterDataStubRemoteEvent() { }

    /// Verification callback for remote set requests on the attribute vehicleSpeed
    virtual bool onRemoteSetVehicleSpeedAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, uint16_t _value) = 0;
    /// Action callback for remote set requests on the attribute vehicleSpeed
    virtual void onRemoteVehicleSpeedAttributeChanged() = 0;
    /// Verification callback for remote set requests on the attribute engineSpeed
    virtual bool onRemoteSetEngineSpeedAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, uint16_t _value) = 0;
    /// Action callback for remote set requests on the attribute engineSpeed
    virtual void onRemoteEngineSpeedAttributeChanged() = 0;
    /// Verification callback for remote set requests on the attribute fuelLevel
    virtual bool onRemoteSetFuelLevelAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, uint8_t _value) = 0;
    /// Action callback for remote set requests on the attribute fuelLevel
    virtual void onRemoteFuelLevelAttributeChanged() = 0;
};

/**
 * Defines the interface that must be implemented by any class that should provide
 * the service ClusterData to remote clients.
 * This class and the one above are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class ClusterDataStub
    : public virtual CommonAPI::Stub<ClusterDataStubAdapter, ClusterDataStubRemoteEvent>
{
public:

    virtual ~ClusterDataStub() {}
    virtual const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> clientId) = 0;

    /**
     * description: current vehicle speed. unit is km/h
     */
    /// Provides getter access to the attribute vehicleSpeed
    virtual const uint16_t &getVehicleSpeedAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) = 0;
    /// sets attribute with the given value and propagates it to the adapter
    virtual void fireVehicleSpeedAttributeChanged(uint16_t _value) {
    auto stubAdapter = CommonAPI::Stub<ClusterDataStubAdapter, ClusterDataStubRemoteEvent>::stubAdapter_.lock();
    if (stubAdapter)
        stubAdapter->fireVehicleSpeedAttributeChanged(_value);
    }
    /**
     * description: current engine speed. unit is RPM
     */
    /// Provides getter access to the attribute engineSpeed
    virtual const uint16_t &getEngineSpeedAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) = 0;
    /// sets attribute with the given value and propagates it to the adapter
    virtual void fireEngineSpeedAttributeChanged(uint16_t _value) {
    auto stubAdapter = CommonAPI::Stub<ClusterDataStubAdapter, ClusterDataStubRemoteEvent>::stubAdapter_.lock();
    if (stubAdapter)
        stubAdapter->fireEngineSpeedAttributeChanged(_value);
    }
    /**
     * description: current fuel level. unit is %
     */
    /// Provides getter access to the attribute fuelLevel
    virtual const uint8_t &getFuelLevelAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) = 0;
    /// sets attribute with the given value and propagates it to the adapter
    virtual void fireFuelLevelAttributeChanged(uint8_t _value) {
    auto stubAdapter = CommonAPI::Stub<ClusterDataStubAdapter, ClusterDataStubRemoteEvent>::stubAdapter_.lock();
    if (stubAdapter)
        stubAdapter->fireFuelLevelAttributeChanged(_value);
    }


    
    using CommonAPI::Stub<ClusterDataStubAdapter, ClusterDataStubRemoteEvent>::initStubAdapter;
    typedef CommonAPI::Stub<ClusterDataStubAdapter, ClusterDataStubRemoteEvent>::StubAdapterType StubAdapterType;
    typedef CommonAPI::Stub<ClusterDataStubAdapter, ClusterDataStubRemoteEvent>::RemoteEventHandlerType RemoteEventHandlerType;
    typedef ClusterDataStubRemoteEvent RemoteEventType;
    typedef ClusterData StubInterface;
};

} // namespace ClusterData
} // namespace ivis
} // namespace com
} // namespace v1


// Compatibility
namespace v1_0 = v1;

#endif // V1_COM_IVIS_CLUSTERDATA_Cluster_Data_STUB_HPP_
