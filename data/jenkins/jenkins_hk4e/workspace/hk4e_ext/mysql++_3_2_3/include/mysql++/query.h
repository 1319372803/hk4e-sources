// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/mysql++_3_2_3/include/mysql++/query.h

// Line 754: range 000000000C8A31B6-000000000C8A3751
void __cdecl mysqlpp::Query::storein_sequence<std::vector<TableLuaShellConfig>>(
        mysqlpp::Query *const this,
        std::vector<TableLuaShellConfig> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r14
  const unsigned __int64 *lengths; // rax
  int v10; // r14d
  _DWORD *v11; // rax
  _DWORD *v12; // rax
  _DWORD *v13; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-258h]
  char v16[592]; // [rsp+30h] [rbp-250h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(544LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 64 7 row:760 144 104 10 result:756 288 192 9 <unknown>";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<TableLuaShellConfig>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -219021312;
  v5[536862724] = 62194;
  v5[536862727] = -234881024;
  v5[536862728] = -218959118;
  v5[536862735] = -202116109;
  v5[536862736] = -202116109;
  if ( *(char *)(((v3 + 144) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 247) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 9) & 7) >= *(_BYTE *)(((v3 + 247) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 144, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 144), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 144)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 144));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 48) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 144));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 48), d, (const mysqlpp::ResultBase *)(v3 + 144), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 48)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          v11 = (_DWORD *)(((v3 + 288) >> 3) + 2147450880);
          *v11 = 0;
          v11[1] = 0;
          v11[2] = 0;
          v11[3] = 0;
          v11[4] = 0;
          v11[5] = 0;
          TableLuaShellConfig::TableLuaShellConfig(
            (TableLuaShellConfig *const)(v3 + 288),
            (const mysqlpp::Row *)(v3 + 48));
          std::vector<TableLuaShellConfig>::push_back(con, (std::vector<TableLuaShellConfig>::value_type *)(v3 + 288));
          TableLuaShellConfig::~TableLuaShellConfig((TableLuaShellConfig *const)(v3 + 288));
          v12 = (_DWORD *)(((v3 + 288) >> 3) + 2147450880);
          *v12 = -117901064;
          v12[1] = -117901064;
          v12[2] = -117901064;
          v12[3] = -117901064;
          v12[4] = -117901064;
          v12[5] = -117901064;
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 48));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v13 = (_DWORD *)(((v3 + 48) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 144));
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF803C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = -168430091;
  }
};

// Line 754: range 000000000C8794D8-000000000C8799D9
void __cdecl mysqlpp::Query::storein_sequence<std::vector<data::t_activity_schedule_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_activity_schedule_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r14
  const unsigned __int64 *lengths; // rax
  int v10; // r14d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  _DWORD *v13; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-1B8h]
  char v16[432]; // [rsp+30h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 64 7 row:760 128 80 9 <unknown> 240 104 10 result:756";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<data::t_activity_schedule_config>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862723] = -218959118;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862730] = -218103808;
  v5[536862731] = -202116109;
  if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 343) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 87) & 7) >= *(_BYTE *)(((v3 + 343) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 240, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 240), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 240)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 240));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 240));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 32), d, (const mysqlpp::ResultBase *)(v3 + 240), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 32)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          v11 = ((v3 + 128) >> 3) + 2147450880;
          *(_DWORD *)v11 = 0;
          *(_DWORD *)(v11 + 4) = 0;
          *(_WORD *)(v11 + 8) = 0;
          data::t_activity_schedule_config::t_activity_schedule_config(
            (data::t_activity_schedule_config *const)(v3 + 128),
            (const mysqlpp::Row *)(v3 + 32));
          std::vector<data::t_activity_schedule_config>::push_back(
            con,
            (std::vector<data::t_activity_schedule_config>::value_type *)(v3 + 128));
          data::t_activity_schedule_config::~t_activity_schedule_config((data::t_activity_schedule_config *const)(v3 + 128));
          v12 = ((v3 + 128) >> 3) + 2147450880;
          *(_DWORD *)v12 = -117901064;
          *(_DWORD *)(v12 + 4) = -117901064;
          *(_WORD *)(v12 + 8) = -1800;
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 32));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v13 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 240));
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 754: range 000000000C879F4E-000000000C87A3FE
void __cdecl mysqlpp::Query::storein_sequence<std::vector<data::t_anti_offline_whitelist_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_anti_offline_whitelist_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r14
  const unsigned __int64 *lengths; // rax
  int v10; // r14d
  _DWORD *v11; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-178h]
  char v14[368]; // [rsp+30h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 16 9 <unknown> 80 64 7 row:760 176 104 10 result:756";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<data::t_anti_offline_whitelist_config>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862728] = -218103808;
  v5[536862729] = -202116109;
  if ( *(char *)(((v3 + 176) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 279) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 23) & 7) >= *(_BYTE *)(((v3 + 279) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 176, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 176), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 176)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 176));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 80) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 176));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 80), d, (const mysqlpp::ResultBase *)(v3 + 176), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 80)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = 0;
          data::t_anti_offline_whitelist_config::t_anti_offline_whitelist_config(
            (data::t_anti_offline_whitelist_config *const)(v3 + 48),
            (const mysqlpp::Row *)(v3 + 80));
          std::vector<data::t_anti_offline_whitelist_config>::push_back(
            con,
            (std::vector<data::t_anti_offline_whitelist_config>::value_type *)(v3 + 48));
          *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = -1800;
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 80));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v11 = (_DWORD *)(((v3 + 80) >> 3) + 2147450880);
      *v11 = -117901064;
      v11[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 176));
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 754: range 000000000C87A9A2-000000000C87AEA3
void __cdecl mysqlpp::Query::storein_sequence<std::vector<data::t_battle_pass_schedule_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_battle_pass_schedule_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r14
  const unsigned __int64 *lengths; // rax
  int v10; // r14d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  _DWORD *v13; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-1B8h]
  char v16[432]; // [rsp+30h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 64 7 row:760 128 80 9 <unknown> 240 104 10 result:756";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<data::t_battle_pass_schedule_config>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862723] = -218959118;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862730] = -218103808;
  v5[536862731] = -202116109;
  if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 343) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 87) & 7) >= *(_BYTE *)(((v3 + 343) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 240, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 240), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 240)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 240));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 240));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 32), d, (const mysqlpp::ResultBase *)(v3 + 240), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 32)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          v11 = ((v3 + 128) >> 3) + 2147450880;
          *(_DWORD *)v11 = 0;
          *(_DWORD *)(v11 + 4) = 0;
          *(_WORD *)(v11 + 8) = 0;
          data::t_battle_pass_schedule_config::t_battle_pass_schedule_config(
            (data::t_battle_pass_schedule_config *const)(v3 + 128),
            (const mysqlpp::Row *)(v3 + 32));
          std::vector<data::t_battle_pass_schedule_config>::push_back(
            con,
            (std::vector<data::t_battle_pass_schedule_config>::value_type *)(v3 + 128));
          data::t_battle_pass_schedule_config::~t_battle_pass_schedule_config((data::t_battle_pass_schedule_config *const)(v3 + 128));
          v12 = ((v3 + 128) >> 3) + 2147450880;
          *(_DWORD *)v12 = -117901064;
          *(_DWORD *)(v12 + 4) = -117901064;
          *(_WORD *)(v12 + 8) = -1800;
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 32));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v13 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 240));
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 754: range 000000000C87B4F4-000000000C87B9FA
void __cdecl mysqlpp::Query::storein_sequence<std::vector<data::t_chat_block_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_chat_block_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r14
  const unsigned __int64 *lengths; // rax
  int v10; // r14d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  _DWORD *v13; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-198h]
  char v16[400]; // [rsp+30h] [rbp-190h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 48 9 <unknown> 112 64 7 row:760 208 104 10 result:756";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<data::t_chat_block_config>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -219021312;
  v5[536862723] = 62194;
  v5[536862725] = -219021312;
  v5[536862726] = 62194;
  v5[536862729] = -218103808;
  v5[536862730] = -202116109;
  if ( *(char *)(((v3 + 208) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 311) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 55) & 7) >= *(_BYTE *)(((v3 + 311) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 208, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 208), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 208)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 208));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 112) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 208));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 112), d, (const mysqlpp::ResultBase *)(v3 + 208), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 112)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          v11 = ((v3 + 32) >> 3) + 2147450880;
          *(_DWORD *)v11 = 0;
          *(_WORD *)(v11 + 4) = 0;
          data::t_chat_block_config::t_chat_block_config(
            (data::t_chat_block_config *const)(v3 + 32),
            (const mysqlpp::Row *)(v3 + 112));
          std::vector<data::t_chat_block_config>::push_back(
            con,
            (std::vector<data::t_chat_block_config>::value_type *)(v3 + 32));
          data::t_chat_block_config::~t_chat_block_config((data::t_chat_block_config *const)(v3 + 32));
          v12 = ((v3 + 32) >> 3) + 2147450880;
          *(_DWORD *)v12 = -117901064;
          *(_WORD *)(v12 + 4) = -1800;
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 112));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v13 = (_DWORD *)(((v3 + 112) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 208));
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = -168430091;
  }
};

// Line 754: range 000000000C87A460-000000000C87A910
void __cdecl mysqlpp::Query::storein_sequence<std::vector<data::t_client_watchdog_uid_list_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_client_watchdog_uid_list_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r14
  const unsigned __int64 *lengths; // rax
  int v10; // r14d
  _DWORD *v11; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-178h]
  char v14[368]; // [rsp+30h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 16 9 <unknown> 80 64 7 row:760 176 104 10 result:756";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<data::t_client_watchdog_uid_list_config>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862728] = -218103808;
  v5[536862729] = -202116109;
  if ( *(char *)(((v3 + 176) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 279) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 23) & 7) >= *(_BYTE *)(((v3 + 279) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 176, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 176), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 176)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 176));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 80) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 176));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 80), d, (const mysqlpp::ResultBase *)(v3 + 176), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 80)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = 0;
          data::t_client_watchdog_uid_list_config::t_client_watchdog_uid_list_config(
            (data::t_client_watchdog_uid_list_config *const)(v3 + 48),
            (const mysqlpp::Row *)(v3 + 80));
          std::vector<data::t_client_watchdog_uid_list_config>::push_back(
            con,
            (std::vector<data::t_client_watchdog_uid_list_config>::value_type *)(v3 + 48));
          *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = -1800;
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 80));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v11 = (_DWORD *)(((v3 + 80) >> 3) + 2147450880);
      *v11 = -117901064;
      v11[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 176));
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 754: range 000000000C87BBBC-000000000C87C0CC
void __cdecl mysqlpp::Query::storein_sequence<std::vector<data::t_cmd_frequency_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_cmd_frequency_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r14
  const unsigned __int64 *lengths; // rax
  int v10; // r14d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  _DWORD *v13; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-1B8h]
  char v16[432]; // [rsp+30h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 56 9 <unknown> 144 64 7 row:760 240 104 10 result:756";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<data::t_cmd_frequency_config>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -218959360;
  v5[536862724] = 62194;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862730] = -218103808;
  v5[536862731] = -202116109;
  if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 343) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 87) & 7) >= *(_BYTE *)(((v3 + 343) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 240, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 240), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 240)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 240));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 144) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 240));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 144), d, (const mysqlpp::ResultBase *)(v3 + 240), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 144)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          v11 = ((v3 + 48) >> 3) + 2147450880;
          *(_DWORD *)v11 = 0;
          *(_WORD *)(v11 + 4) = 0;
          *(_BYTE *)(v11 + 6) = 0;
          data::t_cmd_frequency_config::t_cmd_frequency_config(
            (data::t_cmd_frequency_config *const)(v3 + 48),
            (const mysqlpp::Row *)(v3 + 144));
          std::vector<data::t_cmd_frequency_config>::push_back(
            con,
            (std::vector<data::t_cmd_frequency_config>::value_type *)(v3 + 48));
          data::t_cmd_frequency_config::~t_cmd_frequency_config((data::t_cmd_frequency_config *const)(v3 + 48));
          v12 = ((v3 + 48) >> 3) + 2147450880;
          *(_DWORD *)v12 = -117901064;
          *(_WORD *)(v12 + 4) = -1800;
          *(_BYTE *)(v12 + 6) = -8;
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 144));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v13 = (_DWORD *)(((v3 + 144) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 240));
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 754: range 000000000C88E9F8-000000000C88EEFE
void __cdecl mysqlpp::Query::storein_sequence<std::vector<data::t_feature_switch_off_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_feature_switch_off_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r14
  const unsigned __int64 *lengths; // rax
  int v10; // r14d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  _DWORD *v13; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-198h]
  char v16[400]; // [rsp+30h] [rbp-190h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 48 9 <unknown> 112 64 7 row:760 208 104 10 result:756";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<data::t_feature_switch_off_config>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -219021312;
  v5[536862723] = 62194;
  v5[536862725] = -219021312;
  v5[536862726] = 62194;
  v5[536862729] = -218103808;
  v5[536862730] = -202116109;
  if ( *(char *)(((v3 + 208) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 311) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 55) & 7) >= *(_BYTE *)(((v3 + 311) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 208, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 208), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 208)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 208));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 112) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 208));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 112), d, (const mysqlpp::ResultBase *)(v3 + 208), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 112)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          v11 = ((v3 + 32) >> 3) + 2147450880;
          *(_DWORD *)v11 = 0;
          *(_WORD *)(v11 + 4) = 0;
          data::t_feature_switch_off_config::t_feature_switch_off_config(
            (data::t_feature_switch_off_config *const)(v3 + 32),
            (const mysqlpp::Row *)(v3 + 112));
          std::vector<data::t_feature_switch_off_config>::push_back(
            con,
            (std::vector<data::t_feature_switch_off_config>::value_type *)(v3 + 32));
          data::t_feature_switch_off_config::~t_feature_switch_off_config((data::t_feature_switch_off_config *const)(v3 + 32));
          v12 = ((v3 + 32) >> 3) + 2147450880;
          *(_DWORD *)v12 = -117901064;
          *(_WORD *)(v12 + 4) = -1800;
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 112));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v13 = (_DWORD *)(((v3 + 112) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 208));
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = -168430091;
  }
};

