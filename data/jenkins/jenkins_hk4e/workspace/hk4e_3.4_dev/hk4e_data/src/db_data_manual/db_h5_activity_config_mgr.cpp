// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_h5_activity_config_mgr.cpp

// Line 21: range 000000000CE42740-000000000CE4287A
void __cdecl data::t_h5_activity_schedule_config::t_h5_activity_schedule_config(
        data::t_h5_activity_schedule_config *const this,
        const mysqlpp::Row *row)
{
  std::string::basic_string(&this->begin_time);
  std::string::basic_string(&this->end_time);
  std::string::basic_string(&this->content_close_time);
  std::string::basic_string(&this->prefab_path);
  std::string::basic_string(&this->url_cn);
  std::string::basic_string(&this->url_os);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  data::populate_t_h5_activity_schedule_config<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 21: range 000000000D3B5C48-000000000D3B5ED9
void __cdecl data::t_h5_activity_schedule_config::t_h5_activity_schedule_config(
        data::t_h5_activity_schedule_config *const this,
        data::t_h5_activity_schedule_config *a2)
{
  mysqlpp::sql_int_unsigned schedule_id; // ecx
  mysqlpp::sql_int_unsigned activity_id; // ecx
  mysqlpp::sql_int_unsigned is_entrance_open; // ecx
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
  if ( *(_BYTE *)(((unsigned __int64)&a2->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->activity_id);
  }
  activity_id = a2->activity_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->activity_id);
  }
  this->activity_id = activity_id;
  std::string::basic_string(&this->begin_time, &a2->begin_time);
  std::string::basic_string(&this->end_time, &a2->end_time);
  std::string::basic_string(&this->content_close_time, &a2->content_close_time);
  std::string::basic_string(&this->prefab_path, &a2->prefab_path);
  std::string::basic_string(&this->url_cn, &a2->url_cn);
  std::string::basic_string(&this->url_os, &a2->url_os);
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_entrance_open >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->is_entrance_open >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->is_entrance_open);
  }
  is_entrance_open = a2->is_entrance_open;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_entrance_open >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->is_entrance_open >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->is_entrance_open);
  }
  this->is_entrance_open = is_entrance_open;
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 21: range 000000000D0E8D32-000000000D0E8DA4
void __cdecl data::t_h5_activity_schedule_config::~t_h5_activity_schedule_config(
        data::t_h5_activity_schedule_config *const this)
{
  std::string::~string(&this->url_os);
  std::string::~string(&this->url_cn);
  std::string::~string(&this->prefab_path);
  std::string::~string(&this->content_close_time);
  std::string::~string(&this->end_time);
  std::string::~string(&this->begin_time);
};

