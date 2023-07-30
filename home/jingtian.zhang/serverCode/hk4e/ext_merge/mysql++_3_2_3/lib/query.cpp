// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql++_3_2_3/lib/query.cpp

// Line 41: range 000000000CF86920-000000000CF86BEC
void __fastcall mysqlpp::Query::Query(mysqlpp::Query *this, mysqlpp::Connection *a2, bool a3, const char *a4)
{
  __int8 *v5; // r12
  std::locale *v8; // rdi
  size_t v9; // rax
  std::forward_iterator_tag v10; // cl
  __int64 v11; // rcx
  __int64 v12; // rax
  std::string v13[2]; // [rsp+10h] [rbp-58h] BYREF

  v5 = &this->sbuffer_[104];
  std::ios_base::ios_base((std::ios_base *)&this->sbuffer_[104]);
  *(_QWORD *)this->baseclass_0 = &unk_1EB1B130;
  *(_WORD *)&this->sbuffer_[328] = 0;
  *(_QWORD *)&this->sbuffer_[320] = 0LL;
  *(_QWORD *)&this->sbuffer_[336] = 0LL;
  *(_QWORD *)&this->sbuffer_[344] = 0LL;
  *(_QWORD *)&this->sbuffer_[352] = 0LL;
  *(_QWORD *)&this->sbuffer_[360] = 0LL;
  *(_QWORD *)&this->sbuffer_[104] = (char *)&unk_1EB1B130 + 40;
  std::ios::init(&this->sbuffer_[104], 0LL);
  this->conn_ = a2;
  this->exceptions_ = a3;
  this->template_defaults._M_impl._M_start = 0LL;
  *(_QWORD *)this->baseclass_0 = (char *)&`vtable for'mysqlpp::Query + 24;
  this->_vptr_OptionalExceptions = (int (**)(...))((char *)&`vtable for'mysqlpp::Query + 56);
  this->parsed_nums_._M_t._M_impl._M_header._M_left = &this->parsed_nums_._M_t._M_impl._M_header;
  this->parsed_nums_._M_t._M_impl._M_header._M_right = &this->parsed_nums_._M_t._M_impl._M_header;
  *(_QWORD *)&this->sbuffer_[104] = (char *)&`vtable for'mysqlpp::Query + 96;
  this->template_defaults._M_impl._M_finish = 0LL;
  *(_QWORD *)this->sbuffer_ = (char *)&`vtable for'std::streambuf + 16;
  this->template_defaults._M_impl._M_end_of_storage = 0LL;
  this->template_defaults.parent_ = this;
  this->template_defaults.processing_ = 0;
  this->copacetic_ = 1;
  this->parse_elems_._M_impl._M_start = 0LL;
  this->parse_elems_._M_impl._M_finish = 0LL;
  this->parse_elems_._M_impl._M_end_of_storage = 0LL;
  this->parsed_names_._M_impl._M_start = 0LL;
  this->parsed_names_._M_impl._M_finish = 0LL;
  this->parsed_names_._M_impl._M_end_of_storage = 0LL;
  this->parsed_nums_._M_t._M_impl._M_header._M_color = _S_red;
  this->parsed_nums_._M_t._M_impl._M_header._M_parent = 0LL;
  this->parsed_nums_._M_t._M_impl._M_node_count = 0LL;
  *(_QWORD *)&this->sbuffer_[8] = 0LL;
  *(_QWORD *)&this->sbuffer_[16] = 0LL;
  *(_QWORD *)&this->sbuffer_[24] = 0LL;
  *(_QWORD *)&this->sbuffer_[32] = 0LL;
  *(_QWORD *)&this->sbuffer_[40] = 0LL;
  *(_QWORD *)&this->sbuffer_[48] = 0LL;
  std::locale::locale((std::locale *)&this->sbuffer_[56]);
  v8 = (std::locale *)v5;
  *(_DWORD *)&this->sbuffer_[64] = 24;
  this->sbuffer_[88] = 0;
  *(_QWORD *)this->sbuffer_ = (char *)&`vtable for'std::stringbuf + 16;
  *(_QWORD *)&this->sbuffer_[72] = &this->sbuffer_[88];
  *(_QWORD *)&this->sbuffer_[80] = 0LL;
  std::ios::init(v5, this->sbuffer_);
  if ( a4 )
  {
    v13[0]._M_dataplus._M_p = v13[0]._anon_0._M_local_buf;
    v9 = strlen(a4);
    std::string::_M_construct<char const*>(v13, a4, &a4[v9], v10);
    std::string::_M_replace(
      &this->sbuffer_[72],
      0LL,
      *(_QWORD *)&this->sbuffer_[80],
      v13[0]._M_dataplus._M_p,
      v13[0]._M_string_length);
    v11 = 0LL;
    if ( (this->sbuffer_[64] & 3) != 0 )
      v11 = *(_QWORD *)&this->sbuffer_[80];
    std::stringbuf::_M_sync(this->sbuffer_, *(_QWORD *)&this->sbuffer_[72], 0LL, v11);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v13[0]._M_dataplus._M_p != &v13[0]._anon_0 )
      operator delete(v13[0]._M_dataplus._M_p);
    v8 = (std::locale *)this;
    std::ostream::seekp((std::ostream *)this, 0LL, _S_end);
  }
  v12 = std::locale::classic(v8);
  std::ios::imbue(v13, v5, v12);
  std::locale::~locale((std::locale *)v13);
};

// Line 41: range 000000000CF86690-000000000CF86914
void __fastcall mysqlpp::Query::Query(
        mysqlpp::Query *this,
        mysqlpp::Connection *a2,
        mysqlpp::Connection *a3,
        const char *a4,
        const char *a5)
{
  char v5; // r14
  __int64 v9; // rax
  std::string::pointer *v10; // rdi
  int (**vptr_OptionalExceptions)(...); // rax
  std::string::size_type M_string_length; // rdx
  std::locale *v13; // rdi
  size_t v14; // rax
  std::forward_iterator_tag v15; // cl
  __int64 v16; // rcx
  __int8 *v17; // r12
  __int64 v18; // rax
  std::string v19[2]; // [rsp+0h] [rbp-58h] BYREF

  v5 = (char)a4;
  v9 = *(_QWORD *)&a2->exceptions_;
  *(_QWORD *)this->baseclass_0 = v9;
  v10 = (std::string::pointer *)&this->baseclass_0[*(_QWORD *)(v9 - 24)];
  *v10 = a2->error_message_._M_dataplus._M_p;
  std::ios::init(v10, 0LL);
  this->exceptions_ = v5;
  this->_vptr_OptionalExceptions = (int (**)(...))(&`vtable for'mysqlpp::OptionalExceptions + 2);
  vptr_OptionalExceptions = a2->_vptr_OptionalExceptions;
  M_string_length = a2->error_message_._M_string_length;
  *(_QWORD *)this->baseclass_0 = a2->_vptr_OptionalExceptions;
  *(_QWORD *)((char *)*(vptr_OptionalExceptions - 3) + (_QWORD)this) = M_string_length;
  this->conn_ = a3;
  this->template_defaults._M_impl._M_start = 0LL;
  this->_vptr_OptionalExceptions = (int (**)(...))((char *)&`vtable for'mysqlpp::Query + 56);
  this->parsed_nums_._M_t._M_impl._M_header._M_left = &this->parsed_nums_._M_t._M_impl._M_header;
  this->parsed_nums_._M_t._M_impl._M_header._M_right = &this->parsed_nums_._M_t._M_impl._M_header;
  this->template_defaults._M_impl._M_finish = 0LL;
  this->template_defaults._M_impl._M_end_of_storage = 0LL;
  *(_QWORD *)this->sbuffer_ = (char *)&`vtable for'std::streambuf + 16;
  this->template_defaults.parent_ = this;
  this->template_defaults.processing_ = 0;
  this->copacetic_ = 1;
  this->parse_elems_._M_impl._M_start = 0LL;
  this->parse_elems_._M_impl._M_finish = 0LL;
  this->parse_elems_._M_impl._M_end_of_storage = 0LL;
  this->parsed_names_._M_impl._M_start = 0LL;
  this->parsed_names_._M_impl._M_finish = 0LL;
  this->parsed_names_._M_impl._M_end_of_storage = 0LL;
  this->parsed_nums_._M_t._M_impl._M_header._M_color = _S_red;
  this->parsed_nums_._M_t._M_impl._M_header._M_parent = 0LL;
  this->parsed_nums_._M_t._M_impl._M_node_count = 0LL;
  *(_QWORD *)&this->sbuffer_[8] = 0LL;
  *(_QWORD *)&this->sbuffer_[16] = 0LL;
  *(_QWORD *)&this->sbuffer_[24] = 0LL;
  *(_QWORD *)&this->sbuffer_[32] = 0LL;
  *(_QWORD *)&this->sbuffer_[40] = 0LL;
  *(_QWORD *)&this->sbuffer_[48] = 0LL;
  std::locale::locale((std::locale *)&this->sbuffer_[56]);
  this->sbuffer_[88] = 0;
  *(_QWORD *)&this->sbuffer_[80] = 0LL;
  *(_DWORD *)&this->sbuffer_[64] = 24;
  *(_QWORD *)this->sbuffer_ = (char *)&`vtable for'std::stringbuf + 16;
  *(_QWORD *)&this->sbuffer_[72] = &this->sbuffer_[88];
  v13 = (std::locale *)&this->baseclass_0[*(_QWORD *)(*(_QWORD *)this->baseclass_0 - 24LL)];
  std::ios::init(v13, this->sbuffer_);
  if ( a5 )
  {
    v19[0]._M_dataplus._M_p = v19[0]._anon_0._M_local_buf;
    v14 = strlen(a5);
    std::string::_M_construct<char const*>(v19, a5, &a5[v14], v15);
    std::string::_M_replace(
      &this->sbuffer_[72],
      0LL,
      *(_QWORD *)&this->sbuffer_[80],
      v19[0]._M_dataplus._M_p,
      v19[0]._M_string_length);
    v16 = 0LL;
    if ( (this->sbuffer_[64] & 3) != 0 )
      v16 = *(_QWORD *)&this->sbuffer_[80];
    std::stringbuf::_M_sync(this->sbuffer_, *(_QWORD *)&this->sbuffer_[72], 0LL, v16);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v19[0]._M_dataplus._M_p != &v19[0]._anon_0 )
      operator delete(v19[0]._M_dataplus._M_p);
    v13 = (std::locale *)this;
    std::ostream::seekp((std::ostream *)this, 0LL, _S_end);
  }
  v17 = &this->baseclass_0[*(_QWORD *)(*(_QWORD *)this->baseclass_0 - 24LL)];
  v18 = std::locale::classic(v13);
  std::ios::imbue(v19, v17, v18);
  std::locale::~locale((std::locale *)v19);
};

// Line 68: range 000000000CF86E00-000000000CF87028
__int64 __fastcall mysqlpp::Query::Query(mysqlpp::Query *this, const mysqlpp::Query *a2)
{
  bool exceptions; // al
  std::locale *v4; // rdi
  __int64 v5; // rax
  std::locale v7; // [rsp+8h] [rbp-40h] BYREF

  std::ios_base::ios_base((std::ios_base *)&this->sbuffer_[104]);
  *(_QWORD *)this->baseclass_0 = &unk_1EB1B130;
  *(_WORD *)&this->sbuffer_[328] = 0;
  *(_QWORD *)&this->sbuffer_[320] = 0LL;
  *(_QWORD *)&this->sbuffer_[336] = 0LL;
  *(_QWORD *)&this->sbuffer_[344] = 0LL;
  *(_QWORD *)&this->sbuffer_[352] = 0LL;
  *(_QWORD *)&this->sbuffer_[360] = 0LL;
  *(_QWORD *)&this->sbuffer_[104] = (char *)&unk_1EB1B130 + 40;
  std::ios::init(&this->sbuffer_[104], 0LL);
  exceptions = a2->exceptions_;
  this->template_defaults._M_impl._M_start = 0LL;
  this->template_defaults._M_impl._M_finish = 0LL;
  this->exceptions_ = exceptions;
  this->template_defaults._M_impl._M_end_of_storage = 0LL;
  this->template_defaults.parent_ = 0LL;
  *(_QWORD *)this->baseclass_0 = (char *)&`vtable for'mysqlpp::Query + 24;
  this->_vptr_OptionalExceptions = (int (**)(...))((char *)&`vtable for'mysqlpp::Query + 56);
  this->parsed_nums_._M_t._M_impl._M_header._M_left = &this->parsed_nums_._M_t._M_impl._M_header;
  this->parsed_nums_._M_t._M_impl._M_header._M_right = &this->parsed_nums_._M_t._M_impl._M_header;
  *(_QWORD *)&this->sbuffer_[104] = (char *)&`vtable for'mysqlpp::Query + 96;
  this->template_defaults.processing_ = 0;
  *(_QWORD *)this->sbuffer_ = (char *)&`vtable for'std::streambuf + 16;
  this->parse_elems_._M_impl._M_start = 0LL;
  this->parse_elems_._M_impl._M_finish = 0LL;
  this->parse_elems_._M_impl._M_end_of_storage = 0LL;
  this->parsed_names_._M_impl._M_start = 0LL;
  this->parsed_names_._M_impl._M_finish = 0LL;
  this->parsed_names_._M_impl._M_end_of_storage = 0LL;
  this->parsed_nums_._M_t._M_impl._M_header._M_color = _S_red;
  this->parsed_nums_._M_t._M_impl._M_header._M_parent = 0LL;
  this->parsed_nums_._M_t._M_impl._M_node_count = 0LL;
  *(_QWORD *)&this->sbuffer_[8] = 0LL;
  *(_QWORD *)&this->sbuffer_[16] = 0LL;
  *(_QWORD *)&this->sbuffer_[24] = 0LL;
  *(_QWORD *)&this->sbuffer_[32] = 0LL;
  *(_QWORD *)&this->sbuffer_[40] = 0LL;
  *(_QWORD *)&this->sbuffer_[48] = 0LL;
  std::locale::locale((std::locale *)&this->sbuffer_[56]);
  v4 = (std::locale *)&this->sbuffer_[104];
  *(_DWORD *)&this->sbuffer_[64] = 24;
  this->sbuffer_[88] = 0;
  *(_QWORD *)this->sbuffer_ = (char *)&`vtable for'std::stringbuf + 16;
  *(_QWORD *)&this->sbuffer_[72] = &this->sbuffer_[88];
  *(_QWORD *)&this->sbuffer_[80] = 0LL;
  std::ios::init(v4, this->sbuffer_);
  v5 = std::locale::classic(v4);
  std::ios::imbue(&v7, v4, v5);
  std::locale::~locale(&v7);
  return mysqlpp::Query::operator=(this, a2);
};

// Line 68: range 000000000CF86C00-000000000CF86DF2
__int64 __fastcall mysqlpp::Query::Query(mysqlpp::Query *this, const mysqlpp::Query *a2, __int64 a3)
{
  __int8 *sbuffer; // r14
  int (**vptr_OptionalExceptions)(...); // rax
  _QWORD *v7; // rdi
  __int64 v8; // rax
  std::_Vector_base<mysqlpp::SQLTypeAdapter>::pointer M_start; // rdx
  std::locale *v10; // rdi
  __int8 *v11; // r15
  __int64 v12; // rax
  std::locale v14; // [rsp+8h] [rbp-40h] BYREF

  sbuffer = this->sbuffer_;
  vptr_OptionalExceptions = a2->_vptr_OptionalExceptions;
  *(_QWORD *)this->baseclass_0 = vptr_OptionalExceptions;
  v7 = (_QWORD *)((char *)*(vptr_OptionalExceptions - 3) + (_QWORD)this);
  *v7 = *(_QWORD *)&a2->exceptions_;
  std::ios::init(v7, 0LL);
  this->exceptions_ = *(_BYTE *)(a3 + 16);
  this->_vptr_OptionalExceptions = (int (**)(...))(&`vtable for'mysqlpp::OptionalExceptions + 2);
  v8 = *(_QWORD *)a2->baseclass_0;
  M_start = a2->template_defaults._M_impl._M_start;
  *(_QWORD *)this->baseclass_0 = *(_QWORD *)a2->baseclass_0;
  *(_QWORD *)&this->baseclass_0[*(_QWORD *)(v8 - 24)] = M_start;
  this->template_defaults._M_impl._M_start = 0LL;
  this->template_defaults._M_impl._M_finish = 0LL;
  this->_vptr_OptionalExceptions = (int (**)(...))((char *)&`vtable for'mysqlpp::Query + 56);
  this->parsed_nums_._M_t._M_impl._M_header._M_left = &this->parsed_nums_._M_t._M_impl._M_header;
  this->parsed_nums_._M_t._M_impl._M_header._M_right = &this->parsed_nums_._M_t._M_impl._M_header;
  this->template_defaults._M_impl._M_end_of_storage = 0LL;
  this->template_defaults.parent_ = 0LL;
  *(_QWORD *)this->sbuffer_ = (char *)&`vtable for'std::streambuf + 16;
  this->template_defaults.processing_ = 0;
  this->parse_elems_._M_impl._M_start = 0LL;
  this->parse_elems_._M_impl._M_finish = 0LL;
  this->parse_elems_._M_impl._M_end_of_storage = 0LL;
  this->parsed_names_._M_impl._M_start = 0LL;
  this->parsed_names_._M_impl._M_finish = 0LL;
  this->parsed_names_._M_impl._M_end_of_storage = 0LL;
  this->parsed_nums_._M_t._M_impl._M_header._M_color = _S_red;
  this->parsed_nums_._M_t._M_impl._M_header._M_parent = 0LL;
  this->parsed_nums_._M_t._M_impl._M_node_count = 0LL;
  *(_QWORD *)&this->sbuffer_[8] = 0LL;
  *(_QWORD *)&this->sbuffer_[16] = 0LL;
  *(_QWORD *)&this->sbuffer_[24] = 0LL;
  *(_QWORD *)&this->sbuffer_[32] = 0LL;
  *(_QWORD *)&this->sbuffer_[40] = 0LL;
  *(_QWORD *)&this->sbuffer_[48] = 0LL;
  std::locale::locale((std::locale *)&this->sbuffer_[56]);
  this->sbuffer_[88] = 0;
  *(_QWORD *)&this->sbuffer_[80] = 0LL;
  *(_DWORD *)&this->sbuffer_[64] = 24;
  *(_QWORD *)this->sbuffer_ = (char *)&`vtable for'std::stringbuf + 16;
  *(_QWORD *)&this->sbuffer_[72] = &this->sbuffer_[88];
  v10 = (std::locale *)&this->baseclass_0[*(_QWORD *)(*(_QWORD *)this->baseclass_0 - 24LL)];
  std::ios::init(v10, sbuffer);
  v11 = &this->baseclass_0[*(_QWORD *)(*(_QWORD *)this->baseclass_0 - 24LL)];
  v12 = std::locale::classic(v10);
  std::ios::imbue(&v14, v11, v12);
  std::locale::~locale(&v14);
  return mysqlpp::Query::operator=(this, a3);
};

// Line 75: range 000000000C737F48-000000000C737F94
void __fastcall __noreturn mysqlpp::Query::Query()
{
  __int64 v0; // rbx
  __int64 v1; // rbp
  struct _Unwind_Exception *v2; // r12
  std::stringbuf *v3; // r14
  __int64 v4; // rax
  __int64 v5; // rdx

  std::stringbuf::~stringbuf(v3);
  std::_Rb_tree<std::string,std::pair<std::string const,short>,std::_Select1st<std::pair<std::string const,short>>,std::less<std::string>,std::allocator<std::pair<std::string const,short>>>::_M_erase(
    (std::_Rb_tree<std::string,std::pair<const std::string,short int>,std::_Select1st<std::pair<const std::string,short int> >,std::less<std::string >,std::allocator<std::pair<const std::string,short int> > > *const)(v0 + 128),
    *(std::_Rb_tree<std::string,std::pair<const std::string,short int>,std::_Select1st<std::pair<const std::string,short int> >,std::less<std::string >,std::allocator<std::pair<const std::string,short int> > >::_Link_type *)(v0 + 144));
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v0 + 104));
  std::vector<mysqlpp::SQLParseElement>::~vector((std::vector<mysqlpp::SQLParseElement> *const)(v0 + 80));
  std::vector<mysqlpp::SQLTypeAdapter>::~vector((std::vector<mysqlpp::SQLTypeAdapter> *const)(v0 + 24));
  v4 = *(_QWORD *)(v1 + 8);
  v5 = *(_QWORD *)(v1 + 16);
  *(_QWORD *)v0 = v4;
  *(_QWORD *)(v0 + *(_QWORD *)(v4 - 24)) = v5;
  _Unwind_Resume(v2);
};

// Line 75: range 000000000C737F9A-000000000C737FF0
void __fastcall __noreturn mysqlpp::Query::Query()
{
  __int64 v0; // rbx
  std::ios_base *v1; // rbp
  struct _Unwind_Exception *v2; // r12
  __int64 v3; // r14
  std::stringbuf *v4; // r15

  std::stringbuf::~stringbuf(v4);
  std::_Rb_tree<std::string,std::pair<std::string const,short>,std::_Select1st<std::pair<std::string const,short>>,std::less<std::string>,std::allocator<std::pair<std::string const,short>>>::_M_erase(
    (std::_Rb_tree<std::string,std::pair<const std::string,short int>,std::_Select1st<std::pair<const std::string,short int> >,std::less<std::string >,std::allocator<std::pair<const std::string,short int> > > *const)(v0 + 128),
    *(std::_Rb_tree<std::string,std::pair<const std::string,short int>,std::_Select1st<std::pair<const std::string,short int> >,std::less<std::string >,std::allocator<std::pair<const std::string,short int> > >::_Link_type *)(v0 + 144));
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v0 + 104));
  std::vector<mysqlpp::SQLParseElement>::~vector((std::vector<mysqlpp::SQLParseElement> *const)(v0 + 80));
  std::vector<mysqlpp::SQLTypeAdapter>::~vector((std::vector<mysqlpp::SQLTypeAdapter> *const)(v0 + 24));
  *(_QWORD *)v0 = v3;
  *(_QWORD *)(v0 + 280) = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v1);
  _Unwind_Resume(v2);
};

