// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_battle_pass_config_mgr.cpp

// Line 20: range 000000000CEEC7A7-000000000CEECC47
// local variable allocation has failed, the output may be wrong!
void __cdecl data::populate_t_battle_pass_schedule_config<(mysqlpp::sql_dummy_type)0>(
        data::t_battle_pass_schedule_config *s,
        const mysqlpp::Row *row)
{
  unsigned __int64 p_anon_0; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const mysqlpp::String *v5; // rax
  unsigned int v6; // edx
  const mysqlpp::String *v7; // r14
  const mysqlpp::String *v8; // r14
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
  *(_QWORD *)(p_anon_0 + 8) = "5 32 16 27 ignore_schema_mismatches:20 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unkn"
                              "own> 256 32 9 <unknown>";
  *(_QWORD *)(p_anon_0 + 16) = data::populate_t_battle_pass_schedule_config<(mysqlpp::sql_dummy_type)0>;
  v4 = (_DWORD *)(p_anon_0 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
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
  std::string::basic_string(p_anon_0 + 64);
  if ( *(char *)(((p_anon_0 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 159) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 159) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 128, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 128), v7, rowa);
  std::string::operator=(rowa._M_string_length + 8, p_anon_0 + 128);
  std::string::~string((void *)(p_anon_0 + 128));
  *(_DWORD *)(((p_anon_0 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 64));
  *(_DWORD *)(((p_anon_0 + 64) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 256) >> 3) + 0x7FFF8000) = 0;
  v8 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 192) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 192);
  if ( *(char *)(((p_anon_0 + 256) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 287) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 + 31) & 7) >= *(_BYTE *)(((p_anon_0 + 287) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 256, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 256), v8, rowa);
  std::string::operator=(rowa._M_string_length + 40, p_anon_0 + 256);
  std::string::~string((void *)(p_anon_0 + 256));
  *(_DWORD *)(((p_anon_0 + 256) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 192));
  *(_DWORD *)(((p_anon_0 + 192) >> 3) + 0x7FFF8000) = -117901064;
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

