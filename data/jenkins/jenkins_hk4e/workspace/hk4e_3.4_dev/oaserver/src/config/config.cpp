// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/oaserver/src/config/config.cpp

// Line 20: range 000000000CA82FAA-000000000CA83D54
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
  std::string *v11; // rsi
  __int64 v12; // rdx
  char v13; // al
  _BOOL4 v14; // eax
  bool v15; // cl
  char v16; // dl
  common::milog::MiLogStream *v17; // rsi
  __int64 v18; // rdx
  _BOOL4 v19; // eax
  bool v20; // cl
  char v21; // dl
  common::milog::MiLogStream *v22; // rsi
  __int64 v23; // rdx
  _BOOL4 v24; // eax
  bool v25; // cl
  char v26; // dl
  common::milog::MiLogStream *v27; // rsi
  __int64 v28; // rdx
  _BOOL4 is_sandbox_recharge; // r15d
  _BOOL4 is_audit; // r14d
  const char *v31; // rax
  common::milog::MiLogStream *v32; // rax
  const char *v33; // rax
  DbDeployConfigMgr *p_db_deploy_config_mgr; // rcx
  std::string *p_recharge_key; // rsi
  uint32_t sdk_env; // ecx
  char v37; // al
  int32_t result; // eax
  _BOOL4 is_internal_server; // [rsp+14h] [rbp-14Ch]
  std::allocator<char> __a; // [rsp+3Fh] [rbp-121h] BYREF
  const data::DbRegionConfig *region_config_ptr; // [rsp+40h] [rbp-120h]
  const data::DbSdkConfig *sdk_config_ptr; // [rsp+48h] [rbp-118h]
  std::string v44; // [rsp+50h] [rbp-110h] BYREF
  common::milog::MiLogStream v45; // [rsp+70h] [rbp-F0h] BYREF
  char v46[208]; // [rsp+90h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 12 region_pt:35 64 16 13 version_pt:27 96 32 25 is_internal_server_str:39";
  *(_QWORD *)(v3 + 16) = Config::loadConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -219021312;
  v5[536862724] = -202116109;
  std::shared_ptr<ConfigBase>::shared_ptr((std::shared_ptr<ConfigBase> *const)(v3 + 64), p_prev_config_ptr);
  v6._M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)(v3 + 64);
  v7 = ConfigBase::loadConfig(this, config_file_name, v6) != 0;
  std::shared_ptr<ConfigBase>::~shared_ptr((std::shared_ptr<ConfigBase> *const)(v3 + 64));
  if ( v7 )
  {
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/config/config.cpp",
      "loadConfig",
      23);
    v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v45,
           (const char (*)[36])"ConfigBase::loadConfig failed,file:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, config_file_name);
    common::milog::MiLogStream::~MiLogStream(&v45);
    v9 = -1;
  }
  else
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v45, "Root.BuildVersion", &__a);
    common::tools::PTree::getChildOptional(&this->pt, (const std::string *)&v45);
    std::string::~string(&v45);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 64)) )
    {
      v10 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 64));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v44, "<xmlattr>.value", &__a);
      v11 = &v44;
      v12 = common::tools::PTree::get<unsigned int>(v10, &v44, 0);
      v13 = *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000);
      if ( v13 != 0 && v13 <= 3 )
      {
        LOBYTE(v11) = v13 != 0;
        __asan_report_store4(&this->xml_config_version, v11, v12);
      }
      this->xml_config_version = v12;
      std::string::~string(&v44);
      std::allocator<char>::~allocator(&__a);
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/config/config.cpp",
        "loadConfig",
        31);
      if ( *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->xml_config_version);
      }
      common::milog::MiLogStream::operator()(&v45, "load xml_config_version=%u", this->xml_config_version);
      common::milog::MiLogStream::~MiLogStream(&v45);
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v45, "Root.RegionConf", &__a);
    common::tools::PTree::getChild(&this->pt, (const std::string *)&v45);
    std::string::~string(&v45);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v45, "<xmlattr>.is_audit", &__a);
    v17 = &v45;
    LOBYTE(v14) = common::tools::PTree::get<bool>(
                    (const common::tools::PTree *const)(v3 + 32),
                    (const std::string *)&v45);
    v15 = v14;
    v16 = *(_BYTE *)(((unsigned __int64)&this->is_audit >> 3) + 0x7FFF8000);
    LOBYTE(v17) = v16 != 0;
    v18 = (v16 != 0) & (unsigned __int8)((((unsigned __int8)this - 44) & 7) >= v16);
    if ( (_BYTE)v18 )
      __asan_report_store1(&this->is_audit, v17, v18, v14);
    this->is_audit = v15;
    std::string::~string(&v45);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v45, "<xmlattr>.is_internal_server", &__a);
    common::tools::PTree::getValue(
      (std::string *)(v3 + 96),
      (const common::tools::PTree *const)(v3 + 32),
      (const std::string *)&v45);
    std::string::~string(&v45);
    std::allocator<char>::~allocator(&__a);
    if ( (unsigned __int8)std::string::empty(v3 + 96) )
    {
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/config/config.cpp",
        "loadConfig",
        42);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        &v45,
        (const char (*)[31])"is_internal_server is empty!!!");
      common::milog::MiLogStream::~MiLogStream(&v45);
      v9 = -1;
    }
    else
    {
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v45, "<xmlattr>.is_internal_server", &__a);
      v22 = &v45;
      LOBYTE(v19) = common::tools::PTree::get<bool>(
                      (const common::tools::PTree *const)(v3 + 32),
                      (const std::string *)&v45);
      v20 = v19;
      v21 = *(_BYTE *)(((unsigned __int64)&this->is_internal_server >> 3) + 0x7FFF8000);
      LOBYTE(v22) = v21 != 0;
      v23 = (v21 != 0) & (unsigned __int8)((((unsigned __int8)this - 43) & 7) >= v21);
      if ( (_BYTE)v23 )
        __asan_report_store1(&this->is_internal_server, v22, v23, v19);
      this->is_internal_server = v20;
      std::string::~string(&v45);
      std::allocator<char>::~allocator(&__a);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v45, "<xmlattr>.sandbox_recharge", &__a);
      v27 = &v45;
      LOBYTE(v24) = common::tools::PTree::get<bool>(
                      (const common::tools::PTree *const)(v3 + 32),
                      (const std::string *)&v45,
                      0);
      v25 = v24;
      v26 = *(_BYTE *)(((unsigned __int64)&this->is_sandbox_recharge >> 3) + 0x7FFF8000);
      LOBYTE(v27) = v26 != 0;
      v28 = (v26 != 0) & (unsigned __int8)((((unsigned __int8)this - 42) & 7) >= v26);
      if ( (_BYTE)v28 )
        __asan_report_store1(&this->is_sandbox_recharge, v27, v28, v24);
      this->is_sandbox_recharge = v25;
      std::string::~string(&v45);
      std::allocator<char>::~allocator(&__a);
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/config/config.cpp",
        "loadConfig",
        47);
      if ( *(_BYTE *)(((unsigned __int64)&this->is_internal_server >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this - 43) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_internal_server >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_internal_server);
      }
      is_internal_server = this->is_internal_server;
      if ( *(_BYTE *)(((unsigned __int64)&this->is_sandbox_recharge >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this - 42) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_sandbox_recharge >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_sandbox_recharge);
      }
      is_sandbox_recharge = this->is_sandbox_recharge;
      if ( *(_BYTE *)(((unsigned __int64)&this->is_audit >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this - 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_audit >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_audit);
      }
      is_audit = this->is_audit;
      v31 = (const char *)std::string::c_str(&this->region_name);
      common::milog::MiLogStream::operator()(
        &v45,
        "load region_name=%s, is_audit=%d is_sandbox_recharge=%d, is_internal_server=%d",
        v31,
        is_audit,
        is_sandbox_recharge,
        is_internal_server);
      common::milog::MiLogStream::~MiLogStream(&v45);
      if ( Config::loadDesignConfig(this) )
      {
        common::milog::MiLogStream::create(
          &v45,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/config/config.cpp",
          "loadConfig",
          52);
        v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                &v45,
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
          v32,
          (const char (*)[24])"loadDesignConfig failed");
        common::milog::MiLogStream::~MiLogStream(&v45);
        v9 = -1;
      }
      else
      {
        region_config_ptr = DbDeployConfigMgr::findDbRegionConfig(
                              &this->design_config.db_config_mgr.db_deploy_config_mgr,
                              &this->region_name);
        if ( region_config_ptr )
        {
          p_db_deploy_config_mgr = &this->design_config.db_config_mgr.db_deploy_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->sdk_env >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&region_config_ptr->sdk_env >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&region_config_ptr->sdk_env);
          }
          sdk_config_ptr = DbDeployConfigMgr::findSdkConfig(p_db_deploy_config_mgr, region_config_ptr->sdk_env);
          if ( sdk_config_ptr )
          {
            p_recharge_key = &sdk_config_ptr->recharge_key;
            std::string::operator=(&this->recharge_pub_key, &sdk_config_ptr->recharge_key);
            if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->sdk_env >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&region_config_ptr->sdk_env >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&region_config_ptr->sdk_env);
            }
            sdk_env = region_config_ptr->sdk_env;
            v37 = *(_BYTE *)(((unsigned __int64)&this->sdk_env >> 3) + 0x7FFF8000);
            if ( v37 != 0 && v37 <= 3 )
            {
              LOBYTE(p_recharge_key) = v37 != 0;
              __asan_report_store4(&this->sdk_env, p_recharge_key, &this->sdk_env);
            }
            this->sdk_env = sdk_env;
            v9 = 0;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v45,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/config/config.cpp",
              "loadConfig",
              65);
            if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->sdk_env >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&region_config_ptr->sdk_env >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&region_config_ptr->sdk_env);
            }
            common::milog::MiLogStream::operator()(&v45, "findSdkConfig %u fails", region_config_ptr->sdk_env);
            common::milog::MiLogStream::~MiLogStream(&v45);
            v9 = -1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v45,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/config/config.cpp",
            "loadConfig",
            59);
          v33 = (const char *)std::string::c_str(&this->region_name);
          common::milog::MiLogStream::operator()(&v45, "findDbRegionConfig %s fails", v33);
          common::milog::MiLogStream::~MiLogStream(&v45);
          v9 = -1;
        }
      }
    }
    std::string::~string((void *)(v3 + 96));
    common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 32));
    std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 64));
  }
  result = v9;
  if ( v46 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
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

// Line 75: range 000000000CA83D56-000000000CA83D70
uint32_t __cdecl Config::getAppId(const Config *const this)
{
  OaserverApp *v1; // rax

  v1 = Singleton<OaserverApp>::instance();
  return AppBase::getAppId((AppBase *const)v1);
};

// Line 80: range 000000000CA83D72-000000000CA840EB
int32_t __cdecl Config::loadDesignConfig(Config *const this)
{
  bool v1; // bl
  common::milog::MiLogStream *v2; // rax
  HK4EDesignConfig *p_design_config; // rcx
  bool is_readlink; // bl
  bool v6; // bl
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v9; // rax
  Flag<ConfigOption> flag; // [rsp+1Ch] [rbp-44h] BYREF
  std::shared_ptr<ScriptLibBase> p_script_lib_ptr; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-30h] BYREF

  Flag<ConfigOption>::Flag(&flag);
  std::shared_ptr<ScriptLibBase>::shared_ptr(&p_script_lib_ptr, 0LL);
  v1 = HK4EDesignConfig::init(&this->design_config, &p_script_lib_ptr, &flag) != 0;
  std::shared_ptr<ScriptLibBase>::~shared_ptr(&p_script_lib_ptr);
  if ( v1 )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/config/config.cpp",
      "loadDesignConfig",
      83);
    v2 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v12, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v2, (const char (*)[22])"initDesignConfig fail");
    common::milog::MiLogStream::~MiLogStream(&v12);
    return -1;
  }
  else
  {
    HK4EDesignConfig::setRegionName(&this->design_config, &this->region_name);
    p_design_config = &this->design_config;
    if ( *(_BYTE *)(((unsigned __int64)&this->is_audit >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_audit >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_audit);
    }
    HK4EDesignConfig::setIsAudit(p_design_config, this->is_audit);
    if ( *(char *)(((unsigned __int64)&this->is_readlink >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_readlink);
    is_readlink = this->is_readlink;
    std::shared_ptr<common::midb::MySqlMgrT<std::mutex>>::shared_ptr(
      (std::shared_ptr<common::midb::MySqlMgrT<std::mutex> > *const)&p_script_lib_ptr,
      &ResourceBox::mysql_mgr_ptr);
    v6 = HK4EDesignConfig::loadDesignConfig(
           &this->design_config,
           (std::shared_ptr<common::midb::MySqlMgrT<std::mutex> > *)&p_script_lib_ptr,
           0LL,
           is_readlink) != 0;
    std::shared_ptr<common::midb::MySqlMgrT<std::mutex>>::~shared_ptr((std::shared_ptr<common::midb::MySqlMgrT<std::mutex> > *const)&p_script_lib_ptr);
    if ( v6 )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/config/config.cpp",
        "loadDesignConfig",
        94);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v12, (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v7, (const char (*)[22])"loadDesignConfig fail");
      common::milog::MiLogStream::~MiLogStream(&v12);
      return -1;
    }
    else
    {
      if ( (unsigned __int8)std::string::empty(&this->region_name) != 1
        && !DbDeployConfigMgr::findDbRegionConfig(
              &this->design_config.db_config_mgr.db_deploy_config_mgr,
              &this->region_name) )
      {
        common::milog::MiLogStream::create(
          &v12,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/config/config.cpp",
          "loadDesignConfig",
          100);
        v9 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
               &v12,
               (const char (*)[52])"db_config_mgr findDbRegionConfig failed for region:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &this->region_name);
        common::milog::MiLogStream::~MiLogStream(&v12);
      }
      return 0;
    }
  }
};

// Line 106: range 000000000CA840EC-000000000CA841D0
// local variable allocation has failed, the output may be wrong!
void __cdecl Config::onReloadConfig(Config *const this)
{
  std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rbx
  std::string v2; // [rsp+0h] [rbp-50h] OVERLAPPED BYREF
  std::string v3; // [rsp+20h] [rbp-30h] BYREF

  v2._M_string_length = (std::string::size_type)this;
  v1 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
  std::allocator<char>::allocator((char *)&v2._anon_0._M_allocated_capacity + 15);
  std::string::basic_string<std::allocator<char>>(
    &v3,
    byte_1A31C760,
    (const std::allocator<char> *)&v2._anon_0._M_allocated_capacity + 15);
  if ( *(_BYTE *)(((v2._M_string_length + 168) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v2._M_string_length + 168) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(v2._M_string_length + 168);
  }
  MonitorReport::addValue(v1, MONITOR_XML_CONFIG_VERSION, *(_DWORD *)(v2._M_string_length + 168), v2);
  std::string::~string(&v3);
  std::allocator<char>::~allocator((char *)&v2._anon_0._M_allocated_capacity + 15);
};
