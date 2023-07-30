// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_stop_server_login_white_ip_config_mgr.cpp

// Line 20: range 000000000CF22450-000000000CF226DA
// local variable allocation has failed, the output may be wrong!
void __cdecl data::populate_t_stop_server_login_white_ip_config<(mysqlpp::sql_dummy_type)0>(
        data::t_stop_server_login_white_ip_config *s,
        const mysqlpp::Row *row)
{
  unsigned __int64 p_anon_0; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const mysqlpp::String *v5; // r14
  std::string rowa; // [rsp+0h] [rbp-100h] OVERLAPPED BYREF

  rowa._M_string_length = (std::string::size_type)s;
  rowa._M_dataplus._M_p = (std::string::pointer)row;
  p_anon_0 = (unsigned __int64)&rowa._anon_0;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      p_anon_0 = v3;
  }
  *(_QWORD *)p_anon_0 = 1102416563LL;
  *(_QWORD *)(p_anon_0 + 8) = "3 32 16 27 ignore_schema_mismatches:20 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(p_anon_0 + 16) = data::populate_t_stop_server_login_white_ip_config<(mysqlpp::sql_dummy_type)0>;
  v4 = (_DWORD *)(p_anon_0 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  mysqlpp::NoExceptions::NoExceptions(
    (mysqlpp::NoExceptions *const)(p_anon_0 + 32),
    (const mysqlpp::OptionalExceptions *)rowa._M_dataplus._M_p);
  v5 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  std::string::basic_string(p_anon_0 + 64);
  if ( *(char *)(((p_anon_0 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 159) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 159) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 128, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 128), v5, rowa);
  std::string::operator=(rowa._M_string_length, p_anon_0 + 128);
  std::string::~string((void *)(p_anon_0 + 128));
  *(_DWORD *)(((p_anon_0 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 64));
  *(_DWORD *)(((p_anon_0 + 64) >> 3) + 0x7FFF8000) = -117901064;
  mysqlpp::NoExceptions::~NoExceptions((mysqlpp::NoExceptions *const)(p_anon_0 + 32));
  if ( &rowa._anon_0 == (std::string::$CFBEC286C7F52157F7E59FC354047095 *)p_anon_0 )
  {
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)p_anon_0 = 1172321806LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 20: range 000000000CE473CE-000000000CE47453
void __cdecl data::t_stop_server_login_white_ip_config::t_stop_server_login_white_ip_config(
        data::t_stop_server_login_white_ip_config *const this,
        const mysqlpp::Row *row)
{
  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  data::populate_t_stop_server_login_white_ip_config<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 20: range 000000000D3C4F5E-000000000D3C4FDD
void __cdecl data::t_stop_server_login_white_ip_config::t_stop_server_login_white_ip_config(
        data::t_stop_server_login_white_ip_config *const this,
        data::t_stop_server_login_white_ip_config *a2)
{
  const char *table_override; // rdx

  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 20: range 000000000D100872-000000000D10088C
void __cdecl data::t_stop_server_login_white_ip_config::~t_stop_server_login_white_ip_config(
        data::t_stop_server_login_white_ip_config *const this)
{
  std::string::~string(this);
};

// Line 23: range 000000000CDC3ED2-000000000CDC489D
bool __cdecl data::DbStopServerLoginWhiteIpConfigMgr::isIpInWhiteList(
        const data::DbStopServerLoginWhiteIpConfigMgr *const this,
        const std::string *ip_str)
{
  bool v2; // r14
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  int v16; // edx
  bool result; // al
  const DbIpConfig *ip_config; // [rsp+18h] [rbp-218h]
  char v19[528]; // [rsp+20h] [rbp-210h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(480LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 8 12 input_net:26 64 8 14 __for_begin:38 96 8 12 __for_end:38 128 16 5 ec:25 160 32 11 inpu"
                        "t_ip:24 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = data::DbStopServerLoginWhiteIpConfigMgr::isIpInWhiteList;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -202116109;
  if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 160, 32LL);
  }
  std::operator+<char>((std::string *)(v3 + 160), ip_str, "/32");
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 128);
  *(_DWORD *)(v3 + 128) = 0;
  if ( *(_BYTE *)(((v3 + 132) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 124) & 7) >= *(_BYTE *)(((v3 + 132) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(v3 + 132);
  }
  *(_BYTE *)(v3 + 132) = 0;
  if ( *(_BYTE *)(((v3 + 136) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v3 + 136) = &boost::system::detail::cat_holder<void>::system_category_instance;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  boost::asio::ip::make_network_v4((const std::string *)(v3 + 32), (boost::system::error_code *)(v3 + 160));
  if ( boost::system::error_code::operator bool((const boost::system::error_code *const)(v3 + 128)) )
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
      1u,
      "./src/db_data_manual/db_stop_server_login_white_ip_config_mgr.cpp",
      "isIpInWhiteList",
      29);
    v6 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(
           (common::milog::MiLogStream *const)(v3 + 224),
           (const char (*)[4])"ip:");
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v3 + 160));
    v8 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           v7,
           (const char (*)[28])" make_network_v4 fails, ec:");
    if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 32 + 95) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 288, 32LL);
    }
    boost::system::error_code::message[abi:cxx11](
      (std::string *)(v3 + 288),
      (const boost::system::error_code *const)(v3 + 128));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v3 + 288));
    std::string::~string((void *)(v3 + 288));
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v2 = 0;
  }
  else if ( !boost::asio::ip::network_v4::is_host((const boost::asio::ip::network_v4 *const)(v3 + 32)) )
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
      "./src/db_data_manual/db_stop_server_login_white_ip_config_mgr.cpp",
      "isIpInWhiteList",
      34);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 352),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v10 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v9, (const char (*)[4])"ip:");
    v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)(v3 + 160));
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v11, (const char (*)[15])" is_host false");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
    *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
    v2 = 0;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<DbIpConfig>::const_iterator *)(v3 + 64) = std::vector<DbIpConfig>::begin(&this->ip_config_vec_);
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<DbIpConfig>::const_iterator *)(v3 + 96) = std::vector<DbIpConfig>::end(&this->ip_config_vec_);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<DbIpConfig const*,std::vector<DbIpConfig>>(
              (const __gnu_cxx::__normal_iterator<const DbIpConfig*,std::vector<DbIpConfig> > *)(v3 + 64),
              (const __gnu_cxx::__normal_iterator<const DbIpConfig*,std::vector<DbIpConfig> > *)(v3 + 96)) )
      {
        v16 = 1;
        goto LABEL_40;
      }
      ip_config = __gnu_cxx::__normal_iterator<DbIpConfig const*,std::vector<DbIpConfig>>::operator*((const __gnu_cxx::__normal_iterator<const DbIpConfig*,std::vector<DbIpConfig> > *const)(v3 + 64));
      if ( boost::asio::ip::network_v4::is_subnet_of(
             (const boost::asio::ip::network_v4 *const)(v3 + 32),
             &ip_config->ip_net)
        || boost::asio::ip::operator==((const boost::asio::ip::network_v4 *)(v3 + 32), &ip_config->ip_net) )
      {
        break;
      }
      __gnu_cxx::__normal_iterator<DbIpConfig const*,std::vector<DbIpConfig>>::operator++((__gnu_cxx::__normal_iterator<const DbIpConfig*,std::vector<DbIpConfig> > *const)(v3 + 64));
    }
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
      "./src/db_data_manual/db_stop_server_login_white_ip_config_mgr.cpp",
      "isIpInWhiteList",
      43);
    v13 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
            (common::milog::MiLogStream *const)(v3 + 416),
            (const char (*)[10])"input_ip:");
    v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, ip_str);
    v15 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v14,
            (const char (*)[20])" match db white ip:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, &ip_config->db_ip_str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
    *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
    v2 = 1;
    v16 = 0;
LABEL_40:
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v16 == 1 )
      v2 = 0;
  }
  std::string::~string((void *)(v3 + 160));
  result = v2;
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
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
  return result;
};