// Line 754: range 000000000C890ED6-000000000C8913D7
void __cdecl mysqlpp::Query::storein_sequence<std::vector<data::t_gacha_newbie_url_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_gacha_newbie_url_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r14
  const unsigned __int64 *lengths; // rax
  int v10; // r14d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  _DWORD *v13; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-1B8h]
  char v16[432]; // [rsp+30h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 64 7 row:760 128 80 9 <unknown> 240 104 10 result:756";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<data::t_gacha_newbie_url_config>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862723] = -218959118;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862730] = -218103808;
  v5[536862731] = -202116109;
  if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 343) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 87) & 7) >= *(_BYTE *)(((v3 + 343) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 240, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 240), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 240)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 240));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 240));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 32), d, (const mysqlpp::ResultBase *)(v3 + 240), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 32)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          v11 = ((v3 + 128) >> 3) + 2147450880;
          *(_DWORD *)v11 = 0;
          *(_DWORD *)(v11 + 4) = 0;
          *(_WORD *)(v11 + 8) = 0;
          data::t_gacha_newbie_url_config::t_gacha_newbie_url_config(
            (data::t_gacha_newbie_url_config *const)(v3 + 128),
            (const mysqlpp::Row *)(v3 + 32));
          std::vector<data::t_gacha_newbie_url_config>::push_back(
            con,
            (std::vector<data::t_gacha_newbie_url_config>::value_type *)(v3 + 128));
          data::t_gacha_newbie_url_config::~t_gacha_newbie_url_config((data::t_gacha_newbie_url_config *const)(v3 + 128));
          v12 = ((v3 + 128) >> 3) + 2147450880;
          *(_DWORD *)v12 = -117901064;
          *(_DWORD *)(v12 + 4) = -117901064;
          *(_WORD *)(v12 + 8) = -1800;
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 32));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v13 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 240));
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 754: range 000000000C88F404-000000000C88F95C
void __cdecl mysqlpp::Query::storein_sequence<std::vector<data::t_gacha_schedule_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_gacha_schedule_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r14
  const unsigned __int64 *lengths; // rax
  int v10; // r14d
  _DWORD *v11; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-338h]
  char v14[816]; // [rsp+30h] [rbp-330h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(768LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 64 7 row:760 128 104 10 result:756 272 424 9 <unknown>";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<data::t_gacha_schedule_config>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862723] = -218959118;
  v5[536862727] = -218959360;
  v5[536862728] = 62194;
  v5[536862741] = -218103808;
  v5[536862742] = -202116109;
  v5[536862743] = -202116109;
  if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 231) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 25) & 7) >= *(_BYTE *)(((v3 + 231) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 128, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 128), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 128)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 128));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 128));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 32), d, (const mysqlpp::ResultBase *)(v3 + 128), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 32)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          __asan_unpoison_stack_memory(v3 + 272, 424LL);
          data::t_gacha_schedule_config::t_gacha_schedule_config(
            (data::t_gacha_schedule_config *const)(v3 + 272),
            (const mysqlpp::Row *)(v3 + 32));
          std::vector<data::t_gacha_schedule_config>::push_back(
            con,
            (std::vector<data::t_gacha_schedule_config>::value_type *)(v3 + 272));
          data::t_gacha_schedule_config::~t_gacha_schedule_config((data::t_gacha_schedule_config *const)(v3 + 272));
          __asan_poison_stack_memory(v3 + 272, 424LL);
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 32));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v11 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
      *v11 = -117901064;
      v11[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 128));
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8044) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8054) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF805C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 754: range 000000000C894A6C-000000000C894F6D
void __cdecl mysqlpp::Query::storein_sequence<std::vector<data::t_gameplay_recommendation_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_gameplay_recommendation_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r14
  const unsigned __int64 *lengths; // rax
  int v10; // r14d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  _DWORD *v13; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-1B8h]
  char v16[432]; // [rsp+30h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 64 7 row:760 128 80 9 <unknown> 240 104 10 result:756";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<data::t_gameplay_recommendation_config>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862723] = -218959118;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862730] = -218103808;
  v5[536862731] = -202116109;
  if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 343) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 87) & 7) >= *(_BYTE *)(((v3 + 343) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 240, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 240), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 240)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 240));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 240));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 32), d, (const mysqlpp::ResultBase *)(v3 + 240), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 32)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          v11 = ((v3 + 128) >> 3) + 2147450880;
          *(_DWORD *)v11 = 0;
          *(_DWORD *)(v11 + 4) = 0;
          *(_WORD *)(v11 + 8) = 0;
          data::t_gameplay_recommendation_config::t_gameplay_recommendation_config(
            (data::t_gameplay_recommendation_config *const)(v3 + 128),
            (const mysqlpp::Row *)(v3 + 32));
          std::vector<data::t_gameplay_recommendation_config>::push_back(
            con,
            (std::vector<data::t_gameplay_recommendation_config>::value_type *)(v3 + 128));
          data::t_gameplay_recommendation_config::~t_gameplay_recommendation_config((data::t_gameplay_recommendation_config *const)(v3 + 128));
          v12 = ((v3 + 128) >> 3) + 2147450880;
          *(_DWORD *)v12 = -117901064;
          *(_DWORD *)(v12 + 4) = -117901064;
          *(_WORD *)(v12 + 8) = -1800;
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 32));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v13 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 240));
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 754: range 000000000C89998A-000000000C899F61
void __cdecl mysqlpp::Query::storein_sequence<std::vector<data::t_h5_activity_schedule_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_h5_activity_schedule_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r14
  const unsigned __int64 *lengths; // rax
  int v10; // r14d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  _DWORD *v13; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-278h]
  char v16[624]; // [rsp+30h] [rbp-270h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(576LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 64 7 row:760 144 104 10 result:756 288 216 9 <unknown>";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<data::t_h5_activity_schedule_config>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -219021312;
  v5[536862724] = 62194;
  v5[536862727] = -234881024;
  v5[536862728] = -218959118;
  v5[536862735] = -218103808;
  v5[536862736] = -202116109;
  v5[536862737] = -202116109;
  if ( *(char *)(((v3 + 144) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 247) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 9) & 7) >= *(_BYTE *)(((v3 + 247) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 144, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 144), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 144)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 144));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 48) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 144));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 48), d, (const mysqlpp::ResultBase *)(v3 + 144), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 48)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          v11 = ((v3 + 288) >> 3) + 2147450880;
          *(_DWORD *)v11 = 0;
          *(_DWORD *)(v11 + 4) = 0;
          *(_DWORD *)(v11 + 8) = 0;
          *(_DWORD *)(v11 + 12) = 0;
          *(_DWORD *)(v11 + 16) = 0;
          *(_DWORD *)(v11 + 20) = 0;
          *(_WORD *)(v11 + 24) = 0;
          *(_BYTE *)(v11 + 26) = 0;
          data::t_h5_activity_schedule_config::t_h5_activity_schedule_config(
            (data::t_h5_activity_schedule_config *const)(v3 + 288),
            (const mysqlpp::Row *)(v3 + 48));
          std::vector<data::t_h5_activity_schedule_config>::push_back(
            con,
            (std::vector<data::t_h5_activity_schedule_config>::value_type *)(v3 + 288));
          data::t_h5_activity_schedule_config::~t_h5_activity_schedule_config((data::t_h5_activity_schedule_config *const)(v3 + 288));
          v12 = ((v3 + 288) >> 3) + 2147450880;
          *(_DWORD *)v12 = -117901064;
          *(_DWORD *)(v12 + 4) = -117901064;
          *(_DWORD *)(v12 + 8) = -117901064;
          *(_DWORD *)(v12 + 12) = -117901064;
          *(_DWORD *)(v12 + 16) = -117901064;
          *(_DWORD *)(v12 + 20) = -117901064;
          *(_WORD *)(v12 + 24) = -1800;
          *(_BYTE *)(v12 + 26) = -8;
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 48));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v13 = (_DWORD *)(((v3 + 48) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 144));
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 754: range 000000000C89D524-000000000C89DA79
void __cdecl mysqlpp::Query::storein_sequence<std::vector<data::t_live_schedule_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_live_schedule_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r14
  const unsigned __int64 *lengths; // rax
  int v10; // r14d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  _DWORD *v13; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-218h]
  char v16[528]; // [rsp+30h] [rbp-210h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(480LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 64 7 row:760 128 104 10 result:756 272 144 9 <unknown>";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<data::t_live_schedule_config>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862723] = -218959118;
  v5[536862727] = -218959360;
  v5[536862728] = 62194;
  v5[536862733] = -202116109;
  v5[536862734] = -202116109;
  if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 231) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 25) & 7) >= *(_BYTE *)(((v3 + 231) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 128, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 128), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 128)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 128));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 128));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 32), d, (const mysqlpp::ResultBase *)(v3 + 128), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 32)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          v11 = ((v3 + 272) >> 3) + 2147450880;
          *(_DWORD *)v11 = 0;
          *(_DWORD *)(v11 + 4) = 0;
          *(_DWORD *)(v11 + 8) = 0;
          *(_DWORD *)(v11 + 12) = 0;
          *(_WORD *)(v11 + 16) = 0;
          data::t_live_schedule_config::t_live_schedule_config(
            (data::t_live_schedule_config *const)(v3 + 272),
            (const mysqlpp::Row *)(v3 + 32));
          std::vector<data::t_live_schedule_config>::push_back(
            con,
            (std::vector<data::t_live_schedule_config>::value_type *)(v3 + 272));
          data::t_live_schedule_config::~t_live_schedule_config((data::t_live_schedule_config *const)(v3 + 272));
          v12 = ((v3 + 272) >> 3) + 2147450880;
          *(_DWORD *)v12 = -117901064;
          *(_DWORD *)(v12 + 4) = -117901064;
          *(_DWORD *)(v12 + 8) = -117901064;
          *(_DWORD *)(v12 + 12) = -117901064;
          *(_WORD *)(v12 + 16) = -1800;
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 32));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v13 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 128));
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = -168430091;
  }
};

// Line 754: range 000000000C8A58D8-000000000C8A5DDE
void __cdecl mysqlpp::Query::storein_sequence<std::vector<data::t_mail_block_tag_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_mail_block_tag_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r14
  const unsigned __int64 *lengths; // rax
  int v10; // r14d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  _DWORD *v13; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-198h]
  char v16[400]; // [rsp+30h] [rbp-190h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 48 9 <unknown> 112 64 7 row:760 208 104 10 result:756";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<data::t_mail_block_tag_config>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -219021312;
  v5[536862723] = 62194;
  v5[536862725] = -219021312;
  v5[536862726] = 62194;
  v5[536862729] = -218103808;
  v5[536862730] = -202116109;
  if ( *(char *)(((v3 + 208) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 311) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 55) & 7) >= *(_BYTE *)(((v3 + 311) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 208, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 208), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 208)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 208));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 112) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 208));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 112), d, (const mysqlpp::ResultBase *)(v3 + 208), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 112)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          v11 = ((v3 + 32) >> 3) + 2147450880;
          *(_DWORD *)v11 = 0;
          *(_WORD *)(v11 + 4) = 0;
          data::t_mail_block_tag_config::t_mail_block_tag_config(
            (data::t_mail_block_tag_config *const)(v3 + 32),
            (const mysqlpp::Row *)(v3 + 112));
          std::vector<data::t_mail_block_tag_config>::push_back(
            con,
            (std::vector<data::t_mail_block_tag_config>::value_type *)(v3 + 32));
          data::t_mail_block_tag_config::~t_mail_block_tag_config((data::t_mail_block_tag_config *const)(v3 + 32));
          v12 = ((v3 + 32) >> 3) + 2147450880;
          *(_DWORD *)v12 = -117901064;
          *(_WORD *)(v12 + 4) = -1800;
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 112));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v13 = (_DWORD *)(((v3 + 112) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 208));
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = -168430091;
  }
};

