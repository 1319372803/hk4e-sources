// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_gameplay_recommendation_config_mgr.cpp

// Line 23: range 000000000CF07F62-000000000CF08402
// local variable allocation has failed, the output may be wrong!
void __cdecl data::populate_t_gameplay_recommendation_config<(mysqlpp::sql_dummy_type)0>(
        data::t_gameplay_recommendation_config *s,
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
  *(_QWORD *)(p_anon_0 + 8) = "5 32 16 27 ignore_schema_mismatches:23 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unkn"
                              "own> 256 32 9 <unknown>";
  *(_QWORD *)(p_anon_0 + 16) = data::populate_t_gameplay_recommendation_config<(mysqlpp::sql_dummy_type)0>;
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

// Line 23: range 000000000CE4263E-000000000CE426EB
void __cdecl data::t_gameplay_recommendation_config::t_gameplay_recommendation_config(
        data::t_gameplay_recommendation_config *const this,
        const mysqlpp::Row *row)
{
  std::string::basic_string(&this->begin_time);
  std::string::basic_string(&this->json_str);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  data::populate_t_gameplay_recommendation_config<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 23: range 000000000D3B3FCA-000000000D3B40D7
void __cdecl data::t_gameplay_recommendation_config::t_gameplay_recommendation_config(
        data::t_gameplay_recommendation_config *const this,
        data::t_gameplay_recommendation_config *a2)
{
  mysqlpp::sql_int_unsigned id; // ecx
  const char *table_override; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  id = a2->id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->id = id;
  std::string::basic_string(&this->begin_time, &a2->begin_time);
  std::string::basic_string(&this->json_str, &a2->json_str);
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 23: range 000000000D0E3E58-000000000D0E3E86
void __cdecl data::t_gameplay_recommendation_config::~t_gameplay_recommendation_config(
        data::t_gameplay_recommendation_config *const this)
{
  std::string::~string(&this->json_str);
  std::string::~string(&this->begin_time);
};

// Line 30: range 000000000CD8F026-000000000CD90332
int32_t __cdecl data::DbGameplayRecommendationConfigMgr::loadDbGameplayRecommendationConfig(
        data::DbGameplayRecommendationConfigMgr *const this,
        common::midb::MysqlConnPtr *conn_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  time_t Now; // rsi
  mysqlpp::Connection *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  std::logic_error *exception; // rdi
  common::milog::MiLogStream *v17; // rax
  _BOOL4 v18; // r15d
  unsigned int id; // ecx
  uint32_t TimeByStr; // edi
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  int v25; // eax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  int v32; // r15d
  common::milog::MiLogStream *v33; // r15
  std::vector<data::t_gameplay_recommendation_config>::size_type v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rdx
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  int v43; // [rsp+0h] [rbp-650h]
  char *v44; // [rsp+8h] [rbp-648h]
  common::midb::MysqlConnPtr *conn_ptra; // [rsp+10h] [rbp-640h]
  data::DbGameplayRecommendationConfigMgr *thisa; // [rsp+18h] [rbp-638h]
  int v47; // [rsp+20h] [rbp-630h]
  std::vector<data::t_gameplay_recommendation_config> *__for_range; // [rsp+28h] [rbp-628h]
  __gnu_cxx::__normal_iterator<data::t_gameplay_recommendation_config*,std::vector<data::t_gameplay_recommendation_config> >::reference row; // [rsp+30h] [rbp-620h]
  data::t_gameplay_recommendation_config *rowa; // [rsp+30h] [rbp-620h]
  char e; // [rsp+38h] [rbp-618h]
  char v52[1552]; // [rsp+40h] [rbp-610h] BYREF

  thisa = this;
  conn_ptra = conn_ptr;
  v3 = (unsigned __int64)v52;
  v44 = v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1504LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "15 48 1 16 parse_options:63 64 8 14 __for_begin:64 96 8 12 __for_end:64 128 8 9 <unknown> 160 24"
                        " 10 row_vec:51 224 32 9 <unknown> 288 32 10 now_str:37 352 32 9 <unknown> 416 32 9 <unknown> 480"
                        " 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 40 15 parse_status:62 752 40 9 <unknow"
                        "n> 832 544 8 query:38";
  *(_QWORD *)(v3 + 16) = data::DbGameplayRecommendationConfigMgr::loadDbGameplayRecommendationConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -234881024;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -218959360;
  v5[536862743] = 62194;
  v5[536862744] = -234881024;
  v5[536862745] = -218959118;
  v5[536862763] = -202116109;
  v5[536862764] = -202116109;
  v5[536862765] = -202116109;
  v5[536862766] = -202116109;
  if ( std::operator==<mysqlpp::Connection>(0LL, conn_ptr) )
  {
    if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/db_data_manual/db_gameplay_recommendation_config_mgr.cpp",
      "loadDbGameplayRecommendationConfig",
      33);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
      (common::milog::MiLogStream *const)(v3 + 224),
      (const char (*)[17])"conn_ptr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    v2 = -1;
  }
  else
  {
    Now = common::tools::TimeUtils::getNow();
    if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 32 + 95) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
    {
      Now = 32LL;
      __asan_report_store_n(v3 + 288, 32LL);
    }
    common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)(v3 + 288), Now);
    v7 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_ptra);
    if ( *(char *)(((v3 + 832) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1375) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 32 + 127) & 7) >= *(_BYTE *)(((v3 + 1375) >> 3) + 0x7FFF8000) )
    {
      v7 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v3 + 832, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 832), v7, "select ");
    v8 = std::operator<<<std::char_traits<char>>(v3 + 832, "id, ");
    v9 = std::operator<<<std::char_traits<char>>(v8, "begin_time, ");
    v10 = std::operator<<<std::char_traits<char>>(v9, "json_str ");
    v11 = std::operator<<<std::char_traits<char>>(v10, "from t_gameplay_recommendation_config ");
    v12 = std::operator<<<std::char_traits<char>>(v11, "where enabled=1 and begin_time<='");
    v13 = std::operator<<<char>(v12, v3 + 288);
    v14 = std::operator<<<std::char_traits<char>>(v13, "' ");
    v15 = std::operator<<<std::char_traits<char>>(v14, "order by begin_time desc ");
    std::operator<<<std::char_traits<char>>(v15, "limit 1");
    std::vector<data::t_gameplay_recommendation_config>::vector((std::vector<data::t_gameplay_recommendation_config> *const)(v3 + 160));
    mysqlpp::Query::storein<std::vector<data::t_gameplay_recommendation_config>>(
      (mysqlpp::Query *const)(v3 + 832),
      (std::vector<data::t_gameplay_recommendation_config> *)(v3 + 160));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 832)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    if ( std::vector<data::t_gameplay_recommendation_config>::size((const std::vector<data::t_gameplay_recommendation_config> *const)(v3 + 160)) <= 1 )
    {
      google::protobuf::util::Status::Status((google::protobuf::util::Status *const)(v3 + 672));
      google::protobuf::util::JsonParseOptions::JsonParseOptions((google::protobuf::util::JsonParseOptions *const)(v3 + 48));
      __for_range = (std::vector<data::t_gameplay_recommendation_config> *)(v3 + 160);
      if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<data::t_gameplay_recommendation_config>::iterator *)(v3 + 64) = std::vector<data::t_gameplay_recommendation_config>::begin(__for_range);
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<data::t_gameplay_recommendation_config>::iterator *)(v3 + 96) = std::vector<data::t_gameplay_recommendation_config>::end(__for_range);
      while ( 1 )
      {
        if ( !__gnu_cxx::operator!=<data::t_gameplay_recommendation_config *,std::vector<data::t_gameplay_recommendation_config>>(
                (const __gnu_cxx::__normal_iterator<data::t_gameplay_recommendation_config*,std::vector<data::t_gameplay_recommendation_config> > *)(v3 + 64),
                (const __gnu_cxx::__normal_iterator<data::t_gameplay_recommendation_config*,std::vector<data::t_gameplay_recommendation_config> > *)(v3 + 96)) )
        {
          v25 = 1;
          goto LABEL_42;
        }
        row = __gnu_cxx::__normal_iterator<data::t_gameplay_recommendation_config *,std::vector<data::t_gameplay_recommendation_config>>::operator*((const __gnu_cxx::__normal_iterator<data::t_gameplay_recommendation_config*,std::vector<data::t_gameplay_recommendation_config> > *const)(v3 + 64));
        if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(row);
        }
        id = row->id;
        if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(thisa);
        }
        thisa->current_recommendation_config.id = id;
        TimeByStr = common::tools::TimeUtils::getTimeByStr(&row->begin_time);
        if ( *(_BYTE *)(((unsigned __int64)&thisa->current_recommendation_config.begin_time >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)thisa + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->current_recommendation_config.begin_time >> 3)
                                                              + 0x7FFF8000) )
        {
          TimeByStr = (_DWORD)thisa + 4;
          __asan_report_store4(&thisa->current_recommendation_config.begin_time);
        }
        thisa->current_recommendation_config.begin_time = TimeByStr;
        if ( !thisa->current_recommendation_config.begin_time )
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
            "./src/db_data_manual/db_gameplay_recommendation_config_mgr.cpp",
            "loadDbGameplayRecommendationConfig",
            70);
          v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 416),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v22 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  v21,
                  (const char (*)[35])"parse begin_time fail! begin_time:");
          v23 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, &row->begin_time);
          v24 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v23, (const char (*)[5])" id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &row->id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
          *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v25 = 0;
          goto LABEL_42;
        }
        v26 = ((v3 + 752) >> 3) + 2147450880;
        *(_DWORD *)v26 = 0;
        *(_BYTE *)(v26 + 4) = 0;
        if ( *(char *)(((v3 + 752) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 791) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 32 + 55) & 7) >= *(_BYTE *)(((v3 + 791) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 752, 40LL);
        }
        google::protobuf::util::JsonStringToMessage(
          (google::protobuf::util::Status *)(v3 + 752),
          v43,
          (int)v44,
          (int)conn_ptra,
          (int)thisa,
          v47,
          __for_range,
          (int)row,
          e);
        google::protobuf::util::Status::operator=(
          (google::protobuf::util::Status *const)(v3 + 672),
          (const google::protobuf::util::Status *)(v3 + 752));
        google::protobuf::util::Status::~Status((google::protobuf::util::Status *const)(v3 + 752));
        v27 = ((v3 + 752) >> 3) + 2147450880;
        *(_DWORD *)v27 = -117901064;
        *(_BYTE *)(v27 + 4) = -8;
        if ( !google::protobuf::util::Status::ok((const google::protobuf::util::Status *const)(v3 + 672)) )
          break;
        __gnu_cxx::__normal_iterator<data::t_gameplay_recommendation_config *,std::vector<data::t_gameplay_recommendation_config>>::operator++((__gnu_cxx::__normal_iterator<data::t_gameplay_recommendation_config*,std::vector<data::t_gameplay_recommendation_config> > *const)(v3 + 64));
      }
      *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 480, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 480),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/db_data_manual/db_gameplay_recommendation_config_mgr.cpp",
        "loadDbGameplayRecommendationConfig",
        76);
      v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 480),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v29 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              v28,
              (const char (*)[35])"parse json_str fail! parse_status:");
      v30 = common::milog::MiLogStream::operator<<<google::protobuf::util::Status,(google::protobuf::util::Status*)0>(
              v29,
              (const google::protobuf::util::Status *)(v3 + 672));
      v31 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v30, (const char (*)[5])" id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &rowa->id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
      *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v25 = 0;
