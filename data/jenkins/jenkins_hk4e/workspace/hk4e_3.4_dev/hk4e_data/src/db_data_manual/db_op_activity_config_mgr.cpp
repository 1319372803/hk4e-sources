// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_op_activity_config_mgr.cpp

// Line 20: range 000000000CF1B0ED-000000000CF1B5FB
// local variable allocation has failed, the output may be wrong!
void __cdecl data::populate_t_op_activity_schedule_config<(mysqlpp::sql_dummy_type)0>(
        data::t_op_activity_schedule_config *s,
        const mysqlpp::Row *row)
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
  *(_QWORD *)(p_anon_0 + 16) = data::populate_t_op_activity_schedule_config<(mysqlpp::sql_dummy_type)0>;
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
    && (char)((p_anon_0 + 31) & 7) >= *(_BYTE *)(((p_anon_0 + 287) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 256, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 256), v10, rowa);
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

// Line 20: range 000000000CE46202-000000000CE462AF
void __cdecl data::t_op_activity_schedule_config::t_op_activity_schedule_config(
        data::t_op_activity_schedule_config *const this,
        const mysqlpp::Row *row)
{
  std::string::basic_string(&this->begin_time);
  std::string::basic_string(&this->end_time);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  data::populate_t_op_activity_schedule_config<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 20: range 000000000D3C0982-000000000D3C0B14
void __cdecl data::t_op_activity_schedule_config::t_op_activity_schedule_config(
        data::t_op_activity_schedule_config *const this,
        data::t_op_activity_schedule_config *a2)
{
  mysqlpp::sql_int_unsigned schedule_id; // ecx
  mysqlpp::sql_int_unsigned config_id; // ecx
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
  if ( *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->config_id);
  }
  config_id = a2->config_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_id);
  }
  this->config_id = config_id;
  std::string::basic_string(&this->begin_time, &a2->begin_time);
  std::string::basic_string(&this->end_time, &a2->end_time);
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 20: range 000000000D0F80EA-000000000D0F8118
void __cdecl data::t_op_activity_schedule_config::~t_op_activity_schedule_config(
        data::t_op_activity_schedule_config *const this)
{
  std::string::~string(&this->end_time);
  std::string::~string(&this->begin_time);
};

// Line 27: range 000000000CDB0D54-000000000CDB1D18
int32_t __cdecl data::DbOpActivityConfigMgr::loadDbOpActivityConfig(
        data::DbOpActivityConfigMgr *const this,
        common::midb::MysqlConnPtr *conn_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  mysqlpp::Connection *v6; // rsi
  __int64 v7; // rax
  std::logic_error *exception; // rdi
  int TimeByStr; // esi
  int v10; // edi
  data::OpActivityScheduleConfig *v11; // r8
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int v14; // eax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::OpActivityScheduleConfig>,false,false>,bool> v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  int v18; // edx
  int v19; // r15d
  common::milog::MiLogStream *v20; // r15
  std::vector<data::t_op_activity_schedule_config>::size_type v21; // rax
  common::milog::MiLogStream *v22; // rax
  unsigned __int64 v23; // rax
  std::vector<data::t_op_activity_schedule_config> *__for_range; // [rsp+28h] [rbp-508h]
  __gnu_cxx::__normal_iterator<data::t_op_activity_schedule_config*,std::vector<data::t_op_activity_schedule_config> >::reference row; // [rsp+30h] [rbp-500h]
  char v28[1264]; // [rsp+40h] [rbp-4F0h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1216LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 32 8 14 __for_begin:47 64 8 12 __for_end:47 96 8 9 <unknown> 128 16 9 config:49 160 24 10 row"
                        "_vec:40 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <un"
                        "known> 544 544 8 query:34";
  *(_QWORD *)(v3 + 16) = data::DbOpActivityConfigMgr::loadDbOpActivityConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862725] = -234881024;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862754] = -202116109;
  v5[536862755] = -202116109;
  v5[536862756] = -202116109;
  v5[536862757] = -202116109;
  if ( std::operator==<mysqlpp::Connection>(0LL, conn_ptr) )
  {
    if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 64 + 63) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/db_data_manual/db_op_activity_config_mgr.cpp",
      "loadDbOpActivityConfig",
      30);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
      (common::milog::MiLogStream *const)(v3 + 224),
      (const char (*)[17])"conn_ptr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    v2 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_ptr);
    if ( *(char *)(((v3 + 544) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1087) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 64 + 127) & 7) >= *(_BYTE *)(((v3 + 1087) >> 3) + 0x7FFF8000) )
    {
      v6 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v3 + 544, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 544), v6, "select ");
    v7 = std::operator<<<std::char_traits<char>>(v3 + 544, "schedule_id, config_id, begin_time, end_time");
    std::operator<<<std::char_traits<char>>(v7, " from t_op_activity_schedule_config");
    std::vector<data::t_op_activity_schedule_config>::vector((std::vector<data::t_op_activity_schedule_config> *const)(v3 + 160));
    mysqlpp::Query::storein<std::vector<data::t_op_activity_schedule_config>>(
      (mysqlpp::Query *const)(v3 + 544),
      (std::vector<data::t_op_activity_schedule_config> *)(v3 + 160));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 544)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    __for_range = (std::vector<data::t_op_activity_schedule_config> *)(v3 + 160);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::t_op_activity_schedule_config>::iterator *)(v3 + 32) = std::vector<data::t_op_activity_schedule_config>::begin(__for_range);
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::t_op_activity_schedule_config>::iterator *)(v3 + 64) = std::vector<data::t_op_activity_schedule_config>::end(__for_range);
    while ( __gnu_cxx::operator!=<data::t_op_activity_schedule_config *,std::vector<data::t_op_activity_schedule_config>>(
              (const __gnu_cxx::__normal_iterator<data::t_op_activity_schedule_config*,std::vector<data::t_op_activity_schedule_config> > *)(v3 + 32),
              (const __gnu_cxx::__normal_iterator<data::t_op_activity_schedule_config*,std::vector<data::t_op_activity_schedule_config> > *)(v3 + 64)) )
    {
      row = __gnu_cxx::__normal_iterator<data::t_op_activity_schedule_config *,std::vector<data::t_op_activity_schedule_config>>::operator*((const __gnu_cxx::__normal_iterator<data::t_op_activity_schedule_config*,std::vector<data::t_op_activity_schedule_config> > *const)(v3 + 32));
      *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
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
      if ( *(_BYTE *)(((v3 + 140) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 - 116) & 7) + 3) >= *(_BYTE *)(((v3 + 140) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v3 + 140);
      }
      *(_DWORD *)(v3 + 140) = 0;
      if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(row);
      }
      *(_DWORD *)(v3 + 128) = row->schedule_id;
      if ( *(_BYTE *)(((unsigned __int64)&row->config_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)row + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->config_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&row->config_id);
      }
      *(_DWORD *)(v3 + 132) = row->config_id;
      TimeByStr = common::tools::TimeUtils::getTimeByStr(&row->begin_time);
      if ( *(_BYTE *)(((v3 + 136) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 136) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 136);
      *(_DWORD *)(v3 + 136) = TimeByStr;
      v10 = common::tools::TimeUtils::getTimeByStr(&row->end_time);
      if ( *(_BYTE *)(((v3 + 140) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 - 116) & 7) + 3) >= *(_BYTE *)(((v3 + 140) >> 3) + 0x7FFF8000) )
      {
        v10 = v3 + 140;
        __asan_report_store4(v3 + 140);
      }
      *(_DWORD *)(v3 + 140) = v10;
      if ( *(_BYTE *)(((v3 + 136) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 136) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 136);
      if ( *(_DWORD *)(v3 + 136) && *(_DWORD *)(v3 + 140) )
      {
        v15 = std::unordered_map<unsigned int,data::OpActivityScheduleConfig>::emplace<unsigned int &,data::OpActivityScheduleConfig&>(
                &this->schedule_config_map_,
                (unsigned int *)(v3 + 128),
                (data::OpActivityScheduleConfig *)(v3 + 128),
                (unsigned int *)(v3 + 128),
                v11);
        if ( !v15.second )
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
            4u,
            "./src/db_data_manual/db_op_activity_config_mgr.cpp",
            "loadDbOpActivityConfig",
            61);
          v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 352),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v17 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v16, (const char (*)[45])byte_1A1A4160);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 128));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
          *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v14 = 0;
        }
        else
        {
          v14 = 1;
        }
      }
      else
      {
        *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 64 + 127) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 288, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 288),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_op_activity_config_mgr.cpp",
          "loadDbOpActivityConfig",
          56);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 288),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v12, (const char (*)[51])byte_1A1A4100);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 128));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
        *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v14 = 0;
      }
      *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -1800;
      if ( v14 != 1 )
      {
        v18 = 0;
        goto LABEL_50;
      }
      __gnu_cxx::__normal_iterator<data::t_op_activity_schedule_config *,std::vector<data::t_op_activity_schedule_config>>::operator++((__gnu_cxx::__normal_iterator<data::t_op_activity_schedule_config*,std::vector<data::t_op_activity_schedule_config> > *const)(v3 + 32));
    }
    v18 = 1;
