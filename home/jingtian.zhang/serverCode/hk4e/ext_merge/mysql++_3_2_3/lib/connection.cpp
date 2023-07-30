// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql++_3_2_3/lib/connection.cpp

// Line 38: range 000000000CF7DEC0-000000000CF7DF26
__int64 __fastcall mysqlpp::Connection::Connection(mysqlpp::Connection *this, bool a2)
{
  mysqlpp::DBDriver *v2; // rbp
  __int64 result; // rax

  this->exceptions_ = a2;
  this->error_message_._M_dataplus._M_p = this->error_message_._anon_0._M_local_buf;
  this->error_message_._M_string_length = 0LL;
  this->_vptr_OptionalExceptions = (int (**)(...))(&`vtable for'mysqlpp::Connection + 2);
  this->error_message_._anon_0._M_local_buf[0] = 0;
  v2 = (mysqlpp::DBDriver *)operator new(0x5C8uLL);
  result = mysqlpp::DBDriver::DBDriver(v2);
  this->driver_ = v2;
  this->copacetic_ = 1;
  return result;
};

// Line 40: range 000000000C7372D4-000000000C7372F2
void __fastcall __noreturn mysqlpp::Connection::Connection()
{
  __int64 v0; // rbx
  void *v1; // rbp
  void *v2; // r12
  struct _Unwind_Exception *v3; // r13
  void *v4; // rdi

  operator delete(v1, 0x5C8uLL);
  v4 = *(void **)(v0 + 16);
  if ( v2 != v4 )
    operator delete(v4);
  _Unwind_Resume(v3);
};

// Line 46: range 000000000CF7E560-000000000CF7E603
__int64 __fastcall mysqlpp::Connection::Connection(
        mysqlpp::Connection *this,
        const char *a2,
        const char *a3,
        const char *a4,
        const char *a5,
        unsigned int a6)
{
  mysqlpp::DBDriver *v10; // rbp

  this->exceptions_ = 1;
  this->error_message_._M_string_length = 0LL;
  this->error_message_._anon_0._M_local_buf[0] = 0;
  this->_vptr_OptionalExceptions = (int (**)(...))(&`vtable for'mysqlpp::Connection + 2);
  this->error_message_._M_dataplus._M_p = this->error_message_._anon_0._M_local_buf;
  v10 = (mysqlpp::DBDriver *)operator new(0x5C8uLL);
  mysqlpp::DBDriver::DBDriver(v10);
  this->driver_ = v10;
  this->copacetic_ = 1;
  return mysqlpp::Connection::connect(this, a2, a3, a4, a5, a6);
};

// Line 49: range 000000000C7373AE-000000000C7373D1
void __fastcall __noreturn mysqlpp::Connection::Connection(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7)
{
  __int64 v7; // rbx
  void *v8; // rbp
  struct _Unwind_Exception *v9; // r12
  void *v10; // rdi

  operator delete(v8, 0x5C8uLL);
  v10 = *(void **)(v7 + 16);
  if ( a7 != v10 )
    operator delete(v10);
  _Unwind_Resume(v9);
};

// Line 64: range 000000000CF7E0E0-000000000CF7E157
void __fastcall mysqlpp::Connection::Connection(mysqlpp::Connection *this, const mysqlpp::Connection *other)
{
  bool exceptions; // al
  mysqlpp::DBDriver *v3; // r12

  exceptions = other->exceptions_;
  this->error_message_._anon_0._M_local_buf[0] = 0;
  this->error_message_._M_dataplus._M_p = this->error_message_._anon_0._M_local_buf;
  this->exceptions_ = exceptions;
  this->error_message_._M_string_length = 0LL;
  this->_vptr_OptionalExceptions = (int (**)(...))(&`vtable for'mysqlpp::Connection + 2);
  v3 = (mysqlpp::DBDriver *)operator new(0x5C8uLL);
  mysqlpp::DBDriver::DBDriver(v3, other->driver_);
  this->driver_ = v3;
  mysqlpp::Connection::copy(this, other);
};

// Line 66: range 000000000C7372F8-000000000C737316
void __fastcall __noreturn mysqlpp::Connection::Connection()
{
  __int64 v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  void *v2; // r12
  void *v3; // r13
  void *v4; // rdi

  operator delete(v2, 0x5C8uLL);
  v4 = *(void **)(v0 + 16);
  if ( v3 != v4 )
    operator delete(v4);
  _Unwind_Resume(v1);
};

// Line 72: range 000000000CF7E1D0-000000000CF7E1E2
void __fastcall mysqlpp::Connection::~Connection(mysqlpp::Connection *const this)
{
  mysqlpp::Connection::~Connection(this);
  operator delete(this, 0x40uLL);
};

// Line 72: range 000000000CF7E180-000000000CF7E1C1
void __fastcall mysqlpp::Connection::~Connection(mysqlpp::Connection *const this)
{
  mysqlpp::DBDriver *driver; // rdi
  mysqlpp::Connection *M_p; // rdi

  this->_vptr_OptionalExceptions = (int (**)(...))(&`vtable for'mysqlpp::Connection + 2);
  mysqlpp::Connection::disconnect(this);
  driver = this->driver_;
  if ( driver )
    (*((void (__fastcall **)(mysqlpp::DBDriver *))driver->_vptr_DBDriver + 1))(driver);
  M_p = (mysqlpp::Connection *)this->error_message_._M_dataplus._M_p;
  if ( M_p != (mysqlpp::Connection *)&this->error_message_._anon_0 )
    operator delete(M_p);
};

// Line 81: range 000000000CF7DF30-000000000CF7DFBA
void __fastcall mysqlpp::Connection::build_error_message(mysqlpp::Connection *const this, const char *core)
{
  std::string *p_error_message; // r13

  p_error_message = &this->error_message_;
  std::string::_M_replace(&this->error_message_, 0LL, this->error_message_._M_string_length, "Can't ", 6LL);
  if ( strlen(core) > 0x3FFFFFFFFFFFFFFFLL - this->error_message_._M_string_length
    || (std::string::_M_append(p_error_message, core),
        0x3FFFFFFFFFFFFFFFLL - this->error_message_._M_string_length <= 0x12) )
  {
    std::__throw_length_error("basic_string::append");
  }
  std::string::_M_append(p_error_message, " while disconnected", 19LL);
};

// Line 90: range 000000000CF7DFC0-000000000CF7E097
std::string *__fastcall mysqlpp::Connection::client_version[abi:cxx11](
        std::string *retstr,
        const mysqlpp::Connection *const this)
{
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // r14
  mysqlpp::DBDriver *driver; // rax
  const char *client_info; // rax
  char *v5; // rbp
  std::string::size_type v6; // rax
  size_t v7; // r13
  char *v9; // rax
  std::string::size_type v10[6]; // [rsp+8h] [rbp-30h] BYREF

  p_anon_0 = &retstr->_anon_0;
  driver = this->driver_;
  driver->error_message_._M_string_length = 0LL;
  *driver->error_message_._M_dataplus._M_p = 0;
  client_info = mysql_get_client_info();
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  if ( !client_info )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v5 = (char *)client_info;
  v6 = strlen(client_info);
  v10[0] = v6;
  v7 = v6;
  if ( v6 > 0xF )
  {
    v9 = (char *)std::string::_M_create(retstr, v10, 0LL);
    retstr->_M_dataplus._M_p = v9;
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v9;
    retstr->_anon_0._M_allocated_capacity = v10[0];
    goto LABEL_9;
  }
  if ( v6 != 1 )
  {
    if ( !v6 )
      goto LABEL_5;
LABEL_9:
    memcpy(p_anon_0, v5, v7);
    v6 = v10[0];
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)retstr->_M_dataplus._M_p;
    goto LABEL_5;
  }
  retstr->_anon_0._M_local_buf[0] = *v5;
LABEL_5:
  retstr->_M_string_length = v6;
  p_anon_0->_M_local_buf[v6] = 0;
  return retstr;
};

// Line 98: range 000000000CF7E450-000000000CF7E55B
__int64 __fastcall mysqlpp::Connection::connect(
        mysqlpp::Connection *this,
        const char *a2,
        const char *a3,
        const char *a4,
        const char *a5,
        unsigned int a6)
{
  mysqlpp::Exception *exception; // r12
  int v7; // r14d
  const char *v8; // rax
  std::string::pointer M_p; // rax
  std::string::pointer v12; // rdx
  unsigned int exceptions; // r12d
  unsigned int port; // [rsp+Ch] [rbp-74h] BYREF
  std::string v16; // [rsp+10h] [rbp-70h] BYREF
  std::string socket_name; // [rsp+30h] [rbp-50h] BYREF

  M_p = this->error_message_._M_dataplus._M_p;
  port = a6;
  this->error_message_._M_string_length = 0LL;
  *M_p = 0;
  v16._M_dataplus._M_p = v16._anon_0._M_local_buf;
  v16._M_string_length = 0LL;
  v16._anon_0._M_local_buf[0] = 0;
  socket_name._M_dataplus._M_p = socket_name._anon_0._M_local_buf;
  socket_name._M_string_length = 0LL;
  socket_name._anon_0._M_local_buf[0] = 0;
  if ( !mysqlpp::Connection::parse_ipc_method(this, a3, &v16, &port, &socket_name) )
    goto LABEL_5;
  v12 = 0LL;
  if ( socket_name._M_string_length )
    v12 = socket_name._M_dataplus._M_p;
  exceptions = (*((__int64 (__fastcall **)(mysqlpp::DBDriver *, std::string::pointer, std::string::pointer, _QWORD, const char *, const char *, const char *))this->driver_->_vptr_DBDriver
                + 2))(
                 this->driver_,
                 v16._M_dataplus._M_p,
                 v12,
                 port,
                 a2,
                 a4,
                 a5);
  if ( (_BYTE)exceptions )
  {
    this->copacetic_ = 1;
  }
  else
  {
LABEL_5:
    exceptions = this->exceptions_;
    this->copacetic_ = 0;
    if ( (_BYTE)exceptions )
    {
      exception = (mysqlpp::Exception *)__cxa_allocate_exception(0x30uLL);
      v7 = mysqlpp::Connection::errnum(this);
      v8 = mysqlpp::Connection::error(this);
      mysqlpp::Exception::Exception(exception, v8);
      *(_DWORD *)exception[1].baseclass_0 = v7;
      *(_QWORD *)exception->baseclass_0 = &`vtable for'mysqlpp::ConnectionFailed + 2;
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::ConnectionFailed,
        (void (__fastcall *)(void *))mysqlpp::ConnectionFailed::~ConnectionFailed);
    }
  }
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)socket_name._M_dataplus._M_p != &socket_name._anon_0 )
    operator delete(socket_name._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v16._M_dataplus._M_p != &v16._anon_0 )
    operator delete(v16._M_dataplus._M_p);
  return exceptions;
};

// Line 121: range 000000000CF7E0A0-000000000CF7E0AB
bool __fastcall mysqlpp::Connection::connected(const mysqlpp::Connection *const this)
{
  return this->driver_->is_connected_;
};

// Line 136: range 000000000CF7EF30-000000000CF7F2D0
unsigned __int64 __fastcall mysqlpp::Connection::count_rows(mysqlpp::Connection *a1, _QWORD *a2)
{
  std::string::pointer M_p; // rax
  __int64 v3; // rax
  mysqlpp::Query *v4; // rsi
  mysqlpp::Row *v5; // rbp
  unsigned __int64 v6; // r13
  __int64 v7; // rbx
  int (*v8)(...); // rax
  std::_Vector_base<mysqlpp::String>::pointer M_finish; // r14
  std::_Vector_base<mysqlpp::String>::pointer M_start; // r12
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > *p_buffer; // rdi
  void **v12; // r12
  void **v13; // rbp
  void **v14; // rdi
  void **v15; // rdi
  std::_Vector_base<std::string>::pointer v16; // r12
  std::_Vector_base<std::string>::pointer v17; // rbp
  std::_Vector_base<mysqlpp::SQLParseElement>::pointer v18; // r12
  std::_Vector_base<mysqlpp::SQLParseElement>::pointer v19; // rbp
  std::_Vector_base<mysqlpp::SQLTypeAdapter>::pointer v20; // r12
  std::_Vector_base<mysqlpp::SQLTypeAdapter>::pointer v21; // rbp
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > *v22; // rdi
  const mysqlpp::String *v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26[3]; // [rsp+0h] [rbp-2C8h] BYREF
  void *v27; // [rsp+18h] [rbp-2B0h]
  void **v28; // [rsp+20h] [rbp-2A8h]
  mysqlpp::RefCountedPointer<mysqlpp::FieldNames,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldNames> > v29; // [rsp+30h] [rbp-298h] BYREF
  mysqlpp::RefCountedPointer<mysqlpp::FieldTypes,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldTypes> > v30; // [rsp+40h] [rbp-288h] BYREF
  mysqlpp::Row *v31; // [rsp+58h] [rbp-270h]
  mysqlpp::Row *v32; // [rsp+60h] [rbp-268h]
  char v33; // [rsp+70h] [rbp-258h]
  mysqlpp::Query v34; // [rsp+80h] [rbp-248h] BYREF

  M_p = a1->error_message_._M_dataplus._M_p;
  a1->error_message_._M_string_length = 0LL;
  *M_p = 0;
  mysqlpp::Query::Query(&v34, a1, a1->exceptions_, 0LL);
  std::__ostream_insert<char,std::char_traits<char>>(&v34, "SELECT COUNT(*) FROM `", 22LL);
  v3 = std::__ostream_insert<char,std::char_traits<char>>(&v34, *a2, a2[1]);
  LOBYTE(v26[0]) = 96;
  std::__ostream_insert<char,std::char_traits<char>>(v3, v26, 1LL);
  v4 = &v34;
  mysqlpp::Query::store((mysqlpp::Query *)v26);
  v5 = v31;
  if ( v33 )
  {
    v24 = (const mysqlpp::String *)mysqlpp::Row::at(v31, 0LL);
    v4 = (mysqlpp::Query *)((**((_BYTE **)&`typeinfo for'unsigned long long + 1) == 42)
                          + *((_QWORD *)&`typeinfo for'unsigned long long + 1));
    v25 = mysqlpp::String::do_conv<unsigned long long>(v24, v4->baseclass_0);
    v5 = v31;
    v6 = v25;
  }
  else
  {
    v6 = 0LL;
  }
  v7 = (__int64)v32;
  v26[0] = (__int64)(&`vtable for'mysqlpp::StoreQueryResult + 2);
  if ( v32 != v5 )
  {
    do
    {
      v8 = *v5->_vptr_OptionalExceptions;
      if ( (char *)v8 == (char *)mysqlpp::Row::~Row )
      {
        v5->_vptr_OptionalExceptions = (int (**)(...))(&`vtable for'mysqlpp::Row + 2);
        mysqlpp::RefCountedPointer<mysqlpp::FieldNames,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldNames>>::~RefCountedPointer(&v5->field_names_);
        M_finish = v5->data_._M_impl._M_finish;
        M_start = v5->data_._M_impl._M_start;
        if ( M_finish != M_start )
        {
          do
          {
            p_buffer = &M_start->buffer_;
            ++M_start;
            mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(p_buffer);
          }
          while ( M_finish != M_start );
          M_start = v5->data_._M_impl._M_start;
        }
        if ( M_start )
          operator delete(M_start);
      }
      else
      {
        v8(v5, v4);
      }
      ++v5;
    }
    while ( (mysqlpp::Row *)v7 != v5 );
    v5 = v31;
  }
  if ( v5 )
    operator delete(v5);
  v26[0] = (__int64)(&`vtable for'mysqlpp::ResultBase + 2);
  mysqlpp::RefCountedPointer<mysqlpp::FieldTypes,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldTypes>>::~RefCountedPointer(&v30);
  mysqlpp::RefCountedPointer<mysqlpp::FieldNames,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldNames>>::~RefCountedPointer(&v29);
  v12 = v28;
  v13 = (void **)v27;
  if ( v28 != v27 )
  {
    do
    {
      v14 = (void **)v13[8];
      if ( v14 != v13 + 10 )
        operator delete(v14);
      v15 = (void **)v13[4];
      if ( v15 != v13 + 6 )
        operator delete(v15);
      if ( *v13 != v13 + 2 )
        operator delete(*v13);
      v13 += 16;
    }
    while ( v12 != v13 );
    v13 = (void **)v27;
  }
  if ( v13 )
    operator delete(v13);
  *(_QWORD *)v34.baseclass_0 = (char *)&`vtable for'mysqlpp::Query + 24;
  v34._vptr_OptionalExceptions = (int (**)(...))((char *)&`vtable for'mysqlpp::Query + 56);
  *(_QWORD *)&v34.sbuffer_[104] = (char *)&`vtable for'mysqlpp::Query + 96;
  *(_QWORD *)v34.sbuffer_ = (char *)&`vtable for'std::stringbuf + 16;
  if ( *(mysqlpp::Query **)&v34.sbuffer_[72] != (mysqlpp::Query *)&v34.sbuffer_[88] )
    operator delete(*(void **)&v34.sbuffer_[72]);
  *(_QWORD *)v34.sbuffer_ = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale((std::locale *)&v34.sbuffer_[56]);
  std::_Rb_tree<std::string,std::pair<std::string const,short>,std::_Select1st<std::pair<std::string const,short>>,std::less<std::string>,std::allocator<std::pair<std::string const,short>>>::_M_erase(
    &v34.parsed_nums_._M_t,
    (std::_Rb_tree<std::string,std::pair<const std::string,short int>,std::_Select1st<std::pair<const std::string,short int> >,std::less<std::string >,std::allocator<std::pair<const std::string,short int> > >::_Link_type)v34.parsed_nums_._M_t._M_impl._M_header._M_parent);
  v16 = v34.parsed_names_._M_impl._M_finish;
  v17 = v34.parsed_names_._M_impl._M_start;
  if ( v34.parsed_names_._M_impl._M_finish != v34.parsed_names_._M_impl._M_start )
  {
    do
    {
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v17->_M_dataplus._M_p != &v17->_anon_0 )
        operator delete(v17->_M_dataplus._M_p);
      ++v17;
    }
    while ( v16 != v17 );
    v17 = v34.parsed_names_._M_impl._M_start;
  }
  if ( v17 )
    operator delete(v17);
  v18 = v34.parse_elems_._M_impl._M_finish;
  v19 = v34.parse_elems_._M_impl._M_start;
  if ( v34.parse_elems_._M_impl._M_finish != v34.parse_elems_._M_impl._M_start )
  {
    do
    {
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v19->before._M_dataplus._M_p != &v19->before._anon_0 )
        operator delete(v19->before._M_dataplus._M_p);
      ++v19;
    }
    while ( v18 != v19 );
    v19 = v34.parse_elems_._M_impl._M_start;
  }
  if ( v19 )
    operator delete(v19);
  v20 = v34.template_defaults._M_impl._M_finish;
  v21 = v34.template_defaults._M_impl._M_start;
  if ( v34.template_defaults._M_impl._M_finish != v34.template_defaults._M_impl._M_start )
  {
    do
    {
      v22 = &v21->buffer_;
      ++v21;
      mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(v22);
    }
    while ( v20 != v21 );
    v21 = v34.template_defaults._M_impl._M_start;
  }
  if ( v21 )
    operator delete(v21);
  *(_QWORD *)v34.baseclass_0 = &unk_1EB1B130;
  *(_QWORD *)&v34.sbuffer_[104] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)&v34.sbuffer_[104]);
  return v6;
};

// Line 151: range 000000000CF7EAD0-000000000CF7ECF9
__int64 __fastcall mysqlpp::Connection::create_db(mysqlpp::Connection *a1, _QWORD *a2)
{
  std::string::pointer M_p; // rax
  __int64 v3; // rax
  unsigned int v4; // r12d
  std::_Vector_base<std::string>::pointer M_finish; // rbx
  std::_Vector_base<std::string>::pointer M_start; // rbp
  std::_Vector_base<mysqlpp::SQLParseElement>::pointer v7; // rbx
  std::_Vector_base<mysqlpp::SQLParseElement>::pointer v8; // rbp
  std::_Vector_base<mysqlpp::SQLTypeAdapter>::pointer v9; // rbx
  std::_Vector_base<mysqlpp::SQLTypeAdapter>::pointer v10; // rbp
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > *p_buffer; // rdi
  void *v13[2]; // [rsp+0h] [rbp-258h] BYREF
  char v14; // [rsp+10h] [rbp-248h] BYREF
  mysqlpp::Query v15; // [rsp+20h] [rbp-238h] BYREF

  M_p = a1->error_message_._M_dataplus._M_p;
  a1->error_message_._M_string_length = 0LL;
  *M_p = 0;
  mysqlpp::Query::Query(&v15, a1, a1->exceptions_, 0LL);
  std::__ostream_insert<char,std::char_traits<char>>(&v15, "CREATE DATABASE `", 17LL);
  v3 = std::__ostream_insert<char,std::char_traits<char>>(&v15, *a2, a2[1]);
  LOBYTE(v13[0]) = 96;
  std::__ostream_insert<char,std::char_traits<char>>(v3, v13, 1LL);
  mysqlpp::Query::str[abi:cxx11](v13, &v15, &v15.template_defaults);
  v4 = mysqlpp::Query::exec(&v15);
  if ( v13[0] != &v14 )
    operator delete(v13[0]);
  *(_QWORD *)v15.baseclass_0 = (char *)&`vtable for'mysqlpp::Query + 24;
  v15._vptr_OptionalExceptions = (int (**)(...))((char *)&`vtable for'mysqlpp::Query + 56);
  *(_QWORD *)&v15.sbuffer_[104] = (char *)&`vtable for'mysqlpp::Query + 96;
  *(_QWORD *)v15.sbuffer_ = (char *)&`vtable for'std::stringbuf + 16;
  if ( *(mysqlpp::Query **)&v15.sbuffer_[72] != (mysqlpp::Query *)&v15.sbuffer_[88] )
    operator delete(*(void **)&v15.sbuffer_[72]);
  *(_QWORD *)v15.sbuffer_ = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale((std::locale *)&v15.sbuffer_[56]);
  std::_Rb_tree<std::string,std::pair<std::string const,short>,std::_Select1st<std::pair<std::string const,short>>,std::less<std::string>,std::allocator<std::pair<std::string const,short>>>::_M_erase(
    &v15.parsed_nums_._M_t,
    (std::_Rb_tree<std::string,std::pair<const std::string,short int>,std::_Select1st<std::pair<const std::string,short int> >,std::less<std::string >,std::allocator<std::pair<const std::string,short int> > >::_Link_type)v15.parsed_nums_._M_t._M_impl._M_header._M_parent);
  M_finish = v15.parsed_names_._M_impl._M_finish;
  M_start = v15.parsed_names_._M_impl._M_start;
  if ( v15.parsed_names_._M_impl._M_finish != v15.parsed_names_._M_impl._M_start )
  {
    do
    {
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_start->_M_dataplus._M_p != &M_start->_anon_0 )
        operator delete(M_start->_M_dataplus._M_p);
      ++M_start;
    }
    while ( M_finish != M_start );
    M_start = v15.parsed_names_._M_impl._M_start;
  }
  if ( M_start )
    operator delete(M_start);
  v7 = v15.parse_elems_._M_impl._M_finish;
  v8 = v15.parse_elems_._M_impl._M_start;
  if ( v15.parse_elems_._M_impl._M_finish != v15.parse_elems_._M_impl._M_start )
  {
    do
    {
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v8->before._M_dataplus._M_p != &v8->before._anon_0 )
        operator delete(v8->before._M_dataplus._M_p);
      ++v8;
    }
    while ( v7 != v8 );
    v8 = v15.parse_elems_._M_impl._M_start;
  }
  if ( v8 )
    operator delete(v8);
  v9 = v15.template_defaults._M_impl._M_finish;
  v10 = v15.template_defaults._M_impl._M_start;
  if ( v15.template_defaults._M_impl._M_finish != v15.template_defaults._M_impl._M_start )
  {
    do
    {
      p_buffer = &v10->buffer_;
      ++v10;
      mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(p_buffer);
    }
    while ( v9 != v10 );
    v10 = v15.template_defaults._M_impl._M_start;
  }
  if ( v10 )
    operator delete(v10);
  *(_QWORD *)v15.baseclass_0 = &unk_1EB1B130;
  *(_QWORD *)&v15.sbuffer_[104] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)&v15.sbuffer_[104]);
  return v4;
};

// Line 169: range 000000000CF7ED00-000000000CF7EF29
__int64 __fastcall mysqlpp::Connection::drop_db(mysqlpp::Connection *a1, _QWORD *a2)
{
  std::string::pointer M_p; // rax
  __int64 v3; // rax
  unsigned int v4; // r12d
  std::_Vector_base<std::string>::pointer M_finish; // rbx
  std::_Vector_base<std::string>::pointer M_start; // rbp
  std::_Vector_base<mysqlpp::SQLParseElement>::pointer v7; // rbx
  std::_Vector_base<mysqlpp::SQLParseElement>::pointer v8; // rbp
  std::_Vector_base<mysqlpp::SQLTypeAdapter>::pointer v9; // rbx
  std::_Vector_base<mysqlpp::SQLTypeAdapter>::pointer v10; // rbp
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > *p_buffer; // rdi
  void *v13[2]; // [rsp+0h] [rbp-258h] BYREF
  char v14; // [rsp+10h] [rbp-248h] BYREF
  mysqlpp::Query v15; // [rsp+20h] [rbp-238h] BYREF

  M_p = a1->error_message_._M_dataplus._M_p;
  a1->error_message_._M_string_length = 0LL;
  *M_p = 0;
  mysqlpp::Query::Query(&v15, a1, a1->exceptions_, 0LL);
  std::__ostream_insert<char,std::char_traits<char>>(&v15, "DROP DATABASE `", 15LL);
  v3 = std::__ostream_insert<char,std::char_traits<char>>(&v15, *a2, a2[1]);
  LOBYTE(v13[0]) = 96;
  std::__ostream_insert<char,std::char_traits<char>>(v3, v13, 1LL);
  mysqlpp::Query::str[abi:cxx11](v13, &v15, &v15.template_defaults);
  v4 = mysqlpp::Query::exec(&v15);
  if ( v13[0] != &v14 )
    operator delete(v13[0]);
  *(_QWORD *)v15.baseclass_0 = (char *)&`vtable for'mysqlpp::Query + 24;
  v15._vptr_OptionalExceptions = (int (**)(...))((char *)&`vtable for'mysqlpp::Query + 56);
  *(_QWORD *)&v15.sbuffer_[104] = (char *)&`vtable for'mysqlpp::Query + 96;
  *(_QWORD *)v15.sbuffer_ = (char *)&`vtable for'std::stringbuf + 16;
  if ( *(mysqlpp::Query **)&v15.sbuffer_[72] != (mysqlpp::Query *)&v15.sbuffer_[88] )
    operator delete(*(void **)&v15.sbuffer_[72]);
  *(_QWORD *)v15.sbuffer_ = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale((std::locale *)&v15.sbuffer_[56]);
  std::_Rb_tree<std::string,std::pair<std::string const,short>,std::_Select1st<std::pair<std::string const,short>>,std::less<std::string>,std::allocator<std::pair<std::string const,short>>>::_M_erase(
    &v15.parsed_nums_._M_t,
    (std::_Rb_tree<std::string,std::pair<const std::string,short int>,std::_Select1st<std::pair<const std::string,short int> >,std::less<std::string >,std::allocator<std::pair<const std::string,short int> > >::_Link_type)v15.parsed_nums_._M_t._M_impl._M_header._M_parent);
  M_finish = v15.parsed_names_._M_impl._M_finish;
  M_start = v15.parsed_names_._M_impl._M_start;
  if ( v15.parsed_names_._M_impl._M_finish != v15.parsed_names_._M_impl._M_start )
  {
    do
    {
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_start->_M_dataplus._M_p != &M_start->_anon_0 )
        operator delete(M_start->_M_dataplus._M_p);
      ++M_start;
    }
    while ( M_finish != M_start );
    M_start = v15.parsed_names_._M_impl._M_start;
  }
  if ( M_start )
    operator delete(M_start);
  v7 = v15.parse_elems_._M_impl._M_finish;
  v8 = v15.parse_elems_._M_impl._M_start;
  if ( v15.parse_elems_._M_impl._M_finish != v15.parse_elems_._M_impl._M_start )
  {
    do
    {
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v8->before._M_dataplus._M_p != &v8->before._anon_0 )
        operator delete(v8->before._M_dataplus._M_p);
      ++v8;
    }
    while ( v7 != v8 );
    v8 = v15.parse_elems_._M_impl._M_start;
  }
  if ( v8 )
    operator delete(v8);
  v9 = v15.template_defaults._M_impl._M_finish;
  v10 = v15.template_defaults._M_impl._M_start;
  if ( v15.template_defaults._M_impl._M_finish != v15.template_defaults._M_impl._M_start )
  {
    do
    {
      p_buffer = &v10->buffer_;
      ++v10;
      mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(p_buffer);
    }
    while ( v9 != v10 );
    v10 = v15.template_defaults._M_impl._M_start;
  }
  if ( v10 )
    operator delete(v10);
  *(_QWORD *)v15.baseclass_0 = &unk_1EB1B130;
  *(_QWORD *)&v15.sbuffer_[104] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)&v15.sbuffer_[104]);
  return v4;
};

