// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/utf8_v2_3_2/source/utf8/core.h

// Line 69: range 000000000E9FF1EC-000000000E9FF211
bool __cdecl utf8::internal::is_trail<char>(char oc)
{
  return (int)utf8::internal::mask8<char>(oc) >> 6 == 2;
};

// Line 87: range 000000000E9FF191-000000000E9FF1B7
bool __cdecl utf8::internal::is_surrogate<unsigned int>(unsigned int cp)
{
  return cp > 0xD7FF && cp <= 0xDFFF;
};

// Line 93: range 000000000E9FEF66-000000000E9FEF98
bool __cdecl utf8::internal::is_code_point_valid<unsigned int>(unsigned int cp)
{
  return cp <= 0x10FFFF && !utf8::internal::is_surrogate<unsigned int>(cp);
};

// Line 100: range 000000000E9FD74B-000000000E9FD89F
std::__iterator_traits<__gnu_cxx::__normal_iterator<char const*,std::string >,void>::difference_type __fastcall utf8::internal::sequence_length<__gnu_cxx::__normal_iterator<char const*,std::string>>(
        __gnu_cxx::__normal_iterator<char const*,std::string > lead_it)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  char *v4; // rax
  char *v5; // rdx
  std::__iterator_traits<__gnu_cxx::__normal_iterator<char const*,std::string >,void>::difference_type result; // rax
  unsigned __int8 lead; // [rsp+1Fh] [rbp-61h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 11 lead_it:100";
  *(_QWORD *)(v1 + 16) = utf8::internal::sequence_length<__gnu_cxx::__normal_iterator<char const*,std::string>>;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v1 + 32) = lead_it;
  v4 = (char *)__gnu_cxx::__normal_iterator<char const*,std::string>::operator*((const __gnu_cxx::__normal_iterator<char const*,std::string > *const)(v1 + 32));
  v5 = v4;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)v4 & 7) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(v4);
  }
  lead = utf8::internal::mask8<char>(*v5);
  if ( (lead & 0x80u) != 0 )
  {
    if ( (int)lead >> 5 == 6 )
    {
      result = 2LL;
    }
    else if ( (int)lead >> 4 == 14 )
    {
      result = 3LL;
    }
    else if ( (int)lead >> 3 == 30 )
    {
      result = 4LL;
    }
    else
    {
      result = 0LL;
    }
  }
  else
  {
    result = 1LL;
  }
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 116: range 000000000E9FEF99-000000000E9FEFEC
bool __cdecl utf8::internal::is_overlong_sequence<long>(utf8::uint32_t cp, __int64 length)
{
  if ( cp > 0x7F )
  {
    if ( cp > 0x7FF )
    {
      if ( cp <= 0xFFFF && length != 3 )
        return 1;
    }
    else if ( length != 2 )
    {
      return 1;
    }
  }
  else if ( length != 1 )
  {
    return 1;
  }
  return 0;
};

// Line 138: range 000000000E9FF045-000000000E9FF190
__int64 __fastcall utf8::internal::increase_safely<__gnu_cxx::__normal_iterator<char const*,std::string>>(
        __gnu_cxx::__normal_iterator<char const*,std::string > *it,
        __gnu_cxx::__normal_iterator<char const*,std::string > end)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __gnu_cxx::__normal_iterator<char const*,std::string > *v5; // rax
  __int64 result; // rax
  char *v7; // rax
  char *v8; // rdx
  char v9[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 7 end:138";
  *(_QWORD *)(v2 + 16) = utf8::internal::increase_safely<__gnu_cxx::__normal_iterator<char const*,std::string>>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v2 + 32) = end;
  v5 = __gnu_cxx::__normal_iterator<char const*,std::string>::operator++(it);
  if ( __gnu_cxx::operator==<char const*,std::string>(
         v5,
         (const __gnu_cxx::__normal_iterator<char const*,std::string > *)(v2 + 32)) )
  {
    result = 1LL;
  }
  else
  {
    v7 = (char *)__gnu_cxx::__normal_iterator<char const*,std::string>::operator*(it);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v7 & 7) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v7);
    }
    if ( !utf8::internal::is_trail<char>(*v8) )
      result = 3LL;
    else
      result = 0LL;
  }
  if ( v9 == (char *)v2 )
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

