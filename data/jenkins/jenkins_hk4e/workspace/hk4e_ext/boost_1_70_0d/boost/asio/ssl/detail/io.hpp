// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/ssl/detail/io.hpp

// Line 96: range 0000000019BF92AC-0000000019BF997A
void __fastcall boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::~io_op(
        boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const this)
{
  boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *p_h; // rbp
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *p_i; // rdi
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy f; // [rsp+8h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->handler_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_9;
  }
  this->handler_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                                                  + 2);
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard(&this->handler_.wg1_);
  if ( *(_BYTE *)(((unsigned __int64)&this->handler_.h_ >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_store8();
    goto LABEL_10;
  }
  this->handler_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                                     + 2);
  p_h = &this->handler_.h_;
  if ( *(_BYTE *)(((unsigned __int64)&this->handler_.h_ >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    p_i = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *)p_h;
    __asan_report_store8();
    goto LABEL_11;
  }
  this->handler_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                                                     + 2);
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard(&this->handler_.h_.wg1_);
  p_i = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *)&this->handler_.h_.h_;
  if ( *(_BYTE *)(((unsigned __int64)&this->handler_.h_.h_ >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    __asan_report_store8();
    goto LABEL_12;
  }
  this->handler_.h_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                                                        + 2);
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard(&this->handler_.h_.h_.wg1_);
  p_i = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *)&this->handler_.h_.h_.h_;
  if ( *(_BYTE *)(((unsigned __int64)&this->handler_.h_.h_.h_ >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_store8();
    goto LABEL_13;
  }
  this->handler_.h_.h_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                                           + 2);
  boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>::~stable_async_base(&this->handler_.h_.h_.h_);
  f.self = &this->op_.buffers_.end_.it_.it_.it_;
  p_i = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *)&this->op_.buffers_.end_.it_.it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&this->op_.buffers_.end_.it_.it_.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
  {
    boost::mp11::mp_with_index<4ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
      this->op_.buffers_.end_.it_.it_.it_.i_,
      &f);
    return;
  }
LABEL_13:
  __asan_report_load1(p_i);
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::~io_op(p_i);
};

