// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/config/config.cpp

// Line 34: range 000000000CCB094E-000000000CCB09BA
void __cdecl Config::SVOInstance::SVOInstance(Config::SVOInstance *const this)
{
  std::unordered_map<unsigned int,Config::SVOBlockDataInstance>::unordered_map(&this->block_data_map);
  std::unordered_map<unsigned int,Config::SVOWorldDataInstance>::unordered_map(&this->world_data_map);
  ThreadSafeCountMgr::Add(CountTypeSVOInstance, 1);
};

// Line 37: range 000000000CCB09BC-000000000CCB09F5
void __cdecl Config::SVOInstance::~SVOInstance(Config::SVOInstance *const this)
{
  ThreadSafeCountMgr::Add(CountTypeSVOInstance, -1);
  std::unordered_map<unsigned int,Config::SVOWorldDataInstance>::~unordered_map(&this->world_data_map);
  std::unordered_map<unsigned int,Config::SVOBlockDataInstance>::~unordered_map(&this->block_data_map);
};

// Line 51: range 000000000CBAC2EE-000000000CBAC603
int32_t __cdecl Config::loadConfig(
        Config *const this,
        const std::string *config_file_name,
        ConfigBasePtr *p_prev_config_ptr)
{
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-30h] BYREF

  if ( Config::loadSystemConfig(this, config_file_name) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/config/config.cpp",
      "loadConfig",
      54);
    v3 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v9, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v3, (const char (*)[24])"loadSystemConfig failed");
    common::milog::MiLogStream::~MiLogStream(&v9);
    return -1;
  }
  else if ( Config::loadDesignConfig(this) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/config/config.cpp",
      "loadConfig",
      60);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v9, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v5, (const char (*)[24])"loadDesignConfig failed");
    common::milog::MiLogStream::~MiLogStream(&v9);
    return -1;
  }
  else if ( Config::loadVersionData(this) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/config/config.cpp",
      "loadConfig",
      66);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v9, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v6, (const char (*)[23])"loadVersionData failed");
    common::milog::MiLogStream::~MiLogStream(&v9);
    return -1;
  }
  else if ( Config::loadSVOData(this) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/config/config.cpp",
      "loadConfig",
      72);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v9, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v7, (const char (*)[19])"loadSVOData failed");
    common::milog::MiLogStream::~MiLogStream(&v9);
    return 0;
  }
  else if ( Config::rewriteConfig(this) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/config/config.cpp",
      "loadConfig",
      78);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v9, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v8, (const char (*)[25])"activityDataParse failed");
    common::milog::MiLogStream::~MiLogStream(&v9);
    return -1;
  }
  else
  {
    return 0;
  }
};

