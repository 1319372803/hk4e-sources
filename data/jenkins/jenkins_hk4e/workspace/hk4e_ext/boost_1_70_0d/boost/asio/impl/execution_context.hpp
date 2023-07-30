// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/impl/execution_context.hpp

// Line 30: range 000000000C65DC00-000000000C65DC3D
boost::asio::detail::epoll_reactor *__cdecl boost::asio::use_service<boost::asio::detail::epoll_reactor>(
        boost::asio::execution_context *e)
{
  if ( *(_BYTE *)(((unsigned __int64)e >> 3) + 0x7FFF8000) )
    __asan_report_load8(e);
  return boost::asio::detail::service_registry::use_service<boost::asio::detail::epoll_reactor>(e->service_registry_);
};

// Line 30: range 000000000C65C744-000000000C65C781
boost::asio::detail::scheduler *__cdecl boost::asio::use_service<boost::asio::detail::scheduler>(
        boost::asio::execution_context *e)
{
  if ( *(_BYTE *)(((unsigned __int64)e >> 3) + 0x7FFF8000) )
    __asan_report_load8(e);
  return boost::asio::detail::service_registry::use_service<boost::asio::detail::scheduler>(e->service_registry_);
};

// Line 82: range 000000000C65DEE6-000000000C65DF2F
void __cdecl boost::asio::add_service<boost::asio::detail::scheduler>(
        boost::asio::execution_context *e,
        boost::asio::detail::scheduler *svc)
{
  if ( *(_BYTE *)(((unsigned __int64)e >> 3) + 0x7FFF8000) )
    __asan_report_load8(e);
  boost::asio::detail::service_registry::add_service<boost::asio::detail::scheduler>(e->service_registry_, svc);
};

// Line 102: range 000000000C641462-000000000C64149C
boost::asio::execution_context *__cdecl boost::asio::execution_context::service::context(
        boost::asio::execution_context::service *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->owner_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->owner_);
  return this->owner_;
};