// Line 153: range 000000000E9FE39C-000000000E9FE50F
__int64 __fastcall utf8::internal::get_sequence_1<__gnu_cxx::__normal_iterator<char const*,std::string>>(
        __gnu_cxx::__normal_iterator<char const*,std::string > *it,
        __gnu_cxx::__normal_iterator<char const*,std::string > end,
        unsigned __int64 code_point)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 result; // rax
  char *v7; // rax
  char *v8; // rdx
  utf8::uint32_t v9; // ecx
  char v11[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 7 end:153";
  *(_QWORD *)(v3 + 16) = utf8::internal::get_sequence_1<__gnu_cxx::__normal_iterator<char const*,std::string>>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 32) = end;
  if ( __gnu_cxx::operator==<char const*,std::string>(
         it,
         (const __gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 32)) )
  {
    result = 1LL;
  }
  else
  {
    v7 = (char *)__gnu_cxx::__normal_iterator<char const*,std::string>::operator*(it);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v7 & 7) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v7);
    }
    v9 = utf8::internal::mask8<char>(*v8);
    if ( *(_BYTE *)((code_point >> 3) + 0x7FFF8000) != 0
      && (char)((code_point & 7) + 3) >= *(_BYTE *)((code_point >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(code_point);
    }
    *(_DWORD *)code_point = v9;
    result = 0LL;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 164: range 000000000E9FE510-000000000E9FE79A
__int64 __fastcall utf8::internal::get_sequence_2<__gnu_cxx::__normal_iterator<char const*,std::string>>(
        __gnu_cxx::__normal_iterator<char const*,std::string > *it,
        __gnu_cxx::__normal_iterator<char const*,std::string > end,
        unsigned __int64 code_point)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 result; // rax
  char *v7; // rax
  char *v8; // rdx
  utf8::uint32_t v9; // ecx
  int v10; // r13d
  __gnu_cxx::__normal_iterator<char const*,std::string >::reference v11; // rax
  _BYTE *v12; // rdx
  utf8::uint32_t v13; // ecx
  utf8::internal::utf_error ret; // [rsp+2Ch] [rbp-64h]
  char v16[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 7 end:164";
  *(_QWORD *)(v3 + 16) = utf8::internal::get_sequence_2<__gnu_cxx::__normal_iterator<char const*,std::string>>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 32) = end;
  if ( __gnu_cxx::operator==<char const*,std::string>(
         it,
         (const __gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 32)) )
  {
    result = 1LL;
  }
  else
  {
    v7 = (char *)__gnu_cxx::__normal_iterator<char const*,std::string>::operator*(it);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v7 & 7) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v7);
    }
    v9 = utf8::internal::mask8<char>(*v8);
    if ( *(_BYTE *)((code_point >> 3) + 0x7FFF8000) != 0
      && (char)((code_point & 7) + 3) >= *(_BYTE *)((code_point >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(code_point);
    }
    *(_DWORD *)code_point = v9;
    ret = (unsigned int)utf8::internal::increase_safely<__gnu_cxx::__normal_iterator<char const*,std::string>>(
                          it,
                          *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 32));
    if ( ret )
    {
      result = (unsigned int)ret;
    }
    else
    {
      if ( *(_BYTE *)((code_point >> 3) + 0x7FFF8000) != 0
        && (char)((code_point & 7) + 3) >= *(_BYTE *)((code_point >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(code_point);
      }
      v10 = ((unsigned __int16)*(_DWORD *)code_point << 6) & 0x7FF;
      v11 = __gnu_cxx::__normal_iterator<char const*,std::string>::operator*(it);
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)v11 & 7) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(v11);
      }
      v13 = v10 + (*v12 & 0x3F);
      if ( *(_BYTE *)((code_point >> 3) + 0x7FFF8000) != 0
        && (char)((code_point & 7) + 3) >= *(_BYTE *)((code_point >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(code_point);
      }
      *(_DWORD *)code_point = v13;
      result = 0LL;
    }
  }
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 179: range 000000000E9FE79B-000000000E9FEB11
__int64 __fastcall utf8::internal::get_sequence_3<__gnu_cxx::__normal_iterator<char const*,std::string>>(
        __gnu_cxx::__normal_iterator<char const*,std::string > *it,
        __gnu_cxx::__normal_iterator<char const*,std::string > end,
        unsigned __int64 code_point)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 result; // rax
  char *v7; // rax
  char *v8; // rdx
  utf8::uint32_t v9; // ecx
  int v10; // r14d
  char *v11; // rax
  char *v12; // rdx
  utf8::uint32_t v13; // ecx
  __gnu_cxx::__normal_iterator<char const*,std::string >::reference v14; // rax
  _BYTE *v15; // rdx
  int v16; // ecx
  utf8::internal::utf_error ret; // [rsp+28h] [rbp-78h]
  utf8::internal::utf_error ret_0; // [rsp+2Ch] [rbp-74h]
  char v20[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 7 end:179";
  *(_QWORD *)(v3 + 16) = utf8::internal::get_sequence_3<__gnu_cxx::__normal_iterator<char const*,std::string>>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 32) = end;
  if ( __gnu_cxx::operator==<char const*,std::string>(
         it,
         (const __gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 32)) )
  {
    result = 1LL;
  }
  else
  {
    v7 = (char *)__gnu_cxx::__normal_iterator<char const*,std::string>::operator*(it);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v7 & 7) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v7);
    }
    v9 = utf8::internal::mask8<char>(*v8);
    if ( *(_BYTE *)((code_point >> 3) + 0x7FFF8000) != 0
      && (char)((code_point & 7) + 3) >= *(_BYTE *)((code_point >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(code_point);
    }
    *(_DWORD *)code_point = v9;
    ret = (unsigned int)utf8::internal::increase_safely<__gnu_cxx::__normal_iterator<char const*,std::string>>(
                          it,
                          *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 32));
    if ( ret )
    {
      result = (unsigned int)ret;
    }
    else
    {
      if ( *(_BYTE *)((code_point >> 3) + 0x7FFF8000) != 0
        && (char)((code_point & 7) + 3) >= *(_BYTE *)((code_point >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(code_point);
      }
      v10 = (unsigned __int16)(*(_WORD *)code_point << 12);
      v11 = (char *)__gnu_cxx::__normal_iterator<char const*,std::string>::operator*(it);
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)v11 & 7) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(v11);
      }
      v13 = v10 + ((utf8::internal::mask8<char>(*v12) << 6) & 0xFFF);
      if ( *(_BYTE *)((code_point >> 3) + 0x7FFF8000) != 0
        && (char)((code_point & 7) + 3) >= *(_BYTE *)((code_point >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(code_point);
      }
      *(_DWORD *)code_point = v13;
      ret_0 = (unsigned int)utf8::internal::increase_safely<__gnu_cxx::__normal_iterator<char const*,std::string>>(
                              it,
                              *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 32));
      if ( ret_0 )
      {
        result = (unsigned int)ret_0;
      }
      else
      {
        v14 = __gnu_cxx::__normal_iterator<char const*,std::string>::operator*(it);
        v15 = v14;
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)v14 & 7) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(v14);
        }
        v16 = *v15 & 0x3F;
        if ( *(_BYTE *)((code_point >> 3) + 0x7FFF8000) != 0
          && (char)((code_point & 7) + 3) >= *(_BYTE *)((code_point >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(code_point);
        }
        *(_DWORD *)code_point += v16;
        result = 0LL;
      }
    }
  }
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 198: range 000000000E9FEB12-000000000E9FEF65
__int64 __fastcall utf8::internal::get_sequence_4<__gnu_cxx::__normal_iterator<char const*,std::string>>(
        __gnu_cxx::__normal_iterator<char const*,std::string > *it,
        __gnu_cxx::__normal_iterator<char const*,std::string > end,
        unsigned __int64 code_point)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  __int64 result; // rax
  char *v7; // rax
  char *v8; // rdx
  utf8::uint32_t v9; // ecx
  utf8::uint32_t v10; // r14d
  char *v11; // rax
  char *v12; // rdx
  utf8::uint32_t v13; // ecx
  char *v14; // rax
  char *v15; // rdx
  int v16; // ecx
  __gnu_cxx::__normal_iterator<char const*,std::string >::reference v17; // rax
  _BYTE *v18; // rdx
  int v19; // ecx
  utf8::internal::utf_error ret; // [rsp+24h] [rbp-7Ch]
  utf8::internal::utf_error ret_0; // [rsp+28h] [rbp-78h]
  utf8::internal::utf_error ret_1; // [rsp+2Ch] [rbp-74h]
  char v24[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 7 end:198";
  *(_QWORD *)(v3 + 16) = utf8::internal::get_sequence_4<__gnu_cxx::__normal_iterator<char const*,std::string>>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 32) = end;
  if ( __gnu_cxx::operator==<char const*,std::string>(
         it,
         (const __gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 32)) )
  {
    result = 1LL;
  }
  else
  {
    v7 = (char *)__gnu_cxx::__normal_iterator<char const*,std::string>::operator*(it);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v7 & 7) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v7);
    }
    v9 = utf8::internal::mask8<char>(*v8);
    if ( *(_BYTE *)((code_point >> 3) + 0x7FFF8000) != 0
      && (char)((code_point & 7) + 3) >= *(_BYTE *)((code_point >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(code_point);
    }
    *(_DWORD *)code_point = v9;
    ret = (unsigned int)utf8::internal::increase_safely<__gnu_cxx::__normal_iterator<char const*,std::string>>(
                          it,
                          *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 32));
    if ( ret )
    {
      result = (unsigned int)ret;
    }
    else
    {
      if ( *(_BYTE *)((code_point >> 3) + 0x7FFF8000) != 0
        && (char)((code_point & 7) + 3) >= *(_BYTE *)((code_point >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(code_point);
      }
      v10 = (*(_DWORD *)code_point << 18) & 0x1FFFFF;
      v11 = (char *)__gnu_cxx::__normal_iterator<char const*,std::string>::operator*(it);
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)v11 & 7) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(v11);
      }
      v13 = v10 + ((utf8::internal::mask8<char>(*v12) << 12) & 0x3FFFF);
      if ( *(_BYTE *)((code_point >> 3) + 0x7FFF8000) != 0
        && (char)((code_point & 7) + 3) >= *(_BYTE *)((code_point >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(code_point);
      }
      *(_DWORD *)code_point = v13;
      ret_0 = (unsigned int)utf8::internal::increase_safely<__gnu_cxx::__normal_iterator<char const*,std::string>>(
                              it,
                              *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 32));
      if ( ret_0 )
      {
        result = (unsigned int)ret_0;
      }
      else
      {
        v14 = (char *)__gnu_cxx::__normal_iterator<char const*,std::string>::operator*(it);
        v15 = v14;
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)v14 & 7) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(v14);
        }
        v16 = (utf8::internal::mask8<char>(*v15) << 6) & 0xFFF;
        if ( *(_BYTE *)((code_point >> 3) + 0x7FFF8000) != 0
          && (char)((code_point & 7) + 3) >= *(_BYTE *)((code_point >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(code_point);
        }
        *(_DWORD *)code_point += v16;
        ret_1 = (unsigned int)utf8::internal::increase_safely<__gnu_cxx::__normal_iterator<char const*,std::string>>(
                                it,
                                *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 32));
        if ( ret_1 )
        {
          result = (unsigned int)ret_1;
        }
        else
        {
          v17 = __gnu_cxx::__normal_iterator<char const*,std::string>::operator*(it);
          v18 = v17;
          if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)v17 & 7) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(v17);
          }
          v19 = *v18 & 0x3F;
          if ( *(_BYTE *)((code_point >> 3) + 0x7FFF8000) != 0
            && (char)((code_point & 7) + 3) >= *(_BYTE *)((code_point >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(code_point);
          }
          *(_DWORD *)code_point += v19;
          result = 0LL;
        }
      }
    }
  }
  if ( v24 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 223: range 000000000E9FDF39-000000000E9FE34D
__int64 __fastcall utf8::internal::validate_next<__gnu_cxx::__normal_iterator<char const*,std::string>>(
        __gnu_cxx::__normal_iterator<char const*,std::string > *it,
        __gnu_cxx::__normal_iterator<char const*,std::string > end,
        unsigned __int64 code_point)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  __int64 result; // rax
  utf8::uint32_t v7; // ecx
  utf8::internal::utf_error err; // [rsp+24h] [rbp-ACh]
  __int64 length; // [rsp+28h] [rbp-A8h]
  char v11[160]; // [rsp+30h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 6 cp:229 64 8 15 original_it:227 96 8 7 end:223";
  *(_QWORD *)(v3 + 16) = utf8::internal::validate_next<__gnu_cxx::__normal_iterator<char const*,std::string>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 96) = end;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64);
  if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
    __asan_report_load8(it);
  *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 64) = (__gnu_cxx::__normal_iterator<char const*,std::string >)it->_M_current;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 48);
  *(_DWORD *)(v3 + 48) = 0;
  length = utf8::internal::sequence_length<__gnu_cxx::__normal_iterator<char const*,std::string>>((__gnu_cxx::__normal_iterator<char const*,std::string >)it->_M_current);
  err = UTF8_OK;
  switch ( length )
  {
    case 0LL:
      result = 2LL;
      goto LABEL_35;
    case 1LL:
      err = (unsigned int)utf8::internal::get_sequence_1<__gnu_cxx::__normal_iterator<char const*,std::string>>(
                            it,
                            *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 96),
                            v3 + 48);
      goto LABEL_16;
    case 2LL:
      err = (unsigned int)utf8::internal::get_sequence_2<__gnu_cxx::__normal_iterator<char const*,std::string>>(
                            it,
                            *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 96),
                            v3 + 48);
      goto LABEL_16;
    case 3LL:
      err = (unsigned int)utf8::internal::get_sequence_3<__gnu_cxx::__normal_iterator<char const*,std::string>>(
                            it,
                            *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 96),
                            v3 + 48);
      goto LABEL_16;
    case 4LL:
      err = (unsigned int)utf8::internal::get_sequence_4<__gnu_cxx::__normal_iterator<char const*,std::string>>(
                            it,
                            *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 96),
                            v3 + 48);
      goto LABEL_16;
    default:
