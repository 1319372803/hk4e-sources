// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/ssl/stream.hpp

// Line 129: range 000000000CC4E2C6-000000000CC4F416
boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >::executor_type __fastcall boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>::get_executor(
        boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > *a1,
        boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > *const this)
{
  boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > *v2; // rbx
  boost::shared_ptr<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::impl_type>::element_type *px; // rax
  unsigned __int64 p_implementation_executor; // rdi
  __int64 (**v5)(void); // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    a1 = this;
    __asan_report_load8(this);
LABEL_11:
    __asan_handle_no_return(a1);
    __assert_fail(
      "px != 0",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/smart_ptr/shared_ptr.hpp",
      0x2DEu,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = boost::beast:"
      ":basic_stream<boost::asio::ip::tcp, boost::asio::executor, boost::beast::unlimited_rate_policy>::impl_type; typena"
      "me boost::detail::sp_member_access<T>::type = boost::beast::basic_stream<boost::asio::ip::tcp, boost::asio::execut"
      "or, boost::beast::unlimited_rate_policy>::impl_type*]");
  }
  v2 = a1;
  px = this->next_layer_.impl_.px;
  if ( !this->next_layer_.impl_.px )
    goto LABEL_11;
  p_implementation_executor = (unsigned __int64)&px->socket.impl_.implementation_executor_;
  if ( *(_BYTE *)(((unsigned __int64)&px->socket.impl_.implementation_executor_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_implementation_executor);
LABEL_13:
    __asan_report_load8(p_implementation_executor);
    goto LABEL_14;
  }
  p_implementation_executor = (unsigned __int64)px->socket.impl_.implementation_executor_.executor_.impl_;
  if ( !p_implementation_executor )
    goto LABEL_8;
  if ( *(_BYTE *)((p_implementation_executor >> 3) + 0x7FFF8000) )
    goto LABEL_13;
  v5 = *(__int64 (***)(void))p_implementation_executor;
  if ( *(_BYTE *)((*(_QWORD *)p_implementation_executor >> 3) + 0x7FFF8000LL) )
  {
LABEL_14:
    __asan_report_load8(v5);
    goto LABEL_15;
  }
  p_implementation_executor = (*v5)();
LABEL_8:
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_store8();
    JUMPOUT(0xCC4E385LL);
  }
  v2->next_layer_.impl_.px = (boost::shared_ptr<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::impl_type>::element_type *)p_implementation_executor;
  return (boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >::executor_type)v2;
};