// Line 96: range 0000000019BF9980-0000000019BFA53D
void __fastcall boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::~io_op(
        boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const this)
{
  boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *p_h; // rbp
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *p_i; // rdi
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy f; // [rsp+8h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->handler_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_9;
  }
  this->handler_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                                                  + 2);
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard(&this->handler_.wg1_);
  if ( *(_BYTE *)(((unsigned __int64)&this->handler_.h_ >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_store8();
    goto LABEL_10;
  }
  this->handler_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                                     + 2);
  p_h = &this->handler_.h_;
  if ( *(_BYTE *)(((unsigned __int64)&this->handler_.h_ >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    p_i = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *)p_h;
    __asan_report_store8();
    goto LABEL_11;
  }
  this->handler_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                                                     + 2);
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard(&this->handler_.h_.wg1_);
  p_i = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *)&this->handler_.h_.h_;
  if ( *(_BYTE *)(((unsigned __int64)&this->handler_.h_.h_ >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    __asan_report_store8();
    goto LABEL_12;
  }
  this->handler_.h_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                                                        + 2);
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard(&this->handler_.h_.h_.wg1_);
  p_i = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *)&this->handler_.h_.h_.h_;
  if ( *(_BYTE *)(((unsigned __int64)&this->handler_.h_.h_.h_ >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_store8();
    goto LABEL_13;
  }
  this->handler_.h_.h_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                                           + 2);
  boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>::~stable_async_base(&this->handler_.h_.h_.h_);
  f.self = &this->op_.buffers_.end_.it_.it_.it_;
  p_i = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *)&this->op_.buffers_.end_.it_.it_.it_.i_;
  if ( *(char *)(((unsigned __int64)&this->op_.buffers_.end_.it_.it_.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
  {
    boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
      this->op_.buffers_.end_.it_.it_.it_.i_,
      &f);
    return;
  }
LABEL_13:
  __asan_report_load1(p_i);
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::~io_op(p_i);
};

// Line 124: range 0000000019C4AE82-0000000019C4B3BA
void __fastcall boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::io_op(
        boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const this,
        boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *other)
{
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *v2; // rbx
  char v3; // al
  char v4; // al
  char v5; // dl
  char v6; // dl
  char v7; // al
  char v8; // al

  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
  {
    this = other;
    __asan_report_load8(other);
    goto LABEL_24;
  }
  v2 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_store8();
    goto LABEL_25;
  }
  this->next_layer_ = other->next_layer_;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->core_;
  if ( *(_BYTE *)(((unsigned __int64)&other->core_ >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_load8(this);
    goto LABEL_26;
  }
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->core_;
  if ( *(_BYTE *)(((unsigned __int64)&v2->core_ >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_store8();
LABEL_27:
    __asan_report_load4(this);
LABEL_28:
    __asan_report_store4(this);
LABEL_29:
    __asan_report_load4(this);
LABEL_30:
    __asan_report_store4(this);
    goto LABEL_31;
  }
  v2->core_ = other->core_;
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::buffers_prefix_view(
    &v2->op_.buffers_,
    &other->op_.buffers_);
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->start_;
  v3 = *(_BYTE *)(((unsigned __int64)&other->start_ >> 3) + 0x7FFF8000);
  if ( v3 && v3 <= 3 )
    goto LABEL_27;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->start_;
  v4 = *(_BYTE *)(((unsigned __int64)&v2->start_ >> 3) + 0x7FFF8000);
  if ( v4 && v4 <= 3 )
    goto LABEL_28;
  v2->start_ = other->start_;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->want_;
  v5 = *(_BYTE *)(((unsigned __int64)&other->want_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)other + 92) & 7) + 3) >= v5 && v5 )
    goto LABEL_29;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->want_;
  v6 = *(_BYTE *)(((unsigned __int64)&v2->want_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v2 + 92) & 7) + 3) >= v6 && v6 )
    goto LABEL_30;
  v2->want_ = other->want_;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->ec_;
  if ( *(_WORD *)(((unsigned __int64)&v2->ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_store16(this);
    goto LABEL_32;
  }
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->ec_;
  if ( *(_WORD *)(((unsigned __int64)&other->ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_load16(this);
    goto LABEL_33;
  }
  v2->ec_ = (boost::system::error_code)_mm_loadu_si128((const __m128i *)&other->ec_);
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->bytes_transferred_;
  if ( *(_BYTE *)(((unsigned __int64)&other->bytes_transferred_ >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_load8(this);
    goto LABEL_34;
  }
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->bytes_transferred_;
  if ( *(_BYTE *)(((unsigned __int64)&v2->bytes_transferred_ >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_store8();
LABEL_35:
    __asan_report_store4(this);
LABEL_36:
    __asan_report_load4(this);
    goto LABEL_37;
  }
  v2->bytes_transferred_ = other->bytes_transferred_;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::async_base(
    &v2->handler_,
    &other->handler_);
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->handler_.boost::asio::coroutine;
  v7 = *(_BYTE *)(((unsigned __int64)&v2->handler_.boost::asio::coroutine >> 3) + 0x7FFF8000);
  if ( v7 && v7 <= 3 )
    goto LABEL_35;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->handler_.boost::asio::coroutine;
  v8 = *(_BYTE *)(((unsigned __int64)&other->handler_.boost::asio::coroutine >> 3) + 0x7FFF8000);
  if ( v8 && v8 <= 3 )
    goto LABEL_36;
  v2->handler_.value_ = other->handler_.value_;
  if ( *(_BYTE *)(((unsigned __int64)&v2->handler_ >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_store8();
    JUMPOUT(0x19C4B0D9LL);
  }
  v2->handler_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>
                                                + 2);
};

// Line 124: range 0000000019C1D45A-0000000019C1DE0A
void __fastcall boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::io_op(
        boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const this,
        boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *other)
{
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *v2; // rbx
  char v3; // al
  char v4; // al
  char v5; // dl
  char v6; // dl
  char v7; // al
  char v8; // al

  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
  {
    this = other;
    __asan_report_load8(other);
    goto LABEL_24;
  }
  v2 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_store8();
    goto LABEL_25;
  }
  this->next_layer_ = other->next_layer_;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->core_;
  if ( *(_BYTE *)(((unsigned __int64)&other->core_ >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_load8(this);
    goto LABEL_26;
  }
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->core_;
  if ( *(_BYTE *)(((unsigned __int64)&v2->core_ >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_store8();
LABEL_27:
    __asan_report_load4(this);
LABEL_28:
    __asan_report_store4(this);
LABEL_29:
    __asan_report_load4(this);
LABEL_30:
    __asan_report_store4(this);
    goto LABEL_31;
  }
  v2->core_ = other->core_;
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>::buffers_prefix_view(
    &v2->op_.buffers_,
    &other->op_.buffers_);
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->start_;
  v3 = *(_BYTE *)(((unsigned __int64)&other->start_ >> 3) + 0x7FFF8000);
  if ( v3 && v3 <= 3 )
    goto LABEL_27;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->start_;
  v4 = *(_BYTE *)(((unsigned __int64)&v2->start_ >> 3) + 0x7FFF8000);
  if ( v4 && v4 <= 3 )
    goto LABEL_28;
  v2->start_ = other->start_;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->want_;
  v5 = *(_BYTE *)(((unsigned __int64)&other->want_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)other + 108) & 7) + 3) >= v5 && v5 )
    goto LABEL_29;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->want_;
  v6 = *(_BYTE *)(((unsigned __int64)&v2->want_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v2 + 108) & 7) + 3) >= v6 && v6 )
    goto LABEL_30;
  v2->want_ = other->want_;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->ec_;
  if ( *(_WORD *)(((unsigned __int64)&v2->ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_store16(this);
    goto LABEL_32;
  }
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->ec_;
  if ( *(_WORD *)(((unsigned __int64)&other->ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_load16(this);
    goto LABEL_33;
  }
  v2->ec_ = (boost::system::error_code)_mm_loadu_si128((const __m128i *)&other->ec_);
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->bytes_transferred_;
  if ( *(_BYTE *)(((unsigned __int64)&other->bytes_transferred_ >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_load8(this);
    goto LABEL_34;
  }
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->bytes_transferred_;
  if ( *(_BYTE *)(((unsigned __int64)&v2->bytes_transferred_ >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_store8();
LABEL_35:
    __asan_report_store4(this);
LABEL_36:
    __asan_report_load4(this);
    goto LABEL_37;
  }
  v2->bytes_transferred_ = other->bytes_transferred_;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::async_base(
    &v2->handler_,
    &other->handler_);
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->handler_.boost::asio::coroutine;
  v7 = *(_BYTE *)(((unsigned __int64)&v2->handler_.boost::asio::coroutine >> 3) + 0x7FFF8000);
  if ( v7 && v7 <= 3 )
    goto LABEL_35;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->handler_.boost::asio::coroutine;
  v8 = *(_BYTE *)(((unsigned __int64)&other->handler_.boost::asio::coroutine >> 3) + 0x7FFF8000);
  if ( v8 && v8 <= 3 )
    goto LABEL_36;
  v2->handler_.value_ = other->handler_.value_;
  if ( *(_BYTE *)(((unsigned __int64)&v2->handler_ >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_store8();
    JUMPOUT(0x19C1D6CDLL);
  }
  v2->handler_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>
                                                + 2);
};

// Line 124: range 0000000019C2D890-0000000019C2EEF1
void __fastcall boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::io_op(
        boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const this,
        boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *other)
{
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *v2; // rbx
  char v3; // al
  char v4; // al
  char v5; // dl
  char v6; // dl
  char v7; // al
  char v8; // al

  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
  {
    this = other;
    __asan_report_load8(other);
    goto LABEL_24;
  }
  v2 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_store8();
    goto LABEL_25;
  }
  this->next_layer_ = other->next_layer_;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->core_;
  if ( *(_BYTE *)(((unsigned __int64)&other->core_ >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_load8(this);
    goto LABEL_26;
  }
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->core_;
  if ( *(_BYTE *)(((unsigned __int64)&v2->core_ >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_store8();
LABEL_27:
    __asan_report_load4(this);
LABEL_28:
    __asan_report_store4(this);
LABEL_29:
    __asan_report_load4(this);
LABEL_30:
    __asan_report_store4(this);
    goto LABEL_31;
  }
  v2->core_ = other->core_;
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::buffers_prefix_view(
    &v2->op_.buffers_,
    &other->op_.buffers_);
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->start_;
  v3 = *(_BYTE *)(((unsigned __int64)&other->start_ >> 3) + 0x7FFF8000);
  if ( v3 && v3 <= 3 )
    goto LABEL_27;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->start_;
  v4 = *(_BYTE *)(((unsigned __int64)&v2->start_ >> 3) + 0x7FFF8000);
  if ( v4 && v4 <= 3 )
    goto LABEL_28;
  v2->start_ = other->start_;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->want_;
  v5 = *(_BYTE *)(((unsigned __int64)&other->want_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)other + 108) & 7) + 3) >= v5 && v5 )
    goto LABEL_29;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->want_;
  v6 = *(_BYTE *)(((unsigned __int64)&v2->want_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v2 + 108) & 7) + 3) >= v6 && v6 )
    goto LABEL_30;
  v2->want_ = other->want_;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->ec_;
  if ( *(_WORD *)(((unsigned __int64)&v2->ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_store16(this);
    goto LABEL_32;
  }
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->ec_;
  if ( *(_WORD *)(((unsigned __int64)&other->ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_load16(this);
    goto LABEL_33;
  }
  v2->ec_ = (boost::system::error_code)_mm_loadu_si128((const __m128i *)&other->ec_);
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->bytes_transferred_;
  if ( *(_BYTE *)(((unsigned __int64)&other->bytes_transferred_ >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_load8(this);
    goto LABEL_34;
  }
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->bytes_transferred_;
  if ( *(_BYTE *)(((unsigned __int64)&v2->bytes_transferred_ >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_store8();
LABEL_35:
    __asan_report_store4(this);
LABEL_36:
    __asan_report_load4(this);
    goto LABEL_37;
  }
  v2->bytes_transferred_ = other->bytes_transferred_;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::async_base(
    &v2->handler_,
    &other->handler_);
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->handler_.boost::asio::coroutine;
  v7 = *(_BYTE *)(((unsigned __int64)&v2->handler_.boost::asio::coroutine >> 3) + 0x7FFF8000);
  if ( v7 && v7 <= 3 )
    goto LABEL_35;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->handler_.boost::asio::coroutine;
  v8 = *(_BYTE *)(((unsigned __int64)&other->handler_.boost::asio::coroutine >> 3) + 0x7FFF8000);
  if ( v8 && v8 <= 3 )
    goto LABEL_36;
  v2->handler_.value_ = other->handler_.value_;
  if ( *(_BYTE *)(((unsigned __int64)&v2->handler_ >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_store8();
    JUMPOUT(0x19C2DB03LL);
  }
  v2->handler_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>
                                                + 2);
};

// Line 124: range 0000000019C22FB8-0000000019C24D23
void __fastcall boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::io_op(
        boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const this,
        boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *other)
{
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *v2; // rbx
  char v3; // al
  char v4; // al
  char v5; // dl
  char v6; // dl
  char v7; // al
  char v8; // al

  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
  {
    this = other;
    __asan_report_load8(other);
    goto LABEL_24;
  }
  v2 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_store8();
    goto LABEL_25;
  }
  this->next_layer_ = other->next_layer_;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->core_;
  if ( *(_BYTE *)(((unsigned __int64)&other->core_ >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_load8(this);
    goto LABEL_26;
  }
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->core_;
  if ( *(_BYTE *)(((unsigned __int64)&v2->core_ >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_store8();
LABEL_27:
    __asan_report_load4(this);
LABEL_28:
    __asan_report_store4(this);
LABEL_29:
    __asan_report_load4(this);
LABEL_30:
    __asan_report_store4(this);
    goto LABEL_31;
  }
  v2->core_ = other->core_;
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::buffers_prefix_view(
    &v2->op_.buffers_,
    &other->op_.buffers_);
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->start_;
  v3 = *(_BYTE *)(((unsigned __int64)&other->start_ >> 3) + 0x7FFF8000);
  if ( v3 && v3 <= 3 )
    goto LABEL_27;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->start_;
  v4 = *(_BYTE *)(((unsigned __int64)&v2->start_ >> 3) + 0x7FFF8000);
  if ( v4 && v4 <= 3 )
    goto LABEL_28;
  v2->start_ = other->start_;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->want_;
  v5 = *(_BYTE *)(((unsigned __int64)&other->want_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)other + 108) & 7) + 3) >= v5 && v5 )
    goto LABEL_29;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->want_;
  v6 = *(_BYTE *)(((unsigned __int64)&v2->want_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v2 + 108) & 7) + 3) >= v6 && v6 )
    goto LABEL_30;
  v2->want_ = other->want_;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->ec_;
  if ( *(_WORD *)(((unsigned __int64)&v2->ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_store16(this);
    goto LABEL_32;
  }
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->ec_;
  if ( *(_WORD *)(((unsigned __int64)&other->ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_load16(this);
    goto LABEL_33;
  }
  v2->ec_ = (boost::system::error_code)_mm_loadu_si128((const __m128i *)&other->ec_);
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->bytes_transferred_;
  if ( *(_BYTE *)(((unsigned __int64)&other->bytes_transferred_ >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_load8(this);
    goto LABEL_34;
  }
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->bytes_transferred_;
  if ( *(_BYTE *)(((unsigned __int64)&v2->bytes_transferred_ >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_store8();
LABEL_35:
    __asan_report_store4(this);
LABEL_36:
    __asan_report_load4(this);
    goto LABEL_37;
  }
  v2->bytes_transferred_ = other->bytes_transferred_;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::async_base(
    &v2->handler_,
    &other->handler_);
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->handler_.boost::asio::coroutine;
  v7 = *(_BYTE *)(((unsigned __int64)&v2->handler_.boost::asio::coroutine >> 3) + 0x7FFF8000);
  if ( v7 && v7 <= 3 )
    goto LABEL_35;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->handler_.boost::asio::coroutine;
  v8 = *(_BYTE *)(((unsigned __int64)&other->handler_.boost::asio::coroutine >> 3) + 0x7FFF8000);
  if ( v8 && v8 <= 3 )
    goto LABEL_36;
  v2->handler_.value_ = other->handler_.value_;
  if ( *(_BYTE *)(((unsigned __int64)&v2->handler_ >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_store8();
    JUMPOUT(0x19C2322BLL);
  }
  v2->handler_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>
                                                + 2);
};

// Line 124: range 0000000019C29BD6-0000000019C2A07B
void __fastcall boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::io_op(
        boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const this,
        boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *other)
{
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *v2; // rbx
  char v3; // al
  char v4; // al
  char v5; // dl
  char v6; // dl
  char v7; // al
  char v8; // al

  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
  {
    this = other;
    __asan_report_load8(other);
    goto LABEL_24;
  }
  v2 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_store8();
    goto LABEL_25;
  }
  this->next_layer_ = other->next_layer_;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->core_;
  if ( *(_BYTE *)(((unsigned __int64)&other->core_ >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_load8(this);
    goto LABEL_26;
  }
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->core_;
  if ( *(_BYTE *)(((unsigned __int64)&v2->core_ >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_store8();
LABEL_27:
    __asan_report_load4(this);
LABEL_28:
    __asan_report_store4(this);
LABEL_29:
    __asan_report_load4(this);
LABEL_30:
    __asan_report_store4(this);
    goto LABEL_31;
  }
  v2->core_ = other->core_;
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::buffers_prefix_view(
    &v2->op_.buffers_,
    &other->op_.buffers_);
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->start_;
  v3 = *(_BYTE *)(((unsigned __int64)&other->start_ >> 3) + 0x7FFF8000);
  if ( v3 && v3 <= 3 )
    goto LABEL_27;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->start_;
  v4 = *(_BYTE *)(((unsigned __int64)&v2->start_ >> 3) + 0x7FFF8000);
  if ( v4 && v4 <= 3 )
    goto LABEL_28;
  v2->start_ = other->start_;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->want_;
  v5 = *(_BYTE *)(((unsigned __int64)&other->want_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)other + 92) & 7) + 3) >= v5 && v5 )
    goto LABEL_29;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->want_;
  v6 = *(_BYTE *)(((unsigned __int64)&v2->want_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v2 + 92) & 7) + 3) >= v6 && v6 )
    goto LABEL_30;
  v2->want_ = other->want_;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->ec_;
  if ( *(_WORD *)(((unsigned __int64)&v2->ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_store16(this);
    goto LABEL_32;
  }
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->ec_;
  if ( *(_WORD *)(((unsigned __int64)&other->ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_load16(this);
    goto LABEL_33;
  }
  v2->ec_ = (boost::system::error_code)_mm_loadu_si128((const __m128i *)&other->ec_);
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->bytes_transferred_;
  if ( *(_BYTE *)(((unsigned __int64)&other->bytes_transferred_ >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_load8(this);
    goto LABEL_34;
  }
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->bytes_transferred_;
  if ( *(_BYTE *)(((unsigned __int64)&v2->bytes_transferred_ >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_store8();
LABEL_35:
    __asan_report_store4(this);
LABEL_36:
    __asan_report_load4(this);
    goto LABEL_37;
  }
  v2->bytes_transferred_ = other->bytes_transferred_;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::async_base(
    &v2->handler_,
    &other->handler_);
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->handler_.boost::asio::coroutine;
  v7 = *(_BYTE *)(((unsigned __int64)&v2->handler_.boost::asio::coroutine >> 3) + 0x7FFF8000);
  if ( v7 && v7 <= 3 )
    goto LABEL_35;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->handler_.boost::asio::coroutine;
  v8 = *(_BYTE *)(((unsigned __int64)&other->handler_.boost::asio::coroutine >> 3) + 0x7FFF8000);
  if ( v8 && v8 <= 3 )
    goto LABEL_36;
  v2->handler_.value_ = other->handler_.value_;
  if ( *(_BYTE *)(((unsigned __int64)&v2->handler_ >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_store8();
    JUMPOUT(0x19C29E2DLL);
  }
  v2->handler_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>
                                                + 2);
};

// Line 124: range 0000000019C2670C-0000000019C282FD
void __fastcall boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::io_op(
        boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const this,
        boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *other)
{
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *v2; // rbx
  char v3; // al
  char v4; // al
  char v5; // dl
  char v6; // dl
  char v7; // al
  char v8; // al

  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
  {
    this = other;
    __asan_report_load8(other);
    goto LABEL_24;
  }
  v2 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_store8();
    goto LABEL_25;
  }
  this->next_layer_ = other->next_layer_;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->core_;
  if ( *(_BYTE *)(((unsigned __int64)&other->core_ >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_load8(this);
    goto LABEL_26;
  }
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->core_;
  if ( *(_BYTE *)(((unsigned __int64)&v2->core_ >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_store8();
LABEL_27:
    __asan_report_load4(this);
LABEL_28:
    __asan_report_store4(this);
LABEL_29:
    __asan_report_load4(this);
LABEL_30:
    __asan_report_store4(this);
    goto LABEL_31;
  }
  v2->core_ = other->core_;
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::buffers_prefix_view(
    &v2->op_.buffers_,
    &other->op_.buffers_);
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->start_;
  v3 = *(_BYTE *)(((unsigned __int64)&other->start_ >> 3) + 0x7FFF8000);
  if ( v3 && v3 <= 3 )
    goto LABEL_27;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->start_;
  v4 = *(_BYTE *)(((unsigned __int64)&v2->start_ >> 3) + 0x7FFF8000);
  if ( v4 && v4 <= 3 )
    goto LABEL_28;
  v2->start_ = other->start_;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->want_;
  v5 = *(_BYTE *)(((unsigned __int64)&other->want_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)other + 92) & 7) + 3) >= v5 && v5 )
    goto LABEL_29;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->want_;
  v6 = *(_BYTE *)(((unsigned __int64)&v2->want_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v2 + 92) & 7) + 3) >= v6 && v6 )
    goto LABEL_30;
  v2->want_ = other->want_;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->ec_;
  if ( *(_WORD *)(((unsigned __int64)&v2->ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_store16(this);
    goto LABEL_32;
  }
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->ec_;
  if ( *(_WORD *)(((unsigned __int64)&other->ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_load16(this);
    goto LABEL_33;
  }
  v2->ec_ = (boost::system::error_code)_mm_loadu_si128((const __m128i *)&other->ec_);
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->bytes_transferred_;
  if ( *(_BYTE *)(((unsigned __int64)&other->bytes_transferred_ >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_load8(this);
    goto LABEL_34;
  }
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->bytes_transferred_;
  if ( *(_BYTE *)(((unsigned __int64)&v2->bytes_transferred_ >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_store8();
LABEL_35:
    __asan_report_store4(this);
LABEL_36:
    __asan_report_load4(this);
    goto LABEL_37;
  }
  v2->bytes_transferred_ = other->bytes_transferred_;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::async_base(
    &v2->handler_,
    &other->handler_);
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->handler_.boost::asio::coroutine;
  v7 = *(_BYTE *)(((unsigned __int64)&v2->handler_.boost::asio::coroutine >> 3) + 0x7FFF8000);
  if ( v7 && v7 <= 3 )
    goto LABEL_35;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->handler_.boost::asio::coroutine;
  v8 = *(_BYTE *)(((unsigned __int64)&other->handler_.boost::asio::coroutine >> 3) + 0x7FFF8000);
  if ( v8 && v8 <= 3 )
    goto LABEL_36;
  v2->handler_.value_ = other->handler_.value_;
  if ( *(_BYTE *)(((unsigned __int64)&v2->handler_ >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_store8();
    JUMPOUT(0x19C26963LL);
  }
  v2->handler_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>
                                                + 2);
};

// Line 124: range 0000000019C1F7F4-0000000019C2002F
void __fastcall boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::io_op(
        boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const this,
        boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *other)
{
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *v2; // rbx
  char v3; // al
  char v4; // al
  char v5; // dl
  char v6; // dl
  char v7; // al
  char v8; // al

  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
  {
    this = other;
    __asan_report_load8(other);
    goto LABEL_24;
  }
  v2 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_store8();
    goto LABEL_25;
  }
  this->next_layer_ = other->next_layer_;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->core_;
  if ( *(_BYTE *)(((unsigned __int64)&other->core_ >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_load8(this);
    goto LABEL_26;
  }
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->core_;
  if ( *(_BYTE *)(((unsigned __int64)&v2->core_ >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_store8();
LABEL_27:
    __asan_report_load4(this);
LABEL_28:
    __asan_report_store4(this);
LABEL_29:
    __asan_report_load4(this);
LABEL_30:
    __asan_report_store4(this);
    goto LABEL_31;
  }
  v2->core_ = other->core_;
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>::buffers_prefix_view(
    &v2->op_.buffers_,
    &other->op_.buffers_);
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->start_;
  v3 = *(_BYTE *)(((unsigned __int64)&other->start_ >> 3) + 0x7FFF8000);
  if ( v3 && v3 <= 3 )
    goto LABEL_27;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->start_;
  v4 = *(_BYTE *)(((unsigned __int64)&v2->start_ >> 3) + 0x7FFF8000);
  if ( v4 && v4 <= 3 )
    goto LABEL_28;
  v2->start_ = other->start_;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->want_;
  v5 = *(_BYTE *)(((unsigned __int64)&other->want_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)other + 92) & 7) + 3) >= v5 && v5 )
    goto LABEL_29;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->want_;
  v6 = *(_BYTE *)(((unsigned __int64)&v2->want_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v2 + 92) & 7) + 3) >= v6 && v6 )
    goto LABEL_30;
  v2->want_ = other->want_;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->ec_;
  if ( *(_WORD *)(((unsigned __int64)&v2->ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_store16(this);
    goto LABEL_32;
  }
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->ec_;
  if ( *(_WORD *)(((unsigned __int64)&other->ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_load16(this);
    goto LABEL_33;
  }
  v2->ec_ = (boost::system::error_code)_mm_loadu_si128((const __m128i *)&other->ec_);
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->bytes_transferred_;
  if ( *(_BYTE *)(((unsigned __int64)&other->bytes_transferred_ >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_load8(this);
    goto LABEL_34;
  }
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->bytes_transferred_;
  if ( *(_BYTE *)(((unsigned __int64)&v2->bytes_transferred_ >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_store8();
LABEL_35:
    __asan_report_store4(this);
LABEL_36:
    __asan_report_load4(this);
    goto LABEL_37;
  }
  v2->bytes_transferred_ = other->bytes_transferred_;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::async_base(
    &v2->handler_,
    &other->handler_);
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v2->handler_.boost::asio::coroutine;
  v7 = *(_BYTE *)(((unsigned __int64)&v2->handler_.boost::asio::coroutine >> 3) + 0x7FFF8000);
  if ( v7 && v7 <= 3 )
    goto LABEL_35;
  this = (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&other->handler_.boost::asio::coroutine;
  v8 = *(_BYTE *)(((unsigned __int64)&other->handler_.boost::asio::coroutine >> 3) + 0x7FFF8000);
  if ( v8 && v8 <= 3 )
    goto LABEL_36;
  v2->handler_.value_ = other->handler_.value_;
  if ( *(_BYTE *)(((unsigned __int64)&v2->handler_ >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_store8();
    JUMPOUT(0x19C1FA4BLL);
  }
  v2->handler_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>
                                                + 2);
};

// Line 137: range 0000000019C99348-0000000019C9A32D
// local variable allocation has failed, the output may be wrong!
void __fastcall boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::operator()(
        boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const this,
        boost::system::error_code ec,
        std::size_t bytes_transferred,
        int start)
{
  char *core; // r14
  unsigned __int64 v6; // r15
  boost::asio::ssl::detail::stream_core *v7; // rbp
  _DWORD *v8; // r13
  void *p_start; // rdi
  char v10; // al
  void *p_ec; // rdi
  char v12; // al
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int8 *v15; // rcx
  char *v16; // rsi
  boost::asio::ssl::detail::engine::want v17; // eax
  char v18; // cl
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *next_layer; // rcx
  boost::asio::ssl::detail::stream_core *v20; // rax
  __int64 M_end_of_storage; // rax
  std::_Vector_base<unsigned char>::pointer v22; // rdi
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned __int8 *M_start; // rax
  unsigned __int64 v26; // rax
  std::_Vector_base<unsigned char>::pointer v27; // rdx
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // rcx
  __int64 v34; // rdi
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  std::_Vector_base<unsigned char>::pointer M_finish; // rsi
  boost::asio::ssl::detail::stream_core **v39; // rdi
  boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> >::time_rep_type v40; // rax
  boost::asio::ssl::detail::stream_core **p_implementation; // rdi
  void *p_input_buffer; // rdi
  char *v43; // rsi
  const boost::asio::const_buffer *v44; // rsi
  boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::implementation_type *v45; // rsi
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *v46; // rcx
  boost::asio::ssl::detail::stream_core *v47; // rax
  boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> >::time_rep_type v48; // rax
  boost::asio::ssl::detail::stream_core **v49; // rdi
  boost::asio::ssl::detail::stream_core **v50; // rdi
  boost::asio::mutable_buffer output; // rax
  char v52; // dl
  boost::asio::ssl::detail::engine::want want; // eax
  void *p_bytes_transferred; // rdi
  char v55; // al
  std::size_t v56; // rbp
  boost::asio::ssl::detail::stream_core **p_core; // rdi
  boost::asio::ssl::detail::stream_core *v58; // rax
  std::size_t size; // rdx
  std::size_t v60; // rsi
  unsigned __int64 v61; // rsi
  char *v62; // rsi
  const boost::asio::const_buffer *v63; // rsi
  char *v64; // rdi
  boost::system::error_code *v65; // rdi
  char v66; // al
  const boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > > *b; // r8
  std::size_t remain; // r9
  const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> *v69; // rsi
  std::size_t v70; // rdi
  boost::beast::buffers_suffix<boost::asio::const_buffer>::const_iterator::iter_type it; // rax
  const boost::beast::buffers_suffix<boost::asio::const_buffer> *v72; // rdx
  char *v73; // rsi
  boost::asio::ssl::detail::stream_core **v74; // rdi
  boost::asio::ssl::detail::stream_core **p_pending_write; // rdi
  boost::asio::ssl::detail::stream_core *v76; // rbp
  unsigned __int64 v77; // rax
  boost::system::error_code *v78; // rcx
  unsigned __int64 *v79; // r8
  unsigned __int64 v80; // rax
  boost::system::error_code *v81; // rcx
  unsigned __int64 *v82; // r8
  boost::date_time::int_adapter<long int>::int_type v84; // [rsp+0h] [rbp-3D8h]
  boost::date_time::int_adapter<long int>::int_type v85; // [rsp+0h] [rbp-3D8h]
  boost::date_time::int_adapter<long int>::int_type value; // [rsp+0h] [rbp-3D8h]
  std::size_t *v89; // [rsp+28h] [rbp-3B0h]
  boost::system::error_code *eca; // [rsp+30h] [rbp-3A8h]
  boost::system::error_code *ecb; // [rsp+30h] [rbp-3A8h]
  boost::system::error_code *ecc; // [rsp+30h] [rbp-3A8h]
  boost::asio::ssl::detail::stream_core *v93; // [rsp+38h] [rbp-3A0h]
  __m128i si128; // [rsp+40h] [rbp-398h]
  unsigned __int64 v95; // [rsp+50h] [rbp-388h]
  __int64 v96; // [rsp+58h] [rbp-380h]
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > >::const_iterator v97; // [rsp+60h] [rbp-378h] BYREF
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > >::const_iterator v98; // [rsp+90h] [rbp-348h] BYREF
  boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > > v99; // [rsp+C0h] [rbp-318h] BYREF
  char v100[408]; // [rsp+240h] [rbp-198h] BYREF

  v6 = (unsigned __int64)v100;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v13 = __asan_stack_malloc_3(352LL);
    if ( v13 )
      v6 = v13;
  }
  v7 = (boost::asio::ssl::detail::stream_core *)(v6 + 352);
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "5 48 8 17 bytes_transferred 80 16 6 buffer 112 48 9 begin:137 192 48 7 end:137 272 48 4 iter";
  *(_QWORD *)(v6 + 16) = boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::operator();
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234881024;
  v8[536862722] = 62194;
  v8[536862723] = 62194;
  v8[536862725] = -218959118;
  v8[536862727] = -219021312;
  v8[536862728] = 62194;
  v8[536862730] = -202116109;
  p_start = &this->start_;
  v10 = *(_BYTE *)(((unsigned __int64)&this->start_ >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
  {
    __asan_report_store4(p_start);
    goto LABEL_14;
  }
  this->start_ = start;
  if ( start == 1 )
    goto LABEL_153;
LABEL_5:
  if ( bytes_transferred != -1LL )
  {
    p_ec = &this->ec_;
    v12 = *(_BYTE *)(((unsigned __int64)&this->ec_ >> 3) + 0x7FFF8000);
    if ( !v12 || v12 > 3 )
    {
      if ( !this->ec_.val_ )
      {
        p_ec = &this->ec_;
        if ( !*(_WORD *)(((unsigned __int64)&this->ec_ >> 3) + 0x7FFF8000) )
        {
          this->ec_ = ec;
          goto LABEL_129;
        }
        goto LABEL_127;
      }
      goto LABEL_129;
    }
    goto LABEL_126;
  }
  while ( 1 )
  {
    bytes_transferred = 0LL;
LABEL_129:
    v52 = *(_BYTE *)(((unsigned __int64)&this->want_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this + 76) & 7) + 3) >= v52 && v52 )
    {
      __asan_report_load4(&this->want_);
    }
    else
    {
      want = this->want_;
      if ( want == want_output_and_retry )
        goto LABEL_162;
      if ( want == want_output )
        goto LABEL_169;
      if ( want != want_input_and_retry )
        goto LABEL_134;
    }
    p_core = &this->core_;
    if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_core);
LABEL_156:
      __asan_report_load8(p_core);
LABEL_157:
      __asan_report_load8(p_core);
LABEL_158:
      __asan_report_store16(p_core);
LABEL_159:
      v64 = v73;
      __asan_report_store16(v73);
LABEL_160:
      __asan_report_load8(v64);
LABEL_161:
      __asan_report_store8();
LABEL_162:
      v74 = &this->core_;
      if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v74);
      }
      else
      {
        core = (char *)this->core_;
        ecc = (boost::system::error_code *)boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(neg_infin).time_count_.value_;
        *(_DWORD *)(v6 + 80) = 0;
        *(_BYTE *)(v6 + 84) = 0;
        *(_QWORD *)(v6 + 88) = &boost::system::detail::cat_holder<void>::system_category_instance;
        v74 = (boost::asio::ssl::detail::stream_core **)(core + 96);
        if ( !*(_BYTE *)(((unsigned __int64)(core + 96) >> 3) + 0x7FFF8000) )
        {
          boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
            *((boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > *const *)core
            + 12),
            (boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >::implementation_type *)(core + 104),
            (boost::system::error_code *)(v6 + 80));
          if ( !*(_BYTE *)(((unsigned __int64)(core + 104) >> 3) + 0x7FFF8000) )
          {
            *((_QWORD *)core + 13) = ecc;
            goto LABEL_150;
          }
          goto LABEL_168;
        }
      }
      __asan_report_load8(v74);
LABEL_168:
      __asan_report_store8();
LABEL_169:
      p_pending_write = &this->core_;
      if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(p_pending_write);
      }
      else
      {
        v76 = this->core_;
        value = boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(neg_infin).time_count_.value_;
        *(_DWORD *)(v6 + 80) = 0;
        *(_BYTE *)(v6 + 84) = 0;
        *(_QWORD *)(v6 + 88) = &boost::system::detail::cat_holder<void>::system_category_instance;
        p_pending_write = (boost::asio::ssl::detail::stream_core **)&v76->pending_write_;
        if ( !*(_BYTE *)(((unsigned __int64)&v76->pending_write_ >> 3) + 0x7FFF8000) )
        {
          core = (char *)&v76->pending_write_.impl_.implementation_;
          boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
            v76->pending_write_.impl_.service_,
            &v76->pending_write_.impl_.implementation_,
            (boost::system::error_code *)(v6 + 80));
          if ( !*(_BYTE *)(((unsigned __int64)&v76->pending_write_.impl_.implementation_ >> 3) + 0x7FFF8000) )
          {
            v76->pending_write_.impl_.implementation_.expiry.time_.time_count_.value_ = value;
LABEL_134:
            p_bytes_transferred = &this->ec_;
            v55 = *(_BYTE *)(((unsigned __int64)&this->ec_ >> 3) + 0x7FFF8000);
            if ( !v55 || v55 > 3 )
            {
              if ( this->ec_.val_ )
              {
LABEL_178:
                v56 = 0LL;
LABEL_179:
                if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                {
                  v77 = __asan_report_load8(&this->core_);
                }
                else
                {
                  v77 = (unsigned __int64)boost::asio::ssl::detail::engine::map_error_code(
                                            &this->core_->engine_,
                                            &this->ec_);
                  if ( !*(_WORD *)((v77 >> 3) + 0x7FFF8000) )
                  {
                    *(__m128i *)(v6 + 80) = _mm_loadu_si128((const __m128i *)v77);
                    *(_QWORD *)(v6 + 48) = v56;
                    boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::complete_now<boost::system::error_code &,unsigned long &>(
                      &this->handler_,
                      (boost::system::error_code *)(v6 + 80),
                      (unsigned __int64 *)(v6 + 48),
                      v78,
                      v79);
                    goto LABEL_182;
                  }
                }
                v65 = (boost::system::error_code *)v77;
                __asan_report_load16(v77);
LABEL_186:
                __asan_report_load4(v65);
LABEL_187:
                if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                {
                  v80 = __asan_report_load8(&this->core_);
                }
                else
                {
                  v80 = (unsigned __int64)boost::asio::ssl::detail::engine::map_error_code(
                                            &this->core_->engine_,
                                            &this->ec_);
                  if ( !*(_WORD *)((v80 >> 3) + 0x7FFF8000) )
                  {
                    *(__m128i *)(v6 + 80) = _mm_loadu_si128((const __m128i *)v80);
                    *(_QWORD *)(v6 + 48) = 0LL;
                    boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::complete_now<boost::system::error_code &,unsigned long &>(
                      &this->handler_,
                      (boost::system::error_code *)(v6 + 80),
                      (unsigned __int64 *)(v6 + 48),
                      v81,
                      v82);
                    goto LABEL_182;
                  }
                }
                __asan_report_load16(v80);
                goto LABEL_192;
              }
              p_bytes_transferred = &this->bytes_transferred_;
              if ( !*(_BYTE *)(((unsigned __int64)&this->bytes_transferred_ >> 3) + 0x7FFF8000) )
              {
                v56 = this->bytes_transferred_;
                goto LABEL_179;
              }
LABEL_177:
              __asan_report_load8(p_bytes_transferred);
              goto LABEL_178;
            }
LABEL_176:
            __asan_report_load4(p_bytes_transferred);
            goto LABEL_177;
          }
LABEL_175:
          p_bytes_transferred = core;
          __asan_report_store8();
          goto LABEL_176;
        }
      }
      __asan_report_load8(p_pending_write);
      goto LABEL_175;
    }
    v58 = this->core_;
    p_core = (boost::asio::ssl::detail::stream_core **)&v58->input_buffer_.size_;
    if ( *(_BYTE *)(((unsigned __int64)&v58->input_buffer_.size_ >> 3) + 0x7FFF8000) )
      goto LABEL_156;
    size = v58->input_buffer_.size_;
    v60 = bytes_transferred;
    if ( bytes_transferred <= size )
      size = bytes_transferred;
    p_core = (boost::asio::ssl::detail::stream_core **)&v58->input_buffer_;
    if ( *(_BYTE *)(((unsigned __int64)&v58->input_buffer_ >> 3) + 0x7FFF8000) )
      goto LABEL_157;
    p_core = (boost::asio::ssl::detail::stream_core **)&v58->input_;
    v61 = (unsigned __int64)&v58->input_ >> 3;
    if ( *(_WORD *)(v61 + 0x7FFF8000) )
      goto LABEL_158;
    v58->input_.data_ = v58->input_buffer_.data_;
    v58->input_.size_ = size;
    core = (char *)this->core_;
    v62 = core + 256;
    if ( *(_WORD *)(((unsigned __int64)(core + 256) >> 3) + 0x7FFF8000) )
      goto LABEL_159;
    *((boost::asio::const_buffer *)core + 16) = boost::asio::ssl::detail::engine::put_input(&this->core_->engine_, v63);
    core = (char *)this->core_;
    ecb = (boost::system::error_code *)boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(neg_infin).time_count_.value_;
    *(_DWORD *)(v6 + 80) = 0;
    *(_BYTE *)(v6 + 84) = 0;
    *(_QWORD *)(v6 + 88) = &boost::system::detail::cat_holder<void>::system_category_instance;
    v64 = core + 16;
    if ( *(_BYTE *)(((unsigned __int64)(core + 16) >> 3) + 0x7FFF8000) )
      goto LABEL_160;
    boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
      *((boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > *const *)core
      + 2),
      (boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >::implementation_type *)(core + 24),
      (boost::system::error_code *)(v6 + 80));
    if ( *(_BYTE *)(((unsigned __int64)(core + 24) >> 3) + 0x7FFF8000) )
      goto LABEL_161;
    *((_QWORD *)core + 3) = ecb;
LABEL_150:
    v65 = &this->ec_;
    v66 = *(_BYTE *)(((unsigned __int64)&this->ec_ >> 3) + 0x7FFF8000);
    if ( v66 && v66 <= 3 )
      goto LABEL_186;
    if ( this->ec_.val_ )
      goto LABEL_187;
LABEL_153:
    v89 = &this->bytes_transferred_;
    eca = &this->ec_;
    p_start = &this->core_;
    if ( !*(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
    {
      v93 = this->core_;
      core = (char *)&this->op_;
      boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>::end(
        &v98,
        &this->op_.buffers_);
      boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>::begin(
        &v97,
        &this->op_.buffers_);
      b = v97.b_;
      remain = v97.remain_;
      *(_QWORD *)(v6 + 112) = v97.b_;
      *(_QWORD *)(v6 + 120) = remain;
      v69 = v97.it_.b_;
      v70 = v97.it_.remain_;
      *(_QWORD *)(v6 + 128) = v97.it_.b_;
      *(_QWORD *)(v6 + 136) = v70;
      it = v97.it_.it_.it_;
      v72 = v97.it_.it_.b_;
      *(_QWORD *)(v6 + 144) = v97.it_.it_.it_;
      *(_QWORD *)(v6 + 152) = v72;
      *(__m128i *)(v6 + 192) = _mm_load_si128((const __m128i *)&v98);
      *(__m128i *)(v6 + 208) = _mm_load_si128((const __m128i *)&v98.it_);
      *(__m128i *)(v6 + 224) = _mm_load_si128((const __m128i *)&v98.it_.it_);
      *(_QWORD *)(v6 + 272) = b;
      *(_QWORD *)(v6 + 280) = remain;
      *(_QWORD *)(v6 + 288) = v69;
      *(_QWORD *)(v6 + 296) = v70;
      *(_QWORD *)(v6 + 304) = it;
      *(_QWORD *)(v6 + 312) = v72;
      goto LABEL_57;
    }
LABEL_14:
    __asan_report_load8(p_start);
LABEL_15:
    if ( (boost::asio::detail::wait_op *)v7[-1].output_buffer_.size_ != v7[-1].pending_write_.impl_.implementation_.timer_data.op_queue_.back_
      || v7[-1].input_buffer_space_._M_impl._M_end_of_storage != (std::_Vector_base<unsigned char>::pointer)v7[-1].pending_write_.impl_.implementation_.timer_data.prev_
      || v7[-1].input_buffer_space_._M_impl._M_finish != (std::_Vector_base<unsigned char>::pointer)v7[-1].pending_write_.impl_.implementation_.timer_data.next_ )
    {
      while ( 1 )
      {
        M_finish = v7[-1].input_buffer_space_._M_impl._M_finish;
        M_end_of_storage = (__int64)v7[-1].input_buffer_space_._M_impl._M_end_of_storage;
        if ( *(_BYTE *)(((unsigned __int64)(M_end_of_storage + 16) >> 3) + 0x7FFF8000) )
        {
          M_end_of_storage = __asan_report_load8(M_end_of_storage + 16);
        }
        else if ( M_finish != *(std::_Vector_base<unsigned char>::pointer *)(M_end_of_storage + 16) )
        {
          v22 = v7[-1].input_buffer_space_._M_impl._M_finish;
          if ( *(_WORD *)(((unsigned __int64)M_finish >> 3) + 0x7FFF8000) )
            goto LABEL_37;
          v14 = *(_QWORD *)M_finish;
          M_start = (unsigned __int8 *)*((_QWORD *)M_finish + 1);
          goto LABEL_62;
        }
        v22 = (std::_Vector_base<unsigned char>::pointer)(M_end_of_storage + 24);
        if ( *(_BYTE *)(((unsigned __int64)(M_end_of_storage + 24) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v22);
LABEL_36:
          __asan_report_load16(v22);
LABEL_37:
          __asan_report_load16(v22);
LABEL_38:
          v26 = __asan_report_load8(v22);
          goto LABEL_39;
        }
        v23 = *(_QWORD *)(M_end_of_storage + 24);
        v22 = M_finish;
        if ( *(_WORD *)(((unsigned __int64)M_finish >> 3) + 0x7FFF8000) )
          goto LABEL_36;
        v24 = *((_QWORD *)M_finish + 1);
        if ( v23 >= v24 )
          v23 = *((_QWORD *)M_finish + 1);
        v14 = *(_QWORD *)M_finish + v23;
        M_start = (unsigned __int8 *)(v24 - v23);
LABEL_62:
        if ( v7[-1].input_buffer_space_._M_impl._M_start < M_start )
          M_start = v7[-1].input_buffer_space_._M_impl._M_start;
        if ( v7[-1].output_buffer_.data_ < M_start )
          M_start = (unsigned __int8 *)v7[-1].output_buffer_.data_;
        v15 = M_start;
        if ( M_start )
          goto LABEL_19;
        si128 = _mm_load_si128((const __m128i *)&v7[-1].output_buffer_.size_);
        v26 = (unsigned __int64)v7[-1].input_buffer_space_._M_impl._M_finish;
        v27 = v7[-1].input_buffer_space_._M_impl._M_end_of_storage;
        v95 = v26;
        v96 = (__int64)v27;
        v7[-1].input_buffer_space_._M_impl._M_finish = (std::_Vector_base<unsigned char>::pointer)(v26 + 16);
        v22 = v27 + 16;
        if ( *(_BYTE *)(((unsigned __int64)(v27 + 16) >> 3) + 0x7FFF8000) )
          goto LABEL_38;
        if ( v26 != *((_QWORD *)v27 + 2) )
        {
          v28 = v26;
          if ( *(_WORD *)((v26 >> 3) + 0x7FFF8000) )
            goto LABEL_46;
          v31 = *(_QWORD *)(v26 + 8);
          goto LABEL_71;
        }
LABEL_39:
        v28 = (unsigned __int64)(v27 + 24);
        if ( *(_BYTE *)(((unsigned __int64)(v27 + 24) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v28);
LABEL_45:
          __asan_report_load16(v28);
LABEL_46:
          __asan_report_load16(v28);
LABEL_47:
          v32 = __asan_report_load8(v28);
          goto LABEL_48;
        }
        v29 = *((_QWORD *)v27 + 3);
        v28 = v26;
        if ( *(_WORD *)((v26 >> 3) + 0x7FFF8000) )
          goto LABEL_45;
        v30 = *(_QWORD *)(v26 + 8);
        if ( v29 >= v30 )
          v29 = v30;
        v31 = v30 - v29;
LABEL_71:
        v7[-1].input_buffer_space_._M_impl._M_start -= v31;
        v33 = v95;
        v32 = v96;
        v28 = v96 + 16;
        if ( *(_BYTE *)(((unsigned __int64)(v96 + 16) >> 3) + 0x7FFF8000) )
          goto LABEL_47;
        if ( v95 != *(_QWORD *)(v96 + 16) )
        {
          v34 = v95;
          if ( *(_WORD *)((v95 >> 3) + 0x7FFF8000) )
            goto LABEL_55;
          v37 = *(_QWORD *)(v95 + 8);
          goto LABEL_75;
        }
LABEL_48:
        v34 = v32 + 24;
        if ( *(_BYTE *)(((unsigned __int64)(v32 + 24) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v34);
LABEL_54:
          __asan_report_load16(v34);
LABEL_55:
          v37 = __asan_report_load16(v34);
          goto LABEL_56;
        }
        v35 = *(_QWORD *)(v32 + 24);
        v34 = v33;
        if ( *(_WORD *)((v33 >> 3) + 0x7FFF8000) )
          goto LABEL_54;
        v36 = *(_QWORD *)(v33 + 8);
        if ( v35 >= v36 )
          v35 = *(_QWORD *)(v33 + 8);
        v37 = v36 - v35;
LABEL_75:
        if ( si128.m128i_i64[1] < v37 )
          v37 = si128.m128i_u64[1];
LABEL_56:
        v7[-1].output_buffer_.data_ = (char *)v7[-1].output_buffer_.data_ - v37;
LABEL_57:
        if ( v7[-1].output_buffer_space_._M_impl._M_end_of_storage == *(std::_Vector_base<unsigned char>::pointer *)&v7[-1].pending_write_.impl_.implementation_.might_have_pending_waits )
          goto LABEL_15;
      }
    }
    v14 = 0LL;
    v15 = 0LL;
LABEL_19:
    *(_QWORD *)(v6 + 80) = v14;
    *(_QWORD *)(v6 + 88) = v15;
    v16 = (char *)(v6 + 80);
    v17 = boost::asio::ssl::detail::engine::write(&v93->engine_, (const boost::asio::const_buffer *)(v6 + 80), eca, v89);
    v18 = *(_BYTE *)(((unsigned __int64)&this->want_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this + 76) & 7) + 3) >= v18 && v18 )
    {
      __asan_report_store4(&this->want_);
      break;
    }
    this->want_ = v17;
    if ( v17 == want_output_and_retry || v17 == want_output )
      goto LABEL_105;
    if ( v17 == want_input_and_retry )
      break;
    if ( !start )
      goto LABEL_5;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      goto LABEL_123;
    next_layer = this->next_layer_;
    p_ec = &this->core_;
    if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
      goto LABEL_124;
    v20 = this->core_;
    p_ec = (void *)&v20->input_buffer_;
    if ( !*(_BYTE *)(((unsigned __int64)&v20->input_buffer_ >> 3) + 0x7FFF8000) )
    {
      *(_QWORD *)(v6 + 80) = v20->input_buffer_.data_;
      *(_QWORD *)(v6 + 88) = 0LL;
      boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::async_read_some<boost::asio::mutable_buffers_1,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>(
        next_layer,
        (const boost::asio::mutable_buffers_1 *)(v6 + 80),
        this);
      goto LABEL_182;
    }
LABEL_125:
    __asan_report_load8(p_ec);
LABEL_126:
    __asan_report_load4(p_ec);
LABEL_127:
    __asan_report_store16(p_ec);
  }
  v39 = &this->core_;
  if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v39);
    goto LABEL_87;
  }
  core = (char *)this->core_;
  v39 = (boost::asio::ssl::detail::stream_core **)(core + 264);
  if ( *(_BYTE *)(((unsigned __int64)(core + 264) >> 3) + 0x7FFF8000) )
  {
LABEL_87:
    __asan_report_load8(v39);
LABEL_88:
    v43 = core + 256;
    if ( *(_WORD *)(((unsigned __int64)(core + 256) >> 3) + 0x7FFF8000) )
    {
      p_implementation = (boost::asio::ssl::detail::stream_core **)(core + 256);
      __asan_report_store16(core + 256);
      goto LABEL_91;
    }
    *((boost::asio::const_buffer *)core + 16) = boost::asio::ssl::detail::engine::put_input(
                                                  (boost::asio::ssl::detail::engine *const)core,
                                                  v44);
    goto LABEL_150;
  }
  if ( *((_QWORD *)core + 33) )
    goto LABEL_88;
  v40.time_count_.value_ = boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(neg_infin).time_count_.value_;
  p_implementation = &this->core_;
  if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
  {
LABEL_91:
    __asan_report_load8(p_implementation);
    goto LABEL_92;
  }
  v7 = this->core_;
  p_implementation = (boost::asio::ssl::detail::stream_core **)&v7->pending_read_.impl_.implementation_;
  if ( *(_BYTE *)(((unsigned __int64)&v7->pending_read_.impl_.implementation_ >> 3) + 0x7FFF8000) )
  {
LABEL_92:
    __asan_report_load8(p_implementation);
LABEL_93:
    v84 = boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(pos_infin).time_count_.value_;
    *(_DWORD *)(v6 + 80) = 0;
    *(_BYTE *)(v6 + 84) = 0;
    *(_QWORD *)(v6 + 88) = &boost::system::detail::cat_holder<void>::system_category_instance;
    if ( *(_BYTE *)(((unsigned __int64)&v7->pending_read_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(&v7->pending_read_);
    }
    else
    {
      core = (char *)&v7->pending_read_.impl_.implementation_;
      v45 = &v7->pending_read_.impl_.implementation_;
      boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
        v7->pending_read_.impl_.service_,
        &v7->pending_read_.impl_.implementation_,
        (boost::system::error_code *)(v6 + 80));
      if ( !*(_BYTE *)(((unsigned __int64)&v7->pending_read_.impl_.implementation_ >> 3) + 0x7FFF8000) )
      {
        v7->pending_read_.impl_.implementation_.expiry.time_.time_count_.value_ = v84;
        if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        {
          v46 = this->next_layer_;
          p_input_buffer = &this->core_;
          if ( !*(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
          {
            v47 = this->core_;
            p_input_buffer = (void *)&v47->input_buffer_;
            if ( !*(_WORD *)(((unsigned __int64)&v47->input_buffer_ >> 3) + 0x7FFF8000) )
            {
              *(__m128i *)(v6 + 80) = _mm_loadu_si128((const __m128i *)&v47->input_buffer_);
              boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::async_read_some<boost::asio::mutable_buffers_1,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>(
                v46,
                (const boost::asio::mutable_buffers_1 *)(v6 + 80),
                this);
              goto LABEL_182;
            }
            goto LABEL_103;
          }
LABEL_102:
          __asan_report_load8(p_input_buffer);
LABEL_103:
          __asan_report_load16(p_input_buffer);
          goto LABEL_104;
        }
LABEL_101:
        p_input_buffer = this;
        __asan_report_load8(this);
        goto LABEL_102;
      }
    }
    __asan_report_store8();
    goto LABEL_101;
  }
  if ( v7->pending_read_.impl_.implementation_.expiry.time_.time_count_.value_ == v40.time_count_.value_ )
    goto LABEL_93;
  p_input_buffer = &v7->pending_read_;
  if ( !*(_BYTE *)(((unsigned __int64)&v7->pending_read_ >> 3) + 0x7FFF8000) )
  {
    boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>(
      v7->pending_read_.impl_.service_,
      &v7->pending_read_.impl_.implementation_,
      this,
      &v7->pending_read_.impl_.implementation_executor_);
    goto LABEL_182;
  }
LABEL_104:
  __asan_report_load8(p_input_buffer);
LABEL_105:
  v48.time_count_.value_ = boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(neg_infin).time_count_.value_;
  v49 = &this->core_;
  if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v49);
LABEL_111:
    __asan_report_load8(v49);
LABEL_112:
    v85 = boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(pos_infin).time_count_.value_;
    *(_DWORD *)(v6 + 80) = 0;
    *(_BYTE *)(v6 + 84) = 0;
    *(_QWORD *)(v6 + 88) = &boost::system::detail::cat_holder<void>::system_category_instance;
    if ( *(_BYTE *)(((unsigned __int64)&v7->pending_write_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(&v7->pending_write_);
    }
    else
    {
      core = (char *)&v7->pending_write_.impl_.implementation_;
      boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
        v7->pending_write_.impl_.service_,
        &v7->pending_write_.impl_.implementation_,
        (boost::system::error_code *)(v6 + 80));
      if ( !*(_BYTE *)(((unsigned __int64)&v7->pending_write_.impl_.implementation_ >> 3) + 0x7FFF8000) )
      {
        v7->pending_write_.impl_.implementation_.expiry.time_.time_count_.value_ = v85;
        v50 = &this->core_;
        if ( !*(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
        {
          output = boost::asio::ssl::detail::engine::get_output(&this->core_->engine_, &this->core_->output_buffer_);
          if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          {
            v99.stream_ = this->next_layer_;
            v99.buffers_.buffer_ = (boost::asio::const_buffers_1)output;
            v99.buffers_.total_consumed_ = 0LL;
            v99.start_ = 0;
            boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::io_op(
              &v99.handler_,
              this);
            *(_DWORD *)(v6 + 80) = 0;
            *(_BYTE *)(v6 + 84) = 0;
            *(_QWORD *)(v6 + 88) = &boost::system::detail::cat_holder<void>::system_category_instance;
            boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>::operator()(
              &v99,
              (const boost::system::error_code *)(v6 + 80),
              0LL,
              1);
LABEL_121:
            v99.handler_.handler_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                                                                   + 2);
            boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard(&v99.handler_.handler_.wg1_);
            v99.handler_.handler_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                                                      + 2);
            boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::~async_base(&v99.handler_.handler_.h_);
            goto LABEL_182;
          }
LABEL_120:
          __asan_report_load8(this);
          goto LABEL_121;
        }
LABEL_119:
        __asan_report_load8(v50);
        goto LABEL_120;
      }
    }
    v50 = (boost::asio::ssl::detail::stream_core **)core;
    __asan_report_store8();
    goto LABEL_119;
  }
  v7 = this->core_;
  v49 = (boost::asio::ssl::detail::stream_core **)&v7->pending_write_.impl_.implementation_;
  if ( *(_BYTE *)(((unsigned __int64)&v7->pending_write_.impl_.implementation_ >> 3) + 0x7FFF8000) )
    goto LABEL_111;
  if ( v7->pending_write_.impl_.implementation_.expiry.time_.time_count_.value_ == v48.time_count_.value_ )
    goto LABEL_112;
  if ( *(_BYTE *)(((unsigned __int64)&v7->pending_write_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&v7->pending_write_);
LABEL_123:
    p_ec = this;
    __asan_report_load8(this);
LABEL_124:
    __asan_report_load8(p_ec);
    goto LABEL_125;
  }
  boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>(
    v7->pending_write_.impl_.service_,
    &v7->pending_write_.impl_.implementation_,
    this,
    &v7->pending_write_.impl_.implementation_executor_);
LABEL_182:
  if ( v100 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8014) = 0;
    *(_QWORD *)((v6 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8028) = 0;
    return;
  }
LABEL_192:
  *(_QWORD *)v6 = 1172321806LL;
  *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  *(_DWORD *)((v6 >> 3) + 0x7FFF8028) = -168430091;
};

// Line 137: range 0000000019C8FFC0-0000000019C90E5D
// local variable allocation has failed, the output may be wrong!
void __fastcall boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::operator()(
        boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const this,
        boost::system::error_code ec,
        std::size_t bytes_transferred,
        int start)
{
  boost::date_time::int_adapter<long int>::int_type p_implementation; // r13
  char *v6; // r14
  boost::asio::ssl::detail::stream_core *v7; // rbx
  unsigned __int64 v8; // r15
  void *p_start; // rdi
  char v10; // al
  void *p_ec; // rdi
  char v12; // al
  __int64 v13; // rax
  boost::asio::ssl::detail::stream_core *v14; // r12
  char *v15; // rsi
  boost::asio::ssl::detail::engine::want v16; // eax
  char v17; // cl
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *next_layer; // rcx
  boost::asio::ssl::detail::stream_core *v19; // rax
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >::const_iterator::reference v20; // rax
  std::size_t M_finish; // rcx
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >::const_iterator::reference v22; // rax
  std::size_t v23; // r13
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >::const_iterator::reference v24; // rax
  std::size_t v25; // r12
  boost::asio::ssl::detail::stream_core **p_size; // rdi
  boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> >::time_rep_type v27; // rax
  boost::asio::ssl::detail::stream_core **v28; // rdi
  void *p_input_buffer; // rdi
  boost::asio::const_buffer *v30; // rsi
  const boost::asio::const_buffer *v31; // rsi
  boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::implementation_type *v32; // rsi
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *v33; // rcx
  boost::asio::ssl::detail::stream_core *v34; // rax
  boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> >::time_rep_type v35; // rax
  boost::asio::ssl::detail::stream_core **v36; // rdi
  boost::date_time::int_adapter<long int>::int_type v37; // r13
  boost::asio::ssl::detail::stream_core **v38; // rdi
  boost::asio::mutable_buffer output; // rax
  char v40; // dl
  boost::asio::ssl::detail::engine::want want; // eax
  boost::date_time::int_adapter<long int>::int_type v42; // rdi
  char v43; // al
  std::size_t v44; // rbx
  unsigned __int64 v45; // rax
  boost::system::error_code *v46; // rcx
  unsigned __int64 *v47; // r8
  _QWORD *v48; // rcx
  boost::asio::ssl::detail::stream_core **p_core; // rdi
  boost::asio::ssl::detail::stream_core *core; // rax
  std::size_t size; // rdx
  unsigned __int64 v52; // rsi
  boost::asio::ssl::detail::stream_core *v53; // r12
  boost::asio::const_buffer *p_input; // rsi
  const boost::asio::const_buffer *v55; // rsi
  boost::asio::ssl::detail::stream_core *v56; // r12
  boost::asio::deadline_timer *p_pending_read; // rdi
  boost::system::error_code *v58; // rdi
  char v59; // al
  boost::asio::deadline_timer *v60; // rsi
  boost::asio::ssl::detail::stream_core **p_pending_write; // rdi
  boost::asio::ssl::detail::stream_core *v62; // r12
  boost::asio::ssl::detail::stream_core **v63; // rdi
  boost::asio::ssl::detail::stream_core *v64; // rbx
  boost::date_time::int_adapter<long int>::int_type v65; // r12
  unsigned __int64 v66; // rax
  boost::system::error_code *v67; // rcx
  unsigned __int64 *v68; // r8
  unsigned __int64 v69; // [rsp+8h] [rbp-420h]
  std::size_t *p_bytes_transferred; // [rsp+38h] [rbp-3F0h]
  std::size_t *value; // [rsp+38h] [rbp-3F0h]
  std::size_t *v75; // [rsp+38h] [rbp-3F0h]
  boost::system::error_code *eca; // [rsp+40h] [rbp-3E8h]
  boost::asio::ssl::detail::stream_core *v77; // [rsp+48h] [rbp-3E0h]
  std::size_t v78; // [rsp+50h] [rbp-3D8h]
  unsigned __int64 v79; // [rsp+58h] [rbp-3D0h]
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >::const_iterator v80; // [rsp+60h] [rbp-3C8h] BYREF
  std::_Vector_base<unsigned char>::pointer M_start; // [rsp+90h] [rbp-398h]
  std::size_t v82; // [rsp+98h] [rbp-390h]
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >::const_iterator v83; // [rsp+A0h] [rbp-388h] BYREF
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > >::const_iterator v84; // [rsp+D0h] [rbp-358h] BYREF
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > >::const_iterator v85; // [rsp+120h] [rbp-308h] BYREF
  boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > > v86; // [rsp+170h] [rbp-2B8h] BYREF
  char v87[280]; // [rsp+310h] [rbp-118h] BYREF

  v69 = (unsigned __int64)v87;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v13 = __asan_stack_malloc_2(224LL);
    if ( v13 )
      v69 = v13;
  }
  v6 = (char *)(v69 + 224);
  v7 = (boost::asio::ssl::detail::stream_core *)(v69 + 224);
  *(_QWORD *)v69 = 1102416563LL;
  *(_QWORD *)(v69 + 8) = "3 48 8 17 bytes_transferred 80 16 6 buffer 112 80 4 iter";
  *(_QWORD *)(v69 + 16) = boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::operator();
  v8 = v69 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -234881024;
  *(_DWORD *)(v8 + 2147450888) = 62194;
  *(_DWORD *)(v8 + 2147450892) = 62194;
  *(_DWORD *)(v8 + 2147450904) = -202116109;
  p_start = &this->start_;
  v10 = *(_BYTE *)(((unsigned __int64)&this->start_ >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
  {
    __asan_report_store4(p_start);
    goto LABEL_14;
  }
  this->start_ = start;
  if ( start == 1 )
    goto LABEL_118;
LABEL_5:
  if ( bytes_transferred == -1LL )
    goto LABEL_88;
  p_ec = &this->ec_;
  v12 = *(_BYTE *)(((unsigned __int64)&this->ec_ >> 3) + 0x7FFF8000);
  if ( v12 && v12 <= 3 )
    goto LABEL_86;
  if ( !this->ec_.val_ )
  {
    p_ec = &this->ec_;
    if ( *(_WORD *)(((unsigned __int64)&this->ec_ >> 3) + 0x7FFF8000) )
      goto LABEL_87;
    this->ec_ = ec;
  }
LABEL_89:
  v40 = *(_BYTE *)(((unsigned __int64)&this->want_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 108) & 7) + 3) >= v40 && v40 )
  {
    __asan_report_load4(&this->want_);
    goto LABEL_105;
  }
  want = this->want_;
  switch ( want )
  {
    case want_output_and_retry:
      goto LABEL_127;
    case want_output:
      goto LABEL_134;
    case want_input_and_retry:
LABEL_105:
      p_core = &this->core_;
      if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(p_core);
      }
      else
      {
        core = this->core_;
        p_core = (boost::asio::ssl::detail::stream_core **)&core->input_buffer_.size_;
        if ( !*(_BYTE *)(((unsigned __int64)&core->input_buffer_.size_ >> 3) + 0x7FFF8000) )
        {
          size = core->input_buffer_.size_;
          if ( bytes_transferred <= size )
            size = bytes_transferred;
          p_core = (boost::asio::ssl::detail::stream_core **)&core->input_buffer_;
          if ( !*(_BYTE *)(((unsigned __int64)&core->input_buffer_ >> 3) + 0x7FFF8000) )
          {
            p_core = (boost::asio::ssl::detail::stream_core **)&core->input_;
            v52 = (unsigned __int64)&core->input_ >> 3;
            if ( !*(_WORD *)(v52 + 0x7FFF8000) )
            {
              core->input_.data_ = core->input_buffer_.data_;
              core->input_.size_ = size;
              v53 = this->core_;
              p_input = &v53->input_;
              if ( !*(_WORD *)(((unsigned __int64)&v53->input_ >> 3) + 0x7FFF8000) )
              {
                v53->input_ = boost::asio::ssl::detail::engine::put_input(&this->core_->engine_, v55);
                v56 = this->core_;
                value = (std::size_t *)boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(neg_infin).time_count_.value_;
                *((_DWORD *)v6 - 36) = 0;
                *(v6 - 140) = 0;
                *((_QWORD *)v6 - 17) = &boost::system::detail::cat_holder<void>::system_category_instance;
                p_pending_read = &v56->pending_read_;
                if ( !*(_BYTE *)(((unsigned __int64)&v56->pending_read_ >> 3) + 0x7FFF8000) )
                {
                  p_implementation = (boost::date_time::int_adapter<long int>::int_type)&v56->pending_read_.impl_.implementation_;
                  boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
                    v56->pending_read_.impl_.service_,
                    &v56->pending_read_.impl_.implementation_,
                    (boost::system::error_code *)v6 - 9);
                  if ( !*(_BYTE *)(((unsigned __int64)&v56->pending_read_.impl_.implementation_ >> 3) + 0x7FFF8000) )
                  {
                    v56->pending_read_.impl_.implementation_.expiry.time_.time_count_.value_ = (boost::date_time::int_adapter<long int>::int_type)value;
                    while ( 1 )
                    {
LABEL_115:
                      v58 = &this->ec_;
                      v59 = *(_BYTE *)(((unsigned __int64)&this->ec_ >> 3) + 0x7FFF8000);
                      if ( v59 && v59 <= 3 )
                        goto LABEL_146;
                      if ( this->ec_.val_ )
                        goto LABEL_147;
LABEL_118:
                      p_bytes_transferred = &this->bytes_transferred_;
                      eca = &this->ec_;
                      p_start = &this->core_;
                      if ( !*(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                      {
                        v77 = this->core_;
                        boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>::end(
                          &v85,
                          &this->op_.buffers_);
                        boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>::begin(
                          &v84,
                          &this->op_.buffers_);
                        *((_QWORD *)v6 - 14) = v84.b_;
                        *((_QWORD *)v6 - 13) = v84.remain_;
                        *((_QWORD *)v6 - 12) = v84.it_.b_;
                        *((_QWORD *)v6 - 11) = v84.it_.remain_;
                        *((_QWORD *)v6 - 10) = v84.it_.it_.it_.bn_;
                        *(v6 - 48) = 0;
                        *((_QWORD *)v6 - 18) = v6 - 72;
                        *((_QWORD *)v6 - 17) = &v84.it_.it_.it_.it_;
                        boost::mp11::mp_with_index<4ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
                          v84.it_.it_.it_.it_.i_,
                          (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy *)v6
                        - 9);
                        *((_QWORD *)v6 - 5) = v84.it_.it_.b_;
                        v78 = (std::size_t)v6;
                        v79 = v8;
                        goto LABEL_29;
                      }
LABEL_14:
                      __asan_report_load8(p_start);
LABEL_15:
                      if ( boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>::const_iterator::operator==(
                             (const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&>::const_iterator *const)&v7[-1].output_buffer_space_,
                             &v85.it_) )
                      {
                        v6 = (char *)v78;
                        v8 = v79;
                        p_implementation = 0LL;
                        v78 = 0LL;
                      }
                      else
                      {
                        while ( 1 )
                        {
                          v20 = boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>::const_iterator::operator*((const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >::const_iterator *const)&v7[-1].output_buffer_space_._M_impl._M_end_of_storage);
                          M_finish = v20.size_;
                          if ( v7[-1].output_buffer_space_._M_impl._M_finish < (std::_Vector_base<unsigned char>::pointer)v20.size_ )
                            M_finish = (std::size_t)v7[-1].output_buffer_space_._M_impl._M_finish;
                          if ( *(_QWORD *)&v7[-1].pending_write_.impl_.implementation_executor_.has_native_impl_ < M_finish )
                            M_finish = *(_QWORD *)&v7[-1].pending_write_.impl_.implementation_executor_.has_native_impl_;
                          if ( M_finish )
                            break;
                          M_start = v7[-1].output_buffer_space_._M_impl._M_start;
                          v82 = (std::size_t)v7[-1].output_buffer_space_._M_impl._M_finish;
                          v83.it_.bn_ = (const boost::beast::detail::tuple<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> *)v7[-1].output_buffer_space_._M_impl._M_end_of_storage;
                          v83.it_.it_.i_ = 0;
                          v7[-1].pending_write_.impl_.implementation_.timer_data.op_queue_.back_ = (boost::asio::detail::wait_op *)&v83.it_.it_;
                          v7[-1].pending_write_.impl_.implementation_.timer_data.heap_index_ = (std::size_t)&v7[-1].output_buffer_;
                          boost::mp11::mp_with_index<4ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
                            LOBYTE(v7[-1].input_buffer_space_._M_impl._M_finish),
                            (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy *)&v7[-1].pending_write_.impl_.implementation_.timer_data.op_queue_.back_);
                          v83.b_ = (const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> > *)v7[-1].input_buffer_space_._M_impl._M_end_of_storage;
                          v80.it_.bn_ = (const boost::beast::detail::tuple<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> *)v7[-1].output_buffer_space_._M_impl._M_end_of_storage;
                          v80.it_.it_.i_ = 0;
                          v7[-1].pending_write_.impl_.implementation_.timer_data.op_queue_.back_ = (boost::asio::detail::wait_op *)&v80.it_.it_;
                          v7[-1].pending_write_.impl_.implementation_.timer_data.heap_index_ = (std::size_t)&v7[-1].output_buffer_;
                          boost::mp11::mp_with_index<4ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
                            LOBYTE(v7[-1].input_buffer_space_._M_impl._M_finish),
                            (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy *)&v7[-1].pending_write_.impl_.implementation_.timer_data.op_queue_.back_);
                          v80.b_ = (const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> > *)v7[-1].input_buffer_space_._M_impl._M_end_of_storage;
                          boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator++((boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator *const)&v7[-1].output_buffer_space_._M_impl._M_end_of_storage);
                          v22 = boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>::const_iterator::operator*(&v80);
                          v23 = v22.size_;
                          v7[-1].pending_write_.impl_.service_ = (boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::service_type *)&v80.it_.it_;
                          boost::mp11::mp_with_index<4ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
                            v80.it_.it_.i_,
                            (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)&v7[-1].pending_write_);
                          v7[-1].output_buffer_space_._M_impl._M_finish -= v23;
                          v24 = boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>::const_iterator::operator*(&v83);
                          v25 = v24.size_;
                          if ( v82 < v24.size_ )
                            v25 = v82;
                          v7[-1].pending_write_.impl_.service_ = (boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::service_type *)&v83.it_.it_;
                          boost::mp11::mp_with_index<4ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
                            v83.it_.it_.i_,
                            (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)&v7[-1].pending_write_);
                          *(_QWORD *)&v7[-1].pending_write_.impl_.implementation_executor_.has_native_impl_ -= v25;
LABEL_29:
                          if ( v7[-1].pending_write_.impl_.implementation_executor_.executor_.impl_ == (boost::asio::executor::impl_base *)v85.b_ )
                            goto LABEL_15;
                        }
                        v6 = (char *)v78;
                        v8 = v79;
                        p_implementation = (boost::date_time::int_adapter<long int>::int_type)v20.data_;
                        v78 = M_finish;
                      }
                      *((_QWORD *)v6 - 22) = v6 - 72;
                      v14 = (boost::asio::ssl::detail::stream_core *)(v6 - 176);
                      boost::mp11::mp_with_index<4ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
                        (unsigned __int8)*(v6 - 48),
                        (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)v6
                      - 22);
                      *((_QWORD *)v6 - 22) = &v84.it_.it_.it_.it_;
                      boost::mp11::mp_with_index<4ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
                        v84.it_.it_.it_.it_.i_,
                        (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)v6
                      - 22);
                      *((_QWORD *)v6 - 22) = &v85.it_.it_.it_.it_;
                      boost::mp11::mp_with_index<4ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
                        v85.it_.it_.it_.it_.i_,
                        (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)v6
                      - 22);
                      *((_QWORD *)v6 - 18) = p_implementation;
                      *((_QWORD *)v6 - 17) = v78;
                      v15 = v6 - 144;
                      v16 = boost::asio::ssl::detail::engine::write(
                              &v77->engine_,
                              (const boost::asio::const_buffer *)v6 - 9,
                              eca,
                              p_bytes_transferred);
                      v17 = *(_BYTE *)(((unsigned __int64)&this->want_ >> 3) + 0x7FFF8000);
                      if ( (char)((((_BYTE)this + 108) & 7) + 3) < v17 )
                        goto LABEL_19;
                      if ( v17 )
                      {
                        __asan_report_store4(&this->want_);
                      }
                      else
                      {
LABEL_19:
                        this->want_ = v16;
                        if ( v16 == want_output_and_retry || v16 == want_output )
                          goto LABEL_65;
                        if ( v16 != want_input_and_retry )
                        {
                          if ( !start )
                            goto LABEL_5;
                          if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                          {
                            next_layer = this->next_layer_;
                            p_ec = &this->core_;
                            if ( !*(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                            {
                              v19 = this->core_;
                              p_ec = (void *)&v19->input_buffer_;
                              if ( !*(_BYTE *)(((unsigned __int64)&v19->input_buffer_ >> 3) + 0x7FFF8000) )
                              {
                                *((_QWORD *)v6 - 18) = v19->input_buffer_.data_;
                                *((_QWORD *)v6 - 17) = 0LL;
                                boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::async_read_some<boost::asio::mutable_buffers_1,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>(
                                  next_layer,
                                  (const boost::asio::mutable_buffers_1 *)v6 - 9,
                                  this);
                                goto LABEL_102;
                              }
LABEL_85:
                              __asan_report_load8(p_ec);
LABEL_86:
                              __asan_report_load4(p_ec);
LABEL_87:
                              __asan_report_store16(p_ec);
LABEL_88:
                              bytes_transferred = 0LL;
                              goto LABEL_89;
                            }
LABEL_84:
                            __asan_report_load8(p_ec);
                            goto LABEL_85;
                          }
LABEL_83:
                          p_ec = this;
                          __asan_report_load8(this);
                          goto LABEL_84;
                        }
                      }
                      p_size = &this->core_;
                      if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                        break;
                      v14 = this->core_;
                      p_size = (boost::asio::ssl::detail::stream_core **)&v14->input_.size_;
                      if ( *(_BYTE *)(((unsigned __int64)&v14->input_.size_ >> 3) + 0x7FFF8000) )
                        goto LABEL_47;
                      if ( !v14->input_.size_ )
                      {
                        v27.time_count_.value_ = boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(neg_infin).time_count_.value_;
                        v28 = &this->core_;
                        if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                          goto LABEL_51;
                        v7 = this->core_;
                        v28 = (boost::asio::ssl::detail::stream_core **)&v7->pending_read_.impl_.implementation_;
                        if ( *(_BYTE *)(((unsigned __int64)&v7->pending_read_.impl_.implementation_ >> 3) + 0x7FFF8000) )
                          goto LABEL_52;
                        if ( v7->pending_read_.impl_.implementation_.expiry.time_.time_count_.value_ == v27.time_count_.value_ )
                          goto LABEL_53;
                        p_input_buffer = &v7->pending_read_;
                        if ( !*(_BYTE *)(((unsigned __int64)&v7->pending_read_ >> 3) + 0x7FFF8000) )
                        {
                          boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>(
                            v7->pending_read_.impl_.service_,
                            &v7->pending_read_.impl_.implementation_,
                            this,
                            &v7->pending_read_.impl_.implementation_executor_);
                          goto LABEL_102;
                        }
                        goto LABEL_64;
                      }
LABEL_48:
                      v30 = &v14->input_;
                      if ( *(_WORD *)(((unsigned __int64)&v14->input_ >> 3) + 0x7FFF8000) )
                      {
                        v28 = (boost::asio::ssl::detail::stream_core **)&v14->input_;
                        __asan_report_store16(&v14->input_);
LABEL_51:
                        __asan_report_load8(v28);
LABEL_52:
                        __asan_report_load8(v28);
LABEL_53:
                        p_implementation = boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(pos_infin).time_count_.value_;
                        *((_DWORD *)v6 - 36) = 0;
                        *(v6 - 140) = 0;
                        *((_QWORD *)v6 - 17) = &boost::system::detail::cat_holder<void>::system_category_instance;
                        if ( *(_BYTE *)(((unsigned __int64)&v7->pending_read_ >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_load8(&v7->pending_read_);
                        }
                        else
                        {
                          v14 = (boost::asio::ssl::detail::stream_core *)&v7->pending_read_.impl_.implementation_;
                          v32 = &v7->pending_read_.impl_.implementation_;
                          boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
                            v7->pending_read_.impl_.service_,
                            &v7->pending_read_.impl_.implementation_,
                            (boost::system::error_code *)v6 - 9);
                          if ( !*(_BYTE *)(((unsigned __int64)&v7->pending_read_.impl_.implementation_ >> 3) + 0x7FFF8000) )
                          {
                            v7->pending_read_.impl_.implementation_.expiry.time_.time_count_.value_ = p_implementation;
                            if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                            {
                              v33 = this->next_layer_;
                              p_input_buffer = &this->core_;
                              if ( !*(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                              {
                                v34 = this->core_;
                                p_input_buffer = (void *)&v34->input_buffer_;
                                if ( !*(_WORD *)(((unsigned __int64)&v34->input_buffer_ >> 3) + 0x7FFF8000) )
                                {
                                  *((__m128i *)v6 - 9) = _mm_loadu_si128((const __m128i *)&v34->input_buffer_);
                                  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::async_read_some<boost::asio::mutable_buffers_1,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>(
                                    v33,
                                    (const boost::asio::mutable_buffers_1 *)v6 - 9,
                                    this);
                                  goto LABEL_102;
                                }
LABEL_63:
                                __asan_report_load16(p_input_buffer);
LABEL_64:
                                __asan_report_load8(p_input_buffer);
LABEL_65:
                                v35.time_count_.value_ = boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(neg_infin).time_count_.value_;
                                v36 = &this->core_;
                                if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_load8(v36);
                                }
                                else
                                {
                                  v7 = this->core_;
                                  v36 = (boost::asio::ssl::detail::stream_core **)&v7->pending_write_.impl_.implementation_;
                                  if ( !*(_BYTE *)(((unsigned __int64)&v7->pending_write_.impl_.implementation_ >> 3)
                                                 + 0x7FFF8000) )
                                  {
                                    if ( v7->pending_write_.impl_.implementation_.expiry.time_.time_count_.value_ != v35.time_count_.value_ )
                                    {
                                      if ( !*(_BYTE *)(((unsigned __int64)&v7->pending_write_ >> 3) + 0x7FFF8000) )
                                      {
                                        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>(
                                          v7->pending_write_.impl_.service_,
                                          &v7->pending_write_.impl_.implementation_,
                                          this,
                                          &v7->pending_write_.impl_.implementation_executor_);
                                        goto LABEL_102;
                                      }
                                      __asan_report_load8(&v7->pending_write_);
                                      goto LABEL_83;
                                    }
LABEL_72:
                                    v37 = boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(pos_infin).time_count_.value_;
                                    *((_DWORD *)v6 - 36) = 0;
                                    *(v6 - 140) = 0;
                                    *((_QWORD *)v6 - 17) = &boost::system::detail::cat_holder<void>::system_category_instance;
                                    if ( *(_BYTE *)(((unsigned __int64)&v7->pending_write_ >> 3) + 0x7FFF8000) )
                                    {
                                      __asan_report_load8(&v7->pending_write_);
                                    }
                                    else
                                    {
                                      v14 = (boost::asio::ssl::detail::stream_core *)&v7->pending_write_.impl_.implementation_;
                                      boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
                                        v7->pending_write_.impl_.service_,
                                        &v7->pending_write_.impl_.implementation_,
                                        (boost::system::error_code *)v6 - 9);
                                      if ( !*(_BYTE *)(((unsigned __int64)&v7->pending_write_.impl_.implementation_ >> 3)
                                                     + 0x7FFF8000) )
                                      {
                                        v7->pending_write_.impl_.implementation_.expiry.time_.time_count_.value_ = v37;
                                        v38 = &this->core_;
                                        if ( !*(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                                        {
                                          output = boost::asio::ssl::detail::engine::get_output(
                                                     &this->core_->engine_,
                                                     &this->core_->output_buffer_);
                                          if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                                          {
                                            v86.stream_ = this->next_layer_;
                                            v86.buffers_.buffer_ = (boost::asio::const_buffers_1)output;
                                            v86.buffers_.total_consumed_ = 0LL;
                                            v86.start_ = 0;
                                            boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::io_op(
                                              &v86.handler_,
                                              this);
                                            *((_DWORD *)v6 - 36) = 0;
                                            *(v6 - 140) = 0;
                                            *((_QWORD *)v6 - 17) = &boost::system::detail::cat_holder<void>::system_category_instance;
                                            boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>::operator()(
                                              &v86,
                                              (const boost::system::error_code *)v6 - 9,
                                              0LL,
                                              1);
LABEL_81:
                                            boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::~io_op(&v86.handler_);
                                            goto LABEL_102;
                                          }
LABEL_80:
                                          __asan_report_load8(this);
                                          goto LABEL_81;
                                        }
LABEL_79:
                                        __asan_report_load8(v38);
                                        goto LABEL_80;
                                      }
                                    }
                                    v38 = (boost::asio::ssl::detail::stream_core **)v14;
                                    __asan_report_store8();
                                    goto LABEL_79;
                                  }
                                }
                                __asan_report_load8(v36);
                                goto LABEL_72;
                              }
LABEL_62:
                              __asan_report_load8(p_input_buffer);
                              goto LABEL_63;
                            }
LABEL_61:
                            p_input_buffer = this;
                            __asan_report_load8(this);
                            goto LABEL_62;
                          }
                        }
                        __asan_report_store8();
                        goto LABEL_61;
                      }
                      v14->input_ = boost::asio::ssl::detail::engine::put_input(&v14->engine_, v31);
                    }
                    __asan_report_load8(p_size);
LABEL_47:
                    __asan_report_load8(p_size);
                    goto LABEL_48;
                  }
                  goto LABEL_126;
                }
LABEL_125:
                __asan_report_load8(p_pending_read);
LABEL_126:
                __asan_report_store8();
LABEL_127:
                p_pending_write = &this->core_;
                if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load8(p_pending_write);
                }
                else
                {
                  v62 = this->core_;
                  v75 = (std::size_t *)boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(neg_infin).time_count_.value_;
                  *((_DWORD *)v6 - 36) = 0;
                  *(v6 - 140) = 0;
                  *((_QWORD *)v6 - 17) = &boost::system::detail::cat_holder<void>::system_category_instance;
                  p_pending_write = (boost::asio::ssl::detail::stream_core **)&v62->pending_write_;
                  if ( !*(_BYTE *)(((unsigned __int64)&v62->pending_write_ >> 3) + 0x7FFF8000) )
                  {
                    p_implementation = (boost::date_time::int_adapter<long int>::int_type)&v62->pending_write_.impl_.implementation_;
                    boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
                      v62->pending_write_.impl_.service_,
                      &v62->pending_write_.impl_.implementation_,
                      (boost::system::error_code *)v6 - 9);
                    if ( !*(_BYTE *)(((unsigned __int64)&v62->pending_write_.impl_.implementation_ >> 3) + 0x7FFF8000) )
                    {
                      v62->pending_write_.impl_.implementation_.expiry.time_.time_count_.value_ = (boost::date_time::int_adapter<long int>::int_type)v75;
                      goto LABEL_115;
                    }
                    goto LABEL_133;
                  }
                }
                __asan_report_load8(p_pending_write);
LABEL_133:
                __asan_report_store8();
LABEL_134:
                v63 = &this->core_;
                if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load8(v63);
                }
                else
                {
                  v64 = this->core_;
                  v65 = boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(neg_infin).time_count_.value_;
                  *((_DWORD *)v6 - 36) = 0;
                  *(v6 - 140) = 0;
                  *((_QWORD *)v6 - 17) = &boost::system::detail::cat_holder<void>::system_category_instance;
                  v63 = (boost::asio::ssl::detail::stream_core **)&v64->pending_write_;
                  if ( !*(_BYTE *)(((unsigned __int64)&v64->pending_write_ >> 3) + 0x7FFF8000) )
                  {
                    p_implementation = (boost::date_time::int_adapter<long int>::int_type)&v64->pending_write_.impl_.implementation_;
                    boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
                      v64->pending_write_.impl_.service_,
                      &v64->pending_write_.impl_.implementation_,
                      (boost::system::error_code *)v6 - 9);
                    if ( !*(_BYTE *)(((unsigned __int64)&v64->pending_write_.impl_.implementation_ >> 3) + 0x7FFF8000) )
                    {
                      v64->pending_write_.impl_.implementation_.expiry.time_.time_count_.value_ = v65;
                      break;
                    }
LABEL_140:
                    v42 = p_implementation;
                    __asan_report_store8();
LABEL_141:
                    __asan_report_load4(v42);
LABEL_142:
                    __asan_report_load8(v42);
                    goto LABEL_143;
                  }
                }
                __asan_report_load8(v63);
                goto LABEL_140;
              }
LABEL_124:
              p_pending_read = v60;
              __asan_report_store16(v60);
              goto LABEL_125;
            }
LABEL_123:
            __asan_report_store16(p_core);
            goto LABEL_124;
          }
LABEL_122:
          __asan_report_load8(p_core);
          goto LABEL_123;
        }
      }
      __asan_report_load8(p_core);
      goto LABEL_122;
  }
  v42 = (boost::date_time::int_adapter<long int>::int_type)&this->ec_;
  v43 = *(_BYTE *)(((unsigned __int64)&this->ec_ >> 3) + 0x7FFF8000);
  if ( v43 && v43 <= 3 )
    goto LABEL_141;
  if ( !this->ec_.val_ )
  {
    v42 = (boost::date_time::int_adapter<long int>::int_type)&this->bytes_transferred_;
    if ( !*(_BYTE *)(((unsigned __int64)&this->bytes_transferred_ >> 3) + 0x7FFF8000) )
    {
      v44 = this->bytes_transferred_;
      goto LABEL_99;
    }
    goto LABEL_142;
  }
LABEL_143:
  v44 = 0LL;
LABEL_99:
  if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
  {
    v45 = __asan_report_load8(&this->core_);
  }
  else
  {
    v45 = (unsigned __int64)boost::asio::ssl::detail::engine::map_error_code(&this->core_->engine_, &this->ec_);
    if ( !*(_WORD *)((v45 >> 3) + 0x7FFF8000) )
    {
      *((__m128i *)v6 - 9) = _mm_loadu_si128((const __m128i *)v45);
      *((_QWORD *)v6 - 22) = v44;
      boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::complete_now<boost::system::error_code &,unsigned long &>(
        &this->handler_,
        (boost::system::error_code *)v6 - 9,
        (unsigned __int64 *)v6 - 22,
        v46,
        v47);
      goto LABEL_102;
    }
  }
  v58 = (boost::system::error_code *)v45;
  __asan_report_load16(v45);
LABEL_146:
  __asan_report_load4(v58);
LABEL_147:
  if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
  {
    v66 = __asan_report_load8(&this->core_);
    goto LABEL_151;
  }
  v66 = (unsigned __int64)boost::asio::ssl::detail::engine::map_error_code(&this->core_->engine_, &this->ec_);
  if ( *(_WORD *)((v66 >> 3) + 0x7FFF8000) )
  {
LABEL_151:
    __asan_report_load16(v66);
    goto LABEL_152;
  }
  *((__m128i *)v6 - 9) = _mm_loadu_si128((const __m128i *)v66);
  *((_QWORD *)v6 - 22) = 0LL;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::complete_now<boost::system::error_code &,unsigned long &>(
    &this->handler_,
    (boost::system::error_code *)v6 - 9,
    (unsigned __int64 *)v6 - 22,
    v67,
    v68);
LABEL_102:
  v48 = (_QWORD *)v69;
  if ( v87 == (char *)v69 )
  {
    *(_QWORD *)(v8 + 2147450880) = 0LL;
    *(_QWORD *)(v8 + 2147450888) = 0LL;
    *(_DWORD *)(v8 + 2147450904) = 0;
    return;
  }
LABEL_152:
  *v48 = 1172321806LL;
  *(_QWORD *)(v8 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  *(_QWORD *)(v8 + 2147450888) = 0xF5F5F5F5F5F5F5F5LL;
  *(_QWORD *)(v8 + 2147450896) = 0xF5F5F5F5F5F5F5F5LL;
  *(_DWORD *)(v8 + 2147450904) = -168430091;
};

// Line 137: range 0000000019CC6912-0000000019CC77AF
// local variable allocation has failed, the output may be wrong!
void __fastcall boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::operator()(
        boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const this,
        boost::system::error_code ec,
        std::size_t bytes_transferred,
        int start)
{
  boost::date_time::int_adapter<long int>::int_type p_implementation; // r13
  char *v6; // r14
  boost::asio::ssl::detail::stream_core *v7; // rbx
  unsigned __int64 v8; // r15
  void *p_start; // rdi
  char v10; // al
  void *p_ec; // rdi
  char v12; // al
  __int64 v13; // rax
  boost::asio::ssl::detail::stream_core *v14; // r12
  char *v15; // rsi
  boost::asio::ssl::detail::engine::want v16; // eax
  char v17; // cl
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *next_layer; // rcx
  boost::asio::ssl::detail::stream_core *v19; // rax
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator::reference v20; // rax
  std::size_t M_finish; // rcx
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator::reference v22; // rax
  std::size_t v23; // r13
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator::reference v24; // rax
  std::size_t v25; // r12
  boost::asio::ssl::detail::stream_core **p_size; // rdi
  boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> >::time_rep_type v27; // rax
  boost::asio::ssl::detail::stream_core **v28; // rdi
  void *p_input_buffer; // rdi
  boost::asio::const_buffer *v30; // rsi
  const boost::asio::const_buffer *v31; // rsi
  boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::implementation_type *v32; // rsi
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *v33; // rcx
  boost::asio::ssl::detail::stream_core *v34; // rax
  boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> >::time_rep_type v35; // rax
  boost::asio::ssl::detail::stream_core **v36; // rdi
  boost::date_time::int_adapter<long int>::int_type v37; // r13
  boost::asio::ssl::detail::stream_core **v38; // rdi
  boost::asio::mutable_buffer output; // rax
  char v40; // dl
  boost::asio::ssl::detail::engine::want want; // eax
  boost::date_time::int_adapter<long int>::int_type v42; // rdi
  char v43; // al
  std::size_t v44; // rbx
  unsigned __int64 v45; // rax
  boost::system::error_code *v46; // rcx
  unsigned __int64 *v47; // r8
  _QWORD *v48; // rcx
  boost::asio::ssl::detail::stream_core **p_core; // rdi
  boost::asio::ssl::detail::stream_core *core; // rax
  std::size_t size; // rdx
  unsigned __int64 v52; // rsi
  boost::asio::ssl::detail::stream_core *v53; // r12
  boost::asio::const_buffer *p_input; // rsi
  const boost::asio::const_buffer *v55; // rsi
  boost::asio::ssl::detail::stream_core *v56; // r12
  boost::asio::deadline_timer *p_pending_read; // rdi
  boost::system::error_code *v58; // rdi
  char v59; // al
  boost::asio::deadline_timer *v60; // rsi
  boost::asio::ssl::detail::stream_core **p_pending_write; // rdi
  boost::asio::ssl::detail::stream_core *v62; // r12
  boost::asio::ssl::detail::stream_core **v63; // rdi
  boost::asio::ssl::detail::stream_core *v64; // rbx
  boost::date_time::int_adapter<long int>::int_type v65; // r12
  unsigned __int64 v66; // rax
  boost::system::error_code *v67; // rcx
  unsigned __int64 *v68; // r8
  unsigned __int64 v69; // [rsp+8h] [rbp-420h]
  std::size_t *p_bytes_transferred; // [rsp+38h] [rbp-3F0h]
  std::size_t *value; // [rsp+38h] [rbp-3F0h]
  std::size_t *v75; // [rsp+38h] [rbp-3F0h]
  boost::system::error_code *eca; // [rsp+40h] [rbp-3E8h]
  boost::asio::ssl::detail::stream_core *v77; // [rsp+48h] [rbp-3E0h]
  std::size_t v78; // [rsp+50h] [rbp-3D8h]
  unsigned __int64 v79; // [rsp+58h] [rbp-3D0h]
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator v80; // [rsp+60h] [rbp-3C8h] BYREF
  std::_Vector_base<unsigned char>::pointer M_start; // [rsp+90h] [rbp-398h]
  std::size_t v82; // [rsp+98h] [rbp-390h]
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator v83; // [rsp+A0h] [rbp-388h] BYREF
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > >::const_iterator v84; // [rsp+D0h] [rbp-358h] BYREF
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > >::const_iterator v85; // [rsp+120h] [rbp-308h] BYREF
  boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > > v86; // [rsp+170h] [rbp-2B8h] BYREF
  char v87[280]; // [rsp+310h] [rbp-118h] BYREF

  v69 = (unsigned __int64)v87;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v13 = __asan_stack_malloc_2(224LL);
    if ( v13 )
      v69 = v13;
  }
  v6 = (char *)(v69 + 224);
  v7 = (boost::asio::ssl::detail::stream_core *)(v69 + 224);
  *(_QWORD *)v69 = 1102416563LL;
  *(_QWORD *)(v69 + 8) = "3 48 8 17 bytes_transferred 80 16 6 buffer 112 80 4 iter";
  *(_QWORD *)(v69 + 16) = boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::operator();
  v8 = v69 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -234881024;
  *(_DWORD *)(v8 + 2147450888) = 62194;
  *(_DWORD *)(v8 + 2147450892) = 62194;
  *(_DWORD *)(v8 + 2147450904) = -202116109;
  p_start = &this->start_;
  v10 = *(_BYTE *)(((unsigned __int64)&this->start_ >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
  {
    __asan_report_store4(p_start);
    goto LABEL_14;
  }
  this->start_ = start;
  if ( start == 1 )
    goto LABEL_118;
LABEL_5:
  if ( bytes_transferred == -1LL )
    goto LABEL_88;
  p_ec = &this->ec_;
  v12 = *(_BYTE *)(((unsigned __int64)&this->ec_ >> 3) + 0x7FFF8000);
  if ( v12 && v12 <= 3 )
    goto LABEL_86;
  if ( !this->ec_.val_ )
  {
    p_ec = &this->ec_;
    if ( *(_WORD *)(((unsigned __int64)&this->ec_ >> 3) + 0x7FFF8000) )
      goto LABEL_87;
    this->ec_ = ec;
  }
LABEL_89:
  v40 = *(_BYTE *)(((unsigned __int64)&this->want_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 108) & 7) + 3) >= v40 && v40 )
  {
    __asan_report_load4(&this->want_);
    goto LABEL_105;
  }
  want = this->want_;
  switch ( want )
  {
    case want_output_and_retry:
      goto LABEL_127;
    case want_output:
      goto LABEL_134;
    case want_input_and_retry:
LABEL_105:
      p_core = &this->core_;
      if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(p_core);
      }
      else
      {
        core = this->core_;
        p_core = (boost::asio::ssl::detail::stream_core **)&core->input_buffer_.size_;
        if ( !*(_BYTE *)(((unsigned __int64)&core->input_buffer_.size_ >> 3) + 0x7FFF8000) )
        {
          size = core->input_buffer_.size_;
          if ( bytes_transferred <= size )
            size = bytes_transferred;
          p_core = (boost::asio::ssl::detail::stream_core **)&core->input_buffer_;
          if ( !*(_BYTE *)(((unsigned __int64)&core->input_buffer_ >> 3) + 0x7FFF8000) )
          {
            p_core = (boost::asio::ssl::detail::stream_core **)&core->input_;
            v52 = (unsigned __int64)&core->input_ >> 3;
            if ( !*(_WORD *)(v52 + 0x7FFF8000) )
            {
              core->input_.data_ = core->input_buffer_.data_;
              core->input_.size_ = size;
              v53 = this->core_;
              p_input = &v53->input_;
              if ( !*(_WORD *)(((unsigned __int64)&v53->input_ >> 3) + 0x7FFF8000) )
              {
                v53->input_ = boost::asio::ssl::detail::engine::put_input(&this->core_->engine_, v55);
                v56 = this->core_;
                value = (std::size_t *)boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(neg_infin).time_count_.value_;
                *((_DWORD *)v6 - 36) = 0;
                *(v6 - 140) = 0;
                *((_QWORD *)v6 - 17) = &boost::system::detail::cat_holder<void>::system_category_instance;
                p_pending_read = &v56->pending_read_;
                if ( !*(_BYTE *)(((unsigned __int64)&v56->pending_read_ >> 3) + 0x7FFF8000) )
                {
                  p_implementation = (boost::date_time::int_adapter<long int>::int_type)&v56->pending_read_.impl_.implementation_;
                  boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
                    v56->pending_read_.impl_.service_,
                    &v56->pending_read_.impl_.implementation_,
                    (boost::system::error_code *)v6 - 9);
                  if ( !*(_BYTE *)(((unsigned __int64)&v56->pending_read_.impl_.implementation_ >> 3) + 0x7FFF8000) )
                  {
                    v56->pending_read_.impl_.implementation_.expiry.time_.time_count_.value_ = (boost::date_time::int_adapter<long int>::int_type)value;
                    while ( 1 )
                    {
LABEL_115:
                      v58 = &this->ec_;
                      v59 = *(_BYTE *)(((unsigned __int64)&this->ec_ >> 3) + 0x7FFF8000);
                      if ( v59 && v59 <= 3 )
                        goto LABEL_146;
                      if ( this->ec_.val_ )
                        goto LABEL_147;
LABEL_118:
                      p_bytes_transferred = &this->bytes_transferred_;
                      eca = &this->ec_;
                      p_start = &this->core_;
                      if ( !*(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                      {
                        v77 = this->core_;
                        boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::end(
                          &v85,
                          &this->op_.buffers_);
                        boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::begin(
                          &v84,
                          &this->op_.buffers_);
                        *((_QWORD *)v6 - 14) = v84.b_;
                        *((_QWORD *)v6 - 13) = v84.remain_;
                        *((_QWORD *)v6 - 12) = v84.it_.b_;
                        *((_QWORD *)v6 - 11) = v84.it_.remain_;
                        *((_QWORD *)v6 - 10) = v84.it_.it_.it_.bn_;
                        *(v6 - 48) = 0;
                        *((_QWORD *)v6 - 18) = v6 - 72;
                        *((_QWORD *)v6 - 17) = &v84.it_.it_.it_.it_;
                        boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
                          v84.it_.it_.it_.it_.i_,
                          (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy *)v6
                        - 9);
                        *((_QWORD *)v6 - 5) = v84.it_.it_.b_;
                        v78 = (std::size_t)v6;
                        v79 = v8;
                        goto LABEL_29;
                      }
LABEL_14:
                      __asan_report_load8(p_start);
LABEL_15:
                      if ( boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::const_iterator::operator==(
                             (const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *const)&v7[-1].output_buffer_space_,
                             &v85.it_) )
                      {
                        v6 = (char *)v78;
                        v8 = v79;
                        p_implementation = 0LL;
                        v78 = 0LL;
                      }
                      else
                      {
                        while ( 1 )
                        {
                          v20 = boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::const_iterator::operator*((const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *const)&v7[-1].output_buffer_space_._M_impl._M_end_of_storage);
                          M_finish = v20.size_;
                          if ( v7[-1].output_buffer_space_._M_impl._M_finish < (std::_Vector_base<unsigned char>::pointer)v20.size_ )
                            M_finish = (std::size_t)v7[-1].output_buffer_space_._M_impl._M_finish;
                          if ( *(_QWORD *)&v7[-1].pending_write_.impl_.implementation_executor_.has_native_impl_ < M_finish )
                            M_finish = *(_QWORD *)&v7[-1].pending_write_.impl_.implementation_executor_.has_native_impl_;
                          if ( M_finish )
                            break;
                          M_start = v7[-1].output_buffer_space_._M_impl._M_start;
                          v82 = (std::size_t)v7[-1].output_buffer_space_._M_impl._M_finish;
                          v83.it_.bn_ = (const boost::beast::detail::tuple<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> *)v7[-1].output_buffer_space_._M_impl._M_end_of_storage;
                          v83.it_.it_.i_ = 0;
                          v7[-1].pending_write_.impl_.implementation_.timer_data.op_queue_.back_ = (boost::asio::detail::wait_op *)&v83.it_.it_;
                          v7[-1].pending_write_.impl_.implementation_.timer_data.heap_index_ = (std::size_t)&v7[-1].output_buffer_;
                          boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
                            LOBYTE(v7[-1].input_buffer_space_._M_impl._M_finish),
                            (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy *)&v7[-1].pending_write_.impl_.implementation_.timer_data.op_queue_.back_);
                          v83.b_ = (const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *)v7[-1].input_buffer_space_._M_impl._M_end_of_storage;
                          v80.it_.bn_ = (const boost::beast::detail::tuple<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> *)v7[-1].output_buffer_space_._M_impl._M_end_of_storage;
                          v80.it_.it_.i_ = 0;
                          v7[-1].pending_write_.impl_.implementation_.timer_data.op_queue_.back_ = (boost::asio::detail::wait_op *)&v80.it_.it_;
                          v7[-1].pending_write_.impl_.implementation_.timer_data.heap_index_ = (std::size_t)&v7[-1].output_buffer_;
                          boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
                            LOBYTE(v7[-1].input_buffer_space_._M_impl._M_finish),
                            (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy *)&v7[-1].pending_write_.impl_.implementation_.timer_data.op_queue_.back_);
                          v80.b_ = (const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *)v7[-1].input_buffer_space_._M_impl._M_end_of_storage;
                          boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++((boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)&v7[-1].output_buffer_space_._M_impl._M_end_of_storage);
                          v22 = boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::const_iterator::operator*(&v80);
                          v23 = v22.size_;
                          v7[-1].pending_write_.impl_.service_ = (boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::service_type *)&v80.it_.it_;
                          boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
                            v80.it_.it_.i_,
                            (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)&v7[-1].pending_write_);
                          v7[-1].output_buffer_space_._M_impl._M_finish -= v23;
                          v24 = boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::const_iterator::operator*(&v83);
                          v25 = v24.size_;
                          if ( v82 < v24.size_ )
                            v25 = v82;
                          v7[-1].pending_write_.impl_.service_ = (boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::service_type *)&v83.it_.it_;
                          boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
                            v83.it_.it_.i_,
                            (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)&v7[-1].pending_write_);
                          *(_QWORD *)&v7[-1].pending_write_.impl_.implementation_executor_.has_native_impl_ -= v25;
LABEL_29:
                          if ( v7[-1].pending_write_.impl_.implementation_executor_.executor_.impl_ == (boost::asio::executor::impl_base *)v85.b_ )
                            goto LABEL_15;
                        }
                        v6 = (char *)v78;
                        v8 = v79;
                        p_implementation = (boost::date_time::int_adapter<long int>::int_type)v20.data_;
                        v78 = M_finish;
                      }
                      *((_QWORD *)v6 - 22) = v6 - 72;
                      v14 = (boost::asio::ssl::detail::stream_core *)(v6 - 176);
                      boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
                        (unsigned __int8)*(v6 - 48),
                        (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)v6
                      - 22);
                      *((_QWORD *)v6 - 22) = &v84.it_.it_.it_.it_;
                      boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
                        v84.it_.it_.it_.it_.i_,
                        (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)v6
                      - 22);
                      *((_QWORD *)v6 - 22) = &v85.it_.it_.it_.it_;
                      boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
                        v85.it_.it_.it_.it_.i_,
                        (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)v6
                      - 22);
                      *((_QWORD *)v6 - 18) = p_implementation;
                      *((_QWORD *)v6 - 17) = v78;
                      v15 = v6 - 144;
                      v16 = boost::asio::ssl::detail::engine::write(
                              &v77->engine_,
                              (const boost::asio::const_buffer *)v6 - 9,
                              eca,
                              p_bytes_transferred);
                      v17 = *(_BYTE *)(((unsigned __int64)&this->want_ >> 3) + 0x7FFF8000);
                      if ( (char)((((_BYTE)this + 108) & 7) + 3) < v17 )
                        goto LABEL_19;
                      if ( v17 )
                      {
                        __asan_report_store4(&this->want_);
                      }
                      else
                      {
LABEL_19:
                        this->want_ = v16;
                        if ( v16 == want_output_and_retry || v16 == want_output )
                          goto LABEL_65;
                        if ( v16 != want_input_and_retry )
                        {
                          if ( !start )
                            goto LABEL_5;
                          if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                          {
                            next_layer = this->next_layer_;
                            p_ec = &this->core_;
                            if ( !*(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                            {
                              v19 = this->core_;
                              p_ec = (void *)&v19->input_buffer_;
                              if ( !*(_BYTE *)(((unsigned __int64)&v19->input_buffer_ >> 3) + 0x7FFF8000) )
                              {
                                *((_QWORD *)v6 - 18) = v19->input_buffer_.data_;
                                *((_QWORD *)v6 - 17) = 0LL;
                                boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::async_read_some<boost::asio::mutable_buffers_1,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>(
                                  next_layer,
                                  (const boost::asio::mutable_buffers_1 *)v6 - 9,
                                  this);
                                goto LABEL_102;
                              }
LABEL_85:
                              __asan_report_load8(p_ec);
LABEL_86:
                              __asan_report_load4(p_ec);
LABEL_87:
                              __asan_report_store16(p_ec);
LABEL_88:
                              bytes_transferred = 0LL;
                              goto LABEL_89;
                            }
LABEL_84:
                            __asan_report_load8(p_ec);
                            goto LABEL_85;
                          }
LABEL_83:
                          p_ec = this;
                          __asan_report_load8(this);
                          goto LABEL_84;
                        }
                      }
                      p_size = &this->core_;
                      if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                        break;
                      v14 = this->core_;
                      p_size = (boost::asio::ssl::detail::stream_core **)&v14->input_.size_;
                      if ( *(_BYTE *)(((unsigned __int64)&v14->input_.size_ >> 3) + 0x7FFF8000) )
                        goto LABEL_47;
                      if ( !v14->input_.size_ )
                      {
                        v27.time_count_.value_ = boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(neg_infin).time_count_.value_;
                        v28 = &this->core_;
                        if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                          goto LABEL_51;
                        v7 = this->core_;
                        v28 = (boost::asio::ssl::detail::stream_core **)&v7->pending_read_.impl_.implementation_;
                        if ( *(_BYTE *)(((unsigned __int64)&v7->pending_read_.impl_.implementation_ >> 3) + 0x7FFF8000) )
                          goto LABEL_52;
                        if ( v7->pending_read_.impl_.implementation_.expiry.time_.time_count_.value_ == v27.time_count_.value_ )
                          goto LABEL_53;
                        p_input_buffer = &v7->pending_read_;
                        if ( !*(_BYTE *)(((unsigned __int64)&v7->pending_read_ >> 3) + 0x7FFF8000) )
                        {
                          boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>(
                            v7->pending_read_.impl_.service_,
                            &v7->pending_read_.impl_.implementation_,
                            this,
                            &v7->pending_read_.impl_.implementation_executor_);
                          goto LABEL_102;
                        }
                        goto LABEL_64;
                      }
LABEL_48:
                      v30 = &v14->input_;
                      if ( *(_WORD *)(((unsigned __int64)&v14->input_ >> 3) + 0x7FFF8000) )
                      {
                        v28 = (boost::asio::ssl::detail::stream_core **)&v14->input_;
                        __asan_report_store16(&v14->input_);
LABEL_51:
                        __asan_report_load8(v28);
LABEL_52:
                        __asan_report_load8(v28);
LABEL_53:
                        p_implementation = boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(pos_infin).time_count_.value_;
                        *((_DWORD *)v6 - 36) = 0;
                        *(v6 - 140) = 0;
                        *((_QWORD *)v6 - 17) = &boost::system::detail::cat_holder<void>::system_category_instance;
                        if ( *(_BYTE *)(((unsigned __int64)&v7->pending_read_ >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_load8(&v7->pending_read_);
                        }
                        else
                        {
                          v14 = (boost::asio::ssl::detail::stream_core *)&v7->pending_read_.impl_.implementation_;
                          v32 = &v7->pending_read_.impl_.implementation_;
                          boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
                            v7->pending_read_.impl_.service_,
                            &v7->pending_read_.impl_.implementation_,
                            (boost::system::error_code *)v6 - 9);
                          if ( !*(_BYTE *)(((unsigned __int64)&v7->pending_read_.impl_.implementation_ >> 3) + 0x7FFF8000) )
                          {
                            v7->pending_read_.impl_.implementation_.expiry.time_.time_count_.value_ = p_implementation;
                            if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                            {
                              v33 = this->next_layer_;
                              p_input_buffer = &this->core_;
                              if ( !*(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                              {
                                v34 = this->core_;
                                p_input_buffer = (void *)&v34->input_buffer_;
                                if ( !*(_WORD *)(((unsigned __int64)&v34->input_buffer_ >> 3) + 0x7FFF8000) )
                                {
                                  *((__m128i *)v6 - 9) = _mm_loadu_si128((const __m128i *)&v34->input_buffer_);
                                  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::async_read_some<boost::asio::mutable_buffers_1,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>(
                                    v33,
                                    (const boost::asio::mutable_buffers_1 *)v6 - 9,
                                    this);
                                  goto LABEL_102;
                                }
LABEL_63:
                                __asan_report_load16(p_input_buffer);
LABEL_64:
                                __asan_report_load8(p_input_buffer);
LABEL_65:
                                v35.time_count_.value_ = boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(neg_infin).time_count_.value_;
                                v36 = &this->core_;
                                if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_load8(v36);
                                }
                                else
                                {
                                  v7 = this->core_;
                                  v36 = (boost::asio::ssl::detail::stream_core **)&v7->pending_write_.impl_.implementation_;
                                  if ( !*(_BYTE *)(((unsigned __int64)&v7->pending_write_.impl_.implementation_ >> 3)
                                                 + 0x7FFF8000) )
                                  {
                                    if ( v7->pending_write_.impl_.implementation_.expiry.time_.time_count_.value_ != v35.time_count_.value_ )
                                    {
                                      if ( !*(_BYTE *)(((unsigned __int64)&v7->pending_write_ >> 3) + 0x7FFF8000) )
                                      {
                                        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>(
                                          v7->pending_write_.impl_.service_,
                                          &v7->pending_write_.impl_.implementation_,
                                          this,
                                          &v7->pending_write_.impl_.implementation_executor_);
                                        goto LABEL_102;
                                      }
                                      __asan_report_load8(&v7->pending_write_);
                                      goto LABEL_83;
                                    }
LABEL_72:
                                    v37 = boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(pos_infin).time_count_.value_;
                                    *((_DWORD *)v6 - 36) = 0;
                                    *(v6 - 140) = 0;
                                    *((_QWORD *)v6 - 17) = &boost::system::detail::cat_holder<void>::system_category_instance;
                                    if ( *(_BYTE *)(((unsigned __int64)&v7->pending_write_ >> 3) + 0x7FFF8000) )
                                    {
                                      __asan_report_load8(&v7->pending_write_);
                                    }
                                    else
                                    {
                                      v14 = (boost::asio::ssl::detail::stream_core *)&v7->pending_write_.impl_.implementation_;
                                      boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
                                        v7->pending_write_.impl_.service_,
                                        &v7->pending_write_.impl_.implementation_,
                                        (boost::system::error_code *)v6 - 9);
                                      if ( !*(_BYTE *)(((unsigned __int64)&v7->pending_write_.impl_.implementation_ >> 3)
                                                     + 0x7FFF8000) )
                                      {
                                        v7->pending_write_.impl_.implementation_.expiry.time_.time_count_.value_ = v37;
                                        v38 = &this->core_;
                                        if ( !*(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                                        {
                                          output = boost::asio::ssl::detail::engine::get_output(
                                                     &this->core_->engine_,
                                                     &this->core_->output_buffer_);
                                          if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                                          {
                                            v86.stream_ = this->next_layer_;
                                            v86.buffers_.buffer_ = (boost::asio::const_buffers_1)output;
                                            v86.buffers_.total_consumed_ = 0LL;
                                            v86.start_ = 0;
                                            boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::io_op(
                                              &v86.handler_,
                                              this);
                                            *((_DWORD *)v6 - 36) = 0;
                                            *(v6 - 140) = 0;
                                            *((_QWORD *)v6 - 17) = &boost::system::detail::cat_holder<void>::system_category_instance;
                                            boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>::operator()(
                                              &v86,
                                              (const boost::system::error_code *)v6 - 9,
                                              0LL,
                                              1);
LABEL_81:
                                            boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::~io_op(&v86.handler_);
                                            goto LABEL_102;
                                          }
LABEL_80:
                                          __asan_report_load8(this);
                                          goto LABEL_81;
                                        }
LABEL_79:
                                        __asan_report_load8(v38);
                                        goto LABEL_80;
                                      }
                                    }
                                    v38 = (boost::asio::ssl::detail::stream_core **)v14;
                                    __asan_report_store8();
                                    goto LABEL_79;
                                  }
                                }
                                __asan_report_load8(v36);
                                goto LABEL_72;
                              }
LABEL_62:
                              __asan_report_load8(p_input_buffer);
                              goto LABEL_63;
                            }
LABEL_61:
                            p_input_buffer = this;
                            __asan_report_load8(this);
                            goto LABEL_62;
                          }
                        }
                        __asan_report_store8();
                        goto LABEL_61;
                      }
                      v14->input_ = boost::asio::ssl::detail::engine::put_input(&v14->engine_, v31);
                    }
                    __asan_report_load8(p_size);
LABEL_47:
                    __asan_report_load8(p_size);
                    goto LABEL_48;
                  }
                  goto LABEL_126;
                }
LABEL_125:
                __asan_report_load8(p_pending_read);
LABEL_126:
                __asan_report_store8();
LABEL_127:
                p_pending_write = &this->core_;
                if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load8(p_pending_write);
                }
                else
                {
                  v62 = this->core_;
                  v75 = (std::size_t *)boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(neg_infin).time_count_.value_;
                  *((_DWORD *)v6 - 36) = 0;
                  *(v6 - 140) = 0;
                  *((_QWORD *)v6 - 17) = &boost::system::detail::cat_holder<void>::system_category_instance;
                  p_pending_write = (boost::asio::ssl::detail::stream_core **)&v62->pending_write_;
                  if ( !*(_BYTE *)(((unsigned __int64)&v62->pending_write_ >> 3) + 0x7FFF8000) )
                  {
                    p_implementation = (boost::date_time::int_adapter<long int>::int_type)&v62->pending_write_.impl_.implementation_;
                    boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
                      v62->pending_write_.impl_.service_,
                      &v62->pending_write_.impl_.implementation_,
                      (boost::system::error_code *)v6 - 9);
                    if ( !*(_BYTE *)(((unsigned __int64)&v62->pending_write_.impl_.implementation_ >> 3) + 0x7FFF8000) )
                    {
                      v62->pending_write_.impl_.implementation_.expiry.time_.time_count_.value_ = (boost::date_time::int_adapter<long int>::int_type)v75;
                      goto LABEL_115;
                    }
                    goto LABEL_133;
                  }
                }
                __asan_report_load8(p_pending_write);
LABEL_133:
                __asan_report_store8();
LABEL_134:
                v63 = &this->core_;
                if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load8(v63);
                }
                else
                {
                  v64 = this->core_;
                  v65 = boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(neg_infin).time_count_.value_;
                  *((_DWORD *)v6 - 36) = 0;
                  *(v6 - 140) = 0;
                  *((_QWORD *)v6 - 17) = &boost::system::detail::cat_holder<void>::system_category_instance;
                  v63 = (boost::asio::ssl::detail::stream_core **)&v64->pending_write_;
                  if ( !*(_BYTE *)(((unsigned __int64)&v64->pending_write_ >> 3) + 0x7FFF8000) )
                  {
                    p_implementation = (boost::date_time::int_adapter<long int>::int_type)&v64->pending_write_.impl_.implementation_;
                    boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
                      v64->pending_write_.impl_.service_,
                      &v64->pending_write_.impl_.implementation_,
                      (boost::system::error_code *)v6 - 9);
                    if ( !*(_BYTE *)(((unsigned __int64)&v64->pending_write_.impl_.implementation_ >> 3) + 0x7FFF8000) )
                    {
                      v64->pending_write_.impl_.implementation_.expiry.time_.time_count_.value_ = v65;
                      break;
                    }
LABEL_140:
                    v42 = p_implementation;
                    __asan_report_store8();
LABEL_141:
                    __asan_report_load4(v42);
LABEL_142:
                    __asan_report_load8(v42);
                    goto LABEL_143;
                  }
                }
                __asan_report_load8(v63);
                goto LABEL_140;
              }
LABEL_124:
              p_pending_read = v60;
              __asan_report_store16(v60);
              goto LABEL_125;
            }
LABEL_123:
            __asan_report_store16(p_core);
            goto LABEL_124;
          }
LABEL_122:
          __asan_report_load8(p_core);
          goto LABEL_123;
        }
      }
      __asan_report_load8(p_core);
      goto LABEL_122;
  }
  v42 = (boost::date_time::int_adapter<long int>::int_type)&this->ec_;
  v43 = *(_BYTE *)(((unsigned __int64)&this->ec_ >> 3) + 0x7FFF8000);
  if ( v43 && v43 <= 3 )
    goto LABEL_141;
  if ( !this->ec_.val_ )
  {
    v42 = (boost::date_time::int_adapter<long int>::int_type)&this->bytes_transferred_;
    if ( !*(_BYTE *)(((unsigned __int64)&this->bytes_transferred_ >> 3) + 0x7FFF8000) )
    {
      v44 = this->bytes_transferred_;
      goto LABEL_99;
    }
    goto LABEL_142;
  }
LABEL_143:
  v44 = 0LL;
LABEL_99:
  if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
  {
    v45 = __asan_report_load8(&this->core_);
  }
  else
  {
    v45 = (unsigned __int64)boost::asio::ssl::detail::engine::map_error_code(&this->core_->engine_, &this->ec_);
    if ( !*(_WORD *)((v45 >> 3) + 0x7FFF8000) )
    {
      *((__m128i *)v6 - 9) = _mm_loadu_si128((const __m128i *)v45);
      *((_QWORD *)v6 - 22) = v44;
      boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::complete_now<boost::system::error_code &,unsigned long &>(
        &this->handler_,
        (boost::system::error_code *)v6 - 9,
        (unsigned __int64 *)v6 - 22,
        v46,
        v47);
      goto LABEL_102;
    }
  }
  v58 = (boost::system::error_code *)v45;
  __asan_report_load16(v45);
LABEL_146:
  __asan_report_load4(v58);
LABEL_147:
  if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
  {
    v66 = __asan_report_load8(&this->core_);
    goto LABEL_151;
  }
  v66 = (unsigned __int64)boost::asio::ssl::detail::engine::map_error_code(&this->core_->engine_, &this->ec_);
  if ( *(_WORD *)((v66 >> 3) + 0x7FFF8000) )
  {
LABEL_151:
    __asan_report_load16(v66);
    goto LABEL_152;
  }
  *((__m128i *)v6 - 9) = _mm_loadu_si128((const __m128i *)v66);
  *((_QWORD *)v6 - 22) = 0LL;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::complete_now<boost::system::error_code &,unsigned long &>(
    &this->handler_,
    (boost::system::error_code *)v6 - 9,
    (unsigned __int64 *)v6 - 22,
    v67,
    v68);
LABEL_102:
  v48 = (_QWORD *)v69;
  if ( v87 == (char *)v69 )
  {
    *(_QWORD *)(v8 + 2147450880) = 0LL;
    *(_QWORD *)(v8 + 2147450888) = 0LL;
    *(_DWORD *)(v8 + 2147450904) = 0;
    return;
  }
LABEL_152:
  *v48 = 1172321806LL;
  *(_QWORD *)(v8 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  *(_QWORD *)(v8 + 2147450888) = 0xF5F5F5F5F5F5F5F5LL;
  *(_QWORD *)(v8 + 2147450896) = 0xF5F5F5F5F5F5F5F5LL;
  *(_DWORD *)(v8 + 2147450904) = -168430091;
};

// Line 137: range 0000000019CA27D0-0000000019CA366D
// local variable allocation has failed, the output may be wrong!
void __fastcall boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::operator()(
        boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const this,
        boost::system::error_code ec,
        std::size_t bytes_transferred,
        int start)
{
  boost::date_time::int_adapter<long int>::int_type p_implementation; // r13
  char *v6; // r14
  boost::asio::ssl::detail::stream_core *v7; // rbx
  unsigned __int64 v8; // r15
  void *p_start; // rdi
  char v10; // al
  void *p_ec; // rdi
  char v12; // al
  __int64 v13; // rax
  boost::asio::ssl::detail::stream_core *v14; // r12
  char *v15; // rsi
  boost::asio::ssl::detail::engine::want v16; // eax
  char v17; // cl
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *next_layer; // rcx
  boost::asio::ssl::detail::stream_core *v19; // rax
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator::reference v20; // rax
  std::size_t M_finish; // rcx
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator::reference v22; // rax
  std::size_t v23; // r13
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator::reference v24; // rax
  std::size_t v25; // r12
  boost::asio::ssl::detail::stream_core **p_size; // rdi
  boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> >::time_rep_type v27; // rax
  boost::asio::ssl::detail::stream_core **v28; // rdi
  void *p_input_buffer; // rdi
  boost::asio::const_buffer *v30; // rsi
  const boost::asio::const_buffer *v31; // rsi
  boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::implementation_type *v32; // rsi
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *v33; // rcx
  boost::asio::ssl::detail::stream_core *v34; // rax
  boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> >::time_rep_type v35; // rax
  boost::asio::ssl::detail::stream_core **v36; // rdi
  boost::date_time::int_adapter<long int>::int_type v37; // r13
  boost::asio::ssl::detail::stream_core **v38; // rdi
  boost::asio::mutable_buffer output; // rax
  char v40; // dl
  boost::asio::ssl::detail::engine::want want; // eax
  boost::date_time::int_adapter<long int>::int_type v42; // rdi
  char v43; // al
  std::size_t v44; // rbx
  unsigned __int64 v45; // rax
  boost::system::error_code *v46; // rcx
  unsigned __int64 *v47; // r8
  _QWORD *v48; // rcx
  boost::asio::ssl::detail::stream_core **p_core; // rdi
  boost::asio::ssl::detail::stream_core *core; // rax
  std::size_t size; // rdx
  unsigned __int64 v52; // rsi
  boost::asio::ssl::detail::stream_core *v53; // r12
  boost::asio::const_buffer *p_input; // rsi
  const boost::asio::const_buffer *v55; // rsi
  boost::asio::ssl::detail::stream_core *v56; // r12
  boost::asio::deadline_timer *p_pending_read; // rdi
  boost::system::error_code *v58; // rdi
  char v59; // al
  boost::asio::deadline_timer *v60; // rsi
  boost::asio::ssl::detail::stream_core **p_pending_write; // rdi
  boost::asio::ssl::detail::stream_core *v62; // r12
  boost::asio::ssl::detail::stream_core **v63; // rdi
  boost::asio::ssl::detail::stream_core *v64; // rbx
  boost::date_time::int_adapter<long int>::int_type v65; // r12
  unsigned __int64 v66; // rax
  boost::system::error_code *v67; // rcx
  unsigned __int64 *v68; // r8
  unsigned __int64 v69; // [rsp+8h] [rbp-420h]
  std::size_t *p_bytes_transferred; // [rsp+38h] [rbp-3F0h]
  std::size_t *value; // [rsp+38h] [rbp-3F0h]
  std::size_t *v75; // [rsp+38h] [rbp-3F0h]
  boost::system::error_code *eca; // [rsp+40h] [rbp-3E8h]
  boost::asio::ssl::detail::stream_core *v77; // [rsp+48h] [rbp-3E0h]
  std::size_t v78; // [rsp+50h] [rbp-3D8h]
  unsigned __int64 v79; // [rsp+58h] [rbp-3D0h]
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator v80; // [rsp+60h] [rbp-3C8h] BYREF
  std::_Vector_base<unsigned char>::pointer M_start; // [rsp+90h] [rbp-398h]
  std::size_t v82; // [rsp+98h] [rbp-390h]
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator v83; // [rsp+A0h] [rbp-388h] BYREF
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > >::const_iterator v84; // [rsp+D0h] [rbp-358h] BYREF
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > >::const_iterator v85; // [rsp+120h] [rbp-308h] BYREF
  boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > > v86; // [rsp+170h] [rbp-2B8h] BYREF
  char v87[280]; // [rsp+310h] [rbp-118h] BYREF

  v69 = (unsigned __int64)v87;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v13 = __asan_stack_malloc_2(224LL);
    if ( v13 )
      v69 = v13;
  }
  v6 = (char *)(v69 + 224);
  v7 = (boost::asio::ssl::detail::stream_core *)(v69 + 224);
  *(_QWORD *)v69 = 1102416563LL;
  *(_QWORD *)(v69 + 8) = "3 48 8 17 bytes_transferred 80 16 6 buffer 112 80 4 iter";
  *(_QWORD *)(v69 + 16) = boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::operator();
  v8 = v69 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -234881024;
  *(_DWORD *)(v8 + 2147450888) = 62194;
  *(_DWORD *)(v8 + 2147450892) = 62194;
  *(_DWORD *)(v8 + 2147450904) = -202116109;
  p_start = &this->start_;
  v10 = *(_BYTE *)(((unsigned __int64)&this->start_ >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
  {
    __asan_report_store4(p_start);
    goto LABEL_14;
  }
  this->start_ = start;
  if ( start == 1 )
    goto LABEL_118;
LABEL_5:
  if ( bytes_transferred == -1LL )
    goto LABEL_88;
  p_ec = &this->ec_;
  v12 = *(_BYTE *)(((unsigned __int64)&this->ec_ >> 3) + 0x7FFF8000);
  if ( v12 && v12 <= 3 )
    goto LABEL_86;
  if ( !this->ec_.val_ )
  {
    p_ec = &this->ec_;
    if ( *(_WORD *)(((unsigned __int64)&this->ec_ >> 3) + 0x7FFF8000) )
      goto LABEL_87;
    this->ec_ = ec;
  }
LABEL_89:
  v40 = *(_BYTE *)(((unsigned __int64)&this->want_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 108) & 7) + 3) >= v40 && v40 )
  {
    __asan_report_load4(&this->want_);
    goto LABEL_105;
  }
  want = this->want_;
  switch ( want )
  {
    case want_output_and_retry:
      goto LABEL_127;
    case want_output:
      goto LABEL_134;
    case want_input_and_retry:
LABEL_105:
      p_core = &this->core_;
      if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(p_core);
      }
      else
      {
        core = this->core_;
        p_core = (boost::asio::ssl::detail::stream_core **)&core->input_buffer_.size_;
        if ( !*(_BYTE *)(((unsigned __int64)&core->input_buffer_.size_ >> 3) + 0x7FFF8000) )
        {
          size = core->input_buffer_.size_;
          if ( bytes_transferred <= size )
            size = bytes_transferred;
          p_core = (boost::asio::ssl::detail::stream_core **)&core->input_buffer_;
          if ( !*(_BYTE *)(((unsigned __int64)&core->input_buffer_ >> 3) + 0x7FFF8000) )
          {
            p_core = (boost::asio::ssl::detail::stream_core **)&core->input_;
            v52 = (unsigned __int64)&core->input_ >> 3;
            if ( !*(_WORD *)(v52 + 0x7FFF8000) )
            {
              core->input_.data_ = core->input_buffer_.data_;
              core->input_.size_ = size;
              v53 = this->core_;
              p_input = &v53->input_;
              if ( !*(_WORD *)(((unsigned __int64)&v53->input_ >> 3) + 0x7FFF8000) )
              {
                v53->input_ = boost::asio::ssl::detail::engine::put_input(&this->core_->engine_, v55);
                v56 = this->core_;
                value = (std::size_t *)boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(neg_infin).time_count_.value_;
                *((_DWORD *)v6 - 36) = 0;
                *(v6 - 140) = 0;
                *((_QWORD *)v6 - 17) = &boost::system::detail::cat_holder<void>::system_category_instance;
                p_pending_read = &v56->pending_read_;
                if ( !*(_BYTE *)(((unsigned __int64)&v56->pending_read_ >> 3) + 0x7FFF8000) )
                {
                  p_implementation = (boost::date_time::int_adapter<long int>::int_type)&v56->pending_read_.impl_.implementation_;
                  boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
                    v56->pending_read_.impl_.service_,
                    &v56->pending_read_.impl_.implementation_,
                    (boost::system::error_code *)v6 - 9);
                  if ( !*(_BYTE *)(((unsigned __int64)&v56->pending_read_.impl_.implementation_ >> 3) + 0x7FFF8000) )
                  {
                    v56->pending_read_.impl_.implementation_.expiry.time_.time_count_.value_ = (boost::date_time::int_adapter<long int>::int_type)value;
                    while ( 1 )
                    {
LABEL_115:
                      v58 = &this->ec_;
                      v59 = *(_BYTE *)(((unsigned __int64)&this->ec_ >> 3) + 0x7FFF8000);
                      if ( v59 && v59 <= 3 )
                        goto LABEL_146;
                      if ( this->ec_.val_ )
                        goto LABEL_147;
LABEL_118:
                      p_bytes_transferred = &this->bytes_transferred_;
                      eca = &this->ec_;
                      p_start = &this->core_;
                      if ( !*(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                      {
                        v77 = this->core_;
                        boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::end(
                          &v85,
                          &this->op_.buffers_);
                        boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::begin(
                          &v84,
                          &this->op_.buffers_);
                        *((_QWORD *)v6 - 14) = v84.b_;
                        *((_QWORD *)v6 - 13) = v84.remain_;
                        *((_QWORD *)v6 - 12) = v84.it_.b_;
                        *((_QWORD *)v6 - 11) = v84.it_.remain_;
                        *((_QWORD *)v6 - 10) = v84.it_.it_.it_.bn_;
                        *(v6 - 48) = 0;
                        *((_QWORD *)v6 - 18) = v6 - 72;
                        *((_QWORD *)v6 - 17) = &v84.it_.it_.it_.it_;
                        boost::mp11::mp_with_index<8ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
                          v84.it_.it_.it_.it_.i_,
                          (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy *)v6
                        - 9);
                        *((_QWORD *)v6 - 5) = v84.it_.it_.b_;
                        v78 = (std::size_t)v6;
                        v79 = v8;
                        goto LABEL_29;
                      }
LABEL_14:
                      __asan_report_load8(p_start);
LABEL_15:
                      if ( boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::const_iterator::operator==(
                             (const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *const)&v7[-1].output_buffer_space_,
                             &v85.it_) )
                      {
                        v6 = (char *)v78;
                        v8 = v79;
                        p_implementation = 0LL;
                        v78 = 0LL;
                      }
                      else
                      {
                        while ( 1 )
                        {
                          v20 = boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::const_iterator::operator*((const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *const)&v7[-1].output_buffer_space_._M_impl._M_end_of_storage);
                          M_finish = v20.size_;
                          if ( v7[-1].output_buffer_space_._M_impl._M_finish < (std::_Vector_base<unsigned char>::pointer)v20.size_ )
                            M_finish = (std::size_t)v7[-1].output_buffer_space_._M_impl._M_finish;
                          if ( *(_QWORD *)&v7[-1].pending_write_.impl_.implementation_executor_.has_native_impl_ < M_finish )
                            M_finish = *(_QWORD *)&v7[-1].pending_write_.impl_.implementation_executor_.has_native_impl_;
                          if ( M_finish )
                            break;
                          M_start = v7[-1].output_buffer_space_._M_impl._M_start;
                          v82 = (std::size_t)v7[-1].output_buffer_space_._M_impl._M_finish;
                          v83.it_.bn_ = (const boost::beast::detail::tuple<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> *)v7[-1].output_buffer_space_._M_impl._M_end_of_storage;
                          v83.it_.it_.i_ = 0;
                          v7[-1].pending_write_.impl_.implementation_.timer_data.op_queue_.back_ = (boost::asio::detail::wait_op *)&v83.it_.it_;
                          v7[-1].pending_write_.impl_.implementation_.timer_data.heap_index_ = (std::size_t)&v7[-1].output_buffer_;
                          boost::mp11::mp_with_index<8ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
                            LOBYTE(v7[-1].input_buffer_space_._M_impl._M_finish),
                            (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy *)&v7[-1].pending_write_.impl_.implementation_.timer_data.op_queue_.back_);
                          v83.b_ = (const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *)v7[-1].input_buffer_space_._M_impl._M_end_of_storage;
                          v80.it_.bn_ = (const boost::beast::detail::tuple<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> *)v7[-1].output_buffer_space_._M_impl._M_end_of_storage;
                          v80.it_.it_.i_ = 0;
                          v7[-1].pending_write_.impl_.implementation_.timer_data.op_queue_.back_ = (boost::asio::detail::wait_op *)&v80.it_.it_;
                          v7[-1].pending_write_.impl_.implementation_.timer_data.heap_index_ = (std::size_t)&v7[-1].output_buffer_;
                          boost::mp11::mp_with_index<8ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
                            LOBYTE(v7[-1].input_buffer_space_._M_impl._M_finish),
                            (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy *)&v7[-1].pending_write_.impl_.implementation_.timer_data.op_queue_.back_);
                          v80.b_ = (const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *)v7[-1].input_buffer_space_._M_impl._M_end_of_storage;
                          boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++((boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)&v7[-1].output_buffer_space_._M_impl._M_end_of_storage);
                          v22 = boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::const_iterator::operator*(&v80);
                          v23 = v22.size_;
                          v7[-1].pending_write_.impl_.service_ = (boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::service_type *)&v80.it_.it_;
                          boost::mp11::mp_with_index<8ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
                            v80.it_.it_.i_,
                            (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)&v7[-1].pending_write_);
                          v7[-1].output_buffer_space_._M_impl._M_finish -= v23;
                          v24 = boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::const_iterator::operator*(&v83);
                          v25 = v24.size_;
                          if ( v82 < v24.size_ )
                            v25 = v82;
                          v7[-1].pending_write_.impl_.service_ = (boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::service_type *)&v83.it_.it_;
                          boost::mp11::mp_with_index<8ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
                            v83.it_.it_.i_,
                            (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)&v7[-1].pending_write_);
                          *(_QWORD *)&v7[-1].pending_write_.impl_.implementation_executor_.has_native_impl_ -= v25;
LABEL_29:
                          if ( v7[-1].pending_write_.impl_.implementation_executor_.executor_.impl_ == (boost::asio::executor::impl_base *)v85.b_ )
                            goto LABEL_15;
                        }
                        v6 = (char *)v78;
                        v8 = v79;
                        p_implementation = (boost::date_time::int_adapter<long int>::int_type)v20.data_;
                        v78 = M_finish;
                      }
                      *((_QWORD *)v6 - 22) = v6 - 72;
                      v14 = (boost::asio::ssl::detail::stream_core *)(v6 - 176);
                      boost::mp11::mp_with_index<8ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
                        (unsigned __int8)*(v6 - 48),
                        (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)v6
                      - 22);
                      *((_QWORD *)v6 - 22) = &v84.it_.it_.it_.it_;
                      boost::mp11::mp_with_index<8ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
                        v84.it_.it_.it_.it_.i_,
                        (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)v6
                      - 22);
                      *((_QWORD *)v6 - 22) = &v85.it_.it_.it_.it_;
                      boost::mp11::mp_with_index<8ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
                        v85.it_.it_.it_.it_.i_,
                        (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)v6
                      - 22);
                      *((_QWORD *)v6 - 18) = p_implementation;
                      *((_QWORD *)v6 - 17) = v78;
                      v15 = v6 - 144;
                      v16 = boost::asio::ssl::detail::engine::write(
                              &v77->engine_,
                              (const boost::asio::const_buffer *)v6 - 9,
                              eca,
                              p_bytes_transferred);
                      v17 = *(_BYTE *)(((unsigned __int64)&this->want_ >> 3) + 0x7FFF8000);
                      if ( (char)((((_BYTE)this + 108) & 7) + 3) < v17 )
                        goto LABEL_19;
                      if ( v17 )
                      {
                        __asan_report_store4(&this->want_);
                      }
                      else
                      {
LABEL_19:
                        this->want_ = v16;
                        if ( v16 == want_output_and_retry || v16 == want_output )
                          goto LABEL_65;
                        if ( v16 != want_input_and_retry )
                        {
                          if ( !start )
                            goto LABEL_5;
                          if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                          {
                            next_layer = this->next_layer_;
                            p_ec = &this->core_;
                            if ( !*(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                            {
                              v19 = this->core_;
                              p_ec = (void *)&v19->input_buffer_;
                              if ( !*(_BYTE *)(((unsigned __int64)&v19->input_buffer_ >> 3) + 0x7FFF8000) )
                              {
                                *((_QWORD *)v6 - 18) = v19->input_buffer_.data_;
                                *((_QWORD *)v6 - 17) = 0LL;
                                boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::async_read_some<boost::asio::mutable_buffers_1,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>(
                                  next_layer,
                                  (const boost::asio::mutable_buffers_1 *)v6 - 9,
                                  this);
                                goto LABEL_102;
                              }
LABEL_85:
                              __asan_report_load8(p_ec);
LABEL_86:
                              __asan_report_load4(p_ec);
LABEL_87:
                              __asan_report_store16(p_ec);
LABEL_88:
                              bytes_transferred = 0LL;
                              goto LABEL_89;
                            }
LABEL_84:
                            __asan_report_load8(p_ec);
                            goto LABEL_85;
                          }
LABEL_83:
                          p_ec = this;
                          __asan_report_load8(this);
                          goto LABEL_84;
                        }
                      }
                      p_size = &this->core_;
                      if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                        break;
                      v14 = this->core_;
                      p_size = (boost::asio::ssl::detail::stream_core **)&v14->input_.size_;
                      if ( *(_BYTE *)(((unsigned __int64)&v14->input_.size_ >> 3) + 0x7FFF8000) )
                        goto LABEL_47;
                      if ( !v14->input_.size_ )
                      {
                        v27.time_count_.value_ = boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(neg_infin).time_count_.value_;
                        v28 = &this->core_;
                        if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                          goto LABEL_51;
                        v7 = this->core_;
                        v28 = (boost::asio::ssl::detail::stream_core **)&v7->pending_read_.impl_.implementation_;
                        if ( *(_BYTE *)(((unsigned __int64)&v7->pending_read_.impl_.implementation_ >> 3) + 0x7FFF8000) )
                          goto LABEL_52;
                        if ( v7->pending_read_.impl_.implementation_.expiry.time_.time_count_.value_ == v27.time_count_.value_ )
                          goto LABEL_53;
                        p_input_buffer = &v7->pending_read_;
                        if ( !*(_BYTE *)(((unsigned __int64)&v7->pending_read_ >> 3) + 0x7FFF8000) )
                        {
                          boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>(
                            v7->pending_read_.impl_.service_,
                            &v7->pending_read_.impl_.implementation_,
                            this,
                            &v7->pending_read_.impl_.implementation_executor_);
                          goto LABEL_102;
                        }
                        goto LABEL_64;
                      }
LABEL_48:
                      v30 = &v14->input_;
                      if ( *(_WORD *)(((unsigned __int64)&v14->input_ >> 3) + 0x7FFF8000) )
                      {
                        v28 = (boost::asio::ssl::detail::stream_core **)&v14->input_;
                        __asan_report_store16(&v14->input_);
LABEL_51:
                        __asan_report_load8(v28);
LABEL_52:
                        __asan_report_load8(v28);
LABEL_53:
                        p_implementation = boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(pos_infin).time_count_.value_;
                        *((_DWORD *)v6 - 36) = 0;
                        *(v6 - 140) = 0;
                        *((_QWORD *)v6 - 17) = &boost::system::detail::cat_holder<void>::system_category_instance;
                        if ( *(_BYTE *)(((unsigned __int64)&v7->pending_read_ >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_load8(&v7->pending_read_);
                        }
                        else
                        {
                          v14 = (boost::asio::ssl::detail::stream_core *)&v7->pending_read_.impl_.implementation_;
                          v32 = &v7->pending_read_.impl_.implementation_;
                          boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
                            v7->pending_read_.impl_.service_,
                            &v7->pending_read_.impl_.implementation_,
                            (boost::system::error_code *)v6 - 9);
                          if ( !*(_BYTE *)(((unsigned __int64)&v7->pending_read_.impl_.implementation_ >> 3) + 0x7FFF8000) )
                          {
                            v7->pending_read_.impl_.implementation_.expiry.time_.time_count_.value_ = p_implementation;
                            if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                            {
                              v33 = this->next_layer_;
                              p_input_buffer = &this->core_;
                              if ( !*(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                              {
                                v34 = this->core_;
                                p_input_buffer = (void *)&v34->input_buffer_;
                                if ( !*(_WORD *)(((unsigned __int64)&v34->input_buffer_ >> 3) + 0x7FFF8000) )
                                {
                                  *((__m128i *)v6 - 9) = _mm_loadu_si128((const __m128i *)&v34->input_buffer_);
                                  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::async_read_some<boost::asio::mutable_buffers_1,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>(
                                    v33,
                                    (const boost::asio::mutable_buffers_1 *)v6 - 9,
                                    this);
                                  goto LABEL_102;
                                }
LABEL_63:
                                __asan_report_load16(p_input_buffer);
LABEL_64:
                                __asan_report_load8(p_input_buffer);
LABEL_65:
                                v35.time_count_.value_ = boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(neg_infin).time_count_.value_;
                                v36 = &this->core_;
                                if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_load8(v36);
                                }
                                else
                                {
                                  v7 = this->core_;
                                  v36 = (boost::asio::ssl::detail::stream_core **)&v7->pending_write_.impl_.implementation_;
                                  if ( !*(_BYTE *)(((unsigned __int64)&v7->pending_write_.impl_.implementation_ >> 3)
                                                 + 0x7FFF8000) )
                                  {
                                    if ( v7->pending_write_.impl_.implementation_.expiry.time_.time_count_.value_ != v35.time_count_.value_ )
                                    {
                                      if ( !*(_BYTE *)(((unsigned __int64)&v7->pending_write_ >> 3) + 0x7FFF8000) )
                                      {
                                        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>(
                                          v7->pending_write_.impl_.service_,
                                          &v7->pending_write_.impl_.implementation_,
                                          this,
                                          &v7->pending_write_.impl_.implementation_executor_);
                                        goto LABEL_102;
                                      }
                                      __asan_report_load8(&v7->pending_write_);
                                      goto LABEL_83;
                                    }
LABEL_72:
                                    v37 = boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(pos_infin).time_count_.value_;
                                    *((_DWORD *)v6 - 36) = 0;
                                    *(v6 - 140) = 0;
                                    *((_QWORD *)v6 - 17) = &boost::system::detail::cat_holder<void>::system_category_instance;
                                    if ( *(_BYTE *)(((unsigned __int64)&v7->pending_write_ >> 3) + 0x7FFF8000) )
                                    {
                                      __asan_report_load8(&v7->pending_write_);
                                    }
                                    else
                                    {
                                      v14 = (boost::asio::ssl::detail::stream_core *)&v7->pending_write_.impl_.implementation_;
                                      boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
                                        v7->pending_write_.impl_.service_,
                                        &v7->pending_write_.impl_.implementation_,
                                        (boost::system::error_code *)v6 - 9);
                                      if ( !*(_BYTE *)(((unsigned __int64)&v7->pending_write_.impl_.implementation_ >> 3)
                                                     + 0x7FFF8000) )
                                      {
                                        v7->pending_write_.impl_.implementation_.expiry.time_.time_count_.value_ = v37;
                                        v38 = &this->core_;
                                        if ( !*(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                                        {
                                          output = boost::asio::ssl::detail::engine::get_output(
                                                     &this->core_->engine_,
                                                     &this->core_->output_buffer_);
                                          if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                                          {
                                            v86.stream_ = this->next_layer_;
                                            v86.buffers_.buffer_ = (boost::asio::const_buffers_1)output;
                                            v86.buffers_.total_consumed_ = 0LL;
                                            v86.start_ = 0;
                                            boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::io_op(
                                              &v86.handler_,
                                              this);
                                            *((_DWORD *)v6 - 36) = 0;
                                            *(v6 - 140) = 0;
                                            *((_QWORD *)v6 - 17) = &boost::system::detail::cat_holder<void>::system_category_instance;
                                            boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>::operator()(
                                              &v86,
                                              (const boost::system::error_code *)v6 - 9,
                                              0LL,
                                              1);
LABEL_81:
                                            boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::~io_op(&v86.handler_);
                                            goto LABEL_102;
                                          }
LABEL_80:
                                          __asan_report_load8(this);
                                          goto LABEL_81;
                                        }
LABEL_79:
                                        __asan_report_load8(v38);
                                        goto LABEL_80;
                                      }
                                    }
                                    v38 = (boost::asio::ssl::detail::stream_core **)v14;
                                    __asan_report_store8();
                                    goto LABEL_79;
                                  }
                                }
                                __asan_report_load8(v36);
                                goto LABEL_72;
                              }
LABEL_62:
                              __asan_report_load8(p_input_buffer);
                              goto LABEL_63;
                            }
LABEL_61:
                            p_input_buffer = this;
                            __asan_report_load8(this);
                            goto LABEL_62;
                          }
                        }
                        __asan_report_store8();
                        goto LABEL_61;
                      }
                      v14->input_ = boost::asio::ssl::detail::engine::put_input(&v14->engine_, v31);
                    }
                    __asan_report_load8(p_size);
LABEL_47:
                    __asan_report_load8(p_size);
                    goto LABEL_48;
                  }
                  goto LABEL_126;
                }
LABEL_125:
                __asan_report_load8(p_pending_read);
LABEL_126:
                __asan_report_store8();
LABEL_127:
                p_pending_write = &this->core_;
                if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load8(p_pending_write);
                }
                else
                {
                  v62 = this->core_;
                  v75 = (std::size_t *)boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(neg_infin).time_count_.value_;
                  *((_DWORD *)v6 - 36) = 0;
                  *(v6 - 140) = 0;
                  *((_QWORD *)v6 - 17) = &boost::system::detail::cat_holder<void>::system_category_instance;
                  p_pending_write = (boost::asio::ssl::detail::stream_core **)&v62->pending_write_;
                  if ( !*(_BYTE *)(((unsigned __int64)&v62->pending_write_ >> 3) + 0x7FFF8000) )
                  {
                    p_implementation = (boost::date_time::int_adapter<long int>::int_type)&v62->pending_write_.impl_.implementation_;
                    boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
                      v62->pending_write_.impl_.service_,
                      &v62->pending_write_.impl_.implementation_,
                      (boost::system::error_code *)v6 - 9);
                    if ( !*(_BYTE *)(((unsigned __int64)&v62->pending_write_.impl_.implementation_ >> 3) + 0x7FFF8000) )
                    {
                      v62->pending_write_.impl_.implementation_.expiry.time_.time_count_.value_ = (boost::date_time::int_adapter<long int>::int_type)v75;
                      goto LABEL_115;
                    }
                    goto LABEL_133;
                  }
                }
                __asan_report_load8(p_pending_write);
LABEL_133:
                __asan_report_store8();
LABEL_134:
                v63 = &this->core_;
                if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load8(v63);
                }
                else
                {
                  v64 = this->core_;
                  v65 = boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(neg_infin).time_count_.value_;
                  *((_DWORD *)v6 - 36) = 0;
                  *(v6 - 140) = 0;
                  *((_QWORD *)v6 - 17) = &boost::system::detail::cat_holder<void>::system_category_instance;
                  v63 = (boost::asio::ssl::detail::stream_core **)&v64->pending_write_;
                  if ( !*(_BYTE *)(((unsigned __int64)&v64->pending_write_ >> 3) + 0x7FFF8000) )
                  {
                    p_implementation = (boost::date_time::int_adapter<long int>::int_type)&v64->pending_write_.impl_.implementation_;
                    boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
                      v64->pending_write_.impl_.service_,
                      &v64->pending_write_.impl_.implementation_,
                      (boost::system::error_code *)v6 - 9);
                    if ( !*(_BYTE *)(((unsigned __int64)&v64->pending_write_.impl_.implementation_ >> 3) + 0x7FFF8000) )
                    {
                      v64->pending_write_.impl_.implementation_.expiry.time_.time_count_.value_ = v65;
                      break;
                    }
LABEL_140:
                    v42 = p_implementation;
                    __asan_report_store8();
LABEL_141:
                    __asan_report_load4(v42);
LABEL_142:
                    __asan_report_load8(v42);
                    goto LABEL_143;
                  }
                }
                __asan_report_load8(v63);
                goto LABEL_140;
              }
LABEL_124:
              p_pending_read = v60;
              __asan_report_store16(v60);
              goto LABEL_125;
            }
LABEL_123:
            __asan_report_store16(p_core);
            goto LABEL_124;
          }
LABEL_122:
          __asan_report_load8(p_core);
          goto LABEL_123;
        }
      }
      __asan_report_load8(p_core);
      goto LABEL_122;
  }
  v42 = (boost::date_time::int_adapter<long int>::int_type)&this->ec_;
  v43 = *(_BYTE *)(((unsigned __int64)&this->ec_ >> 3) + 0x7FFF8000);
  if ( v43 && v43 <= 3 )
    goto LABEL_141;
  if ( !this->ec_.val_ )
  {
    v42 = (boost::date_time::int_adapter<long int>::int_type)&this->bytes_transferred_;
    if ( !*(_BYTE *)(((unsigned __int64)&this->bytes_transferred_ >> 3) + 0x7FFF8000) )
    {
      v44 = this->bytes_transferred_;
      goto LABEL_99;
    }
    goto LABEL_142;
  }
LABEL_143:
  v44 = 0LL;
LABEL_99:
  if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
  {
    v45 = __asan_report_load8(&this->core_);
  }
  else
  {
    v45 = (unsigned __int64)boost::asio::ssl::detail::engine::map_error_code(&this->core_->engine_, &this->ec_);
    if ( !*(_WORD *)((v45 >> 3) + 0x7FFF8000) )
    {
      *((__m128i *)v6 - 9) = _mm_loadu_si128((const __m128i *)v45);
      *((_QWORD *)v6 - 22) = v44;
      boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::complete_now<boost::system::error_code &,unsigned long &>(
        &this->handler_,
        (boost::system::error_code *)v6 - 9,
        (unsigned __int64 *)v6 - 22,
        v46,
        v47);
      goto LABEL_102;
    }
  }
  v58 = (boost::system::error_code *)v45;
  __asan_report_load16(v45);
LABEL_146:
  __asan_report_load4(v58);
LABEL_147:
  if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
  {
    v66 = __asan_report_load8(&this->core_);
    goto LABEL_151;
  }
  v66 = (unsigned __int64)boost::asio::ssl::detail::engine::map_error_code(&this->core_->engine_, &this->ec_);
  if ( *(_WORD *)((v66 >> 3) + 0x7FFF8000) )
  {
LABEL_151:
    __asan_report_load16(v66);
    goto LABEL_152;
  }
  *((__m128i *)v6 - 9) = _mm_loadu_si128((const __m128i *)v66);
  *((_QWORD *)v6 - 22) = 0LL;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::complete_now<boost::system::error_code &,unsigned long &>(
    &this->handler_,
    (boost::system::error_code *)v6 - 9,
    (unsigned __int64 *)v6 - 22,
    v67,
    v68);
LABEL_102:
  v48 = (_QWORD *)v69;
  if ( v87 == (char *)v69 )
  {
    *(_QWORD *)(v8 + 2147450880) = 0LL;
    *(_QWORD *)(v8 + 2147450888) = 0LL;
    *(_DWORD *)(v8 + 2147450904) = 0;
    return;
  }
LABEL_152:
  *v48 = 1172321806LL;
  *(_QWORD *)(v8 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  *(_QWORD *)(v8 + 2147450888) = 0xF5F5F5F5F5F5F5F5LL;
  *(_QWORD *)(v8 + 2147450896) = 0xF5F5F5F5F5F5F5F5LL;
  *(_DWORD *)(v8 + 2147450904) = -168430091;
};

// Line 137: range 0000000019CBDA24-0000000019CBE87F
// local variable allocation has failed, the output may be wrong!
void __fastcall boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::operator()(
        boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const this,
        boost::system::error_code ec,
        std::size_t bytes_transferred,
        int start)
{
  char *p_op; // r13
  unsigned __int64 v6; // r14
  char *v7; // r12
  boost::asio::ssl::detail::stream_core *v8; // rbx
  unsigned __int64 v9; // r15
  void *p_start; // rdi
  char v11; // al
  void *p_ec; // rdi
  char v13; // al
  __int64 v14; // rax
  char *p_M_end_of_storage; // rdi
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator::reference v16; // rax
  std::size_t v17; // rcx
  char *v18; // rsi
  boost::asio::ssl::detail::engine::want v19; // eax
  char v20; // cl
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *next_layer; // rcx
  boost::asio::ssl::detail::stream_core *v22; // rax
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator::reference v23; // rax
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator::reference v24; // rax
  boost::asio::ssl::detail::stream_core **v25; // rdi
  boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> >::time_rep_type v26; // rax
  boost::asio::ssl::detail::stream_core **p_implementation; // rdi
  void *p_pending_read; // rdi
  char *v29; // rsi
  const boost::asio::const_buffer *v30; // rsi
  boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::implementation_type *v31; // rsi
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *v32; // rcx
  boost::asio::ssl::detail::stream_core *v33; // rax
  boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> >::time_rep_type v34; // rax
  boost::asio::ssl::detail::stream_core **v35; // rdi
  boost::asio::ssl::detail::stream_core **v36; // rdi
  boost::asio::mutable_buffer output; // rax
  char v38; // dl
  boost::asio::ssl::detail::engine::want want; // eax
  void *v40; // rdi
  char v41; // al
  std::size_t v42; // rbx
  unsigned __int64 v43; // rax
  boost::system::error_code *v44; // rcx
  unsigned __int64 *v45; // r8
  boost::asio::ssl::detail::stream_core **p_core; // rdi
  boost::asio::ssl::detail::stream_core *core; // rax
  std::size_t size; // rdx
  unsigned __int64 v49; // rsi
  char *v50; // rsi
  const boost::asio::const_buffer *v51; // rsi
  char *v52; // rdi
  boost::system::error_code *v53; // rdi
  char v54; // al
  char *v55; // rsi
  boost::asio::ssl::detail::stream_core **v56; // rdi
  boost::asio::ssl::detail::stream_core **p_pending_write; // rdi
  boost::asio::ssl::detail::stream_core *v58; // rbx
  unsigned __int64 v59; // rax
  boost::system::error_code *v60; // rcx
  unsigned __int64 *v61; // r8
  boost::date_time::int_adapter<long int>::int_type value; // [rsp+0h] [rbp-3A8h]
  boost::date_time::int_adapter<long int>::int_type v64; // [rsp+0h] [rbp-3A8h]
  boost::date_time::int_adapter<long int>::int_type v65; // [rsp+0h] [rbp-3A8h]
  std::size_t *p_bytes_transferred; // [rsp+28h] [rbp-380h]
  boost::system::error_code *eca; // [rsp+30h] [rbp-378h]
  boost::system::error_code *ecb; // [rsp+30h] [rbp-378h]
  boost::system::error_code *ecc; // [rsp+30h] [rbp-378h]
  boost::asio::ssl::detail::stream_core *v72; // [rsp+38h] [rbp-370h]
  char *v73; // [rsp+40h] [rbp-368h]
  char *v74; // [rsp+48h] [rbp-360h]
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator v75; // [rsp+50h] [rbp-358h] BYREF
  std::_Vector_base<unsigned char>::pointer M_end_of_storage; // [rsp+70h] [rbp-338h]
  std::size_t data; // [rsp+78h] [rbp-330h]
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator v78; // [rsp+80h] [rbp-328h] BYREF
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > >::const_iterator v79; // [rsp+A0h] [rbp-308h] BYREF
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > >::const_iterator v80; // [rsp+E0h] [rbp-2C8h] BYREF
  boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > > v81; // [rsp+120h] [rbp-288h] BYREF
  char v82[248]; // [rsp+2B0h] [rbp-F8h] BYREF

  v6 = (unsigned __int64)v82;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v14 = __asan_stack_malloc_2(192LL);
    if ( v14 )
      v6 = v14;
  }
  v7 = (char *)(v6 + 192);
  v8 = (boost::asio::ssl::detail::stream_core *)(v6 + 192);
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 32 8 17 bytes_transferred 64 16 6 buffer 96 64 4 iter";
  *(_QWORD *)(v6 + 16) = boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::operator();
  v9 = v6 >> 3;
  *(_DWORD *)(v9 + 2147450880) = -235802127;
  *(_DWORD *)(v9 + 2147450884) = -218959360;
  *(_DWORD *)(v9 + 2147450888) = -219021312;
  *(_DWORD *)(v9 + 2147450900) = -202116109;
  p_start = &this->start_;
  v11 = *(_BYTE *)(((unsigned __int64)&this->start_ >> 3) + 0x7FFF8000);
  if ( v11 && v11 <= 3 )
  {
    __asan_report_store4(p_start);
    goto LABEL_14;
  }
  this->start_ = start;
  if ( start == 1 )
    goto LABEL_128;
LABEL_5:
  if ( bytes_transferred == -1LL )
    goto LABEL_98;
  p_ec = &this->ec_;
  v13 = *(_BYTE *)(((unsigned __int64)&this->ec_ >> 3) + 0x7FFF8000);
  if ( v13 && v13 <= 3 )
    goto LABEL_96;
  if ( !this->ec_.val_ )
  {
    p_ec = &this->ec_;
    if ( *(_WORD *)(((unsigned __int64)&this->ec_ >> 3) + 0x7FFF8000) )
      goto LABEL_97;
    this->ec_ = ec;
  }
LABEL_99:
  v38 = *(_BYTE *)(((unsigned __int64)&this->want_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 92) & 7) + 3) >= v38 && v38 )
  {
    __asan_report_load4(&this->want_);
    goto LABEL_115;
  }
  want = this->want_;
  switch ( want )
  {
    case want_output_and_retry:
      goto LABEL_137;
    case want_output:
      goto LABEL_144;
    case want_input_and_retry:
LABEL_115:
      p_core = &this->core_;
      if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(p_core);
      }
      else
      {
        core = this->core_;
        p_core = (boost::asio::ssl::detail::stream_core **)&core->input_buffer_.size_;
        if ( !*(_BYTE *)(((unsigned __int64)&core->input_buffer_.size_ >> 3) + 0x7FFF8000) )
        {
          size = core->input_buffer_.size_;
          if ( bytes_transferred <= size )
            size = bytes_transferred;
          p_core = (boost::asio::ssl::detail::stream_core **)&core->input_buffer_;
          if ( !*(_BYTE *)(((unsigned __int64)&core->input_buffer_ >> 3) + 0x7FFF8000) )
          {
            p_core = (boost::asio::ssl::detail::stream_core **)&core->input_;
            v49 = (unsigned __int64)&core->input_ >> 3;
            if ( !*(_WORD *)(v49 + 0x7FFF8000) )
            {
              core->input_.data_ = core->input_buffer_.data_;
              core->input_.size_ = size;
              p_op = (char *)this->core_;
              v50 = p_op + 256;
              if ( !*(_WORD *)(((unsigned __int64)(p_op + 256) >> 3) + 0x7FFF8000) )
              {
                *((boost::asio::const_buffer *)p_op + 16) = boost::asio::ssl::detail::engine::put_input(
                                                              &this->core_->engine_,
                                                              v51);
                p_op = (char *)this->core_;
                ecb = (boost::system::error_code *)boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(neg_infin).time_count_.value_;
                *((_DWORD *)v7 - 32) = 0;
                *(v7 - 124) = 0;
                *((_QWORD *)v7 - 15) = &boost::system::detail::cat_holder<void>::system_category_instance;
                v52 = p_op + 16;
                if ( !*(_BYTE *)(((unsigned __int64)(p_op + 16) >> 3) + 0x7FFF8000) )
                {
                  boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
                    *((boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > *const *)p_op
                    + 2),
                    (boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >::implementation_type *)(p_op + 24),
                    (boost::system::error_code *)v7 - 8);
                  if ( !*(_BYTE *)(((unsigned __int64)(p_op + 24) >> 3) + 0x7FFF8000) )
                  {
                    *((_QWORD *)p_op + 3) = ecb;
                    while ( 1 )
                    {
LABEL_125:
                      v53 = &this->ec_;
                      v54 = *(_BYTE *)(((unsigned __int64)&this->ec_ >> 3) + 0x7FFF8000);
                      if ( v54 && v54 <= 3 )
                        goto LABEL_156;
                      if ( this->ec_.val_ )
                        goto LABEL_157;
LABEL_128:
                      p_bytes_transferred = &this->bytes_transferred_;
                      eca = &this->ec_;
                      p_start = &this->core_;
                      if ( !*(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                      {
                        v72 = this->core_;
                        p_op = (char *)&this->op_;
                        boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::end(
                          &v80,
                          &this->op_.buffers_);
                        boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::begin(
                          &v79,
                          &this->op_.buffers_);
                        *((_QWORD *)v7 - 12) = v79.b_;
                        *((_QWORD *)v7 - 11) = v79.remain_;
                        *((_QWORD *)v7 - 10) = v79.it_.b_;
                        *((_QWORD *)v7 - 9) = v79.it_.remain_;
                        *((_QWORD *)v7 - 8) = v79.it_.it_.it_.bn_;
                        *(v7 - 48) = 0;
                        *((_QWORD *)v7 - 16) = v7 - 56;
                        *((_QWORD *)v7 - 15) = &v79.it_.it_.it_.it_;
                        boost::mp11::mp_with_index<10ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
                          v79.it_.it_.it_.it_.i_,
                          (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy *)v7
                        - 8);
                        *((_QWORD *)v7 - 5) = v79.it_.it_.b_;
                        v73 = (char *)v6;
                        v74 = v7;
                        goto LABEL_34;
                      }
LABEL_14:
                      __asan_report_load8(p_start);
LABEL_15:
                      p_M_end_of_storage = (char *)&v8[-1].output_buffer_space_._M_impl._M_end_of_storage;
                      if ( boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::const_iterator::operator==(
                             (const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *const)&v8[-1].output_buffer_space_._M_impl._M_end_of_storage,
                             &v80.it_) )
                      {
                        v6 = (unsigned __int64)v73;
                        v7 = v74;
                        v16.data_ = 0LL;
                        v17 = 0LL;
                      }
                      else
                      {
                        while ( 1 )
                        {
                          p_M_end_of_storage = (char *)&v8[-1].output_buffer_.size_;
                          v16 = boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::const_iterator::operator*((const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *const)&v8[-1].output_buffer_.size_);
                          if ( v8[-1].output_buffer_.data_ < (void *)v16.size_ )
                            v16.size_ = (std::size_t)v8[-1].output_buffer_.data_;
                          if ( v8[-1].output_buffer_space_._M_impl._M_finish < (std::_Vector_base<unsigned char>::pointer)v16.size_ )
                            v16.size_ = (std::size_t)v8[-1].output_buffer_space_._M_impl._M_finish;
                          v17 = v16.size_;
                          if ( v16.size_ )
                            break;
                          M_end_of_storage = v8[-1].output_buffer_space_._M_impl._M_end_of_storage;
                          data = (std::size_t)v8[-1].output_buffer_.data_;
                          v78.it_.bn_ = (const boost::beast::detail::tuple<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> *)v8[-1].output_buffer_.size_;
                          v78.it_.it_.i_ = 0;
                          v8[-1].pending_write_.impl_.implementation_.timer_data.next_ = (boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::per_timer_data *)&v78.it_.it_;
                          p_op = (char *)&v8[-1].input_buffer_space_;
                          v8[-1].pending_write_.impl_.implementation_.timer_data.prev_ = (boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::per_timer_data *)&v8[-1].input_buffer_space_;
                          boost::mp11::mp_with_index<10ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
                            LOBYTE(v8[-1].input_buffer_space_._M_impl._M_finish),
                            (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy *)&v8[-1].pending_write_.impl_.implementation_.timer_data.next_);
                          v78.b_ = (const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *)v8[-1].input_buffer_space_._M_impl._M_end_of_storage;
                          v75.it_.bn_ = (const boost::beast::detail::tuple<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> *)v8[-1].output_buffer_.size_;
                          v75.it_.it_.i_ = 0;
                          v8[-1].pending_write_.impl_.implementation_.timer_data.next_ = (boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::per_timer_data *)&v75.it_.it_;
                          v8[-1].pending_write_.impl_.implementation_.timer_data.prev_ = (boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::per_timer_data *)&v8[-1].input_buffer_space_;
                          boost::mp11::mp_with_index<10ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
                            LOBYTE(v8[-1].input_buffer_space_._M_impl._M_finish),
                            (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy *)&v8[-1].pending_write_.impl_.implementation_.timer_data.next_);
                          v75.b_ = (const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *)v8[-1].input_buffer_space_._M_impl._M_end_of_storage;
                          boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++((boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)&v8[-1].output_buffer_.size_);
                          v23 = boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::const_iterator::operator*(&v75);
                          if ( v75.it_.it_.i_ > 9u )
                          {
                            __asan_handle_no_return(&v75);
                            __assert_fail(
                              "i < N",
                              "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost"
                              "/mp11/detail/mp_with_index.hpp",
                              0x17Du,
                              "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_w"
                              "ith_index(std::size_t, F&&) [with long unsigned int N = 10; F = boost::beast::detail::vari"
                              "ant<const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio:"
                              ":const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const "
                              "boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buf"
                              "fer*, boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy; decltype ("
                              "declval<F>()(declval<boost::mp11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = s"
                              "td::integral_constant<long unsigned int, 0>; std::size_t = long unsigned int]");
                          }
                          v8[-1].output_buffer_.data_ = (char *)v8[-1].output_buffer_.data_ - v23.size_;
                          v24 = boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::const_iterator::operator*(&v78);
                          if ( data < v24.size_ )
                            v24.size_ = data;
                          if ( v78.it_.it_.i_ > 9u )
                          {
                            __asan_handle_no_return(&v78);
                            __assert_fail(
                              "i < N",
                              "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost"
                              "/mp11/detail/mp_with_index.hpp",
                              0x17Du,
                              "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_w"
                              "ith_index(std::size_t, F&&) [with long unsigned int N = 10; F = boost::beast::detail::vari"
                              "ant<const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio:"
                              ":const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const "
                              "boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buf"
                              "fer*, boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy; decltype ("
                              "declval<F>()(declval<boost::mp11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = s"
                              "td::integral_constant<long unsigned int, 0>; std::size_t = long unsigned int]");
                          }
                          v8[-1].output_buffer_space_._M_impl._M_finish -= v24.size_;
LABEL_34:
                          if ( v8[-1].output_buffer_space_._M_impl._M_start == (std::_Vector_base<unsigned char>::pointer)v80.b_ )
                            goto LABEL_15;
                        }
                        v6 = (unsigned __int64)v73;
                        v7 = v74;
                      }
                      if ( (unsigned __int8)*(v7 - 48) > 9u )
                      {
                        __asan_handle_no_return(p_M_end_of_storage);
                        __assert_fail(
                          "i < N",
                          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp1"
                          "1/detail/mp_with_index.hpp",
                          0x17Du,
                          "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_"
                          "index(std::size_t, F&&) [with long unsigned int N = 10; F = boost::beast::detail::variant<cons"
                          "t boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffe"
                          "r*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::con"
                          "st_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, boost::beast::"
                          "detail::buffers_cat_view_iterator_base::past_end>::destroy; decltype (declval<F>()(declval<boo"
                          "st::mp11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = std::integral_constant<long u"
                          "nsigned int, 0>; std::size_t = long unsigned int]");
                      }
                      if ( v79.it_.it_.it_.it_.i_ > 9u )
                      {
                        __asan_handle_no_return(p_M_end_of_storage);
                        __assert_fail(
                          "i < N",
                          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp1"
                          "1/detail/mp_with_index.hpp",
                          0x17Du,
                          "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_"
                          "index(std::size_t, F&&) [with long unsigned int N = 10; F = boost::beast::detail::variant<cons"
                          "t boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffe"
                          "r*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::con"
                          "st_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, boost::beast::"
                          "detail::buffers_cat_view_iterator_base::past_end>::destroy; decltype (declval<F>()(declval<boo"
                          "st::mp11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = std::integral_constant<long u"
                          "nsigned int, 0>; std::size_t = long unsigned int]");
                      }
                      if ( v80.it_.it_.it_.it_.i_ > 9u )
                      {
                        __asan_handle_no_return(p_M_end_of_storage);
                        __assert_fail(
                          "i < N",
                          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp1"
                          "1/detail/mp_with_index.hpp",
                          0x17Du,
                          "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_"
                          "index(std::size_t, F&&) [with long unsigned int N = 10; F = boost::beast::detail::variant<cons"
                          "t boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffe"
                          "r*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::con"
                          "st_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, boost::beast::"
                          "detail::buffers_cat_view_iterator_base::past_end>::destroy; decltype (declval<F>()(declval<boo"
                          "st::mp11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = std::integral_constant<long u"
                          "nsigned int, 0>; std::size_t = long unsigned int]");
                      }
                      *((_QWORD *)v7 - 16) = v16.data_;
                      *((_QWORD *)v7 - 15) = v17;
                      v18 = v7 - 128;
                      v19 = boost::asio::ssl::detail::engine::write(
                              &v72->engine_,
                              (const boost::asio::const_buffer *)v7 - 8,
                              eca,
                              p_bytes_transferred);
                      v20 = *(_BYTE *)(((unsigned __int64)&this->want_ >> 3) + 0x7FFF8000);
                      if ( (char)((((_BYTE)this + 92) & 7) + 3) >= v20 && v20 )
                      {
                        __asan_report_store4(&this->want_);
                      }
                      else
                      {
                        this->want_ = v19;
                        if ( v19 == want_output_and_retry || v19 == want_output )
                          goto LABEL_75;
                        if ( v19 != want_input_and_retry )
                        {
                          if ( !start )
                            goto LABEL_5;
                          if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                          {
                            next_layer = this->next_layer_;
                            p_ec = &this->core_;
                            if ( !*(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                            {
                              v22 = this->core_;
                              p_ec = (void *)&v22->input_buffer_;
                              if ( !*(_BYTE *)(((unsigned __int64)&v22->input_buffer_ >> 3) + 0x7FFF8000) )
                              {
                                *((_QWORD *)v7 - 16) = v22->input_buffer_.data_;
                                *((_QWORD *)v7 - 15) = 0LL;
                                boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::async_read_some<boost::asio::mutable_buffers_1,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>(
                                  next_layer,
                                  (const boost::asio::mutable_buffers_1 *)v7 - 8,
                                  this);
                                goto LABEL_112;
                              }
LABEL_95:
                              __asan_report_load8(p_ec);
LABEL_96:
                              __asan_report_load4(p_ec);
LABEL_97:
                              __asan_report_store16(p_ec);
LABEL_98:
                              bytes_transferred = 0LL;
                              goto LABEL_99;
                            }
LABEL_94:
                            __asan_report_load8(p_ec);
                            goto LABEL_95;
                          }
LABEL_93:
                          p_ec = this;
                          __asan_report_load8(this);
                          goto LABEL_94;
                        }
                      }
                      v25 = &this->core_;
                      if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                        break;
                      p_op = (char *)this->core_;
                      v25 = (boost::asio::ssl::detail::stream_core **)(p_op + 264);
                      if ( *(_BYTE *)(((unsigned __int64)(p_op + 264) >> 3) + 0x7FFF8000) )
                        goto LABEL_57;
                      if ( !*((_QWORD *)p_op + 33) )
                      {
                        v26.time_count_.value_ = boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(neg_infin).time_count_.value_;
                        p_implementation = &this->core_;
                        if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                          goto LABEL_61;
                        v8 = this->core_;
                        p_implementation = (boost::asio::ssl::detail::stream_core **)&v8->pending_read_.impl_.implementation_;
                        if ( *(_BYTE *)(((unsigned __int64)&v8->pending_read_.impl_.implementation_ >> 3) + 0x7FFF8000) )
                          goto LABEL_62;
                        if ( v8->pending_read_.impl_.implementation_.expiry.time_.time_count_.value_ == v26.time_count_.value_ )
                          goto LABEL_63;
                        p_pending_read = &v8->pending_read_;
                        if ( !*(_BYTE *)(((unsigned __int64)&v8->pending_read_ >> 3) + 0x7FFF8000) )
                        {
                          boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>(
                            v8->pending_read_.impl_.service_,
                            &v8->pending_read_.impl_.implementation_,
                            this,
                            &v8->pending_read_.impl_.implementation_executor_);
                          goto LABEL_112;
                        }
                        goto LABEL_74;
                      }
LABEL_58:
                      v29 = p_op + 256;
                      if ( *(_WORD *)(((unsigned __int64)(p_op + 256) >> 3) + 0x7FFF8000) )
                      {
                        p_implementation = (boost::asio::ssl::detail::stream_core **)(p_op + 256);
                        __asan_report_store16(p_op + 256);
LABEL_61:
                        __asan_report_load8(p_implementation);
LABEL_62:
                        __asan_report_load8(p_implementation);
LABEL_63:
                        value = boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(pos_infin).time_count_.value_;
                        *((_DWORD *)v7 - 32) = 0;
                        *(v7 - 124) = 0;
                        *((_QWORD *)v7 - 15) = &boost::system::detail::cat_holder<void>::system_category_instance;
                        if ( *(_BYTE *)(((unsigned __int64)&v8->pending_read_ >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_load8(&v8->pending_read_);
                        }
                        else
                        {
                          p_op = (char *)&v8->pending_read_.impl_.implementation_;
                          v31 = &v8->pending_read_.impl_.implementation_;
                          boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
                            v8->pending_read_.impl_.service_,
                            &v8->pending_read_.impl_.implementation_,
                            (boost::system::error_code *)v7 - 8);
                          if ( !*(_BYTE *)(((unsigned __int64)&v8->pending_read_.impl_.implementation_ >> 3) + 0x7FFF8000) )
                          {
                            v8->pending_read_.impl_.implementation_.expiry.time_.time_count_.value_ = value;
                            if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                            {
                              v32 = this->next_layer_;
                              p_pending_read = &this->core_;
                              if ( !*(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                              {
                                v33 = this->core_;
                                p_pending_read = (void *)&v33->input_buffer_;
                                if ( !*(_WORD *)(((unsigned __int64)&v33->input_buffer_ >> 3) + 0x7FFF8000) )
                                {
                                  *((__m128i *)v7 - 8) = _mm_loadu_si128((const __m128i *)&v33->input_buffer_);
                                  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::async_read_some<boost::asio::mutable_buffers_1,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>(
                                    v32,
                                    (const boost::asio::mutable_buffers_1 *)v7 - 8,
                                    this);
                                  goto LABEL_112;
                                }
LABEL_73:
                                __asan_report_load16(p_pending_read);
LABEL_74:
                                __asan_report_load8(p_pending_read);
LABEL_75:
                                v34.time_count_.value_ = boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(neg_infin).time_count_.value_;
                                v35 = &this->core_;
                                if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_load8(v35);
                                }
                                else
                                {
                                  v8 = this->core_;
                                  v35 = (boost::asio::ssl::detail::stream_core **)&v8->pending_write_.impl_.implementation_;
                                  if ( !*(_BYTE *)(((unsigned __int64)&v8->pending_write_.impl_.implementation_ >> 3)
                                                 + 0x7FFF8000) )
                                  {
                                    if ( v8->pending_write_.impl_.implementation_.expiry.time_.time_count_.value_ != v34.time_count_.value_ )
                                    {
                                      if ( !*(_BYTE *)(((unsigned __int64)&v8->pending_write_ >> 3) + 0x7FFF8000) )
                                      {
                                        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>(
                                          v8->pending_write_.impl_.service_,
                                          &v8->pending_write_.impl_.implementation_,
                                          this,
                                          &v8->pending_write_.impl_.implementation_executor_);
                                        goto LABEL_112;
                                      }
                                      __asan_report_load8(&v8->pending_write_);
                                      goto LABEL_93;
                                    }
LABEL_82:
                                    v64 = boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(pos_infin).time_count_.value_;
                                    *((_DWORD *)v7 - 32) = 0;
                                    *(v7 - 124) = 0;
                                    *((_QWORD *)v7 - 15) = &boost::system::detail::cat_holder<void>::system_category_instance;
                                    if ( *(_BYTE *)(((unsigned __int64)&v8->pending_write_ >> 3) + 0x7FFF8000) )
                                    {
                                      __asan_report_load8(&v8->pending_write_);
                                    }
                                    else
                                    {
                                      p_op = (char *)&v8->pending_write_.impl_.implementation_;
                                      boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
                                        v8->pending_write_.impl_.service_,
                                        &v8->pending_write_.impl_.implementation_,
                                        (boost::system::error_code *)v7 - 8);
                                      if ( !*(_BYTE *)(((unsigned __int64)&v8->pending_write_.impl_.implementation_ >> 3)
                                                     + 0x7FFF8000) )
                                      {
                                        v8->pending_write_.impl_.implementation_.expiry.time_.time_count_.value_ = v64;
                                        v36 = &this->core_;
                                        if ( !*(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                                        {
                                          output = boost::asio::ssl::detail::engine::get_output(
                                                     &this->core_->engine_,
                                                     &this->core_->output_buffer_);
                                          if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                                          {
                                            v81.stream_ = this->next_layer_;
                                            v81.buffers_.buffer_ = (boost::asio::const_buffers_1)output;
                                            v81.buffers_.total_consumed_ = 0LL;
                                            v81.start_ = 0;
                                            boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::io_op(
                                              &v81.handler_,
                                              this);
                                            *((_DWORD *)v7 - 32) = 0;
                                            *(v7 - 124) = 0;
                                            *((_QWORD *)v7 - 15) = &boost::system::detail::cat_holder<void>::system_category_instance;
                                            boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>::operator()(
                                              &v81,
                                              (const boost::system::error_code *)v7 - 8,
                                              0LL,
                                              1);
LABEL_91:
                                            boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::~io_op(&v81.handler_);
                                            goto LABEL_112;
                                          }
LABEL_90:
                                          __asan_report_load8(this);
                                          goto LABEL_91;
                                        }
LABEL_89:
                                        __asan_report_load8(v36);
                                        goto LABEL_90;
                                      }
                                    }
                                    v36 = (boost::asio::ssl::detail::stream_core **)p_op;
                                    __asan_report_store8();
                                    goto LABEL_89;
                                  }
                                }
                                __asan_report_load8(v35);
                                goto LABEL_82;
                              }
LABEL_72:
                              __asan_report_load8(p_pending_read);
                              goto LABEL_73;
                            }
LABEL_71:
                            p_pending_read = this;
                            __asan_report_load8(this);
                            goto LABEL_72;
                          }
                        }
                        __asan_report_store8();
                        goto LABEL_71;
                      }
                      *((boost::asio::const_buffer *)p_op + 16) = boost::asio::ssl::detail::engine::put_input(
                                                                    (boost::asio::ssl::detail::engine *const)p_op,
                                                                    v30);
                    }
                    __asan_report_load8(v25);
LABEL_57:
                    __asan_report_load8(v25);
                    goto LABEL_58;
                  }
                  goto LABEL_136;
                }
LABEL_135:
                __asan_report_load8(v52);
LABEL_136:
                __asan_report_store8();
LABEL_137:
                v56 = &this->core_;
                if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load8(v56);
                }
                else
                {
                  p_op = (char *)this->core_;
                  ecc = (boost::system::error_code *)boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(neg_infin).time_count_.value_;
                  *((_DWORD *)v7 - 32) = 0;
                  *(v7 - 124) = 0;
                  *((_QWORD *)v7 - 15) = &boost::system::detail::cat_holder<void>::system_category_instance;
                  v56 = (boost::asio::ssl::detail::stream_core **)(p_op + 96);
                  if ( !*(_BYTE *)(((unsigned __int64)(p_op + 96) >> 3) + 0x7FFF8000) )
                  {
                    boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
                      *((boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > *const *)p_op
                      + 12),
                      (boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >::implementation_type *)(p_op + 104),
                      (boost::system::error_code *)v7 - 8);
                    if ( !*(_BYTE *)(((unsigned __int64)(p_op + 104) >> 3) + 0x7FFF8000) )
                    {
                      *((_QWORD *)p_op + 13) = ecc;
                      goto LABEL_125;
                    }
                    goto LABEL_143;
                  }
                }
                __asan_report_load8(v56);
LABEL_143:
                __asan_report_store8();
LABEL_144:
                p_pending_write = &this->core_;
                if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load8(p_pending_write);
                }
                else
                {
                  v58 = this->core_;
                  v65 = boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(neg_infin).time_count_.value_;
                  *((_DWORD *)v7 - 32) = 0;
                  *(v7 - 124) = 0;
                  *((_QWORD *)v7 - 15) = &boost::system::detail::cat_holder<void>::system_category_instance;
                  p_pending_write = (boost::asio::ssl::detail::stream_core **)&v58->pending_write_;
                  if ( !*(_BYTE *)(((unsigned __int64)&v58->pending_write_ >> 3) + 0x7FFF8000) )
                  {
                    p_op = (char *)&v58->pending_write_.impl_.implementation_;
                    boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
                      v58->pending_write_.impl_.service_,
                      &v58->pending_write_.impl_.implementation_,
                      (boost::system::error_code *)v7 - 8);
                    if ( !*(_BYTE *)(((unsigned __int64)&v58->pending_write_.impl_.implementation_ >> 3) + 0x7FFF8000) )
                    {
                      v58->pending_write_.impl_.implementation_.expiry.time_.time_count_.value_ = v65;
                      break;
                    }
LABEL_150:
                    v40 = p_op;
                    __asan_report_store8();
LABEL_151:
                    __asan_report_load4(v40);
LABEL_152:
                    __asan_report_load8(v40);
                    goto LABEL_153;
                  }
                }
                __asan_report_load8(p_pending_write);
                goto LABEL_150;
              }
LABEL_134:
              v52 = v55;
              __asan_report_store16(v55);
              goto LABEL_135;
            }
LABEL_133:
            __asan_report_store16(p_core);
            goto LABEL_134;
          }
LABEL_132:
          __asan_report_load8(p_core);
          goto LABEL_133;
        }
      }
      __asan_report_load8(p_core);
      goto LABEL_132;
  }
  v40 = &this->ec_;
  v41 = *(_BYTE *)(((unsigned __int64)&this->ec_ >> 3) + 0x7FFF8000);
  if ( v41 && v41 <= 3 )
    goto LABEL_151;
  if ( !this->ec_.val_ )
  {
    v40 = &this->bytes_transferred_;
    if ( !*(_BYTE *)(((unsigned __int64)&this->bytes_transferred_ >> 3) + 0x7FFF8000) )
    {
      v42 = this->bytes_transferred_;
      goto LABEL_109;
    }
    goto LABEL_152;
  }
LABEL_153:
  v42 = 0LL;
LABEL_109:
  if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
  {
    v43 = __asan_report_load8(&this->core_);
  }
  else
  {
    v43 = (unsigned __int64)boost::asio::ssl::detail::engine::map_error_code(&this->core_->engine_, &this->ec_);
    if ( !*(_WORD *)((v43 >> 3) + 0x7FFF8000) )
    {
      *((__m128i *)v7 - 8) = _mm_loadu_si128((const __m128i *)v43);
      *((_QWORD *)v7 - 20) = v42;
      boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::complete_now<boost::system::error_code &,unsigned long &>(
        &this->handler_,
        (boost::system::error_code *)v7 - 8,
        (unsigned __int64 *)v7 - 20,
        v44,
        v45);
      goto LABEL_112;
    }
  }
  v53 = (boost::system::error_code *)v43;
  __asan_report_load16(v43);
LABEL_156:
  __asan_report_load4(v53);
LABEL_157:
  if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
  {
    v59 = __asan_report_load8(&this->core_);
    goto LABEL_161;
  }
  v59 = (unsigned __int64)boost::asio::ssl::detail::engine::map_error_code(&this->core_->engine_, &this->ec_);
  if ( *(_WORD *)((v59 >> 3) + 0x7FFF8000) )
  {
LABEL_161:
    __asan_report_load16(v59);
    goto LABEL_162;
  }
  *((__m128i *)v7 - 8) = _mm_loadu_si128((const __m128i *)v59);
  *((_QWORD *)v7 - 20) = 0LL;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::complete_now<boost::system::error_code &,unsigned long &>(
    &this->handler_,
    (boost::system::error_code *)v7 - 8,
    (unsigned __int64 *)v7 - 20,
    v60,
    v61);
LABEL_112:
  if ( v82 == (char *)v6 )
  {
    *(_QWORD *)(v9 + 2147450880) = 0LL;
    *(_DWORD *)(v9 + 2147450888) = 0;
    *(_DWORD *)(v9 + 2147450900) = 0;
    return;
  }
LABEL_162:
  *(_QWORD *)v6 = 1172321806LL;
  *(_QWORD *)(v9 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  *(_QWORD *)(v9 + 2147450888) = 0xF5F5F5F5F5F5F5F5LL;
  *(_QWORD *)(v9 + 2147450896) = 0xF5F5F5F5F5F5F5F5LL;
};

// Line 137: range 0000000019CB4BF2-0000000019CB59D6
// local variable allocation has failed, the output may be wrong!
void __fastcall boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::operator()(
        boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const this,
        boost::system::error_code ec,
        std::size_t bytes_transferred,
        int start)
{
  boost::date_time::int_adapter<long int>::int_type p_implementation; // r13
  unsigned __int64 v6; // r14
  char *v7; // r15
  boost::asio::ssl::detail::stream_core *v8; // rbx
  void *p_start; // rdi
  char v10; // al
  void *p_ec; // rdi
  char v12; // al
  __int64 v13; // rax
  boost::asio::ssl::detail::stream_core *v14; // r12
  char *v15; // rsi
  boost::asio::ssl::detail::engine::want v16; // eax
  char v17; // cl
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *next_layer; // rcx
  boost::asio::ssl::detail::stream_core *v19; // rax
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator::reference v20; // rax
  std::size_t data; // rcx
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator::reference v22; // rax
  std::size_t v23; // r13
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator::reference v24; // rax
  std::size_t v25; // r12
  boost::asio::ssl::detail::stream_core **p_size; // rdi
  boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> >::time_rep_type v27; // rax
  boost::asio::ssl::detail::stream_core **v28; // rdi
  void *p_input_buffer; // rdi
  boost::asio::const_buffer *v30; // rsi
  const boost::asio::const_buffer *v31; // rsi
  boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::implementation_type *v32; // rsi
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *v33; // rcx
  boost::asio::ssl::detail::stream_core *v34; // rax
  boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> >::time_rep_type v35; // rax
  boost::asio::ssl::detail::stream_core **v36; // rdi
  boost::date_time::int_adapter<long int>::int_type v37; // r13
  boost::asio::ssl::detail::stream_core **v38; // rdi
  boost::asio::mutable_buffer output; // rax
  char v40; // dl
  boost::asio::ssl::detail::engine::want want; // eax
  boost::date_time::int_adapter<long int>::int_type v42; // rdi
  char v43; // al
  std::size_t v44; // rbx
  unsigned __int64 v45; // rax
  boost::system::error_code *v46; // rcx
  unsigned __int64 *v47; // r8
  boost::asio::ssl::detail::stream_core **p_core; // rdi
  boost::asio::ssl::detail::stream_core *core; // rax
  std::size_t size; // rdx
  unsigned __int64 v51; // rsi
  boost::asio::ssl::detail::stream_core *v52; // r12
  boost::asio::const_buffer *p_input; // rsi
  const boost::asio::const_buffer *v54; // rsi
  boost::asio::ssl::detail::stream_core *v55; // r12
  boost::asio::deadline_timer *p_pending_read; // rdi
  boost::system::error_code *v57; // rdi
  char v58; // al
  boost::asio::deadline_timer *v59; // rsi
  boost::asio::ssl::detail::stream_core **p_pending_write; // rdi
  boost::asio::ssl::detail::stream_core *v61; // r12
  boost::asio::ssl::detail::stream_core **v62; // rdi
  boost::asio::ssl::detail::stream_core *v63; // rbx
  boost::date_time::int_adapter<long int>::int_type v64; // r12
  unsigned __int64 v65; // rax
  boost::system::error_code *v66; // rcx
  unsigned __int64 *v67; // r8
  unsigned __int64 v70; // [rsp+18h] [rbp-3A0h]
  std::size_t *p_bytes_transferred; // [rsp+38h] [rbp-380h]
  std::size_t *value; // [rsp+38h] [rbp-380h]
  std::size_t *v74; // [rsp+38h] [rbp-380h]
  boost::system::error_code *eca; // [rsp+40h] [rbp-378h]
  boost::asio::ssl::detail::stream_core *v76; // [rsp+48h] [rbp-370h]
  char *v77; // [rsp+50h] [rbp-368h]
  char *v78; // [rsp+58h] [rbp-360h]
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator v79; // [rsp+60h] [rbp-358h] BYREF
  std::_Vector_base<unsigned char>::pointer M_end_of_storage; // [rsp+80h] [rbp-338h]
  std::size_t v81; // [rsp+88h] [rbp-330h]
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator v82; // [rsp+90h] [rbp-328h] BYREF
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > >::const_iterator v83; // [rsp+B0h] [rbp-308h] BYREF
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > >::const_iterator v84; // [rsp+F0h] [rbp-2C8h] BYREF
  boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > > v85; // [rsp+130h] [rbp-288h] BYREF
  char v86[248]; // [rsp+2C0h] [rbp-F8h] BYREF

  v6 = (unsigned __int64)v86;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v13 = __asan_stack_malloc_2(192LL);
    if ( v13 )
      v6 = v13;
  }
  v7 = (char *)(v6 + 192);
  v8 = (boost::asio::ssl::detail::stream_core *)(v6 + 192);
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 32 8 17 bytes_transferred 64 16 6 buffer 96 64 4 iter";
  *(_QWORD *)(v6 + 16) = boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::operator();
  v70 = v6 >> 3;
  *(_DWORD *)(v70 + 2147450880) = -235802127;
  *(_DWORD *)(v70 + 2147450884) = -218959360;
  *(_DWORD *)(v70 + 2147450888) = -219021312;
  *(_DWORD *)(v70 + 2147450900) = -202116109;
  p_start = &this->start_;
  v10 = *(_BYTE *)(((unsigned __int64)&this->start_ >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
  {
    __asan_report_store4(p_start);
    goto LABEL_14;
  }
  this->start_ = start;
  if ( start == 1 )
    goto LABEL_118;
LABEL_5:
  if ( bytes_transferred == -1LL )
    goto LABEL_88;
  p_ec = &this->ec_;
  v12 = *(_BYTE *)(((unsigned __int64)&this->ec_ >> 3) + 0x7FFF8000);
  if ( v12 && v12 <= 3 )
    goto LABEL_86;
  if ( !this->ec_.val_ )
  {
    p_ec = &this->ec_;
    if ( *(_WORD *)(((unsigned __int64)&this->ec_ >> 3) + 0x7FFF8000) )
      goto LABEL_87;
    this->ec_ = ec;
  }
LABEL_89:
  v40 = *(_BYTE *)(((unsigned __int64)&this->want_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 92) & 7) + 3) >= v40 && v40 )
  {
    __asan_report_load4(&this->want_);
    goto LABEL_105;
  }
  want = this->want_;
  switch ( want )
  {
    case want_output_and_retry:
      goto LABEL_127;
    case want_output:
      goto LABEL_134;
    case want_input_and_retry:
LABEL_105:
      p_core = &this->core_;
      if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(p_core);
      }
      else
      {
        core = this->core_;
        p_core = (boost::asio::ssl::detail::stream_core **)&core->input_buffer_.size_;
        if ( !*(_BYTE *)(((unsigned __int64)&core->input_buffer_.size_ >> 3) + 0x7FFF8000) )
        {
          size = core->input_buffer_.size_;
          if ( bytes_transferred <= size )
            size = bytes_transferred;
          p_core = (boost::asio::ssl::detail::stream_core **)&core->input_buffer_;
          if ( !*(_BYTE *)(((unsigned __int64)&core->input_buffer_ >> 3) + 0x7FFF8000) )
          {
            p_core = (boost::asio::ssl::detail::stream_core **)&core->input_;
            v51 = (unsigned __int64)&core->input_ >> 3;
            if ( !*(_WORD *)(v51 + 0x7FFF8000) )
            {
              core->input_.data_ = core->input_buffer_.data_;
              core->input_.size_ = size;
              v52 = this->core_;
              p_input = &v52->input_;
              if ( !*(_WORD *)(((unsigned __int64)&v52->input_ >> 3) + 0x7FFF8000) )
              {
                v52->input_ = boost::asio::ssl::detail::engine::put_input(&this->core_->engine_, v54);
                v55 = this->core_;
                value = (std::size_t *)boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(neg_infin).time_count_.value_;
                *((_DWORD *)v7 - 32) = 0;
                *(v7 - 124) = 0;
                *((_QWORD *)v7 - 15) = &boost::system::detail::cat_holder<void>::system_category_instance;
                p_pending_read = &v55->pending_read_;
                if ( !*(_BYTE *)(((unsigned __int64)&v55->pending_read_ >> 3) + 0x7FFF8000) )
                {
                  p_implementation = (boost::date_time::int_adapter<long int>::int_type)&v55->pending_read_.impl_.implementation_;
                  boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
                    v55->pending_read_.impl_.service_,
                    &v55->pending_read_.impl_.implementation_,
                    (boost::system::error_code *)v7 - 8);
                  if ( !*(_BYTE *)(((unsigned __int64)&v55->pending_read_.impl_.implementation_ >> 3) + 0x7FFF8000) )
                  {
                    v55->pending_read_.impl_.implementation_.expiry.time_.time_count_.value_ = (boost::date_time::int_adapter<long int>::int_type)value;
                    while ( 1 )
                    {
LABEL_115:
                      v57 = &this->ec_;
                      v58 = *(_BYTE *)(((unsigned __int64)&this->ec_ >> 3) + 0x7FFF8000);
                      if ( v58 && v58 <= 3 )
                        goto LABEL_146;
                      if ( this->ec_.val_ )
                        goto LABEL_147;
LABEL_118:
                      p_bytes_transferred = &this->bytes_transferred_;
                      eca = &this->ec_;
                      p_start = &this->core_;
                      if ( !*(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                      {
                        v76 = this->core_;
                        boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::end(
                          &v84,
                          &this->op_.buffers_);
                        boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::begin(
                          &v83,
                          &this->op_.buffers_);
                        *((_QWORD *)v7 - 12) = v83.b_;
                        *((_QWORD *)v7 - 11) = v83.remain_;
                        *((_QWORD *)v7 - 10) = v83.it_.b_;
                        *((_QWORD *)v7 - 9) = v83.it_.remain_;
                        *((_QWORD *)v7 - 8) = v83.it_.it_.it_.bn_;
                        *(v7 - 48) = 0;
                        *((_QWORD *)v7 - 16) = v7 - 56;
                        *((_QWORD *)v7 - 15) = &v83.it_.it_.it_.it_;
                        boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
                          v83.it_.it_.it_.it_.i_,
                          (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy *)v7
                        - 8);
                        *((_QWORD *)v7 - 5) = v83.it_.it_.b_;
                        v77 = (char *)v6;
                        v78 = v7;
                        goto LABEL_29;
                      }
LABEL_14:
                      __asan_report_load8(p_start);
LABEL_15:
                      if ( boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::const_iterator::operator==(
                             (const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *const)&v8[-1].output_buffer_space_._M_impl._M_end_of_storage,
                             &v84.it_) )
                      {
                        v6 = (unsigned __int64)v77;
                        v7 = v78;
                        p_implementation = 0LL;
                        v77 = 0LL;
                      }
                      else
                      {
                        while ( 1 )
                        {
                          v20 = boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::const_iterator::operator*((const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *const)&v8[-1].output_buffer_.size_);
                          data = v20.size_;
                          if ( v8[-1].output_buffer_.data_ < (void *)v20.size_ )
                            data = (std::size_t)v8[-1].output_buffer_.data_;
                          if ( v8[-1].output_buffer_space_._M_impl._M_finish < (std::_Vector_base<unsigned char>::pointer)data )
                            data = (std::size_t)v8[-1].output_buffer_space_._M_impl._M_finish;
                          if ( data )
                            break;
                          M_end_of_storage = v8[-1].output_buffer_space_._M_impl._M_end_of_storage;
                          v81 = (std::size_t)v8[-1].output_buffer_.data_;
                          v82.it_.bn_ = (const boost::beast::detail::tuple<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> *)v8[-1].output_buffer_.size_;
                          v82.it_.it_.i_ = 0;
                          v8[-1].pending_write_.impl_.implementation_.timer_data.next_ = (boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::per_timer_data *)&v82.it_.it_;
                          v8[-1].pending_write_.impl_.implementation_.timer_data.prev_ = (boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::per_timer_data *)&v8[-1].input_buffer_space_;
                          boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
                            LOBYTE(v8[-1].input_buffer_space_._M_impl._M_finish),
                            (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy *)&v8[-1].pending_write_.impl_.implementation_.timer_data.next_);
                          v82.b_ = (const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *)v8[-1].input_buffer_space_._M_impl._M_end_of_storage;
                          v79.it_.bn_ = (const boost::beast::detail::tuple<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> *)v8[-1].output_buffer_.size_;
                          v79.it_.it_.i_ = 0;
                          v8[-1].pending_write_.impl_.implementation_.timer_data.next_ = (boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::per_timer_data *)&v79.it_.it_;
                          v8[-1].pending_write_.impl_.implementation_.timer_data.prev_ = (boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::per_timer_data *)&v8[-1].input_buffer_space_;
                          boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
                            LOBYTE(v8[-1].input_buffer_space_._M_impl._M_finish),
                            (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy *)&v8[-1].pending_write_.impl_.implementation_.timer_data.next_);
                          v79.b_ = (const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *)v8[-1].input_buffer_space_._M_impl._M_end_of_storage;
                          boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++((boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)&v8[-1].output_buffer_.size_);
                          v22 = boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::const_iterator::operator*(&v79);
                          v23 = v22.size_;
                          *(_QWORD *)&v8[-1].pending_write_.impl_.implementation_.might_have_pending_waits = &v79.it_.it_;
                          boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
                            v79.it_.it_.i_,
                            (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)&v8[-1].pending_write_.impl_.implementation_.might_have_pending_waits);
                          v8[-1].output_buffer_.data_ = (char *)v8[-1].output_buffer_.data_ - v23;
                          v24 = boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::const_iterator::operator*(&v82);
                          v25 = v24.size_;
                          if ( v81 < v24.size_ )
                            v25 = v81;
                          *(_QWORD *)&v8[-1].pending_write_.impl_.implementation_.might_have_pending_waits = &v82.it_.it_;
                          boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
                            v82.it_.it_.i_,
                            (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)&v8[-1].pending_write_.impl_.implementation_.might_have_pending_waits);
                          v8[-1].output_buffer_space_._M_impl._M_finish -= v25;
LABEL_29:
                          if ( v8[-1].output_buffer_space_._M_impl._M_start == (std::_Vector_base<unsigned char>::pointer)v84.b_ )
                            goto LABEL_15;
                        }
                        v6 = (unsigned __int64)v77;
                        v7 = v78;
                        p_implementation = (boost::date_time::int_adapter<long int>::int_type)v20.data_;
                        v77 = (char *)data;
                      }
                      *((_QWORD *)v7 - 20) = v7 - 56;
                      v14 = (boost::asio::ssl::detail::stream_core *)(v7 - 160);
                      boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
                        (unsigned __int8)*(v7 - 48),
                        (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)v7
                      - 20);
                      *((_QWORD *)v7 - 20) = &v83.it_.it_.it_.it_;
                      boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
                        v83.it_.it_.it_.it_.i_,
                        (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)v7
                      - 20);
                      *((_QWORD *)v7 - 20) = &v84.it_.it_.it_.it_;
                      boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
                        v84.it_.it_.it_.it_.i_,
                        (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)v7
                      - 20);
                      *((_QWORD *)v7 - 16) = p_implementation;
                      *((_QWORD *)v7 - 15) = v77;
                      v15 = v7 - 128;
                      v16 = boost::asio::ssl::detail::engine::write(
                              &v76->engine_,
                              (const boost::asio::const_buffer *)v7 - 8,
                              eca,
                              p_bytes_transferred);
                      v17 = *(_BYTE *)(((unsigned __int64)&this->want_ >> 3) + 0x7FFF8000);
                      if ( (char)((((_BYTE)this + 92) & 7) + 3) < v17 )
                        goto LABEL_19;
                      if ( v17 )
                      {
                        __asan_report_store4(&this->want_);
                      }
                      else
                      {
LABEL_19:
                        this->want_ = v16;
                        if ( v16 == want_output_and_retry || v16 == want_output )
                          goto LABEL_65;
                        if ( v16 != want_input_and_retry )
                        {
                          if ( !start )
                            goto LABEL_5;
                          if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                          {
                            next_layer = this->next_layer_;
                            p_ec = &this->core_;
                            if ( !*(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                            {
                              v19 = this->core_;
                              p_ec = (void *)&v19->input_buffer_;
                              if ( !*(_BYTE *)(((unsigned __int64)&v19->input_buffer_ >> 3) + 0x7FFF8000) )
                              {
                                *((_QWORD *)v7 - 16) = v19->input_buffer_.data_;
                                *((_QWORD *)v7 - 15) = 0LL;
                                boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::async_read_some<boost::asio::mutable_buffers_1,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>(
                                  next_layer,
                                  (const boost::asio::mutable_buffers_1 *)v7 - 8,
                                  this);
                                goto LABEL_102;
                              }
LABEL_85:
                              __asan_report_load8(p_ec);
LABEL_86:
                              __asan_report_load4(p_ec);
LABEL_87:
                              __asan_report_store16(p_ec);
LABEL_88:
                              bytes_transferred = 0LL;
                              goto LABEL_89;
                            }
LABEL_84:
                            __asan_report_load8(p_ec);
                            goto LABEL_85;
                          }
LABEL_83:
                          p_ec = this;
                          __asan_report_load8(this);
                          goto LABEL_84;
                        }
                      }
                      p_size = &this->core_;
                      if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                        break;
                      v14 = this->core_;
                      p_size = (boost::asio::ssl::detail::stream_core **)&v14->input_.size_;
                      if ( *(_BYTE *)(((unsigned __int64)&v14->input_.size_ >> 3) + 0x7FFF8000) )
                        goto LABEL_47;
                      if ( !v14->input_.size_ )
                      {
                        v27.time_count_.value_ = boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(neg_infin).time_count_.value_;
                        v28 = &this->core_;
                        if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                          goto LABEL_51;
                        v8 = this->core_;
                        v28 = (boost::asio::ssl::detail::stream_core **)&v8->pending_read_.impl_.implementation_;
                        if ( *(_BYTE *)(((unsigned __int64)&v8->pending_read_.impl_.implementation_ >> 3) + 0x7FFF8000) )
                          goto LABEL_52;
                        if ( v8->pending_read_.impl_.implementation_.expiry.time_.time_count_.value_ == v27.time_count_.value_ )
                          goto LABEL_53;
                        p_input_buffer = &v8->pending_read_;
                        if ( !*(_BYTE *)(((unsigned __int64)&v8->pending_read_ >> 3) + 0x7FFF8000) )
                        {
                          boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>(
                            v8->pending_read_.impl_.service_,
                            &v8->pending_read_.impl_.implementation_,
                            this,
                            &v8->pending_read_.impl_.implementation_executor_);
                          goto LABEL_102;
                        }
                        goto LABEL_64;
                      }
LABEL_48:
                      v30 = &v14->input_;
                      if ( *(_WORD *)(((unsigned __int64)&v14->input_ >> 3) + 0x7FFF8000) )
                      {
                        v28 = (boost::asio::ssl::detail::stream_core **)&v14->input_;
                        __asan_report_store16(&v14->input_);
LABEL_51:
                        __asan_report_load8(v28);
LABEL_52:
                        __asan_report_load8(v28);
LABEL_53:
                        p_implementation = boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(pos_infin).time_count_.value_;
                        *((_DWORD *)v7 - 32) = 0;
                        *(v7 - 124) = 0;
                        *((_QWORD *)v7 - 15) = &boost::system::detail::cat_holder<void>::system_category_instance;
                        if ( *(_BYTE *)(((unsigned __int64)&v8->pending_read_ >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_load8(&v8->pending_read_);
                        }
                        else
                        {
                          v14 = (boost::asio::ssl::detail::stream_core *)&v8->pending_read_.impl_.implementation_;
                          v32 = &v8->pending_read_.impl_.implementation_;
                          boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
                            v8->pending_read_.impl_.service_,
                            &v8->pending_read_.impl_.implementation_,
                            (boost::system::error_code *)v7 - 8);
                          if ( !*(_BYTE *)(((unsigned __int64)&v8->pending_read_.impl_.implementation_ >> 3) + 0x7FFF8000) )
                          {
                            v8->pending_read_.impl_.implementation_.expiry.time_.time_count_.value_ = p_implementation;
                            if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                            {
                              v33 = this->next_layer_;
                              p_input_buffer = &this->core_;
                              if ( !*(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                              {
                                v34 = this->core_;
                                p_input_buffer = (void *)&v34->input_buffer_;
                                if ( !*(_WORD *)(((unsigned __int64)&v34->input_buffer_ >> 3) + 0x7FFF8000) )
                                {
                                  *((__m128i *)v7 - 8) = _mm_loadu_si128((const __m128i *)&v34->input_buffer_);
                                  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::async_read_some<boost::asio::mutable_buffers_1,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>(
                                    v33,
                                    (const boost::asio::mutable_buffers_1 *)v7 - 8,
                                    this);
                                  goto LABEL_102;
                                }
LABEL_63:
                                __asan_report_load16(p_input_buffer);
LABEL_64:
                                __asan_report_load8(p_input_buffer);
LABEL_65:
                                v35.time_count_.value_ = boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(neg_infin).time_count_.value_;
                                v36 = &this->core_;
                                if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_load8(v36);
                                }
                                else
                                {
                                  v8 = this->core_;
                                  v36 = (boost::asio::ssl::detail::stream_core **)&v8->pending_write_.impl_.implementation_;
                                  if ( !*(_BYTE *)(((unsigned __int64)&v8->pending_write_.impl_.implementation_ >> 3)
                                                 + 0x7FFF8000) )
                                  {
                                    if ( v8->pending_write_.impl_.implementation_.expiry.time_.time_count_.value_ != v35.time_count_.value_ )
                                    {
                                      if ( !*(_BYTE *)(((unsigned __int64)&v8->pending_write_ >> 3) + 0x7FFF8000) )
                                      {
                                        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>(
                                          v8->pending_write_.impl_.service_,
                                          &v8->pending_write_.impl_.implementation_,
                                          this,
                                          &v8->pending_write_.impl_.implementation_executor_);
                                        goto LABEL_102;
                                      }
                                      __asan_report_load8(&v8->pending_write_);
                                      goto LABEL_83;
                                    }
LABEL_72:
                                    v37 = boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(pos_infin).time_count_.value_;
                                    *((_DWORD *)v7 - 32) = 0;
                                    *(v7 - 124) = 0;
                                    *((_QWORD *)v7 - 15) = &boost::system::detail::cat_holder<void>::system_category_instance;
                                    if ( *(_BYTE *)(((unsigned __int64)&v8->pending_write_ >> 3) + 0x7FFF8000) )
                                    {
                                      __asan_report_load8(&v8->pending_write_);
                                    }
                                    else
                                    {
                                      v14 = (boost::asio::ssl::detail::stream_core *)&v8->pending_write_.impl_.implementation_;
                                      boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
                                        v8->pending_write_.impl_.service_,
                                        &v8->pending_write_.impl_.implementation_,
                                        (boost::system::error_code *)v7 - 8);
                                      if ( !*(_BYTE *)(((unsigned __int64)&v8->pending_write_.impl_.implementation_ >> 3)
                                                     + 0x7FFF8000) )
                                      {
                                        v8->pending_write_.impl_.implementation_.expiry.time_.time_count_.value_ = v37;
                                        v38 = &this->core_;
                                        if ( !*(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                                        {
                                          output = boost::asio::ssl::detail::engine::get_output(
                                                     &this->core_->engine_,
                                                     &this->core_->output_buffer_);
                                          if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                                          {
                                            v85.stream_ = this->next_layer_;
                                            v85.buffers_.buffer_ = (boost::asio::const_buffers_1)output;
                                            v85.buffers_.total_consumed_ = 0LL;
                                            v85.start_ = 0;
                                            boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::io_op(
                                              &v85.handler_,
                                              this);
                                            *((_DWORD *)v7 - 32) = 0;
                                            *(v7 - 124) = 0;
                                            *((_QWORD *)v7 - 15) = &boost::system::detail::cat_holder<void>::system_category_instance;
                                            boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>::operator()(
                                              &v85,
                                              (const boost::system::error_code *)v7 - 8,
                                              0LL,
                                              1);
LABEL_81:
                                            boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::~io_op(&v85.handler_);
                                            goto LABEL_102;
                                          }
LABEL_80:
                                          __asan_report_load8(this);
                                          goto LABEL_81;
                                        }
LABEL_79:
                                        __asan_report_load8(v38);
                                        goto LABEL_80;
                                      }
                                    }
                                    v38 = (boost::asio::ssl::detail::stream_core **)v14;
                                    __asan_report_store8();
                                    goto LABEL_79;
                                  }
                                }
                                __asan_report_load8(v36);
                                goto LABEL_72;
                              }
LABEL_62:
                              __asan_report_load8(p_input_buffer);
                              goto LABEL_63;
                            }
LABEL_61:
                            p_input_buffer = this;
                            __asan_report_load8(this);
                            goto LABEL_62;
                          }
                        }
                        __asan_report_store8();
                        goto LABEL_61;
                      }
                      v14->input_ = boost::asio::ssl::detail::engine::put_input(&v14->engine_, v31);
                    }
                    __asan_report_load8(p_size);
LABEL_47:
                    __asan_report_load8(p_size);
                    goto LABEL_48;
                  }
                  goto LABEL_126;
                }
LABEL_125:
                __asan_report_load8(p_pending_read);
LABEL_126:
                __asan_report_store8();
LABEL_127:
                p_pending_write = &this->core_;
                if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load8(p_pending_write);
                }
                else
                {
                  v61 = this->core_;
                  v74 = (std::size_t *)boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(neg_infin).time_count_.value_;
                  *((_DWORD *)v7 - 32) = 0;
                  *(v7 - 124) = 0;
                  *((_QWORD *)v7 - 15) = &boost::system::detail::cat_holder<void>::system_category_instance;
                  p_pending_write = (boost::asio::ssl::detail::stream_core **)&v61->pending_write_;
                  if ( !*(_BYTE *)(((unsigned __int64)&v61->pending_write_ >> 3) + 0x7FFF8000) )
                  {
                    p_implementation = (boost::date_time::int_adapter<long int>::int_type)&v61->pending_write_.impl_.implementation_;
                    boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
                      v61->pending_write_.impl_.service_,
                      &v61->pending_write_.impl_.implementation_,
                      (boost::system::error_code *)v7 - 8);
                    if ( !*(_BYTE *)(((unsigned __int64)&v61->pending_write_.impl_.implementation_ >> 3) + 0x7FFF8000) )
                    {
                      v61->pending_write_.impl_.implementation_.expiry.time_.time_count_.value_ = (boost::date_time::int_adapter<long int>::int_type)v74;
                      goto LABEL_115;
                    }
                    goto LABEL_133;
                  }
                }
                __asan_report_load8(p_pending_write);
LABEL_133:
                __asan_report_store8();
LABEL_134:
                v62 = &this->core_;
                if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load8(v62);
                }
                else
                {
                  v63 = this->core_;
                  v64 = boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(neg_infin).time_count_.value_;
                  *((_DWORD *)v7 - 32) = 0;
                  *(v7 - 124) = 0;
                  *((_QWORD *)v7 - 15) = &boost::system::detail::cat_holder<void>::system_category_instance;
                  v62 = (boost::asio::ssl::detail::stream_core **)&v63->pending_write_;
                  if ( !*(_BYTE *)(((unsigned __int64)&v63->pending_write_ >> 3) + 0x7FFF8000) )
                  {
                    p_implementation = (boost::date_time::int_adapter<long int>::int_type)&v63->pending_write_.impl_.implementation_;
                    boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
                      v63->pending_write_.impl_.service_,
                      &v63->pending_write_.impl_.implementation_,
                      (boost::system::error_code *)v7 - 8);
                    if ( !*(_BYTE *)(((unsigned __int64)&v63->pending_write_.impl_.implementation_ >> 3) + 0x7FFF8000) )
                    {
                      v63->pending_write_.impl_.implementation_.expiry.time_.time_count_.value_ = v64;
                      break;
                    }
LABEL_140:
                    v42 = p_implementation;
                    __asan_report_store8();
LABEL_141:
                    __asan_report_load4(v42);
LABEL_142:
                    __asan_report_load8(v42);
                    goto LABEL_143;
                  }
                }
                __asan_report_load8(v62);
                goto LABEL_140;
              }
LABEL_124:
              p_pending_read = v59;
              __asan_report_store16(v59);
              goto LABEL_125;
            }
LABEL_123:
            __asan_report_store16(p_core);
            goto LABEL_124;
          }
LABEL_122:
          __asan_report_load8(p_core);
          goto LABEL_123;
        }
      }
      __asan_report_load8(p_core);
      goto LABEL_122;
  }
  v42 = (boost::date_time::int_adapter<long int>::int_type)&this->ec_;
  v43 = *(_BYTE *)(((unsigned __int64)&this->ec_ >> 3) + 0x7FFF8000);
  if ( v43 && v43 <= 3 )
    goto LABEL_141;
  if ( !this->ec_.val_ )
  {
    v42 = (boost::date_time::int_adapter<long int>::int_type)&this->bytes_transferred_;
    if ( !*(_BYTE *)(((unsigned __int64)&this->bytes_transferred_ >> 3) + 0x7FFF8000) )
    {
      v44 = this->bytes_transferred_;
      goto LABEL_99;
    }
    goto LABEL_142;
  }
LABEL_143:
  v44 = 0LL;
LABEL_99:
  if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
  {
    v45 = __asan_report_load8(&this->core_);
  }
  else
  {
    v45 = (unsigned __int64)boost::asio::ssl::detail::engine::map_error_code(&this->core_->engine_, &this->ec_);
    if ( !*(_WORD *)((v45 >> 3) + 0x7FFF8000) )
    {
      *((__m128i *)v7 - 8) = _mm_loadu_si128((const __m128i *)v45);
      *((_QWORD *)v7 - 20) = v44;
      boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::complete_now<boost::system::error_code &,unsigned long &>(
        &this->handler_,
        (boost::system::error_code *)v7 - 8,
        (unsigned __int64 *)v7 - 20,
        v46,
        v47);
      goto LABEL_102;
    }
  }
  v57 = (boost::system::error_code *)v45;
  __asan_report_load16(v45);
LABEL_146:
  __asan_report_load4(v57);
LABEL_147:
  if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
  {
    v65 = __asan_report_load8(&this->core_);
    goto LABEL_151;
  }
  v65 = (unsigned __int64)boost::asio::ssl::detail::engine::map_error_code(&this->core_->engine_, &this->ec_);
  if ( *(_WORD *)((v65 >> 3) + 0x7FFF8000) )
  {
LABEL_151:
    __asan_report_load16(v65);
    goto LABEL_152;
  }
  *((__m128i *)v7 - 8) = _mm_loadu_si128((const __m128i *)v65);
  *((_QWORD *)v7 - 20) = 0LL;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::complete_now<boost::system::error_code &,unsigned long &>(
    &this->handler_,
    (boost::system::error_code *)v7 - 8,
    (unsigned __int64 *)v7 - 20,
    v66,
    v67);
LABEL_102:
  if ( v86 == (char *)v6 )
  {
    *(_QWORD *)(v70 + 2147450880) = 0LL;
    *(_DWORD *)(v70 + 2147450888) = 0;
    *(_DWORD *)(v70 + 2147450900) = 0;
    return;
  }
LABEL_152:
  *(_QWORD *)v6 = 1172321806LL;
  *(_QWORD *)(v70 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  *(_QWORD *)(v70 + 2147450888) = 0xF5F5F5F5F5F5F5F5LL;
  *(_QWORD *)(v70 + 2147450896) = 0xF5F5F5F5F5F5F5F5LL;
};

// Line 137: range 0000000019CABB58-0000000019CAC93C
// local variable allocation has failed, the output may be wrong!
void __fastcall boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::operator()(
        boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const this,
        boost::system::error_code ec,
        std::size_t bytes_transferred,
        int start)
{
  boost::date_time::int_adapter<long int>::int_type p_implementation; // r13
  unsigned __int64 v6; // r14
  char *v7; // r15
  boost::asio::ssl::detail::stream_core *v8; // rbx
  void *p_start; // rdi
  char v10; // al
  void *p_ec; // rdi
  char v12; // al
  __int64 v13; // rax
  boost::asio::ssl::detail::stream_core *v14; // r12
  char *v15; // rsi
  boost::asio::ssl::detail::engine::want v16; // eax
  char v17; // cl
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *next_layer; // rcx
  boost::asio::ssl::detail::stream_core *v19; // rax
  boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >::const_iterator::reference v20; // rax
  std::size_t data; // rcx
  boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >::const_iterator::reference v22; // rax
  std::size_t v23; // r13
  boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >::const_iterator::reference v24; // rax
  std::size_t v25; // r12
  boost::asio::ssl::detail::stream_core **p_size; // rdi
  boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> >::time_rep_type v27; // rax
  boost::asio::ssl::detail::stream_core **v28; // rdi
  void *p_input_buffer; // rdi
  boost::asio::const_buffer *v30; // rsi
  const boost::asio::const_buffer *v31; // rsi
  boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::implementation_type *v32; // rsi
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *v33; // rcx
  boost::asio::ssl::detail::stream_core *v34; // rax
  boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> >::time_rep_type v35; // rax
  boost::asio::ssl::detail::stream_core **v36; // rdi
  boost::date_time::int_adapter<long int>::int_type v37; // r13
  boost::asio::ssl::detail::stream_core **v38; // rdi
  boost::asio::mutable_buffer output; // rax
  char v40; // dl
  boost::asio::ssl::detail::engine::want want; // eax
  boost::date_time::int_adapter<long int>::int_type v42; // rdi
  char v43; // al
  std::size_t v44; // rbx
  unsigned __int64 v45; // rax
  boost::system::error_code *v46; // rcx
  unsigned __int64 *v47; // r8
  boost::asio::ssl::detail::stream_core **p_core; // rdi
  boost::asio::ssl::detail::stream_core *core; // rax
  std::size_t size; // rdx
  unsigned __int64 v51; // rsi
  boost::asio::ssl::detail::stream_core *v52; // r12
  boost::asio::const_buffer *p_input; // rsi
  const boost::asio::const_buffer *v54; // rsi
  boost::asio::ssl::detail::stream_core *v55; // r12
  boost::asio::deadline_timer *p_pending_read; // rdi
  boost::system::error_code *v57; // rdi
  char v58; // al
  boost::asio::deadline_timer *v59; // rsi
  boost::asio::ssl::detail::stream_core **p_pending_write; // rdi
  boost::asio::ssl::detail::stream_core *v61; // r12
  boost::asio::ssl::detail::stream_core **v62; // rdi
  boost::asio::ssl::detail::stream_core *v63; // rbx
  boost::date_time::int_adapter<long int>::int_type v64; // r12
  unsigned __int64 v65; // rax
  boost::system::error_code *v66; // rcx
  unsigned __int64 *v67; // r8
  unsigned __int64 v70; // [rsp+18h] [rbp-3A0h]
  std::size_t *p_bytes_transferred; // [rsp+38h] [rbp-380h]
  std::size_t *value; // [rsp+38h] [rbp-380h]
  std::size_t *v74; // [rsp+38h] [rbp-380h]
  boost::system::error_code *eca; // [rsp+40h] [rbp-378h]
  boost::asio::ssl::detail::stream_core *v76; // [rsp+48h] [rbp-370h]
  char *v77; // [rsp+50h] [rbp-368h]
  char *v78; // [rsp+58h] [rbp-360h]
  boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >::const_iterator v79; // [rsp+60h] [rbp-358h] BYREF
  std::_Vector_base<unsigned char>::pointer M_end_of_storage; // [rsp+80h] [rbp-338h]
  std::size_t v81; // [rsp+88h] [rbp-330h]
  boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >::const_iterator v82; // [rsp+90h] [rbp-328h] BYREF
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > >::const_iterator v83; // [rsp+B0h] [rbp-308h] BYREF
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > >::const_iterator v84; // [rsp+F0h] [rbp-2C8h] BYREF
  boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > > v85; // [rsp+130h] [rbp-288h] BYREF
  char v86[248]; // [rsp+2C0h] [rbp-F8h] BYREF

  v6 = (unsigned __int64)v86;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v13 = __asan_stack_malloc_2(192LL);
    if ( v13 )
      v6 = v13;
  }
  v7 = (char *)(v6 + 192);
  v8 = (boost::asio::ssl::detail::stream_core *)(v6 + 192);
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 32 8 17 bytes_transferred 64 16 6 buffer 96 64 4 iter";
  *(_QWORD *)(v6 + 16) = boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::operator();
  v70 = v6 >> 3;
  *(_DWORD *)(v70 + 2147450880) = -235802127;
  *(_DWORD *)(v70 + 2147450884) = -218959360;
  *(_DWORD *)(v70 + 2147450888) = -219021312;
  *(_DWORD *)(v70 + 2147450900) = -202116109;
  p_start = &this->start_;
  v10 = *(_BYTE *)(((unsigned __int64)&this->start_ >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
  {
    __asan_report_store4(p_start);
    goto LABEL_14;
  }
  this->start_ = start;
  if ( start == 1 )
    goto LABEL_118;
LABEL_5:
  if ( bytes_transferred == -1LL )
    goto LABEL_88;
  p_ec = &this->ec_;
  v12 = *(_BYTE *)(((unsigned __int64)&this->ec_ >> 3) + 0x7FFF8000);
  if ( v12 && v12 <= 3 )
    goto LABEL_86;
  if ( !this->ec_.val_ )
  {
    p_ec = &this->ec_;
    if ( *(_WORD *)(((unsigned __int64)&this->ec_ >> 3) + 0x7FFF8000) )
      goto LABEL_87;
    this->ec_ = ec;
  }
LABEL_89:
  v40 = *(_BYTE *)(((unsigned __int64)&this->want_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 92) & 7) + 3) >= v40 && v40 )
  {
    __asan_report_load4(&this->want_);
    goto LABEL_105;
  }
  want = this->want_;
  switch ( want )
  {
    case want_output_and_retry:
      goto LABEL_127;
    case want_output:
      goto LABEL_134;
    case want_input_and_retry:
LABEL_105:
      p_core = &this->core_;
      if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(p_core);
      }
      else
      {
        core = this->core_;
        p_core = (boost::asio::ssl::detail::stream_core **)&core->input_buffer_.size_;
        if ( !*(_BYTE *)(((unsigned __int64)&core->input_buffer_.size_ >> 3) + 0x7FFF8000) )
        {
          size = core->input_buffer_.size_;
          if ( bytes_transferred <= size )
            size = bytes_transferred;
          p_core = (boost::asio::ssl::detail::stream_core **)&core->input_buffer_;
          if ( !*(_BYTE *)(((unsigned __int64)&core->input_buffer_ >> 3) + 0x7FFF8000) )
          {
            p_core = (boost::asio::ssl::detail::stream_core **)&core->input_;
            v51 = (unsigned __int64)&core->input_ >> 3;
            if ( !*(_WORD *)(v51 + 0x7FFF8000) )
            {
              core->input_.data_ = core->input_buffer_.data_;
              core->input_.size_ = size;
              v52 = this->core_;
              p_input = &v52->input_;
              if ( !*(_WORD *)(((unsigned __int64)&v52->input_ >> 3) + 0x7FFF8000) )
              {
                v52->input_ = boost::asio::ssl::detail::engine::put_input(&this->core_->engine_, v54);
                v55 = this->core_;
                value = (std::size_t *)boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(neg_infin).time_count_.value_;
                *((_DWORD *)v7 - 32) = 0;
                *(v7 - 124) = 0;
                *((_QWORD *)v7 - 15) = &boost::system::detail::cat_holder<void>::system_category_instance;
                p_pending_read = &v55->pending_read_;
                if ( !*(_BYTE *)(((unsigned __int64)&v55->pending_read_ >> 3) + 0x7FFF8000) )
                {
                  p_implementation = (boost::date_time::int_adapter<long int>::int_type)&v55->pending_read_.impl_.implementation_;
                  boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
                    v55->pending_read_.impl_.service_,
                    &v55->pending_read_.impl_.implementation_,
                    (boost::system::error_code *)v7 - 8);
                  if ( !*(_BYTE *)(((unsigned __int64)&v55->pending_read_.impl_.implementation_ >> 3) + 0x7FFF8000) )
                  {
                    v55->pending_read_.impl_.implementation_.expiry.time_.time_count_.value_ = (boost::date_time::int_adapter<long int>::int_type)value;
                    while ( 1 )
                    {
LABEL_115:
                      v57 = &this->ec_;
                      v58 = *(_BYTE *)(((unsigned __int64)&this->ec_ >> 3) + 0x7FFF8000);
                      if ( v58 && v58 <= 3 )
                        goto LABEL_146;
                      if ( this->ec_.val_ )
                        goto LABEL_147;
LABEL_118:
                      p_bytes_transferred = &this->bytes_transferred_;
                      eca = &this->ec_;
                      p_start = &this->core_;
                      if ( !*(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                      {
                        v76 = this->core_;
                        boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>::end(
                          &v84,
                          &this->op_.buffers_);
                        boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>::begin(
                          &v83,
                          &this->op_.buffers_);
                        *((_QWORD *)v7 - 12) = v83.b_;
                        *((_QWORD *)v7 - 11) = v83.remain_;
                        *((_QWORD *)v7 - 10) = v83.it_.b_;
                        *((_QWORD *)v7 - 9) = v83.it_.remain_;
                        *((_QWORD *)v7 - 8) = v83.it_.it_.it_.bn_;
                        *(v7 - 48) = 0;
                        *((_QWORD *)v7 - 16) = v7 - 56;
                        *((_QWORD *)v7 - 15) = &v83.it_.it_.it_.it_;
                        boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
                          v83.it_.it_.it_.it_.i_,
                          (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy *)v7
                        - 8);
                        *((_QWORD *)v7 - 5) = v83.it_.it_.b_;
                        v77 = (char *)v6;
                        v78 = v7;
                        goto LABEL_29;
                      }
LABEL_14:
                      __asan_report_load8(p_start);
LABEL_15:
                      if ( boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>::const_iterator::operator==(
                             (const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&>::const_iterator *const)&v8[-1].output_buffer_space_._M_impl._M_end_of_storage,
                             &v84.it_) )
                      {
                        v6 = (unsigned __int64)v77;
                        v7 = v78;
                        p_implementation = 0LL;
                        v77 = 0LL;
                      }
                      else
                      {
                        while ( 1 )
                        {
                          v20 = boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>::const_iterator::operator*((const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >::const_iterator *const)&v8[-1].output_buffer_.size_);
                          data = v20.size_;
                          if ( v8[-1].output_buffer_.data_ < (void *)v20.size_ )
                            data = (std::size_t)v8[-1].output_buffer_.data_;
                          if ( v8[-1].output_buffer_space_._M_impl._M_finish < (std::_Vector_base<unsigned char>::pointer)data )
                            data = (std::size_t)v8[-1].output_buffer_space_._M_impl._M_finish;
                          if ( data )
                            break;
                          M_end_of_storage = v8[-1].output_buffer_space_._M_impl._M_end_of_storage;
                          v81 = (std::size_t)v8[-1].output_buffer_.data_;
                          v82.it_.bn_ = (const boost::beast::detail::tuple<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> *)v8[-1].output_buffer_.size_;
                          v82.it_.it_.i_ = 0;
                          v8[-1].pending_write_.impl_.implementation_.timer_data.next_ = (boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::per_timer_data *)&v82.it_.it_;
                          v8[-1].pending_write_.impl_.implementation_.timer_data.prev_ = (boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::per_timer_data *)&v8[-1].input_buffer_space_;
                          boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
                            LOBYTE(v8[-1].input_buffer_space_._M_impl._M_finish),
                            (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy *)&v8[-1].pending_write_.impl_.implementation_.timer_data.next_);
                          v82.b_ = (const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > > *)v8[-1].input_buffer_space_._M_impl._M_end_of_storage;
                          v79.it_.bn_ = (const boost::beast::detail::tuple<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> *)v8[-1].output_buffer_.size_;
                          v79.it_.it_.i_ = 0;
                          v8[-1].pending_write_.impl_.implementation_.timer_data.next_ = (boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::per_timer_data *)&v79.it_.it_;
                          v8[-1].pending_write_.impl_.implementation_.timer_data.prev_ = (boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::per_timer_data *)&v8[-1].input_buffer_space_;
                          boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
                            LOBYTE(v8[-1].input_buffer_space_._M_impl._M_finish),
                            (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy *)&v8[-1].pending_write_.impl_.implementation_.timer_data.next_);
                          v79.b_ = (const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > > *)v8[-1].input_buffer_space_._M_impl._M_end_of_storage;
                          boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator++((boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *const)&v8[-1].output_buffer_.size_);
                          v22 = boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>::const_iterator::operator*(&v79);
                          v23 = v22.size_;
                          *(_QWORD *)&v8[-1].pending_write_.impl_.implementation_.might_have_pending_waits = &v79.it_.it_;
                          boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
                            v79.it_.it_.i_,
                            (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)&v8[-1].pending_write_.impl_.implementation_.might_have_pending_waits);
                          v8[-1].output_buffer_.data_ = (char *)v8[-1].output_buffer_.data_ - v23;
                          v24 = boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>::const_iterator::operator*(&v82);
                          v25 = v24.size_;
                          if ( v81 < v24.size_ )
                            v25 = v81;
                          *(_QWORD *)&v8[-1].pending_write_.impl_.implementation_.might_have_pending_waits = &v82.it_.it_;
                          boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
                            v82.it_.it_.i_,
                            (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)&v8[-1].pending_write_.impl_.implementation_.might_have_pending_waits);
                          v8[-1].output_buffer_space_._M_impl._M_finish -= v25;
LABEL_29:
                          if ( v8[-1].output_buffer_space_._M_impl._M_start == (std::_Vector_base<unsigned char>::pointer)v84.b_ )
                            goto LABEL_15;
                        }
                        v6 = (unsigned __int64)v77;
                        v7 = v78;
                        p_implementation = (boost::date_time::int_adapter<long int>::int_type)v20.data_;
                        v77 = (char *)data;
                      }
                      *((_QWORD *)v7 - 20) = v7 - 56;
                      v14 = (boost::asio::ssl::detail::stream_core *)(v7 - 160);
                      boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
                        (unsigned __int8)*(v7 - 48),
                        (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)v7
                      - 20);
                      *((_QWORD *)v7 - 20) = &v83.it_.it_.it_.it_;
                      boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
                        v83.it_.it_.it_.it_.i_,
                        (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)v7
                      - 20);
                      *((_QWORD *)v7 - 20) = &v84.it_.it_.it_.it_;
                      boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
                        v84.it_.it_.it_.it_.i_,
                        (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)v7
                      - 20);
                      *((_QWORD *)v7 - 16) = p_implementation;
                      *((_QWORD *)v7 - 15) = v77;
                      v15 = v7 - 128;
                      v16 = boost::asio::ssl::detail::engine::write(
                              &v76->engine_,
                              (const boost::asio::const_buffer *)v7 - 8,
                              eca,
                              p_bytes_transferred);
                      v17 = *(_BYTE *)(((unsigned __int64)&this->want_ >> 3) + 0x7FFF8000);
                      if ( (char)((((_BYTE)this + 92) & 7) + 3) < v17 )
                        goto LABEL_19;
                      if ( v17 )
                      {
                        __asan_report_store4(&this->want_);
                      }
                      else
                      {
LABEL_19:
                        this->want_ = v16;
                        if ( v16 == want_output_and_retry || v16 == want_output )
                          goto LABEL_65;
                        if ( v16 != want_input_and_retry )
                        {
                          if ( !start )
                            goto LABEL_5;
                          if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                          {
                            next_layer = this->next_layer_;
                            p_ec = &this->core_;
                            if ( !*(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                            {
                              v19 = this->core_;
                              p_ec = (void *)&v19->input_buffer_;
                              if ( !*(_BYTE *)(((unsigned __int64)&v19->input_buffer_ >> 3) + 0x7FFF8000) )
                              {
                                *((_QWORD *)v7 - 16) = v19->input_buffer_.data_;
                                *((_QWORD *)v7 - 15) = 0LL;
                                boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::async_read_some<boost::asio::mutable_buffers_1,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>(
                                  next_layer,
                                  (const boost::asio::mutable_buffers_1 *)v7 - 8,
                                  this);
                                goto LABEL_102;
                              }
LABEL_85:
                              __asan_report_load8(p_ec);
LABEL_86:
                              __asan_report_load4(p_ec);
LABEL_87:
                              __asan_report_store16(p_ec);
LABEL_88:
                              bytes_transferred = 0LL;
                              goto LABEL_89;
                            }
LABEL_84:
                            __asan_report_load8(p_ec);
                            goto LABEL_85;
                          }
LABEL_83:
                          p_ec = this;
                          __asan_report_load8(this);
                          goto LABEL_84;
                        }
                      }
                      p_size = &this->core_;
                      if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                        break;
                      v14 = this->core_;
                      p_size = (boost::asio::ssl::detail::stream_core **)&v14->input_.size_;
                      if ( *(_BYTE *)(((unsigned __int64)&v14->input_.size_ >> 3) + 0x7FFF8000) )
                        goto LABEL_47;
                      if ( !v14->input_.size_ )
                      {
                        v27.time_count_.value_ = boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(neg_infin).time_count_.value_;
                        v28 = &this->core_;
                        if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                          goto LABEL_51;
                        v8 = this->core_;
                        v28 = (boost::asio::ssl::detail::stream_core **)&v8->pending_read_.impl_.implementation_;
                        if ( *(_BYTE *)(((unsigned __int64)&v8->pending_read_.impl_.implementation_ >> 3) + 0x7FFF8000) )
                          goto LABEL_52;
                        if ( v8->pending_read_.impl_.implementation_.expiry.time_.time_count_.value_ == v27.time_count_.value_ )
                          goto LABEL_53;
                        p_input_buffer = &v8->pending_read_;
                        if ( !*(_BYTE *)(((unsigned __int64)&v8->pending_read_ >> 3) + 0x7FFF8000) )
                        {
                          boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>(
                            v8->pending_read_.impl_.service_,
                            &v8->pending_read_.impl_.implementation_,
                            this,
                            &v8->pending_read_.impl_.implementation_executor_);
                          goto LABEL_102;
                        }
                        goto LABEL_64;
                      }
LABEL_48:
                      v30 = &v14->input_;
                      if ( *(_WORD *)(((unsigned __int64)&v14->input_ >> 3) + 0x7FFF8000) )
                      {
                        v28 = (boost::asio::ssl::detail::stream_core **)&v14->input_;
                        __asan_report_store16(&v14->input_);
LABEL_51:
                        __asan_report_load8(v28);
LABEL_52:
                        __asan_report_load8(v28);
LABEL_53:
                        p_implementation = boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(pos_infin).time_count_.value_;
                        *((_DWORD *)v7 - 32) = 0;
                        *(v7 - 124) = 0;
                        *((_QWORD *)v7 - 15) = &boost::system::detail::cat_holder<void>::system_category_instance;
                        if ( *(_BYTE *)(((unsigned __int64)&v8->pending_read_ >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_load8(&v8->pending_read_);
                        }
                        else
                        {
                          v14 = (boost::asio::ssl::detail::stream_core *)&v8->pending_read_.impl_.implementation_;
                          v32 = &v8->pending_read_.impl_.implementation_;
                          boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
                            v8->pending_read_.impl_.service_,
                            &v8->pending_read_.impl_.implementation_,
                            (boost::system::error_code *)v7 - 8);
                          if ( !*(_BYTE *)(((unsigned __int64)&v8->pending_read_.impl_.implementation_ >> 3) + 0x7FFF8000) )
                          {
                            v8->pending_read_.impl_.implementation_.expiry.time_.time_count_.value_ = p_implementation;
                            if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                            {
                              v33 = this->next_layer_;
                              p_input_buffer = &this->core_;
                              if ( !*(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                              {
                                v34 = this->core_;
                                p_input_buffer = (void *)&v34->input_buffer_;
                                if ( !*(_WORD *)(((unsigned __int64)&v34->input_buffer_ >> 3) + 0x7FFF8000) )
                                {
                                  *((__m128i *)v7 - 8) = _mm_loadu_si128((const __m128i *)&v34->input_buffer_);
                                  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::async_read_some<boost::asio::mutable_buffers_1,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>(
                                    v33,
                                    (const boost::asio::mutable_buffers_1 *)v7 - 8,
                                    this);
                                  goto LABEL_102;
                                }
LABEL_63:
                                __asan_report_load16(p_input_buffer);
LABEL_64:
                                __asan_report_load8(p_input_buffer);
LABEL_65:
                                v35.time_count_.value_ = boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(neg_infin).time_count_.value_;
                                v36 = &this->core_;
                                if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_load8(v36);
                                }
                                else
                                {
                                  v8 = this->core_;
                                  v36 = (boost::asio::ssl::detail::stream_core **)&v8->pending_write_.impl_.implementation_;
                                  if ( !*(_BYTE *)(((unsigned __int64)&v8->pending_write_.impl_.implementation_ >> 3)
                                                 + 0x7FFF8000) )
                                  {
                                    if ( v8->pending_write_.impl_.implementation_.expiry.time_.time_count_.value_ != v35.time_count_.value_ )
                                    {
                                      if ( !*(_BYTE *)(((unsigned __int64)&v8->pending_write_ >> 3) + 0x7FFF8000) )
                                      {
                                        boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>,boost::asio::detail::io_object_executor<boost::asio::executor>>(
                                          v8->pending_write_.impl_.service_,
                                          &v8->pending_write_.impl_.implementation_,
                                          this,
                                          &v8->pending_write_.impl_.implementation_executor_);
                                        goto LABEL_102;
                                      }
                                      __asan_report_load8(&v8->pending_write_);
                                      goto LABEL_83;
                                    }
LABEL_72:
                                    v37 = boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(pos_infin).time_count_.value_;
                                    *((_DWORD *)v7 - 32) = 0;
                                    *(v7 - 124) = 0;
                                    *((_QWORD *)v7 - 15) = &boost::system::detail::cat_holder<void>::system_category_instance;
                                    if ( *(_BYTE *)(((unsigned __int64)&v8->pending_write_ >> 3) + 0x7FFF8000) )
                                    {
                                      __asan_report_load8(&v8->pending_write_);
                                    }
                                    else
                                    {
                                      v14 = (boost::asio::ssl::detail::stream_core *)&v8->pending_write_.impl_.implementation_;
                                      boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
                                        v8->pending_write_.impl_.service_,
                                        &v8->pending_write_.impl_.implementation_,
                                        (boost::system::error_code *)v7 - 8);
                                      if ( !*(_BYTE *)(((unsigned __int64)&v8->pending_write_.impl_.implementation_ >> 3)
                                                     + 0x7FFF8000) )
                                      {
                                        v8->pending_write_.impl_.implementation_.expiry.time_.time_count_.value_ = v37;
                                        v38 = &this->core_;
                                        if ( !*(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                                        {
                                          output = boost::asio::ssl::detail::engine::get_output(
                                                     &this->core_->engine_,
                                                     &this->core_->output_buffer_);
                                          if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                                          {
                                            v85.stream_ = this->next_layer_;
                                            v85.buffers_.buffer_ = (boost::asio::const_buffers_1)output;
                                            v85.buffers_.total_consumed_ = 0LL;
                                            v85.start_ = 0;
                                            boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::io_op(
                                              &v85.handler_,
                                              this);
                                            *((_DWORD *)v7 - 32) = 0;
                                            *(v7 - 124) = 0;
                                            *((_QWORD *)v7 - 15) = &boost::system::detail::cat_holder<void>::system_category_instance;
                                            boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>::operator()(
                                              &v85,
                                              (const boost::system::error_code *)v7 - 8,
                                              0LL,
                                              1);
LABEL_81:
                                            boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::~io_op(&v85.handler_);
                                            goto LABEL_102;
                                          }
LABEL_80:
                                          __asan_report_load8(this);
                                          goto LABEL_81;
                                        }
LABEL_79:
                                        __asan_report_load8(v38);
                                        goto LABEL_80;
                                      }
                                    }
                                    v38 = (boost::asio::ssl::detail::stream_core **)v14;
                                    __asan_report_store8();
                                    goto LABEL_79;
                                  }
                                }
                                __asan_report_load8(v36);
                                goto LABEL_72;
                              }
LABEL_62:
                              __asan_report_load8(p_input_buffer);
                              goto LABEL_63;
                            }
LABEL_61:
                            p_input_buffer = this;
                            __asan_report_load8(this);
                            goto LABEL_62;
                          }
                        }
                        __asan_report_store8();
                        goto LABEL_61;
                      }
                      v14->input_ = boost::asio::ssl::detail::engine::put_input(&v14->engine_, v31);
                    }
                    __asan_report_load8(p_size);
LABEL_47:
                    __asan_report_load8(p_size);
                    goto LABEL_48;
                  }
                  goto LABEL_126;
                }
LABEL_125:
                __asan_report_load8(p_pending_read);
LABEL_126:
                __asan_report_store8();
LABEL_127:
                p_pending_write = &this->core_;
                if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load8(p_pending_write);
                }
                else
                {
                  v61 = this->core_;
                  v74 = (std::size_t *)boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(neg_infin).time_count_.value_;
                  *((_DWORD *)v7 - 32) = 0;
                  *(v7 - 124) = 0;
                  *((_QWORD *)v7 - 15) = &boost::system::detail::cat_holder<void>::system_category_instance;
                  p_pending_write = (boost::asio::ssl::detail::stream_core **)&v61->pending_write_;
                  if ( !*(_BYTE *)(((unsigned __int64)&v61->pending_write_ >> 3) + 0x7FFF8000) )
                  {
                    p_implementation = (boost::date_time::int_adapter<long int>::int_type)&v61->pending_write_.impl_.implementation_;
                    boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
                      v61->pending_write_.impl_.service_,
                      &v61->pending_write_.impl_.implementation_,
                      (boost::system::error_code *)v7 - 8);
                    if ( !*(_BYTE *)(((unsigned __int64)&v61->pending_write_.impl_.implementation_ >> 3) + 0x7FFF8000) )
                    {
                      v61->pending_write_.impl_.implementation_.expiry.time_.time_count_.value_ = (boost::date_time::int_adapter<long int>::int_type)v74;
                      goto LABEL_115;
                    }
                    goto LABEL_133;
                  }
                }
                __asan_report_load8(p_pending_write);
LABEL_133:
                __asan_report_store8();
LABEL_134:
                v62 = &this->core_;
                if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load8(v62);
                }
                else
                {
                  v63 = this->core_;
                  v64 = boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::get_time_rep(neg_infin).time_count_.value_;
                  *((_DWORD *)v7 - 32) = 0;
                  *(v7 - 124) = 0;
                  *((_QWORD *)v7 - 15) = &boost::system::detail::cat_holder<void>::system_category_instance;
                  v62 = (boost::asio::ssl::detail::stream_core **)&v63->pending_write_;
                  if ( !*(_BYTE *)(((unsigned __int64)&v63->pending_write_ >> 3) + 0x7FFF8000) )
                  {
                    p_implementation = (boost::date_time::int_adapter<long int>::int_type)&v63->pending_write_.impl_.implementation_;
                    boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
                      v63->pending_write_.impl_.service_,
                      &v63->pending_write_.impl_.implementation_,
                      (boost::system::error_code *)v7 - 8);
                    if ( !*(_BYTE *)(((unsigned __int64)&v63->pending_write_.impl_.implementation_ >> 3) + 0x7FFF8000) )
                    {
                      v63->pending_write_.impl_.implementation_.expiry.time_.time_count_.value_ = v64;
                      break;
                    }
LABEL_140:
                    v42 = p_implementation;
                    __asan_report_store8();
LABEL_141:
                    __asan_report_load4(v42);
LABEL_142:
                    __asan_report_load8(v42);
                    goto LABEL_143;
                  }
                }
                __asan_report_load8(v62);
                goto LABEL_140;
              }
LABEL_124:
              p_pending_read = v59;
              __asan_report_store16(v59);
              goto LABEL_125;
            }
LABEL_123:
            __asan_report_store16(p_core);
            goto LABEL_124;
          }
LABEL_122:
          __asan_report_load8(p_core);
          goto LABEL_123;
        }
      }
      __asan_report_load8(p_core);
      goto LABEL_122;
  }
  v42 = (boost::date_time::int_adapter<long int>::int_type)&this->ec_;
  v43 = *(_BYTE *)(((unsigned __int64)&this->ec_ >> 3) + 0x7FFF8000);
  if ( v43 && v43 <= 3 )
    goto LABEL_141;
  if ( !this->ec_.val_ )
  {
    v42 = (boost::date_time::int_adapter<long int>::int_type)&this->bytes_transferred_;
    if ( !*(_BYTE *)(((unsigned __int64)&this->bytes_transferred_ >> 3) + 0x7FFF8000) )
    {
      v44 = this->bytes_transferred_;
      goto LABEL_99;
    }
    goto LABEL_142;
  }
LABEL_143:
  v44 = 0LL;
LABEL_99:
  if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
  {
    v45 = __asan_report_load8(&this->core_);
  }
  else
  {
    v45 = (unsigned __int64)boost::asio::ssl::detail::engine::map_error_code(&this->core_->engine_, &this->ec_);
    if ( !*(_WORD *)((v45 >> 3) + 0x7FFF8000) )
    {
      *((__m128i *)v7 - 8) = _mm_loadu_si128((const __m128i *)v45);
      *((_QWORD *)v7 - 20) = v44;
      boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::complete_now<boost::system::error_code &,unsigned long &>(
        &this->handler_,
        (boost::system::error_code *)v7 - 8,
        (unsigned __int64 *)v7 - 20,
        v46,
        v47);
      goto LABEL_102;
    }
  }
  v57 = (boost::system::error_code *)v45;
  __asan_report_load16(v45);
LABEL_146:
  __asan_report_load4(v57);
LABEL_147:
  if ( *(_BYTE *)(((unsigned __int64)&this->core_ >> 3) + 0x7FFF8000) )
  {
    v65 = __asan_report_load8(&this->core_);
    goto LABEL_151;
  }
  v65 = (unsigned __int64)boost::asio::ssl::detail::engine::map_error_code(&this->core_->engine_, &this->ec_);
  if ( *(_WORD *)((v65 >> 3) + 0x7FFF8000) )
  {
LABEL_151:
    __asan_report_load16(v65);
    goto LABEL_152;
  }
  *((__m128i *)v7 - 8) = _mm_loadu_si128((const __m128i *)v65);
  *((_QWORD *)v7 - 20) = 0LL;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::complete_now<boost::system::error_code &,unsigned long &>(
    &this->handler_,
    (boost::system::error_code *)v7 - 8,
    (unsigned __int64 *)v7 - 20,
    v66,
    v67);
LABEL_102:
  if ( v86 == (char *)v6 )
  {
    *(_QWORD *)(v70 + 2147450880) = 0LL;
    *(_DWORD *)(v70 + 2147450888) = 0;
    *(_DWORD *)(v70 + 2147450900) = 0;
    return;
  }
LABEL_152:
  *(_QWORD *)v6 = 1172321806LL;
  *(_QWORD *)(v70 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  *(_QWORD *)(v70 + 2147450888) = 0xF5F5F5F5F5F5F5F5LL;
  *(_QWORD *)(v70 + 2147450896) = 0xF5F5F5F5F5F5F5F5LL;
};

// Line 339: range 0000000019C12C18-0000000019C1319A
// local variable allocation has failed, the output may be wrong!
void __fastcall boost::asio::ssl::detail::async_io<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::read_op<boost::asio::mutable_buffer>,boost::beast::detail::dynamic_read_ops::read_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>>>(
        boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *next_layer,
        boost::asio::ssl::detail::stream_core *core,
        const boost::asio::ssl::detail::read_op<boost::asio::mutable_buffer> *op,
        boost::beast::detail::dynamic_read_ops::read_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> > > *handler)
{
  boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> *p_h; // rbp
  __int64 v5; // r8
  __int64 v6; // r9
  void *v8; // rdi
  char v9; // al
  unsigned __int64 p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  __int64 (__fastcall **v12)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  void *p_target; // rdi
  boost::beast::detail::stable_base *list; // rax
  char v15; // al
  __int64 v16; // rsi OVERLAPPED
  const boost::system::detail::system_error_category *v17; // rdx
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::read_op<boost::asio::mutable_buffer>,boost::beast::detail::dynamic_read_ops::read_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> > > > v18; // [rsp+0h] [rbp-118h] BYREF

  v18.next_layer_ = next_layer;
  v18.core_ = core;
  if ( *(_WORD *)(((unsigned __int64)op >> 3) + 0x7FFF8000) )
  {
    v8 = (void *)op;
    __asan_report_load16(op);
LABEL_31:
    __asan_report_load4(v8);
    goto LABEL_32;
  }
  v18.op_ = (boost::asio::ssl::detail::read_op<boost::asio::mutable_buffer>)_mm_loadu_si128((const __m128i *)op);
  v18.start_ = 0;
  v18.want_ = want_nothing;
  v18.ec_.val_ = 0;
  v18.ec_.failed_ = 0;
  v18.ec_.cat_ = &boost::system::detail::cat_holder<void>::system_category_instance;
  v18.bytes_transferred_ = 0LL;
  v8 = &handler->boost::asio::coroutine;
  v9 = *(_BYTE *)(((unsigned __int64)&handler->boost::asio::coroutine >> 3) + 0x7FFF8000);
  if ( v9 && v9 <= 3 )
    goto LABEL_31;
  v18.handler_.value_ = handler->value_;
  v18.handler_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>,boost::asio::executor,std::allocator<void>>
                                                + 2);
  v18.handler_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>
                                                   + 2);
  p_h = &handler->h_.h_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.h_ >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    p_M_refcount = (unsigned __int64)p_h;
    __asan_report_load8(p_h);
    goto LABEL_33;
  }
  v18.handler_.h_.h_.coro_._M_ptr = handler->h_.h_.coro_._M_ptr;
  v18.handler_.h_.h_.coro_._M_refcount._M_pi = 0LL;
  p_M_refcount = (unsigned __int64)&handler->h_.h_.coro_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.h_.coro_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_load8(p_M_refcount);
    goto LABEL_34;
  }
  M_pi = handler->h_.h_.coro_._M_refcount._M_pi;
  handler->h_.h_.coro_._M_refcount._M_pi = 0LL;
  v18.handler_.h_.h_.coro_._M_refcount._M_pi = M_pi;
  handler->h_.h_.coro_._M_ptr = 0LL;
  p_M_refcount = (unsigned __int64)&handler->h_.h_.ca_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.h_.ca_ >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_load8(p_M_refcount);
    goto LABEL_35;
  }
  v18.handler_.h_.h_.ca_ = handler->h_.h_.ca_;
  p_M_refcount = (unsigned __int64)&handler->h_.h_.handler_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.h_.handler_ >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_load8(p_M_refcount);
LABEL_36:
    v12 = (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))__asan_report_load8(p_M_refcount);
    goto LABEL_37;
  }
  p_M_refcount = (unsigned __int64)handler->h_.h_.handler_.executor_.impl_;
  if ( !p_M_refcount )
    goto LABEL_12;
  if ( *(_BYTE *)((p_M_refcount >> 3) + 0x7FFF8000) )
    goto LABEL_36;
  v12 = *(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))p_M_refcount;
  if ( *(_BYTE *)((*(_QWORD *)p_M_refcount >> 3) + 0x7FFF8000LL) )
  {
LABEL_37:
    p_target = v12;
    __asan_report_load8(v12);
    goto LABEL_38;
  }
  p_M_refcount = (*v12)(
                   p_M_refcount,
                   core,
                   *(_QWORD *)p_M_refcount >> 3,
                   handler,
                   v5,
                   v6,
                   v18.next_layer_,
                   v18.core_,
                   v18.op_.buffers_.data_,
                   v18.op_.buffers_.size_,
                   *(_QWORD *)&v18.start_,
                   *(_QWORD *)&v18.ec_.val_,
                   v18.ec_.cat_);