// Line 86: range 000000000CBAC604-000000000CBADE26
int32_t __cdecl Config::loadSystemConfig(Config *const this, const std::string *config_file_name)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  ConfigBasePtr v5; // rdx
  bool v6; // r14
  common::milog::MiLogStream *v7; // rdx
  int32_t v8; // r14d
  common::tools::PTree *v9; // r14
  unsigned int v10; // edx
  const char *v11; // rax
  const char *v12; // rax
  const char *v13; // rax
  uint64_t v14; // rax
  bool v15; // dl
  unsigned __int8 v16; // dl
  uint64_t v17; // rax
  uint64_t v18; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-191h] BYREF
  std::string path; // [rsp+20h] [rbp-190h] BYREF
  std::string v22; // [rsp+40h] [rbp-170h] BYREF
  std::string v23; // [rsp+60h] [rbp-150h] BYREF
  common::milog::MiLogStream v24; // [rsp+80h] [rbp-130h] BYREF
  char v25[272]; // [rsp+A0h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 8 13 region_pt:102 64 8 16 log_level_pt:107 96 8 20 data_dir_path_pt:112 128 8 26 token_kee"
                        "p_alive_ms_pt:117 160 8 11 node_pt:158 192 16 13 version_pt:94";
  *(_QWORD *)(v2 + 16) = Config::loadSystemConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -202178560;
  std::shared_ptr<ConfigBase>::shared_ptr((std::shared_ptr<ConfigBase> *const)(v2 + 192), 0LL);
  v5._M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)(v2 + 192);
  v6 = ConfigBase::loadConfig(this, config_file_name, v5) != 0;
  std::shared_ptr<ConfigBase>::~shared_ptr((std::shared_ptr<ConfigBase> *const)(v2 + 192));
  if ( v6 )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v24,
           (const char (*)[36])"ConfigBase::loadConfig failed,file:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, config_file_name);
    common::milog::MiLogStream::~MiLogStream(&v24);
    v8 = -1;
  }
  else
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v24, "Root.BuildVersion", &__a);
    common::tools::PTree::getChildOptional((common::tools::PTree *)(v2 + 192), &this->pt, (const std::string *)&v24);
    std::string::~string(&v24);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v2 + 192)) )
    {
      v9 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v2 + 192));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&path, "<xmlattr>.value", &__a);
      v10 = common::tools::PTree::get<unsigned int>(v9, &path, 0);
      if ( *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->xml_config_version);
      }
      this->xml_config_version = v10;
      std::string::~string(&path);
      std::allocator<char>::~allocator(&__a);
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/config/config.cpp",
        "loadSystemConfig",
        98);
      if ( *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->xml_config_version);
      }
      common::milog::MiLogStream::operator()(&v24, "load xml_config_version=%u", this->xml_config_version);
      common::milog::MiLogStream::~MiLogStream(&v24);
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v24, "Root.RegionConf", &__a);
    common::tools::PTree::getChild(&this->pt, (const std::string *)&v24);
    std::string::~string(&v24);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v24, "<xmlattr>.name", &__a);
    common::tools::PTree::get<std::string>(
      &v22,
      (const common::tools::PTree *const)(v2 + 32),
      (const std::string *)&v24);
    std::string::operator=(&this->region_name, &v22);
    std::string::~string(&v22);
    std::string::~string(&v24);
    std::allocator<char>::~allocator(&__a);
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      104);
    v11 = (const char *)std::string::c_str(&this->region_name);
    common::milog::MiLogStream::operator()(&v24, "load region_name=%s", v11);
    common::milog::MiLogStream::~MiLogStream(&v24);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v24, "Root.LogConf.LogLevelMask", &__a);
    common::tools::PTree::getChild(&this->pt, (const std::string *)&v24);
    std::string::~string(&v24);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v24, "<xmlattr>.value", &__a);
    common::tools::PTree::get<std::string>(
      &v23,
      (const common::tools::PTree *const)(v2 + 64),
      (const std::string *)&v24);
    std::string::operator=(&this->log_level_mask_, &v23);
    std::string::~string(&v23);
    std::string::~string(&v24);
    std::allocator<char>::~allocator(&__a);
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      109);
    v12 = (const char *)std::string::c_str(&this->log_level_mask_);
    common::milog::MiLogStream::operator()(&v24, "load log_level_mask=%s", v12);
    common::milog::MiLogStream::~MiLogStream(&v24);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v24, "Root.TothemoonConf.DataDir", &__a);
    common::tools::PTree::getChild(&this->pt, (const std::string *)&v24);
    std::string::~string(&v24);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&v23, "<xmlattr>.name", &__a);
    common::tools::PTree::get<std::string>((std::string *)&v24, (const common::tools::PTree *const)(v2 + 96), &v23);
    std::string::operator=(&this->data_dir_path, &v24);
    std::string::~string(&v24);
    std::string::~string(&v23);
    std::allocator<char>::~allocator(&__a);
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      114);
    v13 = (const char *)std::string::c_str(&this->data_dir_path);
    common::milog::MiLogStream::operator()(&v24, "load data_dir_path=%s", v13);
    common::milog::MiLogStream::~MiLogStream(&v24);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)&v24,
      "Root.TothemoonConf.TokenKeepAliveMs",
      &__a);
    common::tools::PTree::getChild(&this->pt, (const std::string *)&v24);
    std::string::~string(&v24);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v24, "<xmlattr>.value", &__a);
    v14 = common::tools::PTree::get<unsigned long>(
            (const common::tools::PTree *const)(v2 + 128),
            (const std::string *)&v24);
    if ( *(_BYTE *)(((unsigned __int64)&this->token_keep_alive_ms >> 3) + 0x7FFF8000) )
      v14 = __asan_report_store8();
    this->token_keep_alive_ms = v14;
    std::string::~string(&v24);
    std::allocator<char>::~allocator(&__a);
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      119);
    if ( *(_BYTE *)(((unsigned __int64)&this->token_keep_alive_ms >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->token_keep_alive_ms, &common::milog::MiLogDefault::default_log_obj_);
    common::milog::MiLogStream::operator()(&v24, "load token_keep_alive_ms=%lu", this->token_keep_alive_ms);
    common::milog::MiLogStream::~MiLogStream(&v24);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)&v24,
      "Root.TothemoonConf.UseStatCollector",
      &__a);
    common::tools::PTree::getChild(&this->pt, (const std::string *)&v24);
    std::string::~string(&v24);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v24, "<xmlattr>.value", &__a);
    v15 = common::tools::PTree::get<bool>((const common::tools::PTree *const)(v2 + 160), (const std::string *)&v24);
    if ( *(char *)(((unsigned __int64)&this->use_stat_collector >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->use_stat_collector);
    this->use_stat_collector = v15;
    std::string::~string(&v24);
    std::allocator<char>::~allocator(&__a);
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      125);
    if ( *(char *)(((unsigned __int64)&this->use_stat_collector >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->use_stat_collector);
    common::milog::MiLogStream::operator()(
      &v24,
      "[TothemoonService]load use_stat_collector=%d",
      this->use_stat_collector);
    common::milog::MiLogStream::~MiLogStream(&v24);
    common::tools::PTree::~PTree((common::tools::PTree *const)(v2 + 160));
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v24, "Root.TothemoonConf.VersionCount", &__a);
    common::tools::PTree::getChild(&this->pt, (const std::string *)&v24);
    std::string::~string(&v24);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v24, "<xmlattr>.value", &__a);
    v16 = common::tools::PTree::get<unsigned char>(
            (const common::tools::PTree *const)(v2 + 160),
            (const std::string *)&v24);
    if ( *(char *)(((unsigned __int64)&this->version_count >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->version_count);
    this->version_count = v16;
    std::string::~string(&v24);
    std::allocator<char>::~allocator(&__a);
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      132);
    if ( *(char *)(((unsigned __int64)&this->version_count >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->version_count);
    common::milog::MiLogStream::operator()(&v24, "load version_count=%u", this->version_count);
    common::milog::MiLogStream::~MiLogStream(&v24);
    if ( *(char *)(((unsigned __int64)&this->version_count >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->version_count);
    if ( !this->version_count )
      this->version_count = Config::max_version_data_count;
    common::tools::PTree::~PTree((common::tools::PTree *const)(v2 + 160));
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)&v24,
      "Root.TothemoonConf.RefreshMaxInterval",
      &__a);
    common::tools::PTree::getChild(&this->pt, (const std::string *)&v24);
    std::string::~string(&v24);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v24, "<xmlattr>.value", &__a);
    Config::refresh_max_interval = common::tools::PTree::get<unsigned int>(
                                     (const common::tools::PTree *const)(v2 + 160),
                                     (const std::string *)&v24);
    std::string::~string(&v24);
    std::allocator<char>::~allocator(&__a);
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      143);
    common::milog::MiLogStream::operator()(&v24, "load refresh_max_interval=%u", Config::refresh_max_interval);
    common::milog::MiLogStream::~MiLogStream(&v24);
    if ( !Config::refresh_max_interval )
      Config::refresh_max_interval = 3600;
    common::tools::PTree::~PTree((common::tools::PTree *const)(v2 + 160));
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)&v24,
      "Root.TothemoonConf.ObstacleTimeLimit",
      &__a);
    common::tools::PTree::getChild(&this->pt, (const std::string *)&v24);
    std::string::~string(&v24);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v24, "<xmlattr>.value", &__a);
    v17 = common::tools::PTree::get<unsigned long>(
            (const common::tools::PTree *const)(v2 + 160),
            (const std::string *)&v24);
    if ( *(_BYTE *)(((unsigned __int64)&this->obstacle_time_limit >> 3) + 0x7FFF8000) )
      v17 = __asan_report_store8();
    this->obstacle_time_limit = v17;
    std::string::~string(&v24);
    std::allocator<char>::~allocator(&__a);
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      154);
    if ( *(_BYTE *)(((unsigned __int64)&this->obstacle_time_limit >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->obstacle_time_limit, &common::milog::MiLogDefault::default_log_obj_);
    common::milog::MiLogStream::operator()(&v24, "load obstacle_time_limit=%lu", this->obstacle_time_limit);
    common::milog::MiLogStream::~MiLogStream(&v24);
    common::tools::PTree::~PTree((common::tools::PTree *const)(v2 + 160));
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)&v24,
      "Root.TothemoonConf.QueryPathReqTimeLimit",
      &__a);
    common::tools::PTree::getChild(&this->pt, (const std::string *)&v24);
    std::string::~string(&v24);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v24, "<xmlattr>.value", &__a);
    v18 = common::tools::PTree::get<unsigned long>(
            (const common::tools::PTree *const)(v2 + 160),
            (const std::string *)&v24);
    if ( *(_BYTE *)(((unsigned __int64)&this->query_path_req_time_limit >> 3) + 0x7FFF8000) )
      v18 = __asan_report_store8();
    this->query_path_req_time_limit = v18;
    std::string::~string(&v24);
    std::allocator<char>::~allocator(&__a);
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      160);
    if ( *(_BYTE *)(((unsigned __int64)&this->query_path_req_time_limit >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->query_path_req_time_limit, &common::milog::MiLogDefault::default_log_obj_);
    common::milog::MiLogStream::operator()(&v24, "load path_query_req_time_limit=%lu", this->query_path_req_time_limit);
    common::milog::MiLogStream::~MiLogStream(&v24);
    common::tools::PTree::~PTree((common::tools::PTree *const)(v2 + 160));
    if ( *(char *)(((unsigned __int64)&this->version_count >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->version_count);
    Config::max_version_data_count = this->version_count;
    v8 = 0;
    common::tools::PTree::~PTree((common::tools::PTree *const)(v2 + 128));
    common::tools::PTree::~PTree((common::tools::PTree *const)(v2 + 96));
    common::tools::PTree::~PTree((common::tools::PTree *const)(v2 + 64));
    common::tools::PTree::~PTree((common::tools::PTree *const)(v2 + 32));
    std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v2 + 192));
  }
  result = v8;
  if ( v25 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 168: range 000000000CBADE28-000000000CBADF0C
void __cdecl Config::onReloadConfig(Config *const this)
{
  std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rbx
  std::allocator<char> __a; // [rsp+1Fh] [rbp-31h] BYREF
  std::string v3; // [rsp+20h] [rbp-30h] BYREF

  v1 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&v3, byte_1A4E8860, &__a);
  if ( *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->xml_config_version);
  }
  MonitorReport::addValue(v1, 23LL, this->xml_config_version, (unsigned __int64)&v3);
  std::string::~string(&v3);
  std::allocator<char>::~allocator(&__a);
};

// Line 174: range 000000000CBADF0E-000000000CBADF28
uint32_t __cdecl Config::getAppId(const Config *const this)
{
  TothemoonserverApp *v1; // rax

  v1 = Singleton<TothemoonserverApp>::instance();
  return AppBase::getAppId((AppBase *const)v1);
};

