// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_lua_shell_config_mgr.cpp

// Line 19: range 000000000CDA8882-000000000CDA89AB
bool __cdecl operator==(const LuaShellIndex *lhs, const LuaShellIndex *rhs)
{
  uint32_t use_type; // ecx
  uint32_t channel; // ecx

  if ( *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)lhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(lhs);
  }
  use_type = lhs->use_type;
  if ( *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)rhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(rhs);
  }
  if ( use_type != rhs->use_type )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->channel >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->channel >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->channel);
  }
  channel = lhs->channel;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->channel >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->channel >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->channel);
  }
  return channel == rhs->channel;
};

// Line 24: range 000000000CDA89AC-000000000CDA8ADC
bool __cdecl operator<(const LuaShellIndex *lhs, const LuaShellIndex *rhs)
{
  uint32_t use_type; // ecx
  uint32_t channel; // ecx

  if ( *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)lhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(lhs);
  }
  use_type = lhs->use_type;
  if ( *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)rhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(rhs);
  }
  if ( use_type != rhs->use_type )
    return lhs->use_type < rhs->use_type;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->channel >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->channel >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->channel);
  }
  channel = lhs->channel;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->channel >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->channel >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->channel);
  }
  return channel < rhs->channel;
};

// Line 30: range 000000000CDA8ADD-000000000CDA8B4B
common::milog::MiLogStream *__cdecl operator<<(common::milog::MiLogStream *stream, const LuaShellIndex *luashell_index)
{
  common::milog::MiLogStream *v2; // rdx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax

  v2 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(stream, (const char (*)[11])"[use_type:");
  v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, (const unsigned int *)luashell_index);
  v4 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v3, (const char (*)[10])",channel:");
  v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &luashell_index->channel);
  common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v5, (const char (*)[2])"]");
  return stream;
};

