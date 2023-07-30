// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_common/src/mysql_op_player_data.h

// Line 24: range 000000000D4C999C-000000000D4C9BC1
TablePlayerUid *__cdecl TablePlayerUid::operator=(TablePlayerUid *const this, const TablePlayerUid *a2)
{
  mysqlpp::sql_int_unsigned uid; // ecx
  mysqlpp::sql_int_unsigned account_type; // ecx
  mysqlpp::sql_char *p_ext; // rsi
  mysqlpp::sql_int_unsigned tag; // ecx
  char v6; // al
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
  if ( *(_BYTE *)(((unsigned __int64)&a2->account_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->account_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->account_type);
  }
  account_type = a2->account_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->account_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->account_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->account_type);
  }
  this->account_type = account_type;
  std::string::operator=(&this->account_uid, &a2->account_uid);
  std::string::operator=(&this->create_time, &a2->create_time);
  p_ext = &a2->ext;
  std::string::operator=(&this->ext, &a2->ext);
  if ( *(_BYTE *)(((unsigned __int64)&a2->tag >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->tag >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->tag);
  }
  tag = a2->tag;
  v6 = *(_BYTE *)(((unsigned __int64)&this->tag >> 3) + 0x7FFF8000);
  LOBYTE(p_ext) = v6 != 0;
  if ( v6 != 0 && v6 <= 3 )
    __asan_report_store4(&this->tag);
  this->tag = tag;
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_, p_ext);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
  return this;
};

// Line 24: range 000000000CC8D288-000000000CC8D2F7
void __cdecl TablePlayerUid::TablePlayerUid(TablePlayerUid *const this)
{
  std::string::basic_string(&this->account_uid);
  std::string::basic_string(&this->create_time);
  std::string::basic_string(&this->ext);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
};

// Line 24: range 000000000D4D1F14-000000000D4D2136
void __cdecl TablePlayerUid::TablePlayerUid(TablePlayerUid *const this, TablePlayerUid *a2)
{
  mysqlpp::sql_int_unsigned uid; // ecx
  mysqlpp::sql_int_unsigned account_type; // ecx
  mysqlpp::sql_char *p_ext; // rsi
  mysqlpp::sql_int_unsigned tag; // ecx
  char v6; // al
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
  if ( *(_BYTE *)(((unsigned __int64)&a2->account_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->account_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->account_type);
  }
  account_type = a2->account_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->account_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->account_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->account_type);
  }
  this->account_type = account_type;
  std::string::basic_string(&this->account_uid, &a2->account_uid);
  std::string::basic_string(&this->create_time, &a2->create_time);
  p_ext = &a2->ext;
  std::string::basic_string(&this->ext, &a2->ext);
  if ( *(_BYTE *)(((unsigned __int64)&a2->tag >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->tag >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->tag);
  }
  tag = a2->tag;
  v6 = *(_BYTE *)(((unsigned __int64)&this->tag >> 3) + 0x7FFF8000);
  LOBYTE(p_ext) = v6 != 0;
  if ( v6 != 0 && v6 <= 3 )
    __asan_report_store4(&this->tag);
  this->tag = tag;
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_, p_ext);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 24: range 000000000CC8E2C8-000000000CC8E306
void __cdecl TablePlayerUid::~TablePlayerUid(TablePlayerUid *const this)
{
  std::string::~string(&this->ext);
  std::string::~string(&this->create_time);
  std::string::~string(&this->account_uid);
};