// Line 179: range 000000000CBADF2A-000000000CBAE036
int32_t __cdecl Config::loadVersionData(Config *const this)
{
  uint32_t ResVersion; // edx
  int ret; // [rsp+1Ch] [rbp-34h]
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  ret = ClientVersionConfig::loadClientVersionConfig(&this->version_config);
  if ( ret )
    return ret;
  ResVersion = ClientVersionConfig::getResVersion(&this->version_config, 5u);
  if ( *(_BYTE *)(((unsigned __int64)&this->server_res_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->server_res_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->server_res_version);
  }
  this->server_res_version = ResVersion;
  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/config/config.cpp",
    "loadVersionData",
    186);
  common::milog::MiLogStream::operator()(&v4, "server res version:%d", this->server_res_version);
  common::milog::MiLogStream::~MiLogStream(&v4);
  return 0;
};

// Line 191: range 000000000CBAE038-000000000CBAE136
int32_t __cdecl Config::loadDesignConfig(Config *const this)
{
  HK4EDesignConfig *p_design_config; // rdi
  std::string *p_real_data_base_dir; // rcx
  HK4EDesignConfig *p_is_readlink; // rdi
  std::string *p_real_res_base_dir; // rcx
  int ret_code; // [rsp+1Ch] [rbp-34h]
  int ret_codea; // [rsp+1Ch] [rbp-34h]

  p_design_config = &this->design_config;
  p_real_data_base_dir = &this->design_config.real_data_base_dir;
  if ( *(char *)(((unsigned __int64)&this->is_readlink >> 3) + 0x7FFF8000) < 0 )
  {
    p_design_config = (HK4EDesignConfig *)&this->is_readlink;
    __asan_report_load1(&this->is_readlink);
  }
  ret_code = HK4EDesignConfig::tryGetReadLink(
               p_design_config,
               this->is_readlink,
               &HK4EDesignConfig::data_base_dir[abi:cxx11],
               p_real_data_base_dir);
  if ( ret_code )
    return ret_code;
  p_is_readlink = &this->design_config;
  p_real_res_base_dir = &this->design_config.real_res_base_dir;
  if ( *(char *)(((unsigned __int64)&this->is_readlink >> 3) + 0x7FFF8000) < 0 )
  {
    p_is_readlink = (HK4EDesignConfig *)&this->is_readlink;
    __asan_report_load1(&this->is_readlink);
  }
  ret_codea = HK4EDesignConfig::tryGetReadLink(
                p_is_readlink,
                this->is_readlink,
                &HK4EDesignConfig::res_path[abi:cxx11],
                p_real_res_base_dir);
  if ( ret_codea )
    return ret_codea;
  else
    return 0;
};