// Line 36: range 000000000D3BC97E-000000000D3BCDF7
void __cdecl TableLuaShellConfig::TableLuaShellConfig(TableLuaShellConfig *const this, TableLuaShellConfig *a2)
{
  mysqlpp::sql_int_unsigned luashell_config_id; // ecx
  mysqlpp::sql_int_unsigned percent; // ecx
  mysqlpp::sql_int_unsigned protocol_type; // ecx
  mysqlpp::sql_int_unsigned use_type; // ecx
  mysqlpp::sql_int_unsigned is_check_client_report; // ecx
  mysqlpp::sql_int_unsigned is_kick; // ecx
  mysqlpp::sql_int_unsigned channel; // ecx
  const char *table_override; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  luashell_config_id = a2->luashell_config_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->luashell_config_id = luashell_config_id;
  mysqlpp::String::String(&this->lua_shell, &a2->lua_shell);
  std::string::basic_string(&this->uid_list, &a2->uid_list);
  std::string::basic_string(&this->platform_type_list, &a2->platform_type_list);
  if ( *(_BYTE *)(((unsigned __int64)&a2->percent >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->percent >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->percent);
  }
  percent = a2->percent;
  if ( *(_BYTE *)(((unsigned __int64)&this->percent >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->percent >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->percent);
  }
  this->percent = percent;
  std::string::basic_string(&this->created_at, &a2->created_at);
  if ( *(_BYTE *)(((unsigned __int64)&a2->protocol_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->protocol_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->protocol_type);
  }
  protocol_type = a2->protocol_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->protocol_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->protocol_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->protocol_type);
  }
  this->protocol_type = protocol_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->use_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->use_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->use_type);
  }
  use_type = a2->use_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->use_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->use_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->use_type);
  }
  this->use_type = use_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_check_client_report >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->is_check_client_report >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->is_check_client_report);
  }
  is_check_client_report = a2->is_check_client_report;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_check_client_report >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->is_check_client_report >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->is_check_client_report);
  }
  this->is_check_client_report = is_check_client_report;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_kick >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->is_kick >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->is_kick);
  }
  is_kick = a2->is_kick;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_kick >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->is_kick >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->is_kick);
  }
  this->is_kick = is_kick;
  std::string::basic_string(&this->check_json_key, &a2->check_json_key);
  if ( *(_BYTE *)(((unsigned __int64)&a2->channel >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->channel >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->channel);
  }
  channel = a2->channel;
  if ( *(_BYTE *)(((unsigned __int64)&this->channel >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->channel >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->channel);
  }
  this->channel = channel;
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 36: range 000000000D45EDC2-000000000D45F2A1
void __cdecl TableLuaShellConfig::TableLuaShellConfig(TableLuaShellConfig *const this, const TableLuaShellConfig *a2)
{
  mysqlpp::sql_int_unsigned luashell_config_id; // ecx
  mysqlpp::sql_int_unsigned percent; // ecx
  mysqlpp::sql_int_unsigned protocol_type; // ecx
  mysqlpp::sql_int_unsigned use_type; // ecx
  mysqlpp::sql_int_unsigned is_check_client_report; // ecx
  mysqlpp::sql_int_unsigned is_kick; // ecx
  mysqlpp::sql_int_unsigned channel; // ecx
  const char *table_override; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  luashell_config_id = a2->luashell_config_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->luashell_config_id = luashell_config_id;
  mysqlpp::String::String(&this->lua_shell, &a2->lua_shell);
  std::string::basic_string(&this->uid_list, &a2->uid_list);
  std::string::basic_string(&this->platform_type_list, &a2->platform_type_list);
  if ( *(_BYTE *)(((unsigned __int64)&a2->percent >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->percent >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->percent);
  }
  percent = a2->percent;
  if ( *(_BYTE *)(((unsigned __int64)&this->percent >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->percent >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->percent);
  }
  this->percent = percent;
  std::string::basic_string(&this->created_at, &a2->created_at);
  if ( *(_BYTE *)(((unsigned __int64)&a2->protocol_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->protocol_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->protocol_type);
  }
  protocol_type = a2->protocol_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->protocol_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->protocol_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->protocol_type);
  }
  this->protocol_type = protocol_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->use_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->use_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->use_type);
  }
  use_type = a2->use_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->use_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->use_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->use_type);
  }
  this->use_type = use_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_check_client_report >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->is_check_client_report >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->is_check_client_report);
  }
  is_check_client_report = a2->is_check_client_report;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_check_client_report >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->is_check_client_report >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->is_check_client_report);
  }
  this->is_check_client_report = is_check_client_report;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_kick >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->is_kick >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->is_kick);
  }
  is_kick = a2->is_kick;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_kick >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->is_kick >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->is_kick);
  }
  this->is_kick = is_kick;
  std::string::basic_string(&this->check_json_key, &a2->check_json_key);
  if ( *(_BYTE *)(((unsigned __int64)&a2->channel >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->channel >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->channel);
  }
  channel = a2->channel;
  if ( *(_BYTE *)(((unsigned __int64)&this->channel >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->channel >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->channel);
  }
  this->channel = channel;
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 36: range 000000000CE448E4-000000000CE449FA
void __cdecl TableLuaShellConfig::TableLuaShellConfig(TableLuaShellConfig *const this, const mysqlpp::Row *row)
{
  mysqlpp::String::String(&this->lua_shell);
  std::string::basic_string(&this->uid_list);
  std::string::basic_string(&this->platform_type_list);
  std::string::basic_string(&this->created_at);
  std::string::basic_string(&this->check_json_key);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  populate_TableLuaShellConfig<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 36: range 000000000D0F2570-000000000D0F25D0
void __cdecl TableLuaShellConfig::~TableLuaShellConfig(TableLuaShellConfig *const this)
{
  std::string::~string(&this->check_json_key);
  std::string::~string(&this->created_at);
  std::string::~string(&this->platform_type_list);
  std::string::~string(&this->uid_list);
  mysqlpp::String::~String(&this->lua_shell);
};

// Line 36: range 000000000CF15B2A-000000000CF1673E
// local variable allocation has failed, the output may be wrong!
void __cdecl populate_TableLuaShellConfig<(mysqlpp::sql_dummy_type)0>(TableLuaShellConfig *s, const mysqlpp::Row *row)
{
  unsigned __int64 p_anon_0; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const mysqlpp::String *v5; // rax
  unsigned int v6; // edx
  __int64 v7; // r14
  const mysqlpp::String *v8; // r14
  const mysqlpp::String *v9; // r14
  const mysqlpp::String *v10; // rax
  unsigned int v11; // edx
  const mysqlpp::String *v12; // r14
  const mysqlpp::String *v13; // rax
  unsigned int v14; // edx
  const mysqlpp::String *v15; // rax
  unsigned int v16; // ecx
  const mysqlpp::String *v17; // rax
  unsigned int v18; // edx
  const mysqlpp::String *v19; // rax
  unsigned int v20; // ecx
  const mysqlpp::String *v21; // r14
  const mysqlpp::String *v22; // rax
  unsigned int v23; // edx
  std::string rowa; // [rsp+0h] [rbp-2C0h] OVERLAPPED BYREF

  rowa._M_string_length = (std::string::size_type)s;
  rowa._M_dataplus._M_p = (std::string::pointer)row;
  p_anon_0 = (unsigned __int64)&rowa._anon_0;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(640LL);
    if ( v3 )
      p_anon_0 = v3;
  }
  *(_QWORD *)p_anon_0 = 1102416563LL;
  *(_QWORD *)(p_anon_0 + 8) = "11 32 16 27 ignore_schema_mismatches:36 64 16 9 <unknown> 96 16 9 <unknown> 128 32 9 <unkn"
                              "own> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 "
                              "<unknown> 512 32 9 <unknown> 576 32 9 <unknown>";
  *(_QWORD *)(p_anon_0 + 16) = populate_TableLuaShellConfig<(mysqlpp::sql_dummy_type)0>;
  v4 = (_DWORD *)(p_anon_0 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -202116109;
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
  v7 = mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  mysqlpp::String::String((mysqlpp::String *const)(p_anon_0 + 64));
  if ( *(_WORD *)(((p_anon_0 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store16(p_anon_0 + 96);
  mysqlpp::String::conv<mysqlpp::String>(
    (const mysqlpp::String *const)(p_anon_0 + 96),
    (mysqlpp::String)__PAIR128__(p_anon_0 + 64, v7));
  mysqlpp::String::operator=(
    (mysqlpp::String *const)(rowa._M_string_length + 8),
    (const mysqlpp::String *)(p_anon_0 + 96));
  mysqlpp::String::~String((mysqlpp::String *const)(p_anon_0 + 96));
  *(_WORD *)(((p_anon_0 + 96) >> 3) + 0x7FFF8000) = -1800;
  mysqlpp::String::~String((mysqlpp::String *const)(p_anon_0 + 64));
  *(_WORD *)(((p_anon_0 + 64) >> 3) + 0x7FFF8000) = -1800;
  *(_DWORD *)(((p_anon_0 + 192) >> 3) + 0x7FFF8000) = 0;
  v8 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 128) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 128);
  if ( *(char *)(((p_anon_0 + 192) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 223) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 33) & 7) >= *(_BYTE *)(((p_anon_0 + 223) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 192, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 192), v8, rowa);
  std::string::operator=(rowa._M_string_length + 24, p_anon_0 + 192);
  std::string::~string((void *)(p_anon_0 + 192));
  *(_DWORD *)(((p_anon_0 + 192) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 128));
  *(_DWORD *)(((p_anon_0 + 128) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 320) >> 3) + 0x7FFF8000) = 0;
  v9 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 256) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 256);
  if ( *(char *)(((p_anon_0 + 320) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 351) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 351) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 320, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 320), v9, rowa);
  std::string::operator=(rowa._M_string_length + 56, p_anon_0 + 320);
  std::string::~string((void *)(p_anon_0 + 320));
  *(_DWORD *)(((p_anon_0 + 320) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 256));
  *(_DWORD *)(((p_anon_0 + 256) >> 3) + 0x7FFF8000) = -117901064;
  v10 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v11 = mysqlpp::String::conv<unsigned int>(v10, 0);
  if ( *(_BYTE *)(((rowa._M_string_length + 88) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((rowa._M_string_length + 88) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(rowa._M_string_length + 88);
  }
  *(_DWORD *)(rowa._M_string_length + 88) = v11;
  *(_DWORD *)(((p_anon_0 + 448) >> 3) + 0x7FFF8000) = 0;
  v12 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 384) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 384);
  if ( *(char *)(((p_anon_0 + 448) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 479) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 33) & 7) >= *(_BYTE *)(((p_anon_0 + 479) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 448, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 448), v12, rowa);
  std::string::operator=(rowa._M_string_length + 96, p_anon_0 + 448);
  std::string::~string((void *)(p_anon_0 + 448));
  *(_DWORD *)(((p_anon_0 + 448) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 384));
  *(_DWORD *)(((p_anon_0 + 384) >> 3) + 0x7FFF8000) = -117901064;
  v13 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v14 = mysqlpp::String::conv<unsigned int>(v13, 0);
  if ( *(_BYTE *)(((rowa._M_string_length + 128) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((rowa._M_string_length + 128) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(rowa._M_string_length + 128);
  }
  *(_DWORD *)(rowa._M_string_length + 128) = v14;
  v15 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v16 = mysqlpp::String::conv<unsigned int>(v15, 0);
  if ( *(_BYTE *)(((rowa._M_string_length + 132) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(rowa._M_string_length) - 124) & 7) + 3) >= *(_BYTE *)(((rowa._M_string_length + 132) >> 3)
                                                                           + 0x7FFF8000) )
  {
    __asan_report_store4(rowa._M_string_length + 132);
  }
  *(_DWORD *)(rowa._M_string_length + 132) = v16;
  v17 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v18 = mysqlpp::String::conv<unsigned int>(v17, 0);
  if ( *(_BYTE *)(((rowa._M_string_length + 136) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((rowa._M_string_length + 136) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(rowa._M_string_length + 136);
  }
  *(_DWORD *)(rowa._M_string_length + 136) = v18;
  v19 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v20 = mysqlpp::String::conv<unsigned int>(v19, 0);
  if ( *(_BYTE *)(((rowa._M_string_length + 140) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(rowa._M_string_length) - 116) & 7) + 3) >= *(_BYTE *)(((rowa._M_string_length + 140) >> 3)
                                                                           + 0x7FFF8000) )
  {
    __asan_report_store4(rowa._M_string_length + 140);
  }
  *(_DWORD *)(rowa._M_string_length + 140) = v20;
  *(_DWORD *)(((p_anon_0 + 576) >> 3) + 0x7FFF8000) = 0;
  v21 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 512) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 512);
  if ( *(char *)(((p_anon_0 + 576) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 607) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 607) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 576, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 576), v21, rowa);
  std::string::operator=(rowa._M_string_length + 144, p_anon_0 + 576);
  std::string::~string((void *)(p_anon_0 + 576));
  *(_DWORD *)(((p_anon_0 + 576) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 512));
  *(_DWORD *)(((p_anon_0 + 512) >> 3) + 0x7FFF8000) = -117901064;
  v22 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v23 = mysqlpp::String::conv<unsigned int>(v22, 0);
  if ( *(_BYTE *)(((rowa._M_string_length + 176) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((rowa._M_string_length + 176) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(rowa._M_string_length + 176);
  }
  *(_DWORD *)(rowa._M_string_length + 176) = v23;
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
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8048) = 0LL;
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
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 52: range 000000000CDA8B4C-000000000CDAA469
int32_t __cdecl data::DbLuaShellConfigMgr::loadDbLuaShellConfig(
        data::DbLuaShellConfigMgr *const this,
        common::midb::MysqlConnPtr *conn_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  mysqlpp::Connection *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  std::logic_error *exception; // rdi
  unsigned __int64 v20; // rax
  mysqlpp::sql_int_unsigned luashell_config_id; // ecx
  unsigned __int64 v22; // rax
  common::milog::MiLogStream *v23; // rax
  _BOOL4 v24; // r15d
  const std::unordered_set<unsigned int>::value_type *v25; // rsi
  unsigned __int64 v26; // rax
  common::milog::MiLogStream *v27; // rax
  int v28; // r15d
  const std::unordered_set<unsigned int>::value_type *v29; // rsi
  mysqlpp::sql_int_unsigned percent; // ecx
  int TimeByStr; // edi
  common::milog::MiLogStream *v32; // rax
  mysqlpp::sql_int_unsigned protocol_type; // ecx
  mysqlpp::sql_int_unsigned use_type; // ecx
  bool v35; // cl
  bool v36; // cl
  mysqlpp::sql_int_unsigned channel; // ecx
  std::map<unsigned int,data::LuaShellConfig> *v38; // rax
  data::LuaShellConfig *v39; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::LuaShellConfig> >,bool> v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  int v47; // r15d
  unsigned __int64 v48; // rax
  int i; // [rsp+28h] [rbp-738h]
  int ret; // [rsp+2Ch] [rbp-734h]
  int reta; // [rsp+2Ch] [rbp-734h]
  size_t j; // [rsp+30h] [rbp-730h]
  size_t j_0; // [rsp+38h] [rbp-728h]
  std::vector<TableLuaShellConfig>::reference row; // [rsp+40h] [rbp-720h]
  char v57[1808]; // [rsp+50h] [rbp-710h] BYREF

  v3 = (unsigned __int64)v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1760LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "16 32 1 9 <unknown> 48 1 9 <unknown> 64 8 18 luashell_index:124 96 24 10 row_vec:75 160 24 10 ui"
                        "d_vec:87 224 24 21 platform_type_vec:100 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown"
                        "> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown>"
                        " 800 216 9 config:84 1088 544 8 query:59";
  *(_QWORD *)(v3 + 16) = data::DbLuaShellConfigMgr::loadDbLuaShellConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862722] = -218959360;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862725] = -234881024;
  v5[536862726] = -218959118;
  v5[536862727] = -234881024;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -218959118;
  v5[536862744] = -218959118;
  v5[536862751] = -234881024;
  v5[536862752] = -218959118;
  v5[536862753] = -218959118;
  v5[536862771] = -202116109;
  v5[536862772] = -202116109;
  v5[536862773] = -202116109;
  v5[536862774] = -202116109;
  if ( std::operator==<mysqlpp::Connection>(conn_ptr, 0LL) )
  {
    if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 32 + 95) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 288, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 288),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/db_data_manual/db_lua_shell_config_mgr.cpp",
      "loadDbLuaShellConfig",
      55);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
      (common::milog::MiLogStream *const)(v3 + 288),
      (const char (*)[20])"conn_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
    v2 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_ptr);
    if ( *(char *)(((v3 + 1088) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1631) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 32 + 127) & 7) >= *(_BYTE *)(((v3 + 1631) >> 3) + 0x7FFF8000) )
    {
      v6 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v3 + 1088, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 1088), v6, "select ");
    v7 = std::operator<<<std::char_traits<char>>(v3 + 1088, "luashell_config_id, ");
    v8 = std::operator<<<std::char_traits<char>>(v7, "lua_shell, ");
    v9 = std::operator<<<std::char_traits<char>>(v8, "uid_list, ");
    v10 = std::operator<<<std::char_traits<char>>(v9, "platform_type_list, ");
    v11 = std::operator<<<std::char_traits<char>>(v10, "percent, ");
    v12 = std::operator<<<std::char_traits<char>>(v11, "created_at, ");
    v13 = std::operator<<<std::char_traits<char>>(v12, "protocol_type, ");
    v14 = std::operator<<<std::char_traits<char>>(v13, "use_type, ");
    v15 = std::operator<<<std::char_traits<char>>(v14, "is_check_client_report, ");
    v16 = std::operator<<<std::char_traits<char>>(v15, "is_kick, ");
    v17 = std::operator<<<std::char_traits<char>>(v16, "check_json_key, ");
    v18 = std::operator<<<std::char_traits<char>>(v17, "channel ");
    std::operator<<<std::char_traits<char>>(v18, "from t_luashell_config");
    std::vector<TableLuaShellConfig>::vector((std::vector<TableLuaShellConfig> *const)(v3 + 96));
    mysqlpp::Query::storein<std::vector<TableLuaShellConfig>>(
      (mysqlpp::Query *const)(v3 + 1088),
      (std::vector<TableLuaShellConfig> *)(v3 + 96));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 1088)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    for ( i = 0; i < std::vector<TableLuaShellConfig>::size((const std::vector<TableLuaShellConfig> *const)(v3 + 96)); ++i )
    {
      row = std::vector<TableLuaShellConfig>::operator[]((std::vector<TableLuaShellConfig> *const)(v3 + 96), i);
      v20 = ((v3 + 800) >> 3) + 2147450880;
      *(_DWORD *)v20 = 0;
      *(_DWORD *)(v20 + 4) = 0;
      *(_DWORD *)(v20 + 8) = 0;
      *(_DWORD *)(v20 + 12) = 0;
      *(_DWORD *)(v20 + 16) = 0;
      *(_DWORD *)(v20 + 20) = 0;
      *(_WORD *)(v20 + 24) = 0;
      *(_BYTE *)(v20 + 26) = 0;
      data::LuaShellConfig::LuaShellConfig((data::LuaShellConfig *const)(v3 + 800));
      if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(row);
      }
      luashell_config_id = row->luashell_config_id;
      if ( *(_BYTE *)(((v3 + 800) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 800) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 800);
      *(_DWORD *)(v3 + 800) = luashell_config_id;
      mysqlpp::String::to_string(&row->lua_shell, (std::string *)(v3 + 808));
      v22 = ((v3 + 160) >> 3) + 2147450880;
      *(_WORD *)v22 = 0;
      *(_BYTE *)(v22 + 2) = 0;
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 160));
      *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v3 + 32);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v3 + 352),
        ",",
        (const std::allocator<char> *)(v3 + 32));
      ret = common::tools::StringUtils::splitToList<unsigned int>(
              &row->uid_list,
              (const std::string *)(v3 + 352),
              (std::vector<unsigned int> *)(v3 + 160),
              1);
      std::string::~string((void *)(v3 + 352));
      *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v3 + 32);
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      if ( ret )
      {
        *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 416, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 416),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_lua_shell_config_mgr.cpp",
          "loadDbLuaShellConfig",
          91);
        v23 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                (common::milog::MiLogStream *const)(v3 + 416),
                (const char (*)[21])"uid_list is invalid:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, &row->uid_list);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
        *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v24 = 0;
      }
      else
      {
        for ( j = 0LL; j < std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 160)); ++j )
        {
          v25 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 160), j);
          std::unordered_set<unsigned int>::insert((std::unordered_set<unsigned int> *const)(v3 + 840), v25);
        }
        v26 = ((v3 + 224) >> 3) + 2147450880;
        *(_WORD *)v26 = 0;
        *(_BYTE *)(v26 + 2) = 0;
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 224));
        *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v3 + 48);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v3 + 480),
          ",",
          (const std::allocator<char> *)(v3 + 48));
        reta = common::tools::StringUtils::splitToList<unsigned int>(
                 &row->platform_type_list,
                 (const std::string *)(v3 + 480),
                 (std::vector<unsigned int> *)(v3 + 224),
                 1);
        std::string::~string((void *)(v3 + 480));
        *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v3 + 48);
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
        if ( reta )
        {
          *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 544) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 32 + 95) & 7) >= *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 544, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 544),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/db_data_manual/db_lua_shell_config_mgr.cpp",
            "loadDbLuaShellConfig",
            104);
          v27 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  (common::milog::MiLogStream *const)(v3 + 544),
                  (const char (*)[31])"platform_type_list is invalid:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v27, &row->platform_type_list);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
          *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v28 = 0;
        }
        else
        {
          for ( j_0 = 0LL; j_0 < std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 224)); ++j_0 )
          {
            v29 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 224), j_0);
            std::unordered_set<unsigned int>::insert((std::unordered_set<unsigned int> *const)(v3 + 896), v29);
          }
          if ( *(_BYTE *)(((unsigned __int64)&row->percent >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&row->percent >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&row->percent);
          }
          percent = row->percent;
          if ( *(_BYTE *)(((v3 + 952) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 952) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 952);
          *(_DWORD *)(v3 + 952) = percent;
          TimeByStr = common::tools::TimeUtils::getTimeByStr(&row->created_at);
          if ( *(_BYTE *)(((v3 + 956) >> 3) + 0x7FFF8000) != 0
            && (char)(((v3 - 68) & 7) + 3) >= *(_BYTE *)(((v3 + 956) >> 3) + 0x7FFF8000) )
          {
            TimeByStr = v3 + 956;
            __asan_report_store4(v3 + 956);
          }
          *(_DWORD *)(v3 + 956) = TimeByStr;
          if ( !*(_DWORD *)(v3 + 956) )
          {
            *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 608) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 608, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 608),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/db_data_manual/db_lua_shell_config_mgr.cpp",
              "loadDbLuaShellConfig",
              116);
            v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 608),
                    (const char (*)[16])" invalid_time: ");
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v32, &row->created_at);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
            *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
          }
          if ( *(_BYTE *)(((unsigned __int64)&row->protocol_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&row->protocol_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&row->protocol_type);
          }
          protocol_type = row->protocol_type;
          if ( *(_BYTE *)(((v3 + 960) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 960) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 960);
          *(_DWORD *)(v3 + 960) = protocol_type;
          if ( *(_BYTE *)(((unsigned __int64)&row->use_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)row - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->use_type >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&row->use_type);
          }
          use_type = row->use_type;
          if ( *(_BYTE *)(((v3 + 964) >> 3) + 0x7FFF8000) != 0
            && (char)(((v3 - 60) & 7) + 3) >= *(_BYTE *)(((v3 + 964) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v3 + 964);
          }
          *(_DWORD *)(v3 + 964) = use_type;
          if ( *(_BYTE *)(((unsigned __int64)&row->is_check_client_report >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&row->is_check_client_report >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&row->is_check_client_report);
          }
          v35 = row->is_check_client_report != 0;
          if ( *(char *)(((v3 + 968) >> 3) + 0x7FFF8000) < 0 )
            __asan_report_store1(v3 + 968);
          *(_BYTE *)(v3 + 968) = v35;
          if ( *(_BYTE *)(((unsigned __int64)&row->is_kick >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)row - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->is_kick >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&row->is_kick);
          }
          v36 = row->is_kick != 0;
          if ( *(_BYTE *)(((v3 + 969) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 55) & 7) >= *(_BYTE *)(((v3 + 969) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store1(v3 + 969);
          }
          *(_BYTE *)(v3 + 969) = v36;
          std::string::operator=(v3 + 976, &row->check_json_key);
          if ( *(_BYTE *)(((unsigned __int64)&row->channel >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&row->channel >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&row->channel);
          }
          channel = row->channel;
          if ( *(_BYTE *)(((v3 + 1008) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 1008) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 1008);
          *(_DWORD *)(v3 + 1008) = channel;
          *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 64);
          *(_DWORD *)(v3 + 64) = 0;
          if ( *(_BYTE *)(((v3 + 68) >> 3) + 0x7FFF8000) != 0
            && (char)(((v3 - 32 + 100) & 7) + 3) >= *(_BYTE *)(((v3 + 68) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v3 + 68);
          }
          *(_DWORD *)(v3 + 68) = 0;
          if ( *(_BYTE *)(((v3 + 964) >> 3) + 0x7FFF8000) != 0
            && (char)(((v3 - 60) & 7) + 3) >= *(_BYTE *)(((v3 + 964) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v3 + 964);
          }
          *(_DWORD *)(v3 + 64) = *(_DWORD *)(v3 + 964);
          *(_DWORD *)(v3 + 68) = *(_DWORD *)(v3 + 1008);
          v38 = std::unordered_map<LuaShellIndex,std::map<unsigned int,data::LuaShellConfig>>::operator[](
                  &this->lua_shell_config_map_,
                  (const std::unordered_map<LuaShellIndex,std::map<unsigned int,data::LuaShellConfig>>::key_type *)(v3 + 64));
          v40 = std::map<unsigned int,data::LuaShellConfig>::emplace<unsigned int &,data::LuaShellConfig&>(
                  v38,
                  (unsigned int *)(v3 + 800),
                  (data::LuaShellConfig *)(v3 + 800),
                  (unsigned int *)v38,
                  v39);
          if ( !v40.second )
          {
            *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 672) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 672, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 672),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/db_data_manual/db_lua_shell_config_mgr.cpp",
              "loadDbLuaShellConfig",
              129);
            v41 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                    (common::milog::MiLogStream *const)(v3 + 672),
                    (const char (*)[37])"duplicate lua shell! luashell_index:");
            v42 = operator<<(v41, (const LuaShellIndex *)(v3 + 64));
            v43 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v42, (const char (*)[5])" id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v43,
              (const unsigned int *)(v3 + 800));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
            *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v28 = 0;
          }
          else
          {
            v28 = 1;
          }
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 224));
        v24 = v28 == 1;
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 160));
      data::LuaShellConfig::~LuaShellConfig((data::LuaShellConfig *const)(v3 + 800));
      v44 = ((v3 + 800) >> 3) + 2147450880;
      *(_DWORD *)v44 = -117901064;
      *(_DWORD *)(v44 + 4) = -117901064;
      *(_DWORD *)(v44 + 8) = -117901064;
      *(_DWORD *)(v44 + 12) = -117901064;
      *(_DWORD *)(v44 + 16) = -117901064;
      *(_DWORD *)(v44 + 20) = -117901064;
      *(_WORD *)(v44 + 24) = -1800;
      *(_BYTE *)(v44 + 26) = -8;
      v45 = ((v3 + 160) >> 3) + 2147450880;
      *(_WORD *)v45 = -1800;
      *(_BYTE *)(v45 + 2) = -8;
      v46 = ((v3 + 224) >> 3) + 2147450880;
      *(_WORD *)v46 = -1800;
      *(_BYTE *)(v46 + 2) = -8;
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( !v24 )
      {
        v47 = 0;
        goto LABEL_78;
      }
    }
    v47 = 1;
