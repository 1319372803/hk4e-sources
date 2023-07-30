// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_common/src/mysql_op_misc.cpp

// Line 42: range 000000000D4743FC-000000000D475366
__int64 __fastcall MysqlOpMisc::selectLoginBlackUidConfig(
        uint32_t uid,
        TableLoginBlackUidConfig *black_config,
        unsigned __int64 is_exist)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v6; // rsi
  unsigned __int64 v7; // rax
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rsi
  common::milog::MiLogStream *v9; // rcx
  unsigned int v10; // r14d
  mysqlpp::Connection *v11; // rsi
  unsigned __int64 v12; // rax
  std::logic_error *exception; // rdi
  const TableLoginBlackUidConfig *v14; // rax
  unsigned __int64 v15; // rax
  char v19[1488]; // [rsp+40h] [rbp-5D0h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1440LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "18 48 1 9 <unknown> 64 1 9 <unknown> 80 4 6 ret:43 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9 <u"
                        "nknown> 144 4 6 uid:41 160 8 9 <unknown> 192 16 9 <unknown> 224 16 11 conn_ptr:48 256 24 10 row_"
                        "vec:60 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 56 13 spa"
                        "n_proxy:44 672 56 13 _tc_guard_:46 768 544 8 query:56";
  *(_QWORD *)(v3 + 16) = MysqlOpMisc::selectLoginBlackUidConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556927;
  v5[536862723] = -234556924;
  v5[536862724] = -234556924;
  v5[536862725] = -218959360;
  v5[536862726] = -219021312;
  v5[536862727] = -219021312;
  v5[536862728] = -234881024;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -234881024;
  v5[536862740] = -218959118;
  v5[536862742] = -234881024;
  v5[536862743] = -218959118;
  v5[536862761] = -202116109;
  v5[536862762] = -202116109;
  v5[536862763] = -202116109;
  v5[536862764] = -202116109;
  *(_DWORD *)(v3 + 144) = uid;
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 80);
  *(_DWORD *)(v3 + 80) = -1;
  opentracing::v3::string_view::string_view(
    (opentracing::v3::string_view *const)(v3 + 192),
    "selectLoginBlackUidConfig");
  v6 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
  if ( *(_WORD *)(((v3 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_load16(v3 + 192);
  SpanProxy::SpanProxy(
    (SpanProxy *const)(v3 + 576),
    v6,
    *(opentracing::v3::string_view *)(v3 + 192),
    0LL,
    0,
    (const int *)(v3 + 80));
  *(_WORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -1800;
  v7 = ((v3 + 672) >> 3) + 2147450880;
  *(_DWORD *)v7 = 0;
  *(_WORD *)(v7 + 4) = 0;
  *(_BYTE *)(v7 + 6) = 0;
  *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v3 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 384),
    "selectLoginBlackUidConfig",
    (const std::allocator<char> *)(v3 + 64));
  *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 320),
    "MYSQL",
    (const std::allocator<char> *)(v3 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 672),
    (const std::string *)(v3 + 320),
    (const std::string *)(v3 + 384));
  std::string::~string((void *)(v3 + 320));
  *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v3 + 384));
  *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 64);
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) != 0 && (char)(is_exist & 7) >= *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) )
    __asan_report_store1(is_exist);
  *(_BYTE *)is_exist = 0;
  *(_WORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
  v8 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
  if ( *(_WORD *)(((v3 + 224) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v3 + 224, v8);
  common::midb::MySqlMgrT<std::mutex>::grab(v8, 0x3E9u, 0);
  if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v3 + 224)) )
  {
    *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 96 + 63) & 7) >= *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 448, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 448),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/mysql_op_misc.cpp",
      "selectLoginBlackUidConfig",
      51);
    v9 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           (common::milog::MiLogStream *const)(v3 + 448),
           (const char (*)[52])"[MYSQL]ResourceBox::mysql_mgr_ptr->grab failed for ");
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 96);
    *(_DWORD *)(v3 + 96) = 1001;
    common::milog::MiLogStream::operator<<<proto::MysqlIndex,(proto::MysqlIndex*)0>(
      v9,
      (const proto::MysqlIndex *)(v3 + 96));
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
    *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
    if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 80);
    *(_DWORD *)(v3 + 80) = -1;
    v10 = *(_DWORD *)(v3 + 80);
  }
  else
  {
    __asan_unpoison_stack_memory(v3 + 768, 544LL);
    v11 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
    if ( *(char *)(((v3 + 768) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1311) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 96 + 127) & 7) >= *(_BYTE *)(((v3 + 1311) >> 3) + 0x7FFF8000) )
    {
      v11 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v3 + 768, 544LL);
    }
    mysqlpp::Connection::query(
      (mysqlpp::Query *)(v3 + 768),
      v11,
      "select uid, begin_time, end_time, msg from t_login_black_uid_config where uid = ");
    std::ostream::operator<<(v3 + 768, *(unsigned int *)(v3 + 144));
    v12 = ((v3 + 256) >> 3) + 2147450880;
    *(_WORD *)v12 = 0;
    *(_BYTE *)(v12 + 2) = 0;
    std::vector<TableLoginBlackUidConfig>::vector((std::vector<TableLoginBlackUidConfig> *const)(v3 + 256));
    mysqlpp::Query::storein<std::vector<TableLoginBlackUidConfig>>(
      (mysqlpp::Query *const)(v3 + 768),
      (std::vector<TableLoginBlackUidConfig> *)(v3 + 256));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 768)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    if ( std::vector<TableLoginBlackUidConfig>::size((const std::vector<TableLoginBlackUidConfig> *const)(v3 + 256)) )
    {
      v14 = std::vector<TableLoginBlackUidConfig>::operator[](
              (std::vector<TableLoginBlackUidConfig> *const)(v3 + 256),
              0LL);
      TableLoginBlackUidConfig::operator=(black_config, v14);
      if ( *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) != 0
        && (char)(is_exist & 7) >= *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(is_exist);
      }
      *(_BYTE *)is_exist = 1;
    }
    std::vector<TableLoginBlackUidConfig>::~vector((std::vector<TableLoginBlackUidConfig> *const)(v3 + 256));
    v15 = ((v3 + 256) >> 3) + 2147450880;
    *(_WORD *)v15 = -1800;
    *(_BYTE *)(v15 + 2) = -8;
    if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 80);
    *(_DWORD *)(v3 + 80) = 0;
    v10 = *(_DWORD *)(v3 + 80);
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 768));
  }
  std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v3 + 224));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 672));
  SpanProxy::~SpanProxy((SpanProxy *const)(v3 + 576));
  if ( v19 == (char *)v3 )
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80A4) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80AC) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1440LL, v19);
  }
  return v10;
};

// Line 72: range 000000000D473D74-000000000D4743FA
int32_t __cdecl MysqlOpMisc::checkMysqlTableExistance()
{
  unsigned __int64 v0; // r13
  __int64 v1; // rax
  _DWORD *v2; // r12
  char *i; // r14
  _DWORD *v4; // rax
  int32_t v5; // r14d
  int32_t result; // eax
  char v7[528]; // [rsp+10h] [rbp-210h] BYREF

  v0 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v1 = __asan_stack_malloc_3(480LL);
    if ( v1 )
      v0 = v1;
  }
  *(_QWORD *)v0 = 1102416563LL;
  *(_QWORD *)(v0 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9 "
                        "<unknown> 144 1 9 <unknown> 160 24 17 table_name_vec:28 224 192 9 <unknown>";
  *(_QWORD *)(v0 + 16) = MysqlOpMisc::checkMysqlTableExistance;
  v2 = (_DWORD *)(v0 >> 3);
  v2[536862720] = -235802127;
  v2[536862721] = -234753551;
  v2[536862722] = -234753535;
  v2[536862723] = -234753535;
  v2[536862724] = -234753535;
  v2[536862725] = -234881024;
  v2[536862726] = -218959118;
  v2[536862733] = -202116109;
  v2[536862734] = -202116109;
  std::allocator<char>::allocator(v0 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v0 + 224),
    "t_login_black_uid_config",
    (const std::allocator<char> *)(v0 + 48));
  std::allocator<char>::allocator(v0 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v0 + 256),
    "t_activity_data",
    (const std::allocator<char> *)(v0 + 64));
  std::allocator<char>::allocator(v0 + 80);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v0 + 288),
    "t_mail_block_tag_config",
    (const std::allocator<char> *)(v0 + 80));
  std::allocator<char>::allocator(v0 + 96);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v0 + 320),
    "t_feature_switch_off_config",
    (const std::allocator<char> *)(v0 + 96));
  std::allocator<char>::allocator(v0 + 112);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v0 + 352),
    "t_feature_block_config",
    (const std::allocator<char> *)(v0 + 112));
  std::allocator<char>::allocator(v0 + 128);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v0 + 384),
    "t_red_point_config",
    (const std::allocator<char> *)(v0 + 128));
  std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v0 + 144));
  std::vector<std::string>::vector(
    (std::vector<std::string> *const)(v0 + 160),
    (std::initializer_list<std::string >)__PAIR128__(6LL, v0 + 224),
    (const std::vector<std::string>::allocator_type *)(v0 + 144));
  std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v0 + 144));
  *(_BYTE *)(((v0 + 144) >> 3) + 0x7FFF8000) = -8;
  for ( i = (char *)(v0 + 416); i != (char *)(v0 + 224); std::string::~string(i) )
    i -= 32;
  v4 = (_DWORD *)(((v0 + 224) >> 3) + 2147450880);
  *v4 = -117901064;
  v4[1] = -117901064;
  v4[2] = -117901064;
  v4[3] = -117901064;
  v4[4] = -117901064;
  v4[5] = -117901064;
  std::allocator<char>::~allocator(v0 + 128);
  *(_BYTE *)(((v0 + 128) >> 3) + 0x7FFF8000) = -8;
  std::allocator<char>::~allocator(v0 + 112);
  *(_BYTE *)(((v0 + 112) >> 3) + 0x7FFF8000) = -8;
  std::allocator<char>::~allocator(v0 + 96);
  *(_BYTE *)(((v0 + 96) >> 3) + 0x7FFF8000) = -8;
  std::allocator<char>::~allocator(v0 + 80);
  *(_BYTE *)(((v0 + 80) >> 3) + 0x7FFF8000) = -8;
  std::allocator<char>::~allocator(v0 + 64);
  *(_BYTE *)(((v0 + 64) >> 3) + 0x7FFF8000) = -8;
  std::allocator<char>::~allocator(v0 + 48);
  *(_BYTE *)(((v0 + 48) >> 3) + 0x7FFF8000) = -8;
  v5 = MysqlOpBase::checkMysqlTableExistance(0x3E9u, (const std::vector<std::string> *)(v0 + 160));
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v0 + 160));
  result = v5;
  if ( v7 == (char *)v0 )
  {
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v0 >> 3) + 0x7FFF8038) = 0;
  }
  else
  {
    *(_QWORD *)v0 = 1172321806LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v0 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 82: range 000000000D475368-000000000D47698A
int32_t __cdecl MysqlOpMisc::insertOrUpdateLoginBlackUidConfig(const TableLoginBlackUidConfig *black_config)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v4; // r14d
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rsi
  common::milog::MiLogStream *v6; // rcx
  mysqlpp::Connection *v7; // rsi
  __int64 v8; // rax
  std::ostream *v9; // rax
  std::ostream *ostr; // r14
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  std::ostream *v13; // rax
  std::ostream *v14; // r14
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  std::ostream *v17; // rax
  std::ostream *v18; // r14
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  common::milog::MiLogStream *v27; // rdx
  common::milog::MiLogStream *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  std::ostream *v31; // rax
  std::ostream *v32; // r14
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  std::ostream *v35; // rax
  std::ostream *v36; // r14
  unsigned __int64 v37; // rax
  __int64 v38; // rax
  std::ostream *v39; // rax
  std::ostream *v40; // r14
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rax
  char v49[1968]; // [rsp+20h] [rbp-7B0h] BYREF

  v1 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_5(1920LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "23 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 8 9"
                        " <unknown> 160 16 11 conn_ptr:89 192 24 9 <unknown> 256 24 9 <unknown> 320 24 9 <unknown> 384 24"
                        " 9 <unknown> 448 24 9 <unknown> 512 24 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 "
                        "9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <unknown> 960 56 13 _tc_guard_:83 105"
                        "6 56 9 <unknown> 1152 56 9 <unknown> 1248 544 8 query:97";
  *(_QWORD *)(v1 + 16) = MysqlOpMisc::insertOrUpdateLoginBlackUidConfig;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234556927;
  v3[536862723] = -234556924;
  v3[536862724] = -218959360;
  v3[536862725] = -219021312;
  v3[536862726] = -234881024;
  v3[536862727] = -218959118;
  v3[536862728] = -234881024;
  v3[536862729] = -218959118;
  v3[536862730] = -234881024;
  v3[536862731] = -218959118;
  v3[536862732] = -234881024;
  v3[536862733] = -218959118;
  v3[536862734] = -234881024;
  v3[536862735] = -218959118;
  v3[536862736] = -234881024;
  v3[536862737] = -218959118;
  v3[536862739] = -218959118;
  v3[536862741] = -218959118;
  v3[536862743] = -218959118;
  v3[536862745] = -218959118;
  v3[536862747] = -218959118;
  v3[536862749] = -218959118;
  v3[536862751] = -234881024;
  v3[536862752] = -218959118;
  v3[536862754] = -234881024;
  v3[536862755] = -218959118;
  v3[536862757] = -234881024;
  v3[536862758] = -218959118;
  v3[536862776] = -202116109;
  v3[536862777] = -202116109;
  v3[536862778] = -202116109;
  v3[536862779] = -202116109;
  std::allocator<char>::allocator(v1 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 640),
    "insertOrUpdateLoginBlackUidConfig",
    (const std::allocator<char> *)(v1 + 64));
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 576),
    "MYSQL",
    (const std::allocator<char> *)(v1 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v1 + 960),
    (const std::string *)(v1 + 576),
    (const std::string *)(v1 + 640));
  std::string::~string((void *)(v1 + 576));
  *(_DWORD *)(((v1 + 576) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v1 + 640));
  *(_DWORD *)(((v1 + 640) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 64);
  *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)black_config >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)black_config >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(black_config);
  }
  if ( black_config->uid )
  {
    *(_WORD *)(((v1 + 160) >> 3) + 0x7FFF8000) = 0;
    v5 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
    if ( *(_WORD *)(((v1 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v1 + 160, v5);
    common::midb::MySqlMgrT<std::mutex>::grab(v5, 0x3E9u, 0);
    if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v1 + 160)) )
    {
      *(_DWORD *)(((v1 + 768) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v1 + 768) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 799) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 + 31) & 7) >= *(_BYTE *)(((v1 + 799) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 768, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 768),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/mysql_op_misc.cpp",
        "insertOrUpdateLoginBlackUidConfig",
        92);
      v6 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
             (common::milog::MiLogStream *const)(v1 + 768),
             (const char (*)[52])"[MYSQL]ResourceBox::mysql_mgr_ptr->grab failed for ");
      *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v1 + 80);
      *(_DWORD *)(v1 + 80) = 1001;
      common::milog::MiLogStream::operator<<<proto::MysqlIndex,(proto::MysqlIndex*)0>(
        v6,
        (const proto::MysqlIndex *)(v1 + 80));
      *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 768));
      *(_DWORD *)(((v1 + 768) >> 3) + 0x7FFF8000) = -117901064;
      v4 = -1;
    }
    else
    {
      __asan_unpoison_stack_memory(v1 + 1248, 544LL);
      v7 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
      if ( *(char *)(((v1 + 1248) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 1791) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 - 1) & 7) >= *(_BYTE *)(((v1 + 1791) >> 3) + 0x7FFF8000) )
      {
        v7 = (mysqlpp::Connection *)544;
        __asan_report_store_n(v1 + 1248, 544LL);
      }
      mysqlpp::Connection::query((mysqlpp::Query *)(v1 + 1248), v7, byte_1A80D1E0);
      v8 = std::operator<<<std::char_traits<char>>(v1 + 1248, "update t_login_black_uid_config set ");
      v9 = (std::ostream *)std::operator<<<std::char_traits<char>>(v8, "begin_time=");
      ostr = mysqlpp::operator<<(v9, quote).ostr;
      v11 = ((v1 + 192) >> 3) + 2147450880;
      *(_WORD *)v11 = 0;
      *(_BYTE *)(v11 + 2) = 0;
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v1 + 192, &black_config->begin_time, 0LL);
      v12 = mysqlpp::operator<<(ostr, (mysqlpp::SQLTypeAdapter *)(v1 + 192));
      v13 = (std::ostream *)std::operator<<<std::char_traits<char>>(v12, ", end_time=");
      v14 = mysqlpp::operator<<(v13, quote).ostr;
      v15 = ((v1 + 256) >> 3) + 2147450880;
      *(_WORD *)v15 = 0;
      *(_BYTE *)(v15 + 2) = 0;
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v1 + 256, &black_config->end_time, 0LL);
      v16 = mysqlpp::operator<<(v14, (mysqlpp::SQLTypeAdapter *)(v1 + 256));
      v17 = (std::ostream *)std::operator<<<std::char_traits<char>>(v16, ", msg=");
      v18 = mysqlpp::operator<<(v17, quote).ostr;
      v19 = ((v1 + 320) >> 3) + 2147450880;
      *(_WORD *)v19 = 0;
      *(_BYTE *)(v19 + 2) = 0;
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v1 + 320, &black_config->msg, 0LL);
      v20 = mysqlpp::operator<<(v18, (mysqlpp::SQLTypeAdapter *)(v1 + 320));
      v21 = std::operator<<<std::char_traits<char>>(v20, " where uid=");
      if ( *(_BYTE *)(((unsigned __int64)black_config >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)black_config >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(black_config);
      }
      std::ostream::operator<<(v21, black_config->uid);
      mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 320));
      v22 = ((v1 + 320) >> 3) + 2147450880;
      *(_WORD *)v22 = -1800;
      *(_BYTE *)(v22 + 2) = -8;
      mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 256));
      v23 = ((v1 + 256) >> 3) + 2147450880;
      *(_WORD *)v23 = -1800;
      *(_BYTE *)(v23 + 2) = -8;
      mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 192));
      v24 = ((v1 + 192) >> 3) + 2147450880;
      *(_WORD *)v24 = -1800;
      *(_BYTE *)(v24 + 2) = -8;
      v25 = ((v1 + 1056) >> 3) + 2147450880;
      *(_DWORD *)v25 = 0;
      *(_WORD *)(v25 + 4) = 0;
      *(_BYTE *)(v25 + 6) = 0;
      if ( *(char *)(((v1 + 1056) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 1111) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 + 87) & 7) >= *(_BYTE *)(((v1 + 1111) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 1056, 56LL);
      }
      mysqlpp::Query::execute((mysqlpp::Query *)(v1 + 1056));
      mysqlpp::SimpleResult::~SimpleResult((mysqlpp::SimpleResult *const)(v1 + 1056));
      v26 = ((v1 + 1056) >> 3) + 2147450880;
      *(_DWORD *)v26 = -117901064;
      *(_WORD *)(v26 + 4) = -1800;
      *(_BYTE *)(v26 + 6) = -8;
      if ( !mysqlpp::Query::affected_rows((mysqlpp::Query *const)(v1 + 1248)) )
      {
        *(_DWORD *)(((v1 + 832) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v1 + 832) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 863) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 863) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 832, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v1 + 832),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "src/mysql_op_misc.cpp",
          "insertOrUpdateLoginBlackUidConfig",
          109);
        v27 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                (common::milog::MiLogStream *const)(v1 + 832),
                (const char (*)[12])"update uid=");
        v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &black_config->uid);
        common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
          v28,
          (const char (*)[31])" failed, and try to insert one");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 832));
        *(_DWORD *)(((v1 + 832) >> 3) + 0x7FFF8000) = -117901064;
        mysqlpp::Query::reset((mysqlpp::Query *)(v1 + 1248));
        v29 = std::operator<<<std::char_traits<char>>(
                v1 + 1248,
                "insert into t_login_black_uid_config(uid, begin_time, end_time, msg) values(");
        if ( *(_BYTE *)(((unsigned __int64)black_config >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)black_config >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(black_config);
        }
        v30 = std::ostream::operator<<(v29, black_config->uid);
        v31 = (std::ostream *)std::operator<<<std::char_traits<char>>(v30, ",");
        v32 = mysqlpp::operator<<(v31, quote).ostr;
        v33 = ((v1 + 384) >> 3) + 2147450880;
        *(_WORD *)v33 = 0;
        *(_BYTE *)(v33 + 2) = 0;
        mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v1 + 384, &black_config->begin_time, 0LL);
        v34 = mysqlpp::operator<<(v32, (mysqlpp::SQLTypeAdapter *)(v1 + 384));
        v35 = (std::ostream *)std::operator<<<std::char_traits<char>>(v34, ",");
        v36 = mysqlpp::operator<<(v35, quote).ostr;
        v37 = ((v1 + 448) >> 3) + 2147450880;
        *(_WORD *)v37 = 0;
        *(_BYTE *)(v37 + 2) = 0;
        mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v1 + 448, &black_config->end_time, 0LL);
        v38 = mysqlpp::operator<<(v36, (mysqlpp::SQLTypeAdapter *)(v1 + 448));
        v39 = (std::ostream *)std::operator<<<std::char_traits<char>>(v38, ",");
        v40 = mysqlpp::operator<<(v39, quote).ostr;
        v41 = ((v1 + 512) >> 3) + 2147450880;
        *(_WORD *)v41 = 0;
        *(_BYTE *)(v41 + 2) = 0;
        mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v1 + 512, &black_config->msg, 0LL);
        v42 = mysqlpp::operator<<(v40, (mysqlpp::SQLTypeAdapter *)(v1 + 512));
        std::operator<<<std::char_traits<char>>(v42, ")");
        mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 512));
        v43 = ((v1 + 512) >> 3) + 2147450880;
        *(_WORD *)v43 = -1800;
        *(_BYTE *)(v43 + 2) = -8;
        mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 448));
        v44 = ((v1 + 448) >> 3) + 2147450880;
        *(_WORD *)v44 = -1800;
        *(_BYTE *)(v44 + 2) = -8;
        mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 384));
        v45 = ((v1 + 384) >> 3) + 2147450880;
        *(_WORD *)v45 = -1800;
        *(_BYTE *)(v45 + 2) = -8;
        v46 = ((v1 + 1152) >> 3) + 2147450880;
        *(_DWORD *)v46 = 0;
        *(_WORD *)(v46 + 4) = 0;
        *(_BYTE *)(v46 + 6) = 0;
        if ( *(char *)(((v1 + 1152) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 1207) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 - 73) & 7) >= *(_BYTE *)(((v1 + 1207) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 1152, 56LL);
        }
        mysqlpp::Query::execute((mysqlpp::Query *)(v1 + 1152));
        mysqlpp::SimpleResult::~SimpleResult((mysqlpp::SimpleResult *const)(v1 + 1152));
        v47 = ((v1 + 1152) >> 3) + 2147450880;
        *(_DWORD *)v47 = -117901064;
        *(_WORD *)(v47 + 4) = -1800;
        *(_BYTE *)(v47 + 6) = -8;
      }
      v4 = 0;
      mysqlpp::Query::~Query((mysqlpp::Query *const)(v1 + 1248));
    }
    std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v1 + 160));
  }
  else
  {
    *(_DWORD *)(((v1 + 704) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v1 + 704) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 735) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 33) & 7) >= *(_BYTE *)(((v1 + 735) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 704, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 704),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/mysql_op_misc.cpp",
      "insertOrUpdateLoginBlackUidConfig",
      86);
    common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
      (common::milog::MiLogStream *const)(v1 + 704),
      (const char (*)[10])"uid is 0!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 704));
    *(_DWORD *)(((v1 + 704) >> 3) + 0x7FFF8000) = -117901064;
    v4 = -1;
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v1 + 960));
  if ( v49 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8070) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 120) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v1 >> 3) + 0x7FFF807C) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8084) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF808C) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8094) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF80E0) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF80E8) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_5(v1, 1920LL, v49);
  }
  return v4;
};

