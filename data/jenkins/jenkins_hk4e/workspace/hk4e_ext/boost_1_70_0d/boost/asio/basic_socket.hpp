// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/basic_socket.hpp

// Line 478: range 000000000C6E8E86-000000000C6E8F0D
boost::system::error_code __cdecl boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>::assign(
        boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor> *const this,
        const boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>::protocol_type *protocol,
        const boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>::native_handle_type *native_socket,
        boost::system::error_code *ec)
{
  boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::service_type *service; // rbx
  boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::implementation_type *implementation; // rsi
  __int64 v6; // rdx
  const boost::system::error_category *cat; // rdx
  __int64 v8; // rax
  boost::system::error_code result; // 0:rax.5,8:rdx.8

  service = boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::get_service(&this->impl_);
  implementation = boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::get_implementation(&this->impl_);
  boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::assign(
    service,
    implementation,
    protocol,
    native_socket,
    ec);
  v6 = *(unsigned __int16 *)(((unsigned __int64)ec >> 3) + 0x7FFF8000);
  if ( (_WORD)v6 )
    __asan_report_load16(ec, implementation, v6);
  cat = ec->cat_;
  v8 = *(_QWORD *)&ec->val_;
  result.cat_ = cat;
  result.val_ = v8;
  result.failed_ = BYTE4(v8);
  return result;
};

// Line 487: range 000000000C6D55C8-000000000C6D5602
bool __cdecl boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>::is_open(
        const boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor> *const this)
{
  boost::asio::detail::reactive_socket_service_base *v1; // rbx
  const boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::implementation_type *implementation; // rax

  v1 = &boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::get_service(&this->impl_)->boost::asio::detail::reactive_socket_service_base;
  implementation = boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::get_implementation(&this->impl_);
  return boost::asio::detail::reactive_socket_service_base::is_open(v1, implementation);
};

// Line 1788: range 000000000C66D95C-000000000C66D982
void __cdecl boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>::~basic_socket(
        boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor> *const this)
{
  boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::~io_object_impl(&this->impl_);
  boost::asio::socket_base::~socket_base((boost::asio::socket_base *const)this);
};
