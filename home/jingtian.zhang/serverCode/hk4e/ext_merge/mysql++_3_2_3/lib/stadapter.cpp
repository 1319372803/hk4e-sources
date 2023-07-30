// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql++_3_2_3/lib/stadapter.cpp

// Line 58: range 000000000CF8C9D0-000000000CF8CA5F
_QWORD *__fastcall mysqlpp::SQLTypeAdapter::SQLTypeAdapter(__int64 a1, __int64 a2, char a3)
{
  unsigned __int8 v4; // r14
  mysqlpp::SQLBuffer *v5; // rax
  mysqlpp::SQLBuffer::size_type v6; // rdx
  const char *v7; // rsi
  mysqlpp::SQLBuffer *v8; // rbp
  _QWORD *result; // rax

  v4 = mysqlpp::mysql_type_info::type(MYSQL_TYPE_STRING, 0, 0);
  v5 = (mysqlpp::SQLBuffer *)operator new(0x18uLL);
  v6 = *(_QWORD *)(a2 + 8);
  v7 = *(const char **)a2;
  v5->data_ = 0LL;
  v8 = v5;
  v5->length_ = 0LL;
  v5->type_.num_ = v4;
  v5->is_null_ = 0;
  mysqlpp::SQLBuffer::replace_buffer(v5, v7, v6);
  *(_QWORD *)a1 = v8;
  *(_QWORD *)(a1 + 8) = 0LL;
  result = (_QWORD *)operator new(8uLL);
  *result = 1LL;
  *(_BYTE *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 8) = result;
  return result;
};

// Line 59: range 000000000C7384FA-000000000C73850A
void __fastcall __noreturn mysqlpp::SQLTypeAdapter::SQLTypeAdapter()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  operator delete(v0, 0x18uLL);
  _Unwind_Resume(v1);
};

// Line 65: range 000000000CF8CF70-000000000CF8D02F
_QWORD *__fastcall mysqlpp::SQLTypeAdapter::SQLTypeAdapter(__int64 a1, __int64 a2, char a3)
{
  const std::string *v4; // rbx
  const std::type_info *v5; // rsi
  unsigned __int8 v6; // r14
  mysqlpp::SQLBuffer *v7; // rbp
  char M_p; // al
  mysqlpp::SQLBuffer::size_type M_string_length; // rdx
  const char *v10; // rsi
  _QWORD *result; // rax

  v4 = (const std::string *)a2;
  if ( *(_BYTE *)(a2 + 32) )
    v5 = (const std::type_info *)&`typeinfo for'void;
  else
    v5 = (const std::type_info *)&`typeinfo for'std::string;
  v6 = *mysqlpp::mysql_ti_sql_type_info_lookup::operator[](&mysqlpp::mysql_type_info::lookups, v5);
  v7 = (mysqlpp::SQLBuffer *)operator new(0x18uLL);
  M_p = (char)v4[1]._M_dataplus._M_p;
  if ( M_p )
    v4 = &mysqlpp::null_str[abi:cxx11];
  M_string_length = v4->_M_string_length;
  v10 = v4->_M_dataplus._M_p;
  v7->type_.num_ = v6;
  v7->data_ = 0LL;
  v7->length_ = 0LL;
  v7->is_null_ = M_p;
  mysqlpp::SQLBuffer::replace_buffer(v7, v10, M_string_length);
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = 0LL;
  result = (_QWORD *)operator new(8uLL);
  *result = 1LL;
  *(_QWORD *)(a1 + 8) = result;
  *(_BYTE *)(a1 + 16) = a3;
  return result;
};

// Line 67: range 000000000C7386C4-000000000C7386D4
void __fastcall __noreturn mysqlpp::SQLTypeAdapter::SQLTypeAdapter()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  operator delete(v0, 0x18uLL);
  _Unwind_Resume(v1);
};