// Line 131: range 000000000D47698C-000000000D4774B2
int32_t __cdecl MysqlOpMisc::delLoginBlackUidConfig(uint32_t uid)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v4; // r14d
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rsi
  common::milog::MiLogStream *v6; // rcx
  mysqlpp::Connection *v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  char v12[1360]; // [rsp+20h] [rbp-550h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_5(1312LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "12 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 16 12 conn_ptr:138 128 32 9 <unknown> 1"
                        "92 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 56 14 _tc_guard_:"
                        "132 544 56 9 <unknown> 640 544 9 query:145";
  *(_QWORD *)(v1 + 16) = MysqlOpMisc::delLoginBlackUidConfig;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234556927;
  v3[536862723] = -219021312;
  v3[536862725] = -218959118;
  v3[536862727] = -218959118;
  v3[536862729] = -218959118;
  v3[536862731] = -218959118;
  v3[536862733] = -218959118;
  v3[536862735] = -234881024;
  v3[536862736] = -218959118;
  v3[536862738] = -234881024;
  v3[536862739] = -218959118;
  v3[536862757] = -202116109;
  v3[536862758] = -202116109;
  v3[536862759] = -202116109;
  v3[536862760] = -202116109;
  std::allocator<char>::allocator(v1 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 192),
    "delLoginBlackUidConfig",
    (const std::allocator<char> *)(v1 + 64));
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 128),
    "MYSQL",
    (const std::allocator<char> *)(v1 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v1 + 448),
    (const std::string *)(v1 + 128),
    (const std::string *)(v1 + 192));
  std::string::~string((void *)(v1 + 128));
  *(_DWORD *)(((v1 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v1 + 192));
  *(_DWORD *)(((v1 + 192) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 64);
  *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( uid )
  {
    *(_WORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = 0;
    v5 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
    if ( *(_WORD *)(((v1 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v1 + 96, v5);
    common::midb::MySqlMgrT<std::mutex>::grab(v5, 0x3E9u, 0);
    if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v1 + 96)) )
    {
      *(_DWORD *)(((v1 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v1 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/mysql_op_misc.cpp",
        "delLoginBlackUidConfig",
        141);
      v6 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
             (common::milog::MiLogStream *const)(v1 + 320),
             (const char (*)[52])"[MYSQL]ResourceBox::mysql_mgr_ptr->grab failed for ");
      *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v1 + 80);
      *(_DWORD *)(v1 + 80) = 1001;
      common::milog::MiLogStream::operator<<<proto::MysqlIndex,(proto::MysqlIndex*)0>(
        v6,
        (const proto::MysqlIndex *)(v1 + 80));
      *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 320));
      *(_DWORD *)(((v1 + 320) >> 3) + 0x7FFF8000) = -117901064;
      v4 = -1;
    }
    else
    {
      __asan_unpoison_stack_memory(v1 + 640, 544LL);
      v7 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      if ( *(char *)(((v1 + 640) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 1183) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 - 97) & 7) >= *(_BYTE *)(((v1 + 1183) >> 3) + 0x7FFF8000) )
      {
        v7 = (mysqlpp::Connection *)544;
        __asan_report_store_n(v1 + 640, 544LL);
      }
      mysqlpp::Connection::query((mysqlpp::Query *)(v1 + 640), v7, byte_1A80D1E0);
      v8 = std::operator<<<std::char_traits<char>>(v1 + 640, "delete from t_login_black_uid_config where uid=");
      std::ostream::operator<<(v8, uid);
      v9 = ((v1 + 544) >> 3) + 2147450880;
      *(_DWORD *)v9 = 0;
      *(_WORD *)(v9 + 4) = 0;
      *(_BYTE *)(v9 + 6) = 0;
      if ( *(char *)(((v1 + 544) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 599) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 + 87) & 7) >= *(_BYTE *)(((v1 + 599) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 544, 56LL);
      }
      mysqlpp::Query::execute((mysqlpp::Query *)(v1 + 544));
      mysqlpp::SimpleResult::~SimpleResult((mysqlpp::SimpleResult *const)(v1 + 544));
      v10 = ((v1 + 544) >> 3) + 2147450880;
      *(_DWORD *)v10 = -117901064;
      *(_WORD *)(v10 + 4) = -1800;
      *(_BYTE *)(v10 + 6) = -8;
      v4 = 0;
      mysqlpp::Query::~Query((mysqlpp::Query *const)(v1 + 640));
    }
    std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v1 + 96));
  }
  else
  {
    *(_DWORD *)(((v1 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v1 + 256) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 287) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 31) & 7) >= *(_BYTE *)(((v1 + 287) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 256, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 256),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/mysql_op_misc.cpp",
      "delLoginBlackUidConfig",
      135);
    common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
      (common::milog::MiLogStream *const)(v1 + 256),
      (const char (*)[10])"uid is 0!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 256));
    *(_DWORD *)(((v1 + 256) >> 3) + 0x7FFF8000) = -117901064;
    v4 = -1;
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v1 + 448));
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8044) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF804C) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8094) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF809C) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_5(v1, 1312LL, v12);
  }
  return v4;
};

// Line 162: range 000000000D4774B4-000000000D4780C3
int32_t __cdecl MysqlOpMisc::selectActivityData(
        uint32_t activity_id,
        uint32_t schedule_id,
        TableActivityData *row,
        bool *is_exist)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rsi
  int32_t v8; // r14d
  mysqlpp::Connection *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  std::logic_error *exception; // rdi
  const TableActivityData *v15; // rdx
  std::vector<TableActivityData>::size_type v16; // rax
  unsigned __int64 v17; // rax
  char v22[1296]; // [rsp+40h] [rbp-510h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_5(1248LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "11 32 1 9 <unknown> 48 1 9 <unknown> 64 16 12 conn_ptr:164 96 24 11 row_vec:176 160 32 9 <unknow"
                        "n> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 56 14 _tc_gua"
                        "rd_:163 576 544 9 query:170";
  *(_QWORD *)(v4 + 16) = MysqlOpMisc::selectActivityData;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753535;
  v6[536862722] = -219021312;
  v6[536862723] = -234881024;
  v6[536862724] = -218959118;
  v6[536862726] = -218959118;
  v6[536862728] = -218959118;
  v6[536862730] = -218959118;
  v6[536862732] = -218959118;
  v6[536862734] = -218959118;
  v6[536862736] = -234881024;
  v6[536862737] = -218959118;
  v6[536862755] = -202116109;
  v6[536862756] = -202116109;
  v6[536862757] = -202116109;
  v6[536862758] = -202116109;
  std::allocator<char>::allocator(v4 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 224),
    "selectActivityData",
    (const std::allocator<char> *)(v4 + 48));
  std::allocator<char>::allocator(v4 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 160),
    "MYSQL",
    (const std::allocator<char> *)(v4 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v4 + 480),
    (const std::string *)(v4 + 160),
    (const std::string *)(v4 + 224));
  std::string::~string((void *)(v4 + 160));
  *(_DWORD *)(((v4 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 32);
  *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v4 + 224));
  *(_DWORD *)(((v4 + 224) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 48);
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v4 + 64) >> 3) + 0x7FFF8000) = 0;
  v7 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
  if ( *(_WORD *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v4 + 64, v7);
  common::midb::MySqlMgrT<std::mutex>::grab(v7, 0x3E9u, 0);
  if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v4 + 64)) )
  {
    *(_DWORD *)(((v4 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 288) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 319) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 32 + 95) & 7) >= *(_BYTE *)(((v4 + 319) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 288, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 288),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/mysql_op_misc.cpp",
      "selectActivityData",
      167);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v4 + 288),
      "[MYSQL]grab connect to mysql failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 288));
    *(_DWORD *)(((v4 + 288) >> 3) + 0x7FFF8000) = -117901064;
    v8 = -1;
  }
  else
  {
    __asan_unpoison_stack_memory(v4 + 576, 544LL);
    v9 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    if ( *(char *)(((v4 + 576) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 1119) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 32 + 127) & 7) >= *(_BYTE *)(((v4 + 1119) >> 3) + 0x7FFF8000) )
    {
      v9 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v4 + 576, 544LL);
    }
    mysqlpp::Connection::query(
      (mysqlpp::Query *)(v4 + 576),
      v9,
      "select activity_id, activity_type, bin_data from t_activity_data ");
    v10 = std::operator<<<std::char_traits<char>>(v4 + 576, " where activity_id=");
    v11 = std::ostream::operator<<(v10, activity_id);
    v12 = std::operator<<<std::char_traits<char>>(v11, " and schedule_id=");
    std::ostream::operator<<(v12, schedule_id);
    v13 = ((v4 + 96) >> 3) + 2147450880;
    *(_WORD *)v13 = 0;
    *(_BYTE *)(v13 + 2) = 0;
    std::vector<TableActivityData>::vector((std::vector<TableActivityData> *const)(v4 + 96));
    mysqlpp::Query::storein<std::vector<TableActivityData>>(
      (mysqlpp::Query *const)(v4 + 576),
      (std::vector<TableActivityData> *)(v4 + 96));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v4 + 576)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    if ( std::vector<TableActivityData>::empty((const std::vector<TableActivityData> *const)(v4 + 96)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)is_exist >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)is_exist & 7) >= *(_BYTE *)(((unsigned __int64)is_exist >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(is_exist);
      }
      *is_exist = 0;
      v8 = 0;
    }
    else if ( std::vector<TableActivityData>::size((const std::vector<TableActivityData> *const)(v4 + 96)) == 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)is_exist >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)is_exist & 7) >= *(_BYTE *)(((unsigned __int64)is_exist >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(is_exist);
      }
      *is_exist = 1;
      v15 = std::vector<TableActivityData>::operator[]((std::vector<TableActivityData> *const)(v4 + 96), 0LL);
      TableActivityData::operator=(row, v15);
      v8 = 0;
    }
    else
    {
      *(_DWORD *)(((v4 + 352) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 352) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 383) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 383) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 352, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 352),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/mysql_op_misc.cpp",
        "selectActivityData",
        200);
      v16 = std::vector<TableActivityData>::size((const std::vector<TableActivityData> *const)(v4 + 96));
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v4 + 352),
        "get %lu row from t_activity_data with activity_id=%u and schedule_id=%u",
        v16,
        activity_id,
        schedule_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 352));
      *(_DWORD *)(((v4 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v8 = -1;
    }
    std::vector<TableActivityData>::~vector((std::vector<TableActivityData> *const)(v4 + 96));
    v17 = ((v4 + 96) >> 3) + 2147450880;
    *(_WORD *)v17 = -1800;
    *(_BYTE *)(v17 + 2) = -8;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v4 + 576));
  }
  std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v4 + 64));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v4 + 480));
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF808C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8094) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    __asan_stack_free_5(v4, 1248LL, v22);
  }
  return v8;
};

