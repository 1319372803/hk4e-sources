// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/algorithm/hex.hpp

// Line 59: range 000000000C27C6F6-000000000C27C9D0
std::back_insert_iterator<std::string > __fastcall boost::algorithm::detail::encode_one<char,std::back_insert_iterator<std::string>>(
        char val,
        std::back_insert_iterator<std::string > out,
        const char *hexDigits)
{
  std::string::size_type M_string_length; // r12
  int v5; // ebx
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rcx
  _BYTE *v8; // rdx
  __int64 v9; // rax
  char v10; // al
  __int64 v11; // r14
  unsigned __int64 v12; // r13
  unsigned __int64 M_allocated_capacity; // rax
  _BYTE *p_M_string_length; // rdi
  char v15; // al
  std::string *container; // rdi
  char v17; // al
  char v18; // al
  char v20; // [rsp+7h] [rbp-91h]
  std::back_insert_iterator<std::string > v21; // [rsp+8h] [rbp-90h]
  unsigned __int64 v22; // [rsp+10h] [rbp-88h]
  char v23[120]; // [rsp+20h] [rbp-78h] BYREF

  v21.container = out.container;
  LOBYTE(v5) = val;
  v6 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_0(64LL);
    if ( v9 )
      v6 = v9;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 2 6 res:61";
  *(_QWORD *)(v6 + 16) = boost::algorithm::detail::encode_one<char,std::back_insert_iterator<std::string>>;
  v22 = v6 >> 3;
  *(_DWORD *)(v22 + 2147450880) = -235802127;
  *(_DWORD *)(v22 + 2147450884) = -202116350;
  v7 = 0LL;
  v8 = (_BYTE *)(v6 + 34);
  while ( v7 <= 1 )
  {
    out.container = (std::string *)*(unsigned __int8 *)(((unsigned __int64)&hexDigits[v5 & 0xF] >> 3) + 0x7FFF8000);
    if ( SLOBYTE(out.container) <= (((unsigned __int8)hexDigits + (v5 & 0xF)) & 7) && LOBYTE(out.container) )
    {
      __asan_report_load1(&hexDigits[v5 & 0xF]);
    }
    else
    {
      out.container = (std::string *)(unsigned __int8)hexDigits[v5 & 0xF];
      v10 = *(_BYTE *)(((unsigned __int64)--v8 >> 3) + 0x7FFF8000);
      if ( v10 <= ((unsigned __int8)v8 & 7) && v10 )
      {
        __asan_report_store1(v8, out.container);
        break;
      }
    }
    *v8 = out.container;
    ++v7;
    v5 = (char)v5 >> 4;
  }
  v11 = 2LL;
  v12 = v6 + 32;
  while ( v11 > 0 )
  {
    p_M_string_length = (_BYTE *)v12;
    v15 = *(_BYTE *)((v12 >> 3) + 0x7FFF8000);
    if ( v15 <= (char)(v12 & 7) && v15 )
    {
      __asan_report_load1(v12);
LABEL_15:
      __asan_report_load8(p_M_string_length);
LABEL_16:
      __asan_report_load8(p_M_string_length);
LABEL_17:
      __asan_report_load8(p_M_string_length);
LABEL_18:
      M_allocated_capacity = 15LL;
      goto LABEL_31;
    }
    v20 = *(_BYTE *)v12;
    p_M_string_length = &v21.container->_M_string_length;
    if ( *(_BYTE *)(((unsigned __int64)&v21.container->_M_string_length >> 3) + 0x7FFF8000) )
      goto LABEL_15;
    M_string_length = v21.container->_M_string_length;
    hexDigits = (const char *)(M_string_length + 1);
    p_M_string_length = v21.container;
    if ( *(_BYTE *)(((unsigned __int64)v21.container >> 3) + 0x7FFF8000) )
      goto LABEL_16;
    if ( v21.container->_M_dataplus._M_p == v21.container->_anon_0._M_local_buf )
      goto LABEL_18;
    p_M_string_length = v21.container->_anon_0._M_local_buf;
    if ( *(_BYTE *)(((unsigned __int64)&v21.container->_anon_0 >> 3) + 0x7FFF8000) )
      goto LABEL_17;
    M_allocated_capacity = v21.container->_anon_0._M_allocated_capacity;
LABEL_31:
    if ( (unsigned __int64)hexDigits > M_allocated_capacity )
    {
      out.container = (std::string *)M_string_length;
      std::string::_M_mutate(v21.container, M_string_length, 0LL, 0LL, 1LL);
    }
    container = v21.container;
    if ( *(_BYTE *)(((unsigned __int64)v21.container >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v21.container);
LABEL_20:
      __asan_report_store1(container, out.container);
LABEL_21:
      __asan_report_store8();
      goto LABEL_22;
    }
    M_string_length += (std::string::size_type)v21.container->_M_dataplus._M_p;
    container = (std::string *)M_string_length;
    v17 = *(_BYTE *)((M_string_length >> 3) + 0x7FFF8000);
    if ( v17 <= (char)(M_string_length & 7) && v17 )
      goto LABEL_20;
    *(_BYTE *)M_string_length = v20;
    if ( *(_BYTE *)(((unsigned __int64)&v21.container->_M_string_length >> 3) + 0x7FFF8000) )
      goto LABEL_21;
    v21.container->_M_string_length = (std::string::size_type)hexDigits;
    hexDigits += (unsigned __int64)v21.container->_M_dataplus._M_p;
    v18 = *(_BYTE *)(((unsigned __int64)hexDigits >> 3) + 0x7FFF8000);
    if ( v18 <= ((unsigned __int8)hexDigits & 7) && v18 )
    {
      __asan_report_store1(hexDigits, out.container);
      break;
    }
LABEL_22:
    *hexDigits = 0;
    ++v12;
    --v11;
  }
  if ( v23 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v21;
};

// Line 151: range 000000000C27C9D2-000000000C27CA2B
boost::enable_if_c<true,std::back_insert_iterator<std::string > >::type __fastcall boost::algorithm::hex<char const*,std::back_insert_iterator<std::string>>(
        const char *first,
        const char *last,
        std::back_insert_iterator<std::string > out)
{
  char v6; // al

  while ( first != last )
  {
    v6 = *(_BYTE *)(((unsigned __int64)first >> 3) + 0x7FFF8000);
    if ( v6 <= ((unsigned __int8)first & 7) && v6 )
    {
      __asan_report_load1(first);
      return out;
    }
    out.container = boost::algorithm::detail::encode_one<char,std::back_insert_iterator<std::string>>(
                      *first++,
                      out,
                      "0123456789ABCDEF").container;
  }
  return out;
};