// Line 24: range 000000000D4CA188-000000000D4CA8AF
// local variable allocation has failed, the output may be wrong!
void __cdecl populate_TablePlayerUid<(mysqlpp::sql_dummy_type)0>(TablePlayerUid *s, const mysqlpp::Row *row)
{
  unsigned __int64 p_anon_0; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const mysqlpp::String *v5; // rax
  unsigned int v6; // edx
  const mysqlpp::String *v7; // rax
  unsigned int v8; // ecx
  const mysqlpp::String *v9; // r14
  const mysqlpp::String *v10; // r14
  const mysqlpp::String *v11; // r14
  const mysqlpp::String *v12; // rax
  unsigned int v13; // edx
  std::string rowa; // [rsp+0h] [rbp-200h] OVERLAPPED BYREF

  rowa._M_string_length = (std::string::size_type)s;
  rowa._M_dataplus._M_p = (std::string::pointer)row;
  p_anon_0 = (unsigned __int64)&rowa._anon_0;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      p_anon_0 = v3;
  }
  *(_QWORD *)p_anon_0 = 1102416563LL;
  *(_QWORD *)(p_anon_0 + 8) = "7 32 16 27 ignore_schema_mismatches:24 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unkn"
                              "own> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown>";
  *(_QWORD *)(p_anon_0 + 16) = populate_TablePlayerUid<(mysqlpp::sql_dummy_type)0>;
  v4 = (_DWORD *)(p_anon_0 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -202116109;
  mysqlpp::NoExceptions::NoExceptions(
    (mysqlpp::NoExceptions *const)(p_anon_0 + 32),
    (const mysqlpp::OptionalExceptions *)rowa._M_dataplus._M_p);
  v5 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v6 = mysqlpp::String::conv<unsigned int>(v5, 0);
  if ( *(_BYTE *)((rowa._M_string_length >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((rowa._M_string_length >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(rowa._M_string_length);
  }
  *(_DWORD *)rowa._M_string_length = v6;
  v7 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v8 = mysqlpp::String::conv<unsigned int>(v7, 0);
  if ( *(_BYTE *)(((rowa._M_string_length + 4) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(rowa._M_string_length) + 4) & 7) + 3) >= *(_BYTE *)(((rowa._M_string_length + 4) >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(rowa._M_string_length + 4);
  }
  *(_DWORD *)(rowa._M_string_length + 4) = v8;
  v9 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  std::string::basic_string(p_anon_0 + 64);
  if ( *(char *)(((p_anon_0 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 159) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 159) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 128, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 128), v9, rowa);
  std::string::operator=(rowa._M_string_length + 8, p_anon_0 + 128);
  std::string::~string((void *)(p_anon_0 + 128));
  *(_DWORD *)(((p_anon_0 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 64));
  *(_DWORD *)(((p_anon_0 + 64) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 256) >> 3) + 0x7FFF8000) = 0;
  v10 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 192) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 192);
  if ( *(char *)(((p_anon_0 + 256) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 287) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 64 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 287) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 256, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 256), v10, rowa);
  std::string::operator=(rowa._M_string_length + 40, p_anon_0 + 256);
  std::string::~string((void *)(p_anon_0 + 256));
  *(_DWORD *)(((p_anon_0 + 256) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 192));
  *(_DWORD *)(((p_anon_0 + 192) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 384) >> 3) + 0x7FFF8000) = 0;
  v11 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 320) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 320);
  if ( *(char *)(((p_anon_0 + 384) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 415) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 415) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 384, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 384), v11, rowa);
  std::string::operator=(rowa._M_string_length + 72, p_anon_0 + 384);
  std::string::~string((void *)(p_anon_0 + 384));
  *(_DWORD *)(((p_anon_0 + 384) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 320));
  *(_DWORD *)(((p_anon_0 + 320) >> 3) + 0x7FFF8000) = -117901064;
  v12 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v13 = mysqlpp::String::conv<unsigned int>(v12, 0);
  if ( *(_BYTE *)(((rowa._M_string_length + 104) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((rowa._M_string_length + 104) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(rowa._M_string_length + 104);
  }
  *(_DWORD *)(rowa._M_string_length + 104) = v13;
  mysqlpp::NoExceptions::~NoExceptions((mysqlpp::NoExceptions *const)(p_anon_0 + 32));
  if ( &rowa._anon_0 == (std::string::$CFBEC286C7F52157F7E59FC354047095 *)p_anon_0 )
  {
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8030) = 0LL;
  }
  else
  {
    *(_QWORD *)p_anon_0 = 1172321806LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 34: range 000000000D4C9C16-000000000D4CA007
TablePlayerData *__cdecl TablePlayerData::operator=(TablePlayerData *const this, const TablePlayerData *a2)
{
  mysqlpp::sql_int_unsigned uid; // ecx
  mysqlpp::sql_int_unsigned level; // ecx
  mysqlpp::sql_int_unsigned exp; // ecx
  mysqlpp::sql_int_unsigned vip_point; // ecx
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
  std::string::operator=(&this->nickname, &a2->nickname);
  if ( *(_BYTE *)(((unsigned __int64)&a2->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->level);
  }
  level = a2->level;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level);
  }
  this->level = level;
  if ( *(_BYTE *)(((unsigned __int64)&a2->exp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->exp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->exp);
  }
  exp = a2->exp;
  if ( *(_BYTE *)(((unsigned __int64)&this->exp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->exp);
  }
  this->exp = exp;
  if ( *(_BYTE *)(((unsigned __int64)&a2->vip_point >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->vip_point >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->vip_point);
  }
  vip_point = a2->vip_point;
  if ( *(_BYTE *)(((unsigned __int64)&this->vip_point >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->vip_point >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->vip_point);
  }
  this->vip_point = vip_point;
  std::string::operator=(&this->json_data, &a2->json_data);
  mysqlpp::String::operator=(&this->bin_data, &a2->bin_data);
  mysqlpp::String::operator=(&this->extra_bin_data, &a2->extra_bin_data);
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
  std::string::operator=(&this->tag_list, &a2->tag_list);
  if ( *(char *)(((unsigned __int64)&this->is_delete >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_delete);
  if ( *(char *)(((unsigned __int64)&a2->is_delete >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_delete);
  this->is_delete.value_ = a2->is_delete.value_;
  mysqlpp::String::operator=(&this->before_login_bin_data, &a2->before_login_bin_data);
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_, &a2->before_login_bin_data);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
  return this;
};

// Line 34: range 000000000CC8D2F8-000000000CC8D3B0
void __cdecl TablePlayerData::TablePlayerData(TablePlayerData *const this)
{
  std::string::basic_string(&this->nickname);
  std::string::basic_string(&this->json_data);
  mysqlpp::String::String(&this->bin_data);
  mysqlpp::String::String(&this->extra_bin_data);
  std::string::basic_string(&this->tag_list);
  mysqlpp::tiny_int<signed char>::tiny_int(&this->is_delete);
  mysqlpp::String::String(&this->before_login_bin_data);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
};

// Line 34: range 000000000D4D287E-000000000D4D2C69
void __cdecl TablePlayerData::TablePlayerData(TablePlayerData *const this, TablePlayerData *a2)
{
  mysqlpp::sql_int_unsigned uid; // ecx
  mysqlpp::sql_int_unsigned level; // ecx
  mysqlpp::sql_int_unsigned exp; // ecx
  mysqlpp::sql_int_unsigned vip_point; // ecx
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
  std::string::basic_string(&this->nickname, &a2->nickname);
  if ( *(_BYTE *)(((unsigned __int64)&a2->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->level);
  }
  level = a2->level;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level);
  }
  this->level = level;
  if ( *(_BYTE *)(((unsigned __int64)&a2->exp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->exp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->exp);
  }
  exp = a2->exp;
  if ( *(_BYTE *)(((unsigned __int64)&this->exp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->exp);
  }
  this->exp = exp;
  if ( *(_BYTE *)(((unsigned __int64)&a2->vip_point >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->vip_point >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->vip_point);
  }
  vip_point = a2->vip_point;
  if ( *(_BYTE *)(((unsigned __int64)&this->vip_point >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->vip_point >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->vip_point);
  }
  this->vip_point = vip_point;
  std::string::basic_string(&this->json_data, &a2->json_data);
  mysqlpp::String::String(&this->bin_data, &a2->bin_data);
  mysqlpp::String::String(&this->extra_bin_data, &a2->extra_bin_data);
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
  std::string::basic_string(&this->tag_list, &a2->tag_list);
  if ( *(char *)(((unsigned __int64)&this->is_delete >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_delete);
  if ( *(char *)(((unsigned __int64)&a2->is_delete >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_delete);
  this->is_delete.value_ = a2->is_delete.value_;
  mysqlpp::String::String(&this->before_login_bin_data, &a2->before_login_bin_data);
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_, &a2->before_login_bin_data);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 34: range 000000000D4D511C-000000000D4D5563
void __cdecl TablePlayerData::TablePlayerData(TablePlayerData *const this, const TablePlayerData *a2)
{
  mysqlpp::sql_int_unsigned uid; // ecx
  mysqlpp::sql_int_unsigned level; // ecx
  mysqlpp::sql_int_unsigned exp; // ecx
  mysqlpp::sql_int_unsigned vip_point; // ecx
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
  std::string::basic_string(&this->nickname, &a2->nickname);
  if ( *(_BYTE *)(((unsigned __int64)&a2->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->level);
  }
  level = a2->level;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level);
  }
  this->level = level;
  if ( *(_BYTE *)(((unsigned __int64)&a2->exp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->exp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->exp);
  }
  exp = a2->exp;
  if ( *(_BYTE *)(((unsigned __int64)&this->exp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->exp);
  }
  this->exp = exp;
  if ( *(_BYTE *)(((unsigned __int64)&a2->vip_point >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->vip_point >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->vip_point);
  }
  vip_point = a2->vip_point;
  if ( *(_BYTE *)(((unsigned __int64)&this->vip_point >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->vip_point >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->vip_point);
  }
  this->vip_point = vip_point;
  std::string::basic_string(&this->json_data, &a2->json_data);
  mysqlpp::String::String(&this->bin_data, &a2->bin_data);
  mysqlpp::String::String(&this->extra_bin_data, &a2->extra_bin_data);
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
  std::string::basic_string(&this->tag_list, &a2->tag_list);
  if ( *(char *)(((unsigned __int64)&this->is_delete >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_delete);
  if ( *(char *)(((unsigned __int64)&a2->is_delete >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_delete);
  this->is_delete.value_ = a2->is_delete.value_;
  mysqlpp::String::String(&this->before_login_bin_data, &a2->before_login_bin_data);
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_, &a2->before_login_bin_data);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 34: range 000000000D4C96A2-000000000D4C97EA
void __cdecl TablePlayerData::TablePlayerData(TablePlayerData *const this, const mysqlpp::Row *row)
{
  std::string::basic_string(&this->nickname);
  std::string::basic_string(&this->json_data);
  mysqlpp::String::String(&this->bin_data);
  mysqlpp::String::String(&this->extra_bin_data);
  std::string::basic_string(&this->tag_list);
  mysqlpp::tiny_int<signed char>::tiny_int(&this->is_delete);
  mysqlpp::String::String(&this->before_login_bin_data);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  populate_TablePlayerData<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 34: range 000000000CC8E308-000000000CC8E378
void __cdecl TablePlayerData::~TablePlayerData(TablePlayerData *const this)
{
  mysqlpp::String::~String(&this->before_login_bin_data);
  std::string::~string(&this->tag_list);
  mysqlpp::String::~String(&this->extra_bin_data);
  mysqlpp::String::~String(&this->bin_data);
  std::string::~string(&this->json_data);
  std::string::~string(&this->nickname);
};

// Line 34: range 000000000D4CA8B0-000000000D4CB617
void __cdecl populate_TablePlayerData<(mysqlpp::sql_dummy_type)0>(TablePlayerData *s, const mysqlpp::Row *row)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const mysqlpp::String *v5; // rax
  unsigned int v6; // edx
  const mysqlpp::String *v7; // r14
  const mysqlpp::String *v8; // rax
  unsigned int v9; // edx
  const mysqlpp::String *v10; // rax
  unsigned int v11; // ecx
  const mysqlpp::String *v12; // rax
  unsigned int v13; // edx
  const mysqlpp::String *v14; // r14
  __int64 v15; // r14
  __int64 v16; // r14
  const mysqlpp::String *v17; // rax
  unsigned int v18; // edx
  const mysqlpp::String *v19; // r14
  const mysqlpp::String *v20; // r15
  __int64 v21; // r14
  std::string v22; // [rsp+0h] [rbp-2F0h]
  std::string v23; // [rsp+0h] [rbp-2F0h]
  std::string v24; // [rsp+0h] [rbp-2F0h]
  char *v25; // [rsp+8h] [rbp-2E8h]
  mysqlpp::Row *rowa; // [rsp+10h] [rbp-2E0h]
  TablePlayerData *sa; // [rsp+18h] [rbp-2D8h]
  char v28[720]; // [rsp+20h] [rbp-2D0h] BYREF

  *(&v22._anon_0._M_allocated_capacity + 1) = (std::string::size_type)s;
  v22._anon_0._M_allocated_capacity = (std::string::size_type)row;
  v2 = (unsigned __int64)v28;
  v22._M_string_length = (std::string::size_type)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(672LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "14 48 1 9 <unknown> 64 16 27 ignore_schema_mismatches:34 96 16 9 <unknown> 128 16 9 <unknown> 16"
                        "0 16 9 <unknown> 192 16 9 <unknown> 224 16 9 <unknown> 256 16 9 <unknown> 288 32 9 <unknown> 352"
                        " 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = populate_TablePlayerData<(mysqlpp::sql_dummy_type)0>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862727] = -219021312;
  v4[536862728] = -219021312;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -218959118;
  v4[536862740] = -202116109;
  mysqlpp::NoExceptions::NoExceptions((mysqlpp::NoExceptions *const)(v2 + 64), row);
  v5 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)row);
  v6 = mysqlpp::String::conv<unsigned int>(v5, 0);
  if ( *(_BYTE *)(((unsigned __int64)s >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)s >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(s);
  }
  s->uid = v6;
  v7 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)row);
  std::string::basic_string(v2 + 288);
  if ( *(char *)(((v2 + 352) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 352, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(v2 + 352), v7, v22);
  std::string::operator=(*(&v23._anon_0._M_allocated_capacity + 1) + 8, v2 + 352);
  std::string::~string((void *)(v2 + 352));
  *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v2 + 288));
  *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
  v8 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)v23._anon_0._M_allocated_capacity);
  v9 = mysqlpp::String::conv<unsigned int>(v8, 0);
  if ( *(_BYTE *)(((*(&v23._anon_0._M_allocated_capacity + 1) + 40) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((*(&v23._anon_0._M_allocated_capacity + 1) + 40) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(*(&v23._anon_0._M_allocated_capacity + 1) + 40);
  }
  *(_DWORD *)(*(&v23._anon_0._M_allocated_capacity + 1) + 40) = v9;
  v10 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)v23._anon_0._M_allocated_capacity);
  v11 = mysqlpp::String::conv<unsigned int>(v10, 0);
  if ( *(_BYTE *)(((*(&v23._anon_0._M_allocated_capacity + 1) + 44) >> 3) + 0x7FFF8000) != 0
    && (char)(((v23._anon_0._M_local_buf[8] + 44) & 7) + 3) >= *(_BYTE *)(((*(&v23._anon_0._M_allocated_capacity + 1)
                                                                          + 44) >> 3)
                                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(*(&v23._anon_0._M_allocated_capacity + 1) + 44);
  }
  *(_DWORD *)(*(&v23._anon_0._M_allocated_capacity + 1) + 44) = v11;
  v12 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)v23._anon_0._M_allocated_capacity);
  v13 = mysqlpp::String::conv<unsigned int>(v12, 0);
  if ( *(_BYTE *)(((*(&v23._anon_0._M_allocated_capacity + 1) + 48) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((*(&v23._anon_0._M_allocated_capacity + 1) + 48) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(*(&v23._anon_0._M_allocated_capacity + 1) + 48);
  }
  *(_DWORD *)(*(&v23._anon_0._M_allocated_capacity + 1) + 48) = v13;
  *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
  v14 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)v23._anon_0._M_allocated_capacity);
  *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(v2 + 416);
  if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 480, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(v2 + 480), v14, v23);
  std::string::operator=(*(&v24._anon_0._M_allocated_capacity + 1) + 56, v2 + 480);
  std::string::~string((void *)(v2 + 480));
  *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v2 + 416));
  *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  v15 = mysqlpp::Row::operator[]((mysqlpp::Row *)v24._anon_0._M_allocated_capacity);
  *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  mysqlpp::String::String((mysqlpp::String *const)(v2 + 96));
  if ( *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 128, "bin_data");
  mysqlpp::String::conv<mysqlpp::String>(
    (const mysqlpp::String *const)(v2 + 128),
    (mysqlpp::String)__PAIR128__(v2 + 96, v15));
  mysqlpp::String::operator=(
    (mysqlpp::String *const)(*(&v24._anon_0._M_allocated_capacity + 1) + 88),
    (const mysqlpp::String *)(v2 + 128));
  mysqlpp::String::~String((mysqlpp::String *const)(v2 + 128));
  *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -1800;
  mysqlpp::String::~String((mysqlpp::String *const)(v2 + 96));
  *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
  v16 = mysqlpp::Row::operator[]((mysqlpp::Row *)v24._anon_0._M_allocated_capacity);
  *(_WORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
  mysqlpp::String::String((mysqlpp::String *const)(v2 + 160));
  if ( *(_WORD *)(((v2 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 192, "extra_bin_data");
  mysqlpp::String::conv<mysqlpp::String>(
    (const mysqlpp::String *const)(v2 + 192),
    (mysqlpp::String)__PAIR128__(v2 + 160, v16));
  mysqlpp::String::operator=(
    (mysqlpp::String *const)(*(&v24._anon_0._M_allocated_capacity + 1) + 104),
    (const mysqlpp::String *)(v2 + 192));
  mysqlpp::String::~String((mysqlpp::String *const)(v2 + 192));
  *(_WORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -1800;
  mysqlpp::String::~String((mysqlpp::String *const)(v2 + 160));
  *(_WORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -1800;
  v17 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)v24._anon_0._M_allocated_capacity);
  v18 = mysqlpp::String::conv<unsigned int>(v17, 0);
  if ( *(_BYTE *)(((*(&v24._anon_0._M_allocated_capacity + 1) + 120) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((*(&v24._anon_0._M_allocated_capacity + 1) + 120) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(*(&v24._anon_0._M_allocated_capacity + 1) + 120);
  }
  *(_DWORD *)(*(&v24._anon_0._M_allocated_capacity + 1) + 120) = v18;
  *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
  v19 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)v24._anon_0._M_allocated_capacity);
  *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(v2 + 544);
  if ( *(char *)(((v2 + 608) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 608, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(v2 + 608), v19, v24);
  std::string::operator=(&sa->tag_list, v2 + 608);
  std::string::~string((void *)(v2 + 608));
  *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v2 + 544));
  *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
  v20 = (const mysqlpp::String *)mysqlpp::Row::operator[](rowa);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
  mysqlpp::tiny_int<signed char>::tiny_int((mysqlpp::tiny_int<signed char> *const)(v2 + 48));
  if ( *(char *)(((unsigned __int64)&sa->is_delete >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&sa->is_delete);
  if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(v2 + 48);
  sa->is_delete = mysqlpp::String::conv<mysqlpp::tiny_int<signed char>>(
                    v20,
                    *(mysqlpp::tiny_int<signed char> *)(v2 + 48));
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
  v21 = mysqlpp::Row::operator[](rowa);
  *(_WORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
  mysqlpp::String::String((mysqlpp::String *const)(v2 + 224));
  if ( *(_WORD *)(((v2 + 256) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 256, "before_login_bin_data");
  mysqlpp::String::conv<mysqlpp::String>(
    (const mysqlpp::String *const)(v2 + 256),
    (mysqlpp::String)__PAIR128__(v2 + 224, v21));
  mysqlpp::String::operator=(&sa->before_login_bin_data, (const mysqlpp::String *)(v2 + 256));
  mysqlpp::String::~String((mysqlpp::String *const)(v2 + 256));
  *(_WORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -1800;
  mysqlpp::String::~String((mysqlpp::String *const)(v2 + 224));
  *(_WORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -1800;
  mysqlpp::NoExceptions::~NoExceptions((mysqlpp::NoExceptions *const)(v2 + 64));
  if ( v25 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 84) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8050) = -168430091;
  }
};

// Line 48: range 000000000CE982DC-000000000CE982FA
void __cdecl TableBlockData::~TableBlockData(TableBlockData *const this)
{
  mysqlpp::String::~String(&this->bin_data);
};

// Line 50: range 000000000D4CA05C-000000000D4CA187
TablePlayerJsonAndExtraBinData *__cdecl TablePlayerJsonAndExtraBinData::operator=(
        TablePlayerJsonAndExtraBinData *const this,
        const TablePlayerJsonAndExtraBinData *a2)
{
  mysqlpp::sql_int_unsigned uid; // ecx
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
  std::string::operator=(&this->json_data, &a2->json_data);
  mysqlpp::String::operator=(&this->extra_bin_data, &a2->extra_bin_data);
  mysqlpp::String::operator=(&this->before_login_bin_data, &a2->before_login_bin_data);
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_, &a2->before_login_bin_data);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
  return this;
};

// Line 50: range 000000000CC8D3B2-000000000CC8D421
void __cdecl TablePlayerJsonAndExtraBinData::TablePlayerJsonAndExtraBinData(TablePlayerJsonAndExtraBinData *const this)
{
  std::string::basic_string(&this->json_data);
  mysqlpp::String::String(&this->extra_bin_data);
  mysqlpp::String::String(&this->before_login_bin_data);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
};

// Line 50: range 000000000D4D3338-000000000D4D3460
void __cdecl TablePlayerJsonAndExtraBinData::TablePlayerJsonAndExtraBinData(
        TablePlayerJsonAndExtraBinData *const this,
        TablePlayerJsonAndExtraBinData *a2)
{
  mysqlpp::sql_int_unsigned uid; // ecx
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
  std::string::basic_string(&this->json_data, &a2->json_data);
  mysqlpp::String::String(&this->extra_bin_data, &a2->extra_bin_data);
  mysqlpp::String::String(&this->before_login_bin_data, &a2->before_login_bin_data);
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_, &a2->before_login_bin_data);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 50: range 000000000D4D55D2-000000000D4D56FA
void __cdecl TablePlayerJsonAndExtraBinData::TablePlayerJsonAndExtraBinData(
        TablePlayerJsonAndExtraBinData *const this,
        const TablePlayerJsonAndExtraBinData *a2)
{
  mysqlpp::sql_int_unsigned uid; // ecx
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
  std::string::basic_string(&this->json_data, &a2->json_data);
  mysqlpp::String::String(&this->extra_bin_data, &a2->extra_bin_data);
  mysqlpp::String::String(&this->before_login_bin_data, &a2->before_login_bin_data);
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_, &a2->before_login_bin_data);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 50: range 000000000D4C97EC-000000000D4C98B9
void __cdecl TablePlayerJsonAndExtraBinData::TablePlayerJsonAndExtraBinData(
        TablePlayerJsonAndExtraBinData *const this,
        const mysqlpp::Row *row)
{
  std::string::basic_string(&this->json_data);
  mysqlpp::String::String(&this->extra_bin_data);
  mysqlpp::String::String(&this->before_login_bin_data);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  populate_TablePlayerJsonAndExtraBinData<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 50: range 000000000CC8EC8A-000000000CC8ECC8
void __cdecl TablePlayerJsonAndExtraBinData::~TablePlayerJsonAndExtraBinData(
        TablePlayerJsonAndExtraBinData *const this)
{
  mysqlpp::String::~String(&this->before_login_bin_data);
  mysqlpp::String::~String(&this->extra_bin_data);
  std::string::~string(&this->json_data);
};

// Line 50: range 000000000D4CB618-000000000D4CBC1E
// local variable allocation has failed, the output may be wrong!
void __cdecl populate_TablePlayerJsonAndExtraBinData<(mysqlpp::sql_dummy_type)0>(
        TablePlayerJsonAndExtraBinData *s,
        const mysqlpp::Row *row)
{
  unsigned __int64 p_anon_0; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const mysqlpp::String *v5; // rax
  unsigned int v6; // edx
  const mysqlpp::String *v7; // r14
  __int64 v8; // r14
  __int64 v9; // r14
  std::string rowa; // [rsp+0h] [rbp-180h] OVERLAPPED BYREF

  rowa._M_string_length = (std::string::size_type)s;
  rowa._M_dataplus._M_p = (std::string::pointer)row;
  p_anon_0 = (unsigned __int64)&rowa._anon_0;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      p_anon_0 = v3;
  }
  *(_QWORD *)p_anon_0 = 1102416563LL;
  *(_QWORD *)(p_anon_0 + 8) = "7 32 16 27 ignore_schema_mismatches:50 64 16 9 <unknown> 96 16 9 <unknown> 128 16 9 <unkno"
                              "wn> 160 16 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(p_anon_0 + 16) = populate_TablePlayerJsonAndExtraBinData<(mysqlpp::sql_dummy_type)0>;
  v4 = (_DWORD *)(p_anon_0 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862727] = -218959118;
  v4[536862729] = -202116109;
  mysqlpp::NoExceptions::NoExceptions(
    (mysqlpp::NoExceptions *const)(p_anon_0 + 32),
    (const mysqlpp::OptionalExceptions *)rowa._M_dataplus._M_p);
  v5 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v6 = mysqlpp::String::conv<unsigned int>(v5, 0);
  if ( *(_BYTE *)((rowa._M_string_length >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((rowa._M_string_length >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(rowa._M_string_length);
  }
  *(_DWORD *)rowa._M_string_length = v6;
  v7 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  std::string::basic_string(p_anon_0 + 192);
  if ( *(char *)(((p_anon_0 + 256) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 287) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 + 31) & 7) >= *(_BYTE *)(((p_anon_0 + 287) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 256, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 256), v7, rowa);
  std::string::operator=(rowa._M_string_length + 8, p_anon_0 + 256);
  std::string::~string((void *)(p_anon_0 + 256));
  *(_DWORD *)(((p_anon_0 + 256) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 192));
  *(_DWORD *)(((p_anon_0 + 192) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((p_anon_0 + 96) >> 3) + 0x7FFF8000) = 0;
  v8 = mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_WORD *)(((p_anon_0 + 64) >> 3) + 0x7FFF8000) = 0;
  mysqlpp::String::String((mysqlpp::String *const)(p_anon_0 + 64));
  if ( *(_WORD *)(((p_anon_0 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store16(p_anon_0 + 96, "extra_bin_data");
  mysqlpp::String::conv<mysqlpp::String>(
    (const mysqlpp::String *const)(p_anon_0 + 96),
    (mysqlpp::String)__PAIR128__(p_anon_0 + 64, v8));
  mysqlpp::String::operator=(
    (mysqlpp::String *const)(rowa._M_string_length + 40),
    (const mysqlpp::String *)(p_anon_0 + 96));
  mysqlpp::String::~String((mysqlpp::String *const)(p_anon_0 + 96));
  *(_WORD *)(((p_anon_0 + 96) >> 3) + 0x7FFF8000) = -1800;
  mysqlpp::String::~String((mysqlpp::String *const)(p_anon_0 + 64));
  *(_WORD *)(((p_anon_0 + 64) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((p_anon_0 + 160) >> 3) + 0x7FFF8000) = 0;
  v9 = mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_WORD *)(((p_anon_0 + 128) >> 3) + 0x7FFF8000) = 0;
  mysqlpp::String::String((mysqlpp::String *const)(p_anon_0 + 128));
  if ( *(_WORD *)(((p_anon_0 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store16(p_anon_0 + 160, "before_login_bin_data");
  mysqlpp::String::conv<mysqlpp::String>(
    (const mysqlpp::String *const)(p_anon_0 + 160),
    (mysqlpp::String)__PAIR128__(p_anon_0 + 128, v9));
  mysqlpp::String::operator=(
    (mysqlpp::String *const)(rowa._M_string_length + 56),
    (const mysqlpp::String *)(p_anon_0 + 160));
  mysqlpp::String::~String((mysqlpp::String *const)(p_anon_0 + 160));
  *(_WORD *)(((p_anon_0 + 160) >> 3) + 0x7FFF8000) = -1800;
  mysqlpp::String::~String((mysqlpp::String *const)(p_anon_0 + 128));
  *(_WORD *)(((p_anon_0 + 128) >> 3) + 0x7FFF8000) = -1800;
  mysqlpp::NoExceptions::~NoExceptions((mysqlpp::NoExceptions *const)(p_anon_0 + 32));
  if ( &rowa._anon_0 == (std::string::$CFBEC286C7F52157F7E59FC354047095 *)p_anon_0 )
  {
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)p_anon_0 = 1172321806LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 58: range 000000000CC8D422-000000000CC8D471
void __cdecl TablePlayerExtraBinData::TablePlayerExtraBinData(TablePlayerExtraBinData *const this)
{
  mysqlpp::String::String(&this->extra_bin_data);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
};

// Line 58: range 000000000CC8ECCA-000000000CC8ECE8
void __cdecl TablePlayerExtraBinData::~TablePlayerExtraBinData(TablePlayerExtraBinData *const this)
{
  mysqlpp::String::~String(&this->extra_bin_data);
};

// Line 64: range 000000000D4D3B30-000000000D4D3D1C
void __cdecl TableBlockData::TableBlockData(TableBlockData *const this, TableBlockData *a2)
{
  mysqlpp::sql_int_unsigned uid; // ecx
  mysqlpp::sql_int_unsigned block_id; // ecx
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
  if ( *(_BYTE *)(((unsigned __int64)&a2->block_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->block_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->block_id);
  }
  block_id = a2->block_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->block_id);
  }
  this->block_id = block_id;
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
  mysqlpp::String::String(&this->bin_data, &a2->bin_data);
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_, &a2->bin_data);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 64: range 000000000D4D576A-000000000D4D5956
void __cdecl TableBlockData::TableBlockData(TableBlockData *const this, const TableBlockData *a2)
{
  mysqlpp::sql_int_unsigned uid; // ecx
  mysqlpp::sql_int_unsigned block_id; // ecx
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
  if ( *(_BYTE *)(((unsigned __int64)&a2->block_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->block_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->block_id);
  }
  block_id = a2->block_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->block_id);
  }
  this->block_id = block_id;
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
  mysqlpp::String::String(&this->bin_data, &a2->bin_data);
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_, &a2->bin_data);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 64: range 000000000D4C98BA-000000000D4C9947
void __cdecl TableBlockData::TableBlockData(TableBlockData *const this, const mysqlpp::Row *row)
{
  mysqlpp::String::String(&this->bin_data);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  populate_TableBlockData<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 64: range 000000000D4CBC1F-000000000D4CBFA2
void __cdecl populate_TableBlockData<(mysqlpp::sql_dummy_type)0>(TableBlockData *s, const mysqlpp::Row *row)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const mysqlpp::String *v5; // rax
  unsigned int v6; // edx
  const mysqlpp::String *v7; // rax
  unsigned int v8; // ecx
  const mysqlpp::String *v9; // rax
  unsigned int v10; // edx
  __int64 v11; // r14
  char v12[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 27 ignore_schema_mismatches:64 64 16 9 <unknown> 96 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = populate_TableBlockData<(mysqlpp::sql_dummy_type)0>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  mysqlpp::NoExceptions::NoExceptions((mysqlpp::NoExceptions *const)(v2 + 32), row);
  v5 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)row);
  v6 = mysqlpp::String::conv<unsigned int>(v5, 0);
  if ( *(_BYTE *)(((unsigned __int64)s >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)s >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(s);
  }
  s->uid = v6;
  v7 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)row);
  v8 = mysqlpp::String::conv<unsigned int>(v7, 0);
  if ( *(_BYTE *)(((unsigned __int64)&s->block_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)s + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&s->block_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&s->block_id);
  }
  s->block_id = v8;
  v9 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)row);
  v10 = mysqlpp::String::conv<unsigned int>(v9, 0);
  if ( *(_BYTE *)(((unsigned __int64)&s->data_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&s->data_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&s->data_version);
  }
  s->data_version = v10;
  v11 = mysqlpp::Row::operator[]((mysqlpp::Row *)row);
  mysqlpp::String::String((mysqlpp::String *const)(v2 + 64));
  if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 96, "bin_data");
  mysqlpp::String::conv<mysqlpp::String>(
    (const mysqlpp::String *const)(v2 + 96),
    (mysqlpp::String)__PAIR128__(v2 + 64, v11));
  mysqlpp::String::operator=(&s->bin_data, (const mysqlpp::String *)(v2 + 96));
  mysqlpp::String::~String((mysqlpp::String *const)(v2 + 96));
  *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -1800;
  mysqlpp::String::~String((mysqlpp::String *const)(v2 + 64));
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -1800;
  mysqlpp::NoExceptions::~NoExceptions((mysqlpp::NoExceptions *const)(v2 + 32));
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1014: range 000000000D4C95D4-000000000D4C96A1
void __cdecl TablePlayerUid::TablePlayerUid(TablePlayerUid *const this, const mysqlpp::Row *row)
{
  std::string::basic_string(&this->account_uid);
  std::string::basic_string(&this->create_time);
  std::string::basic_string(&this->ext);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  populate_TablePlayerUid<(mysqlpp::sql_dummy_type)0>(this, row);
};
