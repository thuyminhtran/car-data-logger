/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.someip 3.1.10.v201610310807.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_COM_IVIS_CDL_CLIENT_API_REMOTE_SOMEIP_STUB_ADAPTER_HPP_
#define V1_COM_IVIS_CDL_CLIENT_API_REMOTE_SOMEIP_STUB_ADAPTER_HPP_

#include <v1/com/ivis/CDL/ClientAPIRemoteStub.hpp>
#include <v1/com/ivis/CDL/ClientAPIRemoteSomeIPDeployment.hpp>
#include <v1/com/ivis/CDL/ClientAPIRemoteTypesSomeIPDeployment.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/SomeIP/AddressTranslator.hpp>
#include <CommonAPI/SomeIP/StubAdapterHelper.hpp>
#include <CommonAPI/SomeIP/StubAdapter.hpp>
#include <CommonAPI/SomeIP/Factory.hpp>
#include <CommonAPI/SomeIP/Types.hpp>
#include <CommonAPI/SomeIP/Config.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace com {
namespace ivis {
namespace CDL {

template <typename _Stub = ::v1::com::ivis::CDL::ClientAPIRemoteStub, typename... _Stubs>
class ClientAPIRemoteSomeIPStubAdapterInternal
    : public virtual ClientAPIRemoteStubAdapter,
      public CommonAPI::SomeIP::StubAdapterHelper< _Stub, _Stubs...>
{
public:
    typedef CommonAPI::SomeIP::StubAdapterHelper< _Stub, _Stubs...> ClientAPIRemoteSomeIPStubAdapterHelper;

    ~ClientAPIRemoteSomeIPStubAdapterInternal() {
        deactivateManagedInstances();
        ClientAPIRemoteSomeIPStubAdapterHelper::deinit();
    }

    void fireNotifyDataEvent(const std::string& domain, const std::string& subDomain, const std::string& id, const ::v1::com::ivis::CDL::ClientAPIRemoteTypes::CDLData& data);

    void deactivateManagedInstances() {
    }

    static CommonAPI::SomeIP::GetAttributeStubDispatcher<
        ::v1::com::ivis::CDL::ClientAPIRemoteStub,
        CommonAPI::Version
    > getClientAPIRemoteInterfaceVersionStubDispatcher;


    
    static CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v1::com::ivis::CDL::ClientAPIRemoteStub,
        std::tuple< std::string, std::string, std::string, ClientAPIRemoteTypes::CDLData>,
        std::tuple< >,
        std::tuple< CommonAPI::SomeIP::StringDeployment, CommonAPI::SomeIP::StringDeployment, CommonAPI::SomeIP::StringDeployment, ::v1::com::ivis::CDL::ClientAPIRemoteTypes_::CDLDataDeployment_t>,
        std::tuple< >
    > storeDataStubDispatcher;

    ClientAPIRemoteSomeIPStubAdapterInternal(
        const CommonAPI::SomeIP::Address &_address,
        const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection,
        const std::shared_ptr<CommonAPI::StubBase> &_stub):
        CommonAPI::SomeIP::StubAdapter(_address, _connection),
        ClientAPIRemoteSomeIPStubAdapterHelper(
            _address,
            _connection,
            std::dynamic_pointer_cast< ClientAPIRemoteStub>(_stub))
    {

        
                ClientAPIRemoteSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x2774) }, &storeDataStubDispatcher );

        // Provided events/fields
        {
            std::set<CommonAPI::SomeIP::eventgroup_id_t> itsEventGroups;
            itsEventGroups.insert(CommonAPI::SomeIP::eventgroup_id_t(0xc738));
            CommonAPI::SomeIP::StubAdapter::registerEvent(CommonAPI::SomeIP::event_id_t(0xc79c), itsEventGroups, false);
        }
    }

private:
};

