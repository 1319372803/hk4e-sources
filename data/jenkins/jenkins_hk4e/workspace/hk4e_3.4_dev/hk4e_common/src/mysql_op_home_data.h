// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_common/src/mysql_op_home_data.h

// Line 23: range 000000000D42C8D4-000000000D42CACE
TableHomeData *__cdecl TableHomeData::operator=(TableHomeData *const this, const TableHomeData *a2)
{
  mysqlpp::sql_int_unsigned uid; // ecx
  mysqlpp::sql_int_unsigned data_version; // ecx
  const char *table_override; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  uid = a2->uid;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->uid = uid;
  mysqlpp::String::operator=(&this->bin_data, &a2->bin_data);
  if ( *(_BYTE *)(((unsigned __int64)&a2->data_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->data_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->data_version);
  }
  data_version = a2->data_version;
  if ( *(_BYTE *)(((unsigned __int64)&this->data_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->data_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->data_version);
  }
  this->data_version = data_version;
  std::string::operator=(&this->block_end_time, &a2->block_end_time);
  if ( *(char *)(((unsigned __int64)&this->is_delete >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_delete);
  if ( *(char *)(((unsigned __int64)&a2->is_delete >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_delete);
  this->is_delete.value_ = a2->is_delete.value_;
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_, &a2->block_end_time);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
  return this;
};

// Line 23: range 000000000CC8E258-000000000CC8E2C7
void __cdecl TableHomeData::TableHomeData(TableHomeData *const this)
{
  mysqlpp::String::String(&this->bin_data);
  std::string::basic_string(&this->block_end_time);
  mysqlpp::tiny_int<signed char>::tiny_int(&this->is_delete);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
};

// Line 23: range 000000000D42F7A4-000000000D42F99B
void __cdecl TableHomeData::TableHomeData(TableHomeData *const this, TableHomeData *a2)
{
  mysqlpp::sql_int_unsigned uid; // ecx
  mysqlpp::sql_int_unsigned data_version; // ecx
  const char *table_override; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  uid = a2->uid;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->uid = uid;
  mysqlpp::String::String(&this->bin_data, &a2->bin_data);
  if ( *(_BYTE *)(((unsigned __int64)&a2->data_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->data_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->data_version);
  }
  data_version = a2->data_version;
  if ( *(_BYTE *)(((unsigned __int64)&this->data_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->data_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->data_version);
  }
  this->data_version = data_version;
  std::string::basic_string(&this->block_end_time, &a2->block_end_time);
  if ( *(char *)(((unsigned __int64)&this->is_delete >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_delete);
  if ( *(char *)(((unsigned __int64)&a2->is_delete >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_delete);
  this->is_delete.value_ = a2->is_delete.value_;
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_, &a2->block_end_time);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 23: range 000000000D43043A-000000000D430658
void __cdecl TableHomeData::TableHomeData(TableHomeData *const this, const TableHomeData *a2)
{
  mysqlpp::sql_int_unsigned uid; // ecx
  mysqlpp::sql_int_unsigned data_version; // ecx
  const char *table_override; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  uid = a2->uid;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->uid = uid;
  mysqlpp::String::String(&this->bin_data, &a2->bin_data);
  if ( *(_BYTE *)(((unsigned __int64)&a2->data_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->data_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->data_version);
  }
  data_version = a2->data_version;
  if ( *(_BYTE *)(((unsigned __int64)&this->data_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->data_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->data_version);
  }
  this->data_version = data_version;
  std::string::basic_string(&this->block_end_time, &a2->block_end_time);
  if ( *(char *)(((unsigned __int64)&this->is_delete >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_delete);
  if ( *(char *)(((unsigned __int64)&a2->is_delete >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_delete);
  this->is_delete.value_ = a2->is_delete.value_;
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_, &a2->block_end_time);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 23: range 000000000D42C7C2-000000000D42C87F
void __cdecl TableHomeData::TableHomeData(TableHomeData *const this, const mysqlpp::Row *row)
{
  mysqlpp::String::String(&this->bin_data);
  std::string::basic_string(&this->block_end_time);
  mysqlpp::tiny_int<signed char>::tiny_int(&this->is_delete);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  populate_TableHomeData<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 23: range 000000000CC8ED26-000000000CC8ED54
void __cdecl TableHomeData::~TableHomeData(TableHomeData *const this)
{
  std::string::~string(&this->block_end_time);
  mysqlpp::String::~String(&this->bin_data);
};

// Line 183: range 000000000D42CC25-000000000D42D215
void __cdecl populate_TableHomeData<(mysqlpp::sql_dummy_type)0>(TableHomeData *s, const mysqlpp::Row *row)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const mysqlpp::String *v5; // rax
  unsigned int v6; // edx
  __int64 v7; // r14
  const mysqlpp::String *v8; // rax
  unsigned int v9; // edx
  const mysqlpp::String *v10; // r14
  const mysqlpp::String *v11; // r15
  std::string v12; // [rsp+0h] [rbp-170h]
  char *v13; // [rsp+8h] [rbp-168h]
  mysqlpp::Row *rowa; // [rsp+10h] [rbp-160h]
  TableHomeData *sa; // [rsp+18h] [rbp-158h]
  char v16[336]; // [rsp+20h] [rbp-150h] BYREF

  *(&v12._anon_0._M_allocated_capacity + 1) = (std::string::size_type)s;
  v12._anon_0._M_allocated_capacity = (std::string::size_type)row;
  v2 = (unsigned __int64)v16;
  v12._M_string_length = (std::string::size_type)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 1 9 <unknown> 64 16 27 ignore_schema_mismatches:23 96 16 9 <unknown> 128 16 9 <unknown> 160"
                        " 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = populate_TableHomeData<(mysqlpp::sql_dummy_type)0>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  mysqlpp::NoExceptions::NoExceptions((mysqlpp::NoExceptions *const)(v2 + 64), row);
  v5 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)row);
  v6 = mysqlpp::String::conv<unsigned int>(v5, 0);
  if ( *(_BYTE *)(((unsigned __int64)s >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)s >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(s);
  }
  s->uid = v6;
  v7 = mysqlpp::Row::operator[]((mysqlpp::Row *)row);
  mysqlpp::String::String((mysqlpp::String *const)(v2 + 96));
  if ( *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 128, "bin_data");
  mysqlpp::String::conv<mysqlpp::String>(
    (const mysqlpp::String *const)(v2 + 128),
    (mysqlpp::String)__PAIR128__(v2 + 96, v7));
  mysqlpp::String::operator=(&s->bin_data, (const mysqlpp::String *)(v2 + 128));
  mysqlpp::String::~String((mysqlpp::String *const)(v2 + 128));
  *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -1800;
  mysqlpp::String::~String((mysqlpp::String *const)(v2 + 96));
  *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -1800;
  v8 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)row);
  v9 = mysqlpp::String::conv<unsigned int>(v8, 0);
  if ( *(_BYTE *)(((unsigned __int64)&s->data_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&s->data_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&s->data_version);
  }
  s->data_version = v9;
  *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
  v10 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)row);
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(v2 + 160);
  if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 224, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(v2 + 224), v10, v12);
  std::string::operator=(&sa->block_end_time, v2 + 224);
  std::string::~string((void *)(v2 + 224));
  *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v2 + 160));
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
  v11 = (const mysqlpp::String *)mysqlpp::Row::operator[](rowa);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
  mysqlpp::tiny_int<signed char>::tiny_int((mysqlpp::tiny_int<signed char> *const)(v2 + 48));
  if ( *(char *)(((unsigned __int64)&sa->is_delete >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&sa->is_delete);
  if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(v2 + 48);
  sa->is_delete = mysqlpp::String::conv<mysqlpp::tiny_int<signed char>>(
                    v11,
                    *(mysqlpp::tiny_int<signed char> *)(v2 + 48));
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  mysqlpp::NoExceptions::~NoExceptions((mysqlpp::NoExceptions *const)(v2 + 64));
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
};