LABEL_78:
    std::vector<TableLuaShellConfig>::~vector((std::vector<TableLuaShellConfig> *const)(v3 + 96));
    v48 = ((v3 + 96) >> 3) + 2147450880;
    *(_WORD *)v48 = -1800;
    *(_BYTE *)(v48 + 2) = -8;
    if ( v47 == 1 )
      v2 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 1088));
  }
  if ( v57 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8080) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862732) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450920 - (((_DWORD)v5 + 2147450928) & 0xFFFFFFF8) + 96) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF80CC) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80D4) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1760LL, v57);
  }
  return v2;
};

// Line 143: range 000000000CDAA46A-000000000CDAA730
int32_t __cdecl data::DbLuaShellConfigMgr::rewriteDbLuaShellConfig(data::DbLuaShellConfigMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::unordered_map<LuaShellIndex,std::map<unsigned int,data::LuaShellConfig>> *p_lua_shell_config_map; // rsi
  unsigned __int64 v5; // rax
  common::milog::MiLogStream *v6; // rdx
  int32_t result; // eax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::DbLuaShellConfigMgr::rewriteDbLuaShellConfig;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234881024;
  v3[536862722] = -218959118;
  v3[536862724] = -202116109;
  p_lua_shell_config_map = &this->lua_shell_config_map_;
  if ( *(char *)(((v1 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v1 + 55) >> 3) + 0x7FFF8000) != 0
    && (char)((v1 + 55) & 7) >= *(_BYTE *)(((v1 + 55) >> 3) + 0x7FFF8000) )
  {
    p_lua_shell_config_map = (std::unordered_map<LuaShellIndex,std::map<unsigned int,data::LuaShellConfig>> *)24;
    __asan_report_store_n(v1 + 32, 24LL);
  }
  common::tools::MiscUtils::getAllMapKeys<std::unordered_map<LuaShellIndex,std::map<unsigned int,data::LuaShellConfig>>>(
    (std::vector<LuaShellIndex> *)(v1 + 32),
    p_lua_shell_config_map);
  std::vector<LuaShellIndex>::operator=(&this->luashell_index_vec, (std::vector<LuaShellIndex> *)(v1 + 32));
  std::vector<LuaShellIndex>::~vector((std::vector<LuaShellIndex> *const)(v1 + 32));
  v5 = ((v1 + 32) >> 3) + 2147450880;
  *(_WORD *)v5 = -1800;
  *(_BYTE *)(v5 + 2) = -8;
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v1 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v1 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v1 + 127) & 7) >= *(_BYTE *)(((v1 + 127) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v1 + 96, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v1 + 96),
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/db_data_manual/db_lua_shell_config_mgr.cpp",
    "rewriteDbLuaShellConfig",
    145);
  v6 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
         (common::milog::MiLogStream *const)(v1 + 96),
         (const char (*)[20])"luashell_index_vec:");
  common::milog::MiLogStream::operator<<<LuaShellIndex>(v6, &this->luashell_index_vec);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 96));
  result = 0;
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 150: range 000000000CDAA732-000000000CDABB7D
int32_t __cdecl data::DbLuaShellConfigMgr::checkDbLuaShellConfig(data::DbLuaShellConfigMgr *const this)
{
  int32_t v1; // r14d
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  int v7; // eax
  char v8; // al
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  char v11; // al
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  char v16; // al
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  common::milog::MiLogStream *v27; // rax
  __int64 v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rdx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rdx
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rdx
  int v43; // edx
  int v44; // eax
  std::unordered_map<LuaShellIndex,std::map<unsigned int,data::LuaShellConfig>> *__for_range; // [rsp+10h] [rbp-370h]
  std::__detail::_Node_iterator<std::pair<const LuaShellIndex,std::map<unsigned int,data::LuaShellConfig> >,false,false>::reference v47; // [rsp+18h] [rbp-368h]
  std::tuple_element<0,std::pair<const LuaShellIndex,std::map<unsigned int,data::LuaShellConfig> > >::type *luashell_index; // [rsp+20h] [rbp-360h]
  const std::tuple_element<1,std::pair<const LuaShellIndex,std::map<unsigned int,data::LuaShellConfig> > >::type *__for_range_0; // [rsp+30h] [rbp-350h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::LuaShellConfig> >::reference v50; // [rsp+38h] [rbp-348h]
  std::tuple_element<0,std::pair<unsigned int const,data::LuaShellConfig> >::type *id; // [rsp+40h] [rbp-340h]
  std::tuple_element<1,const std::pair<unsigned int const,data::LuaShellConfig> >::type *config; // [rsp+48h] [rbp-338h]
  char v53[816]; // [rsp+50h] [rbp-330h] BYREF

  v2 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(768LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "14 32 8 15 __for_begin:151 64 8 13 __for_end:151 96 8 15 __for_begin:153 128 8 13 __for_end:153 "
                        "160 8 18 lua_shell_size:190 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <u"
                        "nknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DbLuaShellConfigMgr::checkDbLuaShellConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862741] = -218959118;
  v4[536862743] = -202116109;
  __for_range = &this->lua_shell_config_map_;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<LuaShellIndex,std::map<unsigned int,data::LuaShellConfig>>::iterator *)(v2 + 32) = std::unordered_map<LuaShellIndex,std::map<unsigned int,data::LuaShellConfig>>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<LuaShellIndex,std::map<unsigned int,data::LuaShellConfig>>::iterator *)(v2 + 64) = std::unordered_map<LuaShellIndex,std::map<unsigned int,data::LuaShellConfig>>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<LuaShellIndex const,std::map<unsigned int,data::LuaShellConfig>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<const LuaShellIndex,std::map<unsigned int,data::LuaShellConfig> >,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<const LuaShellIndex,std::map<unsigned int,data::LuaShellConfig> >,false> *)(v2 + 64)) )
  {
    v47 = std::__detail::_Node_iterator<std::pair<LuaShellIndex const,std::map<unsigned int,data::LuaShellConfig>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<const LuaShellIndex,std::map<unsigned int,data::LuaShellConfig> >,false,false> *const)(v2 + 32));
    luashell_index = std::get<0ul,LuaShellIndex const,std::map<unsigned int,data::LuaShellConfig>>(v47);
    __for_range_0 = std::get<1ul,LuaShellIndex const,std::map<unsigned int,data::LuaShellConfig>>(v47);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::map<unsigned int,data::LuaShellConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::LuaShellConfig>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::map<unsigned int,data::LuaShellConfig>::const_iterator *)(v2 + 128) = std::map<unsigned int,data::LuaShellConfig>::end(__for_range_0);
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::LuaShellConfig> >::_Self *)(v2 + 96),
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::LuaShellConfig> >::_Self *)(v2 + 128)) )
    {
      v50 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::LuaShellConfig>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::LuaShellConfig> > *const)(v2 + 96));
      id = std::get<0ul,unsigned int const,data::LuaShellConfig>(v50);
      config = (std::tuple_element<1,const std::pair<unsigned int const,data::LuaShellConfig> >::type *)std::get<1ul,unsigned int const,data::LuaShellConfig>(v50);
      if ( (unsigned __int8)std::string::empty(&config->lua_shell) )
      {
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 192, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 192),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_lua_shell_config_mgr.cpp",
          "checkDbLuaShellConfig",
          157);
        v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 192),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v6 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
               v5,
               (const char (*)[20])"lua_shell empty id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
        v1 = -1;
        v7 = 0;
      }
      else
      {
        if ( std::unordered_set<unsigned int>::empty(&config->uid_set) )
          goto LABEL_25;
        if ( *(_BYTE *)(((unsigned __int64)&config->percent >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->percent >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->percent);
        }
        if ( config->percent )
          v8 = 1;
        else
LABEL_25:
          v8 = 0;
        if ( v8 )
        {
          *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 256, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 256),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/db_data_manual/db_lua_shell_config_mgr.cpp",
            "checkDbLuaShellConfig",
            162);
          v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v2 + 256),
                 (const char (*)[16])"[CONFIG_ERROR] ");
          v10 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                  v9,
                  (const char (*)[41])"config uid_list and platform or percent:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
          *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
          v1 = -1;
          v7 = 0;
        }
        else
        {
          if ( !std::unordered_set<unsigned int>::empty(&config->uid_set) )
            goto LABEL_35;
          if ( *(_BYTE *)(((unsigned __int64)&config->percent >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config->percent >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&config->percent);
          }
          if ( config->percent )
LABEL_35:
            v11 = 0;
          else
            v11 = 1;
          if ( v11 )
          {
            *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 320, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 320),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/db_data_manual/db_lua_shell_config_mgr.cpp",
              "checkDbLuaShellConfig",
              167);
            v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 320),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v13 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                    v12,
                    (const char (*)[22])"config match none id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
            *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
            v1 = -1;
            v7 = 0;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&config->protocol_type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&config->protocol_type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&config->protocol_type);
            }
            if ( !proto::LuaShellNotifyType_IsValid(config->protocol_type) )
            {
              *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 384, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 384),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/db_data_manual/db_lua_shell_config_mgr.cpp",
                "checkDbLuaShellConfig",
                172);
              v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 384),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v15 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                      v14,
                      (const char (*)[31])"config protocol_type is wrong:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &config->protocol_type);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
              *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
              v1 = -1;
              v7 = 0;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&config->use_type >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)config - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->use_type >> 3)
                                                                      + 0x7FFF8000) )
              {
                __asan_report_load4(&config->use_type);
              }
              if ( !proto::LuaShellType_IsValid(config->use_type) )
                goto LABEL_52;
              if ( *(_BYTE *)(((unsigned __int64)&config->use_type >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)config - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->use_type >> 3)
                                                                      + 0x7FFF8000) )
              {
                __asan_report_load4(&config->use_type);
              }
              if ( config->use_type )
                v16 = 0;
              else