// Line 214: range 000000000D4780C4-000000000D479621
int32_t __cdecl MysqlOpMisc::insertOrUpdateActivityData(const TableActivityData *row)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v4; // r14d
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rsi
  mysqlpp::Connection *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  std::ostream *v10; // rax
  std::ostream *ostr; // r14
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  std::ostream *v14; // rax
  std::ostream *v15; // r14
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 schedule_id; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  std::ostream *v34; // rax
  std::ostream *v35; // r14
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  std::ostream *v38; // rax
  std::ostream *v39; // r14
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  char v47[1808]; // [rsp+20h] [rbp-710h] BYREF

  v1 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_5(1760LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "18 32 1 9 <unknown> 48 1 9 <unknown> 64 16 12 conn_ptr:222 96 24 9 <unknown> 160 24 9 <unknown> "
                        "224 24 9 <unknown> 288 24 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 5"
                        "44 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 56 14 _tc_guard_:"
                        "215 896 56 9 <unknown> 992 56 9 <unknown> 1088 544 9 query:228";
  *(_QWORD *)(v1 + 16) = MysqlOpMisc::insertOrUpdateActivityData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -219021312;
  v3[536862723] = -234881024;
  v3[536862724] = -218959118;
  v3[536862725] = -234881024;
  v3[536862726] = -218959118;
  v3[536862727] = -234881024;
  v3[536862728] = -218959118;
  v3[536862729] = -234881024;
  v3[536862730] = -218959118;
  v3[536862732] = -218959118;
  v3[536862734] = -218959118;
  v3[536862736] = -218959118;
  v3[536862738] = -218959118;
  v3[536862740] = -218959118;
  v3[536862742] = -218959118;
  v3[536862744] = -218959118;
  v3[536862746] = -234881024;
  v3[536862747] = -218959118;
  v3[536862749] = -234881024;
  v3[536862750] = -218959118;
  v3[536862752] = -234881024;
  v3[536862753] = -218959118;
  v3[536862771] = -202116109;
  v3[536862772] = -202116109;
  v3[536862773] = -202116109;
  v3[536862774] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 416),
    "insertOrUpdateActivityData",
    (const std::allocator<char> *)(v1 + 48));
  std::allocator<char>::allocator(v1 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 352),
    "MYSQL",
    (const std::allocator<char> *)(v1 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v1 + 800),
    (const std::string *)(v1 + 352),
    (const std::string *)(v1 + 416));
  std::string::~string((void *)(v1 + 352));
  *(_DWORD *)(((v1 + 352) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 32);
  *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v1 + 416));
  *(_DWORD *)(((v1 + 416) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(row);
  }
  if ( !row->activity_id )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&row->schedule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)row + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->schedule_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&row->schedule_id);
  }
  if ( row->schedule_id )
  {
    *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = 0;
    v5 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
    if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v1 + 64, v5);
    common::midb::MySqlMgrT<std::mutex>::grab(v5, 0x3E9u, 0);
    if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v1 + 64)) )
    {
      *(_DWORD *)(((v1 + 544) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v1 + 544) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 575) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 - 32 + 95) & 7) >= *(_BYTE *)(((v1 + 575) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 544, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 544),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/mysql_op_misc.cpp",
        "insertOrUpdateActivityData",
        225);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v1 + 544),
        "[MYSQL]grab connect to mysql failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 544));
      *(_DWORD *)(((v1 + 544) >> 3) + 0x7FFF8000) = -117901064;
      v4 = -1;
    }
    else
    {
      __asan_unpoison_stack_memory(v1 + 1088, 544LL);
      v6 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      if ( *(char *)(((v1 + 1088) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 1631) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 - 32 + 127) & 7) >= *(_BYTE *)(((v1 + 1631) >> 3) + 0x7FFF8000) )
      {
        v6 = (mysqlpp::Connection *)544;
        __asan_report_store_n(v1 + 1088, 544LL);
      }
      mysqlpp::Connection::query((mysqlpp::Query *)(v1 + 1088), v6, byte_1A80D1E0);
      v7 = std::operator<<<std::char_traits<char>>(v1 + 1088, "update t_activity_data set ");
      v8 = std::operator<<<std::char_traits<char>>(v7, " activity_type=");
      if ( *(_BYTE *)(((unsigned __int64)&row->activity_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&row->activity_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&row->activity_type);
      }
      v9 = std::ostream::operator<<(v8, row->activity_type);
      v10 = (std::ostream *)std::operator<<<std::char_traits<char>>(v9, ", bin_data=");
      ostr = mysqlpp::operator<<(v10, quote).ostr;
      v12 = ((v1 + 96) >> 3) + 2147450880;
      *(_WORD *)v12 = 0;
      *(_BYTE *)(v12 + 2) = 0;
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 96), &row->bin_data, 0);
      v13 = mysqlpp::operator<<(ostr, (mysqlpp::SQLTypeAdapter *)(v1 + 96));
      v14 = (std::ostream *)std::operator<<<std::char_traits<char>>(v13, ", update_time=");
      v15 = mysqlpp::operator<<(v14, quote).ostr;
      v16 = ((v1 + 160) >> 3) + 2147450880;
      *(_WORD *)v16 = 0;
      *(_BYTE *)(v16 + 2) = 0;
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v1 + 160, &row->update_time, 0LL);
      v17 = mysqlpp::operator<<(v15, (mysqlpp::SQLTypeAdapter *)(v1 + 160));
      v18 = std::operator<<<std::char_traits<char>>(v17, " where activity_id=");
      if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(row);
      }
      v19 = std::ostream::operator<<(v18, row->activity_id);
      v20 = std::operator<<<std::char_traits<char>>(v19, " and schedule_id=");
      if ( *(_BYTE *)(((unsigned __int64)&row->schedule_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)row + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->schedule_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&row->schedule_id);
      }
      v21 = std::ostream::operator<<(v20, row->schedule_id);
      std::operator<<<std::char_traits<char>>(v21, " limit 1;");
      mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 160));
      v22 = ((v1 + 160) >> 3) + 2147450880;
      *(_WORD *)v22 = -1800;
      *(_BYTE *)(v22 + 2) = -8;
      mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 96));
      v23 = ((v1 + 96) >> 3) + 2147450880;
      *(_WORD *)v23 = -1800;
      *(_BYTE *)(v23 + 2) = -8;
      v24 = ((v1 + 896) >> 3) + 2147450880;
      *(_DWORD *)v24 = 0;
      *(_WORD *)(v24 + 4) = 0;
      *(_BYTE *)(v24 + 6) = 0;
      if ( *(char *)(((v1 + 896) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 951) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 - 73) & 7) >= *(_BYTE *)(((v1 + 951) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 896, 56LL);
      }
      mysqlpp::Query::execute((mysqlpp::Query *)(v1 + 896));
      mysqlpp::SimpleResult::~SimpleResult((mysqlpp::SimpleResult *const)(v1 + 896));
      v25 = ((v1 + 896) >> 3) + 2147450880;
      *(_DWORD *)v25 = -117901064;
      *(_WORD *)(v25 + 4) = -1800;
      *(_BYTE *)(v25 + 6) = -8;
      if ( !mysqlpp::Query::affected_rows((mysqlpp::Query *const)(v1 + 1088)) )
      {
        *(_DWORD *)(((v1 + 608) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v1 + 608) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 639) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 + 127) & 7) >= *(_BYTE *)(((v1 + 639) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 608, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v1 + 608),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "src/mysql_op_misc.cpp",
          "insertOrUpdateActivityData",
          240);
        if ( *(_BYTE *)(((unsigned __int64)&row->schedule_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)row + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->schedule_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&row->schedule_id);
        }
        schedule_id = row->schedule_id;
        if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(row);
        }
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)(v1 + 608),
          "update activity=[%u:%u] fails, try to insert data",
          row->activity_id,
          schedule_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 608));
        *(_DWORD *)(((v1 + 608) >> 3) + 0x7FFF8000) = -117901064;
        mysqlpp::Query::reset((mysqlpp::Query *)(v1 + 1088));
        v27 = std::operator<<<std::char_traits<char>>(
                v1 + 1088,
                "insert into t_activity_data(activity_id, schedule_id, activity_type, bin_data, update_time) values");
        v28 = std::operator<<<std::char_traits<char>>(v27, "(");
        if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(row);
        }
        v29 = std::ostream::operator<<(v28, row->activity_id);
        v30 = std::operator<<<std::char_traits<char>>(v29, ",");
        if ( *(_BYTE *)(((unsigned __int64)&row->schedule_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)row + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->schedule_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&row->schedule_id);
        }
        v31 = std::ostream::operator<<(v30, row->schedule_id);
        v32 = std::operator<<<std::char_traits<char>>(v31, ",");
        if ( *(_BYTE *)(((unsigned __int64)&row->activity_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&row->activity_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&row->activity_type);
        }
        v33 = std::ostream::operator<<(v32, row->activity_type);
        v34 = (std::ostream *)std::operator<<<std::char_traits<char>>(v33, ",");
        v35 = mysqlpp::operator<<(v34, quote).ostr;
        v36 = ((v1 + 224) >> 3) + 2147450880;
        *(_WORD *)v36 = 0;
        *(_BYTE *)(v36 + 2) = 0;
        mysqlpp::SQLTypeAdapter::SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 224), &row->bin_data, 0);
        v37 = mysqlpp::operator<<(v35, (mysqlpp::SQLTypeAdapter *)(v1 + 224));
        v38 = (std::ostream *)std::operator<<<std::char_traits<char>>(v37, ",");
        v39 = mysqlpp::operator<<(v38, quote).ostr;
        v40 = ((v1 + 288) >> 3) + 2147450880;
        *(_WORD *)v40 = 0;
        *(_BYTE *)(v40 + 2) = 0;
        mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v1 + 288, &row->update_time, 0LL);
        v41 = mysqlpp::operator<<(v39, (mysqlpp::SQLTypeAdapter *)(v1 + 288));
        std::operator<<<std::char_traits<char>>(v41, ")");
        mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 288));
        v42 = ((v1 + 288) >> 3) + 2147450880;
        *(_WORD *)v42 = -1800;
        *(_BYTE *)(v42 + 2) = -8;
        mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 224));
        v43 = ((v1 + 224) >> 3) + 2147450880;
        *(_WORD *)v43 = -1800;
        *(_BYTE *)(v43 + 2) = -8;
        v44 = ((v1 + 992) >> 3) + 2147450880;
        *(_DWORD *)v44 = 0;
        *(_WORD *)(v44 + 4) = 0;
        *(_BYTE *)(v44 + 6) = 0;
        if ( *(char *)(((v1 + 992) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 1047) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 - 32 + 55) & 7) >= *(_BYTE *)(((v1 + 1047) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 992, 56LL);
        }
        mysqlpp::Query::execute((mysqlpp::Query *)(v1 + 992));
        mysqlpp::SimpleResult::~SimpleResult((mysqlpp::SimpleResult *const)(v1 + 992));
        v45 = ((v1 + 992) >> 3) + 2147450880;
        *(_DWORD *)v45 = -117901064;
        *(_WORD *)(v45 + 4) = -1800;
        *(_BYTE *)(v45 + 6) = -8;
      }
      v4 = 0;
      mysqlpp::Query::~Query((mysqlpp::Query *const)(v1 + 1088));
    }
    std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v1 + 64));
  }
  else
  {
LABEL_10:
    *(_DWORD *)(((v1 + 480) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v1 + 480) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 511) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 32 + 31) & 7) >= *(_BYTE *)(((v1 + 511) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 480, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 480),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/mysql_op_misc.cpp",
      "insertOrUpdateActivityData",
      218);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v1 + 480), "0 == activity_id!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 480));
    *(_DWORD *)(((v1 + 480) >> 3) + 0x7FFF8000) = -117901064;
    v4 = -1;
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v1 + 800));
  if ( v47 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF805C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 100) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v1 >> 3) + 0x7FFF8068) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8070) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8078) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8080) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF80CC) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF80D4) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_5(v1, 1760LL, v47);
  }
  return v4;
};

// Line 272: range 000000000D479622-000000000D47A22F
int32_t __cdecl MysqlOpMisc::insertMailBlockTagConfig(const std::string *tag)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v4; // r14d
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rsi
  mysqlpp::Connection *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  char v12[1392]; // [rsp+20h] [rbp-570h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_5(1344LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "12 32 1 9 <unknown> 48 1 9 <unknown> 64 16 12 conn_ptr:280 96 32 9 <unknown> 160 32 9 <unknown> "
                        "224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 56 14 _tc_guard_"
                        ":273 576 56 9 <unknown> 672 544 9 query:286";
  *(_QWORD *)(v1 + 16) = MysqlOpMisc::insertMailBlockTagConfig;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -219021312;
  v3[536862724] = -218959118;
  v3[536862726] = -218959118;
  v3[536862728] = -218959118;
  v3[536862730] = -218959118;
  v3[536862732] = -218959118;
  v3[536862734] = -218959118;
  v3[536862736] = -234881024;
  v3[536862737] = -218959118;
  v3[536862739] = -234881024;
  v3[536862740] = -218959118;
  v3[536862758] = -202116109;
  v3[536862759] = -202116109;
  v3[536862760] = -202116109;
  v3[536862761] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 160),
    "insertMailBlockTagConfig",
    (const std::allocator<char> *)(v1 + 48));
  std::allocator<char>::allocator(v1 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "MYSQL",
    (const std::allocator<char> *)(v1 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v1 + 480),
    (const std::string *)(v1 + 96),
    (const std::string *)(v1 + 160));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 32);
  *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v1 + 160));
  *(_DWORD *)(((v1 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( (unsigned __int8)std::string::empty(tag) )
  {
    *(_DWORD *)(((v1 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v1 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 32 + 31) & 7) >= *(_BYTE *)(((v1 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/mysql_op_misc.cpp",
      "insertMailBlockTagConfig",
      276);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v1 + 224), "tag is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 224));
    *(_DWORD *)(((v1 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v4 = -1;
  }
  else
  {
    *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = 0;
    v5 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
    if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v1 + 64, v5);
    common::midb::MySqlMgrT<std::mutex>::grab(v5, 0x3E9u, 0);
    if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v1 + 64)) )
    {
      *(_DWORD *)(((v1 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v1 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 + 63) & 7) >= *(_BYTE *)(((v1 + 319) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 288, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/mysql_op_misc.cpp",
        "insertMailBlockTagConfig",
        283);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v1 + 288),
        "[MYSQL]grab connect to mysql failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 288));
      *(_DWORD *)(((v1 + 288) >> 3) + 0x7FFF8000) = -117901064;
      v4 = -1;
    }
    else
    {
      __asan_unpoison_stack_memory(v1 + 672, 544LL);
      v6 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      if ( *(char *)(((v1 + 672) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 1215) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 - 65) & 7) >= *(_BYTE *)(((v1 + 1215) >> 3) + 0x7FFF8000) )
      {
        v6 = (mysqlpp::Connection *)544;
        __asan_report_store_n(v1 + 672, 544LL);
      }
      mysqlpp::Connection::query((mysqlpp::Query *)(v1 + 672), v6, byte_1A80D1E0);
      v7 = std::operator<<<std::char_traits<char>>(v1 + 672, "INSERT INTO t_mail_block_tag_config (tag) VALUES ('");
      v8 = std::operator<<<char>(v7, tag);
      std::operator<<<std::char_traits<char>>(v8, "');");
      v9 = ((v1 + 576) >> 3) + 2147450880;
      *(_DWORD *)v9 = 0;
      *(_WORD *)(v9 + 4) = 0;
      *(_BYTE *)(v9 + 6) = 0;
      if ( *(char *)(((v1 + 576) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 631) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 + 119) & 7) >= *(_BYTE *)(((v1 + 631) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 576, 56LL);
      }
      mysqlpp::Query::execute((mysqlpp::Query *)(v1 + 576));
      mysqlpp::SimpleResult::~SimpleResult((mysqlpp::SimpleResult *const)(v1 + 576));
      v10 = ((v1 + 576) >> 3) + 2147450880;
      *(_DWORD *)v10 = -117901064;
      *(_WORD *)(v10 + 4) = -1800;
      *(_BYTE *)(v10 + 6) = -8;
      v4 = 0;
      mysqlpp::Query::~Query((mysqlpp::Query *const)(v1 + 672));
    }
    std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v1 + 64));
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v1 + 480));
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8048) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8050) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8098) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF80A0) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_5(v1, 1344LL, v12);
  }
  return v4;
};

// Line 309: range 000000000D47A230-000000000D47A87B
std::string *__cdecl genValuesStr(
        std::string *retstr,
        const std::map<unsigned int,unsigned int> *player_chat_block_map,
        uint32_t type)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int *p_second; // rax
  time_t second; // r15
  time_t v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  int32_t count; // [rsp+2Ch] [rbp-2C4h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::reference block_info; // [rsp+38h] [rbp-2B8h]
  char v20[688]; // [rsp+40h] [rbp-2B0h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(640LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 8 15 __for_begin:313 80 8 13 __for_end:313 112 32 12 time_str:318 176 392 6 ss:310";
  *(_QWORD *)(v3 + 16) = genValuesStr;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862737] = -218103808;
  v5[536862738] = -202116109;
  v5[536862739] = -202116109;
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v3 + 176);
  count = std::map<unsigned int,unsigned int>::size(player_chat_block_map);
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 48) = std::map<unsigned int,unsigned int>::begin(player_chat_block_map);
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 80) = std::map<unsigned int,unsigned int>::end(player_chat_block_map);
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 48),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 80)) )
  {
    block_info = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 48));
    --count;
    p_second = &block_info->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    second = block_info->second;
    if ( second > common::tools::TimeUtils::getNow() )
    {
      *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((unsigned __int64)&block_info->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)block_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&block_info->second >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&block_info->second);
      }
      v8 = block_info->second;
      if ( *(char *)(((v3 + 112) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 143) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 143) >> 3) + 0x7FFF8000) )
      {
        v8 = v3 + 112;
        __asan_report_store_n(v3 + 112, 32LL);
      }
      common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)(v3 + 112), v8);
      v9 = std::operator<<<std::char_traits<char>>(v3 + 192, "(");
      if ( *(_BYTE *)(((unsigned __int64)block_info >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)block_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)block_info >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(block_info);
      }
      v10 = std::ostream::operator<<(v9, block_info->first);
      v11 = std::operator<<<std::char_traits<char>>(v10, ",");
      v12 = std::ostream::operator<<(v11, type);
      v13 = std::operator<<<std::char_traits<char>>(v12, ", \"");
      v14 = std::operator<<<char>(v13, v3 + 112);
      std::operator<<<std::char_traits<char>>(v14, "\")");
      if ( count > 0 )
        std::operator<<<std::char_traits<char>>(v3 + 192, ",");
      std::string::~string((void *)(v3 + 112));
    }
    *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = -117901064;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 48));
  }
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(retstr, v3 + 176);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v3 + 176);
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
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
  return retstr;
};

// Line 335: range 000000000D47A87C-000000000D47B451
int32_t __cdecl MysqlOpMisc::insertFeatureSwitchOffData(uint32_t id, uint32_t type, const std::string *msg)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rsi
  int32_t v7; // r14d
  mysqlpp::Connection *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  std::ostream *v13; // rax
  std::ostream *ostr; // r14
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  char v23[1392]; // [rsp+30h] [rbp-570h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1344LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "12 32 1 9 <unknown> 48 1 9 <unknown> 64 16 12 conn_ptr:337 96 24 9 <unknown> 160 32 9 <unknown> "
                        "224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 56 14 _tc_guard_"
                        ":336 576 56 9 <unknown> 672 544 9 query:343";
  *(_QWORD *)(v3 + 16) = MysqlOpMisc::insertFeatureSwitchOffData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862722] = -219021312;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -234881024;
  v5[536862737] = -218959118;
  v5[536862739] = -234881024;
  v5[536862740] = -218959118;
  v5[536862758] = -202116109;
  v5[536862759] = -202116109;
  v5[536862760] = -202116109;
  v5[536862761] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 224),
    "insertFeatureSwitchOffData",
    (const std::allocator<char> *)(v3 + 48));
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 160),
    "MYSQL",
    (const std::allocator<char> *)(v3 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 480),
    (const std::string *)(v3 + 160),
    (const std::string *)(v3 + 224));
  std::string::~string((void *)(v3 + 160));
  *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 32);
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v3 + 224));
  *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = 0;
  v6 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
  if ( *(_WORD *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v3 + 64, v6);
  common::midb::MySqlMgrT<std::mutex>::grab(v6, 0x3E9u, 0);
  if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v3 + 64)) )
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
      3u,
      "src/mysql_op_misc.cpp",
      "insertFeatureSwitchOffData",
      340);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v3 + 288),
      "[MYSQL]grab connect to mysql failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else
  {
    __asan_unpoison_stack_memory(v3 + 672, 544LL);
    v8 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(char *)(((v3 + 672) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1215) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 1215) >> 3) + 0x7FFF8000) )
    {
      v8 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v3 + 672, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 672), v8, byte_1A80D1E0);
    v9 = std::operator<<<std::char_traits<char>>(
           v3 + 672,
           "INSERT INTO t_feature_switch_off_config (id, type, msg) VALUES (");
    v10 = std::ostream::operator<<(v9, id);
    v11 = std::operator<<<std::char_traits<char>>(v10, ",");
    v12 = std::ostream::operator<<(v11, type);
    v13 = (std::ostream *)std::operator<<<std::char_traits<char>>(v12, ",");
    ostr = mysqlpp::operator<<(v13, quote).ostr;
    v15 = ((v3 + 96) >> 3) + 2147450880;
    *(_WORD *)v15 = 0;
    *(_BYTE *)(v15 + 2) = 0;
    mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v3 + 96, msg, 0LL);
    v16 = mysqlpp::operator<<(ostr, (mysqlpp::SQLTypeAdapter *)(v3 + 96));
    std::operator<<<std::char_traits<char>>(v16, ");");
    mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v3 + 96));
    v17 = ((v3 + 96) >> 3) + 2147450880;
    *(_WORD *)v17 = -1800;
    *(_BYTE *)(v17 + 2) = -8;
    v18 = ((v3 + 576) >> 3) + 2147450880;
    *(_DWORD *)v18 = 0;
    *(_WORD *)(v18 + 4) = 0;
    *(_BYTE *)(v18 + 6) = 0;
    if ( *(char *)(((v3 + 576) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 631) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 119) & 7) >= *(_BYTE *)(((v3 + 631) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 576, 56LL);
    }
    mysqlpp::Query::execute((mysqlpp::Query *)(v3 + 576));
    mysqlpp::SimpleResult::~SimpleResult((mysqlpp::SimpleResult *const)(v3 + 576));
    v19 = ((v3 + 576) >> 3) + 2147450880;
    *(_DWORD *)v19 = -117901064;
    *(_WORD *)(v19 + 4) = -1800;
    *(_BYTE *)(v19 + 6) = -8;
    v7 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 672));
  }
  std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v3 + 64));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 480));
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8050) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8098) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80A0) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1344LL, v23);
  }
  return v7;
};

// Line 371: range 000000000D47B452-000000000D47BD9F
int32_t __cdecl MysqlOpMisc::deleteFeatureSwitchData(uint32_t id)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rsi
  int32_t v5; // r15d
  mysqlpp::Connection *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  char v12[1264]; // [rsp+20h] [rbp-4F0h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_5(1216LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "10 32 1 9 <unknown> 48 1 9 <unknown> 64 16 12 conn_ptr:373 96 32 9 <unknown> 160 32 9 <unknown> "
                        "224 32 9 <unknown> 288 32 9 <unknown> 352 56 14 _tc_guard_:372 448 56 9 <unknown> 544 544 9 query:379";
  *(_QWORD *)(v1 + 16) = MysqlOpMisc::deleteFeatureSwitchData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -219021312;
  v3[536862724] = -218959118;
  v3[536862726] = -218959118;
  v3[536862728] = -218959118;
  v3[536862730] = -218959118;
  v3[536862732] = -234881024;
  v3[536862733] = -218959118;
  v3[536862735] = -234881024;
  v3[536862736] = -218959118;
  v3[536862754] = -202116109;
  v3[536862755] = -202116109;
  v3[536862756] = -202116109;
  v3[536862757] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 160),
    "deleteFeatureSwitchData",
    (const std::allocator<char> *)(v1 + 48));
  std::allocator<char>::allocator(v1 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "MYSQL",
    (const std::allocator<char> *)(v1 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v1 + 352),
    (const std::string *)(v1 + 96),
    (const std::string *)(v1 + 160));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 32);
  *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v1 + 160));
  *(_DWORD *)(((v1 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = 0;
  v4 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v1 + 64, v4);
  common::midb::MySqlMgrT<std::mutex>::grab(v4, 0x3E9u, 0);
  if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v1 + 64)) )
  {
    *(_DWORD *)(((v1 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v1 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 64 + 63) & 7) >= *(_BYTE *)(((v1 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/mysql_op_misc.cpp",
      "deleteFeatureSwitchData",
      376);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v1 + 224),
      "[MYSQL]grab connect to mysql failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 224));
    *(_DWORD *)(((v1 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    __asan_unpoison_stack_memory(v1 + 544, 544LL);
    v6 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    if ( *(char *)(((v1 + 544) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 1087) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 64 + 127) & 7) >= *(_BYTE *)(((v1 + 1087) >> 3) + 0x7FFF8000) )
    {
      v6 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v1 + 544, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v1 + 544), v6, byte_1A80D1E0);
    v7 = std::operator<<<std::char_traits<char>>(v1 + 544, "delete from t_feature_switch_off_config where id in (");
    v8 = std::ostream::operator<<(v7, id);
    std::operator<<<std::char_traits<char>>(v8, ")");
    v9 = ((v1 + 448) >> 3) + 2147450880;
    *(_DWORD *)v9 = 0;
    *(_WORD *)(v9 + 4) = 0;
    *(_BYTE *)(v9 + 6) = 0;
    if ( *(char *)(((v1 + 448) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 503) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 64 + 55) & 7) >= *(_BYTE *)(((v1 + 503) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 448, 56LL);
    }
    mysqlpp::Query::execute((mysqlpp::Query *)(v1 + 448));
    mysqlpp::SimpleResult::~SimpleResult((mysqlpp::SimpleResult *const)(v1 + 448));
    v10 = ((v1 + 448) >> 3) + 2147450880;
    *(_DWORD *)v10 = -117901064;
    *(_WORD *)(v10 + 4) = -1800;
    *(_BYTE *)(v10 + 6) = -8;
    v5 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v1 + 544));
  }
  std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v1 + 64));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v1 + 352));
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8040) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8088) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8090) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_5(v1, 1216LL, v12);
  }
  return v5;
};