// Line 34: range 000000000CD91CEC-000000000CD93217
int32_t __cdecl data::DbH5ActivityConfigMgr::loadDbH5ActivityConfig(
        data::DbH5ActivityConfigMgr *const this,
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
  std::logic_error *exception; // rdi
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  int v19; // edx
  unsigned int schedule_id; // ecx
  uint32_t activity_id; // ecx
  uint32_t TimeByStr; // esi
  uint32_t v23; // edi
  uint32_t v24; // esi
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  std::remove_reference<std::string&>::type *v30; // rax
  std::remove_reference<std::string&>::type *v31; // rax
  std::remove_reference<std::string&>::type *v32; // rax
  bool v33; // cl
  common::milog::MiLogStream *v34; // rdx
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rcx
  int v60; // r15d
  common::milog::MiLogStream *v61; // r15
  std::vector<data::t_h5_activity_schedule_config>::size_type v62; // rax
  common::milog::MiLogStream *v63; // rax
  unsigned __int64 v64; // rax
  std::vector<data::t_h5_activity_schedule_config> *__for_range; // [rsp+20h] [rbp-530h]
  __gnu_cxx::__normal_iterator<data::t_h5_activity_schedule_config*,std::vector<data::t_h5_activity_schedule_config> >::reference row; // [rsp+28h] [rbp-528h]
  data::H5ActivityScheduleConfig *schedule_config; // [rsp+30h] [rbp-520h]
  char v70[1296]; // [rsp+40h] [rbp-510h] BYREF

  v3 = (unsigned __int64)v70;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1248LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 32 8 14 __for_begin:62 64 8 12 __for_end:62 96 8 9 <unknown> 128 24 10 row_vec:55 192 32 9 <u"
                        "nknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <un"
                        "known> 576 544 8 query:41";
  *(_QWORD *)(v3 + 16) = data::DbH5ActivityConfigMgr::loadDbH5ActivityConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -234881024;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862755] = -202116109;
  v5[536862756] = -202116109;
  v5[536862757] = -202116109;
  v5[536862758] = -202116109;
  if ( std::operator==<mysqlpp::Connection>(0LL, conn_ptr) )
  {
    if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/db_data_manual/db_h5_activity_config_mgr.cpp",
      "loadDbH5ActivityConfig",
      37);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
      (common::milog::MiLogStream *const)(v3 + 192),
      (const char (*)[17])"conn_ptr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
    v2 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_ptr);
    if ( *(char *)(((v3 + 576) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1119) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 32 + 127) & 7) >= *(_BYTE *)(((v3 + 1119) >> 3) + 0x7FFF8000) )
    {
      v6 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v3 + 576, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 576), v6, "select ");
    v7 = std::operator<<<std::char_traits<char>>(v3 + 576, "schedule_id, ");
    v8 = std::operator<<<std::char_traits<char>>(v7, "activity_id, ");
    v9 = std::operator<<<std::char_traits<char>>(v8, "begin_time, ");
    v10 = std::operator<<<std::char_traits<char>>(v9, "end_time, ");
    v11 = std::operator<<<std::char_traits<char>>(v10, "content_close_time, ");
    v12 = std::operator<<<std::char_traits<char>>(v11, "prefab_path, ");
    v13 = std::operator<<<std::char_traits<char>>(v12, "url_cn, ");
    v14 = std::operator<<<std::char_traits<char>>(v13, "url_os, ");
    v15 = std::operator<<<std::char_traits<char>>(v14, "is_entrance_open ");
    std::operator<<<std::char_traits<char>>(v15, "from t_h5_activity_schedule_config");
    std::vector<data::t_h5_activity_schedule_config>::vector((std::vector<data::t_h5_activity_schedule_config> *const)(v3 + 128));
    mysqlpp::Query::storein<std::vector<data::t_h5_activity_schedule_config>>(
      (mysqlpp::Query *const)(v3 + 576),
      (std::vector<data::t_h5_activity_schedule_config> *)(v3 + 128));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 576)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    __for_range = (std::vector<data::t_h5_activity_schedule_config> *)(v3 + 128);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::t_h5_activity_schedule_config>::iterator *)(v3 + 32) = std::vector<data::t_h5_activity_schedule_config>::begin(__for_range);
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::t_h5_activity_schedule_config>::iterator *)(v3 + 64) = std::vector<data::t_h5_activity_schedule_config>::end(__for_range);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::t_h5_activity_schedule_config *,std::vector<data::t_h5_activity_schedule_config>>(
              (const __gnu_cxx::__normal_iterator<data::t_h5_activity_schedule_config*,std::vector<data::t_h5_activity_schedule_config> > *)(v3 + 32),
              (const __gnu_cxx::__normal_iterator<data::t_h5_activity_schedule_config*,std::vector<data::t_h5_activity_schedule_config> > *)(v3 + 64)) )
      {
        v19 = 1;
        goto LABEL_56;
      }
      row = __gnu_cxx::__normal_iterator<data::t_h5_activity_schedule_config *,std::vector<data::t_h5_activity_schedule_config>>::operator*((const __gnu_cxx::__normal_iterator<data::t_h5_activity_schedule_config*,std::vector<data::t_h5_activity_schedule_config> > *const)(v3 + 32));
      if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::H5ActivityScheduleConfig>,unsigned int>(
             &this->h5_activity_schedule_config_map,
             &row->schedule_id) )
      {
        break;
      }
      schedule_config = std::unordered_map<unsigned int,data::H5ActivityScheduleConfig>::operator[](
                          &this->h5_activity_schedule_config_map,
                          &row->schedule_id);
      if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(row);
      }
      schedule_id = row->schedule_id;
      if ( *(_BYTE *)(((unsigned __int64)schedule_config >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)schedule_config >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(schedule_config);
      }
      schedule_config->h5_schedule_id = schedule_id;
      if ( *(_BYTE *)(((unsigned __int64)&row->activity_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)row + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->activity_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&row->activity_id);
      }
      activity_id = row->activity_id;
      if ( *(_BYTE *)(((unsigned __int64)&schedule_config->h5_activity_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)schedule_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->h5_activity_id >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_store4(&schedule_config->h5_activity_id);
      }
      schedule_config->h5_activity_id = activity_id;
      std::string::operator=(&schedule_config->begin_time_str, &row->begin_time);
      std::string::operator=(&schedule_config->end_time_str, &row->end_time);
      std::string::operator=(&schedule_config->content_close_time_str, &row->content_close_time);
      TimeByStr = common::tools::TimeUtils::getTimeByStr(&row->begin_time);
      if ( *(_BYTE *)(((unsigned __int64)&schedule_config->begin_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&schedule_config->begin_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&schedule_config->begin_time);
      }
      schedule_config->begin_time = TimeByStr;
      v23 = common::tools::TimeUtils::getTimeByStr(&row->end_time);
      if ( *(_BYTE *)(((unsigned __int64)&schedule_config->end_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)schedule_config + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->end_time >> 3)
                                                                        + 0x7FFF8000) )
      {
        v23 = (_DWORD)schedule_config + 108;
        __asan_report_store4(&schedule_config->end_time);
      }
      schedule_config->end_time = v23;
      v24 = common::tools::TimeUtils::getTimeByStr(&row->content_close_time);
      if ( *(_BYTE *)(((unsigned __int64)&schedule_config->content_close_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&schedule_config->content_close_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&schedule_config->content_close_time);
      }
      schedule_config->content_close_time = v24;
      if ( *(_BYTE *)(((unsigned __int64)&schedule_config->begin_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&schedule_config->begin_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&schedule_config->begin_time);
      }
      if ( !schedule_config->begin_time )
        goto LABEL_43;
      if ( *(_BYTE *)(((unsigned __int64)&schedule_config->end_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)schedule_config + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->end_time >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&schedule_config->end_time);
      }
      if ( !schedule_config->end_time || !schedule_config->content_close_time )
      {
LABEL_43:
        *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 32 + 127) & 7) >= *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 320, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 320),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/db_data_manual/db_h5_activity_config_mgr.cpp",
          "loadDbH5ActivityConfig",
          80);
        v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 320),
                (const char (*)[16])" invalid_time: ");
        v26 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, &row->begin_time);
        v27 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v26, (const char (*)[3])", ");
        v28 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v27, &row->end_time);
        v29 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v28, (const char (*)[3])", ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v29, &row->content_close_time);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
        *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
      }
      v30 = std::move<std::string &>(&row->prefab_path);
      std::string::operator=(&schedule_config->prefab_path, v30);
      v31 = std::move<std::string &>(&row->url_cn);
      std::string::operator=(&schedule_config->url_cn, v31);
      v32 = std::move<std::string &>(&row->url_os);
      std::string::operator=(&schedule_config->url_os, v32);
      if ( *(_BYTE *)(((unsigned __int64)&row->is_entrance_open >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&row->is_entrance_open >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&row->is_entrance_open);
      }
      v33 = row->is_entrance_open != 0;
      if ( *(char *)(((unsigned __int64)&schedule_config->is_entrance_open >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&schedule_config->is_entrance_open);
      schedule_config->is_entrance_open = v33;
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
        1u,
        "./src/db_data_manual/db_h5_activity_config_mgr.cpp",
        "loadDbH5ActivityConfig",
        87);
      v34 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
              (common::milog::MiLogStream *const)(v3 + 384),
              (const char (*)[17])" h5_schedule_id:");
      v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v34,
              &schedule_config->h5_schedule_id);
      v36 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v35, (const char (*)[17])" h5_activity_id:");
      v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v36,
              &schedule_config->h5_activity_id);
      v38 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v37, (const char (*)[13])" begin_time:");
      v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &schedule_config->begin_time);
      v40 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v39, (const char (*)[2])"(");
      v41 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v40, &schedule_config->begin_time_str);
      v42 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v41, (const char (*)[2])")");
      v43 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v42, (const char (*)[11])" end_time:");
      v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, &schedule_config->end_time);
      v45 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v44, (const char (*)[2])"(");
      v46 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v45, &schedule_config->end_time_str);
      v47 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v46, (const char (*)[2])")");
      v48 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v47,
              (const char (*)[21])" content_close_time:");
      v49 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v48,
              &schedule_config->content_close_time);
      v50 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v49, (const char (*)[2])"(");
      v51 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
              v50,
              &schedule_config->content_close_time_str);
      v52 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v51, (const char (*)[2])")");
      v53 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v52, (const char (*)[14])" prefab_path:");
      v54 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v53, &schedule_config->prefab_path);
      v55 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v54, (const char (*)[9])" url_cn:");
      v56 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v55, &schedule_config->url_cn);
      v57 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v56, (const char (*)[9])" url_os:");
      v58 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v57, &schedule_config->url_os);
      v59 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v58,
              (const char (*)[19])" is_entrance_open:");
      if ( *(char *)(((unsigned __int64)&schedule_config->is_entrance_open >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&schedule_config->is_entrance_open);
      common::milog::MiLogStream::operator<<(v59, schedule_config->is_entrance_open);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
      *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
      __gnu_cxx::__normal_iterator<data::t_h5_activity_schedule_config *,std::vector<data::t_h5_activity_schedule_config>>::operator++((__gnu_cxx::__normal_iterator<data::t_h5_activity_schedule_config*,std::vector<data::t_h5_activity_schedule_config> > *const)(v3 + 32));
    }
    *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 32 + 63) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 256, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 256),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/db_data_manual/db_h5_activity_config_mgr.cpp",
      "loadDbH5ActivityConfig",
      66);
    v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 256),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v18 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
            v17,
            (const char (*)[35])"duplicate h5 activity schedule_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &row->schedule_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
    *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v19 = 0;