LABEL_42:
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
      if ( v25 == 1 )
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
          1u,
          "./src/db_data_manual/db_gameplay_recommendation_config_mgr.cpp",
          "loadDbGameplayRecommendationConfig",
          80);
        v33 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                (common::milog::MiLogStream *const)(v3 + 544),
                (const char (*)[6])"load ");
        *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
        v34 = std::vector<data::t_gameplay_recommendation_config>::size((const std::vector<data::t_gameplay_recommendation_config> *const)(v3 + 160));
        if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(_QWORD *)(v3 + 128) = v34;
        v35 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v33,
                (const unsigned __int64 *)(v3 + 128));
        v36 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                v35,
                (const char (*)[47])" config from t_gameplay_recommendation_config,");
        v37 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v36, (const char (*)[5])" id:");
        v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v37,
                &thisa->current_recommendation_config.id);
        v39 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v38, (const char (*)[13])" begin_time:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v39,
          &thisa->current_recommendation_config.begin_time);
        *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
        *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
        v32 = 1;
      }
      else
      {
        v32 = 0;
      }
      google::protobuf::util::Status::~Status((google::protobuf::util::Status *const)(v3 + 672));
      v18 = v32 == 1;
    }
    else
    {
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
        "./src/db_data_manual/db_gameplay_recommendation_config_mgr.cpp",
        "loadDbGameplayRecommendationConfig",
        59);
      v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 352),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
        v17,
        (const char (*)[62])"get more than 1 configs from t_gameplay_recommendation_config");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
      *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v18 = 0;
    }
    std::vector<data::t_gameplay_recommendation_config>::~vector((std::vector<data::t_gameplay_recommendation_config> *const)(v3 + 160));
    v40 = ((v3 + 160) >> 3) + 2147450880;
    *(_WORD *)v40 = -1800;
    *(_BYTE *)(v40 + 2) = -8;
    v41 = ((v3 + 672) >> 3) + 2147450880;
    *(_DWORD *)v41 = -117901064;
    *(_BYTE *)(v41 + 4) = -8;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v18 )
      v2 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 832));
    std::string::~string((void *)(v3 + 288));
  }
  if ( v44 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80AC) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80B4) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1504LL, v44);
  }
  return v2;
};

