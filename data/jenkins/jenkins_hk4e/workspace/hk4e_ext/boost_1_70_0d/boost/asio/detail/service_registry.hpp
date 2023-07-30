// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/service_registry.hpp

// Line 125: range 000000000C640928-000000000C640966
void __cdecl boost::asio::detail::service_registry::auto_service_ptr::~auto_service_ptr(
        boost::asio::detail::service_registry::auto_service_ptr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  boost::asio::detail::service_registry::destroy(this->ptr_);
};