// Line 20: range 000000000CE3EC20-000000000CE3ECCD
void __cdecl data::t_battle_pass_schedule_config::t_battle_pass_schedule_config(
        data::t_battle_pass_schedule_config *const this,
        const mysqlpp::Row *row)
{
  std::string::basic_string(&this->begin_date);
  std::string::basic_string(&this->end_date);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  data::populate_t_battle_pass_schedule_config<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 20: range 000000000D3A5702-000000000D3A580F
void __cdecl data::t_battle_pass_schedule_config::t_battle_pass_schedule_config(
        data::t_battle_pass_schedule_config *const this,
        data::t_battle_pass_schedule_config *a2)
{
  mysqlpp::sql_int_unsigned schedule_id; // ecx
  const char *table_override; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  schedule_id = a2->schedule_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->schedule_id = schedule_id;
  std::string::basic_string(&this->begin_date, &a2->begin_date);
  std::string::basic_string(&this->end_date, &a2->end_date);
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 20: range 000000000D0CA036-000000000D0CA064
void __cdecl data::t_battle_pass_schedule_config::~t_battle_pass_schedule_config(
        data::t_battle_pass_schedule_config *const this)
{
  std::string::~string(&this->end_date);
  std::string::~string(&this->begin_date);
};

// Line 26: range 000000000CD61A66-000000000CD627D6
int32_t __cdecl data::DbBattlePassConfigMgr::loadDbBattlePassConfig(
        data::DbBattlePassConfigMgr *const this,
        common::midb::MysqlConnPtr *conn_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  mysqlpp::Connection *v6; // rsi
  __int64 v7; // rax
  std::logic_error *exception; // rdi
  int TimeByDayStr; // edi
  int v10; // esi
  data::BattlePassDbScheduleConfig *v11; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::BattlePassDbScheduleConfig>,false,false>,bool> v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int v15; // edx
  int v16; // edx
  int v17; // r15d
  common::milog::MiLogStream *v18; // r15
  std::vector<data::t_battle_pass_schedule_config>::size_type v19; // rax
  common::milog::MiLogStream *v20; // rax
  unsigned __int64 v21; // rax
  std::vector<data::t_battle_pass_schedule_config> *__for_range; // [rsp+28h] [rbp-4C8h]
  __gnu_cxx::__normal_iterator<data::t_battle_pass_schedule_config*,std::vector<data::t_battle_pass_schedule_config> >::reference row; // [rsp+30h] [rbp-4C0h]
  char v26[1200]; // [rsp+40h] [rbp-4B0h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1152LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 32 8 14 __for_begin:46 64 8 12 __for_end:46 96 8 9 <unknown> 128 12 9 config:48 160 24 10 row"
                        "_vec:39 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 544 8 query:33";
  *(_QWORD *)(v3 + 16) = data::DbBattlePassConfigMgr::loadDbBattlePassConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -219020288;
  v5[536862725] = -234881024;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862752] = -202116109;
  v5[536862753] = -202116109;
  v5[536862754] = -202116109;
  v5[536862755] = -202116109;
  if ( std::operator==<mysqlpp::Connection>(0LL, conn_ptr) )
  {
    if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/db_data_manual/db_battle_pass_config_mgr.cpp",
      "loadDbBattlePassConfig",
      29);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
      (common::milog::MiLogStream *const)(v3 + 224),
      (const char (*)[17])"conn_ptr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    v2 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_ptr);
    if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1023) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 1023) >> 3) + 0x7FFF8000) )
    {
      v6 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v3 + 480, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 480), v6, "select ");
    v7 = std::operator<<<std::char_traits<char>>(v3 + 480, "schedule_id, begin_date, end_date");
    std::operator<<<std::char_traits<char>>(v7, " from t_battle_pass_schedule_config");
    std::vector<data::t_battle_pass_schedule_config>::vector((std::vector<data::t_battle_pass_schedule_config> *const)(v3 + 160));
    mysqlpp::Query::storein<std::vector<data::t_battle_pass_schedule_config>>(
      (mysqlpp::Query *const)(v3 + 480),
      (std::vector<data::t_battle_pass_schedule_config> *)(v3 + 160));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 480)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    __for_range = (std::vector<data::t_battle_pass_schedule_config> *)(v3 + 160);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::t_battle_pass_schedule_config>::iterator *)(v3 + 32) = std::vector<data::t_battle_pass_schedule_config>::begin(__for_range);
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::t_battle_pass_schedule_config>::iterator *)(v3 + 64) = std::vector<data::t_battle_pass_schedule_config>::end(__for_range);
    while ( __gnu_cxx::operator!=<data::t_battle_pass_schedule_config *,std::vector<data::t_battle_pass_schedule_config>>(
              (const __gnu_cxx::__normal_iterator<data::t_battle_pass_schedule_config*,std::vector<data::t_battle_pass_schedule_config> > *)(v3 + 32),
              (const __gnu_cxx::__normal_iterator<data::t_battle_pass_schedule_config*,std::vector<data::t_battle_pass_schedule_config> > *)(v3 + 64)) )
    {
      row = __gnu_cxx::__normal_iterator<data::t_battle_pass_schedule_config *,std::vector<data::t_battle_pass_schedule_config>>::operator*((const __gnu_cxx::__normal_iterator<data::t_battle_pass_schedule_config*,std::vector<data::t_battle_pass_schedule_config> > *const)(v3 + 32));
      *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 1024;
      if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 128);
      *(_DWORD *)(v3 + 128) = 0;
      if ( *(_BYTE *)(((v3 + 132) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 - 124) & 7) + 3) >= *(_BYTE *)(((v3 + 132) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v3 + 132);
      }
      *(_DWORD *)(v3 + 132) = 0;
      if ( *(_BYTE *)(((v3 + 136) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 136) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 136);
      *(_DWORD *)(v3 + 136) = 0;
      if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(row);
      }
      *(_DWORD *)(v3 + 128) = row->schedule_id;
      TimeByDayStr = common::tools::TimeUtils::getTimeByDayStr(&row->begin_date);
      if ( *(_BYTE *)(((v3 + 132) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 - 124) & 7) + 3) >= *(_BYTE *)(((v3 + 132) >> 3) + 0x7FFF8000) )
      {
        TimeByDayStr = v3 + 132;
        __asan_report_store4(v3 + 132);
      }
      *(_DWORD *)(v3 + 132) = TimeByDayStr;
      v10 = common::tools::TimeUtils::getTimeByDayStr(&row->end_date);
      if ( *(_BYTE *)(((v3 + 136) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 136) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 136);
      *(_DWORD *)(v3 + 136) = v10;
      v12 = std::unordered_map<unsigned int,data::BattlePassDbScheduleConfig>::emplace<unsigned int &,data::BattlePassDbScheduleConfig&>(
              &this->schedule_config_map_,
              (unsigned int *)(v3 + 128),
              (data::BattlePassDbScheduleConfig *)(v3 + 128),
              (unsigned int *)(v3 + 128),
              v11);
      if ( !v12.second )
      {
        *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 288, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 288),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_battle_pass_config_mgr.cpp",
          "loadDbBattlePassConfig",
          54);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 288),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v13, (const char (*)[44])byte_1A192040);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 128));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
        *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v15 = 0;
      }
      else
      {
        v15 = 1;
      }
      *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -1800;
      if ( v15 != 1 )
      {
        v16 = 0;
        goto LABEL_39;
      }
      __gnu_cxx::__normal_iterator<data::t_battle_pass_schedule_config *,std::vector<data::t_battle_pass_schedule_config>>::operator++((__gnu_cxx::__normal_iterator<data::t_battle_pass_schedule_config*,std::vector<data::t_battle_pass_schedule_config> > *const)(v3 + 32));
    }
    v16 = 1;