// Line 754: range 000000000C8A5E40-000000000C8A62F0
void __cdecl mysqlpp::Query::storein_sequence<std::vector<data::t_mtp_blacklist_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_mtp_blacklist_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r14
  const unsigned __int64 *lengths; // rax
  int v10; // r14d
  _DWORD *v11; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-178h]
  char v14[368]; // [rsp+30h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 16 9 <unknown> 80 64 7 row:760 176 104 10 result:756";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<data::t_mtp_blacklist_config>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862728] = -218103808;
  v5[536862729] = -202116109;
  if ( *(char *)(((v3 + 176) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 279) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 23) & 7) >= *(_BYTE *)(((v3 + 279) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 176, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 176), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 176)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 176));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 80) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 176));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 80), d, (const mysqlpp::ResultBase *)(v3 + 176), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 80)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = 0;
          data::t_mtp_blacklist_config::t_mtp_blacklist_config(
            (data::t_mtp_blacklist_config *const)(v3 + 48),
            (const mysqlpp::Row *)(v3 + 80));
          std::vector<data::t_mtp_blacklist_config>::push_back(
            con,
            (std::vector<data::t_mtp_blacklist_config>::value_type *)(v3 + 48));
          *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = -1800;
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 80));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v11 = (_DWORD *)(((v3 + 80) >> 3) + 2147450880);
      *v11 = -117901064;
      v11[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 176));
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 754: range 000000000C8A688A-000000000C8A6D9A
void __cdecl mysqlpp::Query::storein_sequence<std::vector<data::t_mtp_whitelist_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_mtp_whitelist_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r14
  const unsigned __int64 *lengths; // rax
  int v10; // r14d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  _DWORD *v13; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-1B8h]
  char v16[432]; // [rsp+30h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 56 9 <unknown> 144 64 7 row:760 240 104 10 result:756";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<data::t_mtp_whitelist_config>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -218959360;
  v5[536862724] = 62194;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862730] = -218103808;
  v5[536862731] = -202116109;
  if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 343) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 87) & 7) >= *(_BYTE *)(((v3 + 343) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 240, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 240), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 240)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 240));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 144) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 240));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 144), d, (const mysqlpp::ResultBase *)(v3 + 240), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 144)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          v11 = ((v3 + 48) >> 3) + 2147450880;
          *(_DWORD *)v11 = 0;
          *(_WORD *)(v11 + 4) = 0;
          *(_BYTE *)(v11 + 6) = 0;
          data::t_mtp_whitelist_config::t_mtp_whitelist_config(
            (data::t_mtp_whitelist_config *const)(v3 + 48),
            (const mysqlpp::Row *)(v3 + 144));
          std::vector<data::t_mtp_whitelist_config>::push_back(
            con,
            (std::vector<data::t_mtp_whitelist_config>::value_type *)(v3 + 48));
          data::t_mtp_whitelist_config::~t_mtp_whitelist_config((data::t_mtp_whitelist_config *const)(v3 + 48));
          v12 = ((v3 + 48) >> 3) + 2147450880;
          *(_DWORD *)v12 = -117901064;
          *(_WORD *)(v12 + 4) = -1800;
          *(_BYTE *)(v12 + 6) = -8;
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 144));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v13 = (_DWORD *)(((v3 + 144) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 240));
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 754: range 000000000C8A8CFE-000000000C8A91FF
void __cdecl mysqlpp::Query::storein_sequence<std::vector<data::t_op_activity_schedule_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_op_activity_schedule_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r14
  const unsigned __int64 *lengths; // rax
  int v10; // r14d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  _DWORD *v13; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-1B8h]
  char v16[432]; // [rsp+30h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 64 7 row:760 128 80 9 <unknown> 240 104 10 result:756";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<data::t_op_activity_schedule_config>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862723] = -218959118;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862730] = -218103808;
  v5[536862731] = -202116109;
  if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 343) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 87) & 7) >= *(_BYTE *)(((v3 + 343) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 240, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 240), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 240)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 240));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 240));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 32), d, (const mysqlpp::ResultBase *)(v3 + 240), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 32)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          v11 = ((v3 + 128) >> 3) + 2147450880;
          *(_DWORD *)v11 = 0;
          *(_DWORD *)(v11 + 4) = 0;
          *(_WORD *)(v11 + 8) = 0;
          data::t_op_activity_schedule_config::t_op_activity_schedule_config(
            (data::t_op_activity_schedule_config *const)(v3 + 128),
            (const mysqlpp::Row *)(v3 + 32));
          std::vector<data::t_op_activity_schedule_config>::push_back(
            con,
            (std::vector<data::t_op_activity_schedule_config>::value_type *)(v3 + 128));
          data::t_op_activity_schedule_config::~t_op_activity_schedule_config((data::t_op_activity_schedule_config *const)(v3 + 128));
          v12 = ((v3 + 128) >> 3) + 2147450880;
          *(_DWORD *)v12 = -117901064;
          *(_DWORD *)(v12 + 4) = -117901064;
          *(_WORD *)(v12 + 8) = -1800;
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 32));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v13 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 240));
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 754: range 000000000C8AB4D8-000000000C8AB9D9
void __cdecl mysqlpp::Query::storein_sequence<std::vector<data::t_rebate_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_rebate_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r14
  const unsigned __int64 *lengths; // rax
  int v10; // r14d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  _DWORD *v13; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-1B8h]
  char v16[432]; // [rsp+30h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 64 7 row:760 128 80 9 <unknown> 240 104 10 result:756";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<data::t_rebate_config>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862723] = -218959118;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862730] = -218103808;
  v5[536862731] = -202116109;
  if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 343) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 87) & 7) >= *(_BYTE *)(((v3 + 343) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 240, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 240), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 240)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 240));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 240));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 32), d, (const mysqlpp::ResultBase *)(v3 + 240), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 32)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          v11 = ((v3 + 128) >> 3) + 2147450880;
          *(_DWORD *)v11 = 0;
          *(_DWORD *)(v11 + 4) = 0;
          *(_WORD *)(v11 + 8) = 0;
          data::t_rebate_config::t_rebate_config(
            (data::t_rebate_config *const)(v3 + 128),
            (const mysqlpp::Row *)(v3 + 32));
          std::vector<data::t_rebate_config>::push_back(
            con,
            (std::vector<data::t_rebate_config>::value_type *)(v3 + 128));
          data::t_rebate_config::~t_rebate_config((data::t_rebate_config *const)(v3 + 128));
          v12 = ((v3 + 128) >> 3) + 2147450880;
          *(_DWORD *)v12 = -117901064;
          *(_DWORD *)(v12 + 4) = -117901064;
          *(_WORD *)(v12 + 8) = -1800;
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 32));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v13 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 240));
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 754: range 000000000C8AC496-000000000C8AC9CA
void __cdecl mysqlpp::Query::storein_sequence<std::vector<data::t_red_point_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_red_point_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r14
  const unsigned __int64 *lengths; // rax
  int v10; // r14d
  _DWORD *v11; // rax
  _DWORD *v12; // rax
  _DWORD *v13; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-1D8h]
  char v16[464]; // [rsp+30h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 64 7 row:760 144 96 9 <unknown> 272 104 10 result:756";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<data::t_red_point_config>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -219021312;
  v5[536862724] = 62194;
  v5[536862727] = -219021312;
  v5[536862728] = 62194;
  v5[536862731] = -218103808;
  v5[536862732] = -202116109;
  if ( *(char *)(((v3 + 272) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 375) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 119) & 7) >= *(_BYTE *)(((v3 + 375) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 272, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 272), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 272)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 272));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 48) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 272));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 48), d, (const mysqlpp::ResultBase *)(v3 + 272), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 48)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          v11 = (_DWORD *)(((v3 + 144) >> 3) + 2147450880);
          *v11 = 0;
          v11[1] = 0;
          v11[2] = 0;
          data::t_red_point_config::t_red_point_config(
            (data::t_red_point_config *const)(v3 + 144),
            (const mysqlpp::Row *)(v3 + 48));
          std::vector<data::t_red_point_config>::push_back(
            con,
            (std::vector<data::t_red_point_config>::value_type *)(v3 + 144));
          data::t_red_point_config::~t_red_point_config((data::t_red_point_config *const)(v3 + 144));
          v12 = (_DWORD *)(((v3 + 144) >> 3) + 2147450880);
          *v12 = -117901064;
          v12[1] = -117901064;
          v12[2] = -117901064;
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 48));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v13 = (_DWORD *)(((v3 + 48) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 272));
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = -168430091;
  }
};

// Line 754: range 000000000C8AE80A-000000000C8AED05
void __cdecl mysqlpp::Query::storein_sequence<std::vector<data::t_register_black_ip_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_register_black_ip_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r14
  const unsigned __int64 *lengths; // rax
  int v10; // r14d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  _DWORD *v13; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-1B8h]
  char v16[432]; // [rsp+30h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 64 7 row:760 128 72 9 <unknown> 240 104 10 result:756";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<data::t_register_black_ip_config>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862723] = -218959118;
  v5[536862726] = -218959360;
  v5[536862727] = 62194;
  v5[536862730] = -218103808;
  v5[536862731] = -202116109;
  if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 343) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 87) & 7) >= *(_BYTE *)(((v3 + 343) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 240, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 240), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 240)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 240));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 240));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 32), d, (const mysqlpp::ResultBase *)(v3 + 240), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 32)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          v11 = ((v3 + 128) >> 3) + 2147450880;
          *(_DWORD *)v11 = 0;
          *(_DWORD *)(v11 + 4) = 0;
          *(_BYTE *)(v11 + 8) = 0;
          data::t_register_black_ip_config::t_register_black_ip_config(
            (data::t_register_black_ip_config *const)(v3 + 128),
            (const mysqlpp::Row *)(v3 + 32));
          std::vector<data::t_register_black_ip_config>::push_back(
            con,
            (std::vector<data::t_register_black_ip_config>::value_type *)(v3 + 128));
          data::t_register_black_ip_config::~t_register_black_ip_config((data::t_register_black_ip_config *const)(v3 + 128));
          v12 = ((v3 + 128) >> 3) + 2147450880;
          *(_DWORD *)v12 = -117901064;
          *(_DWORD *)(v12 + 4) = -117901064;
          *(_BYTE *)(v12 + 8) = -8;
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 32));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v13 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 240));
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 754: range 000000000C8AF474-000000000C8AF98A
void __cdecl mysqlpp::Query::storein_sequence<std::vector<data::t_security_library_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_security_library_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r14
  const unsigned __int64 *lengths; // rax
  int v10; // r14d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  _DWORD *v13; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-1D8h]
  char v16[464]; // [rsp+30h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 64 7 row:760 128 104 10 result:756 272 112 9 <unknown>";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<data::t_security_library_config>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862723] = -218959118;
  v5[536862727] = -218959360;
  v5[536862728] = 62194;
  v5[536862732] = -202116109;
  if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 231) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 25) & 7) >= *(_BYTE *)(((v3 + 231) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 128, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 128), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 128)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 128));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 128));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 32), d, (const mysqlpp::ResultBase *)(v3 + 128), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 32)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          v11 = ((v3 + 272) >> 3) + 2147450880;
          *(_DWORD *)v11 = 0;
          *(_DWORD *)(v11 + 4) = 0;
          *(_DWORD *)(v11 + 8) = 0;
          *(_WORD *)(v11 + 12) = 0;
          data::t_security_library_config::t_security_library_config(
            (data::t_security_library_config *const)(v3 + 272),
            (const mysqlpp::Row *)(v3 + 32));
          std::vector<data::t_security_library_config>::push_back(
            con,
            (std::vector<data::t_security_library_config>::value_type *)(v3 + 272));
          data::t_security_library_config::~t_security_library_config((data::t_security_library_config *const)(v3 + 272));
          v12 = ((v3 + 272) >> 3) + 2147450880;
          *(_DWORD *)v12 = -117901064;
          *(_DWORD *)(v12 + 4) = -117901064;
          *(_DWORD *)(v12 + 8) = -117901064;
          *(_WORD *)(v12 + 12) = -1800;
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 32));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v13 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 128));
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = -168430091;
  }
};