LABEL_52:
                v16 = 1;
              if ( v16 )
              {
                *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 448, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 448),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/db_data_manual/db_lua_shell_config_mgr.cpp",
                  "checkDbLuaShellConfig",
                  177);
                v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 448),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v18 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                        v17,
                        (const char (*)[28])"invalid lua shell use_type:");
                v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &config->use_type);
                v20 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v19, (const char (*)[5])" id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
                *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
                v1 = -1;
                v7 = 0;
              }
              else
              {
                if ( *(char *)(((unsigned __int64)&config->is_check_client_report >> 3) + 0x7FFF8000) < 0 )
                  __asan_report_load1(&config->is_check_client_report);
                if ( config->is_check_client_report )
                  goto LABEL_67;
                if ( *(_BYTE *)(((unsigned __int64)&config->is_kick >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)config - 87) & 7) >= *(_BYTE *)(((unsigned __int64)&config->is_kick >> 3)
                                                                      + 0x7FFF8000) )
                {
                  __asan_report_load1(&config->is_kick);
                }
                if ( config->is_kick )
                {
                  *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 512, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 512),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/db_data_manual/db_lua_shell_config_mgr.cpp",
                    "checkDbLuaShellConfig",
                    182);
                  v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 512),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v22 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                          v21,
                          (const char (*)[21])"lua_shell_config_id:");
                  v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, id);
                  common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                    v23,
                    (const char (*)[47])" is_check_client_report=false but is_kick=true");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
                  *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
                  v1 = -1;
                  v7 = 0;
                }
                else
                {
LABEL_67:
                  if ( *(char *)(((unsigned __int64)&config->is_check_client_report >> 3) + 0x7FFF8000) < 0 )
                    __asan_report_load1(&config->is_check_client_report);
                  if ( config->is_check_client_report
                    && (unsigned __int8)std::string::empty(&config->check_json_key_str) )
                  {
                    *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 576) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 576, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 576),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/db_data_manual/db_lua_shell_config_mgr.cpp",
                      "checkDbLuaShellConfig",
                      187);
                    v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 576),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v26 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                            v25,
                            (const char (*)[21])"lua_shell_config_id:");
                    v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, id);
                    common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                      v27,
                      (const char (*)[61])" is_check_client_report=true but check_json_key_str is empty");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
                    *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
                    v1 = -1;
                    v7 = 0;
                  }
                  else
                  {
                    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
                    v28 = std::string::length(&config->lua_shell);
                    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
                      __asan_report_store8();
                    *(_QWORD *)(v2 + 160) = v28;
                    if ( *(_QWORD *)(v2 + 160) <= 0x20000uLL )
                    {
                      if ( *(_BYTE *)(((unsigned __int64)&config->channel >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((unsigned __int64)&config->channel >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_load4(&config->channel);
                      }
                      if ( config->channel <= 0xA )
                      {
                        v7 = 1;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v2 + 704) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) != 0
                          && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v2 + 704, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v2 + 704),
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/db_data_manual/db_lua_shell_config_mgr.cpp",
                          "checkDbLuaShellConfig",
                          198);
                        v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v2 + 704),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        v36 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                                v35,
                                (const char (*)[9])"channel:");
                        v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                v36,
                                &config->channel);
                        v38 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                v37,
                                (const char (*)[14])" bigger than ");
                        v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                v38,
                                &data::DbLuaShellConfigMgr::max_lua_shell_channel);
                        v40 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                                v39,
                                (const char (*)[17])" luashell_index:");
                        v41 = operator<<(v40, luashell_index);
                        v42 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
                                v41,
                                (const char (*)[5])" id:");
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, id);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
                        *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
                        v1 = -1;
                        v7 = 0;
                      }
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 640) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 671) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 671) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 640, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 640),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/db_data_manual/db_lua_shell_config_mgr.cpp",
                        "checkDbLuaShellConfig",
                        193);
                      v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 640),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      v30 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                              v29,
                              (const char (*)[21])"lua_shell_config_id:");
                      v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, id);
                      v32 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                              v31,
                              (const char (*)[22])" lua shell blob size:");
                      v33 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                              v32,
                              (const unsigned __int64 *)(v2 + 160));
                      v34 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                              v33,
                              (const char (*)[19])" exceeds max size:");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v34,
                        &data::DbLuaShellConfigMgr::max_lua_shell_size);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
                      *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
                      v1 = -1;
                      v7 = 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      if ( v7 != 1 )
      {
        v43 = 0;
        goto LABEL_94;
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::LuaShellConfig>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::LuaShellConfig> > *const)(v2 + 96));
    }
    v43 = 1;
