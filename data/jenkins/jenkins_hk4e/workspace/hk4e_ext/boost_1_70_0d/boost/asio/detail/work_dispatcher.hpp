// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/work_dispatcher.hpp

// Line 30: range 0000000019B99384-0000000019B9960B
void __fastcall boost::asio::detail::work_dispatcher<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>::~work_dispatcher(
        boost::asio::detail::work_dispatcher<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->handler_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_5;
  }
  this->handler_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                                                  + 2);
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard(&this->handler_.wg1_);
  if ( *(_BYTE *)(((unsigned __int64)&this->handler_.h_ >> 3) + 0x7FFF8000) )
  {
LABEL_5:
    __asan_report_store8();
    JUMPOUT(0x19B993F7LL);
  }
  this->handler_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                                     + 2);
  boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>::~stable_async_base(&this->handler_.h_);
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard(&this->work_);
};
