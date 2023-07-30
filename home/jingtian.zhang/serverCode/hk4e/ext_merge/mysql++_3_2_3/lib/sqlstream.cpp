// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql++_3_2_3/lib/sqlstream.cpp

// Line 35: range 000000000CF9C370-000000000CF9C541
void __fastcall mysqlpp::SQLStream::SQLStream(mysqlpp::SQLStream *this, mysqlpp::Connection *a2, const char *a3)
{
  size_t v4; // rax
  std::forward_iterator_tag v5; // cl
  __int64 v6; // rcx
  std::string v7[2]; // [rsp+0h] [rbp-58h] BYREF

  std::ios_base::ios_base((std::ios_base *)this->gap78);
  *(_QWORD *)this->baseclass_0 = &unk_1EB1BE90;
  *(_WORD *)&this->gap78[224] = 0;
  *(_QWORD *)&this->gap78[216] = 0LL;
  *(_QWORD *)&this->gap78[232] = 0LL;
  *(_QWORD *)&this->gap78[240] = 0LL;
  *(_QWORD *)&this->gap78[248] = 0LL;
  *(_QWORD *)&this->gap78[256] = 0LL;
  *(_QWORD *)this->gap78 = (char *)&unk_1EB1BE90 + 40;
  std::ios::init(this->gap78, 0LL);
  *(_QWORD *)&this->baseclass_0[16] = 0LL;
  *(_QWORD *)&this->baseclass_0[24] = 0LL;
  *(_QWORD *)this->baseclass_0 = &unk_1EB1BEE0;
  *(_QWORD *)this->gap78 = (char *)&unk_1EB1BEE0 + 40;
  *(_QWORD *)&this->baseclass_0[32] = 0LL;
  *(_QWORD *)&this->baseclass_0[40] = 0LL;
  *(_QWORD *)&this->baseclass_0[8] = (char *)&`vtable for'std::streambuf + 16;
  *(_QWORD *)&this->baseclass_0[48] = 0LL;
  *(_QWORD *)&this->baseclass_0[56] = 0LL;
  std::locale::locale((std::locale *)&this->baseclass_0[64]);
  this->baseclass_0[96] = 0;
  *(_QWORD *)&this->baseclass_0[88] = 0LL;
  *(_DWORD *)&this->baseclass_0[72] = 16;
  *(_QWORD *)&this->baseclass_0[8] = (char *)&`vtable for'std::stringbuf + 16;
  *(_QWORD *)&this->baseclass_0[80] = &this->baseclass_0[96];
  std::ios::init(&this->baseclass_0[*(_QWORD *)(*(_QWORD *)this->baseclass_0 - 24LL)], &this->baseclass_0[8]);
  this->conn_ = a2;
  *(_QWORD *)this->baseclass_0 = (char *)&`vtable for'mysqlpp::SQLStream + 24;
  *(_QWORD *)this->gap78 = (char *)&`vtable for'mysqlpp::SQLStream + 64;
  if ( a3 )
  {
    v7[0]._M_dataplus._M_p = v7[0]._anon_0._M_local_buf;
    v4 = strlen(a3);
    std::string::_M_construct<char const*>(v7, a3, &a3[v4], v5);
    std::string::_M_replace(
      &this->baseclass_0[80],
      0LL,
      *(_QWORD *)&this->baseclass_0[88],
      v7[0]._M_dataplus._M_p,
      v7[0]._M_string_length);
    v6 = 0LL;
    if ( (this->baseclass_0[72] & 3) != 0 )
      v6 = *(_QWORD *)&this->baseclass_0[88];
    std::stringbuf::_M_sync(&this->baseclass_0[8], *(_QWORD *)&this->baseclass_0[80], 0LL, v6);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v7[0]._M_dataplus._M_p != &v7[0]._anon_0 )
      operator delete(v7[0]._M_dataplus._M_p);
  }
};

