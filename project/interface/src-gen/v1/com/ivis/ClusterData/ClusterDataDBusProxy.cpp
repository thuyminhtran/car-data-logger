/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.10.v201611111523.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <v1/com/ivis/ClusterData/ClusterDataDBusProxy.hpp>

namespace v1 {
namespace com {
namespace ivis {
namespace ClusterData {

std::shared_ptr<CommonAPI::DBus::DBusProxy> createClusterDataDBusProxy(
    const CommonAPI::DBus::DBusAddress &_address,
    const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection) {
    return std::make_shared< ClusterDataDBusProxy>(_address, _connection);
}

void initializeClusterDataDBusProxy() {
     CommonAPI::DBus::Factory::get()->registerProxyCreateMethod(
        ClusterData::getInterface(),
        &createClusterDataDBusProxy);
}

INITIALIZER(registerClusterDataDBusProxy) {
    CommonAPI::DBus::Factory::get()->registerInterface(initializeClusterDataDBusProxy);
}

ClusterDataDBusProxy::ClusterDataDBusProxy(
    const CommonAPI::DBus::DBusAddress &_address,
    const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection)
    :   CommonAPI::DBus::DBusProxy(_address, _connection)
,        vehicleSpeed_(*this, "onVehicleSpeedAttributeChanged", "setVehicleSpeedAttribute", "q", "getVehicleSpeedAttribute", static_cast< CommonAPI::EmptyDeployment* >(nullptr)),
        engineSpeed_(*this, "onEngineSpeedAttributeChanged", "setEngineSpeedAttribute", "q", "getEngineSpeedAttribute", static_cast< CommonAPI::EmptyDeployment* >(nullptr)),
        fuelLevel_(*this, "onFuelLevelAttributeChanged", "setFuelLevelAttribute", "y", "getFuelLevelAttribute", static_cast< CommonAPI::EmptyDeployment* >(nullptr))
{
}

      ClusterDataDBusProxy::VehicleSpeedAttribute& ClusterDataDBusProxy::getVehicleSpeedAttribute() {
          return vehicleSpeed_;
      }
      ClusterDataDBusProxy::EngineSpeedAttribute& ClusterDataDBusProxy::getEngineSpeedAttribute() {
          return engineSpeed_;
      }
      ClusterDataDBusProxy::FuelLevelAttribute& ClusterDataDBusProxy::getFuelLevelAttribute() {
          return fuelLevel_;
      }




void ClusterDataDBusProxy::getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const {
          ownVersionMajor = 1;
          ownVersionMinor = 0;
      }

      } // namespace ClusterData
      } // namespace ivis
      } // namespace com
      } // namespace v1
