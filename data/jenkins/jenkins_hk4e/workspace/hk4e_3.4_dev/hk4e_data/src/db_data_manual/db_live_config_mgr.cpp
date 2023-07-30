// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_live_config_mgr.cpp

// Line 21: range 000000000CF0CB1D-000000000CF0D323
// local variable allocation has failed, the output may be wrong!
void __cdecl data::populate_t_live_schedule_config<(mysqlpp::sql_dummy_type)0>(
        data::t_live_schedule_config *s,
        const mysqlpp::Row *row)
{
  unsigned __int64 p_anon_0; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const mysqlpp::String *v5; // rax
  unsigned int v6; // edx
  const mysqlpp::String *v7; // r14
  const mysqlpp::String *v8; // r14
  const mysqlpp::String *v9; // r14
  const mysqlpp::String *v10; // r14
  std::string rowa; // [rsp+0h] [rbp-280h] OVERLAPPED BYREF

  rowa._M_string_length = (std::string::size_type)s;
  rowa._M_dataplus._M_p = (std::string::pointer)row;
  p_anon_0 = (unsigned __int64)&rowa._anon_0;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      p_anon_0 = v3;
  }
  *(_QWORD *)p_anon_0 = 1102416563LL;
  *(_QWORD *)(p_anon_0 + 8) = "9 32 16 27 ignore_schema_mismatches:21 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unkn"
                              "own> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(p_anon_0 + 16) = data::populate_t_live_schedule_config<(mysqlpp::sql_dummy_type)0>;
  v4 = (_DWORD *)(p_anon_0 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -202116109;
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
  *(_DWORD *)(((p_anon_0 + 384) >> 3) + 0x7FFF8000) = 0;
  v9 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 320) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 320);
  if ( *(char *)(((p_anon_0 + 384) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 415) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 415) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 384, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 384), v9, rowa);
  std::string::operator=(rowa._M_string_length + 72, p_anon_0 + 384);
  std::string::~string((void *)(p_anon_0 + 384));
  *(_DWORD *)(((p_anon_0 + 384) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 320));
  *(_DWORD *)(((p_anon_0 + 320) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 512) >> 3) + 0x7FFF8000) = 0;
  v10 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 448) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 448);
  if ( *(char *)(((p_anon_0 + 512) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 543) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 + 31) & 7) >= *(_BYTE *)(((p_anon_0 + 543) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 512, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 512), v10, rowa);
  std::string::operator=(rowa._M_string_length + 104, p_anon_0 + 512);
  std::string::~string((void *)(p_anon_0 + 512));
  *(_DWORD *)(((p_anon_0 + 512) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 448));
  *(_DWORD *)(((p_anon_0 + 448) >> 3) + 0x7FFF8000) = -117901064;
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
  }
};