// Line 35: range 000000000CF9C780-000000000CF9C8F9
void __fastcall mysqlpp::SQLStream::SQLStream(
        mysqlpp::SQLStream *this,
        mysqlpp::Connection *a2,
        mysqlpp::Connection *a3,
        const char *a4)
{
  __int8 *v7; // r14
  std::string::pointer M_p; // rax
  std::string::size_type *v9; // rdi
  __int64 v10; // rax
  std::string::size_type M_allocated_capacity; // rdx
  int (**vptr_OptionalExceptions)(...); // rax
  __int64 v13; // rdx
  size_t v14; // rax
  std::forward_iterator_tag v15; // cl
  __int64 v16; // rcx
  std::string v17[2]; // [rsp+0h] [rbp-58h] BYREF

  v7 = &this->baseclass_0[8];
  M_p = a2->error_message_._M_dataplus._M_p;
  *(_QWORD *)this->baseclass_0 = M_p;
  v9 = (std::string::size_type *)&this->baseclass_0[*((_QWORD *)M_p - 3)];
  *v9 = a2->error_message_._M_string_length;
  std::ios::init(v9, 0LL);
  v10 = *(_QWORD *)&a2->exceptions_;
  M_allocated_capacity = a2->error_message_._anon_0._M_allocated_capacity;
  *(_QWORD *)this->baseclass_0 = v10;
  *(_QWORD *)&this->baseclass_0[*(_QWORD *)(v10 - 24)] = M_allocated_capacity;
  *(_QWORD *)&this->baseclass_0[16] = 0LL;
  *(_QWORD *)&this->baseclass_0[24] = 0LL;
  *(_QWORD *)&this->baseclass_0[8] = (char *)&`vtable for'std::streambuf + 16;
  *(_QWORD *)&this->baseclass_0[32] = 0LL;
  *(_QWORD *)&this->baseclass_0[40] = 0LL;
  *(_QWORD *)&this->baseclass_0[48] = 0LL;
  *(_QWORD *)&this->baseclass_0[56] = 0LL;
  std::locale::locale((std::locale *)&this->baseclass_0[64]);
  this->baseclass_0[96] = 0;
  *(_QWORD *)&this->baseclass_0[88] = 0LL;
  *(_DWORD *)&this->baseclass_0[72] = 16;
  *(_QWORD *)&this->baseclass_0[8] = (char *)&`vtable for'std::stringbuf + 16;
  *(_QWORD *)&this->baseclass_0[80] = &this->baseclass_0[96];
  std::ios::init(&this->baseclass_0[*(_QWORD *)(*(_QWORD *)this->baseclass_0 - 24LL)], v7);
  vptr_OptionalExceptions = a2->_vptr_OptionalExceptions;
  v13 = *(&a2->error_message_._anon_0._M_allocated_capacity + 1);
  *(_QWORD *)this->baseclass_0 = a2->_vptr_OptionalExceptions;
  *(_QWORD *)((char *)*(vptr_OptionalExceptions - 3) + (_QWORD)this) = v13;
  this->conn_ = a3;
  if ( a4 )
  {
    v17[0]._M_dataplus._M_p = v17[0]._anon_0._M_local_buf;
    v14 = strlen(a4);
    std::string::_M_construct<char const*>(v17, a4, &a4[v14], v15);
    std::string::_M_replace(
      &this->baseclass_0[80],
      0LL,
      *(_QWORD *)&this->baseclass_0[88],
      v17[0]._M_dataplus._M_p,
      v17[0]._M_string_length);
    v16 = 0LL;
    if ( (this->baseclass_0[72] & 3) != 0 )
      v16 = *(_QWORD *)&this->baseclass_0[88];
    std::stringbuf::_M_sync(v7, *(_QWORD *)&this->baseclass_0[80], 0LL, v16);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v17[0]._M_dataplus._M_p != &v17[0]._anon_0 )
      operator delete(v17[0]._M_dataplus._M_p);
  }
};

