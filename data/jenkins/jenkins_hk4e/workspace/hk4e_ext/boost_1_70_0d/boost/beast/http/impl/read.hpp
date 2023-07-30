// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/http/impl/read.hpp

// Line 444: range 0000000019BD98B6-0000000019BD9C5D
void __fastcall boost::beast::http::async_read<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::detail::read_msg_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>>(
        boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *stream,
        boost::beast::basic_flat_buffer<std::allocator<char> > *buffer,
        boost::beast::http::basic_parser<false> *parser,
        boost::beast::http::detail::read_msg_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> > *handler)
{
  char v4; // r9
  unsigned int *p_f; // rdi
  boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *v6; // rdx
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *v7; // rcx
  boost::beast::http::detail::read_all_condition<false> cond; // [rsp+8h] [rbp-10h] BYREF

  v4 = *(_BYTE *)(((unsigned __int64)&parser->f_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)parser + 68) & 7) + 3) >= v4 && v4 )
  {
    p_f = &parser->f_;
    __asan_report_load4(&parser->f_);
    boost::beast::http::async_read<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>(
      (boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *)p_f,
      buffer,
      v6,
      v7);
  }
  else
  {
    parser->f_ |= 2u;
    cond.parser = parser;
    boost::beast::detail::async_read<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char>>,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>,void>(
      stream,
      buffer,
      &cond,
      handler);
  }
};

// Line 444: range 0000000019C14275-0000000019C14631
void __fastcall boost::beast::http::async_read<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>>(
        boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > *stream,
        boost::beast::basic_flat_buffer<std::allocator<char> > *buffer,
        boost::beast::http::basic_parser<false> *parser,
        boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> > *handler)
{
  char v4; // r9
  unsigned int *p_f; // rdi
  boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *v6; // rdx
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *v7; // rcx
  boost::beast::http::detail::read_all_condition<false> cond; // [rsp+8h] [rbp-10h] BYREF

  v4 = *(_BYTE *)(((unsigned __int64)&parser->f_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)parser + 68) & 7) + 3) >= v4 && v4 )
  {
    p_f = &parser->f_;
    __asan_report_load4(&parser->f_);
    boost::beast::http::async_read<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>(
      (boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > *)p_f,
      buffer,
      v6,
      v7);
  }
  else
  {
    parser->f_ |= 2u;
    cond.parser = parser;
    boost::beast::detail::async_read<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>,void>(
      stream,
      buffer,
      &cond,
      handler);
  }
};
