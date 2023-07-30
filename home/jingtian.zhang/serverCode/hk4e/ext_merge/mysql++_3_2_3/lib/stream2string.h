// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql++_3_2_3/lib/stream2string.h

// Line 41: range 000000000CF91190-000000000CF914B2
std::string *__fastcall mysqlpp::stream2string<char>(std::string *retstr, const char *object)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+8h] [rbp-1E0h]
  char v11; // [rsp+2Fh] [rbp-1B9h] BYREF
  __int64 v12; // [rsp+30h] [rbp-1B8h] BYREF
  __int64 v13[3]; // [rsp+38h] [rbp-1B0h] BYREF
  unsigned __int64 v14; // [rsp+50h] [rbp-198h]
  const char *v15; // [rsp+58h] [rbp-190h]
  unsigned __int64 v16; // [rsp+60h] [rbp-188h]
  __int64 v17; // [rsp+68h] [rbp-180h]
  std::locale v18; // [rsp+70h] [rbp-178h] BYREF
  int v19; // [rsp+78h] [rbp-170h]
  void *v20[2]; // [rsp+80h] [rbp-168h] BYREF
  char v21[16]; // [rsp+90h] [rbp-158h] BYREF
  __int64 v22[28]; // [rsp+A0h] [rbp-148h] BYREF
  __int16 v23; // [rsp+180h] [rbp-68h]
  __int64 v24; // [rsp+188h] [rbp-60h]
  __int64 v25; // [rsp+190h] [rbp-58h]
  __int64 v26; // [rsp+198h] [rbp-50h]
  __int64 v27; // [rsp+1A0h] [rbp-48h]

  std::ios_base::ios_base((std::ios_base *)v22);
  v22[27] = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v22[0] = (__int64)&`vtable for'std::ios + 16;
  v23 = 0;
  v26 = 0LL;
  v27 = 0LL;
  v3 = *((_QWORD *)&edata + 1);
  v4 = *((_QWORD *)&edata + 2);
  v5 = *(_QWORD *)(v3 - 24);
  v12 = v3;
  v10 = v4;
  v6 = (__int64 *)((char *)&v13[-1] + v5);
  *v6 = v4;
  std::ios::init(v6, 0LL);
  v13[1] = 0LL;
  v13[2] = 0LL;
  v14 = 0LL;
  v12 = (__int64)&`vtable for'std::ostringstream + 24;
  v15 = 0LL;
  v16 = 0LL;
  v22[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v17 = 0LL;
  v13[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::locale(&v18);
  v19 = 16;
  v20[1] = 0LL;
  v21[0] = 0;
  v13[0] = (__int64)&`vtable for'std::stringbuf + 16;
  v20[0] = v21;
  std::ios::init(v22, v13);
  v11 = *object;
  std::__ostream_insert<char,std::char_traits<char>>(&v12, &v11, 1LL);
  v7 = v16;
  retstr->_M_string_length = 0LL;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  retstr->_anon_0._M_local_buf[0] = 0;
  if ( v7 )
  {
    if ( v7 > v14 )
      std::string::_M_replace(retstr, 0LL, 0LL, v15, v7 - (_QWORD)v15);
    else
      std::string::_M_replace(retstr, 0LL, 0LL, v15, v14 - (_QWORD)v15);
  }
  else
  {
    std::string::_M_assign(retstr, v20);
  }
  v12 = (__int64)&`vtable for'std::ostringstream + 24;
  v22[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v13[0] = (__int64)&`vtable for'std::stringbuf + 16;
  if ( v20[0] != v21 )
    operator delete(v20[0]);
  v13[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale(&v18);
  v8 = *(_QWORD *)(v3 - 24);
  v12 = v3;
  *(__int64 *)((char *)&v13[-1] + v8) = v10;
  v22[0] = (__int64)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v22);
  return retstr;
};

// Line 41: range 000000000CF931A0-000000000CF934AD
std::string *__fastcall mysqlpp::stream2string<int>(std::string *retstr, const int *object)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+8h] [rbp-1D0h]
  __int64 v11; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v12[3]; // [rsp+28h] [rbp-1B0h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-198h]
  const char *v14; // [rsp+48h] [rbp-190h]
  unsigned __int64 v15; // [rsp+50h] [rbp-188h]
  __int64 v16; // [rsp+58h] [rbp-180h]
  std::locale v17; // [rsp+60h] [rbp-178h] BYREF
  int v18; // [rsp+68h] [rbp-170h]
  void *v19[2]; // [rsp+70h] [rbp-168h] BYREF
  char v20[16]; // [rsp+80h] [rbp-158h] BYREF
  __int64 v21[28]; // [rsp+90h] [rbp-148h] BYREF
  __int16 v22; // [rsp+170h] [rbp-68h]
  __int64 v23; // [rsp+178h] [rbp-60h]
  __int64 v24; // [rsp+180h] [rbp-58h]
  __int64 v25; // [rsp+188h] [rbp-50h]
  __int64 v26; // [rsp+190h] [rbp-48h]

  std::ios_base::ios_base((std::ios_base *)v21);
  v21[27] = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  v22 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v3 = *((_QWORD *)&edata + 1);
  v4 = *((_QWORD *)&edata + 2);
  v5 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  v10 = v4;
  v6 = (__int64 *)((char *)&v12[-1] + v5);
  *v6 = v4;
  std::ios::init(v6, 0LL);
  v12[1] = 0LL;
  v12[2] = 0LL;
  v13 = 0LL;
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v14 = 0LL;
  v15 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v16 = 0LL;
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::locale(&v17);
  v18 = 16;
  v20[0] = 0;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  v19[0] = v20;
  v19[1] = 0LL;
  std::ios::init(v21, v12);
  std::ostream::operator<<(&v11, *(unsigned int *)object);
  v7 = v15;
  retstr->_M_string_length = 0LL;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  retstr->_anon_0._M_local_buf[0] = 0;
  if ( v7 )
  {
    if ( v7 > v13 )
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v7 - (_QWORD)v14);
    else
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v13 - (_QWORD)v14);
  }
  else
  {
    std::string::_M_assign(retstr, v19);
  }
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  if ( v19[0] != v20 )
    operator delete(v19[0]);
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale(&v17);
  v8 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  *(__int64 *)((char *)&v12[-1] + v8) = v10;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v21);
  return retstr;
};

// Line 41: range 000000000CF94B20-000000000CF94E2D
std::string *__fastcall mysqlpp::stream2string<long long>(std::string *retstr, const __int64 *object)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+8h] [rbp-1D0h]
  __int64 v11; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v12[3]; // [rsp+28h] [rbp-1B0h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-198h]
  const char *v14; // [rsp+48h] [rbp-190h]
  unsigned __int64 v15; // [rsp+50h] [rbp-188h]
  __int64 v16; // [rsp+58h] [rbp-180h]
  std::locale v17; // [rsp+60h] [rbp-178h] BYREF
  int v18; // [rsp+68h] [rbp-170h]
  void *v19[2]; // [rsp+70h] [rbp-168h] BYREF
  char v20[16]; // [rsp+80h] [rbp-158h] BYREF
  __int64 v21[28]; // [rsp+90h] [rbp-148h] BYREF
  __int16 v22; // [rsp+170h] [rbp-68h]
  __int64 v23; // [rsp+178h] [rbp-60h]
  __int64 v24; // [rsp+180h] [rbp-58h]
  __int64 v25; // [rsp+188h] [rbp-50h]
  __int64 v26; // [rsp+190h] [rbp-48h]

  std::ios_base::ios_base((std::ios_base *)v21);
  v21[27] = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  v22 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v3 = *((_QWORD *)&edata + 1);
  v4 = *((_QWORD *)&edata + 2);
  v5 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  v10 = v4;
  v6 = (__int64 *)((char *)&v12[-1] + v5);
  *v6 = v4;
  std::ios::init(v6, 0LL);
  v12[1] = 0LL;
  v12[2] = 0LL;
  v13 = 0LL;
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v14 = 0LL;
  v15 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v16 = 0LL;
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::locale(&v17);
  v18 = 16;
  v20[0] = 0;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  v19[0] = v20;
  v19[1] = 0LL;
  std::ios::init(v21, v12);
  std::ostream::_M_insert<long long>(&v11, *object);
  v7 = v15;
  retstr->_M_string_length = 0LL;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  retstr->_anon_0._M_local_buf[0] = 0;
  if ( v7 )
  {
    if ( v7 > v13 )
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v7 - (_QWORD)v14);
    else
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v13 - (_QWORD)v14);
  }
  else
  {
    std::string::_M_assign(retstr, v19);
  }
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  if ( v19[0] != v20 )
    operator delete(v19[0]);
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale(&v17);
  v8 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  *(__int64 *)((char *)&v12[-1] + v8) = v10;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v21);
  return retstr;
};

// Line 41: range 000000000CF93E60-000000000CF9416D
std::string *__fastcall mysqlpp::stream2string<long>(std::string *retstr, const __int64 *object)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+8h] [rbp-1D0h]
  __int64 v11; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v12[3]; // [rsp+28h] [rbp-1B0h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-198h]
  const char *v14; // [rsp+48h] [rbp-190h]
  unsigned __int64 v15; // [rsp+50h] [rbp-188h]
  __int64 v16; // [rsp+58h] [rbp-180h]
  std::locale v17; // [rsp+60h] [rbp-178h] BYREF
  int v18; // [rsp+68h] [rbp-170h]
  void *v19[2]; // [rsp+70h] [rbp-168h] BYREF
  char v20[16]; // [rsp+80h] [rbp-158h] BYREF
  __int64 v21[28]; // [rsp+90h] [rbp-148h] BYREF
  __int16 v22; // [rsp+170h] [rbp-68h]
  __int64 v23; // [rsp+178h] [rbp-60h]
  __int64 v24; // [rsp+180h] [rbp-58h]
  __int64 v25; // [rsp+188h] [rbp-50h]
  __int64 v26; // [rsp+190h] [rbp-48h]

  std::ios_base::ios_base((std::ios_base *)v21);
  v21[27] = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  v22 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v3 = *((_QWORD *)&edata + 1);
  v4 = *((_QWORD *)&edata + 2);
  v5 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  v10 = v4;
  v6 = (__int64 *)((char *)&v12[-1] + v5);
  *v6 = v4;
  std::ios::init(v6, 0LL);
  v12[1] = 0LL;
  v12[2] = 0LL;
  v13 = 0LL;
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v14 = 0LL;
  v15 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v16 = 0LL;
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::locale(&v17);
  v18 = 16;
  v20[0] = 0;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  v19[0] = v20;
  v19[1] = 0LL;
  std::ios::init(v21, v12);
  std::ostream::_M_insert<long>(&v11, *object);
  v7 = v15;
  retstr->_M_string_length = 0LL;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  retstr->_anon_0._M_local_buf[0] = 0;
  if ( v7 )
  {
    if ( v7 > v13 )
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v7 - (_QWORD)v14);
    else
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v13 - (_QWORD)v14);
  }
  else
  {
    std::string::_M_assign(retstr, v19);
  }
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  if ( v19[0] != v20 )
    operator delete(v19[0]);
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale(&v17);
  v8 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  *(__int64 *)((char *)&v12[-1] + v8) = v10;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v21);
  return retstr;
};

// Line 41: range 000000000CF957E0-000000000CF95AED
std::string *__fastcall mysqlpp::stream2string<mysqlpp::Date>(std::string *retstr, const mysqlpp::Date *object)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+8h] [rbp-1D0h]
  __int64 v11; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v12[3]; // [rsp+28h] [rbp-1B0h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-198h]
  const char *v14; // [rsp+48h] [rbp-190h]
  unsigned __int64 v15; // [rsp+50h] [rbp-188h]
  __int64 v16; // [rsp+58h] [rbp-180h]
  std::locale v17; // [rsp+60h] [rbp-178h] BYREF
  int v18; // [rsp+68h] [rbp-170h]
  void *v19[2]; // [rsp+70h] [rbp-168h] BYREF
  char v20[16]; // [rsp+80h] [rbp-158h] BYREF
  __int64 v21[28]; // [rsp+90h] [rbp-148h] BYREF
  __int16 v22; // [rsp+170h] [rbp-68h]
  __int64 v23; // [rsp+178h] [rbp-60h]
  __int64 v24; // [rsp+180h] [rbp-58h]
  __int64 v25; // [rsp+188h] [rbp-50h]
  __int64 v26; // [rsp+190h] [rbp-48h]

  std::ios_base::ios_base((std::ios_base *)v21);
  v21[27] = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  v22 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v3 = *((_QWORD *)&edata + 1);
  v4 = *((_QWORD *)&edata + 2);
  v5 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  v10 = v4;
  v6 = (__int64 *)((char *)&v12[-1] + v5);
  *v6 = v4;
  std::ios::init(v6, 0LL);
  v12[1] = 0LL;
  v12[2] = 0LL;
  v13 = 0LL;
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v14 = 0LL;
  v15 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v16 = 0LL;
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::locale(&v17);
  v18 = 16;
  v20[0] = 0;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  v19[0] = v20;
  v19[1] = 0LL;
  std::ios::init(v21, v12);
  mysqlpp::operator<<((std::ostream *)&v11, object);
  v7 = v15;
  retstr->_M_string_length = 0LL;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  retstr->_anon_0._M_local_buf[0] = 0;
  if ( v7 )
  {
    if ( v7 > v13 )
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v7 - (_QWORD)v14);
    else
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v13 - (_QWORD)v14);
  }
  else
  {
    std::string::_M_assign(retstr, v19);
  }
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  if ( v19[0] != v20 )
    operator delete(v19[0]);
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale(&v17);
  v8 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  *(__int64 *)((char *)&v12[-1] + v8) = v10;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v21);
  return retstr;
};

// Line 41: range 000000000CF95E40-000000000CF9614D
std::string *__fastcall mysqlpp::stream2string<mysqlpp::DateTime>(std::string *retstr, const mysqlpp::DateTime *object)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+8h] [rbp-1D0h]
  __int64 v11; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v12[3]; // [rsp+28h] [rbp-1B0h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-198h]
  const char *v14; // [rsp+48h] [rbp-190h]
  unsigned __int64 v15; // [rsp+50h] [rbp-188h]
  __int64 v16; // [rsp+58h] [rbp-180h]
  std::locale v17; // [rsp+60h] [rbp-178h] BYREF
  int v18; // [rsp+68h] [rbp-170h]
  void *v19[2]; // [rsp+70h] [rbp-168h] BYREF
  char v20[16]; // [rsp+80h] [rbp-158h] BYREF
  __int64 v21[28]; // [rsp+90h] [rbp-148h] BYREF
  __int16 v22; // [rsp+170h] [rbp-68h]
  __int64 v23; // [rsp+178h] [rbp-60h]
  __int64 v24; // [rsp+180h] [rbp-58h]
  __int64 v25; // [rsp+188h] [rbp-50h]
  __int64 v26; // [rsp+190h] [rbp-48h]

  std::ios_base::ios_base((std::ios_base *)v21);
  v21[27] = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  v22 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v3 = *((_QWORD *)&edata + 1);
  v4 = *((_QWORD *)&edata + 2);
  v5 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  v10 = v4;
  v6 = (__int64 *)((char *)&v12[-1] + v5);
  *v6 = v4;
  std::ios::init(v6, 0LL);
  v12[1] = 0LL;
  v12[2] = 0LL;
  v13 = 0LL;
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v14 = 0LL;
  v15 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v16 = 0LL;
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::locale(&v17);
  v18 = 16;
  v20[0] = 0;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  v19[0] = v20;
  v19[1] = 0LL;
  std::ios::init(v21, v12);
  mysqlpp::operator<<((std::ostream *)&v11, object);
  v7 = v15;
  retstr->_M_string_length = 0LL;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  retstr->_anon_0._M_local_buf[0] = 0;
  if ( v7 )
  {
    if ( v7 > v13 )
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v7 - (_QWORD)v14);
    else
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v13 - (_QWORD)v14);
  }
  else
  {
    std::string::_M_assign(retstr, v19);
  }
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  if ( v19[0] != v20 )
    operator delete(v19[0]);
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale(&v17);
  v8 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  *(__int64 *)((char *)&v12[-1] + v8) = v10;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v21);
  return retstr;
};

// Line 41: range 000000000CF914C0-000000000CF91815
std::string *__fastcall mysqlpp::stream2string<mysqlpp::Null<char,mysqlpp::NullIsNull>>(
        std::string *retstr,
        const mysqlpp::Null<char,mysqlpp::NullIsNull> *object)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+8h] [rbp-1E0h]
  char data; // [rsp+2Fh] [rbp-1B9h] BYREF
  __int64 v12; // [rsp+30h] [rbp-1B8h] BYREF
  __int64 v13[3]; // [rsp+38h] [rbp-1B0h] BYREF
  unsigned __int64 v14; // [rsp+50h] [rbp-198h]
  const char *v15; // [rsp+58h] [rbp-190h]
  unsigned __int64 v16; // [rsp+60h] [rbp-188h]
  __int64 v17; // [rsp+68h] [rbp-180h]
  std::locale v18; // [rsp+70h] [rbp-178h] BYREF
  int v19; // [rsp+78h] [rbp-170h]
  void *v20[2]; // [rsp+80h] [rbp-168h] BYREF
  char v21[16]; // [rsp+90h] [rbp-158h] BYREF
  __int64 v22[28]; // [rsp+A0h] [rbp-148h] BYREF
  __int16 v23; // [rsp+180h] [rbp-68h]
  __int64 v24; // [rsp+188h] [rbp-60h]
  __int64 v25; // [rsp+190h] [rbp-58h]
  __int64 v26; // [rsp+198h] [rbp-50h]
  __int64 v27; // [rsp+1A0h] [rbp-48h]

  std::ios_base::ios_base((std::ios_base *)v22);
  v22[27] = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v22[0] = (__int64)&`vtable for'std::ios + 16;
  v23 = 0;
  v26 = 0LL;
  v27 = 0LL;
  v3 = *((_QWORD *)&edata + 1);
  v4 = *((_QWORD *)&edata + 2);
  v5 = *(_QWORD *)(v3 - 24);
  v12 = v3;
  v10 = v4;
  v6 = (__int64 *)((char *)&v13[-1] + v5);
  *v6 = v4;
  std::ios::init(v6, 0LL);
  v13[1] = 0LL;
  v13[2] = 0LL;
  v14 = 0LL;
  v12 = (__int64)&`vtable for'std::ostringstream + 24;
  v15 = 0LL;
  v16 = 0LL;
  v22[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v17 = 0LL;
  v13[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::locale(&v18);
  v19 = 16;
  v20[1] = 0LL;
  v21[0] = 0;
  v13[0] = (__int64)&`vtable for'std::stringbuf + 16;
  v20[0] = v21;
  std::ios::init(v22, v13);
  if ( object->is_null )
  {
    std::__ostream_insert<char,std::char_traits<char>>(&v12, "(NULL)", 6LL);
  }
  else
  {
    data = object->data;
    std::__ostream_insert<char,std::char_traits<char>>(&v12, &data, 1LL);
  }
  v7 = v16;
  retstr->_M_string_length = 0LL;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  retstr->_anon_0._M_local_buf[0] = 0;
  if ( v7 )
  {
    if ( v7 > v14 )
      std::string::_M_replace(retstr, 0LL, 0LL, v15, v7 - (_QWORD)v15);
    else
      std::string::_M_replace(retstr, 0LL, 0LL, v15, v14 - (_QWORD)v15);
  }
  else
  {
    std::string::_M_assign(retstr, v20);
  }
  v12 = (__int64)&`vtable for'std::ostringstream + 24;
  v22[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v13[0] = (__int64)&`vtable for'std::stringbuf + 16;
  if ( v20[0] != v21 )
    operator delete(v20[0]);
  v13[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale(&v18);
  v8 = *(_QWORD *)(v3 - 24);
  v12 = v3;
  *(__int64 *)((char *)&v13[-1] + v8) = v10;
  v22[0] = (__int64)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v22);
  return retstr;
};

// Line 41: range 000000000CF934C0-000000000CF937F3
std::string *__fastcall mysqlpp::stream2string<mysqlpp::Null<int,mysqlpp::NullIsNull>>(
        std::string *retstr,
        const mysqlpp::Null<int,mysqlpp::NullIsNull> *object)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+10h] [rbp-1C8h]
  __int64 v11; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v12[3]; // [rsp+28h] [rbp-1B0h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-198h]
  const char *v14; // [rsp+48h] [rbp-190h]
  unsigned __int64 v15; // [rsp+50h] [rbp-188h]
  __int64 v16; // [rsp+58h] [rbp-180h]
  std::locale v17; // [rsp+60h] [rbp-178h] BYREF
  int v18; // [rsp+68h] [rbp-170h]
  void *v19[2]; // [rsp+70h] [rbp-168h] BYREF
  char v20[16]; // [rsp+80h] [rbp-158h] BYREF
  __int64 v21[28]; // [rsp+90h] [rbp-148h] BYREF
  __int16 v22; // [rsp+170h] [rbp-68h]
  __int64 v23; // [rsp+178h] [rbp-60h]
  __int64 v24; // [rsp+180h] [rbp-58h]
  __int64 v25; // [rsp+188h] [rbp-50h]
  __int64 v26; // [rsp+190h] [rbp-48h]

  std::ios_base::ios_base((std::ios_base *)v21);
  v21[27] = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  v22 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v3 = *((_QWORD *)&edata + 1);
  v4 = *((_QWORD *)&edata + 2);
  v5 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  v10 = v4;
  v6 = (__int64 *)((char *)&v12[-1] + v5);
  *v6 = v4;
  std::ios::init(v6, 0LL);
  v12[1] = 0LL;
  v12[2] = 0LL;
  v13 = 0LL;
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v14 = 0LL;
  v15 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v16 = 0LL;
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::locale(&v17);
  v18 = 16;
  v20[0] = 0;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  v19[0] = v20;
  v19[1] = 0LL;
  std::ios::init(v21, v12);
  if ( object->is_null )
    std::__ostream_insert<char,std::char_traits<char>>(&v11, "(NULL)", 6LL);
  else
    std::ostream::operator<<(&v11, (unsigned int)object->data);
  v7 = v15;
  retstr->_M_string_length = 0LL;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  retstr->_anon_0._M_local_buf[0] = 0;
  if ( v7 )
  {
    if ( v7 > v13 )
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v7 - (_QWORD)v14);
    else
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v13 - (_QWORD)v14);
  }
  else
  {
    std::string::_M_assign(retstr, v19);
  }
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  if ( v19[0] != v20 )
    operator delete(v19[0]);
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale(&v17);
  v8 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  *(__int64 *)((char *)&v12[-1] + v8) = v10;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v21);
  return retstr;
};