LABEL_50:
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( v18 == 1 )
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
        1u,
        "./src/db_data_manual/db_op_activity_config_mgr.cpp",
        "loadDbOpActivityConfig",
        66);
      v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
              (common::milog::MiLogStream *const)(v3 + 416),
              (const char (*)[6])"load ");
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
      v21 = std::vector<data::t_op_activity_schedule_config>::size((const std::vector<data::t_op_activity_schedule_config> *const)(v3 + 160));
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)(v3 + 96) = v21;
      v22 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v20,
              (const unsigned __int64 *)(v3 + 96));
      common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
        v22,
        (const char (*)[43])" config from t_op_activity_schedule_config");
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
      v19 = 1;
    }
    else
    {
      v19 = 0;
    }
    std::vector<data::t_op_activity_schedule_config>::~vector((std::vector<data::t_op_activity_schedule_config> *const)(v3 + 160));
    v23 = ((v3 + 160) >> 3) + 2147450880;
    *(_WORD *)v23 = -1800;
    *(_BYTE *)(v23 + 2) = -8;
    if ( v19 == 1 )
      v2 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 544));
  }
  if ( v28 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8088) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8090) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1216LL, v28);
  }
  return v2;
};

// Line 78: range 000000000CDB1D1A-000000000CDB3AA6
int32_t __cdecl data::DbOpActivityConfigMgr::rewriteDbOpActivityConfig(data::DbOpActivityConfigMgr *const this)
{
  int32_t v1; // r14d
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const data::OpActivityScheduleConfig *v5; // r8
  uint32_t *p_begin_time; // rax
  uint32_t begin_time; // ecx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  time_t v14; // rdi
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  time_t end_time; // rdi
  int v18; // eax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::OpActivityScheduleConfig>,false,false>,bool> v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  time_t v26; // rdi
  common::milog::MiLogStream *v27; // rax
  time_t v28; // rdi
  unsigned __int64 v29; // rax
  const unsigned int *v30; // r8
  bool *v31; // r9
  const unsigned int *v32; // r8
  bool *v33; // r9
  std::vector<std::tuple<unsigned int,bool,unsigned int>>::iterator v34; // rax
  unsigned __int64 v35; // rax
  unsigned __int64 n; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rdx
  int v40; // eax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rdx
  time_t v44; // rdi
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rdx
  const unsigned int *v48; // [rsp+0h] [rbp-5E0h]
  const unsigned int *v49; // [rsp+0h] [rbp-5E0h]
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // [rsp+8h] [rbp-5D8h]
  common::milog::MiLogStream *__last; // [rsp+10h] [rbp-5D0h]
  common::milog::MiLogStream *__lasta; // [rsp+10h] [rbp-5D0h]
  std::tuple<unsigned int,bool,unsigned int> *__lastd; // [rsp+10h] [rbp-5D0h]
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __lastb; // [rsp+10h] [rbp-5D0h]
  common::milog::MiLogStream *__lastc; // [rsp+10h] [rbp-5D0h]
  uint32_t now; // [rsp+24h] [rbp-5BCh]
  std::unordered_map<unsigned int,data::OpActivityScheduleConfig> *__for_range; // [rsp+28h] [rbp-5B8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::OpActivityScheduleConfig>,false,false>::reference v59; // [rsp+30h] [rbp-5B0h]
  std::tuple_element<0,std::pair<unsigned int const,data::OpActivityScheduleConfig> >::type *schedule_id; // [rsp+38h] [rbp-5A8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::OpActivityScheduleConfig> >::type *config; // [rsp+40h] [rbp-5A0h]
  std::vector<std::tuple<unsigned int,bool,unsigned int>> *__for_range_1; // [rsp+50h] [rbp-590h]
  std::tuple_element<0,const std::tuple<unsigned int,bool,unsigned int> >::type *timestamp; // [rsp+58h] [rbp-588h]
  std::tuple_element<1,const std::tuple<unsigned int,bool,unsigned int> >::type *is_end; // [rsp+60h] [rbp-580h]
  std::tuple_element<2,const std::tuple<unsigned int,bool,unsigned int> >::type *schedule_id_1; // [rsp+68h] [rbp-578h]
  std::vector<unsigned int> *schedule_id_vec; // [rsp+70h] [rbp-570h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::OpActivityScheduleConfig>,false,false>::reference v67; // [rsp+78h] [rbp-568h]
  std::tuple_element<0,std::pair<unsigned int const,data::OpActivityScheduleConfig> >::type *schedule_id_0; // [rsp+80h] [rbp-560h]
  std::tuple_element<1,const std::pair<unsigned int const,data::OpActivityScheduleConfig> >::type *config_0; // [rsp+88h] [rbp-558h]
  char v70[1360]; // [rsp+90h] [rbp-550h] BYREF

  v2 = (unsigned __int64)v70;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1312LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "25 48 1 9 <unknown> 64 1 9 <unknown> 80 8 14 __for_begin:84 112 8 12 __for_end:84 144 8 15 __for"
                        "_begin:110 176 8 13 __for_end:110 208 8 15 __for_begin:117 240 8 13 __for_end:117 272 8 9 <unkno"
                        "wn> 304 8 9 <unknown> 336 12 9 <unknown> 368 24 27 timestamp_end_point_vec:109 432 32 9 <unknown"
                        "> 496 32 9 <unknown> 560 32 9 <unknown> 624 32 9 <unknown> 688 32 9 <unknown> 752 32 9 <unknown>"
                        " 816 32 9 <unknown> 880 32 9 <unknown> 944 32 9 <unknown> 1008 32 9 <unknown> 1072 32 9 <unknown"
                        "> 1136 48 19 schedule_id_set:116 1216 56 27 temp_schedule_config_map:82";
  *(_QWORD *)(v2 + 16) = data::DbOpActivityConfigMgr::rewriteDbOpActivityConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = 61953;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862723] = -234881024;
  v4[536862724] = 62194;
  v4[536862724] = -234881024;
  v4[536862725] = 62194;
  v4[536862725] = -234881024;
  v4[536862726] = 62194;
  v4[536862726] = -234881024;
  v4[536862727] = 62194;
  v4[536862727] = -234881024;
  v4[536862728] = 62194;
  v4[536862728] = -234881024;
  v4[536862729] = 62194;
  v4[536862729] = -234881024;
  v4[536862730] = 62194;
  v4[536862730] = 0x4000000;
  v4[536862731] = 62194;
  v4[536862732] = -218959360;
  v4[536862733] = 62194;
  v4[536862734] = -219021312;
  v4[536862735] = 62194;
  v4[536862736] = -219021312;
  v4[536862737] = 62194;
  v4[536862738] = -219021312;
  v4[536862739] = 62194;
  v4[536862740] = -219021312;
  v4[536862741] = 62194;
  v4[536862742] = -219021312;
  v4[536862743] = 62194;
  v4[536862744] = -219021312;
  v4[536862745] = 62194;
  v4[536862746] = -219021312;
  v4[536862747] = 62194;
  v4[536862748] = -219021312;
  v4[536862749] = 62194;
  v4[536862750] = -219021312;
  v4[536862751] = 62194;
  v4[536862752] = -219021312;
  v4[536862753] = 62194;
  v4[536862754] = -219021312;
  v4[536862755] = 62194;
  v4[536862757] = -218959118;
  v4[536862759] = -218103808;
  v4[536862760] = -202116109;
  now = common::tools::TimeUtils::getNow();
  std::unordered_map<unsigned int,data::OpActivityScheduleConfig>::unordered_map((std::unordered_map<unsigned int,data::OpActivityScheduleConfig> *const)(v2 + 1216));
  std::unordered_map<unsigned int,data::OpActivityScheduleConfig>::swap(
    (std::unordered_map<unsigned int,data::OpActivityScheduleConfig> *const)(v2 + 1216),
    &this->schedule_config_map_);
  __for_range = (std::unordered_map<unsigned int,data::OpActivityScheduleConfig> *)(v2 + 1216);
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::OpActivityScheduleConfig>::iterator *)(v2 + 80) = std::unordered_map<unsigned int,data::OpActivityScheduleConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::OpActivityScheduleConfig>::iterator *)(v2 + 112) = std::unordered_map<unsigned int,data::OpActivityScheduleConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::OpActivityScheduleConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OpActivityScheduleConfig>,false> *)(v2 + 80),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OpActivityScheduleConfig>,false> *)(v2 + 112)) )
    {
      v18 = 1;
      goto LABEL_46;
    }
    v59 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::OpActivityScheduleConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::OpActivityScheduleConfig>,false,false> *const)(v2 + 80));
    schedule_id = std::get<0ul,unsigned int const,data::OpActivityScheduleConfig>(v59);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::OpActivityScheduleConfig> >::type *)std::get<1ul,unsigned int const,data::OpActivityScheduleConfig>(v59);
    p_begin_time = &config->begin_time;
    if ( *(_BYTE *)(((unsigned __int64)p_begin_time >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_begin_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_begin_time >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_begin_time);
    }
    begin_time = config->begin_time;
    if ( *(_BYTE *)(((unsigned __int64)&config->end_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->end_time >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->end_time);
    }
    if ( begin_time >= config->end_time )
    {
      *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 432) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 463) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 80 + 31) & 7) >= *(_BYTE *)(((v2 + 463) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 432, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 432),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/db_data_manual/db_op_activity_config_mgr.cpp",
        "rewriteDbOpActivityConfig",
        88);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 432),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(v8, (const char (*)[70])byte_1A1A44A0);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, schedule_id);
      v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])" config_id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &config->config_id);
      v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])" begin_time:");
      *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((unsigned __int64)&config->begin_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->begin_time >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&config->begin_time);
      }
      v14 = config->begin_time;
      if ( *(char *)(((v2 + 496) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 16 + 31) & 7) >= *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) )
      {
        v14 = v2 + 496;
        __asan_report_store_n(v2 + 496, 32LL);
      }
      common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)(v2 + 496), v14);
      v15 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, (const std::string *)(v2 + 496));
      v16 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v15, (const char (*)[11])" end_time:");
      *(_DWORD *)(((v2 + 560) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((unsigned __int64)&config->end_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->end_time >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&config->end_time);
      }
      end_time = config->end_time;
      if ( *(char *)(((v2 + 560) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 591) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 591) >> 3) + 0x7FFF8000) )
      {
        end_time = v2 + 560;
        __asan_report_store_n(v2 + 560, 32LL);
      }
      common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)(v2 + 560), end_time);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, (const std::string *)(v2 + 560));
      std::string::~string((void *)(v2 + 560));
      *(_DWORD *)(((v2 + 560) >> 3) + 0x7FFF8000) = -117901064;
      std::string::~string((void *)(v2 + 496));
      *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = -117901064;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 432));
      *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = -117901064;
      v1 = -1;
      v18 = 0;
      goto LABEL_46;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->end_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->end_time >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->end_time);
    }
    if ( now < config->end_time )
      break;