// Line 223: range 000000000CBAE138-000000000CBAEF8F
int32_t __cdecl Config::loadSVOData(Config *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  const std::shared_ptr<Config::SVOInstance> *v4; // rax
  uint32_t server_res_version; // r15d
  std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  const char *v7; // rax
  int32_t v8; // r15d
  common::milog::MiLogStream *v9; // rax
  const char *v10; // rax
  uint32_t v11; // r15d
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  const char *v17; // rax
  common::milog::MiLogStream *v18; // rax
  const char *v19; // rax
  std::shared_ptr<Config::SVOInstance> *v21; // rcx
  std::vector<unsigned int>::value_type __x; // [rsp+14h] [rbp-8ACh] BYREF
  __gnu_cxx::__normal_iterator<std::shared_ptr<Config::SVOInstance>*,std::vector<std::shared_ptr<Config::SVOInstance>> > __i; // [rsp+18h] [rbp-8A8h] BYREF
  __gnu_cxx::__normal_iterator<const std::shared_ptr<Config::SVOInstance>*,std::vector<std::shared_ptr<Config::SVOInstance>> > __position; // [rsp+20h] [rbp-8A0h] BYREF
  unsigned __int64 data_size; // [rsp+28h] [rbp-898h]
  common::milog::MiLogStream v27; // [rsp+30h] [rbp-890h] BYREF
  char v28[2160]; // [rsp+50h] [rbp-870h] BYREF

  v1 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_6(2112LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "15 32 16 12 old_info:231 64 16 8 info:237 96 16 8 lock:304 128 24 24 world_file_data_list:283 19"
                        "2 24 12 md5_list:284 256 32 13 file_name:241 320 32 7 md5:249 384 32 23 block_data_filename:250 "
                        "448 32 19 world_file_name:272 512 32 13 md5_world:281 576 32 23 world_data_filename:282 640 48 2"
                        "1 changed_scene_ids:251 720 48 26 world_changed_data_ids:299 800 520 7 ifs:242 1456 520 8 ifs1:273";
  *(_QWORD *)(v1 + 16) = Config::loadSVOData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -234881024;
  v3[536862725] = -218959118;
  v3[536862726] = -234881024;
  v3[536862727] = -218959118;
  v3[536862729] = -218959118;
  v3[536862731] = -218959118;
  v3[536862733] = -218959118;
  v3[536862735] = -218959118;
  v3[536862737] = -218959118;
  v3[536862739] = -218959118;
  v3[536862741] = -219021312;
  v3[536862742] = 62194;
  v3[536862744] = -218959118;
  v3[536862761] = -218959360;
  v3[536862762] = -218959118;
  v3[536862763] = -218959118;
  v3[536862764] = -218959118;
  v3[536862765] = 62194;
  v3[536862781] = -218103808;
  v3[536862782] = -202116109;
  v3[536862783] = -202116109;
  v3[536862784] = -202116109;
  v3[536862785] = -202116109;
  common::milog::MiLogStream::create(
    &v27,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/config/config.cpp",
    "loadSVOData",
    224);
  common::milog::MiLogStream::operator()(&v27, "try to loadSVOData by config file...");
  common::milog::MiLogStream::~MiLogStream(&v27);
  data_size = std::vector<std::shared_ptr<Config::SVOInstance>>::size(&Config::version_datas);
  *(_QWORD *)(v1 + 32) = 0LL;
  *(_QWORD *)(v1 + 40) = 0LL;
  if ( data_size )
  {
    v4 = std::vector<std::shared_ptr<Config::SVOInstance>>::operator[](&Config::version_datas, 0LL);
    std::shared_ptr<Config::SVOInstance>::operator=((std::shared_ptr<Config::SVOInstance> *const)(v1 + 32), v4);
  }
  common::tools::perf::make_shared<Config::SVOInstance>();
  if ( *(_BYTE *)(((unsigned __int64)&this->server_res_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->server_res_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->server_res_version);
  }
  server_res_version = this->server_res_version;
  v6 = std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&v6->version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v6->version >> 3) + 0x7FFF8000) <= 3 )
  {
    v6 = (std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v6->version);
  }
  v6->version = server_res_version;
  std::operator+<char>((std::string *)(v1 + 256), &this->design_config.real_res_base_dir, "/server_res_svo_block.txt");
  std::ifstream::basic_ifstream(v1 + 800, v1 + 256, 8LL);
  if ( (unsigned __int8)std::ios::good(v1 + 1056) != 1 )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/config/config.cpp",
      "loadSVOData",
      245);
    v7 = (const char *)std::string::c_str(v1 + 256);
    common::milog::MiLogStream::operator()(&v27, "load file:%s failed", v7);
    common::milog::MiLogStream::~MiLogStream(&v27);
    v8 = -1;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/config/config.cpp",
      "loadSVOData",
      248);
    v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v27, (const char (*)[9])"loading ");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, (const std::string *)(v1 + 256));
    common::milog::MiLogStream::~MiLogStream(&v27);
    std::string::basic_string(v1 + 320);
    std::string::basic_string(v1 + 384);
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v1 + 640));
    while ( (unsigned __int8)std::ios::eof(v1 + 1056) != 1 )
    {
      std::operator>><char>(v1 + 800, v1 + 320);
      std::operator>><char>(v1 + 800, v1 + 384);
      if ( std::string::find(v1 + 384, ".data", 0LL) != -1 )
      {
        v10 = (const char *)std::string::c_str(v1 + 320);
        v11 = ComputeFNV1aHash(v10);
        std::operator+<char>(
          (std::string *)&v27,
          &this->design_config.real_res_base_dir,
          (const std::string *)(v1 + 384));
        LOBYTE(v11) = Config::loadSVOBlockData(
                        this,
                        (const std::string *)&v27,
                        v11,
                        (const std::shared_ptr<Config::SVOInstance> *)(v1 + 32),
                        (std::shared_ptr<Config::SVOInstance> *)(v1 + 64),
                        (std::set<unsigned int> *)(v1 + 640)) != 0;
        std::string::~string(&v27);
        if ( (_BYTE)v11 )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/config/config.cpp",
            "loadSVOData",
            261);
          v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  &v27,
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])"load file ");
          v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                  v13,
                  (const std::string *)(v1 + 384));
          common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v14, (const char (*)[9])" failed.");
        }
        else
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            5u,
            "./src/config/config.cpp",
            "loadSVOData",
            265);
          v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v27, (const char (*)[11])"load file ");
          v16 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                  v15,
                  (const std::string *)(v1 + 384));
          common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v16, (const char (*)[12])" succeeded.");
        }
        common::milog::MiLogStream::~MiLogStream(&v27);
      }
    }
    std::ifstream::close(v1 + 800);
    std::operator+<char>((std::string *)(v1 + 448), &this->design_config.real_res_base_dir, "/server_res_svo_world.txt");
    std::ifstream::basic_ifstream(v1 + 1456, v1 + 448, 8LL);
    if ( (unsigned __int8)std::ios::good(v1 + 1712) != 1 )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/config/config.cpp",
        "loadSVOData",
        276);
      v17 = (const char *)std::string::c_str(v1 + 448);
      common::milog::MiLogStream::operator()(&v27, "load file:%s failed", v17);
      common::milog::MiLogStream::~MiLogStream(&v27);
      v8 = -1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/config/config.cpp",
        "loadSVOData",
        279);
      v18 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v27, (const char (*)[9])"loading ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, (const std::string *)(v1 + 448));
      common::milog::MiLogStream::~MiLogStream(&v27);
      std::string::basic_string(v1 + 512);
      std::string::basic_string(v1 + 576);
      std::vector<std::string>::vector((std::vector<std::string> *const)(v1 + 128));
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 192));
      while ( (unsigned __int8)std::ios::eof(v1 + 1712) != 1 )
      {
        std::operator>><char>(v1 + 1456, v1 + 512);
        std::operator>><char>(v1 + 1456, v1 + 576);
        if ( std::string::find(v1 + 576, ".data", 0LL) != -1 )
        {
          std::operator+<char>(
            (std::string *)&v27,
            &this->design_config.real_res_base_dir,
            (const std::string *)(v1 + 576));
          std::vector<std::string>::push_back(
            (std::vector<std::string> *const)(v1 + 128),
            (std::vector<std::string>::value_type *)&v27);
          std::string::~string(&v27);
          v19 = (const char *)std::string::c_str(v1 + 512);
          __x = ComputeFNV1aHash(v19);
          std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v1 + 192), &__x);
        }
      }
      std::ifstream::close(v1 + 1456);
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v1 + 720));
      Config::loadAllSVOWorldData(
        this,
        (const std::vector<std::string> *)(v1 + 128),
        (const std::vector<unsigned int> *)(v1 + 192),
        (const std::shared_ptr<Config::SVOInstance> *)(v1 + 32),
        (std::shared_ptr<Config::SVOInstance> *)(v1 + 64),
        (std::set<unsigned int> *)(v1 + 720));
      if ( !std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v1 + 640))
        || !std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v1 + 720)) )
      {
        boost::unique_lock<boost::shared_mutex>::unique_lock(
          (boost::unique_lock<boost::shared_mutex> *const)(v1 + 96),
          &Config::version_datas_mutex_);
        __i._M_current = std::vector<std::shared_ptr<Config::SVOInstance>>::begin(&Config::version_datas)._M_current;
        __gnu_cxx::__normal_iterator<std::shared_ptr<Config::SVOInstance> const*,std::vector<std::shared_ptr<Config::SVOInstance>>>::__normal_iterator<std::shared_ptr<Config::SVOInstance>*>(
          &__position,
          &__i);
        std::vector<std::shared_ptr<Config::SVOInstance>>::emplace<std::shared_ptr<Config::SVOInstance>&>(
          &Config::version_datas,
          __position,
          (std::shared_ptr<Config::SVOInstance> *)(v1 + 64),
          v21);
        if ( data_size == Config::max_version_data_count )
          std::vector<std::shared_ptr<Config::SVOInstance>>::pop_back(&Config::version_datas);
        boost::unique_lock<boost::shared_mutex>::~unique_lock((boost::unique_lock<boost::shared_mutex> *const)(v1 + 96));
      }
      v8 = 0;
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 720));
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 192));
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v1 + 128));
      std::string::~string((void *)(v1 + 576));
      std::string::~string((void *)(v1 + 512));
    }
    std::ifstream::~ifstream(v1 + 1456);
    std::string::~string((void *)(v1 + 448));
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 640));
    std::string::~string((void *)(v1 + 384));
    std::string::~string((void *)(v1 + 320));
  }
  std::ifstream::~ifstream(v1 + 800);
  std::string::~string((void *)(v1 + 256));
  std::shared_ptr<Config::SVOInstance>::~shared_ptr((std::shared_ptr<Config::SVOInstance> *const)(v1 + 64));
  std::shared_ptr<Config::SVOInstance>::~shared_ptr((std::shared_ptr<Config::SVOInstance> *const)(v1 + 32));
  if ( v28 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF802C) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8034) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF803C) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8044) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF804C) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8054) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8060) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF80A4) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF80AC) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF80B4) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF80F4) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF80FC) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8104) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_6(v1, 2112LL, v28);
  }
  return v8;
};