// Line 41: range 000000000CF94E40-000000000CF95173
std::string *__fastcall mysqlpp::stream2string<mysqlpp::Null<long long,mysqlpp::NullIsNull>>(
        std::string *retstr,
        const mysqlpp::Null<long long int,mysqlpp::NullIsNull> *object)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+10h] [rbp-1C8h]
  __int64 v11; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v12[3]; // [rsp+28h] [rbp-1B0h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-198h]
  const char *v14; // [rsp+48h] [rbp-190h]
  unsigned __int64 v15; // [rsp+50h] [rbp-188h]
  __int64 v16; // [rsp+58h] [rbp-180h]
  std::locale v17; // [rsp+60h] [rbp-178h] BYREF
  int v18; // [rsp+68h] [rbp-170h]
  void *v19[2]; // [rsp+70h] [rbp-168h] BYREF
  char v20[16]; // [rsp+80h] [rbp-158h] BYREF
  __int64 v21[28]; // [rsp+90h] [rbp-148h] BYREF
  __int16 v22; // [rsp+170h] [rbp-68h]
  __int64 v23; // [rsp+178h] [rbp-60h]
  __int64 v24; // [rsp+180h] [rbp-58h]
  __int64 v25; // [rsp+188h] [rbp-50h]
  __int64 v26; // [rsp+190h] [rbp-48h]

  std::ios_base::ios_base((std::ios_base *)v21);
  v21[27] = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  v22 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v3 = *((_QWORD *)&edata + 1);
  v4 = *((_QWORD *)&edata + 2);
  v5 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  v10 = v4;
  v6 = (__int64 *)((char *)&v12[-1] + v5);
  *v6 = v4;
  std::ios::init(v6, 0LL);
  v12[1] = 0LL;
  v12[2] = 0LL;
  v13 = 0LL;
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v14 = 0LL;
  v15 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v16 = 0LL;
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::locale(&v17);
  v18 = 16;
  v20[0] = 0;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  v19[0] = v20;
  v19[1] = 0LL;
  std::ios::init(v21, v12);
  if ( object->is_null )
    std::__ostream_insert<char,std::char_traits<char>>(&v11, "(NULL)", 6LL);
  else
    std::ostream::_M_insert<long long>(&v11, object->data);
  v7 = v15;
  retstr->_M_string_length = 0LL;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  retstr->_anon_0._M_local_buf[0] = 0;
  if ( v7 )
  {
    if ( v7 > v13 )
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v7 - (_QWORD)v14);
    else
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v13 - (_QWORD)v14);
  }
  else
  {
    std::string::_M_assign(retstr, v19);
  }
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  if ( v19[0] != v20 )
    operator delete(v19[0]);
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale(&v17);
  v8 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  *(__int64 *)((char *)&v12[-1] + v8) = v10;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v21);
  return retstr;
};