LABEL_12:
  v18.handler_.h_.h_.handler_.executor_.impl_ = (boost::asio::executor::impl_base *)p_M_refcount;
  p_target = &handler->h_.h_.handler_.target_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.h_.handler_.target_ >> 3) + 0x7FFF8000) )
  {
LABEL_38:
    __asan_report_load8(p_target);
    goto LABEL_39;
  }
  v18.handler_.h_.h_.handler_.target_ = handler->h_.h_.handler_.target_;
  p_target = &handler->h_.h_.ready_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.h_.ready_ >> 3) + 0x7FFF8000) )
  {
LABEL_39:
    __asan_report_load8(p_target);
    goto LABEL_40;
  }
  v18.handler_.h_.h_.ready_ = handler->h_.h_.ready_;
  p_target = &handler->h_.h_.ec_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.h_.ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_40:
    __asan_report_load8(p_target);
    goto LABEL_41;
  }
  v18.handler_.h_.h_.ec_ = handler->h_.h_.ec_;
  p_target = &handler->h_.h_.value_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.h_.value_ >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    __asan_report_load8(p_target);
    goto LABEL_42;
  }
  v18.handler_.h_.h_.value_ = handler->h_.h_.value_;
  p_target = &handler->h_.wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_42:
    __asan_report_load8(p_target);
    goto LABEL_43;
  }
  v18.handler_.h_.wg1_.executor_.impl_ = handler->h_.wg1_.executor_.impl_;
  handler->h_.wg1_.executor_.impl_ = 0LL;
  p_target = &handler->h_.wg1_.owns_;
  if ( *(char *)(((unsigned __int64)&handler->h_.wg1_.owns_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_43:
    __asan_report_load1(p_target);
    goto LABEL_44;
  }
  v18.handler_.h_.wg1_.owns_ = handler->h_.wg1_.owns_;
  handler->h_.wg1_.owns_ = 0;
  v18.handler_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>
                                                   + 2);
  p_target = &handler->h_.list_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.list_ >> 3) + 0x7FFF8000) )
  {
LABEL_44:
    __asan_report_load8(p_target);
LABEL_45:
    __asan_report_load4(p_target);
    goto LABEL_46;
  }
  list = handler->h_.list_;
  handler->h_.list_ = 0LL;
  v18.handler_.h_.list_ = list;
  p_target = &handler->h_.boost::asio::coroutine;
  v15 = *(_BYTE *)(((unsigned __int64)&handler->h_.boost::asio::coroutine >> 3) + 0x7FFF8000);
  if ( v15 && v15 <= 3 )
    goto LABEL_45;
  v18.handler_.h_.value_ = handler->h_.value_;
  v18.handler_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>
                                                   + 2);
  p_target = &handler->h_.d_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.d_ >> 3) + 0x7FFF8000) )
  {
LABEL_46:
    __asan_report_load8(p_target);
    goto LABEL_47;
  }
  v18.handler_.h_.d_ = handler->h_.d_;
  p_target = &handler->wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_47:
    __asan_report_load8(p_target);
    goto LABEL_48;
  }
  v18.handler_.wg1_.executor_.impl_ = handler->wg1_.executor_.impl_;
  handler->wg1_.executor_.impl_ = 0LL;
  p_target = &handler->wg1_.owns_;
  if ( *(char *)(((unsigned __int64)&handler->wg1_.owns_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_48:
    __asan_report_load1(p_target);
    goto LABEL_49;
  }
  v18.handler_.wg1_.owns_ = handler->wg1_.owns_;
  handler->wg1_.owns_ = 0;
  v18.handler_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::detail::dynamic_read_ops::read_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>>
                                                + 2);
  p_target = &handler->s_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->s_ >> 3) + 0x7FFF8000) )
  {
LABEL_49:
    __asan_report_load8(p_target);
    goto LABEL_50;
  }
  v18.handler_.s_ = handler->s_;
  p_target = &handler->b_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->b_ >> 3) + 0x7FFF8000) )
  {
LABEL_50:
    __asan_report_load8(p_target);
    goto LABEL_51;
  }
  v18.handler_.b_ = handler->b_;
  p_target = &handler->cond_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->cond_ >> 3) + 0x7FFF8000) )
  {
LABEL_51:
    __asan_report_load8(p_target);
    goto LABEL_52;
  }
  v18.handler_.cond_.parser = handler->cond_.parser;
  p_target = &handler->ec_;
  if ( *(_WORD *)(((unsigned __int64)&handler->ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_52:
    __asan_report_load16(p_target);
    goto LABEL_53;
  }
  v18.handler_.ec_ = (boost::beast::error_code)_mm_loadu_si128((const __m128i *)&handler->ec_);
  p_target = &handler->total_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->total_ >> 3) + 0x7FFF8000) )
  {
LABEL_53:
    __asan_report_load8(p_target);
    goto LABEL_54;
  }
  v18.handler_.total_ = handler->total_;
  v16 = 0LL;
  v17 = &boost::system::detail::cat_holder<void>::system_category_instance;
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::read_op<boost::asio::mutable_buffer>,boost::beast::detail::dynamic_read_ops::read_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>>>::operator()(
    &v18,
    *(boost::system::error_code *)&v16,
    0LL,
    1);