LABEL_56:
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( v19 == 1 )
    {
      *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 448, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 448),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/db_data_manual/db_h5_activity_config_mgr.cpp",
        "loadDbH5ActivityConfig",
        99);
      v61 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
              (common::milog::MiLogStream *const)(v3 + 448),
              (const char (*)[6])"load ");
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
      v62 = std::vector<data::t_h5_activity_schedule_config>::size((const std::vector<data::t_h5_activity_schedule_config> *const)(v3 + 128));
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)(v3 + 96) = v62;
      v63 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v61,
              (const unsigned __int64 *)(v3 + 96));
      common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
        v63,
        (const char (*)[43])" config from t_h5_activity_schedule_config");
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
      *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
      v60 = 1;
    }
    else
    {
      v60 = 0;
    }
    std::vector<data::t_h5_activity_schedule_config>::~vector((std::vector<data::t_h5_activity_schedule_config> *const)(v3 + 128));
    v64 = ((v3 + 128) >> 3) + 2147450880;
    *(_WORD *)v64 = -1800;
    *(_BYTE *)(v64 + 2) = -8;
    if ( v60 == 1 )
      v2 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 576));
  }
  if ( v70 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8044) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF808C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8094) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1248LL, v70);
  }
  return v2;
};

// Line 111: range 000000000CD93218-000000000CD934D8
int32_t __cdecl data::DbH5ActivityConfigMgr::rewriteDbH5ActivityConfig(data::DbH5ActivityConfigMgr *const this)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false,false> *v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t result; // eax
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false,false>::reference __in; // [rsp+18h] [rbp-98h]
  std::tuple_element<1,std::pair<unsigned int const,data::H5ActivityScheduleConfig> >::type *schedule_config; // [rsp+28h] [rbp-88h]
  char v7[128]; // [rsp+30h] [rbp-80h] BYREF

  v1 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false,false> *)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false,false> *)v2;
  }
  v1->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false>::__node_type *)1102416563;
  v1[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false>::__node_type *)"2 32 8 15 __for_begin:112 64 8 13 __for_end:112";
  v1[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false>::__node_type *)data::DbH5ActivityConfigMgr::rewriteDbH5ActivityConfig;
  v3 = (_DWORD *)((unsigned __int64)v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v1[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v1[4]._M_cur = std::unordered_map<unsigned int,data::H5ActivityScheduleConfig>::begin(&this->h5_activity_schedule_config_map)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v1[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v1[8]._M_cur = std::unordered_map<unsigned int,data::H5ActivityScheduleConfig>::end(&this->h5_activity_schedule_config_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false>(v1 + 4, v1 + 8) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false,false>::operator*(v1 + 4);
    std::get<0ul,unsigned int const,data::H5ActivityScheduleConfig>(__in);
    schedule_config = std::get<1ul,unsigned int const,data::H5ActivityScheduleConfig>(__in);
    if ( *(_BYTE *)(((unsigned __int64)&schedule_config->content_close_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&schedule_config->content_close_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&schedule_config->content_close_time);
    }
    if ( !schedule_config->content_close_time )
    {
      if ( *(_BYTE *)(((unsigned __int64)&schedule_config->end_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)schedule_config + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->end_time >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&schedule_config->end_time);
      }
      schedule_config->content_close_time = schedule_config->end_time;
    }
    std::set<unsigned int>::insert(&this->h5_activity_change_timestamp_set, &schedule_config->begin_time);
    std::set<unsigned int>::insert(&this->h5_activity_change_timestamp_set, &schedule_config->end_time);
    std::set<unsigned int>::insert(&this->h5_activity_change_timestamp_set, &schedule_config->content_close_time);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false,false>::operator++(v1 + 4);
  }
  result = 0;
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v1->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 126: range 000000000CD934DA-000000000CD948FD
int32_t __cdecl data::DbH5ActivityConfigMgr::checkDbH5ActivityConfig(
        const data::DbH5ActivityConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  uint32_t content_close_time; // ecx
  uint32_t v12; // ecx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  H5ActivityExcelConfigMgr *p_h5_activity_config_mgr; // rcx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  unsigned __int64 v26; // rax
  const unsigned int *v27; // r9
  const unsigned int *p_h5_activity_id; // rcx
  const unsigned int *v29; // r9
  const unsigned int *v30; // rcx
  std::tuple<unsigned int,bool,unsigned int,unsigned int> *M_current; // r14
  std::vector<std::tuple<unsigned int,bool,unsigned int,unsigned int>>::iterator v32; // rax
  unsigned __int64 v33; // rax
  __gnu_cxx::__normal_iterator<std::tuple<unsigned int,bool,unsigned int,unsigned int>*,std::vector<std::tuple<unsigned int,bool,unsigned int,unsigned int>> >::reference v34; // rdx
  std::_Tuple_impl<2,unsigned int,unsigned int> v35; // rax
  __int64 v36; // rdx
  unsigned int *v37; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rdx
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // r14
  std::map<unsigned int,unsigned int>::mapped_type *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rdx
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // r14
  time_t v48; // rdi
  TxtConfigMgr *txt_config_mgra; // [rsp+0h] [rbp-3C0h]
  TxtConfigMgr *txt_config_mgrb; // [rsp+0h] [rbp-3C0h]
  const data::DbH5ActivityConfigMgr *thisa; // [rsp+8h] [rbp-3B8h]
  const unsigned int *thisb; // [rsp+8h] [rbp-3B8h]
  const unsigned int *v54; // [rsp+10h] [rbp-3B0h]
  const unsigned int *v55; // [rsp+10h] [rbp-3B0h]
  int32_t ret; // [rsp+1Ch] [rbp-3A4h]
  std::vector<std::tuple<unsigned int,bool,unsigned int,unsigned int>> *__for_range_1; // [rsp+30h] [rbp-390h]
  std::tuple_element<0,std::tuple<unsigned int,bool,unsigned int,unsigned int> >::type *timestamp; // [rsp+38h] [rbp-388h]
  std::tuple_element<0,std::tuple<bool,unsigned int,unsigned int> >::type *is_begin; // [rsp+40h] [rbp-380h]
  unsigned int *h5_activity_id; // [rsp+48h] [rbp-378h]
  unsigned int *h5_schedule_id_1; // [rsp+50h] [rbp-370h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false,false>::reference v62; // [rsp+58h] [rbp-368h]
  std::tuple_element<0,std::pair<unsigned int const,data::H5ActivityScheduleConfig> >::type *h5_schedule_id_0; // [rsp+60h] [rbp-360h]
  std::tuple_element<1,const std::pair<unsigned int const,data::H5ActivityScheduleConfig> >::type *schedule_config_0; // [rsp+68h] [rbp-358h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false,false>::reference v65; // [rsp+70h] [rbp-350h]
  std::tuple_element<0,std::pair<unsigned int const,data::H5ActivityScheduleConfig> >::type *h5_schedule_id; // [rsp+78h] [rbp-348h]
  std::tuple_element<1,const std::pair<unsigned int const,data::H5ActivityScheduleConfig> >::type *schedule_config; // [rsp+80h] [rbp-340h]
  char v68[816]; // [rsp+90h] [rbp-330h] BYREF

  thisa = this;
  txt_config_mgra = txt_config_mgr;
  v2 = (unsigned __int64)v68;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(768LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "16 48 1 9 <unknown> 64 1 9 <unknown> 80 8 15 __for_begin:128 112 8 13 __for_end:128 144 8 15 __f"
                        "or_begin:153 176 8 13 __for_end:153 208 8 15 __for_begin:161 240 8 13 __for_end:161 272 16 9 <un"
                        "known> 304 24 18 time_event_vec:152 368 32 9 <unknown> 432 32 9 <unknown> 496 32 9 <unknown> 560"
                        " 32 9 <unknown> 624 32 9 <unknown> 688 48 22 h5_activity_id_map:160";
  *(_QWORD *)(v2 + 16) = data::DbH5ActivityConfigMgr::checkDbH5ActivityConfig;
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
  v4[536862729] = 62194;
  v4[536862730] = -218959360;
  v4[536862731] = 62194;
  v4[536862732] = -219021312;
  v4[536862733] = 62194;
  v4[536862734] = -219021312;
  v4[536862735] = 62194;
  v4[536862736] = -219021312;
  v4[536862737] = 62194;
  v4[536862738] = -219021312;
  v4[536862739] = 62194;
  v4[536862740] = -219021312;
  v4[536862741] = 62194;
  v4[536862743] = -202116109;
  ret = 0;
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::H5ActivityScheduleConfig>::const_iterator *)(v2 + 80) = std::unordered_map<unsigned int,data::H5ActivityScheduleConfig>::begin(&this->h5_activity_schedule_config_map);
  if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::H5ActivityScheduleConfig>::const_iterator *)(v2 + 112) = std::unordered_map<unsigned int,data::H5ActivityScheduleConfig>::end(&this->h5_activity_schedule_config_map);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false> *)(v2 + 80),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false> *)(v2 + 112)) )
  {
    v65 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false,false> *const)(v2 + 80));
    h5_schedule_id = std::get<0ul,unsigned int const,data::H5ActivityScheduleConfig>(v65);
    schedule_config = (std::tuple_element<1,const std::pair<unsigned int const,data::H5ActivityScheduleConfig> >::type *)std::get<1ul,unsigned int const,data::H5ActivityScheduleConfig>(v65);
    if ( *(_BYTE *)(((unsigned __int64)&schedule_config->begin_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&schedule_config->begin_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&schedule_config->begin_time);
    }
    if ( !schedule_config->begin_time )
      goto LABEL_16;
    if ( *(_BYTE *)(((unsigned __int64)&schedule_config->end_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)schedule_config + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->end_time >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&schedule_config->end_time);
    }
    if ( !schedule_config->end_time )
    {
LABEL_16:
      *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 368) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 399) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 399) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 368, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 368),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/db_data_manual/db_h5_activity_config_mgr.cpp",
        "checkDbH5ActivityConfig",
        132);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 368),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v6 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
             v5,
             (const char (*)[63])"H5 Activity begin_time or end_time is invalid, h5_schedule_id:");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, h5_schedule_id);
      v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])" begin_time:");
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &schedule_config->begin_time_str);
      v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v9, (const char (*)[15])" end_time_str:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &schedule_config->begin_time_str);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 368));
      *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&schedule_config->content_close_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&schedule_config->content_close_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&schedule_config->content_close_time);
    }
    content_close_time = schedule_config->content_close_time;
    if ( *(_BYTE *)(((unsigned __int64)&schedule_config->begin_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&schedule_config->begin_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&schedule_config->begin_time);
    }
    if ( content_close_time < schedule_config->begin_time )
      goto LABEL_27;
    v12 = schedule_config->content_close_time;
    if ( *(_BYTE *)(((unsigned __int64)&schedule_config->end_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)schedule_config + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->end_time >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&schedule_config->end_time);
    }
    if ( v12 > schedule_config->end_time )
    {
LABEL_27:
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
        "./src/db_data_manual/db_h5_activity_config_mgr.cpp",
        "checkDbH5ActivityConfig",
        138);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 432),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v14 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
              v13,
              (const char (*)[70])"content_close_time is not inside activity time range, h5_schedule_id:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, h5_schedule_id);
      v16 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v15,
              (const char (*)[21])" content_close_time:");
      v17 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
              v16,
              &schedule_config->content_close_time_str);
      v18 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v17, (const char (*)[13])" begin_time:");
      v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, &schedule_config->begin_time_str);
      v20 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v19, (const char (*)[15])" end_time_str:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, &schedule_config->begin_time_str);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 432));
      *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    p_h5_activity_config_mgr = &txt_config_mgr->h5_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&schedule_config->h5_activity_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)schedule_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->h5_activity_id >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4(&schedule_config->h5_activity_id);
    }
    if ( !data::H5ActivityExcelConfigMgrBase::findH5ActivityExcelConfig(
            p_h5_activity_config_mgr,
            schedule_config->h5_activity_id) )
    {
      *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 496) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 16 + 31) & 7) >= *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 496, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 496),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/db_data_manual/db_h5_activity_config_mgr.cpp",
        "checkDbH5ActivityConfig",
        146);
      v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 496),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v23 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              v22,
              (const char (*)[48])"findH5ActivityExcelConfig fail, h5_activity_id:");
      v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v23,
              &schedule_config->h5_activity_id);
      v25 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v24, (const char (*)[17])" h5_schedule_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, h5_schedule_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 496));
      *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false,false> *const)(v2 + 80));
  }
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
  v26 = ((v2 + 304) >> 3) + 2147450880;
  *(_WORD *)v26 = 0;
  *(_BYTE *)(v26 + 2) = 0;
  std::vector<std::tuple<unsigned int,bool,unsigned int,unsigned int>>::vector((std::vector<std::tuple<unsigned int,bool,unsigned int,unsigned int>> *const)(v2 + 304));
  *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::H5ActivityScheduleConfig>::const_iterator *)(v2 + 144) = std::unordered_map<unsigned int,data::H5ActivityScheduleConfig>::begin(&this->h5_activity_schedule_config_map);
  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::H5ActivityScheduleConfig>::const_iterator *)(v2 + 176) = std::unordered_map<unsigned int,data::H5ActivityScheduleConfig>::end(&this->h5_activity_schedule_config_map);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false> *)(v2 + 144),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false> *)(v2 + 176)) )
  {
    v62 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false,false> *const)(v2 + 144));
    h5_schedule_id_0 = std::get<0ul,unsigned int const,data::H5ActivityScheduleConfig>(v62);
    schedule_config_0 = (std::tuple_element<1,const std::pair<unsigned int const,data::H5ActivityScheduleConfig> >::type *)std::get<1ul,unsigned int const,data::H5ActivityScheduleConfig>(v62);
    p_h5_activity_id = &schedule_config_0->h5_activity_id;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(v2 + 48);
    *(_BYTE *)(v2 + 48) = 1;
    std::vector<std::tuple<unsigned int,bool,unsigned int,unsigned int>>::emplace_back<unsigned int const&,bool,unsigned int const&,unsigned int const&>(
      (std::vector<std::tuple<unsigned int,bool,unsigned int,unsigned int>> *const)(v2 + 304),
      &schedule_config_0->begin_time,
      (bool *)(v2 + 48),
      p_h5_activity_id,
      h5_schedule_id_0,
      v27,
      (bool *)txt_config_mgra->gap0,
      (const unsigned int *)thisa,
      v54);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    v30 = &schedule_config_0->h5_activity_id;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(v2 + 64);
    *(_BYTE *)(v2 + 64) = 0;
    std::vector<std::tuple<unsigned int,bool,unsigned int,unsigned int>>::emplace_back<unsigned int const&,bool,unsigned int const&,unsigned int const&>(
      (std::vector<std::tuple<unsigned int,bool,unsigned int,unsigned int>> *const)(v2 + 304),
      &schedule_config_0->content_close_time,
      (bool *)(v2 + 64),
      v30,
      h5_schedule_id_0,
      v29,
      (bool *)txt_config_mgrb->gap0,
      thisb,
      v55);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false,false> *const)(v2 + 144));
  }
  *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
  M_current = std::vector<std::tuple<unsigned int,bool,unsigned int,unsigned int>>::end((std::vector<std::tuple<unsigned int,bool,unsigned int,unsigned int>> *const)(v2 + 304))._M_current;
  v32._M_current = std::vector<std::tuple<unsigned int,bool,unsigned int,unsigned int>>::begin((std::vector<std::tuple<unsigned int,bool,unsigned int,unsigned int>> *const)(v2 + 304))._M_current;
  std::sort<__gnu_cxx::__normal_iterator<std::tuple<unsigned int,bool,unsigned int,unsigned int> *,std::vector<std::tuple<unsigned int,bool,unsigned int,unsigned int>>>>(
    v32,
    (__gnu_cxx::__normal_iterator<std::tuple<unsigned int,bool,unsigned int,unsigned int>*,std::vector<std::tuple<unsigned int,bool,unsigned int,unsigned int>> >)M_current);
  v33 = ((v2 + 688) >> 3) + 2147450880;
  *(_DWORD *)v33 = 0;
  *(_WORD *)(v33 + 4) = 0;
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v2 + 688));
  __for_range_1 = (std::vector<std::tuple<unsigned int,bool,unsigned int,unsigned int>> *)(v2 + 304);
  *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::vector<std::tuple<unsigned int,bool,unsigned int,unsigned int>>::iterator *)(v2 + 208) = std::vector<std::tuple<unsigned int,bool,unsigned int,unsigned int>>::begin(__for_range_1);
  *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::vector<std::tuple<unsigned int,bool,unsigned int,unsigned int>>::iterator *)(v2 + 240) = std::vector<std::tuple<unsigned int,bool,unsigned int,unsigned int>>::end(__for_range_1);
  while ( __gnu_cxx::operator!=<std::tuple<unsigned int,bool,unsigned int,unsigned int> *,std::vector<std::tuple<unsigned int,bool,unsigned int,unsigned int>>>(
            (const __gnu_cxx::__normal_iterator<std::tuple<unsigned int,bool,unsigned int,unsigned int>*,std::vector<std::tuple<unsigned int,bool,unsigned int,unsigned int>> > *)(v2 + 208),
            (const __gnu_cxx::__normal_iterator<std::tuple<unsigned int,bool,unsigned int,unsigned int>*,std::vector<std::tuple<unsigned int,bool,unsigned int,unsigned int>> > *)(v2 + 240)) )
  {
    *(_WORD *)(((v2 + 272) >> 3) + 0x7FFF8000) = 0;
    v34 = __gnu_cxx::__normal_iterator<std::tuple<unsigned int,bool,unsigned int,unsigned int> *,std::vector<std::tuple<unsigned int,bool,unsigned int,unsigned int>>>::operator*((const __gnu_cxx::__normal_iterator<std::tuple<unsigned int,bool,unsigned int,unsigned int>*,std::vector<std::tuple<unsigned int,bool,unsigned int,unsigned int>> > *const)(v2 + 208));
    if ( *(_WORD *)(((v2 + 272) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v2 + 272);
    if ( ((unsigned __int8)v34 & 7) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v34->std::_Tuple_impl<0,unsigned int,bool,unsigned int,unsigned int>::std::_Head_base<0,unsigned int,false>::_M_head_impl
                    + 3) >> 3)
                  + 0x7FFF8000) != 0
      && (((unsigned __int8)v34 + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&v34->std::_Tuple_impl<0,unsigned int,bool,unsigned int,unsigned int>::std::_Head_base<0,unsigned int,false>::_M_head_impl
                                                         + 3) >> 3)
                                                       + 0x7FFF8000) )
    {
      __asan_report_load_n(v34, 16LL);
    }
    v35 = v34->std::_Tuple_impl<2,unsigned int,unsigned int>;
    v36 = *(_QWORD *)&v34->std::_Tuple_impl<0,unsigned int,bool,unsigned int,unsigned int>::std::_Tuple_impl<1,bool,unsigned int,unsigned int>::std::_Head_base<1,bool,false>::_M_head_impl;
    *(std::_Tuple_impl<2,unsigned int,unsigned int> *)(v2 + 272) = v35;
    *(_QWORD *)(v2 + 280) = v36;
    timestamp = std::get<0ul,unsigned int,bool,unsigned int,unsigned int>((std::tuple<unsigned int,bool,unsigned int,unsigned int> *)(v2 + 272));
    is_begin = std::get<1ul,unsigned int,bool,unsigned int,unsigned int>((std::tuple<unsigned int,bool,unsigned int,unsigned int> *)(v2 + 272));
    h5_activity_id = std::get<2ul,unsigned int,bool,unsigned int,unsigned int>((std::tuple<unsigned int,bool,unsigned int,unsigned int> *)(v2 + 272));
    h5_schedule_id_1 = std::get<3ul,unsigned int,bool,unsigned int,unsigned int>((std::tuple<unsigned int,bool,unsigned int,unsigned int> *)(v2 + 272));
    if ( *(_BYTE *)(((unsigned __int64)is_begin >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)is_begin & 7) >= *(_BYTE *)(((unsigned __int64)is_begin >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(is_begin);
    }
    if ( *is_begin )
    {
      v38 = std::map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int &>(
              (std::map<unsigned int,unsigned int> *const)(v2 + 688),
              h5_activity_id,
              h5_schedule_id_1,
              h5_activity_id,
              v37);
      if ( !v38.second )
      {
        *(_DWORD *)(((v2 + 560) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 560) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 591) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 591) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 560, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 560),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_h5_activity_config_mgr.cpp",
          "checkDbH5ActivityConfig",
          167);
        v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 560),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v40 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                v39,
                (const char (*)[26])"duplicate h5_activity_id:");
        v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, h5_activity_id);
        v42 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v41,
                (const char (*)[19])" with schedule_id:");
        v43 = std::map<unsigned int,unsigned int>::operator[](
                (std::map<unsigned int,unsigned int> *const)(v2 + 688),
                h5_activity_id);
        v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, v43);
        v45 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v44,
                (const char (*)[18])" and schedule_id:");
        v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, h5_schedule_id_1);
        v47 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v46, (const char (*)[10])" at time:");
        *(_DWORD *)(((v2 + 624) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((unsigned __int64)timestamp >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)timestamp & 7) + 3) >= *(_BYTE *)(((unsigned __int64)timestamp >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(timestamp);
        }
        v48 = *timestamp;
        if ( *(char *)(((v2 + 624) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 655) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 655) >> 3) + 0x7FFF8000) )
        {
          v48 = v2 + 624;
          __asan_report_store_n(v2 + 624, 32LL);
        }
        common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)(v2 + 624), v48);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v47, (const std::string *)(v2 + 624));
        std::string::~string((void *)(v2 + 624));
        *(_DWORD *)(((v2 + 624) >> 3) + 0x7FFF8000) = -117901064;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 560));
        *(_DWORD *)(((v2 + 560) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else
    {
      std::map<unsigned int,unsigned int>::erase((std::map<unsigned int,unsigned int> *const)(v2 + 688), h5_activity_id);
    }
    __gnu_cxx::__normal_iterator<std::tuple<unsigned int,bool,unsigned int,unsigned int> *,std::vector<std::tuple<unsigned int,bool,unsigned int,unsigned int>>>::operator++((__gnu_cxx::__normal_iterator<std::tuple<unsigned int,bool,unsigned int,unsigned int>*,std::vector<std::tuple<unsigned int,bool,unsigned int,unsigned int>> > *const)(v2 + 208));
  }
  *(_WORD *)(((v2 + 272) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v2 + 688));
  std::vector<std::tuple<unsigned int,bool,unsigned int,unsigned int>>::~vector((std::vector<std::tuple<unsigned int,bool,unsigned int,unsigned int>> *const)(v2 + 304));
  if ( v68 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 88) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v2 >> 3) + 0x7FFF805C) = 0;
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
  return ret;
};