// Line 187: range 000000000CF7E200-000000000CF7E234
const char *__fastcall mysqlpp::Connection::error(const mysqlpp::Connection *const this)
{
  mysqlpp::DBDriver *driver; // rdi

  if ( this->error_message_._M_string_length )
    return this->error_message_._M_dataplus._M_p;
  driver = this->driver_;
  if ( driver->error_message_._M_string_length )
    return driver->error_message_._M_dataplus._M_p;
  else
    return mysql_error(&driver->mysql_);
};

// Line 193: range 000000000CF7E240-000000000CF7E317
std::string *__fastcall mysqlpp::Connection::ipc_info[abi:cxx11](
        std::string *retstr,
        const mysqlpp::Connection *const this)
{
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // r14
  mysqlpp::DBDriver *driver; // rdi
  std::string::pointer M_p; // rax
  const char *host_info; // rax
  char *v7; // rbp
  std::string::size_type v8; // rax
  size_t v9; // r13
  char *v11; // rax
  std::string::size_type v12[6]; // [rsp+8h] [rbp-30h] BYREF

  p_anon_0 = &retstr->_anon_0;
  driver = this->driver_;
  M_p = driver->error_message_._M_dataplus._M_p;
  driver = (mysqlpp::DBDriver *)((char *)driver + 8);
  driver->error_message_._M_dataplus._M_p = 0LL;
  *M_p = 0;
  host_info = mysql_get_host_info((MYSQL *)driver);
  retstr->_M_dataplus._M_p = (std::string::pointer)p_anon_0;
  if ( !host_info )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v7 = (char *)host_info;
  v8 = strlen(host_info);
  v12[0] = v8;
  v9 = v8;
  if ( v8 > 0xF )
  {
    v11 = (char *)std::string::_M_create(retstr, v12, 0LL);
    retstr->_M_dataplus._M_p = v11;
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v11;
    retstr->_anon_0._M_allocated_capacity = v12[0];
    goto LABEL_9;
  }
  if ( v8 != 1 )
  {
    if ( !v8 )
      goto LABEL_5;
LABEL_9:
    memcpy(p_anon_0, v7, v9);
    v8 = v12[0];
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)retstr->_M_dataplus._M_p;
    goto LABEL_5;
  }
  retstr->_anon_0._M_local_buf[0] = *v7;