// Line 91: range 000000000CF84110-000000000CF84131
mysqlpp::ulonglong __fastcall mysqlpp::Query::affected_rows(mysqlpp::Query *const this)
{
  mysqlpp::DBDriver *driver; // rdi
  std::string::pointer M_p; // rax

  driver = this->conn_->driver_;
  M_p = driver->error_message_._M_dataplus._M_p;
  driver = (mysqlpp::DBDriver *)((char *)driver + 8);
  driver->error_message_._M_dataplus._M_p = 0LL;
  *M_p = 0;
  return mysql_affected_rows((MYSQL *)driver);
};

// Line 98: range 000000000CF84140-000000000CF84144
int __fastcall mysqlpp::Query::errnum(const mysqlpp::Query *const this)
{
  return mysqlpp::Connection::errnum(this->conn_);
};

// Line 105: range 000000000CF84150-000000000CF84154
const char *__fastcall mysqlpp::Query::error(const mysqlpp::Query *const this)
{
  return mysqlpp::Connection::error(this->conn_);
};

// Line 112: range 000000000CF84160-000000000CF84193
size_t __fastcall mysqlpp::Query::escape_string(
        const mysqlpp::Query *const this,
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

// Line 128: range 000000000CF841A0-000000000CF841EB
size_t __fastcall mysqlpp::Query::escape_string(
        const mysqlpp::Query *const this,
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

// Line 143: range 000000000CF84890-000000000CF84919
_BOOL8 __fastcall mysqlpp::Query::exec(mysqlpp::Query *this, __int64 a2)
{
  ulong v3; // rdx
  const char *v4; // rsi
  mysqlpp::DBDriver *driver; // rdi
  std::string::pointer M_p; // rax
  int v7; // eax
  _BOOL8 result; // rax

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(const char **)a2;
  driver = this->conn_->driver_;
  M_p = driver->error_message_._M_dataplus._M_p;
  driver = (mysqlpp::DBDriver *)((char *)driver + 8);
  driver->error_message_._M_dataplus._M_p = 0LL;
  *M_p = 0;
  v7 = mysql_real_query((MYSQL *)driver, v4, v3);
  this->copacetic_ = v7 == 0;
  if ( v7 )
  {
    result = this->exceptions_;
    if ( result )
      mysqlpp::Query::exec();
  }
  else
  {
    result = 1LL;
    if ( this->parse_elems_._M_impl._M_start == this->parse_elems_._M_impl._M_finish )
    {
      mysqlpp::Query::reset(this);
      return 1LL;
    }
  }
  return result;
};

// Line 153: range 000000000C737A22-000000000C737A84
void __fastcall __noreturn mysqlpp::Query::exec()
{
  const mysqlpp::Query *v0; // rbp
  mysqlpp::Exception *exception; // r12
  int v2; // ebx
  const char *v3; // rax

  exception = (mysqlpp::Exception *)__cxa_allocate_exception(0x30uLL);
  v2 = mysqlpp::Query::errnum(v0);
  v3 = mysqlpp::Query::error(v0);
  mysqlpp::Exception::Exception(exception, v3);
  *(_DWORD *)exception[1].baseclass_0 = v2;
  *(_QWORD *)exception->baseclass_0 = &`vtable for'mysqlpp::BadQuery + 2;
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'mysqlpp::BadQuery,
    (void (__fastcall *)(void *))mysqlpp::BadQuery::~BadQuery);
};

// Line 163: range 000000000CF85A60-000000000CF85AE4
mysqlpp::Query *__fastcall mysqlpp::Query::execute(mysqlpp::Query *this, __int64 a2)
{
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > v3[2]; // [rsp+0h] [rbp-68h] BYREF
  void *v4[2]; // [rsp+20h] [rbp-48h] BYREF
  char v5; // [rsp+30h] [rbp-38h] BYREF

  *(_BYTE *)(a2 + 56) = 1;
  mysqlpp::Query::str[abi:cxx11](v4, a2, a2 + 24);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v3, v4, 0LL);
  mysqlpp::Query::execute(this, (const mysqlpp::SQLTypeAdapter *)a2);
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(v3);
  if ( v4[0] != &v5 )
    operator delete(v4[0]);
  *(_BYTE *)(a2 + 56) = 0;
  return this;
};

// Line 171: range 000000000CF859D0-000000000CF85A50
mysqlpp::Query *__fastcall mysqlpp::Query::execute(mysqlpp::Query *this, const mysqlpp::SQLTypeAdapter *a2, __int64 a3)
{
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > v4[2]; // [rsp+0h] [rbp-68h] BYREF
  void *v5[2]; // [rsp+20h] [rbp-48h] BYREF
  char v6; // [rsp+30h] [rbp-38h] BYREF

  LOBYTE(a2[2].buffer_.refs_) = 1;
  mysqlpp::Query::str[abi:cxx11](v5, a2, a3);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v4, v5, 0LL);
  mysqlpp::Query::execute(this, a2);
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(v4);
  if ( v5[0] != &v6 )
    operator delete(v5[0]);
  LOBYTE(a2[2].buffer_.refs_) = 0;
  return this;
};

// Line 179: range 000000000CF858D0-000000000CF859C0
mysqlpp::Query *__fastcall mysqlpp::Query::execute(
        mysqlpp::Query *this,
        const mysqlpp::SQLTypeAdapter *a2,
        const mysqlpp::SQLTypeAdapter *a3,
        const mysqlpp::SQLTypeAdapter *a4)
{
  const char *v6; // rax
  std::_Vector_base<mysqlpp::SQLTypeAdapter>::pointer M_finish; // r14
  std::_Vector_base<mysqlpp::SQLTypeAdapter>::pointer M_start; // r13
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > *p_buffer; // rdi
  std::vector<mysqlpp::SQLTypeAdapter> v11; // [rsp+0h] [rbp-58h] BYREF
  __int64 v12; // [rsp+18h] [rbp-40h]
  char v13; // [rsp+20h] [rbp-38h]

  if ( *(_QWORD *)&a2[3].is_processed_ - (unsigned __int64)a2[3].buffer_.refs_ == 80 && !LOBYTE(a2[2].buffer_.refs_) )
  {
    LOBYTE(a2[2].buffer_.refs_) = 1;
    v13 = 0;
    memset(&v11, 0, sizeof(v11));
    v12 = 0LL;
    std::vector<mysqlpp::SQLTypeAdapter>::_M_realloc_insert<mysqlpp::SQLTypeAdapter const&>(&v11, 0LL, a3, a4);
    mysqlpp::Query::execute(this, a2, (__int64)&v11);
    M_finish = v11._M_impl._M_finish;
    M_start = v11._M_impl._M_start;
    if ( v11._M_impl._M_finish != v11._M_impl._M_start )
    {
      do
      {
        p_buffer = &M_start->buffer_;
        ++M_start;
        mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(p_buffer);
      }
      while ( M_finish != M_start );
      M_start = v11._M_impl._M_start;
    }
    if ( M_start )
      operator delete(M_start);
    LOBYTE(a2[2].buffer_.refs_) = 0;
    return this;
  }
  else
  {
    mysqlpp::SQLTypeAdapter::length(a3);
    v6 = mysqlpp::SQLTypeAdapter::data(a3);
    mysqlpp::Query::execute(this, (const char *)a2, (unsigned __int64)v6);
    return this;
  }
};

// Line 197: range 000000000CF85650-000000000CF858CB
mysqlpp::Query *__fastcall mysqlpp::Query::execute(
        mysqlpp::Query *this,
        mysqlpp::Query *a2,
        const char *a3,
        unsigned __int64 a4)
{
  mysqlpp::DBDriver *driver; // rdi
  std::string::pointer v7; // rax
  int v8; // eax
  mysqlpp::ulonglong v9; // r13
  int (**inserted)(...); // rax
  bool v11; // zf
  char *v12; // rsi
  std::string::size_type v13; // rdx
  std::forward_iterator_tag v14; // cl
  const mysqlpp::SQLTypeAdapter *v16; // rcx
  const mysqlpp::SQLTypeAdapter *v17; // rcx
  std::string::size_type M_string_length; // rbx
  std::string::pointer M_p; // r13
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > *v20; // rdi
  mysqlpp::SQLTypeAdapter v21; // [rsp+0h] [rbp-A8h] BYREF
  mysqlpp::SQLTypeAdapter other; // [rsp+20h] [rbp-88h] BYREF
  std::string v23; // [rsp+40h] [rbp-68h] BYREF
  char v24; // [rsp+60h] [rbp-48h]

  if ( (std::_Vector_base<mysqlpp::SQLParseElement>::pointer)((char *)a2->parse_elems_._M_impl._M_finish
                                                            - (char *)a2->parse_elems_._M_impl._M_start) == (std::_Vector_base<mysqlpp::SQLParseElement>::pointer)80
    && !a2->template_defaults.processing_ )
  {
    a2->template_defaults.processing_ = 1;
    v24 = 0;
    memset(&v23, 0, sizeof(v23));
    mysqlpp::SQLTypeAdapter::SQLTypeAdapter(&v21, a3, 0);
    if ( v23._M_string_length == v23._anon_0._M_allocated_capacity )
    {
      std::vector<mysqlpp::SQLTypeAdapter>::_M_realloc_insert<mysqlpp::SQLTypeAdapter const&>(
        (std::vector<mysqlpp::SQLTypeAdapter> *const)&v23,
        (std::vector<mysqlpp::SQLTypeAdapter>::iterator)v23._M_string_length,
        &v21,
        v16);
    }
    else
    {
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)v23._M_string_length, &v21);
      v23._M_string_length += 24LL;
    }
    mysqlpp::SQLTypeAdapter::SQLTypeAdapter(&other, a4);
    if ( v23._M_string_length == v23._anon_0._M_allocated_capacity )
    {
      std::vector<mysqlpp::SQLTypeAdapter>::_M_realloc_insert<mysqlpp::SQLTypeAdapter const&>(
        (std::vector<mysqlpp::SQLTypeAdapter> *const)&v23,
        (std::vector<mysqlpp::SQLTypeAdapter>::iterator)v23._M_string_length,
        &other,
        v17);
    }
    else
    {
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)v23._M_string_length, &other);
      v23._M_string_length += 24LL;
    }
    mysqlpp::Query::execute(this, (const mysqlpp::SQLTypeAdapter *)a2, (__int64)&v23);
    mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(&other.buffer_);
    mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(&v21.buffer_);
    M_string_length = v23._M_string_length;
    M_p = v23._M_dataplus._M_p;
    if ( (std::string::pointer)v23._M_string_length != v23._M_dataplus._M_p )
    {
      do
      {
        v20 = (mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > *)M_p;
        M_p += 24;
        mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(v20);
      }
      while ( (std::string::pointer)M_string_length != M_p );
      M_p = v23._M_dataplus._M_p;
    }
    if ( M_p )
      operator delete(M_p);
    a2->template_defaults.processing_ = 0;
  }
  else
  {
    driver = a2->conn_->driver_;
    v7 = driver->error_message_._M_dataplus._M_p;
    driver = (mysqlpp::DBDriver *)((char *)driver + 8);
    driver->error_message_._M_dataplus._M_p = 0LL;
    *v7 = 0;
    v8 = mysql_real_query((MYSQL *)driver, a3, a4);
    a2->copacetic_ = v8 == 0;
    if ( v8 )
    {
      if ( a2->exceptions_ )
        mysqlpp::Query::execute();
      this->baseclass_0[0] = 0;
      this->_vptr_OptionalExceptions = 0LL;
      *(_QWORD *)&this->exceptions_ = 0LL;
      this->template_defaults._M_impl._M_start = (std::_Vector_base<mysqlpp::SQLTypeAdapter>::pointer)&this->template_defaults._M_impl._M_end_of_storage;
      this->template_defaults._M_impl._M_finish = 0LL;
      LOBYTE(this->template_defaults._M_impl._M_end_of_storage) = 0;
    }
    else
    {
      if ( a2->parse_elems_._M_impl._M_start == a2->parse_elems_._M_impl._M_finish )
        mysqlpp::Query::reset(a2);
      mysqlpp::Query::info[abi:cxx11](&v23, a2);
      v9 = mysqlpp::Query::affected_rows(a2);
      inserted = (int (**)(...))mysqlpp::Query::insert_id(a2);
      v11 = a2->conn_ == 0LL;
      this->_vptr_OptionalExceptions = inserted;
      v12 = v23._M_dataplus._M_p;
      v13 = v23._M_string_length;
      *(_QWORD *)&this->exceptions_ = v9;
      this->template_defaults._M_impl._M_start = (std::_Vector_base<mysqlpp::SQLTypeAdapter>::pointer)&this->template_defaults._M_impl._M_end_of_storage;
      this->baseclass_0[0] = !v11;
      std::string::_M_construct<char *>((std::string *const)&this->template_defaults, v12, &v12[v13], v14);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v23._M_dataplus._M_p != &v23._anon_0 )
        operator delete(v23._M_dataplus._M_p);
    }
  }
  return this;
};

// Line 214: range 000000000C737CB2-000000000C737D01
void __fastcall __noreturn mysqlpp::Query::execute()
{
  const mysqlpp::Query *v0; // rbp
  mysqlpp::Exception *exception; // r12
  int v2; // ebx
  const char *v3; // rax

  exception = (mysqlpp::Exception *)__cxa_allocate_exception(0x30uLL);
  v2 = mysqlpp::Query::errnum(v0);
  v3 = mysqlpp::Query::error(v0);
  mysqlpp::Exception::Exception(exception, v3);
  *(_DWORD *)exception[1].baseclass_0 = v2;
  *(_QWORD *)exception->baseclass_0 = &`vtable for'mysqlpp::BadQuery + 2;
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'mysqlpp::BadQuery,
    (void (__fastcall *)(void *))mysqlpp::BadQuery::~BadQuery);
};

// Line 224: range 000000000CF841F0-000000000CF84207
std::string *__fastcall mysqlpp::Query::info[abi:cxx11](std::string *retstr, mysqlpp::Query *const this)
{
  mysqlpp::DBDriver::query_info[abi:cxx11](retstr, this->conn_->driver_);
  return retstr;
};

// Line 232: range 000000000CF84210-000000000CF84231
mysqlpp::ulonglong __fastcall mysqlpp::Query::insert_id(mysqlpp::Query *const this)
{
  mysqlpp::DBDriver *driver; // rdi
  std::string::pointer M_p; // rax

  driver = this->conn_->driver_;
  M_p = driver->error_message_._M_dataplus._M_p;
  driver = (mysqlpp::DBDriver *)((char *)driver + 8);
  driver->error_message_._M_dataplus._M_p = 0LL;
  *M_p = 0;
  return mysql_insert_id((MYSQL *)driver);
};

// Line 238: range 000000000CF84240-000000000CF84273
bool __fastcall mysqlpp::Query::more_results(mysqlpp::Query *const this)
{
  mysqlpp::DBDriver *driver; // rdi
  std::string::pointer M_p; // rax

  driver = this->conn_->driver_;
  M_p = driver->error_message_._M_dataplus._M_p;
  driver = (mysqlpp::DBDriver *)((char *)driver + 8);
  driver->error_message_._M_dataplus._M_p = 0LL;
  *M_p = 0;
  return mysql_more_results((MYSQL *)driver) != 0;
};

// Line 245: range 000000000CF85AF0-000000000CF85C14
__int64 __fastcall mysqlpp::Query::operator=(__int64 a1, __int64 a2)
{
  std::vector<mysqlpp::SQLTypeAdapter> *v3; // rdi
  const std::vector<mysqlpp::SQLTypeAdapter> *v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r8
  const char *v9; // rcx
  void *v11; // [rsp+0h] [rbp-38h] BYREF
  __int64 v12; // [rsp+8h] [rbp-30h]
  char v13[40]; // [rsp+10h] [rbp-28h] BYREF

  v3 = (std::vector<mysqlpp::SQLTypeAdapter> *)(a1 + 24);
  v5 = (const std::vector<mysqlpp::SQLTypeAdapter> *)(a2 + 24);
  LOBYTE(v3[-1]._M_impl._M_end_of_storage) = v5[-1]._M_impl._M_end_of_storage;
  std::vector<mysqlpp::SQLTypeAdapter>::operator=(v3, v5);
  v6 = *(_QWORD *)(a2 + 48);
  v11 = v13;
  v12 = 0LL;
  *(_QWORD *)(a1 + 48) = v6;
  LOBYTE(v6) = *(_BYTE *)(a2 + 56);
  v13[0] = 0;
  *(_BYTE *)(a1 + 56) = v6;
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
  *(_BYTE *)(a1 + 72) = *(_BYTE *)(a2 + 72);
  v7 = *(_QWORD *)(a2 + 216);
  if ( v7 )
  {
    v8 = *(_QWORD *)(a2 + 200);
    v9 = *(const char **)(a2 + 208);
    if ( v7 > v8 )
      std::string::_M_replace(&v11, 0LL, 0LL, v9, v7 - (_QWORD)v9);
    else
      std::string::_M_replace(&v11, 0LL, 0LL, v9, v8 - (_QWORD)v9);
  }
  else
  {
    std::string::_M_assign(&v11, a2 + 248);
  }
  std::__ostream_insert<char,std::char_traits<char>>(a1, v11, v12);
  if ( v11 != v13 )
    operator delete(v11);
  std::vector<mysqlpp::SQLParseElement>::operator=(
    (std::vector<mysqlpp::SQLParseElement> *const)(a1 + 80),
    (const std::vector<mysqlpp::SQLParseElement> *)(a2 + 80));
  std::vector<std::string>::operator=(
    (std::vector<std::string> *const)(a1 + 104),
    (const std::vector<std::string> *)(a2 + 104));
  std::_Rb_tree<std::string,std::pair<std::string const,short>,std::_Select1st<std::pair<std::string const,short>>,std::less<std::string>,std::allocator<std::pair<std::string const,short>>>::operator=(
    (std::_Rb_tree<std::string,std::pair<const std::string,short int>,std::_Select1st<std::pair<const std::string,short int> >,std::less<std::string >,std::allocator<std::pair<const std::string,short int> > > *const)(a1 + 128),
    (const std::_Rb_tree<std::string,std::pair<const std::string,short int>,std::_Select1st<std::pair<const std::string,short int> >,std::less<std::string >,std::allocator<std::pair<const std::string,short int> > > *)(a2 + 128));
  return a1;
};

// Line 262: range 000000000CF84280-000000000CF8429D
void *__fastcall mysqlpp::Query::operator void *(const mysqlpp::Query *const this)
{
  void *result; // rax

  if ( !this->conn_->copacetic_ )
    return 0LL;
  result = 0LL;
  if ( this->copacetic_ )
    return (void *)this;
  return result;
};

// Line 268: range 000000000CF85C20-000000000CF8667D
void __fastcall mysqlpp::Query::parse(mysqlpp::Query *this, __int64 a2, __int64 a3, std::forward_iterator_tag a4)
{
  mysqlpp::Query *v4; // r13
  __int8 *v5; // rbp
  mysqlpp::SQLParseElement *p_x; // r14
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r8
  const char *v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r8
  const char *v12; // rcx
  std::string::size_type M_string_length; // r12
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r8
  const char *v16; // rcx
  std::string *M_p; // r15
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r8
  const char *v20; // rcx
  std::forward_iterator_tag v21; // cl
  std::string *v22; // rdi
  char *v23; // rbx
  char v24; // bp
  char v25; // al
  int v26; // eax
  std::_Rb_tree_node_base::_Base_ptr v27; // rcx
  char v28; // al
  std::forward_iterator_tag v29; // cl
  mysqlpp::SQLParseElement *v30; // rdx
  char *v31; // r12
  std::string::size_type v32; // rbx
  std::string::pointer v33; // rax
  std::string::size_type v34; // rdx
  std::forward_iterator_tag v35; // cl
  mysqlpp::SQLParseElement *v36; // rdx
  std::string::size_type v37; // rbx
  std::string::pointer v38; // rax
  std::string::size_type v39; // rdx
  std::string::size_type v40; // rbp
  std::string::size_type M_allocated_capacity; // rdx
  std::string::pointer v42; // rax
  char *i; // rbx
  char v44; // r12
  int v45; // eax
  size_t v46; // rbp
  _BYTE *v47; // rax
  size_t v48; // rdx
  std::vector<std::string>::iterator v49; // rsi
  std::_Vector_base<std::string>::pointer M_start; // rdi
  __int64 v51; // rcx
  const std::piecewise_construct_t *v52; // r9
  std::_Rb_tree_iterator<std::pair<const std::string,short int> >::_Base_ptr p_M_header; // rbp
  mysqlpp::SQLParseElement *v54; // rax
  void *v55; // r12
  std::_Rb_tree_node_base::_Base_ptr M_parent; // r13
  size_t v57; // r14
  mysqlpp::SQLParseElement *v58; // r15
  size_t v59; // rbx
  size_t v60; // rdx
  int v61; // eax
  __int64 v62; // rbx
  mysqlpp::SQLParseElement *v63; // rax
  size_t v64; // r15
  size_t v65; // rdx
  int v66; // eax
  std::tuple<const std::string&> *v67; // [rsp+0h] [rbp-148h]
  std::tuple<> *v68; // [rsp+8h] [rbp-140h]
  char v69; // [rsp+28h] [rbp-120h]
  char v70; // [rsp+37h] [rbp-111h]
  _BYTE *dest; // [rsp+48h] [rbp-100h]
  std::_Rb_tree_header *v72; // [rsp+50h] [rbp-F8h]
  std::_Rb_tree_node_base::_Base_ptr v73; // [rsp+50h] [rbp-F8h]
  char *v74; // [rsp+58h] [rbp-F0h]
  mysqlpp::Query *v75; // [rsp+60h] [rbp-E8h]
  char nptr; // [rsp+7Ch] [rbp-CCh] BYREF
  char v77; // [rsp+7Dh] [rbp-CBh]
  char v78; // [rsp+7Eh] [rbp-CAh]
  char v79; // [rsp+7Fh] [rbp-C9h]
  std::string v80; // [rsp+80h] [rbp-C8h] BYREF
  void *s2; // [rsp+A0h] [rbp-A8h] BYREF
  size_t n; // [rsp+A8h] [rbp-A0h]
  __int64 v83[2]; // [rsp+B0h] [rbp-98h] BYREF
  std::string src; // [rsp+C0h] [rbp-88h] BYREF
  std::string __x; // [rsp+E0h] [rbp-68h] BYREF
  __int16 v86; // [rsp+100h] [rbp-48h]

  v4 = this;
  v5 = &this->sbuffer_[72];
  p_x = (mysqlpp::SQLParseElement *)&__x;
  v80._M_dataplus._M_p = v80._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v80, &off_1B23A528[4], &off_1B23A528[4], a4);
  n = 0LL;
  v68 = (std::tuple<> *)v83;
  s2 = v83;
  __x._M_dataplus._M_p = __x._anon_0._M_local_buf;
  v7 = *(_QWORD *)&this->sbuffer_[40];
  LOBYTE(v83[0]) = 0;
  __x._M_string_length = 0LL;
  __x._anon_0._M_local_buf[0] = 0;
  if ( v7 )
  {
    v8 = *(_QWORD *)&this->sbuffer_[24];
    v9 = *(const char **)&this->sbuffer_[32];
    if ( v7 > v8 )
      std::string::_M_replace(&__x, 0LL, 0LL, v9, v7 - (_QWORD)v9);
    else
      std::string::_M_replace(&__x, 0LL, 0LL, v9, v8 - (_QWORD)v9);
  }
  else
  {
    std::string::_M_assign(&__x, v5);
  }
  dest = (_BYTE *)operator new[](__x._M_string_length + 1);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__x._M_dataplus._M_p != &__x._anon_0 )
    operator delete(__x._M_dataplus._M_p);
  __x._anon_0._M_local_buf[0] = 0;
  __x._M_string_length = 0LL;
  __x._M_dataplus._M_p = __x._anon_0._M_local_buf;
  v10 = *(_QWORD *)&this->sbuffer_[40];
  if ( v10 )
  {
    v11 = *(_QWORD *)&this->sbuffer_[24];
    v12 = *(const char **)&this->sbuffer_[32];
    if ( v10 <= v11 )
      std::string::_M_replace(&__x, 0LL, 0LL, v12, v11 - (_QWORD)v12);
    else
      std::string::_M_replace(&__x, 0LL, 0LL, v12, v10 - (_QWORD)v12);
  }
  else
  {
    std::string::_M_assign(&__x, v5);
  }
  src._anon_0._M_local_buf[0] = 0;
  M_string_length = __x._M_string_length;
  src._M_dataplus._M_p = src._anon_0._M_local_buf;
  v14 = *(_QWORD *)&this->sbuffer_[40];
  src._M_string_length = 0LL;
  if ( v14 )
  {
    v15 = *(_QWORD *)&this->sbuffer_[24];
    v16 = *(const char **)&this->sbuffer_[32];
    if ( v14 <= v15 )
      std::string::_M_replace(&src, 0LL, 0LL, v16, v15 - (_QWORD)v16);
    else
      std::string::_M_replace(&src, 0LL, 0LL, v16, v14 - (_QWORD)v16);
  }
  else
  {
    std::string::_M_assign(&src, v5);
  }
  M_p = (std::string *)src._M_dataplus._M_p;
  memcpy(dest, src._M_dataplus._M_p, M_string_length);
  if ( M_p != (std::string *)&src._anon_0 )
    operator delete(M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__x._M_dataplus._M_p != &__x._anon_0 )
    operator delete(__x._M_dataplus._M_p);
  __x._anon_0._M_local_buf[0] = 0;
  __x._M_string_length = 0LL;
  __x._M_dataplus._M_p = __x._anon_0._M_local_buf;
  v18 = *(_QWORD *)&this->sbuffer_[40];
  if ( v18 )
  {
    v19 = *(_QWORD *)&this->sbuffer_[24];
    v20 = *(const char **)&this->sbuffer_[32];
    if ( v18 <= v19 )
      std::string::_M_replace(&__x, 0LL, 0LL, v20, v19 - (_QWORD)v20);
    else
      std::string::_M_replace(&__x, 0LL, 0LL, v20, v18 - (_QWORD)v20);
  }
  else
  {
    std::string::_M_assign(&__x, v5);
  }
  v22 = (std::string *)__x._M_dataplus._M_p;
  dest[__x._M_string_length] = 0;
  if ( v22 != (std::string *)&__x._anon_0 )
    operator delete(v22);
  v23 = dest;
  v24 = *dest;
  if ( !*dest )
    goto LABEL_43;
