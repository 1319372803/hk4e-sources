// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_activity_schedule_config_mgr.cpp

// Line 20: range 000000000CEEA93E-000000000CEEADDE
// local variable allocation has failed, the output may be wrong!
void __cdecl data::populate_t_activity_schedule_config<(mysqlpp::sql_dummy_type)0>(
        data::t_activity_schedule_config *s,
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
  *(_QWORD *)(p_anon_0 + 16) = data::populate_t_activity_schedule_config<(mysqlpp::sql_dummy_type)0>;
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

// Line 20: range 000000000CE3E992-000000000CE3EA3F
void __cdecl data::t_activity_schedule_config::t_activity_schedule_config(
        data::t_activity_schedule_config *const this,
        const mysqlpp::Row *row)
{
  std::string::basic_string(&this->begin_time);
  std::string::basic_string(&this->end_time);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  data::populate_t_activity_schedule_config<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 20: range 000000000D3A4222-000000000D3A432F
void __cdecl data::t_activity_schedule_config::t_activity_schedule_config(
        data::t_activity_schedule_config *const this,
        data::t_activity_schedule_config *a2)
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
  std::string::basic_string(&this->begin_time, &a2->begin_time);
  std::string::basic_string(&this->end_time, &a2->end_time);
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 20: range 000000000D0C8B6C-000000000D0C8B9A
void __cdecl data::t_activity_schedule_config::~t_activity_schedule_config(
        data::t_activity_schedule_config *const this)
{
  std::string::~string(&this->end_time);
  std::string::~string(&this->begin_time);
};

// Line 26: range 000000000CD5DA1E-000000000CD5EA47
int32_t __cdecl data::DbActivityScheduleConfigMgr::loadDbActivityScheduleConfig(
        data::DbActivityScheduleConfigMgr *const this,
        common::midb::MysqlConnPtr *conn_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  mysqlpp::Connection *v6; // rsi
  __int64 v7; // rax
  std::logic_error *exception; // rdi
  int TimeByStr; // edi
  int v10; // esi
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int v14; // eax
  unsigned int v15; // ecx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  data::ActivityScheduleConfig *v23; // rdx
  unsigned int *v24; // rcx
  data::ActivityScheduleConfig *v25; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityScheduleConfig>,false,false>,bool> v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  common::milog::MiLogStream *v29; // rax
  int v30; // edx
  _BOOL4 v31; // r15d
  unsigned __int64 v32; // rax
  uint32_t now; // [rsp+24h] [rbp-4ECh]
  std::vector<data::t_activity_schedule_config> *__for_range; // [rsp+28h] [rbp-4E8h]
  __gnu_cxx::__normal_iterator<data::t_activity_schedule_config*,std::vector<data::t_activity_schedule_config> >::reference row; // [rsp+30h] [rbp-4E0h]
  char v38[1232]; // [rsp+40h] [rbp-4D0h] BYREF

  v3 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1184LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 32 8 14 __for_begin:49 64 8 12 __for_end:49 96 12 9 config:51 128 24 10 row_vec:42 192 32 9 <"
                        "unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 544 8 query:35";
  *(_QWORD *)(v3 + 16) = data::DbActivityScheduleConfigMgr::loadDbActivityScheduleConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -219020288;
  v5[536862724] = -234881024;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862753] = -202116109;
  v5[536862754] = -202116109;
  v5[536862755] = -202116109;
  v5[536862756] = -202116109;
  if ( std::operator==<mysqlpp::Connection>(0LL, conn_ptr) )
  {
    if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 96 + 63) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/db_data_manual/db_activity_schedule_config_mgr.cpp",
      "loadDbActivityScheduleConfig",
      29);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
      (common::milog::MiLogStream *const)(v3 + 192),
      (const char (*)[17])"conn_ptr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
    v2 = -1;
  }
  else
  {
    now = common::tools::TimeUtils::getNow();
    v6 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_ptr);
    if ( *(char *)(((v3 + 512) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1055) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 96 + 127) & 7) >= *(_BYTE *)(((v3 + 1055) >> 3) + 0x7FFF8000) )
    {
      v6 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v3 + 512, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 512), v6, "select ");
    v7 = std::operator<<<std::char_traits<char>>(v3 + 512, "schedule_id, begin_time, end_time ");
    std::operator<<<std::char_traits<char>>(v7, "from t_activity_schedule_config ");
    std::vector<data::t_activity_schedule_config>::vector((std::vector<data::t_activity_schedule_config> *const)(v3 + 128));
    mysqlpp::Query::storein<std::vector<data::t_activity_schedule_config>>(
      (mysqlpp::Query *const)(v3 + 512),
      (std::vector<data::t_activity_schedule_config> *)(v3 + 128));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 512)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    __for_range = (std::vector<data::t_activity_schedule_config> *)(v3 + 128);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::t_activity_schedule_config>::iterator *)(v3 + 32) = std::vector<data::t_activity_schedule_config>::begin(__for_range);
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::t_activity_schedule_config>::iterator *)(v3 + 64) = std::vector<data::t_activity_schedule_config>::end(__for_range);
    while ( __gnu_cxx::operator!=<data::t_activity_schedule_config *,std::vector<data::t_activity_schedule_config>>(
              (const __gnu_cxx::__normal_iterator<data::t_activity_schedule_config*,std::vector<data::t_activity_schedule_config> > *)(v3 + 32),
              (const __gnu_cxx::__normal_iterator<data::t_activity_schedule_config*,std::vector<data::t_activity_schedule_config> > *)(v3 + 64)) )
    {
      row = __gnu_cxx::__normal_iterator<data::t_activity_schedule_config *,std::vector<data::t_activity_schedule_config>>::operator*((const __gnu_cxx::__normal_iterator<data::t_activity_schedule_config*,std::vector<data::t_activity_schedule_config> > *const)(v3 + 32));
      *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = 1024;
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 96);
      *(_DWORD *)(v3 + 96) = 0;
      if ( *(_BYTE *)(((v3 + 100) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 + 100) & 7) + 3) >= *(_BYTE *)(((v3 + 100) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v3 + 100);
      }
      *(_DWORD *)(v3 + 100) = 0;
      if ( *(_BYTE *)(((v3 + 104) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 104) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 104);
      *(_DWORD *)(v3 + 104) = 0;
      if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(row);
      }
      *(_DWORD *)(v3 + 96) = row->schedule_id;
      TimeByStr = common::tools::TimeUtils::getTimeByStr(&row->begin_time);
      if ( *(_BYTE *)(((v3 + 100) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 + 100) & 7) + 3) >= *(_BYTE *)(((v3 + 100) >> 3) + 0x7FFF8000) )
      {
        TimeByStr = v3 + 100;
        __asan_report_store4(v3 + 100);
      }
      *(_DWORD *)(v3 + 100) = TimeByStr;
      v10 = common::tools::TimeUtils::getTimeByStr(&row->end_time);
      if ( *(_BYTE *)(((v3 + 104) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 104) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 104);
      *(_DWORD *)(v3 + 104) = v10;
      if ( *(_BYTE *)(((v3 + 100) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 + 100) & 7) + 3) >= *(_BYTE *)(((v3 + 100) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v3 + 100);
      }
      if ( !*(_DWORD *)(v3 + 100) || !*(_DWORD *)(v3 + 104) )
      {
        *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 96 + 127) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 256, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 256),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/db_data_manual/db_activity_schedule_config_mgr.cpp",
          "loadDbActivityScheduleConfig",
          57);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 256),
                (const char (*)[16])" invalid_time: ");
        v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &row->begin_time);
        v13 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v12, (const char (*)[3])", ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, &row->end_time);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
        *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
      }
      if ( *(_BYTE *)(((v3 + 104) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 104) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 104);
      if ( now < *(_DWORD *)(v3 + 104) )
      {
        if ( *(_BYTE *)(((v3 + 100) >> 3) + 0x7FFF8000) != 0
          && (char)(((v3 + 100) & 7) + 3) >= *(_BYTE *)(((v3 + 100) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v3 + 100);
        }
        v15 = *(_DWORD *)(v3 + 100);
        if ( *(_BYTE *)(((v3 + 104) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 104) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 104);
        if ( v15 < *(_DWORD *)(v3 + 104) )
        {
          v23 = std::move<data::ActivityScheduleConfig &>((data::ActivityScheduleConfig *)(v3 + 96));
          v26 = std::unordered_map<unsigned int,data::ActivityScheduleConfig>::emplace<unsigned int &,data::ActivityScheduleConfig>(
                  &this->schedule_config_map_,
                  (unsigned int *)(v3 + 96),
                  v23,
                  v24,
                  v25);
          if ( !v26.second )
          {
            *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 384) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 384, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 384),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/db_data_manual/db_activity_schedule_config_mgr.cpp",
              "loadDbActivityScheduleConfig",
              71);
            v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 384),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v28 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                    v27,
                    (const char (*)[10])byte_1A191180);
            v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &row->schedule_id);
            common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v29, (const char (*)[10])byte_1A11C6C0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
            *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v14 = 1;
          }
          else
          {
            v14 = 2;
          }
        }
        else
        {
          *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 320) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 320, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 320),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/db_data_manual/db_activity_schedule_config_mgr.cpp",
            "loadDbActivityScheduleConfig",
            66);
          v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 320),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v17 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v16, (const char (*)[39])byte_1A191060);
          v18 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, &row->begin_time);
          v19 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v18, (const char (*)[4])" > ");
          v20 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v19, (const char (*)[14])byte_1A191100);
          v21 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, &row->end_time);
          v22 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v21, (const char (*)[11])byte_1A191140);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &row->schedule_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
          *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v14 = 1;
        }
      }
      else
      {
        std::set<unsigned int>::insert(
          &this->expired_schedule_id_set_,
          (const std::set<unsigned int>::value_type *)(v3 + 96));
        v14 = 0;
      }
      *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -1800;
      if ( v14 && v14 != 2 )
      {
        v30 = 0;
        goto LABEL_59;
      }
      __gnu_cxx::__normal_iterator<data::t_activity_schedule_config *,std::vector<data::t_activity_schedule_config>>::operator++((__gnu_cxx::__normal_iterator<data::t_activity_schedule_config*,std::vector<data::t_activity_schedule_config> > *const)(v3 + 32));
    }
    v30 = 1;
