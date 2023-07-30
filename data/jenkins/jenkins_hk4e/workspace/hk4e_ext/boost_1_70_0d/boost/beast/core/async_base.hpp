// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/core/async_base.hpp

// Line 73: range 0000000019B74B4E-0000000019B74B50
void __fastcall boost::beast::async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>>,boost::asio::executor,std::allocator<void>>::before_invoke_hook(
        boost::beast::async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> >,boost::asio::executor,std::allocator<void> > *const this)
{
  ;
};

// Line 179: range 0000000019B9B3BE-0000000019B9B60D
void __fastcall boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::~async_base(
        boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const this)
{
  const char *v1; // rsi
  boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *v2; // rbx
  std::size_t v3; // rdx
  boost::beast::error_code *v4; // rcx

  v2 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_6;
  }
  this->_vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                                         + 2);
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard(&this->wg1_);
  this = (boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)((char *)this + 8);
  if ( *(_BYTE *)(((unsigned __int64)&v2->h_ >> 3) + 0x7FFF8000) )
  {
LABEL_6:
    __asan_report_store8();
    goto LABEL_7;
  }
  v2->h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                                          + 2);
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard(&v2->h_.wg1_);
  this = (boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)&v2->h_.h_;
  if ( !*(_BYTE *)(((unsigned __int64)&v2->h_.h_ >> 3) + 0x7FFF8000) )
  {
    v2->h_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                               + 2);
    boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>::~stable_async_base(&v2->h_.h_);
    return;
  }
LABEL_7:
  __asan_report_store8();
  boost::beast::http::basic_parser<false>::maybe_need_more(
    (boost::beast::http::basic_parser<false> *const)this,
    v1,
    v3,
    v4);
};

// Line 179: range 0000000019B9E070-0000000019B9E836
void __fastcall boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::~async_base(
        boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const this)
{
  boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *v1; // rbx

  v1 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_6;
  }
  this->_vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                                         + 2);
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard(&this->wg1_);
  this = (boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)((char *)this + 8);
  if ( *(_BYTE *)(((unsigned __int64)&v1->h_ >> 3) + 0x7FFF8000) )
  {
LABEL_6:
    __asan_report_store8();
    goto LABEL_7;
  }
  v1->h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                                          + 2);
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard(&v1->h_.wg1_);
  this = (boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)&v1->h_.h_;
  if ( !*(_BYTE *)(((unsigned __int64)&v1->h_.h_ >> 3) + 0x7FFF8000) )
  {
    v1->h_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                               + 2);
    boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>::~stable_async_base(&v1->h_.h_);
    return;
  }
LABEL_7:
  __asan_report_store8();
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::transfer_op<false,boost::asio::const_buffers_1,boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::shutdown_op,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>>>>::~transfer_op((boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::transfer_op<false,boost::asio::const_buffers_1,boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::shutdown_op,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> > > > *const)this);
};

// Line 195: range 0000000019B74B86-0000000019B74B88
void __fastcall boost::beast::async_base<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::read_op<boost::asio::mutable_buffer>,boost::beast::detail::dynamic_read_ops::read_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>>>>,boost::asio::executor,std::allocator<void>>::before_invoke_hook(
        boost::beast::async_base<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::read_op<boost::asio::mutable_buffer>,boost::beast::detail::dynamic_read_ops::read_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> > > > >,boost::asio::executor,std::allocator<void> > *const this)
{
  ;
};

// Line 195: range 0000000019B74B62-0000000019B74B80
void __fastcall boost::beast::async_base<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::shutdown_op,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>>>,boost::asio::executor,std::allocator<void>>::before_invoke_hook(
        boost::beast::async_base<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::shutdown_op,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> > >,boost::asio::executor,std::allocator<void> > *const this)
{
  ;
};

// Line 195: range 0000000019B74B9E-0000000019B74BA0
void __fastcall boost::beast::async_base<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>,boost::asio::executor,std::allocator<void>>::before_invoke_hook(
        boost::beast::async_base<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > >,boost::asio::executor,std::allocator<void> > *const this)
{
  ;
};

// Line 195: range 0000000019B74BAE-0000000019B74BB0
void __fastcall boost::beast::async_base<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>,boost::asio::executor,std::allocator<void>>::before_invoke_hook(
        boost::beast::async_base<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > >,boost::asio::executor,std::allocator<void> > *const this)
{
  ;
};

// Line 195: range 0000000019B74BA6-0000000019B74BA8
void __fastcall boost::beast::async_base<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>,boost::asio::executor,std::allocator<void>>::before_invoke_hook(
        boost::beast::async_base<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > >,boost::asio::executor,std::allocator<void> > *const this)
{
  ;
};

// Line 195: range 0000000019B74BAA-0000000019B74BAC
void __fastcall boost::beast::async_base<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>,boost::asio::executor,std::allocator<void>>::before_invoke_hook(
        boost::beast::async_base<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > >,boost::asio::executor,std::allocator<void> > *const this)
{
  ;
};

// Line 195: range 0000000019B74BA2-0000000019B74BA4
void __fastcall boost::beast::async_base<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>,boost::asio::executor,std::allocator<void>>::before_invoke_hook(
        boost::beast::async_base<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > >,boost::asio::executor,std::allocator<void> > *const this)
{
  ;
};

// Line 195: range 0000000019B74B5A-0000000019B74B5C
void __fastcall boost::beast::async_base<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::shutdown_op,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>>,boost::asio::executor,std::allocator<void>>::before_invoke_hook(
        boost::beast::async_base<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::shutdown_op,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> >,boost::asio::executor,std::allocator<void> > *const this)
{
  ;
};

// Line 195: range 0000000019B74B92-0000000019B74B94
void __fastcall boost::beast::async_base<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::executor,std::allocator<void>>::before_invoke_hook(
        boost::beast::async_base<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > >,boost::asio::executor,std::allocator<void> > *const this)
{
  ;
};

// Line 195: range 0000000019B74B8E-0000000019B74B90
void __fastcall boost::beast::async_base<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::executor,std::allocator<void>>::before_invoke_hook(
        boost::beast::async_base<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > >,boost::asio::executor,std::allocator<void> > *const this)
{
  ;
};