// Line 72: range 000000000CF8D040-000000000CF8D155
_QWORD *__fastcall mysqlpp::SQLTypeAdapter::SQLTypeAdapter(__int64 a1, __int64 a2, char a3)
{
  const char *M_p; // r15
  std::string::size_type M_string_length; // r14
  const std::type_info *v7; // rsi
  mysqlpp::SQLBuffer *v8; // rbp
  char v9; // al
  _QWORD *result; // rax
  unsigned __int8 v11; // [rsp+Fh] [rbp-39h]

  if ( *(_BYTE *)(a2 + 16) )
  {
    M_p = mysqlpp::null_str[abi:cxx11]._M_dataplus._M_p;
LABEL_3:
    M_string_length = mysqlpp::null_str[abi:cxx11]._M_string_length;
    v7 = (const std::type_info *)&`typeinfo for'void;
    goto LABEL_4;
  }
  M_p = mysqlpp::String::data((const mysqlpp::String *const)a2);
  if ( *(_BYTE *)(a2 + 16) )
    goto LABEL_3;
  M_string_length = mysqlpp::String::length((const mysqlpp::String *const)a2);
  if ( *(_BYTE *)(a2 + 16) )
    v7 = (const std::type_info *)&`typeinfo for'void;
  else
    v7 = (const std::type_info *)&`typeinfo for'mysqlpp::String;
LABEL_4:
  v11 = *mysqlpp::mysql_ti_sql_type_info_lookup::operator[](&mysqlpp::mysql_type_info::lookups, v7);
  v8 = (mysqlpp::SQLBuffer *)operator new(0x18uLL);
  v9 = *(_BYTE *)(a2 + 16);
  v8->type_.num_ = v11;
  v8->data_ = 0LL;
  v8->length_ = 0LL;
  v8->is_null_ = v9;
  mysqlpp::SQLBuffer::replace_buffer(v8, M_p, M_string_length);
  *(_QWORD *)a1 = v8;
  *(_QWORD *)(a1 + 8) = 0LL;
  result = (_QWORD *)operator new(8uLL);
  *result = 1LL;
  *(_BYTE *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 8) = result;
  return result;
};

// Line 82: range 000000000CF8CA70-000000000CF8CB05
size_t *__fastcall mysqlpp::SQLTypeAdapter::SQLTypeAdapter(mysqlpp::SQLTypeAdapter *this, const char *a2, bool a3)
{
  unsigned __int8 v4; // r14
  mysqlpp::SQLBuffer *v5; // rbp
  size_t v6; // rax
  size_t *result; // rax

  v4 = mysqlpp::mysql_type_info::type(MYSQL_TYPE_STRING, 0, 0);
  v5 = (mysqlpp::SQLBuffer *)operator new(0x18uLL);
  v6 = strlen(a2);
  v5->type_.num_ = v4;
  v5->data_ = 0LL;
  v5->length_ = 0LL;
  v5->is_null_ = 0;
  mysqlpp::SQLBuffer::replace_buffer(v5, a2, v6);
  this->buffer_.counted_ = v5;
  this->buffer_.refs_ = 0LL;
  result = (size_t *)operator new(8uLL);
  *result = 1LL;
  this->is_processed_ = a3;
  this->buffer_.refs_ = result;
  return result;
};

// Line 83: range 000000000C738532-000000000C738542
void __fastcall __noreturn mysqlpp::SQLTypeAdapter::SQLTypeAdapter()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  operator delete(v0, 0x18uLL);
  _Unwind_Resume(v1);
};

// Line 88: range 000000000CF8CB10-000000000CF8CBAB
size_t *__fastcall mysqlpp::SQLTypeAdapter::SQLTypeAdapter(
        mysqlpp::SQLTypeAdapter *this,
        const char *a2,
        int a3,
        bool a4)
{
  unsigned __int8 v6; // r15
  mysqlpp::SQLBuffer *v7; // rax
  mysqlpp::SQLBuffer *v8; // rbp
  size_t *result; // rax

  v6 = mysqlpp::mysql_type_info::type(MYSQL_TYPE_STRING, 0, 0);
  v7 = (mysqlpp::SQLBuffer *)operator new(0x18uLL);
  v7->data_ = 0LL;
  v8 = v7;
  v7->length_ = 0LL;
  v7->type_.num_ = v6;
  v7->is_null_ = 0;
  mysqlpp::SQLBuffer::replace_buffer(v7, a2, a3);
  this->buffer_.counted_ = v8;
  this->buffer_.refs_ = 0LL;
  result = (size_t *)operator new(8uLL);
  *result = 1LL;
  this->is_processed_ = a4;
  this->buffer_.refs_ = result;
  return result;
};

// Line 89: range 000000000C73856A-000000000C73857A
void __fastcall __noreturn mysqlpp::SQLTypeAdapter::SQLTypeAdapter()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  operator delete(v0, 0x18uLL);
  _Unwind_Resume(v1);
};

// Line 94: range 000000000CF8CEB0-000000000CF8CF6A
void __fastcall mysqlpp::SQLTypeAdapter::SQLTypeAdapter(mysqlpp::SQLTypeAdapter *this, char a2)
{
  unsigned __int8 v3; // r12
  mysqlpp::SQLBuffer *v4; // rax
  std::string::size_type M_string_length; // rdx
  mysqlpp::SQLBuffer *v6; // rbp
  const char *M_p; // rsi
  size_t *v8; // rax
  std::string *v9; // rdi
  char object[4]; // [rsp+Ch] [rbp-3Ch] BYREF
  std::string v11; // [rsp+10h] [rbp-38h] BYREF

  object[0] = a2;
  mysqlpp::stream2string<char>(&v11, object);
  v3 = mysqlpp::mysql_type_info::type(MYSQL_TYPE_STRING, 0, 0);
  v4 = (mysqlpp::SQLBuffer *)operator new(0x18uLL);
  v4->type_.num_ = v3;
  M_string_length = v11._M_string_length;
  v6 = v4;
  v4->data_ = 0LL;
  M_p = v11._M_dataplus._M_p;
  v4->length_ = 0LL;
  v4->is_null_ = 0;
  mysqlpp::SQLBuffer::replace_buffer(v4, M_p, M_string_length);
  this->buffer_.counted_ = v6;
  this->buffer_.refs_ = 0LL;
  v8 = (size_t *)operator new(8uLL);
  v9 = (std::string *)v11._M_dataplus._M_p;
  *v8 = 1LL;
  this->buffer_.refs_ = v8;
  if ( v9 != (std::string *)&v11._anon_0 )
    operator delete(v9);
  this->is_processed_ = 0;
};

// Line 101: range 000000000CF8DD40-000000000CF8DE57
void __fastcall mysqlpp::SQLTypeAdapter::SQLTypeAdapter(
        __int64 a1,
        mysqlpp::Null<char,mysqlpp::NullIsNull> a2,
        __int64 a3,
        std::forward_iterator_tag a4)
{
  const std::type_info *v5; // rsi
  unsigned __int8 v6; // r13
  mysqlpp::SQLBuffer *v7; // rax
  mysqlpp::SQLBuffer *v8; // rbp
  std::string::size_type M_string_length; // rdx
  const char *M_p; // rsi
  _QWORD *v11; // rax
  std::string *v12; // rdi
  mysqlpp::Null<char,mysqlpp::NullIsNull> object; // [rsp+Eh] [rbp-4Ah] BYREF
  std::string v14; // [rsp+10h] [rbp-48h] BYREF

  object = a2;
  if ( HIBYTE(*(unsigned __int16 *)&a2) )
  {
    v14._M_dataplus._M_p = v14._anon_0._M_local_buf;
    std::string::_M_construct<char *>(
      &v14,
      mysqlpp::null_str[abi:cxx11]._M_dataplus._M_p,
      &mysqlpp::null_str[abi:cxx11]._M_dataplus._M_p[mysqlpp::null_str[abi:cxx11]._M_string_length],
      a4);
  }
  else
  {
    mysqlpp::stream2string<mysqlpp::Null<char,mysqlpp::NullIsNull>>(&v14, &object);
  }
  if ( object.is_null )
    v5 = (const std::type_info *)&`typeinfo for'void;
  else
    v5 = (const std::type_info *)&`typeinfo for'char;
  v6 = *mysqlpp::mysql_ti_sql_type_info_lookup::operator[](&mysqlpp::mysql_type_info::lookups, v5);
  v7 = (mysqlpp::SQLBuffer *)operator new(0x18uLL);
  v7->data_ = 0LL;
  v8 = v7;
  M_string_length = v14._M_string_length;
  v7->length_ = 0LL;
  M_p = v14._M_dataplus._M_p;
  v7->type_.num_ = v6;
  v7->is_null_ = object.is_null;
  mysqlpp::SQLBuffer::replace_buffer(v7, M_p, M_string_length);
  *(_QWORD *)a1 = v8;
  *(_QWORD *)(a1 + 8) = 0LL;
  v11 = (_QWORD *)operator new(8uLL);
  v12 = (std::string *)v14._M_dataplus._M_p;
  *v11 = 1LL;
  *(_QWORD *)(a1 + 8) = v11;
  if ( v12 != (std::string *)&v14._anon_0 )
    operator delete(v12);
  *(_BYTE *)(a1 + 16) = 0;
};

// Line 116: range 000000000CF8DE60-000000000CF8DF77
void __fastcall mysqlpp::SQLTypeAdapter::SQLTypeAdapter(
        __int64 a1,
        mysqlpp::Null<mysqlpp::tiny_int<signed char>,mysqlpp::NullIsNull> a2,
        __int64 a3,
        std::forward_iterator_tag a4)
{
  const std::type_info *v5; // rsi
  unsigned __int8 v6; // r13
  mysqlpp::SQLBuffer *v7; // rax
  mysqlpp::SQLBuffer *v8; // rbp
  std::string::size_type M_string_length; // rdx
  const char *M_p; // rsi
  _QWORD *v11; // rax
  std::string *v12; // rdi
  mysqlpp::Null<mysqlpp::tiny_int<signed char>,mysqlpp::NullIsNull> object; // [rsp+Eh] [rbp-4Ah] BYREF
  std::string v14; // [rsp+10h] [rbp-48h] BYREF

  object = a2;
  if ( HIBYTE(*(unsigned __int16 *)&a2) )
  {
    v14._M_dataplus._M_p = v14._anon_0._M_local_buf;
    std::string::_M_construct<char *>(
      &v14,
      mysqlpp::null_str[abi:cxx11]._M_dataplus._M_p,
      &mysqlpp::null_str[abi:cxx11]._M_dataplus._M_p[mysqlpp::null_str[abi:cxx11]._M_string_length],
      a4);
  }
  else
  {
    mysqlpp::stream2string<mysqlpp::Null<mysqlpp::tiny_int<signed char>,mysqlpp::NullIsNull>>(&v14, &object);
  }
  if ( object.is_null )
    v5 = (const std::type_info *)&`typeinfo for'void;
  else
    v5 = (const std::type_info *)&`typeinfo for'mysqlpp::tiny_int<signed char>;
  v6 = *mysqlpp::mysql_ti_sql_type_info_lookup::operator[](&mysqlpp::mysql_type_info::lookups, v5);
  v7 = (mysqlpp::SQLBuffer *)operator new(0x18uLL);
  v7->data_ = 0LL;
  v8 = v7;
  M_string_length = v14._M_string_length;
  v7->length_ = 0LL;
  M_p = v14._M_dataplus._M_p;
  v7->type_.num_ = v6;
  v7->is_null_ = object.is_null;
  mysqlpp::SQLBuffer::replace_buffer(v7, M_p, M_string_length);
  *(_QWORD *)a1 = v8;
  *(_QWORD *)(a1 + 8) = 0LL;
  v11 = (_QWORD *)operator new(8uLL);
  v12 = (std::string *)v14._M_dataplus._M_p;
  *v11 = 1LL;
  *(_QWORD *)(a1 + 8) = v11;
  if ( v12 != (std::string *)&v14._anon_0 )
    operator delete(v12);
  *(_BYTE *)(a1 + 16) = 0;
};

// Line 124: range 000000000CF8D3B0-000000000CF8D470
void __fastcall mysqlpp::SQLTypeAdapter::SQLTypeAdapter(__int64 a1, mysqlpp::tiny_int<unsigned char>::value_type a2)
{
  unsigned __int8 v3; // r12
  mysqlpp::SQLBuffer *v4; // rax
  std::string::size_type M_string_length; // rdx
  mysqlpp::SQLBuffer *v6; // rbp
  const char *M_p; // rsi
  _QWORD *v8; // rax
  std::string *v9; // rdi
  mysqlpp::tiny_int<unsigned char> object; // [rsp+Fh] [rbp-39h] BYREF
  std::string v11; // [rsp+10h] [rbp-38h] BYREF

  object.value_ = a2;
  mysqlpp::stream2string<mysqlpp::tiny_int<unsigned char>>(&v11, &object);
  v3 = *mysqlpp::mysql_ti_sql_type_info_lookup::operator[](
          &mysqlpp::mysql_type_info::lookups,
          (const std::type_info *)&`typeinfo for'mysqlpp::tiny_int<unsigned char>);
  v4 = (mysqlpp::SQLBuffer *)operator new(0x18uLL);
  v4->type_.num_ = v3;
  M_string_length = v11._M_string_length;
  v6 = v4;
  v4->data_ = 0LL;
  M_p = v11._M_dataplus._M_p;
  v4->length_ = 0LL;
  v4->is_null_ = 0;
  mysqlpp::SQLBuffer::replace_buffer(v4, M_p, M_string_length);
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(a1 + 8) = 0LL;
  v8 = (_QWORD *)operator new(8uLL);
  v9 = (std::string *)v11._M_dataplus._M_p;
  *v8 = 1LL;
  *(_QWORD *)(a1 + 8) = v8;
  if ( v9 != (std::string *)&v11._anon_0 )
    operator delete(v9);
  *(_BYTE *)(a1 + 16) = 0;
};

// Line 131: range 000000000CF8DF80-000000000CF8E097
void __fastcall mysqlpp::SQLTypeAdapter::SQLTypeAdapter(
        __int64 a1,
        mysqlpp::Null<mysqlpp::tiny_int<unsigned char>,mysqlpp::NullIsNull> a2,
        __int64 a3,
        std::forward_iterator_tag a4)
{
  const std::type_info *v5; // rsi
  unsigned __int8 v6; // r13
  mysqlpp::SQLBuffer *v7; // rax
  mysqlpp::SQLBuffer *v8; // rbp
  std::string::size_type M_string_length; // rdx
  const char *M_p; // rsi
  _QWORD *v11; // rax
  std::string *v12; // rdi
  mysqlpp::Null<mysqlpp::tiny_int<unsigned char>,mysqlpp::NullIsNull> object; // [rsp+Eh] [rbp-4Ah] BYREF
  std::string v14; // [rsp+10h] [rbp-48h] BYREF

  object = a2;
  if ( HIBYTE(*(unsigned __int16 *)&a2) )
  {
    v14._M_dataplus._M_p = v14._anon_0._M_local_buf;
    std::string::_M_construct<char *>(
      &v14,
      mysqlpp::null_str[abi:cxx11]._M_dataplus._M_p,
      &mysqlpp::null_str[abi:cxx11]._M_dataplus._M_p[mysqlpp::null_str[abi:cxx11]._M_string_length],
      a4);
  }
  else
  {
    mysqlpp::stream2string<mysqlpp::Null<mysqlpp::tiny_int<unsigned char>,mysqlpp::NullIsNull>>(&v14, &object);
  }
  if ( object.is_null )
    v5 = (const std::type_info *)&`typeinfo for'void;
  else
    v5 = (const std::type_info *)&`typeinfo for'mysqlpp::tiny_int<unsigned char>;
  v6 = *mysqlpp::mysql_ti_sql_type_info_lookup::operator[](&mysqlpp::mysql_type_info::lookups, v5);
  v7 = (mysqlpp::SQLBuffer *)operator new(0x18uLL);
  v7->data_ = 0LL;
  v8 = v7;
  M_string_length = v14._M_string_length;
  v7->length_ = 0LL;
  M_p = v14._M_dataplus._M_p;
  v7->type_.num_ = v6;
  v7->is_null_ = object.is_null;
  mysqlpp::SQLBuffer::replace_buffer(v7, M_p, M_string_length);
  *(_QWORD *)a1 = v8;
  *(_QWORD *)(a1 + 8) = 0LL;
  v11 = (_QWORD *)operator new(8uLL);
  v12 = (std::string *)v14._M_dataplus._M_p;
  *v11 = 1LL;
  *(_QWORD *)(a1 + 8) = v11;
  if ( v12 != (std::string *)&v14._anon_0 )
    operator delete(v12);
  *(_BYTE *)(a1 + 16) = 0;
};

// Line 139: range 000000000CF8D480-000000000CF8D540
void __fastcall mysqlpp::SQLTypeAdapter::SQLTypeAdapter(mysqlpp::SQLTypeAdapter *this, __int16 a2)
{
  unsigned __int8 v3; // r12
  mysqlpp::SQLBuffer *v4; // rax
  std::string::size_type M_string_length; // rdx
  mysqlpp::SQLBuffer *v6; // rbp
  const char *M_p; // rsi
  size_t *v8; // rax
  std::string *v9; // rdi
  __int16 object; // [rsp+Ch] [rbp-3Ch] BYREF
  std::string v11; // [rsp+10h] [rbp-38h] BYREF

  object = a2;
  mysqlpp::stream2string<short>(&v11, &object);
  v3 = *mysqlpp::mysql_ti_sql_type_info_lookup::operator[](
          &mysqlpp::mysql_type_info::lookups,
          (const std::type_info *)&`typeinfo for'short);
  v4 = (mysqlpp::SQLBuffer *)operator new(0x18uLL);
  v4->type_.num_ = v3;
  M_string_length = v11._M_string_length;
  v6 = v4;
  v4->data_ = 0LL;
  M_p = v11._M_dataplus._M_p;
  v4->length_ = 0LL;
  v4->is_null_ = 0;
  mysqlpp::SQLBuffer::replace_buffer(v4, M_p, M_string_length);
  this->buffer_.counted_ = v6;
  this->buffer_.refs_ = 0LL;
  v8 = (size_t *)operator new(8uLL);
  v9 = (std::string *)v11._M_dataplus._M_p;
  *v8 = 1LL;
  this->buffer_.refs_ = v8;
  if ( v9 != (std::string *)&v11._anon_0 )
    operator delete(v9);
  this->is_processed_ = 0;
};

// Line 146: range 000000000CF8E0A0-000000000CF8E1B7
void __fastcall mysqlpp::SQLTypeAdapter::SQLTypeAdapter(
        __int64 a1,
        mysqlpp::Null<short int,mysqlpp::NullIsNull> a2,
        __int64 a3,
        std::forward_iterator_tag a4)
{
  const std::type_info *v5; // rsi
  unsigned __int8 v6; // r13
  mysqlpp::SQLBuffer *v7; // rax
  mysqlpp::SQLBuffer *v8; // rbp
  std::string::size_type M_string_length; // rdx
  const char *M_p; // rsi
  _QWORD *v11; // rax
  std::string *v12; // rdi
  mysqlpp::Null<short int,mysqlpp::NullIsNull> object; // [rsp+Ch] [rbp-4Ch] BYREF
  std::string v14; // [rsp+10h] [rbp-48h] BYREF

  object = a2;
  if ( (*(_DWORD *)&a2 & 0xFF0000) != 0 )
  {
    v14._M_dataplus._M_p = v14._anon_0._M_local_buf;
    std::string::_M_construct<char *>(
      &v14,
      mysqlpp::null_str[abi:cxx11]._M_dataplus._M_p,
      &mysqlpp::null_str[abi:cxx11]._M_dataplus._M_p[mysqlpp::null_str[abi:cxx11]._M_string_length],
      a4);
  }
  else
  {
    mysqlpp::stream2string<mysqlpp::Null<short,mysqlpp::NullIsNull>>(&v14, &object);
  }
  if ( object.is_null )
    v5 = (const std::type_info *)&`typeinfo for'void;
  else
    v5 = (const std::type_info *)&`typeinfo for'short;
  v6 = *mysqlpp::mysql_ti_sql_type_info_lookup::operator[](&mysqlpp::mysql_type_info::lookups, v5);
  v7 = (mysqlpp::SQLBuffer *)operator new(0x18uLL);
  v7->data_ = 0LL;
  v8 = v7;
  M_string_length = v14._M_string_length;
  v7->length_ = 0LL;
  M_p = v14._M_dataplus._M_p;
  v7->type_.num_ = v6;
  v7->is_null_ = object.is_null;
  mysqlpp::SQLBuffer::replace_buffer(v7, M_p, M_string_length);
  *(_QWORD *)a1 = v8;
  *(_QWORD *)(a1 + 8) = 0LL;
  v11 = (_QWORD *)operator new(8uLL);
  v12 = (std::string *)v14._M_dataplus._M_p;
  *v11 = 1LL;
  *(_QWORD *)(a1 + 8) = v11;
  if ( v12 != (std::string *)&v14._anon_0 )
    operator delete(v12);
  *(_BYTE *)(a1 + 16) = 0;
};

// Line 154: range 000000000CF8D550-000000000CF8D610
void __fastcall mysqlpp::SQLTypeAdapter::SQLTypeAdapter(mysqlpp::SQLTypeAdapter *this, unsigned __int16 a2)
{
  unsigned __int8 v3; // r12
  mysqlpp::SQLBuffer *v4; // rax
  std::string::size_type M_string_length; // rdx
  mysqlpp::SQLBuffer *v6; // rbp
  const char *M_p; // rsi
  size_t *v8; // rax
  std::string *v9; // rdi
  unsigned __int16 object; // [rsp+Ch] [rbp-3Ch] BYREF
  std::string v11; // [rsp+10h] [rbp-38h] BYREF

  object = a2;
  mysqlpp::stream2string<unsigned short>(&v11, &object);
  v3 = *mysqlpp::mysql_ti_sql_type_info_lookup::operator[](
          &mysqlpp::mysql_type_info::lookups,
          (const std::type_info *)&`typeinfo for'unsigned short);
  v4 = (mysqlpp::SQLBuffer *)operator new(0x18uLL);
  v4->type_.num_ = v3;
  M_string_length = v11._M_string_length;
  v6 = v4;
  v4->data_ = 0LL;
  M_p = v11._M_dataplus._M_p;
  v4->length_ = 0LL;
  v4->is_null_ = 0;
  mysqlpp::SQLBuffer::replace_buffer(v4, M_p, M_string_length);
  this->buffer_.counted_ = v6;
  this->buffer_.refs_ = 0LL;
  v8 = (size_t *)operator new(8uLL);
  v9 = (std::string *)v11._M_dataplus._M_p;
  *v8 = 1LL;
  this->buffer_.refs_ = v8;
  if ( v9 != (std::string *)&v11._anon_0 )
    operator delete(v9);
  this->is_processed_ = 0;
};

// Line 161: range 000000000CF8E1C0-000000000CF8E2D7
void __fastcall mysqlpp::SQLTypeAdapter::SQLTypeAdapter(
        __int64 a1,
        mysqlpp::Null<short unsigned int,mysqlpp::NullIsNull> a2,
        __int64 a3,
        std::forward_iterator_tag a4)
{
  const std::type_info *v5; // rsi
  unsigned __int8 v6; // r13
  mysqlpp::SQLBuffer *v7; // rax
  mysqlpp::SQLBuffer *v8; // rbp
  std::string::size_type M_string_length; // rdx
  const char *M_p; // rsi
  _QWORD *v11; // rax
  std::string *v12; // rdi
  mysqlpp::Null<short unsigned int,mysqlpp::NullIsNull> object; // [rsp+Ch] [rbp-4Ch] BYREF
  std::string v14; // [rsp+10h] [rbp-48h] BYREF

  object = a2;
  if ( (*(_DWORD *)&a2 & 0xFF0000) != 0 )
  {
    v14._M_dataplus._M_p = v14._anon_0._M_local_buf;
    std::string::_M_construct<char *>(
      &v14,
      mysqlpp::null_str[abi:cxx11]._M_dataplus._M_p,
      &mysqlpp::null_str[abi:cxx11]._M_dataplus._M_p[mysqlpp::null_str[abi:cxx11]._M_string_length],
      a4);
  }
  else
  {
    mysqlpp::stream2string<mysqlpp::Null<unsigned short,mysqlpp::NullIsNull>>(&v14, &object);
  }
  if ( object.is_null )
    v5 = (const std::type_info *)&`typeinfo for'void;
  else
    v5 = (const std::type_info *)&`typeinfo for'unsigned short;
  v6 = *mysqlpp::mysql_ti_sql_type_info_lookup::operator[](&mysqlpp::mysql_type_info::lookups, v5);
  v7 = (mysqlpp::SQLBuffer *)operator new(0x18uLL);
  v7->data_ = 0LL;
  v8 = v7;
  M_string_length = v14._M_string_length;
  v7->length_ = 0LL;
  M_p = v14._M_dataplus._M_p;
  v7->type_.num_ = v6;
  v7->is_null_ = object.is_null;
  mysqlpp::SQLBuffer::replace_buffer(v7, M_p, M_string_length);
  *(_QWORD *)a1 = v8;
  *(_QWORD *)(a1 + 8) = 0LL;
  v11 = (_QWORD *)operator new(8uLL);
  v12 = (std::string *)v14._M_dataplus._M_p;
  *v11 = 1LL;
  *(_QWORD *)(a1 + 8) = v11;
  if ( v12 != (std::string *)&v14._anon_0 )
    operator delete(v12);
  *(_BYTE *)(a1 + 16) = 0;
};

// Line 169: range 000000000CF8D620-000000000CF8D6DF
void __fastcall mysqlpp::SQLTypeAdapter::SQLTypeAdapter(mysqlpp::SQLTypeAdapter *this, int a2)
{
  unsigned __int8 v3; // r12
  mysqlpp::SQLBuffer *v4; // rax
  std::string::size_type M_string_length; // rdx
  mysqlpp::SQLBuffer *v6; // rbp
  const char *M_p; // rsi
  size_t *v8; // rax
  std::string *v9; // rdi
  int object; // [rsp+Ch] [rbp-3Ch] BYREF
  std::string v11; // [rsp+10h] [rbp-38h] BYREF

  object = a2;
  mysqlpp::stream2string<int>(&v11, &object);
  v3 = *mysqlpp::mysql_ti_sql_type_info_lookup::operator[](
          &mysqlpp::mysql_type_info::lookups,
          (const std::type_info *)&`typeinfo for'int);
  v4 = (mysqlpp::SQLBuffer *)operator new(0x18uLL);
  v4->type_.num_ = v3;
  M_string_length = v11._M_string_length;
  v6 = v4;
  v4->data_ = 0LL;
  M_p = v11._M_dataplus._M_p;
  v4->length_ = 0LL;
  v4->is_null_ = 0;
  mysqlpp::SQLBuffer::replace_buffer(v4, M_p, M_string_length);
  this->buffer_.counted_ = v6;
  this->buffer_.refs_ = 0LL;
  v8 = (size_t *)operator new(8uLL);
  v9 = (std::string *)v11._M_dataplus._M_p;
  *v8 = 1LL;
  this->buffer_.refs_ = v8;
  if ( v9 != (std::string *)&v11._anon_0 )
    operator delete(v9);
  this->is_processed_ = 0;
};

// Line 176: range 000000000CF8E2E0-000000000CF8E3F7
void __fastcall mysqlpp::SQLTypeAdapter::SQLTypeAdapter(
        __int64 a1,
        mysqlpp::Null<int,mysqlpp::NullIsNull> a2,
        __int64 a3,
        std::forward_iterator_tag a4)
{
  const std::type_info *v5; // rsi
  unsigned __int8 v6; // r13
  mysqlpp::SQLBuffer *v7; // rax
  mysqlpp::SQLBuffer *v8; // rbp
  std::string::size_type M_string_length; // rdx
  const char *M_p; // rsi
  _QWORD *v11; // rax
  std::string *v12; // rdi
  mysqlpp::Null<int,mysqlpp::NullIsNull> object; // [rsp+8h] [rbp-50h] BYREF
  std::string v14; // [rsp+10h] [rbp-48h] BYREF

  object = a2;
  if ( a2.is_null )
  {
    v14._M_dataplus._M_p = v14._anon_0._M_local_buf;
    std::string::_M_construct<char *>(
      &v14,
      mysqlpp::null_str[abi:cxx11]._M_dataplus._M_p,
      &mysqlpp::null_str[abi:cxx11]._M_dataplus._M_p[mysqlpp::null_str[abi:cxx11]._M_string_length],
      a4);
  }
  else
  {
    mysqlpp::stream2string<mysqlpp::Null<int,mysqlpp::NullIsNull>>(&v14, &object);
  }
  if ( object.is_null )
    v5 = (const std::type_info *)&`typeinfo for'void;
  else
    v5 = (const std::type_info *)&`typeinfo for'int;
  v6 = *mysqlpp::mysql_ti_sql_type_info_lookup::operator[](&mysqlpp::mysql_type_info::lookups, v5);
  v7 = (mysqlpp::SQLBuffer *)operator new(0x18uLL);
  v7->data_ = 0LL;
  v8 = v7;
  M_string_length = v14._M_string_length;
  v7->length_ = 0LL;
  M_p = v14._M_dataplus._M_p;
  v7->type_.num_ = v6;
  v7->is_null_ = object.is_null;
  mysqlpp::SQLBuffer::replace_buffer(v7, M_p, M_string_length);
  *(_QWORD *)a1 = v8;
  *(_QWORD *)(a1 + 8) = 0LL;
  v11 = (_QWORD *)operator new(8uLL);
  v12 = (std::string *)v14._M_dataplus._M_p;
  *v11 = 1LL;
  *(_QWORD *)(a1 + 8) = v11;
  if ( v12 != (std::string *)&v14._anon_0 )
    operator delete(v12);
  *(_BYTE *)(a1 + 16) = 0;
};

// Line 184: range 000000000CF8D6F0-000000000CF8D7AF
void __fastcall mysqlpp::SQLTypeAdapter::SQLTypeAdapter(mysqlpp::SQLTypeAdapter *this, unsigned int a2)
{
  unsigned __int8 v3; // r12
  mysqlpp::SQLBuffer *v4; // rax
  std::string::size_type M_string_length; // rdx
  mysqlpp::SQLBuffer *v6; // rbp
  const char *M_p; // rsi
  size_t *v8; // rax
  std::string *v9; // rdi
  unsigned int object; // [rsp+Ch] [rbp-3Ch] BYREF
  std::string v11; // [rsp+10h] [rbp-38h] BYREF

  object = a2;
  mysqlpp::stream2string<unsigned int>(&v11, &object);
  v3 = *mysqlpp::mysql_ti_sql_type_info_lookup::operator[](
          &mysqlpp::mysql_type_info::lookups,
          (const std::type_info *)&`typeinfo for'unsigned int);
  v4 = (mysqlpp::SQLBuffer *)operator new(0x18uLL);
  v4->type_.num_ = v3;
  M_string_length = v11._M_string_length;
  v6 = v4;
  v4->data_ = 0LL;
  M_p = v11._M_dataplus._M_p;
  v4->length_ = 0LL;
  v4->is_null_ = 0;
  mysqlpp::SQLBuffer::replace_buffer(v4, M_p, M_string_length);
  this->buffer_.counted_ = v6;
  this->buffer_.refs_ = 0LL;
  v8 = (size_t *)operator new(8uLL);
  v9 = (std::string *)v11._M_dataplus._M_p;
  *v8 = 1LL;
  this->buffer_.refs_ = v8;
  if ( v9 != (std::string *)&v11._anon_0 )
    operator delete(v9);
  this->is_processed_ = 0;
};

// Line 191: range 000000000CF8E400-000000000CF8E517
void __fastcall mysqlpp::SQLTypeAdapter::SQLTypeAdapter(
        __int64 a1,
        mysqlpp::Null<unsigned int,mysqlpp::NullIsNull> a2,
        __int64 a3,
        std::forward_iterator_tag a4)
{
  const std::type_info *v5; // rsi
  unsigned __int8 v6; // r13
  mysqlpp::SQLBuffer *v7; // rax
  mysqlpp::SQLBuffer *v8; // rbp
  std::string::size_type M_string_length; // rdx
  const char *M_p; // rsi
  _QWORD *v11; // rax
  std::string *v12; // rdi
  mysqlpp::Null<unsigned int,mysqlpp::NullIsNull> object; // [rsp+8h] [rbp-50h] BYREF
  std::string v14; // [rsp+10h] [rbp-48h] BYREF

  object = a2;
  if ( a2.is_null )
  {
    v14._M_dataplus._M_p = v14._anon_0._M_local_buf;
    std::string::_M_construct<char *>(
      &v14,
      mysqlpp::null_str[abi:cxx11]._M_dataplus._M_p,
      &mysqlpp::null_str[abi:cxx11]._M_dataplus._M_p[mysqlpp::null_str[abi:cxx11]._M_string_length],
      a4);
  }
  else
  {
    mysqlpp::stream2string<mysqlpp::Null<unsigned int,mysqlpp::NullIsNull>>(&v14, &object);
  }
  if ( object.is_null )
    v5 = (const std::type_info *)&`typeinfo for'void;
  else
    v5 = (const std::type_info *)&`typeinfo for'unsigned int;
  v6 = *mysqlpp::mysql_ti_sql_type_info_lookup::operator[](&mysqlpp::mysql_type_info::lookups, v5);
  v7 = (mysqlpp::SQLBuffer *)operator new(0x18uLL);
  v7->data_ = 0LL;
  v8 = v7;
  M_string_length = v14._M_string_length;
  v7->length_ = 0LL;
  M_p = v14._M_dataplus._M_p;
  v7->type_.num_ = v6;
  v7->is_null_ = object.is_null;
  mysqlpp::SQLBuffer::replace_buffer(v7, M_p, M_string_length);
  *(_QWORD *)a1 = v8;
  *(_QWORD *)(a1 + 8) = 0LL;
  v11 = (_QWORD *)operator new(8uLL);
  v12 = (std::string *)v14._M_dataplus._M_p;
  *v11 = 1LL;
  *(_QWORD *)(a1 + 8) = v11;
  if ( v12 != (std::string *)&v14._anon_0 )
    operator delete(v12);
  *(_BYTE *)(a1 + 16) = 0;
};

// Line 199: range 000000000CF8D7C0-000000000CF8D880
void __fastcall mysqlpp::SQLTypeAdapter::SQLTypeAdapter(mysqlpp::SQLTypeAdapter *this, __int64 a2)
{
  unsigned __int8 v3; // r12
  mysqlpp::SQLBuffer *v4; // rax
  std::string::size_type M_string_length; // rdx
  mysqlpp::SQLBuffer *v6; // rbp
  const char *M_p; // rsi
  size_t *v8; // rax
  std::string *v9; // rdi
  __int64 object; // [rsp+8h] [rbp-40h] BYREF
  std::string v11; // [rsp+10h] [rbp-38h] BYREF

  object = a2;
  mysqlpp::stream2string<long>(&v11, &object);
  v3 = *mysqlpp::mysql_ti_sql_type_info_lookup::operator[](
          &mysqlpp::mysql_type_info::lookups,
          (const std::type_info *)&`typeinfo for'long);
  v4 = (mysqlpp::SQLBuffer *)operator new(0x18uLL);
  v4->type_.num_ = v3;
  M_string_length = v11._M_string_length;
  v6 = v4;
  v4->data_ = 0LL;
  M_p = v11._M_dataplus._M_p;
  v4->length_ = 0LL;
  v4->is_null_ = 0;
  mysqlpp::SQLBuffer::replace_buffer(v4, M_p, M_string_length);
  this->buffer_.counted_ = v6;
  this->buffer_.refs_ = 0LL;
  v8 = (size_t *)operator new(8uLL);
  v9 = (std::string *)v11._M_dataplus._M_p;
  *v8 = 1LL;
  this->buffer_.refs_ = v8;
  if ( v9 != (std::string *)&v11._anon_0 )
    operator delete(v9);
  this->is_processed_ = 0;
};

// Line 206: range 000000000CF8E520-000000000CF8E635
void __fastcall mysqlpp::SQLTypeAdapter::SQLTypeAdapter(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        std::forward_iterator_tag a4)
{
  const std::type_info *v5; // rsi
  unsigned __int8 v6; // r13
  mysqlpp::SQLBuffer *v7; // rax
  mysqlpp::SQLBuffer *v8; // rbp
  std::string::size_type M_string_length; // rdx
  const char *M_p; // rsi
  _QWORD *v11; // rax
  std::string *v12; // rdi
  mysqlpp::Null<long int,mysqlpp::NullIsNull> v13; // [rsp+0h] [rbp-58h] BYREF
  std::string v14; // [rsp+10h] [rbp-48h] BYREF

  v13.data = a2;
  *(_QWORD *)&v13.is_null = a3;
  if ( (_BYTE)a3 )
  {
    v14._M_dataplus._M_p = v14._anon_0._M_local_buf;
    std::string::_M_construct<char *>(
      &v14,
      mysqlpp::null_str[abi:cxx11]._M_dataplus._M_p,
      &mysqlpp::null_str[abi:cxx11]._M_dataplus._M_p[mysqlpp::null_str[abi:cxx11]._M_string_length],
      a4);
  }
  else
  {
    mysqlpp::stream2string<mysqlpp::Null<long,mysqlpp::NullIsNull>>(&v14, &v13);
  }
  if ( v13.is_null )
    v5 = (const std::type_info *)&`typeinfo for'void;
  else
    v5 = (const std::type_info *)&`typeinfo for'long;
  v6 = *mysqlpp::mysql_ti_sql_type_info_lookup::operator[](&mysqlpp::mysql_type_info::lookups, v5);
  v7 = (mysqlpp::SQLBuffer *)operator new(0x18uLL);
  v7->data_ = 0LL;
  v8 = v7;
  M_string_length = v14._M_string_length;
  v7->length_ = 0LL;
  M_p = v14._M_dataplus._M_p;
  v7->type_.num_ = v6;
  v7->is_null_ = v13.is_null;
  mysqlpp::SQLBuffer::replace_buffer(v7, M_p, M_string_length);
  *(_QWORD *)a1 = v8;
  *(_QWORD *)(a1 + 8) = 0LL;
  v11 = (_QWORD *)operator new(8uLL);
  v12 = (std::string *)v14._M_dataplus._M_p;
  *v11 = 1LL;
  *(_QWORD *)(a1 + 8) = v11;
  if ( v12 != (std::string *)&v14._anon_0 )
    operator delete(v12);
  *(_BYTE *)(a1 + 16) = 0;
};

// Line 214: range 000000000CF8D890-000000000CF8D950
void __fastcall mysqlpp::SQLTypeAdapter::SQLTypeAdapter(mysqlpp::SQLTypeAdapter *this, unsigned __int64 a2)
{
  unsigned __int8 v3; // r12
  mysqlpp::SQLBuffer *v4; // rax
  std::string::size_type M_string_length; // rdx
  mysqlpp::SQLBuffer *v6; // rbp
  const char *M_p; // rsi
  size_t *v8; // rax
  std::string *v9; // rdi
  unsigned __int64 object; // [rsp+8h] [rbp-40h] BYREF
  std::string v11; // [rsp+10h] [rbp-38h] BYREF

  object = a2;
  mysqlpp::stream2string<unsigned long>(&v11, &object);
  v3 = *mysqlpp::mysql_ti_sql_type_info_lookup::operator[](
          &mysqlpp::mysql_type_info::lookups,
          (const std::type_info *)&`typeinfo for'unsigned long);
  v4 = (mysqlpp::SQLBuffer *)operator new(0x18uLL);
  v4->type_.num_ = v3;
  M_string_length = v11._M_string_length;
  v6 = v4;
  v4->data_ = 0LL;
  M_p = v11._M_dataplus._M_p;
  v4->length_ = 0LL;
  v4->is_null_ = 0;
  mysqlpp::SQLBuffer::replace_buffer(v4, M_p, M_string_length);
  this->buffer_.counted_ = v6;
  this->buffer_.refs_ = 0LL;
  v8 = (size_t *)operator new(8uLL);
  v9 = (std::string *)v11._M_dataplus._M_p;
  *v8 = 1LL;
  this->buffer_.refs_ = v8;
  if ( v9 != (std::string *)&v11._anon_0 )
    operator delete(v9);
  this->is_processed_ = 0;
};

// Line 221: range 000000000CF8E640-000000000CF8E755
void __fastcall mysqlpp::SQLTypeAdapter::SQLTypeAdapter(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        std::forward_iterator_tag a4)
{
  const std::type_info *v5; // rsi
  unsigned __int8 v6; // r13
  mysqlpp::SQLBuffer *v7; // rax
  mysqlpp::SQLBuffer *v8; // rbp
  std::string::size_type M_string_length; // rdx
  const char *M_p; // rsi
  _QWORD *v11; // rax
  std::string *v12; // rdi
  mysqlpp::Null<long unsigned int,mysqlpp::NullIsNull> v13; // [rsp+0h] [rbp-58h] BYREF
  std::string v14; // [rsp+10h] [rbp-48h] BYREF

  v13.data = a2;
  *(_QWORD *)&v13.is_null = a3;
  if ( (_BYTE)a3 )
  {
    v14._M_dataplus._M_p = v14._anon_0._M_local_buf;
    std::string::_M_construct<char *>(
      &v14,
      mysqlpp::null_str[abi:cxx11]._M_dataplus._M_p,
      &mysqlpp::null_str[abi:cxx11]._M_dataplus._M_p[mysqlpp::null_str[abi:cxx11]._M_string_length],
      a4);
  }
  else
  {
    mysqlpp::stream2string<mysqlpp::Null<unsigned long,mysqlpp::NullIsNull>>(&v14, &v13);
  }
  if ( v13.is_null )
    v5 = (const std::type_info *)&`typeinfo for'void;
  else
    v5 = (const std::type_info *)&`typeinfo for'unsigned long;
  v6 = *mysqlpp::mysql_ti_sql_type_info_lookup::operator[](&mysqlpp::mysql_type_info::lookups, v5);
  v7 = (mysqlpp::SQLBuffer *)operator new(0x18uLL);
  v7->data_ = 0LL;
  v8 = v7;
  M_string_length = v14._M_string_length;
  v7->length_ = 0LL;
  M_p = v14._M_dataplus._M_p;
  v7->type_.num_ = v6;
  v7->is_null_ = v13.is_null;
  mysqlpp::SQLBuffer::replace_buffer(v7, M_p, M_string_length);
  *(_QWORD *)a1 = v8;
  *(_QWORD *)(a1 + 8) = 0LL;
  v11 = (_QWORD *)operator new(8uLL);
  v12 = (std::string *)v14._M_dataplus._M_p;
  *v11 = 1LL;
  *(_QWORD *)(a1 + 8) = v11;
  if ( v12 != (std::string *)&v14._anon_0 )
    operator delete(v12);
  *(_BYTE *)(a1 + 16) = 0;
};

// Line 229: range 000000000CF8D960-000000000CF8DA20
void __fastcall mysqlpp::SQLTypeAdapter::SQLTypeAdapter(mysqlpp::SQLTypeAdapter *this, __int64 a2)
{
  unsigned __int8 v3; // r12
  mysqlpp::SQLBuffer *v4; // rax
  std::string::size_type M_string_length; // rdx
  mysqlpp::SQLBuffer *v6; // rbp
  const char *M_p; // rsi
  size_t *v8; // rax
  std::string *v9; // rdi
  __int64 object; // [rsp+8h] [rbp-40h] BYREF
  std::string v11; // [rsp+10h] [rbp-38h] BYREF

  object = a2;
  mysqlpp::stream2string<long long>(&v11, &object);
  v3 = *mysqlpp::mysql_ti_sql_type_info_lookup::operator[](
          &mysqlpp::mysql_type_info::lookups,
          (const std::type_info *)&`typeinfo for'long long);
  v4 = (mysqlpp::SQLBuffer *)operator new(0x18uLL);
  v4->type_.num_ = v3;
  M_string_length = v11._M_string_length;
  v6 = v4;
  v4->data_ = 0LL;
  M_p = v11._M_dataplus._M_p;
  v4->length_ = 0LL;
  v4->is_null_ = 0;
  mysqlpp::SQLBuffer::replace_buffer(v4, M_p, M_string_length);
  this->buffer_.counted_ = v6;
  this->buffer_.refs_ = 0LL;
  v8 = (size_t *)operator new(8uLL);
  v9 = (std::string *)v11._M_dataplus._M_p;
  *v8 = 1LL;
  this->buffer_.refs_ = v8;
  if ( v9 != (std::string *)&v11._anon_0 )
    operator delete(v9);
  this->is_processed_ = 0;
};

// Line 236: range 000000000CF8E760-000000000CF8E875
void __fastcall mysqlpp::SQLTypeAdapter::SQLTypeAdapter(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        std::forward_iterator_tag a4)
{
  const std::type_info *v5; // rsi
  unsigned __int8 v6; // r13
  mysqlpp::SQLBuffer *v7; // rax
  mysqlpp::SQLBuffer *v8; // rbp
  std::string::size_type M_string_length; // rdx
  const char *M_p; // rsi
  _QWORD *v11; // rax
  std::string *v12; // rdi
  mysqlpp::Null<long long int,mysqlpp::NullIsNull> v13; // [rsp+0h] [rbp-58h] BYREF
  std::string v14; // [rsp+10h] [rbp-48h] BYREF

  v13.data = a2;
  *(_QWORD *)&v13.is_null = a3;
  if ( (_BYTE)a3 )
  {
    v14._M_dataplus._M_p = v14._anon_0._M_local_buf;
    std::string::_M_construct<char *>(
      &v14,
      mysqlpp::null_str[abi:cxx11]._M_dataplus._M_p,
      &mysqlpp::null_str[abi:cxx11]._M_dataplus._M_p[mysqlpp::null_str[abi:cxx11]._M_string_length],
      a4);
  }
  else
  {
    mysqlpp::stream2string<mysqlpp::Null<long long,mysqlpp::NullIsNull>>(&v14, &v13);
  }
  if ( v13.is_null )
    v5 = (const std::type_info *)&`typeinfo for'void;
  else
    v5 = (const std::type_info *)&`typeinfo for'long long;
  v6 = *mysqlpp::mysql_ti_sql_type_info_lookup::operator[](&mysqlpp::mysql_type_info::lookups, v5);
  v7 = (mysqlpp::SQLBuffer *)operator new(0x18uLL);
  v7->data_ = 0LL;
  v8 = v7;
  M_string_length = v14._M_string_length;
  v7->length_ = 0LL;
  M_p = v14._M_dataplus._M_p;
  v7->type_.num_ = v6;
  v7->is_null_ = v13.is_null;
  mysqlpp::SQLBuffer::replace_buffer(v7, M_p, M_string_length);
  *(_QWORD *)a1 = v8;
  *(_QWORD *)(a1 + 8) = 0LL;
  v11 = (_QWORD *)operator new(8uLL);
  v12 = (std::string *)v14._M_dataplus._M_p;
  *v11 = 1LL;
  *(_QWORD *)(a1 + 8) = v11;
  if ( v12 != (std::string *)&v14._anon_0 )
    operator delete(v12);
  *(_BYTE *)(a1 + 16) = 0;
};

// Line 244: range 000000000CF8DA30-000000000CF8DAF0
void __fastcall mysqlpp::SQLTypeAdapter::SQLTypeAdapter(mysqlpp::SQLTypeAdapter *this, unsigned __int64 a2)
{
  unsigned __int8 v3; // r12
  mysqlpp::SQLBuffer *v4; // rax
  std::string::size_type M_string_length; // rdx
  mysqlpp::SQLBuffer *v6; // rbp
  const char *M_p; // rsi
  size_t *v8; // rax
  std::string *v9; // rdi
  unsigned __int64 object; // [rsp+8h] [rbp-40h] BYREF
  std::string v11; // [rsp+10h] [rbp-38h] BYREF

  object = a2;
  mysqlpp::stream2string<unsigned long long>(&v11, &object);
  v3 = *mysqlpp::mysql_ti_sql_type_info_lookup::operator[](
          &mysqlpp::mysql_type_info::lookups,
          (const std::type_info *)&`typeinfo for'unsigned long long);
  v4 = (mysqlpp::SQLBuffer *)operator new(0x18uLL);
  v4->type_.num_ = v3;
  M_string_length = v11._M_string_length;
  v6 = v4;
  v4->data_ = 0LL;
  M_p = v11._M_dataplus._M_p;
  v4->length_ = 0LL;
  v4->is_null_ = 0;
  mysqlpp::SQLBuffer::replace_buffer(v4, M_p, M_string_length);
  this->buffer_.counted_ = v6;
  this->buffer_.refs_ = 0LL;
  v8 = (size_t *)operator new(8uLL);
  v9 = (std::string *)v11._M_dataplus._M_p;
  *v8 = 1LL;
  this->buffer_.refs_ = v8;
  if ( v9 != (std::string *)&v11._anon_0 )
    operator delete(v9);
  this->is_processed_ = 0;
};

// Line 251: range 000000000CF8E880-000000000CF8E995
void __fastcall mysqlpp::SQLTypeAdapter::SQLTypeAdapter(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        std::forward_iterator_tag a4)
{
  const std::type_info *v5; // rsi
  unsigned __int8 v6; // r13
  mysqlpp::SQLBuffer *v7; // rax
  mysqlpp::SQLBuffer *v8; // rbp
  std::string::size_type M_string_length; // rdx
  const char *M_p; // rsi
  _QWORD *v11; // rax
  std::string *v12; // rdi
  mysqlpp::Null<long long unsigned int,mysqlpp::NullIsNull> v13; // [rsp+0h] [rbp-58h] BYREF
  std::string v14; // [rsp+10h] [rbp-48h] BYREF

  v13.data = a2;
  *(_QWORD *)&v13.is_null = a3;
  if ( (_BYTE)a3 )
  {
    v14._M_dataplus._M_p = v14._anon_0._M_local_buf;
    std::string::_M_construct<char *>(
      &v14,
      mysqlpp::null_str[abi:cxx11]._M_dataplus._M_p,
      &mysqlpp::null_str[abi:cxx11]._M_dataplus._M_p[mysqlpp::null_str[abi:cxx11]._M_string_length],
      a4);
  }
  else
  {
    mysqlpp::stream2string<mysqlpp::Null<unsigned long long,mysqlpp::NullIsNull>>(&v14, &v13);
  }
  if ( v13.is_null )
    v5 = (const std::type_info *)&`typeinfo for'void;
  else
    v5 = (const std::type_info *)&`typeinfo for'unsigned long long;
  v6 = *mysqlpp::mysql_ti_sql_type_info_lookup::operator[](&mysqlpp::mysql_type_info::lookups, v5);
  v7 = (mysqlpp::SQLBuffer *)operator new(0x18uLL);
  v7->data_ = 0LL;
  v8 = v7;
  M_string_length = v14._M_string_length;
  v7->length_ = 0LL;
  M_p = v14._M_dataplus._M_p;
  v7->type_.num_ = v6;
  v7->is_null_ = v13.is_null;
  mysqlpp::SQLBuffer::replace_buffer(v7, M_p, M_string_length);
  *(_QWORD *)a1 = v8;
  *(_QWORD *)(a1 + 8) = 0LL;
  v11 = (_QWORD *)operator new(8uLL);
  v12 = (std::string *)v14._M_dataplus._M_p;
  *v11 = 1LL;
  *(_QWORD *)(a1 + 8) = v11;
  if ( v12 != (std::string *)&v14._anon_0 )
    operator delete(v12);
  *(_BYTE *)(a1 + 16) = 0;
};

// Line 259: range 000000000CF8F620-000000000CF8FF33
void __fastcall mysqlpp::SQLTypeAdapter::SQLTypeAdapter(mysqlpp::SQLTypeAdapter *this, float a2)
{
  char *v2; // rsi
  mysqlpp::SQLBuffer::size_type v3; // rdx
  std::forward_iterator_tag v4; // cl
  char *v5; // rdi
  char *v6; // rsi
  __int64 v7; // rdx
  std::forward_iterator_tag v8; // cl
  char *v9; // rdi
  std::_Rb_tree<const std::type_info*,std::pair<const std::type_info* const,unsigned char>,std::_Select1st<std::pair<const std::type_info* const,unsigned char> >,mysqlpp::type_info_cmp,std::allocator<std::pair<const std::type_info* const,unsigned char> > >::const_iterator v11; // rax
  unsigned __int8 M_parent; // r14
  mysqlpp::SQLBuffer *v13; // rax
  mysqlpp::SQLBuffer::size_type v14; // rdx
  mysqlpp::SQLBuffer *v15; // r13
  char *v16; // rsi
  size_t *v17; // rax
  mysqlpp::SQLBuffer *counted; // rdx
  mysqlpp::SQLBuffer *v19; // rcx
  size_t *refs; // rdx
  char *v21; // rbx
  char *v22; // rax
  __int64 v23; // rdi
  char **v24; // rdi
  std::_Rb_tree<const std::type_info*,std::pair<const std::type_info* const,unsigned char>,std::_Select1st<std::pair<const std::type_info* const,unsigned char> >,mysqlpp::type_info_cmp,std::allocator<std::pair<const std::type_info* const,unsigned char> > >::const_iterator v25; // rax
  __int64 v26; // r13
  mysqlpp::SQLBuffer::size_type v27; // rdx
  char *v28; // rsi
  size_t *v29; // rax
  mysqlpp::SQLBuffer *v30; // rdx
  mysqlpp::SQLBuffer *v31; // rcx
  size_t *v32; // rdx
  __int64 v33; // rax
  mysqlpp::SQLBuffer *v34; // r15
  __int64 v35; // rax
  const char *data; // rdi
  _QWORD *v37; // rdi
  const char *v38; // r13
  size_t v39; // rax
  char *exception; // r15
  __int64 v41; // rdi
  char **v42; // rdi
  const char *v43; // r13
  size_t v44; // rax
  char *v45; // r13
  unsigned __int8 v46; // [rsp+0h] [rbp-3A8h]
  char *v47; // [rsp+10h] [rbp-398h]
  char *pd; // [rsp+30h] [rbp-378h] BYREF
  mysqlpp::SQLBuffer::size_type v49; // [rsp+38h] [rbp-370h]
  char v50[16]; // [rsp+40h] [rbp-368h] BYREF
  char *__beg; // [rsp+50h] [rbp-358h] BYREF
  mysqlpp::SQLBuffer::size_type length; // [rsp+58h] [rbp-350h]
  __int16 v53[8]; // [rsp+60h] [rbp-348h] BYREF
  char *v54; // [rsp+70h] [rbp-338h] BYREF
  __int64 v55; // [rsp+78h] [rbp-330h] BYREF
  __int64 v56[2]; // [rsp+80h] [rbp-328h] BYREF
  unsigned __int64 v57; // [rsp+90h] [rbp-318h]
  const char *v58; // [rsp+98h] [rbp-310h]
  unsigned __int64 v59; // [rsp+A0h] [rbp-308h]
  __int64 v60; // [rsp+A8h] [rbp-300h]
  std::locale v61; // [rsp+B0h] [rbp-2F8h] BYREF
  int v62; // [rsp+B8h] [rbp-2F0h]
  void *v63[2]; // [rsp+C0h] [rbp-2E8h] BYREF
  char v64[16]; // [rsp+D0h] [rbp-2D8h] BYREF
  __int64 v65[28]; // [rsp+E0h] [rbp-2C8h] BYREF
  __int16 v66; // [rsp+1C0h] [rbp-1E8h]
  __int64 v67; // [rsp+1C8h] [rbp-1E0h]
  __int64 v68; // [rsp+1D0h] [rbp-1D8h]
  __int64 v69; // [rsp+1D8h] [rbp-1D0h]
  __int64 v70; // [rsp+1E0h] [rbp-1C8h]
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > __k; // [rsp+1F0h] [rbp-1B8h] BYREF
  __int64 v72; // [rsp+200h] [rbp-1A8h]
  __int64 v73; // [rsp+208h] [rbp-1A0h]
  __int64 v74; // [rsp+210h] [rbp-198h]
  __int64 v75; // [rsp+218h] [rbp-190h]
  __int64 v76; // [rsp+220h] [rbp-188h]
  __int64 v77; // [rsp+228h] [rbp-180h]
  std::locale v78; // [rsp+230h] [rbp-178h] BYREF
  int v79; // [rsp+238h] [rbp-170h]
  char *v80; // [rsp+240h] [rbp-168h]
  __int64 v81; // [rsp+248h] [rbp-160h]
  char v82[16]; // [rsp+250h] [rbp-158h] BYREF
  __int64 v83[27]; // [rsp+260h] [rbp-148h] BYREF
  __int64 v84; // [rsp+338h] [rbp-70h]
  __int16 v85; // [rsp+340h] [rbp-68h]
  __int64 v86; // [rsp+348h] [rbp-60h]
  __int64 v87; // [rsp+350h] [rbp-58h]
  __int64 v88; // [rsp+358h] [rbp-50h]
  __int64 v89; // [rsp+360h] [rbp-48h]

  this->is_processed_ = 0;
  this->buffer_.counted_ = 0LL;
  this->buffer_.refs_ = 0LL;
  if ( a2 == INFINITY )
  {
    v53[0] = 48;
    __beg = (char *)v53;
    length = 1LL;
    __k.counted_ = (mysqlpp::SQLBuffer *)`typeinfo for'float;
    v11._M_node = std::_Rb_tree<std::type_info const*,std::pair<std::type_info const* const,unsigned char>,std::_Select1st<std::pair<std::type_info const* const,unsigned char>>,mysqlpp::type_info_cmp,std::allocator<std::pair<std::type_info const* const,unsigned char>>>::find(
                    &mysqlpp::mysql_type_info::lookups.map_._M_t,
                    (const std::type_info *const *)&__k)._M_node;
    if ( (std::_Rb_tree_header *)v11._M_node == &mysqlpp::mysql_type_info::lookups.map_._M_t._M_impl.std::_Rb_tree_header )
    {
      std::ios_base::ios_base((std::ios_base *)v83);
      v85 = 0;
      v83[0] = (__int64)&`vtable for'std::ios + 16;
      v84 = 0LL;
      v86 = 0LL;
      v34 = (mysqlpp::SQLBuffer *)*((_QWORD *)&edata + 1);
      v87 = 0LL;
      v35 = *((_QWORD *)&edata + 2);
      data = v34[-1].data_;
      __k.counted_ = v34;
      v88 = 0LL;
      v37 = (mysqlpp::SQLBuffer **)((char *)&__k.counted_ + (_QWORD)data);
      v89 = 0LL;
      *v37 = v35;
      std::ios::init(v37, 0LL);
      v72 = 0LL;
      v73 = 0LL;
      v74 = 0LL;
      v83[0] = (__int64)&`vtable for'std::ostringstream + 64;
      __k.counted_ = (mysqlpp::SQLBuffer *)((char *)&`vtable for'std::ostringstream + 24);
      v75 = 0LL;
      __k.refs_ = (size_t *)((char *)&`vtable for'std::streambuf + 16);
      v76 = 0LL;
      v77 = 0LL;
      std::locale::locale(&v78);
      v79 = 16;
      v82[0] = 0;
      __k.refs_ = (size_t *)((char *)&`vtable for'std::stringbuf + 16);
      v80 = v82;
      v81 = 0LL;
      std::ios::init(v83, &__k.refs_);
      std::__ostream_insert<char,std::char_traits<char>>(&__k, "Failed to find MySQL C API type ID for ", 39LL);
      v38 = (const char *)((*(_BYTE *)`typeinfo for'float[1] == 42) + `typeinfo for'float[1]);
      v39 = strlen(v38);
      std::__ostream_insert<char,std::char_traits<char>>(&__k, v38, v39);
      exception = (char *)__cxa_allocate_exception(0x28uLL);
      std::stringbuf::str(&v54, &__k.refs_);
      v6 = v54;
      v7 = v55;
      *(_QWORD *)exception = &`vtable for'mysqlpp::Exception + 2;
      *((_QWORD *)exception + 1) = exception + 24;
      std::string::_M_construct<char *>((std::string *const)(exception + 8), v6, &v6[v7], v8);
      v9 = v54;
      *(_QWORD *)exception = &`vtable for'mysqlpp::TypeLookupFailed + 2;
      if ( v9 != (char *)v56 )
        operator delete(v9);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::TypeLookupFailed,
        (void (__fastcall *)(void *))mysqlpp::TypeLookupFailed::~TypeLookupFailed);
    }
    M_parent = (unsigned __int8)v11._M_node[1]._M_parent;
    v13 = (mysqlpp::SQLBuffer *)operator new(0x18uLL);
    v13->type_.num_ = M_parent;
    v14 = length;
    v15 = v13;
    v13->data_ = 0LL;
    v16 = __beg;
    v13->length_ = 0LL;
    v13->is_null_ = 1;
    mysqlpp::SQLBuffer::replace_buffer(v13, v16, v14);
    __k.counted_ = v15;
    __k.refs_ = 0LL;
    v17 = (size_t *)operator new(8uLL);
    counted = __k.counted_;
    v19 = this->buffer_.counted_;
    *v17 = 1LL;
    this->buffer_.counted_ = counted;
    refs = this->buffer_.refs_;
    this->buffer_.refs_ = v17;
    __k.counted_ = v19;
    __k.refs_ = refs;
    mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(&__k);
    if ( __beg != (char *)v53 )
      operator delete(__beg);
  }
  else
  {
    std::ios_base::ios_base((std::ios_base *)v65);
    v66 = 0;
    v65[0] = (__int64)&`vtable for'std::ios + 16;
    v65[27] = 0LL;
    v67 = 0LL;
    v21 = (char *)*((_QWORD *)&edata + 1);
    v68 = 0LL;
    v22 = (char *)*((_QWORD *)&edata + 2);
    v23 = *((_QWORD *)v21 - 3);
    v54 = v21;
    v69 = 0LL;
    v24 = (char **)((char *)&v54 + v23);
    v47 = v22;
    v70 = 0LL;
    *v24 = v22;
    std::ios::init(v24, 0LL);
    v56[0] = 0LL;
    v56[1] = 0LL;
    v57 = 0LL;
    v54 = (char *)&`vtable for'std::ostringstream + 24;
    v58 = 0LL;
    v59 = 0LL;
    v65[0] = (__int64)&`vtable for'std::ostringstream + 64;
    v60 = 0LL;
    v55 = (__int64)&`vtable for'std::streambuf + 16;
    std::locale::locale(&v61);
    v62 = 16;
    v64[0] = 0;
    v55 = (__int64)&`vtable for'std::stringbuf + 16;
    v63[0] = v64;
    v63[1] = 0LL;
    std::ios::init(v65, &v55);
    v65[1] = 9LL;
    std::ostream::_M_insert<double>(&v54, a2);
    v50[0] = 0;
    pd = v50;
    v49 = 0LL;
    if ( v59 )
    {
      if ( v59 <= v57 )
        std::string::_M_replace(&pd, 0LL, 0LL, v58, v57 - (_QWORD)v58);
      else
        std::string::_M_replace(&pd, 0LL, 0LL, v58, v59 - (_QWORD)v58);
    }
    else
    {
      std::string::_M_assign(&pd, v63);
    }
    __k.counted_ = (mysqlpp::SQLBuffer *)`typeinfo for'float;
    v25._M_node = std::_Rb_tree<std::type_info const*,std::pair<std::type_info const* const,unsigned char>,std::_Select1st<std::pair<std::type_info const* const,unsigned char>>,mysqlpp::type_info_cmp,std::allocator<std::pair<std::type_info const* const,unsigned char>>>::find(
                    &mysqlpp::mysql_type_info::lookups.map_._M_t,
                    (const std::type_info *const *)&__k)._M_node;
    if ( (std::_Rb_tree_header *)v25._M_node == &mysqlpp::mysql_type_info::lookups.map_._M_t._M_impl.std::_Rb_tree_header )
    {
      std::ios_base::ios_base((std::ios_base *)v83);
      __k.counted_ = (mysqlpp::SQLBuffer *)v21;
      v84 = 0LL;
      v86 = 0LL;
      v83[0] = (__int64)&`vtable for'std::ios + 16;
      v85 = 0;
      v41 = *((_QWORD *)v21 - 3);
      v87 = 0LL;
      v88 = 0LL;
      v42 = (char **)((char *)&__k + v41);
      v89 = 0LL;
      *v42 = v47;
      std::ios::init(v42, 0LL);
      v72 = 0LL;
      v73 = 0LL;
      v74 = 0LL;
      __k.counted_ = (mysqlpp::SQLBuffer *)((char *)&`vtable for'std::ostringstream + 24);
      v75 = 0LL;
      v76 = 0LL;
      v83[0] = (__int64)&`vtable for'std::ostringstream + 64;
      v77 = 0LL;
      __k.refs_ = (size_t *)((char *)&`vtable for'std::streambuf + 16);
      std::locale::locale(&v78);
      v79 = 16;
      v82[0] = 0;
      __k.refs_ = (size_t *)((char *)&`vtable for'std::stringbuf + 16);
      v80 = v82;
      v81 = 0LL;
      std::ios::init(v83, &__k.refs_);
      std::__ostream_insert<char,std::char_traits<char>>(&__k, "Failed to find MySQL C API type ID for ", 39LL);
      v43 = (const char *)((*(_BYTE *)`typeinfo for'float[1] == 42) + `typeinfo for'float[1]);
      v44 = strlen(v43);
      std::__ostream_insert<char,std::char_traits<char>>(&__k, v43, v44);
      v45 = (char *)__cxa_allocate_exception(0x28uLL);
      std::stringbuf::str(&__beg, &__k.refs_);
      v2 = __beg;
      v3 = length;
      *(_QWORD *)v45 = &`vtable for'mysqlpp::Exception + 2;
      *((_QWORD *)v45 + 1) = v45 + 24;
      std::string::_M_construct<char *>((std::string *const)(v45 + 8), v2, &v2[v3], v4);
      v5 = __beg;
      *(_QWORD *)v45 = &`vtable for'mysqlpp::TypeLookupFailed + 2;
      if ( v5 != (char *)v53 )
        operator delete(v5);
      _cxa_throw(
        v45,
        (struct type_info *)&`typeinfo for'mysqlpp::TypeLookupFailed,
        (void (__fastcall *)(void *))mysqlpp::TypeLookupFailed::~TypeLookupFailed);
    }
    v46 = (unsigned __int8)v25._M_node[1]._M_parent;
    v26 = operator new(0x18uLL);
    v27 = v49;
    v28 = pd;
    *(_QWORD *)v26 = 0LL;
    *(_QWORD *)(v26 + 8) = 0LL;
    *(_WORD *)(v26 + 16) = v46;
    mysqlpp::SQLBuffer::replace_buffer((mysqlpp::SQLBuffer *const)v26, v28, v27);
    __k.counted_ = (mysqlpp::SQLBuffer *)v26;
    __k.refs_ = 0LL;
    v29 = (size_t *)operator new(8uLL);
    v30 = __k.counted_;
    v31 = this->buffer_.counted_;
    *v29 = 1LL;
    this->buffer_.counted_ = v30;
    v32 = this->buffer_.refs_;
    this->buffer_.refs_ = v29;
    __k.counted_ = v31;
    __k.refs_ = v32;
    mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(&__k);
    if ( pd != v50 )
      operator delete(pd);
    v54 = (char *)&`vtable for'std::ostringstream + 24;
    v65[0] = (__int64)&`vtable for'std::ostringstream + 64;
    v55 = (__int64)&`vtable for'std::stringbuf + 16;
    if ( v63[0] != v64 )
      operator delete(v63[0]);
    v55 = (__int64)&`vtable for'std::streambuf + 16;
    std::locale::~locale(&v61);
    v33 = *((_QWORD *)v21 - 3);
    v54 = v21;
    *(char **)((char *)&v54 + v33) = v47;
    v65[0] = (__int64)&`vtable for'std::ios + 16;
    std::ios_base::~ios_base((std::ios_base *)v65);
  }
};

// Line 279: range 000000000CF90830-000000000CF91116
void __fastcall mysqlpp::SQLTypeAdapter::SQLTypeAdapter(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        void *a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        char *a16,
        __int64 a17,
        char a18)
{
  char *v18; // rsi
  __int64 v19; // rdx
  std::forward_iterator_tag v20; // cl
  char *v21; // rdi
  float v22; // xmm1_4
  unsigned __int64 v24; // rsi
  std::_Rb_tree<const std::type_info*,std::pair<const std::type_info* const,unsigned char>,std::_Select1st<std::pair<const std::type_info* const,unsigned char> >,mysqlpp::type_info_cmp,std::allocator<std::pair<const std::type_info* const,unsigned char> > >::const_iterator v25; // rax
  unsigned __int8 M_parent; // bl
  mysqlpp::SQLBuffer *v27; // rax
  mysqlpp::SQLBuffer *v28; // r13
  _QWORD *v29; // rax
  mysqlpp::SQLBuffer *counted; // rdx
  mysqlpp::SQLBuffer *v31; // rcx
  size_t *v32; // rdx
  char *v33; // rbx
  char *v34; // rax
  __int64 v35; // rdi
  char **v36; // rdi
  std::_Rb_tree<const std::type_info*,std::pair<const std::type_info* const,unsigned char>,std::_Select1st<std::pair<const std::type_info* const,unsigned char> >,mysqlpp::type_info_cmp,std::allocator<std::pair<const std::type_info* const,unsigned char> > >::const_iterator v37; // rax
  __int64 v38; // r13
  mysqlpp::SQLBuffer::size_type v39; // rdx
  char *v40; // rsi
  _QWORD *v41; // rax
  mysqlpp::SQLBuffer *v42; // rdx
  mysqlpp::SQLBuffer *v43; // rcx
  size_t *v44; // rdx
  __int64 v45; // rax
  mysqlpp::SQLBuffer *v46; // rbx
  __int64 v47; // r15
  const char *data; // rdi
  _QWORD *v49; // rdi
  const char *v50; // r13
  size_t v51; // rax
  char *exception; // r13
  __int64 v53; // rdi
  char **v54; // rdi
  const char *v55; // r13
  size_t v56; // rax
  __int64 v57; // rdx
  std::forward_iterator_tag v58; // cl
  __int64 v59; // r8
  __int64 v60; // r9
  float v61; // [rsp+0h] [rbp-3A8h]
  char *v62; // [rsp+10h] [rbp-398h]
  unsigned __int8 v63; // [rsp+2Fh] [rbp-379h]
  char *pd; // [rsp+30h] [rbp-378h] BYREF
  mysqlpp::SQLBuffer::size_type length; // [rsp+38h] [rbp-370h]
  char v66[16]; // [rsp+40h] [rbp-368h] BYREF
  char v67[32]; // [rsp+50h] [rbp-358h] BYREF
  char *__beg; // [rsp+70h] [rbp-338h] BYREF
  __int64 v69; // [rsp+78h] [rbp-330h] BYREF
  __int64 v70[2]; // [rsp+80h] [rbp-328h] BYREF
  unsigned __int64 v71; // [rsp+90h] [rbp-318h]
  const char *v72; // [rsp+98h] [rbp-310h]
  unsigned __int64 v73; // [rsp+A0h] [rbp-308h]
  __int64 v74; // [rsp+A8h] [rbp-300h]
  std::locale v75; // [rsp+B0h] [rbp-2F8h] BYREF
  int v76; // [rsp+B8h] [rbp-2F0h]
  void *v77[2]; // [rsp+C0h] [rbp-2E8h] BYREF
  char v78[16]; // [rsp+D0h] [rbp-2D8h] BYREF
  __int64 v79[28]; // [rsp+E0h] [rbp-2C8h] BYREF
  __int16 v80; // [rsp+1C0h] [rbp-1E8h]
  __int64 v81; // [rsp+1C8h] [rbp-1E0h]
  __int64 v82; // [rsp+1D0h] [rbp-1D8h]
  __int64 v83; // [rsp+1D8h] [rbp-1D0h]
  __int64 v84; // [rsp+1E0h] [rbp-1C8h]
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > __k; // [rsp+1F0h] [rbp-1B8h] BYREF
  __int64 v86; // [rsp+200h] [rbp-1A8h]
  __int64 v87; // [rsp+208h] [rbp-1A0h]
  __int64 v88; // [rsp+210h] [rbp-198h]
  __int64 v89; // [rsp+218h] [rbp-190h]
  __int64 v90; // [rsp+220h] [rbp-188h]
  __int64 v91; // [rsp+228h] [rbp-180h]
  std::locale v92; // [rsp+230h] [rbp-178h] BYREF
  int v93; // [rsp+238h] [rbp-170h]
  char *v94; // [rsp+240h] [rbp-168h]
  __int64 v95; // [rsp+248h] [rbp-160h]
  char v96[16]; // [rsp+250h] [rbp-158h] BYREF
  __int64 v97[27]; // [rsp+260h] [rbp-148h] BYREF
  __int64 v98; // [rsp+338h] [rbp-70h]
  __int16 v99; // [rsp+340h] [rbp-68h]
  __int64 v100; // [rsp+348h] [rbp-60h]
  __int64 v101; // [rsp+350h] [rbp-58h]
  __int64 v102; // [rsp+358h] [rbp-50h]
  __int64 v103; // [rsp+360h] [rbp-48h]

  v22 = *(float *)&a2;
  *(_QWORD *)a1 = 0LL;
  v61 = *(float *)&a2;
  v24 = HIDWORD(a2);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_BYTE *)(a1 + 16) = 0;
  if ( v22 > 3.4028235e38 || (_BYTE)v24 )
  {
    __k.counted_ = (mysqlpp::SQLBuffer *)&`typeinfo for'void;
    v25._M_node = std::_Rb_tree<std::type_info const*,std::pair<std::type_info const* const,unsigned char>,std::_Select1st<std::pair<std::type_info const* const,unsigned char>>,mysqlpp::type_info_cmp,std::allocator<std::pair<std::type_info const* const,unsigned char>>>::find(
                    &mysqlpp::mysql_type_info::lookups.map_._M_t,
                    (const std::type_info *const *)&__k)._M_node;
    if ( (std::_Rb_tree_header *)v25._M_node == &mysqlpp::mysql_type_info::lookups.map_._M_t._M_impl.std::_Rb_tree_header )
    {
      std::ios_base::ios_base((std::ios_base *)v97);
      v99 = 0;
      v97[0] = (__int64)&`vtable for'std::ios + 16;
      v98 = 0LL;
      v46 = (mysqlpp::SQLBuffer *)*((_QWORD *)&edata + 1);
      v47 = *((_QWORD *)&edata + 2);
      v100 = 0LL;
      v101 = 0LL;
      data = v46[-1].data_;
      __k.counted_ = v46;
      v102 = 0LL;
      v103 = 0LL;
      v49 = (mysqlpp::SQLBuffer **)((char *)&__k.counted_ + (_QWORD)data);
      *v49 = v47;
      std::ios::init(v49, 0LL);
      v86 = 0LL;
      v87 = 0LL;
      v88 = 0LL;
      v97[0] = (__int64)&`vtable for'std::ostringstream + 64;
      __k.counted_ = (mysqlpp::SQLBuffer *)((char *)&`vtable for'std::ostringstream + 24);
      v89 = 0LL;
      __k.refs_ = (size_t *)((char *)&`vtable for'std::streambuf + 16);
      v90 = 0LL;
      v91 = 0LL;
      std::locale::locale(&v92);
      v93 = 16;
      v96[0] = 0;
      __k.refs_ = (size_t *)((char *)&`vtable for'std::stringbuf + 16);
      v94 = v96;
      v95 = 0LL;
      std::ios::init(v97, &__k.refs_);
      std::__ostream_insert<char,std::char_traits<char>>(&__k, "Failed to find MySQL C API type ID for ", 39LL);
      v50 = (const char *)((**((_BYTE **)&`typeinfo for'void + 1) == 42) + *((_QWORD *)&`typeinfo for'void + 1));
      v51 = strlen(v50);
      std::__ostream_insert<char,std::char_traits<char>>(&__k, v50, v51);
      exception = (char *)__cxa_allocate_exception(0x28uLL);
      std::stringbuf::str(&__beg, &__k.refs_);
      v18 = __beg;
      v19 = v69;
      *(_QWORD *)exception = &`vtable for'mysqlpp::Exception + 2;
      *((_QWORD *)exception + 1) = exception + 24;
      std::string::_M_construct<char *>((std::string *const)(exception + 8), v18, &v18[v19], v20);
      v21 = __beg;
      *(_QWORD *)exception = &`vtable for'mysqlpp::TypeLookupFailed + 2;
      if ( v21 != (char *)v70 )
        operator delete(v21);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::TypeLookupFailed,
        (void (__fastcall *)(void *))mysqlpp::TypeLookupFailed::~TypeLookupFailed);
    }
    M_parent = (unsigned __int8)v25._M_node[1]._M_parent;
    v27 = (mysqlpp::SQLBuffer *)operator new(0x18uLL);
    v27->data_ = 0LL;
    v28 = v27;
    v27->length_ = 0LL;
    v27->type_.num_ = M_parent;
    v27->is_null_ = 1;
    mysqlpp::SQLBuffer::replace_buffer(
      v27,
      mysqlpp::null_str[abi:cxx11]._M_dataplus._M_p,
      mysqlpp::null_str[abi:cxx11]._M_string_length);
    __k.counted_ = v28;
    __k.refs_ = 0LL;
    v29 = (_QWORD *)operator new(8uLL);
    counted = __k.counted_;
    v31 = *(mysqlpp::SQLBuffer **)a1;
    *v29 = 1LL;
    *(_QWORD *)a1 = counted;
    v32 = *(size_t **)(a1 + 8);
    *(_QWORD *)(a1 + 8) = v29;
    __k.counted_ = v31;
    __k.refs_ = v32;
    mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(&__k);
  }
  else
  {
    std::ios_base::ios_base((std::ios_base *)v79);
    v80 = 0;
    v79[0] = (__int64)&`vtable for'std::ios + 16;
    v79[27] = 0LL;
    v81 = 0LL;
    v33 = (char *)*((_QWORD *)&edata + 1);
    v82 = 0LL;
    v34 = (char *)*((_QWORD *)&edata + 2);
    v35 = *((_QWORD *)v33 - 3);
    __beg = v33;
    v83 = 0LL;
    v36 = (char **)((char *)&__beg + v35);
    v62 = v34;
    v84 = 0LL;
    *v36 = v34;
    std::ios::init(v36, 0LL);
    v70[0] = 0LL;
    v70[1] = 0LL;
    v71 = 0LL;
    __beg = (char *)&`vtable for'std::ostringstream + 24;
    v72 = 0LL;
    v73 = 0LL;
    v79[0] = (__int64)&`vtable for'std::ostringstream + 64;
    v74 = 0LL;
    v69 = (__int64)&`vtable for'std::streambuf + 16;
    std::locale::locale(&v75);
    v76 = 16;
    v78[0] = 0;
    v69 = (__int64)&`vtable for'std::stringbuf + 16;
    v77[0] = v78;
    v77[1] = 0LL;
    std::ios::init(v79, &v69);
    v79[1] = 9LL;
    std::ostream::_M_insert<double>(&__beg, v61);
    v66[0] = 0;
    pd = v66;
    length = 0LL;
    if ( v73 )
    {
      if ( v73 <= v71 )
        std::string::_M_replace(&pd, 0LL, 0LL, v72, v71 - (_QWORD)v72);
      else
        std::string::_M_replace(&pd, 0LL, 0LL, v72, v73 - (_QWORD)v72);
    }
    else
    {
      std::string::_M_assign(&pd, v77);
    }
    __k.counted_ = (mysqlpp::SQLBuffer *)`typeinfo for'float;
    v37._M_node = std::_Rb_tree<std::type_info const*,std::pair<std::type_info const* const,unsigned char>,std::_Select1st<std::pair<std::type_info const* const,unsigned char>>,mysqlpp::type_info_cmp,std::allocator<std::pair<std::type_info const* const,unsigned char>>>::find(
                    &mysqlpp::mysql_type_info::lookups.map_._M_t,
                    (const std::type_info *const *)&__k)._M_node;
    if ( (std::_Rb_tree_header *)v37._M_node == &mysqlpp::mysql_type_info::lookups.map_._M_t._M_impl.std::_Rb_tree_header )
    {
      std::ios_base::ios_base((std::ios_base *)v97);
      __k.counted_ = (mysqlpp::SQLBuffer *)v33;
      v98 = 0LL;
      v100 = 0LL;
      v97[0] = (__int64)&`vtable for'std::ios + 16;
      v99 = 0;
      v53 = *((_QWORD *)v33 - 3);
      v101 = 0LL;
      v102 = 0LL;
      v54 = (char **)((char *)&__k + v53);
      v103 = 0LL;
      *v54 = v62;
      std::ios::init(v54, 0LL);
      v86 = 0LL;
      v87 = 0LL;
      v88 = 0LL;
      __k.counted_ = (mysqlpp::SQLBuffer *)((char *)&`vtable for'std::ostringstream + 24);
      v89 = 0LL;
      v90 = 0LL;
      v97[0] = (__int64)&`vtable for'std::ostringstream + 64;
      v91 = 0LL;
      __k.refs_ = (size_t *)((char *)&`vtable for'std::streambuf + 16);
      std::locale::locale(&v92);
      v93 = 16;
      v96[0] = 0;
      __k.refs_ = (size_t *)((char *)&`vtable for'std::stringbuf + 16);
      v94 = v96;
      v95 = 0LL;
      std::ios::init(v97, &__k.refs_);
      std::__ostream_insert<char,std::char_traits<char>>(&__k, "Failed to find MySQL C API type ID for ", 39LL);
      v55 = (const char *)((*(_BYTE *)`typeinfo for'float[1] == 42) + `typeinfo for'float[1]);
      v56 = strlen(v55);
      std::__ostream_insert<char,std::char_traits<char>>(&__k, v55, v56);
      __cxa_allocate_exception(0x28uLL);
      std::stringbuf::str(v67, &__k.refs_);
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(
        (__int64)v67,
        (__int64)&__k.refs_,
        v57,
        v58,
        v59,
        v60,
        a7,
        a8,
        a9,
        a10,
        a11,
        a12,
        a13,
        a14,
        a15,
        a16,
        a17,
        a18);
    }
    v63 = (unsigned __int8)v37._M_node[1]._M_parent;
    v38 = operator new(0x18uLL);
    v39 = length;
    v40 = pd;
    *(_QWORD *)v38 = 0LL;
    *(_QWORD *)(v38 + 8) = 0LL;
    *(_WORD *)(v38 + 16) = v63;
    mysqlpp::SQLBuffer::replace_buffer((mysqlpp::SQLBuffer *const)v38, v40, v39);
    __k.counted_ = (mysqlpp::SQLBuffer *)v38;
    __k.refs_ = 0LL;
    v41 = (_QWORD *)operator new(8uLL);
    v42 = __k.counted_;
    v43 = *(mysqlpp::SQLBuffer **)a1;
    *v41 = 1LL;
    *(_QWORD *)a1 = v42;
    v44 = *(size_t **)(a1 + 8);
    *(_QWORD *)(a1 + 8) = v41;
    __k.counted_ = v43;
    __k.refs_ = v44;
    mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(&__k);
    if ( pd != v66 )
      operator delete(pd);
    __beg = (char *)&`vtable for'std::ostringstream + 24;
    v79[0] = (__int64)&`vtable for'std::ostringstream + 64;
    v69 = (__int64)&`vtable for'std::stringbuf + 16;
    if ( v77[0] != v78 )
      operator delete(v77[0]);
    v69 = (__int64)&`vtable for'std::streambuf + 16;
    std::locale::~locale(&v75);
    v45 = *((_QWORD *)v33 - 3);
    __beg = v33;
    *(char **)((char *)&__beg + v45) = v62;
    v79[0] = (__int64)&`vtable for'std::ios + 16;
    std::ios_base::~ios_base((std::ios_base *)v79);
  }
};

// Line 299: range 000000000CF8ED00-000000000CF8F613
void __fastcall mysqlpp::SQLTypeAdapter::SQLTypeAdapter(mysqlpp::SQLTypeAdapter *this, double a2)
{
  char *v2; // rsi
  mysqlpp::SQLBuffer::size_type v3; // rdx
  std::forward_iterator_tag v4; // cl
  char *v5; // rdi
  char *v6; // rsi
  __int64 v7; // rdx
  std::forward_iterator_tag v8; // cl
  char *v9; // rdi
  std::_Rb_tree<const std::type_info*,std::pair<const std::type_info* const,unsigned char>,std::_Select1st<std::pair<const std::type_info* const,unsigned char> >,mysqlpp::type_info_cmp,std::allocator<std::pair<const std::type_info* const,unsigned char> > >::const_iterator v11; // rax
  unsigned __int8 M_parent; // r14
  mysqlpp::SQLBuffer *v13; // rax
  mysqlpp::SQLBuffer::size_type v14; // rdx
  mysqlpp::SQLBuffer *v15; // r13
  char *v16; // rsi
  size_t *v17; // rax
  mysqlpp::SQLBuffer *counted; // rdx
  mysqlpp::SQLBuffer *v19; // rcx
  size_t *refs; // rdx
  char *v21; // rbx
  char *v22; // rax
  __int64 v23; // rdi
  char **v24; // rdi
  std::_Rb_tree<const std::type_info*,std::pair<const std::type_info* const,unsigned char>,std::_Select1st<std::pair<const std::type_info* const,unsigned char> >,mysqlpp::type_info_cmp,std::allocator<std::pair<const std::type_info* const,unsigned char> > >::const_iterator v25; // rax
  __int64 v26; // r13
  mysqlpp::SQLBuffer::size_type v27; // rdx
  char *v28; // rsi
  size_t *v29; // rax
  mysqlpp::SQLBuffer *v30; // rdx
  mysqlpp::SQLBuffer *v31; // rcx
  size_t *v32; // rdx
  __int64 v33; // rax
  mysqlpp::SQLBuffer *v34; // r15
  __int64 v35; // rax
  const char *data; // rdi
  _QWORD *v37; // rdi
  const char *v38; // r13
  size_t v39; // rax
  char *exception; // r15
  __int64 v41; // rdi
  char **v42; // rdi
  const char *v43; // r13
  size_t v44; // rax
  char *v45; // r13
  unsigned __int8 v46; // [rsp+0h] [rbp-3A8h]
  char *v47; // [rsp+10h] [rbp-398h]
  char *pd; // [rsp+30h] [rbp-378h] BYREF
  mysqlpp::SQLBuffer::size_type v49; // [rsp+38h] [rbp-370h]
  char v50[16]; // [rsp+40h] [rbp-368h] BYREF
  char *__beg; // [rsp+50h] [rbp-358h] BYREF
  mysqlpp::SQLBuffer::size_type length; // [rsp+58h] [rbp-350h]
  __int16 v53[8]; // [rsp+60h] [rbp-348h] BYREF
  char *v54; // [rsp+70h] [rbp-338h] BYREF
  __int64 v55; // [rsp+78h] [rbp-330h] BYREF
  __int64 v56[2]; // [rsp+80h] [rbp-328h] BYREF
  unsigned __int64 v57; // [rsp+90h] [rbp-318h]
  const char *v58; // [rsp+98h] [rbp-310h]
  unsigned __int64 v59; // [rsp+A0h] [rbp-308h]
  __int64 v60; // [rsp+A8h] [rbp-300h]
  std::locale v61; // [rsp+B0h] [rbp-2F8h] BYREF
  int v62; // [rsp+B8h] [rbp-2F0h]
  void *v63[2]; // [rsp+C0h] [rbp-2E8h] BYREF
  char v64[16]; // [rsp+D0h] [rbp-2D8h] BYREF
  __int64 v65[28]; // [rsp+E0h] [rbp-2C8h] BYREF
  __int16 v66; // [rsp+1C0h] [rbp-1E8h]
  __int64 v67; // [rsp+1C8h] [rbp-1E0h]
  __int64 v68; // [rsp+1D0h] [rbp-1D8h]
  __int64 v69; // [rsp+1D8h] [rbp-1D0h]
  __int64 v70; // [rsp+1E0h] [rbp-1C8h]
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > __k; // [rsp+1F0h] [rbp-1B8h] BYREF
  __int64 v72; // [rsp+200h] [rbp-1A8h]
  __int64 v73; // [rsp+208h] [rbp-1A0h]
  __int64 v74; // [rsp+210h] [rbp-198h]
  __int64 v75; // [rsp+218h] [rbp-190h]
  __int64 v76; // [rsp+220h] [rbp-188h]
  __int64 v77; // [rsp+228h] [rbp-180h]
  std::locale v78; // [rsp+230h] [rbp-178h] BYREF
  int v79; // [rsp+238h] [rbp-170h]
  char *v80; // [rsp+240h] [rbp-168h]
  __int64 v81; // [rsp+248h] [rbp-160h]
  char v82[16]; // [rsp+250h] [rbp-158h] BYREF
  __int64 v83[27]; // [rsp+260h] [rbp-148h] BYREF
  __int64 v84; // [rsp+338h] [rbp-70h]
  __int16 v85; // [rsp+340h] [rbp-68h]
  __int64 v86; // [rsp+348h] [rbp-60h]
  __int64 v87; // [rsp+350h] [rbp-58h]
  __int64 v88; // [rsp+358h] [rbp-50h]
  __int64 v89; // [rsp+360h] [rbp-48h]

  this->is_processed_ = 0;
  this->buffer_.counted_ = 0LL;
  this->buffer_.refs_ = 0LL;
  if ( a2 == INFINITY )
  {
    v53[0] = 48;
    __beg = (char *)v53;
    length = 1LL;
    __k.counted_ = (mysqlpp::SQLBuffer *)&`typeinfo for'double;
    v11._M_node = std::_Rb_tree<std::type_info const*,std::pair<std::type_info const* const,unsigned char>,std::_Select1st<std::pair<std::type_info const* const,unsigned char>>,mysqlpp::type_info_cmp,std::allocator<std::pair<std::type_info const* const,unsigned char>>>::find(
                    &mysqlpp::mysql_type_info::lookups.map_._M_t,
                    (const std::type_info *const *)&__k)._M_node;
    if ( (std::_Rb_tree_header *)v11._M_node == &mysqlpp::mysql_type_info::lookups.map_._M_t._M_impl.std::_Rb_tree_header )
    {
      std::ios_base::ios_base((std::ios_base *)v83);
      v85 = 0;
      v83[0] = (__int64)&`vtable for'std::ios + 16;
      v84 = 0LL;
      v86 = 0LL;
      v34 = (mysqlpp::SQLBuffer *)*((_QWORD *)&edata + 1);
      v87 = 0LL;
      v35 = *((_QWORD *)&edata + 2);
      data = v34[-1].data_;
      __k.counted_ = v34;
      v88 = 0LL;
      v37 = (mysqlpp::SQLBuffer **)((char *)&__k.counted_ + (_QWORD)data);
      v89 = 0LL;
      *v37 = v35;
      std::ios::init(v37, 0LL);
      v72 = 0LL;
      v73 = 0LL;
      v74 = 0LL;
      v83[0] = (__int64)&`vtable for'std::ostringstream + 64;
      __k.counted_ = (mysqlpp::SQLBuffer *)((char *)&`vtable for'std::ostringstream + 24);
      v75 = 0LL;
      __k.refs_ = (size_t *)((char *)&`vtable for'std::streambuf + 16);
      v76 = 0LL;
      v77 = 0LL;
      std::locale::locale(&v78);
      v79 = 16;
      v82[0] = 0;
      __k.refs_ = (size_t *)((char *)&`vtable for'std::stringbuf + 16);
      v80 = v82;
      v81 = 0LL;
      std::ios::init(v83, &__k.refs_);
      std::__ostream_insert<char,std::char_traits<char>>(&__k, "Failed to find MySQL C API type ID for ", 39LL);
      v38 = (const char *)((**((_BYTE **)&`typeinfo for'double + 1) == 42) + *((_QWORD *)&`typeinfo for'double + 1));
      v39 = strlen(v38);
      std::__ostream_insert<char,std::char_traits<char>>(&__k, v38, v39);
      exception = (char *)__cxa_allocate_exception(0x28uLL);
      std::stringbuf::str(&v54, &__k.refs_);
      v6 = v54;
      v7 = v55;
      *(_QWORD *)exception = &`vtable for'mysqlpp::Exception + 2;
      *((_QWORD *)exception + 1) = exception + 24;
      std::string::_M_construct<char *>((std::string *const)(exception + 8), v6, &v6[v7], v8);
      v9 = v54;
      *(_QWORD *)exception = &`vtable for'mysqlpp::TypeLookupFailed + 2;
      if ( v9 != (char *)v56 )
        operator delete(v9);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::TypeLookupFailed,
        (void (__fastcall *)(void *))mysqlpp::TypeLookupFailed::~TypeLookupFailed);
    }
    M_parent = (unsigned __int8)v11._M_node[1]._M_parent;
    v13 = (mysqlpp::SQLBuffer *)operator new(0x18uLL);
    v13->type_.num_ = M_parent;
    v14 = length;
    v15 = v13;
    v13->data_ = 0LL;
    v16 = __beg;
    v13->length_ = 0LL;
    v13->is_null_ = 1;
    mysqlpp::SQLBuffer::replace_buffer(v13, v16, v14);
    __k.counted_ = v15;
    __k.refs_ = 0LL;
    v17 = (size_t *)operator new(8uLL);
    counted = __k.counted_;
    v19 = this->buffer_.counted_;
    *v17 = 1LL;
    this->buffer_.counted_ = counted;
    refs = this->buffer_.refs_;
    this->buffer_.refs_ = v17;
    __k.counted_ = v19;
    __k.refs_ = refs;
    mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(&__k);
    if ( __beg != (char *)v53 )
      operator delete(__beg);
  }
  else
  {
    std::ios_base::ios_base((std::ios_base *)v65);
    v66 = 0;
    v65[0] = (__int64)&`vtable for'std::ios + 16;
    v65[27] = 0LL;
    v67 = 0LL;
    v21 = (char *)*((_QWORD *)&edata + 1);
    v68 = 0LL;
    v22 = (char *)*((_QWORD *)&edata + 2);
    v23 = *((_QWORD *)v21 - 3);
    v54 = v21;
    v69 = 0LL;
    v24 = (char **)((char *)&v54 + v23);
    v47 = v22;
    v70 = 0LL;
    *v24 = v22;
    std::ios::init(v24, 0LL);
    v56[0] = 0LL;
    v56[1] = 0LL;
    v57 = 0LL;
    v54 = (char *)&`vtable for'std::ostringstream + 24;
    v58 = 0LL;
    v59 = 0LL;
    v65[0] = (__int64)&`vtable for'std::ostringstream + 64;
    v60 = 0LL;
    v55 = (__int64)&`vtable for'std::streambuf + 16;
    std::locale::locale(&v61);
    v62 = 16;
    v64[0] = 0;
    v55 = (__int64)&`vtable for'std::stringbuf + 16;
    v63[0] = v64;
    v63[1] = 0LL;
    std::ios::init(v65, &v55);
    v65[1] = 17LL;
    std::ostream::_M_insert<double>(&v54, a2);
    v50[0] = 0;
    pd = v50;
    v49 = 0LL;
    if ( v59 )
    {
      if ( v59 <= v57 )
        std::string::_M_replace(&pd, 0LL, 0LL, v58, v57 - (_QWORD)v58);
      else
        std::string::_M_replace(&pd, 0LL, 0LL, v58, v59 - (_QWORD)v58);
    }
    else
    {
      std::string::_M_assign(&pd, v63);
    }
    __k.counted_ = (mysqlpp::SQLBuffer *)&`typeinfo for'double;
    v25._M_node = std::_Rb_tree<std::type_info const*,std::pair<std::type_info const* const,unsigned char>,std::_Select1st<std::pair<std::type_info const* const,unsigned char>>,mysqlpp::type_info_cmp,std::allocator<std::pair<std::type_info const* const,unsigned char>>>::find(
                    &mysqlpp::mysql_type_info::lookups.map_._M_t,
                    (const std::type_info *const *)&__k)._M_node;
    if ( (std::_Rb_tree_header *)v25._M_node == &mysqlpp::mysql_type_info::lookups.map_._M_t._M_impl.std::_Rb_tree_header )
    {
      std::ios_base::ios_base((std::ios_base *)v83);
      __k.counted_ = (mysqlpp::SQLBuffer *)v21;
      v84 = 0LL;
      v86 = 0LL;
      v83[0] = (__int64)&`vtable for'std::ios + 16;
      v85 = 0;
      v41 = *((_QWORD *)v21 - 3);
      v87 = 0LL;
      v88 = 0LL;
      v42 = (char **)((char *)&__k + v41);
      v89 = 0LL;
      *v42 = v47;
      std::ios::init(v42, 0LL);
      v72 = 0LL;
      v73 = 0LL;
      v74 = 0LL;
      __k.counted_ = (mysqlpp::SQLBuffer *)((char *)&`vtable for'std::ostringstream + 24);
      v75 = 0LL;
      v76 = 0LL;
      v83[0] = (__int64)&`vtable for'std::ostringstream + 64;
      v77 = 0LL;
      __k.refs_ = (size_t *)((char *)&`vtable for'std::streambuf + 16);
      std::locale::locale(&v78);
      v79 = 16;
      v82[0] = 0;
      __k.refs_ = (size_t *)((char *)&`vtable for'std::stringbuf + 16);
      v80 = v82;
      v81 = 0LL;
      std::ios::init(v83, &__k.refs_);
      std::__ostream_insert<char,std::char_traits<char>>(&__k, "Failed to find MySQL C API type ID for ", 39LL);
      v43 = (const char *)((**((_BYTE **)&`typeinfo for'double + 1) == 42) + *((_QWORD *)&`typeinfo for'double + 1));
      v44 = strlen(v43);
      std::__ostream_insert<char,std::char_traits<char>>(&__k, v43, v44);
      v45 = (char *)__cxa_allocate_exception(0x28uLL);
      std::stringbuf::str(&__beg, &__k.refs_);
      v2 = __beg;
      v3 = length;
      *(_QWORD *)v45 = &`vtable for'mysqlpp::Exception + 2;
      *((_QWORD *)v45 + 1) = v45 + 24;
      std::string::_M_construct<char *>((std::string *const)(v45 + 8), v2, &v2[v3], v4);
      v5 = __beg;
      *(_QWORD *)v45 = &`vtable for'mysqlpp::TypeLookupFailed + 2;
      if ( v5 != (char *)v53 )
        operator delete(v5);
      _cxa_throw(
        v45,
        (struct type_info *)&`typeinfo for'mysqlpp::TypeLookupFailed,
        (void (__fastcall *)(void *))mysqlpp::TypeLookupFailed::~TypeLookupFailed);
    }
    v46 = (unsigned __int8)v25._M_node[1]._M_parent;
    v26 = operator new(0x18uLL);
    v27 = v49;
    v28 = pd;
    *(_QWORD *)v26 = 0LL;
    *(_QWORD *)(v26 + 8) = 0LL;
    *(_WORD *)(v26 + 16) = v46;
    mysqlpp::SQLBuffer::replace_buffer((mysqlpp::SQLBuffer *const)v26, v28, v27);
    __k.counted_ = (mysqlpp::SQLBuffer *)v26;
    __k.refs_ = 0LL;
    v29 = (size_t *)operator new(8uLL);
    v30 = __k.counted_;
    v31 = this->buffer_.counted_;
    *v29 = 1LL;
    this->buffer_.counted_ = v30;
    v32 = this->buffer_.refs_;
    this->buffer_.refs_ = v29;
    __k.counted_ = v31;
    __k.refs_ = v32;
    mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(&__k);
    if ( pd != v50 )
      operator delete(pd);
    v54 = (char *)&`vtable for'std::ostringstream + 24;
    v65[0] = (__int64)&`vtable for'std::ostringstream + 64;
    v55 = (__int64)&`vtable for'std::stringbuf + 16;
    if ( v63[0] != v64 )
      operator delete(v63[0]);
    v55 = (__int64)&`vtable for'std::streambuf + 16;
    std::locale::~locale(&v61);
    v33 = *((_QWORD *)v21 - 3);
    v54 = v21;
    *(char **)((char *)&v54 + v33) = v47;
    v65[0] = (__int64)&`vtable for'std::ios + 16;
    std::ios_base::~ios_base((std::ios_base *)v65);
  }
};

// Line 319: range 000000000CF8FF40-000000000CF9081E
void __fastcall mysqlpp::SQLTypeAdapter::SQLTypeAdapter(
        __int64 a1,
        char a2,
        double a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        void *a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        char *a17,
        __int64 a18,
        char a19)
{
  char *v19; // rsi
  __int64 v20; // rdx
  std::forward_iterator_tag v21; // cl
  char *v22; // rdi
  std::_Rb_tree<const std::type_info*,std::pair<const std::type_info* const,unsigned char>,std::_Select1st<std::pair<const std::type_info* const,unsigned char> >,mysqlpp::type_info_cmp,std::allocator<std::pair<const std::type_info* const,unsigned char> > >::const_iterator v24; // rax
  unsigned __int8 M_parent; // bl
  mysqlpp::SQLBuffer *v26; // rax
  mysqlpp::SQLBuffer *v27; // r13
  _QWORD *v28; // rax
  mysqlpp::SQLBuffer *counted; // rdx
  mysqlpp::SQLBuffer *v30; // rcx
  size_t *v31; // rdx
  char *v32; // rbx
  char *v33; // rax
  __int64 v34; // rdi
  char **v35; // rdi
  std::_Rb_tree<const std::type_info*,std::pair<const std::type_info* const,unsigned char>,std::_Select1st<std::pair<const std::type_info* const,unsigned char> >,mysqlpp::type_info_cmp,std::allocator<std::pair<const std::type_info* const,unsigned char> > >::const_iterator v36; // rax
  __int64 v37; // r13
  mysqlpp::SQLBuffer::size_type v38; // rdx
  char *v39; // rsi
  _QWORD *v40; // rax
  mysqlpp::SQLBuffer *v41; // rdx
  mysqlpp::SQLBuffer *v42; // rcx
  size_t *v43; // rdx
  __int64 v44; // rax
  mysqlpp::SQLBuffer *v45; // rbx
  __int64 v46; // r15
  const char *data; // rdi
  _QWORD *v48; // rdi
  const char *v49; // r13
  size_t v50; // rax
  char *exception; // r13
  __int64 v52; // rdi
  char **v53; // rdi
  const char *v54; // r13
  size_t v55; // rax
  __int64 v56; // rdx
  std::forward_iterator_tag v57; // cl
  __int64 v58; // r8
  __int64 v59; // r9
  char *v60; // [rsp+10h] [rbp-398h]
  unsigned __int8 v61; // [rsp+2Fh] [rbp-379h]
  char *pd; // [rsp+30h] [rbp-378h] BYREF
  mysqlpp::SQLBuffer::size_type length; // [rsp+38h] [rbp-370h]
  char v64[16]; // [rsp+40h] [rbp-368h] BYREF
  char v65[32]; // [rsp+50h] [rbp-358h] BYREF
  char *__beg; // [rsp+70h] [rbp-338h] BYREF
  __int64 v67; // [rsp+78h] [rbp-330h] BYREF
  __int64 v68[2]; // [rsp+80h] [rbp-328h] BYREF
  unsigned __int64 v69; // [rsp+90h] [rbp-318h]
  const char *v70; // [rsp+98h] [rbp-310h]
  unsigned __int64 v71; // [rsp+A0h] [rbp-308h]
  __int64 v72; // [rsp+A8h] [rbp-300h]
  std::locale v73; // [rsp+B0h] [rbp-2F8h] BYREF
  int v74; // [rsp+B8h] [rbp-2F0h]
  void *v75[2]; // [rsp+C0h] [rbp-2E8h] BYREF
  char v76[16]; // [rsp+D0h] [rbp-2D8h] BYREF
  __int64 v77[28]; // [rsp+E0h] [rbp-2C8h] BYREF
  __int16 v78; // [rsp+1C0h] [rbp-1E8h]
  __int64 v79; // [rsp+1C8h] [rbp-1E0h]
  __int64 v80; // [rsp+1D0h] [rbp-1D8h]
  __int64 v81; // [rsp+1D8h] [rbp-1D0h]
  __int64 v82; // [rsp+1E0h] [rbp-1C8h]
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > __k; // [rsp+1F0h] [rbp-1B8h] BYREF
  __int64 v84; // [rsp+200h] [rbp-1A8h]
  __int64 v85; // [rsp+208h] [rbp-1A0h]
  __int64 v86; // [rsp+210h] [rbp-198h]
  __int64 v87; // [rsp+218h] [rbp-190h]
  __int64 v88; // [rsp+220h] [rbp-188h]
  __int64 v89; // [rsp+228h] [rbp-180h]
  std::locale v90; // [rsp+230h] [rbp-178h] BYREF
  int v91; // [rsp+238h] [rbp-170h]
  char *v92; // [rsp+240h] [rbp-168h]
  __int64 v93; // [rsp+248h] [rbp-160h]
  char v94[16]; // [rsp+250h] [rbp-158h] BYREF
  __int64 v95[27]; // [rsp+260h] [rbp-148h] BYREF
  __int64 v96; // [rsp+338h] [rbp-70h]
  __int16 v97; // [rsp+340h] [rbp-68h]
  __int64 v98; // [rsp+348h] [rbp-60h]
  __int64 v99; // [rsp+350h] [rbp-58h]
  __int64 v100; // [rsp+358h] [rbp-50h]
  __int64 v101; // [rsp+360h] [rbp-48h]

  *(_BYTE *)(a1 + 16) = 0;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( a3 > 1.797693134862316e308 || a2 )
  {
    __k.counted_ = (mysqlpp::SQLBuffer *)&`typeinfo for'void;
    v24._M_node = std::_Rb_tree<std::type_info const*,std::pair<std::type_info const* const,unsigned char>,std::_Select1st<std::pair<std::type_info const* const,unsigned char>>,mysqlpp::type_info_cmp,std::allocator<std::pair<std::type_info const* const,unsigned char>>>::find(
                    &mysqlpp::mysql_type_info::lookups.map_._M_t,
                    (const std::type_info *const *)&__k)._M_node;
    if ( (std::_Rb_tree_header *)v24._M_node == &mysqlpp::mysql_type_info::lookups.map_._M_t._M_impl.std::_Rb_tree_header )
    {
      std::ios_base::ios_base((std::ios_base *)v95);
      v97 = 0;
      v95[0] = (__int64)&`vtable for'std::ios + 16;
      v96 = 0LL;
      v45 = (mysqlpp::SQLBuffer *)*((_QWORD *)&edata + 1);
      v46 = *((_QWORD *)&edata + 2);
      v98 = 0LL;
      v99 = 0LL;
      data = v45[-1].data_;
      __k.counted_ = v45;
      v100 = 0LL;
      v101 = 0LL;
      v48 = (mysqlpp::SQLBuffer **)((char *)&__k.counted_ + (_QWORD)data);
      *v48 = v46;
      std::ios::init(v48, 0LL);
      v84 = 0LL;
      v85 = 0LL;
      v86 = 0LL;
      v95[0] = (__int64)&`vtable for'std::ostringstream + 64;
      __k.counted_ = (mysqlpp::SQLBuffer *)((char *)&`vtable for'std::ostringstream + 24);
      v87 = 0LL;
      __k.refs_ = (size_t *)((char *)&`vtable for'std::streambuf + 16);
      v88 = 0LL;
      v89 = 0LL;
      std::locale::locale(&v90);
      v91 = 16;
      v94[0] = 0;
      __k.refs_ = (size_t *)((char *)&`vtable for'std::stringbuf + 16);
      v92 = v94;
      v93 = 0LL;
      std::ios::init(v95, &__k.refs_);
      std::__ostream_insert<char,std::char_traits<char>>(&__k, "Failed to find MySQL C API type ID for ", 39LL);
      v49 = (const char *)((**((_BYTE **)&`typeinfo for'void + 1) == 42) + *((_QWORD *)&`typeinfo for'void + 1));
      v50 = strlen(v49);
      std::__ostream_insert<char,std::char_traits<char>>(&__k, v49, v50);
      exception = (char *)__cxa_allocate_exception(0x28uLL);
      std::stringbuf::str(&__beg, &__k.refs_);
      v19 = __beg;
      v20 = v67;
      *(_QWORD *)exception = &`vtable for'mysqlpp::Exception + 2;
      *((_QWORD *)exception + 1) = exception + 24;
      std::string::_M_construct<char *>((std::string *const)(exception + 8), v19, &v19[v20], v21);
      v22 = __beg;
      *(_QWORD *)exception = &`vtable for'mysqlpp::TypeLookupFailed + 2;
      if ( v22 != (char *)v68 )
        operator delete(v22);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::TypeLookupFailed,
        (void (__fastcall *)(void *))mysqlpp::TypeLookupFailed::~TypeLookupFailed);
    }
    M_parent = (unsigned __int8)v24._M_node[1]._M_parent;
    v26 = (mysqlpp::SQLBuffer *)operator new(0x18uLL);
    v26->data_ = 0LL;
    v27 = v26;
    v26->length_ = 0LL;
    v26->type_.num_ = M_parent;
    v26->is_null_ = 1;
    mysqlpp::SQLBuffer::replace_buffer(
      v26,
      mysqlpp::null_str[abi:cxx11]._M_dataplus._M_p,
      mysqlpp::null_str[abi:cxx11]._M_string_length);
    __k.counted_ = v27;
    __k.refs_ = 0LL;
    v28 = (_QWORD *)operator new(8uLL);
    counted = __k.counted_;
    v30 = *(mysqlpp::SQLBuffer **)a1;
    *v28 = 1LL;
    *(_QWORD *)a1 = counted;
    v31 = *(size_t **)(a1 + 8);
    *(_QWORD *)(a1 + 8) = v28;
    __k.counted_ = v30;
    __k.refs_ = v31;
    mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(&__k);
  }
  else
  {
    std::ios_base::ios_base((std::ios_base *)v77);
    v78 = 0;
    v77[0] = (__int64)&`vtable for'std::ios + 16;
    v77[27] = 0LL;
    v79 = 0LL;
    v32 = (char *)*((_QWORD *)&edata + 1);
    v80 = 0LL;
    v33 = (char *)*((_QWORD *)&edata + 2);
    v34 = *((_QWORD *)v32 - 3);
    __beg = v32;
    v81 = 0LL;
    v35 = (char **)((char *)&__beg + v34);
    v60 = v33;
    v82 = 0LL;
    *v35 = v33;
    std::ios::init(v35, 0LL);
    v68[0] = 0LL;
    v68[1] = 0LL;
    v69 = 0LL;
    __beg = (char *)&`vtable for'std::ostringstream + 24;
    v70 = 0LL;
    v71 = 0LL;
    v77[0] = (__int64)&`vtable for'std::ostringstream + 64;
    v72 = 0LL;
    v67 = (__int64)&`vtable for'std::streambuf + 16;
    std::locale::locale(&v73);
    v74 = 16;
    v76[0] = 0;
    v67 = (__int64)&`vtable for'std::stringbuf + 16;
    v75[0] = v76;
    v75[1] = 0LL;
    std::ios::init(v77, &v67);
    v77[1] = 17LL;
    std::ostream::_M_insert<double>(&__beg, a3);
    v64[0] = 0;
    pd = v64;
    length = 0LL;
    if ( v71 )
    {
      if ( v71 <= v69 )
        std::string::_M_replace(&pd, 0LL, 0LL, v70, v69 - (_QWORD)v70);
      else
        std::string::_M_replace(&pd, 0LL, 0LL, v70, v71 - (_QWORD)v70);
    }
    else
    {
      std::string::_M_assign(&pd, v75);
    }
    __k.counted_ = (mysqlpp::SQLBuffer *)&`typeinfo for'double;
    v36._M_node = std::_Rb_tree<std::type_info const*,std::pair<std::type_info const* const,unsigned char>,std::_Select1st<std::pair<std::type_info const* const,unsigned char>>,mysqlpp::type_info_cmp,std::allocator<std::pair<std::type_info const* const,unsigned char>>>::find(
                    &mysqlpp::mysql_type_info::lookups.map_._M_t,
                    (const std::type_info *const *)&__k)._M_node;
    if ( (std::_Rb_tree_header *)v36._M_node == &mysqlpp::mysql_type_info::lookups.map_._M_t._M_impl.std::_Rb_tree_header )
    {
      std::ios_base::ios_base((std::ios_base *)v95);
      __k.counted_ = (mysqlpp::SQLBuffer *)v32;
      v96 = 0LL;
      v98 = 0LL;
      v95[0] = (__int64)&`vtable for'std::ios + 16;
      v97 = 0;
      v52 = *((_QWORD *)v32 - 3);
      v99 = 0LL;
      v100 = 0LL;
      v53 = (char **)((char *)&__k + v52);
      v101 = 0LL;
      *v53 = v60;
      std::ios::init(v53, 0LL);
      v84 = 0LL;
      v85 = 0LL;
      v86 = 0LL;
      __k.counted_ = (mysqlpp::SQLBuffer *)((char *)&`vtable for'std::ostringstream + 24);
      v87 = 0LL;
      v88 = 0LL;
      v95[0] = (__int64)&`vtable for'std::ostringstream + 64;
      v89 = 0LL;
      __k.refs_ = (size_t *)((char *)&`vtable for'std::streambuf + 16);
      std::locale::locale(&v90);
      v91 = 16;
      v94[0] = 0;
      __k.refs_ = (size_t *)((char *)&`vtable for'std::stringbuf + 16);
      v92 = v94;
      v93 = 0LL;
      std::ios::init(v95, &__k.refs_);
      std::__ostream_insert<char,std::char_traits<char>>(&__k, "Failed to find MySQL C API type ID for ", 39LL);
      v54 = (const char *)((**((_BYTE **)&`typeinfo for'double + 1) == 42) + *((_QWORD *)&`typeinfo for'double + 1));
      v55 = strlen(v54);
      std::__ostream_insert<char,std::char_traits<char>>(&__k, v54, v55);
      __cxa_allocate_exception(0x28uLL);
      std::stringbuf::str(v65, &__k.refs_);
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(
        (__int64)v65,
        (__int64)&__k.refs_,
        v56,
        v57,
        v58,
        v59,
        a8,
        a9,
        a10,
        a11,
        a12,
        a13,
        a14,
        a15,
        a16,
        a17,
        a18,
        a19);
    }
    v61 = (unsigned __int8)v36._M_node[1]._M_parent;
    v37 = operator new(0x18uLL);
    v38 = length;
    v39 = pd;
    *(_QWORD *)v37 = 0LL;
    *(_QWORD *)(v37 + 8) = 0LL;
    *(_WORD *)(v37 + 16) = v61;
    mysqlpp::SQLBuffer::replace_buffer((mysqlpp::SQLBuffer *const)v37, v39, v38);
    __k.counted_ = (mysqlpp::SQLBuffer *)v37;
    __k.refs_ = 0LL;
    v40 = (_QWORD *)operator new(8uLL);
    v41 = __k.counted_;
    v42 = *(mysqlpp::SQLBuffer **)a1;
    *v40 = 1LL;
    *(_QWORD *)a1 = v41;
    v43 = *(size_t **)(a1 + 8);
    *(_QWORD *)(a1 + 8) = v40;
    __k.counted_ = v42;
    __k.refs_ = v43;
    mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(&__k);
    if ( pd != v64 )
      operator delete(pd);
    __beg = (char *)&`vtable for'std::ostringstream + 24;
    v77[0] = (__int64)&`vtable for'std::ostringstream + 64;
    v67 = (__int64)&`vtable for'std::stringbuf + 16;
    if ( v75[0] != v76 )
      operator delete(v75[0]);
    v67 = (__int64)&`vtable for'std::streambuf + 16;
    std::locale::~locale(&v73);
    v44 = *((_QWORD *)v32 - 3);
    __beg = v32;
    *(char **)((char *)&__beg + v44) = v60;
    v77[0] = (__int64)&`vtable for'std::ios + 16;
    std::ios_base::~ios_base((std::ios_base *)v77);
  }
};

// Line 339: range 000000000CF8DB00-000000000CF8DBB6
void __fastcall mysqlpp::SQLTypeAdapter::SQLTypeAdapter(mysqlpp::SQLTypeAdapter *this, const mysqlpp::Date *a2)
{
  unsigned __int8 v3; // r12
  mysqlpp::SQLBuffer *v4; // rax
  std::string::size_type M_string_length; // rdx
  mysqlpp::SQLBuffer *v6; // rbp
  const char *M_p; // rsi
  size_t *v8; // rax
  std::string *v9; // rdi
  std::string pd; // [rsp+0h] [rbp-38h] BYREF

  mysqlpp::stream2string<mysqlpp::Date>(&pd, a2);
  v3 = *mysqlpp::mysql_ti_sql_type_info_lookup::operator[](
          &mysqlpp::mysql_type_info::lookups,
          *((const std::type_info **)a2->_vptr_Comparable - 1));
  v4 = (mysqlpp::SQLBuffer *)operator new(0x18uLL);
  v4->type_.num_ = v3;
  M_string_length = pd._M_string_length;
  v6 = v4;
  v4->data_ = 0LL;
  M_p = pd._M_dataplus._M_p;
  v4->length_ = 0LL;
  v4->is_null_ = 0;
  mysqlpp::SQLBuffer::replace_buffer(v4, M_p, M_string_length);
  this->buffer_.counted_ = v6;
  this->buffer_.refs_ = 0LL;
  v8 = (size_t *)operator new(8uLL);
  v9 = (std::string *)pd._M_dataplus._M_p;
  *v8 = 1LL;
  this->buffer_.refs_ = v8;
  if ( v9 != (std::string *)&pd._anon_0 )
    operator delete(v9);
  this->is_processed_ = 0;
};

// Line 346: range 000000000CF8E9A0-000000000CF8EAB2
void __fastcall mysqlpp::SQLTypeAdapter::SQLTypeAdapter(
        __int64 a1,
        const mysqlpp::Null<mysqlpp::Date,mysqlpp::NullIsNull> *a2,
        __int64 a3,
        std::forward_iterator_tag a4)
{
  const std::type_info *v6; // rsi
  unsigned __int8 v7; // r13
  mysqlpp::SQLBuffer *v8; // rbp
  std::string::size_type M_string_length; // rdx
  bool is_null; // al
  const char *M_p; // rsi
  _QWORD *v12; // rax
  std::string *v13; // rdi
  std::string pd[2]; // [rsp+0h] [rbp-48h] BYREF

  if ( a2->is_null )
  {
    pd[0]._M_dataplus._M_p = pd[0]._anon_0._M_local_buf;
    std::string::_M_construct<char *>(
      pd,
      mysqlpp::null_str[abi:cxx11]._M_dataplus._M_p,
      &mysqlpp::null_str[abi:cxx11]._M_dataplus._M_p[mysqlpp::null_str[abi:cxx11]._M_string_length],
      a4);
  }
  else
  {
    mysqlpp::stream2string<mysqlpp::Null<mysqlpp::Date,mysqlpp::NullIsNull>>(pd, a2);
  }
  if ( a2->is_null )
    v6 = (const std::type_info *)&`typeinfo for'void;
  else
    v6 = (const std::type_info *)&`typeinfo for'mysqlpp::Date;
  v7 = *mysqlpp::mysql_ti_sql_type_info_lookup::operator[](&mysqlpp::mysql_type_info::lookups, v6);
  v8 = (mysqlpp::SQLBuffer *)operator new(0x18uLL);
  M_string_length = pd[0]._M_string_length;
  is_null = a2->is_null;
  M_p = pd[0]._M_dataplus._M_p;
  v8->type_.num_ = v7;
  v8->data_ = 0LL;
  v8->length_ = 0LL;
  v8->is_null_ = is_null;
  mysqlpp::SQLBuffer::replace_buffer(v8, M_p, M_string_length);
  *(_QWORD *)a1 = v8;
  *(_QWORD *)(a1 + 8) = 0LL;
  v12 = (_QWORD *)operator new(8uLL);
  v13 = (std::string *)pd[0]._M_dataplus._M_p;
  *v12 = 1LL;
  *(_QWORD *)(a1 + 8) = v12;
  if ( v13 != (std::string *)&pd[0]._anon_0 )
    operator delete(v13);
  *(_BYTE *)(a1 + 16) = 0;
};

// Line 354: range 000000000CF8DBC0-000000000CF8DC76
void __fastcall mysqlpp::SQLTypeAdapter::SQLTypeAdapter(mysqlpp::SQLTypeAdapter *this, const mysqlpp::DateTime *a2)
{
  unsigned __int8 v3; // r12
  mysqlpp::SQLBuffer *v4; // rax
  std::string::size_type M_string_length; // rdx
  mysqlpp::SQLBuffer *v6; // rbp
  const char *M_p; // rsi
  size_t *v8; // rax
  std::string *v9; // rdi
  std::string pd; // [rsp+0h] [rbp-38h] BYREF

  mysqlpp::stream2string<mysqlpp::DateTime>(&pd, a2);
  v3 = *mysqlpp::mysql_ti_sql_type_info_lookup::operator[](
          &mysqlpp::mysql_type_info::lookups,
          *((const std::type_info **)a2->_vptr_Comparable - 1));
  v4 = (mysqlpp::SQLBuffer *)operator new(0x18uLL);
  v4->type_.num_ = v3;
  M_string_length = pd._M_string_length;
  v6 = v4;
  v4->data_ = 0LL;
  M_p = pd._M_dataplus._M_p;
  v4->length_ = 0LL;
  v4->is_null_ = 0;
  mysqlpp::SQLBuffer::replace_buffer(v4, M_p, M_string_length);
  this->buffer_.counted_ = v6;
  this->buffer_.refs_ = 0LL;
  v8 = (size_t *)operator new(8uLL);
  v9 = (std::string *)pd._M_dataplus._M_p;
  *v8 = 1LL;
  this->buffer_.refs_ = v8;
  if ( v9 != (std::string *)&pd._anon_0 )
    operator delete(v9);
  this->is_processed_ = 0;
};

// Line 361: range 000000000CF8EAC0-000000000CF8EBD2
void __fastcall mysqlpp::SQLTypeAdapter::SQLTypeAdapter(
        __int64 a1,
        const mysqlpp::Null<mysqlpp::DateTime,mysqlpp::NullIsNull> *a2,
        __int64 a3,
        std::forward_iterator_tag a4)
{
  const std::type_info *v6; // rsi
  unsigned __int8 v7; // r13
  mysqlpp::SQLBuffer *v8; // rbp
  std::string::size_type M_string_length; // rdx
  bool is_null; // al
  const char *M_p; // rsi
  _QWORD *v12; // rax
  std::string *v13; // rdi
  std::string pd[2]; // [rsp+0h] [rbp-48h] BYREF

  if ( a2->is_null )
  {
    pd[0]._M_dataplus._M_p = pd[0]._anon_0._M_local_buf;
    std::string::_M_construct<char *>(
      pd,
      mysqlpp::null_str[abi:cxx11]._M_dataplus._M_p,
      &mysqlpp::null_str[abi:cxx11]._M_dataplus._M_p[mysqlpp::null_str[abi:cxx11]._M_string_length],
      a4);
  }
  else
  {
    mysqlpp::stream2string<mysqlpp::Null<mysqlpp::DateTime,mysqlpp::NullIsNull>>(pd, a2);
  }
  if ( a2->is_null )
    v6 = (const std::type_info *)&`typeinfo for'void;
  else
    v6 = (const std::type_info *)&`typeinfo for'mysqlpp::DateTime;
  v7 = *mysqlpp::mysql_ti_sql_type_info_lookup::operator[](&mysqlpp::mysql_type_info::lookups, v6);
  v8 = (mysqlpp::SQLBuffer *)operator new(0x18uLL);
  M_string_length = pd[0]._M_string_length;
  is_null = a2->is_null;
  M_p = pd[0]._M_dataplus._M_p;
  v8->type_.num_ = v7;
  v8->data_ = 0LL;
  v8->length_ = 0LL;
  v8->is_null_ = is_null;
  mysqlpp::SQLBuffer::replace_buffer(v8, M_p, M_string_length);
  *(_QWORD *)a1 = v8;
  *(_QWORD *)(a1 + 8) = 0LL;
  v12 = (_QWORD *)operator new(8uLL);
  v13 = (std::string *)pd[0]._M_dataplus._M_p;
  *v12 = 1LL;
  *(_QWORD *)(a1 + 8) = v12;
  if ( v13 != (std::string *)&pd[0]._anon_0 )
    operator delete(v13);
  *(_BYTE *)(a1 + 16) = 0;
};

// Line 369: range 000000000CF8DC80-000000000CF8DD36
void __fastcall mysqlpp::SQLTypeAdapter::SQLTypeAdapter(mysqlpp::SQLTypeAdapter *this, const mysqlpp::Time *a2)
{
  unsigned __int8 v3; // r12
  mysqlpp::SQLBuffer *v4; // rax
  std::string::size_type M_string_length; // rdx
  mysqlpp::SQLBuffer *v6; // rbp
  const char *M_p; // rsi
  size_t *v8; // rax
  std::string *v9; // rdi
  std::string pd; // [rsp+0h] [rbp-38h] BYREF

  mysqlpp::stream2string<mysqlpp::Time>(&pd, a2);
  v3 = *mysqlpp::mysql_ti_sql_type_info_lookup::operator[](
          &mysqlpp::mysql_type_info::lookups,
          *((const std::type_info **)a2->_vptr_Comparable - 1));
  v4 = (mysqlpp::SQLBuffer *)operator new(0x18uLL);
  v4->type_.num_ = v3;
  M_string_length = pd._M_string_length;
  v6 = v4;
  v4->data_ = 0LL;
  M_p = pd._M_dataplus._M_p;
  v4->length_ = 0LL;
  v4->is_null_ = 0;
  mysqlpp::SQLBuffer::replace_buffer(v4, M_p, M_string_length);
  this->buffer_.counted_ = v6;
  this->buffer_.refs_ = 0LL;
  v8 = (size_t *)operator new(8uLL);
  v9 = (std::string *)pd._M_dataplus._M_p;
  *v8 = 1LL;
  this->buffer_.refs_ = v8;
  if ( v9 != (std::string *)&pd._anon_0 )
    operator delete(v9);
  this->is_processed_ = 0;
};

// Line 376: range 000000000CF8EBE0-000000000CF8ECF2
void __fastcall mysqlpp::SQLTypeAdapter::SQLTypeAdapter(
        __int64 a1,
        const mysqlpp::Null<mysqlpp::Time,mysqlpp::NullIsNull> *a2,
        __int64 a3,
        std::forward_iterator_tag a4)
{
  const std::type_info *v6; // rsi
  unsigned __int8 v7; // r13
  mysqlpp::SQLBuffer *v8; // rbp
  std::string::size_type M_string_length; // rdx
  bool is_null; // al
  const char *M_p; // rsi
  _QWORD *v12; // rax
  std::string *v13; // rdi
  std::string pd[2]; // [rsp+0h] [rbp-48h] BYREF

  if ( a2->is_null )
  {
    pd[0]._M_dataplus._M_p = pd[0]._anon_0._M_local_buf;
    std::string::_M_construct<char *>(
      pd,
      mysqlpp::null_str[abi:cxx11]._M_dataplus._M_p,
      &mysqlpp::null_str[abi:cxx11]._M_dataplus._M_p[mysqlpp::null_str[abi:cxx11]._M_string_length],
      a4);
  }
  else
  {
    mysqlpp::stream2string<mysqlpp::Null<mysqlpp::Time,mysqlpp::NullIsNull>>(pd, a2);
  }
  if ( a2->is_null )
    v6 = (const std::type_info *)&`typeinfo for'void;
  else
    v6 = (const std::type_info *)&`typeinfo for'mysqlpp::Time;
  v7 = *mysqlpp::mysql_ti_sql_type_info_lookup::operator[](&mysqlpp::mysql_type_info::lookups, v6);
  v8 = (mysqlpp::SQLBuffer *)operator new(0x18uLL);
  M_string_length = pd[0]._M_string_length;
  is_null = a2->is_null;
  M_p = pd[0]._M_dataplus._M_p;
  v8->type_.num_ = v7;
  v8->data_ = 0LL;
  v8->length_ = 0LL;
  v8->is_null_ = is_null;
  mysqlpp::SQLBuffer::replace_buffer(v8, M_p, M_string_length);
  *(_QWORD *)a1 = v8;
  *(_QWORD *)(a1 + 8) = 0LL;
  v12 = (_QWORD *)operator new(8uLL);
  v13 = (std::string *)pd[0]._M_dataplus._M_p;
  *v12 = 1LL;
  *(_QWORD *)(a1 + 8) = v12;
  if ( v13 != (std::string *)&pd[0]._anon_0 )
    operator delete(v13);
  *(_BYTE *)(a1 + 16) = 0;
};

// Line 384: range 000000000CF8D160-000000000CF8D1EC
size_t *__fastcall mysqlpp::SQLTypeAdapter::SQLTypeAdapter(mysqlpp::SQLTypeAdapter *this, const mysqlpp::null_type *a2)
{
  unsigned __int8 v2; // r12
  mysqlpp::SQLBuffer *v3; // rax
  mysqlpp::SQLBuffer *v4; // rbp
  size_t *result; // rax

  v2 = *mysqlpp::mysql_ti_sql_type_info_lookup::operator[](
          &mysqlpp::mysql_type_info::lookups,
          (const std::type_info *)&`typeinfo for'void);
  v3 = (mysqlpp::SQLBuffer *)operator new(0x18uLL);
  v3->data_ = 0LL;
  v4 = v3;
  v3->length_ = 0LL;
  v3->type_.num_ = v2;
  v3->is_null_ = 1;
  mysqlpp::SQLBuffer::replace_buffer(
    v3,
    mysqlpp::null_str[abi:cxx11]._M_dataplus._M_p,
    mysqlpp::null_str[abi:cxx11]._M_string_length);
  this->buffer_.counted_ = v4;
  this->buffer_.refs_ = 0LL;
  result = (size_t *)operator new(8uLL);
  *result = 1LL;
  this->buffer_.refs_ = result;
  this->is_processed_ = 0;
  return result;
};

// Line 385: range 000000000C738734-000000000C738744
void __fastcall __noreturn mysqlpp::SQLTypeAdapter::SQLTypeAdapter()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  operator delete(v0, 0x18uLL);
  _Unwind_Resume(v1);
};

// Line 392: range 000000000CF8CD80-000000000CF8CDCD
mysqlpp::SQLTypeAdapter *__fastcall mysqlpp::SQLTypeAdapter::assign(
        mysqlpp::SQLTypeAdapter *const this,
        const mysqlpp::SQLTypeAdapter *sta)
{
  size_t *refs; // rax
  mysqlpp::SQLBuffer *counted; // rdx
  mysqlpp::SQLBuffer *v4; // rcx
  size_t *v5; // rdx
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > v7; // [rsp+0h] [rbp-18h] BYREF

  refs = 0LL;
  counted = sta->buffer_.counted_;
  if ( sta->buffer_.counted_ )
  {
    refs = sta->buffer_.refs_;
    ++*refs;
  }
  v4 = this->buffer_.counted_;
  this->buffer_.counted_ = counted;
  v5 = this->buffer_.refs_;
  this->buffer_.refs_ = refs;
  v7.counted_ = v4;
  v7.refs_ = v5;
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(&v7);
  this->is_processed_ = 0;
  return this;
};

// Line 405: range 000000000C738646-000000000C738656
void __fastcall __noreturn mysqlpp::SQLTypeAdapter::assign()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  operator delete(v0, 0x18uLL);
  _Unwind_Resume(v1);
};

// Line 412: range 000000000CF8D200-000000000CF8D2BC
mysqlpp::SQLTypeAdapter *__fastcall mysqlpp::SQLTypeAdapter::assign(
        mysqlpp::SQLTypeAdapter *this,
        const mysqlpp::null_type *a2)
{
  unsigned __int8 v2; // bl
  mysqlpp::SQLBuffer *v3; // rax
  mysqlpp::SQLBuffer *v4; // rbp
  size_t *v5; // rax
  mysqlpp::SQLBuffer *counted; // rcx
  size_t *refs; // rdx
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > v9; // [rsp+0h] [rbp-28h] BYREF

  v2 = *mysqlpp::mysql_ti_sql_type_info_lookup::operator[](
          &mysqlpp::mysql_type_info::lookups,
          (const std::type_info *)&`typeinfo for'void);
  v3 = (mysqlpp::SQLBuffer *)operator new(0x18uLL);
  v3->data_ = 0LL;
  v4 = v3;
  v3->length_ = 0LL;
  v3->type_.num_ = v2;
  v3->is_null_ = 1;
  mysqlpp::SQLBuffer::replace_buffer(
    v3,
    mysqlpp::null_str[abi:cxx11]._M_dataplus._M_p,
    mysqlpp::null_str[abi:cxx11]._M_string_length);
  v9.counted_ = v4;
  v9.refs_ = 0LL;
  v5 = (size_t *)operator new(8uLL);
  counted = this->buffer_.counted_;
  *v5 = 1LL;
  this->buffer_.counted_ = v4;
  refs = this->buffer_.refs_;
  this->buffer_.refs_ = v5;
  v9.counted_ = counted;
  v9.refs_ = refs;
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(&v9);
  this->is_processed_ = 0;
  return this;
};

// Line 413: range 000000000C73876C-000000000C73877C
void __fastcall __noreturn mysqlpp::SQLTypeAdapter::assign()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  operator delete(v0, 0x18uLL);
  _Unwind_Resume(v1);
};

// Line 420: range 000000000CF8CD40-000000000CF8CD71
__int64 __fastcall mysqlpp::SQLTypeAdapter::at(
        mysqlpp::SQLTypeAdapter *this,
        mysqlpp::SQLTypeAdapter::size_type bad_index)
{
  mysqlpp::BadIndex *exception; // r12
  int v3; // eax

  if ( !this->buffer_.counted_ )
    mysqlpp::SQLTypeAdapter::at();
  if ( bad_index > mysqlpp::SQLTypeAdapter::length(this) )
  {
    exception = (mysqlpp::BadIndex *)__cxa_allocate_exception(0x28uLL);
    v3 = mysqlpp::SQLTypeAdapter::length(this);
    mysqlpp::BadIndex::BadIndex(exception, "Not enough chars in SQLTypeAdapter", bad_index, v3);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'mysqlpp::BadIndex,
      (void (__fastcall *)(void *))mysqlpp::BadIndex::~BadIndex);
  }
  return (unsigned __int8)this->buffer_.counted_->data_[bad_index];
};

// Line 431: range 000000000C7385A2-000000000C7385D4
void __fastcall __noreturn mysqlpp::SQLTypeAdapter::at()
{
  int v0; // ebx
  mysqlpp::BadIndex *exception; // r12

  exception = (mysqlpp::BadIndex *)__cxa_allocate_exception(0x28uLL);
  mysqlpp::BadIndex::BadIndex(exception, "SQLTypeAdapter buffer not initialized", v0, -1);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'mysqlpp::BadIndex,
    (void (__fastcall *)(void *))mysqlpp::BadIndex::~BadIndex);
};

// Line 437: range 000000000CF8CCA0-000000000CF8CCE8
int __fastcall mysqlpp::SQLTypeAdapter::compare(
        const mysqlpp::SQLTypeAdapter *const this,
        const mysqlpp::SQLTypeAdapter *other)
{
  const char *data; // r12
  mysqlpp::SQLTypeAdapter::size_type v3; // rax
  __int64 v4; // rax

  if ( other->buffer_.counted_ )
  {
    data = other->buffer_.counted_->data_;
    v3 = mysqlpp::SQLTypeAdapter::length(this);
    LODWORD(v4) = mysqlpp::SQLTypeAdapter::compare(this, 0LL, v3, data);
  }
  else
  {
    return this->buffer_.counted_ != 0LL;
  }
  return v4;
};

// Line 448: range 000000000CF8CC40-000000000CF8CC64
int __fastcall mysqlpp::SQLTypeAdapter::compare(const mysqlpp::SQLTypeAdapter *const this, const std::string *other)
{
  const char *M_p; // r12
  mysqlpp::SQLTypeAdapter::size_type v3; // rax

  M_p = other->_M_dataplus._M_p;
  v3 = mysqlpp::SQLTypeAdapter::length(this);
  return mysqlpp::SQLTypeAdapter::compare(this, 0LL, v3, M_p);
};

// Line 456: range 000000000CF8CC20-000000000CF8CC23
int __fastcall mysqlpp::SQLTypeAdapter::compare(
        const mysqlpp::SQLTypeAdapter *const this,
        mysqlpp::SQLTypeAdapter::size_type pos,
        mysqlpp::SQLTypeAdapter::size_type num,
        std::string *other)
{
  return mysqlpp::SQLTypeAdapter::compare(this, pos, num, other->_M_dataplus._M_p);
};

// Line 461: range 000000000CF8CC70-000000000CF8CC94
int __fastcall mysqlpp::SQLTypeAdapter::compare(const mysqlpp::SQLTypeAdapter *const this, const char *other)
{
  mysqlpp::SQLTypeAdapter::size_type v2; // rax

  v2 = mysqlpp::SQLTypeAdapter::length(this);
  return mysqlpp::SQLTypeAdapter::compare(this, 0LL, v2, other);
};

// Line 468: range 000000000CF8CBC0-000000000CF8CC10
int __fastcall mysqlpp::SQLTypeAdapter::compare(
        const mysqlpp::SQLTypeAdapter *const this,
        mysqlpp::SQLTypeAdapter::size_type pos,
        mysqlpp::SQLTypeAdapter::size_type num,
        const char *other)
{
  const char *v6; // rax

  if ( !this->buffer_.counted_ )
    return other == 0LL ? 1 : -1;
  if ( !other )
    return 1;
  v6 = mysqlpp::SQLTypeAdapter::data(this);
  return strncmp(&v6[pos], other, num);
};

// Line 483: range 000000000CF8CBB0-000000000CF8CBBB
const char *__fastcall mysqlpp::SQLTypeAdapter::data(const mysqlpp::SQLTypeAdapter *const this)
{
  const char *result; // rax

  result = (const char *)this->buffer_.counted_;
  if ( this->buffer_.counted_ )
    return *(const char **)result;
  return result;
};

// Line 489: range 000000000CF8CC30-000000000CF8CC3E
mysqlpp::SQLTypeAdapter::size_type __fastcall mysqlpp::SQLTypeAdapter::length(
        const mysqlpp::SQLTypeAdapter *const this)
{
  mysqlpp::SQLTypeAdapter::size_type result; // rax

  result = 0LL;
  if ( this->buffer_.counted_ )
    return this->buffer_.counted_->length_;
  return result;
};

// Line 495: range 000000000CF8CCF0-000000000CF8CD0A
bool __fastcall mysqlpp::SQLTypeAdapter::escape_q(const mysqlpp::SQLTypeAdapter *const this)
{
  mysqlpp::SQLBuffer *counted; // rdi

  counted = this->buffer_.counted_;
  return counted && mysqlpp::mysql_type_info::escape_q(&counted->type_);
};

// Line 501: range 000000000CF8CDD0-000000000CF8CEAB
// attributes: thunk
mysqlpp::SQLTypeAdapter *__fastcall mysqlpp::SQLTypeAdapter::operator=(
        mysqlpp::SQLTypeAdapter *const this,
        const mysqlpp::SQLTypeAdapter *rhs)
{
  return mysqlpp::SQLTypeAdapter::assign(this, rhs);
};

// Line 507: range 000000000CF8D2D0-000000000CF8D3A0
// attributes: thunk
mysqlpp::SQLTypeAdapter *__fastcall mysqlpp::SQLTypeAdapter::operator=(
        mysqlpp::SQLTypeAdapter *const this,
        const mysqlpp::null_type *n)
{
  return mysqlpp::SQLTypeAdapter::assign(this, n);
};

// Line 515: range 000000000CF8CD10-000000000CF8CD25
bool __fastcall mysqlpp::SQLTypeAdapter::quote_q(const mysqlpp::SQLTypeAdapter *const this)
{
  mysqlpp::SQLBuffer *counted; // rdi

  counted = this->buffer_.counted_;
  return !counted || mysqlpp::SQLBuffer::quote_q(counted);
};

// Line 521: range 000000000CF8CD30-000000000CF8CD3E
int __fastcall mysqlpp::SQLTypeAdapter::type_id(const mysqlpp::SQLTypeAdapter *const this)
{
  int result; // eax

  result = 0;
  if ( this->buffer_.counted_ )
    return this->buffer_.counted_->type_.num_;
  return result;
};

// Line 524: range 000000000C747870-000000000C747899
void __cdecl GLOBAL__sub_I_stadapter_cpp()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