// Line 316: range 000000000CBAEF90-000000000CBAF5F0
int32_t __cdecl Config::loadSVOBlockData(
        Config *const this,
        const std::string *filename,
        uint32_t md5,
        const std::shared_ptr<Config::SVOInstance> *old_config,
        std::shared_ptr<Config::SVOInstance> *config,
        std::set<unsigned int> *changed_scene_ids)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  const char *v9; // rax
  int32_t v10; // r14d
  const char *v11; // rax
  std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,Config::SVOBlockDataInstance>,false,false>::pointer v14; // rdx
  uint32_t *p_md5; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,Config::SVOBlockDataInstance>,false,false>::pointer v16; // rax
  std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  uint32_t *v18; // rax
  std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  int *p_sceneId; // rdx
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  int32_t result; // eax
  std::unordered_map<unsigned int,Config::SVOBlockDataInstance>::key_type __x; // [rsp+40h] [rbp-F0h] BYREF
  int32_t data_id; // [rsp+44h] [rbp-ECh]
  unsigned __int64 start_load_time; // [rsp+48h] [rbp-E8h]
  Config::SVOBlockDataInstance *block_config; // [rsp+50h] [rbp-E0h]
  unsigned __int64 end_parse_data_time; // [rsp+58h] [rbp-D8h]
  common::milog::MiLogStream v34; // [rsp+60h] [rbp-D0h] BYREF
  char v35[176]; // [rsp+80h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 32 8 15 old_data_it:333 64 8 14 total_time:364 96 16 14 block_data:330";
  *(_QWORD *)(v6 + 16) = Config::loadSVOBlockData;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218959360;
  v8[536862722] = -218959360;
  v8[536862723] = -202178560;
  if ( std::operator==<Config::SVOInstance>(config, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/config/config.cpp",
      "loadSVOBlockData",
      319);
    v9 = (const char *)std::string::c_str(filename);
    common::milog::MiLogStream::operator()(&v34, "config of %s is null", v9);
    common::milog::MiLogStream::~MiLogStream(&v34);
    v10 = -1;
    goto LABEL_24;
  }
  data_id = CommonUtils::GetDataIdFromFilename(filename);
  if ( !data_id )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/config/config.cpp",
      "loadSVOBlockData",
      326);
    v11 = (const char *)std::string::c_str(filename);
    common::milog::MiLogStream::operator()(&v34, "invalid data id from %s", v11);
    common::milog::MiLogStream::~MiLogStream(&v34);
    v10 = -1;
    goto LABEL_24;
  }
  *(_QWORD *)(v6 + 96) = 0LL;
  *(_QWORD *)(v6 + 104) = 0LL;
  if ( std::operator!=<Config::SVOInstance>(old_config, 0LL) )
  {
    v12 = std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)old_config);
    __x = data_id;
    *(std::unordered_map<unsigned int,Config::SVOBlockDataInstance>::iterator *)(v6 + 32) = std::unordered_map<unsigned int,Config::SVOBlockDataInstance>::find(
                                                                                              &v12->block_data_map,
                                                                                              &__x);
    v13 = std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)old_config);
    *(std::unordered_map<unsigned int,Config::SVOBlockDataInstance>::iterator *)(v6 + 64) = std::unordered_map<unsigned int,Config::SVOBlockDataInstance>::end(&v13->block_data_map);
    if ( std::__detail::operator!=<std::pair<unsigned int const,Config::SVOBlockDataInstance>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,Config::SVOBlockDataInstance>,false> *)(v6 + 32),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,Config::SVOBlockDataInstance>,false> *)(v6 + 64)) )
    {
      v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,Config::SVOBlockDataInstance>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,Config::SVOBlockDataInstance>,false,false> *const)(v6 + 32));
      p_md5 = &v14->second.md5;
      if ( *(_BYTE *)(((unsigned __int64)p_md5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_md5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_md5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_md5);
      }
      if ( md5 == v14->second.md5 )
      {
        v16 = std::__detail::_Node_iterator<std::pair<unsigned int const,Config::SVOBlockDataInstance>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,Config::SVOBlockDataInstance>,false,false> *const)(v6 + 32));
        std::shared_ptr<SVOBlock>::operator=((std::shared_ptr<SVOBlock> *const)(v6 + 96), &v16->second.block_data);
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/config/config.cpp",
          "loadSVOBlockData",
          340);
        common::milog::MiLogStream::operator()(&v34, "[Reload] Data md5 is the same! No need to load");
        common::milog::MiLogStream::~MiLogStream(&v34);
      }
    }
  }
  start_load_time = common::tools::TimeUtils::getNowMs();
  v17 = std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)config);
  __x = data_id;
  block_config = std::unordered_map<unsigned int,Config::SVOBlockDataInstance>::operator[](&v17->block_data_map, &__x);
  v18 = &block_config->md5;
  if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v18);
  }
  block_config->md5 = md5;
  if ( std::operator!=<SVOBlock>((const std::shared_ptr<SVOBlock> *)(v6 + 96), 0LL) )
  {
    std::shared_ptr<SVOBlock>::operator=(&block_config->block_data, (const std::shared_ptr<SVOBlock> *)(v6 + 96));
LABEL_22:
    end_parse_data_time = common::tools::TimeUtils::getNowMs();
    *(_QWORD *)(v6 + 64) = end_parse_data_time - start_load_time;
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/config/config.cpp",
      "loadSVOBlockData",
      365);
    v21 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v34, (const char (*)[13])"loaded file:");
    v22 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, filename);
    v23 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v22, (const char (*)[12])" totalTime:");
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v23, (const unsigned __int64 *)(v6 + 64));
    common::milog::MiLogStream::~MiLogStream(&v34);
    v10 = 0;
    goto LABEL_23;
  }
  if ( !Config::loadSVOBlockDataFromFile(this, filename, data_id, block_config) )
  {
    if ( std::operator!=<SVOBlock>(&block_config->block_data, 0LL) )
    {
      p_sceneId = &std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SVOBlock,(__gnu_cxx::_Lock_policy)2,false,false> *const)block_config)->sceneId;
      std::set<unsigned int>::emplace<int &>(changed_scene_ids, p_sceneId, p_sceneId);
    }
    goto LABEL_22;
  }
  v19 = std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)config);
  __x = data_id;
  std::unordered_map<unsigned int,Config::SVOBlockDataInstance>::erase(&v19->block_data_map, &__x);
  v10 = -1;
LABEL_23:
  std::shared_ptr<SVOBlock>::~shared_ptr((std::shared_ptr<SVOBlock> *const)(v6 + 96));