// Line 41: range 000000000CF94180-000000000CF944B3
std::string *__fastcall mysqlpp::stream2string<mysqlpp::Null<long,mysqlpp::NullIsNull>>(
        std::string *retstr,
        const mysqlpp::Null<long int,mysqlpp::NullIsNull> *object)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+10h] [rbp-1C8h]
  __int64 v11; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v12[3]; // [rsp+28h] [rbp-1B0h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-198h]
  const char *v14; // [rsp+48h] [rbp-190h]
  unsigned __int64 v15; // [rsp+50h] [rbp-188h]
  __int64 v16; // [rsp+58h] [rbp-180h]
  std::locale v17; // [rsp+60h] [rbp-178h] BYREF
  int v18; // [rsp+68h] [rbp-170h]
  void *v19[2]; // [rsp+70h] [rbp-168h] BYREF
  char v20[16]; // [rsp+80h] [rbp-158h] BYREF
  __int64 v21[28]; // [rsp+90h] [rbp-148h] BYREF
  __int16 v22; // [rsp+170h] [rbp-68h]
  __int64 v23; // [rsp+178h] [rbp-60h]
  __int64 v24; // [rsp+180h] [rbp-58h]
  __int64 v25; // [rsp+188h] [rbp-50h]
  __int64 v26; // [rsp+190h] [rbp-48h]

  std::ios_base::ios_base((std::ios_base *)v21);
  v21[27] = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  v22 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v3 = *((_QWORD *)&edata + 1);
  v4 = *((_QWORD *)&edata + 2);
  v5 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  v10 = v4;
  v6 = (__int64 *)((char *)&v12[-1] + v5);
  *v6 = v4;
  std::ios::init(v6, 0LL);
  v12[1] = 0LL;
  v12[2] = 0LL;
  v13 = 0LL;
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v14 = 0LL;
  v15 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v16 = 0LL;
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::locale(&v17);
  v18 = 16;
  v20[0] = 0;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  v19[0] = v20;
  v19[1] = 0LL;
  std::ios::init(v21, v12);
  if ( object->is_null )
    std::__ostream_insert<char,std::char_traits<char>>(&v11, "(NULL)", 6LL);
  else
    std::ostream::_M_insert<long>(&v11, object->data);
  v7 = v15;
  retstr->_M_string_length = 0LL;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  retstr->_anon_0._M_local_buf[0] = 0;
  if ( v7 )
  {
    if ( v7 > v13 )
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v7 - (_QWORD)v14);
    else
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v13 - (_QWORD)v14);
  }
  else
  {
    std::string::_M_assign(retstr, v19);
  }
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  if ( v19[0] != v20 )
    operator delete(v19[0]);
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale(&v17);
  v8 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  *(__int64 *)((char *)&v12[-1] + v8) = v10;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v21);
  return retstr;
};