// Line 396: range 000000000D47BDA0-000000000D47C999
int32_t __cdecl MysqlOpMisc::insertPlayerFeatureBlockConfig(
        const std::map<unsigned int,unsigned int> *player_block_map,
        uint32_t type)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rsi
  mysqlpp::Connection *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  char v14[1392]; // [rsp+30h] [rbp-570h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1344LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 32 1 9 <unknown> 48 1 9 <unknown> 64 16 12 conn_ptr:400 96 32 9 <unknown> 160 32 9 <unknown> "
                        "224 32 9 <unknown> 288 32 14 values_str:409 352 32 9 <unknown> 416 32 9 <unknown> 480 56 14 _tc_"
                        "guard_:397 576 56 9 <unknown> 672 544 9 query:406";
  *(_QWORD *)(v2 + 16) = MysqlOpMisc::insertPlayerFeatureBlockConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -219021312;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -234881024;
  v4[536862737] = -218959118;
  v4[536862739] = -234881024;
  v4[536862740] = -218959118;
  v4[536862758] = -202116109;
  v4[536862759] = -202116109;
  v4[536862760] = -202116109;
  v4[536862761] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 160),
    "insertPlayerFeatureBlockConfig",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "MYSQL",
    (const std::allocator<char> *)(v2 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 480),
    (const std::string *)(v2 + 96),
    (const std::string *)(v2 + 160));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v2 + 160));
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( std::map<unsigned int,unsigned int>::empty(player_block_map) )
  {
    v5 = 0;
  }
  else
  {
    *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
    v6 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
    if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v2 + 64, v6);
    common::midb::MySqlMgrT<std::mutex>::grab(v6, 0x3E9u, 0);
    if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v2 + 64)) )
    {
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/mysql_op_misc.cpp",
        "insertPlayerFeatureBlockConfig",
        403);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v2 + 224),
        "[MYSQL]grab connect to mysql failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      __asan_unpoison_stack_memory(v2 + 672, 544LL);
      v7 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(char *)(((v2 + 672) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1215) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 1215) >> 3) + 0x7FFF8000) )
      {
        v7 = (mysqlpp::Connection *)544;
        __asan_report_store_n(v2 + 672, 544LL);
      }
      mysqlpp::Connection::query((mysqlpp::Query *)(v2 + 672), v7, byte_1A80D1E0);
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 288, 32LL);
      }
      genValuesStr((std::string *)(v2 + 288), player_block_map, type);
      v8 = std::operator<<<std::char_traits<char>>(v2 + 672, "INSERT INTO t_feature_block_config VALUES ");
      v9 = std::operator<<<char>(v8, v2 + 288);
      std::operator<<<std::char_traits<char>>(v9, ";");
      v10 = ((v2 + 576) >> 3) + 2147450880;
      *(_DWORD *)v10 = 0;
      *(_WORD *)(v10 + 4) = 0;
      *(_BYTE *)(v10 + 6) = 0;
      if ( *(char *)(((v2 + 576) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 631) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 119) & 7) >= *(_BYTE *)(((v2 + 631) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 576, 56LL);
      }
      mysqlpp::Query::execute((mysqlpp::Query *)(v2 + 576));
      mysqlpp::SimpleResult::~SimpleResult((mysqlpp::SimpleResult *const)(v2 + 576));
      v11 = ((v2 + 576) >> 3) + 2147450880;
      *(_DWORD *)v11 = -117901064;
      *(_WORD *)(v11 + 4) = -1800;
      *(_BYTE *)(v11 + 6) = -8;
      std::string::~string((void *)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      v5 = 0;
      mysqlpp::Query::~Query((mysqlpp::Query *const)(v2 + 672));
    }
    std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v2 + 64));
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 480));
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8050) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8098) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A0) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1344LL, v14);
  }
  return v5;
};

// Line 431: range 000000000D47C99A-000000000D47CE72
std::string *__cdecl genUidTypeStr(std::string *retstr, const std::set<unsigned int> *uid_set, uint32_t type)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int *v6; // rax
  uint32_t *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  int32_t remain_size; // [rsp+20h] [rbp-270h]
  uint32_t uid; // [rsp+24h] [rbp-26Ch]
  char v16[608]; // [rsp+30h] [rbp-260h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(576LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 1 9 <unknown> 48 8 15 __for_begin:439 80 8 13 __for_end:439 112 392 6 ss:438";
  *(_QWORD *)(v3 + 16) = genUidTypeStr;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61953;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862735] = -218103808;
  v5[536862736] = -202116109;
  v5[536862737] = -202116109;
  if ( std::set<unsigned int>::empty(uid_set) )
  {
    std::allocator<char>::allocator(v3 + 32);
    std::string::basic_string<std::allocator<char>>(retstr, byte_1A80D1E0, (const std::allocator<char> *)(v3 + 32));
    std::allocator<char>::~allocator(v3 + 32);
  }
  else
  {
    remain_size = std::set<unsigned int>::size(uid_set);
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v3 + 112);
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::set<unsigned int>::iterator *)(v3 + 48) = std::set<unsigned int>::begin(uid_set);
    if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::set<unsigned int>::iterator *)(v3 + 80) = std::set<unsigned int>::end(uid_set);
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 48),
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 80)) )
    {
      v6 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 48));
      v7 = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      uid = *v7;
      --remain_size;
      v8 = std::operator<<<std::char_traits<char>>(v3 + 128, "(");
      v9 = std::ostream::operator<<(v8, uid);
      v10 = std::operator<<<std::char_traits<char>>(v9, ", ");
      v11 = std::ostream::operator<<(v10, type);
      std::operator<<<std::char_traits<char>>(v11, ")");
      if ( remain_size > 0 )
        std::operator<<<std::char_traits<char>>(v3 + 128, ", ");
      std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 48));
    }
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity
                                                            + 15) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 32LL);
    }
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(retstr, v3 + 112);
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v3 + 112);
  }
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
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
  return retstr;
};

// Line 454: range 000000000D47CE74-000000000D47D90C
int32_t __cdecl MysqlOpMisc::deletePlayerFeatureBlockConfig(const std::set<unsigned int> *uid_set, uint32_t type)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rsi
  mysqlpp::Connection *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  char v14[1328]; // [rsp+30h] [rbp-530h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1280LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 32 1 9 <unknown> 48 1 9 <unknown> 64 16 12 conn_ptr:458 96 32 9 <unknown> 160 32 9 <unknown> "
                        "224 32 9 <unknown> 288 32 12 uids_str:467 352 32 9 <unknown> 416 56 14 _tc_guard_:455 512 56 9 <"
                        "unknown> 608 544 9 query:464";
  *(_QWORD *)(v2 + 16) = MysqlOpMisc::deletePlayerFeatureBlockConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -219021312;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -234881024;
  v4[536862735] = -218959118;
  v4[536862737] = -234881024;
  v4[536862738] = -218959118;
  v4[536862756] = -202116109;
  v4[536862757] = -202116109;
  v4[536862758] = -202116109;
  v4[536862759] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 160),
    "deletePlayerFeatureBlockConfig",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "MYSQL",
    (const std::allocator<char> *)(v2 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 416),
    (const std::string *)(v2 + 96),
    (const std::string *)(v2 + 160));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v2 + 160));
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( std::set<unsigned int>::empty(uid_set) )
  {
    v5 = 0;
  }
  else
  {
    *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
    v6 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
    if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v2 + 64, v6);
    common::midb::MySqlMgrT<std::mutex>::grab(v6, 0x3E9u, 0);
    if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v2 + 64)) )
    {
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/mysql_op_misc.cpp",
        "deletePlayerFeatureBlockConfig",
        461);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v2 + 224),
        "[MYSQL]grab connect to mysql failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      __asan_unpoison_stack_memory(v2 + 608, 544LL);
      v7 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(char *)(((v2 + 608) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1151) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 1151) >> 3) + 0x7FFF8000) )
      {
        v7 = (mysqlpp::Connection *)544;
        __asan_report_store_n(v2 + 608, 544LL);
      }
      mysqlpp::Connection::query((mysqlpp::Query *)(v2 + 608), v7, byte_1A80D1E0);
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 288, 32LL);
      }
      genUidTypeStr((std::string *)(v2 + 288), uid_set, type);
      v8 = std::operator<<<std::char_traits<char>>(
             v2 + 608,
             "delete from t_feature_block_config where (uid, type) in (");
      v9 = std::operator<<<char>(v8, v2 + 288);
      std::operator<<<std::char_traits<char>>(v9, ")");
      v10 = ((v2 + 512) >> 3) + 2147450880;
      *(_DWORD *)v10 = 0;
      *(_WORD *)(v10 + 4) = 0;
      *(_BYTE *)(v10 + 6) = 0;
      if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 567) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 55) & 7) >= *(_BYTE *)(((v2 + 567) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 512, 56LL);
      }
      mysqlpp::Query::execute((mysqlpp::Query *)(v2 + 512));
      mysqlpp::SimpleResult::~SimpleResult((mysqlpp::SimpleResult *const)(v2 + 512));
      v11 = ((v2 + 512) >> 3) + 2147450880;
      *(_DWORD *)v11 = -117901064;
      *(_WORD *)(v11 + 4) = -1800;
      *(_BYTE *)(v11 + 6) = -8;
      std::string::~string((void *)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      v5 = 0;
      mysqlpp::Query::~Query((mysqlpp::Query *const)(v2 + 608));
    }
    std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v2 + 64));
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 416));
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8090) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8098) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1280LL, v14);
  }
  return v5;
};

// Line 482: range 000000000D47D90E-000000000D47E6EA
std::string *__fastcall MysqlOpMisc::selectPlayerFeatureBlockEndTime[abi:cxx11](
        std::string *retstr,
        uint32_t uid,
        uint32_t type)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rsi
  mysqlpp::Connection *v7; // rsi
  unsigned __int64 v8; // rax
  std::logic_error *exception; // rdi
  std::vector<FeatureBlockConfig>::reference v10; // rax
  unsigned __int64 v11; // rax
  char v14[1360]; // [rsp+30h] [rbp-550h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1312LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "17 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 4 7 uid:481 160 8 9 <unknown> 192 16 12 conn_ptr:484 224 24 11 r"
                        "ow_vec:498 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 56 14"
                        " _tc_guard_:483 640 544 9 query:491";
  *(_QWORD *)(v3 + 16) = MysqlOpMisc::selectPlayerFeatureBlockEndTime[abi:cxx11];
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862722] = -234753535;
  v5[536862723] = -234556927;
  v5[536862724] = -234556924;
  v5[536862725] = -218959360;
  v5[536862726] = -219021312;
  v5[536862727] = -234881024;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -234881024;
  v5[536862739] = -218959118;
  v5[536862757] = -202116109;
  v5[536862758] = -202116109;
  v5[536862759] = -202116109;
  v5[536862760] = -202116109;
  *(_DWORD *)(v3 + 144) = uid;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 352),
    "selectPlayerFeatureBlockEndTime",
    (const std::allocator<char> *)(v3 + 48));
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 288),
    "MYSQL",
    (const std::allocator<char> *)(v3 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 544),
    (const std::string *)(v3 + 288),
    (const std::string *)(v3 + 352));
  std::string::~string((void *)(v3 + 288));
  *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 32);
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v3 + 352));
  *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
  v6 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
  if ( *(_WORD *)(((v3 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v3 + 192, v6);
  common::midb::MySqlMgrT<std::mutex>::grab(v6, 0x3E9u, 0);
  if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v3 + 192)) )
  {
    *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 416, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 416),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/mysql_op_misc.cpp",
      "selectPlayerFeatureBlockEndTime",
      487);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v3 + 416),
      "[MYSQL]grab connect to mysql failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
    *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v3 + 64);
    std::string::basic_string<std::allocator<char>>(retstr, byte_1A80D1E0, (const std::allocator<char> *)(v3 + 64));
    std::allocator<char>::~allocator(v3 + 64);
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  }
  else
  {
    __asan_unpoison_stack_memory(v3 + 640, 544LL);
    v7 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
    if ( *(char *)(((v3 + 640) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1183) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 1183) >> 3) + 0x7FFF8000) )
    {
      v7 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v3 + 640, 544LL);
    }
    mysqlpp::Connection::query(
      (mysqlpp::Query *)(v3 + 640),
      v7,
      "select uid, type, end_time, begin_time from t_feature_block_config where (uid, type) = (");
    std::ostream::operator<<(v3 + 640, *(unsigned int *)(v3 + 144));
    std::operator<<<std::char_traits<char>>(v3 + 640, ",");
    std::ostream::operator<<(v3 + 640, type);
    std::operator<<<std::char_traits<char>>(v3 + 640, ")");
    v8 = ((v3 + 224) >> 3) + 2147450880;
    *(_WORD *)v8 = 0;
    *(_BYTE *)(v8 + 2) = 0;
    std::vector<FeatureBlockConfig>::vector((std::vector<FeatureBlockConfig> *const)(v3 + 224));
    mysqlpp::Query::storein<std::vector<FeatureBlockConfig>>(
      (mysqlpp::Query *const)(v3 + 640),
      (std::vector<FeatureBlockConfig> *)(v3 + 224));
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
    if ( std::vector<FeatureBlockConfig>::size((const std::vector<FeatureBlockConfig> *const)(v3 + 224)) )
    {
      v10 = std::vector<FeatureBlockConfig>::operator[]((std::vector<FeatureBlockConfig> *const)(v3 + 224), 0LL);
      std::string::basic_string(retstr, &v10->end_time);
    }
    else
    {
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v3 + 80);
      std::string::basic_string<std::allocator<char>>(retstr, byte_1A80D1E0, (const std::allocator<char> *)(v3 + 80));
      std::allocator<char>::~allocator(v3 + 80);
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    }
    std::vector<FeatureBlockConfig>::~vector((std::vector<FeatureBlockConfig> *const)(v3 + 224));
    v11 = ((v3 + 224) >> 3) + 2147450880;
    *(_WORD *)v11 = -1800;
    *(_BYTE *)(v11 + 2) = -8;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 640));
  }
  std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v3 + 192));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 544));
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8094) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF809C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1312LL, v14);
  }
  return retstr;
};

