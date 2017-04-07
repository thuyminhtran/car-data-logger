/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.10.v201611111521.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_COM_IVIS_CDL_Client_API_Remote_PROXY_BASE_HPP_
#define V1_COM_IVIS_CDL_Client_API_Remote_PROXY_BASE_HPP_

#include <v1/com/ivis/CDL/ClientAPIRemote.hpp>


#include <v1/com/ivis/CDL/ClientAPIRemoteTypes.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/Variant.hpp>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include <CommonAPI/Event.hpp>
#include <CommonAPI/Proxy.hpp>
#include <functional>
#include <future>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace com {
namespace ivis {
namespace CDL {

class ClientAPIRemoteProxyBase
    : virtual public CommonAPI::Proxy {
public:
    typedef CommonAPI::Event<
        std::string, std::string, std::string, ::v1::com::ivis::CDL::ClientAPIRemoteTypes::CDLData
    > NotifyDataEvent;

    typedef std::function<void(const CommonAPI::CallStatus&)> StoreDataAsyncCallback;


    virtual NotifyDataEvent& getNotifyDataEvent() = 0;

    virtual void storeData(const std::string &_domain, const std::string &_subDomain, const std::string &_id, const ClientAPIRemoteTypes::CDLData &_data, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> storeDataAsync(const std::string &_domain, const std::string &_subDomain, const std::string &_id, const ClientAPIRemoteTypes::CDLData &_data, StoreDataAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
};

} // namespace CDL
} // namespace ivis
} // namespace com
} // namespace v1


// Compatibility
namespace v1_0 = v1;

#endif // V1_COM_IVIS_CDL_Client_API_Remote_PROXY_BASE_HPP_
