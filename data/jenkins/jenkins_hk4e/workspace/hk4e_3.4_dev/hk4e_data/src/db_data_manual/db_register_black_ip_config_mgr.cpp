// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_register_black_ip_config_mgr.cpp

// Line 22: range 000000000CDBCF96-000000000CDBD396
__int64 __fastcall data::RegisterBlackIpConfig::isMatch(
        data::RegisterBlackIpConfig *const this,
        uint32_t client_ip_int)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  uint32_t ip_int; // ecx
  __int64 result; // rax
  char v12[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 16 client_ip_int:21 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::RegisterBlackIpConfig::isMatch;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = client_ip_int;
  if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 64, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v2 + 64),
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/db_data_manual/db_register_black_ip_config_mgr.cpp",
    "isMatch",
    23);
  v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
         (common::milog::MiLogStream *const)(v2 + 64),
         (const char (*)[28])"[REGISTER] isMatch ip_int: ");
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->ip_int);
  v7 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v6, (const char (*)[17])" client_ip_int: ");
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
  v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v8, (const char (*)[10])" prefix: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->prefix >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->prefix >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->prefix);
  }
  common::milog::MiLogStream::operator<<(v9, this->prefix);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  if ( *(_BYTE *)(((unsigned __int64)&this->prefix >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->prefix >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->prefix);
  }
  if ( !this->prefix )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(this);
    }
    if ( this->ip_int == *(_DWORD *)(v2 + 48) )
      goto LABEL_22;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->prefix >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->prefix >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->prefix);
  }
  if ( !this->prefix )
    goto LABEL_23;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  ip_int = this->ip_int;
  if ( *(_BYTE *)(((unsigned __int64)&this->prefix_mask >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->prefix_mask >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->prefix_mask);
  }
  if ( ip_int == (this->prefix_mask & *(_DWORD *)(v2 + 48)) )
LABEL_22:
    result = 1LL;
  else
LABEL_23:
    result = 0LL;
  if ( v12 == (char *)v2 )
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

// Line 35: range 000000000CE46E1E-000000000CE46EC3
void __cdecl data::t_register_black_ip_config::t_register_black_ip_config(
        data::t_register_black_ip_config *const this,
        const mysqlpp::Row *row)
{
  std::string::basic_string(this);
  std::string::basic_string(&this->ip_desc);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  data::populate_t_register_black_ip_config<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 35: range 000000000D0FDBFA-000000000D0FDC24
void __cdecl data::t_register_black_ip_config::~t_register_black_ip_config(
        data::t_register_black_ip_config *const this)
{
  std::string::~string(&this->ip_desc);
  std::string::~string(this);
};

// Line 39: range 000000000CDBD398-000000000CDBDEBE
int32_t __cdecl data::DbRegisterBlackIpConfigMgr::loadRegsiterBlackIpConfig(
        data::DbRegisterBlackIpConfigMgr *const this,
        common::midb::MysqlConnPtr *conn_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  mysqlpp::Connection *v6; // rsi
  __int64 v7; // rax
  std::logic_error *exception; // rdi
  __gnu_cxx::__normal_iterator<data::t_register_black_ip_config*,std::vector<data::t_register_black_ip_config> >::reference v9; // rsi
  common::milog::MiLogStream *v10; // rax
  int v11; // edx
  int v12; // r15d
  common::milog::MiLogStream *v13; // r15
  std::vector<data::t_register_black_ip_config>::size_type v14; // rax
  common::milog::MiLogStream *v15; // rax
  unsigned __int64 v16; // rax
  std::vector<data::t_register_black_ip_config> *__for_range; // [rsp+28h] [rbp-4A8h]
  char v19[1168]; // [rsp+40h] [rbp-490h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1120LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 8 14 __for_begin:58 64 8 12 __for_end:58 96 8 9 <unknown> 128 24 10 row_vec:51 192 32 9 <un"
                        "known> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 544 8 query:46";
  *(_QWORD *)(v3 + 16) = data::DbRegisterBlackIpConfigMgr::loadRegsiterBlackIpConfig;
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
  v5[536862751] = -202116109;
  v5[536862752] = -202116109;
  v5[536862753] = -202116109;
  v5[536862754] = -202116109;
  if ( std::operator==<mysqlpp::Connection>(0LL, conn_ptr) )
  {
    if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/db_data_manual/db_register_black_ip_config_mgr.cpp",
      "loadRegsiterBlackIpConfig",
      42);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
      (common::milog::MiLogStream *const)(v3 + 192),
      (const char (*)[17])"conn_ptr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
    v2 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_ptr);
    if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 991) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 991) >> 3) + 0x7FFF8000) )
    {
      v6 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v3 + 448, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 448), v6, "select ");
    v7 = std::operator<<<std::char_traits<char>>(v3 + 448, "ip, ip_desc");
    std::operator<<<std::char_traits<char>>(v7, " from t_register_black_ip_config");
    std::vector<data::t_register_black_ip_config>::vector((std::vector<data::t_register_black_ip_config> *const)(v3 + 128));
    mysqlpp::Query::storein<std::vector<data::t_register_black_ip_config>>(
      (mysqlpp::Query *const)(v3 + 448),
      (std::vector<data::t_register_black_ip_config> *)(v3 + 128));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 448)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    __for_range = (std::vector<data::t_register_black_ip_config> *)(v3 + 128);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::t_register_black_ip_config>::iterator *)(v3 + 32) = std::vector<data::t_register_black_ip_config>::begin(__for_range);
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::t_register_black_ip_config>::iterator *)(v3 + 64) = std::vector<data::t_register_black_ip_config>::end(__for_range);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::t_register_black_ip_config *,std::vector<data::t_register_black_ip_config>>(
              (const __gnu_cxx::__normal_iterator<data::t_register_black_ip_config*,std::vector<data::t_register_black_ip_config> > *)(v3 + 32),
              (const __gnu_cxx::__normal_iterator<data::t_register_black_ip_config*,std::vector<data::t_register_black_ip_config> > *)(v3 + 64)) )
      {
        v11 = 1;
        goto LABEL_24;
      }
      v9 = __gnu_cxx::__normal_iterator<data::t_register_black_ip_config *,std::vector<data::t_register_black_ip_config>>::operator*((const __gnu_cxx::__normal_iterator<data::t_register_black_ip_config*,std::vector<data::t_register_black_ip_config> > *const)(v3 + 32));
      if ( data::DbRegisterBlackIpConfigMgr::loadIpConfig(this, &v9->ip) )
        break;
      __gnu_cxx::__normal_iterator<data::t_register_black_ip_config *,std::vector<data::t_register_black_ip_config>>::operator++((__gnu_cxx::__normal_iterator<data::t_register_black_ip_config*,std::vector<data::t_register_black_ip_config> > *const)(v3 + 32));
    }
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
      "./src/db_data_manual/db_register_black_ip_config_mgr.cpp",
      "loadRegsiterBlackIpConfig",
      62);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 256),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator()(v10, "Init login black ip config failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
    *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v11 = 0;
LABEL_24:
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( v11 == 1 )
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
        1u,
        "./src/db_data_manual/db_register_black_ip_config_mgr.cpp",
        "loadRegsiterBlackIpConfig",
        67);
      v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
              (common::milog::MiLogStream *const)(v3 + 320),
              (const char (*)[6])"load ");
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
      v14 = std::vector<data::t_register_black_ip_config>::size((const std::vector<data::t_register_black_ip_config> *const)(v3 + 128));
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)(v3 + 96) = v14;
      v15 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v13,
              (const unsigned __int64 *)(v3 + 96));
      common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
        v15,
        (const char (*)[40])" config from t_register_black_ip_config");
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
      *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
      v12 = 1;
    }
    else
    {
      v12 = 0;
    }
    std::vector<data::t_register_black_ip_config>::~vector((std::vector<data::t_register_black_ip_config> *const)(v3 + 128));
    v16 = ((v3 + 128) >> 3) + 2147450880;
    *(_WORD *)v16 = -1800;
    *(_BYTE *)(v16 + 2) = -8;
    if ( v12 == 1 )
      v2 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 448));
  }
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8034) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF807C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8084) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1120LL, v19);
  }
  return v2;
};