// Line 21: range 000000000CE42E3A-000000000CE42F2C
void __cdecl data::t_live_schedule_config::t_live_schedule_config(
        data::t_live_schedule_config *const this,
        const mysqlpp::Row *row)
{
  std::string::basic_string(&this->begin_time);
  std::string::basic_string(&this->end_time);
  std::string::basic_string(&this->live_url);
  std::string::basic_string(&this->spare_live_url);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  data::populate_t_live_schedule_config<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 21: range 000000000D3B7DC6-000000000D3B7F13
void __cdecl data::t_live_schedule_config::t_live_schedule_config(
        data::t_live_schedule_config *const this,
        data::t_live_schedule_config *a2)
{
  mysqlpp::sql_int_unsigned live_id; // ecx
  const char *table_override; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  live_id = a2->live_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->live_id = live_id;
  std::string::basic_string(&this->begin_time, &a2->begin_time);
  std::string::basic_string(&this->end_time, &a2->end_time);
  std::string::basic_string(&this->live_url, &a2->live_url);
  std::string::basic_string(&this->spare_live_url, &a2->spare_live_url);
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 21: range 000000000D0EC8F0-000000000D0EC93E
void __cdecl data::t_live_schedule_config::~t_live_schedule_config(data::t_live_schedule_config *const this)
{
  std::string::~string(&this->spare_live_url);
  std::string::~string(&this->live_url);
  std::string::~string(&this->end_time);
  std::string::~string(&this->begin_time);
};

// Line 29: range 000000000CD9702A-000000000CD9800C
int32_t __cdecl data::DbLiveConfigMgr::loadDbLiveConfig(
        data::DbLiveConfigMgr *const this,
        common::midb::MysqlConnPtr *conn_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  mysqlpp::Connection *v6; // rsi
  __int64 v7; // rax
  std::logic_error *exception; // rdi
  unsigned __int64 v9; // rax
  mysqlpp::sql_int_unsigned live_id; // ecx
  int TimeByStr; // edi
  int v12; // esi
  data::LiveScheduleConfig *v13; // r8
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int v16; // r15d
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::LiveScheduleConfig>,false,false>,bool> v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  unsigned __int64 v20; // rax
  int v21; // edx
  int v22; // r15d
  common::milog::MiLogStream *v23; // r15
  std::vector<data::t_live_schedule_config>::size_type v24; // rax
  common::milog::MiLogStream *v25; // rax
  unsigned __int64 v26; // rax
  std::vector<data::t_live_schedule_config> *__for_range; // [rsp+28h] [rbp-568h]
  __gnu_cxx::__normal_iterator<data::t_live_schedule_config*,std::vector<data::t_live_schedule_config> >::reference row; // [rsp+30h] [rbp-560h]
  char v31[1360]; // [rsp+40h] [rbp-550h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1312LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 48 8 14 __for_begin:49 80 8 12 __for_end:49 112 8 9 <unknown> 144 24 10 row_vec:42 208 32 9 <"
                        "unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 80 9 co"
                        "nfig:51 640 544 8 query:36";
  *(_QWORD *)(v3 + 16) = data::DbLiveConfigMgr::loadDbLiveConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862725] = -218959360;
  v5[536862726] = 62194;
  v5[536862727] = -219021312;
  v5[536862728] = 62194;
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862731] = -219021312;
  v5[536862732] = 62194;
  v5[536862733] = -219021312;
  v5[536862734] = 62194;
  v5[536862735] = -219021312;
  v5[536862736] = 62194;
  v5[536862739] = -218959118;
  v5[536862757] = -202116109;
  v5[536862758] = -202116109;
  v5[536862759] = -202116109;
  v5[536862760] = -202116109;
  if ( std::operator==<mysqlpp::Connection>(0LL, conn_ptr) )
  {
    if ( *(char *)(((v3 + 208) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 48 + 31) & 7) >= *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 208, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 208),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/db_data_manual/db_live_config_mgr.cpp",
      "loadDbLiveConfig",
      32);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
      (common::milog::MiLogStream *const)(v3 + 208),
      (const char (*)[17])"conn_ptr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 208));
    v2 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_ptr);
    if ( *(char *)(((v3 + 640) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1183) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 1183) >> 3) + 0x7FFF8000) )
    {
      v6 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v3 + 640, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 640), v6, "select ");
    v7 = std::operator<<<std::char_traits<char>>(v3 + 640, "live_id, begin_time, end_time, live_url, spare_live_url");
    std::operator<<<std::char_traits<char>>(v7, " from t_live_schedule_config");
    std::vector<data::t_live_schedule_config>::vector((std::vector<data::t_live_schedule_config> *const)(v3 + 144));
    mysqlpp::Query::storein<std::vector<data::t_live_schedule_config>>(
      (mysqlpp::Query *const)(v3 + 640),
      (std::vector<data::t_live_schedule_config> *)(v3 + 144));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 640)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    __for_range = (std::vector<data::t_live_schedule_config> *)(v3 + 144);
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::t_live_schedule_config>::iterator *)(v3 + 48) = std::vector<data::t_live_schedule_config>::begin(__for_range);
    if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::t_live_schedule_config>::iterator *)(v3 + 80) = std::vector<data::t_live_schedule_config>::end(__for_range);
    while ( __gnu_cxx::operator!=<data::t_live_schedule_config *,std::vector<data::t_live_schedule_config>>(
              (const __gnu_cxx::__normal_iterator<data::t_live_schedule_config*,std::vector<data::t_live_schedule_config> > *)(v3 + 48),
              (const __gnu_cxx::__normal_iterator<data::t_live_schedule_config*,std::vector<data::t_live_schedule_config> > *)(v3 + 80)) )
    {
      row = __gnu_cxx::__normal_iterator<data::t_live_schedule_config *,std::vector<data::t_live_schedule_config>>::operator*((const __gnu_cxx::__normal_iterator<data::t_live_schedule_config*,std::vector<data::t_live_schedule_config> > *const)(v3 + 48));
      v9 = ((v3 + 528) >> 3) + 2147450880;
      *(_DWORD *)v9 = 0;
      *(_DWORD *)(v9 + 4) = 0;
      *(_WORD *)(v9 + 8) = 0;
      data::LiveScheduleConfig::LiveScheduleConfig((data::LiveScheduleConfig *const)(v3 + 528));
      if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(row);
      }
      live_id = row->live_id;
      if ( *(_BYTE *)(((v3 + 528) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 528) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 528);
      *(_DWORD *)(v3 + 528) = live_id;
      std::string::operator=(v3 + 544, &row->live_url);
      std::string::operator=(v3 + 576, &row->spare_live_url);
      TimeByStr = common::tools::TimeUtils::getTimeByStr(&row->begin_time);
      if ( *(_BYTE *)(((v3 + 532) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 + 20) & 7) + 3) >= *(_BYTE *)(((v3 + 532) >> 3) + 0x7FFF8000) )
      {
        TimeByStr = v3 + 532;
        __asan_report_store4(v3 + 532);
      }
      *(_DWORD *)(v3 + 532) = TimeByStr;
      v12 = common::tools::TimeUtils::getTimeByStr(&row->end_time);
      if ( *(_BYTE *)(((v3 + 536) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 536) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 536);
      *(_DWORD *)(v3 + 536) = v12;
      if ( *(_BYTE *)(((v3 + 532) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 + 20) & 7) + 3) >= *(_BYTE *)(((v3 + 532) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v3 + 532);
      }
      if ( *(_DWORD *)(v3 + 532) && *(_DWORD *)(v3 + 536) && *(_DWORD *)(v3 + 532) < *(_DWORD *)(v3 + 536) )
      {
        v17 = std::unordered_map<unsigned int,data::LiveScheduleConfig>::emplace<unsigned int &,data::LiveScheduleConfig&>(
                &this->live_config_map_,
                (unsigned int *)(v3 + 528),
                (data::LiveScheduleConfig *)(v3 + 528),
                (unsigned int *)(v3 + 528),
                v13);
        if ( !v17.second )
        {
          *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 336) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 336, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 336),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/db_data_manual/db_live_config_mgr.cpp",
            "loadDbLiveConfig",
            64);
          v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 336),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v19 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v18, (const char (*)[35])byte_1A19EA60);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 528));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
          *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v16 = 0;
        }
        else
        {
          v16 = 1;
        }
      }
      else
      {
        *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 272) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 272, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 272),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_live_config_mgr.cpp",
          "loadDbLiveConfig",
          59);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 272),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v15 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v14, (const char (*)[42])byte_1A19EA00);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 528));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
        *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v16 = 0;
      }
      data::LiveScheduleConfig::~LiveScheduleConfig((data::LiveScheduleConfig *const)(v3 + 528));
      v20 = ((v3 + 528) >> 3) + 2147450880;
      *(_DWORD *)v20 = -117901064;
      *(_DWORD *)(v20 + 4) = -117901064;
      *(_WORD *)(v20 + 8) = -1800;
      if ( v16 != 1 )
      {
        v21 = 0;
        goto LABEL_43;
      }
      __gnu_cxx::__normal_iterator<data::t_live_schedule_config *,std::vector<data::t_live_schedule_config>>::operator++((__gnu_cxx::__normal_iterator<data::t_live_schedule_config*,std::vector<data::t_live_schedule_config> > *const)(v3 + 48));
    }
    v21 = 1;