// Line 195: range 0000000019B74B9A-0000000019B74B9C
void __fastcall boost::beast::async_base<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::executor,std::allocator<void>>::before_invoke_hook(
        boost::beast::async_base<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > >,boost::asio::executor,std::allocator<void> > *const this)
{
  ;
};

// Line 195: range 0000000019B74B96-0000000019B74B98
void __fastcall boost::beast::async_base<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::executor,std::allocator<void>>::before_invoke_hook(
        boost::beast::async_base<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > >,boost::asio::executor,std::allocator<void> > *const this)
{
  ;
};

// Line 195: range 0000000019B74B5E-0000000019B74B60
void __fastcall boost::beast::async_base<boost::beast::detail::dynamic_read_ops::read_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char>>,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>>,boost::asio::executor,std::allocator<void>>::before_invoke_hook(
        boost::beast::async_base<boost::beast::detail::dynamic_read_ops::read_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char> >,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> > >,boost::asio::executor,std::allocator<void> > *const this)
{
  ;
};

// Line 195: range 0000000019B74B52-0000000019B74B54
void __fastcall boost::beast::async_base<boost::beast::http::detail::read_msg_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>,boost::asio::executor,std::allocator<void>>::before_invoke_hook(
        boost::beast::async_base<boost::beast::http::detail::read_msg_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> >,boost::asio::executor,std::allocator<void> > *const this)
{
  ;
};

// Line 195: range 0000000019B74B56-0000000019B74B58
void __fastcall boost::beast::async_base<boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>,boost::asio::executor,std::allocator<void>>::before_invoke_hook(
        boost::beast::async_base<boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> >,boost::asio::executor,std::allocator<void> > *const this)
{
  ;
};

// Line 195: range 0000000019B74B82-0000000019B74B84
void __fastcall boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::before_invoke_hook(
        boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const this)
{
  ;
};

// Line 195: range 0000000019B74B8A-0000000019B74B8C
void __fastcall boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::before_invoke_hook(
        boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const this)
{
  ;
};

// Line 250: range 0000000019BFBC1E-0000000019BFCD1D
void __fastcall boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::async_base(
        boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const this,
        boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *other)
{
  boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *p_h; // r12
  boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> *v3; // r13
  unsigned __int64 p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  __int64 (**v7)(void); // rax
  boost::asio::executor_binder<void (*)(),boost::asio::executor> *p_handler; // rax
  void *p_target; // rdi
  boost::beast::detail::stable_base **p_list; // rdi
  boost::beast::detail::stable_base *list; // rax
  boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *v12; // rcx
  void *p_s; // rdi
  char v14; // al
  char v15; // al
  void *p_sr; // rdi
  unsigned __int64 v17; // [rsp+0h] [rbp-48h]
  boost::beast::detail::stable_base **v18; // [rsp+8h] [rbp-40h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_67;
  }
  this->_vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                                         + 2);
  if ( *(_BYTE *)(((unsigned __int64)&this->h_ >> 3) + 0x7FFF8000) )
  {
LABEL_67:
    __asan_report_store8();
    goto LABEL_68;
  }
  this->h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                                            + 2);
  p_h = &this->h_.h_;
  if ( *(_BYTE *)(((unsigned __int64)&this->h_.h_ >> 3) + 0x7FFF8000) )
  {
LABEL_68:
    __asan_report_store8();
    goto LABEL_69;
  }
  this->h_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                                               + 2);
  v18 = (boost::beast::detail::stable_base **)&this->h_.h_.h_;
  if ( *(_BYTE *)(((unsigned __int64)&this->h_.h_.h_ >> 3) + 0x7FFF8000) )
  {
LABEL_69:
    __asan_report_store8();
    goto LABEL_70;
  }
  this->h_.h_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>
                                                  + 2);
  v17 = (unsigned __int64)&this->h_.h_.h_.h_;
  v3 = &other->h_.h_.h_.h_;
  if ( *(_BYTE *)(((unsigned __int64)&other->h_.h_.h_.h_ >> 3) + 0x7FFF8000) )
  {
LABEL_70:
    __asan_report_load8(v3);
    goto LABEL_71;
  }
  if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    p_M_refcount = v17;
    __asan_report_store8();
    goto LABEL_72;
  }
  this->h_.h_.h_.h_.coro_._M_ptr = other->h_.h_.h_.h_.coro_._M_ptr;
  p_M_refcount = (unsigned __int64)&this->h_.h_.h_.h_.coro_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)(v18 + 2) >> 3) + 0x7FFF8000) )
  {
LABEL_72:
    __asan_report_store8();
    goto LABEL_73;
  }
  this->h_.h_.h_.h_.coro_._M_refcount._M_pi = 0LL;
  p_M_refcount = (unsigned __int64)&other->h_.h_.h_.h_.coro_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&other->h_.h_.h_.h_.coro_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_73:
    __asan_report_load8(p_M_refcount);
    goto LABEL_74;
  }
  M_pi = other->h_.h_.h_.h_.coro_._M_refcount._M_pi;
  other->h_.h_.h_.h_.coro_._M_refcount._M_pi = 0LL;
  this->h_.h_.h_.h_.coro_._M_refcount._M_pi = M_pi;
  other->h_.h_.h_.h_.coro_._M_ptr = 0LL;
  p_M_refcount = (unsigned __int64)&other->h_.h_.h_.h_.ca_;
  if ( *(_BYTE *)(((unsigned __int64)&other->h_.h_.h_.h_.ca_ >> 3) + 0x7FFF8000) )
  {
LABEL_74:
    __asan_report_load8(p_M_refcount);
    goto LABEL_75;
  }
  p_M_refcount = (unsigned __int64)&this->h_.h_.h_.h_.ca_;
  if ( *(_BYTE *)(((unsigned __int64)&this->h_.h_.h_.h_.ca_ >> 3) + 0x7FFF8000) )
  {
LABEL_75:
    __asan_report_store8();
    goto LABEL_76;
  }
  this->h_.h_.h_.h_.ca_ = other->h_.h_.h_.h_.ca_;
  p_M_refcount = (unsigned __int64)&other->h_.h_.h_.h_.handler_;
  if ( *(_BYTE *)(((unsigned __int64)&other->h_.h_.h_.h_.handler_ >> 3) + 0x7FFF8000) )
  {
LABEL_76:
    __asan_report_load8(p_M_refcount);
LABEL_77:
    v7 = (__int64 (**)(void))__asan_report_load8(p_M_refcount);
    goto LABEL_78;
  }
  p_M_refcount = (unsigned __int64)other->h_.h_.h_.h_.handler_.executor_.impl_;
  if ( !p_M_refcount )
    goto LABEL_16;
  if ( *(_BYTE *)((p_M_refcount >> 3) + 0x7FFF8000) )
    goto LABEL_77;
  v7 = *(__int64 (***)(void))p_M_refcount;
  if ( *(_BYTE *)((*(_QWORD *)p_M_refcount >> 3) + 0x7FFF8000LL) )
  {
LABEL_78:
    p_handler = (boost::asio::executor_binder<void (*)(),boost::asio::executor> *)__asan_report_load8(v7);
    goto LABEL_79;
  }
  p_M_refcount = (*v7)();