// Line 525: range 000000000D47E6EC-000000000D47FE9E
__int64 __fastcall MysqlOpMisc::insertOrUpdatePlayerFeatureBlockConfig(
        uint32_t uid,
        uint32_t type,
        uint32_t start_time,
        uint32_t end_time)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned int v7; // r14d
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rsi
  common::milog::MiLogStream *v9; // rcx
  mysqlpp::Connection *v10; // rsi
  time_t v11; // rsi
  time_t v12; // rdi
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  __int64 v16; // rax
  std::ostream *v17; // rax
  std::ostream *ostr; // r14
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  std::ostream *v21; // rax
  std::ostream *v22; // r14
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  std::ostream *v41; // rax
  std::ostream *v42; // r14
  unsigned __int64 v43; // rax
  __int64 v44; // rax
  std::ostream *v45; // rax
  std::ostream *v46; // r14
  unsigned __int64 v47; // rax
  __int64 v48; // rax
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rax
  char v56[2064]; // [rsp+30h] [rbp-810h] BYREF

  v4 = (unsigned __int64)v56;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_5(2016LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "27 32 1 9 <unknown> 48 1 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 7 "
                        "uid:524 128 4 8 type:524 144 4 14 start_time:524 160 8 9 <unknown> 192 16 12 conn_ptr:532 224 24"
                        " 9 <unknown> 288 24 9 <unknown> 352 24 9 <unknown> 416 24 9 <unknown> 480 32 9 <unknown> 544 32 "
                        "9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 16 end_time_str:543 800 32 18 begin_tim"
                        "e_str:544 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 56 14 _tc_guard_:526 115"
                        "2 56 9 <unknown> 1248 56 9 <unknown> 1344 544 9 query:540";
  *(_QWORD *)(v4 + 16) = MysqlOpMisc::insertOrUpdatePlayerFeatureBlockConfig;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753535;
  v6[536862722] = -234556924;
  v6[536862723] = -234556924;
  v6[536862724] = -234556924;
  v6[536862725] = -218959360;
  v6[536862726] = -219021312;
  v6[536862727] = -234881024;
  v6[536862728] = -218959118;
  v6[536862729] = -234881024;
  v6[536862730] = -218959118;
  v6[536862731] = -234881024;
  v6[536862732] = -218959118;
  v6[536862733] = -234881024;
  v6[536862734] = -218959118;
  v6[536862736] = -218959118;
  v6[536862738] = -218959118;
  v6[536862740] = -218959118;
  v6[536862742] = -218959118;
  v6[536862744] = -218959118;
  v6[536862746] = -218959118;
  v6[536862748] = -218959118;
  v6[536862750] = -218959118;
  v6[536862752] = -218959118;
  v6[536862754] = -234881024;
  v6[536862755] = -218959118;
  v6[536862757] = -234881024;
  v6[536862758] = -218959118;
  v6[536862760] = -234881024;
  v6[536862761] = -218959118;
  v6[536862779] = -202116109;
  v6[536862780] = -202116109;
  v6[536862781] = -202116109;
  v6[536862782] = -202116109;
  *(_DWORD *)(v4 + 112) = uid;
  *(_DWORD *)(v4 + 128) = type;
  *(_DWORD *)(v4 + 144) = start_time;
  std::allocator<char>::allocator(v4 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 544),
    "insertOrUpdatePlayerFeatureBlockConfig",
    (const std::allocator<char> *)(v4 + 48));
  std::allocator<char>::allocator(v4 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 480),
    "MYSQL",
    (const std::allocator<char> *)(v4 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v4 + 1056),
    (const std::string *)(v4 + 480),
    (const std::string *)(v4 + 544));
  std::string::~string((void *)(v4 + 480));
  *(_DWORD *)(((v4 + 480) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 32);
  *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v4 + 544));
  *(_DWORD *)(((v4 + 544) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 48);
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( *(_DWORD *)(v4 + 112) )
  {
    *(_WORD *)(((v4 + 192) >> 3) + 0x7FFF8000) = 0;
    v8 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
    if ( *(_WORD *)(((v4 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v4 + 192, v8);
    common::midb::MySqlMgrT<std::mutex>::grab(v8, 0x3E9u, 0);
    if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v4 + 192)) )
    {
      *(_DWORD *)(((v4 + 672) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 672) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 703) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 96 + 31) & 7) >= *(_BYTE *)(((v4 + 703) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 672, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 672),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/mysql_op_misc.cpp",
        "insertOrUpdatePlayerFeatureBlockConfig",
        535);
      v9 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
             (common::milog::MiLogStream *const)(v4 + 672),
             (const char (*)[52])"[MYSQL]ResourceBox::mysql_mgr_ptr->grab failed for ");
      *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v4 + 64);
      *(_DWORD *)(v4 + 64) = 1001;
      common::milog::MiLogStream::operator<<<proto::MysqlIndex,(proto::MysqlIndex*)0>(
        v9,
        (const proto::MysqlIndex *)(v4 + 64));
      *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 672));
      *(_DWORD *)(((v4 + 672) >> 3) + 0x7FFF8000) = -117901064;
      v7 = -1;
    }
    else
    {
      __asan_unpoison_stack_memory(v4 + 1344, 544LL);
      v10 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
      if ( *(char *)(((v4 + 1344) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 1887) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 32 + 127) & 7) >= *(_BYTE *)(((v4 + 1887) >> 3) + 0x7FFF8000) )
      {
        v10 = (mysqlpp::Connection *)544;
        __asan_report_store_n(v4 + 1344, 544LL);
      }
      mysqlpp::Connection::query((mysqlpp::Query *)(v4 + 1344), v10, byte_1A80D1E0);
      *(_DWORD *)(((v4 + 736) >> 3) + 0x7FFF8000) = 0;
      v11 = end_time;
      if ( *(char *)(((v4 + 736) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 767) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 32 + 31) & 7) >= *(_BYTE *)(((v4 + 767) >> 3) + 0x7FFF8000) )
      {
        v11 = 32LL;
        __asan_report_store_n(v4 + 736, 32LL);
      }
      common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)(v4 + 736), v11);
      *(_DWORD *)(((v4 + 800) >> 3) + 0x7FFF8000) = 0;
      v12 = *(unsigned int *)(v4 + 144);
      if ( *(char *)(((v4 + 800) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 831) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 32 + 95) & 7) >= *(_BYTE *)(((v4 + 831) >> 3) + 0x7FFF8000) )
      {
        v12 = v4 + 800;
        __asan_report_store_n(v4 + 800, 32LL);
      }
      common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)(v4 + 800), v12);
      *(_DWORD *)(((v4 + 864) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 864) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 895) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 895) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 864, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 864),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "src/mysql_op_misc.cpp",
        "insertOrUpdatePlayerFeatureBlockConfig",
        545);
      v13 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              (common::milog::MiLogStream *const)(v4 + 864),
              (const char (*)[21])"[LR] begin_time_str:");
      v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, (const std::string *)(v4 + 800));
      v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])" start_time:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 144));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 864));
      *(_DWORD *)(((v4 + 864) >> 3) + 0x7FFF8000) = -117901064;
      v16 = std::operator<<<std::char_traits<char>>(v4 + 1344, "update t_feature_block_config set ");
      v17 = (std::ostream *)std::operator<<<std::char_traits<char>>(v16, "end_time=");
      ostr = mysqlpp::operator<<(v17, quote).ostr;
      v19 = ((v4 + 224) >> 3) + 2147450880;
      *(_WORD *)v19 = 0;
      *(_BYTE *)(v19 + 2) = 0;
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v4 + 224, v4 + 736, 0LL);
      v20 = mysqlpp::operator<<(ostr, (mysqlpp::SQLTypeAdapter *)(v4 + 224));
      v21 = (std::ostream *)std::operator<<<std::char_traits<char>>(v20, ", begin_time=");
      v22 = mysqlpp::operator<<(v21, quote).ostr;
      v23 = ((v4 + 288) >> 3) + 2147450880;
      *(_WORD *)v23 = 0;
      *(_BYTE *)(v23 + 2) = 0;
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v4 + 288, v4 + 800, 0LL);
      v24 = mysqlpp::operator<<(v22, (mysqlpp::SQLTypeAdapter *)(v4 + 288));
      v25 = std::operator<<<std::char_traits<char>>(v24, " where (uid, type)= (");
      v26 = std::ostream::operator<<(v25, *(unsigned int *)(v4 + 112));
      v27 = std::operator<<<std::char_traits<char>>(v26, ",");
      v28 = std::ostream::operator<<(v27, *(unsigned int *)(v4 + 128));
      std::operator<<<std::char_traits<char>>(v28, ")");
      mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v4 + 288));
      v29 = ((v4 + 288) >> 3) + 2147450880;
      *(_WORD *)v29 = -1800;
      *(_BYTE *)(v29 + 2) = -8;
      mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v4 + 224));
      v30 = ((v4 + 224) >> 3) + 2147450880;
      *(_WORD *)v30 = -1800;
      *(_BYTE *)(v30 + 2) = -8;
      v31 = ((v4 + 1152) >> 3) + 2147450880;
      *(_DWORD *)v31 = 0;
      *(_WORD *)(v31 + 4) = 0;
      *(_BYTE *)(v31 + 6) = 0;
      if ( *(char *)(((v4 + 1152) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 1207) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 73) & 7) >= *(_BYTE *)(((v4 + 1207) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 1152, 56LL);
      }
      mysqlpp::Query::execute((mysqlpp::Query *)(v4 + 1152));
      mysqlpp::SimpleResult::~SimpleResult((mysqlpp::SimpleResult *const)(v4 + 1152));
      v32 = ((v4 + 1152) >> 3) + 2147450880;
      *(_DWORD *)v32 = -117901064;
      *(_WORD *)(v32 + 4) = -1800;
      *(_BYTE *)(v32 + 6) = -8;
      if ( !mysqlpp::Query::affected_rows((mysqlpp::Query *const)(v4 + 1344)) )
      {
        *(_DWORD *)(((v4 + 928) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 928) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 959) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 96 + 31) & 7) >= *(_BYTE *)(((v4 + 959) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 928, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 928),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "src/mysql_op_misc.cpp",
          "insertOrUpdatePlayerFeatureBlockConfig",
          554);
        v33 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                (common::milog::MiLogStream *const)(v4 + 928),
                (const char (*)[12])"update uid=");
        v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v33,
                (const unsigned int *)(v4 + 112));
        v35 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v34, (const char (*)[9])", type: ");
        v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v35,
                (const unsigned int *)(v4 + 128));
        common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
          v36,
          (const char (*)[31])" failed, and try to insert one");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 928));
        *(_DWORD *)(((v4 + 928) >> 3) + 0x7FFF8000) = -117901064;
        mysqlpp::Query::reset((mysqlpp::Query *)(v4 + 1344));
        v37 = std::operator<<<std::char_traits<char>>(
                v4 + 1344,
                "insert into t_feature_block_config(uid, type, end_time, begin_time) values(");
        v38 = std::ostream::operator<<(v37, *(unsigned int *)(v4 + 112));
        v39 = std::operator<<<std::char_traits<char>>(v38, ",");
        v40 = std::ostream::operator<<(v39, *(unsigned int *)(v4 + 128));
        v41 = (std::ostream *)std::operator<<<std::char_traits<char>>(v40, ",");
        v42 = mysqlpp::operator<<(v41, quote).ostr;
        v43 = ((v4 + 352) >> 3) + 2147450880;
        *(_WORD *)v43 = 0;
        *(_BYTE *)(v43 + 2) = 0;
        mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v4 + 352, v4 + 736, 0LL);
        v44 = mysqlpp::operator<<(v42, (mysqlpp::SQLTypeAdapter *)(v4 + 352));
        v45 = (std::ostream *)std::operator<<<std::char_traits<char>>(v44, ",");
        v46 = mysqlpp::operator<<(v45, quote).ostr;
        v47 = ((v4 + 416) >> 3) + 2147450880;
        *(_WORD *)v47 = 0;
        *(_BYTE *)(v47 + 2) = 0;
        mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v4 + 416, v4 + 800, 0LL);
        v48 = mysqlpp::operator<<(v46, (mysqlpp::SQLTypeAdapter *)(v4 + 416));
        std::operator<<<std::char_traits<char>>(v48, ")");
        mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v4 + 416));
        v49 = ((v4 + 416) >> 3) + 2147450880;
        *(_WORD *)v49 = -1800;
        *(_BYTE *)(v49 + 2) = -8;
        mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v4 + 352));
        v50 = ((v4 + 352) >> 3) + 2147450880;
        *(_WORD *)v50 = -1800;
        *(_BYTE *)(v50 + 2) = -8;
        v51 = ((v4 + 1248) >> 3) + 2147450880;
        *(_DWORD *)v51 = 0;
        *(_WORD *)(v51 + 4) = 0;
        *(_BYTE *)(v51 + 6) = 0;
        if ( *(char *)(((v4 + 1248) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 1303) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 32 + 55) & 7) >= *(_BYTE *)(((v4 + 1303) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 1248, 56LL);
        }
        mysqlpp::Query::execute((mysqlpp::Query *)(v4 + 1248));
        mysqlpp::SimpleResult::~SimpleResult((mysqlpp::SimpleResult *const)(v4 + 1248));
        v52 = ((v4 + 1248) >> 3) + 2147450880;
        *(_DWORD *)v52 = -117901064;
        *(_WORD *)(v52 + 4) = -1800;
        *(_BYTE *)(v52 + 6) = -8;
      }
      std::string::~string((void *)(v4 + 800));
      std::string::~string((void *)(v4 + 736));
      *(_DWORD *)(((v4 + 736) >> 3) + 0x7FFF8000) = -117901064;
      *(_DWORD *)(((v4 + 800) >> 3) + 0x7FFF8000) = -117901064;
      v7 = 0;
      mysqlpp::Query::~Query((mysqlpp::Query *const)(v4 + 1344));
    }
    std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v4 + 192));
  }
  else
  {
    *(_DWORD *)(((v4 + 608) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 608) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 639) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 639) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 608, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 608),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/mysql_op_misc.cpp",
      "insertOrUpdatePlayerFeatureBlockConfig",
      529);
    common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
      (common::milog::MiLogStream *const)(v4 + 608),
      (const char (*)[10])"uid is 0!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 608));
    *(_DWORD *)(((v4 + 608) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v4 + 1056));
  if ( v56 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF807C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v6 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v6 + 2147450880 - (((_DWORD)v6 + 2147450888) & 0xFFFFFFF8) + 132) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v4 >> 3) + 0x7FFF8088) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8090) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8098) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF80A0) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF80EC) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF80F4) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    __asan_stack_free_5(v4, 2016LL, v56);
  }
  return v7;
};

// Line 577: range 000000000D47FEA0-000000000D480E16
std::vector<std::pair<unsigned int,std::string >> *__fastcall MysqlOpMisc::selectPlayerAllFeatureBlockEndTime[abi:cxx11](
        std::vector<std::pair<unsigned int,std::string >> *retstr,
        uint32_t uid)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v5; // rsi
  unsigned __int64 v6; // rax
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rsi
  mysqlpp::Connection *v8; // rsi
  unsigned __int64 v9; // rax
  std::logic_error *exception; // rdi
  std::string *v11; // rdx
  std::string *v12; // r8
  int v13; // r14d
  unsigned __int64 v14; // rax
  std::vector<FeatureBlockConfig> *__for_range; // [rsp+28h] [rbp-608h]
  FeatureBlockConfig *row; // [rsp+30h] [rbp-600h]
  char v18[1520]; // [rsp+40h] [rbp-5F0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1472LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "19 32 1 9 <unknown> 48 1 9 <unknown> 64 4 7 ret:578 80 4 9 <unknown> 96 4 9 <unknown> 112 4 7 ui"
                        "d:576 128 8 15 __for_begin:602 160 8 13 __for_end:602 192 8 9 <unknown> 224 16 9 <unknown> 256 1"
                        "6 12 conn_ptr:583 288 24 11 row_vec:593 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown>"
                        " 544 32 9 <unknown> 608 56 14 span_proxy:579 704 56 14 _tc_guard_:581 800 544 9 query:589";
  *(_QWORD *)(v2 + 16) = MysqlOpMisc::selectPlayerAllFeatureBlockEndTime[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -219021312;
  v4[536862728] = -219021312;
  v4[536862729] = -234881024;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -218959118;
  v4[536862740] = -234881024;
  v4[536862741] = -218959118;
  v4[536862743] = -234881024;
  v4[536862744] = -218959118;
  v4[536862762] = -202116109;
  v4[536862763] = -202116109;
  v4[536862764] = -202116109;
  v4[536862765] = -202116109;
  *(_DWORD *)(v2 + 112) = uid;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 64);
  *(_DWORD *)(v2 + 64) = -1;
  opentracing::v3::string_view::string_view(
    (opentracing::v3::string_view *const)(v2 + 224),
    "selectPlayerAllFeatureBlockEndTime");
  v5 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
  if ( *(_WORD *)(((v2 + 224) >> 3) + 0x7FFF8000) )
    __asan_report_load16(v2 + 224);
  SpanProxy::SpanProxy(
    (SpanProxy *const)(v2 + 608),
    v5,
    *(opentracing::v3::string_view *)(v2 + 224),
    0LL,
    0,
    (const int *)(v2 + 64));
  *(_WORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -1800;
  v6 = ((v2 + 704) >> 3) + 2147450880;
  *(_DWORD *)v6 = 0;
  *(_WORD *)(v6 + 4) = 0;
  *(_BYTE *)(v6 + 6) = 0;
  *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 416),
    "selectPlayerAllFeatureBlockEndTime",
    (const std::allocator<char> *)(v2 + 48));
  *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 352),
    "MYSQL",
    (const std::allocator<char> *)(v2 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 704),
    (const std::string *)(v2 + 352),
    (const std::string *)(v2 + 416));
  std::string::~string((void *)(v2 + 352));
  *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v2 + 416));
  *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  std::vector<std::pair<unsigned int,std::string>>::vector(retstr);
  *(_WORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
  v7 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
  if ( *(_WORD *)(((v2 + 256) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 256, v7);
  common::midb::MySqlMgrT<std::mutex>::grab(v7, 0x3E9u, 0);
  if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v2 + 256)) )
  {
    *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 480, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 480),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/mysql_op_misc.cpp",
      "selectPlayerAllFeatureBlockEndTime",
      586);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v2 + 480),
      "[MYSQL]grab connect to mysql failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
    *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
  }
  else
  {
    __asan_unpoison_stack_memory(v2 + 800, 544LL);
    v8 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256));
    if ( *(char *)(((v2 + 800) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1343) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 64 + 127) & 7) >= *(_BYTE *)(((v2 + 1343) >> 3) + 0x7FFF8000) )
    {
      v8 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v2 + 800, 544LL);
    }
    mysqlpp::Connection::query(
      (mysqlpp::Query *)(v2 + 800),
      v8,
      "select uid, type, end_time from t_feature_block_config where uid = ");
    std::ostream::operator<<(v2 + 800, *(unsigned int *)(v2 + 112));
    v9 = ((v2 + 288) >> 3) + 2147450880;
    *(_WORD *)v9 = 0;
    *(_BYTE *)(v9 + 2) = 0;
    std::vector<FeatureBlockConfig>::vector((std::vector<FeatureBlockConfig> *const)(v2 + 288));
    mysqlpp::Query::storein<std::vector<FeatureBlockConfig>>(
      (mysqlpp::Query *const)(v2 + 800),
      (std::vector<FeatureBlockConfig> *)(v2 + 288));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v2 + 800)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    if ( std::vector<FeatureBlockConfig>::size((const std::vector<FeatureBlockConfig> *const)(v2 + 288)) )
    {
      __for_range = (std::vector<FeatureBlockConfig> *)(v2 + 288);
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<FeatureBlockConfig>::iterator *)(v2 + 128) = std::vector<FeatureBlockConfig>::begin(__for_range);
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<FeatureBlockConfig>::iterator *)(v2 + 160) = std::vector<FeatureBlockConfig>::end(__for_range);
      while ( __gnu_cxx::operator!=<FeatureBlockConfig *,std::vector<FeatureBlockConfig>>(
                (const __gnu_cxx::__normal_iterator<FeatureBlockConfig*,std::vector<FeatureBlockConfig> > *)(v2 + 128),
                (const __gnu_cxx::__normal_iterator<FeatureBlockConfig*,std::vector<FeatureBlockConfig> > *)(v2 + 160)) )
      {
        row = __gnu_cxx::__normal_iterator<FeatureBlockConfig *,std::vector<FeatureBlockConfig>>::operator*((const __gnu_cxx::__normal_iterator<FeatureBlockConfig*,std::vector<FeatureBlockConfig> > *const)(v2 + 128));
        v11 = std::move<std::string &>(&row->end_time);
        std::vector<std::pair<unsigned int,std::string>>::emplace_back<unsigned int &,std::string>(
          retstr,
          &row->type,
          v11,
          &row->type,
          v12);
        __gnu_cxx::__normal_iterator<FeatureBlockConfig *,std::vector<FeatureBlockConfig>>::operator++((__gnu_cxx::__normal_iterator<FeatureBlockConfig*,std::vector<FeatureBlockConfig> > *const)(v2 + 128));
      }
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      v13 = 1;
    }
    else
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64);
      *(_DWORD *)(v2 + 64) = 0;
      v13 = 0;
    }
    std::vector<FeatureBlockConfig>::~vector((std::vector<FeatureBlockConfig> *const)(v2 + 288));
    v14 = ((v2 + 288) >> 3) + 2147450880;
    *(_WORD *)v14 = -1800;
    *(_BYTE *)(v14 + 2) = -8;
    if ( v13 == 1 )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64);
      *(_DWORD *)(v2 + 64) = 0;
    }
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v2 + 800));
  }
  std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v2 + 256));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 704));
  SpanProxy::~SpanProxy((SpanProxy *const)(v2 + 608));
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A8) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80B0) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1472LL, v18);
  }
  return retstr;
};

// Line 625: range 000000000D480E18-000000000D48199D
int32_t __cdecl MysqlOpMisc::selectLoginBlackUidConfigBatch(
        const std::vector<unsigned int> *uid_vec,
        std::vector<TableLoginBlackUidConfig> *row_vec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rsi
  common::milog::MiLogStream *v7; // rcx
  mysqlpp::Connection *v8; // rsi
  unsigned int *v9; // rax
  uint32_t *v10; // rdx
  std::logic_error *exception; // rdi
  bool is_first; // [rsp+2Bh] [rbp-505h]
  uint32_t uid; // [rsp+2Ch] [rbp-504h]
  char v16[1264]; // [rsp+40h] [rbp-4F0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1216LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 8 15 __for_begin:642 128 8 13 __for_end"
                        ":642 160 16 12 conn_ptr:631 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <u"
                        "nknown> 448 56 14 _tc_guard_:630 544 544 9 query:638";
  *(_QWORD *)(v2 + 16) = MysqlOpMisc::selectLoginBlackUidConfigBatch;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -219021312;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -234881024;
  v4[536862736] = -218959118;
  v4[536862754] = -202116109;
  v4[536862755] = -202116109;
  v4[536862756] = -202116109;
  v4[536862757] = -202116109;
  if ( std::vector<unsigned int>::empty(uid_vec) )
  {
    v5 = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 256),
      "selectLoginBlackUidConfigBatch",
      (const std::allocator<char> *)(v2 + 64));
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 192),
      "MYSQL",
      (const std::allocator<char> *)(v2 + 48));
    MonitorReportUtils::TimeCostGuard::TimeCostGuard(
      (MonitorReportUtils::TimeCostGuard *const)(v2 + 448),
      (const std::string *)(v2 + 192),
      (const std::string *)(v2 + 256));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_WORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    v6 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
    if ( *(_WORD *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v2 + 160, v6);
    common::midb::MySqlMgrT<std::mutex>::grab(v6, 0x3E9u, 0);
    if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v2 + 160)) )
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
        3u,
        "src/mysql_op_misc.cpp",
        "selectLoginBlackUidConfigBatch",
        634);
      v7 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
             (common::milog::MiLogStream *const)(v2 + 320),
             (const char (*)[52])"[MYSQL]ResourceBox::mysql_mgr_ptr->grab failed for ");
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80);
      *(_DWORD *)(v2 + 80) = 1001;
      common::milog::MiLogStream::operator<<<proto::MysqlIndex,(proto::MysqlIndex*)0>(
        v7,
        (const proto::MysqlIndex *)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      __asan_unpoison_stack_memory(v2 + 544, 544LL);
      v8 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
      if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 127) & 7) >= *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) )
      {
        v8 = (mysqlpp::Connection *)544;
        __asan_report_store_n(v2 + 544, 544LL);
      }
      mysqlpp::Connection::query(
        (mysqlpp::Query *)(v2 + 544),
        v8,
        "select uid, begin_time, end_time, msg from t_login_black_uid_config where uid in");
      std::operator<<<std::char_traits<char>>(v2 + 544, "(");
      is_first = 1;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<unsigned int>::const_iterator *)(v2 + 96) = std::vector<unsigned int>::begin(uid_vec);
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::end(uid_vec);
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 96),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128)) )
      {
        v9 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 96));
        v10 = v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v9);
        }
        uid = *v10;
        if ( is_first )
          is_first = 0;
        else
          std::operator<<<std::char_traits<char>>(v2 + 544, ",");
        std::ostream::operator<<(v2 + 544, uid);
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 96));
      }
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      std::operator<<<std::char_traits<char>>(v2 + 544, ")");
      mysqlpp::Query::storein<std::vector<TableLoginBlackUidConfig>>((mysqlpp::Query *const)(v2 + 544), row_vec);
      if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v2 + 544)) )
      {
        exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
        std::logic_error::logic_error(exception, "query has error");
        __asan_handle_no_return(exception);
        _cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::logic_error,
          (void (__fastcall *)(void *))&std::logic_error::~logic_error);
      }
      v5 = 0;
      mysqlpp::Query::~Query((mysqlpp::Query *const)(v2 + 544));
    }
    std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v2 + 160));
    MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 448));
  }
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8088) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8090) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1216LL, v16);
  }
  return v5;
};

