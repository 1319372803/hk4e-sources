// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/core/exchange.hpp

// Line 38: range 000000000C79A837-000000000C79A993
boost::basic_string_view<char,std::char_traits<char> > __cdecl boost::exchange<boost::basic_string_view<char,std::char_traits<char>>,boost::basic_string_view<char,std::char_traits<char>>>(
        boost::basic_string_view<char,std::char_traits<char> > *t,
        boost::basic_string_view<char,std::char_traits<char> > *u)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  std::size_t v8; // rdx
  boost::basic_string_view<char,std::char_traits<char> > result; // rax
  char v10[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 4 v:40";
  *(_QWORD *)(v2 + 16) = boost::exchange<boost::basic_string_view<char,std::char_traits<char>>,boost::basic_string_view<char,std::char_traits<char>>>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  v5 = (unsigned __int64)std::move<boost::basic_string_view<char,std::char_traits<char>> &>(t);
  if ( *(_WORD *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load16();
  v6 = *(_QWORD *)(v5 + 8);
  *(_QWORD *)(v2 + 32) = *(_QWORD *)v5;
  *(_QWORD *)(v2 + 40) = v6;
  v7 = (unsigned __int64)std::forward<boost::basic_string_view<char,std::char_traits<char>>>(u);
  if ( *(_WORD *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    v7 = __asan_report_store16(t, u);
  if ( *(_WORD *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load16();
  v8 = *(_QWORD *)(v7 + 8);
  t->ptr_ = *(const char **)v7;
  t->len_ = v8;
  result = *(boost::basic_string_view<char,std::char_traits<char> > *)(v2 + 32);
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 38: range 000000000C78130F-000000000C78138F
boost::beast::detail::allocate_stable_state<boost::beast::http::detail::read_msg_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp>,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> >::data,std::allocator<void> > *__cdecl boost::exchange<boost::beast::detail::allocate_stable_state<boost::beast::http::detail::read_msg_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>::data,std::allocator<void>> *,decltype(nullptr)>(
        boost::beast::detail::allocate_stable_state<boost::beast::http::detail::read_msg_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp>,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> >::data,std::allocator<void> > **t,
        void *u)
{
  unsigned __int64 v2; // rax
  boost::beast::detail::allocate_stable_state<boost::beast::http::detail::read_msg_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp>,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> >::data,std::allocator<void> > *v; // [rsp+18h] [rbp-8h]

  v2 = (unsigned __int64)std::move<boost::beast::detail::allocate_stable_state<boost::beast::http::detail::read_msg_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>::data,std::allocator<void>> *&>(t);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(v2, u);
  v = *(boost::beast::detail::allocate_stable_state<boost::beast::http::detail::read_msg_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp>,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> >::data,std::allocator<void> > **)v2;
  std::forward<decltype(nullptr)>((std::remove_reference<std::nullptr_t>::type *)u);
  if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *t = 0LL;
  return v;
};

// Line 38: range 000000000C78159F-000000000C78161F
boost::beast::detail::allocate_stable_state<boost::beast::http::serializer<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,std::allocator<void> > *__cdecl boost::exchange<boost::beast::detail::allocate_stable_state<boost::beast::http::serializer<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,std::allocator<void>> *,decltype(nullptr)>(
        boost::beast::detail::allocate_stable_state<boost::beast::http::serializer<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,std::allocator<void> > **t,
        void *u)
{
  unsigned __int64 v2; // rax
  boost::beast::detail::allocate_stable_state<boost::beast::http::serializer<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,std::allocator<void> > *v; // [rsp+18h] [rbp-8h]

  v2 = (unsigned __int64)std::move<boost::beast::detail::allocate_stable_state<boost::beast::http::serializer<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,std::allocator<void>> *&>(t);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(v2, u);
  v = *(boost::beast::detail::allocate_stable_state<boost::beast::http::serializer<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,std::allocator<void> > **)v2;
  std::forward<decltype(nullptr)>((std::remove_reference<std::nullptr_t>::type *)u);
  if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *t = 0LL;
  return v;
};

// Line 38: range 000000000C780ECE-000000000C780F4E
boost::beast::detail::allocate_stable_state<boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,std::allocator<void> > *__cdecl boost::exchange<boost::beast::detail::allocate_stable_state<boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,std::allocator<void>> *,decltype(nullptr)>(
        boost::beast::detail::allocate_stable_state<boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,std::allocator<void> > **t,
        void *u)
{
  unsigned __int64 v2; // rax
  boost::beast::detail::allocate_stable_state<boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,std::allocator<void> > *v; // [rsp+18h] [rbp-8h]

  v2 = (unsigned __int64)std::move<boost::beast::detail::allocate_stable_state<boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,std::allocator<void>> *&>(t);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(v2, u);
  v = *(boost::beast::detail::allocate_stable_state<boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,std::allocator<void> > **)v2;
  std::forward<decltype(nullptr)>((std::remove_reference<std::nullptr_t>::type *)u);
  if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *t = 0LL;
  return v;
};

// Line 38: range 000000000C79CC5B-000000000C79CCDB
boost::beast::detail::stable_base *__cdecl boost::exchange<boost::beast::detail::stable_base *,decltype(nullptr)>(
        boost::beast::detail::stable_base **t,
        void *u)
{
  unsigned __int64 v2; // rax
  boost::beast::detail::stable_base *v; // [rsp+18h] [rbp-8h]

  v2 = (unsigned __int64)std::move<boost::beast::detail::stable_base *&>(t);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(v2, u);
  v = *(boost::beast::detail::stable_base **)v2;
  std::forward<decltype(nullptr)>((std::remove_reference<std::nullptr_t>::type *)u);
  if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *t = 0LL;
  return v;
};