// Line 41: range 000000000CF95B00-000000000CF95E32
std::string *__fastcall mysqlpp::stream2string<mysqlpp::Null<mysqlpp::Date,mysqlpp::NullIsNull>>(
        std::string *retstr,
        const mysqlpp::Null<mysqlpp::Date,mysqlpp::NullIsNull> *object)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+8h] [rbp-1D0h]
  __int64 v11; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v12[3]; // [rsp+28h] [rbp-1B0h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-198h]
  const char *v14; // [rsp+48h] [rbp-190h]
  unsigned __int64 v15; // [rsp+50h] [rbp-188h]
  __int64 v16; // [rsp+58h] [rbp-180h]
  std::locale v17; // [rsp+60h] [rbp-178h] BYREF
  int v18; // [rsp+68h] [rbp-170h]
  void *v19[2]; // [rsp+70h] [rbp-168h] BYREF
  char v20[16]; // [rsp+80h] [rbp-158h] BYREF
  __int64 v21[28]; // [rsp+90h] [rbp-148h] BYREF
  __int16 v22; // [rsp+170h] [rbp-68h]
  __int64 v23; // [rsp+178h] [rbp-60h]
  __int64 v24; // [rsp+180h] [rbp-58h]
  __int64 v25; // [rsp+188h] [rbp-50h]
  __int64 v26; // [rsp+190h] [rbp-48h]

  std::ios_base::ios_base((std::ios_base *)v21);
  v21[27] = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  v22 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v3 = *((_QWORD *)&edata + 1);
  v4 = *((_QWORD *)&edata + 2);
  v5 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  v10 = v4;
  v6 = (__int64 *)((char *)&v12[-1] + v5);
  *v6 = v4;
  std::ios::init(v6, 0LL);
  v12[1] = 0LL;
  v12[2] = 0LL;
  v13 = 0LL;
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v14 = 0LL;
  v15 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v16 = 0LL;
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::locale(&v17);
  v18 = 16;
  v19[1] = 0LL;
  v20[0] = 0;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  v19[0] = v20;
  std::ios::init(v21, v12);
  if ( object->is_null )
    std::__ostream_insert<char,std::char_traits<char>>(&v11, "(NULL)", 6LL);
  else
    mysqlpp::operator<<((std::ostream *)&v11, &object->data);
  v7 = v15;
  retstr->_M_string_length = 0LL;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  retstr->_anon_0._M_local_buf[0] = 0;
  if ( v7 )
  {
    if ( v7 > v13 )
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v7 - (_QWORD)v14);
    else
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v13 - (_QWORD)v14);
  }
  else
  {
    std::string::_M_assign(retstr, v19);
  }
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  if ( v19[0] != v20 )
    operator delete(v19[0]);
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale(&v17);
  v8 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  *(__int64 *)((char *)&v12[-1] + v8) = v10;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v21);
  return retstr;
};

// Line 41: range 000000000CF96160-000000000CF96492
std::string *__fastcall mysqlpp::stream2string<mysqlpp::Null<mysqlpp::DateTime,mysqlpp::NullIsNull>>(
        std::string *retstr,
        const mysqlpp::Null<mysqlpp::DateTime,mysqlpp::NullIsNull> *object)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+8h] [rbp-1D0h]
  __int64 v11; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v12[3]; // [rsp+28h] [rbp-1B0h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-198h]
  const char *v14; // [rsp+48h] [rbp-190h]
  unsigned __int64 v15; // [rsp+50h] [rbp-188h]
  __int64 v16; // [rsp+58h] [rbp-180h]
  std::locale v17; // [rsp+60h] [rbp-178h] BYREF
  int v18; // [rsp+68h] [rbp-170h]
  void *v19[2]; // [rsp+70h] [rbp-168h] BYREF
  char v20[16]; // [rsp+80h] [rbp-158h] BYREF
  __int64 v21[28]; // [rsp+90h] [rbp-148h] BYREF
  __int16 v22; // [rsp+170h] [rbp-68h]
  __int64 v23; // [rsp+178h] [rbp-60h]
  __int64 v24; // [rsp+180h] [rbp-58h]
  __int64 v25; // [rsp+188h] [rbp-50h]
  __int64 v26; // [rsp+190h] [rbp-48h]

  std::ios_base::ios_base((std::ios_base *)v21);
  v21[27] = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  v22 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v3 = *((_QWORD *)&edata + 1);
  v4 = *((_QWORD *)&edata + 2);
  v5 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  v10 = v4;
  v6 = (__int64 *)((char *)&v12[-1] + v5);
  *v6 = v4;
  std::ios::init(v6, 0LL);
  v12[1] = 0LL;
  v12[2] = 0LL;
  v13 = 0LL;
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v14 = 0LL;
  v15 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v16 = 0LL;
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::locale(&v17);
  v18 = 16;
  v19[1] = 0LL;
  v20[0] = 0;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  v19[0] = v20;
  std::ios::init(v21, v12);
  if ( object->is_null )
    std::__ostream_insert<char,std::char_traits<char>>(&v11, "(NULL)", 6LL);
  else
    mysqlpp::operator<<((std::ostream *)&v11, &object->data);
  v7 = v15;
  retstr->_M_string_length = 0LL;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  retstr->_anon_0._M_local_buf[0] = 0;
  if ( v7 )
  {
    if ( v7 > v13 )
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v7 - (_QWORD)v14);
    else
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v13 - (_QWORD)v14);
  }
  else
  {
    std::string::_M_assign(retstr, v19);
  }
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  if ( v19[0] != v20 )
    operator delete(v19[0]);
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale(&v17);
  v8 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  *(__int64 *)((char *)&v12[-1] + v8) = v10;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v21);
  return retstr;
};

// Line 41: range 000000000CF967C0-000000000CF96AF2
std::string *__fastcall mysqlpp::stream2string<mysqlpp::Null<mysqlpp::Time,mysqlpp::NullIsNull>>(
        std::string *retstr,
        const mysqlpp::Null<mysqlpp::Time,mysqlpp::NullIsNull> *object)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+8h] [rbp-1D0h]
  __int64 v11; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v12[3]; // [rsp+28h] [rbp-1B0h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-198h]
  const char *v14; // [rsp+48h] [rbp-190h]
  unsigned __int64 v15; // [rsp+50h] [rbp-188h]
  __int64 v16; // [rsp+58h] [rbp-180h]
  std::locale v17; // [rsp+60h] [rbp-178h] BYREF
  int v18; // [rsp+68h] [rbp-170h]
  void *v19[2]; // [rsp+70h] [rbp-168h] BYREF
  char v20[16]; // [rsp+80h] [rbp-158h] BYREF
  __int64 v21[28]; // [rsp+90h] [rbp-148h] BYREF
  __int16 v22; // [rsp+170h] [rbp-68h]
  __int64 v23; // [rsp+178h] [rbp-60h]
  __int64 v24; // [rsp+180h] [rbp-58h]
  __int64 v25; // [rsp+188h] [rbp-50h]
  __int64 v26; // [rsp+190h] [rbp-48h]

  std::ios_base::ios_base((std::ios_base *)v21);
  v21[27] = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  v22 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v3 = *((_QWORD *)&edata + 1);
  v4 = *((_QWORD *)&edata + 2);
  v5 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  v10 = v4;
  v6 = (__int64 *)((char *)&v12[-1] + v5);
  *v6 = v4;
  std::ios::init(v6, 0LL);
  v12[1] = 0LL;
  v12[2] = 0LL;
  v13 = 0LL;
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v14 = 0LL;
  v15 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v16 = 0LL;
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::locale(&v17);
  v18 = 16;
  v19[1] = 0LL;
  v20[0] = 0;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  v19[0] = v20;
  std::ios::init(v21, v12);
  if ( object->is_null )
    std::__ostream_insert<char,std::char_traits<char>>(&v11, "(NULL)", 6LL);
  else
    mysqlpp::operator<<((std::ostream *)&v11, &object->data);
  v7 = v15;
  retstr->_M_string_length = 0LL;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  retstr->_anon_0._M_local_buf[0] = 0;
  if ( v7 )
  {
    if ( v7 > v13 )
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v7 - (_QWORD)v14);
    else
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v13 - (_QWORD)v14);
  }
  else
  {
    std::string::_M_assign(retstr, v19);
  }
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  if ( v19[0] != v20 )
    operator delete(v19[0]);
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale(&v17);
  v8 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  *(__int64 *)((char *)&v12[-1] + v8) = v10;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v21);
  return retstr;
};

// Line 41: range 000000000CF91B40-000000000CF91E73
std::string *__fastcall mysqlpp::stream2string<mysqlpp::Null<mysqlpp::tiny_int<signed char>,mysqlpp::NullIsNull>>(
        std::string *retstr,
        const mysqlpp::Null<mysqlpp::tiny_int<signed char>,mysqlpp::NullIsNull> *object)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+10h] [rbp-1C8h]
  __int64 v11; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v12[3]; // [rsp+28h] [rbp-1B0h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-198h]
  const char *v14; // [rsp+48h] [rbp-190h]
  unsigned __int64 v15; // [rsp+50h] [rbp-188h]
  __int64 v16; // [rsp+58h] [rbp-180h]
  std::locale v17; // [rsp+60h] [rbp-178h] BYREF
  int v18; // [rsp+68h] [rbp-170h]
  void *v19[2]; // [rsp+70h] [rbp-168h] BYREF
  char v20[16]; // [rsp+80h] [rbp-158h] BYREF
  __int64 v21[28]; // [rsp+90h] [rbp-148h] BYREF
  __int16 v22; // [rsp+170h] [rbp-68h]
  __int64 v23; // [rsp+178h] [rbp-60h]
  __int64 v24; // [rsp+180h] [rbp-58h]
  __int64 v25; // [rsp+188h] [rbp-50h]
  __int64 v26; // [rsp+190h] [rbp-48h]

  std::ios_base::ios_base((std::ios_base *)v21);
  v21[27] = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  v22 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v3 = *((_QWORD *)&edata + 1);
  v4 = *((_QWORD *)&edata + 2);
  v5 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  v10 = v4;
  v6 = (__int64 *)((char *)&v12[-1] + v5);
  *v6 = v4;
  std::ios::init(v6, 0LL);
  v12[1] = 0LL;
  v12[2] = 0LL;
  v13 = 0LL;
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v14 = 0LL;
  v15 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v16 = 0LL;
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::locale(&v17);
  v18 = 16;
  v20[0] = 0;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  v19[0] = v20;
  v19[1] = 0LL;
  std::ios::init(v21, v12);
  if ( object->is_null )
    std::__ostream_insert<char,std::char_traits<char>>(&v11, "(NULL)", 6LL);
  else
    std::ostream::operator<<(&v11, (unsigned int)object->data.value_);
  v7 = v15;
  retstr->_M_string_length = 0LL;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  retstr->_anon_0._M_local_buf[0] = 0;
  if ( v7 )
  {
    if ( v7 > v13 )
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v7 - (_QWORD)v14);
    else
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v13 - (_QWORD)v14);
  }
  else
  {
    std::string::_M_assign(retstr, v19);
  }
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  if ( v19[0] != v20 )
    operator delete(v19[0]);
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale(&v17);
  v8 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  *(__int64 *)((char *)&v12[-1] + v8) = v10;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v21);
  return retstr;
};

