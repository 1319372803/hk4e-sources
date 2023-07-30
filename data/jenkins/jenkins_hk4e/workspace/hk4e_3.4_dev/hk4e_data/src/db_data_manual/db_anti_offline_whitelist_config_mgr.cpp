// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_anti_offline_whitelist_config_mgr.cpp

// Line 19: range 000000000CEEB704-000000000CEEB851
void __cdecl data::populate_t_anti_offline_whitelist_config<(mysqlpp::sql_dummy_type)0>(
        data::t_anti_offline_whitelist_config *s,
        const mysqlpp::Row *row)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const mysqlpp::String *v5; // rax
  unsigned int v6; // edx
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 27 ignore_schema_mismatches:19";
  *(_QWORD *)(v2 + 16) = data::populate_t_anti_offline_whitelist_config<(mysqlpp::sql_dummy_type)0>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  mysqlpp::NoExceptions::NoExceptions((mysqlpp::NoExceptions *const)(v2 + 32), row);
  v5 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)row);
  v6 = mysqlpp::String::conv<unsigned int>(v5, 0);
  if ( *(_BYTE *)(((unsigned __int64)s >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)s >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(s);
  }
  s->uid = v6;
  mysqlpp::NoExceptions::~NoExceptions((mysqlpp::NoExceptions *const)(v2 + 32));
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 19: range 000000000CE3EAC8-000000000CE3EB1E
void __cdecl data::t_anti_offline_whitelist_config::t_anti_offline_whitelist_config(
        data::t_anti_offline_whitelist_config *const this,
        const mysqlpp::Row *row)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  data::populate_t_anti_offline_whitelist_config<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 24: range 000000000CD60026-000000000CD60C18
int32_t __cdecl data::DbAntiOfflineWhitelistConfigMgr::loadAntiOfflineWhitelistConfig(
        data::DbAntiOfflineWhitelistConfigMgr *const this,
        common::midb::MysqlConnPtr *conn_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  mysqlpp::Connection *v6; // rsi
  std::logic_error *exception; // rdi
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // r14
  std::vector<data::t_anti_offline_whitelist_config>::size_type v12; // rax
  common::milog::MiLogStream *v13; // rax
  unsigned __int64 v14; // rax
  int32_t ret; // [rsp+24h] [rbp-4CCh]
  std::vector<data::t_anti_offline_whitelist_config> *__for_range; // [rsp+28h] [rbp-4C8h]
  const data::t_anti_offline_whitelist_config *row; // [rsp+30h] [rbp-4C0h]
  char v19[1200]; // [rsp+40h] [rbp-4B0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1152LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 32 8 14 __for_begin:44 64 8 12 __for_end:44 96 8 9 <unknown> 128 8 9 <unknown> 160 24 10 row_"
                        "vec:37 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 544 8 query:31";
  *(_QWORD *)(v2 + 16) = data::DbAntiOfflineWhitelistConfigMgr::loadAntiOfflineWhitelistConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -234881024;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862752] = -202116109;
  v4[536862753] = -202116109;
  v4[536862754] = -202116109;
  v4[536862755] = -202116109;
  if ( std::operator==<mysqlpp::Connection>(0LL, conn_ptr) )
  {
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
      "./src/db_data_manual/db_anti_offline_whitelist_config_mgr.cpp",
      "loadAntiOfflineWhitelistConfig",
      27);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
      (common::milog::MiLogStream *const)(v2 + 224),
      (const char (*)[17])"conn_ptr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_ptr);
    if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) )
    {
      v6 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v2 + 480, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v2 + 480), v6, "select ");
    ret = 0;
    std::operator<<<std::char_traits<char>>(v2 + 480, "`uid` from t_anti_offline_whitelist");
    std::vector<data::t_anti_offline_whitelist_config>::vector((std::vector<data::t_anti_offline_whitelist_config> *const)(v2 + 160));
    mysqlpp::Query::storein<std::vector<data::t_anti_offline_whitelist_config>>(
      (mysqlpp::Query *const)(v2 + 480),
      (std::vector<data::t_anti_offline_whitelist_config> *)(v2 + 160));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v2 + 480)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    __for_range = (std::vector<data::t_anti_offline_whitelist_config> *)(v2 + 160);
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::t_anti_offline_whitelist_config>::iterator *)(v2 + 32) = std::vector<data::t_anti_offline_whitelist_config>::begin(__for_range);
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::t_anti_offline_whitelist_config>::iterator *)(v2 + 64) = std::vector<data::t_anti_offline_whitelist_config>::end(__for_range);
    while ( __gnu_cxx::operator!=<data::t_anti_offline_whitelist_config *,std::vector<data::t_anti_offline_whitelist_config>>(
              (const __gnu_cxx::__normal_iterator<data::t_anti_offline_whitelist_config*,std::vector<data::t_anti_offline_whitelist_config> > *)(v2 + 32),
              (const __gnu_cxx::__normal_iterator<data::t_anti_offline_whitelist_config*,std::vector<data::t_anti_offline_whitelist_config> > *)(v2 + 64)) )
    {
      row = __gnu_cxx::__normal_iterator<data::t_anti_offline_whitelist_config *,std::vector<data::t_anti_offline_whitelist_config>>::operator*((const __gnu_cxx::__normal_iterator<data::t_anti_offline_whitelist_config*,std::vector<data::t_anti_offline_whitelist_config> > *const)(v2 + 32));
      v8 = std::unordered_set<unsigned int>::insert(&this->whitelist_uid_set_, &row->uid);
      if ( !v8.second )
      {
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
          "./src/db_data_manual/db_anti_offline_whitelist_config_mgr.cpp",
          "loadAntiOfflineWhitelistConfig",
          48);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 288),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v9, (const char (*)[15])"duplicate uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &row->uid);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
        *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<data::t_anti_offline_whitelist_config *,std::vector<data::t_anti_offline_whitelist_config>>::operator++((__gnu_cxx::__normal_iterator<data::t_anti_offline_whitelist_config*,std::vector<data::t_anti_offline_whitelist_config> > *const)(v2 + 32));
    }
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
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
      1u,
      "./src/db_data_manual/db_anti_offline_whitelist_config_mgr.cpp",
      "loadAntiOfflineWhitelistConfig",
      53);
    v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
            (common::milog::MiLogStream *const)(v2 + 352),
            (const char (*)[6])"load ");
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    v12 = std::vector<data::t_anti_offline_whitelist_config>::size((const std::vector<data::t_anti_offline_whitelist_config> *const)(v2 + 160));
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)(v2 + 96) = v12;
    v13 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v11,
            (const unsigned __int64 *)(v2 + 96));
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      v13,
      (const char (*)[45])" config from t_anti_offline_whitelist_config");
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
    *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
    std::vector<data::t_anti_offline_whitelist_config>::~vector((std::vector<data::t_anti_offline_whitelist_config> *const)(v2 + 160));
    v14 = ((v2 + 160) >> 3) + 2147450880;
    *(_WORD *)v14 = -1800;
    *(_BYTE *)(v14 + 2) = -8;
    v5 = ret;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v2 + 480));
  }
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8080) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8088) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1152LL, v19);
  }
  return v5;
};