// Line 69: range 000000000D3C30F2-000000000D3C318C
void __cdecl data::t_register_black_ip_config::t_register_black_ip_config(
        data::t_register_black_ip_config *const this,
        data::t_register_black_ip_config *a2)
{
  const char *table_override; // rdx

  std::string::basic_string(this, a2);
  std::string::basic_string(&this->ip_desc, &a2->ip_desc);
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 78: range 000000000CDBDEC0-000000000CDBEAAE
int32_t __cdecl data::DbRegisterBlackIpConfigMgr::loadIpConfig(
        data::DbRegisterBlackIpConfigMgr *const this,
        const std::string *ip_str)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  common::milog::MiLogStream *v6; // r14
  const char *v7; // rax
  int32_t v8; // r14d
  common::milog::MiLogStream *v9; // r14
  const char *v10; // rax
  const std::string *v11; // rax
  uint32_t v12; // edx
  const std::string *v13; // rax
  common::milog::MiLogStream *v15; // r14
  const char *v16; // rax
  common::milog::MiLogStream *v17; // r14
  const char *v18; // rax
  uint8_t v19; // dl
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  data::RegisterBlackIpConfig *v23; // rax
  data::RegisterBlackIpConfig *v24; // rdx
  int32_t result; // eax
  char v26[624]; // [rsp+10h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 48 1 9 <unknown> 64 1 9 prefix:92 80 4 9 ip_int:91 96 12 13 ip_config:105 128 24 11 addr_vec:"
                        "79 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown"
                        "> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DbRegisterBlackIpConfigMgr::loadIpConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = -219020288;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v2 + 128));
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 192),
    "/",
    (const std::allocator<char> *)(v2 + 48));
  v5 = common::tools::StringUtils::split(
         ip_str,
         (const std::string *)(v2 + 192),
         (std::vector<std::string> *)(v2 + 128),
         1) != 0;
  std::string::~string((void *)(v2 + 192));
  *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
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
      "./src/db_data_manual/db_register_black_ip_config_mgr.cpp",
      "loadIpConfig",
      82);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 256),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v7 = (const char *)std::string::c_str(ip_str);
    common::milog::MiLogStream::operator()(v6, "invalid address:%s", v7);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    v8 = -1;
  }
  else if ( std::vector<std::string>::empty((const std::vector<std::string> *const)(v2 + 128)) )
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
      "./src/db_data_manual/db_register_black_ip_config_mgr.cpp",
      "loadIpConfig",
      88);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 320),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v10 = (const char *)std::string::c_str(ip_str);
    common::milog::MiLogStream::operator()(v9, "invalid address:%s", v10);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    v8 = -1;
  }
  else
  {
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
    v11 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v2 + 128), 0LL);
    v12 = common::tools::NetUtils::inetAton(v11);
    if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 80);
    *(_DWORD *)(v2 + 80) = v12;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(v2 + 64);
    *(_BYTE *)(v2 + 64) = 0;
    if ( std::vector<std::string>::size((const std::vector<std::string> *const)(v2 + 128)) > 1
      && (v13 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v2 + 128), 1uLL),
          !common::tools::StringUtils::strToNum<unsigned char>(v13, (unsigned __int8 *)(v2 + 64), 1)) )
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
        "./src/db_data_manual/db_register_black_ip_config_mgr.cpp",
        "loadIpConfig",
        95);
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 384),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v16 = (const char *)std::string::c_str(ip_str);
      common::milog::MiLogStream::operator()(v15, "invalid address:%s", v16);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      v8 = -1;
    }
    else
    {
      if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(v2 + 64);
      if ( *(_BYTE *)(v2 + 64) <= 0x20u )
      {
        if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(v2 + 64);
        *(_BYTE *)(v2 + 64) &= 0x1Fu;
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1024;
        v19 = *(_BYTE *)(v2 + 64);
        if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 80);
        data::RegisterBlackIpConfig::RegisterBlackIpConfig(
          (data::RegisterBlackIpConfig *const)(v2 + 96),
          *(_DWORD *)(v2 + 80),
          v19);
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
          1u,
          "./src/db_data_manual/db_register_black_ip_config_mgr.cpp",
          "loadIpConfig",
          106);
        v20 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                (common::milog::MiLogStream *const)(v2 + 512),
                (const char (*)[20])"[REGISTER] ip_int: ");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v20,
                (const unsigned int *)(v2 + 80));
        v22 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v21, (const char (*)[10])" ip_str: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, ip_str);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
        v23 = std::move<data::RegisterBlackIpConfig &>((data::RegisterBlackIpConfig *)(v2 + 96));
        std::vector<data::RegisterBlackIpConfig>::emplace_back<data::RegisterBlackIpConfig>(
          &this->register_black_ip_config_vec_,
          v23,
          v24);
        v8 = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 448, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 448),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_register_black_ip_config_mgr.cpp",
          "loadIpConfig",
          100);
        v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 448),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v18 = (const char *)std::string::c_str(ip_str);
        common::milog::MiLogStream::operator()(v17, "invalid address:%s , the netmask should be less than 32", v18);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
        *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
        v8 = -1;
      }
    }
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 128));
  result = v8;
  if ( v26 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
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
  }
  return result;
};