template <typename _Stub, typename... _Stubs>
CommonAPI::SomeIP::GetAttributeStubDispatcher<
    ::v1::com::ivis::CDL::ClientAPIRemoteStub,
    CommonAPI::Version
    > ClientAPIRemoteSomeIPStubAdapterInternal<_Stub, _Stubs...>::getClientAPIRemoteInterfaceVersionStubDispatcher(&ClientAPIRemoteStub::getInterfaceVersion, false);

template <typename _Stub, typename... _Stubs>
CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
    ::v1::com::ivis::CDL::ClientAPIRemoteStub,
    std::tuple< std::string, std::string, std::string, ClientAPIRemoteTypes::CDLData>,
    std::tuple< >,
    std::tuple< CommonAPI::SomeIP::StringDeployment, CommonAPI::SomeIP::StringDeployment, CommonAPI::SomeIP::StringDeployment, ::v1::com::ivis::CDL::ClientAPIRemoteTypes_::CDLDataDeployment_t>,
    std::tuple< >
> ClientAPIRemoteSomeIPStubAdapterInternal<_Stub, _Stubs...>::storeDataStubDispatcher(
    &ClientAPIRemoteStub::storeData,
    false,
    std::make_tuple(&::v1::com::ivis::CDL::ClientAPIRemote_::storeData_domainDeployment, &::v1::com::ivis::CDL::ClientAPIRemote_::storeData_subDomainDeployment, &::v1::com::ivis::CDL::ClientAPIRemote_::storeData_idDeployment, static_cast< ::v1::com::ivis::CDL::ClientAPIRemoteTypes_::CDLDataDeployment_t* >(nullptr)),
    std::make_tuple());

template <typename _Stub, typename... _Stubs>
void ClientAPIRemoteSomeIPStubAdapterInternal<_Stub, _Stubs...>::fireNotifyDataEvent(const std::string& _domain, const std::string& _subDomain, const std::string& _id, const ::v1::com::ivis::CDL::ClientAPIRemoteTypes::CDLData& _data) {
    CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deployed_domain(_domain, static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr));
    CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deployed_subDomain(_subDomain, static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr));
    CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deployed_id(_id, static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr));
    CommonAPI::Deployable< ClientAPIRemoteTypes::CDLData, ::v1::com::ivis::CDL::ClientAPIRemoteTypes_::CDLDataDeployment_t> deployed_data(_data, static_cast< ::v1::com::ivis::CDL::ClientAPIRemoteTypes_::CDLDataDeployment_t* >(nullptr));
    CommonAPI::SomeIP::StubEventHelper<CommonAPI::SomeIP::SerializableArguments<  CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment > 
    ,  CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment > 
    ,  CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment > 
    ,  CommonAPI::Deployable< ::v1::com::ivis::CDL::ClientAPIRemoteTypes::CDLData, ::v1::com::ivis::CDL::ClientAPIRemoteTypes_::CDLDataDeployment_t > 
    >>
        ::sendEvent(
            *this,
            CommonAPI::SomeIP::event_id_t(0xc79c),
            false,
             deployed_domain 
            ,  deployed_subDomain 
            ,  deployed_id 
            ,  deployed_data 
    );
}

template <typename _Stub = ::v1::com::ivis::CDL::ClientAPIRemoteStub, typename... _Stubs>
class ClientAPIRemoteSomeIPStubAdapter
    : public ClientAPIRemoteSomeIPStubAdapterInternal<_Stub, _Stubs...>,
      public std::enable_shared_from_this< ClientAPIRemoteSomeIPStubAdapter<_Stub, _Stubs...>> {
public:
    ClientAPIRemoteSomeIPStubAdapter(const CommonAPI::SomeIP::Address &_address,
                                            const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection,
                                            const std::shared_ptr<CommonAPI::StubBase> &_stub)
        : CommonAPI::SomeIP::StubAdapter(_address, _connection),
          ClientAPIRemoteSomeIPStubAdapterInternal<_Stub, _Stubs...>(_address, _connection, _stub) {
    }
};

} // namespace CDL
} // namespace ivis
} // namespace com
} // namespace v1

#endif // V1_COM_IVIS_CDL_Client_API_Remote_SOMEIP_STUB_ADAPTER_HPP_