LABEL_43:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    if ( v21 == 1 )
    {
      *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 400) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 400, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 400),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/db_data_manual/db_live_config_mgr.cpp",
        "loadDbLiveConfig",
        69);
      v23 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
              (common::milog::MiLogStream *const)(v3 + 400),
              (const char (*)[6])"load ");
      *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
      v24 = std::vector<data::t_live_schedule_config>::size((const std::vector<data::t_live_schedule_config> *const)(v3 + 144));
      if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)(v3 + 112) = v24;
      v25 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v23,
              (const unsigned __int64 *)(v3 + 112));
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
        v25,
        (const char (*)[36])" config from t_live_schedule_config");
      *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 400));
      *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
      v22 = 1;
    }
    else
    {
      v22 = 0;
    }
    std::vector<data::t_live_schedule_config>::~vector((std::vector<data::t_live_schedule_config> *const)(v3 + 144));
    v26 = ((v3 + 144) >> 3) + 2147450880;
    *(_WORD *)v26 = -1800;
    *(_BYTE *)(v26 + 2) = -8;
    if ( v22 == 1 )
      v2 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 640));
  }
  if ( v31 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8094) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF809C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1312LL, v31);
  }
  return v2;
};

// Line 81: range 000000000CD9800E-000000000CD9801C
int32_t __cdecl data::DbLiveConfigMgr::rewriteDbLiveConfig(data::DbLiveConfigMgr *const this)
{
  return 0;
};