LABEL_37:
  while ( 2 )
  {
    v31 = v23 + 1;
    if ( v24 == 37 )
    {
      v25 = v23[1];
      if ( v25 == 37 )
      {
        v40 = v80._M_string_length;
        v23 += 2;
        M_allocated_capacity = 15LL;
        v42 = v80._M_dataplus._M_p;
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v80._M_dataplus._M_p != &v80._anon_0 )
          M_allocated_capacity = v80._anon_0._M_allocated_capacity;
        if ( v80._M_string_length + 1 > M_allocated_capacity )
        {
          std::string::_M_mutate(&v80, v80._M_string_length, 0LL, 0LL, 1LL);
          v42 = v80._M_dataplus._M_p;
        }
        v42[v40] = 37;
        v80._M_string_length = v40 + 1;
        v80._M_dataplus._M_p[v40 + 1] = 0;
        goto LABEL_36;
      }
      if ( (unsigned int)(v25 - 48) > 9 )
      {
        v37 = v80._M_string_length;
        v38 = v80._M_dataplus._M_p;
        v39 = 15LL;
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v80._M_dataplus._M_p != &v80._anon_0 )
          v39 = v80._anon_0._M_allocated_capacity;
        if ( v80._M_string_length + 1 > v39 )
        {
          std::string::_M_mutate(&v80, v80._M_string_length, 0LL, 0LL, 1LL);
          v38 = v80._M_dataplus._M_p;
        }
        v38[v37] = 37;
        v80._M_string_length = v37 + 1;
        v80._M_dataplus._M_p[v37 + 1] = 0;
        v23 = v31;
        goto LABEL_36;
      }
      nptr = v23[1];
      if ( (unsigned int)(v23[2] - 48) > 9 )
      {
        v77 = 0;
        v23 += 2;
      }
      else
      {
        v26 = v23[3];
        v77 = v23[2];
        v78 = 0;
        if ( (unsigned int)(v26 - 48) <= 9 )
        {
          v78 = v26;
          v23 += 4;
          v79 = 0;
        }
        else
        {
          v23 += 3;
        }
      }
      v70 = 32;
      v69 = strtol(&nptr, 0LL, 10);
      v28 = *v23;
      if ( (*v23 & 0xDF) == 81 )
      {
        v70 = *v23++;
        v28 = *v23;
      }
      if ( v28 != 58 )
        goto LABEL_31;
      for ( i = v23 + 1; ; ++i )
      {
        v44 = *i;
        v45 = isalnum(*i);
        if ( v44 != 95 && !v45 )
          break;
        v46 = n;
        v47 = s2;
        v48 = 15LL;
        if ( s2 != v68 )
          v48 = v83[0];
        if ( n + 1 > v48 )
        {
          std::string::_M_mutate(&s2, n, 0LL, 0LL, 1LL);
          v47 = s2;
        }
        v47[v46] = v44;
        n = v46 + 1;
        *((_BYTE *)s2 + v46 + 1) = 0;
      }
      v49._M_current = v4->parsed_names_._M_impl._M_finish;
      M_start = v4->parsed_names_._M_impl._M_start;
      v23 = &i[v44 == 58];
      v51 = v49._M_current - M_start;
      if ( v69 >= (__int16)v51 )
      {
        __x._M_string_length = 0LL;
        __x._anon_0._M_local_buf[0] = 0;
        __x._M_dataplus._M_p = __x._anon_0._M_local_buf;
        std::vector<std::string>::_M_fill_insert(&v4->parsed_names_, v49, v69 + 1 - v51, &p_x->before);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__x._M_dataplus._M_p != &__x._anon_0 )
          operator delete(__x._M_dataplus._M_p);
        M_start = v4->parsed_names_._M_impl._M_start;
      }
      std::string::_M_assign(&M_start[v69], &s2);
      v72 = &v4->parsed_nums_._M_t._M_impl.std::_Rb_tree_header;
      if ( !v4->parsed_nums_._M_t._M_impl._M_header._M_parent )
      {
        p_M_header = &v4->parsed_nums_._M_t._M_impl._M_header;
        goto LABEL_94;
      }
      p_M_header = &v4->parsed_nums_._M_t._M_impl._M_header;
      v54 = p_x;
      v75 = v4;
      v74 = v23;
      v55 = s2;
      M_parent = v4->parsed_nums_._M_t._M_impl._M_header._M_parent;
      v57 = n;
      v58 = v54;
      while ( 1 )
      {
        v59 = (size_t)M_parent[1]._M_parent;
        v60 = v57;
        if ( v59 <= v57 )
          v60 = (size_t)M_parent[1]._M_parent;
        if ( v60 )
        {
          v61 = memcmp(*(const void **)&M_parent[1]._M_color, v55, v60);
          if ( v61 )
            goto LABEL_86;
        }
        v62 = v59 - v57;
        if ( v62 >= 0x80000000LL )
        {
LABEL_87:
          p_M_header = M_parent;
          M_parent = M_parent->_M_left;
          if ( !M_parent )
          {
LABEL_88:
            v63 = v58;
            v23 = v74;
            v64 = v57;
            v4 = v75;
            p_x = v63;
            if ( v72 == (std::_Rb_tree_header *)p_M_header )
              goto LABEL_94;
            v27 = p_M_header[1]._M_parent;
            v65 = (size_t)v27;
            if ( v64 <= (unsigned __int64)v27 )
              v65 = v64;
            if ( !v65
              || (v73 = p_M_header[1]._M_parent,
                  v66 = memcmp(v55, *(const void **)&p_M_header[1]._M_color, v65),
                  v27 = v73,
                  !v66) )
            {
              v52 = (const std::piecewise_construct_t *)(v64 - (_QWORD)v27);
              if ( (__int64)(v64 - (_QWORD)v27) >= 0x80000000LL )
                goto LABEL_95;
              if ( (__int64)v52 > (__int64)0xFFFFFFFF7FFFFFFFLL )
              {
                v66 = v64 - (_DWORD)v27;
                goto LABEL_93;
              }
LABEL_94:
              __x._M_dataplus._M_p = (std::string::pointer)&s2;
              p_M_header = std::_Rb_tree<std::string,std::pair<std::string const,short>,std::_Select1st<std::pair<std::string const,short>>,std::less<std::string>,std::allocator<std::pair<std::string const,short>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string const&>,std::tuple<>>(
                             &v4->parsed_nums_._M_t,
                             (std::_Rb_tree<std::string,std::pair<const std::string,short int>,std::_Select1st<std::pair<const std::string,short int> >,std::less<std::string >,std::allocator<std::pair<const std::string,short int> > >::const_iterator)p_M_header,
                             &std::piecewise_construct,
                             (std::tuple<const std::string&> *)p_x,
                             (std::tuple<> *)&src,
                             v52,
                             v67,
                             v68)._M_node;
              goto LABEL_95;
            }
LABEL_93:
            if ( v66 < 0 )
              goto LABEL_94;
LABEL_95:
            LOWORD(p_M_header[2]._M_color) = v69;
LABEL_31:
            src._M_dataplus._M_p = src._anon_0._M_local_buf;
            std::string::_M_construct<char *>(
              &src,
              v80._M_dataplus._M_p,
              &v80._M_dataplus._M_p[v80._M_string_length],
              (std::forward_iterator_tag)v27);
            __x._M_dataplus._M_p = __x._anon_0._M_local_buf;
            std::string::_M_construct<char *>(
              &p_x->before,
              src._M_dataplus._M_p,
              &src._M_dataplus._M_p[src._M_string_length],
              v29);
            LOBYTE(v86) = v70;
            HIBYTE(v86) = v69;
            std::vector<mysqlpp::SQLParseElement>::emplace_back<mysqlpp::SQLParseElement>(&v4->parse_elems_, p_x, v30);
            if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__x._M_dataplus._M_p != &__x._anon_0 )
              operator delete(__x._M_dataplus._M_p);
            if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p != &src._anon_0 )
              operator delete(src._M_dataplus._M_p);
            std::string::_M_replace(&v80, 0LL, v80._M_string_length, &off_1B23A528[4], 0LL);
            std::string::_M_replace(&s2, 0LL, n, &off_1B23A528[4], 0LL);
LABEL_36:
            v24 = *v23;
            if ( !*v23 )
              goto LABEL_43;
            goto LABEL_37;
          }
        }
        else
        {
          if ( v62 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
            goto LABEL_78;
          v61 = v62;
LABEL_86:
          if ( v61 >= 0 )
            goto LABEL_87;
LABEL_78:
          M_parent = M_parent->_M_right;
          if ( !M_parent )
            goto LABEL_88;
        }
      }
    }
    v32 = v80._M_string_length;
    v33 = v80._M_dataplus._M_p;
    v34 = 15LL;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v80._M_dataplus._M_p != &v80._anon_0 )
      v34 = v80._anon_0._M_allocated_capacity;
    if ( v80._M_string_length + 1 > v34 )
    {
      std::string::_M_mutate(&v80, v80._M_string_length, 0LL, 0LL, 1LL);
      v33 = v80._M_dataplus._M_p;
    }
    v33[v32] = v24;
    v80._M_string_length = v32 + 1;
    v80._M_dataplus._M_p[v32 + 1] = 0;
    v23 = v31;
    v24 = *v31;
    if ( *v31 )
      continue;
    break;
  }