// Line 66: range 000000000CD60C1A-000000000CD60DA4
bool __fastcall data::DbAntiOfflineWhitelistConfigMgr::isUidInWhitelist(
        const data::DbAntiOfflineWhitelistConfigMgr *const this,
        uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const data::DbAntiOfflineWhitelistConfigMgr *v5; // rax
  const data::DbAntiOfflineWhitelistConfigMgr *v6; // rax
  bool result; // al
  char v8[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 uid:65 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DbAntiOfflineWhitelistConfigMgr::isUidInWhitelist;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = uid;
  v5 = this;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_set<unsigned int>::const_iterator *)(v2 + 96) = std::unordered_set<unsigned int>::end(&v5->whitelist_uid_set_);
  v6 = this;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_set<unsigned int>::const_iterator *)(v2 + 64) = std::unordered_set<unsigned int>::find(
                                                                     &v6->whitelist_uid_set_,
                                                                     (const std::unordered_set<unsigned int>::key_type *)(v2 + 48));
  result = std::__detail::operator!=<unsigned int,false>(
             (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v2 + 64),
             (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v2 + 96));
  if ( v8 == (char *)v2 )
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

// Line 71: range 000000000CEEBF55-000000000CEEC0A2
void __cdecl data::populate_t_client_watchdog_uid_list_config<(mysqlpp::sql_dummy_type)0>(
        data::t_client_watchdog_uid_list_config *s,
        const mysqlpp::Row *row)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const mysqlpp::String *v5; // rax
  unsigned int v6; // edx
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 27 ignore_schema_mismatches:71";
  *(_QWORD *)(v2 + 16) = data::populate_t_client_watchdog_uid_list_config<(mysqlpp::sql_dummy_type)0>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  mysqlpp::NoExceptions::NoExceptions((mysqlpp::NoExceptions *const)(v2 + 32), row);
  v5 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)row);
  v6 = mysqlpp::String::conv<unsigned int>(v5, 0);
  if ( *(_BYTE *)(((unsigned __int64)s >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)s >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(s);
  }
  s->uid = v6;
  mysqlpp::NoExceptions::~NoExceptions((mysqlpp::NoExceptions *const)(v2 + 32));
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 71: range 000000000CE3EB74-000000000CE3EBCA
void __cdecl data::t_client_watchdog_uid_list_config::t_client_watchdog_uid_list_config(
        data::t_client_watchdog_uid_list_config *const this,
        const mysqlpp::Row *row)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  data::populate_t_client_watchdog_uid_list_config<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 76: range 000000000CD60DA6-000000000CD61998
int32_t __cdecl data::DbClientWatchdogUidListConfigMgr::loadClientWatchdogUidListConfig(
        data::DbClientWatchdogUidListConfigMgr *const this,
        common::midb::MysqlConnPtr *conn_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  mysqlpp::Connection *v6; // rsi
  std::logic_error *exception; // rdi
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // r14
  std::vector<data::t_client_watchdog_uid_list_config>::size_type v12; // rax
  common::milog::MiLogStream *v13; // rax
  unsigned __int64 v14; // rax
  int32_t ret; // [rsp+24h] [rbp-4CCh]
  std::vector<data::t_client_watchdog_uid_list_config> *__for_range; // [rsp+28h] [rbp-4C8h]
  const data::t_client_watchdog_uid_list_config *row; // [rsp+30h] [rbp-4C0h]
  char v19[1200]; // [rsp+40h] [rbp-4B0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1152LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 32 8 14 __for_begin:96 64 8 12 __for_end:96 96 8 9 <unknown> 128 8 9 <unknown> 160 24 10 row_"
                        "vec:89 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 544 8 query:83";
  *(_QWORD *)(v2 + 16) = data::DbClientWatchdogUidListConfigMgr::loadClientWatchdogUidListConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -234881024;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862752] = -202116109;
  v4[536862753] = -202116109;
  v4[536862754] = -202116109;
  v4[536862755] = -202116109;
  if ( std::operator==<mysqlpp::Connection>(0LL, conn_ptr) )
  {
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
      "./src/db_data_manual/db_anti_offline_whitelist_config_mgr.cpp",
      "loadClientWatchdogUidListConfig",
      79);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
      (common::milog::MiLogStream *const)(v2 + 224),
      (const char (*)[17])"conn_ptr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_ptr);
    if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) )
    {
      v6 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v2 + 480, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v2 + 480), v6, "select ");
    ret = 0;
    std::operator<<<std::char_traits<char>>(v2 + 480, "`uid` from t_client_watchdog_uid_list_config");
    std::vector<data::t_client_watchdog_uid_list_config>::vector((std::vector<data::t_client_watchdog_uid_list_config> *const)(v2 + 160));
    mysqlpp::Query::storein<std::vector<data::t_client_watchdog_uid_list_config>>(
      (mysqlpp::Query *const)(v2 + 480),
      (std::vector<data::t_client_watchdog_uid_list_config> *)(v2 + 160));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v2 + 480)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    __for_range = (std::vector<data::t_client_watchdog_uid_list_config> *)(v2 + 160);
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::t_client_watchdog_uid_list_config>::iterator *)(v2 + 32) = std::vector<data::t_client_watchdog_uid_list_config>::begin(__for_range);
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::t_client_watchdog_uid_list_config>::iterator *)(v2 + 64) = std::vector<data::t_client_watchdog_uid_list_config>::end(__for_range);
    while ( __gnu_cxx::operator!=<data::t_client_watchdog_uid_list_config *,std::vector<data::t_client_watchdog_uid_list_config>>(
              (const __gnu_cxx::__normal_iterator<data::t_client_watchdog_uid_list_config*,std::vector<data::t_client_watchdog_uid_list_config> > *)(v2 + 32),
              (const __gnu_cxx::__normal_iterator<data::t_client_watchdog_uid_list_config*,std::vector<data::t_client_watchdog_uid_list_config> > *)(v2 + 64)) )
    {
      row = __gnu_cxx::__normal_iterator<data::t_client_watchdog_uid_list_config *,std::vector<data::t_client_watchdog_uid_list_config>>::operator*((const __gnu_cxx::__normal_iterator<data::t_client_watchdog_uid_list_config*,std::vector<data::t_client_watchdog_uid_list_config> > *const)(v2 + 32));
      v8 = std::unordered_set<unsigned int>::insert(&this->watchdog_uid_set_, &row->uid);
      if ( !v8.second )
      {
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
          "./src/db_data_manual/db_anti_offline_whitelist_config_mgr.cpp",
          "loadClientWatchdogUidListConfig",
          100);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 288),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v9, (const char (*)[15])"duplicate uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &row->uid);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
        *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<data::t_client_watchdog_uid_list_config *,std::vector<data::t_client_watchdog_uid_list_config>>::operator++((__gnu_cxx::__normal_iterator<data::t_client_watchdog_uid_list_config*,std::vector<data::t_client_watchdog_uid_list_config> > *const)(v2 + 32));
    }
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
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
      1u,
      "./src/db_data_manual/db_anti_offline_whitelist_config_mgr.cpp",
      "loadClientWatchdogUidListConfig",
      105);
    v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
            (common::milog::MiLogStream *const)(v2 + 352),
            (const char (*)[6])"load ");
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    v12 = std::vector<data::t_client_watchdog_uid_list_config>::size((const std::vector<data::t_client_watchdog_uid_list_config> *const)(v2 + 160));
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)(v2 + 96) = v12;
    v13 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v11,
            (const unsigned __int64 *)(v2 + 96));
    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
      v13,
      (const char (*)[47])" config from t_client_watchdog_uid_list_config");
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
    *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
    std::vector<data::t_client_watchdog_uid_list_config>::~vector((std::vector<data::t_client_watchdog_uid_list_config> *const)(v2 + 160));
    v14 = ((v2 + 160) >> 3) + 2147450880;
    *(_WORD *)v14 = -1800;
    *(_BYTE *)(v14 + 2) = -8;
    v5 = ret;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v2 + 480));
  }
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8080) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8088) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1152LL, v19);
  }
  return v5;
};

// Line 118: range 000000000CD6199A-000000000CD61A65
bool __fastcall data::DbClientWatchdogUidListConfigMgr::isUidInWatchdogUidList(
        const data::DbClientWatchdogUidListConfigMgr *const this,
        uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:117";
  *(_QWORD *)(v2 + 16) = data::DbClientWatchdogUidListConfigMgr::isUidInWatchdogUidList;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  result = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
             &this->watchdog_uid_set_,
             (const unsigned int *)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