LABEL_24:
  result = v10;
  if ( v35 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 371: range 000000000CBAF5F2-000000000CBAF8F4
int32_t __cdecl Config::loadSVOBlockDataFromFile(
        Config *const this,
        const std::string *filename,
        uint32_t data_id,
        Config::SVOBlockDataInstance *block_config)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  const char *v7; // rax
  int32_t v8; // r14d
  const char *v9; // rax
  int32_t result; // eax
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-D0h] BYREF
  char v14[176]; // [rsp+40h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 16 13 block_ptr:379 64 32 15 current_dir:372";
  *(_QWORD *)(v4 + 16) = Config::loadSVOBlockDataFromFile;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862723] = -202116109;
  std::string::basic_string(v4 + 64);
  common::tools::FileUtils::getCurDirectory((std::string *)(v4 + 64));
  ProtoParser::ParseProtoBlock((const std::string *)(v4 + 32));
  if ( std::operator==<SVOBlock>((const std::shared_ptr<SVOBlock> *)(v4 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/config/config.cpp",
      "loadSVOBlockDataFromFile",
      381);
    v7 = (const char *)std::string::c_str(filename);
    common::milog::MiLogStream::operator()(&v13, "loadSVOBlockDataFromFile %s failed", v7);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    std::shared_ptr<SVOBlock>::operator=(&block_config->block_data, (const std::shared_ptr<SVOBlock> *)(v4 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&block_config->data_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&block_config->data_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&block_config->data_id);
    }
    block_config->data_id = data_id;
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSVOBlockDataFromFile",
      388);
    v9 = (const char *)std::string::c_str(filename);
    common::milog::MiLogStream::operator()(&v13, "loadSVOBlockDataFromFile %s success", v9);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = 0;
  }
  std::shared_ptr<SVOBlock>::~shared_ptr((std::shared_ptr<SVOBlock> *const)(v4 + 32));
  std::string::~string((void *)(v4 + 64));
  result = v8;
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 392: range 000000000CBAF8F6-000000000CBB04F4
int32_t __cdecl Config::loadAllSVOWorldData(
        Config *const this,
        const std::vector<std::string> *filename_list,
        const std::vector<unsigned int> *md5_list,
        const std::shared_ptr<Config::SVOInstance> *old_config,
        std::shared_ptr<Config::SVOInstance> *config,
        std::set<unsigned int> *changed_data_ids)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  int32_t v9; // r14d
  std::vector<std::string>::size_type v10; // r14
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::unordered_map<unsigned int,Config::SVOWorldDataInstance>::mapped_type *v17; // rax
  std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  int32_t result; // eax
  bool is_data_changed; // [rsp+33h] [rbp-24Dh]
  std::unordered_map<unsigned int,Config::SVOWorldDataInstance>::key_type __k; // [rsp+34h] [rbp-24Ch] BYREF
  std::map<int,std::map<const IntPair,const std::string&>>::iterator __for_begin; // [rsp+38h] [rbp-248h] BYREF
  std::map<int,std::map<const IntPair,const std::string&>>::iterator __for_end; // [rsp+40h] [rbp-240h] BYREF
  std::_Rb_tree_iterator<std::pair<int const,std::map<const IntPair,unsigned int> > >::_Self __x; // [rsp+48h] [rbp-238h] BYREF
  std::_Rb_tree_iterator<std::pair<int const,std::map<const IntPair,unsigned int> > >::_Self __y; // [rsp+50h] [rbp-230h] BYREF
  std::map<int,std::map<const IntPair,const std::string&>> *__for_range; // [rsp+58h] [rbp-228h]
  std::pair<int const,std::map<const IntPair,const std::string&> > *world_data_addr_item; // [rsp+60h] [rbp-220h]
  std::map<const IntPair,const std::string&> *world_file_input_map; // [rsp+68h] [rbp-218h]
  std::map<const IntPair,unsigned int> *world_md5_input_map; // [rsp+70h] [rbp-210h]
  unsigned __int64 start_load_time; // [rsp+78h] [rbp-208h]
  Config::SVOWorldDataInstance *world_ins; // [rsp+80h] [rbp-200h]
  unsigned __int64 end_parse_data_time; // [rsp+88h] [rbp-1F8h]
  std::map<const IntPair,const std::string&> worldDataAddrMap; // [rsp+90h] [rbp-1F0h] BYREF
  common::milog::MiLogStream v41; // [rsp+D0h] [rbp-1B0h] BYREF
  char v42[400]; // [rsp+F0h] [rbp-190h] BYREF

  v6 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_3(352LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "6 48 4 11 data_id:412 64 8 14 total_time:465 96 16 14 world_data:425 128 24 22 old_world_data_in"
                        "s:429 192 48 23 world_data_addr_map:405 272 48 17 world_md5_map:406";
  *(_QWORD *)(v6 + 16) = Config::loadAllSVOWorldData;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -218959360;
  v8[536862723] = -219021312;
  v8[536862724] = -234881024;
  v8[536862725] = -218959118;
  v8[536862727] = -219021312;
  v8[536862728] = 62194;
  v8[536862730] = -202116109;
  if ( std::operator==<Config::SVOInstance>(config, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/config/config.cpp",
      "loadAllSVOWorldData",
      395);
    common::milog::MiLogStream::operator()(&v41, "[LoadWorld] world data config is null.");
    common::milog::MiLogStream::~MiLogStream(&v41);
    v9 = -1;
  }
  else
  {
    v10 = std::vector<std::string>::size(filename_list);
    if ( v10 == std::vector<unsigned int>::size(md5_list) )
    {
      std::map<int,std::map<IntPair const,std::string const&>>::map((std::map<int,std::map<const IntPair,const std::string&>> *const)(v6 + 192));
      std::map<int,std::map<IntPair const,unsigned int>>::map((std::map<int,std::map<const IntPair,unsigned int>> *const)(v6 + 272));
      AddrProcessor::GenerateFileInfoForWorld(
        filename_list,
        md5_list,
        (std::map<int,std::map<const IntPair,const std::string&>> *)(v6 + 192),
        (std::map<int,std::map<const IntPair,unsigned int>> *)(v6 + 272));
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/config/config.cpp",
        "loadAllSVOWorldData",
        409);
      v11 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
              &v41,
              (const char (*)[54])"[LoadWorld] finished parsing file addr. file counts: ");
      *(_QWORD *)(v6 + 64) = std::vector<std::string>::size(filename_list);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v11, (const unsigned __int64 *)(v6 + 64));
      common::milog::MiLogStream::~MiLogStream(&v41);
      __for_range = (std::map<int,std::map<const IntPair,const std::string&>> *)(v6 + 192);
      __for_begin._M_node = std::map<int,std::map<IntPair const,std::string const&>>::begin((std::map<int,std::map<const IntPair,const std::string&>> *const)(v6 + 192))._M_node;
      __for_end._M_node = std::map<int,std::map<IntPair const,std::string const&>>::end((std::map<int,std::map<const IntPair,const std::string&>> *const)(v6 + 192))._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        world_data_addr_item = std::_Rb_tree_iterator<std::pair<int const,std::map<IntPair const,std::string const&>>>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)world_data_addr_item >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)world_data_addr_item >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(world_data_addr_item);
        }
        *(_DWORD *)(v6 + 48) = world_data_addr_item->first;
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&worldDataAddrMap._M_t._M_impl._M_header._M_right,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/config/config.cpp",
          "loadAllSVOWorldData",
          413);
        v12 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                (common::milog::MiLogStream *const)&worldDataAddrMap._M_t._M_impl._M_header._M_right,
                (const char (*)[32])"[ToTheMoon][LoadWorld] loading ");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v6 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&worldDataAddrMap._M_t._M_impl._M_header._M_right);
        world_file_input_map = &world_data_addr_item->second;
        __y._M_node = std::map<int,std::map<IntPair const,unsigned int>>::end((std::map<int,std::map<const IntPair,unsigned int>> *const)(v6 + 272))._M_node;
        __x._M_node = std::map<int,std::map<IntPair const,unsigned int>>::find(
                        (std::map<int,std::map<const IntPair,unsigned int>> *const)(v6 + 272),
                        (const std::map<int,std::map<const IntPair,unsigned int>>::key_type *)(v6 + 48))._M_node;
        if ( std::operator==(&__x, &__y) )
        {
          common::milog::MiLogStream::create(
            &v41,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/config/config.cpp",
            "loadAllSVOWorldData",
            417);
          common::milog::MiLogStream::operator()(
            &v41,
            "[LoadWorld] md5 for world %d not found",
            *(unsigned int *)(v6 + 48));
          common::milog::MiLogStream::~MiLogStream(&v41);
        }
        else
        {
          world_md5_input_map = std::map<int,std::map<IntPair const,unsigned int>>::at(
                                  (std::map<int,std::map<const IntPair,unsigned int>> *const)(v6 + 272),
                                  (const std::map<int,std::map<const IntPair,unsigned int>>::key_type *)(v6 + 48));
          is_data_changed = 0;
          start_load_time = common::tools::TimeUtils::getNowMs();
          std::shared_ptr<SVOWorld>::shared_ptr((std::shared_ptr<SVOWorld> *const)(v6 + 96), 0LL);
          if ( std::operator!=<Config::SVOInstance>(old_config, 0LL)
            && (v13 = std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)old_config),
                *(std::unordered_map<unsigned int,Config::SVOWorldDataInstance>::iterator *)(v6 + 64) = std::unordered_map<unsigned int,Config::SVOWorldDataInstance>::end(&v13->world_data_map),
                v14 = std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)old_config),
                __k = *(_DWORD *)(v6 + 48),
                __y._M_node = (std::_Rb_tree_iterator<std::pair<int const,std::map<const IntPair,unsigned int> > >::_Base_ptr)std::unordered_map<unsigned int,Config::SVOWorldDataInstance>::find(&v14->world_data_map, &__k)._M_cur,
                std::__detail::operator!=<std::pair<unsigned int const,Config::SVOWorldDataInstance>,false>(
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,Config::SVOWorldDataInstance>,false> *)&__y,
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,Config::SVOWorldDataInstance>,false> *)(v6 + 64))) )
          {
            v16 = std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)old_config);
            __k = *(_DWORD *)(v6 + 48);
            v17 = std::unordered_map<unsigned int,Config::SVOWorldDataInstance>::at(&v16->world_data_map, &__k);
            Config::SVOWorldDataInstance::SVOWorldDataInstance((Config::SVOWorldDataInstance *const)(v6 + 128), v17);
            std::shared_ptr<SVOWorld>::shared_ptr(
              (std::shared_ptr<SVOWorld> *const)&worldDataAddrMap._M_t._M_impl._M_header._M_parent,
              (const std::shared_ptr<SVOWorld> *)(v6 + 128));
            ProtoParser::UpdateProtoWorld(
              &worldDataAddrMap,
              (const std::map<const IntPair,unsigned int> *)world_file_input_map,
              (std::shared_ptr<SVOWorld> *)world_md5_input_map,
              (bool)&worldDataAddrMap._M_t._M_impl._M_header._M_parent);
            std::shared_ptr<SVOWorld>::operator=(
              (std::shared_ptr<SVOWorld> *const)(v6 + 96),
              (std::shared_ptr<SVOWorld> *)&worldDataAddrMap);
            std::shared_ptr<SVOWorld>::~shared_ptr((std::shared_ptr<SVOWorld> *const)&worldDataAddrMap);
            std::shared_ptr<SVOWorld>::~shared_ptr((std::shared_ptr<SVOWorld> *const)&worldDataAddrMap._M_t._M_impl._M_header._M_parent);
            if ( std::operator!=<SVOWorld>((const std::shared_ptr<SVOWorld> *)(v6 + 96), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v41,
                &common::milog::MiLogDefault::default_log_obj_,
                5u,
                "./src/config/config.cpp",
                "loadAllSVOWorldData",
                433);
              common::milog::MiLogStream::operator()(
                &v41,
                "[LoadWorld] update world data with data_id %d : succeeded.",
                *(unsigned int *)(v6 + 48));
              common::milog::MiLogStream::~MiLogStream(&v41);
              is_data_changed = 1;
            }
            else
            {
              common::milog::MiLogStream::create(
                &v41,
                &common::milog::MiLogDefault::default_log_obj_,
                5u,
                "./src/config/config.cpp",
                "loadAllSVOWorldData",
                438);
              common::milog::MiLogStream::operator()(
                &v41,
                "[LoadWorld] update world data with data_id %d : keep the same.",
                *(unsigned int *)(v6 + 48));
              common::milog::MiLogStream::~MiLogStream(&v41);
            }
            Config::SVOWorldDataInstance::~SVOWorldDataInstance((Config::SVOWorldDataInstance *const)(v6 + 128));
          }
          else
          {
            ProtoParser::ParseProtoWorld(
              (const std::map<const IntPair,const std::string&> *)&worldDataAddrMap._M_t._M_impl._M_header._M_parent,
              (const std::map<const IntPair,unsigned int> *)world_file_input_map,
              (bool)world_md5_input_map);
            std::shared_ptr<SVOWorld>::operator=(
              (std::shared_ptr<SVOWorld> *const)(v6 + 96),
              (std::shared_ptr<SVOWorld> *)&worldDataAddrMap._M_t._M_impl._M_header._M_parent);
            std::shared_ptr<SVOWorld>::~shared_ptr((std::shared_ptr<SVOWorld> *const)&worldDataAddrMap._M_t._M_impl._M_header._M_parent);
            is_data_changed = 1;
            if ( std::operator!=<SVOWorld>((const std::shared_ptr<SVOWorld> *)(v6 + 96), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v41,
                &common::milog::MiLogDefault::default_log_obj_,
                5u,
                "./src/config/config.cpp",
                "loadAllSVOWorldData",
                447);
              common::milog::MiLogStream::operator()(
                &v41,
                "[LoadWorld] load world data with data_id %d succeeded.",
                *(unsigned int *)(v6 + 48));
            }
            else
            {
              common::milog::MiLogStream::create(
                &v41,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/config/config.cpp",
                "loadAllSVOWorldData",
                451);
              common::milog::MiLogStream::operator()(
                &v41,
                "[LoadWorld] load world data with data_id %d failed.",
                *(unsigned int *)(v6 + 48));
            }
            common::milog::MiLogStream::~MiLogStream(&v41);
          }
          if ( std::operator!=<SVOWorld>((const std::shared_ptr<SVOWorld> *)(v6 + 96), 0LL) )
          {
            v18 = std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)config);
            __k = *(_DWORD *)(v6 + 48);
            world_ins = std::unordered_map<unsigned int,Config::SVOWorldDataInstance>::operator[](
                          &v18->world_data_map,
                          &__k);
            std::shared_ptr<SVOWorld>::operator=(&world_ins->world_data, (const std::shared_ptr<SVOWorld> *)(v6 + 96));
            if ( is_data_changed )
              std::set<unsigned int>::emplace<int &>(changed_data_ids, (int *)(v6 + 48), (int *)(v6 + 48));
          }
          end_parse_data_time = common::tools::TimeUtils::getNowMs();
          *(_QWORD *)(v6 + 64) = end_parse_data_time - start_load_time;
          common::milog::MiLogStream::create(
            &v41,
            &common::milog::MiLogDefault::default_log_obj_,
            2u,
            "./src/config/config.cpp",
            "loadAllSVOWorldData",
            466);
          v19 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  &v41,
                  (const char (*)[30])"[LoadWorld] loaded file data ");
          v20 = common::milog::MiLogStream::operator<<<int,(int *)0>(v19, (const int *)(v6 + 48));
          v21 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v20, (const char (*)[12])" totalTime:");
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v21,
            (const unsigned __int64 *)(v6 + 64));
          common::milog::MiLogStream::~MiLogStream(&v41);
          std::shared_ptr<SVOWorld>::~shared_ptr((std::shared_ptr<SVOWorld> *const)(v6 + 96));
        }
        std::_Rb_tree_iterator<std::pair<int const,std::map<IntPair const,std::string const&>>>::operator++(&__for_begin);
      }
      v9 = 0;
      std::map<int,std::map<IntPair const,unsigned int>>::~map((std::map<int,std::map<const IntPair,unsigned int>> *const)(v6 + 272));
      std::map<int,std::map<IntPair const,std::string const&>>::~map((std::map<int,std::map<const IntPair,const std::string&>> *const)(v6 + 192));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/config/config.cpp",
        "loadAllSVOWorldData",
        401);
      common::milog::MiLogStream::operator()(&v41, "[LoadWorld] loadSVOWorldData failed for different data list size.");
      common::milog::MiLogStream::~MiLogStream(&v41);
      v9 = -1;
    }
  }
  result = v9;
  if ( v42 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 472: range 000000000CBB04F6-000000000CBB052B
int32_t __cdecl Config::rewriteConfig(Config *const this)
{
  common::tools::TimeUtils::getNow();
  return 0;
};

// Line 483: range 000000000CBB052C-000000000CBB0580
int32_t __cdecl Config::getOldestVersion(const Config *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->oldest_version >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->oldest_version >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->oldest_version);
  }
  return this->oldest_version;
};