LABEL_43:
  src._M_dataplus._M_p = src._anon_0._M_local_buf;
  std::string::_M_construct<char *>(&src, v80._M_dataplus._M_p, &v80._M_dataplus._M_p[v80._M_string_length], v21);
  __x._M_dataplus._M_p = __x._anon_0._M_local_buf;
  std::string::_M_construct<char *>(
    &p_x->before,
    src._M_dataplus._M_p,
    &src._M_dataplus._M_p[src._M_string_length],
    v35);
  v86 = -224;
  std::vector<mysqlpp::SQLParseElement>::emplace_back<mysqlpp::SQLParseElement>(&v4->parse_elems_, p_x, v36);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__x._M_dataplus._M_p != &__x._anon_0 )
    operator delete(__x._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p != &src._anon_0 )
    operator delete(src._M_dataplus._M_p);
  operator delete[](dest);
  if ( s2 != v68 )
    operator delete(s2);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v80._M_dataplus._M_p != &v80._anon_0 )
    operator delete(v80._M_dataplus._M_p);
};

// Line 368: range 000000000CF842E0-000000000CF84604
mysqlpp::SQLTypeAdapter *__fastcall mysqlpp::Query::pprepare(
        mysqlpp::Query *this,
        char a2,
        mysqlpp::SQLTypeAdapter *a3,
        char a4)
{
  mysqlpp::SQLTypeAdapter *v6; // r14
  std::forward_iterator_tag v8; // cl
  mysqlpp::SQLTypeAdapter::size_type v9; // r14
  const char *v10; // rsi
  _BOOL8 v11; // r14
  std::forward_iterator_tag v12; // cl
  const char *v13; // rsi
  mysqlpp::SQLTypeAdapter::size_type v14; // rax
  char *v15; // r14
  mysqlpp::DBDriver *driver; // r15
  const char *v17; // rdx
  std::string::pointer M_p; // rax
  ulong v19; // rdx
  mysqlpp::SQLTypeAdapter *v20; // rdi
  mysqlpp::SQLTypeAdapter::size_type v21; // r14
  const char *v22; // rsi
  mysqlpp::SQLTypeAdapter::size_type length; // [rsp+8h] [rbp-60h]
  std::string v24; // [rsp+10h] [rbp-58h] BYREF

  if ( a3->is_processed_ )
    return a3;
  if ( a2 != 113 )
  {
    if ( a2 == 81 && mysqlpp::SQLTypeAdapter::quote_q(a3) )
    {
      v24._M_dataplus._M_p = v24._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(&v24, "'", "", v8);
      v9 = mysqlpp::SQLTypeAdapter::length(a3);
      v10 = mysqlpp::SQLTypeAdapter::data(a3);
      if ( v9 > 0x3FFFFFFFFFFFFFFFLL - v24._M_string_length )
        std::__throw_length_error("basic_string::append");
      std::string::_M_append(&v24, v10, v9);
      if ( v24._M_string_length == 0x3FFFFFFFFFFFFFFFLL )
        std::__throw_length_error("basic_string::append");
      std::string::_M_append(&v24, "'", 1LL);
      v6 = (mysqlpp::SQLTypeAdapter *)operator new(0x18uLL);
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v6, &v24, 0LL);
      if ( !a4 )
        goto LABEL_12;
      goto LABEL_23;
    }
    if ( a4 )
      a3->is_processed_ = 1;
    return a3;
  }
  v11 = mysqlpp::SQLTypeAdapter::quote_q(a3);
  v13 = "'";
  v24._M_dataplus._M_p = v24._anon_0._M_local_buf;
  if ( !mysqlpp::SQLTypeAdapter::quote_q(a3) )
    v13 = &off_1B23A528[4];
  std::string::_M_construct<char const*>(&v24, v13, &v13[v11], v12);
  if ( mysqlpp::SQLTypeAdapter::escape_q(a3) )
  {
    v14 = mysqlpp::SQLTypeAdapter::length(a3);
    v15 = (char *)operator new[](2 * v14 + 1);
    driver = this->conn_->driver_;
    length = mysqlpp::SQLTypeAdapter::length(a3);
    v17 = mysqlpp::SQLTypeAdapter::data(a3);
    M_p = driver->error_message_._M_dataplus._M_p;
    driver->error_message_._M_string_length = 0LL;
    *M_p = 0;
    v19 = mysql_real_escape_string(&driver->mysql_, v15, v17, length);
    if ( v19 > 0x3FFFFFFFFFFFFFFFLL - v24._M_string_length )
      std::__throw_length_error("basic_string::append");
    std::string::_M_append(&v24, v15);
    operator delete[](v15);
  }
  else
  {
    v21 = mysqlpp::SQLTypeAdapter::length(a3);
    v22 = mysqlpp::SQLTypeAdapter::data(a3);
    if ( v21 > 0x3FFFFFFFFFFFFFFFLL - v24._M_string_length )
      std::__throw_length_error("basic_string::append");
    std::string::_M_append(&v24, v22, v21);
  }
  if ( mysqlpp::SQLTypeAdapter::quote_q(a3) )
  {
    if ( v24._M_string_length == 0x3FFFFFFFFFFFFFFFLL )
      std::__throw_length_error("basic_string::append");
    std::string::_M_append(&v24, "'", 1LL);
  }
  v6 = (mysqlpp::SQLTypeAdapter *)operator new(0x18uLL);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v6, &v24, 0LL);
  if ( !a4 )
    goto LABEL_12;