// Line 112: range 000000000CDBEAB0-000000000CDBEC87
bool __cdecl data::DbRegisterBlackIpConfigMgr::checkRegisterBlackList(
        data::DbRegisterBlackIpConfigMgr *const this,
        uint32_t ip_int)
{
  bool v2; // r15
  __gnu_cxx::__normal_iterator<data::RegisterBlackIpConfig*,std::vector<data::RegisterBlackIpConfig> > *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v6; // eax
  bool result; // al
  __gnu_cxx::__normal_iterator<data::RegisterBlackIpConfig*,std::vector<data::RegisterBlackIpConfig> >::reference ip_config; // [rsp+18h] [rbp-98h]
  char v9[144]; // [rsp+20h] [rbp-90h] BYREF

  v3 = (__gnu_cxx::__normal_iterator<data::RegisterBlackIpConfig*,std::vector<data::RegisterBlackIpConfig> > *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (__gnu_cxx::__normal_iterator<data::RegisterBlackIpConfig*,std::vector<data::RegisterBlackIpConfig> > *)v4;
  }
  v3->_M_current = (data::RegisterBlackIpConfig *)1102416563;
  v3[1]._M_current = (data::RegisterBlackIpConfig *)"2 32 8 15 __for_begin:113 64 8 13 __for_end:113";
  v3[2]._M_current = (data::RegisterBlackIpConfig *)data::DbRegisterBlackIpConfigMgr::checkRegisterBlackList;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v3[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v3[4]._M_current = std::vector<data::RegisterBlackIpConfig>::begin(&this->register_black_ip_config_vec_)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v3[8]._M_current = std::vector<data::RegisterBlackIpConfig>::end(&this->register_black_ip_config_vec_)._M_current;
  while ( __gnu_cxx::operator!=<data::RegisterBlackIpConfig *,std::vector<data::RegisterBlackIpConfig>>(v3 + 4, v3 + 8) )
  {
    ip_config = __gnu_cxx::__normal_iterator<data::RegisterBlackIpConfig *,std::vector<data::RegisterBlackIpConfig>>::operator*(v3 + 4);
    if ( (unsigned __int8)data::RegisterBlackIpConfig::isMatch(ip_config, ip_int) )
    {
      v2 = 0;
      v6 = 0;
      goto LABEL_14;
    }
    __gnu_cxx::__normal_iterator<data::RegisterBlackIpConfig *,std::vector<data::RegisterBlackIpConfig>>::operator++(v3 + 4);
  }
  v6 = 1;
LABEL_14:
  if ( v6 == 1 )
    v2 = 1;
  result = v2;
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_M_current = (data::RegisterBlackIpConfig *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 163: range 000000000CF1F155-000000000CF1F590
// local variable allocation has failed, the output may be wrong!
void __cdecl data::populate_t_register_black_ip_config<(mysqlpp::sql_dummy_type)0>(
        data::t_register_black_ip_config *s,
        const mysqlpp::Row *row)
{
  unsigned __int64 p_anon_0; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const mysqlpp::String *v5; // r14
  const mysqlpp::String *v6; // r14
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
  *(_QWORD *)(p_anon_0 + 8) = "5 32 16 27 ignore_schema_mismatches:35 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unkn"
                              "own> 256 32 9 <unknown>";
  *(_QWORD *)(p_anon_0 + 16) = data::populate_t_register_black_ip_config<(mysqlpp::sql_dummy_type)0>;
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
  *(_DWORD *)(((p_anon_0 + 256) >> 3) + 0x7FFF8000) = 0;
  v6 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 192) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 192);
  if ( *(char *)(((p_anon_0 + 256) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 287) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 + 31) & 7) >= *(_BYTE *)(((p_anon_0 + 287) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 256, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 256), v6, rowa);
  std::string::operator=(rowa._M_string_length + 32, p_anon_0 + 256);
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
