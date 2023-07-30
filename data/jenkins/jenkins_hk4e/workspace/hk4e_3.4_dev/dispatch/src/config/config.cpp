// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/dispatch/src/config/config.cpp

// Line 23: range 000000000C610C26-000000000C6118DA
int32_t __cdecl Config::loadConfig(
        Config *const this,
        const std::string *config_file_name,
        ConfigBasePtr *p_prev_config_ptr)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  ConfigBasePtr v6; // rdx
  bool v7; // r14
  common::milog::MiLogStream *v8; // rdx
  int32_t v9; // r14d
  common::tools::PTree *v10; // r14
  std::string *p_path; // rsi
  __int64 v12; // rdx
  char v13; // al
  const char *v14; // rax
  common::tools::PTree *v15; // r14
  _BOOL4 v16; // eax
  bool v17; // cl
  char v18; // dl
  common::milog::MiLogStream *v19; // rsi
  __int64 v20; // rdx
  common::milog::MiLogStream *v21; // rcx
  char v22; // dl
  const char *v23; // rsi
  __int64 v24; // rdx
  char v25; // dl
  const char *v26; // rsi
  __int64 v27; // rdx
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  common::milog::MiLogStream *v32; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+27h] [rbp-119h] BYREF
  Flag<ConfigOption> flag; // [rsp+28h] [rbp-118h] BYREF
  uint32_t mysql_index; // [rsp+2Ch] [rbp-114h]
  std::string path; // [rsp+30h] [rbp-110h] BYREF
  common::milog::MiLogStream v39; // [rsp+50h] [rbp-F0h] BYREF
  char v40[208]; // [rsp+70h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 12 region_pt:38 64 16 13 version_pt:30 96 16 27 local_dispatch_config_pt:55 128 16 20 loc"
                        "al_db_conn_ptr:80";
  *(_QWORD *)(v3 + 16) = Config::loadConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  std::shared_ptr<ConfigBase>::shared_ptr((std::shared_ptr<ConfigBase> *const)(v3 + 128), p_prev_config_ptr);
  v6._M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)(v3 + 128);
  v7 = ConfigBase::loadConfig(this, config_file_name, v6) != 0;
  std::shared_ptr<ConfigBase>::~shared_ptr((std::shared_ptr<ConfigBase> *const)(v3 + 128));
  if ( v7 )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/config/config.cpp",
      "loadConfig",
      26);
    v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v39,
           (const char (*)[36])"ConfigBase::loadConfig failed,file:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, config_file_name);
    common::milog::MiLogStream::~MiLogStream(&v39);
    v9 = -1;
  }
  else
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v39, "Root.BuildVersion", &__a);
    common::tools::PTree::getChildOptional(&this->pt, (const std::string *)&v39);
    std::string::~string(&v39);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 64)) )
    {
      v10 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 64));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&path, "<xmlattr>.value", &__a);
      p_path = &path;
      v12 = common::tools::PTree::get<unsigned int>(v10, &path, 0);
      v13 = *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000);
      if ( v13 != 0 && v13 <= 3 )
      {
        LOBYTE(p_path) = v13 != 0;
        __asan_report_store4(&this->xml_config_version, p_path, v12);
      }
      this->xml_config_version = v12;
      std::string::~string(&path);
      std::allocator<char>::~allocator(&__a);
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/config/config.cpp",
        "loadConfig",
        34);
      if ( *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->xml_config_version);
      }
      common::milog::MiLogStream::operator()(&v39, "load xml_config_version=%u", this->xml_config_version);
      common::milog::MiLogStream::~MiLogStream(&v39);
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v39, "Root.RegionConf", &__a);
    common::tools::PTree::getChild(&this->pt, (const std::string *)&v39);
    std::string::~string(&v39);
    std::allocator<char>::~allocator(&__a);
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadConfig",
      39);
    v14 = (const char *)std::string::c_str(&this->region_name);
    common::milog::MiLogStream::operator()(&v39, "load region_name=%s", v14);
    common::milog::MiLogStream::~MiLogStream(&v39);
    if ( ClientVersionConfig::loadClientVersionConfig(&this->version_config) )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/config/config.cpp",
        "loadConfig",
        44);
      common::milog::MiLogStream::operator()(&v39, "loadClientVersionConfig fails");
      common::milog::MiLogStream::~MiLogStream(&v39);
    }
    if ( Config::loadGateserverMgrConfig(this, &this->pt) )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/config/config.cpp",
        "loadConfig",
        50);
      common::milog::MiLogStream::operator()(&v39, "loadGateserverMgrConfig failed");
      common::milog::MiLogStream::~MiLogStream(&v39);
      v9 = -1;
    }
    else
    {
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v39, "Root.LocalDispatchConfig", &__a);
      common::tools::PTree::getChildOptional(&this->pt, (const std::string *)&v39);
      std::string::~string(&v39);
      std::allocator<char>::~allocator(&__a);
      if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 96)) )
      {
        v15 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 96));
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)&v39,
          "<xmlattr>.is_forbid_first_dispatch",
          &__a);
        v19 = &v39;
        LOBYTE(v16) = common::tools::PTree::get<bool>(v15, (const std::string *)&v39, 0);
        v17 = v16;
        v18 = *(_BYTE *)(((unsigned __int64)&this->is_forbid_first_dispatch >> 3) + 0x7FFF8000);
        LOBYTE(v19) = v18 != 0;
        v20 = (v18 != 0) & (unsigned __int8)((((unsigned __int8)this + 124) & 7) >= v18);
        if ( (_BYTE)v20 )
          __asan_report_store1(&this->is_forbid_first_dispatch, v19, v20, v16);
        this->is_forbid_first_dispatch = v17;
        std::string::~string(&v39);
        std::allocator<char>::~allocator(&__a);
        common::milog::MiLogStream::create(
          &v39,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/config/config.cpp",
          "loadConfig",
          59);
        v23 = "load is_forbid_first_dispatch=";
        v21 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v39,
                (const char (*)[31])"load is_forbid_first_dispatch=");
        v22 = *(_BYTE *)(((unsigned __int64)&this->is_forbid_first_dispatch >> 3) + 0x7FFF8000);
        LOBYTE(v23) = v22 != 0;
        v24 = (v22 != 0) & (unsigned __int8)((((unsigned __int8)this + 124) & 7) >= v22);
        if ( (_BYTE)v24 )
          __asan_report_load1(&this->is_forbid_first_dispatch, v23, v24, v21);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v39,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/config/config.cpp",
          "loadConfig",
          63);
        v26 = "LocalDispatchConfig not found, use default is_forbid_first_dispatch=";
        v21 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
                &v39,
                (const char (*)[69])"LocalDispatchConfig not found, use default is_forbid_first_dispatch=");
        v25 = *(_BYTE *)(((unsigned __int64)&this->is_forbid_first_dispatch >> 3) + 0x7FFF8000);
        LOBYTE(v26) = v25 != 0;
        v27 = (v25 != 0) & (unsigned __int8)((((unsigned __int8)this + 124) & 7) >= v25);
        if ( (_BYTE)v27 )
          __asan_report_load1(&this->is_forbid_first_dispatch, v26, v27, v21);
      }
      common::milog::MiLogStream::operator<<(v21, this->is_forbid_first_dispatch);
      common::milog::MiLogStream::~MiLogStream(&v39);
      Flag<ConfigOption>::Flag(&flag);
      v28 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
      if ( DbDeployConfigMgr::loadConfig(&this->db_deploy_config_mgr, 0x10000u, v28, &flag) )
      {
        common::milog::MiLogStream::create(
          &v39,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/config/config.cpp",
          "loadConfig",
          69);
        v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                &v39,
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
          v29,
          (const char (*)[39])"db_deploy_config_mgr.loadConfig failed");
        common::milog::MiLogStream::~MiLogStream(&v39);
        v9 = -1;
      }
      else if ( DbDeployConfigMgr::rewriteConfig(&this->db_deploy_config_mgr) )
      {
        common::milog::MiLogStream::create(
          &v39,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/config/config.cpp",
          "loadConfig",
          74);
        v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                &v39,
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
          v30,
          (const char (*)[42])"db_deploy_config_mgr.rewriteConfig failed");
        common::milog::MiLogStream::~MiLogStream(&v39);
        v9 = -1;
      }
      else
      {
        mysql_index = DbConfigMgr::getMysqlIndexByDbConfigType(DB_CONFIG_LOCAL);
        v31 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
        common::midb::MySqlMgrT<std::mutex>::grab(v31, mysql_index, 0);
        if ( std::operator!=<mysqlpp::Connection>((const std::shared_ptr<mysqlpp::Connection> *)(v3 + 128), 0LL)
          && data::DbStopServerLoginWhiteIpConfigMgr::loadStopServerLoginWhiteIpConfig(
               &this->stop_server_login_white_ip_config_mgr,
               (common::midb::MysqlConnPtr *)(v3 + 128)) )
        {
          common::milog::MiLogStream::create(
            &v39,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/config/config.cpp",
            "loadConfig",
            85);
          v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  &v39,
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(
            v32,
            (const char (*)[78])"stop_server_login_white_ip_config_mgr.loadStopServerLoginWhiteIpConfig failed");
          common::milog::MiLogStream::~MiLogStream(&v39);
          v9 = -1;
        }
        else
        {
          v9 = 0;
        }
        std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v3 + 128));
      }
      std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 96));
    }
    common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 32));
    std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 64));
  }
  result = v9;
  if ( v40 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 94: range 000000000C6118DC-000000000C6118F6
uint32_t __cdecl Config::getAppId(const Config *const this)
{
  DispatchApp *v1; // rax

  v1 = Singleton<DispatchApp>::instance();
  return AppBase::getAppId((AppBase *const)v1);
};

// Line 99: range 000000000C6118F8-000000000C6119FD
// local variable allocation has failed, the output may be wrong!
void __cdecl Config::onReloadConfig(Config *const this)
{
  DispatchService *v1; // rax
  std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rbx
  std::string v3; // [rsp+0h] [rbp-50h] OVERLAPPED BYREF
  std::string v4; // [rsp+20h] [rbp-30h] BYREF

  v3._M_string_length = (std::string::size_type)this;
  if ( ServiceBox::findService<DispatchService>() )
  {
    v1 = ServiceBox::findService<DispatchService>();
    DispatchService::onReloadConfig(v1);
    v2 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
    std::allocator<char>::allocator((char *)&v3._anon_0._M_allocated_capacity + 15);
    std::string::basic_string<std::allocator<char>>(
      &v4,
      uri,
      (const std::allocator<char> *)&v3._anon_0._M_allocated_capacity + 15);
    if ( *(_BYTE *)(((v3._M_string_length + 168) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((v3._M_string_length + 168) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(v3._M_string_length + 168);
    }
    MonitorReport::addValue(v2, MONITOR_XML_CONFIG_VERSION, *(_DWORD *)(v3._M_string_length + 168), v3);
    std::string::~string(&v4);
    std::allocator<char>::~allocator((char *)&v3._anon_0._M_allocated_capacity + 15);
  }
};

// Line 113: range 000000000C6119FE-000000000C611F1F
int32_t __cdecl Config::loadGateserverMgrConfig(Config *const this, const common::tools::PTree *root)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::string *p_child_name; // rsi
  __int64 v6; // rdx
  char v7; // al
  int v8; // ecx
  char v9; // dl
  std::string *v10; // rsi
  __int64 v11; // rdx
  std::string *v12; // rsi
  __int64 v13; // rdx
  char v14; // al
  int32_t threshold_load_0; // ecx
  int32_t v16; // r14d
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-91h] BYREF
  std::string child_name; // [rsp+20h] [rbp-90h] BYREF
  char v20[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 28 gateserver_mgr_config_pt:114";
  *(_QWORD *)(v2 + 16) = Config::loadGateserverMgrConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&child_name, "Root.GateserverMgrConf", &__a);
  common::tools::PTree::getChild(root, &child_name);
  std::string::~string(&child_name);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&child_name, "<xmlattr>.threshold_load_0", &__a);
  p_child_name = &child_name;
  v6 = (unsigned int)common::tools::PTree::get<int>((const common::tools::PTree *const)(v2 + 32), &child_name);
  v7 = *(_BYTE *)(((unsigned __int64)&this->gateserver_mgr_config >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_child_name) = v7 != 0;
    __asan_report_store4(&this->gateserver_mgr_config, p_child_name, v6);
  }
  this->gateserver_mgr_config.threshold_load_0 = v6;
  std::string::~string(&child_name);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&child_name, "<xmlattr>.threshold_load_1", &__a);
  v10 = &child_name;
  v8 = common::tools::PTree::get<int>((const common::tools::PTree *const)(v2 + 32), &child_name);
  v9 = *(_BYTE *)(((unsigned __int64)&this->gateserver_mgr_config.threshold_load_1 >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v9 != 0;
  v11 = (v9 != 0) & (unsigned __int8)((char)((((_BYTE)this + 116) & 7) + 3) >= v9);
  if ( (_BYTE)v11 )
    __asan_report_store4(&this->gateserver_mgr_config.threshold_load_1, v10, v11);
  this->gateserver_mgr_config.threshold_load_1 = v8;
  std::string::~string(&child_name);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&child_name, "<xmlattr>.choose_add_load", &__a);
  v12 = &child_name;
  v13 = (unsigned int)common::tools::PTree::get<int>((const common::tools::PTree *const)(v2 + 32), &child_name);
  v14 = *(_BYTE *)(((unsigned __int64)&this->gateserver_mgr_config.choose_add_load >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v12) = v14 != 0;
    __asan_report_store4(&this->gateserver_mgr_config.choose_add_load, v12, v13);
  }
  this->gateserver_mgr_config.choose_add_load = v13;
  std::string::~string(&child_name);
  std::allocator<char>::~allocator(&__a);
  if ( *(_BYTE *)(((unsigned __int64)&this->gateserver_mgr_config >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gateserver_mgr_config >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->gateserver_mgr_config);
  }
  threshold_load_0 = this->gateserver_mgr_config.threshold_load_0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gateserver_mgr_config.threshold_load_1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gateserver_mgr_config.threshold_load_1 >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->gateserver_mgr_config.threshold_load_1);
  }
  if ( threshold_load_0 <= this->gateserver_mgr_config.threshold_load_1 )
  {
    v16 = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&child_name,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/config/config.cpp",
      "loadGateserverMgrConfig",
      120);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)&child_name,
      "threshold_load_0 > threshold_load_1!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
    v16 = -1;
  }
  common::tools::PTree::~PTree((common::tools::PTree *const)(v2 + 32));
  result = v16;
  if ( v20 == (char *)v2 )
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