LABEL_23:
  mysqlpp::SQLTypeAdapter::operator=(a3, v6);
  a3->is_processed_ = 1;
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(&v6->buffer_);
  v20 = v6;
  v6 = a3;
  operator delete(v20, 0x18uLL);
LABEL_12:
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v24._M_dataplus._M_p != &v24._anon_0 )
    operator delete(v24._M_dataplus._M_p);
  return v6;
};

// Line 389: range 000000000C73788E-000000000C7378AD
void __fastcall __noreturn mysqlpp::Query::pprepare(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void *a8)
{
  struct _Unwind_Exception *v8; // rbp
  void *v9; // r13
  void *v10; // r14

  operator delete(v10, 0x18uLL);
  if ( a8 != v9 )
    operator delete(a8);
  _Unwind_Resume(v8);
};

// Line 428: range 000000000CF84920-000000000CF84B47
void __fastcall mysqlpp::Query::proc(
        mysqlpp::Query *this,
        mysqlpp::SQLQueryParms *a2,
        __int64 a3,
        std::forward_iterator_tag a4)
{
  __int64 v4; // rcx
  std::_Vector_base<mysqlpp::SQLParseElement>::pointer M_start; // rbx
  unsigned __int64 num; // rax
  std::_Vector_base<mysqlpp::SQLTypeAdapter>::pointer v7; // rcx
  mysqlpp::SQLQueryParms *p_template_defaults; // rdx
  mysqlpp::SQLTypeAdapter *v9; // r15
  mysqlpp::SQLTypeAdapter *v10; // r14
  char *exception; // rbp
  std::forward_iterator_tag v12; // cl
  std::string v13[2]; // [rsp+0h] [rbp-58h] BYREF

  v13[0]._M_dataplus._M_p = v13[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v13, &off_1B23A528[4], &off_1B23A528[4], a4);
  std::string::_M_replace(
    &this->sbuffer_[72],
    0LL,
    *(_QWORD *)&this->sbuffer_[80],
    v13[0]._M_dataplus._M_p,
    v13[0]._M_string_length);
  v4 = 0LL;
  if ( (this->sbuffer_[64] & 3) != 0 )
    v4 = *(_QWORD *)&this->sbuffer_[80];
  std::stringbuf::_M_sync(this->sbuffer_, *(_QWORD *)&this->sbuffer_[72], 0LL, v4);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v13[0]._M_dataplus._M_p != &v13[0]._anon_0 )
    operator delete(v13[0]._M_dataplus._M_p);
  M_start = this->parse_elems_._M_impl._M_start;
  if ( M_start != this->parse_elems_._M_impl._M_finish )
  {
    while ( 1 )
    {
      std::__ostream_insert<char,std::char_traits<char>>(
        this,
        M_start->before._M_dataplus._M_p,
        M_start->before._M_string_length);
      num = M_start->num;
      if ( (num & 0x80u) != 0LL )
        goto LABEL_8;
      v7 = a2->_M_impl._M_start;
      if ( num < 0xAAAAAAAAAAAAAAABLL * (((char *)a2->_M_impl._M_finish - (char *)a2->_M_impl._M_start) >> 3) )
      {
        p_template_defaults = a2;
      }
      else
      {
        v7 = this->template_defaults._M_impl._M_start;
        if ( num >= 0xAAAAAAAAAAAAAAABLL * (((char *)this->template_defaults._M_impl._M_finish - (char *)v7) >> 3) )
        {
          std::__ostream_insert<char,std::char_traits<char>>(this, " ERROR", 6LL);
          exception = (char *)__cxa_allocate_exception(0x28uLL);
          *(_QWORD *)exception = &`vtable for'mysqlpp::Exception + 2;
          *((_QWORD *)exception + 1) = exception + 24;
          std::string::_M_construct<char const*>(
            (std::string *const)(exception + 8),
            &byte_1A2D85FB[-43],
            byte_1A2D85FB,
            v12);
          *(_QWORD *)exception = &`vtable for'mysqlpp::BadParamCount + 2;
          _cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'mysqlpp::BadParamCount,
            (void (__fastcall *)(void *))mysqlpp::BadParamCount::~BadParamCount);
        }
        p_template_defaults = &this->template_defaults;
      }
      v9 = &v7[num];
      if ( v9->buffer_.counted_->is_null_ )
      {
        std::__ostream_insert<char,std::char_traits<char>>(this, "NULL", 4LL);
LABEL_8:
        if ( this->parse_elems_._M_impl._M_finish == ++M_start )
          return;
      }
      else
      {
        v10 = mysqlpp::Query::pprepare(this, M_start->option, v9, p_template_defaults->parent_ != 0LL);
        mysqlpp::operator<<((std::ostream *)this, v10);
        if ( v10 == v9 || !v10 )
          goto LABEL_8;
        ++M_start;
        mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(&v10->buffer_);
        operator delete(v10, 0x18uLL);
        if ( this->parse_elems_._M_impl._M_finish == M_start )
          return;
      }
    }
  }
};