// Line 669: range 000000000D48199E-000000000D482523
int32_t __cdecl MysqlOpMisc::selectCancelAccountUidConfigBatch(
        const std::vector<unsigned int> *uid_vec,
        std::vector<CancelAccountUidConfig> *row_vec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rsi
  common::milog::MiLogStream *v7; // rcx
  mysqlpp::Connection *v8; // rsi
  unsigned int *v9; // rax
  uint32_t *v10; // rdx
  std::logic_error *exception; // rdi
  bool is_first; // [rsp+2Bh] [rbp-505h]
  uint32_t uid; // [rsp+2Ch] [rbp-504h]
  char v16[1264]; // [rsp+40h] [rbp-4F0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1216LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 8 15 __for_begin:686 128 8 13 __for_end"
                        ":686 160 16 12 conn_ptr:675 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <u"
                        "nknown> 448 56 14 _tc_guard_:674 544 544 9 query:682";
  *(_QWORD *)(v2 + 16) = MysqlOpMisc::selectCancelAccountUidConfigBatch;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -219021312;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -234881024;
  v4[536862736] = -218959118;
  v4[536862754] = -202116109;
  v4[536862755] = -202116109;
  v4[536862756] = -202116109;
  v4[536862757] = -202116109;
  if ( std::vector<unsigned int>::empty(uid_vec) )
  {
    v5 = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 256),
      "selectCancelAccountUidConfigBatch",
      (const std::allocator<char> *)(v2 + 64));
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 192),
      "MYSQL",
      (const std::allocator<char> *)(v2 + 48));
    MonitorReportUtils::TimeCostGuard::TimeCostGuard(
      (MonitorReportUtils::TimeCostGuard *const)(v2 + 448),
      (const std::string *)(v2 + 192),
      (const std::string *)(v2 + 256));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_WORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    v6 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
    if ( *(_WORD *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v2 + 160, v6);
    common::midb::MySqlMgrT<std::mutex>::grab(v6, 0x3E9u, 0);
    if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v2 + 160)) )
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
        3u,
        "src/mysql_op_misc.cpp",
        "selectCancelAccountUidConfigBatch",
        678);
      v7 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
             (common::milog::MiLogStream *const)(v2 + 320),
             (const char (*)[52])"[MYSQL]ResourceBox::mysql_mgr_ptr->grab failed for ");
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80);
      *(_DWORD *)(v2 + 80) = 1001;
      common::milog::MiLogStream::operator<<<proto::MysqlIndex,(proto::MysqlIndex*)0>(
        v7,
        (const proto::MysqlIndex *)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      __asan_unpoison_stack_memory(v2 + 544, 544LL);
      v8 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
      if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 127) & 7) >= *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) )
      {
        v8 = (mysqlpp::Connection *)544;
        __asan_report_store_n(v2 + 544, 544LL);
      }
      mysqlpp::Connection::query(
        (mysqlpp::Query *)(v2 + 544),
        v8,
        "select uid from t_account_cancellation_config where uid in");
      std::operator<<<std::char_traits<char>>(v2 + 544, "(");
      is_first = 1;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<unsigned int>::const_iterator *)(v2 + 96) = std::vector<unsigned int>::begin(uid_vec);
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::end(uid_vec);
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 96),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128)) )
      {
        v9 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 96));
        v10 = v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v9);
        }
        uid = *v10;
        if ( is_first )
          is_first = 0;
        else
          std::operator<<<std::char_traits<char>>(v2 + 544, ",");
        std::ostream::operator<<(v2 + 544, uid);
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 96));
      }
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      std::operator<<<std::char_traits<char>>(v2 + 544, ")");
      mysqlpp::Query::storein<std::vector<CancelAccountUidConfig>>((mysqlpp::Query *const)(v2 + 544), row_vec);
      if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v2 + 544)) )
      {
        exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
        std::logic_error::logic_error(exception, "query has error");
        __asan_handle_no_return(exception);
        _cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::logic_error,
          (void (__fastcall *)(void *))&std::logic_error::~logic_error);
      }
      v5 = 0;
      mysqlpp::Query::~Query((mysqlpp::Query *const)(v2 + 544));
    }
    std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v2 + 160));
    MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 448));
  }
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8088) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8090) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1216LL, v16);
  }
  return v5;
};

// Line 713: range 000000000D482524-000000000D4834D7
__int64 __fastcall MysqlOpMisc::selectPlayerFreatureBlockConfig(
        uint32_t uid,
        uint32_t type,
        FeatureBlockConfig *config,
        unsigned __int64 is_exist)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v7; // rsi
  unsigned __int64 v8; // rax
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rsi
  common::milog::MiLogStream *v10; // rcx
  unsigned int v11; // r14d
  mysqlpp::Connection *v12; // rsi
  unsigned __int64 v13; // rax
  std::logic_error *exception; // rdi
  const FeatureBlockConfig *v15; // rax
  unsigned __int64 v16; // rax
  char v21[1488]; // [rsp+40h] [rbp-5D0h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_5(1440LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "18 48 1 9 <unknown> 64 1 9 <unknown> 80 4 7 ret:714 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9 <"
                        "unknown> 144 4 7 uid:712 160 8 9 <unknown> 192 16 9 <unknown> 224 16 12 conn_ptr:719 256 24 11 r"
                        "ow_vec:732 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 56 14"
                        " span_proxy:715 672 56 14 _tc_guard_:717 768 544 9 query:725";
  *(_QWORD *)(v4 + 16) = MysqlOpMisc::selectPlayerFreatureBlockConfig;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -234556927;
  v6[536862723] = -234556924;
  v6[536862724] = -234556924;
  v6[536862725] = -218959360;
  v6[536862726] = -219021312;
  v6[536862727] = -219021312;
  v6[536862728] = -234881024;
  v6[536862729] = -218959118;
  v6[536862731] = -218959118;
  v6[536862733] = -218959118;
  v6[536862735] = -218959118;
  v6[536862737] = -218959118;
  v6[536862739] = -234881024;
  v6[536862740] = -218959118;
  v6[536862742] = -234881024;
  v6[536862743] = -218959118;
  v6[536862761] = -202116109;
  v6[536862762] = -202116109;
  v6[536862763] = -202116109;
  v6[536862764] = -202116109;
  *(_DWORD *)(v4 + 144) = uid;
  if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v4 + 80);
  *(_DWORD *)(v4 + 80) = -1;
  opentracing::v3::string_view::string_view(
    (opentracing::v3::string_view *const)(v4 + 192),
    "selectPlayerFreatureBlockConfig");
  v7 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
  if ( *(_WORD *)(((v4 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_load16(v4 + 192);
  SpanProxy::SpanProxy(
    (SpanProxy *const)(v4 + 576),
    v7,
    *(opentracing::v3::string_view *)(v4 + 192),
    0LL,
    0,
    (const int *)(v4 + 80));
  *(_WORD *)(((v4 + 192) >> 3) + 0x7FFF8000) = -1800;
  v8 = ((v4 + 672) >> 3) + 2147450880;
  *(_DWORD *)v8 = 0;
  *(_WORD *)(v8 + 4) = 0;
  *(_BYTE *)(v8 + 6) = 0;
  *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v4 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 384),
    "selectPlayerFreatureBlockConfig",
    (const std::allocator<char> *)(v4 + 64));
  *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v4 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 320),
    "MYSQL",
    (const std::allocator<char> *)(v4 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v4 + 672),
    (const std::string *)(v4 + 320),
    (const std::string *)(v4 + 384));
  std::string::~string((void *)(v4 + 320));
  *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 48);
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v4 + 384));
  *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 64);
  *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) != 0 && (char)(is_exist & 7) >= *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) )
    __asan_report_store1(is_exist);
  *(_BYTE *)is_exist = 0;
  *(_WORD *)(((v4 + 224) >> 3) + 0x7FFF8000) = 0;
  v9 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
  if ( *(_WORD *)(((v4 + 224) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v4 + 224, v9);
  common::midb::MySqlMgrT<std::mutex>::grab(v9, 0x3E9u, 0);
  if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v4 + 224)) )
  {
    *(_DWORD *)(((v4 + 448) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 448) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 96 + 63) & 7) >= *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 448, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 448),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/mysql_op_misc.cpp",
      "selectPlayerFreatureBlockConfig",
      722);
    v10 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
            (common::milog::MiLogStream *const)(v4 + 448),
            (const char (*)[52])"[MYSQL]ResourceBox::mysql_mgr_ptr->grab failed for ");
    *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v4 + 96);
    *(_DWORD *)(v4 + 96) = 1001;
    common::milog::MiLogStream::operator<<<proto::MysqlIndex,(proto::MysqlIndex*)0>(
      v10,
      (const proto::MysqlIndex *)(v4 + 96));
    *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 448));
    *(_DWORD *)(((v4 + 448) >> 3) + 0x7FFF8000) = -117901064;
    if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v4 + 80);
    *(_DWORD *)(v4 + 80) = -1;
    v11 = *(_DWORD *)(v4 + 80);
  }
  else
  {
    __asan_unpoison_stack_memory(v4 + 768, 544LL);
    v12 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
    if ( *(char *)(((v4 + 768) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 1311) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 96 + 127) & 7) >= *(_BYTE *)(((v4 + 1311) >> 3) + 0x7FFF8000) )
    {
      v12 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v4 + 768, 544LL);
    }
    mysqlpp::Connection::query(
      (mysqlpp::Query *)(v4 + 768),
      v12,
      "select uid, type, end_time, begin_time from t_feature_block_config where (uid, type) = (");
    std::ostream::operator<<(v4 + 768, *(unsigned int *)(v4 + 144));
    std::operator<<<std::char_traits<char>>(v4 + 768, ",");
    std::ostream::operator<<(v4 + 768, type);
    std::operator<<<std::char_traits<char>>(v4 + 768, ")");
    v13 = ((v4 + 256) >> 3) + 2147450880;
    *(_WORD *)v13 = 0;
    *(_BYTE *)(v13 + 2) = 0;
    std::vector<FeatureBlockConfig>::vector((std::vector<FeatureBlockConfig> *const)(v4 + 256));
    mysqlpp::Query::storein<std::vector<FeatureBlockConfig>>(
      (mysqlpp::Query *const)(v4 + 768),
      (std::vector<FeatureBlockConfig> *)(v4 + 256));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v4 + 768)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    if ( std::vector<FeatureBlockConfig>::size((const std::vector<FeatureBlockConfig> *const)(v4 + 256)) )
    {
      v15 = std::vector<FeatureBlockConfig>::operator[]((std::vector<FeatureBlockConfig> *const)(v4 + 256), 0LL);
      FeatureBlockConfig::operator=(config, v15);
      if ( *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) != 0
        && (char)(is_exist & 7) >= *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(is_exist);
      }
      *(_BYTE *)is_exist = 1;
    }
    std::vector<FeatureBlockConfig>::~vector((std::vector<FeatureBlockConfig> *const)(v4 + 256));
    v16 = ((v4 + 256) >> 3) + 2147450880;
    *(_WORD *)v16 = -1800;
    *(_BYTE *)(v16 + 2) = -8;
    if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v4 + 80);
    *(_DWORD *)(v4 + 80) = 0;
    v11 = *(_DWORD *)(v4 + 80);
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v4 + 768));
  }
  std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v4 + 224));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v4 + 672));
  SpanProxy::~SpanProxy((SpanProxy *const)(v4 + 576));
  if ( v21 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8058) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF80A4) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF80AC) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    __asan_stack_free_5(v4, 1440LL, v21);
  }
  return v11;
};

// Line 755: range 000000000D4834D8-000000000D48446E
int32_t __cdecl MysqlOpMisc::selectRedPointConfigCount(uint32_t *red_point_config_count, std::string *err_msg)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rsi
  common::milog::MiLogStream *v7; // rcx
  mysqlpp::Connection *v8; // rsi
  unsigned __int64 v9; // rax
  std::logic_error *exception; // rdi
  mysqlpp::Row *v11; // rax
  const mysqlpp::String *v12; // rax
  unsigned int v13; // ecx
  int v14; // r15d
  unsigned __int64 v15; // rax
  char v17[1968]; // [rsp+30h] [rbp-7B0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1920LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "15 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 16 12 conn_ptr:757 14"
                        "4 32 9 <unknown> 208 32 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464"
                        " 32 9 <unknown> 528 56 14 _tc_guard_:756 624 120 7 res:768 784 392 6 ss:785 1248 544 9 query:763";
  *(_QWORD *)(v3 + 16) = MysqlOpMisc::selectRedPointConfigCount;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556927;
  v5[536862723] = 61956;
  v5[536862724] = 62194;
  v5[536862725] = -219021312;
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
  v5[536862738] = -218959360;
  v5[536862739] = 62194;
  v5[536862743] = -218959360;
  v5[536862744] = 62194;
  v5[536862756] = -234881024;
  v5[536862757] = -218959118;
  v5[536862758] = -218959118;
  v5[536862776] = -202116109;
  v5[536862777] = -202116109;
  v5[536862778] = -202116109;
  v5[536862779] = -202116109;
  std::allocator<char>::allocator(v3 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 208),
    "selectRedPointConfigCount",
    (const std::allocator<char> *)(v3 + 64));
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 144),
    "MYSQL",
    (const std::allocator<char> *)(v3 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 528),
    (const std::string *)(v3 + 144),
    (const std::string *)(v3 + 208));
  std::string::~string((void *)(v3 + 144));
  *(_DWORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v3 + 208));
  *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 64);
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
  v6 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
  if ( *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v3 + 112, v6);
  common::midb::MySqlMgrT<std::mutex>::grab(v6, 0x3E9u, 0);
  if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v3 + 112)) )
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
      3u,
      "src/mysql_op_misc.cpp",
      "selectRedPointConfigCount",
      760);
    v7 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           (common::milog::MiLogStream *const)(v3 + 272),
           (const char (*)[52])"[MYSQL]ResourceBox::mysql_mgr_ptr->grab failed for ");
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 80);
    *(_DWORD *)(v3 + 80) = 1001;
    common::milog::MiLogStream::operator<<<proto::MysqlIndex,(proto::MysqlIndex*)0>(
      v7,
      (const proto::MysqlIndex *)(v3 + 80));
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
    *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
  }
  else
  {
    __asan_unpoison_stack_memory(v3 + 1248, 544LL);
    v8 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
    if ( *(char *)(((v3 + 1248) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1791) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 1791) >> 3) + 0x7FFF8000) )
    {
      v8 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v3 + 1248, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 1248), v8, byte_1A80D1E0);
    std::operator<<<std::char_traits<char>>(
      v3 + 1248,
      "select count(*) as red_point_config_count from t_red_point_config");
    v9 = ((v3 + 624) >> 3) + 2147450880;
    *(_DWORD *)v9 = 0;
    *(_DWORD *)(v9 + 4) = 0;
    *(_DWORD *)(v9 + 8) = 0;
    *(_WORD *)(v9 + 12) = 0;
    *(_BYTE *)(v9 + 14) = 0;
    if ( *(char *)(((v3 + 624) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 743) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 25) & 7) >= *(_BYTE *)(((v3 + 743) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 624, 120LL);
    }
    mysqlpp::Query::store((mysqlpp::Query *)(v3 + 624));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 1248)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "errnum is not 0");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    if ( std::vector<mysqlpp::Row>::size((const std::vector<mysqlpp::Row> *const)(v3 + 712)) == 1 )
    {
      v11 = std::vector<mysqlpp::Row>::operator[]((std::vector<mysqlpp::Row> *const)(v3 + 712), 0LL);
      v12 = (const mysqlpp::String *)mysqlpp::Row::operator[](v11);
      v13 = mysqlpp::String::operator unsigned int(v12);
      if ( *(_BYTE *)(((unsigned __int64)red_point_config_count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)red_point_config_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)red_point_config_count >> 3)
                                                                                 + 0x7FFF8000) )
      {
        __asan_report_store4(red_point_config_count);
      }
      *red_point_config_count = v13;
      v14 = 1;
    }
    else
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
        3u,
        "src/mysql_op_misc.cpp",
        "selectRedPointConfigCount",
        779);
      common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
        (common::milog::MiLogStream *const)(v3 + 336),
        (const char (*)[73])"select count(*) as red_point_config_count from t_red_point_config failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
      *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v14 = 0;
    }
    mysqlpp::StoreQueryResult::~StoreQueryResult((mysqlpp::StoreQueryResult *const)(v3 + 624));
    v15 = ((v3 + 624) >> 3) + 2147450880;
    *(_DWORD *)v15 = -117901064;
    *(_DWORD *)(v15 + 4) = -117901064;
    *(_DWORD *)(v15 + 8) = -117901064;
    *(_WORD *)(v15 + 12) = -1800;
    *(_BYTE *)(v15 + 14) = -8;
    if ( v14 == 1 )
      v2 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 1248));
  }
  std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v3 + 112));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 528));
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8094) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862740) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450952 - (((_DWORD)v5 + 2147450960) & 0xFFFFFFF8) + 84) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF80E0) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80E8) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1920LL, v17);
  }
  return v2;
};