LABEL_54:
  v18.handler_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>,boost::asio::executor,std::allocator<void>>
                                                + 2);
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard(&v18.handler_.wg1_);
  v18.handler_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>
                                                   + 2);
  boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>::~stable_async_base(&v18.handler_.h_);
};

// Line 339: range 0000000019C88201-0000000019C8835C
// local variable allocation has failed, the output may be wrong!
void __fastcall boost::asio::ssl::detail::async_io<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>(
        boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *next_layer,
        boost::asio::ssl::detail::stream_core *core,
        const boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer> *op,
        boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > *handler)
{
  void *v5; // rdi
  char v6; // al
  __int64 v7; // rsi OVERLAPPED
  const boost::system::detail::system_error_category *v8; // rdx
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *v9; // [rsp+0h] [rbp-138h] BYREF
  boost::asio::ssl::detail::stream_core *corea; // [rsp+8h] [rbp-130h]
  __m128i v11; // [rsp+10h] [rbp-128h]
  int v12; // [rsp+20h] [rbp-118h]
  int v13; // [rsp+24h] [rbp-114h]
  int v14; // [rsp+28h] [rbp-110h]
  char v15; // [rsp+2Ch] [rbp-10Ch]
  const boost::system::detail::system_error_category *v16; // [rsp+30h] [rbp-108h]
  __int64 v17; // [rsp+38h] [rbp-100h]
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> > v18; // [rsp+40h] [rbp-F8h] BYREF
  int value; // [rsp+128h] [rbp-10h]

  v9 = next_layer;
  corea = core;
  if ( *(_WORD *)(((unsigned __int64)op >> 3) + 0x7FFF8000) )
  {
    v5 = (void *)op;
    __asan_report_load16(op);
LABEL_6:
    __asan_report_load4(v5);
    goto LABEL_7;
  }
  v11 = _mm_loadu_si128((const __m128i *)op);
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = &boost::system::detail::cat_holder<void>::system_category_instance;
  v17 = 0LL;
  boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::async_base(
    &v18,
    handler);
  v5 = &handler->boost::asio::coroutine;
  v6 = *(_BYTE *)(((unsigned __int64)&handler->boost::asio::coroutine >> 3) + 0x7FFF8000);
  if ( v6 && v6 <= 3 )
    goto LABEL_6;
  value = handler->value_;
  v18._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>
                                       + 2);
  v7 = 0LL;
  v8 = &boost::system::detail::cat_holder<void>::system_category_instance;
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::operator()(
    (boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *const)&v9,
    *(boost::system::error_code *)&v7,
    0LL,
    1);
LABEL_7:
  v18._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                                       + 2);
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard(&v18.wg1_);
  v18.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                          + 2);
  boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::~async_base(&v18.h_);
};