// Line 754: range 000000000C8B04D0-000000000C8B09D1
void __cdecl mysqlpp::Query::storein_sequence<std::vector<data::t_sign_in_schedule_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_sign_in_schedule_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r14
  const unsigned __int64 *lengths; // rax
  int v10; // r14d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  _DWORD *v13; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-1B8h]
  char v16[432]; // [rsp+30h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 64 7 row:760 128 80 9 <unknown> 240 104 10 result:756";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<data::t_sign_in_schedule_config>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862723] = -218959118;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862730] = -218103808;
  v5[536862731] = -202116109;
  if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 343) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 87) & 7) >= *(_BYTE *)(((v3 + 343) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 240, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 240), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 240)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 240));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 240));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 32), d, (const mysqlpp::ResultBase *)(v3 + 240), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 32)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          v11 = ((v3 + 128) >> 3) + 2147450880;
          *(_DWORD *)v11 = 0;
          *(_DWORD *)(v11 + 4) = 0;
          *(_WORD *)(v11 + 8) = 0;
          data::t_sign_in_schedule_config::t_sign_in_schedule_config(
            (data::t_sign_in_schedule_config *const)(v3 + 128),
            (const mysqlpp::Row *)(v3 + 32));
          std::vector<data::t_sign_in_schedule_config>::push_back(
            con,
            (std::vector<data::t_sign_in_schedule_config>::value_type *)(v3 + 128));
          data::t_sign_in_schedule_config::~t_sign_in_schedule_config((data::t_sign_in_schedule_config *const)(v3 + 128));
          v12 = ((v3 + 128) >> 3) + 2147450880;
          *(_DWORD *)v12 = -117901064;
          *(_DWORD *)(v12 + 4) = -117901064;
          *(_WORD *)(v12 + 8) = -1800;
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 32));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v13 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 240));
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 754: range 000000000C8B1472-000000000C8B196F
void __cdecl mysqlpp::Query::storein_sequence<std::vector<data::t_stop_server_login_white_ip_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_stop_server_login_white_ip_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r14
  const unsigned __int64 *lengths; // rax
  int v10; // r14d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  _DWORD *v13; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-198h]
  char v16[400]; // [rsp+30h] [rbp-190h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 40 9 <unknown> 112 64 7 row:760 208 104 10 result:756";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<data::t_stop_server_login_white_ip_config>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959360;
  v5[536862723] = 62194;
  v5[536862725] = -219021312;
  v5[536862726] = 62194;
  v5[536862729] = -218103808;
  v5[536862730] = -202116109;
  if ( *(char *)(((v3 + 208) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 311) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 55) & 7) >= *(_BYTE *)(((v3 + 311) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 208, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 208), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 208)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 208));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 112) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 208));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 112), d, (const mysqlpp::ResultBase *)(v3 + 208), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 112)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          v11 = ((v3 + 32) >> 3) + 2147450880;
          *(_DWORD *)v11 = 0;
          *(_BYTE *)(v11 + 4) = 0;
          data::t_stop_server_login_white_ip_config::t_stop_server_login_white_ip_config(
            (data::t_stop_server_login_white_ip_config *const)(v3 + 32),
            (const mysqlpp::Row *)(v3 + 112));
          std::vector<data::t_stop_server_login_white_ip_config>::push_back(
            con,
            (std::vector<data::t_stop_server_login_white_ip_config>::value_type *)(v3 + 32));
          data::t_stop_server_login_white_ip_config::~t_stop_server_login_white_ip_config((data::t_stop_server_login_white_ip_config *const)(v3 + 32));
          v12 = ((v3 + 32) >> 3) + 2147450880;
          *(_DWORD *)v12 = -117901064;
          *(_BYTE *)(v12 + 4) = -8;
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 112));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v13 = (_DWORD *)(((v3 + 112) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 208));
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = -168430091;
  }
};

// Line 754: range 000000000C89F218-000000000C89F745
void __cdecl mysqlpp::Query::storein_sequence<std::vector<t_announce_config>>(
        mysqlpp::Query *const this,
        std::vector<t_announce_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r14
  const unsigned __int64 *lengths; // rax
  int v10; // r14d
  _DWORD *v11; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-2B8h]
  char v14[688]; // [rsp+30h] [rbp-2B0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(640LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 64 7 row:760 128 104 10 result:756 272 296 9 <unknown>";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<t_announce_config>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862723] = -218959118;
  v5[536862727] = -218959360;
  v5[536862728] = 62194;
  v5[536862737] = -218103808;
  v5[536862738] = -202116109;
  v5[536862739] = -202116109;
  if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 231) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 25) & 7) >= *(_BYTE *)(((v3 + 231) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 128, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 128), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 128)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 128));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 128));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 32), d, (const mysqlpp::ResultBase *)(v3 + 128), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 32)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          __asan_unpoison_stack_memory(v3 + 272, 296LL);
          t_announce_config::t_announce_config((t_announce_config *const)(v3 + 272), (const mysqlpp::Row *)(v3 + 32));
          std::vector<t_announce_config>::push_back(con, (std::vector<t_announce_config>::value_type *)(v3 + 272));
          t_announce_config::~t_announce_config((t_announce_config *const)(v3 + 272));
          __asan_poison_stack_memory(v3 + 272, 296LL);
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 32));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v11 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
      *v11 = -117901064;
      v11[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 128));
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8044) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF804C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 754: range 000000000C88A726-000000000C88AC3C
void __cdecl mysqlpp::Query::storein_sequence<std::vector<t_anti_cheat_client_channel_id_config>>(
        mysqlpp::Query *const this,
        std::vector<t_anti_cheat_client_channel_id_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r14
  const unsigned __int64 *lengths; // rax
  int v10; // r14d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  _DWORD *v13; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-1D8h]
  char v16[464]; // [rsp+30h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 64 7 row:760 128 104 10 result:756 272 112 9 <unknown>";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<t_anti_cheat_client_channel_id_config>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862723] = -218959118;
  v5[536862727] = -218959360;
  v5[536862728] = 62194;
  v5[536862732] = -202116109;
  if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 231) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 25) & 7) >= *(_BYTE *)(((v3 + 231) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 128, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 128), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 128)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 128));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 128));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 32), d, (const mysqlpp::ResultBase *)(v3 + 128), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 32)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          v11 = ((v3 + 272) >> 3) + 2147450880;
          *(_DWORD *)v11 = 0;
          *(_DWORD *)(v11 + 4) = 0;
          *(_DWORD *)(v11 + 8) = 0;
          *(_WORD *)(v11 + 12) = 0;
          t_anti_cheat_client_channel_id_config::t_anti_cheat_client_channel_id_config(
            (t_anti_cheat_client_channel_id_config *const)(v3 + 272),
            (const mysqlpp::Row *)(v3 + 32));
          std::vector<t_anti_cheat_client_channel_id_config>::push_back(
            con,
            (std::vector<t_anti_cheat_client_channel_id_config>::value_type *)(v3 + 272));
          t_anti_cheat_client_channel_id_config::~t_anti_cheat_client_channel_id_config((t_anti_cheat_client_channel_id_config *const)(v3 + 272));
          v12 = ((v3 + 272) >> 3) + 2147450880;
          *(_DWORD *)v12 = -117901064;
          *(_DWORD *)(v12 + 4) = -117901064;
          *(_DWORD *)(v12 + 8) = -117901064;
          *(_WORD *)(v12 + 12) = -1800;
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 32));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v13 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 128));
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = -168430091;
  }
};

// Line 754: range 000000000C884BC2-000000000C8850DE
void __cdecl mysqlpp::Query::storein_sequence<std::vector<t_area_config>>(
        mysqlpp::Query *const this,
        std::vector<t_area_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r14
  const unsigned __int64 *lengths; // rax
  int v10; // r14d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  _DWORD *v13; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-1D8h]
  char v16[464]; // [rsp+30h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 64 7 row:760 128 104 10 result:756 272 104 9 <unknown>";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<t_area_config>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862723] = -218959118;
  v5[536862727] = -218959360;
  v5[536862728] = 62194;
  v5[536862731] = -218103808;
  v5[536862732] = -202116109;
  if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 231) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 25) & 7) >= *(_BYTE *)(((v3 + 231) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 128, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 128), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 128)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 128));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 128));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 32), d, (const mysqlpp::ResultBase *)(v3 + 128), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 32)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          v11 = ((v3 + 272) >> 3) + 2147450880;
          *(_DWORD *)v11 = 0;
          *(_DWORD *)(v11 + 4) = 0;
          *(_DWORD *)(v11 + 8) = 0;
          *(_BYTE *)(v11 + 12) = 0;
          t_area_config::t_area_config((t_area_config *const)(v3 + 272), (const mysqlpp::Row *)(v3 + 32));
          std::vector<t_area_config>::push_back(con, (std::vector<t_area_config>::value_type *)(v3 + 272));
          t_area_config::~t_area_config((t_area_config *const)(v3 + 272));
          v12 = ((v3 + 272) >> 3) + 2147450880;
          *(_DWORD *)v12 = -117901064;
          *(_DWORD *)(v12 + 4) = -117901064;
          *(_DWORD *)(v12 + 8) = -117901064;
          *(_BYTE *)(v12 + 12) = -8;
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 32));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v13 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 128));
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = -168430091;
  }
};

// Line 754: range 000000000C8860EC-000000000C8865F2
void __cdecl mysqlpp::Query::storein_sequence<std::vector<t_authkey_config>>(
        mysqlpp::Query *const this,
        std::vector<t_authkey_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r14
  const unsigned __int64 *lengths; // rax
  int v10; // r14d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  _DWORD *v13; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-198h]
  char v16[400]; // [rsp+30h] [rbp-190h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 48 9 <unknown> 112 64 7 row:760 208 104 10 result:756";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<t_authkey_config>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -219021312;
  v5[536862723] = 62194;
  v5[536862725] = -219021312;
  v5[536862726] = 62194;
  v5[536862729] = -218103808;
  v5[536862730] = -202116109;
  if ( *(char *)(((v3 + 208) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 311) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 55) & 7) >= *(_BYTE *)(((v3 + 311) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 208, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 208), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 208)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 208));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 112) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 208));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 112), d, (const mysqlpp::ResultBase *)(v3 + 208), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 112)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          v11 = ((v3 + 32) >> 3) + 2147450880;
          *(_DWORD *)v11 = 0;
          *(_WORD *)(v11 + 4) = 0;
          t_authkey_config::t_authkey_config((t_authkey_config *const)(v3 + 32), (const mysqlpp::Row *)(v3 + 112));
          std::vector<t_authkey_config>::push_back(con, (std::vector<t_authkey_config>::value_type *)(v3 + 32));
          t_authkey_config::~t_authkey_config((t_authkey_config *const)(v3 + 32));
          v12 = ((v3 + 32) >> 3) + 2147450880;
          *(_DWORD *)v12 = -117901064;
          *(_WORD *)(v12 + 4) = -1800;
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 112));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v13 = (_DWORD *)(((v3 + 112) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 208));
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = -168430091;
  }
};

// Line 754: range 000000000C88283A-000000000C882D50
void __cdecl mysqlpp::Query::storein_sequence<std::vector<t_bind_config>>(
        mysqlpp::Query *const this,
        std::vector<t_bind_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r14
  const unsigned __int64 *lengths; // rax
  int v10; // r14d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  _DWORD *v13; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-1D8h]
  char v16[464]; // [rsp+30h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 64 7 row:760 128 104 10 result:756 272 112 9 <unknown>";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<t_bind_config>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862723] = -218959118;
  v5[536862727] = -218959360;
  v5[536862728] = 62194;
  v5[536862732] = -202116109;
  if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 231) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 25) & 7) >= *(_BYTE *)(((v3 + 231) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 128, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 128), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 128)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 128));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 128));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 32), d, (const mysqlpp::ResultBase *)(v3 + 128), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 32)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          v11 = ((v3 + 272) >> 3) + 2147450880;
          *(_DWORD *)v11 = 0;
          *(_DWORD *)(v11 + 4) = 0;
          *(_DWORD *)(v11 + 8) = 0;
          *(_WORD *)(v11 + 12) = 0;
          t_bind_config::t_bind_config((t_bind_config *const)(v3 + 272), (const mysqlpp::Row *)(v3 + 32));
          std::vector<t_bind_config>::push_back(con, (std::vector<t_bind_config>::value_type *)(v3 + 272));
          t_bind_config::~t_bind_config((t_bind_config *const)(v3 + 272));
          v12 = ((v3 + 272) >> 3) + 2147450880;
          *(_DWORD *)v12 = -117901064;
          *(_DWORD *)(v12 + 4) = -117901064;
          *(_DWORD *)(v12 + 8) = -117901064;
          *(_WORD *)(v12 + 12) = -1800;
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 32));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v13 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 128));
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = -168430091;
  }
};