// Line 92: range 000000000CD90334-000000000CD90342
int32_t __cdecl data::DbGameplayRecommendationConfigMgr::rewriteDbGameplayRecommendationConfig(
        data::DbGameplayRecommendationConfigMgr *const this)
{
  return 0;
};

// Line 97: range 000000000CD90344-000000000CD91CEB
int32_t __cdecl data::DbGameplayRecommendationConfigMgr::checkDbGameplayRecommendationConfig(
        const data::DbGameplayRecommendationConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t id; // ecx
  unsigned int first; // ecx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  uint32_t skill_depot_id; // ecx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  AvatarSkillExcelConfigMgr *p_avatar_skill_config_mgr; // rcx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  unsigned int v28; // ecx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rdx
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  AvatarSkillExcelConfigMgr *v39; // rdi
  uint32_t v40; // edx
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rdx
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rax
  int v51; // ecx
  int v52; // ecx
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig> *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rdx
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig> *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rdx
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rax
  unsigned __int64 v73; // rax
  unsigned __int64 v74; // rax
  int32_t ret; // [rsp+14h] [rbp-47Ch]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-478h]
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig> *__for_range; // [rsp+20h] [rbp-470h]
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::const_reference pr; // [rsp+28h] [rbp-468h]
  const proto::GameplayRecommendationAvatarConfig *proto_gameplay_recommendation_avatar_config; // [rsp+30h] [rbp-460h]
  const data::AvatarExcelConfig *avatar_config_ptr; // [rsp+38h] [rbp-458h]
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig> *__for_range_0; // [rsp+40h] [rbp-450h]
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig> *__for_range_2; // [rsp+48h] [rbp-448h]
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::const_reference p_element_type; // [rsp+50h] [rbp-440h]
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::value_type *p_skill_depot_id; // [rsp+58h] [rbp-438h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_1; // [rsp+60h] [rbp-430h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+68h] [rbp-428h]
  char v88[1056]; // [rsp+70h] [rbp-420h] BYREF

  v2 = (unsigned __int64)v88;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(1024LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "18 48 4 5 id:99 64 4 13 avatar_id:102 80 4 12 skill_id:123 96 16 30 check_reliquary_config_map:1"
                        "39 128 24 15 __for_begin:100 192 24 13 __for_end:100 256 24 15 __for_begin:111 320 24 13 __for_e"
                        "nd:111 384 24 15 __for_begin:165 448 24 13 __for_end:165 512 32 9 <unknown> 576 32 9 <unknown> 6"
                        "40 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <unknown> 96"
                        "0 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DbGameplayRecommendationConfigMgr::checkDbGameplayRecommendationConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862726] = -234881024;
  v4[536862727] = -218959118;
  v4[536862728] = -234881024;
  v4[536862729] = -218959118;
  v4[536862730] = -234881024;
  v4[536862731] = -218959118;
  v4[536862732] = -234881024;
  v4[536862733] = -218959118;
  v4[536862734] = -234881024;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862741] = -218959118;
  v4[536862743] = -218959118;
  v4[536862745] = -218959118;
  v4[536862747] = -218959118;
  v4[536862749] = -218959118;
  v4[536862751] = -202116109;
  ret = 0;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  id = this->current_recommendation_config.id;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48);
  *(_DWORD *)(v2 + 48) = id;
  __for_range = proto::GameplayRecommendationConfig::avatar_config_map(&this->current_recommendation_config.proto_gameplay_recommendation_config);
  if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 151) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 105) & 7) >= *(_BYTE *)(((v2 + 151) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 128, 24LL);
  }
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::begin(
    (google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::const_iterator *)(v2 + 128),
    __for_range);
  if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 215) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 64 + 23) & 7) >= *(_BYTE *)(((v2 + 215) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 192, 24LL);
  }
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::end(
    (google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::const_iterator *)(v2 + 192),
    __for_range);
  while ( google::protobuf::operator!=(
            (const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::const_iterator *)(v2 + 128),
            (const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::const_iterator *)(v2 + 192)) )
  {
    pr = google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::const_iterator::operator*((const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::const_iterator *const)(v2 + 128));
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((unsigned __int64)pr >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)pr >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(pr);
    }
    first = pr->first;
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 64);
    *(_DWORD *)(v2 + 64) = first;
    proto_gameplay_recommendation_avatar_config = &pr->second;
    avatar_config_ptr = data::AvatarExcelConfigMgrBase::findAvatarExcelConfig(
                          &txt_config_mgr->avatar_config_mgr,
                          *(_DWORD *)(v2 + 64));
    if ( avatar_config_ptr )
    {
      __for_range_0 = proto::GameplayRecommendationAvatarConfig::skill_config_map(proto_gameplay_recommendation_avatar_config);
      v11 = ((v2 + 256) >> 3) + 2147450880;
      *(_WORD *)v11 = 0;
      *(_BYTE *)(v11 + 2) = 0;
      if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 279) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 23) & 7) >= *(_BYTE *)(((v2 + 279) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 256, 24LL);
      }
      google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::begin(
        (google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::const_iterator *)(v2 + 256),
        __for_range_0);
      v12 = ((v2 + 320) >> 3) + 2147450880;
      *(_WORD *)v12 = 0;
      *(_BYTE *)(v12 + 2) = 0;
      if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 343) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 87) & 7) >= *(_BYTE *)(((v2 + 343) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 320, 24LL);
      }
      google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::end(
        (google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::const_iterator *)(v2 + 320),
        __for_range_0);
      while ( google::protobuf::operator!=(
                (const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::const_iterator *)(v2 + 256),
                (const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::const_iterator *)(v2 + 320)) )
      {
        p_skill_depot_id = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::value_type *)google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::const_iterator::operator*((const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::const_iterator *const)(v2 + 256));
        if ( *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->skill_depot_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)avatar_config_ptr + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->skill_depot_id >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4(&avatar_config_ptr->skill_depot_id);
        }
        skill_depot_id = avatar_config_ptr->skill_depot_id;
        if ( *(_BYTE *)(((unsigned __int64)p_skill_depot_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)p_skill_depot_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(p_skill_depot_id);
        }
        if ( skill_depot_id != p_skill_depot_id->first
          && !common::tools::MiscUtils::isContains<unsigned int>(
                &avatar_config_ptr->cand_skill_depot_ids,
                &p_skill_depot_id->first) )
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
            "./src/db_data_manual/db_gameplay_recommendation_config_mgr.cpp",
            "checkDbGameplayRecommendationConfig",
            115);
          v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 576),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v16 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                  v15,
                  (const char (*)[56])"skill_depot_id and avatar_id not match! skill_depot_id:");
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &p_skill_depot_id->first);
          v18 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v17, (const char (*)[12])" avatar_id:");
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v18,
                  (const unsigned int *)(v2 + 64));
          v20 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v19, (const char (*)[5])" id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
          *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        p_avatar_skill_config_mgr = &txt_config_mgr->avatar_skill_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)p_skill_depot_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)p_skill_depot_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(p_skill_depot_id);
        }
        if ( !data::AvatarSkillExcelConfigMgrBase::findAvatarSkillDepotExcelConfig(
                p_avatar_skill_config_mgr,
                p_skill_depot_id->first) )
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
            "./src/db_data_manual/db_gameplay_recommendation_config_mgr.cpp",
            "checkDbGameplayRecommendationConfig",
            120);
          v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 640),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v23 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                  v22,
                  (const char (*)[55])"findAvatarSkillDepotExcelConfig fails, skill_depot_id:");
          v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &p_skill_depot_id->first);
          v25 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v24, (const char (*)[12])" avatar_id:");
          v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v25,
                  (const unsigned int *)(v2 + 64));
          v27 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v26, (const char (*)[5])" id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        __for_range_1 = proto::GameplayRecommendationSkillConfig::skill_id_list(&p_skill_depot_id->second);
        __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_1);
        __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range_1);
        while ( __for_begin != __for_end )
        {
          *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load4(__for_begin);
          }
          v28 = *__for_begin;
          if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v2 + 80);
          *(_DWORD *)(v2 + 80) = v28;
          if ( !data::AvatarSkillExcelConfigMgrBase::findAvatarSkillExcelConfig(
                  &txt_config_mgr->avatar_skill_config_mgr,
                  *(_DWORD *)(v2 + 80)) )
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
              "./src/db_data_manual/db_gameplay_recommendation_config_mgr.cpp",
              "checkDbGameplayRecommendationConfig",
              127);
            v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 704),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v30 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                    v29,
                    (const char (*)[43])"findAvatarSkillExcelConfig fail, skill_id:");
            v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v30,
                    (const unsigned int *)(v2 + 80));
            v32 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v31,
                    (const char (*)[12])" avatar_id:");
            v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v32,
                    (const unsigned int *)(v2 + 64));
            v34 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    v33,
                    (const char (*)[17])" skill_depot_id:");
            v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &p_skill_depot_id->first);
            v36 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v35, (const char (*)[11])" skill_id:");
            v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v36,
                    (const unsigned int *)(v2 + 80));
            v38 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v37, (const char (*)[5])" id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
            *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          v39 = &txt_config_mgr->avatar_skill_config_mgr;
          if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
          {
            v39 = (AvatarSkillExcelConfigMgr *)(v2 + 80);
            __asan_report_load4(v2 + 80);
          }
          v40 = *(_DWORD *)(v2 + 80);
          if ( *(_BYTE *)(((unsigned __int64)p_skill_depot_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)p_skill_depot_id >> 3) + 0x7FFF8000) <= 3 )
          {
            v39 = (AvatarSkillExcelConfigMgr *)p_skill_depot_id;
            __asan_report_load4(p_skill_depot_id);
          }
          if ( !AvatarSkillExcelConfigMgr::isSkillIdExistInSkillDepot(v39, p_skill_depot_id->first, v40) )
          {
            *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 768) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 768, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 768),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/db_data_manual/db_gameplay_recommendation_config_mgr.cpp",
              "checkDbGameplayRecommendationConfig",
              133);
            v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 768),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v42 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                    v41,
                    (const char (*)[50])"skill_depot_id and skill_id not match! avatar_id:");
            v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v42,
                    (const unsigned int *)(v2 + 64));
            v44 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    v43,
                    (const char (*)[17])" skill_depot_id:");
            v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, &p_skill_depot_id->first);
            v46 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v45, (const char (*)[11])" skill_id:");
            v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v46,
                    (const unsigned int *)(v2 + 80));
            v48 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v47, (const char (*)[5])" id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 768));
            *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          ++__for_begin;
        }
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::const_iterator::operator++((google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::const_iterator *const)(v2 + 256));
      }
      v49 = ((v2 + 256) >> 3) + 2147450880;
      *(_WORD *)v49 = -1800;
      *(_BYTE *)(v49 + 2) = -8;
      v50 = ((v2 + 320) >> 3) + 2147450880;
      *(_WORD *)v50 = -1800;
      *(_BYTE *)(v50 + 2) = -8;
      *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 64);
      v51 = *(_DWORD *)(v2 + 64);
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96);
      *(_DWORD *)(v2 + 96) = v51;
      if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 48);
      v52 = *(_DWORD *)(v2 + 48);
      if ( *(_BYTE *)(((v2 + 100) >> 3) + 0x7FFF8000) != 0
        && (char)(((v2 + 100) & 7) + 3) >= *(_BYTE *)(((v2 + 100) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v2 + 100);
      }
      *(_DWORD *)(v2 + 100) = v52;
      if ( *(_BYTE *)(((v2 + 104) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)(v2 + 104) = txt_config_mgr;
      v53 = proto::GameplayRecommendationAvatarConfig::reliquary_config_map(proto_gameplay_recommendation_avatar_config);
      if ( data::DbGameplayRecommendationConfigMgr::checkDbGameplayRecommendationConfig::_lambda_const_auto_39___::operator()_google::protobuf::Map_unsigned_int_proto::GameplayRecommendationReliquaryConfig___(
             (const data::DbGameplayRecommendationConfigMgr::checkDbGameplayRecommendationConfig::<lambda(const auto:39&)> *const)(v2 + 96),
             v53) )
      {
        *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 832) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 832, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 832),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_gameplay_recommendation_config_mgr.cpp",
          "checkDbGameplayRecommendationConfig",
          162);
        v54 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 832),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v55 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                v54,
                (const char (*)[44])"check_reliquary_config_map fail, avatar_id:");
        v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v55,
                (const unsigned int *)(v2 + 64));
        v57 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v56, (const char (*)[5])" id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v57, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 832));
        *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __for_range_2 = proto::GameplayRecommendationAvatarConfig::element_reliquary_config_map(proto_gameplay_recommendation_avatar_config);
      v58 = ((v2 + 384) >> 3) + 2147450880;
      *(_WORD *)v58 = 0;
      *(_BYTE *)(v58 + 2) = 0;
      if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 407) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 105) & 7) >= *(_BYTE *)(((v2 + 407) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 384, 24LL);
      }
      google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::begin(
        (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::const_iterator *)(v2 + 384),
        __for_range_2);
      v59 = ((v2 + 448) >> 3) + 2147450880;
      *(_WORD *)v59 = 0;
      *(_BYTE *)(v59 + 2) = 0;
      if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 471) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 23) & 7) >= *(_BYTE *)(((v2 + 471) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 448, 24LL);
      }
      google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::end(
        (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::const_iterator *)(v2 + 448),
        __for_range_2);
      while ( google::protobuf::operator!=(
                (const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::const_iterator *)(v2 + 384),
                (const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::const_iterator *)(v2 + 448)) )
      {
        p_element_type = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::const_iterator::operator*((const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::const_iterator *const)(v2 + 384));
        if ( *(_BYTE *)(((unsigned __int64)p_element_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)p_element_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(p_element_type);
        }
        if ( p_element_type->first > 0xD )
        {
          *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 896) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 927) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 927) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 896, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 896),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/db_data_manual/db_gameplay_recommendation_config_mgr.cpp",
            "checkDbGameplayRecommendationConfig",
            169);
          v60 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 896),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v61 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  v60,
                  (const char (*)[22])"invalid element_type:");
          v62 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v61, &p_element_type->first);
          v63 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v62, (const char (*)[12])" avatar_id:");
          v64 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v63,
                  (const unsigned int *)(v2 + 64));
          v65 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v64, (const char (*)[5])" id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v65, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
          *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        v66 = proto::GameplayRecommendationReliquaryMapConfig::reliquary_config_map(&p_element_type->second);
        if ( data::DbGameplayRecommendationConfigMgr::checkDbGameplayRecommendationConfig::_lambda_const_auto_39___::operator()_google::protobuf::Map_unsigned_int_proto::GameplayRecommendationReliquaryConfig___(
               (const data::DbGameplayRecommendationConfigMgr::checkDbGameplayRecommendationConfig::<lambda(const auto:39&)> *const)(v2 + 96),
               v66) )
        {
          *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 960) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 960, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 960),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/db_data_manual/db_gameplay_recommendation_config_mgr.cpp",
            "checkDbGameplayRecommendationConfig",
            174);
          v67 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 960),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v68 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                  v67,
                  (const char (*)[47])"check_reliquary_config_map fail, element_type:");
          v69 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v68, &p_element_type->first);
          v70 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v69, (const char (*)[12])" avatar_id:");
          v71 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v70,
                  (const unsigned int *)(v2 + 64));
          v72 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v71, (const char (*)[5])" id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v72, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 960));
          *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::const_iterator::operator++((google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::const_iterator *const)(v2 + 384));
      }
      v73 = ((v2 + 384) >> 3) + 2147450880;
      *(_WORD *)v73 = -1800;
      *(_BYTE *)(v73 + 2) = -8;
      v74 = ((v2 + 448) >> 3) + 2147450880;
      *(_WORD *)v74 = -1800;
      *(_BYTE *)(v74 + 2) = -8;
    }
    else
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
        "./src/db_data_manual/db_gameplay_recommendation_config_mgr.cpp",
        "checkDbGameplayRecommendationConfig",
        107);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 512),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             v7,
             (const char (*)[39])"findAvatarExcelConfig fail, avatar_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 64));
      v10 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v9, (const char (*)[5])" id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
      *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -1800;
    google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::const_iterator::operator++((google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::const_iterator *const)(v2 + 128));
  }
  if ( v88 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8078) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 128) & 0xFFFFFFF8) >> 3));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8078) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return ret;
};