LABEL_5:
  retstr->_M_string_length = v8;
  p_anon_0->_M_local_buf[v8] = 0;
  return retstr;
};

// Line 200: range 000000000CF7E320-000000000CF7E35E
bool __fastcall mysqlpp::Connection::kill(const mysqlpp::Connection *const this, unsigned __int64 tid)
{
  std::string::pointer M_p; // rax
  mysqlpp::DBDriver *driver; // rdi
  std::string::pointer v4; // rax

  M_p = this->error_message_._M_dataplus._M_p;
  this->error_message_._M_string_length = 0LL;
  *M_p = 0;
  driver = this->driver_;
  v4 = driver->error_message_._M_dataplus._M_p;
  driver = (mysqlpp::DBDriver *)((char *)driver + 8);
  driver->error_message_._M_dataplus._M_p = 0LL;
  *v4 = 0;
  return mysql_kill((MYSQL *)driver, tid) == 0;
};

// Line 208: range 000000000CF7E360-000000000CF7E36F
mysqlpp::Connection *__fastcall mysqlpp::Connection::operator=(
        mysqlpp::Connection *const this,
        const mysqlpp::Connection *rhs)
{
  mysqlpp::Connection::copy(this, rhs);
  return this;
};

// Line 217: range 000000000CF7E370-000000000CF7E449
bool __fastcall mysqlpp::Connection::parse_ipc_method(
        mysqlpp::Connection *const this,
        const char *server,
        std::string *host,
        unsigned int *port,
        std::string *socket_name)
{
  bool is_wnp; // r13
  size_t v9; // rax
  size_t v11; // rax
  size_t v12; // rax

  if ( !server )
    return 1;
  is_wnp = mysqlpp::WindowsNamedPipeConnection::is_wnp(server);
  if ( is_wnp )
  {
    v11 = strlen(server);
    std::string::_M_replace(host, 0LL, host->_M_string_length, server, v11);
  }
  else
  {
    is_wnp = mysqlpp::UnixDomainSocketConnection::is_socket(server, 0LL);
    if ( !is_wnp )
    {
      v9 = strlen(server);
      std::string::_M_replace(host, 0LL, host->_M_string_length, server, v9);
      return mysqlpp::TCPConnection::parse_address(host, port, &this->error_message_);
    }
    v12 = strlen(server);
    std::string::_M_replace(socket_name, 0LL, socket_name->_M_string_length, server, v12);
  }
  return is_wnp;
};