LABEL_16:
      if ( err )
        goto LABEL_30;
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 48);
      if ( utf8::internal::is_code_point_valid<unsigned int>(*(_DWORD *)(v3 + 48)) )
      {
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        if ( !utf8::internal::is_overlong_sequence<long>(*(_DWORD *)(v3 + 48), length) )
        {
          if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 48);
          v7 = *(_DWORD *)(v3 + 48);
          if ( *(_BYTE *)((code_point >> 3) + 0x7FFF8000) != 0
            && (char)((code_point & 7) + 3) >= *(_BYTE *)((code_point >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(code_point);
          }
          *(_DWORD *)code_point = v7;
          __gnu_cxx::__normal_iterator<char const*,std::string>::operator++(it);
          result = 0LL;
          goto LABEL_35;
        }
        err = OVERLONG_SEQUENCE;
      }
      else
      {
        err = INVALID_CODE_POINT;
      }
LABEL_30:
      if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
        __asan_report_store8(it);
      if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v3 + 64);
      it->_M_current = *(const char **)(v3 + 64);
      result = (unsigned int)err;
LABEL_35:
      if ( v11 == (char *)v3 )
      {
        *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
        *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
      }
      else
      {
        *(_QWORD *)v3 = 1172321806LL;
        *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
        *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
      }
      return result;
  }
};

// Line 872: range 000000000E9FDF2A-000000000E9FDF38
utf8::uint8_t __cdecl utf8::internal::mask8<char>(char oc)
{
  return oc;
};
