/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.10.v201611111523.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_COM_IVIS_DATCMANAGER_DATC_Manager_DBUS_PROXY_HPP_
#define V1_COM_IVIS_DATCMANAGER_DATC_Manager_DBUS_PROXY_HPP_

#include <v1/com/ivis/DATCManager/DATCManagerProxyBase.hpp>
#include "v1/com/ivis/DATCManager/DATCManagerDBusDeployment.hpp"

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/DBus/DBusAddress.hpp>
#include <CommonAPI/DBus/DBusFactory.hpp>
#include <CommonAPI/DBus/DBusProxy.hpp>
#include <CommonAPI/DBus/DBusAddressTranslator.hpp>
#include <CommonAPI/DBus/DBusAttribute.hpp>
#include <CommonAPI/DBus/DBusEvent.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

#include <string>

#  if _MSC_VER >= 1300
/*
 * Diamond inheritance is used for the CommonAPI::Proxy base class.
 * The Microsoft compiler put warning (C4250) using a desired c++ feature: "Delegating to a sister class"
 * A powerful technique that arises from using virtual inheritance is to delegate a method from a class in another class
 * by using a common abstract base class. This is also called cross delegation.
 */
#    pragma warning( disable : 4250 )
#  endif

namespace v1 {
namespace com {
namespace ivis {
namespace DATCManager {

class DATCManagerDBusProxy
    : virtual public DATCManagerProxyBase,
      virtual public CommonAPI::DBus::DBusProxy {
public:
    DATCManagerDBusProxy(
        const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection);

    virtual ~DATCManagerDBusProxy() { }

    virtual TemperatureModeAttribute& getTemperatureModeAttribute();
    virtual DualModeAttribute& getDualModeAttribute();
    virtual AutoModeAttribute& getAutoModeAttribute();
    virtual AirConditionerRunAttribute& getAirConditionerRunAttribute();
    virtual HeaterRunAttribute& getHeaterRunAttribute();
    virtual InteriorTemperautreAttribute& getInteriorTemperautreAttribute();
    virtual ExteriorTemperatureAttribute& getExteriorTemperatureAttribute();
    virtual TargetTemperaturesAttribute& getTargetTemperaturesAttribute();
    virtual FanDirectionsAttribute& getFanDirectionsAttribute();
    virtual FanSpeedsAttribute& getFanSpeedsAttribute();
    virtual DefrostsAttribute& getDefrostsAttribute();
    virtual AirRecirculationAttribute& getAirRecirculationAttribute();
    virtual SteeringWheelHeaterAttribute& getSteeringWheelHeaterAttribute();
    virtual SeatHeatersAttribute& getSeatHeatersAttribute();
    virtual SeatCoolersAttribute& getSeatCoolersAttribute();

    virtual ResponseGetSupportedTemperatureRangeEvent& getResponseGetSupportedTemperatureRangeEvent();
    virtual ResponseSetTargetTemperatureEvent& getResponseSetTargetTemperatureEvent();
    virtual ResponseGetSupportedFanDirectionEvent& getResponseGetSupportedFanDirectionEvent();
    virtual ResponseSetFanDirectionEvent& getResponseSetFanDirectionEvent();
    virtual ResponseGetSupportedFanSpeedRangeEvent& getResponseGetSupportedFanSpeedRangeEvent();
    virtual ResponseSetFanSpeedEvent& getResponseSetFanSpeedEvent();
    virtual ResponseGetSupportedDefrostTargetEvent& getResponseGetSupportedDefrostTargetEvent();
    virtual ResponseSetAirRecirculationEvent& getResponseSetAirRecirculationEvent();
    virtual ResponseGetSteeringWheelHeaterSupportedEvent& getResponseGetSteeringWheelHeaterSupportedEvent();
    virtual ResponseSetSteeringWheelHeaterEvent& getResponseSetSteeringWheelHeaterEvent();
    virtual ResponseGetSeatHeaterSupportedEvent& getResponseGetSeatHeaterSupportedEvent();
    virtual ResponseSetSeatHeaterEvent& getResponseSetSeatHeaterEvent();
    virtual ResponseGetSeatCoolerSupportedEvent& getResponseGetSeatCoolerSupportedEvent();
    virtual ResponseSetSeatCoolerEvent& getResponseSetSeatCoolerEvent();

    virtual void requestGetSupportedTemperatureRange(CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> requestGetSupportedTemperatureRangeAsync(RequestGetSupportedTemperatureRangeAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    virtual void requestSetTargetTemperature(const ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType &_areaType, const double &_temperature, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> requestSetTargetTemperatureAsync(const ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType &_areaType, const double &_temperature, RequestSetTargetTemperatureAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    virtual void requestSetTargetTemperatureByDelta(const ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType &_areaType, const double &_temperatureDelta, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> requestSetTargetTemperatureByDeltaAsync(const ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType &_areaType, const double &_temperatureDelta, RequestSetTargetTemperatureByDeltaAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    virtual void requestGetSupportedFanDirection(CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> requestGetSupportedFanDirectionAsync(RequestGetSupportedFanDirectionAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    virtual void requestGetSupportedFanSpeedRange(CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> requestGetSupportedFanSpeedRangeAsync(RequestGetSupportedFanSpeedRangeAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    virtual void requestSetFanSpeed(const ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType &_areaType, const uint16_t &_fanSpeed, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> requestSetFanSpeedAsync(const ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType &_areaType, const uint16_t &_fanSpeed, RequestSetFanSpeedAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    virtual void requestSetFanSpeedByDelta(const ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType &_areaType, const uint16_t &_fanSpeedDelta, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> requestSetFanSpeedByDeltaAsync(const ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType &_areaType, const uint16_t &_fanSpeedDelta, RequestSetFanSpeedByDeltaAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    virtual void requestGetSupportedDefrostTarget(CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> requestGetSupportedDefrostTargetAsync(RequestGetSupportedDefrostTargetAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    virtual void requestGetSteeringWheelHeaterSupported(CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> requestGetSteeringWheelHeaterSupportedAsync(RequestGetSteeringWheelHeaterSupportedAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    virtual void requestGetSeatHeaterSupported(CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> requestGetSeatHeaterSupportedAsync(RequestGetSeatHeaterSupportedAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    virtual void requestGetSeatCoolerSupported(CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> requestGetSeatCoolerSupportedAsync(RequestGetSeatCoolerSupportedAsyncCallback _callback, const CommonAPI::CallInfo *_info);


    virtual void getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const;

private:

    class DBustemperatureMode_Attribute : public CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusAttribute<TemperatureModeAttribute>> {
    public:
    template <typename... _A>
        DBustemperatureMode_Attribute(DBusProxy &_proxy,
            _A ... arguments)
            : CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusAttribute<TemperatureModeAttribute>>(
                _proxy, arguments...) {}
    void setValue(const ::v1::com::ivis::DATCManager::DATCManagerTypes::ETemperatureMode& requestValue,
        CommonAPI::CallStatus& callStatus,
        ::v1::com::ivis::DATCManager::DATCManagerTypes::ETemperatureMode& responseValue,
        const CommonAPI::CallInfo *_info = nullptr) {
            // validate input parameters
            if (!requestValue.validate()) {
                callStatus = CommonAPI::CallStatus::INVALID_VALUE;
                return;
            }
            // call parent function if ok
            CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusAttribute<TemperatureModeAttribute>>::setValue(requestValue, callStatus, responseValue, _info);
        }
    std::future<CommonAPI::CallStatus> setValueAsync(const ::v1::com::ivis::DATCManager::DATCManagerTypes::ETemperatureMode& requestValue,
        std::function<void(const CommonAPI::CallStatus &, ::v1::com::ivis::DATCManager::DATCManagerTypes::ETemperatureMode)> _callback,
        const CommonAPI::CallInfo *_info) {
            // validate input parameters
            if (!requestValue.validate()) {
                ::v1::com::ivis::DATCManager::DATCManagerTypes::ETemperatureMode _returnvalue;
                _callback(CommonAPI::CallStatus::INVALID_VALUE, _returnvalue);
                std::promise<CommonAPI::CallStatus> promise;
                promise.set_value(CommonAPI::CallStatus::INVALID_VALUE);
                return promise.get_future();
            }
            // call parent function if ok
            return CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusAttribute<TemperatureModeAttribute>>::setValueAsync(requestValue, _callback, _info);
        }
    };
    DBustemperatureMode_Attribute temperatureMode_;
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusAttribute<DualModeAttribute>> dualMode_;
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusAttribute<AutoModeAttribute>> autoMode_;
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusAttribute<AirConditionerRunAttribute>> airConditionerRun_;
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusAttribute<HeaterRunAttribute>> heaterRun_;
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusReadonlyAttribute<InteriorTemperautreAttribute>> interiorTemperautre_;
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusReadonlyAttribute<ExteriorTemperatureAttribute>> exteriorTemperature_;
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusAttribute<TargetTemperaturesAttribute, ::v1::com::ivis::DATCManager::DATCManagerTypes_::TargetTemperaturesDeployment_t>> targetTemperatures_;
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusAttribute<FanDirectionsAttribute, ::v1::com::ivis::DATCManager::DATCManagerTypes_::FanDirectionsDeployment_t>> fanDirections_;
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusAttribute<FanSpeedsAttribute, ::v1::com::ivis::DATCManager::DATCManagerTypes_::FanSpeedsDeployment_t>> fanSpeeds_;
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusAttribute<DefrostsAttribute, ::v1::com::ivis::DATCManager::DATCManagerTypes_::DefrostsDeployment_t>> defrosts_;
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusAttribute<AirRecirculationAttribute>> airRecirculation_;
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusAttribute<SteeringWheelHeaterAttribute>> steeringWheelHeater_;
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusAttribute<SeatHeatersAttribute, ::v1::com::ivis::DATCManager::DATCManagerTypes_::SeatHeatersDeployment_t>> seatHeaters_;
    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusAttribute<SeatCoolersAttribute, ::v1::com::ivis::DATCManager::DATCManagerTypes_::SeatCoolersDeployment_t>> seatCoolers_;

    CommonAPI::DBus::DBusEvent<ResponseGetSupportedTemperatureRangeEvent, CommonAPI::Deployable< ::v1::com::ivis::DATCManager::DATCManagerTypes::TemperatureRange, ::v1::com::ivis::DATCManager::DATCManagerTypes_::TemperatureRangeDeployment_t >> responseGetSupportedTemperatureRange_;
    CommonAPI::DBus::DBusEvent<ResponseSetTargetTemperatureEvent, CommonAPI::Deployable< ::v1::com::ivis::DATCManager::DATCManagerTypes::EDatcControlResult, CommonAPI::EmptyDeployment >, CommonAPI::Deployable< ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType, CommonAPI::EmptyDeployment >, CommonAPI::Deployable< double, CommonAPI::EmptyDeployment >> responseSetTargetTemperature_;
    CommonAPI::DBus::DBusEvent<ResponseGetSupportedFanDirectionEvent, CommonAPI::Deployable< ::v1::com::ivis::DATCManager::DATCManagerTypes::SupportedFanDirectionList, ::v1::com::ivis::DATCManager::DATCManagerTypes_::SupportedFanDirectionListDeployment_t >> responseGetSupportedFanDirection_;
    CommonAPI::DBus::DBusEvent<ResponseSetFanDirectionEvent, CommonAPI::Deployable< ::v1::com::ivis::DATCManager::DATCManagerTypes::EDatcControlResult, CommonAPI::EmptyDeployment >, CommonAPI::Deployable< ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType, CommonAPI::EmptyDeployment >, CommonAPI::Deployable< ::v1::com::ivis::DATCManager::DATCManagerTypes::EHvacFanDirection, CommonAPI::EmptyDeployment >> responseSetFanDirection_;
    CommonAPI::DBus::DBusEvent<ResponseGetSupportedFanSpeedRangeEvent, CommonAPI::Deployable< ::v1::com::ivis::DATCManager::DATCManagerTypes::FanSpeedRange, ::v1::com::ivis::DATCManager::DATCManagerTypes_::FanSpeedRangeDeployment_t >> responseGetSupportedFanSpeedRange_;
    CommonAPI::DBus::DBusEvent<ResponseSetFanSpeedEvent, CommonAPI::Deployable< ::v1::com::ivis::DATCManager::DATCManagerTypes::EDatcControlResult, CommonAPI::EmptyDeployment >, CommonAPI::Deployable< ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType, CommonAPI::EmptyDeployment >, CommonAPI::Deployable< uint16_t, CommonAPI::EmptyDeployment >> responseSetFanSpeed_;
    CommonAPI::DBus::DBusEvent<ResponseGetSupportedDefrostTargetEvent, CommonAPI::Deployable< ::v1::com::ivis::DATCManager::DATCManagerTypes::SupportedDefrostTargetList, ::v1::com::ivis::DATCManager::DATCManagerTypes_::SupportedDefrostTargetListDeployment_t >> responseGetSupportedDefrostTarget_;
    CommonAPI::DBus::DBusEvent<ResponseSetAirRecirculationEvent, CommonAPI::Deployable< ::v1::com::ivis::DATCManager::DATCManagerTypes::EDatcControlResult, CommonAPI::EmptyDeployment >, CommonAPI::Deployable< bool, CommonAPI::EmptyDeployment >> responseSetAirRecirculation_;
    CommonAPI::DBus::DBusEvent<ResponseGetSteeringWheelHeaterSupportedEvent, CommonAPI::Deployable< bool, CommonAPI::EmptyDeployment >> responseGetSteeringWheelHeaterSupported_;
    CommonAPI::DBus::DBusEvent<ResponseSetSteeringWheelHeaterEvent, CommonAPI::Deployable< ::v1::com::ivis::DATCManager::DATCManagerTypes::EDatcControlResult, CommonAPI::EmptyDeployment >, CommonAPI::Deployable< bool, CommonAPI::EmptyDeployment >> responseSetSteeringWheelHeater_;
    CommonAPI::DBus::DBusEvent<ResponseGetSeatHeaterSupportedEvent, CommonAPI::Deployable< bool, CommonAPI::EmptyDeployment >> responseGetSeatHeaterSupported_;
    CommonAPI::DBus::DBusEvent<ResponseSetSeatHeaterEvent, CommonAPI::Deployable< ::v1::com::ivis::DATCManager::DATCManagerTypes::EDatcControlResult, CommonAPI::EmptyDeployment >, CommonAPI::Deployable< ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType, CommonAPI::EmptyDeployment >, CommonAPI::Deployable< bool, CommonAPI::EmptyDeployment >> responseSetSeatHeater_;
    CommonAPI::DBus::DBusEvent<ResponseGetSeatCoolerSupportedEvent, CommonAPI::Deployable< bool, CommonAPI::EmptyDeployment >> responseGetSeatCoolerSupported_;
    CommonAPI::DBus::DBusEvent<ResponseSetSeatCoolerEvent, CommonAPI::Deployable< ::v1::com::ivis::DATCManager::DATCManagerTypes::EDatcControlResult, CommonAPI::EmptyDeployment >, CommonAPI::Deployable< ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType, CommonAPI::EmptyDeployment >, CommonAPI::Deployable< bool, CommonAPI::EmptyDeployment >> responseSetSeatCooler_;

};

} // namespace DATCManager
} // namespace ivis
} // namespace com
} // namespace v1

#endif // V1_COM_IVIS_DATCMANAGER_DATC_Manager_DBUS_PROXY_HPP_