// Line 488: range 000000000CBB0582-000000000CBB0598
int32_t __cdecl Config::getVertionIndex(const Config *const this, int32_t version)
{
  return -1;
};

// Line 494: range 000000000CBB059A-000000000CBB05AB
int32_t __cdecl Config::getVersionByIndex(const Config *const this, int32_t index)
{
  return 0;
};

// Line 499: range 000000000CBB05AC-000000000CBB069D
bool __cdecl Config::IsIgnoreScene(Config *const this, uint32_t scene_id)
{
  data::SceneExcelConfig *scene_data; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  scene_data = data::SceneExcelConfigMgrBase::findSceneExcelConfig(
                 &this->design_config.txt_config_mgr.scene_config_mgr,
                 scene_id);
  if ( scene_data )
  {
    if ( *(_BYTE *)(((unsigned __int64)&scene_data->ignore_nav_mesh >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)scene_data + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&scene_data->ignore_nav_mesh >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_load1(&scene_data->ignore_nav_mesh);
    }
    return scene_data->ignore_nav_mesh;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/config/config.cpp",
      "IsIgnoreScene",
      503);
    common::milog::MiLogStream::operator()(&v4, "can't find scene data[%u]", scene_id);
    common::milog::MiLogStream::~MiLogStream(&v4);
    return 1;
  }
};

