// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/core/string.hpp

// Line 57: range 0000000019B81335-0000000019B815D9
__int64 __fastcall boost::beast::detail::iequals<void>(boost::beast::string_view lhs, boost::beast::string_view rhs)
{
  const char *ptr; // r12
  std::size_t len; // r13
  unsigned __int64 v4; // rbx
  _DWORD *v5; // r9
  __int64 v6; // rcx
  std::size_t v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  char v10; // di
  unsigned __int64 v11; // rdx
  char v12; // al
  char v14; // r8
  std::size_t v15; // r8
  _BYTE *v16; // r11
  char v17; // al
  char v18; // al
  __int64 result; // rax
  _BYTE v20[152]; // [rsp+0h] [rbp-98h] BYREF

  ptr = rhs.ptr_;
  len = rhs.len_;
  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_1(96LL);
    if ( v9 )
      v4 = v9;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 16 6 lhs:58 64 16 6 rhs:59";
  *(_QWORD *)(v4 + 16) = boost::beast::detail::iequals<void>;
  v5 = (_DWORD *)(v4 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  *(boost::beast::string_view *)(v4 + 32) = lhs;
  *(_QWORD *)(v4 + 64) = ptr;
  *(_QWORD *)(v4 + 72) = len;
  lhs.ptr_ = (const char *)(v4 + 40);
  if ( *(_BYTE *)(((v4 + 40) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(lhs.ptr_);
    goto LABEL_11;
  }
  v6 = *(_QWORD *)(v4 + 40);
  lhs.ptr_ = (const char *)(v4 + 72);
  if ( *(_BYTE *)(((v4 + 72) >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    __asan_report_load8(lhs.ptr_);
LABEL_12:
    __asan_report_load8(lhs.ptr_);
    goto LABEL_13;
  }
  if ( v6 != *(_QWORD *)(v4 + 72) )
  {
    result = 0LL;
    goto LABEL_38;
  }
  lhs.ptr_ = (const char *)(v4 + 32);
  if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
    goto LABEL_12;
  v7 = *(_QWORD *)(v4 + 32);
  lhs.ptr_ = (const char *)(v4 + 64);
  lhs.len_ = (v4 + 64) >> 3;
  if ( *(_BYTE *)(lhs.len_ + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_load8(lhs.ptr_);
    goto LABEL_14;
  }
  v8 = *(_QWORD *)(v4 + 64);
  while ( 1 )
  {
    if ( !v6-- )
    {
      result = 1LL;
      goto LABEL_38;
    }
    lhs.len_ = v7 + 1;
    LOBYTE(lhs.ptr_) = *(_BYTE *)((v7 >> 3) + 0x7FFF8000);
    if ( SLOBYTE(lhs.ptr_) <= (char)(v7 & 7) && LOBYTE(lhs.ptr_) )
    {
LABEL_14:
      v10 = v7;
      v8 = __asan_report_load1(v7);
      goto LABEL_15;
    }
    v10 = *(_BYTE *)v7;
    v11 = v8 + 1;
    v14 = *(_BYTE *)((v8 >> 3) + 0x7FFF8000);
    if ( v14 <= (char)(v8 & 7) )
    {
      if ( v14 )
        break;
    }
LABEL_15:
    v12 = *(_BYTE *)v8;
    if ( v10 != v12 )
      goto slow;
    v8 = v11;
    v7 = lhs.len_;
  }
  __asan_report_load1(v8);
LABEL_23:
  LOBYTE(lhs.ptr_) = lhs.len_;
  __asan_report_load1(lhs.len_);
  while ( 1 )
  {
    v12 = *(_BYTE *)v11;
    if ( !v6 )
      goto LABEL_36;
    v11 = (unsigned __int64)v16;
    lhs.len_ = v15;
    --v6;
slow:
    if ( (unsigned int)(v10 - 65) <= 0x19 )
      v10 += 32;
    if ( (unsigned int)(v12 - 65) <= 0x19 )
      v12 += 32;
    if ( v12 != v10 )
      break;
    v15 = lhs.len_ + 1;
    v17 = *(_BYTE *)((lhs.len_ >> 3) + 0x7FFF8000);
    if ( v17 <= (lhs.len_ & 7) && v17 )
      goto LABEL_23;
    v10 = *(_BYTE *)lhs.len_;
    v16 = (_BYTE *)(v11 + 1);
    v18 = *(_BYTE *)((v11 >> 3) + 0x7FFF8000);
    if ( v18 <= (char)(v11 & 7) && v18 )
    {
      __asan_report_load1(v11);
LABEL_36:
      result = 1LL;
      goto LABEL_38;
    }
  }
  result = 0LL;
LABEL_38:
  if ( v20 == (_BYTE *)v4 )
  {
    *((_QWORD *)v5 + 268431360) = 0LL;
    v5[536862722] = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *((_QWORD *)v5 + 268431360) = 0xF5F5F5F5F5F5F5F5LL;
    v5[536862722] = -168430091;
  }
  return result;
};