// Line 41: range 000000000CF921A0-000000000CF924D3
std::string *__fastcall mysqlpp::stream2string<mysqlpp::Null<mysqlpp::tiny_int<unsigned char>,mysqlpp::NullIsNull>>(
        std::string *retstr,
        const mysqlpp::Null<mysqlpp::tiny_int<unsigned char>,mysqlpp::NullIsNull> *object)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+10h] [rbp-1C8h]
  __int64 v11; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v12[3]; // [rsp+28h] [rbp-1B0h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-198h]
  const char *v14; // [rsp+48h] [rbp-190h]
  unsigned __int64 v15; // [rsp+50h] [rbp-188h]
  __int64 v16; // [rsp+58h] [rbp-180h]
  std::locale v17; // [rsp+60h] [rbp-178h] BYREF
  int v18; // [rsp+68h] [rbp-170h]
  void *v19[2]; // [rsp+70h] [rbp-168h] BYREF
  char v20[16]; // [rsp+80h] [rbp-158h] BYREF
  __int64 v21[28]; // [rsp+90h] [rbp-148h] BYREF
  __int16 v22; // [rsp+170h] [rbp-68h]
  __int64 v23; // [rsp+178h] [rbp-60h]
  __int64 v24; // [rsp+180h] [rbp-58h]
  __int64 v25; // [rsp+188h] [rbp-50h]
  __int64 v26; // [rsp+190h] [rbp-48h]

  std::ios_base::ios_base((std::ios_base *)v21);
  v21[27] = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  v22 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v3 = *((_QWORD *)&edata + 1);
  v4 = *((_QWORD *)&edata + 2);
  v5 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  v10 = v4;
  v6 = (__int64 *)((char *)&v12[-1] + v5);
  *v6 = v4;
  std::ios::init(v6, 0LL);
  v12[1] = 0LL;
  v12[2] = 0LL;
  v13 = 0LL;
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v14 = 0LL;
  v15 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v16 = 0LL;
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::locale(&v17);
  v18 = 16;
  v20[0] = 0;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  v19[0] = v20;
  v19[1] = 0LL;
  std::ios::init(v21, v12);
  if ( object->is_null )
    std::__ostream_insert<char,std::char_traits<char>>(&v11, "(NULL)", 6LL);
  else
    std::ostream::operator<<(&v11, object->data.value_);
  v7 = v15;
  retstr->_M_string_length = 0LL;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  retstr->_anon_0._M_local_buf[0] = 0;
  if ( v7 )
  {
    if ( v7 > v13 )
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v7 - (_QWORD)v14);
    else
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v13 - (_QWORD)v14);
  }
  else
  {
    std::string::_M_assign(retstr, v19);
  }
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  if ( v19[0] != v20 )
    operator delete(v19[0]);
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale(&v17);
  v8 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  *(__int64 *)((char *)&v12[-1] + v8) = v10;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v21);
  return retstr;
};

// Line 41: range 000000000CF92800-000000000CF92B33
std::string *__fastcall mysqlpp::stream2string<mysqlpp::Null<short,mysqlpp::NullIsNull>>(
        std::string *retstr,
        const mysqlpp::Null<short int,mysqlpp::NullIsNull> *object)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+10h] [rbp-1C8h]
  __int64 v11; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v12[3]; // [rsp+28h] [rbp-1B0h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-198h]
  const char *v14; // [rsp+48h] [rbp-190h]
  unsigned __int64 v15; // [rsp+50h] [rbp-188h]
  __int64 v16; // [rsp+58h] [rbp-180h]
  std::locale v17; // [rsp+60h] [rbp-178h] BYREF
  int v18; // [rsp+68h] [rbp-170h]
  void *v19[2]; // [rsp+70h] [rbp-168h] BYREF
  char v20[16]; // [rsp+80h] [rbp-158h] BYREF
  __int64 v21[28]; // [rsp+90h] [rbp-148h] BYREF
  __int16 v22; // [rsp+170h] [rbp-68h]
  __int64 v23; // [rsp+178h] [rbp-60h]
  __int64 v24; // [rsp+180h] [rbp-58h]
  __int64 v25; // [rsp+188h] [rbp-50h]
  __int64 v26; // [rsp+190h] [rbp-48h]

  std::ios_base::ios_base((std::ios_base *)v21);
  v21[27] = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  v22 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v3 = *((_QWORD *)&edata + 1);
  v4 = *((_QWORD *)&edata + 2);
  v5 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  v10 = v4;
  v6 = (__int64 *)((char *)&v12[-1] + v5);
  *v6 = v4;
  std::ios::init(v6, 0LL);
  v12[1] = 0LL;
  v12[2] = 0LL;
  v13 = 0LL;
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v14 = 0LL;
  v15 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v16 = 0LL;
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::locale(&v17);
  v18 = 16;
  v20[0] = 0;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  v19[0] = v20;
  v19[1] = 0LL;
  std::ios::init(v21, v12);
  if ( object->is_null )
    std::__ostream_insert<char,std::char_traits<char>>(&v11, "(NULL)", 6LL);
  else
    std::ostream::operator<<(&v11, (unsigned int)object->data);
  v7 = v15;
  retstr->_M_string_length = 0LL;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  retstr->_anon_0._M_local_buf[0] = 0;
  if ( v7 )
  {
    if ( v7 > v13 )
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v7 - (_QWORD)v14);
    else
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v13 - (_QWORD)v14);
  }
  else
  {
    std::string::_M_assign(retstr, v19);
  }
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  if ( v19[0] != v20 )
    operator delete(v19[0]);
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale(&v17);
  v8 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  *(__int64 *)((char *)&v12[-1] + v8) = v10;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v21);
  return retstr;
};

// Line 41: range 000000000CF93B20-000000000CF93E53
std::string *__fastcall mysqlpp::stream2string<mysqlpp::Null<unsigned int,mysqlpp::NullIsNull>>(
        std::string *retstr,
        const mysqlpp::Null<unsigned int,mysqlpp::NullIsNull> *object)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+10h] [rbp-1C8h]
  __int64 v11; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v12[3]; // [rsp+28h] [rbp-1B0h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-198h]
  const char *v14; // [rsp+48h] [rbp-190h]
  unsigned __int64 v15; // [rsp+50h] [rbp-188h]
  __int64 v16; // [rsp+58h] [rbp-180h]
  std::locale v17; // [rsp+60h] [rbp-178h] BYREF
  int v18; // [rsp+68h] [rbp-170h]
  void *v19[2]; // [rsp+70h] [rbp-168h] BYREF
  char v20[16]; // [rsp+80h] [rbp-158h] BYREF
  __int64 v21[28]; // [rsp+90h] [rbp-148h] BYREF
  __int16 v22; // [rsp+170h] [rbp-68h]
  __int64 v23; // [rsp+178h] [rbp-60h]
  __int64 v24; // [rsp+180h] [rbp-58h]
  __int64 v25; // [rsp+188h] [rbp-50h]
  __int64 v26; // [rsp+190h] [rbp-48h]

  std::ios_base::ios_base((std::ios_base *)v21);
  v21[27] = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  v22 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v3 = *((_QWORD *)&edata + 1);
  v4 = *((_QWORD *)&edata + 2);
  v5 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  v10 = v4;
  v6 = (__int64 *)((char *)&v12[-1] + v5);
  *v6 = v4;
  std::ios::init(v6, 0LL);
  v12[1] = 0LL;
  v12[2] = 0LL;
  v13 = 0LL;
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v14 = 0LL;
  v15 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v16 = 0LL;
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::locale(&v17);
  v18 = 16;
  v20[0] = 0;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  v19[0] = v20;
  v19[1] = 0LL;
  std::ios::init(v21, v12);
  if ( object->is_null )
    std::__ostream_insert<char,std::char_traits<char>>(&v11, "(NULL)", 6LL);
  else
    std::ostream::_M_insert<unsigned long>(&v11, object->data);
  v7 = v15;
  retstr->_M_string_length = 0LL;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  retstr->_anon_0._M_local_buf[0] = 0;
  if ( v7 )
  {
    if ( v7 > v13 )
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v7 - (_QWORD)v14);
    else
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v13 - (_QWORD)v14);
  }
  else
  {
    std::string::_M_assign(retstr, v19);
  }
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  if ( v19[0] != v20 )
    operator delete(v19[0]);
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale(&v17);
  v8 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  *(__int64 *)((char *)&v12[-1] + v8) = v10;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v21);
  return retstr;
};

