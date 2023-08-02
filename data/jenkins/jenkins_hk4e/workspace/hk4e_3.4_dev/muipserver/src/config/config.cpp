// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/muipserver/src/config/config.cpp

// Line 21: range 000000000CB94FBA-000000000CB95BDB
int32_t __cdecl Config::loadConfig(
        Config *const this,
        const std::string *config_file_name,
        ConfigBasePtr *p_prev_config_ptr)
{
  std::optional<common::tools::PTree> *v3; // rbx
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
  const char *v14; // rax
  const char *v15; // rax
  bool v16; // cl
  unsigned int v17; // ecx
  char v18; // dl
  common::milog::MiLogStream *v19; // rsi
  __int64 v20; // rdx
  bool v21; // r14
  common::milog::MiLogStream *v22; // rax
  bool is_readlink; // r14
  bool v24; // r14
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v27; // rax
  int32_t result; // eax
  std::allocator<char> v30; // [rsp+2Ah] [rbp-126h] BYREF
  std::allocator<char> __a; // [rsp+2Bh] [rbp-125h] BYREF
  Flag<ConfigOption> flag; // [rsp+2Ch] [rbp-124h] BYREF
  std::shared_ptr<ConfigBase> prev_config_ptr; // [rsp+30h] [rbp-120h] BYREF
  std::string v34; // [rsp+40h] [rbp-110h] BYREF
  std::string v35; // [rsp+60h] [rbp-F0h] BYREF
  std::string p_default_value; // [rsp+80h] [rbp-D0h] BYREF
  common::milog::MiLogStream v37; // [rsp+A0h] [rbp-B0h] BYREF
  char v38[144]; // [rsp+C0h] [rbp-90h] BYREF

  v3 = (std::optional<common::tools::PTree> *)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (std::optional<common::tools::PTree> *)v4;
  }
  v3->_M_payload._M_payload._M_value.impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)1102416563;
  *(_QWORD *)&v3->_M_payload._M_engaged = "2 32 8 12 region_pt:36 64 16 13 version_pt:28";
  v3[1]._M_payload._M_payload._M_value.impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)Config::loadConfig;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202178560;
  std::shared_ptr<ConfigBase>::shared_ptr(&prev_config_ptr, p_prev_config_ptr);
  v6._M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)&prev_config_ptr;
  v7 = ConfigBase::loadConfig(this, config_file_name, v6) != 0;
  std::shared_ptr<ConfigBase>::~shared_ptr(&prev_config_ptr);
  if ( v7 )
  {
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/config/config.cpp",
      "loadConfig",
      24);
    v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v37,
           (const char (*)[36])"ConfigBase::loadConfig failed,file:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, config_file_name);
    common::milog::MiLogStream::~MiLogStream(&v37);
    v9 = -1;
  }
  else
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v37, "Root.BuildVersion", &__a);
    common::tools::PTree::getChildOptional(&this->pt, (const std::string *)&v37);
    std::string::~string(&v37);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value(v3 + 4) )
    {
      v10 = std::optional<common::tools::PTree>::operator->(v3 + 4);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v34, "<xmlattr>.value", &__a);
      v11 = &v34;
      v12 = common::tools::PTree::get<unsigned int>(v10, &v34, 0);
      v13 = *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000);
      if ( v13 != 0 && v13 <= 3 )
      {
        LOBYTE(v11) = v13 != 0;
        __asan_report_store4(&this->xml_config_version, v11, v12);
      }
      this->xml_config_version = v12;
      std::string::~string(&v34);
      std::allocator<char>::~allocator(&__a);
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/config/config.cpp",
        "loadConfig",
        32);
      if ( *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->xml_config_version);
      }
      common::milog::MiLogStream::operator()(&v37, "load xml_config_version=%u", this->xml_config_version);
      common::milog::MiLogStream::~MiLogStream(&v37);
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v37, "Root.RegionConf", &__a);
    common::tools::PTree::getChild(&this->pt, (const std::string *)&v37);
    std::string::~string(&v37);
    std::allocator<char>::~allocator(&__a);
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadConfig",
      37);
    v14 = (const char *)std::string::c_str(&this->region_name);
    common::milog::MiLogStream::operator()(&v37, "load region_name=%s", v14);
    common::milog::MiLogStream::~MiLogStream(&v37);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&p_default_value, byte_1A5D1560, &__a);
    std::allocator<char>::allocator(&v30);
    std::string::basic_string<std::allocator<char>>(&v35, "Root.ApiConf.<xmlattr>.sign_key", &v30);
    common::tools::PTree::get<std::string>((std::string *)&v37, &this->pt, &v35, &p_default_value);
    std::string::operator=(&this->api_sign_key, &v37);
    std::string::~string(&v37);
    std::string::~string(&v35);
    std::allocator<char>::~allocator(&v30);
    std::string::~string(&p_default_value);
    std::allocator<char>::~allocator(&__a);
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadConfig",
      40);
    v15 = (const char *)std::string::c_str(&this->api_sign_key);
    common::milog::MiLogStream::operator()(&v37, "load api_sign_key=%s", v15);
    common::milog::MiLogStream::~MiLogStream(&v37);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&p_default_value, "Root.TranspondConf.<xmlattr>.is_enable", &__a);
    v16 = common::tools::PTree::get<unsigned int>(&this->pt, &p_default_value, 0) != 0;
    if ( *(char *)(((unsigned __int64)&this->is_enable_transpond >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_enable_transpond);
    this->is_enable_transpond = v16;
    std::string::~string(&p_default_value);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)&v37,
      "Root.TranspondConf.<xmlattr>.timeout",
      &__a);
    v19 = &v37;
    v17 = common::tools::PTree::get<unsigned int>(&this->pt, (const std::string *)&v37, 0x1388u);
    v18 = *(_BYTE *)(((unsigned __int64)&this->transpond_timeout >> 3) + 0x7FFF8000);
    LOBYTE(v19) = v18 != 0;
    v20 = (v18 != 0) & (unsigned __int8)((char)((((_BYTE)this - 44) & 7) + 3) >= v18);
    if ( (_BYTE)v20 )
      __asan_report_store4(&this->transpond_timeout, v19, v20);
    this->transpond_timeout = v17;
    std::string::~string(&v37);
    std::allocator<char>::~allocator(&__a);
    Flag<ConfigOption>::Flag(&flag);
    std::shared_ptr<ScriptLibBase>::shared_ptr((std::shared_ptr<ScriptLibBase> *const)&prev_config_ptr, 0LL);
    v21 = HK4EDesignConfig::init(&this->design_config, (ScriptLibBasePtr *)&prev_config_ptr, &flag) != 0;
    std::shared_ptr<ScriptLibBase>::~shared_ptr((std::shared_ptr<ScriptLibBase> *const)&prev_config_ptr);
    if ( v21 )
    {
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/config/config.cpp",
        "loadConfig",
        48);
      v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v37, (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v22, (const char (*)[22])"initDesignConfig fail");
      common::milog::MiLogStream::~MiLogStream(&v37);
      v9 = -1;
    }
    else
    {
      HK4EDesignConfig::setRegionName(&this->design_config, &this->region_name);
      if ( *(char *)(((unsigned __int64)&this->is_readlink >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_readlink);
      is_readlink = this->is_readlink;
      std::shared_ptr<common::midb::MySqlMgrT<std::mutex>>::shared_ptr(
        (std::shared_ptr<common::midb::MySqlMgrT<std::mutex> > *const)&prev_config_ptr,
        &ResourceBox::mysql_mgr_ptr);
      v24 = HK4EDesignConfig::loadDesignConfig(
              &this->design_config,
              (std::shared_ptr<common::midb::MySqlMgrT<std::mutex> > *)&prev_config_ptr,
              0LL,
              is_readlink) != 0;
      std::shared_ptr<common::midb::MySqlMgrT<std::mutex>>::~shared_ptr((std::shared_ptr<common::midb::MySqlMgrT<std::mutex> > *const)&prev_config_ptr);
      if ( v24 )
      {
        common::milog::MiLogStream::create(
          &v37,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/config/config.cpp",
          "loadConfig",
          56);
        v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                &v37,
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          v25,
          (const char (*)[22])"loadDesignConfig fail");
        common::milog::MiLogStream::~MiLogStream(&v37);
        v9 = -1;
      }
      else
      {
        if ( (unsigned __int8)std::string::empty(&this->region_name) != 1
          && !DbDeployConfigMgr::findDbRegionConfig(
                &this->design_config.db_config_mgr.db_deploy_config_mgr,
                &this->region_name) )
        {
          common::milog::MiLogStream::create(
            &v37,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/config/config.cpp",
            "loadConfig",
            62);
          v27 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                  &v37,
                  (const char (*)[52])"db_config_mgr findDbRegionConfig failed for region:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v27, &this->region_name);
          common::milog::MiLogStream::~MiLogStream(&v37);
        }
        v9 = 0;
      }
    }
    common::tools::PTree::~PTree((common::tools::PTree *const)&v3[2]);
    std::optional<common::tools::PTree>::~optional(v3 + 4);
  }
  result = v9;
  if ( v38 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_M_payload._M_payload._M_value.impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 69: range 000000000CB95BDC-000000000CB95BF6
uint32_t __cdecl Config::getAppId(const Config *const this)
{
  MuipserverApp *v1; // rax

  v1 = Singleton<MuipserverApp>::instance();
  return AppBase::getAppId((AppBase *const)v1);
};

// Line 75: range 000000000CB95BF8-000000000CB95C22
const data::DbRegionConfig *__cdecl Config::findCurDbRegionConfig(Config *const this)
{
  return DbDeployConfigMgr::findDbRegionConfig(
           &this->design_config.db_config_mgr.db_deploy_config_mgr,
           &this->region_name);
};

// Line 80: range 000000000CB95C24-000000000CB95D08
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
    byte_1A5D1560,
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