// Line 248: range 000000000CF7E610-000000000CF7E67D
bool __fastcall mysqlpp::Connection::ping(mysqlpp::Connection *const this)
{
  std::string::pointer M_p; // rax
  mysqlpp::DBDriver *driver; // rdi
  std::string::pointer v3; // rax

  if ( mysqlpp::Connection::connected(this) )
  {
    M_p = this->error_message_._M_dataplus._M_p;
    this->error_message_._M_string_length = 0LL;
    *M_p = 0;
    driver = this->driver_;
    v3 = driver->error_message_._M_dataplus._M_p;
    driver = (mysqlpp::DBDriver *)((char *)driver + 8);
    driver->error_message_._M_dataplus._M_p = 0LL;
    *v3 = 0;
    return mysql_ping((MYSQL *)driver) == 0;
  }
  else
  {
    mysqlpp::Connection::build_error_message(this, "ping database server");
    return 0;
  }
};

// Line 265: range 000000000CF7E680-000000000CF7E69D
int __fastcall mysqlpp::Connection::protocol_version(const mysqlpp::Connection *const this)
{
  mysqlpp::DBDriver *driver; // rdi
  std::string::pointer M_p; // rax

  driver = this->driver_;
  M_p = driver->error_message_._M_dataplus._M_p;
  driver = (mysqlpp::DBDriver *)((char *)driver + 8);
  driver->error_message_._M_dataplus._M_p = 0LL;
  *M_p = 0;
  return mysql_get_proto_info((MYSQL *)driver);
};

