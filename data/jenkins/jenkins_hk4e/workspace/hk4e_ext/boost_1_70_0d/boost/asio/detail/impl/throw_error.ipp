// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/impl/throw_error.ipp

// Line 30: range 000000000C63BBAF-000000000C63BC98
// local variable allocation has failed, the output may be wrong!
void __cdecl __noreturn boost::asio::detail::do_throw_error(const boost::system::error_code *err)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rax
  const boost::system::error_category *cat; // rdx OVERLAPPED
  __int64 v5; // rsi OVERLAPPED
  char v6; // [rsp+10h] [rbp-90h] BYREF

  v1 = (unsigned __int64)&v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 64 4 e:31";
  *(_QWORD *)(v1 + 16) = boost::asio::detail::do_throw_error;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450892) = -202116109;
  if ( *(_WORD *)(((unsigned __int64)err >> 3) + 0x7FFF8000) )
    __asan_report_load16(err);
  cat = err->cat_;
  v5 = *(_QWORD *)&err->val_;
  boost::system::system_error::system_error(
    (boost::system::system_error *const)(v1 + 32),
    *(boost::system::error_code *)(&cat - 1));
  __asan_handle_no_return(v1 + 32);
  boost::throw_exception<boost::system::system_error>((const boost::system::system_error *)(v1 + 32));
};

// Line 36: range 000000000C63BC9D-000000000C63BD91
// local variable allocation has failed, the output may be wrong!
void __cdecl __noreturn boost::asio::detail::do_throw_error(const boost::system::error_code *err, const char *location)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // rax
  __int64 v5; // rsi OVERLAPPED
  const boost::system::error_category *cat; // rdx
  char v8; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)&v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 64 4 e:37";
  *(_QWORD *)(v2 + 16) = boost::asio::detail::do_throw_error;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450892) = -202116109;
  if ( *(_WORD *)(((unsigned __int64)err >> 3) + 0x7FFF8000) )
    __asan_report_load16(err);
  v5 = *(_QWORD *)&err->val_;
  cat = err->cat_;
  boost::system::system_error::system_error(
    (boost::system::system_error *const)(v2 + 32),
    *(boost::system::error_code *)&v5,
    location);
  __asan_handle_no_return(v2 + 32);
  boost::throw_exception<boost::system::system_error>((const boost::system::system_error *)(v2 + 32));
};
