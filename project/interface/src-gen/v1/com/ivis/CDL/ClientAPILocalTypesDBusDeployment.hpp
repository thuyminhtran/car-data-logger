/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.10.v201611111523.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/

#ifndef V1_COM_IVIS_CDL_CLIENT_API_LOCAL_TYPES_DBUS_DEPLOYMENT_HPP_
#define V1_COM_IVIS_CDL_CLIENT_API_LOCAL_TYPES_DBUS_DEPLOYMENT_HPP_

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif
#include <CommonAPI/DBus/DBusDeployment.hpp>
#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace com {
namespace ivis {
namespace CDL {
namespace ClientAPILocalTypes_ {

// typecollection-specific deployment types
typedef CommonAPI::DBus::VariantDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::DBus::StringDeployment
> CDLDataDeployment_t;


// typecollection-specific deployments

} // namespace ClientAPILocalTypes_
} // namespace CDL
} // namespace ivis
} // namespace com
} // namespace v1

#endif // V1_COM_IVIS_CDL_CLIENT_API_LOCAL_TYPES_DBUS_DEPLOYMENT_HPP_