// Line 86: range 000000000CD9801E-000000000CD9802C
int32_t __cdecl data::DbLiveConfigMgr::checkDbLiveConfig(data::DbLiveConfigMgr *const this)
{
  return 0;
};

// Line 91: range 000000000CD9802E-000000000CD98264
void __cdecl data::DbLiveConfigMgr::getNowAndFutureScheduleLiveIdVec(
        const data::DbLiveConfigMgr *const this,
        std::vector<unsigned int> *schedule_vec)
{
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LiveScheduleConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t now; // [rsp+1Ch] [rbp-A4h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LiveScheduleConfig>,false,false>::reference v6; // [rsp+28h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,data::LiveScheduleConfig> >::type *live_id; // [rsp+30h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,data::LiveScheduleConfig> >::type *config; // [rsp+38h] [rbp-88h]
  char v9[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LiveScheduleConfig>,false,false> *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LiveScheduleConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LiveScheduleConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LiveScheduleConfig>,false>::__node_type *)"2 32 8 14 __for_begin:93 64 8 12 __for_end:93";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LiveScheduleConfig>,false>::__node_type *)data::DbLiveConfigMgr::getNowAndFutureScheduleLiveIdVec;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v2[4]._M_cur = std::unordered_map<unsigned int,data::LiveScheduleConfig>::begin(&this->live_config_map_)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v2[8]._M_cur = std::unordered_map<unsigned int,data::LiveScheduleConfig>::end(&this->live_config_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::LiveScheduleConfig>,false>(v2 + 4, v2 + 8) )
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LiveScheduleConfig>,false,false>::operator*(v2 + 4);
    live_id = std::get<0ul,unsigned int const,data::LiveScheduleConfig>(v6);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::LiveScheduleConfig> >::type *)std::get<1ul,unsigned int const,data::LiveScheduleConfig>(v6);
    if ( *(_BYTE *)(((unsigned __int64)&config->end_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->end_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->end_time);
    }
    if ( now < config->end_time )
      std::vector<unsigned int>::push_back(schedule_vec, live_id);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LiveScheduleConfig>,false,false>::operator++(v2 + 4);
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LiveScheduleConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 103: range 000000000CD98266-000000000CD98453
__int64 __fastcall data::DbLiveConfigMgr::getLiveBeginTime(const data::DbLiveConfigMgr *const this, uint32_t live_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const data::DbLiveConfigMgr *v5; // rax
  const data::DbLiveConfigMgr *v6; // rax
  bool v7; // al
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LiveScheduleConfig>,false,false>::pointer v9; // rdx
  uint32_t *p_begin_time; // rax
  char v11[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 11 live_id:102 64 8 8 iter:104 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DbLiveConfigMgr::getLiveBeginTime;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = live_id;
  v5 = this;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::LiveScheduleConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::LiveScheduleConfig>::find(
                                                                                              &v5->live_config_map_,
                                                                                              (const std::unordered_map<unsigned int,data::LiveScheduleConfig>::key_type *)(v2 + 48));
  v6 = this;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::LiveScheduleConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::LiveScheduleConfig>::end(&v6->live_config_map_);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::LiveScheduleConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LiveScheduleConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LiveScheduleConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LiveScheduleConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LiveScheduleConfig>,false,false> *const)(v2 + 64));
    p_begin_time = &v9->second.begin_time;
    if ( *(_BYTE *)(((unsigned __int64)p_begin_time >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_begin_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_begin_time >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_begin_time);
    }
    result = v9->second.begin_time;
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

// Line 113: range 000000000CD98454-000000000CD98638
__int64 __fastcall data::DbLiveConfigMgr::getLiveEndTime(const data::DbLiveConfigMgr *const this, uint32_t live_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const data::DbLiveConfigMgr *v5; // rax
  const data::DbLiveConfigMgr *v6; // rax
  bool v7; // al
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LiveScheduleConfig>,false,false>::pointer v9; // rax
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 11 live_id:112 64 8 8 iter:114 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DbLiveConfigMgr::getLiveEndTime;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = live_id;
  v5 = this;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::LiveScheduleConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::LiveScheduleConfig>::find(
                                                                                              &v5->live_config_map_,
                                                                                              (const std::unordered_map<unsigned int,data::LiveScheduleConfig>::key_type *)(v2 + 48));
  v6 = this;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::LiveScheduleConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::LiveScheduleConfig>::end(&v6->live_config_map_);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::LiveScheduleConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LiveScheduleConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LiveScheduleConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LiveScheduleConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LiveScheduleConfig>,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v9->second.end_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v9->second.end_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v9->second.end_time);
    }
    result = v9->second.end_time;
  }
  if ( v10 == (char *)v2 )
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

// Line 123: range 000000000CD9863A-000000000CD987ED
const data::LiveScheduleConfig *__fastcall data::DbLiveConfigMgr::findLiveScheduleConfig(
        const data::DbLiveConfigMgr *const this,
        uint32_t live_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const data::DbLiveConfigMgr *v5; // rax
  const data::DbLiveConfigMgr *v6; // rax
  bool v7; // al
  const data::LiveScheduleConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 11 live_id:122 64 8 8 iter:124 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DbLiveConfigMgr::findLiveScheduleConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = live_id;
  v5 = this;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::LiveScheduleConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::LiveScheduleConfig>::find(
                                                                                              &v5->live_config_map_,
                                                                                              (const std::unordered_map<unsigned int,data::LiveScheduleConfig>::key_type *)(v2 + 48));
  v6 = this;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::LiveScheduleConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::LiveScheduleConfig>::end(&v6->live_config_map_);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::LiveScheduleConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LiveScheduleConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LiveScheduleConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LiveScheduleConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LiveScheduleConfig>,false,false> *const)(v2 + 64))->second;
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