LABEL_39:
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( v16 == 1 )
    {
      *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 352) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 383) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 383) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 352, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 352),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/db_data_manual/db_battle_pass_config_mgr.cpp",
        "loadDbBattlePassConfig",
        59);
      v18 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
              (common::milog::MiLogStream *const)(v3 + 352),
              (const char (*)[6])"load ");
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
      v19 = std::vector<data::t_battle_pass_schedule_config>::size((const std::vector<data::t_battle_pass_schedule_config> *const)(v3 + 160));
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)(v3 + 96) = v19;
      v20 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v18,
              (const unsigned __int64 *)(v3 + 96));
      common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
        v20,
        (const char (*)[43])" config from t_battle_pass_schedule_config");
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
      *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v17 = 1;
    }
    else
    {
      v17 = 0;
    }
    std::vector<data::t_battle_pass_schedule_config>::~vector((std::vector<data::t_battle_pass_schedule_config> *const)(v3 + 160));
    v21 = ((v3 + 160) >> 3) + 2147450880;
    *(_WORD *)v21 = -1800;
    *(_BYTE *)(v21 + 2) = -8;
    if ( v17 == 1 )
      v2 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 480));
  }
  if ( v26 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8080) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8088) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1152LL, v26);
  }
  return v2;
};

// Line 71: range 000000000CD627D8-000000000CD627E6
int32_t __cdecl data::DbBattlePassConfigMgr::rewriteDbBattlePassConfig(data::DbBattlePassConfigMgr *const this)
{
  return 0;
};