LABEL_94:
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v43 != 1 )
    {
      v44 = 0;
      goto LABEL_98;
    }
    std::__detail::_Node_iterator<std::pair<LuaShellIndex const,std::map<unsigned int,data::LuaShellConfig>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<const LuaShellIndex,std::map<unsigned int,data::LuaShellConfig> >,false,false> *const)(v2 + 32));
  }
  v44 = 1;
LABEL_98:
  if ( v44 == 1 )
    v1 = 0;
  if ( v53 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 96) & 0xFFFFFFF8) >> 3));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v1;
};

// Line 207: range 000000000CDABB7E-000000000CDAC535
std::string *__cdecl data::DbLuaShellConfigMgr::getDesc[abi:cxx11](
        std::string *retstr,
        const data::DbLuaShellConfigMgr *const this)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r14
  std::unordered_set<unsigned int>::size_type v15; // rax
  __int64 v16; // rax
  __int64 v17; // r14
  std::unordered_set<unsigned int>::size_type v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  std::unordered_map<LuaShellIndex,std::map<unsigned int,data::LuaShellConfig>> *__for_range; // [rsp+10h] [rbp-2D0h]
  std::__detail::_Node_const_iterator<std::pair<const LuaShellIndex,std::map<unsigned int,data::LuaShellConfig> >,false,false>::reference v32; // [rsp+18h] [rbp-2C8h]
  std::tuple_element<0,std::pair<const LuaShellIndex,std::map<unsigned int,data::LuaShellConfig> > >::type *luashell_index; // [rsp+20h] [rbp-2C0h]
  std::tuple_element<1,const std::pair<const LuaShellIndex,std::map<unsigned int,data::LuaShellConfig> > >::type *config_map; // [rsp+28h] [rbp-2B8h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::LuaShellConfig> >::reference v35; // [rsp+38h] [rbp-2A8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::LuaShellConfig> >::type *config; // [rsp+48h] [rbp-298h]
  char v37[656]; // [rsp+50h] [rbp-290h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 15 __for_begin:209 64 8 13 __for_end:209 96 8 15 __for_begin:212 128 8 13 __for_end:212 160 376 6 ss:208";
  *(_QWORD *)(v2 + 16) = data::DbLuaShellConfigMgr::getDesc[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862736] = -218103808;
  v4[536862737] = -202116109;
  v4[536862738] = -202116109;
  std::ostringstream::basic_ostringstream(v2 + 160);
  __for_range = &this->lua_shell_config_map_;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<LuaShellIndex,std::map<unsigned int,data::LuaShellConfig>>::const_iterator *)(v2 + 32) = std::unordered_map<LuaShellIndex,std::map<unsigned int,data::LuaShellConfig>>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<LuaShellIndex,std::map<unsigned int,data::LuaShellConfig>>::const_iterator *)(v2 + 64) = std::unordered_map<LuaShellIndex,std::map<unsigned int,data::LuaShellConfig>>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<LuaShellIndex const,std::map<unsigned int,data::LuaShellConfig>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<const LuaShellIndex,std::map<unsigned int,data::LuaShellConfig> >,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<const LuaShellIndex,std::map<unsigned int,data::LuaShellConfig> >,false> *)(v2 + 64)) )
  {
    v32 = std::__detail::_Node_const_iterator<std::pair<LuaShellIndex const,std::map<unsigned int,data::LuaShellConfig>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<const LuaShellIndex,std::map<unsigned int,data::LuaShellConfig> >,false,false> *const)(v2 + 32));
    luashell_index = std::get<0ul,LuaShellIndex const,std::map<unsigned int,data::LuaShellConfig>>(v32);
    config_map = (std::tuple_element<1,const std::pair<const LuaShellIndex,std::map<unsigned int,data::LuaShellConfig> > >::type *)std::get<1ul,LuaShellIndex const,std::map<unsigned int,data::LuaShellConfig>>(v32);
    v5 = std::operator<<<std::char_traits<char>>(v2 + 160, "luashell_index:[use_type:");
    if ( *(_BYTE *)(((unsigned __int64)luashell_index >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)luashell_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)luashell_index >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(luashell_index);
    }
    v6 = std::ostream::operator<<(v5, luashell_index->use_type);
    v7 = std::operator<<<std::char_traits<char>>(v6, ",channel:");
    if ( *(_BYTE *)(((unsigned __int64)&luashell_index->channel >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)luashell_index + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&luashell_index->channel >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4(&luashell_index->channel);
    }
    v8 = std::ostream::operator<<(v7, luashell_index->channel);
    std::operator<<<std::char_traits<char>>(v8, "]{\n");
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::map<unsigned int,data::LuaShellConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::LuaShellConfig>::begin(config_map);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::map<unsigned int,data::LuaShellConfig>::const_iterator *)(v2 + 128) = std::map<unsigned int,data::LuaShellConfig>::end(config_map);
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::LuaShellConfig> >::_Self *)(v2 + 96),
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::LuaShellConfig> >::_Self *)(v2 + 128)) )
    {
      v35 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::LuaShellConfig>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::LuaShellConfig> > *const)(v2 + 96));
      std::get<0ul,unsigned int const,data::LuaShellConfig>(v35);
      config = (std::tuple_element<1,const std::pair<unsigned int const,data::LuaShellConfig> >::type *)std::get<1ul,unsigned int const,data::LuaShellConfig>(v35);
      v9 = std::operator<<<std::char_traits<char>>(v2 + 160, "id:");
      if ( *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(config);
      }
      v10 = std::ostream::operator<<(v9, config->id);
      v11 = std::operator<<<std::char_traits<char>>(v10, ",lua_size:");
      v12 = std::string::size(&config->lua_shell);
      v13 = std::ostream::operator<<(v11, v12);
      v14 = std::operator<<<std::char_traits<char>>(v13, ",uid_size:");
      v15 = std::unordered_set<unsigned int>::size(&config->uid_set);
      v16 = std::ostream::operator<<(v14, v15);
      v17 = std::operator<<<std::char_traits<char>>(v16, ",platform_type_size:");
      v18 = std::unordered_set<unsigned int>::size(&config->platform_type_set);
      v19 = std::ostream::operator<<(v17, v18);
      v20 = std::operator<<<std::char_traits<char>>(v19, ",percent:");
      if ( *(_BYTE *)(((unsigned __int64)&config->percent >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->percent >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->percent);
      }
      v21 = std::ostream::operator<<(v20, config->percent);
      v22 = std::operator<<<std::char_traits<char>>(v21, ",created_at:");
      if ( *(_BYTE *)(((unsigned __int64)&config->created_at >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->created_at >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&config->created_at);
      }
      v23 = std::ostream::operator<<(v22, config->created_at);
      v24 = std::operator<<<std::char_traits<char>>(v23, ",use_type:");
      if ( *(_BYTE *)(((unsigned __int64)&config->use_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->use_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&config->use_type);
      }
      v25 = std::ostream::operator<<(v24, config->use_type);
      v26 = std::operator<<<std::char_traits<char>>(v25, ",channel:");
      if ( *(_BYTE *)(((unsigned __int64)&config->channel >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->channel >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->channel);
      }
      std::ostream::operator<<(v26, config->channel);
      if ( *(char *)(((unsigned __int64)&config->is_check_client_report >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&config->is_check_client_report);
      if ( config->is_check_client_report )
      {
        v27 = std::operator<<<std::char_traits<char>>(v2 + 160, ",is_check_client_report:true,is_kick:");
        if ( *(_BYTE *)(((unsigned __int64)&config->is_kick >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)config - 87) & 7) >= *(_BYTE *)(((unsigned __int64)&config->is_kick >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&config->is_kick);
        }
        v28 = std::ostream::operator<<(v27, config->is_kick);
        v29 = std::operator<<<std::char_traits<char>>(v28, ",check_json_key:");
        std::operator<<<char>(v29, &config->check_json_key_str);
      }
      std::operator<<<std::char_traits<char>>(v2 + 160, "\n");
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::LuaShellConfig>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::LuaShellConfig> > *const)(v2 + 96));
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    std::operator<<<std::char_traits<char>>(v2 + 160, "}\n");
    std::__detail::_Node_const_iterator<std::pair<LuaShellIndex const,std::map<unsigned int,data::LuaShellConfig>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<const LuaShellIndex,std::map<unsigned int,data::LuaShellConfig> >,false,false> *const)(v2 + 32));
  }
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::ostringstream::str(retstr, v2 + 160);
  std::ostringstream::~ostringstream(v2 + 160);
  if ( v37 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = -168430091;
  }
  return retstr;
};