// Line 51: range 000000000CDC489E-000000000CDC5602
int32_t __cdecl data::DbStopServerLoginWhiteIpConfigMgr::loadStopServerLoginWhiteIpConfig(
        data::DbStopServerLoginWhiteIpConfigMgr *const this,
        common::midb::MysqlConnPtr *conn_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  mysqlpp::Connection *v6; // rsi
  std::logic_error *exception; // rdi
  unsigned __int64 v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  int v11; // r15d
  unsigned __int64 v12; // rax
  int v13; // edx
  int v14; // r15d
  common::milog::MiLogStream *v15; // r15
  std::vector<data::t_stop_server_login_white_ip_config>::size_type v16; // rax
  common::milog::MiLogStream *v17; // rax
  unsigned __int64 v18; // rax
  std::vector<data::t_stop_server_login_white_ip_config> *__for_range; // [rsp+28h] [rbp-528h]
  const data::t_stop_server_login_white_ip_config *row; // [rsp+30h] [rbp-520h]
  char v22[1296]; // [rsp+40h] [rbp-510h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1248LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 48 8 14 __for_begin:69 80 8 12 __for_end:69 112 8 9 <unknown> 144 8 9 <unknown> 176 24 10 row"
                        "_vec:62 240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 40 12 ip"
                        "_config:71 576 544 8 query:58";
  *(_QWORD *)(v3 + 16) = data::DbStopServerLoginWhiteIpConfigMgr::loadStopServerLoginWhiteIpConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862724] = -234881024;
  v5[536862725] = 62194;
  v5[536862726] = -218959360;
  v5[536862727] = 62194;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862730] = -219021312;
  v5[536862731] = 62194;
  v5[536862732] = -219021312;
  v5[536862733] = 62194;
  v5[536862734] = -219021312;
  v5[536862735] = 62194;
  v5[536862736] = -234881024;
  v5[536862737] = -218959118;
  v5[536862755] = -202116109;
  v5[536862756] = -202116109;
  v5[536862757] = -202116109;
  v5[536862758] = -202116109;
  if ( std::operator==<mysqlpp::Connection>(0LL, conn_ptr) )
  {
    if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 32 + 47) & 7) >= *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 240, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 240),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/db_data_manual/db_stop_server_login_white_ip_config_mgr.cpp",
      "loadStopServerLoginWhiteIpConfig",
      54);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 240), "grab connect failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 240));
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
    mysqlpp::Connection::query(
      (mysqlpp::Query *)(v3 + 576),
      v6,
      "select `ip` from t_stop_server_login_white_ip_config ");
    std::vector<DbIpConfig>::clear(&this->ip_config_vec_);
    std::vector<data::t_stop_server_login_white_ip_config>::vector((std::vector<data::t_stop_server_login_white_ip_config> *const)(v3 + 176));
    mysqlpp::Query::storein<std::vector<data::t_stop_server_login_white_ip_config>>(
      (mysqlpp::Query *const)(v3 + 576),
      (std::vector<data::t_stop_server_login_white_ip_config> *)(v3 + 176));
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
    __for_range = (std::vector<data::t_stop_server_login_white_ip_config> *)(v3 + 176);
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::t_stop_server_login_white_ip_config>::iterator *)(v3 + 48) = std::vector<data::t_stop_server_login_white_ip_config>::begin(__for_range);
    if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::t_stop_server_login_white_ip_config>::iterator *)(v3 + 80) = std::vector<data::t_stop_server_login_white_ip_config>::end(__for_range);
    while ( __gnu_cxx::operator!=<data::t_stop_server_login_white_ip_config *,std::vector<data::t_stop_server_login_white_ip_config>>(
              (const __gnu_cxx::__normal_iterator<data::t_stop_server_login_white_ip_config*,std::vector<data::t_stop_server_login_white_ip_config> > *)(v3 + 48),
              (const __gnu_cxx::__normal_iterator<data::t_stop_server_login_white_ip_config*,std::vector<data::t_stop_server_login_white_ip_config> > *)(v3 + 80)) )
    {
      row = __gnu_cxx::__normal_iterator<data::t_stop_server_login_white_ip_config *,std::vector<data::t_stop_server_login_white_ip_config>>::operator*((const __gnu_cxx::__normal_iterator<data::t_stop_server_login_white_ip_config*,std::vector<data::t_stop_server_login_white_ip_config> > *const)(v3 + 48));
      v8 = ((v3 + 496) >> 3) + 2147450880;
      *(_DWORD *)v8 = 0;
      *(_BYTE *)(v8 + 4) = 0;
      DbIpConfig::DbIpConfig((DbIpConfig *const)(v3 + 496));
      if ( DbIpConfig::parseFrom((DbIpConfig *const)(v3 + 496), &row->ip) )
      {
        *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 304) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 32 + 111) & 7) >= *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 304, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 304),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_stop_server_login_white_ip_config_mgr.cpp",
          "loadStopServerLoginWhiteIpConfig",
          74);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 304),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v9,
                (const char (*)[18])"ip format error: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &row->ip);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
        *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v11 = 0;
      }
      else
      {
        std::vector<DbIpConfig>::push_back(
          &this->ip_config_vec_,
          (const std::vector<DbIpConfig>::value_type *)(v3 + 496));
        v11 = 1;
      }
      DbIpConfig::~DbIpConfig((DbIpConfig *const)(v3 + 496));
      v12 = ((v3 + 496) >> 3) + 2147450880;
      *(_DWORD *)v12 = -117901064;
      *(_BYTE *)(v12 + 4) = -8;
      if ( v11 != 1 )
      {
        v13 = 0;
        goto LABEL_27;
      }
      __gnu_cxx::__normal_iterator<data::t_stop_server_login_white_ip_config *,std::vector<data::t_stop_server_login_white_ip_config>>::operator++((__gnu_cxx::__normal_iterator<data::t_stop_server_login_white_ip_config*,std::vector<data::t_stop_server_login_white_ip_config> > *const)(v3 + 48));
    }
    v13 = 1;
LABEL_27:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    if ( v13 == 1 )
    {
      *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 368) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 368, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 368),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/db_data_manual/db_stop_server_login_white_ip_config_mgr.cpp",
        "loadStopServerLoginWhiteIpConfig",
        79);
      v15 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              (common::milog::MiLogStream *const)(v3 + 368),
              (const char (*)[42])"t_stop_server_login_white_ip_config load ");
      *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
      v16 = std::vector<data::t_stop_server_login_white_ip_config>::size((const std::vector<data::t_stop_server_login_white_ip_config> *const)(v3 + 176));
      if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)(v3 + 112) = v16;
      v17 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v15,
              (const unsigned __int64 *)(v3 + 112));
      common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v17, (const char (*)[5])" ips");
      *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 368));
      *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = -117901064;
      v14 = 1;
    }
    else
    {
      v14 = 0;
    }
    std::vector<data::t_stop_server_login_white_ip_config>::~vector((std::vector<data::t_stop_server_login_white_ip_config> *const)(v3 + 176));
    v18 = ((v3 + 176) >> 3) + 2147450880;
    *(_WORD *)v18 = -1800;
    *(_BYTE *)(v18 + 2) = -8;
    if ( v14 == 1 )
      v2 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 576));
  }
  if ( v22 == (char *)v3 )
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF808C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8094) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1248LL, v22);
  }
  return v2;
};