// Line 510: range 000000000CBB069E-000000000CBB09C8
std::shared_ptr<SVOBlock> __cdecl Config::GetStaticBlockData(const Config *const this, int data_id)
{
  int v2; // edx
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v6; // r14d
  const std::shared_ptr<Config::SVOInstance> *v7; // rax
  std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::unordered_map<unsigned int,Config::SVOBlockDataInstance>::mapped_type *v12; // rdx
  std::shared_ptr<SVOBlock> result; // rax
  int data_ida; // [rsp+Ch] [rbp-E4h]
  std::unordered_map<unsigned int,Config::SVOBlockDataInstance>::key_type __x; // [rsp+2Ch] [rbp-C4h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,Config::SVOBlockDataInstance>,false> v16; // [rsp+30h] [rbp-C0h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,Config::SVOBlockDataInstance>,false> __y; // [rsp+38h] [rbp-B8h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+60h] [rbp-90h] BYREF

  data_ida = v2;
  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 12 instance:511 64 16 8 lock:513";
  *(_QWORD *)(v3 + 16) = Config::GetStaticBlockData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  *(_QWORD *)(v3 + 32) = 0LL;
  *(_QWORD *)(v3 + 40) = 0LL;
  boost::shared_lock<boost::shared_mutex>::shared_lock(
    (boost::shared_lock<boost::shared_mutex> *const)(v3 + 64),
    &Config::version_datas_mutex_);
  if ( std::vector<std::shared_ptr<Config::SVOInstance>>::size(&Config::version_datas) )
  {
    v7 = std::vector<std::shared_ptr<Config::SVOInstance>>::operator[](&Config::version_datas, 0LL);
    std::shared_ptr<Config::SVOInstance>::operator=((std::shared_ptr<Config::SVOInstance> *const)(v3 + 32), v7);
    v6 = 1;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/config/config.cpp",
      "GetStaticBlockData",
      516);
    common::milog::MiLogStream::operator()(&v18, "version_datas.size() == 0");
    common::milog::MiLogStream::~MiLogStream(&v18);
    std::shared_ptr<SVOBlock>::shared_ptr((std::shared_ptr<SVOBlock> *const)this, 0LL);
    v6 = 0;
  }
  boost::shared_lock<boost::shared_mutex>::~shared_lock((boost::shared_lock<boost::shared_mutex> *const)(v3 + 64));
  if ( v6 == 1 )
  {
    if ( std::operator==<Config::SVOInstance>((const std::shared_ptr<Config::SVOInstance> *)(v3 + 32), 0LL)
      || (v8 = std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
          __y._M_cur = std::unordered_map<unsigned int,Config::SVOBlockDataInstance>::end(&v8->block_data_map)._M_cur,
          v9 = std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
          __x = data_ida,
          v16._M_cur = std::unordered_map<unsigned int,Config::SVOBlockDataInstance>::find(&v9->block_data_map, &__x)._M_cur,
          std::__detail::operator==<std::pair<unsigned int const,Config::SVOBlockDataInstance>,false>(&v16, &__y)) )
    {
      std::shared_ptr<SVOBlock>::shared_ptr((std::shared_ptr<SVOBlock> *const)this, 0LL);
    }
    else
    {
      v11 = std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      __x = data_ida;
      v12 = std::unordered_map<unsigned int,Config::SVOBlockDataInstance>::operator[](&v11->block_data_map, &__x);
      std::shared_ptr<SVOBlock>::shared_ptr((std::shared_ptr<SVOBlock> *const)this, &v12->block_data);
    }
  }
  std::shared_ptr<Config::SVOInstance>::~shared_ptr((std::shared_ptr<Config::SVOInstance> *const)(v3 + 32));
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<SVOBlock,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 529: range 000000000CBB09CA-000000000CBB0D8F
const Config *__fastcall Config::GetStaticWorldData(const Config *const this, int data_id, int a3)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v6; // r14d
  const std::shared_ptr<Config::SVOInstance> *v7; // rax
  std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::unordered_map<unsigned int,Config::SVOWorldDataInstance>::mapped_type *v13; // rax
  std::unordered_map<unsigned int,Config::SVOWorldDataInstance>::key_type __x; // [rsp+2Ch] [rbp-E4h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,Config::SVOWorldDataInstance>,false> v17; // [rsp+30h] [rbp-E0h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,Config::SVOWorldDataInstance>,false> __y; // [rsp+38h] [rbp-D8h] BYREF
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-D0h] BYREF
  char v20[176]; // [rsp+60h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 11 data_id:528 64 16 12 instance:530 96 16 8 lock:532";
  *(_QWORD *)(v3 + 16) = Config::GetStaticWorldData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = a3;
  *(_QWORD *)(v3 + 64) = 0LL;
  *(_QWORD *)(v3 + 72) = 0LL;
  boost::shared_lock<boost::shared_mutex>::shared_lock(
    (boost::shared_lock<boost::shared_mutex> *const)(v3 + 96),
    &Config::version_datas_mutex_);
  if ( std::vector<std::shared_ptr<Config::SVOInstance>>::size(&Config::version_datas) )
  {
    v7 = std::vector<std::shared_ptr<Config::SVOInstance>>::operator[](&Config::version_datas, 0LL);
    std::shared_ptr<Config::SVOInstance>::operator=((std::shared_ptr<Config::SVOInstance> *const)(v3 + 64), v7);
    v6 = 1;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/config/config.cpp",
      "GetStaticWorldData",
      535);
    common::milog::MiLogStream::operator()(&v19, "version_datas.size() == 0");
    common::milog::MiLogStream::~MiLogStream(&v19);
    std::shared_ptr<SVOWorld>::shared_ptr((std::shared_ptr<SVOWorld> *const)this, 0LL);
    v6 = 0;
  }
  boost::shared_lock<boost::shared_mutex>::~shared_lock((boost::shared_lock<boost::shared_mutex> *const)(v3 + 96));
  if ( v6 == 1 )
  {
    if ( std::operator==<Config::SVOInstance>((const std::shared_ptr<Config::SVOInstance> *)(v3 + 64), 0LL)
      || (v8 = std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64)),
          __y._M_cur = std::unordered_map<unsigned int,Config::SVOWorldDataInstance>::end(&v8->world_data_map)._M_cur,
          v9 = std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64)),
          __x = *(_DWORD *)(v3 + 48),
          v17._M_cur = std::unordered_map<unsigned int,Config::SVOWorldDataInstance>::find(&v9->world_data_map, &__x)._M_cur,
          std::__detail::operator==<std::pair<unsigned int const,Config::SVOWorldDataInstance>,false>(&v17, &__y)) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/config/config.cpp",
        "GetStaticWorldData",
        542);
      v11 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
              &v19,
              (const char (*)[52])"[ToTheMoon] GetStaticWorldData not found for scene ");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v11, (const int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v19);
      std::shared_ptr<SVOWorld>::shared_ptr((std::shared_ptr<SVOWorld> *const)this, 0LL);
    }
    else
    {
      v12 = std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::SVOInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      __x = *(_DWORD *)(v3 + 48);
      v13 = std::unordered_map<unsigned int,Config::SVOWorldDataInstance>::operator[](&v12->world_data_map, &__x);
      std::shared_ptr<SVOWorld>::shared_ptr((std::shared_ptr<SVOWorld> *const)this, &v13->world_data);
    }
  }
  std::shared_ptr<Config::SVOInstance>::~shared_ptr((std::shared_ptr<Config::SVOInstance> *const)(v3 + 64));
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return this;
};