// Line 754: range 000000000C8897EA-000000000C889C9A
void __cdecl mysqlpp::Query::storein_sequence<std::vector<t_channel_id_config>>(
        mysqlpp::Query *const this,
        std::vector<t_channel_id_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r14
  const unsigned __int64 *lengths; // rax
  int v10; // r14d
  _DWORD *v11; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-178h]
  char v14[368]; // [rsp+30h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 16 9 <unknown> 80 64 7 row:760 176 104 10 result:756";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<t_channel_id_config>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862728] = -218103808;
  v5[536862729] = -202116109;
  if ( *(char *)(((v3 + 176) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 279) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 23) & 7) >= *(_BYTE *)(((v3 + 279) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 176, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 176), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 176)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 176));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 80) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 176));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 80), d, (const mysqlpp::ResultBase *)(v3 + 176), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 80)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = 0;
          t_channel_id_config::t_channel_id_config(
            (t_channel_id_config *const)(v3 + 48),
            (const mysqlpp::Row *)(v3 + 80));
          std::vector<t_channel_id_config>::push_back(con, (std::vector<t_channel_id_config>::value_type *)(v3 + 48));
          *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = -1800;
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 80));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v11 = (_DWORD *)(((v3 + 80) >> 3) + 2147450880);
      *v11 = -117901064;
      v11[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 176));
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 754: range 000000000C88B6C8-000000000C88BBDE
void __cdecl mysqlpp::Query::storein_sequence<std::vector<t_client_channel_id_config>>(
        mysqlpp::Query *const this,
        std::vector<t_client_channel_id_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r14
  const unsigned __int64 *lengths; // rax
  int v10; // r14d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  _DWORD *v13; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-1D8h]
  char v16[464]; // [rsp+30h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 64 7 row:760 128 104 10 result:756 272 112 9 <unknown>";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<t_client_channel_id_config>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862723] = -218959118;
  v5[536862727] = -218959360;
  v5[536862728] = 62194;
  v5[536862732] = -202116109;
  if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 231) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 25) & 7) >= *(_BYTE *)(((v3 + 231) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 128, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 128), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 128)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 128));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 128));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 32), d, (const mysqlpp::ResultBase *)(v3 + 128), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 32)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          v11 = ((v3 + 272) >> 3) + 2147450880;
          *(_DWORD *)v11 = 0;
          *(_DWORD *)(v11 + 4) = 0;
          *(_DWORD *)(v11 + 8) = 0;
          *(_WORD *)(v11 + 12) = 0;
          t_client_channel_id_config::t_client_channel_id_config(
            (t_client_channel_id_config *const)(v3 + 272),
            (const mysqlpp::Row *)(v3 + 32));
          std::vector<t_client_channel_id_config>::push_back(
            con,
            (std::vector<t_client_channel_id_config>::value_type *)(v3 + 272));
          t_client_channel_id_config::~t_client_channel_id_config((t_client_channel_id_config *const)(v3 + 272));
          v12 = ((v3 + 272) >> 3) + 2147450880;
          *(_DWORD *)v12 = -117901064;
          *(_DWORD *)(v12 + 4) = -117901064;
          *(_DWORD *)(v12 + 8) = -117901064;
          *(_WORD *)(v12 + 12) = -1800;
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 32));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v13 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 128));
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = -168430091;
  }
};

// Line 754: range 000000000C87FE82-000000000C8803EA
void __cdecl mysqlpp::Query::storein_sequence<std::vector<t_client_config>>(
        mysqlpp::Query *const this,
        std::vector<t_client_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r14
  const unsigned __int64 *lengths; // rax
  int v10; // r14d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  _DWORD *v13; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-238h]
  char v16[560]; // [rsp+30h] [rbp-230h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(512LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 64 7 row:760 128 104 10 result:756 272 176 9 <unknown>";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<t_client_config>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862723] = -218959118;
  v5[536862727] = -218959360;
  v5[536862728] = 62194;
  v5[536862734] = -202116109;
  v5[536862735] = -202116109;
  if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 231) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 25) & 7) >= *(_BYTE *)(((v3 + 231) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 128, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 128), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 128)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 128));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 128));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 32), d, (const mysqlpp::ResultBase *)(v3 + 128), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 32)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          v11 = ((v3 + 272) >> 3) + 2147450880;
          *(_DWORD *)v11 = 0;
          *(_DWORD *)(v11 + 4) = 0;
          *(_DWORD *)(v11 + 8) = 0;
          *(_DWORD *)(v11 + 12) = 0;
          *(_DWORD *)(v11 + 16) = 0;
          *(_WORD *)(v11 + 20) = 0;
          t_client_config::t_client_config((t_client_config *const)(v3 + 272), (const mysqlpp::Row *)(v3 + 32));
          std::vector<t_client_config>::push_back(con, (std::vector<t_client_config>::value_type *)(v3 + 272));
          t_client_config::~t_client_config((t_client_config *const)(v3 + 272));
          v12 = ((v3 + 272) >> 3) + 2147450880;
          *(_DWORD *)v12 = -117901064;
          *(_DWORD *)(v12 + 4) = -117901064;
          *(_DWORD *)(v12 + 8) = -117901064;
          *(_DWORD *)(v12 + 12) = -117901064;
          *(_DWORD *)(v12 + 16) = -117901064;
          *(_WORD *)(v12 + 20) = -1800;
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 32));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v13 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 128));
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF803C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 754: range 000000000C881328-000000000C88183E
void __cdecl mysqlpp::Query::storein_sequence<std::vector<t_client_region_config>>(
        mysqlpp::Query *const this,
        std::vector<t_client_region_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r14
  const unsigned __int64 *lengths; // rax
  int v10; // r14d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  _DWORD *v13; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-1D8h]
  char v16[464]; // [rsp+30h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 64 7 row:760 128 104 10 result:756 272 112 9 <unknown>";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<t_client_region_config>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862723] = -218959118;
  v5[536862727] = -218959360;
  v5[536862728] = 62194;
  v5[536862732] = -202116109;
  if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 231) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 25) & 7) >= *(_BYTE *)(((v3 + 231) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 128, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 128), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 128)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 128));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 128));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 32), d, (const mysqlpp::ResultBase *)(v3 + 128), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 32)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          v11 = ((v3 + 272) >> 3) + 2147450880;
          *(_DWORD *)v11 = 0;
          *(_DWORD *)(v11 + 4) = 0;
          *(_DWORD *)(v11 + 8) = 0;
          *(_WORD *)(v11 + 12) = 0;
          t_client_region_config::t_client_region_config(
            (t_client_region_config *const)(v3 + 272),
            (const mysqlpp::Row *)(v3 + 32));
          std::vector<t_client_region_config>::push_back(
            con,
            (std::vector<t_client_region_config>::value_type *)(v3 + 272));
          t_client_region_config::~t_client_region_config((t_client_region_config *const)(v3 + 272));
          v12 = ((v3 + 272) >> 3) + 2147450880;
          *(_DWORD *)v12 = -117901064;
          *(_DWORD *)(v12 + 4) = -117901064;
          *(_DWORD *)(v12 + 8) = -117901064;
          *(_WORD *)(v12 + 12) = -1800;
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 32));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v13 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 128));
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = -168430091;
  }
};

// Line 754: range 000000000C88408C-000000000C8845BD
void __cdecl mysqlpp::Query::storein_sequence<std::vector<t_deploy_textmap_config>>(
        mysqlpp::Query *const this,
        std::vector<t_deploy_textmap_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r14
  const unsigned __int64 *lengths; // rax
  int v10; // r14d
  _DWORD *v11; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-378h]
  char v14[880]; // [rsp+30h] [rbp-370h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(832LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 64 7 row:760 128 104 10 result:756 272 496 9 <unknown>";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<t_deploy_textmap_config>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862723] = -218959118;
  v5[536862727] = -218959360;
  v5[536862728] = 62194;
  v5[536862744] = -202116109;
  v5[536862745] = -202116109;
  if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 231) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 25) & 7) >= *(_BYTE *)(((v3 + 231) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 128, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 128), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 128)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 128));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 128));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 32), d, (const mysqlpp::ResultBase *)(v3 + 128), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 32)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          __asan_unpoison_stack_memory(v3 + 272, 496LL);
          t_deploy_textmap_config::t_deploy_textmap_config(
            (t_deploy_textmap_config *const)(v3 + 272),
            (const mysqlpp::Row *)(v3 + 32));
          std::vector<t_deploy_textmap_config>::push_back(
            con,
            (std::vector<t_deploy_textmap_config>::value_type *)(v3 + 272));
          t_deploy_textmap_config::~t_deploy_textmap_config((t_deploy_textmap_config *const)(v3 + 272));
          __asan_poison_stack_memory(v3 + 272, 496LL);
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 32));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v11 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
      *v11 = -117901064;
      v11[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 128));
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862729) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450908 - (((_DWORD)v5 + 2147450916) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 754: range 000000000C89BAEA-000000000C89C045
void __cdecl mysqlpp::Query::storein_sequence<std::vector<t_inject_fix_config>>(
        mysqlpp::Query *const this,
        std::vector<t_inject_fix_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r14
  const unsigned __int64 *lengths; // rax
  int v10; // r14d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  _DWORD *v13; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-218h]
  char v16[528]; // [rsp+30h] [rbp-210h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(480LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 64 7 row:760 128 104 10 result:756 272 136 9 <unknown>";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<t_inject_fix_config>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862723] = -218959118;
  v5[536862727] = -218959360;
  v5[536862728] = 62194;
  v5[536862732] = -218103808;
  v5[536862733] = -202116109;
  v5[536862734] = -202116109;
  if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 231) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 25) & 7) >= *(_BYTE *)(((v3 + 231) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 128, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 128), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 128)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 128));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 128));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 32), d, (const mysqlpp::ResultBase *)(v3 + 128), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 32)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          v11 = ((v3 + 272) >> 3) + 2147450880;
          *(_DWORD *)v11 = 0;
          *(_DWORD *)(v11 + 4) = 0;
          *(_DWORD *)(v11 + 8) = 0;
          *(_DWORD *)(v11 + 12) = 0;
          *(_BYTE *)(v11 + 16) = 0;
          t_inject_fix_config::t_inject_fix_config(
            (t_inject_fix_config *const)(v3 + 272),
            (const mysqlpp::Row *)(v3 + 32));
          std::vector<t_inject_fix_config>::push_back(con, (std::vector<t_inject_fix_config>::value_type *)(v3 + 272));
          t_inject_fix_config::~t_inject_fix_config((t_inject_fix_config *const)(v3 + 272));
          v12 = ((v3 + 272) >> 3) + 2147450880;
          *(_DWORD *)v12 = -117901064;
          *(_DWORD *)(v12 + 4) = -117901064;
          *(_DWORD *)(v12 + 8) = -117901064;
          *(_DWORD *)(v12 + 12) = -117901064;
          *(_BYTE *)(v12 + 16) = -8;
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 32));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v13 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 128));
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = -168430091;
  }
};

// Line 754: range 000000000C89E1E0-000000000C89E731
void __cdecl mysqlpp::Query::storein_sequence<std::vector<t_login_reward_config>>(
        mysqlpp::Query *const this,
        std::vector<t_login_reward_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r14
  const unsigned __int64 *lengths; // rax
  int v10; // r14d
  _DWORD *v11; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-2D8h]
  char v14[720]; // [rsp+30h] [rbp-2D0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(672LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 64 7 row:760 144 104 10 result:756 288 320 9 <unknown>";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<t_login_reward_config>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -219021312;
  v5[536862724] = 62194;
  v5[536862727] = -234881024;
  v5[536862728] = -218959118;
  v5[536862739] = -202116109;
  v5[536862740] = -202116109;
  if ( *(char *)(((v3 + 144) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 247) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 9) & 7) >= *(_BYTE *)(((v3 + 247) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 144, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 144), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 144)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 144));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 48) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 144));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 48), d, (const mysqlpp::ResultBase *)(v3 + 144), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 48)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          __asan_unpoison_stack_memory(v3 + 288, 320LL);
          t_login_reward_config::t_login_reward_config(
            (t_login_reward_config *const)(v3 + 288),
            (const mysqlpp::Row *)(v3 + 48));
          std::vector<t_login_reward_config>::push_back(
            con,
            (std::vector<t_login_reward_config>::value_type *)(v3 + 288));
          t_login_reward_config::~t_login_reward_config((t_login_reward_config *const)(v3 + 288));
          __asan_poison_stack_memory(v3 + 288, 320LL);
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 48));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v11 = (_DWORD *)(((v3 + 48) >> 3) + 2147450880);
      *v11 = -117901064;
      v11[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 144));
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8044) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF804C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8050) = -168430091;
  }
};