// Line 469: range 000000000CF84780-000000000CF84883
void __fastcall mysqlpp::Query::reset(mysqlpp::Query *this)
{
  std::forward_iterator_tag v2; // cl
  __int64 v3; // rcx
  mysqlpp::SQLParseElement *M_start; // r12
  std::_Vector_base<mysqlpp::SQLParseElement>::pointer M_finish; // r13
  std::_Vector_base<mysqlpp::SQLParseElement>::pointer v6; // rbp
  std::_Vector_base<mysqlpp::SQLTypeAdapter>::pointer v7; // r13
  mysqlpp::SQLTypeAdapter *v8; // r12
  std::_Vector_base<mysqlpp::SQLTypeAdapter>::pointer v9; // rbp
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > *p_buffer; // rdi
  std::string v11[2]; // [rsp+0h] [rbp-48h] BYREF

  std::ostream::seekp(this, 0LL, 0LL);
  std::ios::clear(&this->baseclass_0[*(_QWORD *)(*(_QWORD *)this->baseclass_0 - 24LL)], 0LL);
  v11[0]._M_dataplus._M_p = v11[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v11, &off_1B23A528[4], &off_1B23A528[4], v2);
  std::string::_M_replace(
    &this->sbuffer_[72],
    0LL,
    *(_QWORD *)&this->sbuffer_[80],
    v11[0]._M_dataplus._M_p,
    v11[0]._M_string_length);
  v3 = 0LL;
  if ( (this->sbuffer_[64] & 3) != 0 )
    v3 = *(_QWORD *)&this->sbuffer_[80];
  std::stringbuf::_M_sync(this->sbuffer_, *(_QWORD *)&this->sbuffer_[72], 0LL, v3);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v11[0]._M_dataplus._M_p != &v11[0]._anon_0 )
    operator delete(v11[0]._M_dataplus._M_p);
  M_start = this->parse_elems_._M_impl._M_start;
  M_finish = this->parse_elems_._M_impl._M_finish;
  if ( M_start != M_finish )
  {
    v6 = this->parse_elems_._M_impl._M_start;
    do
    {
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6->before._M_dataplus._M_p != &v6->before._anon_0 )
        operator delete(v6->before._M_dataplus._M_p);
      ++v6;
    }
    while ( M_finish != v6 );
    this->parse_elems_._M_impl._M_finish = M_start;
  }
  v7 = this->template_defaults._M_impl._M_finish;
  v8 = this->template_defaults._M_impl._M_start;
  if ( v8 != v7 )
  {
    v9 = this->template_defaults._M_impl._M_start;
    do
    {
      p_buffer = &v9->buffer_;
      ++v9;
      mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(p_buffer);
    }
    while ( v7 != v9 );
    this->template_defaults._M_impl._M_finish = v8;
  }
};

// Line 481: range 000000000CF842A0-000000000CF842D3
bool __fastcall mysqlpp::Query::result_empty(mysqlpp::Query *const this)
{
  mysqlpp::DBDriver *driver; // rdi
  std::string::pointer M_p; // rax

  driver = this->conn_->driver_;
  M_p = driver->error_message_._M_dataplus._M_p;
  driver = (mysqlpp::DBDriver *)((char *)driver + 8);
  driver->error_message_._M_dataplus._M_p = 0LL;
  *M_p = 0;
  return mysql_field_count((MYSQL *)driver) == 0;
};

// Line 488: range 000000000CF850B0-000000000CF85134
mysqlpp::Query *__fastcall mysqlpp::Query::store(mysqlpp::Query *this, __int64 a2)
{
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > v3[2]; // [rsp+0h] [rbp-68h] BYREF
  void *v4[2]; // [rsp+20h] [rbp-48h] BYREF
  char v5; // [rsp+30h] [rbp-38h] BYREF

  *(_BYTE *)(a2 + 56) = 1;
  mysqlpp::Query::str[abi:cxx11](v4, a2, a2 + 24);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v3, v4, 0LL);
  mysqlpp::Query::store(this, (const mysqlpp::SQLTypeAdapter *)a2);
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(v3);
  if ( v4[0] != &v5 )
    operator delete(v4[0]);
  *(_BYTE *)(a2 + 56) = 0;
  return this;
};

// Line 496: range 000000000CF84C20-000000000CF84CA0
mysqlpp::Query *__fastcall mysqlpp::Query::store(mysqlpp::Query *this, const mysqlpp::SQLTypeAdapter *a2, __int64 a3)
{
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > v4[2]; // [rsp+0h] [rbp-68h] BYREF
  void *v5[2]; // [rsp+20h] [rbp-48h] BYREF
  char v6; // [rsp+30h] [rbp-38h] BYREF

  LOBYTE(a2[2].buffer_.refs_) = 1;
  mysqlpp::Query::str[abi:cxx11](v5, a2, a3);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v4, v5, 0LL);
  mysqlpp::Query::store(this, a2);
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(v4);
  if ( v5[0] != &v6 )
    operator delete(v5[0]);
  LOBYTE(a2[2].buffer_.refs_) = 0;
  return this;
};

// Line 504: range 000000000CF84FB0-000000000CF850A0
mysqlpp::Query *__fastcall mysqlpp::Query::store(
        mysqlpp::Query *this,
        mysqlpp::SQLTypeAdapter *a2,
        const mysqlpp::SQLTypeAdapter *a3,
        const mysqlpp::SQLTypeAdapter *a4)
{
  char *v6; // rax
  std::_Vector_base<mysqlpp::SQLTypeAdapter>::pointer M_finish; // r14
  std::_Vector_base<mysqlpp::SQLTypeAdapter>::pointer M_start; // r13
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > *p_buffer; // rdi
  std::vector<mysqlpp::SQLTypeAdapter> v11; // [rsp+0h] [rbp-58h] BYREF
  __int64 v12; // [rsp+18h] [rbp-40h]
  char v13; // [rsp+20h] [rbp-38h]

  if ( *(_QWORD *)&a2[3].is_processed_ - (unsigned __int64)a2[3].buffer_.refs_ == 80 && !LOBYTE(a2[2].buffer_.refs_) )
  {
    LOBYTE(a2[2].buffer_.refs_) = 1;
    v13 = 0;
    memset(&v11, 0, sizeof(v11));
    v12 = 0LL;
    std::vector<mysqlpp::SQLTypeAdapter>::_M_realloc_insert<mysqlpp::SQLTypeAdapter const&>(&v11, 0LL, a3, a4);
    mysqlpp::Query::store(this, a2, (__int64)&v11);
    M_finish = v11._M_impl._M_finish;
    M_start = v11._M_impl._M_start;
    if ( v11._M_impl._M_finish != v11._M_impl._M_start )
    {
      do
      {
        p_buffer = &M_start->buffer_;
        ++M_start;
        mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(p_buffer);
      }
      while ( M_finish != M_start );
      M_start = v11._M_impl._M_start;
    }
    if ( M_start )
      operator delete(M_start);
    LOBYTE(a2[2].buffer_.refs_) = 0;
    return this;
  }
  else
  {
    mysqlpp::SQLTypeAdapter::length(a3);
    v6 = (char *)mysqlpp::SQLTypeAdapter::data(a3);
    mysqlpp::Query::store(this, (mysqlpp::SQLQueryParms *)a2, v6);
    return this;
  }
};