// Line 796: range 000000000D484470-000000000D48511C
int32_t __cdecl MysqlOpMisc::selectAllRedPointConfigData(
        std::vector<DbRedPointConfig> *red_point_config_vec,
        std::string *err_msg)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rsi
  common::milog::MiLogStream *v6; // rcx
  int32_t v7; // r14d
  mysqlpp::Connection *v8; // rsi
  __int64 v9; // rax
  std::logic_error *exception; // rdi
  char v12[1744]; // [rsp+30h] [rbp-6D0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1696LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "13 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 16 12 conn_ptr:798 14"
                        "4 32 9 <unknown> 208 32 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464"
                        " 56 14 _tc_guard_:797 560 392 6 ss:821 1024 544 9 query:804";
  *(_QWORD *)(v2 + 16) = MysqlOpMisc::selectAllRedPointConfigData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = 61956;
  v4[536862724] = 62194;
  v4[536862725] = -219021312;
  v4[536862726] = 62194;
  v4[536862727] = -219021312;
  v4[536862728] = 62194;
  v4[536862729] = -219021312;
  v4[536862730] = 62194;
  v4[536862731] = -219021312;
  v4[536862732] = 62194;
  v4[536862733] = -219021312;
  v4[536862734] = 62194;
  v4[536862736] = -218959360;
  v4[536862737] = 62194;
  v4[536862749] = -234881024;
  v4[536862750] = -218959118;
  v4[536862751] = -218959118;
  v4[536862769] = -202116109;
  v4[536862770] = -202116109;
  v4[536862771] = -202116109;
  v4[536862772] = -202116109;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 208),
    "selectAllRedPointConfigData",
    (const std::allocator<char> *)(v2 + 64));
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 144),
    "MYSQL",
    (const std::allocator<char> *)(v2 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 464),
    (const std::string *)(v2 + 144),
    (const std::string *)(v2 + 208));
  std::string::~string((void *)(v2 + 144));
  *(_DWORD *)(((v2 + 144) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v2 + 208));
  *(_DWORD *)(((v2 + 208) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 64);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
  v5 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
  if ( *(_WORD *)(((v2 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 112, v5);
  common::midb::MySqlMgrT<std::mutex>::grab(v5, 0x3E9u, 0);
  if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v2 + 112)) )
  {
    *(_DWORD *)(((v2 + 272) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 272) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 303) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 47) & 7) >= *(_BYTE *)(((v2 + 303) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 272, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 272),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/mysql_op_misc.cpp",
      "selectAllRedPointConfigData",
      801);
    v6 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           (common::milog::MiLogStream *const)(v2 + 272),
           (const char (*)[52])"[MYSQL]ResourceBox::mysql_mgr_ptr->grab failed for ");
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 80);
    *(_DWORD *)(v2 + 80) = 1001;
    common::milog::MiLogStream::operator<<<proto::MysqlIndex,(proto::MysqlIndex*)0>(
      v6,
      (const proto::MysqlIndex *)(v2 + 80));
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 272));
    *(_DWORD *)(((v2 + 272) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else
  {
    __asan_unpoison_stack_memory(v2 + 1024, 544LL);
    v8 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
    if ( *(char *)(((v2 + 1024) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1567) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 96 + 127) & 7) >= *(_BYTE *)(((v2 + 1567) >> 3) + 0x7FFF8000) )
    {
      v8 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v2 + 1024, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v2 + 1024), v8, byte_1A80D1E0);
    v9 = std::operator<<<std::char_traits<char>>(
           v2 + 1024,
           "select id, content_id, trigger_time, expire_time, is_daily_refresh, daily_refresh_second, red_point_type, pla"
           "yer_level from t_red_point_config limit ");
    std::ostream::operator<<(v9, 101LL);
    mysqlpp::Query::storein<std::vector<DbRedPointConfig>>((mysqlpp::Query *const)(v2 + 1024), red_point_config_vec);
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v2 + 1024)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "errnum is not 0");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    if ( std::vector<DbRedPointConfig>::size(red_point_config_vec) <= 0x64 )
    {
      v7 = 0;
    }
    else
    {
      std::vector<DbRedPointConfig>::resize(red_point_config_vec, 0x64uLL);
      v7 = -2;
    }
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v2 + 1024));
  }
  std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v2 + 112));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 464));
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8078) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80C4) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80CC) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1696LL, v12);
  }
  return v7;
};

// Line 832: range 000000000D48511E-000000000D4861FA
int32_t __cdecl MysqlOpMisc::insertRedPointConfigData(const DbRedPointConfig *red_point_config, std::string *err_msg)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rsi
  common::milog::MiLogStream *v6; // rcx
  int32_t v7; // r14d
  mysqlpp::Connection *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  std::ostream *v12; // rax
  std::ostream *ostr; // r14
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  std::ostream *v16; // rax
  std::ostream *v17; // r14
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  std::logic_error *exception; // rdi
  char v34[1968]; // [rsp+30h] [rbp-7B0h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1920LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "16 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 16 12 conn_ptr:834 14"
                        "4 24 9 <unknown> 208 24 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464"
                        " 32 9 <unknown> 528 32 9 <unknown> 592 56 14 _tc_guard_:833 688 56 9 <unknown> 784 392 6 ss:860 "
                        "1248 544 9 query:840";
  *(_QWORD *)(v2 + 16) = MysqlOpMisc::insertRedPointConfigData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = 61956;
  v4[536862724] = 62194;
  v4[536862725] = -218959360;
  v4[536862726] = 62194;
  v4[536862727] = -218959360;
  v4[536862728] = 62194;
  v4[536862729] = -219021312;
  v4[536862730] = 62194;
  v4[536862731] = -219021312;
  v4[536862732] = 62194;
  v4[536862733] = -219021312;
  v4[536862734] = 62194;
  v4[536862735] = -219021312;
  v4[536862736] = 62194;
  v4[536862737] = -219021312;
  v4[536862738] = 62194;
  v4[536862740] = -218959360;
  v4[536862741] = 62194;
  v4[536862743] = -218959360;
  v4[536862744] = 62194;
  v4[536862756] = -234881024;
  v4[536862757] = -218959118;
  v4[536862758] = -218959118;
  v4[536862776] = -202116109;
  v4[536862777] = -202116109;
  v4[536862778] = -202116109;
  v4[536862779] = -202116109;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 336),
    "insertRedPointConfigData",
    (const std::allocator<char> *)(v2 + 64));
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 272),
    "MYSQL",
    (const std::allocator<char> *)(v2 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 592),
    (const std::string *)(v2 + 272),
    (const std::string *)(v2 + 336));
  std::string::~string((void *)(v2 + 272));
  *(_DWORD *)(((v2 + 272) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v2 + 336));
  *(_DWORD *)(((v2 + 336) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 64);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
  v5 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
  if ( *(_WORD *)(((v2 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 112, v5);
  common::midb::MySqlMgrT<std::mutex>::grab(v5, 0x3E9u, 0);
  if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v2 + 112)) )
  {
    *(_DWORD *)(((v2 + 400) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 400) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 431) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 81) & 7) >= *(_BYTE *)(((v2 + 431) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 400, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 400),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/mysql_op_misc.cpp",
      "insertRedPointConfigData",
      837);
    v6 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           (common::milog::MiLogStream *const)(v2 + 400),
           (const char (*)[52])"[MYSQL]ResourceBox::mysql_mgr_ptr->grab failed for ");
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 80);
    *(_DWORD *)(v2 + 80) = 1001;
    common::milog::MiLogStream::operator<<<proto::MysqlIndex,(proto::MysqlIndex*)0>(
      v6,
      (const proto::MysqlIndex *)(v2 + 80));
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 400));
    *(_DWORD *)(((v2 + 400) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else
  {
    __asan_unpoison_stack_memory(v2 + 1248, 544LL);
    v8 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
    if ( *(char *)(((v2 + 1248) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1791) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 1791) >> 3) + 0x7FFF8000) )
    {
      v8 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v2 + 1248, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v2 + 1248), v8, byte_1A80D1E0);
    v9 = std::operator<<<std::char_traits<char>>(
           v2 + 1248,
           "insert into t_red_point_config (content_id, trigger_time, expire_time, is_daily_refresh, daily_refresh_second"
           ", red_point_type, player_level) values");
    v10 = std::operator<<<std::char_traits<char>>(v9, "(");
    if ( *(_BYTE *)(((unsigned __int64)&red_point_config->content_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)red_point_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&red_point_config->content_id >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&red_point_config->content_id);
    }
    v11 = std::ostream::operator<<(v10, red_point_config->content_id);
    v12 = (std::ostream *)std::operator<<<std::char_traits<char>>(v11, ",");
    ostr = mysqlpp::operator<<(v12, quote).ostr;
    v14 = ((v2 + 144) >> 3) + 2147450880;
    *(_WORD *)v14 = 0;
    *(_BYTE *)(v14 + 2) = 0;
    mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 144, &red_point_config->trigger_time, 0LL);
    v15 = mysqlpp::operator<<(ostr, (mysqlpp::SQLTypeAdapter *)(v2 + 144));
    v16 = (std::ostream *)std::operator<<<std::char_traits<char>>(v15, ",");
    v17 = mysqlpp::operator<<(v16, quote).ostr;
    v18 = ((v2 + 208) >> 3) + 2147450880;
    *(_WORD *)v18 = 0;
    *(_BYTE *)(v18 + 2) = 0;
    mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 208, &red_point_config->expire_time, 0LL);
    v19 = mysqlpp::operator<<(v17, (mysqlpp::SQLTypeAdapter *)(v2 + 208));
    v20 = std::operator<<<std::char_traits<char>>(v19, ",");
    if ( *(_BYTE *)(((unsigned __int64)&red_point_config->is_daily_refresh >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&red_point_config->is_daily_refresh >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&red_point_config->is_daily_refresh);
    }
    v21 = std::ostream::operator<<(v20, red_point_config->is_daily_refresh);
    v22 = std::operator<<<std::char_traits<char>>(v21, ",");
    if ( *(_BYTE *)(((unsigned __int64)&red_point_config->daily_refresh_second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)red_point_config + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&red_point_config->daily_refresh_second >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&red_point_config->daily_refresh_second);
    }
    v23 = std::ostream::operator<<(v22, red_point_config->daily_refresh_second);
    v24 = std::operator<<<std::char_traits<char>>(v23, ",");
    if ( *(_BYTE *)(((unsigned __int64)&red_point_config->red_point_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&red_point_config->red_point_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&red_point_config->red_point_type);
    }
    v25 = std::ostream::operator<<(v24, red_point_config->red_point_type);
    v26 = std::operator<<<std::char_traits<char>>(v25, ",");
    if ( *(_BYTE *)(((unsigned __int64)&red_point_config->player_level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)red_point_config + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&red_point_config->player_level >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&red_point_config->player_level);
    }
    v27 = std::ostream::operator<<(v26, red_point_config->player_level);
    std::operator<<<std::char_traits<char>>(v27, ")");
    mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 208));
    v28 = ((v2 + 208) >> 3) + 2147450880;
    *(_WORD *)v28 = -1800;
    *(_BYTE *)(v28 + 2) = -8;
    mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 144));
    v29 = ((v2 + 144) >> 3) + 2147450880;
    *(_WORD *)v29 = -1800;
    *(_BYTE *)(v29 + 2) = -8;
    v30 = ((v2 + 688) >> 3) + 2147450880;
    *(_DWORD *)v30 = 0;
    *(_WORD *)(v30 + 4) = 0;
    *(_BYTE *)(v30 + 6) = 0;
    if ( *(char *)(((v2 + 688) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 743) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 25) & 7) >= *(_BYTE *)(((v2 + 743) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 688, 56LL);
    }
    mysqlpp::Query::execute((mysqlpp::Query *)(v2 + 688));
    mysqlpp::SimpleResult::~SimpleResult((mysqlpp::SimpleResult *const)(v2 + 688));
    v31 = ((v2 + 688) >> 3) + 2147450880;
    *(_DWORD *)v31 = -117901064;
    *(_WORD *)(v31 + 4) = -1800;
    *(_BYTE *)(v31 + 6) = -8;
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v2 + 1248)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "errnum is not 0");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    v7 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v2 + 1248));
  }
  std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v2 + 112));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 592));
  if ( v34 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8094) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862742) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450960 - (((_DWORD)v4 + 2147450968) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF80E0) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80E8) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1920LL, v34);
  }
  return v7;
};

// Line 871: range 000000000D4861FC-000000000D486F38
int32_t __cdecl MysqlOpMisc::deleteRedPointConfigData(uint32_t id, std::string *err_msg)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rsi
  common::milog::MiLogStream *v6; // rcx
  int32_t v7; // r14d
  mysqlpp::Connection *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  std::logic_error *exception; // rdi
  char v15[1840]; // [rsp+30h] [rbp-730h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1792LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "14 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 16 12 conn_ptr:873 14"
                        "4 32 9 <unknown> 208 32 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464"
                        " 56 14 _tc_guard_:872 560 56 9 <unknown> 656 392 6 ss:892 1120 544 9 query:879";
  *(_QWORD *)(v2 + 16) = MysqlOpMisc::deleteRedPointConfigData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = 61956;
  v4[536862724] = 62194;
  v4[536862725] = -219021312;
  v4[536862726] = 62194;
  v4[536862727] = -219021312;
  v4[536862728] = 62194;
  v4[536862729] = -219021312;
  v4[536862730] = 62194;
  v4[536862731] = -219021312;
  v4[536862732] = 62194;
  v4[536862733] = -219021312;
  v4[536862734] = 62194;
  v4[536862736] = -218959360;
  v4[536862737] = 62194;
  v4[536862739] = -218959360;
  v4[536862740] = 62194;
  v4[536862752] = -234881024;
  v4[536862753] = -218959118;
  v4[536862754] = -218959118;
  v4[536862772] = -202116109;
  v4[536862773] = -202116109;
  v4[536862774] = -202116109;
  v4[536862775] = -202116109;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 208),
    "deleteRedPointConfigData",
    (const std::allocator<char> *)(v2 + 64));
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 144),
    "MYSQL",
    (const std::allocator<char> *)(v2 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 464),
    (const std::string *)(v2 + 144),
    (const std::string *)(v2 + 208));
  std::string::~string((void *)(v2 + 144));
  *(_DWORD *)(((v2 + 144) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v2 + 208));
  *(_DWORD *)(((v2 + 208) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 64);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
  v5 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
  if ( *(_WORD *)(((v2 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 112, v5);
  common::midb::MySqlMgrT<std::mutex>::grab(v5, 0x3E9u, 0);
  if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v2 + 112)) )
  {
    *(_DWORD *)(((v2 + 272) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 272) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 303) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 47) & 7) >= *(_BYTE *)(((v2 + 303) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 272, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 272),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/mysql_op_misc.cpp",
      "deleteRedPointConfigData",
      876);
    v6 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           (common::milog::MiLogStream *const)(v2 + 272),
           (const char (*)[52])"[MYSQL]ResourceBox::mysql_mgr_ptr->grab failed for ");
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 80);
    *(_DWORD *)(v2 + 80) = 1001;
    common::milog::MiLogStream::operator<<<proto::MysqlIndex,(proto::MysqlIndex*)0>(
      v6,
      (const proto::MysqlIndex *)(v2 + 80));
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 272));
    *(_DWORD *)(((v2 + 272) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else
  {
    __asan_unpoison_stack_memory(v2 + 1120, 544LL);
    v8 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
    if ( *(char *)(((v2 + 1120) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1663) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 1663) >> 3) + 0x7FFF8000) )
    {
      v8 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v2 + 1120, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v2 + 1120), v8, byte_1A80D1E0);
    v9 = std::operator<<<std::char_traits<char>>(v2 + 1120, "delete from t_red_point_config");
    v10 = std::operator<<<std::char_traits<char>>(v9, " where id=");
    std::ostream::operator<<(v10, id);
    v11 = ((v2 + 560) >> 3) + 2147450880;
    *(_DWORD *)v11 = 0;
    *(_WORD *)(v11 + 4) = 0;
    *(_BYTE *)(v11 + 6) = 0;
    if ( *(char *)(((v2 + 560) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 615) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 103) & 7) >= *(_BYTE *)(((v2 + 615) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 560, 56LL);
    }
    mysqlpp::Query::execute((mysqlpp::Query *)(v2 + 560));
    mysqlpp::SimpleResult::~SimpleResult((mysqlpp::SimpleResult *const)(v2 + 560));
    v12 = ((v2 + 560) >> 3) + 2147450880;
    *(_DWORD *)v12 = -117901064;
    *(_WORD *)(v12 + 4) = -1800;
    *(_BYTE *)(v12 + 6) = -8;
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v2 + 1120)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "errnum is not 0");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    v7 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v2 + 1120));
  }
  std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v2 + 112));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 464));
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8084) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862738) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450944 - (((_DWORD)v4 + 2147450952) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF80D0) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80D8) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1792LL, v15);
  }
  return v7;
};

// Line 903: range 000000000D486F3A-000000000D48805F
int32_t __cdecl MysqlOpMisc::updateRedPointConfigData(const DbRedPointConfig *red_point_config, std::string *err_msg)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rsi
  common::milog::MiLogStream *v6; // rcx
  int32_t v7; // r14d
  mysqlpp::Connection *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  std::ostream *v12; // rax
  std::ostream *ostr; // r14
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  std::ostream *v16; // rax
  std::ostream *v17; // r14
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  std::logic_error *exception; // rdi
  char v35[1968]; // [rsp+30h] [rbp-7B0h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1920LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "16 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 16 12 conn_ptr:905 14"
                        "4 24 9 <unknown> 208 24 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464"
                        " 32 9 <unknown> 528 32 9 <unknown> 592 56 14 _tc_guard_:904 688 56 9 <unknown> 784 392 6 ss:931 "
                        "1248 544 9 query:911";
  *(_QWORD *)(v2 + 16) = MysqlOpMisc::updateRedPointConfigData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = 61956;
  v4[536862724] = 62194;
  v4[536862725] = -218959360;
  v4[536862726] = 62194;
  v4[536862727] = -218959360;
  v4[536862728] = 62194;
  v4[536862729] = -219021312;
  v4[536862730] = 62194;
  v4[536862731] = -219021312;
  v4[536862732] = 62194;
  v4[536862733] = -219021312;
  v4[536862734] = 62194;
  v4[536862735] = -219021312;
  v4[536862736] = 62194;
  v4[536862737] = -219021312;
  v4[536862738] = 62194;
  v4[536862740] = -218959360;
  v4[536862741] = 62194;
  v4[536862743] = -218959360;
  v4[536862744] = 62194;
  v4[536862756] = -234881024;
  v4[536862757] = -218959118;
  v4[536862758] = -218959118;
  v4[536862776] = -202116109;
  v4[536862777] = -202116109;
  v4[536862778] = -202116109;
  v4[536862779] = -202116109;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 336),
    "updateRedPointConfigData",
    (const std::allocator<char> *)(v2 + 64));
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 272),
    "MYSQL",
    (const std::allocator<char> *)(v2 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 592),
    (const std::string *)(v2 + 272),
    (const std::string *)(v2 + 336));
  std::string::~string((void *)(v2 + 272));
  *(_DWORD *)(((v2 + 272) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v2 + 336));
  *(_DWORD *)(((v2 + 336) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 64);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
  v5 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
  if ( *(_WORD *)(((v2 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 112, v5);
  common::midb::MySqlMgrT<std::mutex>::grab(v5, 0x3E9u, 0);
  if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v2 + 112)) )
  {
    *(_DWORD *)(((v2 + 400) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 400) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 431) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 81) & 7) >= *(_BYTE *)(((v2 + 431) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 400, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 400),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/mysql_op_misc.cpp",
      "updateRedPointConfigData",
      908);
    v6 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           (common::milog::MiLogStream *const)(v2 + 400),
           (const char (*)[52])"[MYSQL]ResourceBox::mysql_mgr_ptr->grab failed for ");
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 80);
    *(_DWORD *)(v2 + 80) = 1001;
    common::milog::MiLogStream::operator<<<proto::MysqlIndex,(proto::MysqlIndex*)0>(
      v6,
      (const proto::MysqlIndex *)(v2 + 80));
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 400));
    *(_DWORD *)(((v2 + 400) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else
  {
    __asan_unpoison_stack_memory(v2 + 1248, 544LL);
    v8 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
    if ( *(char *)(((v2 + 1248) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1791) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 1791) >> 3) + 0x7FFF8000) )
    {
      v8 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v2 + 1248, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v2 + 1248), v8, byte_1A80D1E0);
    v9 = std::operator<<<std::char_traits<char>>(v2 + 1248, "update t_red_point_config");
    v10 = std::operator<<<std::char_traits<char>>(v9, " set content_id=");
    if ( *(_BYTE *)(((unsigned __int64)&red_point_config->content_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)red_point_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&red_point_config->content_id >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&red_point_config->content_id);
    }
    v11 = std::ostream::operator<<(v10, red_point_config->content_id);
    v12 = (std::ostream *)std::operator<<<std::char_traits<char>>(v11, ", trigger_time=");
    ostr = mysqlpp::operator<<(v12, quote).ostr;
    v14 = ((v2 + 144) >> 3) + 2147450880;
    *(_WORD *)v14 = 0;
    *(_BYTE *)(v14 + 2) = 0;
    mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 144, &red_point_config->trigger_time, 0LL);
    v15 = mysqlpp::operator<<(ostr, (mysqlpp::SQLTypeAdapter *)(v2 + 144));
    v16 = (std::ostream *)std::operator<<<std::char_traits<char>>(v15, ", expire_time=");
    v17 = mysqlpp::operator<<(v16, quote).ostr;
    v18 = ((v2 + 208) >> 3) + 2147450880;
    *(_WORD *)v18 = 0;
    *(_BYTE *)(v18 + 2) = 0;
    mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 208, &red_point_config->expire_time, 0LL);
    v19 = mysqlpp::operator<<(v17, (mysqlpp::SQLTypeAdapter *)(v2 + 208));
    v20 = std::operator<<<std::char_traits<char>>(v19, ", is_daily_refresh=");
    if ( *(_BYTE *)(((unsigned __int64)&red_point_config->is_daily_refresh >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&red_point_config->is_daily_refresh >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&red_point_config->is_daily_refresh);
    }
    v21 = std::ostream::operator<<(v20, red_point_config->is_daily_refresh);
    v22 = std::operator<<<std::char_traits<char>>(v21, ", daily_refresh_second=");
    if ( *(_BYTE *)(((unsigned __int64)&red_point_config->daily_refresh_second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)red_point_config + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&red_point_config->daily_refresh_second >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&red_point_config->daily_refresh_second);
    }
    v23 = std::ostream::operator<<(v22, red_point_config->daily_refresh_second);
    v24 = std::operator<<<std::char_traits<char>>(v23, ", red_point_type=");
    if ( *(_BYTE *)(((unsigned __int64)&red_point_config->red_point_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&red_point_config->red_point_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&red_point_config->red_point_type);
    }
    v25 = std::ostream::operator<<(v24, red_point_config->red_point_type);
    v26 = std::operator<<<std::char_traits<char>>(v25, ", player_level=");
    if ( *(_BYTE *)(((unsigned __int64)&red_point_config->player_level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)red_point_config + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&red_point_config->player_level >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&red_point_config->player_level);
    }
    v27 = std::ostream::operator<<(v26, red_point_config->player_level);
    v28 = std::operator<<<std::char_traits<char>>(v27, " where id=");
    if ( *(_BYTE *)(((unsigned __int64)red_point_config >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)red_point_config >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(red_point_config);
    }
    std::ostream::operator<<(v28, red_point_config->id);
    mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 208));
    v29 = ((v2 + 208) >> 3) + 2147450880;
    *(_WORD *)v29 = -1800;
    *(_BYTE *)(v29 + 2) = -8;
    mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 144));
    v30 = ((v2 + 144) >> 3) + 2147450880;
    *(_WORD *)v30 = -1800;
    *(_BYTE *)(v30 + 2) = -8;
    v31 = ((v2 + 688) >> 3) + 2147450880;
    *(_DWORD *)v31 = 0;
    *(_WORD *)(v31 + 4) = 0;
    *(_BYTE *)(v31 + 6) = 0;
    if ( *(char *)(((v2 + 688) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 743) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 25) & 7) >= *(_BYTE *)(((v2 + 743) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 688, 56LL);
    }
    mysqlpp::Query::execute((mysqlpp::Query *)(v2 + 688));
    mysqlpp::SimpleResult::~SimpleResult((mysqlpp::SimpleResult *const)(v2 + 688));
    v32 = ((v2 + 688) >> 3) + 2147450880;
    *(_DWORD *)v32 = -117901064;
    *(_WORD *)(v32 + 4) = -1800;
    *(_BYTE *)(v32 + 6) = -8;
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v2 + 1248)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "errnum is not 0");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    v7 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v2 + 1248));
  }
  std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v2 + 112));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 592));
  if ( v35 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8094) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862742) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450960 - (((_DWORD)v4 + 2147450968) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF80E0) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80E8) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1920LL, v35);
  }
  return v7;
};