// Line 754: range 000000000C883418-000000000C883913
void __cdecl mysqlpp::Query::storein_sequence<std::vector<t_login_white_ip_config>>(
        mysqlpp::Query *const this,
        std::vector<t_login_white_ip_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r14
  const unsigned __int64 *lengths; // rax
  int v10; // r14d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  _DWORD *v13; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-1B8h]
  char v16[432]; // [rsp+30h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 64 7 row:760 128 72 9 <unknown> 240 104 10 result:756";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<t_login_white_ip_config>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862723] = -218959118;
  v5[536862726] = -218959360;
  v5[536862727] = 62194;
  v5[536862730] = -218103808;
  v5[536862731] = -202116109;
  if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 343) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 87) & 7) >= *(_BYTE *)(((v3 + 343) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 240, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 240), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 240)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 240));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 240));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 32), d, (const mysqlpp::ResultBase *)(v3 + 240), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 32)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          v11 = ((v3 + 128) >> 3) + 2147450880;
          *(_DWORD *)v11 = 0;
          *(_DWORD *)(v11 + 4) = 0;
          *(_BYTE *)(v11 + 8) = 0;
          t_login_white_ip_config::t_login_white_ip_config(
            (t_login_white_ip_config *const)(v3 + 128),
            (const mysqlpp::Row *)(v3 + 32));
          std::vector<t_login_white_ip_config>::push_back(
            con,
            (std::vector<t_login_white_ip_config>::value_type *)(v3 + 128));
          t_login_white_ip_config::~t_login_white_ip_config((t_login_white_ip_config *const)(v3 + 128));
          v12 = ((v3 + 128) >> 3) + 2147450880;
          *(_DWORD *)v12 = -117901064;
          *(_DWORD *)(v12 + 4) = -117901064;
          *(_BYTE *)(v12 + 8) = -8;
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 32));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v13 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 240));
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 754: range 000000000C89FB82-000000000C8A0132
void __cdecl mysqlpp::Query::storein_sequence<std::vector<t_questionnaire_mail_config>>(
        mysqlpp::Query *const this,
        std::vector<t_questionnaire_mail_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r14
  const unsigned __int64 *lengths; // rax
  int v10; // r14d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  _DWORD *v13; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-278h]
  char v16[624]; // [rsp+30h] [rbp-270h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(576LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 64 7 row:760 128 104 10 result:756 272 240 9 <unknown>";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<t_questionnaire_mail_config>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862723] = -218959118;
  v5[536862727] = -218959360;
  v5[536862728] = 62194;
  v5[536862736] = -202116109;
  v5[536862737] = -202116109;
  if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 231) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 25) & 7) >= *(_BYTE *)(((v3 + 231) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 128, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 128), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 128)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 128));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 128));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 32), d, (const mysqlpp::ResultBase *)(v3 + 128), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 32)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          v11 = ((v3 + 272) >> 3) + 2147450880;
          *(_DWORD *)v11 = 0;
          *(_DWORD *)(v11 + 4) = 0;
          *(_DWORD *)(v11 + 8) = 0;
          *(_DWORD *)(v11 + 12) = 0;
          *(_DWORD *)(v11 + 16) = 0;
          *(_DWORD *)(v11 + 20) = 0;
          *(_DWORD *)(v11 + 24) = 0;
          *(_WORD *)(v11 + 28) = 0;
          t_questionnaire_mail_config::t_questionnaire_mail_config(
            (t_questionnaire_mail_config *const)(v3 + 272),
            (const mysqlpp::Row *)(v3 + 32));
          std::vector<t_questionnaire_mail_config>::push_back(
            con,
            (std::vector<t_questionnaire_mail_config>::value_type *)(v3 + 272));
          t_questionnaire_mail_config::~t_questionnaire_mail_config((t_questionnaire_mail_config *const)(v3 + 272));
          v12 = ((v3 + 272) >> 3) + 2147450880;
          *(_DWORD *)v12 = -117901064;
          *(_DWORD *)(v12 + 4) = -117901064;
          *(_DWORD *)(v12 + 8) = -117901064;
          *(_DWORD *)(v12 + 12) = -117901064;
          *(_DWORD *)(v12 + 16) = -117901064;
          *(_DWORD *)(v12 + 20) = -117901064;
          *(_DWORD *)(v12 + 24) = -117901064;
          *(_WORD *)(v12 + 28) = -1800;
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 32));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v13 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 128));
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 754: range 000000000C87E714-000000000C87EC17
void __cdecl mysqlpp::Query::storein_sequence<std::vector<t_region_config>>(
        mysqlpp::Query *const this,
        std::vector<t_region_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r15
  const unsigned __int64 *lengths; // rax
  int v10; // r15d
  _DWORD *v11; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-598h]
  char v14[1424]; // [rsp+30h] [rbp-590h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1376LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 64 7 row:760 144 104 10 result:756 288 952 9 <unknown>";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<t_region_config>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -219021312;
  v5[536862724] = 62194;
  v5[536862727] = -234881024;
  v5[536862728] = -218959118;
  v5[536862758] = -218103808;
  v5[536862759] = -202116109;
  v5[536862760] = -202116109;
  v5[536862761] = -202116109;
  v5[536862762] = -202116109;
  if ( *(char *)(((v3 + 144) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 247) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 9) & 7) >= *(_BYTE *)(((v3 + 247) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 144, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 144), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 144)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 144));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 48) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 144));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 48), d, (const mysqlpp::ResultBase *)(v3 + 144), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 48)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          __asan_unpoison_stack_memory(v3 + 288, 952LL);
          t_region_config::t_region_config((t_region_config *const)(v3 + 288), (const mysqlpp::Row *)(v3 + 48));
          std::vector<t_region_config>::push_back(con, (std::vector<t_region_config>::value_type *)(v3 + 288));
          t_region_config::~t_region_config((t_region_config *const)(v3 + 288));
          __asan_poison_stack_memory(v3 + 288, 952LL);
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 48));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v11 = (_DWORD *)(((v3 + 48) >> 3) + 2147450880);
      *v11 = -117901064;
      v11[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 144));
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80A4) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862729) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450908 - (((_DWORD)v5 + 2147450916) & 0xFFFFFFF8) + 144) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1376LL, v14);
  }
};

// Line 754: range 000000000C887610-000000000C887B11
void __cdecl mysqlpp::Query::storein_sequence<std::vector<t_rsakey_config>>(
        mysqlpp::Query *const this,
        std::vector<t_rsakey_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r14
  const unsigned __int64 *lengths; // rax
  int v10; // r14d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  _DWORD *v13; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-1B8h]
  char v16[432]; // [rsp+30h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 64 7 row:760 128 80 9 <unknown> 240 104 10 result:756";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<t_rsakey_config>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862723] = -218959118;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862730] = -218103808;
  v5[536862731] = -202116109;
  if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 343) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 87) & 7) >= *(_BYTE *)(((v3 + 343) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 240, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 240), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 240)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 240));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 240));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 32), d, (const mysqlpp::ResultBase *)(v3 + 240), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 32)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          v11 = ((v3 + 128) >> 3) + 2147450880;
          *(_DWORD *)v11 = 0;
          *(_DWORD *)(v11 + 4) = 0;
          *(_WORD *)(v11 + 8) = 0;
          t_rsakey_config::t_rsakey_config((t_rsakey_config *const)(v3 + 128), (const mysqlpp::Row *)(v3 + 32));
          std::vector<t_rsakey_config>::push_back(con, (std::vector<t_rsakey_config>::value_type *)(v3 + 128));
          t_rsakey_config::~t_rsakey_config((t_rsakey_config *const)(v3 + 128));
          v12 = ((v3 + 128) >> 3) + 2147450880;
          *(_DWORD *)v12 = -117901064;
          *(_DWORD *)(v12 + 4) = -117901064;
          *(_WORD *)(v12 + 8) = -1800;
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 32));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v13 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 240));
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 754: range 000000000C888884-000000000C888D9A
void __cdecl mysqlpp::Query::storein_sequence<std::vector<t_sdk_config>>(
        mysqlpp::Query *const this,
        std::vector<t_sdk_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r14
  const unsigned __int64 *lengths; // rax
  int v10; // r14d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  _DWORD *v13; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-1D8h]
  char v16[464]; // [rsp+30h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 64 7 row:760 128 104 10 result:756 272 112 9 <unknown>";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<t_sdk_config>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862723] = -218959118;
  v5[536862727] = -218959360;
  v5[536862728] = 62194;
  v5[536862732] = -202116109;
  if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 231) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 25) & 7) >= *(_BYTE *)(((v3 + 231) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 128, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 128), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 128)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 128));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 128));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 32), d, (const mysqlpp::ResultBase *)(v3 + 128), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 32)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          v11 = ((v3 + 272) >> 3) + 2147450880;
          *(_DWORD *)v11 = 0;
          *(_DWORD *)(v11 + 4) = 0;
          *(_DWORD *)(v11 + 8) = 0;
          *(_WORD *)(v11 + 12) = 0;
          t_sdk_config::t_sdk_config((t_sdk_config *const)(v3 + 272), (const mysqlpp::Row *)(v3 + 32));
          std::vector<t_sdk_config>::push_back(con, (std::vector<t_sdk_config>::value_type *)(v3 + 272));
          t_sdk_config::~t_sdk_config((t_sdk_config *const)(v3 + 272));
          v12 = ((v3 + 272) >> 3) + 2147450880;
          *(_DWORD *)v12 = -117901064;
          *(_DWORD *)(v12 + 4) = -117901064;
          *(_DWORD *)(v12 + 8) = -117901064;
          *(_WORD *)(v12 + 12) = -1800;
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 32));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v13 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 128));
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = -168430091;
  }
};

// Line 754: range 000000000C88D72C-000000000C88DC3C
void __cdecl mysqlpp::Query::storein_sequence<std::vector<t_security_file_config>>(
        mysqlpp::Query *const this,
        std::vector<t_security_file_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r14
  const unsigned __int64 *lengths; // rax
  int v10; // r14d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  _DWORD *v13; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-1B8h]
  char v16[432]; // [rsp+30h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 56 9 <unknown> 144 64 7 row:760 240 104 10 result:756";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<t_security_file_config>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -218959360;
  v5[536862724] = 62194;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862730] = -218103808;
  v5[536862731] = -202116109;
  if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 343) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 87) & 7) >= *(_BYTE *)(((v3 + 343) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 240, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 240), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 240)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 240));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 144) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 240));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 144), d, (const mysqlpp::ResultBase *)(v3 + 240), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 144)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          v11 = ((v3 + 48) >> 3) + 2147450880;
          *(_DWORD *)v11 = 0;
          *(_WORD *)(v11 + 4) = 0;
          *(_BYTE *)(v11 + 6) = 0;
          t_security_file_config::t_security_file_config(
            (t_security_file_config *const)(v3 + 48),
            (const mysqlpp::Row *)(v3 + 144));
          std::vector<t_security_file_config>::push_back(
            con,
            (std::vector<t_security_file_config>::value_type *)(v3 + 48));
          t_security_file_config::~t_security_file_config((t_security_file_config *const)(v3 + 48));
          v12 = ((v3 + 48) >> 3) + 2147450880;
          *(_DWORD *)v12 = -117901064;
          *(_WORD *)(v12 + 4) = -1800;
          *(_BYTE *)(v12 + 6) = -8;
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 144));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v13 = (_DWORD *)(((v3 + 144) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 240));
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 754: range 000000000C8A15EE-000000000C8A1B41
void __cdecl mysqlpp::Query::storein_sequence<std::vector<t_textmap_config>>(
        mysqlpp::Query *const this,
        std::vector<t_textmap_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _BOOL4 v6; // edx
  _DWORD *v7; // rax
  bool v8; // r14
  const unsigned __int64 *lengths; // rax
  int v10; // r14d
  _DWORD *v11; // rax
  mysqlpp::UseQueryError *exception; // rdi
  char **d; // [rsp+28h] [rbp-3D8h]
  char v14[976]; // [rsp+30h] [rbp-3D0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(928LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 64 7 row:760 128 104 10 result:756 272 528 9 <unknown>";
  *(_QWORD *)(v3 + 16) = mysqlpp::Query::storein_sequence<std::vector<t_textmap_config>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862723] = -218959118;
  v5[536862727] = -218959360;
  v5[536862728] = 62194;
  v5[536862745] = -202116109;
  v5[536862746] = -202116109;
  v5[536862747] = -202116109;
  v5[536862748] = -202116109;
  if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 231) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 25) & 7) >= *(_BYTE *)(((v3 + 231) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 128, 104LL);
  }
  mysqlpp::Query::use((mysqlpp::Query *)(v3 + 128), (const mysqlpp::SQLTypeAdapter *)this);
  if ( mysqlpp::UseQueryResult::operator st_mysql_res *((const mysqlpp::UseQueryResult_0 *const)(v3 + 128)) )
  {
    do
    {
      d = mysqlpp::UseQueryResult::fetch_raw_row((const mysqlpp::UseQueryResult *const)(v3 + 128));
      if ( d )
      {
        v7 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
        *v7 = 0;
        v7[1] = 0;
        v8 = mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions);
        lengths = mysqlpp::UseQueryResult::fetch_lengths((const mysqlpp::UseQueryResult *const)(v3 + 128));
        mysqlpp::Row::Row((mysqlpp::Row *)(v3 + 32), d, (const mysqlpp::ResultBase *)(v3 + 128), lengths, v8);
        if ( mysqlpp::Row::operator bool mysqlpp::Row::*((const mysqlpp::Row *const)(v3 + 32)) == (mysqlpp::Row::private_bool_type)-1LL )
        {
          v10 = 0;
        }
        else
        {
          __asan_unpoison_stack_memory(v3 + 272, 528LL);
          t_textmap_config::t_textmap_config((t_textmap_config *const)(v3 + 272), (const mysqlpp::Row *)(v3 + 32));
          std::vector<t_textmap_config>::push_back(con, (std::vector<t_textmap_config>::value_type *)(v3 + 272));
          t_textmap_config::~t_textmap_config((t_textmap_config *const)(v3 + 272));
          __asan_poison_stack_memory(v3 + 272, 528LL);
          v10 = 1;
        }
        mysqlpp::Row::~Row((mysqlpp::Row *const)(v3 + 32));
        v6 = v10 == 1;
      }
      else
      {
        v6 = 0;
      }
      v11 = (_DWORD *)(((v3 + 32) >> 3) + 2147450880);
      *v11 = -117901064;
      v11[1] = -117901064;
    }
    while ( v6 );
  }
  else if ( !mysqlpp::Query::result_empty(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->copacetic_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->copacetic_, this);
    this->copacetic_ = 0;
    if ( mysqlpp::OptionalExceptions::throw_exceptions(&this->mysqlpp::OptionalExceptions) )
    {
      exception = (mysqlpp::UseQueryError *)__cxa_allocate_exception(0x28uLL);
      mysqlpp::UseQueryError::UseQueryError(exception, "Bogus empty result");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
        (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
    }
  }
  mysqlpp::UseQueryResult::~UseQueryResult((mysqlpp::UseQueryResult *const)(v3 + 128));
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF806C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862729) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450908 - (((_DWORD)v5 + 2147450916) & 0xFFFFFFF8) + 88) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8070) = -168430091;
  }
};