// Line 271: range 000000000CF7E6B0-000000000CF7E6C6
mysqlpp::Query *__fastcall mysqlpp::Connection::query(
        mysqlpp::Query *retstr,
        mysqlpp::Connection *const this,
        const char *qstr)
{
  mysqlpp::Query::Query(retstr, this, this->exceptions_, qstr);
  return retstr;
};

// Line 278: range 000000000CF7E6D0-000000000CF7E6E2
mysqlpp::Query *__fastcall mysqlpp::Connection::query(
        mysqlpp::Query *retstr,
        mysqlpp::Connection *const this,
        const std::string *qstr)
{
  mysqlpp::Connection::query(retstr, this, qstr->_M_dataplus._M_p);
  return retstr;
};

// Line 285: range 000000000CF7E6F0-000000000CF7E76D
__int64 __fastcall mysqlpp::Connection::select_db(mysqlpp::Connection *this, const char **a2)
{
  mysqlpp::Exception *exception; // r12
  std::string::pointer M_p; // rax
  unsigned int v5; // eax
  mysqlpp::DBDriver *driver; // rdi
  unsigned int v7; // r12d
  const char *v8; // rsi
  std::string::pointer v9; // rax

  M_p = this->error_message_._M_dataplus._M_p;
  this->error_message_._M_string_length = 0LL;
  *M_p = 0;
  LOBYTE(v5) = mysqlpp::Connection::connected(this);
  if ( !(_BYTE)v5 )
  {
    mysqlpp::Connection::build_error_message(this, "select a database");
    if ( this->exceptions_ )
    {
      exception = (mysqlpp::Exception *)__cxa_allocate_exception(0x30uLL);
      mysqlpp::Exception::Exception(exception, this->error_message_._M_dataplus._M_p);
      *(_DWORD *)exception[1].baseclass_0 = 0;
      *(_QWORD *)exception->baseclass_0 = &`vtable for'mysqlpp::DBSelectionFailed + 2;
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::DBSelectionFailed,
        (void (__fastcall *)(void *))mysqlpp::DBSelectionFailed::~DBSelectionFailed);
    }
    return 0;
  }
  driver = this->driver_;
  v7 = v5;
  v8 = *a2;
  v9 = driver->error_message_._M_dataplus._M_p;
  driver = (mysqlpp::DBDriver *)((char *)driver + 8);
  driver->error_message_._M_dataplus._M_p = 0LL;
  *v9 = 0;
  if ( mysql_select_db((MYSQL *)driver, v8) )
  {
    if ( this->exceptions_ )
      mysqlpp::Connection::select_db();
    return 0;
  }
  return v7;
};

// Line 293: range 000000000C7373FA-000000000C737449
void __fastcall __noreturn mysqlpp::Connection::select_db()
{
  mysqlpp::Connection *v0; // rbp
  mysqlpp::Exception *exception; // r12
  int v2; // ebx
  const char *v3; // rax

  exception = (mysqlpp::Exception *)__cxa_allocate_exception(0x30uLL);
  v2 = mysqlpp::Connection::errnum(v0);
  v3 = mysqlpp::Connection::error(v0);
  mysqlpp::Exception::Exception(exception, v3);
  *(_DWORD *)exception[1].baseclass_0 = v2;
  *(_QWORD *)exception->baseclass_0 = &`vtable for'mysqlpp::DBSelectionFailed + 2;
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'mysqlpp::DBSelectionFailed,
    (void (__fastcall *)(void *))mysqlpp::DBSelectionFailed::~DBSelectionFailed);
};

// Line 310: range 000000000CF7E780-000000000CF7E857
std::string *__fastcall mysqlpp::Connection::server_status[abi:cxx11](
        std::string *retstr,
        const mysqlpp::Connection *const this)
{
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // r14
  mysqlpp::DBDriver *driver; // rdi
  std::string::pointer M_p; // rax
  const char *v6; // rax
  char *v7; // rbp
  std::string::size_type v8; // rax
  size_t v9; // r13
  char *v11; // rax
  std::string::size_type v12[6]; // [rsp+8h] [rbp-30h] BYREF

  p_anon_0 = &retstr->_anon_0;
  driver = this->driver_;
  M_p = driver->error_message_._M_dataplus._M_p;
  driver = (mysqlpp::DBDriver *)((char *)driver + 8);
  driver->error_message_._M_dataplus._M_p = 0LL;
  *M_p = 0;
  v6 = mysql_stat((MYSQL *)driver);
  retstr->_M_dataplus._M_p = (std::string::pointer)p_anon_0;
  if ( !v6 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v7 = (char *)v6;
  v8 = strlen(v6);
  v12[0] = v8;
  v9 = v8;
  if ( v8 > 0xF )
  {
    v11 = (char *)std::string::_M_create(retstr, v12, 0LL);
    retstr->_M_dataplus._M_p = v11;
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v11;
    retstr->_anon_0._M_allocated_capacity = v12[0];
    goto LABEL_9;
  }
  if ( v8 != 1 )
  {
    if ( !v8 )
      goto LABEL_5;
LABEL_9:
    memcpy(p_anon_0, v7, v9);
    v8 = v12[0];
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)retstr->_M_dataplus._M_p;
    goto LABEL_5;
  }
  retstr->_anon_0._M_local_buf[0] = *v7;
LABEL_5:
  retstr->_M_string_length = v8;
  p_anon_0->_M_local_buf[v8] = 0;
  return retstr;
};

// Line 317: range 000000000CF7E860-000000000CF7E937
std::string *__fastcall mysqlpp::Connection::server_version[abi:cxx11](
        std::string *retstr,
        const mysqlpp::Connection *const this)
{
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // r14
  mysqlpp::DBDriver *driver; // rdi
  std::string::pointer M_p; // rax
  const char *server_info; // rax
  char *v7; // rbp
  std::string::size_type v8; // rax
  size_t v9; // r13
  char *v11; // rax
  std::string::size_type v12[6]; // [rsp+8h] [rbp-30h] BYREF

  p_anon_0 = &retstr->_anon_0;
  driver = this->driver_;
  M_p = driver->error_message_._M_dataplus._M_p;
  driver = (mysqlpp::DBDriver *)((char *)driver + 8);
  driver->error_message_._M_dataplus._M_p = 0LL;
  *M_p = 0;
  server_info = mysql_get_server_info((MYSQL *)driver);
  retstr->_M_dataplus._M_p = (std::string::pointer)p_anon_0;
  if ( !server_info )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v7 = (char *)server_info;
  v8 = strlen(server_info);
  v12[0] = v8;
  v9 = v8;
  if ( v8 > 0xF )
  {
    v11 = (char *)std::string::_M_create(retstr, v12, 0LL);
    retstr->_M_dataplus._M_p = v11;
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v11;
    retstr->_anon_0._M_allocated_capacity = v12[0];
    goto LABEL_9;
  }
  if ( v8 != 1 )
  {
    if ( !v8 )
      goto LABEL_5;
LABEL_9:
    memcpy(p_anon_0, v7, v9);
    v8 = v12[0];
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)retstr->_M_dataplus._M_p;
    goto LABEL_5;
  }
  retstr->_anon_0._M_local_buf[0] = *v7;
LABEL_5:
  retstr->_M_string_length = v8;
  p_anon_0->_M_local_buf[v8] = 0;
  return retstr;
};