LABEL_16:
  p_handler = &this->h_.h_.h_.h_.handler_;
  if ( *(_BYTE *)(((unsigned __int64)&this->h_.h_.h_.h_.handler_ >> 3) + 0x7FFF8000) )
  {
LABEL_79:
    p_target = p_handler;
    __asan_report_store8();
    goto LABEL_80;
  }
  this->h_.h_.h_.h_.handler_.executor_.impl_ = (boost::asio::executor::impl_base *)p_M_refcount;
  p_target = &other->h_.h_.h_.h_.handler_.target_;
  if ( *(_BYTE *)(((unsigned __int64)&other->h_.h_.h_.h_.handler_.target_ >> 3) + 0x7FFF8000) )
  {
LABEL_80:
    __asan_report_load8(p_target);
    goto LABEL_81;
  }
  p_target = &this->h_.h_.h_.h_.handler_.target_;
  if ( *(_BYTE *)(((unsigned __int64)&this->h_.h_.h_.h_.handler_.target_ >> 3) + 0x7FFF8000) )
  {
LABEL_81:
    __asan_report_store8();
    goto LABEL_82;
  }
  this->h_.h_.h_.h_.handler_.target_ = other->h_.h_.h_.h_.handler_.target_;
  p_target = &other->h_.h_.h_.h_.ready_;
  if ( *(_BYTE *)(((unsigned __int64)&other->h_.h_.h_.h_.ready_ >> 3) + 0x7FFF8000) )
  {
LABEL_82:
    __asan_report_load8(p_target);
    goto LABEL_83;
  }
  p_target = &this->h_.h_.h_.h_.ready_;
  if ( *(_BYTE *)(((unsigned __int64)&this->h_.h_.h_.h_.ready_ >> 3) + 0x7FFF8000) )
  {
LABEL_83:
    __asan_report_store8();
    goto LABEL_84;
  }
  this->h_.h_.h_.h_.ready_ = other->h_.h_.h_.h_.ready_;
  p_target = &other->h_.h_.h_.h_.ec_;
  if ( *(_BYTE *)(((unsigned __int64)&other->h_.h_.h_.h_.ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_84:
    __asan_report_load8(p_target);
    goto LABEL_85;
  }
  p_target = &this->h_.h_.h_.h_.ec_;
  if ( *(_BYTE *)(((unsigned __int64)&this->h_.h_.h_.h_.ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_85:
    __asan_report_store8();
    goto LABEL_86;
  }
  this->h_.h_.h_.h_.ec_ = other->h_.h_.h_.h_.ec_;
  p_target = &other->h_.h_.h_.h_.value_;
  if ( *(_BYTE *)(((unsigned __int64)&other->h_.h_.h_.h_.value_ >> 3) + 0x7FFF8000) )
  {
LABEL_86:
    __asan_report_load8(p_target);
    goto LABEL_87;
  }
  p_target = &this->h_.h_.h_.h_.value_;
  if ( *(_BYTE *)(((unsigned __int64)&this->h_.h_.h_.h_.value_ >> 3) + 0x7FFF8000) )
  {
LABEL_87:
    __asan_report_store8();
    goto LABEL_88;
  }
  this->h_.h_.h_.h_.value_ = other->h_.h_.h_.h_.value_;
  p_target = &other->h_.h_.h_.wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&other->h_.h_.h_.wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_88:
    __asan_report_load8(p_target);
    goto LABEL_89;
  }
  p_target = &this->h_.h_.h_.wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&this->h_.h_.h_.wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_89:
    __asan_report_store8();
    goto LABEL_90;
  }
  this->h_.h_.h_.wg1_.executor_.impl_ = other->h_.h_.h_.wg1_.executor_.impl_;
  other->h_.h_.h_.wg1_.executor_.impl_ = 0LL;
  p_target = &other->h_.h_.h_.wg1_.owns_;
  if ( *(char *)(((unsigned __int64)&other->h_.h_.h_.wg1_.owns_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_90:
    __asan_report_load1(p_target);
    goto LABEL_91;
  }
  p_target = &this->h_.h_.h_.wg1_.owns_;
  if ( *(char *)(((unsigned __int64)&this->h_.h_.h_.wg1_.owns_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_91:
    __asan_report_store1(p_target);
    goto LABEL_92;
  }
  this->h_.h_.h_.wg1_.owns_ = other->h_.h_.h_.wg1_.owns_;
  other->h_.h_.h_.wg1_.owns_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
  {
LABEL_92:
    p_list = v18;
    __asan_report_store8();
    goto LABEL_93;
  }
  this->h_.h_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>
                                                  + 2);
  p_list = &other->h_.h_.h_.list_;
  if ( *(_BYTE *)(((unsigned __int64)&other->h_.h_.h_.list_ >> 3) + 0x7FFF8000) )
  {
LABEL_93:
    __asan_report_load8(p_list);
    goto LABEL_94;
  }
  list = other->h_.h_.h_.list_;
  other->h_.h_.h_.list_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->h_.h_.h_.list_ >> 3) + 0x7FFF8000) )
  {
LABEL_94:
    __asan_report_store8();
    goto LABEL_95;
  }
  v12 = &this->h_.h_.h_;
  this->h_.h_.h_.list_ = list;
  if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
  {
LABEL_95:
    p_s = v12;
    __asan_report_store8();
    goto LABEL_96;
  }
  this->h_.h_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                                  + 2);
  p_s = &other->h_.h_.h_.s_;
  if ( *(_BYTE *)(((unsigned __int64)&other->h_.h_.h_.s_ >> 3) + 0x7FFF8000) )
  {
LABEL_96:
    __asan_report_load8(p_s);
    goto LABEL_97;
  }
  p_s = &this->h_.h_.h_.s_;
  if ( *(_BYTE *)(((unsigned __int64)&this->h_.h_.h_.s_ >> 3) + 0x7FFF8000) )
  {
LABEL_97:
    __asan_report_store8();
    goto LABEL_98;
  }
  this->h_.h_.h_.s_ = other->h_.h_.h_.s_;
  p_s = &other->h_.h_.h_.sr_;
  if ( *(_BYTE *)(((unsigned __int64)&other->h_.h_.h_.sr_ >> 3) + 0x7FFF8000) )
  {
LABEL_98:
    __asan_report_load8(p_s);
    goto LABEL_99;
  }
  p_s = &this->h_.h_.h_.sr_;
  if ( *(_BYTE *)(((unsigned __int64)&this->h_.h_.h_.sr_ >> 3) + 0x7FFF8000) )
  {
LABEL_99:
    __asan_report_store8();
    goto LABEL_100;
  }
  this->h_.h_.h_.sr_ = other->h_.h_.h_.sr_;
  p_s = &other->h_.h_.wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&other->h_.h_.wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_100:
    __asan_report_load8(p_s);
    goto LABEL_101;
  }
  p_s = &this->h_.h_.wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&this->h_.h_.wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_101:
    __asan_report_store8();
    goto LABEL_102;
  }
  this->h_.h_.wg1_.executor_.impl_ = other->h_.h_.wg1_.executor_.impl_;
  other->h_.h_.wg1_.executor_.impl_ = 0LL;
  p_s = &other->h_.h_.wg1_.owns_;
  if ( *(char *)(((unsigned __int64)&other->h_.h_.wg1_.owns_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_102:
    __asan_report_load1(p_s);
    goto LABEL_103;
  }
  p_s = &this->h_.h_.wg1_.owns_;
  if ( *(char *)(((unsigned __int64)&this->h_.h_.wg1_.owns_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_103:
    __asan_report_store1(p_s);
LABEL_104:
    __asan_report_store4(p_s);
LABEL_105:
    __asan_report_load4(p_s);
    goto LABEL_106;
  }
  this->h_.h_.wg1_.owns_ = other->h_.h_.wg1_.owns_;
  other->h_.h_.wg1_.owns_ = 0;
  p_s = &this->h_.h_.boost::asio::coroutine;
  v14 = *(_BYTE *)(((unsigned __int64)&this->h_.h_.boost::asio::coroutine >> 3) + 0x7FFF8000);
  if ( v14 && v14 <= 3 )
    goto LABEL_104;
  p_s = &other->h_.h_.boost::asio::coroutine;
  v15 = *(_BYTE *)(((unsigned __int64)&other->h_.h_.boost::asio::coroutine >> 3) + 0x7FFF8000);
  if ( v15 && v15 <= 3 )
    goto LABEL_105;
  this->h_.h_.value_ = other->h_.h_.value_;
  if ( *(_BYTE *)(((unsigned __int64)p_h >> 3) + 0x7FFF8000) )
  {
LABEL_106:
    p_sr = p_h;
    __asan_report_store8();
    goto LABEL_107;
  }
  this->h_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                               + 2);
  p_sr = &other->h_.h_.s_;
  if ( *(_BYTE *)(((unsigned __int64)&other->h_.h_.s_ >> 3) + 0x7FFF8000) )
  {
LABEL_107:
    __asan_report_load8(p_sr);
    goto LABEL_108;
  }
  p_sr = &this->h_.h_.s_;
  if ( *(_BYTE *)(((unsigned __int64)&this->h_.h_.s_ >> 3) + 0x7FFF8000) )
  {
LABEL_108:
    __asan_report_store8();
    goto LABEL_109;
  }
  this->h_.h_.s_ = other->h_.h_.s_;
  p_sr = &other->h_.h_.sr_;
  if ( *(_BYTE *)(((unsigned __int64)&other->h_.h_.sr_ >> 3) + 0x7FFF8000) )
  {
LABEL_109:
    __asan_report_load8(p_sr);
    goto LABEL_110;
  }
  p_sr = &this->h_.h_.sr_;
  if ( *(_BYTE *)(((unsigned __int64)&this->h_.h_.sr_ >> 3) + 0x7FFF8000) )
  {
LABEL_110:
    __asan_report_store8();
    goto LABEL_111;
  }
  this->h_.h_.sr_ = other->h_.h_.sr_;
  p_sr = &other->h_.h_.bytes_transferred_;
  if ( *(_BYTE *)(((unsigned __int64)&other->h_.h_.bytes_transferred_ >> 3) + 0x7FFF8000) )
  {
LABEL_111:
    __asan_report_load8(p_sr);
    goto LABEL_112;
  }
  p_sr = &this->h_.h_.bytes_transferred_;
  if ( *(_BYTE *)(((unsigned __int64)&this->h_.h_.bytes_transferred_ >> 3) + 0x7FFF8000) )
  {
LABEL_112:
    __asan_report_store8();
    goto LABEL_113;
  }
  this->h_.h_.bytes_transferred_ = other->h_.h_.bytes_transferred_;
  p_sr = &other->h_.wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&other->h_.wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_113:
    __asan_report_load8(p_sr);
    goto LABEL_114;
  }
  p_sr = &this->h_.wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&this->h_.wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_114:
    __asan_report_store8();
    goto LABEL_115;
  }
  this->h_.wg1_.executor_.impl_ = other->h_.wg1_.executor_.impl_;
  other->h_.wg1_.executor_.impl_ = 0LL;
  p_sr = &other->h_.wg1_.owns_;
  if ( *(char *)(((unsigned __int64)&other->h_.wg1_.owns_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_115:
    __asan_report_load1(p_sr);
    goto LABEL_116;
  }
  p_sr = &this->h_.wg1_.owns_;
  if ( *(char *)(((unsigned __int64)&this->h_.wg1_.owns_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_116:
    __asan_report_store1(p_sr);
    goto LABEL_117;
  }
  this->h_.wg1_.owns_ = other->h_.wg1_.owns_;
  other->h_.wg1_.owns_ = 0;
  p_sr = &this->h_;
  if ( *(_BYTE *)(((unsigned __int64)&this->h_ >> 3) + 0x7FFF8000) )
  {
LABEL_117:
    __asan_report_store8();
    goto LABEL_118;
  }
  this->h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                            + 2);
  p_sr = &other->h_.s_;
  if ( *(_BYTE *)(((unsigned __int64)&other->h_.s_ >> 3) + 0x7FFF8000) )
  {
LABEL_118:
    __asan_report_load8(p_sr);
    goto LABEL_119;
  }
  p_sr = &this->h_.s_;
  if ( *(_BYTE *)(((unsigned __int64)&this->h_.s_ >> 3) + 0x7FFF8000) )
  {
LABEL_119:
    __asan_report_store8();
    goto LABEL_120;
  }
  this->h_.s_ = other->h_.s_;
  p_sr = &other->h_.sr_;
  if ( *(_BYTE *)(((unsigned __int64)&other->h_.sr_ >> 3) + 0x7FFF8000) )
  {
LABEL_120:
    __asan_report_load8(p_sr);
    goto LABEL_121;
  }
  p_sr = &this->h_.sr_;
  if ( *(_BYTE *)(((unsigned __int64)&this->h_.sr_ >> 3) + 0x7FFF8000) )
  {
LABEL_121:
    __asan_report_store8();
    goto LABEL_122;
  }
  this->h_.sr_ = other->h_.sr_;
  p_sr = &other->wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&other->wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_122:
    __asan_report_load8(p_sr);
    goto LABEL_123;
  }
  p_sr = &this->wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&this->wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_123:
    __asan_report_store8();
    goto LABEL_124;
  }
  this->wg1_.executor_.impl_ = other->wg1_.executor_.impl_;
  other->wg1_.executor_.impl_ = 0LL;
  p_sr = &other->wg1_.owns_;
  if ( *(char *)(((unsigned __int64)&other->wg1_.owns_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_124:
    __asan_report_load1(p_sr);
    goto LABEL_125;
  }
  p_sr = &this->wg1_.owns_;
  if ( *(char *)(((unsigned __int64)&this->wg1_.owns_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_125:
    __asan_report_store1(p_sr);
    JUMPOUT(0x19BFC605LL);
  }
  this->wg1_.owns_ = other->wg1_.owns_;
  other->wg1_.owns_ = 0;
};

// Line 290: range 0000000019C612EA-0000000019C61BDE
boost::beast::async_base<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > >,boost::asio::executor,std::allocator<void> >::executor_type __fastcall boost::beast::async_base<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>,boost::asio::executor,std::allocator<void>>::get_executor(
        unsigned __int64 a1,
        const boost::beast::async_base<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > >,boost::asio::executor,std::allocator<void> > *const this)
{
  unsigned __int64 impl; // rbx
  __int64 (__fastcall **v4)(boost::asio::executor::impl_base *); // rax
  unsigned __int64 v5; // rdi

  if ( *(_BYTE *)(((unsigned __int64)&this->wg1_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->wg1_);
LABEL_13:
    v4 = (__int64 (__fastcall **)(boost::asio::executor::impl_base *))__asan_report_load8(impl);
    goto LABEL_14;
  }
  impl = (unsigned __int64)this->wg1_.executor_.impl_;
  if ( !impl )
    goto LABEL_6;
  if ( *(_BYTE *)((impl >> 3) + 0x7FFF8000) )
    goto LABEL_13;
  v4 = *(__int64 (__fastcall ***)(boost::asio::executor::impl_base *))impl;
  if ( *(_BYTE *)((*(_QWORD *)impl >> 3) + 0x7FFF8000LL) )
  {
LABEL_14:
    __asan_report_load8(v4);
    goto LABEL_15;
  }
  impl = (*v4)(this->wg1_.executor_.impl_);
LABEL_6:
  this = (const boost::beast::async_base<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > >,boost::asio::executor,std::allocator<void> > *const)((char *)this + 112);
  if ( *(_BYTE *)((a1 >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_store8();
LABEL_16:
    v5 = impl;
    __asan_report_load8(impl);
    goto LABEL_17;
  }
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::get_executor((const boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const)this);
  if ( !impl )
    return (boost::beast::async_base<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > >,boost::asio::executor,std::allocator<void> >::executor_type)a1;
  if ( *(_BYTE *)((impl >> 3) + 0x7FFF8000) )
    goto LABEL_16;
  v5 = *(_QWORD *)impl + 8LL;
  if ( !*(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)impl + 8LL))(impl);
    return (boost::beast::async_base<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > >,boost::asio::executor,std::allocator<void> >::executor_type)a1;
  }
LABEL_17:
  __asan_report_load8(v5);
  return boost::beast::async_base<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>,boost::asio::executor,std::allocator<void>>::get_executor((const boost::beast::async_base<boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > >,boost::asio::executor,std::allocator<void> > *const)this);
};

// Line 290: range 0000000019B97678-0000000019B980EB
boost::beast::async_base<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::shutdown_op,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> >,boost::asio::executor,std::allocator<void> >::executor_type __fastcall boost::beast::async_base<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::shutdown_op,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>>,boost::asio::executor,std::allocator<void>>::get_executor(
        unsigned __int64 a1,
        const boost::beast::async_base<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::shutdown_op,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> >,boost::asio::executor,std::allocator<void> > *const this)
{
  unsigned __int64 impl; // rbx
  __int64 (***v4)(void); // rax
  unsigned __int64 p_handler; // rdi
  __int64 (**v6)(void); // rax
  unsigned __int64 v7; // rdi

  if ( *(_BYTE *)(((unsigned __int64)&this->wg1_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->wg1_);
LABEL_18:
    v4 = (__int64 (***)(void))__asan_report_load8(impl);
    goto LABEL_19;
  }
  impl = (unsigned __int64)this->wg1_.executor_.impl_;
  if ( !impl )
    goto LABEL_6;
  if ( *(_BYTE *)((impl >> 3) + 0x7FFF8000) )
    goto LABEL_18;
  v4 = *(__int64 (****)(void))impl;
  if ( *(_BYTE *)((*(_QWORD *)impl >> 3) + 0x7FFF8000LL) )
  {
LABEL_19:
    p_handler = (unsigned __int64)v4;
    __asan_report_load8(v4);
    goto LABEL_20;
  }
  impl = ((__int64 (__fastcall *)(boost::asio::executor::impl_base *))*v4)(this->wg1_.executor_.impl_);
LABEL_6:
  p_handler = (unsigned __int64)&this->h_.handler_.handler_;
  if ( *(_BYTE *)(((unsigned __int64)&this->h_.handler_.handler_ >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_load8(p_handler);
LABEL_21:
    v6 = (__int64 (**)(void))__asan_report_load8(p_handler);
    goto LABEL_22;
  }
  p_handler = (unsigned __int64)this->h_.handler_.handler_.executor_.impl_;
  if ( !p_handler )
    goto LABEL_11;
  if ( *(_BYTE *)((p_handler >> 3) + 0x7FFF8000) )
    goto LABEL_21;
  v6 = *(__int64 (***)(void))p_handler;
  if ( *(_BYTE *)((*(_QWORD *)p_handler >> 3) + 0x7FFF8000LL) )
  {
LABEL_22:
    __asan_report_load8(v6);
    goto LABEL_23;
  }
  p_handler = (*v6)();
LABEL_11:
  if ( *(_BYTE *)((a1 >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_store8();
    goto LABEL_24;
  }
  *(_QWORD *)a1 = p_handler;
  if ( impl )
  {
    if ( !*(_BYTE *)((impl >> 3) + 0x7FFF8000) )
    {
      v7 = *(_QWORD *)impl + 8LL;
      if ( !*(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)impl + 8LL))(impl);
        return (boost::beast::async_base<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::shutdown_op,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> >,boost::asio::executor,std::allocator<void> >::executor_type)a1;
      }
LABEL_25:
      __asan_report_load8(v7);
      JUMPOUT(0x19B977ADLL);
    }
LABEL_24:
    v7 = impl;
    __asan_report_load8(impl);
    goto LABEL_25;
  }
  return (boost::beast::async_base<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::shutdown_op,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> >,boost::asio::executor,std::allocator<void> >::executor_type)a1;
};

// Line 290: range 0000000019C5F55E-0000000019C612C5
boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> >::executor_type __fastcall boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::get_executor(
        unsigned __int64 a1,
        const boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const this)
{
  unsigned __int64 impl; // rbx
  unsigned __int64 p_wg1; // rbp
  unsigned __int64 p_h; // r12
  unsigned __int64 v5; // r13
  __int64 (__fastcall **v7)(boost::asio::executor::impl_base *); // rax
  __int64 (__fastcall **v8)(boost::asio::executor::impl_base *); // rax
  __int64 (__fastcall **v9)(boost::asio::executor::impl_base *); // rax
  __int64 (***v10)(void); // rax
  unsigned __int64 p_handler; // rdi
  __int64 (**v12)(void); // rax
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rdi

  if ( *(_BYTE *)(((unsigned __int64)&this->wg1_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->wg1_);
LABEL_45:
    v7 = (__int64 (__fastcall **)(boost::asio::executor::impl_base *))__asan_report_load8(impl);
    goto LABEL_46;
  }
  p_wg1 = (unsigned __int64)this;
  impl = (unsigned __int64)this->wg1_.executor_.impl_;
  if ( !impl )
    goto LABEL_6;
  if ( *(_BYTE *)((impl >> 3) + 0x7FFF8000) )
    goto LABEL_45;
  v7 = *(__int64 (__fastcall ***)(boost::asio::executor::impl_base *))impl;
  if ( *(_BYTE *)((*(_QWORD *)impl >> 3) + 0x7FFF8000LL) )
  {
LABEL_46:
    __asan_report_load8(v7);
    goto LABEL_47;
  }
  impl = (*v7)(this->wg1_.executor_.impl_);
LABEL_6:
  p_h = (unsigned __int64)&this->h_;
  p_wg1 = (unsigned __int64)&this->h_.wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&this->h_.wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_47:
    __asan_report_load8(p_wg1);
LABEL_48:
    v8 = (__int64 (__fastcall **)(boost::asio::executor::impl_base *))__asan_report_load8(p_wg1);
    goto LABEL_49;
  }
  p_wg1 = (unsigned __int64)this->h_.wg1_.executor_.impl_;
  if ( !p_wg1 )
    goto LABEL_11;
  if ( *(_BYTE *)((p_wg1 >> 3) + 0x7FFF8000) )
    goto LABEL_48;
  v8 = *(__int64 (__fastcall ***)(boost::asio::executor::impl_base *))p_wg1;
  if ( *(_BYTE *)((*(_QWORD *)p_wg1 >> 3) + 0x7FFF8000LL) )
  {
LABEL_49:
    __asan_report_load8(v8);
    goto LABEL_50;
  }
  p_wg1 = (*v8)(this->h_.wg1_.executor_.impl_);
LABEL_11:
  v5 = (unsigned __int64)&this->h_.h_;
  p_h = (unsigned __int64)&this->h_.h_.wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&this->h_.h_.wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_50:
    __asan_report_load8(p_h);
LABEL_51:
    v9 = (__int64 (__fastcall **)(boost::asio::executor::impl_base *))__asan_report_load8(p_h);
    goto LABEL_52;
  }
  p_h = (unsigned __int64)this->h_.h_.wg1_.executor_.impl_;
  if ( !p_h )
    goto LABEL_16;
  if ( *(_BYTE *)((p_h >> 3) + 0x7FFF8000) )
    goto LABEL_51;
  v9 = *(__int64 (__fastcall ***)(boost::asio::executor::impl_base *))p_h;
  if ( *(_BYTE *)((*(_QWORD *)p_h >> 3) + 0x7FFF8000LL) )
  {
LABEL_52:
    __asan_report_load8(v9);
    goto LABEL_53;
  }
  p_h = (*v9)(this->h_.h_.wg1_.executor_.impl_);
LABEL_16:
  v5 = (unsigned __int64)&this->h_.h_.h_.wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&this->h_.h_.h_.wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_53:
    __asan_report_load8(v5);
LABEL_54:
    v10 = (__int64 (***)(void))__asan_report_load8(v5);
    goto LABEL_55;
  }
  v5 = (unsigned __int64)this->h_.h_.h_.wg1_.executor_.impl_;
  if ( !v5 )
    goto LABEL_21;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    goto LABEL_54;
  v10 = *(__int64 (****)(void))v5;
  if ( *(_BYTE *)((*(_QWORD *)v5 >> 3) + 0x7FFF8000LL) )
  {
LABEL_55:
    p_handler = (unsigned __int64)v10;
    __asan_report_load8(v10);
    goto LABEL_56;
  }
  v5 = ((__int64 (__fastcall *)(boost::asio::executor::impl_base *))*v10)(this->h_.h_.h_.wg1_.executor_.impl_);
LABEL_21:
  p_handler = (unsigned __int64)&this->h_.h_.h_.h_.handler_;
  if ( *(_BYTE *)(((unsigned __int64)&this->h_.h_.h_.h_.handler_ >> 3) + 0x7FFF8000) )
  {
LABEL_56:
    __asan_report_load8(p_handler);
LABEL_57:
    v12 = (__int64 (**)(void))__asan_report_load8(p_handler);
    goto LABEL_58;
  }
  p_handler = (unsigned __int64)this->h_.h_.h_.h_.handler_.executor_.impl_;
  if ( !p_handler )
    goto LABEL_26;
  if ( *(_BYTE *)((p_handler >> 3) + 0x7FFF8000) )
    goto LABEL_57;
  v12 = *(__int64 (***)(void))p_handler;
  if ( *(_BYTE *)((*(_QWORD *)p_handler >> 3) + 0x7FFF8000LL) )
  {
LABEL_58:
    __asan_report_load8(v12);
    goto LABEL_59;
  }
  p_handler = (*v12)();
LABEL_26:
  if ( *(_BYTE *)((a1 >> 3) + 0x7FFF8000) )
  {
LABEL_59:
    __asan_report_store8();
LABEL_60:
    v13 = v5;
    __asan_report_load8(v5);
    goto LABEL_61;
  }
  *(_QWORD *)a1 = p_handler;
  if ( !v5 )
    goto LABEL_31;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    goto LABEL_60;
  v13 = *(_QWORD *)v5 + 8LL;
  if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
  {
LABEL_61:
    __asan_report_load8(v13);
LABEL_62:
    v14 = p_h;
    __asan_report_load8(p_h);
    goto LABEL_63;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 8LL))(v5);
LABEL_31:
  if ( !p_h )
    goto LABEL_35;
  if ( *(_BYTE *)((p_h >> 3) + 0x7FFF8000) )
    goto LABEL_62;
  v14 = *(_QWORD *)p_h + 8LL;
  if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
  {
LABEL_63:
    __asan_report_load8(v14);
LABEL_64:
    v15 = p_wg1;
    __asan_report_load8(p_wg1);
    goto LABEL_65;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)p_h + 8LL))(p_h);
LABEL_35:
  if ( !p_wg1 )
    goto LABEL_39;
  if ( *(_BYTE *)((p_wg1 >> 3) + 0x7FFF8000) )
    goto LABEL_64;
  v15 = *(_QWORD *)p_wg1 + 8LL;
  if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
  {
LABEL_65:
    __asan_report_load8(v15);
    goto LABEL_66;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)p_wg1 + 8LL))(p_wg1);
LABEL_39:
  if ( impl )
  {
    if ( !*(_BYTE *)((impl >> 3) + 0x7FFF8000) )
    {
      v16 = *(_QWORD *)impl + 8LL;
      if ( !*(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)impl + 8LL))(impl);
        return (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> >::executor_type)a1;
      }
LABEL_67:
      __asan_report_load8(v16);
      JUMPOUT(0x19C5F8EFLL);
    }
LABEL_66:
    v16 = impl;
    __asan_report_load8(impl);
    goto LABEL_67;
  }
  return (boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> >::executor_type)a1;
};

