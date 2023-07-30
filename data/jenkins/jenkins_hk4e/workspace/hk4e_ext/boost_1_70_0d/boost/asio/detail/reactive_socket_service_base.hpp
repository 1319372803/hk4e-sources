// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/reactive_socket_service_base.hpp

// Line 87: range 000000000C64BA26-000000000C64BA72
bool __cdecl boost::asio::detail::reactive_socket_service_base::is_open(
        const boost::asio::detail::reactive_socket_service_base *const this,
        const boost::asio::detail::reactive_socket_service_base::base_implementation_type *impl)
{
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(impl);
  }
  return impl->socket_ != -1;
};

// Line 125: range 000000000C64BA74-000000000C64BAFE
boost::system::error_code __cdecl boost::asio::detail::reactive_socket_service_base::listen(
        boost::asio::detail::reactive_socket_service_base *const this,
        boost::asio::detail::reactive_socket_service_base::base_implementation_type *impl,
        int backlog,
        boost::system::error_code *ec)
{
  const boost::system::error_category *cat; // rdx
  __int64 v5; // rax
  boost::system::error_code result; // 0:rax.5,8:rdx.8

  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(impl);
  }
  boost::asio::detail::socket_ops::listen(impl->socket_, backlog, ec);
  if ( *(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
    __asan_report_load16(ec);
  cat = ec->cat_;
  v5 = *(_QWORD *)&ec->val_;
  result.cat_ = cat;
  result.val_ = v5;
  result.failed_ = BYTE4(v5);
  return result;
};