// Line 324: range 000000000CF7E940-000000000CF7E9E4
bool __fastcall mysqlpp::Connection::set_option(mysqlpp::Connection *this, mysqlpp::Option *a2)
{
  bool result; // al
  std::string::pointer M_p; // rdx
  mysqlpp::DBDriver *driver; // rdi
  const char *v6; // r12
  size_t v7; // rax

  if ( !a2 )
    __cxa_bad_typeid();
  result = mysqlpp::DBDriver::set_option(this->driver_, a2);
  if ( result )
  {
    M_p = this->error_message_._M_dataplus._M_p;
    this->error_message_._M_string_length = 0LL;
    *M_p = 0;
  }
  else
  {
    driver = this->driver_;
    if ( driver->error_message_._M_string_length )
      v6 = driver->error_message_._M_dataplus._M_p;
    else
      v6 = mysql_error(&driver->mysql_);
    v7 = strlen(v6);
    std::string::_M_replace(&this->error_message_, 0LL, this->error_message_._M_string_length, v6, v7);
    result = this->exceptions_;
    if ( result )
      mysqlpp::Connection::set_option();
  }
  return result;
};

// Line 333: range 000000000C7374A8-000000000C7374E5
void __fastcall __noreturn mysqlpp::Connection::set_option()
{
  __int64 v0; // rbp
  const std::string *v1; // r13
  mysqlpp::Exception *exception; // r12

  exception = (mysqlpp::Exception *)__cxa_allocate_exception(0x30uLL);
  mysqlpp::Exception::Exception(exception, v1);
  *(_QWORD *)exception[1].baseclass_0 = v0;
  *(_QWORD *)exception->baseclass_0 = &`vtable for'mysqlpp::BadOption + 2;
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'mysqlpp::BadOption,
    (void (__fastcall *)(void *))mysqlpp::BadOption::~BadOption);
};

// Line 342: range 000000000CF7E9F0-000000000CF7EA5B
bool __fastcall mysqlpp::Connection::shutdown(mysqlpp::Connection *this)
{
  mysqlpp::Exception *exception; // r12
  std::string::pointer M_p; // rax
  bool result; // al

  M_p = this->error_message_._M_dataplus._M_p;
  this->error_message_._M_string_length = 0LL;
  *M_p = 0;
  if ( mysqlpp::Connection::connected(this) )
  {
    result = mysqlpp::DBDriver::shutdown(this->driver_);
    if ( !result )
    {
      if ( this->exceptions_ )
        mysqlpp::Connection::shutdown();
      return 0;
    }
  }
  else
  {
    mysqlpp::Connection::build_error_message(this, "shutdown database server");
    if ( this->exceptions_ )
    {
      exception = (mysqlpp::Exception *)__cxa_allocate_exception(0x30uLL);
      mysqlpp::Exception::Exception(exception, this->error_message_._M_dataplus._M_p);
      *(_DWORD *)exception[1].baseclass_0 = 0;
      *(_QWORD *)exception->baseclass_0 = &`vtable for'mysqlpp::ConnectionFailed + 2;
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::ConnectionFailed,
        (void (__fastcall *)(void *))mysqlpp::ConnectionFailed::~ConnectionFailed);
    }
    return 0;
  }
  return result;
};