// Line 373: range 0000000019C37466-0000000019C382C8
// local variable allocation has failed, the output may be wrong!
void __fastcall boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::complete_now<boost::system::error_code &,unsigned long &>(
        boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const this,
        unsigned __int64 a2,
        boost::system::error_code **a3,
        boost::system::error_code *args_0,
        unsigned __int64 *args_1)
{
  boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *p_h; // rbp
  const boost::system::error_category *v6; // r12
  boost::system::error_code **v7; // r13
  boost::system::error_code *v8; // r14
  int (**vptr_async_base)(...); // rax
  unsigned __int64 v10; // rax
  boost::system::error_code **v11; // rsi OVERLAPPED
  const boost::system::error_category *v12; // rdx
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::transfer_op<false,boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> >,boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > *v13; // rdi
  std::size_t v14; // rcx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    vptr_async_base = (int (**)(...))__asan_report_load8(this);
    goto LABEL_10;
  }
  v6 = (const boost::system::error_category *)a2;
  v7 = a3;
  vptr_async_base = this->_vptr_async_base;
  if ( *(_BYTE *)(((unsigned __int64)this->_vptr_async_base >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_load8(vptr_async_base);
    goto LABEL_11;
  }
  (*vptr_async_base)(this, a2, (unsigned __int64)this->_vptr_async_base >> 3, args_0, args_1);
  boost::asio::executor_work_guard<boost::asio::executor>::reset(&this->wg1_);
  p_h = &this->h_;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    __asan_report_load8(v7);
    goto LABEL_12;
  }
  v8 = *v7;
  if ( !*(_WORD *)((a2 >> 3) + 0x7FFF8000) )
  {
    v7 = *(boost::system::error_code ***)a2;
    v6 = *(const boost::system::error_category **)(a2 + 8);
    if ( (unsigned int)*(_QWORD *)a2 )
      goto LABEL_6;
    goto LABEL_13;
  }
LABEL_12:
  __asan_report_load16(v6);
LABEL_13:
  if ( *(_BYTE *)(((unsigned __int64)&p_h->sr_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&p_h->sr_);
    goto LABEL_16;
  }
  a2 = (unsigned __int64)v8;
  boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::consume(
    p_h->sr_,
    (std::size_t)v8);
LABEL_6:
  if ( *(_BYTE *)(((unsigned __int64)p_h >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    v10 = __asan_report_load8(p_h);
    goto LABEL_17;
  }
  v10 = (unsigned __int64)this->h_._vptr_async_base;
  if ( !*(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
  {
    (*(void (__fastcall **)(boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *))v10)(p_h);
    boost::asio::executor_work_guard<boost::asio::executor>::reset(&p_h->wg1_);
    v11 = v7;
    v12 = v6;
    boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::operator()(
      &p_h->h_,
      *(boost::beast::error_code *)&v11,
      (std::size_t)v8);
    return;
  }
LABEL_17:
  v13 = (boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::transfer_op<false,boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> >,boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > *)v10;
  __asan_report_load8(v10);
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::transfer_op<false,boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>,boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>::operator()(
    v13,
    *(boost::beast::error_code *)&a2,
    v14);
};

// Line 373: range 0000000019C87550-0000000019C881FC
// local variable allocation has failed, the output may be wrong!
void __fastcall boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::complete_now<boost::system::error_code &,unsigned long &>(
        boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > *const this,
        unsigned __int64 a2,
        boost::system::error_code **a3,
        boost::system::error_code *args_0,
        unsigned __int64 *args_1)
{
  boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *p_h; // rbp
  const boost::system::error_category *v6; // r12
  boost::system::error_code **v7; // r13
  boost::system::error_code *v8; // r14
  int (**vptr_async_base)(...); // rax
  unsigned __int64 v10; // rax
  boost::system::error_code **v11; // rsi OVERLAPPED
  const boost::system::error_category *v12; // rdx
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *v13; // rdi
  std::size_t v14; // rcx
  int v15; // r8d

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    vptr_async_base = (int (**)(...))__asan_report_load8(this);
    goto LABEL_10;
  }
  v6 = (const boost::system::error_category *)a2;
  v7 = a3;
  vptr_async_base = this->_vptr_async_base;
  if ( *(_BYTE *)(((unsigned __int64)this->_vptr_async_base >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_load8(vptr_async_base);
    goto LABEL_11;
  }
  (*vptr_async_base)(this, a2, (unsigned __int64)this->_vptr_async_base >> 3, args_0, args_1);
  boost::asio::executor_work_guard<boost::asio::executor>::reset(&this->wg1_);
  p_h = &this->h_;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    __asan_report_load8(v7);
    goto LABEL_12;
  }
  v8 = *v7;
  if ( !*(_WORD *)((a2 >> 3) + 0x7FFF8000) )
  {
    v7 = *(boost::system::error_code ***)a2;
    v6 = *(const boost::system::error_category **)(a2 + 8);
    if ( (unsigned int)*(_QWORD *)a2 )
      goto LABEL_6;
    goto LABEL_13;
  }
LABEL_12:
  __asan_report_load16(v6);
LABEL_13:
  if ( *(_BYTE *)(((unsigned __int64)&p_h->sr_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&p_h->sr_);
    goto LABEL_16;
  }
  a2 = (unsigned __int64)v8;
  boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::consume(
    p_h->sr_,
    (std::size_t)v8);
LABEL_6:
  if ( *(_BYTE *)(((unsigned __int64)p_h >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    v10 = __asan_report_load8(p_h);
    goto LABEL_17;
  }
  v10 = (unsigned __int64)this->h_._vptr_async_base;
  if ( !*(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
  {
    (*(void (__fastcall **)(boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *))v10)(p_h);
    boost::asio::executor_work_guard<boost::asio::executor>::reset(&p_h->wg1_);
    v11 = v7;
    v12 = v6;
    boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::operator()(
      &p_h->h_,
      *(boost::beast::error_code *)&v11,
      (std::size_t)v8);
    return;
  }
LABEL_17:
  v13 = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *)v10;
  __asan_report_load8(v10);
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::operator()(
    v13,
    *(boost::system::error_code *)&a2,
    v14,
    v15);
};

// Line 585: range 0000000019B74BD4-0000000019B74C7B
void __fastcall boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>::before_invoke_hook(
        boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::asio::executor,std::allocator<void> > *const this)
{
  boost::beast::detail::stable_base *v1; // rbp
  __int64 v3; // rax
  unsigned __int64 list; // rdi
  unsigned __int64 v5; // rdx

  while ( 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->list_ >> 3) + 0x7FFF8000) )
    {
      v3 = __asan_report_load8(&this->list_);
LABEL_3:
      list = v3;
      __asan_report_load8(v3);
LABEL_4:
      __asan_report_load8(list);
LABEL_5:
      __asan_report_load8(v5);
      goto LABEL_6;
    }
    list = (unsigned __int64)this->list_;
    if ( !list )
      return;
    v3 = list + 8;
    if ( *(_BYTE *)(((list + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_3;
    v1 = *(boost::beast::detail::stable_base **)(list + 8);
    if ( *(_BYTE *)((list >> 3) + 0x7FFF8000) )
      goto LABEL_4;
    v5 = *(_QWORD *)list + 16LL;
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      goto LABEL_5;
    (*(void (**)(void))(*(_QWORD *)list + 16LL))();
    if ( *(_BYTE *)(((unsigned __int64)&this->list_ >> 3) + 0x7FFF8000) )
      break;
LABEL_6:
    this->list_ = v1;
  }
  __asan_report_store8();
};