// Line 45: range 000000000CF9C550-000000000CF9C771
mysqlpp::Connection *__fastcall mysqlpp::SQLStream::SQLStream(mysqlpp::SQLStream *this, const mysqlpp::SQLStream *a2)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r8
  const char *v5; // rcx
  char *v6; // rsi
  __int64 v7; // rdx
  std::forward_iterator_tag v8; // cl
  mysqlpp::Connection *result; // rax
  char *__beg; // [rsp+10h] [rbp-58h] BYREF
  __int64 v11; // [rsp+18h] [rbp-50h]
  char v12[72]; // [rsp+20h] [rbp-48h] BYREF

  std::ios_base::ios_base((std::ios_base *)this->gap78);
  v12[0] = 0;
  *(_QWORD *)&this->gap78[216] = 0LL;
  __beg = v12;
  *(_QWORD *)this->gap78 = (char *)&`vtable for'std::ios + 16;
  *(_WORD *)&this->gap78[224] = 0;
  v3 = *(_QWORD *)&a2->baseclass_0[48];
  *(_QWORD *)&this->gap78[232] = 0LL;
  *(_QWORD *)&this->gap78[240] = 0LL;
  *(_QWORD *)&this->gap78[248] = 0LL;
  *(_QWORD *)&this->gap78[256] = 0LL;
  v11 = 0LL;
  if ( v3 )
  {
    v4 = *(_QWORD *)&a2->baseclass_0[32];
    v5 = *(const char **)&a2->baseclass_0[40];
    if ( v3 > v4 )
      std::string::_M_replace(&__beg, 0LL, 0LL, v5, v3 - (_QWORD)v5);
    else
      std::string::_M_replace(&__beg, 0LL, 0LL, v5, v4 - (_QWORD)v5);
  }
  else
  {
    std::string::_M_assign(&__beg, &a2->baseclass_0[80]);
  }
  *(_QWORD *)this->baseclass_0 = &unk_1EB1BE90;
  *(_QWORD *)this->gap78 = (char *)&unk_1EB1BE90 + 40;
  std::ios::init(this->gap78, 0LL);
  *(_QWORD *)&this->baseclass_0[16] = 0LL;
  *(_QWORD *)&this->baseclass_0[24] = 0LL;
  *(_QWORD *)this->baseclass_0 = &unk_1EB1BEE0;
  *(_QWORD *)this->gap78 = (char *)&unk_1EB1BEE0 + 40;
  *(_QWORD *)&this->baseclass_0[32] = 0LL;
  *(_QWORD *)&this->baseclass_0[40] = 0LL;
  *(_QWORD *)&this->baseclass_0[8] = (char *)&`vtable for'std::streambuf + 16;
  *(_QWORD *)&this->baseclass_0[48] = 0LL;
  *(_QWORD *)&this->baseclass_0[56] = 0LL;
  std::locale::locale((std::locale *)&this->baseclass_0[64]);
  v6 = __beg;
  v7 = v11;
  *(_DWORD *)&this->baseclass_0[72] = 0;
  *(_QWORD *)&this->baseclass_0[8] = (char *)&`vtable for'std::stringbuf + 16;
  *(_QWORD *)&this->baseclass_0[80] = &this->baseclass_0[96];
  std::string::_M_construct<char const*>((std::string *const)&this->baseclass_0[80], v6, &v6[v7], v8);
  *(_DWORD *)&this->baseclass_0[72] = 16;
  std::stringbuf::_M_sync(&this->baseclass_0[8], *(_QWORD *)&this->baseclass_0[80], 0LL, 0LL);
  std::ios::init(&this->baseclass_0[*(_QWORD *)(*(_QWORD *)this->baseclass_0 - 24LL)], &this->baseclass_0[8]);
  if ( __beg != v12 )
    operator delete(__beg);
  *(_QWORD *)this->gap78 = (char *)&`vtable for'mysqlpp::SQLStream + 64;
  result = a2->conn_;
  *(_QWORD *)this->baseclass_0 = (char *)&`vtable for'mysqlpp::SQLStream + 24;
  this->conn_ = result;
  return result;
};

// Line 45: range 000000000CF9C900-000000000CF9CAC9
mysqlpp::Connection *__fastcall mysqlpp::SQLStream::SQLStream(
        mysqlpp::SQLStream *this,
        const mysqlpp::SQLStream *a2,
        _QWORD *a3)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r8
  const char *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int8 *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  char *v14; // rsi
  __int64 v15; // rdx
  std::forward_iterator_tag v16; // cl
  __int64 v17; // rax
  __int64 v18; // rdx
  mysqlpp::Connection *result; // rax
  char *__beg; // [rsp+10h] [rbp-58h] BYREF
  __int64 v21; // [rsp+18h] [rbp-50h]
  char v22[72]; // [rsp+20h] [rbp-48h] BYREF

  v6 = a3[6];
  v22[0] = 0;
  __beg = v22;
  v21 = 0LL;
  if ( v6 )
  {
    v7 = a3[4];
    v8 = (const char *)a3[5];
    if ( v6 > v7 )
      std::string::_M_replace(&__beg, 0LL, 0LL, v8, v6 - (_QWORD)v8);
    else
      std::string::_M_replace(&__beg, 0LL, 0LL, v8, v7 - (_QWORD)v8);
  }
  else
  {
    std::string::_M_assign(&__beg, a3 + 10);
  }
  v9 = *(_QWORD *)&a2->baseclass_0[16];
  v10 = *(_QWORD *)(v9 - 24);
  *(_QWORD *)this->baseclass_0 = v9;
  v11 = &this->baseclass_0[v10];
  *(_QWORD *)v11 = *(_QWORD *)&a2->baseclass_0[24];
  std::ios::init(v11, 0LL);
  v12 = *(_QWORD *)&a2->baseclass_0[8];
  v13 = *(_QWORD *)&a2->baseclass_0[32];
  *(_QWORD *)this->baseclass_0 = v12;
  *(_QWORD *)&this->baseclass_0[*(_QWORD *)(v12 - 24)] = v13;
  *(_QWORD *)&this->baseclass_0[16] = 0LL;
  *(_QWORD *)&this->baseclass_0[24] = 0LL;
  *(_QWORD *)&this->baseclass_0[8] = (char *)&`vtable for'std::streambuf + 16;
  *(_QWORD *)&this->baseclass_0[32] = 0LL;
  *(_QWORD *)&this->baseclass_0[40] = 0LL;
  *(_QWORD *)&this->baseclass_0[48] = 0LL;
  *(_QWORD *)&this->baseclass_0[56] = 0LL;
  std::locale::locale((std::locale *)&this->baseclass_0[64]);
  v14 = __beg;
  v15 = v21;
  *(_DWORD *)&this->baseclass_0[72] = 0;
  *(_QWORD *)&this->baseclass_0[8] = (char *)&`vtable for'std::stringbuf + 16;
  *(_QWORD *)&this->baseclass_0[80] = &this->baseclass_0[96];
  std::string::_M_construct<char const*>((std::string *const)&this->baseclass_0[80], v14, &v14[v15], v16);
  *(_DWORD *)&this->baseclass_0[72] = 16;
  std::stringbuf::_M_sync(&this->baseclass_0[8], *(_QWORD *)&this->baseclass_0[80], 0LL, 0LL);
  std::ios::init(&this->baseclass_0[*(_QWORD *)(*(_QWORD *)this->baseclass_0 - 24LL)], &this->baseclass_0[8]);
  if ( __beg != v22 )
    operator delete(__beg);
  v17 = *(_QWORD *)a2->baseclass_0;
  v18 = *(_QWORD *)&a2->baseclass_0[40];
  *(_QWORD *)this->baseclass_0 = *(_QWORD *)a2->baseclass_0;
  *(_QWORD *)&this->baseclass_0[*(_QWORD *)(v17 - 24)] = v18;
  result = (mysqlpp::Connection *)a3[14];
  this->conn_ = result;
  return result;
};

// Line 55: range 000000000CF9C1F0-000000000CF9C223
size_t __fastcall mysqlpp::SQLStream::escape_string(
        const mysqlpp::SQLStream *const this,
        std::string *ps,
        const char *original,
        size_t length)
{
  mysqlpp::Connection *conn; // rax

  conn = this->conn_;
  if ( conn && conn->copacetic_ )
    return mysqlpp::DBDriver::escape_string(conn->driver_, ps, original, length);
  else
    return mysqlpp::DBDriver::escape_string_no_conn(ps, original, length);
};

// Line 71: range 000000000CF9C230-000000000CF9C27B
size_t __fastcall mysqlpp::SQLStream::escape_string(
        const mysqlpp::SQLStream *const this,
        char *escaped,
        const char *original,
        size_t length)
{
  mysqlpp::Connection *conn; // rax
  mysqlpp::DBDriver *driver; // rax
  std::string::pointer M_p; // rdx

  conn = this->conn_;
  if ( !conn || !conn->copacetic_ )
    return mysql_escape_string(escaped, original, length);
  driver = conn->driver_;
  M_p = driver->error_message_._M_dataplus._M_p;
  driver->error_message_._M_string_length = 0LL;
  *M_p = 0;
  return mysql_real_escape_string(&driver->mysql_, escaped, original, length);
};

// Line 86: range 000000000CF9C280-000000000CF9C35E
__int64 __fastcall mysqlpp::SQLStream::operator=(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r8
  const char *v5; // rcx
  __int64 v6; // rcx
  void *v8; // [rsp+0h] [rbp-38h] BYREF
  __int64 v9; // [rsp+8h] [rbp-30h]
  char v10[40]; // [rsp+10h] [rbp-28h] BYREF

  v2 = a2[14];
  v10[0] = 0;
  *(_QWORD *)(a1 + 112) = v2;
  v3 = a2[6];
  v8 = v10;
  v9 = 0LL;
  if ( v3 )
  {
    v4 = a2[4];
    v5 = (const char *)a2[5];
    if ( v3 > v4 )
      std::string::_M_replace(&v8, 0LL, 0LL, v5, v3 - (_QWORD)v5);
    else
      std::string::_M_replace(&v8, 0LL, 0LL, v5, v4 - (_QWORD)v5);
  }
  else
  {
    std::string::_M_assign(&v8, a2 + 10);
  }
  std::string::_M_replace(a1 + 80, 0LL, *(_QWORD *)(a1 + 88), (const char *)v8, v9);
  v6 = 0LL;
  if ( (*(_BYTE *)(a1 + 72) & 3) != 0 )
    v6 = *(_QWORD *)(a1 + 88);
  std::stringbuf::_M_sync(a1 + 8, *(_QWORD *)(a1 + 80), 0LL, v6);
  if ( v8 != v10 )
    operator delete(v8);
  return a1;
};