// Line 888: range 000000000C702C22-000000000C702E7D
void __cdecl mysqlpp::Query::storein<std::vector<TableLuaShellConfig>>(
        mysqlpp::Query *const this,
        std::vector<TableLuaShellConfig> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<TableLuaShellConfig>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<TableLuaShellConfig>(this, con, (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 888: range 000000000C6D71FC-000000000C6D7457
void __cdecl mysqlpp::Query::storein<std::vector<data::t_activity_schedule_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_activity_schedule_config> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<data::t_activity_schedule_config>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<data::t_activity_schedule_config>(this, con, (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 888: range 000000000C6D7C24-000000000C6D7E7F
void __cdecl mysqlpp::Query::storein<std::vector<data::t_anti_offline_whitelist_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_anti_offline_whitelist_config> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<data::t_anti_offline_whitelist_config>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<data::t_anti_offline_whitelist_config>(this, con, (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 888: range 000000000C6D902A-000000000C6D9285
void __cdecl mysqlpp::Query::storein<std::vector<data::t_battle_pass_schedule_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_battle_pass_schedule_config> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<data::t_battle_pass_schedule_config>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<data::t_battle_pass_schedule_config>(this, con, (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 888: range 000000000C6D9ECC-000000000C6DA127
void __cdecl mysqlpp::Query::storein<std::vector<data::t_chat_block_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_chat_block_config> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<data::t_chat_block_config>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<data::t_chat_block_config>(this, con, (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 888: range 000000000C6D8476-000000000C6D86D1
void __cdecl mysqlpp::Query::storein<std::vector<data::t_client_watchdog_uid_list_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_client_watchdog_uid_list_config> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<data::t_client_watchdog_uid_list_config>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<data::t_client_watchdog_uid_list_config>(
    this,
    con,
    (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 888: range 000000000C6DAA88-000000000C6DACE3
void __cdecl mysqlpp::Query::storein<std::vector<data::t_cmd_frequency_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_cmd_frequency_config> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<data::t_cmd_frequency_config>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<data::t_cmd_frequency_config>(this, con, (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 888: range 000000000C6ED230-000000000C6ED48B
void __cdecl mysqlpp::Query::storein<std::vector<data::t_feature_switch_off_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_feature_switch_off_config> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<data::t_feature_switch_off_config>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<data::t_feature_switch_off_config>(this, con, (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 888: range 000000000C6F0602-000000000C6F085D
void __cdecl mysqlpp::Query::storein<std::vector<data::t_gacha_newbie_url_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_gacha_newbie_url_config> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<data::t_gacha_newbie_url_config>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<data::t_gacha_newbie_url_config>(this, con, (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 888: range 000000000C6EF140-000000000C6EF39B
void __cdecl mysqlpp::Query::storein<std::vector<data::t_gacha_schedule_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_gacha_schedule_config> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<data::t_gacha_schedule_config>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<data::t_gacha_schedule_config>(this, con, (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 888: range 000000000C6F48CC-000000000C6F4B27
void __cdecl mysqlpp::Query::storein<std::vector<data::t_gameplay_recommendation_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_gameplay_recommendation_config> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<data::t_gameplay_recommendation_config>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<data::t_gameplay_recommendation_config>(this, con, (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 888: range 000000000C6F68AE-000000000C6F6B09
void __cdecl mysqlpp::Query::storein<std::vector<data::t_h5_activity_schedule_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_h5_activity_schedule_config> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<data::t_h5_activity_schedule_config>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<data::t_h5_activity_schedule_config>(this, con, (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 888: range 000000000C6F9806-000000000C6F9A61
void __cdecl mysqlpp::Query::storein<std::vector<data::t_live_schedule_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_live_schedule_config> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<data::t_live_schedule_config>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<data::t_live_schedule_config>(this, con, (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 888: range 000000000C704140-000000000C70439B
void __cdecl mysqlpp::Query::storein<std::vector<data::t_mail_block_tag_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_mail_block_tag_config> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<data::t_mail_block_tag_config>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<data::t_mail_block_tag_config>(this, con, (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 888: range 000000000C70498A-000000000C704BE5
void __cdecl mysqlpp::Query::storein<std::vector<data::t_mtp_blacklist_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_mtp_blacklist_config> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<data::t_mtp_blacklist_config>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<data::t_mtp_blacklist_config>(this, con, (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 888: range 000000000C70552C-000000000C705787
void __cdecl mysqlpp::Query::storein<std::vector<data::t_mtp_whitelist_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_mtp_whitelist_config> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<data::t_mtp_whitelist_config>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<data::t_mtp_whitelist_config>(this, con, (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 888: range 000000000C707ADE-000000000C707D39
void __cdecl mysqlpp::Query::storein<std::vector<data::t_op_activity_schedule_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_op_activity_schedule_config> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<data::t_op_activity_schedule_config>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<data::t_op_activity_schedule_config>(this, con, (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 888: range 000000000C709050-000000000C7092AB
void __cdecl mysqlpp::Query::storein<std::vector<data::t_rebate_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_rebate_config> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<data::t_rebate_config>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<data::t_rebate_config>(this, con, (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 888: range 000000000C70A62A-000000000C70A885
void __cdecl mysqlpp::Query::storein<std::vector<data::t_red_point_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_red_point_config> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<data::t_red_point_config>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<data::t_red_point_config>(this, con, (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 888: range 000000000C70BC10-000000000C70BE6B
void __cdecl mysqlpp::Query::storein<std::vector<data::t_register_black_ip_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_register_black_ip_config> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<data::t_register_black_ip_config>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<data::t_register_black_ip_config>(this, con, (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 888: range 000000000C70CE1A-000000000C70D075
void __cdecl mysqlpp::Query::storein<std::vector<data::t_security_library_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_security_library_config> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<data::t_security_library_config>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<data::t_security_library_config>(this, con, (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 888: range 000000000C70E0B2-000000000C70E30D
void __cdecl mysqlpp::Query::storein<std::vector<data::t_sign_in_schedule_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_sign_in_schedule_config> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<data::t_sign_in_schedule_config>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<data::t_sign_in_schedule_config>(this, con, (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 888: range 000000000C70ED5A-000000000C70EFB5
void __cdecl mysqlpp::Query::storein<std::vector<data::t_stop_server_login_white_ip_config>>(
        mysqlpp::Query *const this,
        std::vector<data::t_stop_server_login_white_ip_config> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<data::t_stop_server_login_white_ip_config>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<data::t_stop_server_login_white_ip_config>(
    this,
    con,
    (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 888: range 000000000C6FCC5A-000000000C6FCEB5
void __cdecl mysqlpp::Query::storein<std::vector<t_announce_config>>(
        mysqlpp::Query *const this,
        std::vector<t_announce_config> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<t_announce_config>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<t_announce_config>(this, con, (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 888: range 000000000C6EA78A-000000000C6EA9E5
void __cdecl mysqlpp::Query::storein<std::vector<t_anti_cheat_client_channel_id_config>>(
        mysqlpp::Query *const this,
        std::vector<t_anti_cheat_client_channel_id_config> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<t_anti_cheat_client_channel_id_config>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<t_anti_cheat_client_channel_id_config>(this, con, (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 888: range 000000000C6E6C36-000000000C6E6E91
void __cdecl mysqlpp::Query::storein<std::vector<t_area_config>>(
        mysqlpp::Query *const this,
        std::vector<t_area_config> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<t_area_config>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<t_area_config>(this, con, (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 888: range 000000000C6E775A-000000000C6E79B5
void __cdecl mysqlpp::Query::storein<std::vector<t_authkey_config>>(
        mysqlpp::Query *const this,
        std::vector<t_authkey_config> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<t_authkey_config>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<t_authkey_config>(this, con, (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 888: range 000000000C6E307A-000000000C6E32D5
void __cdecl mysqlpp::Query::storein<std::vector<t_bind_config>>(
        mysqlpp::Query *const this,
        std::vector<t_bind_config> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<t_bind_config>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<t_bind_config>(this, con, (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 888: range 000000000C6E9982-000000000C6E9BDD
void __cdecl mysqlpp::Query::storein<std::vector<t_channel_id_config>>(
        mysqlpp::Query *const this,
        std::vector<t_channel_id_config> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<t_channel_id_config>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<t_channel_id_config>(this, con, (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 888: range 000000000C6EB4CE-000000000C6EB729
void __cdecl mysqlpp::Query::storein<std::vector<t_client_channel_id_config>>(
        mysqlpp::Query *const this,
        std::vector<t_client_channel_id_config> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<t_client_channel_id_config>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<t_client_channel_id_config>(this, con, (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 888: range 000000000C6E102C-000000000C6E1287
void __cdecl mysqlpp::Query::storein<std::vector<t_client_config>>(
        mysqlpp::Query *const this,
        std::vector<t_client_config> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<t_client_config>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<t_client_config>(this, con, (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 888: range 000000000C6E2018-000000000C6E2273
void __cdecl mysqlpp::Query::storein<std::vector<t_client_region_config>>(
        mysqlpp::Query *const this,
        std::vector<t_client_region_config> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<t_client_region_config>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<t_client_region_config>(this, con, (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 888: range 000000000C6E5C60-000000000C6E5EBB
void __cdecl mysqlpp::Query::storein<std::vector<t_deploy_textmap_config>>(
        mysqlpp::Query *const this,
        std::vector<t_deploy_textmap_config> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<t_deploy_textmap_config>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<t_deploy_textmap_config>(this, con, (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 888: range 000000000C6F8386-000000000C6F85E1
void __cdecl mysqlpp::Query::storein<std::vector<t_inject_fix_config>>(
        mysqlpp::Query *const this,
        std::vector<t_inject_fix_config> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<t_inject_fix_config>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<t_inject_fix_config>(this, con, (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 888: range 000000000C6FB444-000000000C6FB69F
void __cdecl mysqlpp::Query::storein<std::vector<t_login_reward_config>>(
        mysqlpp::Query *const this,
        std::vector<t_login_reward_config> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<t_login_reward_config>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<t_login_reward_config>(this, con, (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 888: range 000000000C6E3E34-000000000C6E408F
void __cdecl mysqlpp::Query::storein<std::vector<t_login_white_ip_config>>(
        mysqlpp::Query *const this,
        std::vector<t_login_white_ip_config> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<t_login_white_ip_config>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<t_login_white_ip_config>(this, con, (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 888: range 000000000C6FE18E-000000000C6FE3E9
void __cdecl mysqlpp::Query::storein<std::vector<t_questionnaire_mail_config>>(
        mysqlpp::Query *const this,
        std::vector<t_questionnaire_mail_config> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<t_questionnaire_mail_config>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<t_questionnaire_mail_config>(this, con, (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 888: range 000000000C6DF4C4-000000000C6DF71F
void __cdecl mysqlpp::Query::storein<std::vector<t_region_config>>(
        mysqlpp::Query *const this,
        std::vector<t_region_config> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<t_region_config>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<t_region_config>(this, con, (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 888: range 000000000C6E8426-000000000C6E8681
void __cdecl mysqlpp::Query::storein<std::vector<t_rsakey_config>>(
        mysqlpp::Query *const this,
        std::vector<t_rsakey_config> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<t_rsakey_config>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<t_rsakey_config>(this, con, (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 888: range 000000000C6E90BC-000000000C6E9317
void __cdecl mysqlpp::Query::storein<std::vector<t_sdk_config>>(
        mysqlpp::Query *const this,
        std::vector<t_sdk_config> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<t_sdk_config>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<t_sdk_config>(this, con, (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 888: range 000000000C6EC8FE-000000000C6ECB59
void __cdecl mysqlpp::Query::storein<std::vector<t_security_file_config>>(
        mysqlpp::Query *const this,
        std::vector<t_security_file_config> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<t_security_file_config>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<t_security_file_config>(this, con, (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 888: range 000000000C7012AA-000000000C701505
void __cdecl mysqlpp::Query::storein<std::vector<t_textmap_config>>(
        mysqlpp::Query *const this,
        std::vector<t_textmap_config> *con)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 p_template_defaults; // rsi
  unsigned __int64 v6; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::Query::storein<std::vector<t_textmap_config>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  p_template_defaults = (__int64)&this->template_defaults;
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    p_template_defaults = 32LL;
    __asan_report_store_n(v2 + 96, 32LL);
  }
  mysqlpp::Query::str[abi:cxx11](v2 + 96, this, p_template_defaults);
  mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 32, v2 + 96, 0LL);
  mysqlpp::Query::storein<t_textmap_config>(this, con, (const mysqlpp::SQLTypeAdapter *)(v2 + 32));
  mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 32));
  v6 = ((v2 + 32) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  std::string::~string((void *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 907: range 000000000C7D57F4-000000000C7D5821
void __cdecl mysqlpp::Query::storein<TableLuaShellConfig>(
        mysqlpp::Query *const this,
        std::vector<TableLuaShellConfig> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<TableLuaShellConfig>>(this, con, s);
};

// Line 907: range 000000000C7BB72E-000000000C7BB75B
void __cdecl mysqlpp::Query::storein<data::t_activity_schedule_config>(
        mysqlpp::Query *const this,
        std::vector<data::t_activity_schedule_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<data::t_activity_schedule_config>>(this, con, s);
};

// Line 907: range 000000000C7BBED4-000000000C7BBF01
void __cdecl mysqlpp::Query::storein<data::t_anti_offline_whitelist_config>(
        mysqlpp::Query *const this,
        std::vector<data::t_anti_offline_whitelist_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<data::t_anti_offline_whitelist_config>>(this, con, s);
};

// Line 907: range 000000000C7BC27C-000000000C7BC2A9
void __cdecl mysqlpp::Query::storein<data::t_battle_pass_schedule_config>(
        mysqlpp::Query *const this,
        std::vector<data::t_battle_pass_schedule_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<data::t_battle_pass_schedule_config>>(this, con, s);
};

// Line 907: range 000000000C7BCAEC-000000000C7BCB19
void __cdecl mysqlpp::Query::storein<data::t_chat_block_config>(
        mysqlpp::Query *const this,
        std::vector<data::t_chat_block_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<data::t_chat_block_config>>(this, con, s);
};

// Line 907: range 000000000C7BC0A8-000000000C7BC0D5
void __cdecl mysqlpp::Query::storein<data::t_client_watchdog_uid_list_config>(
        mysqlpp::Query *const this,
        std::vector<data::t_client_watchdog_uid_list_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<data::t_client_watchdog_uid_list_config>>(this, con, s);
};

// Line 907: range 000000000C7BCE7E-000000000C7BCEAB
void __cdecl mysqlpp::Query::storein<data::t_cmd_frequency_config>(
        mysqlpp::Query *const this,
        std::vector<data::t_cmd_frequency_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<data::t_cmd_frequency_config>>(this, con, s);
};

// Line 907: range 000000000C7C7D7E-000000000C7C7DAB
void __cdecl mysqlpp::Query::storein<data::t_feature_switch_off_config>(
        mysqlpp::Query *const this,
        std::vector<data::t_feature_switch_off_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<data::t_feature_switch_off_config>>(this, con, s);
};

// Line 907: range 000000000C7C9524-000000000C7C9551
void __cdecl mysqlpp::Query::storein<data::t_gacha_newbie_url_config>(
        mysqlpp::Query *const this,
        std::vector<data::t_gacha_newbie_url_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<data::t_gacha_newbie_url_config>>(this, con, s);
};

// Line 907: range 000000000C7C82AA-000000000C7C82D7
void __cdecl mysqlpp::Query::storein<data::t_gacha_schedule_config>(
        mysqlpp::Query *const this,
        std::vector<data::t_gacha_schedule_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<data::t_gacha_schedule_config>>(this, con, s);
};

// Line 907: range 000000000C7CD2A8-000000000C7CD2D5
void __cdecl mysqlpp::Query::storein<data::t_gameplay_recommendation_config>(
        mysqlpp::Query *const this,
        std::vector<data::t_gameplay_recommendation_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<data::t_gameplay_recommendation_config>>(this, con, s);
};

// Line 907: range 000000000C7CF7BC-000000000C7CF7E9
void __cdecl mysqlpp::Query::storein<data::t_h5_activity_schedule_config>(
        mysqlpp::Query *const this,
        std::vector<data::t_h5_activity_schedule_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<data::t_h5_activity_schedule_config>>(this, con, s);
};

// Line 907: range 000000000C7D1B0A-000000000C7D1B37
void __cdecl mysqlpp::Query::storein<data::t_live_schedule_config>(
        mysqlpp::Query *const this,
        std::vector<data::t_live_schedule_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<data::t_live_schedule_config>>(this, con, s);
};

// Line 907: range 000000000C7D7798-000000000C7D77C5
void __cdecl mysqlpp::Query::storein<data::t_mail_block_tag_config>(
        mysqlpp::Query *const this,
        std::vector<data::t_mail_block_tag_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<data::t_mail_block_tag_config>>(this, con, s);
};

// Line 907: range 000000000C7D796C-000000000C7D7999
void __cdecl mysqlpp::Query::storein<data::t_mtp_blacklist_config>(
        mysqlpp::Query *const this,
        std::vector<data::t_mtp_blacklist_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<data::t_mtp_blacklist_config>>(this, con, s);
};

// Line 907: range 000000000C7D80F4-000000000C7D8121
void __cdecl mysqlpp::Query::storein<data::t_mtp_whitelist_config>(
        mysqlpp::Query *const this,
        std::vector<data::t_mtp_whitelist_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<data::t_mtp_whitelist_config>>(this, con, s);
};

// Line 907: range 000000000C7DABA4-000000000C7DABD1
void __cdecl mysqlpp::Query::storein<data::t_op_activity_schedule_config>(
        mysqlpp::Query *const this,
        std::vector<data::t_op_activity_schedule_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<data::t_op_activity_schedule_config>>(this, con, s);
};

// Line 907: range 000000000C7DC132-000000000C7DC15F
void __cdecl mysqlpp::Query::storein<data::t_rebate_config>(
        mysqlpp::Query *const this,
        std::vector<data::t_rebate_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<data::t_rebate_config>>(this, con, s);
};

// Line 907: range 000000000C7DD0EA-000000000C7DD117
void __cdecl mysqlpp::Query::storein<data::t_red_point_config>(
        mysqlpp::Query *const this,
        std::vector<data::t_red_point_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<data::t_red_point_config>>(this, con, s);
};

// Line 907: range 000000000C7DE398-000000000C7DE3C5
void __cdecl mysqlpp::Query::storein<data::t_register_black_ip_config>(
        mysqlpp::Query *const this,
        std::vector<data::t_register_black_ip_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<data::t_register_black_ip_config>>(this, con, s);
};

// Line 907: range 000000000C7DEBE4-000000000C7DEC11
void __cdecl mysqlpp::Query::storein<data::t_security_library_config>(
        mysqlpp::Query *const this,
        std::vector<data::t_security_library_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<data::t_security_library_config>>(this, con, s);
};

// Line 907: range 000000000C7DF32E-000000000C7DF35B
void __cdecl mysqlpp::Query::storein<data::t_sign_in_schedule_config>(
        mysqlpp::Query *const this,
        std::vector<data::t_sign_in_schedule_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<data::t_sign_in_schedule_config>>(this, con, s);
};

// Line 907: range 000000000C7DFEE8-000000000C7DFF15
void __cdecl mysqlpp::Query::storein<data::t_stop_server_login_white_ip_config>(
        mysqlpp::Query *const this,
        std::vector<data::t_stop_server_login_white_ip_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<data::t_stop_server_login_white_ip_config>>(this, con, s);
};

// Line 907: range 000000000C7D29D6-000000000C7D2A03
void __cdecl mysqlpp::Query::storein<t_announce_config>(
        mysqlpp::Query *const this,
        std::vector<t_announce_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<t_announce_config>>(this, con, s);
};

// Line 907: range 000000000C7C51E8-000000000C7C5215
void __cdecl mysqlpp::Query::storein<t_anti_cheat_client_channel_id_config>(
        mysqlpp::Query *const this,
        std::vector<t_anti_cheat_client_channel_id_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<t_anti_cheat_client_channel_id_config>>(this, con, s);
};

// Line 907: range 000000000C7C2F90-000000000C7C2FBD
void __cdecl mysqlpp::Query::storein<t_area_config>(
        mysqlpp::Query *const this,
        std::vector<t_area_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<t_area_config>>(this, con, s);
};

// Line 907: range 000000000C7C34C6-000000000C7C34F3
void __cdecl mysqlpp::Query::storein<t_authkey_config>(
        mysqlpp::Query *const this,
        std::vector<t_authkey_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<t_authkey_config>>(this, con, s);
};

// Line 907: range 000000000C7C17D6-000000000C7C1803
void __cdecl mysqlpp::Query::storein<t_bind_config>(
        mysqlpp::Query *const this,
        std::vector<t_bind_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<t_bind_config>>(this, con, s);
};

// Line 907: range 000000000C7C4ABE-000000000C7C4AEB
void __cdecl mysqlpp::Query::storein<t_channel_id_config>(
        mysqlpp::Query *const this,
        std::vector<t_channel_id_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<t_channel_id_config>>(this, con, s);
};

// Line 907: range 000000000C7C5920-000000000C7C594D
void __cdecl mysqlpp::Query::storein<t_client_channel_id_config>(
        mysqlpp::Query *const this,
        std::vector<t_client_channel_id_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<t_client_channel_id_config>>(this, con, s);
};

// Line 907: range 000000000C7C092E-000000000C7C095B
void __cdecl mysqlpp::Query::storein<t_client_config>(
        mysqlpp::Query *const this,
        std::vector<t_client_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<t_client_config>>(this, con, s);
};

// Line 907: range 000000000C7C1012-000000000C7C103F
void __cdecl mysqlpp::Query::storein<t_client_region_config>(
        mysqlpp::Query *const this,
        std::vector<t_client_region_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<t_client_region_config>>(this, con, s);
};

// Line 907: range 000000000C7C27DA-000000000C7C2807
void __cdecl mysqlpp::Query::storein<t_deploy_textmap_config>(
        mysqlpp::Query *const this,
        std::vector<t_deploy_textmap_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<t_deploy_textmap_config>>(this, con, s);
};

// Line 907: range 000000000C7D0EB0-000000000C7D0EDD
void __cdecl mysqlpp::Query::storein<t_inject_fix_config>(
        mysqlpp::Query *const this,
        std::vector<t_inject_fix_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<t_inject_fix_config>>(this, con, s);
};

// Line 907: range 000000000C7D2440-000000000C7D246D
void __cdecl mysqlpp::Query::storein<t_login_reward_config>(
        mysqlpp::Query *const this,
        std::vector<t_login_reward_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<t_login_reward_config>>(this, con, s);
};

// Line 907: range 000000000C7C2026-000000000C7C2053
void __cdecl mysqlpp::Query::storein<t_login_white_ip_config>(
        mysqlpp::Query *const this,
        std::vector<t_login_white_ip_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<t_login_white_ip_config>>(this, con, s);
};

// Line 907: range 000000000C7D2DAA-000000000C7D2DD7
void __cdecl mysqlpp::Query::storein<t_questionnaire_mail_config>(
        mysqlpp::Query *const this,
        std::vector<t_questionnaire_mail_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<t_questionnaire_mail_config>>(this, con, s);
};

// Line 907: range 000000000C7BFAF0-000000000C7BFB1D
void __cdecl mysqlpp::Query::storein<t_region_config>(
        mysqlpp::Query *const this,
        std::vector<t_region_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<t_region_config>>(this, con, s);
};

// Line 907: range 000000000C7C39FC-000000000C7C3A29
void __cdecl mysqlpp::Query::storein<t_rsakey_config>(
        mysqlpp::Query *const this,
        std::vector<t_rsakey_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<t_rsakey_config>>(this, con, s);
};

// Line 907: range 000000000C7C4276-000000000C7C42A3
void __cdecl mysqlpp::Query::storein<t_sdk_config>(
        mysqlpp::Query *const this,
        std::vector<t_sdk_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<t_sdk_config>>(this, con, s);
};

// Line 907: range 000000000C7C7504-000000000C7C7531
void __cdecl mysqlpp::Query::storein<t_security_file_config>(
        mysqlpp::Query *const this,
        std::vector<t_security_file_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<t_security_file_config>>(this, con, s);
};

// Line 907: range 000000000C7D435C-000000000C7D4389
void __cdecl mysqlpp::Query::storein<t_textmap_config>(
        mysqlpp::Query *const this,
        std::vector<t_textmap_config> *con,
        const mysqlpp::SQLTypeAdapter *s)
{
  mysqlpp::Query::storein_sequence<std::vector<t_textmap_config>>(this, con, s);
};