LABEL_59:
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    v31 = v30 == 1;
    std::vector<data::t_activity_schedule_config>::~vector((std::vector<data::t_activity_schedule_config> *const)(v3 + 128));
    v32 = ((v3 + 128) >> 3) + 2147450880;
    *(_WORD *)v32 = -1800;
    *(_BYTE *)(v32 + 2) = -8;
    if ( v31 )
      v2 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 512));
  }
  if ( v38 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF803C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8084) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF808C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1184LL, v38);
  }
  return v2;
};

// Line 85: range 000000000CD5EA48-000000000CD5EA56
int32_t __cdecl data::DbActivityScheduleConfigMgr::rewriteDbActivityScheduleConfig(
        data::DbActivityScheduleConfigMgr *const this)
{
  return 0;
};

// Line 90: range 000000000CD5EA58-000000000CD5FE70
int32_t __cdecl data::DbActivityScheduleConfigMgr::checkDbActivityScheduleConfig(
        data::DbActivityScheduleConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  NewActivityExcelConfigMgr *v9; // rcx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  time_t v15; // rcx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  uint32_t NextDayClock; // edx
  common::milog::MiLogStream *v25; // rax
  ActivitySalesmanExcelConfigMgr *p_activity_salesman_config_mgr; // rcx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  time_t v32; // rcx
  int TimeDay; // esi
  time_t v34; // rcx
  int v35; // esi
  unsigned int v36; // ecx
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rdx
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // r14
  std::vector<unsigned int>::size_type v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  int v48; // ecx
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rdx
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // r14
  std::vector<unsigned int>::size_type v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  int32_t ret; // [rsp+1Ch] [rbp-2E4h]
  uint32_t time_offset_sec; // [rsp+20h] [rbp-2E0h]
  uint32_t day; // [rsp+24h] [rbp-2DCh]
  uint32_t daily_start_time; // [rsp+28h] [rbp-2D8h]
  uint32_t time_offset_sec_0; // [rsp+2Ch] [rbp-2D4h]
  uint32_t end_day_start_time; // [rsp+30h] [rbp-2D0h]
  uint32_t duration_days; // [rsp+34h] [rbp-2CCh]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityScheduleConfig>,false,false>::reference v69; // [rsp+40h] [rbp-2C0h]
  uint32_t *schedule_id; // [rsp+48h] [rbp-2B8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityScheduleConfig> >::type *schedule_config; // [rsp+50h] [rbp-2B0h]
  const data::NewActivityScheduleExcelConfig *schedule_excel_config_ptr; // [rsp+58h] [rbp-2A8h]
  const data::NewActivityExcelConfig *activity_config_ptr; // [rsp+60h] [rbp-2A0h]
  data::ActivitySalesmanExcelConfig *salesman_config_ptr; // [rsp+68h] [rbp-298h]
  char v75[656]; // [rsp+70h] [rbp-290h] BYREF

  v2 = (unsigned __int64)v75;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "13 48 4 9 <unknown> 64 4 13 start_day:134 80 4 11 end_day:135 96 8 14 __for_begin:92 128 8 12 __"
                        "for_end:92 160 8 9 <unknown> 192 8 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <u"
                        "nknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DbActivityScheduleConfigMgr::checkDbActivityScheduleConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -202116109;
  ret = 0;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::ActivityScheduleConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityScheduleConfig>::begin(&this->schedule_config_map_);
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::ActivityScheduleConfig>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,data::ActivityScheduleConfig>::end(&this->schedule_config_map_);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityScheduleConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityScheduleConfig>,false> *)(v2 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityScheduleConfig>,false> *)(v2 + 128)) )
  {
    v69 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityScheduleConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityScheduleConfig>,false,false> *const)(v2 + 96));
    schedule_id = std::get<0ul,unsigned int const,data::ActivityScheduleConfig>(v69);
    schedule_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityScheduleConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityScheduleConfig>(v69);
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)schedule_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(schedule_id);
    }
    schedule_excel_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityScheduleExcelConfig(
                                  p_new_activity_config_mgr,
                                  *schedule_id);
    if ( schedule_excel_config_ptr )
    {
      v9 = &txt_config_mgr->new_activity_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&schedule_excel_config_ptr->activity_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&schedule_excel_config_ptr->activity_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&schedule_excel_config_ptr->activity_id);
      }
      activity_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityExcelConfig(
                              v9,
                              schedule_excel_config_ptr->activity_id);
      if ( activity_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&activity_config_ptr->activity_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)activity_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&activity_config_ptr->activity_type >> 3)
                                                                             + 0x7FFF8000) )
        {
          __asan_report_load4(&activity_config_ptr->activity_type);
        }
        if ( activity_config_ptr->activity_type != NEW_ACTIVITY_SALESMAN )
          goto LABEL_35;
        time_offset_sec = ConstValueExcelConfigMgr::getTimeOffsetSec(&txt_config_mgr->const_value_config_mgr);
        v15 = time_offset_sec;
        if ( *(_BYTE *)(((unsigned __int64)&schedule_config->begin_time >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)schedule_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->begin_time >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(&schedule_config->begin_time);
        }
        day = common::tools::TimeUtils::getTimeDay(schedule_config->begin_time, v15);
        daily_start_time = common::tools::TimeUtils::getDailyStartTime(day, time_offset_sec);
        if ( *(_BYTE *)(((unsigned __int64)&schedule_config->begin_time >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)schedule_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->begin_time >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(&schedule_config->begin_time);
        }
        if ( daily_start_time == schedule_config->begin_time )
        {
LABEL_35:
          if ( *(_BYTE *)(((unsigned __int64)&activity_config_ptr->activity_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)activity_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&activity_config_ptr->activity_type >> 3)
                                                                               + 0x7FFF8000) )
          {
            __asan_report_load4(&activity_config_ptr->activity_type);
          }
          if ( activity_config_ptr->activity_type == NEW_ACTIVITY_SALESMAN_MP )
          {
            p_activity_salesman_config_mgr = &txt_config_mgr->activity_salesman_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)schedule_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)schedule_id >> 3)
                                                                            + 0x7FFF8000) )
            {
              __asan_report_load4(schedule_id);
            }
            salesman_config_ptr = data::ActivitySalesmanExcelConfigMgrBase::findActivitySalesmanExcelConfig(
                                    p_activity_salesman_config_mgr,
                                    *schedule_id);
            if ( salesman_config_ptr )
            {
              time_offset_sec_0 = ConstValueExcelConfigMgr::getTimeOffsetSec(&txt_config_mgr->const_value_config_mgr);
              *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
              v32 = time_offset_sec_0;
              if ( *(_BYTE *)(((unsigned __int64)&schedule_config->begin_time >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)schedule_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->begin_time >> 3)
                                                                              + 0x7FFF8000) )
              {
                __asan_report_load4(&schedule_config->begin_time);
              }
              TimeDay = common::tools::TimeUtils::getTimeDay(schedule_config->begin_time, v32);
              if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_store4(v2 + 64);
              *(_DWORD *)(v2 + 64) = TimeDay;
              *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
              v34 = time_offset_sec_0;
              if ( *(_BYTE *)(((unsigned __int64)&schedule_config->end_time >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)schedule_config + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->end_time >> 3)
                                                                              + 0x7FFF8000) )
              {
                __asan_report_load4(&schedule_config->end_time);
              }
              v35 = common::tools::TimeUtils::getTimeDay(schedule_config->end_time, v34);
              if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_store4(v2 + 80);
              *(_DWORD *)(v2 + 80) = v35;
              end_day_start_time = common::tools::TimeUtils::getDailyStartTime(
                                     *(unsigned int *)(v2 + 80),
                                     time_offset_sec_0);
              duration_days = std::vector<unsigned int>::size(&salesman_config_ptr->daily_config_id_list);
              if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v2 + 80);
              v36 = *(_DWORD *)(v2 + 80);
              if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v2 + 64);
              if ( v36 >= *(_DWORD *)(v2 + 64) && duration_days >= *(_DWORD *)(v2 + 80) - *(_DWORD *)(v2 + 64) )
              {
                if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
                  __asan_report_load4(v2 + 80);
                v48 = *(_DWORD *)(v2 + 80);
                if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
                  __asan_report_load4(v2 + 64);
                if ( duration_days == v48 - *(_DWORD *)(v2 + 64) )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&schedule_config->end_time >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)schedule_config + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->end_time >> 3)
                                                                                  + 0x7FFF8000) )
                  {
                    __asan_report_load4(&schedule_config->end_time);
                  }
                  if ( end_day_start_time < schedule_config->end_time )
                  {
                    *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 544, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 544),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/db_data_manual/db_activity_schedule_config_mgr.cpp",
                      "checkDbActivityScheduleConfig",
                      148);
                    v49 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 544),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v50 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                            v49,
                            (const char (*)[12])byte_1A1249A0);
                    v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v50, schedule_id);
                    v52 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                            v51,
                            (const char (*)[13])" ActivityID:");
                    v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v52,
                            &schedule_excel_config_ptr->activity_id);
                    v54 = common::milog::MiLogStream::operator<<<char [85],(char *[85])0>(
                            v53,
                            (const char (*)[85])byte_1A1916A0);
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
                    v55 = std::vector<unsigned int>::size(&salesman_config_ptr->daily_config_id_list);
                    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
                      __asan_report_store8();
                    *(_QWORD *)(v2 + 192) = v55;
                    v56 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                            v54,
                            (const unsigned __int64 *)(v2 + 192));
                    v57 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                            v56,
                            (const char (*)[39])byte_1A1915E0);
                    v58 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v57,
                            (const unsigned int *)(v2 + 64));
                    v59 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                            v58,
                            (const char (*)[39])byte_1A191640);
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v59,
                      (const unsigned int *)(v2 + 80));
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
                    *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
                    ret = -1;
                  }
                }
              }
              else
              {
                *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 480, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 480),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/db_data_manual/db_activity_schedule_config_mgr.cpp",
                  "checkDbActivityScheduleConfig",
                  140);
                v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 480),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v38 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                        v37,
                        (const char (*)[12])byte_1A1249A0);
                v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, schedule_id);
                v40 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                        v39,
                        (const char (*)[13])" ActivityID:");
                v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v40,
                        &schedule_excel_config_ptr->activity_id);
                v42 = common::milog::MiLogStream::operator<<<char [79],(char *[79])0>(
                        v41,
                        (const char (*)[79])byte_1A191560);
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
                v43 = std::vector<unsigned int>::size(&salesman_config_ptr->daily_config_id_list);
                if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
                  __asan_report_store8();
                *(_QWORD *)(v2 + 160) = v43;
                v44 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                        v42,
                        (const unsigned __int64 *)(v2 + 160));
                v45 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                        v44,
                        (const char (*)[39])byte_1A1915E0);
                v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v45,
                        (const unsigned int *)(v2 + 64));
                v47 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                        v46,
                        (const char (*)[39])byte_1A191640);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v47,
                  (const unsigned int *)(v2 + 80));
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
                *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
            }
            else
            {
              *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 416, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 416),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/db_data_manual/db_activity_schedule_config_mgr.cpp",
                "checkDbActivityScheduleConfig",
                129);
              v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 416),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v28 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v27,
                      (const char (*)[12])byte_1A1249A0);
              v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, schedule_id);
              v30 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v29,
                      (const char (*)[13])" ActivityID:");
              v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v30,
                      &schedule_excel_config_ptr->activity_id);
              common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v31, (const char (*)[46])byte_1A191500);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
              *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
            *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
          }
        }
        else
        {
          *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 352) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 352, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 352),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/db_data_manual/db_activity_schedule_config_mgr.cpp",
            "checkDbActivityScheduleConfig",
            117);
          v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 352),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v17 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v16, (const char (*)[12])byte_1A1249A0);
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, schedule_id);
          v19 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v18, (const char (*)[13])" ActivityID:");
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v19,
                  &schedule_excel_config_ptr->activity_id);
          v21 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v20, (const char (*)[37])byte_1A191420);
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v21,
                  &schedule_config->begin_time);
          v23 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v22, (const char (*)[26])byte_1A191480);
          *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
          NextDayClock = ConstValueExcelConfigMgr::getNextDayClock(&txt_config_mgr->const_value_config_mgr);
          if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v2 + 48);
          *(_DWORD *)(v2 + 48) = NextDayClock;
          v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v23,
                  (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v25, (const char (*)[4])off_1A1914C0);
          *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
          *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      else
      {
        ret = -1;
        *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 288, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 288),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_activity_schedule_config_mgr.cpp",
          "checkDbActivityScheduleConfig",
          106);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 288),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v11 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v10, (const char (*)[21])byte_1A191360);
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, schedule_id);
        v13 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v12, (const char (*)[15])byte_1A1913A0);
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                &schedule_excel_config_ptr->activity_id);
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])byte_1A117C40);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
        *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    else
    {
      ret = -1;
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/db_data_manual/db_activity_schedule_config_mgr.cpp",
        "checkDbActivityScheduleConfig",
        99);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 224),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v6, (const char (*)[21])byte_1A191360);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, schedule_id);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v8, (const char (*)[7])byte_1A117C40);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityScheduleConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityScheduleConfig>,false,false> *const)(v2 + 96));
  }
  if ( v75 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
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
  return ret;
};

// Line 160: range 000000000CD5FE72-000000000CD60025
const data::ActivityScheduleConfig *__fastcall data::DbActivityScheduleConfigMgr::findActivityScheduleConfig(
        const data::DbActivityScheduleConfigMgr *const this,
        uint32_t schedule_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const data::DbActivityScheduleConfigMgr *v5; // rax
  const data::DbActivityScheduleConfigMgr *v6; // rax
  bool v7; // al
  const data::ActivityScheduleConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 schedule_id:159 64 8 8 iter:161 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DbActivityScheduleConfigMgr::findActivityScheduleConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = schedule_id;
  v5 = this;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::ActivityScheduleConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityScheduleConfig>::find(
                                                                                                  &v5->schedule_config_map_,
                                                                                                  (const std::unordered_map<unsigned int,data::ActivityScheduleConfig>::key_type *)(v2 + 48));
  v6 = this;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::ActivityScheduleConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityScheduleConfig>::end(&v6->schedule_config_map_);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,data::ActivityScheduleConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityScheduleConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityScheduleConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityScheduleConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityScheduleConfig>,false,false> *const)(v2 + 64))->second;
  else
    result = 0LL;
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
