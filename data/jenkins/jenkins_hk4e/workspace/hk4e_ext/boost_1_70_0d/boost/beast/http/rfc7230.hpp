// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/http/rfc7230.hpp

// Line 257: range 000000000C71F6C0-000000000C71F7BF
// local variable allocation has failed, the output may be wrong!
void __fastcall boost::beast::http::token_list::token_list(
        boost::beast::http::token_list *const this,
        boost::beast::string_view s)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rsi
  std::size_t v8; // rdi
  std::size_t len; // [rsp+8h] [rbp-68h]
  char v11[80]; // [rsp+20h] [rbp-50h] BYREF

  len = s.len_;
  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 64);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 5 s:257";
  *(_QWORD *)(v2 + 16) = boost::beast::http::token_list::token_list;
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  *(_QWORD *)(v2 + 32) = v6;
  *(_QWORD *)(v2 + 40) = len;
  v7 = *(unsigned __int16 *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( (_WORD)v7 )
    v5 = __asan_report_store16(this, v7);
  v8 = *((_QWORD *)v4 - 3);
  this->s_.ptr_ = (const char *)*((_QWORD *)v4 - 4);
  this->s_.len_ = v8;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(v5 + 2147450880) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)(v5 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