// Line 139: range 000000000CDC88F6-000000000CDC91EF
int32_t __cdecl data::DbGameplayRecommendationConfigMgr::checkDbGameplayRecommendationConfig::_lambda_const_auto_39___::operator()_google::protobuf::Map_unsigned_int_proto::GameplayRecommendationReliquaryConfig___(
        const data::DbGameplayRecommendationConfigMgr::checkDbGameplayRecommendationConfig::<lambda(const auto:39&)> *const __closure,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig> *reliquary_config_map)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int first; // ecx
  bool v7; // al
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int v14; // eax
  ReliquaryExcelConfigMgr *p_reliquary_config_mgr; // r15
  uint32_t v16; // eax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  google::protobuf::uint32 v19; // edx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  int v26; // edx
  int32_t result; // eax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::const_reference p_equip_type; // [rsp+28h] [rbp-1C8h]
  const google::protobuf::RepeatedPtrField<proto::GameplayRecommendationReliquaryMainPropConfig> *__for_range_0; // [rsp+30h] [rbp-1C0h]
  google::protobuf::internal::RepeatedPtrIterator<const proto::GameplayRecommendationReliquaryMainPropConfig>::reference proto_main_prop_config; // [rsp+38h] [rbp-1B8h]
  char v31[432]; // [rsp+40h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 4 9 <unknown> 48 4 9 <unknown> 64 8 15 __for_begin:148 96 8 13 __for_end:148 128 24 15 __fo"
                        "r_begin:141 192 24 13 __for_end:141 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = data::DbGameplayRecommendationConfigMgr::checkDbGameplayRecommendationConfig::_lambda_const_auto_39___::operator()_google::protobuf::Map_unsigned_int_proto::GameplayRecommendationReliquaryConfig___;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -234881024;
  v5[536862725] = -218959118;
  v5[536862726] = -234881024;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -202116109;
  if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 151) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 105) & 7) >= *(_BYTE *)(((v3 + 151) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 128, 24LL);
  }
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::begin(
    (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::const_iterator *)(v3 + 128),
    reliquary_config_map);
  if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 215) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 41) & 7) >= *(_BYTE *)(((v3 + 215) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 192, 24LL);
  }
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::end(
    (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::const_iterator *)(v3 + 192),
    reliquary_config_map);
  while ( 1 )
  {
    if ( !google::protobuf::operator!=(
            (const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::const_iterator *)(v3 + 128),
            (const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::const_iterator *)(v3 + 192)) )
    {
      v14 = 1;
      goto LABEL_38;
    }
    p_equip_type = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::const_iterator::operator*((const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::const_iterator *const)(v3 + 128));
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((unsigned __int64)p_equip_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)p_equip_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(p_equip_type);
    }
    first = p_equip_type->first;
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 32);
    *(_DWORD *)(v3 + 32) = first;
    v7 = common::tools::MiscUtils::isContains<std::set<data::EquipType> const,data::EquipType>(
           &ReliquaryExcelConfigMgr::reliquary_equip_type_set,
           (const data::EquipType *)(v3 + 32));
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( !v7 )
      break;
    __for_range_0 = proto::GameplayRecommendationReliquaryConfig::main_prop_config_list(&p_equip_type->second);
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(google::protobuf::RepeatedPtrField<proto::GameplayRecommendationReliquaryMainPropConfig>::const_iterator *)(v3 + 64) = google::protobuf::RepeatedPtrField<proto::GameplayRecommendationReliquaryMainPropConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(google::protobuf::RepeatedPtrField<proto::GameplayRecommendationReliquaryMainPropConfig>::const_iterator *)(v3 + 96) = google::protobuf::RepeatedPtrField<proto::GameplayRecommendationReliquaryMainPropConfig>::end(__for_range_0);
    while ( 1 )
    {
      if ( !google::protobuf::internal::RepeatedPtrIterator<proto::GameplayRecommendationReliquaryMainPropConfig const>::operator!=(
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::GameplayRecommendationReliquaryMainPropConfig> *const)(v3 + 64),
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::GameplayRecommendationReliquaryMainPropConfig>::iterator *)(v3 + 96)) )
      {
        v26 = 1;
        goto LABEL_34;
      }
      proto_main_prop_config = google::protobuf::internal::RepeatedPtrIterator<proto::GameplayRecommendationReliquaryMainPropConfig const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::GameplayRecommendationReliquaryMainPropConfig> *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__txt_config_mgr >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__txt_config_mgr);
      p_reliquary_config_mgr = &__closure->__txt_config_mgr->reliquary_config_mgr;
      v16 = proto::GameplayRecommendationReliquaryMainPropConfig::main_prop_id(proto_main_prop_config);
      if ( !data::ReliquaryExcelConfigMgrBase::findReliquaryMainPropExcelConfig(p_reliquary_config_mgr, v16) )
        break;
      google::protobuf::internal::RepeatedPtrIterator<proto::GameplayRecommendationReliquaryMainPropConfig const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::GameplayRecommendationReliquaryMainPropConfig> *const)(v3 + 64));
    }
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
      "./src/db_data_manual/db_gameplay_recommendation_config_mgr.cpp",
      "operator()",
      152);
    v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 320),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v18 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
            v17,
            (const char (*)[53])"findReliquaryMainPropExcelConfig fail, main_prop_id:");
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    v19 = proto::GameplayRecommendationReliquaryMainPropConfig::main_prop_id(proto_main_prop_config);
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 48);
    *(_DWORD *)(v3 + 48) = v19;
    v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 48));
    v21 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v20, (const char (*)[12])" avatar_id:");
    v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &__closure->__avatar_id);
    v23 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v22, (const char (*)[13])" equip_type:");
    v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &p_equip_type->first);
    v25 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v24, (const char (*)[5])" id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &__closure->__id);
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
    *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v26 = 0;
LABEL_34:
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v26 != 1 )
    {
      v14 = 0;
      goto LABEL_38;
    }
    google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::const_iterator::operator++((google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::const_iterator *const)(v3 + 128));
  }
  *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 256, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 256),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/db_data_manual/db_gameplay_recommendation_config_mgr.cpp",
    "operator()",
    145);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 256),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
         v8,
         (const char (*)[30])"invalid reliquary equip_type:");
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &p_equip_type->first);
  v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])" avatar_id:");
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &__closure->__avatar_id);
  v13 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v12, (const char (*)[5])" id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &__closure->__id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
  v2 = -1;
  v14 = 0;
LABEL_38:
  if ( v14 == 1 )
    v2 = 0;
  result = v2;
  if ( v31 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF802C) = 0;
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
  return result;
};
