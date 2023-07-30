// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql++_3_2_3/lib/sql_buffer.cpp

// Line 39: range 000000000CF8C8F0-000000000CF8C917
mysqlpp::SQLBuffer *__fastcall mysqlpp::SQLBuffer::assign(
        mysqlpp::SQLBuffer *const this,
        const char *data,
        mysqlpp::SQLBuffer::size_type length,
        unsigned __int8 *type,
        bool is_null)
{
  unsigned __int8 v7; // al

  mysqlpp::SQLBuffer::replace_buffer(this, data, length);
  v7 = *type;
  this->is_null_ = is_null;
  this->type_.num_ = v7;
  return this;
};

// Line 48: range 000000000CF8C920-000000000CF8C94D
mysqlpp::SQLBuffer *__fastcall mysqlpp::SQLBuffer::assign(
        mysqlpp::SQLBuffer *const this,
        const std::string *s,
        unsigned __int8 *type,
        bool is_null)
{
  unsigned __int8 v6; // al

  mysqlpp::SQLBuffer::replace_buffer(this, s->_M_dataplus._M_p, s->_M_string_length);
  v6 = *type;
  this->is_null_ = is_null;
  this->type_.num_ = v6;
  return this;
};

// Line 57: range 000000000CF8C800-000000000CF8C888
bool __fastcall mysqlpp::SQLBuffer::quote_q(const mysqlpp::SQLBuffer *const this)
{
  const char *v2; // rdi
  const char *v3; // rsi
  const char *data; // rax

  v2 = (const char *)*((_QWORD *)mysqlpp::mysql_type_info::types[mysqlpp::mysql_type_info::type(
                                                                   (enum_field_types)mysqlpp::mysql_type_info::types[this->type_.num_].base_type_,
                                                                   0,
                                                                   0)].c_type_
                     + 1);
  v3 = (const char *)*(&`typeinfo for'mysqlpp::DateTime + 1);
  return (v2 != v3 && (*v2 == 42 || strcmp(v2, v3))
       || (data = this->data_) == 0LL
       || this->length_ <= 4
       || *(_DWORD *)data != 676810574
       || data[4] != 41)
      && mysqlpp::mysql_type_info::quote_q(&this->type_);
};

// Line 72: range 000000000CF8C890-000000000CF8C8E4
void __fastcall mysqlpp::SQLBuffer::replace_buffer(
        mysqlpp::SQLBuffer *const this,
        const char *pd,
        mysqlpp::SQLBuffer::size_type length)
{
  char *data; // rdi
  char *v6; // rax

  data = (char *)this->data_;
  if ( data )
    operator delete[](data);
  this->data_ = 0LL;
  this->length_ = 0LL;
  if ( pd )
  {
    v6 = (char *)operator new[](length + 1);
    this->length_ = length;
    this->data_ = v6;
    *((_BYTE *)memcpy(v6, pd, length) + length) = 0;
  }
};

// Line 91: range 000000000C747840-000000000C747869
void __cdecl GLOBAL__sub_I_sql_buffer_cpp()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