LABEL_44:
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::OpActivityScheduleConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::OpActivityScheduleConfig>,false,false> *const)(v2 + 80));
  }
  v19 = std::unordered_map<unsigned int,data::OpActivityScheduleConfig>::emplace<unsigned int const&,data::OpActivityScheduleConfig const&>(
          &this->schedule_config_map_,
          schedule_id,
          config,
          schedule_id,
          v5);
  if ( v19.second )
  {
    *(_DWORD *)(((v2 + 688) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 688) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 719) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 80 + 31) & 7) >= *(_BYTE *)(((v2 + 719) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 688, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 688),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/db_data_manual/db_op_activity_config_mgr.cpp",
      "rewriteDbOpActivityConfig",
      103);
    v22 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
            (common::milog::MiLogStream *const)(v2 + 688),
            (const char (*)[14])"schedule_id: ");
    v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &config->schedule_id);
    v24 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v23, (const char (*)[12])" config_id:");
    v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &config->config_id);
    __last = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v25, (const char (*)[13])" begin_time:");
    *(_DWORD *)(((v2 + 752) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((unsigned __int64)&config->begin_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->begin_time >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->begin_time);
    }
    v26 = config->begin_time;
    if ( *(char *)(((v2 + 752) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 783) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 16 + 31) & 7) >= *(_BYTE *)(((v2 + 783) >> 3) + 0x7FFF8000) )
    {
      v26 = v2 + 752;
      __asan_report_store_n(v2 + 752, 32LL);
    }
    common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)(v2 + 752), v26);
    v27 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(__last, (const std::string *)(v2 + 752));
    __lasta = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v27, (const char (*)[11])" end_time:");
    *(_DWORD *)(((v2 + 816) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((unsigned __int64)&config->end_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->end_time >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->end_time);
    }
    v28 = config->end_time;
    if ( *(char *)(((v2 + 816) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 847) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 847) >> 3) + 0x7FFF8000) )
    {
      v28 = v2 + 816;
      __asan_report_store_n(v2 + 816, 32LL);
    }
    common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)(v2 + 816), v28);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(__lasta, (const std::string *)(v2 + 816));
    std::string::~string((void *)(v2 + 816));
    *(_DWORD *)(((v2 + 816) >> 3) + 0x7FFF8000) = -117901064;
    std::string::~string((void *)(v2 + 752));
    *(_DWORD *)(((v2 + 752) >> 3) + 0x7FFF8000) = -117901064;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 688));
    *(_DWORD *)(((v2 + 688) >> 3) + 0x7FFF8000) = -117901064;
    goto LABEL_44;
  }
  *(_DWORD *)(((v2 + 624) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v2 + 624) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 655) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 655) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 624, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v2 + 624),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/db_data_manual/db_op_activity_config_mgr.cpp",
    "rewriteDbOpActivityConfig",
    100);
  v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v2 + 624),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v21 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v20, (const char (*)[43])byte_1A1A4520);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, schedule_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 624));
  *(_DWORD *)(((v2 + 624) >> 3) + 0x7FFF8000) = -117901064;
  v1 = -1;
  v18 = 0;