// Line 183: range 000000000CD948FE-000000000CD94AB1
const data::H5ActivityScheduleConfig *__fastcall data::DbH5ActivityConfigMgr::findH5ActivityScheduleConfig(
        const data::DbH5ActivityConfigMgr *const this,
        uint32_t h5_schedule_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const data::DbH5ActivityConfigMgr *v5; // rax
  const data::DbH5ActivityConfigMgr *v6; // rax
  bool v7; // al
  const data::H5ActivityScheduleConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 18 h5_schedule_id:182 64 8 8 iter:184 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DbH5ActivityConfigMgr::findH5ActivityScheduleConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = h5_schedule_id;
  v5 = this;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::H5ActivityScheduleConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::H5ActivityScheduleConfig>::find(
                                                                                                    &v5->h5_activity_schedule_config_map,
                                                                                                    (const std::unordered_map<unsigned int,data::H5ActivityScheduleConfig>::key_type *)(v2 + 48));
  v6 = this;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::H5ActivityScheduleConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::H5ActivityScheduleConfig>::end(&v6->h5_activity_schedule_config_map);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 193: range 000000000CD94AB2-000000000CD94D89
std::vector<unsigned int> *__cdecl data::DbH5ActivityConfigMgr::getOngoingH5ScheduleIds(
        std::vector<unsigned int> *retstr,
        const data::DbH5ActivityConfigMgr *const this,
        uint32_t timestamp)
{
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false,false> *v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false,false>::reference v8; // [rsp+28h] [rbp-98h]
  std::tuple_element<1,const std::pair<unsigned int const,data::H5ActivityScheduleConfig> >::type *schedule_config; // [rsp+38h] [rbp-88h]
  char v10[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false,false> *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false,false> *)v4;
  }
  v3->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false>::__node_type *)1102416563;
  v3[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false>::__node_type *)"2 32 8 15 __for_begin:195 64 8 13 __for_end:195";
  v3[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false>::__node_type *)data::DbH5ActivityConfigMgr::getOngoingH5ScheduleIds;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  std::vector<unsigned int>::vector(retstr);
  if ( *(_BYTE *)(((unsigned __int64)&v3[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v3[4]._M_cur = std::unordered_map<unsigned int,data::H5ActivityScheduleConfig>::begin(&this->h5_activity_schedule_config_map)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v3[8]._M_cur = std::unordered_map<unsigned int,data::H5ActivityScheduleConfig>::end(&this->h5_activity_schedule_config_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false>(v3 + 4, v3 + 8) )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false,false>::operator*(v3 + 4);
    std::get<0ul,unsigned int const,data::H5ActivityScheduleConfig>(v8);
    schedule_config = (std::tuple_element<1,const std::pair<unsigned int const,data::H5ActivityScheduleConfig> >::type *)std::get<1ul,unsigned int const,data::H5ActivityScheduleConfig>(v8);
    if ( *(_BYTE *)(((unsigned __int64)&schedule_config->begin_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&schedule_config->begin_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&schedule_config->begin_time);
    }
    if ( timestamp >= schedule_config->begin_time )
    {
      if ( *(_BYTE *)(((unsigned __int64)&schedule_config->end_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)schedule_config + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->end_time >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&schedule_config->end_time);
      }
      if ( timestamp < schedule_config->end_time )
        std::vector<unsigned int>::push_back(retstr, &schedule_config->h5_schedule_id);
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false,false>::operator++(v3 + 4);
  }
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 206: range 000000000CD94D8A-000000000CD94F7D
uint32_t __fastcall data::DbH5ActivityConfigMgr::getNextUpdateH5ActivityTime(
        const data::DbH5ActivityConfigMgr *const this,
        uint32_t current_timestamp)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::set<unsigned int> *p_h5_activity_change_timestamp_set; // rdx
  std::set<unsigned int> *v6; // rdx
  bool v7; // al
  uint32_t result; // eax
  unsigned int *v9; // rax
  uint32_t *v10; // rdx
  char v11[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 21 current_timestamp:205 64 8 8 iter:207 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DbH5ActivityConfigMgr::getNextUpdateH5ActivityTime;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = current_timestamp;
  p_h5_activity_change_timestamp_set = &this->h5_activity_change_timestamp_set;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::set<unsigned int>::const_iterator *)(v2 + 64) = std::set<unsigned int>::upper_bound(
                                                           p_h5_activity_change_timestamp_set,
                                                           (const std::set<unsigned int>::key_type *)(v2 + 48));
  v6 = &this->h5_activity_change_timestamp_set;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::set<unsigned int>::iterator *)(v2 + 96) = std::set<unsigned int>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = std::numeric_limits<unsigned int>::max();
  }
  else
  {
    v9 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 64));
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    result = *v10;
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

// Line 951: range 000000000CF097F4-000000000CF0A3E5
// local variable allocation has failed, the output may be wrong!
void __cdecl data::populate_t_h5_activity_schedule_config<(mysqlpp::sql_dummy_type)0>(
        data::t_h5_activity_schedule_config *s,
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
  const mysqlpp::String *v11; // r14
  const mysqlpp::String *v12; // r14
  const mysqlpp::String *v13; // r14
  const mysqlpp::String *v14; // r14
  const mysqlpp::String *v15; // rax
  unsigned int v16; // edx
  std::string rowa; // [rsp+0h] [rbp-380h] OVERLAPPED BYREF

  rowa._M_string_length = (std::string::size_type)s;
  rowa._M_dataplus._M_p = (std::string::pointer)row;
  p_anon_0 = (unsigned __int64)&rowa._anon_0;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(832LL);
    if ( v3 )
      p_anon_0 = v3;
  }
  *(_QWORD *)p_anon_0 = 1102416563LL;
  *(_QWORD *)(p_anon_0 + 8) = "13 32 16 27 ignore_schema_mismatches:21 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unk"
                              "nown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9"
                              " <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown>";
  *(_QWORD *)(p_anon_0 + 16) = data::populate_t_h5_activity_schedule_config<(mysqlpp::sql_dummy_type)0>;
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
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862741] = -218959118;
  v4[536862743] = -218959118;
  v4[536862745] = -202116109;
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
  *(_DWORD *)(((p_anon_0 + 512) >> 3) + 0x7FFF8000) = 0;
  v12 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 448) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 448);
  if ( *(char *)(((p_anon_0 + 512) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 543) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 + 31) & 7) >= *(_BYTE *)(((p_anon_0 + 543) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 512, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 512), v12, rowa);
  std::string::operator=(rowa._M_string_length + 104, p_anon_0 + 512);
  std::string::~string((void *)(p_anon_0 + 512));
  *(_DWORD *)(((p_anon_0 + 512) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 448));
  *(_DWORD *)(((p_anon_0 + 448) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 640) >> 3) + 0x7FFF8000) = 0;
  v13 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 576) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 576);
  if ( *(char *)(((p_anon_0 + 640) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 671) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 671) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 640, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 640), v13, rowa);
  std::string::operator=(rowa._M_string_length + 136, p_anon_0 + 640);
  std::string::~string((void *)(p_anon_0 + 640));
  *(_DWORD *)(((p_anon_0 + 640) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 576));
  *(_DWORD *)(((p_anon_0 + 576) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 768) >> 3) + 0x7FFF8000) = 0;
  v14 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 704) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 704);
  if ( *(char *)(((p_anon_0 + 768) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 799) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 + 31) & 7) >= *(_BYTE *)(((p_anon_0 + 799) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 768, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 768), v14, rowa);
  std::string::operator=(rowa._M_string_length + 168, p_anon_0 + 768);
  std::string::~string((void *)(p_anon_0 + 768));
  *(_DWORD *)(((p_anon_0 + 768) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 704));
  *(_DWORD *)(((p_anon_0 + 704) >> 3) + 0x7FFF8000) = -117901064;
  v15 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v16 = mysqlpp::String::conv<unsigned int>(v15, 0);
  if ( *(_BYTE *)(((rowa._M_string_length + 200) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((rowa._M_string_length + 200) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(rowa._M_string_length + 200);
  }
  *(_DWORD *)(rowa._M_string_length + 200) = v16;
  mysqlpp::NoExceptions::~NoExceptions((mysqlpp::NoExceptions *const)(p_anon_0 + 32));
  if ( &rowa._anon_0 == (std::string::$CFBEC286C7F52157F7E59FC354047095 *)p_anon_0 )
  {
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8060) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 104) & 0xFFFFFFF8) >> 3));
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
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
