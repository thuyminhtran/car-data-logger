/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.10.v201611111521.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_COM_IVIS_VEHICLEDATAMANAGER_VEHICLE_DATA_MANAGER_HPP_
#define V1_COM_IVIS_VEHICLEDATAMANAGER_VEHICLE_DATA_MANAGER_HPP_




#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/Types.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace com {
namespace ivis {
namespace VehicleDataManager {

class VehicleDataManager {
public:
    virtual ~VehicleDataManager() { }

    static inline const char* getInterface();
    static inline CommonAPI::Version getInterfaceVersion();
};

const char* VehicleDataManager::getInterface() {
    return ("com.ivis.VehicleDataManager.VehicleDataManager:v1_1");
}

CommonAPI::Version VehicleDataManager::getInterfaceVersion() {
    return CommonAPI::Version(1, 1);
}


} // namespace VehicleDataManager
} // namespace ivis
} // namespace com
} // namespace v1

namespace CommonAPI {
}


// Compatibility
namespace v1_1 = v1;

#endif // V1_COM_IVIS_VEHICLEDATAMANAGER_VEHICLE_DATA_MANAGER_HPP_