// Line 350: range 000000000C7374F0-000000000C73753F
void __fastcall __noreturn mysqlpp::Connection::shutdown()
{
  mysqlpp::Connection *v0; // rbp
  mysqlpp::Exception *exception; // r12
  int v2; // ebx
  const char *v3; // rax

  exception = (mysqlpp::Exception *)__cxa_allocate_exception(0x30uLL);
  v2 = mysqlpp::Connection::errnum(v0);
  v3 = mysqlpp::Connection::error(v0);
  mysqlpp::Exception::Exception(exception, v3);
  *(_DWORD *)exception[1].baseclass_0 = v2;
  *(_QWORD *)exception->baseclass_0 = &`vtable for'mysqlpp::ConnectionFailed + 2;
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'mysqlpp::ConnectionFailed,
    (void (__fastcall *)(void *))mysqlpp::ConnectionFailed::~ConnectionFailed);
};

// Line 368: range 000000000CF7EA60-000000000CF7EA70
// attributes: thunk
bool __cdecl mysqlpp::Connection::thread_aware()
{
  return mysqlpp::DBDriver::thread_aware();
};

// Line 382: range 000000000CF7EA80-000000000CF7EA9D
unsigned __int64 __fastcall mysqlpp::Connection::thread_id(mysqlpp::Connection *const this)
{
  mysqlpp::DBDriver *driver; // rdi
  std::string::pointer M_p; // rax

  driver = this->driver_;
  M_p = driver->error_message_._M_dataplus._M_p;
  driver = (mysqlpp::DBDriver *)((char *)driver + 8);
  driver->error_message_._M_dataplus._M_p = 0LL;
  *M_p = 0;
  return mysql_thread_id((MYSQL *)driver);
};

// Line 388: range 000000000CF7EAB0-000000000CF7EAC2
bool __cdecl mysqlpp::Connection::thread_start()
{
  return mysql_thread_init() == 0;
};

// Line 392: range 000000000C7476E0-000000000C747709
void __cdecl GLOBAL__sub_I_connection_cpp()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
