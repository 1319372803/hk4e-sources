// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/yaml-cpp/include/yaml-cpp/traits.h

// Line 122: range 000000001532161A-0000000015321AFC
std::string *__fastcall streamable_to_string<char [35],true>::impl[abi:cxx11](
        std::string *retstr,
        const char (*key)[35])
{
  _DWORD *v3; // r12
  size_t v4; // rax
  char *v5; // rdi
  char *v6; // rdx
  char v7; // al
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // rdi
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  struct _Unwind_Exception vars0; // [rsp+0h] [rbp+0h] BYREF
  _QWORD vars30[2]; // [rsp+30h] [rbp+30h] BYREF
  __int64 anonymous0; // [rsp+40h] [rbp+40h] BYREF
  __int64 anonymous1; // [rsp+48h] [rbp+48h] BYREF
  std::locale anonymous2; // [rsp+80h] [rbp+80h] BYREF
  __int64 *anonymous3; // [rsp+90h] [rbp+90h]
  __int64 _A0; // [rsp+A0h] [rbp+A0h] BYREF
  __int64 anonymous4; // [rsp+B0h] [rbp+B0h] BYREF

  if ( _asan_option_detect_stack_use_after_return )
    __asan_stack_malloc_3(512LL);
  vars0.exception_class = 1102416563LL;
  vars0.exception_cleanup = (_Unwind_Exception_Cleanup_Fn)"1 48 392 6 ss:123";
  vars0.private_1 = (_Unwind_Word)streamable_to_string<char [35],true>::impl[abi:cxx11];
  v3 = (_DWORD *)((unsigned __int64)&vars0 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862733] = -218103808;
  v3[536862734] = -202116109;
  v3[536862735] = -202116109;
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(vars30);
  if ( !key )
  {
    if ( *(_BYTE *)(((unsigned __int64)(anonymous0 - 24) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
    }
    else
    {
      v5 = (char *)&anonymous0 + *(_QWORD *)(anonymous0 - 24);
      v6 = v5 + 32;
      v7 = *(_BYTE *)(((unsigned __int64)(v5 + 32) >> 3) + 0x7FFF8000);
      if ( !v7 || v7 > 3 )
      {
        std::ios::clear(v5, *((_DWORD *)v5 + 8) | 1u);
        goto LABEL_11;
      }
    }
    __asan_report_load4(v6);
    goto LABEL_11;
  }
  v4 = strlen((const char *)key);
  std::__ostream_insert<char,std::char_traits<char>>(&anonymous0, key, v4);
LABEL_11:
  if ( *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) <= (((unsigned __int8)retstr + 31) & 7)
    || *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  else
  {
    std::stringbuf::str(retstr, &anonymous1);
  }
  vars30[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  anonymous4 = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  anonymous0 = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 64;
  anonymous1 = (__int64)&`vtable for'std::stringbuf + 16;
  if ( anonymous3 != &_A0 )
    operator delete(anonymous3);
  anonymous1 = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale(&anonymous2);
  if ( *(_BYTE *)(((unsigned __int64)&`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1] >> 3)
                + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_31;
  }
  v8 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
  vars30[0] = v8;
  if ( *(_BYTE *)(((unsigned __int64)(v8 - 24) >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_load8();
    goto LABEL_32;
  }
  v9 = (unsigned __int64)vars30 + *(_QWORD *)(v8 - 24);
  if ( *(_BYTE *)(((unsigned __int64)&`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6] >> 3)
                + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_load8();
    goto LABEL_33;
  }
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_store8();
    goto LABEL_34;
  }
  *(_QWORD *)v9 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
  if ( *(_BYTE *)(((unsigned __int64)&`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4] >> 3)
                + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_load8();
    goto LABEL_35;
  }
  v10 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
  anonymous0 = v10;
  if ( *(_BYTE *)(((unsigned __int64)(v10 - 24) >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_load8();
    goto LABEL_36;
  }
  v11 = (unsigned __int64)&anonymous0 + *(_QWORD *)(v10 - 24);
  if ( *(_BYTE *)(((unsigned __int64)&`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5] >> 3)
                + 0x7FFF8000) )
  {
LABEL_36:
    __asan_report_load8();
    goto LABEL_37;
  }
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_store8();
    goto LABEL_38;
  }
  *(_QWORD *)v11 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
  if ( *(_BYTE *)(((unsigned __int64)&`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2] >> 3)
                + 0x7FFF8000) )
  {
LABEL_38:
    __asan_report_load8();
    goto LABEL_39;
  }
  v12 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
  vars30[0] = v12;
  if ( *(_BYTE *)(((unsigned __int64)(v12 - 24) >> 3) + 0x7FFF8000) )
  {
LABEL_39:
    __asan_report_load8();
    goto LABEL_40;
  }
  v13 = (unsigned __int64)vars30 + *(_QWORD *)(v12 - 24);
  if ( *(_BYTE *)(((unsigned __int64)&`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3] >> 3)
                + 0x7FFF8000) )
  {
LABEL_40:
    __asan_report_load8();
LABEL_41:
    __asan_report_store8();
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(vars30);
    __asan_handle_no_return(vars30);
    _Unwind_Resume(&vars0);
  }
  if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
    goto LABEL_41;
  *(_QWORD *)v13 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
  vars30[1] = 0LL;
  anonymous4 = (__int64)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)&anonymous4);
  *(_QWORD *)(((unsigned __int64)&vars0 >> 3) + 0x7FFF8000) = 0LL;
  *(_QWORD *)(((unsigned __int64)&vars0 >> 3) + 0x7FFF8034) = 0LL;
  *(_DWORD *)(((unsigned __int64)&vars0 >> 3) + 0x7FFF803C) = 0;
  return retstr;
};

// Line 122: range 000000001531B061-000000001531B543
std::string *__fastcall streamable_to_string<char [8],true>::impl[abi:cxx11](std::string *retstr, const char (*key)[8])
{
  _DWORD *v3; // r12
  size_t v4; // rax
  char *v5; // rdi
  char *v6; // rdx
  char v7; // al
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // rdi
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  struct _Unwind_Exception vars0; // [rsp+0h] [rbp+0h] BYREF
  _QWORD vars30[2]; // [rsp+30h] [rbp+30h] BYREF
  __int64 anonymous0; // [rsp+40h] [rbp+40h] BYREF
  __int64 anonymous1; // [rsp+48h] [rbp+48h] BYREF
  std::locale anonymous2; // [rsp+80h] [rbp+80h] BYREF
  __int64 *anonymous3; // [rsp+90h] [rbp+90h]
  __int64 _A0; // [rsp+A0h] [rbp+A0h] BYREF
  __int64 anonymous4; // [rsp+B0h] [rbp+B0h] BYREF

  if ( _asan_option_detect_stack_use_after_return )
    __asan_stack_malloc_3(512LL);
  vars0.exception_class = 1102416563LL;
  vars0.exception_cleanup = (_Unwind_Exception_Cleanup_Fn)"1 48 392 6 ss:123";
  vars0.private_1 = (_Unwind_Word)streamable_to_string<char [8],true>::impl[abi:cxx11];
  v3 = (_DWORD *)((unsigned __int64)&vars0 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862733] = -218103808;
  v3[536862734] = -202116109;
  v3[536862735] = -202116109;
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(vars30);
  if ( !key )
  {
    if ( *(_BYTE *)(((unsigned __int64)(anonymous0 - 24) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
    }
    else
    {
      v5 = (char *)&anonymous0 + *(_QWORD *)(anonymous0 - 24);
      v6 = v5 + 32;
      v7 = *(_BYTE *)(((unsigned __int64)(v5 + 32) >> 3) + 0x7FFF8000);
      if ( !v7 || v7 > 3 )
      {
        std::ios::clear(v5, *((_DWORD *)v5 + 8) | 1u);
        goto LABEL_11;
      }
    }
    __asan_report_load4(v6);
    goto LABEL_11;
  }
  v4 = strlen((const char *)key);
  std::__ostream_insert<char,std::char_traits<char>>(&anonymous0, key, v4);
LABEL_11:
  if ( *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) <= (((unsigned __int8)retstr + 31) & 7)
    || *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  else
  {
    std::stringbuf::str(retstr, &anonymous1);
  }
  vars30[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  anonymous4 = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  anonymous0 = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 64;
  anonymous1 = (__int64)&`vtable for'std::stringbuf + 16;
  if ( anonymous3 != &_A0 )
    operator delete(anonymous3);
  anonymous1 = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale(&anonymous2);
  if ( *(_BYTE *)(((unsigned __int64)&`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1] >> 3)
                + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_31;
  }
  v8 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
  vars30[0] = v8;
  if ( *(_BYTE *)(((unsigned __int64)(v8 - 24) >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_load8();
    goto LABEL_32;
  }
  v9 = (unsigned __int64)vars30 + *(_QWORD *)(v8 - 24);
  if ( *(_BYTE *)(((unsigned __int64)&`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6] >> 3)
                + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_load8();
    goto LABEL_33;
  }
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_store8();
    goto LABEL_34;
  }
  *(_QWORD *)v9 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
  if ( *(_BYTE *)(((unsigned __int64)&`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4] >> 3)
                + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_load8();
    goto LABEL_35;
  }
  v10 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
  anonymous0 = v10;
  if ( *(_BYTE *)(((unsigned __int64)(v10 - 24) >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_load8();
    goto LABEL_36;
  }
  v11 = (unsigned __int64)&anonymous0 + *(_QWORD *)(v10 - 24);
  if ( *(_BYTE *)(((unsigned __int64)&`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5] >> 3)
                + 0x7FFF8000) )
  {
LABEL_36:
    __asan_report_load8();
    goto LABEL_37;
  }
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_store8();
    goto LABEL_38;
  }
  *(_QWORD *)v11 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
  if ( *(_BYTE *)(((unsigned __int64)&`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2] >> 3)
                + 0x7FFF8000) )
  {
LABEL_38:
    __asan_report_load8();
    goto LABEL_39;
  }
  v12 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
  vars30[0] = v12;
  if ( *(_BYTE *)(((unsigned __int64)(v12 - 24) >> 3) + 0x7FFF8000) )
  {
LABEL_39:
    __asan_report_load8();
    goto LABEL_40;
  }
  v13 = (unsigned __int64)vars30 + *(_QWORD *)(v12 - 24);
  if ( *(_BYTE *)(((unsigned __int64)&`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3] >> 3)
                + 0x7FFF8000) )
  {
LABEL_40:
    __asan_report_load8();
LABEL_41:
    __asan_report_store8();
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(vars30);
    __asan_handle_no_return(vars30);
    _Unwind_Resume(&vars0);
  }
  if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
    goto LABEL_41;
  *(_QWORD *)v13 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
  vars30[1] = 0LL;
  anonymous4 = (__int64)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)&anonymous4);
  *(_QWORD *)(((unsigned __int64)&vars0 >> 3) + 0x7FFF8000) = 0LL;
  *(_QWORD *)(((unsigned __int64)&vars0 >> 3) + 0x7FFF8034) = 0LL;
  *(_DWORD *)(((unsigned __int64)&vars0 >> 3) + 0x7FFF803C) = 0;
  return retstr;
};
