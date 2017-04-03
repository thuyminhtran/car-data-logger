/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.v201601121430.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <v1/com/ivis/ModeManager/ModeManagerDBusProxy.hpp>

namespace v1 {
namespace com {
namespace ivis {
namespace ModeManager {

std::shared_ptr<CommonAPI::DBus::DBusProxy> createModeManagerDBusProxy(
	const CommonAPI::DBus::DBusAddress &_address,
	const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection) {
	return std::make_shared<ModeManagerDBusProxy>(_address, _connection);
}

INITIALIZER(registerModeManagerDBusProxy) {
     CommonAPI::DBus::Factory::get()->registerProxyCreateMethod(
		ModeManager::getInterface(),
		&createModeManagerDBusProxy);
}

ModeManagerDBusProxy::ModeManagerDBusProxy(
	const CommonAPI::DBus::DBusAddress &_address,
	const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection)
	:	CommonAPI::DBus::DBusProxy(_address, _connection)
,		activeApplication_(*this, "onActiveApplicationAttributeChanged", "setActiveApplicationAttribute", "(tiii)", "getActiveApplicationAttribute", static_cast<::v1::com::ivis::ModeManager::ModeManagerTypes_::ApplicationInfoDeployment_t*>(nullptr))
,		responseChangeApplication_(*this, "responseChangeApplication", "i(tiii)(tiii)i", std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<::v1::com::ivis::ModeManager::ModeManagerTypes_::ApplicationInfoDeployment_t*>(nullptr), static_cast<::v1::com::ivis::ModeManager::ModeManagerTypes_::ApplicationInfoDeployment_t*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr))),
		activeApplicationChanged_(*this, "activeApplicationChanged", "(tiii)i", std::make_tuple(static_cast<::v1::com::ivis::ModeManager::ModeManagerTypes_::ApplicationInfoDeployment_t*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr)))
{
}

      ModeManagerDBusProxy::ActiveApplicationAttribute& ModeManagerDBusProxy::getActiveApplicationAttribute() {
          return activeApplication_;
      }

ModeManagerDBusProxy::ResponseChangeApplicationEvent& ModeManagerDBusProxy::getResponseChangeApplicationEvent() {
    return responseChangeApplication_;
}
ModeManagerDBusProxy::ActiveApplicationChangedEvent& ModeManagerDBusProxy::getActiveApplicationChangedEvent() {
    return activeApplicationChanged_;
}
    
    void ModeManagerDBusProxy::requestChangeApplication(const ::v1::com::ivis::ModeManager::ModeManagerTypes::ApplicationType &_app, const ::v1::com::ivis::ModeManager::ModeManagerTypes::SubApplicationType &_subApp, const ::v1::com::ivis::ModeManager::ModeManagerTypes::AppChangeRequester &_requester, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v1::com::ivis::ModeManager::ModeManagerTypes::ApplicationType, CommonAPI::EmptyDeployment> deploy_app(_app, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<::v1::com::ivis::ModeManager::ModeManagerTypes::SubApplicationType, CommonAPI::EmptyDeployment> deploy_subApp(_subApp, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<::v1::com::ivis::ModeManager::ModeManagerTypes::AppChangeRequester, CommonAPI::EmptyDeployment> deploy_requester(_requester, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v1::com::ivis::ModeManager::ModeManagerTypes::ApplicationType, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable<::v1::com::ivis::ModeManager::ModeManagerTypes::SubApplicationType, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable<::v1::com::ivis::ModeManager::ModeManagerTypes::AppChangeRequester, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
        	>::callMethodWithReply(
        *this,
        "requestChangeApplication",
        "iii",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_app, deploy_subApp, deploy_requester,
_internalCallStatus);
}
    std::future<CommonAPI::CallStatus> ModeManagerDBusProxy::requestChangeApplicationAsync(const ::v1::com::ivis::ModeManager::ModeManagerTypes::ApplicationType &_app, const ::v1::com::ivis::ModeManager::ModeManagerTypes::SubApplicationType &_subApp, const ::v1::com::ivis::ModeManager::ModeManagerTypes::AppChangeRequester &_requester, RequestChangeApplicationAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v1::com::ivis::ModeManager::ModeManagerTypes::ApplicationType, CommonAPI::EmptyDeployment> deploy_app(_app, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<::v1::com::ivis::ModeManager::ModeManagerTypes::SubApplicationType, CommonAPI::EmptyDeployment> deploy_subApp(_subApp, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<::v1::com::ivis::ModeManager::ModeManagerTypes::AppChangeRequester, CommonAPI::EmptyDeployment> deploy_requester(_requester, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v1::com::ivis::ModeManager::ModeManagerTypes::ApplicationType, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable<::v1::com::ivis::ModeManager::ModeManagerTypes::SubApplicationType, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable<::v1::com::ivis::ModeManager::ModeManagerTypes::AppChangeRequester, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
        	>::callMethodAsync(
        *this,
        "requestChangeApplication",
        "iii",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_app, deploy_subApp, deploy_requester,
        [_callback] (CommonAPI::CallStatus _internalCallStatus) {
        	if (_callback)
        		_callback(_internalCallStatus);
        },
        std::make_tuple());
    }


void ModeManagerDBusProxy::getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const {
          ownVersionMajor = 1;
          ownVersionMinor = 0;
      }

      } // namespace ModeManager
      } // namespace ivis
      } // namespace com
      } // namespace v1