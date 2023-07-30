// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql++_3_2_3/lib/field_names.cpp

// Line 53: range 000000000CF9A6D0-000000000CF9A83F
__int64 __fastcall mysqlpp::FieldNames::operator[](__int64 *a1, char **a2, __int64 a3, std::forward_iterator_tag a4)
{
  char *v4; // rdx
  char *v5; // rsi
  signed __int64 M_string_length; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  std::string::size_type v9; // r9
  std::string *M_p; // r15
  std::string *v11; // r14
  std::string::size_type v12; // rdx
  int v13; // eax
  __int64 v14; // r12
  std::string::size_type v16; // [rsp+8h] [rbp-90h]
  std::string::size_type v17; // [rsp+10h] [rbp-88h]
  std::string s; // [rsp+20h] [rbp-78h] BYREF
  std::string v19; // [rsp+40h] [rbp-58h] BYREF

  v4 = &a2[1][(_QWORD)*a2];
  v5 = *a2;
  s._M_dataplus._M_p = s._anon_0._M_local_buf;
  std::string::_M_construct<char *>(&s, v5, v4, a4);
  mysqlpp::internal::str_to_lwr(&s);
  v7 = *a1;
  v8 = a1[1];
  if ( *a1 == v8 )
  {
LABEL_16:
    M_p = (std::string *)s._M_dataplus._M_p;
    v14 = (v7 - v8) >> 5;
  }
  else
  {
    while ( 1 )
    {
      v19._M_dataplus._M_p = v19._anon_0._M_local_buf;
      std::string::_M_construct<char *>(
        &v19,
        *(char **)v7,
        (char *)(*(_QWORD *)v7 + *(_QWORD *)(v7 + 8)),
        (std::forward_iterator_tag)M_string_length);
      mysqlpp::internal::str_to_lwr(&v19);
      M_string_length = v19._M_string_length;
      v9 = s._M_string_length;
      M_p = (std::string *)s._M_dataplus._M_p;
      v11 = (std::string *)v19._M_dataplus._M_p;
      v12 = s._M_string_length;
      if ( v19._M_string_length <= s._M_string_length )
        v12 = v19._M_string_length;
      if ( !v12
        || (v17 = s._M_string_length,
            v16 = v19._M_string_length,
            v13 = memcmp(v19._M_dataplus._M_p, s._M_dataplus._M_p, v12),
            M_string_length = v16,
            v9 = v17,
            !v13) )
      {
        M_string_length -= v9;
        if ( M_string_length < 0x80000000LL
          && M_string_length > (__int64)0xFFFFFFFF7FFFFFFFLL
          && !(_DWORD)M_string_length )
        {
          break;
        }
      }
      if ( v11 != (std::string *)&v19._anon_0 )
        operator delete(v11);
      v7 += 32LL;
      if ( a1[1] == v7 )
      {
        v8 = *a1;
        goto LABEL_16;
      }
    }
    v14 = (v7 - *a1) >> 5;
    if ( v11 != (std::string *)&v19._anon_0 )
    {
      operator delete(v11);
      M_p = (std::string *)s._M_dataplus._M_p;
    }
  }
  if ( M_p != (std::string *)&s._anon_0 )
    operator delete(M_p);
  return (unsigned int)v14;
};

// Line 67: range 000000000C748230-000000000C748259
void __cdecl GLOBAL__sub_I_field_names_cpp()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