// Line 41: range 000000000CF954A0-000000000CF957D3
std::string *__fastcall mysqlpp::stream2string<mysqlpp::Null<unsigned long long,mysqlpp::NullIsNull>>(
        std::string *retstr,
        const mysqlpp::Null<long long unsigned int,mysqlpp::NullIsNull> *object)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+10h] [rbp-1C8h]
  __int64 v11; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v12[3]; // [rsp+28h] [rbp-1B0h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-198h]
  const char *v14; // [rsp+48h] [rbp-190h]
  unsigned __int64 v15; // [rsp+50h] [rbp-188h]
  __int64 v16; // [rsp+58h] [rbp-180h]
  std::locale v17; // [rsp+60h] [rbp-178h] BYREF
  int v18; // [rsp+68h] [rbp-170h]
  void *v19[2]; // [rsp+70h] [rbp-168h] BYREF
  char v20[16]; // [rsp+80h] [rbp-158h] BYREF
  __int64 v21[28]; // [rsp+90h] [rbp-148h] BYREF
  __int16 v22; // [rsp+170h] [rbp-68h]
  __int64 v23; // [rsp+178h] [rbp-60h]
  __int64 v24; // [rsp+180h] [rbp-58h]
  __int64 v25; // [rsp+188h] [rbp-50h]
  __int64 v26; // [rsp+190h] [rbp-48h]

  std::ios_base::ios_base((std::ios_base *)v21);
  v21[27] = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  v22 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v3 = *((_QWORD *)&edata + 1);
  v4 = *((_QWORD *)&edata + 2);
  v5 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  v10 = v4;
  v6 = (__int64 *)((char *)&v12[-1] + v5);
  *v6 = v4;
  std::ios::init(v6, 0LL);
  v12[1] = 0LL;
  v12[2] = 0LL;
  v13 = 0LL;
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v14 = 0LL;
  v15 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v16 = 0LL;
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::locale(&v17);
  v18 = 16;
  v20[0] = 0;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  v19[0] = v20;
  v19[1] = 0LL;
  std::ios::init(v21, v12);
  if ( object->is_null )
    std::__ostream_insert<char,std::char_traits<char>>(&v11, "(NULL)", 6LL);
  else
    std::ostream::_M_insert<unsigned long long>(&v11, object->data);
  v7 = v15;
  retstr->_M_string_length = 0LL;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  retstr->_anon_0._M_local_buf[0] = 0;
  if ( v7 )
  {
    if ( v7 > v13 )
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v7 - (_QWORD)v14);
    else
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v13 - (_QWORD)v14);
  }
  else
  {
    std::string::_M_assign(retstr, v19);
  }
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  if ( v19[0] != v20 )
    operator delete(v19[0]);
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale(&v17);
  v8 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  *(__int64 *)((char *)&v12[-1] + v8) = v10;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v21);
  return retstr;
};

// Line 41: range 000000000CF947E0-000000000CF94B13
std::string *__fastcall mysqlpp::stream2string<mysqlpp::Null<unsigned long,mysqlpp::NullIsNull>>(
        std::string *retstr,
        const mysqlpp::Null<long unsigned int,mysqlpp::NullIsNull> *object)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+10h] [rbp-1C8h]
  __int64 v11; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v12[3]; // [rsp+28h] [rbp-1B0h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-198h]
  const char *v14; // [rsp+48h] [rbp-190h]
  unsigned __int64 v15; // [rsp+50h] [rbp-188h]
  __int64 v16; // [rsp+58h] [rbp-180h]
  std::locale v17; // [rsp+60h] [rbp-178h] BYREF
  int v18; // [rsp+68h] [rbp-170h]
  void *v19[2]; // [rsp+70h] [rbp-168h] BYREF
  char v20[16]; // [rsp+80h] [rbp-158h] BYREF
  __int64 v21[28]; // [rsp+90h] [rbp-148h] BYREF
  __int16 v22; // [rsp+170h] [rbp-68h]
  __int64 v23; // [rsp+178h] [rbp-60h]
  __int64 v24; // [rsp+180h] [rbp-58h]
  __int64 v25; // [rsp+188h] [rbp-50h]
  __int64 v26; // [rsp+190h] [rbp-48h]

  std::ios_base::ios_base((std::ios_base *)v21);
  v21[27] = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  v22 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v3 = *((_QWORD *)&edata + 1);
  v4 = *((_QWORD *)&edata + 2);
  v5 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  v10 = v4;
  v6 = (__int64 *)((char *)&v12[-1] + v5);
  *v6 = v4;
  std::ios::init(v6, 0LL);
  v12[1] = 0LL;
  v12[2] = 0LL;
  v13 = 0LL;
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v14 = 0LL;
  v15 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v16 = 0LL;
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::locale(&v17);
  v18 = 16;
  v20[0] = 0;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  v19[0] = v20;
  v19[1] = 0LL;
  std::ios::init(v21, v12);
  if ( object->is_null )
    std::__ostream_insert<char,std::char_traits<char>>(&v11, "(NULL)", 6LL);
  else
    std::ostream::_M_insert<unsigned long>(&v11, object->data);
  v7 = v15;
  retstr->_M_string_length = 0LL;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  retstr->_anon_0._M_local_buf[0] = 0;
  if ( v7 )
  {
    if ( v7 > v13 )
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v7 - (_QWORD)v14);
    else
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v13 - (_QWORD)v14);
  }
  else
  {
    std::string::_M_assign(retstr, v19);
  }
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  if ( v19[0] != v20 )
    operator delete(v19[0]);
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale(&v17);
  v8 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  *(__int64 *)((char *)&v12[-1] + v8) = v10;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v21);
  return retstr;
};

// Line 41: range 000000000CF92E60-000000000CF93193
std::string *__fastcall mysqlpp::stream2string<mysqlpp::Null<unsigned short,mysqlpp::NullIsNull>>(
        std::string *retstr,
        const mysqlpp::Null<short unsigned int,mysqlpp::NullIsNull> *object)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+10h] [rbp-1C8h]
  __int64 v11; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v12[3]; // [rsp+28h] [rbp-1B0h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-198h]
  const char *v14; // [rsp+48h] [rbp-190h]
  unsigned __int64 v15; // [rsp+50h] [rbp-188h]
  __int64 v16; // [rsp+58h] [rbp-180h]
  std::locale v17; // [rsp+60h] [rbp-178h] BYREF
  int v18; // [rsp+68h] [rbp-170h]
  void *v19[2]; // [rsp+70h] [rbp-168h] BYREF
  char v20[16]; // [rsp+80h] [rbp-158h] BYREF
  __int64 v21[28]; // [rsp+90h] [rbp-148h] BYREF
  __int16 v22; // [rsp+170h] [rbp-68h]
  __int64 v23; // [rsp+178h] [rbp-60h]
  __int64 v24; // [rsp+180h] [rbp-58h]
  __int64 v25; // [rsp+188h] [rbp-50h]
  __int64 v26; // [rsp+190h] [rbp-48h]

  std::ios_base::ios_base((std::ios_base *)v21);
  v21[27] = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  v22 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v3 = *((_QWORD *)&edata + 1);
  v4 = *((_QWORD *)&edata + 2);
  v5 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  v10 = v4;
  v6 = (__int64 *)((char *)&v12[-1] + v5);
  *v6 = v4;
  std::ios::init(v6, 0LL);
  v12[1] = 0LL;
  v12[2] = 0LL;
  v13 = 0LL;
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v14 = 0LL;
  v15 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v16 = 0LL;
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::locale(&v17);
  v18 = 16;
  v20[0] = 0;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  v19[0] = v20;
  v19[1] = 0LL;
  std::ios::init(v21, v12);
  if ( object->is_null )
    std::__ostream_insert<char,std::char_traits<char>>(&v11, "(NULL)", 6LL);
  else
    std::ostream::_M_insert<unsigned long>(&v11, object->data);
  v7 = v15;
  retstr->_M_string_length = 0LL;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  retstr->_anon_0._M_local_buf[0] = 0;
  if ( v7 )
  {
    if ( v7 > v13 )
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v7 - (_QWORD)v14);
    else
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v13 - (_QWORD)v14);
  }
  else
  {
    std::string::_M_assign(retstr, v19);
  }
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  if ( v19[0] != v20 )
    operator delete(v19[0]);
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale(&v17);
  v8 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  *(__int64 *)((char *)&v12[-1] + v8) = v10;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v21);
  return retstr;
};

// Line 41: range 000000000CF964A0-000000000CF967AD
std::string *__fastcall mysqlpp::stream2string<mysqlpp::Time>(std::string *retstr, const mysqlpp::Time *object)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+8h] [rbp-1D0h]
  __int64 v11; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v12[3]; // [rsp+28h] [rbp-1B0h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-198h]
  const char *v14; // [rsp+48h] [rbp-190h]
  unsigned __int64 v15; // [rsp+50h] [rbp-188h]
  __int64 v16; // [rsp+58h] [rbp-180h]
  std::locale v17; // [rsp+60h] [rbp-178h] BYREF
  int v18; // [rsp+68h] [rbp-170h]
  void *v19[2]; // [rsp+70h] [rbp-168h] BYREF
  char v20[16]; // [rsp+80h] [rbp-158h] BYREF
  __int64 v21[28]; // [rsp+90h] [rbp-148h] BYREF
  __int16 v22; // [rsp+170h] [rbp-68h]
  __int64 v23; // [rsp+178h] [rbp-60h]
  __int64 v24; // [rsp+180h] [rbp-58h]
  __int64 v25; // [rsp+188h] [rbp-50h]
  __int64 v26; // [rsp+190h] [rbp-48h]

  std::ios_base::ios_base((std::ios_base *)v21);
  v21[27] = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  v22 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v3 = *((_QWORD *)&edata + 1);
  v4 = *((_QWORD *)&edata + 2);
  v5 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  v10 = v4;
  v6 = (__int64 *)((char *)&v12[-1] + v5);
  *v6 = v4;
  std::ios::init(v6, 0LL);
  v12[1] = 0LL;
  v12[2] = 0LL;
  v13 = 0LL;
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v14 = 0LL;
  v15 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v16 = 0LL;
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::locale(&v17);
  v18 = 16;
  v20[0] = 0;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  v19[0] = v20;
  v19[1] = 0LL;
  std::ios::init(v21, v12);
  mysqlpp::operator<<((std::ostream *)&v11, object);
  v7 = v15;
  retstr->_M_string_length = 0LL;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  retstr->_anon_0._M_local_buf[0] = 0;
  if ( v7 )
  {
    if ( v7 > v13 )
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v7 - (_QWORD)v14);
    else
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v13 - (_QWORD)v14);
  }
  else
  {
    std::string::_M_assign(retstr, v19);
  }
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  if ( v19[0] != v20 )
    operator delete(v19[0]);
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale(&v17);
  v8 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  *(__int64 *)((char *)&v12[-1] + v8) = v10;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v21);
  return retstr;
};