// Line 89: range 000000000CDF89A3-000000000CDF89B7
void __cdecl GLOBAL__sub_I_merge_merge_RewardExcelConfig_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 89: range 000000000CDF4BD6-000000000CDF892D
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const boost::system::error_category *system_category; // rax
  const boost::system::error_category *netdb_category; // rax
  const boost::system::error_category *addrinfo_category; // rax
  const boost::system::error_category *misc_category; // rax
  unsigned __int64 v9; // rax
  _BYTE *v10; // rcx
  _BYTE *v11; // rcx
  luabind::detail::class_id class_id; // rax
  _BYTE *v13; // rcx
  _BYTE *v14; // rcx
  luabind::detail::class_id v15; // rax
  _BYTE *v16; // rcx
  _BYTE *v17; // rcx
  luabind::detail::class_id v18; // rax
  _BYTE *v19; // rcx
  _BYTE *v20; // rcx
  luabind::detail::class_id v21; // rax
  _BYTE *v22; // rcx
  _BYTE *v23; // rcx
  luabind::detail::class_id v24; // rax
  _BYTE *v25; // rcx
  _BYTE *v26; // rcx
  luabind::detail::class_id v27; // rax
  _BYTE *v28; // rcx
  _BYTE *v29; // rcx
  luabind::detail::class_id v30; // rax
  _BYTE *v31; // rcx
  _BYTE *v32; // rcx
  luabind::detail::class_id v33; // rax
  _BYTE *v34; // rcx
  _BYTE *v35; // rcx
  luabind::detail::class_id v36; // rax
  _BYTE *v37; // rcx
  _BYTE *v38; // rcx
  luabind::detail::class_id v39; // rax
  _BYTE *v40; // rcx
  _BYTE *v41; // rcx
  luabind::detail::class_id v42; // rax
  _BYTE *v43; // rcx
  _BYTE *v44; // rcx
  luabind::detail::class_id v45; // rax
  _BYTE *v46; // rcx
  _BYTE *v47; // rcx
  luabind::detail::class_id v48; // rax
  _BYTE *v49; // rcx
  _BYTE *v50; // rcx
  luabind::detail::class_id v51; // rax
  _BYTE *v52; // rcx
  _BYTE *v53; // rcx
  luabind::detail::class_id v54; // rax
  _BYTE *v55; // rcx
  _BYTE *v56; // rcx
  luabind::detail::class_id v57; // rax
  _BYTE *v58; // rcx
  _BYTE *v59; // rcx
  luabind::detail::class_id v60; // rax
  _BYTE *v61; // rcx
  _BYTE *v62; // rcx
  luabind::detail::class_id v63; // rax
  _BYTE *v64; // rcx
  _BYTE *v65; // rcx
  luabind::detail::class_id v66; // rax
  _BYTE *v67; // rcx
  _BYTE *v68; // rcx
  luabind::detail::class_id v69; // rax
  _BYTE *v70; // rcx
  _BYTE *v71; // rcx
  luabind::detail::class_id v72; // rax
  _BYTE *v73; // rcx
  _BYTE *v74; // rcx
  luabind::detail::class_id v75; // rax
  _BYTE *v76; // rcx
  _BYTE *v77; // rcx
  luabind::detail::class_id v78; // rax
  _BYTE *v79; // rcx
  _BYTE *v80; // rcx
  luabind::detail::class_id v81; // rax
  _BYTE *v82; // rcx
  _BYTE *v83; // rcx
  luabind::detail::class_id v84; // rax
  _BYTE *v85; // rcx
  _BYTE *v86; // rcx
  luabind::detail::class_id v87; // rax
  _BYTE *v88; // rcx
  _BYTE *v89; // rcx
  luabind::detail::class_id v90; // rax
  _BYTE *v91; // rcx
  _BYTE *v92; // rcx
  luabind::detail::class_id v93; // rax
  _BYTE *v94; // rcx
  _BYTE *v95; // rcx
  luabind::detail::class_id v96; // rax
  _BYTE *v97; // rcx
  _BYTE *v98; // rcx
  luabind::detail::class_id v99; // rax
  _BYTE *v100; // rcx
  _BYTE *v101; // rcx
  luabind::detail::class_id v102; // rax
  _BYTE *v103; // rcx
  _BYTE *v104; // rcx
  luabind::detail::class_id v105; // rax
  _BYTE *v106; // rcx
  _BYTE *v107; // rcx
  luabind::detail::class_id v108; // rax
  _BYTE *v109; // rcx
  _BYTE *v110; // rcx
  luabind::detail::class_id v111; // rax
  _BYTE *v112; // rcx
  _BYTE *v113; // rcx
  luabind::detail::class_id v114; // rax
  _BYTE *v115; // rcx
  _BYTE *v116; // rcx
  luabind::detail::class_id v117; // rax
  _BYTE *v118; // rcx
  _BYTE *v119; // rcx
  luabind::detail::class_id v120; // rax
  _BYTE *v121; // rcx
  _BYTE *v122; // rcx
  luabind::detail::class_id v123; // rax
  _BYTE *v124; // rcx
  _BYTE *v125; // rcx
  luabind::detail::class_id v126; // rax
  _BYTE *v127; // rcx
  _BYTE *v128; // rcx
  luabind::detail::class_id v129; // rax
  _BYTE *v130; // rcx
  _BYTE *v131; // rcx
  luabind::detail::class_id v132; // rax
  _BYTE *v133; // rcx
  _BYTE *v134; // rcx
  const char *v135; // rcx
  char v136[1648]; // [rsp+10h] [rbp-670h] BYREF

  v2 = (unsigned __int64)v136;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1600LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "51 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 8 9 <unknown> 208 8 9 <unkno"
                        "wn> 240 8 9 <unknown> 272 8 9 <unknown> 304 8 9 <unknown> 336 8 9 <unknown> 368 8 9 <unknown> 40"
                        "0 8 9 <unknown> 432 8 9 <unknown> 464 8 9 <unknown> 496 8 9 <unknown> 528 8 9 <unknown> 560 8 9 "
                        "<unknown> 592 8 9 <unknown> 624 8 9 <unknown> 656 8 9 <unknown> 688 8 9 <unknown> 720 8 9 <unkno"
                        "wn> 752 8 9 <unknown> 784 8 9 <unknown> 816 8 9 <unknown> 848 8 9 <unknown> 880 8 9 <unknown> 91"
                        "2 8 9 <unknown> 944 8 9 <unknown> 976 8 9 <unknown> 1008 8 9 <unknown> 1040 8 9 <unknown> 1072 8"
                        " 9 <unknown> 1104 8 9 <unknown> 1136 8 9 <unknown> 1168 8 9 <unknown> 1200 8 9 <unknown> 1232 8 "
                        "9 <unknown> 1264 8 9 <unknown> 1296 8 9 <unknown> 1328 8 9 <unknown> 1360 8 9 <unknown> 1392 8 9"
                        " <unknown> 1424 8 9 <unknown> 1456 8 9 <unknown> 1488 80 9 <unknown>";
  *(_QWORD *)(v2 + 16) = __static_initialization_and_destruction_0;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234753535;
  v4[536862725] = 61953;
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
  v4[536862730] = -234881024;
  v4[536862731] = 62194;
  v4[536862731] = -234881024;
  v4[536862732] = 62194;
  v4[536862732] = -234881024;
  v4[536862733] = 62194;
  v4[536862733] = -234881024;
  v4[536862734] = 62194;
  v4[536862734] = -234881024;
  v4[536862735] = 62194;
  v4[536862735] = -234881024;
  v4[536862736] = 62194;
  v4[536862736] = -234881024;
  v4[536862737] = 62194;
  v4[536862737] = -234881024;
  v4[536862738] = 62194;
  v4[536862738] = -234881024;
  v4[536862739] = 62194;
  v4[536862739] = -234881024;
  v4[536862740] = 62194;
  v4[536862740] = -234881024;
  v4[536862741] = 62194;
  v4[536862741] = -234881024;
  v4[536862742] = 62194;
  v4[536862742] = -234881024;
  v4[536862743] = 62194;
  v4[536862743] = -234881024;
  v4[536862744] = 62194;
  v4[536862744] = -234881024;
  v4[536862745] = 62194;
  v4[536862745] = -234881024;
  v4[536862746] = 62194;
  v4[536862746] = -234881024;
  v4[536862747] = 62194;
  v4[536862747] = -234881024;
  v4[536862748] = 62194;
  v4[536862748] = -234881024;
  v4[536862749] = 62194;
  v4[536862749] = -234881024;
  v4[536862750] = 62194;
  v4[536862750] = -234881024;
  v4[536862751] = 62194;
  v4[536862751] = -234881024;
  v4[536862752] = 62194;
  v4[536862752] = -234881024;
  v4[536862753] = 62194;
  v4[536862753] = -234881024;
  v4[536862754] = 62194;
  v4[536862754] = -234881024;
  v4[536862755] = 62194;
  v4[536862755] = -234881024;
  v4[536862756] = 62194;
  v4[536862756] = -234881024;
  v4[536862757] = 62194;
  v4[536862757] = -234881024;
  v4[536862758] = 62194;
  v4[536862758] = -234881024;
  v4[536862759] = 62194;
  v4[536862759] = -234881024;
  v4[536862760] = 62194;
  v4[536862760] = -234881024;
  v4[536862761] = 62194;
  v4[536862761] = -234881024;
  v4[536862762] = 62194;
  v4[536862762] = -234881024;
  v4[536862763] = 62194;
  v4[536862763] = -234881024;
  v4[536862764] = 62194;
  v4[536862764] = -234881024;
  v4[536862765] = 62194;
  v4[536862765] = -234881024;
  v4[536862766] = 62194;
  v4[536862769] = -202116109;
  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_merge_RewardExcelConfig.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      boost::none_t::none_t((boost::none_t *const)&boost::none, (boost::none_t::init_tag)&std::__ioinit);
      boost::optional_ns::in_place_init_t::in_place_init_t(
        (boost::optional_ns::in_place_init_t *const)&boost::optional_ns::in_place_init,
        (boost::optional_ns::in_place_init_t::init_tag)&std::__ioinit);
      boost::optional_ns::in_place_init_if_t::in_place_init_if_t(
        (boost::optional_ns::in_place_init_if_t *const)&boost::optional_ns::in_place_init_if,
        (boost::optional_ns::in_place_init_if_t::init_tag)&std::__ioinit);
      system_category = boost::asio::error::get_system_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::system_category >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      boost::asio::error::system_category = system_category;
      netdb_category = boost::asio::error::get_netdb_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::netdb_category >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      boost::asio::error::netdb_category = netdb_category;
      addrinfo_category = boost::asio::error::get_addrinfo_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::addrinfo_category >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      boost::asio::error::addrinfo_category = addrinfo_category;
      misc_category = boost::asio::error::get_misc_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::misc_category >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      boost::asio::error::misc_category = misc_category;
      std::map<std::string,std::shared_ptr<BTNodeConfigBase>>::map(&BehaviorTreeConfig::register_config_node_map_[abi:cxx11]);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<BTNodeConfigBase>>::~map,
        &BehaviorTreeConfig::register_config_node_map_[abi:cxx11],
        &_dso_handle);
      BehaviorTreeConfig::StaticRegisterConstructor::StaticRegisterConstructor(&staticConstructor);
      if ( *(char *)(((v2 + 1488) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1567) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 48 + 79) & 7) >= *(_BYTE *)(((v2 + 1567) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 1488, 80LL);
      }
      *(_QWORD *)(v2 + 1488) = 0LL;
      *(_QWORD *)(v2 + 1496) = 0LL;
      *(_QWORD *)(v2 + 1504) = 0LL;
      *(_QWORD *)(v2 + 1512) = 0LL;
      *(_QWORD *)(v2 + 1520) = 0LL;
      *(_QWORD *)(v2 + 1528) = 0LL;
      *(_QWORD *)(v2 + 1536) = 0LL;
      *(_QWORD *)(v2 + 1544) = 0LL;
      *(_QWORD *)(v2 + 1552) = 0LL;
      *(_QWORD *)(v2 + 1560) = 0LL;
      if ( *(_BYTE *)(((v2 + 1488) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1488) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1488);
      *(_DWORD *)(v2 + 1488) = 26;
      if ( *(_BYTE *)(((v2 + 1492) >> 3) + 0x7FFF8000) != 0
        && (char)(((v2 - 48 + 4) & 7) + 3) >= *(_BYTE *)(((v2 + 1492) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v2 + 1492);
      }
      *(_DWORD *)(v2 + 1492) = 3;
      if ( *(_BYTE *)(((v2 + 1496) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1496) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1496);
      *(_DWORD *)(v2 + 1496) = 41;
      if ( *(_BYTE *)(((v2 + 1500) >> 3) + 0x7FFF8000) != 0
        && (char)(((v2 - 48 + 12) & 7) + 3) >= *(_BYTE *)(((v2 + 1500) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v2 + 1500);
      }
      *(_DWORD *)(v2 + 1500) = 4;
      if ( *(_BYTE *)(((v2 + 1504) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1504) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1504);
      *(_DWORD *)(v2 + 1504) = 44;
      if ( *(_BYTE *)(((v2 + 1508) >> 3) + 0x7FFF8000) != 0
        && (char)(((v2 - 48 + 20) & 7) + 3) >= *(_BYTE *)(((v2 + 1508) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v2 + 1508);
      }
      *(_DWORD *)(v2 + 1508) = 6;
      if ( *(_BYTE *)(((v2 + 1512) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1512) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1512);
      *(_DWORD *)(v2 + 1512) = 45;
      if ( *(_BYTE *)(((v2 + 1516) >> 3) + 0x7FFF8000) != 0
        && (char)(((v2 - 48 + 28) & 7) + 3) >= *(_BYTE *)(((v2 + 1516) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v2 + 1516);
      }
      *(_DWORD *)(v2 + 1516) = 7;
      if ( *(_BYTE *)(((v2 + 1520) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1520) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1520);
      *(_DWORD *)(v2 + 1520) = 47;
      if ( *(_BYTE *)(((v2 + 1524) >> 3) + 0x7FFF8000) != 0
        && (char)(((v2 - 48 + 36) & 7) + 3) >= *(_BYTE *)(((v2 + 1524) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v2 + 1524);
      }
      *(_DWORD *)(v2 + 1524) = 8;
      if ( *(_BYTE *)(((v2 + 1528) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1528) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1528);
      *(_DWORD *)(v2 + 1528) = 51;
      if ( *(_BYTE *)(((v2 + 1532) >> 3) + 0x7FFF8000) != 0
        && (char)(((v2 - 48 + 44) & 7) + 3) >= *(_BYTE *)(((v2 + 1532) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v2 + 1532);
      }
      *(_DWORD *)(v2 + 1532) = 9;
      if ( *(_BYTE *)(((v2 + 1536) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1536) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1536);
      *(_DWORD *)(v2 + 1536) = 52;
      if ( *(_BYTE *)(((v2 + 1540) >> 3) + 0x7FFF8000) != 0
        && (char)(((v2 - 48 + 52) & 7) + 3) >= *(_BYTE *)(((v2 + 1540) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v2 + 1540);
      }
      *(_DWORD *)(v2 + 1540) = 10;
      if ( *(_BYTE *)(((v2 + 1544) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1544) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1544);
      *(_DWORD *)(v2 + 1544) = 56;
      if ( *(_BYTE *)(((v2 + 1548) >> 3) + 0x7FFF8000) != 0
        && (char)(((v2 - 48 + 60) & 7) + 3) >= *(_BYTE *)(((v2 + 1548) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v2 + 1548);
      }
      *(_DWORD *)(v2 + 1548) = 11;
      if ( *(_BYTE *)(((v2 + 1552) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1552) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1552);
      *(_DWORD *)(v2 + 1552) = 34;
      if ( *(_BYTE *)(((v2 + 1556) >> 3) + 0x7FFF8000) != 0
        && (char)(((v2 - 48 + 68) & 7) + 3) >= *(_BYTE *)(((v2 + 1556) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v2 + 1556);
      }
      *(_DWORD *)(v2 + 1556) = 13;
      if ( *(_BYTE *)(((v2 + 1560) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1560) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1560);
      *(_DWORD *)(v2 + 1560) = 38;
      if ( *(_BYTE *)(((v2 + 1564) >> 3) + 0x7FFF8000) != 0
        && (char)(((v2 - 48 + 76) & 7) + 3) >= *(_BYTE *)(((v2 + 1564) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v2 + 1564);
      }
      *(_DWORD *)(v2 + 1564) = 14;
      std::allocator<std::pair<data::EntityType const,proto::InteractType>>::allocator((std::allocator<std::pair<const data::EntityType,proto::InteractType> > *const)(v2 + 48));
      std::map<data::EntityType,proto::InteractType>::map(
        (std::map<data::EntityType,proto::InteractType> *const)&GroupScriptConfig::gadget_interact_type_map,
        (std::initializer_list<std::pair<const data::EntityType,proto::InteractType> >)__PAIR128__(10LL, v2 + 1488),
        (const std::less<data::EntityType> *)(v2 + 32),
        (const std::map<data::EntityType,proto::InteractType>::allocator_type *)(v2 + 48));
      std::allocator<std::pair<data::EntityType const,proto::InteractType>>::~allocator((std::allocator<std::pair<const data::EntityType,proto::InteractType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      v9 = ((v2 + 1488) >> 3) + 2147450880;
      *(_DWORD *)v9 = -117901064;
      *(_DWORD *)(v9 + 4) = -117901064;
      *(_WORD *)(v9 + 8) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<data::EntityType,proto::InteractType>::~map,
        (void *)&GroupScriptConfig::gadget_interact_type_map,
        &_dso_handle);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)&HK4EDesignConfig::data_version_path[abi:cxx11],
        "../data/version.txt",
        (const std::allocator<char> *)(v2 + 64));
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      __cxa_atexit(
        (void (__fastcall *)(void *))&std::string::~string,
        (void *)&HK4EDesignConfig::data_version_path[abi:cxx11],
        &_dso_handle);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)&HK4EDesignConfig::res_version_path[abi:cxx11],
        "../res/version.txt",
        (const std::allocator<char> *)(v2 + 80));
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      __cxa_atexit(
        (void (__fastcall *)(void *))&std::string::~string,
        (void *)&HK4EDesignConfig::res_version_path[abi:cxx11],
        &_dso_handle);
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 96);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)&HK4EDesignConfig::res_path[abi:cxx11],
        "../res",
        (const std::allocator<char> *)(v2 + 96));
      std::allocator<char>::~allocator(v2 + 96);
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      __cxa_atexit(
        (void (__fastcall *)(void *))&std::string::~string,
        (void *)&HK4EDesignConfig::res_path[abi:cxx11],
        &_dso_handle);
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 112);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)&HK4EDesignConfig::lua_base_behind_dir[abi:cxx11],
        "/lua/",
        (const std::allocator<char> *)(v2 + 112));
      std::allocator<char>::~allocator(v2 + 112);
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      __cxa_atexit(
        (void (__fastcall *)(void *))&std::string::~string,
        (void *)&HK4EDesignConfig::lua_base_behind_dir[abi:cxx11],
        &_dso_handle);
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 128);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)&HK4EDesignConfig::data_base_dir[abi:cxx11],
        "../data",
        (const std::allocator<char> *)(v2 + 128));
      std::allocator<char>::~allocator(v2 + 128);
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      __cxa_atexit(
        (void (__fastcall *)(void *))&std::string::~string,
        (void *)&HK4EDesignConfig::data_base_dir[abi:cxx11],
        &_dso_handle);
      Vector3::Vector3(&Vector3::zero, 0.0, 0.0, 0.0);
      Vector3::Vector3(&Vector3::up, 0.0, 1.0, 0.0);
      Vector3::Vector3(&Vector3::down, 0.0, -1.0, 0.0);
      Quaternion::Quaternion(&Quaternion::identity, 0.0, 0.0, 0.0, 1.0);
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 144);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)&LuaScript::LUA_NAMESPACE_WRAPPER_HEAD[abi:cxx11],
        "local _NEW_ENV = {}\nsetmetatable(_NEW_ENV, { __index = _G })\n_ENV = _NEW_ENV\n",
        (const std::allocator<char> *)(v2 + 144));
      std::allocator<char>::~allocator(v2 + 144);
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
      __cxa_atexit(
        (void (__fastcall *)(void *))&std::string::~string,
        (void *)&LuaScript::LUA_NAMESPACE_WRAPPER_HEAD[abi:cxx11],
        &_dso_handle);
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 160);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)&LuaScript::LUA_NAMESPACE_WRAPPER_TAIL[abi:cxx11],
        "\nreturn _NEW_ENV\n",
        (const std::allocator<char> *)(v2 + 160));
      std::allocator<char>::~allocator(v2 + 160);
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      __cxa_atexit(
        (void (__fastcall *)(void *))&std::string::~string,
        (void *)&LuaScript::LUA_NAMESPACE_WRAPPER_TAIL[abi:cxx11],
        &_dso_handle);
      ScriptUtil::ScriptUtil(&ScriptUtil::no_exception_instance, 0);
      ScriptUtil::ScriptUtil(&ScriptUtil::has_exception_instance, 1);
      v10 = &`guard variable for'luabind::detail::registered_class<proto::ProtEntityType>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::ProtEntityType>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::ProtEntityType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::ProtEntityType>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<proto::ProtEntityType>::id);
      }
      if ( !*v10 )
      {
        v11 = &`guard variable for'luabind::detail::registered_class<proto::ProtEntityType>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::ProtEntityType>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::ProtEntityType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::ProtEntityType>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<proto::ProtEntityType>::id);
        }
        *v11 = 1;
        *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
        luabind::type_id::type_id(
          (luabind::type_id *const)(v2 + 176),
          (const std::type_info *)&`typeinfo for'proto::ProtEntityType);
        class_id = luabind::detail::allocate_class_id((const luabind::type_id *)(v2 + 176));
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<proto::ProtEntityType>::id >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8();
        luabind::detail::registered_class<proto::ProtEntityType>::id = class_id;
        *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
      }
      v13 = &`guard variable for'luabind::detail::registered_class<luabind::detail::null_type>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<luabind::detail::null_type>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<luabind::detail::null_type>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<luabind::detail::null_type>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<luabind::detail::null_type>::id);
      }
      if ( !*v13 )
      {
        v14 = &`guard variable for'luabind::detail::registered_class<luabind::detail::null_type>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<luabind::detail::null_type>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<luabind::detail::null_type>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<luabind::detail::null_type>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<luabind::detail::null_type>::id);
        }
        *v14 = 1;
        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
        luabind::type_id::type_id(
          (luabind::type_id *const)(v2 + 208),
          (const std::type_info *)&`typeinfo for'luabind::detail::null_type);
        v15 = luabind::detail::allocate_class_id((const luabind::type_id *)(v2 + 208));
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<luabind::detail::null_type>::id >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8();
        luabind::detail::registered_class<luabind::detail::null_type>::id = v15;
        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
      }
      v16 = &`guard variable for'luabind::detail::registered_class<data::EventType>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::EventType>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::EventType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::EventType>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<data::EventType>::id);
      }
      if ( !*v16 )
      {
        v17 = &`guard variable for'luabind::detail::registered_class<data::EventType>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::EventType>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::EventType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::EventType>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<data::EventType>::id);
        }
        *v17 = 1;
        *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
        luabind::type_id::type_id(
          (luabind::type_id *const)(v2 + 240),
          (const std::type_info *)&`typeinfo for'data::EventType);
        v18 = luabind::detail::allocate_class_id((const luabind::type_id *)(v2 + 240));
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<data::EventType>::id >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        luabind::detail::registered_class<data::EventType>::id = v18;
        *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
      }
      v19 = &`guard variable for'luabind::detail::registered_class<Event>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Event>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Event>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Event>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<Event>::id);
      }
      if ( !*v19 )
      {
        v20 = &`guard variable for'luabind::detail::registered_class<Event>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Event>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Event>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Event>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<Event>::id);
        }
        *v20 = 1;
        *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 0;
        luabind::type_id::type_id((luabind::type_id *const)(v2 + 272), (const std::type_info *)&`typeinfo for'Event);
        v21 = luabind::detail::allocate_class_id((const luabind::type_id *)(v2 + 272));
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<Event>::id >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        luabind::detail::registered_class<Event>::id = v21;
        *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
      }
      v22 = &`guard variable for'luabind::detail::registered_class<data::RegionShape>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::RegionShape>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::RegionShape>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::RegionShape>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<data::RegionShape>::id);
      }
      if ( !*v22 )
      {
        v23 = &`guard variable for'luabind::detail::registered_class<data::RegionShape>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::RegionShape>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::RegionShape>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::RegionShape>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<data::RegionShape>::id);
        }
        *v23 = 1;
        *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
        luabind::type_id::type_id(
          (luabind::type_id *const)(v2 + 304),
          (const std::type_info *)&`typeinfo for'data::RegionShape);
        v24 = luabind::detail::allocate_class_id((const luabind::type_id *)(v2 + 304));
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<data::RegionShape>::id >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        luabind::detail::registered_class<data::RegionShape>::id = v24;
        *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
      }
      v25 = &`guard variable for'luabind::detail::registered_class<data::GadgetState>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::GadgetState>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::GadgetState>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::GadgetState>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<data::GadgetState>::id);
      }
      if ( !*v25 )
      {
        v26 = &`guard variable for'luabind::detail::registered_class<data::GadgetState>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::GadgetState>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::GadgetState>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::GadgetState>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<data::GadgetState>::id);
        }
        *v26 = 1;
        *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 0;
        luabind::type_id::type_id(
          (luabind::type_id *const)(v2 + 336),
          (const std::type_info *)&`typeinfo for'data::GadgetState);
        v27 = luabind::detail::allocate_class_id((const luabind::type_id *)(v2 + 336));
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<data::GadgetState>::id >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        luabind::detail::registered_class<data::GadgetState>::id = v27;
        *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
      }
      v28 = &`guard variable for'luabind::detail::registered_class<data::QuestState>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::QuestState>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::QuestState>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::QuestState>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<data::QuestState>::id);
      }
      if ( !*v28 )
      {
        v29 = &`guard variable for'luabind::detail::registered_class<data::QuestState>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::QuestState>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::QuestState>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::QuestState>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<data::QuestState>::id);
        }
        *v29 = 1;
        *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 0;
        luabind::type_id::type_id(
          (luabind::type_id *const)(v2 + 368),
          (const std::type_info *)&`typeinfo for'data::QuestState);
        v30 = luabind::detail::allocate_class_id((const luabind::type_id *)(v2 + 368));
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<data::QuestState>::id >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        luabind::detail::registered_class<data::QuestState>::id = v30;
        *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
      }
      v31 = &`guard variable for'luabind::detail::registered_class<data::ElementType>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::ElementType>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::ElementType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::ElementType>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<data::ElementType>::id);
      }
      if ( !*v31 )
      {
        v32 = &`guard variable for'luabind::detail::registered_class<data::ElementType>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::ElementType>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::ElementType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::ElementType>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<data::ElementType>::id);
        }
        *v32 = 1;
        *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 0;
        luabind::type_id::type_id(
          (luabind::type_id *const)(v2 + 400),
          (const std::type_info *)&`typeinfo for'data::ElementType);
        v33 = luabind::detail::allocate_class_id((const luabind::type_id *)(v2 + 400));
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<data::ElementType>::id >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        luabind::detail::registered_class<data::ElementType>::id = v33;
        *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
      }
      v34 = &`guard variable for'luabind::detail::registered_class<data::GadgetType>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::GadgetType>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::GadgetType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::GadgetType>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<data::GadgetType>::id);
      }
      if ( !*v34 )
      {
        v35 = &`guard variable for'luabind::detail::registered_class<data::GadgetType>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::GadgetType>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::GadgetType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::GadgetType>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<data::GadgetType>::id);
        }
        *v35 = 1;
        *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = 0;
        luabind::type_id::type_id(
          (luabind::type_id *const)(v2 + 432),
          (const std::type_info *)&`typeinfo for'data::GadgetType);
        v36 = luabind::detail::allocate_class_id((const luabind::type_id *)(v2 + 432));
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<data::GadgetType>::id >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        luabind::detail::registered_class<data::GadgetType>::id = v36;
        *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
      }
      v37 = &`guard variable for'luabind::detail::registered_class<data::FatherChallengeProperty>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::FatherChallengeProperty>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::FatherChallengeProperty>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::FatherChallengeProperty>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<data::FatherChallengeProperty>::id);
      }
      if ( !*v37 )
      {
        v38 = &`guard variable for'luabind::detail::registered_class<data::FatherChallengeProperty>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::FatherChallengeProperty>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::FatherChallengeProperty>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::FatherChallengeProperty>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<data::FatherChallengeProperty>::id);
        }
        *v38 = 1;
        *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = 0;
        luabind::type_id::type_id(
          (luabind::type_id *const)(v2 + 464),
          (const std::type_info *)&`typeinfo for'data::FatherChallengeProperty);
        v39 = luabind::detail::allocate_class_id((const luabind::type_id *)(v2 + 464));
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<data::FatherChallengeProperty>::id >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8();
        luabind::detail::registered_class<data::FatherChallengeProperty>::id = v39;
        *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
      }
      v40 = &`guard variable for'luabind::detail::registered_class<data::GroupKillPolicy>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::GroupKillPolicy>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::GroupKillPolicy>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::GroupKillPolicy>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<data::GroupKillPolicy>::id);
      }
      if ( !*v40 )
      {
        v41 = &`guard variable for'luabind::detail::registered_class<data::GroupKillPolicy>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::GroupKillPolicy>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::GroupKillPolicy>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::GroupKillPolicy>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<data::GroupKillPolicy>::id);
        }
        *v41 = 1;
        *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = 0;
        luabind::type_id::type_id(
          (luabind::type_id *const)(v2 + 496),
          (const std::type_info *)&`typeinfo for'data::GroupKillPolicy);
        v42 = luabind::detail::allocate_class_id((const luabind::type_id *)(v2 + 496));
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<data::GroupKillPolicy>::id >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8();
        luabind::detail::registered_class<data::GroupKillPolicy>::id = v42;
        *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = -8;
      }
      v43 = &`guard variable for'luabind::detail::registered_class<data::StrikeType>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::StrikeType>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::StrikeType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::StrikeType>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<data::StrikeType>::id);
      }
      if ( !*v43 )
      {
        v44 = &`guard variable for'luabind::detail::registered_class<data::StrikeType>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::StrikeType>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::StrikeType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::StrikeType>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<data::StrikeType>::id);
        }
        *v44 = 1;
        *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = 0;
        luabind::type_id::type_id(
          (luabind::type_id *const)(v2 + 528),
          (const std::type_info *)&`typeinfo for'data::StrikeType);
        v45 = luabind::detail::allocate_class_id((const luabind::type_id *)(v2 + 528));
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<data::StrikeType>::id >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        luabind::detail::registered_class<data::StrikeType>::id = v45;
        *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = -8;
      }
      v46 = &`guard variable for'luabind::detail::registered_class<proto::SealBattleType>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::SealBattleType>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::SealBattleType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::SealBattleType>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<proto::SealBattleType>::id);
      }
      if ( !*v46 )
      {
        v47 = &`guard variable for'luabind::detail::registered_class<proto::SealBattleType>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::SealBattleType>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::SealBattleType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::SealBattleType>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<proto::SealBattleType>::id);
        }
        *v47 = 1;
        *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = 0;
        luabind::type_id::type_id(
          (luabind::type_id *const)(v2 + 560),
          (const std::type_info *)&`typeinfo for'proto::SealBattleType);
        v48 = luabind::detail::allocate_class_id((const luabind::type_id *)(v2 + 560));
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<proto::SealBattleType>::id >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8();
        luabind::detail::registered_class<proto::SealBattleType>::id = v48;
        *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = -8;
      }
      v49 = &`guard variable for'luabind::detail::registered_class<proto::GadgetBornType>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::GadgetBornType>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::GadgetBornType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::GadgetBornType>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<proto::GadgetBornType>::id);
      }
      if ( !*v49 )
      {
        v50 = &`guard variable for'luabind::detail::registered_class<proto::GadgetBornType>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::GadgetBornType>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::GadgetBornType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::GadgetBornType>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<proto::GadgetBornType>::id);
        }
        *v50 = 1;
        *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = 0;
        luabind::type_id::type_id(
          (luabind::type_id *const)(v2 + 592),
          (const std::type_info *)&`typeinfo for'proto::GadgetBornType);
        v51 = luabind::detail::allocate_class_id((const luabind::type_id *)(v2 + 592));
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<proto::GadgetBornType>::id >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8();
        luabind::detail::registered_class<proto::GadgetBornType>::id = v51;
        *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = -8;
      }
      v52 = &`guard variable for'luabind::detail::registered_class<data::ClimateType>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::ClimateType>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::ClimateType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::ClimateType>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<data::ClimateType>::id);
      }
      if ( !*v52 )
      {
        v53 = &`guard variable for'luabind::detail::registered_class<data::ClimateType>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::ClimateType>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::ClimateType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::ClimateType>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<data::ClimateType>::id);
        }
        *v53 = 1;
        *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = 0;
        luabind::type_id::type_id(
          (luabind::type_id *const)(v2 + 624),
          (const std::type_info *)&`typeinfo for'data::ClimateType);
        v54 = luabind::detail::allocate_class_id((const luabind::type_id *)(v2 + 624));
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<data::ClimateType>::id >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        luabind::detail::registered_class<data::ClimateType>::id = v54;
        *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = -8;
      }
      v55 = &`guard variable for'luabind::detail::registered_class<proto::MonsterGuestBanDrop>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::MonsterGuestBanDrop>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::MonsterGuestBanDrop>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::MonsterGuestBanDrop>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<proto::MonsterGuestBanDrop>::id);
      }
      if ( !*v55 )
      {
        v56 = &`guard variable for'luabind::detail::registered_class<proto::MonsterGuestBanDrop>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::MonsterGuestBanDrop>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::MonsterGuestBanDrop>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::MonsterGuestBanDrop>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<proto::MonsterGuestBanDrop>::id);
        }
        *v56 = 1;
        *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) = 0;
        luabind::type_id::type_id(
          (luabind::type_id *const)(v2 + 656),
          (const std::type_info *)&`typeinfo for'proto::MonsterGuestBanDrop);
        v57 = luabind::detail::allocate_class_id((const luabind::type_id *)(v2 + 656));
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<proto::MonsterGuestBanDrop>::id >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8();
        luabind::detail::registered_class<proto::MonsterGuestBanDrop>::id = v57;
        *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) = -8;
      }
      v58 = &`guard variable for'luabind::detail::registered_class<proto::GadgetGuestBanDrop>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::GadgetGuestBanDrop>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::GadgetGuestBanDrop>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::GadgetGuestBanDrop>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<proto::GadgetGuestBanDrop>::id);
      }
      if ( !*v58 )
      {
        v59 = &`guard variable for'luabind::detail::registered_class<proto::GadgetGuestBanDrop>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::GadgetGuestBanDrop>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::GadgetGuestBanDrop>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::GadgetGuestBanDrop>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<proto::GadgetGuestBanDrop>::id);
        }
        *v59 = 1;
        *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) = 0;
        luabind::type_id::type_id(
          (luabind::type_id *const)(v2 + 688),
          (const std::type_info *)&`typeinfo for'proto::GadgetGuestBanDrop);
        v60 = luabind::detail::allocate_class_id((const luabind::type_id *)(v2 + 688));
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<proto::GadgetGuestBanDrop>::id >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8();
        luabind::detail::registered_class<proto::GadgetGuestBanDrop>::id = v60;
        *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) = -8;
      }
      v61 = &`guard variable for'luabind::detail::registered_class<data::BlossomRefreshType>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::BlossomRefreshType>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::BlossomRefreshType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::BlossomRefreshType>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<data::BlossomRefreshType>::id);
      }
      if ( !*v61 )
      {
        v62 = &`guard variable for'luabind::detail::registered_class<data::BlossomRefreshType>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::BlossomRefreshType>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::BlossomRefreshType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::BlossomRefreshType>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<data::BlossomRefreshType>::id);
        }
        *v62 = 1;
        *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) = 0;
        luabind::type_id::type_id(
          (luabind::type_id *const)(v2 + 720),
          (const std::type_info *)&`typeinfo for'data::BlossomRefreshType);
        v63 = luabind::detail::allocate_class_id((const luabind::type_id *)(v2 + 720));
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<data::BlossomRefreshType>::id >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8();
        luabind::detail::registered_class<data::BlossomRefreshType>::id = v63;
        *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) = -8;
      }
      v64 = &`guard variable for'luabind::detail::registered_class<proto::BlossomScheduleState>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::BlossomScheduleState>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::BlossomScheduleState>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::BlossomScheduleState>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<proto::BlossomScheduleState>::id);
      }
      if ( !*v64 )
      {
        v65 = &`guard variable for'luabind::detail::registered_class<proto::BlossomScheduleState>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::BlossomScheduleState>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::BlossomScheduleState>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::BlossomScheduleState>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<proto::BlossomScheduleState>::id);
        }
        *v65 = 1;
        *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) = 0;
        luabind::type_id::type_id(
          (luabind::type_id *const)(v2 + 752),
          (const std::type_info *)&`typeinfo for'proto::BlossomScheduleState);
        v66 = luabind::detail::allocate_class_id((const luabind::type_id *)(v2 + 752));
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<proto::BlossomScheduleState>::id >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8();
        luabind::detail::registered_class<proto::BlossomScheduleState>::id = v66;
        *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) = -8;
      }
      v67 = &`guard variable for'luabind::detail::registered_class<proto::GroupLoadStrategy>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::GroupLoadStrategy>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::GroupLoadStrategy>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::GroupLoadStrategy>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<proto::GroupLoadStrategy>::id);
      }
      if ( !*v67 )
      {
        v68 = &`guard variable for'luabind::detail::registered_class<proto::GroupLoadStrategy>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::GroupLoadStrategy>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::GroupLoadStrategy>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::GroupLoadStrategy>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<proto::GroupLoadStrategy>::id);
        }
        *v68 = 1;
        *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) = 0;
        luabind::type_id::type_id(
          (luabind::type_id *const)(v2 + 784),
          (const std::type_info *)&`typeinfo for'proto::GroupLoadStrategy);
        v69 = luabind::detail::allocate_class_id((const luabind::type_id *)(v2 + 784));
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<proto::GroupLoadStrategy>::id >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8();
        luabind::detail::registered_class<proto::GroupLoadStrategy>::id = v69;
        *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) = -8;
      }
      v70 = &`guard variable for'luabind::detail::registered_class<proto::GadgetPlayType>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::GadgetPlayType>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::GadgetPlayType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::GadgetPlayType>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<proto::GadgetPlayType>::id);
      }
      if ( !*v70 )
      {
        v71 = &`guard variable for'luabind::detail::registered_class<proto::GadgetPlayType>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::GadgetPlayType>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::GadgetPlayType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::GadgetPlayType>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<proto::GadgetPlayType>::id);
        }
        *v71 = 1;
        *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) = 0;
        luabind::type_id::type_id(
          (luabind::type_id *const)(v2 + 816),
          (const std::type_info *)&`typeinfo for'proto::GadgetPlayType);
        v72 = luabind::detail::allocate_class_id((const luabind::type_id *)(v2 + 816));
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<proto::GadgetPlayType>::id >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8();
        luabind::detail::registered_class<proto::GadgetPlayType>::id = v72;
        *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) = -8;
      }
      v73 = &`guard variable for'luabind::detail::registered_class<proto::MonsterBornType>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::MonsterBornType>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::MonsterBornType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::MonsterBornType>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<proto::MonsterBornType>::id);
      }
      if ( !*v73 )
      {
        v74 = &`guard variable for'luabind::detail::registered_class<proto::MonsterBornType>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::MonsterBornType>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::MonsterBornType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::MonsterBornType>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<proto::MonsterBornType>::id);
        }
        *v74 = 1;
        *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) = 0;
        luabind::type_id::type_id(
          (luabind::type_id *const)(v2 + 848),
          (const std::type_info *)&`typeinfo for'proto::MonsterBornType);
        v75 = luabind::detail::allocate_class_id((const luabind::type_id *)(v2 + 848));
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<proto::MonsterBornType>::id >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8();
        luabind::detail::registered_class<proto::MonsterBornType>::id = v75;
        *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) = -8;
      }
      v76 = &`guard variable for'luabind::detail::registered_class<proto::ScenePlayBattleState>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::ScenePlayBattleState>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::ScenePlayBattleState>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::ScenePlayBattleState>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<proto::ScenePlayBattleState>::id);
      }
      if ( !*v76 )
      {
        v77 = &`guard variable for'luabind::detail::registered_class<proto::ScenePlayBattleState>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::ScenePlayBattleState>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::ScenePlayBattleState>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::ScenePlayBattleState>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<proto::ScenePlayBattleState>::id);
        }
        *v77 = 1;
        *(_BYTE *)(((v2 + 880) >> 3) + 0x7FFF8000) = 0;
        luabind::type_id::type_id(
          (luabind::type_id *const)(v2 + 880),
          (const std::type_info *)&`typeinfo for'proto::ScenePlayBattleState);
        v78 = luabind::detail::allocate_class_id((const luabind::type_id *)(v2 + 880));
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<proto::ScenePlayBattleState>::id >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8();
        luabind::detail::registered_class<proto::ScenePlayBattleState>::id = v78;
        *(_BYTE *)(((v2 + 880) >> 3) + 0x7FFF8000) = -8;
      }
      v79 = &`guard variable for'luabind::detail::registered_class<data::ChallengeEventMarkType>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::ChallengeEventMarkType>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::ChallengeEventMarkType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::ChallengeEventMarkType>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<data::ChallengeEventMarkType>::id);
      }
      if ( !*v79 )
      {
        v80 = &`guard variable for'luabind::detail::registered_class<data::ChallengeEventMarkType>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::ChallengeEventMarkType>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::ChallengeEventMarkType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::ChallengeEventMarkType>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<data::ChallengeEventMarkType>::id);
        }
        *v80 = 1;
        *(_BYTE *)(((v2 + 912) >> 3) + 0x7FFF8000) = 0;
        luabind::type_id::type_id(
          (luabind::type_id *const)(v2 + 912),
          (const std::type_info *)&`typeinfo for'data::ChallengeEventMarkType);
        v81 = luabind::detail::allocate_class_id((const luabind::type_id *)(v2 + 912));
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<data::ChallengeEventMarkType>::id >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8();
        luabind::detail::registered_class<data::ChallengeEventMarkType>::id = v81;
        *(_BYTE *)(((v2 + 912) >> 3) + 0x7FFF8000) = -8;
      }
      v82 = &`guard variable for'luabind::detail::registered_class<Vector3>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Vector3>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Vector3>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Vector3>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<Vector3>::id);
      }
      if ( !*v82 )
      {
        v83 = &`guard variable for'luabind::detail::registered_class<Vector3>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Vector3>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Vector3>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Vector3>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<Vector3>::id);
        }
        *v83 = 1;
        *(_BYTE *)(((v2 + 944) >> 3) + 0x7FFF8000) = 0;
        luabind::type_id::type_id((luabind::type_id *const)(v2 + 944), (const std::type_info *)&`typeinfo for'Vector3);
        v84 = luabind::detail::allocate_class_id((const luabind::type_id *)(v2 + 944));
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<Vector3>::id >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        luabind::detail::registered_class<Vector3>::id = v84;
        *(_BYTE *)(((v2 + 944) >> 3) + 0x7FFF8000) = -8;
      }
      v85 = &`guard variable for'luabind::detail::registered_class<data::VisionLevelType>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::VisionLevelType>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::VisionLevelType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::VisionLevelType>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<data::VisionLevelType>::id);
      }
      if ( !*v85 )
      {
        v86 = &`guard variable for'luabind::detail::registered_class<data::VisionLevelType>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::VisionLevelType>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::VisionLevelType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::VisionLevelType>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<data::VisionLevelType>::id);
        }
        *v86 = 1;
        *(_BYTE *)(((v2 + 976) >> 3) + 0x7FFF8000) = 0;
        luabind::type_id::type_id(
          (luabind::type_id *const)(v2 + 976),
          (const std::type_info *)&`typeinfo for'data::VisionLevelType);
        v87 = luabind::detail::allocate_class_id((const luabind::type_id *)(v2 + 976));
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<data::VisionLevelType>::id >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8();
        luabind::detail::registered_class<data::VisionLevelType>::id = v87;
        *(_BYTE *)(((v2 + 976) >> 3) + 0x7FFF8000) = -8;
      }
      v88 = &`guard variable for'luabind::detail::registered_class<data::RouteType>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::RouteType>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::RouteType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::RouteType>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<data::RouteType>::id);
      }
      if ( !*v88 )
      {
        v89 = &`guard variable for'luabind::detail::registered_class<data::RouteType>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::RouteType>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::RouteType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::RouteType>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<data::RouteType>::id);
        }
        *v89 = 1;
        *(_BYTE *)(((v2 + 1008) >> 3) + 0x7FFF8000) = 0;
        luabind::type_id::type_id(
          (luabind::type_id *const)(v2 + 1008),
          (const std::type_info *)&`typeinfo for'data::RouteType);
        v90 = luabind::detail::allocate_class_id((const luabind::type_id *)(v2 + 1008));
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<data::RouteType>::id >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        luabind::detail::registered_class<data::RouteType>::id = v90;
        *(_BYTE *)(((v2 + 1008) >> 3) + 0x7FFF8000) = -8;
      }
      v91 = &`guard variable for'luabind::detail::registered_class<data::RouteRecordMode>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::RouteRecordMode>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::RouteRecordMode>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::RouteRecordMode>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<data::RouteRecordMode>::id);
      }
      if ( !*v91 )
      {
        v92 = &`guard variable for'luabind::detail::registered_class<data::RouteRecordMode>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::RouteRecordMode>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::RouteRecordMode>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::RouteRecordMode>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<data::RouteRecordMode>::id);
        }
        *v92 = 1;
        *(_BYTE *)(((v2 + 1040) >> 3) + 0x7FFF8000) = 0;
        luabind::type_id::type_id(
          (luabind::type_id *const)(v2 + 1040),
          (const std::type_info *)&`typeinfo for'data::RouteRecordMode);
        v93 = luabind::detail::allocate_class_id((const luabind::type_id *)(v2 + 1040));
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<data::RouteRecordMode>::id >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8();
        luabind::detail::registered_class<data::RouteRecordMode>::id = v93;
        *(_BYTE *)(((v2 + 1040) >> 3) + 0x7FFF8000) = -8;
      }
      v94 = &`guard variable for'luabind::detail::registered_class<proto::MultistagePlayType>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::MultistagePlayType>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::MultistagePlayType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::MultistagePlayType>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<proto::MultistagePlayType>::id);
      }
      if ( !*v94 )
      {
        v95 = &`guard variable for'luabind::detail::registered_class<proto::MultistagePlayType>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::MultistagePlayType>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::MultistagePlayType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::MultistagePlayType>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<proto::MultistagePlayType>::id);
        }
        *v95 = 1;
        *(_BYTE *)(((v2 + 1072) >> 3) + 0x7FFF8000) = 0;
        luabind::type_id::type_id(
          (luabind::type_id *const)(v2 + 1072),
          (const std::type_info *)&`typeinfo for'proto::MultistagePlayType);
        v96 = luabind::detail::allocate_class_id((const luabind::type_id *)(v2 + 1072));
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<proto::MultistagePlayType>::id >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8();
        luabind::detail::registered_class<proto::MultistagePlayType>::id = v96;
        *(_BYTE *)(((v2 + 1072) >> 3) + 0x7FFF8000) = -8;
      }
      v97 = &`guard variable for'luabind::detail::registered_class<data::MultistageStageType>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::MultistageStageType>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::MultistageStageType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::MultistageStageType>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<data::MultistageStageType>::id);
      }
      if ( !*v97 )
      {
        v98 = &`guard variable for'luabind::detail::registered_class<data::MultistageStageType>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::MultistageStageType>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::MultistageStageType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::MultistageStageType>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<data::MultistageStageType>::id);
        }
        *v98 = 1;
        *(_BYTE *)(((v2 + 1104) >> 3) + 0x7FFF8000) = 0;
        luabind::type_id::type_id(
          (luabind::type_id *const)(v2 + 1104),
          (const std::type_info *)&`typeinfo for'data::MultistageStageType);
        v99 = luabind::detail::allocate_class_id((const luabind::type_id *)(v2 + 1104));
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<data::MultistageStageType>::id >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8();
        luabind::detail::registered_class<data::MultistageStageType>::id = v99;
        *(_BYTE *)(((v2 + 1104) >> 3) + 0x7FFF8000) = -8;
      }
      v100 = &`guard variable for'luabind::detail::registered_class<proto::InBattleMechanicusCardChallengeState>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::InBattleMechanicusCardChallengeState>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::InBattleMechanicusCardChallengeState>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::InBattleMechanicusCardChallengeState>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<proto::InBattleMechanicusCardChallengeState>::id);
      }
      if ( !*v100 )
      {
        v101 = &`guard variable for'luabind::detail::registered_class<proto::InBattleMechanicusCardChallengeState>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::InBattleMechanicusCardChallengeState>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::InBattleMechanicusCardChallengeState>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::InBattleMechanicusCardChallengeState>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<proto::InBattleMechanicusCardChallengeState>::id);
        }
        *v101 = 1;
        *(_BYTE *)(((v2 + 1136) >> 3) + 0x7FFF8000) = 0;
        luabind::type_id::type_id(
          (luabind::type_id *const)(v2 + 1136),
          (const std::type_info *)&`typeinfo for'proto::InBattleMechanicusCardChallengeState);
        v102 = luabind::detail::allocate_class_id((const luabind::type_id *)(v2 + 1136));
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<proto::InBattleMechanicusCardChallengeState>::id >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8();
        luabind::detail::registered_class<proto::InBattleMechanicusCardChallengeState>::id = v102;
        *(_BYTE *)(((v2 + 1136) >> 3) + 0x7FFF8000) = -8;
      }
      v103 = &`guard variable for'luabind::detail::registered_class<data::FlowSuiteOperatePolicy>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::FlowSuiteOperatePolicy>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::FlowSuiteOperatePolicy>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::FlowSuiteOperatePolicy>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<data::FlowSuiteOperatePolicy>::id);
      }
      if ( !*v103 )
      {
        v104 = &`guard variable for'luabind::detail::registered_class<data::FlowSuiteOperatePolicy>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::FlowSuiteOperatePolicy>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::FlowSuiteOperatePolicy>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::FlowSuiteOperatePolicy>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<data::FlowSuiteOperatePolicy>::id);
        }
        *v104 = 1;
        *(_BYTE *)(((v2 + 1168) >> 3) + 0x7FFF8000) = 0;
        luabind::type_id::type_id(
          (luabind::type_id *const)(v2 + 1168),
          (const std::type_info *)&`typeinfo for'data::FlowSuiteOperatePolicy);
        v105 = luabind::detail::allocate_class_id((const luabind::type_id *)(v2 + 1168));
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<data::FlowSuiteOperatePolicy>::id >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8();
        luabind::detail::registered_class<data::FlowSuiteOperatePolicy>::id = v105;
        *(_BYTE *)(((v2 + 1168) >> 3) + 0x7FFF8000) = -8;
      }
      v106 = &`guard variable for'luabind::detail::registered_class<data::CommonPlayerTipsType>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::CommonPlayerTipsType>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::CommonPlayerTipsType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::CommonPlayerTipsType>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<data::CommonPlayerTipsType>::id);
      }
      if ( !*v106 )
      {
        v107 = &`guard variable for'luabind::detail::registered_class<data::CommonPlayerTipsType>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::CommonPlayerTipsType>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::CommonPlayerTipsType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::CommonPlayerTipsType>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<data::CommonPlayerTipsType>::id);
        }
        *v107 = 1;
        *(_BYTE *)(((v2 + 1200) >> 3) + 0x7FFF8000) = 0;
        luabind::type_id::type_id(
          (luabind::type_id *const)(v2 + 1200),
          (const std::type_info *)&`typeinfo for'data::CommonPlayerTipsType);
        v108 = luabind::detail::allocate_class_id((const luabind::type_id *)(v2 + 1200));
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<data::CommonPlayerTipsType>::id >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8();
        luabind::detail::registered_class<data::CommonPlayerTipsType>::id = v108;
        *(_BYTE *)(((v2 + 1200) >> 3) + 0x7FFF8000) = -8;
      }
      v109 = &`guard variable for'luabind::detail::registered_class<proto::GroupVariableType>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::GroupVariableType>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::GroupVariableType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::GroupVariableType>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<proto::GroupVariableType>::id);
      }
      if ( !*v109 )
      {
        v110 = &`guard variable for'luabind::detail::registered_class<proto::GroupVariableType>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::GroupVariableType>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::GroupVariableType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::GroupVariableType>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<proto::GroupVariableType>::id);
        }
        *v110 = 1;
        *(_BYTE *)(((v2 + 1232) >> 3) + 0x7FFF8000) = 0;
        luabind::type_id::type_id(
          (luabind::type_id *const)(v2 + 1232),
          (const std::type_info *)&`typeinfo for'proto::GroupVariableType);
        v111 = luabind::detail::allocate_class_id((const luabind::type_id *)(v2 + 1232));
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<proto::GroupVariableType>::id >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8();
        luabind::detail::registered_class<proto::GroupVariableType>::id = v111;
        *(_BYTE *)(((v2 + 1232) >> 3) + 0x7FFF8000) = -8;
      }
      v112 = &`guard variable for'luabind::detail::registered_class<proto::BeginCameraSceneLookNotify_KeepRotType>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::BeginCameraSceneLookNotify_KeepRotType>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::BeginCameraSceneLookNotify_KeepRotType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::BeginCameraSceneLookNotify_KeepRotType>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<proto::BeginCameraSceneLookNotify_KeepRotType>::id);
      }
      if ( !*v112 )
      {
        v113 = &`guard variable for'luabind::detail::registered_class<proto::BeginCameraSceneLookNotify_KeepRotType>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::BeginCameraSceneLookNotify_KeepRotType>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::BeginCameraSceneLookNotify_KeepRotType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::BeginCameraSceneLookNotify_KeepRotType>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<proto::BeginCameraSceneLookNotify_KeepRotType>::id);
        }
        *v113 = 1;
        *(_BYTE *)(((v2 + 1264) >> 3) + 0x7FFF8000) = 0;
        luabind::type_id::type_id(
          (luabind::type_id *const)(v2 + 1264),
          (const std::type_info *)&`typeinfo for'proto::BeginCameraSceneLookNotify_KeepRotType);
        v114 = luabind::detail::allocate_class_id((const luabind::type_id *)(v2 + 1264));
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<proto::BeginCameraSceneLookNotify_KeepRotType>::id >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8();
        luabind::detail::registered_class<proto::BeginCameraSceneLookNotify_KeepRotType>::id = v114;
        *(_BYTE *)(((v2 + 1264) >> 3) + 0x7FFF8000) = -8;
      }
      v115 = &`guard variable for'luabind::detail::registered_class<data::GalleryProgressScoreUIType>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::GalleryProgressScoreUIType>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::GalleryProgressScoreUIType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::GalleryProgressScoreUIType>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<data::GalleryProgressScoreUIType>::id);
      }
      if ( !*v115 )
      {
        v116 = &`guard variable for'luabind::detail::registered_class<data::GalleryProgressScoreUIType>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::GalleryProgressScoreUIType>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::GalleryProgressScoreUIType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::GalleryProgressScoreUIType>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<data::GalleryProgressScoreUIType>::id);
        }
        *v116 = 1;
        *(_BYTE *)(((v2 + 1296) >> 3) + 0x7FFF8000) = 0;
        luabind::type_id::type_id(
          (luabind::type_id *const)(v2 + 1296),
          (const std::type_info *)&`typeinfo for'data::GalleryProgressScoreUIType);
        v117 = luabind::detail::allocate_class_id((const luabind::type_id *)(v2 + 1296));
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<data::GalleryProgressScoreUIType>::id >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8();
        luabind::detail::registered_class<data::GalleryProgressScoreUIType>::id = v117;
        *(_BYTE *)(((v2 + 1296) >> 3) + 0x7FFF8000) = -8;
      }
      v118 = &`guard variable for'luabind::detail::registered_class<proto::GalleryStopReason>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::GalleryStopReason>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::GalleryStopReason>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::GalleryStopReason>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<proto::GalleryStopReason>::id);
      }
      if ( !*v118 )
      {
        v119 = &`guard variable for'luabind::detail::registered_class<proto::GalleryStopReason>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::GalleryStopReason>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::GalleryStopReason>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::GalleryStopReason>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<proto::GalleryStopReason>::id);
        }
        *v119 = 1;
        *(_BYTE *)(((v2 + 1328) >> 3) + 0x7FFF8000) = 0;
        luabind::type_id::type_id(
          (luabind::type_id *const)(v2 + 1328),
          (const std::type_info *)&`typeinfo for'proto::GalleryStopReason);
        v120 = luabind::detail::allocate_class_id((const luabind::type_id *)(v2 + 1328));
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<proto::GalleryStopReason>::id >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8();
        luabind::detail::registered_class<proto::GalleryStopReason>::id = v120;
        *(_BYTE *)(((v2 + 1328) >> 3) + 0x7FFF8000) = -8;
      }
      v121 = &`guard variable for'luabind::detail::registered_class<data::GalleryProgressScoreType>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::GalleryProgressScoreType>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::GalleryProgressScoreType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::GalleryProgressScoreType>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<data::GalleryProgressScoreType>::id);
      }
      if ( !*v121 )
      {
        v122 = &`guard variable for'luabind::detail::registered_class<data::GalleryProgressScoreType>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::GalleryProgressScoreType>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::GalleryProgressScoreType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::GalleryProgressScoreType>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<data::GalleryProgressScoreType>::id);
        }
        *v122 = 1;
        *(_BYTE *)(((v2 + 1360) >> 3) + 0x7FFF8000) = 0;
        luabind::type_id::type_id(
          (luabind::type_id *const)(v2 + 1360),
          (const std::type_info *)&`typeinfo for'data::GalleryProgressScoreType);
        v123 = luabind::detail::allocate_class_id((const luabind::type_id *)(v2 + 1360));
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<data::GalleryProgressScoreType>::id >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8();
        luabind::detail::registered_class<data::GalleryProgressScoreType>::id = v123;
        *(_BYTE *)(((v2 + 1360) >> 3) + 0x7FFF8000) = -8;
      }
      v124 = &`guard variable for'luabind::detail::registered_class<data::AranaraCollectionType>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::AranaraCollectionType>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::AranaraCollectionType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::AranaraCollectionType>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<data::AranaraCollectionType>::id);
      }
      if ( !*v124 )
      {
        v125 = &`guard variable for'luabind::detail::registered_class<data::AranaraCollectionType>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::AranaraCollectionType>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::AranaraCollectionType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::AranaraCollectionType>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<data::AranaraCollectionType>::id);
        }
        *v125 = 1;
        *(_BYTE *)(((v2 + 1392) >> 3) + 0x7FFF8000) = 0;
        luabind::type_id::type_id(
          (luabind::type_id *const)(v2 + 1392),
          (const std::type_info *)&`typeinfo for'data::AranaraCollectionType);
        v126 = luabind::detail::allocate_class_id((const luabind::type_id *)(v2 + 1392));
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<data::AranaraCollectionType>::id >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8();
        luabind::detail::registered_class<data::AranaraCollectionType>::id = v126;
        *(_BYTE *)(((v2 + 1392) >> 3) + 0x7FFF8000) = -8;
      }
      v127 = &`guard variable for'luabind::detail::registered_class<proto::AranaraCollectionState>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::AranaraCollectionState>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::AranaraCollectionState>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::AranaraCollectionState>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<proto::AranaraCollectionState>::id);
      }
      if ( !*v127 )
      {
        v128 = &`guard variable for'luabind::detail::registered_class<proto::AranaraCollectionState>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::AranaraCollectionState>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::AranaraCollectionState>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<proto::AranaraCollectionState>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<proto::AranaraCollectionState>::id);
        }
        *v128 = 1;
        *(_BYTE *)(((v2 + 1424) >> 3) + 0x7FFF8000) = 0;
        luabind::type_id::type_id(
          (luabind::type_id *const)(v2 + 1424),
          (const std::type_info *)&`typeinfo for'proto::AranaraCollectionState);
        v129 = luabind::detail::allocate_class_id((const luabind::type_id *)(v2 + 1424));
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<proto::AranaraCollectionState>::id >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8();
        luabind::detail::registered_class<proto::AranaraCollectionState>::id = v129;
        *(_BYTE *)(((v2 + 1424) >> 3) + 0x7FFF8000) = -8;
      }
      v130 = &`guard variable for'luabind::detail::registered_class<data::ExhibitionPlayType>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::ExhibitionPlayType>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::ExhibitionPlayType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::ExhibitionPlayType>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<data::ExhibitionPlayType>::id);
      }
      if ( !*v130 )
      {
        v131 = &`guard variable for'luabind::detail::registered_class<data::ExhibitionPlayType>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::ExhibitionPlayType>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::ExhibitionPlayType>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<data::ExhibitionPlayType>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<data::ExhibitionPlayType>::id);
        }
        *v131 = 1;
        *(_BYTE *)(((v2 + 1456) >> 3) + 0x7FFF8000) = 0;
        luabind::type_id::type_id(
          (luabind::type_id *const)(v2 + 1456),
          (const std::type_info *)&`typeinfo for'data::ExhibitionPlayType);
        v132 = luabind::detail::allocate_class_id((const luabind::type_id *)(v2 + 1456));
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<data::ExhibitionPlayType>::id >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8();
        luabind::detail::registered_class<data::ExhibitionPlayType>::id = v132;
        *(_BYTE *)(((v2 + 1456) >> 3) + 0x7FFF8000) = -8;
      }
      v133 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
      }
      if ( !*v133 )
      {
        v134 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
        }
        *v134 = 1;
        v135 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8();
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = v135;
      }
    }
    __asan_after_dynamic_init();
  }
  if ( v136 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80C0) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 200) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1600LL, v136);
  }
};