LABEL_46:
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
  if ( v18 != 1 )
    goto LABEL_96;
  v29 = ((v2 + 368) >> 3) + 2147450880;
  *(_WORD *)v29 = 0;
  *(_BYTE *)(v29 + 2) = 0;
  std::vector<std::tuple<unsigned int,bool,unsigned int>>::vector((std::vector<std::tuple<unsigned int,bool,unsigned int>> *const)(v2 + 368));
  *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::OpActivityScheduleConfig>::iterator *)(v2 + 144) = std::unordered_map<unsigned int,data::OpActivityScheduleConfig>::begin(&this->schedule_config_map_);
  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::OpActivityScheduleConfig>::iterator *)(v2 + 176) = std::unordered_map<unsigned int,data::OpActivityScheduleConfig>::end(&this->schedule_config_map_);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::OpActivityScheduleConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OpActivityScheduleConfig>,false> *)(v2 + 144),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OpActivityScheduleConfig>,false> *)(v2 + 176)) )
  {
    v67 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::OpActivityScheduleConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::OpActivityScheduleConfig>,false,false> *const)(v2 + 144));
    schedule_id_0 = std::get<0ul,unsigned int const,data::OpActivityScheduleConfig>(v67);
    config_0 = (std::tuple_element<1,const std::pair<unsigned int const,data::OpActivityScheduleConfig> >::type *)std::get<1ul,unsigned int const,data::OpActivityScheduleConfig>(v67);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(v2 + 48);
    *(_BYTE *)(v2 + 48) = 0;
    std::vector<std::tuple<unsigned int,bool,unsigned int>>::emplace_back<unsigned int const&,bool,unsigned int const&>(
      (std::vector<std::tuple<unsigned int,bool,unsigned int>> *const)(v2 + 368),
      &config_0->begin_time,
      (bool *)(v2 + 48),
      schedule_id_0,
      v30,
      v31,
      v48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(v2 + 64);
    *(_BYTE *)(v2 + 64) = 1;
    std::vector<std::tuple<unsigned int,bool,unsigned int>>::emplace_back<unsigned int const&,bool,unsigned int const&>(
      (std::vector<std::tuple<unsigned int,bool,unsigned int>> *const)(v2 + 368),
      &config_0->end_time,
      (bool *)(v2 + 64),
      schedule_id_0,
      v32,
      v33,
      v49);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::OpActivityScheduleConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::OpActivityScheduleConfig>,false,false> *const)(v2 + 144));
  }
  *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
  __lastd = std::vector<std::tuple<unsigned int,bool,unsigned int>>::end((std::vector<std::tuple<unsigned int,bool,unsigned int>> *const)(v2 + 368))._M_current;
  v34._M_current = std::vector<std::tuple<unsigned int,bool,unsigned int>>::begin((std::vector<std::tuple<unsigned int,bool,unsigned int>> *const)(v2 + 368))._M_current;
  std::sort<__gnu_cxx::__normal_iterator<std::tuple<unsigned int,bool,unsigned int> *,std::vector<std::tuple<unsigned int,bool,unsigned int>>>>(
    v34,
    (__gnu_cxx::__normal_iterator<std::tuple<unsigned int,bool,unsigned int>*,std::vector<std::tuple<unsigned int,bool,unsigned int>> >)__lastd);
  v35 = ((v2 + 1136) >> 3) + 2147450880;
  *(_DWORD *)v35 = 0;
  *(_WORD *)(v35 + 4) = 0;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 1136));
  __for_range_1 = (std::vector<std::tuple<unsigned int,bool,unsigned int>> *)(v2 + 368);
  *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::vector<std::tuple<unsigned int,bool,unsigned int>>::iterator *)(v2 + 208) = std::vector<std::tuple<unsigned int,bool,unsigned int>>::begin(__for_range_1);
  *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::vector<std::tuple<unsigned int,bool,unsigned int>>::iterator *)(v2 + 240) = std::vector<std::tuple<unsigned int,bool,unsigned int>>::end(__for_range_1);
  while ( 2 )
  {
    if ( !__gnu_cxx::operator!=<std::tuple<unsigned int,bool,unsigned int> *,std::vector<std::tuple<unsigned int,bool,unsigned int>>>(
            (const __gnu_cxx::__normal_iterator<std::tuple<unsigned int,bool,unsigned int>*,std::vector<std::tuple<unsigned int,bool,unsigned int>> > *)(v2 + 208),
            (const __gnu_cxx::__normal_iterator<std::tuple<unsigned int,bool,unsigned int>*,std::vector<std::tuple<unsigned int,bool,unsigned int>> > *)(v2 + 240)) )
    {
      v40 = 1;
      goto LABEL_93;
    }
    *(_WORD *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1024;
    n = (unsigned __int64)__gnu_cxx::__normal_iterator<std::tuple<unsigned int,bool,unsigned int> *,std::vector<std::tuple<unsigned int,bool,unsigned int>>>::operator*((const __gnu_cxx::__normal_iterator<std::tuple<unsigned int,bool,unsigned int>*,std::vector<std::tuple<unsigned int,bool,unsigned int>> > *const)(v2 + 208));
    if ( *(char *)(((v2 + 336) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 347) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 91) & 7) >= *(_BYTE *)(((v2 + 347) >> 3) + 0x7FFF8000) )
    {
      n = __asan_report_store_n(v2 + 336, 12LL);
    }
    if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
    {
      n = __asan_report_load_n(n, 12LL);
    }
    *(_QWORD *)(v2 + 336) = *(_QWORD *)n;
    *(_DWORD *)(v2 + 344) = *(_DWORD *)(n + 8);
    timestamp = (std::tuple_element<0,const std::tuple<unsigned int,bool,unsigned int> >::type *)std::get<0ul,unsigned int,bool,unsigned int>((const std::tuple<unsigned int,bool,unsigned int> *)(v2 + 336));
    is_end = (std::tuple_element<1,const std::tuple<unsigned int,bool,unsigned int> >::type *)std::get<1ul,unsigned int,bool,unsigned int>((const std::tuple<unsigned int,bool,unsigned int> *)(v2 + 336));
    schedule_id_1 = (std::tuple_element<2,const std::tuple<unsigned int,bool,unsigned int> >::type *)std::get<2ul,unsigned int,bool,unsigned int>((const std::tuple<unsigned int,bool,unsigned int> *)(v2 + 336));
    if ( *(_BYTE *)(((unsigned __int64)is_end >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)is_end & 7) >= *(_BYTE *)(((unsigned __int64)is_end >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(is_end);
    }
    if ( *is_end )
    {
      if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
              (std::set<unsigned int> *)(v2 + 1136),
              schedule_id_1) )
      {
        *(_DWORD *)(((v2 + 880) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 880) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 911) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 911) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 880, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 880),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_op_activity_config_mgr.cpp",
          "rewriteDbOpActivityConfig",
          123);
        v37 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                (common::milog::MiLogStream *const)(v2 + 880),
                (const char (*)[17])"schedule_id_set:");
        v38 = common::milog::MiLogStream::operator<<<unsigned int>(v37, (const std::set<unsigned int> *)(v2 + 1136));
        v39 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v38, (const char (*)[14])" schedule_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, schedule_id_1);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 880));
        *(_DWORD *)(((v2 + 880) >> 3) + 0x7FFF8000) = -117901064;
        v1 = -1;
        v40 = 0;
        goto LABEL_93;
      }
      std::set<unsigned int>::erase((std::set<unsigned int> *const)(v2 + 1136), schedule_id_1);
      goto LABEL_81;
    }
    if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
            (std::set<unsigned int> *)(v2 + 1136),
            schedule_id_1) )
    {
      std::set<unsigned int>::insert((std::set<unsigned int> *const)(v2 + 1136), schedule_id_1);
LABEL_81:
      schedule_id_vec = std::map<unsigned int,std::vector<unsigned int>>::operator[](
                          &this->timestamp_schedule_ids_map_,
                          timestamp);
      std::vector<unsigned int>::clear(schedule_id_vec);
      M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v2 + 1136))._M_node;
      __lastb = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 1136))._M_node;
      *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<unsigned int>::iterator *)(v2 + 272) = std::vector<unsigned int>::end(schedule_id_vec);
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 304),
        (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 272));
      if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v2 + 304);
      std::vector<unsigned int>::insert<std::_Rb_tree_const_iterator<unsigned int>,void>(
        schedule_id_vec,
        *(std::vector<unsigned int>::const_iterator *)(v2 + 304),
        (std::_Rb_tree_const_iterator<unsigned int>)__lastb,
        (std::_Rb_tree_const_iterator<unsigned int>)M_node);
      *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
      *(_DWORD *)(((v2 + 1008) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 1008) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1039) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 16 + 31) & 7) >= *(_BYTE *)(((v2 + 1039) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 1008, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 1008),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/db_data_manual/db_op_activity_config_mgr.cpp",
        "rewriteDbOpActivityConfig",
        140);
      __lastc = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                  (common::milog::MiLogStream *const)(v2 + 1008),
                  (const char (*)[6])"time:");
      *(_DWORD *)(((v2 + 1072) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((unsigned __int64)timestamp >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)timestamp & 7) + 3) >= *(_BYTE *)(((unsigned __int64)timestamp >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(timestamp);
      }
      v44 = *timestamp;
      if ( *(char *)(((v2 + 1072) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1103) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 1103) >> 3) + 0x7FFF8000) )
      {
        v44 = v2 + 1072;
        __asan_report_store_n(v2 + 1072, 32LL);
      }
      common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)(v2 + 1072), v44);
      v45 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
              __lastc,
              (const std::string *)(v2 + 1072));
      v46 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v45, (const char (*)[15])" schedule_ids:");
      common::milog::MiLogStream::operator<<<unsigned int>(v46, schedule_id_vec);
      std::string::~string((void *)(v2 + 1072));
      *(_DWORD *)(((v2 + 1072) >> 3) + 0x7FFF8000) = -117901064;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1008));
      *(_DWORD *)(((v2 + 1008) >> 3) + 0x7FFF8000) = -117901064;
      __gnu_cxx::__normal_iterator<std::tuple<unsigned int,bool,unsigned int> *,std::vector<std::tuple<unsigned int,bool,unsigned int>>>::operator++((__gnu_cxx::__normal_iterator<std::tuple<unsigned int,bool,unsigned int>*,std::vector<std::tuple<unsigned int,bool,unsigned int>> > *const)(v2 + 208));
      continue;
    }
    break;
  }
  *(_DWORD *)(((v2 + 944) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v2 + 944) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 975) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 80 + 31) & 7) >= *(_BYTE *)(((v2 + 975) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 944, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v2 + 944),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/db_data_manual/db_op_activity_config_mgr.cpp",
    "rewriteDbOpActivityConfig",
    132);
  v41 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
          (common::milog::MiLogStream *const)(v2 + 944),
          (const char (*)[17])"schedule_id_set:");
  v42 = common::milog::MiLogStream::operator<<<unsigned int>(v41, (const std::set<unsigned int> *)(v2 + 1136));
  v43 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v42, (const char (*)[14])" schedule_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, schedule_id_1);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 944));
  *(_DWORD *)(((v2 + 944) >> 3) + 0x7FFF8000) = -117901064;
  v1 = -1;
  v40 = 0;
