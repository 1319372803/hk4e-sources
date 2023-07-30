// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/core/basic_stream.hpp

// Line 501: range 0000000018737ED0-00000000187383BB
bool __fastcall boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::get_executor(
        std::chrono::time_point<std::chrono::_V2::steady_clock,std::chrono::duration<long int,std::ratio<1,1000000000> > > *a1,
        const boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *const this)
{
  boost::shared_ptr<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::impl_type>::element_type *px; // rax
  unsigned __int64 impl; // rdi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
LABEL_11:
    __asan_handle_no_return();
    __assert_fail(
      off_265B8C00,
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/smart_ptr/shared_ptr.hpp",
      0x2DEu,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = boost::beast:"
      ":basic_stream<boost::asio::ip::tcp, boost::asio::executor, boost::beast::unlimited_rate_policy>::impl_type; typena"
      "me boost::detail::sp_member_access<T>::type = boost::beast::basic_stream<boost::asio::ip::tcp, boost::asio::execut"
      "or, boost::beast::unlimited_rate_policy>::impl_type*]");
  }
  px = this->impl_.px;
  if ( !this->impl_.px )
    goto LABEL_11;
  if ( *(_BYTE *)(((unsigned __int64)&px->socket.impl_.implementation_executor_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
LABEL_13:
    __asan_report_load8();
    goto LABEL_14;
  }
  impl = (unsigned __int64)px->socket.impl_.implementation_executor_.executor_.impl_;
  if ( !impl )
    goto LABEL_8;
  if ( *(_BYTE *)((impl >> 3) + 0x7FFF8000) )
    goto LABEL_13;
  if ( *(_BYTE *)((*(_QWORD *)impl >> 3) + 0x7FFF8000LL) )
  {
LABEL_14:
    __asan_report_load8();
    goto LABEL_15;
  }
  impl = (**(__int64 (***)(void))impl)();
LABEL_8:
  if ( !*(_BYTE *)(((unsigned __int64)a1 >> 3) + 0x7FFF8000) )
  {
    a1->__d.__r = impl;
    return (char)a1;
  }
LABEL_15:
  __asan_report_store8(a1, this);
  return std::chrono::operator==<std::chrono::_V2::steady_clock,std::chrono::duration<long,std::ratio<1l,1000000000l>>,std::chrono::duration<long,std::ratio<1l,1000000000l>>>(
           a1,
           (const std::chrono::time_point<std::chrono::_V2::steady_clock,std::chrono::duration<long int,std::ratio<1,1000000000> > > *)this);
};