// Line 41: range 000000000CF91820-000000000CF91B2D
std::string *__fastcall mysqlpp::stream2string<mysqlpp::tiny_int<signed char>>(
        std::string *retstr,
        const mysqlpp::tiny_int<signed char> *object)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+8h] [rbp-1D0h]
  __int64 v11; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v12[3]; // [rsp+28h] [rbp-1B0h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-198h]
  const char *v14; // [rsp+48h] [rbp-190h]
  unsigned __int64 v15; // [rsp+50h] [rbp-188h]
  __int64 v16; // [rsp+58h] [rbp-180h]
  std::locale v17; // [rsp+60h] [rbp-178h] BYREF
  int v18; // [rsp+68h] [rbp-170h]
  void *v19[2]; // [rsp+70h] [rbp-168h] BYREF
  char v20[16]; // [rsp+80h] [rbp-158h] BYREF
  __int64 v21[28]; // [rsp+90h] [rbp-148h] BYREF
  __int16 v22; // [rsp+170h] [rbp-68h]
  __int64 v23; // [rsp+178h] [rbp-60h]
  __int64 v24; // [rsp+180h] [rbp-58h]
  __int64 v25; // [rsp+188h] [rbp-50h]
  __int64 v26; // [rsp+190h] [rbp-48h]

  std::ios_base::ios_base((std::ios_base *)v21);
  v21[27] = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  v22 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v3 = *((_QWORD *)&edata + 1);
  v4 = *((_QWORD *)&edata + 2);
  v5 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  v10 = v4;
  v6 = (__int64 *)((char *)&v12[-1] + v5);
  *v6 = v4;
  std::ios::init(v6, 0LL);
  v12[1] = 0LL;
  v12[2] = 0LL;
  v13 = 0LL;
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v14 = 0LL;
  v15 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v16 = 0LL;
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::locale(&v17);
  v18 = 16;
  v20[0] = 0;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  v19[0] = v20;
  v19[1] = 0LL;
  std::ios::init(v21, v12);
  std::ostream::operator<<(&v11, (unsigned int)object->value_);
  v7 = v15;
  retstr->_M_string_length = 0LL;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  retstr->_anon_0._M_local_buf[0] = 0;
  if ( v7 )
  {
    if ( v7 > v13 )
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v7 - (_QWORD)v14);
    else
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v13 - (_QWORD)v14);
  }
  else
  {
    std::string::_M_assign(retstr, v19);
  }
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  if ( v19[0] != v20 )
    operator delete(v19[0]);
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale(&v17);
  v8 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  *(__int64 *)((char *)&v12[-1] + v8) = v10;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v21);
  return retstr;
};

// Line 41: range 000000000CF91E80-000000000CF9218D
std::string *__fastcall mysqlpp::stream2string<mysqlpp::tiny_int<unsigned char>>(
        std::string *retstr,
        const mysqlpp::tiny_int<unsigned char> *object)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+8h] [rbp-1D0h]
  __int64 v11; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v12[3]; // [rsp+28h] [rbp-1B0h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-198h]
  const char *v14; // [rsp+48h] [rbp-190h]
  unsigned __int64 v15; // [rsp+50h] [rbp-188h]
  __int64 v16; // [rsp+58h] [rbp-180h]
  std::locale v17; // [rsp+60h] [rbp-178h] BYREF
  int v18; // [rsp+68h] [rbp-170h]
  void *v19[2]; // [rsp+70h] [rbp-168h] BYREF
  char v20[16]; // [rsp+80h] [rbp-158h] BYREF
  __int64 v21[28]; // [rsp+90h] [rbp-148h] BYREF
  __int16 v22; // [rsp+170h] [rbp-68h]
  __int64 v23; // [rsp+178h] [rbp-60h]
  __int64 v24; // [rsp+180h] [rbp-58h]
  __int64 v25; // [rsp+188h] [rbp-50h]
  __int64 v26; // [rsp+190h] [rbp-48h]

  std::ios_base::ios_base((std::ios_base *)v21);
  v21[27] = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  v22 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v3 = *((_QWORD *)&edata + 1);
  v4 = *((_QWORD *)&edata + 2);
  v5 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  v10 = v4;
  v6 = (__int64 *)((char *)&v12[-1] + v5);
  *v6 = v4;
  std::ios::init(v6, 0LL);
  v12[1] = 0LL;
  v12[2] = 0LL;
  v13 = 0LL;
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v14 = 0LL;
  v15 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v16 = 0LL;
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::locale(&v17);
  v18 = 16;
  v20[0] = 0;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  v19[0] = v20;
  v19[1] = 0LL;
  std::ios::init(v21, v12);
  std::ostream::operator<<(&v11, object->value_);
  v7 = v15;
  retstr->_M_string_length = 0LL;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  retstr->_anon_0._M_local_buf[0] = 0;
  if ( v7 )
  {
    if ( v7 > v13 )
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v7 - (_QWORD)v14);
    else
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v13 - (_QWORD)v14);
  }
  else
  {
    std::string::_M_assign(retstr, v19);
  }
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  if ( v19[0] != v20 )
    operator delete(v19[0]);
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale(&v17);
  v8 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  *(__int64 *)((char *)&v12[-1] + v8) = v10;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v21);
  return retstr;
};

// Line 41: range 000000000CF924E0-000000000CF927ED
std::string *__fastcall mysqlpp::stream2string<short>(std::string *retstr, const __int16 *object)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+8h] [rbp-1D0h]
  __int64 v11; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v12[3]; // [rsp+28h] [rbp-1B0h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-198h]
  const char *v14; // [rsp+48h] [rbp-190h]
  unsigned __int64 v15; // [rsp+50h] [rbp-188h]
  __int64 v16; // [rsp+58h] [rbp-180h]
  std::locale v17; // [rsp+60h] [rbp-178h] BYREF
  int v18; // [rsp+68h] [rbp-170h]
  void *v19[2]; // [rsp+70h] [rbp-168h] BYREF
  char v20[16]; // [rsp+80h] [rbp-158h] BYREF
  __int64 v21[28]; // [rsp+90h] [rbp-148h] BYREF
  __int16 v22; // [rsp+170h] [rbp-68h]
  __int64 v23; // [rsp+178h] [rbp-60h]
  __int64 v24; // [rsp+180h] [rbp-58h]
  __int64 v25; // [rsp+188h] [rbp-50h]
  __int64 v26; // [rsp+190h] [rbp-48h]

  std::ios_base::ios_base((std::ios_base *)v21);
  v21[27] = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  v22 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v3 = *((_QWORD *)&edata + 1);
  v4 = *((_QWORD *)&edata + 2);
  v5 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  v10 = v4;
  v6 = (__int64 *)((char *)&v12[-1] + v5);
  *v6 = v4;
  std::ios::init(v6, 0LL);
  v12[1] = 0LL;
  v12[2] = 0LL;
  v13 = 0LL;
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v14 = 0LL;
  v15 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v16 = 0LL;
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::locale(&v17);
  v18 = 16;
  v20[0] = 0;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  v19[0] = v20;
  v19[1] = 0LL;
  std::ios::init(v21, v12);
  std::ostream::operator<<(&v11, (unsigned int)*object);
  v7 = v15;
  retstr->_M_string_length = 0LL;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  retstr->_anon_0._M_local_buf[0] = 0;
  if ( v7 )
  {
    if ( v7 > v13 )
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v7 - (_QWORD)v14);
    else
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v13 - (_QWORD)v14);
  }
  else
  {
    std::string::_M_assign(retstr, v19);
  }
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  if ( v19[0] != v20 )
    operator delete(v19[0]);
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale(&v17);
  v8 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  *(__int64 *)((char *)&v12[-1] + v8) = v10;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v21);
  return retstr;
};

