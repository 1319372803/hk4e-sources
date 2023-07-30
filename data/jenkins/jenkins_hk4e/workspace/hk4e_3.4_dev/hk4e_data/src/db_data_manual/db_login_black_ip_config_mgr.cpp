// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_login_black_ip_config_mgr.cpp

// Line 24: range 000000000CDA7C3E-000000000CDA7EDB
bool __cdecl data::DbLoginBlackIpConfigMgr::checkLoginBlackList(common::midb::MySqlMgr *mysql_mgr, uint32_t ip_int)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // edx
  common::milog::MiLogStream *v6; // rax
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
  *(_QWORD *)(v2 + 8) = "3 32 1 11 is_exist:25 48 4 6 ret:26 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DbLoginBlackIpConfigMgr::checkLoginBlackList;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862723] = -202116109;
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(v2 + 32);
  *(_BYTE *)(v2 + 32) = 0;
  v5 = data::DbLoginBlackIpConfigMgr::selectIpByIp(mysql_mgr, ip_int, (bool *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48);
  *(_DWORD *)(v2 + 48) = v5;
  if ( *(_DWORD *)(v2 + 48) )
  {
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/db_data_manual/db_login_black_ip_config_mgr.cpp",
      "checkLoginBlackList",
      29);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[25])"selectIpByIp fails, ret:");
    common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  else
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(v2 + 32);
    result = *(_BYTE *)(v2 + 32) ^ 1;
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 37: range 000000000CDA7EDC-000000000CDA8881
int32_t __cdecl data::DbLoginBlackIpConfigMgr::selectIpByIp(
        common::midb::MySqlMgr *mysql_mgr,
        uint32_t ip_int,
        bool *is_account_exist)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint16_t MysqlIndexByDbConfigType; // dx
  int32_t v7; // r14d
  mysqlpp::Connection *v8; // rsi
  __int64 v9; // rax
  std::logic_error *exception; // rdi
  std::vector<mysqlpp::Row>::size_type v11; // rax
  unsigned __int64 v12; // rax
  char v16[1136]; // [rsp+40h] [rbp-470h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1088LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 16 11 conn_ptr:40 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 120 6 res:54 "
                        "416 544 8 query:48";
  *(_QWORD *)(v3 + 16) = data::DbLoginBlackIpConfigMgr::selectIpByIp;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862723] = -218959118;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862731] = -234881024;
  v5[536862732] = -218959118;
  v5[536862750] = -202116109;
  v5[536862751] = -202116109;
  v5[536862752] = -202116109;
  v5[536862753] = -202116109;
  MysqlIndexByDbConfigType = DbConfigMgr::getMysqlIndexByDbConfigType(DB_CONFIG_LOCAL);
  if ( *(_WORD *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v3 + 32);
  common::midb::MySqlMgrT<std::mutex>::grab(mysql_mgr, MysqlIndexByDbConfigType, 0);
  if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/db_data_manual/db_login_black_ip_config_mgr.cpp",
      "selectIpByIp",
      43);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 64), "grab connect failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 959) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 959) >> 3) + 0x7FFF8000) )
    {
      v8 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v3 + 416, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 416), v8, "select ip from t_login_black_ip_config ");
    v9 = std::operator<<<std::char_traits<char>>(v3 + 416, " where ip=");
    std::ostream::operator<<(v9, ip_int);
    if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 375) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 119) & 7) >= *(_BYTE *)(((v3 + 375) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 256, 120LL);
    }
    mysqlpp::Query::store((mysqlpp::Query *)(v3 + 256));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 416)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    if ( std::vector<mysqlpp::Row>::empty((const std::vector<mysqlpp::Row> *const)(v3 + 344)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)is_account_exist >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)is_account_exist & 7) >= *(_BYTE *)(((unsigned __int64)is_account_exist >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(is_account_exist);
      }
      *is_account_exist = 0;
      v7 = 0;
    }
    else if ( std::vector<mysqlpp::Row>::size((const std::vector<mysqlpp::Row> *const)(v3 + 344)) == 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)is_account_exist >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)is_account_exist & 7) >= *(_BYTE *)(((unsigned __int64)is_account_exist >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(is_account_exist);
      }
      *is_account_exist = 1;
      v7 = 0;
    }
    else
    {
      if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 128, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/db_data_manual/db_login_black_ip_config_mgr.cpp",
        "selectIpByIp",
        74);
      v11 = std::vector<mysqlpp::Row>::size((const std::vector<mysqlpp::Row> *const)(v3 + 344));
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v3 + 128),
        "get %lu row from t_login_black_ip_config with ip=%u",
        v11,
        ip_int);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
      *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -117901064;
      v7 = -1;
    }
    mysqlpp::StoreQueryResult::~StoreQueryResult((mysqlpp::StoreQueryResult *const)(v3 + 256));
    v12 = ((v3 + 256) >> 3) + 2147450880;
    *(_DWORD *)v12 = -117901064;
    *(_DWORD *)(v12 + 4) = -117901064;
    *(_DWORD *)(v12 + 8) = -117901064;
    *(_WORD *)(v12 + 12) = -1800;
    *(_BYTE *)(v12 + 14) = -8;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 416));
  }
  std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v3 + 32));
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8078) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8080) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1088LL, v16);
  }
  return v7;
};