LABEL_93:
  *(_WORD *)(((v2 + 336) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
  if ( v40 == 1 )
    v1 = 0;
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 1136));
  std::vector<std::tuple<unsigned int,bool,unsigned int>>::~vector((std::vector<std::tuple<unsigned int,bool,unsigned int>> *const)(v2 + 368));
LABEL_96:
  std::unordered_map<unsigned int,data::OpActivityScheduleConfig>::~unordered_map((std::unordered_map<unsigned int,data::OpActivityScheduleConfig> *const)(v2 + 1216));
  if ( v70 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8088) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 144) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v2 >> 3) + 0x7FFF8094) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF809C) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1312LL, v70);
  }
  return v1;
};

// Line 147: range 000000000CDB3AA8-000000000CDB467E
int32_t __cdecl data::DbOpActivityConfigMgr::checkDbOpActivityConfig(
        data::DbOpActivityConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  OpActivityExcelConfigMgr *p_op_activity_config_mgr; // rcx
  uint32_t *p_config_id; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int32_t result; // eax
  unsigned __int64 v12; // rax
  unsigned int *v13; // rax
  int *v14; // rdx
  int v15; // ecx
  common::milog::MiLogStream *v16; // rax
  std::unordered_map<unsigned int,data::OpActivityScheduleConfig>::mapped_type *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::unordered_map<unsigned int,data::OpActivityScheduleConfig>::mapped_type *v21; // rax
  std::unordered_map<unsigned int,data::OpActivityScheduleConfig>::mapped_type *v22; // rax
  unsigned __int64 v23; // rax
  int32_t ret; // [rsp+14h] [rbp-29Ch]
  std::map<unsigned int,std::vector<unsigned int>> *__for_range_0; // [rsp+20h] [rbp-290h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::reference v26; // [rsp+28h] [rbp-288h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<unsigned int> > >::type *timestamp; // [rsp+30h] [rbp-280h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *schedule_vec; // [rsp+38h] [rbp-278h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::OpActivityScheduleConfig>,false,false>::reference v29; // [rsp+48h] [rbp-268h]
  std::tuple_element<0,std::pair<unsigned int const,data::OpActivityScheduleConfig> >::type *schedule_id; // [rsp+50h] [rbp-260h]
  std::tuple_element<1,const std::pair<unsigned int const,data::OpActivityScheduleConfig> >::type *config; // [rsp+58h] [rbp-258h]
  char v32[592]; // [rsp+60h] [rbp-250h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(544LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 48 4 15 schedule_id:166 64 8 15 __for_begin:150 96 8 13 __for_end:150 128 8 15 __for_begin:16"
                        "3 160 8 13 __for_end:163 192 8 15 __for_begin:166 224 8 13 __for_end:166 256 32 9 <unknown> 320 "
                        "32 9 <unknown> 384 32 9 <unknown> 448 56 17 config_id_set:165";
  *(_QWORD *)(v2 + 16) = data::DbOpActivityConfigMgr::checkDbOpActivityConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218103808;
  v4[536862736] = -202116109;
  ret = 0;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::OpActivityScheduleConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::OpActivityScheduleConfig>::begin(&this->schedule_config_map_);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::OpActivityScheduleConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::OpActivityScheduleConfig>::end(&this->schedule_config_map_);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::OpActivityScheduleConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OpActivityScheduleConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OpActivityScheduleConfig>,false> *)(v2 + 96)) )
  {
    v29 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::OpActivityScheduleConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::OpActivityScheduleConfig>,false,false> *const)(v2 + 64));
    schedule_id = std::get<0ul,unsigned int const,data::OpActivityScheduleConfig>(v29);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::OpActivityScheduleConfig> >::type *)std::get<1ul,unsigned int const,data::OpActivityScheduleConfig>(v29);
    p_op_activity_config_mgr = &txt_config_mgr->op_activity_config_mgr;
    p_config_id = &config->config_id;
    if ( *(_BYTE *)(((unsigned __int64)p_config_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_config_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_config_id);
    }
    if ( !data::OpActivityExcelConfigMgrBase::findOpActivityExcelConfig(p_op_activity_config_mgr, config->config_id) )
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
        "./src/db_data_manual/db_op_activity_config_mgr.cpp",
        "checkDbOpActivityConfig",
        154);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 256),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
             v7,
             (const char (*)[45])"findOpActivityExcelConfig fail, schedule_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, schedule_id);
      v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])" config_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &config->config_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::OpActivityScheduleConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::OpActivityScheduleConfig>,false,false> *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( ret )
  {
    result = ret;
  }
  else
  {
    __for_range_0 = &this->timestamp_schedule_ids_map_;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::map<unsigned int,std::vector<unsigned int>>::iterator *)(v2 + 128) = std::map<unsigned int,std::vector<unsigned int>>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::map<unsigned int,std::vector<unsigned int>>::iterator *)(v2 + 160) = std::map<unsigned int,std::vector<unsigned int>>::end(__for_range_0);
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v2 + 128),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v2 + 160)) )
    {
      v26 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)(v2 + 128));
      timestamp = std::get<0ul,unsigned int const,std::vector<unsigned int>>(v26);
      schedule_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::vector<unsigned int>>(v26);
      v12 = ((v2 + 448) >> 3) + 2147450880;
      *(_DWORD *)v12 = 0;
      *(_WORD *)(v12 + 4) = 0;
      *(_BYTE *)(v12 + 6) = 0;
      std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v2 + 448));
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<unsigned int>::const_iterator *)(v2 + 192) = std::vector<unsigned int>::begin(schedule_vec);
      *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<unsigned int>::const_iterator *)(v2 + 224) = std::vector<unsigned int>::end(schedule_vec);
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 192),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 224)) )
      {
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
        v13 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 192));
        v14 = (int *)v13;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v13);
        }
        v15 = *v14;
        if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 48);
        *(_DWORD *)(v2 + 48) = v15;
        if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::OpActivityScheduleConfig>,unsigned int>(
                &this->schedule_config_map_,
                (const unsigned int *)(v2 + 48)) )
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
            "./src/db_data_manual/db_op_activity_config_mgr.cpp",
            "checkDbOpActivityConfig",
            170);
          v16 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  (common::milog::MiLogStream *const)(v2 + 320),
                  (const char (*)[34])byte_1A1A47E0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
          *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
        }
        else
        {
          v17 = std::unordered_map<unsigned int,data::OpActivityScheduleConfig>::operator[](
                  &this->schedule_config_map_,
                  (const std::unordered_map<unsigned int,data::OpActivityScheduleConfig>::key_type *)(v2 + 48));
          if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                 (std::unordered_set<unsigned int> *)(v2 + 448),
                 &v17->config_id) )
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
              "./src/db_data_manual/db_op_activity_config_mgr.cpp",
              "checkDbOpActivityConfig",
              175);
            v18 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
                    (common::milog::MiLogStream *const)(v2 + 384),
                    (const char (*)[68])byte_1A1A4840);
            v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, timestamp);
            v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v19,
                    (const char (*)[13])", config_id:");
            v21 = std::unordered_map<unsigned int,data::OpActivityScheduleConfig>::operator[](
                    &this->schedule_config_map_,
                    (const std::unordered_map<unsigned int,data::OpActivityScheduleConfig>::key_type *)(v2 + 48));
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &v21->config_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
            *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          else
          {
            v22 = std::unordered_map<unsigned int,data::OpActivityScheduleConfig>::operator[](
                    &this->schedule_config_map_,
                    (const std::unordered_map<unsigned int,data::OpActivityScheduleConfig>::key_type *)(v2 + 48));
            std::unordered_set<unsigned int>::insert(
              (std::unordered_set<unsigned int> *const)(v2 + 448),
              &v22->config_id);
          }
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 192));
      }
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
      std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v2 + 448));
      v23 = ((v2 + 448) >> 3) + 2147450880;
      *(_DWORD *)v23 = -117901064;
      *(_WORD *)(v23 + 4) = -1800;
      *(_BYTE *)(v23 + 6) = -8;
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)(v2 + 128));
    }
    result = ret;
  }
  if ( v32 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 187: range 000000000CDB4680-000000000CDB4833
const data::OpActivityScheduleConfig *__fastcall data::DbOpActivityConfigMgr::findOpActivityScheduleConfig(
        const data::DbOpActivityConfigMgr *const this,
        uint32_t schedule_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const data::DbOpActivityConfigMgr *v5; // rax
  const data::DbOpActivityConfigMgr *v6; // rax
  bool v7; // al
  const data::OpActivityScheduleConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 schedule_id:186 64 8 8 iter:188 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DbOpActivityConfigMgr::findOpActivityScheduleConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = schedule_id;
  v5 = this;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::OpActivityScheduleConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::OpActivityScheduleConfig>::find(
                                                                                                    &v5->schedule_config_map_,
                                                                                                    (const std::unordered_map<unsigned int,data::OpActivityScheduleConfig>::key_type *)(v2 + 48));
  v6 = this;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::OpActivityScheduleConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::OpActivityScheduleConfig>::end(&v6->schedule_config_map_);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::OpActivityScheduleConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OpActivityScheduleConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OpActivityScheduleConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::OpActivityScheduleConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::OpActivityScheduleConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 198: range 000000000CDB4834-000000000CDB4A21
__int64 __fastcall data::DbOpActivityConfigMgr::getActivityIdByScheduleId(
        const data::DbOpActivityConfigMgr *const this,
        uint32_t schedule_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const data::DbOpActivityConfigMgr *v5; // rax
  const data::DbOpActivityConfigMgr *v6; // rax
  bool v7; // al
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::OpActivityScheduleConfig>,false,false>::pointer v9; // rdx
  uint32_t *p_config_id; // rax
  char v11[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 schedule_id:197 64 8 8 iter:199 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DbOpActivityConfigMgr::getActivityIdByScheduleId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = schedule_id;
  v5 = this;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::OpActivityScheduleConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::OpActivityScheduleConfig>::find(
                                                                                                    &v5->schedule_config_map_,
                                                                                                    (const std::unordered_map<unsigned int,data::OpActivityScheduleConfig>::key_type *)(v2 + 48));
  v6 = this;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::OpActivityScheduleConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::OpActivityScheduleConfig>::end(&v6->schedule_config_map_);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::OpActivityScheduleConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OpActivityScheduleConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OpActivityScheduleConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::OpActivityScheduleConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::OpActivityScheduleConfig>,false,false> *const)(v2 + 64));
    p_config_id = &v9->second.config_id;
    if ( *(_BYTE *)(((unsigned __int64)p_config_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_config_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_config_id);
    }
    result = v9->second.config_id;
  }
  if ( v11 == (char *)v2 )
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

// Line 209: range 000000000CDB4A22-000000000CDB4CE4
const std::vector<unsigned int> *__fastcall data::DbOpActivityConfigMgr::findActiveOpActivitySchedules(
        const data::DbOpActivityConfigMgr *const this,
        uint32_t timestamp)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::map<unsigned int,std::vector<unsigned int>> *p_timestamp_schedule_ids_map; // rdx
  std::map<unsigned int,std::vector<unsigned int>> *v6; // rdx
  bool v7; // al
  std::map<unsigned int,std::vector<unsigned int>> *v8; // rdx
  bool v9; // al
  const std::vector<unsigned int> *result; // rax
  char v11[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 13 timestamp:208 64 8 8 iter:210 96 8 9 <unknown> 128 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DbOpActivityConfigMgr::findActiveOpActivitySchedules;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -202116352;
  *(_DWORD *)(v2 + 48) = timestamp;
  p_timestamp_schedule_ids_map = &this->timestamp_schedule_ids_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::vector<unsigned int>>::upper_bound(
                                                                                     p_timestamp_schedule_ids_map,
                                                                                     (const std::map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->timestamp_schedule_ids_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::vector<unsigned int>>::begin(v6);
  v7 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( !v7 )
    goto LABEL_22;
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator--((std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)(v2 + 64));
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  v8 = &this->timestamp_schedule_ids_map_;
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 128) = std::map<unsigned int,std::vector<unsigned int>>::end(v8);
  v9 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v2 + 128));
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)(v2 + 64))->second;
  }
  else
  {
LABEL_22:
    if ( !(_BYTE)`guard variable for'data::DbOpActivityConfigMgr::findActiveOpActivitySchedules(unsigned int)::empty_schedue_id_vec
      && __cxa_guard_acquire(&`guard variable for'data::DbOpActivityConfigMgr::findActiveOpActivitySchedules(unsigned int)::empty_schedue_id_vec) )
    {
      std::vector<unsigned int>::vector(&data::DbOpActivityConfigMgr::findActiveOpActivitySchedules(unsigned int)const::empty_schedue_id_vec);
      __cxa_guard_release(&`guard variable for'data::DbOpActivityConfigMgr::findActiveOpActivitySchedules(unsigned int)::empty_schedue_id_vec);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::vector<unsigned int>::~vector,
        &data::DbOpActivityConfigMgr::findActiveOpActivitySchedules(unsigned int)const::empty_schedue_id_vec,
        &_dso_handle);
    }
    result = &data::DbOpActivityConfigMgr::findActiveOpActivitySchedules(unsigned int)const::empty_schedue_id_vec;
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};