// Line 229: range 000000000CDAC536-000000000CDAC84F
const data::LuaShellConfig *__fastcall data::DbLuaShellConfigMgr::findLuaShellConfig(
        const data::DbLuaShellConfigMgr *const this,
        LuaShellIndex luashell_index,
        uint32_t id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<LuaShellIndex,std::map<unsigned int,data::LuaShellConfig>> *p_lua_shell_config_map; // rdx
  std::unordered_map<LuaShellIndex,std::map<unsigned int,data::LuaShellConfig>> *v7; // rdx
  bool v8; // al
  const data::LuaShellConfig *result; // rax
  bool v10; // al
  std::map<unsigned int,data::LuaShellConfig> *config_map; // [rsp+28h] [rbp-108h]
  char v13[256]; // [rsp+30h] [rbp-100h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 6 id:228 64 8 8 iter:230 96 8 9 <unknown> 128 8 6 it:236 160 8 9 <unknown> 192 8 18 luashell_index:228";
  *(_QWORD *)(v3 + 16) = data::DbLuaShellConfigMgr::findLuaShellConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -202116352;
  *(LuaShellIndex *)(v3 + 192) = luashell_index;
  *(_DWORD *)(v3 + 48) = id;
  p_lua_shell_config_map = &this->lua_shell_config_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<LuaShellIndex,std::map<unsigned int,data::LuaShellConfig>>::const_iterator *)(v3 + 64) = std::unordered_map<LuaShellIndex,std::map<unsigned int,data::LuaShellConfig>>::find(p_lua_shell_config_map, (const std::unordered_map<LuaShellIndex,std::map<unsigned int,data::LuaShellConfig>>::key_type *)(v3 + 192));
  v7 = &this->lua_shell_config_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<LuaShellIndex,std::map<unsigned int,data::LuaShellConfig>>::const_iterator *)(v3 + 96) = std::unordered_map<LuaShellIndex,std::map<unsigned int,data::LuaShellConfig>>::end(v7);
  v8 = std::__detail::operator==<std::pair<LuaShellIndex const,std::map<unsigned int,data::LuaShellConfig>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<const LuaShellIndex,std::map<unsigned int,data::LuaShellConfig> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<const LuaShellIndex,std::map<unsigned int,data::LuaShellConfig> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    config_map = &std::__detail::_Node_const_iterator<std::pair<LuaShellIndex const,std::map<unsigned int,data::LuaShellConfig>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<const LuaShellIndex,std::map<unsigned int,data::LuaShellConfig> >,false,false> *const)(v3 + 64))->second;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::map<unsigned int,data::LuaShellConfig>::const_iterator *)(v3 + 128) = std::map<unsigned int,data::LuaShellConfig>::find(
                                                                                   config_map,
                                                                                   (const std::map<unsigned int,data::LuaShellConfig>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::map<unsigned int,data::LuaShellConfig>::const_iterator *)(v3 + 160) = std::map<unsigned int,data::LuaShellConfig>::end(config_map);
    v10 = std::operator==(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::LuaShellConfig> >::_Self *)(v3 + 128),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::LuaShellConfig> >::_Self *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
      result = 0LL;
    else
      result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::LuaShellConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::LuaShellConfig> > *const)(v3 + 128))->second;
  }
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 245: range 000000000CDAC850-000000000CDACD02
__int64 __fastcall data::DbLuaShellConfigMgr::getPlayerMatchedId(
        const data::DbLuaShellConfigMgr *const this,
        LuaShellIndex luashell_index,
        uint32_t uid,
        uint32_t platform_type)
{
  uint32_t id; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  std::unordered_map<LuaShellIndex,std::map<unsigned int,data::LuaShellConfig>> *p_lua_shell_config_map; // rdx
  std::unordered_map<LuaShellIndex,std::map<unsigned int,data::LuaShellConfig>> *v9; // rdx
  bool v10; // al
  bool v11; // al
  std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::LuaShellConfig> > >::pointer v12; // rax
  int v13; // eax
  unsigned int v14; // eax
  __int64 result; // rax
  const data::LuaShellConfig *config; // [rsp+28h] [rbp-118h]
  char v19[272]; // [rsp+30h] [rbp-110h] BYREF

  v5 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(224LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "7 32 4 7 uid:244 48 4 17 platform_type:244 64 8 8 iter:246 96 8 9 <unknown> 128 8 6 it:253 160 8"
                        " 9 <unknown> 192 8 18 luashell_index:244";
  *(_QWORD *)(v5 + 16) = data::DbLuaShellConfigMgr::getPlayerMatchedId;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -218959360;
  v7[536862725] = -218959360;
  v7[536862726] = -202116352;
  *(LuaShellIndex *)(v5 + 192) = luashell_index;
  *(_DWORD *)(v5 + 32) = uid;
  *(_DWORD *)(v5 + 48) = platform_type;
  p_lua_shell_config_map = &this->lua_shell_config_map_;
  if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<LuaShellIndex,std::map<unsigned int,data::LuaShellConfig>>::const_iterator *)(v5 + 64) = std::unordered_map<LuaShellIndex,std::map<unsigned int,data::LuaShellConfig>>::find(p_lua_shell_config_map, (const std::unordered_map<LuaShellIndex,std::map<unsigned int,data::LuaShellConfig>>::key_type *)(v5 + 192));
  v9 = &this->lua_shell_config_map_;
  if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<LuaShellIndex,std::map<unsigned int,data::LuaShellConfig>>::const_iterator *)(v5 + 96) = std::unordered_map<LuaShellIndex,std::map<unsigned int,data::LuaShellConfig>>::end(v9);
  v10 = std::__detail::operator==<std::pair<LuaShellIndex const,std::map<unsigned int,data::LuaShellConfig>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<const LuaShellIndex,std::map<unsigned int,data::LuaShellConfig> >,false> *)(v5 + 64),
          (const std::__detail::_Node_iterator_base<std::pair<const LuaShellIndex,std::map<unsigned int,data::LuaShellConfig> >,false> *)(v5 + 96));
  *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v10 )
  {
    id = 0;
    goto LABEL_32;
  }
  std::__detail::_Node_const_iterator<std::pair<LuaShellIndex const,std::map<unsigned int,data::LuaShellConfig>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<const LuaShellIndex,std::map<unsigned int,data::LuaShellConfig> >,false,false> *const)(v5 + 64));
  *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  std::map<unsigned int,data::LuaShellConfig>::rbegin((const std::map<unsigned int,data::LuaShellConfig> *const)(v5 + 128));
  while ( 1 )
  {
    *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    std::map<unsigned int,data::LuaShellConfig>::rend((const std::map<unsigned int,data::LuaShellConfig> *const)(v5 + 160));
    v11 = std::operator!=<std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::LuaShellConfig>>>(
            (const std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::LuaShellConfig> > > *)(v5 + 128),
            (const std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::LuaShellConfig> > > *)(v5 + 160));
    *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( !v11 )
    {
      v13 = 1;
      goto LABEL_30;
    }
    v12 = std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::LuaShellConfig>>>::operator->((const std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::LuaShellConfig> > > *const)(v5 + 128));
    config = &v12->second;
    if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
            &v12->second.platform_type_set,
            (const unsigned int *)(v5 + 48)) )
      goto LABEL_28;
    if ( std::unordered_set<unsigned int>::empty(&config->uid_set) )
      break;
    if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
           &config->uid_set,
           (const unsigned int *)(v5 + 32)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(config);
      }
      id = config->id;
      v13 = 0;
      goto LABEL_30;
    }
LABEL_28:
    std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::LuaShellConfig>>>::operator++((std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::LuaShellConfig> > > *const)(v5 + 128));
  }
  v14 = *(_DWORD *)(v5 + 32) % 0x3E8u;
  if ( *(_BYTE *)(((unsigned __int64)&config->percent >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config->percent >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config->percent);
  }
  if ( v14 >= config->percent )
    goto LABEL_28;
  if ( *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(config);
  }
  id = config->id;
  v13 = 0;
LABEL_30:
  if ( v13 == 1 )
    id = 0;
LABEL_32:
  result = id;
  if ( v19 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};