// Line 942: range 000000000D488060-000000000D48900B
int32_t __cdecl MysqlOpMisc::insertGameplayRecommendationConfig(
        const GameplayRecommendationConfig *config,
        uint32_t *id,
        std::string *err_msg)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rsi
  common::milog::MiLogStream *v7; // rcx
  int32_t v8; // r14d
  mysqlpp::Connection *v9; // rsi
  __int64 v10; // rax
  std::ostream *v11; // rax
  std::ostream *ostr; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  std::ostream *v15; // rax
  std::ostream *v16; // r14
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  std::logic_error *exception; // rdi
  uint32_t inserted; // edi
  char v29[1968]; // [rsp+40h] [rbp-7B0h] BYREF

  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1920LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "16 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 16 12 conn_ptr:944 14"
                        "4 24 9 <unknown> 208 24 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464"
                        " 32 9 <unknown> 528 32 9 <unknown> 592 56 14 _tc_guard_:943 688 56 9 <unknown> 784 392 6 ss:967 "
                        "1248 544 9 query:950";
  *(_QWORD *)(v3 + 16) = MysqlOpMisc::insertGameplayRecommendationConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556927;
  v5[536862723] = 61956;
  v5[536862724] = 62194;
  v5[536862725] = -218959360;
  v5[536862726] = 62194;
  v5[536862727] = -218959360;
  v5[536862728] = 62194;
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862731] = -219021312;
  v5[536862732] = 62194;
  v5[536862733] = -219021312;
  v5[536862734] = 62194;
  v5[536862735] = -219021312;
  v5[536862736] = 62194;
  v5[536862737] = -219021312;
  v5[536862738] = 62194;
  v5[536862740] = -218959360;
  v5[536862741] = 62194;
  v5[536862743] = -218959360;
  v5[536862744] = 62194;
  v5[536862756] = -234881024;
  v5[536862757] = -218959118;
  v5[536862758] = -218959118;
  v5[536862776] = -202116109;
  v5[536862777] = -202116109;
  v5[536862778] = -202116109;
  v5[536862779] = -202116109;
  std::allocator<char>::allocator(v3 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 336),
    "insertGameplayRecommendationConfig",
    (const std::allocator<char> *)(v3 + 64));
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 272),
    "MYSQL",
    (const std::allocator<char> *)(v3 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 592),
    (const std::string *)(v3 + 272),
    (const std::string *)(v3 + 336));
  std::string::~string((void *)(v3 + 272));
  *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v3 + 336));
  *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 64);
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
  v6 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
  if ( *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v3 + 112, v6);
  common::midb::MySqlMgrT<std::mutex>::grab(v6, 0x3E9u, 0);
  if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v3 + 112)) )
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
      3u,
      "src/mysql_op_misc.cpp",
      "insertGameplayRecommendationConfig",
      947);
    v7 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           (common::milog::MiLogStream *const)(v3 + 400),
           (const char (*)[52])"[MYSQL]ResourceBox::mysql_mgr_ptr->grab failed for ");
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 80);
    *(_DWORD *)(v3 + 80) = 1001;
    common::milog::MiLogStream::operator<<<proto::MysqlIndex,(proto::MysqlIndex*)0>(
      v7,
      (const proto::MysqlIndex *)(v3 + 80));
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 400));
    *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
    v8 = -1;
  }
  else
  {
    __asan_unpoison_stack_memory(v3 + 1248, 544LL);
    v9 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
    if ( *(char *)(((v3 + 1248) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1791) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 1791) >> 3) + 0x7FFF8000) )
    {
      v9 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v3 + 1248, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 1248), v9, byte_1A80D1E0);
    v10 = std::operator<<<std::char_traits<char>>(
            v3 + 1248,
            "insert into t_gameplay_recommendation_config (begin_time, json_str, enabled) values");
    v11 = (std::ostream *)std::operator<<<std::char_traits<char>>(v10, "(");
    ostr = mysqlpp::operator<<(v11, quote).ostr;
    v13 = ((v3 + 144) >> 3) + 2147450880;
    *(_WORD *)v13 = 0;
    *(_BYTE *)(v13 + 2) = 0;
    mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v3 + 144, &config->begin_time, 0LL);
    v14 = mysqlpp::operator<<(ostr, (mysqlpp::SQLTypeAdapter *)(v3 + 144));
    v15 = (std::ostream *)std::operator<<<std::char_traits<char>>(v14, ",");
    v16 = mysqlpp::operator<<(v15, quote).ostr;
    v17 = ((v3 + 208) >> 3) + 2147450880;
    *(_WORD *)v17 = 0;
    *(_BYTE *)(v17 + 2) = 0;
    mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v3 + 208, &config->json_str, 0LL);
    v18 = mysqlpp::operator<<(v16, (mysqlpp::SQLTypeAdapter *)(v3 + 208));
    v19 = std::operator<<<std::char_traits<char>>(v18, ",");
    if ( *(_BYTE *)(((unsigned __int64)&config->enabled >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->enabled >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->enabled);
    }
    v20 = std::ostream::operator<<(v19, config->enabled);
    std::operator<<<std::char_traits<char>>(v20, ")");
    mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v3 + 208));
    v21 = ((v3 + 208) >> 3) + 2147450880;
    *(_WORD *)v21 = -1800;
    *(_BYTE *)(v21 + 2) = -8;
    mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v3 + 144));
    v22 = ((v3 + 144) >> 3) + 2147450880;
    *(_WORD *)v22 = -1800;
    *(_BYTE *)(v22 + 2) = -8;
    v23 = ((v3 + 688) >> 3) + 2147450880;
    *(_DWORD *)v23 = 0;
    *(_WORD *)(v23 + 4) = 0;
    *(_BYTE *)(v23 + 6) = 0;
    if ( *(char *)(((v3 + 688) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 743) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 25) & 7) >= *(_BYTE *)(((v3 + 743) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 688, 56LL);
    }
    mysqlpp::Query::execute((mysqlpp::Query *)(v3 + 688));
    mysqlpp::SimpleResult::~SimpleResult((mysqlpp::SimpleResult *const)(v3 + 688));
    v24 = ((v3 + 688) >> 3) + 2147450880;
    *(_DWORD *)v24 = -117901064;
    *(_WORD *)(v24 + 4) = -1800;
    *(_BYTE *)(v24 + 6) = -8;
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 1248)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "errnum is not 0");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    inserted = mysqlpp::Query::insert_id((mysqlpp::Query *const)(v3 + 1248));
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      inserted = (unsigned int)id;
      __asan_report_store4(id);
    }
    *id = inserted;
    v8 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 1248));
  }
  std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v3 + 112));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 592));
  if ( v29 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8044) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8094) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862742) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450960 - (((_DWORD)v5 + 2147450968) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF80E0) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80E8) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1920LL, v29);
  }
  return v8;
};

// Line 978: range 000000000D48900C-000000000D489D74
int32_t __cdecl MysqlOpMisc::selectGameplayRecommendationConfig(
        const std::string *begin_time_str,
        std::vector<GameplayRecommendationConfig> *config_vec,
        std::string *err_msg)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rsi
  common::milog::MiLogStream *v7; // rcx
  int32_t v8; // r14d
  mysqlpp::Connection *v9; // rsi
  __int64 v10; // rax
  std::ostream *v11; // rax
  std::ostream *ostr; // r14
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  std::logic_error *exception; // rdi
  char v18[1808]; // [rsp+40h] [rbp-710h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1760LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "14 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 16 12 conn_ptr:980 14"
                        "4 24 9 <unknown> 208 32 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464"
                        " 32 9 <unknown> 528 56 14 _tc_guard_:979 624 392 6 ss:999 1088 544 9 query:986";
  *(_QWORD *)(v3 + 16) = MysqlOpMisc::selectGameplayRecommendationConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556927;
  v5[536862723] = 61956;
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
  v5[536862738] = -218959360;
  v5[536862739] = 62194;
  v5[536862751] = -234881024;
  v5[536862752] = -218959118;
  v5[536862753] = -218959118;
  v5[536862771] = -202116109;
  v5[536862772] = -202116109;
  v5[536862773] = -202116109;
  v5[536862774] = -202116109;
  std::allocator<char>::allocator(v3 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 272),
    "selectGameplayRecommendationConfig",
    (const std::allocator<char> *)(v3 + 64));
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 208),
    "MYSQL",
    (const std::allocator<char> *)(v3 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 528),
    (const std::string *)(v3 + 208),
    (const std::string *)(v3 + 272));
  std::string::~string((void *)(v3 + 208));
  *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v3 + 272));
  *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 64);
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
  v6 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
  if ( *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v3 + 112, v6);
  common::midb::MySqlMgrT<std::mutex>::grab(v6, 0x3E9u, 0);
  if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v3 + 112)) )
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
      3u,
      "src/mysql_op_misc.cpp",
      "selectGameplayRecommendationConfig",
      983);
    v7 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           (common::milog::MiLogStream *const)(v3 + 336),
           (const char (*)[52])"[MYSQL]ResourceBox::mysql_mgr_ptr->grab failed for ");
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 80);
    *(_DWORD *)(v3 + 80) = 1001;
    common::milog::MiLogStream::operator<<<proto::MysqlIndex,(proto::MysqlIndex*)0>(
      v7,
      (const proto::MysqlIndex *)(v3 + 80));
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
    *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
    v8 = -1;
  }
  else
  {
    __asan_unpoison_stack_memory(v3 + 1088, 544LL);
    v9 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
    if ( *(char *)(((v3 + 1088) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1631) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 32 + 127) & 7) >= *(_BYTE *)(((v3 + 1631) >> 3) + 0x7FFF8000) )
    {
      v9 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v3 + 1088, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 1088), v9, byte_1A80D1E0);
    v10 = std::operator<<<std::char_traits<char>>(
            v3 + 1088,
            "select id, begin_time, json_str, enabled from t_gameplay_recommendation_config");
    v11 = (std::ostream *)std::operator<<<std::char_traits<char>>(v10, " where begin_time=");
    ostr = mysqlpp::operator<<(v11, quote).ostr;
    v13 = ((v3 + 144) >> 3) + 2147450880;
    *(_WORD *)v13 = 0;
    *(_BYTE *)(v13 + 2) = 0;
    mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v3 + 144, begin_time_str, 0LL);
    mysqlpp::operator<<(ostr, (mysqlpp::SQLTypeAdapter *)(v3 + 144));
    mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v3 + 144));
    v14 = ((v3 + 144) >> 3) + 2147450880;
    *(_WORD *)v14 = -1800;
    *(_BYTE *)(v14 + 2) = -8;
    mysqlpp::Query::storein<std::vector<GameplayRecommendationConfig>>((mysqlpp::Query *const)(v3 + 1088), config_vec);
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 1088)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "errnum is not 0");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    v8 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 1088));
  }
  std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v3 + 112));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 528));
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8068) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8070) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8078) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8080) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80CC) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80D4) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1760LL, v18);
  }
  return v8;
};

// Line 1010: range 000000000D489D76-000000000D48AC34
int32_t __cdecl MysqlOpMisc::deleteGameplayRecommendationConfig(
        const std::string *begin_time_str,
        uint32_t *delete_count,
        std::string *err_msg)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rsi
  common::milog::MiLogStream *v7; // rcx
  int32_t v8; // r14d
  mysqlpp::Connection *v9; // rsi
  __int64 v10; // rax
  std::ostream *v11; // rax
  std::ostream *ostr; // r14
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  std::logic_error *exception; // rdi
  uint32_t v17; // edi
  unsigned __int64 v18; // rax
  char v21[1904]; // [rsp+40h] [rbp-770h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1856LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "15 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 16 13 conn_ptr:1012 1"
                        "44 24 9 <unknown> 208 32 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 46"
                        "4 32 9 <unknown> 528 56 15 _tc_guard_:1011 624 56 11 result:1023 720 392 7 ss:1032 1184 544 10 query:1018";
  *(_QWORD *)(v3 + 16) = MysqlOpMisc::deleteGameplayRecommendationConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556927;
  v5[536862723] = 61956;
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
  v5[536862738] = -218959360;
  v5[536862739] = 62194;
  v5[536862741] = -218959360;
  v5[536862742] = 62194;
  v5[536862754] = -234881024;
  v5[536862755] = -218959118;
  v5[536862756] = -218959118;
  v5[536862774] = -202116109;
  v5[536862775] = -202116109;
  v5[536862776] = -202116109;
  v5[536862777] = -202116109;
  std::allocator<char>::allocator(v3 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 272),
    "deleteGameplayRecommendationConfig",
    (const std::allocator<char> *)(v3 + 64));
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 208),
    "MYSQL",
    (const std::allocator<char> *)(v3 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 528),
    (const std::string *)(v3 + 208),
    (const std::string *)(v3 + 272));
  std::string::~string((void *)(v3 + 208));
  *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v3 + 272));
  *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 64);
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
  v6 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
  if ( *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v3 + 112, v6);
  common::midb::MySqlMgrT<std::mutex>::grab(v6, 0x3E9u, 0);
  if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v3 + 112)) )
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
      3u,
      "src/mysql_op_misc.cpp",
      "deleteGameplayRecommendationConfig",
      1015);
    v7 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           (common::milog::MiLogStream *const)(v3 + 336),
           (const char (*)[52])"[MYSQL]ResourceBox::mysql_mgr_ptr->grab failed for ");
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 80);
    *(_DWORD *)(v3 + 80) = 1001;
    common::milog::MiLogStream::operator<<<proto::MysqlIndex,(proto::MysqlIndex*)0>(
      v7,
      (const proto::MysqlIndex *)(v3 + 80));
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
    *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
    v8 = -1;
  }
  else
  {
    __asan_unpoison_stack_memory(v3 + 1184, 544LL);
    v9 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
    if ( *(char *)(((v3 + 1184) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1727) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 1727) >> 3) + 0x7FFF8000) )
    {
      v9 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v3 + 1184, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 1184), v9, byte_1A80D1E0);
    v10 = std::operator<<<std::char_traits<char>>(v3 + 1184, "delete from t_gameplay_recommendation_config");
    v11 = (std::ostream *)std::operator<<<std::char_traits<char>>(v10, " where begin_time=");
    ostr = mysqlpp::operator<<(v11, quote).ostr;
    v13 = ((v3 + 144) >> 3) + 2147450880;
    *(_WORD *)v13 = 0;
    *(_BYTE *)(v13 + 2) = 0;
    mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v3 + 144, begin_time_str, 0LL);
    mysqlpp::operator<<(ostr, (mysqlpp::SQLTypeAdapter *)(v3 + 144));
    mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v3 + 144));
    v14 = ((v3 + 144) >> 3) + 2147450880;
    *(_WORD *)v14 = -1800;
    *(_BYTE *)(v14 + 2) = -8;
    v15 = ((v3 + 624) >> 3) + 2147450880;
    *(_DWORD *)v15 = 0;
    *(_WORD *)(v15 + 4) = 0;
    *(_BYTE *)(v15 + 6) = 0;
    if ( *(char *)(((v3 + 624) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 679) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 89) & 7) >= *(_BYTE *)(((v3 + 679) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 624, 56LL);
    }
    mysqlpp::Query::execute((mysqlpp::Query *)(v3 + 624));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 1184)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "errnum is not 0");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    v17 = mysqlpp::SimpleResult::rows((const mysqlpp::SimpleResult *const)(v3 + 624));
    if ( *(_BYTE *)(((unsigned __int64)delete_count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)delete_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)delete_count >> 3) + 0x7FFF8000) )
    {
      v17 = (unsigned int)delete_count;
      __asan_report_store4(delete_count);
    }
    *delete_count = v17;
    mysqlpp::SimpleResult::~SimpleResult((mysqlpp::SimpleResult *const)(v3 + 624));
    v18 = ((v3 + 624) >> 3) + 2147450880;
    *(_DWORD *)v18 = -117901064;
    *(_WORD *)(v18 + 4) = -1800;
    *(_BYTE *)(v18 + 6) = -8;
    v8 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 1184));
  }
  std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v3 + 112));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 528));
  if ( v21 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF808C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862740) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450952 - (((_DWORD)v5 + 2147450960) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF80D8) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80E0) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1856LL, v21);
  }
  return v8;
};

// Line 1039: range 000000000D48ADD6-000000000D48ADEA
void __cdecl GLOBAL__sub_I_mysql_op_misc_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 1039: range 000000000D48AC35-000000000D48ADD5
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  const std::_V2::error_category *v2; // rax
  const std::_V2::error_category *v3; // rax
  const std::_V2::error_category *v4; // rax
  const std::_V2::error_category *v5; // rax
  const std::_V2::error_category *v6; // rax
  _BYTE *v7; // rcx
  _BYTE *v8; // rcx
  const char *v9; // rcx

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/mysql_op_misc.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      v2 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_span_context_error, 1, v2);
      v3 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_span_context_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_carrier_error, 2, v3);
      v4 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_carrier_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::span_context_corrupted_error, 3, v4);
      v5 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::span_context_corrupted_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::key_not_found_error, 4, v5);
      v6 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::key_not_found_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::lookup_key_not_supported_error, 5, v6);
      v7 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
      }
      if ( !*v7 )
      {
        v8 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
        }
        *v8 = 1;
        v9 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8();
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = v9;
      }
    }
    __asan_after_dynamic_init();
  }
};