// Line 41: range 000000000CF93800-000000000CF93B0D
std::string *__fastcall mysqlpp::stream2string<unsigned int>(std::string *retstr, const unsigned int *object)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+8h] [rbp-1D0h]
  __int64 v11; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v12[3]; // [rsp+28h] [rbp-1B0h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-198h]
  const char *v14; // [rsp+48h] [rbp-190h]
  unsigned __int64 v15; // [rsp+50h] [rbp-188h]
  __int64 v16; // [rsp+58h] [rbp-180h]
  std::locale v17; // [rsp+60h] [rbp-178h] BYREF
  int v18; // [rsp+68h] [rbp-170h]
  void *v19[2]; // [rsp+70h] [rbp-168h] BYREF
  char v20[16]; // [rsp+80h] [rbp-158h] BYREF
  __int64 v21[28]; // [rsp+90h] [rbp-148h] BYREF
  __int16 v22; // [rsp+170h] [rbp-68h]
  __int64 v23; // [rsp+178h] [rbp-60h]
  __int64 v24; // [rsp+180h] [rbp-58h]
  __int64 v25; // [rsp+188h] [rbp-50h]
  __int64 v26; // [rsp+190h] [rbp-48h]

  std::ios_base::ios_base((std::ios_base *)v21);
  v21[27] = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  v22 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v3 = *((_QWORD *)&edata + 1);
  v4 = *((_QWORD *)&edata + 2);
  v5 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  v10 = v4;
  v6 = (__int64 *)((char *)&v12[-1] + v5);
  *v6 = v4;
  std::ios::init(v6, 0LL);
  v12[1] = 0LL;
  v12[2] = 0LL;
  v13 = 0LL;
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v14 = 0LL;
  v15 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v16 = 0LL;
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::locale(&v17);
  v18 = 16;
  v20[0] = 0;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  v19[0] = v20;
  v19[1] = 0LL;
  std::ios::init(v21, v12);
  std::ostream::_M_insert<unsigned long>(&v11, *object);
  v7 = v15;
  retstr->_M_string_length = 0LL;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  retstr->_anon_0._M_local_buf[0] = 0;
  if ( v7 )
  {
    if ( v7 > v13 )
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v7 - (_QWORD)v14);
    else
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v13 - (_QWORD)v14);
  }
  else
  {
    std::string::_M_assign(retstr, v19);
  }
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  if ( v19[0] != v20 )
    operator delete(v19[0]);
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale(&v17);
  v8 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  *(__int64 *)((char *)&v12[-1] + v8) = v10;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v21);
  return retstr;
};

// Line 41: range 000000000CF95180-000000000CF9548D
std::string *__fastcall mysqlpp::stream2string<unsigned long long>(std::string *retstr, const unsigned __int64 *object)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+8h] [rbp-1D0h]
  __int64 v11; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v12[3]; // [rsp+28h] [rbp-1B0h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-198h]
  const char *v14; // [rsp+48h] [rbp-190h]
  unsigned __int64 v15; // [rsp+50h] [rbp-188h]
  __int64 v16; // [rsp+58h] [rbp-180h]
  std::locale v17; // [rsp+60h] [rbp-178h] BYREF
  int v18; // [rsp+68h] [rbp-170h]
  void *v19[2]; // [rsp+70h] [rbp-168h] BYREF
  char v20[16]; // [rsp+80h] [rbp-158h] BYREF
  __int64 v21[28]; // [rsp+90h] [rbp-148h] BYREF
  __int16 v22; // [rsp+170h] [rbp-68h]
  __int64 v23; // [rsp+178h] [rbp-60h]
  __int64 v24; // [rsp+180h] [rbp-58h]
  __int64 v25; // [rsp+188h] [rbp-50h]
  __int64 v26; // [rsp+190h] [rbp-48h]

  std::ios_base::ios_base((std::ios_base *)v21);
  v21[27] = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  v22 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v3 = *((_QWORD *)&edata + 1);
  v4 = *((_QWORD *)&edata + 2);
  v5 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  v10 = v4;
  v6 = (__int64 *)((char *)&v12[-1] + v5);
  *v6 = v4;
  std::ios::init(v6, 0LL);
  v12[1] = 0LL;
  v12[2] = 0LL;
  v13 = 0LL;
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v14 = 0LL;
  v15 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v16 = 0LL;
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::locale(&v17);
  v18 = 16;
  v20[0] = 0;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  v19[0] = v20;
  v19[1] = 0LL;
  std::ios::init(v21, v12);
  std::ostream::_M_insert<unsigned long long>(&v11, *object);
  v7 = v15;
  retstr->_M_string_length = 0LL;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  retstr->_anon_0._M_local_buf[0] = 0;
  if ( v7 )
  {
    if ( v7 > v13 )
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v7 - (_QWORD)v14);
    else
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v13 - (_QWORD)v14);
  }
  else
  {
    std::string::_M_assign(retstr, v19);
  }
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  if ( v19[0] != v20 )
    operator delete(v19[0]);
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale(&v17);
  v8 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  *(__int64 *)((char *)&v12[-1] + v8) = v10;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v21);
  return retstr;
};

// Line 41: range 000000000CF944C0-000000000CF947CD
std::string *__fastcall mysqlpp::stream2string<unsigned long>(std::string *retstr, const unsigned __int64 *object)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+8h] [rbp-1D0h]
  __int64 v11; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v12[3]; // [rsp+28h] [rbp-1B0h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-198h]
  const char *v14; // [rsp+48h] [rbp-190h]
  unsigned __int64 v15; // [rsp+50h] [rbp-188h]
  __int64 v16; // [rsp+58h] [rbp-180h]
  std::locale v17; // [rsp+60h] [rbp-178h] BYREF
  int v18; // [rsp+68h] [rbp-170h]
  void *v19[2]; // [rsp+70h] [rbp-168h] BYREF
  char v20[16]; // [rsp+80h] [rbp-158h] BYREF
  __int64 v21[28]; // [rsp+90h] [rbp-148h] BYREF
  __int16 v22; // [rsp+170h] [rbp-68h]
  __int64 v23; // [rsp+178h] [rbp-60h]
  __int64 v24; // [rsp+180h] [rbp-58h]
  __int64 v25; // [rsp+188h] [rbp-50h]
  __int64 v26; // [rsp+190h] [rbp-48h]

  std::ios_base::ios_base((std::ios_base *)v21);
  v21[27] = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  v22 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v3 = *((_QWORD *)&edata + 1);
  v4 = *((_QWORD *)&edata + 2);
  v5 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  v10 = v4;
  v6 = (__int64 *)((char *)&v12[-1] + v5);
  *v6 = v4;
  std::ios::init(v6, 0LL);
  v12[1] = 0LL;
  v12[2] = 0LL;
  v13 = 0LL;
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v14 = 0LL;
  v15 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v16 = 0LL;
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::locale(&v17);
  v18 = 16;
  v20[0] = 0;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  v19[0] = v20;
  v19[1] = 0LL;
  std::ios::init(v21, v12);
  std::ostream::_M_insert<unsigned long>(&v11, *object);
  v7 = v15;
  retstr->_M_string_length = 0LL;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  retstr->_anon_0._M_local_buf[0] = 0;
  if ( v7 )
  {
    if ( v7 > v13 )
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v7 - (_QWORD)v14);
    else
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v13 - (_QWORD)v14);
  }
  else
  {
    std::string::_M_assign(retstr, v19);
  }
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  if ( v19[0] != v20 )
    operator delete(v19[0]);
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale(&v17);
  v8 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  *(__int64 *)((char *)&v12[-1] + v8) = v10;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v21);
  return retstr;
};

// Line 41: range 000000000CF92B40-000000000CF92E4D
std::string *__fastcall mysqlpp::stream2string<unsigned short>(std::string *retstr, const unsigned __int16 *object)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+8h] [rbp-1D0h]
  __int64 v11; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v12[3]; // [rsp+28h] [rbp-1B0h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-198h]
  const char *v14; // [rsp+48h] [rbp-190h]
  unsigned __int64 v15; // [rsp+50h] [rbp-188h]
  __int64 v16; // [rsp+58h] [rbp-180h]
  std::locale v17; // [rsp+60h] [rbp-178h] BYREF
  int v18; // [rsp+68h] [rbp-170h]
  void *v19[2]; // [rsp+70h] [rbp-168h] BYREF
  char v20[16]; // [rsp+80h] [rbp-158h] BYREF
  __int64 v21[28]; // [rsp+90h] [rbp-148h] BYREF
  __int16 v22; // [rsp+170h] [rbp-68h]
  __int64 v23; // [rsp+178h] [rbp-60h]
  __int64 v24; // [rsp+180h] [rbp-58h]
  __int64 v25; // [rsp+188h] [rbp-50h]
  __int64 v26; // [rsp+190h] [rbp-48h]

  std::ios_base::ios_base((std::ios_base *)v21);
  v21[27] = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  v22 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v3 = *((_QWORD *)&edata + 1);
  v4 = *((_QWORD *)&edata + 2);
  v5 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  v10 = v4;
  v6 = (__int64 *)((char *)&v12[-1] + v5);
  *v6 = v4;
  std::ios::init(v6, 0LL);
  v12[1] = 0LL;
  v12[2] = 0LL;
  v13 = 0LL;
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v14 = 0LL;
  v15 = 0LL;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v16 = 0LL;
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::locale(&v17);
  v18 = 16;
  v20[0] = 0;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  v19[0] = v20;
  v19[1] = 0LL;
  std::ios::init(v21, v12);
  std::ostream::_M_insert<unsigned long>(&v11, *object);
  v7 = v15;
  retstr->_M_string_length = 0LL;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  retstr->_anon_0._M_local_buf[0] = 0;
  if ( v7 )
  {
    if ( v7 > v13 )
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v7 - (_QWORD)v14);
    else
      std::string::_M_replace(retstr, 0LL, 0LL, v14, v13 - (_QWORD)v14);
  }
  else
  {
    std::string::_M_assign(retstr, v19);
  }
  v11 = (__int64)&`vtable for'std::ostringstream + 24;
  v21[0] = (__int64)&`vtable for'std::ostringstream + 64;
  v12[0] = (__int64)&`vtable for'std::stringbuf + 16;
  if ( v19[0] != v20 )
    operator delete(v19[0]);
  v12[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale(&v17);
  v8 = *(_QWORD *)(v3 - 24);
  v11 = v3;
  *(__int64 *)((char *)&v12[-1] + v8) = v10;
  v21[0] = (__int64)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v21);
  return retstr;
};