// Line 522: range 000000000CF84CB0-000000000CF84FA3
mysqlpp::Query *__fastcall mysqlpp::Query::store(
        mysqlpp::Query *this,
        mysqlpp::SQLTypeAdapter *a2,
        char *a3,
        unsigned __int64 a4)
{
  mysqlpp::Exception *exception; // r12
  int v5; // ebx
  const char *v6; // rax
  mysqlpp::Query *v10; // rdi
  _BYTE *v11; // rax
  int v12; // eax
  mysqlpp::Query *v13; // rdi
  _BYTE *v14; // rax
  st_mysql_res *v15; // rsi
  int v17; // eax
  const mysqlpp::SQLTypeAdapter *v18; // rcx
  const mysqlpp::SQLTypeAdapter *v19; // rcx
  std::_Vector_base<mysqlpp::SQLTypeAdapter>::pointer M_finish; // rbx
  std::_Vector_base<mysqlpp::SQLTypeAdapter>::pointer M_start; // r13
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > *p_buffer; // rdi
  mysqlpp::SQLTypeAdapter other; // [rsp+10h] [rbp-A8h] BYREF
  mysqlpp::SQLTypeAdapter v24; // [rsp+30h] [rbp-88h] BYREF
  std::vector<mysqlpp::SQLTypeAdapter> v25; // [rsp+50h] [rbp-68h] BYREF
  __int64 v26; // [rsp+68h] [rbp-50h]
  char v27; // [rsp+70h] [rbp-48h]

  if ( *(_QWORD *)&a2[3].is_processed_ - (unsigned __int64)a2[3].buffer_.refs_ == 80 && !LOBYTE(a2[2].buffer_.refs_) )
  {
    LOBYTE(a2[2].buffer_.refs_) = 1;
    v27 = 0;
    memset(&v25, 0, sizeof(v25));
    v26 = 0LL;
    mysqlpp::SQLTypeAdapter::SQLTypeAdapter(&other, a3, 0);
    if ( v25._M_impl._M_finish == v25._M_impl._M_end_of_storage )
      std::vector<mysqlpp::SQLTypeAdapter>::_M_realloc_insert<mysqlpp::SQLTypeAdapter const&>(
        &v25,
        (std::vector<mysqlpp::SQLTypeAdapter>::iterator)v25._M_impl._M_finish,
        &other,
        v18);
    else
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v25._M_impl._M_finish++, &other);
    mysqlpp::SQLTypeAdapter::SQLTypeAdapter(&v24, a4);
    if ( v25._M_impl._M_finish == v25._M_impl._M_end_of_storage )
      std::vector<mysqlpp::SQLTypeAdapter>::_M_realloc_insert<mysqlpp::SQLTypeAdapter const&>(
        &v25,
        (std::vector<mysqlpp::SQLTypeAdapter>::iterator)v25._M_impl._M_finish,
        &v24,
        v19);
    else
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v25._M_impl._M_finish++, &v24);
    mysqlpp::Query::store(this, a2, (__int64)&v25);
    mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(&v24.buffer_);
    mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(&other.buffer_);
    M_finish = v25._M_impl._M_finish;
    M_start = v25._M_impl._M_start;
    if ( v25._M_impl._M_finish != v25._M_impl._M_start )
    {
      do
      {
        p_buffer = &M_start->buffer_;
        ++M_start;
        mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(p_buffer);
      }
      while ( M_finish != M_start );
      M_start = v25._M_impl._M_start;
    }
    if ( M_start )
      operator delete(M_start);
    LOBYTE(a2[2].buffer_.refs_) = 0;
  }
  else
  {
    v10 = *(mysqlpp::Query **)(*(_QWORD *)&a2[2].is_processed_ + 48LL);
    v11 = *(_BYTE **)&v10[2].sbuffer_[184];
    v10 = (mysqlpp::Query *)((char *)v10 + 8);
    *(_QWORD *)&v10[2].sbuffer_[184] = 0LL;
    *v11 = 0;
    v12 = mysql_real_query((MYSQL *)v10, a3, a4);
    LOBYTE(a2[3].buffer_.counted_) = v12 == 0;
    if ( v12
      || (v13 = *(mysqlpp::Query **)(*(_QWORD *)&a2[2].is_processed_ + 48LL),
          v14 = *(_BYTE **)&v13[2].sbuffer_[184],
          v13 = (mysqlpp::Query *)((char *)v13 + 8),
          *(_QWORD *)&v13[2].sbuffer_[184] = 0LL,
          *v14 = 0,
          (v15 = mysql_store_result((MYSQL *)v13)) == 0LL) )
    {
      v17 = mysqlpp::Connection::errnum(*(mysqlpp::Connection *const *)&a2[2].is_processed_);
      LOBYTE(a2[3].buffer_.counted_) = v17 == 0;
      if ( v17 )
      {
        if ( a2->is_processed_ )
        {
          exception = (mysqlpp::Exception *)__cxa_allocate_exception(0x30uLL);
          v5 = mysqlpp::Query::errnum((const mysqlpp::Query *const)a2);
          v6 = mysqlpp::Query::error((const mysqlpp::Query *const)a2);
          mysqlpp::Exception::Exception(exception, v6);
          *(_DWORD *)exception[1].baseclass_0 = v5;
          *(_QWORD *)exception->baseclass_0 = &`vtable for'mysqlpp::BadQuery + 2;
          _cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'mysqlpp::BadQuery,
            (void (__fastcall *)(void *))mysqlpp::BadQuery::~BadQuery);
        }
      }
      else if ( a2[3].buffer_.refs_ == *(size_t **)&a2[3].is_processed_ )
      {
        mysqlpp::Query::reset((mysqlpp::Query *)a2);
      }
      LOBYTE(this->_vptr_OptionalExceptions) = 1;
      *(_QWORD *)&this->exceptions_ = 0LL;
      LOBYTE(this->parsed_names_._M_impl._M_finish) = 0;
      this->template_defaults._M_impl._M_start = 0LL;
      this->template_defaults._M_impl._M_finish = 0LL;
      this->template_defaults._M_impl._M_end_of_storage = 0LL;
      this->template_defaults.parent_ = 0LL;
      *(_QWORD *)&this->template_defaults.processing_ = 0LL;
      this->conn_ = 0LL;
      *(_QWORD *)&this->copacetic_ = 0LL;
      this->parse_elems_._M_impl._M_start = 0LL;
      this->parse_elems_._M_impl._M_finish = 0LL;
      this->parse_elems_._M_impl._M_end_of_storage = 0LL;
      this->parsed_names_._M_impl._M_start = 0LL;
      *(_QWORD *)this->baseclass_0 = &`vtable for'mysqlpp::StoreQueryResult + 2;
    }
    else
    {
      if ( a2[3].buffer_.refs_ == *(size_t **)&a2[3].is_processed_ )
        mysqlpp::Query::reset((mysqlpp::Query *)a2);
      mysqlpp::StoreQueryResult::StoreQueryResult(
        (mysqlpp::StoreQueryResult *)this,
        v15,
        *(mysqlpp::DBDriver **)(*(_QWORD *)&a2[2].is_processed_ + 48LL),
        a2->is_processed_);
    }
  }
  return this;
};

// Line 570: range 000000000CF84610-000000000CF8477B
mysqlpp::Query *__fastcall mysqlpp::Query::store_next(mysqlpp::Query *this, const mysqlpp::Query *a2)
{
  mysqlpp::Exception *exception; // r12
  int v3; // ebx
  const char *v4; // rax
  mysqlpp::Exception *v5; // r12
  int v6; // ebx
  const char *v7; // rax
  mysqlpp::DBDriver *driver; // rdi
  std::string::pointer M_p; // rax
  int v12; // eax
  mysqlpp::DBDriver *v13; // rdi
  std::string::pointer v14; // rax
  st_mysql_res *v15; // rsi
  mysqlpp::Query *result; // rax

  driver = a2->conn_->driver_;
  M_p = driver->error_message_._M_dataplus._M_p;
  driver = (mysqlpp::DBDriver *)((char *)driver + 8);
  driver->error_message_._M_dataplus._M_p = 0LL;
  *M_p = 0;
  v12 = mysql_next_result((MYSQL *)driver);
  if ( v12 == -1 )
  {
    if ( a2->exceptions_ && mysqlpp::Connection::errnum(a2->conn_) )
    {
      exception = (mysqlpp::Exception *)__cxa_allocate_exception(0x30uLL);
      v3 = mysqlpp::Query::errnum(a2);
      v4 = mysqlpp::Query::error(a2);
      mysqlpp::Exception::Exception(exception, v4);
      *(_DWORD *)exception[1].baseclass_0 = v3;
      *(_QWORD *)exception->baseclass_0 = &`vtable for'mysqlpp::BadQuery + 2;
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::BadQuery,
        (void (__fastcall *)(void *))mysqlpp::BadQuery::~BadQuery);
    }
  }
  else if ( v12 )
  {
    if ( a2->exceptions_ )
      mysqlpp::Query::store_next();
  }
  else
  {
    v13 = a2->conn_->driver_;
    v14 = v13->error_message_._M_dataplus._M_p;
    v13 = (mysqlpp::DBDriver *)((char *)v13 + 8);
    v13->error_message_._M_dataplus._M_p = 0LL;
    *v14 = 0;
    v15 = mysql_store_result((MYSQL *)v13);
    if ( v15 )
    {
      mysqlpp::StoreQueryResult::StoreQueryResult(
        (mysqlpp::StoreQueryResult *)this,
        v15,
        a2->conn_->driver_,
        a2->exceptions_);
      return this;
    }
    if ( mysqlpp::Connection::errnum(a2->conn_) )
    {
      if ( a2->exceptions_ )
      {
        v5 = (mysqlpp::Exception *)__cxa_allocate_exception(0x30uLL);
        v6 = mysqlpp::Query::errnum(a2);
        v7 = mysqlpp::Query::error(a2);
        mysqlpp::Exception::Exception(v5, v7);
        *(_DWORD *)v5[1].baseclass_0 = v6;
        *(_QWORD *)v5->baseclass_0 = &`vtable for'mysqlpp::BadQuery + 2;
        _cxa_throw(
          v5,
          (struct type_info *)&`typeinfo for'mysqlpp::BadQuery,
          (void (__fastcall *)(void *))mysqlpp::BadQuery::~BadQuery);
      }
    }
  }
  LOBYTE(this->_vptr_OptionalExceptions) = 1;
  *(_QWORD *)&this->exceptions_ = 0LL;
  LOBYTE(this->parsed_names_._M_impl._M_finish) = 0;
  *(_QWORD *)this->baseclass_0 = &`vtable for'mysqlpp::StoreQueryResult + 2;
  result = this;
  this->template_defaults._M_impl._M_start = 0LL;
  this->template_defaults._M_impl._M_finish = 0LL;
  this->template_defaults._M_impl._M_end_of_storage = 0LL;
  this->template_defaults.parent_ = 0LL;
  *(_QWORD *)&this->template_defaults.processing_ = 0LL;
  this->conn_ = 0LL;
  *(_QWORD *)&this->copacetic_ = 0LL;
  this->parse_elems_._M_impl._M_start = 0LL;
  this->parse_elems_._M_impl._M_finish = 0LL;
  this->parse_elems_._M_impl._M_end_of_storage = 0LL;
  this->parsed_names_._M_impl._M_start = 0LL;
  return result;
};

// Line 595: range 000000000C7378D6-000000000C737925
void __fastcall __noreturn mysqlpp::Query::store_next()
{
  const mysqlpp::Query *v0; // rbp
  mysqlpp::Exception *exception; // r12
  int v2; // ebx
  const char *v3; // rax

  exception = (mysqlpp::Exception *)__cxa_allocate_exception(0x30uLL);
  v2 = mysqlpp::Query::errnum(v0);
  v3 = mysqlpp::Query::error(v0);
  mysqlpp::Exception::Exception(exception, v3);
  *(_DWORD *)exception[1].baseclass_0 = v2;
  *(_QWORD *)exception->baseclass_0 = &`vtable for'mysqlpp::BadQuery + 2;
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'mysqlpp::BadQuery,
    (void (__fastcall *)(void *))mysqlpp::BadQuery::~BadQuery);
};

// Line 615: range 000000000CF84B50-000000000CF84C10
__int64 __fastcall mysqlpp::Query::str[abi:cxx11](
        __int64 a1,
        __int64 a2,
        mysqlpp::SQLQueryParms *a3,
        std::forward_iterator_tag a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r8
  const char *v6; // rcx

  if ( *(_QWORD *)(a2 + 88) != *(_QWORD *)(a2 + 80) )
    mysqlpp::Query::proc((mysqlpp::Query *)a2, a3, (__int64)a3, a4);
  *(_BYTE *)(a1 + 16) = 0;
  *(_QWORD *)a1 = a1 + 16;
  v4 = *(_QWORD *)(a2 + 216);
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( v4 )
  {
    v5 = *(_QWORD *)(a2 + 200);
    v6 = *(const char **)(a2 + 208);
    if ( v4 > v5 )
      std::string::_M_replace(a1, 0LL, 0LL, v6, v4 - (_QWORD)v6);
    else
      std::string::_M_replace(a1, 0LL, 0LL, v6, v5 - (_QWORD)v6);
    return a1;
  }
  else
  {
    std::string::_M_assign(a1, a2 + 248);
    return a1;
  }
};

// Line 626: range 000000000CF855C0-000000000CF85644
mysqlpp::Query *__fastcall mysqlpp::Query::use(
        mysqlpp::Query *this,
        __int64 a2,
        __int64 a3,
        std::forward_iterator_tag a4)
{
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > v5[2]; // [rsp+0h] [rbp-68h] BYREF
  void *v6[2]; // [rsp+20h] [rbp-48h] BYREF
  char v7; // [rsp+30h] [rbp-38h] BYREF

  *(_BYTE *)(a2 + 56) = 1;
  mysqlpp::Query::str[abi:cxx11]((__int64)v6, a2, (mysqlpp::SQLQueryParms *)(a2 + 24), a4);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v5, v6, 0LL);
  mysqlpp::Query::use(this, (const mysqlpp::SQLTypeAdapter *)a2);
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(v5);
  if ( v6[0] != &v7 )
    operator delete(v6[0]);
  *(_BYTE *)(a2 + 56) = 0;
  return this;
};

// Line 634: range 000000000CF85140-000000000CF851C0
mysqlpp::Query *__fastcall mysqlpp::Query::use(
        mysqlpp::Query *this,
        const mysqlpp::SQLTypeAdapter *a2,
        mysqlpp::SQLQueryParms *a3,
        std::forward_iterator_tag a4)
{
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > v5[2]; // [rsp+0h] [rbp-68h] BYREF
  void *v6[2]; // [rsp+20h] [rbp-48h] BYREF
  char v7; // [rsp+30h] [rbp-38h] BYREF

  LOBYTE(a2[2].buffer_.refs_) = 1;
  mysqlpp::Query::str[abi:cxx11]((__int64)v6, (__int64)a2, a3, a4);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v5, v6, 0LL);
  mysqlpp::Query::use(this, a2);
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(v5);
  if ( v6[0] != &v7 )
    operator delete(v6[0]);
  LOBYTE(a2[2].buffer_.refs_) = 0;
  return this;
};

// Line 642: range 000000000CF854C0-000000000CF855B0
mysqlpp::Query *__fastcall mysqlpp::Query::use(
        mysqlpp::Query *this,
        mysqlpp::SQLTypeAdapter *a2,
        const mysqlpp::SQLTypeAdapter *a3,
        const mysqlpp::SQLTypeAdapter *a4)
{
  char *v6; // rax
  std::forward_iterator_tag v8; // cl
  std::_Vector_base<mysqlpp::SQLTypeAdapter>::pointer M_finish; // r14
  std::_Vector_base<mysqlpp::SQLTypeAdapter>::pointer M_start; // r13
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > *p_buffer; // rdi
  mysqlpp::SQLQueryParms v12[2]; // [rsp+0h] [rbp-58h] BYREF

  if ( *(_QWORD *)&a2[3].is_processed_ - (unsigned __int64)a2[3].buffer_.refs_ == 80 && !LOBYTE(a2[2].buffer_.refs_) )
  {
    LOBYTE(a2[2].buffer_.refs_) = 1;
    memset(v12, 0, 33);
    std::vector<mysqlpp::SQLTypeAdapter>::_M_realloc_insert<mysqlpp::SQLTypeAdapter const&>(&v12[0], 0LL, a3, a4);
    mysqlpp::Query::use(this, a2, v12, v8);
    M_finish = v12[0]._M_impl._M_finish;
    M_start = v12[0]._M_impl._M_start;
    if ( v12[0]._M_impl._M_finish != v12[0]._M_impl._M_start )
    {
      do
      {
        p_buffer = &M_start->buffer_;
        ++M_start;
        mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(p_buffer);
      }
      while ( M_finish != M_start );
      M_start = v12[0]._M_impl._M_start;
    }
    if ( M_start )
      operator delete(M_start);
    LOBYTE(a2[2].buffer_.refs_) = 0;
    return this;
  }
  else
  {
    mysqlpp::SQLTypeAdapter::length(a3);
    v6 = (char *)mysqlpp::SQLTypeAdapter::data(a3);
    mysqlpp::Query::use(this, (mysqlpp::SQLQueryParms *)a2, v6);
    return this;
  }
};

// Line 660: range 000000000CF851D0-000000000CF854B3
mysqlpp::Query *__fastcall mysqlpp::Query::use(
        mysqlpp::Query *this,
        mysqlpp::SQLTypeAdapter *a2,
        char *a3,
        unsigned __int64 a4)
{
  mysqlpp::Exception *exception; // r12
  int v5; // ebx
  const char *v6; // rax
  mysqlpp::Query *v10; // rdi
  _BYTE *v11; // rax
  int v12; // eax
  mysqlpp::Query *v13; // rdi
  _BYTE *v14; // rax
  st_mysql_res *v15; // rsi
  int v17; // eax
  const mysqlpp::SQLTypeAdapter *v18; // rcx
  const mysqlpp::SQLTypeAdapter *v19; // rcx
  std::forward_iterator_tag v20; // cl
  std::_Vector_base<mysqlpp::SQLTypeAdapter>::pointer M_finish; // rbx
  std::_Vector_base<mysqlpp::SQLTypeAdapter>::pointer M_start; // r13
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > *p_buffer; // rdi
  mysqlpp::SQLTypeAdapter other; // [rsp+10h] [rbp-A8h] BYREF
  mysqlpp::SQLTypeAdapter v25; // [rsp+30h] [rbp-88h] BYREF
  mysqlpp::SQLQueryParms v26[2]; // [rsp+50h] [rbp-68h] BYREF

  if ( *(_QWORD *)&a2[3].is_processed_ - (unsigned __int64)a2[3].buffer_.refs_ == 80 && !LOBYTE(a2[2].buffer_.refs_) )
  {
    LOBYTE(a2[2].buffer_.refs_) = 1;
    memset(v26, 0, 33);
    mysqlpp::SQLTypeAdapter::SQLTypeAdapter(&other, a3, 0);
    if ( v26[0]._M_impl._M_finish == v26[0]._M_impl._M_end_of_storage )
      std::vector<mysqlpp::SQLTypeAdapter>::_M_realloc_insert<mysqlpp::SQLTypeAdapter const&>(
        &v26[0],
        (std::vector<mysqlpp::SQLTypeAdapter>::iterator)v26[0]._M_impl._M_finish,
        &other,
        v18);
    else
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v26[0]._M_impl._M_finish++, &other);
    mysqlpp::SQLTypeAdapter::SQLTypeAdapter(&v25, a4);
    if ( v26[0]._M_impl._M_finish == v26[0]._M_impl._M_end_of_storage )
      std::vector<mysqlpp::SQLTypeAdapter>::_M_realloc_insert<mysqlpp::SQLTypeAdapter const&>(
        &v26[0],
        (std::vector<mysqlpp::SQLTypeAdapter>::iterator)v26[0]._M_impl._M_finish,
        &v25,
        v19);
    else
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v26[0]._M_impl._M_finish++, &v25);
    mysqlpp::Query::use(this, a2, v26, v20);
    mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(&v25.buffer_);
    mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(&other.buffer_);
    M_finish = v26[0]._M_impl._M_finish;
    M_start = v26[0]._M_impl._M_start;
    if ( v26[0]._M_impl._M_finish != v26[0]._M_impl._M_start )
    {
      do
      {
        p_buffer = &M_start->buffer_;
        ++M_start;
        mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(p_buffer);
      }
      while ( M_finish != M_start );
      M_start = v26[0]._M_impl._M_start;
    }
    if ( M_start )
      operator delete(M_start);
    LOBYTE(a2[2].buffer_.refs_) = 0;
  }
  else
  {
    v10 = *(mysqlpp::Query **)(*(_QWORD *)&a2[2].is_processed_ + 48LL);
    v11 = *(_BYTE **)&v10[2].sbuffer_[184];
    v10 = (mysqlpp::Query *)((char *)v10 + 8);
    *(_QWORD *)&v10[2].sbuffer_[184] = 0LL;
    *v11 = 0;
    v12 = mysql_real_query((MYSQL *)v10, a3, a4);
    LOBYTE(a2[3].buffer_.counted_) = v12 == 0;
    if ( v12
      || (v13 = *(mysqlpp::Query **)(*(_QWORD *)&a2[2].is_processed_ + 48LL),
          v14 = *(_BYTE **)&v13[2].sbuffer_[184],
          v13 = (mysqlpp::Query *)((char *)v13 + 8),
          *(_QWORD *)&v13[2].sbuffer_[184] = 0LL,
          *v14 = 0,
          (v15 = mysql_use_result((MYSQL *)v13)) == 0LL) )
    {
      v17 = mysqlpp::Connection::errnum(*(mysqlpp::Connection *const *)&a2[2].is_processed_);
      LOBYTE(a2[3].buffer_.counted_) = v17 == 0;
      if ( v17 )
      {
        if ( a2->is_processed_ )
        {
          exception = (mysqlpp::Exception *)__cxa_allocate_exception(0x30uLL);
          v5 = mysqlpp::Query::errnum((const mysqlpp::Query *const)a2);
          v6 = mysqlpp::Query::error((const mysqlpp::Query *const)a2);
          mysqlpp::Exception::Exception(exception, v6);
          *(_DWORD *)exception[1].baseclass_0 = v5;
          *(_QWORD *)exception->baseclass_0 = &`vtable for'mysqlpp::BadQuery + 2;
          _cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'mysqlpp::BadQuery,
            (void (__fastcall *)(void *))mysqlpp::BadQuery::~BadQuery);
        }
      }
      else if ( a2[3].buffer_.refs_ == *(size_t **)&a2[3].is_processed_ )
      {
        mysqlpp::Query::reset((mysqlpp::Query *)a2);
      }
      LOBYTE(this->_vptr_OptionalExceptions) = 1;
      *(_QWORD *)&this->exceptions_ = 0LL;
      this->template_defaults._M_impl._M_start = 0LL;
      this->template_defaults._M_impl._M_finish = 0LL;
      this->template_defaults._M_impl._M_end_of_storage = 0LL;
      this->template_defaults.parent_ = 0LL;
      *(_QWORD *)&this->template_defaults.processing_ = 0LL;
      this->conn_ = 0LL;
      *(_QWORD *)&this->copacetic_ = 0LL;
      this->parse_elems_._M_impl._M_start = 0LL;
      *(_QWORD *)this->baseclass_0 = &`vtable for'mysqlpp::UseQueryResult + 2;
      this->parse_elems_._M_impl._M_finish = 0LL;
      this->parse_elems_._M_impl._M_end_of_storage = 0LL;
    }
    else
    {
      if ( a2[3].buffer_.refs_ == *(size_t **)&a2[3].is_processed_ )
        mysqlpp::Query::reset((mysqlpp::Query *)a2);
      mysqlpp::UseQueryResult::UseQueryResult(
        (mysqlpp::UseQueryResult *)this,
        v15,
        *(mysqlpp::DBDriver **)(*(_QWORD *)&a2[2].is_processed_ + 48LL),
        a2->is_processed_);
    }
  }
  return this;
};

// Line 702: range 000000000C747740-000000000C7477D2
void __cdecl GLOBAL__sub_I_query_cpp()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
  mysqlpp::RowCountInsertPolicyI = 0LL;
  __cxa_atexit(
    (void (__fastcall *)(void *))mysqlpp::Query::RowCountInsertPolicy<mysqlpp::Transaction>::~RowCountInsertPolicy,
    &mysqlpp::RowCountInsertPolicyI,
    &_dso_handle);
  mysqlpp::SizeThresholdInsertPolicyI.size_ = 0;
  __cxa_atexit(
    (void (__fastcall *)(void *))mysqlpp::Query::SizeThresholdInsertPolicy<mysqlpp::Transaction>::~SizeThresholdInsertPolicy,
    &mysqlpp::SizeThresholdInsertPolicyI,
    &_dso_handle);
  mysqlpp::MaxPacketInsertPolicyI.conn_ = 0LL;
  mysqlpp::MaxPacketInsertPolicyI.size_ = 0;
  __cxa_atexit(
    (void (__fastcall *)(void *))mysqlpp::Query::MaxPacketInsertPolicy<mysqlpp::Transaction>::~MaxPacketInsertPolicy,
    &mysqlpp::MaxPacketInsertPolicyI,
    &_dso_handle);
};