// Line 76: range 000000000CD627E8-000000000CD62CA0
int32_t __cdecl data::DbBattlePassConfigMgr::checkDbBattlePassConfig(
        data::DbBattlePassConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  BattlePassExcelConfigMgr *p_battle_pass_excel_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  int v10; // edx
  int32_t result; // eax
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BattlePassDbScheduleConfig>,false,false>::reference __in; // [rsp+20h] [rbp-150h]
  uint32_t *schedule_id; // [rsp+28h] [rbp-148h]
  char v14[304]; // [rsp+40h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 8 14 __for_begin:78 80 8 12 __for_end:78 112 32 9 <unknown> 176 48 20 schedule_time_map:77";
  *(_QWORD *)(v3 + 16) = data::DbBattlePassConfigMgr::checkDbBattlePassConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862727] = -202116109;
  std::map<unsigned int,std::pair<unsigned int,unsigned int>>::map((std::map<unsigned int,std::pair<unsigned int,unsigned int>> *const)(v3 + 176));
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::BattlePassDbScheduleConfig>::iterator *)(v3 + 48) = std::unordered_map<unsigned int,data::BattlePassDbScheduleConfig>::begin(&this->schedule_config_map_);
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::BattlePassDbScheduleConfig>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::BattlePassDbScheduleConfig>::end(&this->schedule_config_map_);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::BattlePassDbScheduleConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BattlePassDbScheduleConfig>,false> *)(v3 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BattlePassDbScheduleConfig>,false> *)(v3 + 80)) )
    {
      v10 = 1;
      goto LABEL_18;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BattlePassDbScheduleConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BattlePassDbScheduleConfig>,false,false> *const)(v3 + 48));
    schedule_id = std::get<0ul,unsigned int const,data::BattlePassDbScheduleConfig>(__in);
    std::get<1ul,unsigned int const,data::BattlePassDbScheduleConfig>(__in);
    p_battle_pass_excel_config_mgr = &txt_config_mgr->battle_pass_excel_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)schedule_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(schedule_id);
    }
    if ( !data::BattlePassExcelConfigMgrBase::findBattlePassScheduleExcelConfig(
            p_battle_pass_excel_config_mgr,
            *schedule_id) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BattlePassDbScheduleConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BattlePassDbScheduleConfig>,false,false> *const)(v3 + 48));
  }
  if ( *(char *)(((v3 + 112) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 143) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 143) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 112, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 112),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/db_data_manual/db_battle_pass_config_mgr.cpp",
    "checkDbBattlePassConfig",
    83);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 112),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v8 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1A1921A0);
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, schedule_id);
  common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v9, (const char (*)[31])byte_1A1921E0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 112));
  *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v10 = 0;
LABEL_18:
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( v10 == 1 )
    v2 = 0;
  std::map<unsigned int,std::pair<unsigned int,unsigned int>>::~map((std::map<unsigned int,std::pair<unsigned int,unsigned int>> *const)(v3 + 176));
  result = v2;
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 91: range 000000000CD62CA2-000000000CD62E55
const data::BattlePassDbScheduleConfig *__fastcall data::DbBattlePassConfigMgr::findBattlePassScheduleConfig(
        const data::DbBattlePassConfigMgr *const this,
        uint32_t schedule_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const data::DbBattlePassConfigMgr *v5; // rax
  const data::DbBattlePassConfigMgr *v6; // rax
  bool v7; // al
  const data::BattlePassDbScheduleConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 schedule_id:90 64 8 7 iter:92 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DbBattlePassConfigMgr::findBattlePassScheduleConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = schedule_id;
  v5 = this;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::BattlePassDbScheduleConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::BattlePassDbScheduleConfig>::find(&v5->schedule_config_map_, (const std::unordered_map<unsigned int,data::BattlePassDbScheduleConfig>::key_type *)(v2 + 48));
  v6 = this;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::BattlePassDbScheduleConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::BattlePassDbScheduleConfig>::end(&v6->schedule_config_map_);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::BattlePassDbScheduleConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BattlePassDbScheduleConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BattlePassDbScheduleConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BattlePassDbScheduleConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BattlePassDbScheduleConfig>,false,false> *const)(v2 + 64))->second;
  if ( v9 == (char *)v2 )
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
  return result;
};

// Line 102: range 000000000CD62E56-000000000CD62E63
const std::unordered_map<unsigned int,data::BattlePassDbScheduleConfig> *__cdecl data::DbBattlePassConfigMgr::getScheduleMap(
        data::DbBattlePassConfigMgr *const this)
{
  return &this->schedule_config_map_;
};
