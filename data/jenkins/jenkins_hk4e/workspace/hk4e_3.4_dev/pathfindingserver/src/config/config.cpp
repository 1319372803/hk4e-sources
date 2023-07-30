// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/config/config.cpp

// Line 55: range 000000000CD592C6-000000000CD593B9
void __cdecl Config::NavMeshInstance::NavMeshInstance(Config::NavMeshInstance *const this)
{
  std::unordered_map<Config::StaticSceneKey,StaticNavMeshConfig,Config::StaticSceneKeyHash,std::equal_to<Config::StaticSceneKey>,std::allocator<std::pair<Config::StaticSceneKey const,StaticNavMeshConfig>>>::unordered_map(&this->static_nav_mesh_map);
  std::unordered_map<unsigned int,Config::ActivityStaticInfo>::unordered_map(&this->activity_static_nav_mesh_map);
  std::unordered_map<unsigned int,Config::NavMeshDataInstance>::unordered_map(&this->nav_mesh_data_map);
  std::unordered_map<unsigned int,Config::ActivitySceneInfo>::unordered_map(&this->activity_nav_mesh_data_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->version);
  }
  this->version = 0;
  ThreadSafeCountMgr::Add(CountTypeNavMeshInstance, 1);
};

// Line 59: range 000000000CD593BA-000000000CD59415
void __cdecl Config::NavMeshInstance::~NavMeshInstance(Config::NavMeshInstance *const this)
{
  ThreadSafeCountMgr::Add(CountTypeNavMeshInstance, -1);
  std::unordered_map<unsigned int,Config::ActivitySceneInfo>::~unordered_map(&this->activity_nav_mesh_data_info);
  std::unordered_map<unsigned int,Config::NavMeshDataInstance>::~unordered_map(&this->nav_mesh_data_map);
  std::unordered_map<unsigned int,Config::ActivityStaticInfo>::~unordered_map(&this->activity_static_nav_mesh_map);
  std::unordered_map<Config::StaticSceneKey,StaticNavMeshConfig,Config::StaticSceneKeyHash,std::equal_to<Config::StaticSceneKey>,std::allocator<std::pair<Config::StaticSceneKey const,StaticNavMeshConfig>>>::~unordered_map(&this->static_nav_mesh_map);
};

// Line 74: range 000000000CB5B004-000000000CB5B29D
int32_t __cdecl Config::loadConfig(
        Config *const this,
        const std::string *config_file_name,
        ConfigBasePtr *p_prev_config_ptr)
{
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-30h] BYREF

  if ( Config::loadSystemConfig(this, config_file_name) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/config/config.cpp",
      "loadConfig",
      78);
    v3 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v8, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v3, (const char (*)[24])"loadSystemConfig failed");
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
  else if ( Config::loadVersionData(this) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/config/config.cpp",
      "loadConfig",
      84);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v8, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v5, (const char (*)[26])"loadResVersionData failed");
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
  else if ( Config::loadDesignConfig(this) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/config/config.cpp",
      "loadConfig",
      90);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v8, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v6, (const char (*)[24])"loadDesignConfig failed");
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
  else if ( Config::loadNavDatas(this) )
  {
    return -1;
  }
  else if ( Config::rewriteConfig(this) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/config/config.cpp",
      "loadConfig",
      104);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v8, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v7, (const char (*)[25])"activityDataParse failed");
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
  else
  {
    return 0;
  }
};

// Line 112: range 000000000CB5B29E-000000000CB5E2CE
int32_t __cdecl Config::loadSystemConfig(Config *const this, const std::string *config_file_name)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  ConfigBasePtr v6; // rdx
  bool v7; // r14
  common::milog::MiLogStream *v8; // rdx
  int32_t v9; // r14d
  common::tools::PTree *v10; // r14
  unsigned int v11; // edx
  const char *v12; // rax
  const char *v13; // rax
  const char *v14; // rax
  uint64_t v15; // rax
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  float v18; // edx
  __m128i max_obstacle_extent_low; // xmm0
  unsigned __int8 v20; // dl
  uint64_t v21; // rax
  uint64_t v22; // rax
  __m128i v23; // xmm0
  unsigned int v24; // ecx
  bool v25; // cl
  unsigned int v26; // edx
  unsigned int v27; // ecx
  std::vector<std::shared_ptr<Config::NavMeshInstance>>::size_type v28; // rcx
  const std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false> *v29; // rax
  std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  uint32_t version; // edi
  __int64 v32; // rax
  uint32_t server_res_version; // ecx
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-1E1h] BYREF
  float x; // [rsp+20h] [rbp-1E0h]
  float y; // [rsp+24h] [rbp-1DCh]
  float z; // [rsp+28h] [rbp-1D8h]
  float x_0; // [rsp+2Ch] [rbp-1D4h]
  float y_0; // [rsp+30h] [rbp-1D0h]
  float z_0; // [rsp+34h] [rbp-1CCh]
  float x_1; // [rsp+38h] [rbp-1C8h]
  float y_1; // [rsp+3Ch] [rbp-1C4h]
  float z_1; // [rsp+40h] [rbp-1C0h]
  float x_2; // [rsp+44h] [rbp-1BCh]
  float y_2; // [rsp+48h] [rbp-1B8h]
  float z_2; // [rsp+4Ch] [rbp-1B4h]
  std::string path; // [rsp+50h] [rbp-1B0h] BYREF
  std::string v50; // [rsp+70h] [rbp-190h] BYREF
  std::string v51; // [rsp+90h] [rbp-170h] BYREF
  common::milog::MiLogStream v52; // [rsp+B0h] [rbp-150h] BYREF
  char v53[304]; // [rsp+D0h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 8 13 region_pt:128 64 8 16 log_level_pt:133 96 8 20 data_dir_path_pt:138 128 8 26 token_kee"
                        "p_alive_ms_pt:143 160 8 11 node_pt:252 192 16 14 version_pt:120 224 16 8 lock:257";
  *(_QWORD *)(v3 + 16) = Config::loadSystemConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -219021312;
  v5[536862727] = -202178560;
  std::shared_ptr<ConfigBase>::shared_ptr((std::shared_ptr<ConfigBase> *const)(v3 + 224), 0LL);
  v6._M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)(v3 + 224);
  v7 = ConfigBase::loadConfig(this, config_file_name, v6) != 0;
  std::shared_ptr<ConfigBase>::~shared_ptr((std::shared_ptr<ConfigBase> *const)(v3 + 224));
  if ( v7 )
  {
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      116);
    v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v52,
           (const char (*)[36])"ConfigBase::loadConfig failed,file:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, config_file_name);
    common::milog::MiLogStream::~MiLogStream(&v52);
    v9 = -1;
  }
  else
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v52, "Root.BuildVersion", &__a);
    common::tools::PTree::getChildOptional((common::tools::PTree *)(v3 + 192), &this->pt, (const std::string *)&v52);
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 192)) )
    {
      v10 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 192));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&path, "<xmlattr>.value", &__a);
      v11 = common::tools::PTree::get<unsigned int>(v10, &path, 0);
      if ( *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->xml_config_version);
      }
      this->xml_config_version = v11;
      std::string::~string(&path);
      std::allocator<char>::~allocator(&__a);
      common::milog::MiLogStream::create(
        &v52,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/config/config.cpp",
        "loadSystemConfig",
        124);
      if ( *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) <= 3 )
      {
        *(double *)v2.m128i_i64 = __asan_report_load4(&this->xml_config_version);
      }
      common::milog::MiLogStream::operator()(&v52, "load xml_config_version=%u", this->xml_config_version);
      common::milog::MiLogStream::~MiLogStream(&v52);
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v52, "Root.RegionConf", &__a);
    common::tools::PTree::getChild(&this->pt, (const std::string *)&v52);
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v52, "<xmlattr>.name", &__a);
    common::tools::PTree::get<std::string>(
      &v50,
      (const common::tools::PTree *const)(v3 + 32),
      (const std::string *)&v52);
    std::string::operator=(&this->region_name, &v50);
    std::string::~string(&v50);
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      130);
    v12 = (const char *)std::string::c_str(&this->region_name);
    common::milog::MiLogStream::operator()(&v52, "load region_name=%s", v12);
    common::milog::MiLogStream::~MiLogStream(&v52);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v52, "Root.LogConf.LogLevelMask", &__a);
    common::tools::PTree::getChild(&this->pt, (const std::string *)&v52);
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v52, "<xmlattr>.value", &__a);
    common::tools::PTree::get<std::string>(
      &v51,
      (const common::tools::PTree *const)(v3 + 64),
      (const std::string *)&v52);
    std::string::operator=(&this->log_level_mask_, &v51);
    std::string::~string(&v51);
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      135);
    v13 = (const char *)std::string::c_str(&this->log_level_mask_);
    common::milog::MiLogStream::operator()(&v52, "load log_level_mask=%s", v13);
    common::milog::MiLogStream::~MiLogStream(&v52);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v52, "Root.PathfindingConf.DataDir", &__a);
    common::tools::PTree::getChild(&this->pt, (const std::string *)&v52);
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&v51, "<xmlattr>.name", &__a);
    common::tools::PTree::get<std::string>((std::string *)&v52, (const common::tools::PTree *const)(v3 + 96), &v51);
    std::string::operator=(&this->data_dir_path, &v52);
    std::string::~string(&v52);
    std::string::~string(&v51);
    std::allocator<char>::~allocator(&__a);
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      140);
    v14 = (const char *)std::string::c_str(&this->data_dir_path);
    common::milog::MiLogStream::operator()(&v52, "load data_dir_path=%s", v14);
    common::milog::MiLogStream::~MiLogStream(&v52);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)&v52,
      "Root.PathfindingConf.TokenKeepAliveMs",
      &__a);
    common::tools::PTree::getChild(&this->pt, (const std::string *)&v52);
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v52, "<xmlattr>.value", &__a);
    v15 = common::tools::PTree::get<unsigned long>(
            (const common::tools::PTree *const)(v3 + 128),
            (const std::string *)&v52);
    if ( *(_BYTE *)(((unsigned __int64)&this->token_keep_alive_ms >> 3) + 0x7FFF8000) )
      v15 = __asan_report_store8();
    this->token_keep_alive_ms = v15;
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      145);
    if ( *(_BYTE *)(((unsigned __int64)&this->token_keep_alive_ms >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->token_keep_alive_ms, &common::milog::MiLogDefault::default_log_obj_);
    common::milog::MiLogStream::operator()(&v52, "load token_keep_alive_ms=%lu", this->token_keep_alive_ms);
    common::milog::MiLogStream::~MiLogStream(&v52);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v52, "Root.PathfindingConf.SourceExtend", &__a);
    common::tools::PTree::getChild(&this->pt, (const std::string *)&v52);
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v52, "<xmlattr>.x", &__a);
    *(float *)v2.m128i_i32 = common::tools::PTree::get<float>(
                               (const common::tools::PTree *const)(v3 + 160),
                               (const std::string *)&v52);
    x = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v52, "<xmlattr>.y", &__a);
    *(float *)v2.m128i_i32 = common::tools::PTree::get<float>(
                               (const common::tools::PTree *const)(v3 + 160),
                               (const std::string *)&v52);
    y = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v52, "<xmlattr>.z", &__a);
    *(float *)v2.m128i_i32 = common::tools::PTree::get<float>(
                               (const common::tools::PTree *const)(v3 + 160),
                               (const std::string *)&v52);
    z = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    v16 = _mm_cvtsi32_si128(LODWORD(x));
    Vector3f::Set(&this->source_extend, *(float *)v16.m128i_i32, y, z);
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      154);
    *(double *)v16.m128i_i64 = x;
    common::milog::MiLogStream::operator()(&v52, "load source_extend=(%.2f,%.2f,%.2f)", x, y, z);
    common::milog::MiLogStream::~MiLogStream(&v52);
    common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 160));
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v52, "Root.PathfindingConf.TargetExtend", &__a);
    common::tools::PTree::getChild(&this->pt, (const std::string *)&v52);
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v52, "<xmlattr>.x", &__a);
    *(float *)v16.m128i_i32 = common::tools::PTree::get<float>(
                                (const common::tools::PTree *const)(v3 + 160),
                                (const std::string *)&v52);
    x_0 = COERCE_FLOAT(_mm_cvtsi128_si32(v16));
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v52, "<xmlattr>.y", &__a);
    *(float *)v16.m128i_i32 = common::tools::PTree::get<float>(
                                (const common::tools::PTree *const)(v3 + 160),
                                (const std::string *)&v52);
    y_0 = COERCE_FLOAT(_mm_cvtsi128_si32(v16));
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v52, "<xmlattr>.z", &__a);
    *(float *)v16.m128i_i32 = common::tools::PTree::get<float>(
                                (const common::tools::PTree *const)(v3 + 160),
                                (const std::string *)&v52);
    z_0 = COERCE_FLOAT(_mm_cvtsi128_si32(v16));
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    v17 = _mm_cvtsi32_si128(LODWORD(x_0));
    Vector3f::Set(&this->target_extend, *(float *)v17.m128i_i32, y_0, z_0);
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      164);
    *(double *)v17.m128i_i64 = x_0;
    common::milog::MiLogStream::operator()(&v52, "load target_extend=(%.2f,%.2f,%.2f)", x_0, y_0, z_0);
    common::milog::MiLogStream::~MiLogStream(&v52);
    common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 160));
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)&v52,
      "Root.PathfindingConf.MaxObstacleExtent",
      &__a);
    common::tools::PTree::getChild(&this->pt, (const std::string *)&v52);
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v52, "<xmlattr>.value", &__a);
    *(float *)v17.m128i_i32 = common::tools::PTree::get<float>(
                                (const common::tools::PTree *const)(v3 + 160),
                                (const std::string *)&v52);
    v18 = COERCE_FLOAT(_mm_cvtsi128_si32(v17));
    if ( *(_BYTE *)(((unsigned __int64)&this->max_obstacle_extent >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->max_obstacle_extent >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->max_obstacle_extent);
    }
    this->max_obstacle_extent = v18;
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    if ( *(_BYTE *)(((unsigned __int64)&this->max_obstacle_extent >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->max_obstacle_extent >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->max_obstacle_extent);
    }
    if ( this->max_obstacle_extent <= 0.0 )
      this->max_obstacle_extent = 128.0;
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      174);
    if ( *(_BYTE *)(((unsigned __int64)&this->max_obstacle_extent >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->max_obstacle_extent >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->max_obstacle_extent);
    }
    max_obstacle_extent_low = (__m128i)LODWORD(this->max_obstacle_extent);
    *(double *)max_obstacle_extent_low.m128i_i64 = *(float *)max_obstacle_extent_low.m128i_i32;
    common::milog::MiLogStream::operator()(
      &v52,
      "load max_obstacle_extent=%.2f",
      *(double *)max_obstacle_extent_low.m128i_i64);
    common::milog::MiLogStream::~MiLogStream(&v52);
    common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 160));
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v52, "Root.PathfindingConf.VersionCount", &__a);
    common::tools::PTree::getChild(&this->pt, (const std::string *)&v52);
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v52, "<xmlattr>.value", &__a);
    v20 = common::tools::PTree::get<unsigned char>(
            (const common::tools::PTree *const)(v3 + 160),
            (const std::string *)&v52);
    if ( *(char *)(((unsigned __int64)&this->version_count >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->version_count);
    this->version_count = v20;
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      180);
    if ( *(char *)(((unsigned __int64)&this->version_count >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->version_count);
    common::milog::MiLogStream::operator()(&v52, "load version_count=%u", this->version_count);
    common::milog::MiLogStream::~MiLogStream(&v52);
    if ( *(char *)(((unsigned __int64)&this->version_count >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->version_count);
    if ( !this->version_count )
      this->version_count = Config::max_version_data_count;
    common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 160));
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)&v52,
      "Root.PathfindingConf.RefreshMaxInterval",
      &__a);
    common::tools::PTree::getChild(&this->pt, (const std::string *)&v52);
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v52, "<xmlattr>.value", &__a);
    Config::refresh_max_interval = common::tools::PTree::get<unsigned int>(
                                     (const common::tools::PTree *const)(v3 + 160),
                                     (const std::string *)&v52);
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      191);
    common::milog::MiLogStream::operator()(&v52, "load refresh_max_interval=%u", Config::refresh_max_interval);
    common::milog::MiLogStream::~MiLogStream(&v52);
    if ( !Config::refresh_max_interval )
      Config::refresh_max_interval = 3600;
    common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 160));
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)&v52,
      "Root.PathfindingConf.ObstacleTimeLimit",
      &__a);
    common::tools::PTree::getChild(&this->pt, (const std::string *)&v52);
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v52, "<xmlattr>.value", &__a);
    v21 = common::tools::PTree::get<unsigned long>(
            (const common::tools::PTree *const)(v3 + 160),
            (const std::string *)&v52);
    if ( *(_BYTE *)(((unsigned __int64)&this->obstacle_time_limit >> 3) + 0x7FFF8000) )
      v21 = __asan_report_store8();
    this->obstacle_time_limit = v21;
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      202);
    if ( *(_BYTE *)(((unsigned __int64)&this->obstacle_time_limit >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->obstacle_time_limit, &common::milog::MiLogDefault::default_log_obj_);
    common::milog::MiLogStream::operator()(&v52, "load obstacle_time_limit=%lu", this->obstacle_time_limit);
    common::milog::MiLogStream::~MiLogStream(&v52);
    common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 160));
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)&v52,
      "Root.PathfindingConf.QueryPathReqTimeLimit",
      &__a);
    common::tools::PTree::getChild(&this->pt, (const std::string *)&v52);
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v52, "<xmlattr>.value", &__a);
    v22 = common::tools::PTree::get<unsigned long>(
            (const common::tools::PTree *const)(v3 + 160),
            (const std::string *)&v52);
    if ( *(_BYTE *)(((unsigned __int64)&this->query_path_req_time_limit >> 3) + 0x7FFF8000) )
      v22 = __asan_report_store8();
    this->query_path_req_time_limit = v22;
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      208);
    if ( *(_BYTE *)(((unsigned __int64)&this->query_path_req_time_limit >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->query_path_req_time_limit, &common::milog::MiLogDefault::default_log_obj_);
    common::milog::MiLogStream::operator()(&v52, "load path_query_req_time_limit=%lu", this->query_path_req_time_limit);
    common::milog::MiLogStream::~MiLogStream(&v52);
    common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 160));
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)&v52,
      "Root.PathfindingConf.QueryPathReqExtendLimit",
      &__a);
    common::tools::PTree::getChild(&this->pt, (const std::string *)&v52);
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v52, "<xmlattr>.x", &__a);
    *(float *)max_obstacle_extent_low.m128i_i32 = common::tools::PTree::get<float>(
                                                    (const common::tools::PTree *const)(v3 + 160),
                                                    (const std::string *)&v52);
    x_1 = COERCE_FLOAT(_mm_cvtsi128_si32(max_obstacle_extent_low));
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v52, "<xmlattr>.y", &__a);
    *(float *)max_obstacle_extent_low.m128i_i32 = common::tools::PTree::get<float>(
                                                    (const common::tools::PTree *const)(v3 + 160),
                                                    (const std::string *)&v52);
    y_1 = COERCE_FLOAT(_mm_cvtsi128_si32(max_obstacle_extent_low));
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v52, "<xmlattr>.z", &__a);
    *(float *)max_obstacle_extent_low.m128i_i32 = common::tools::PTree::get<float>(
                                                    (const common::tools::PTree *const)(v3 + 160),
                                                    (const std::string *)&v52);
    z_1 = COERCE_FLOAT(_mm_cvtsi128_si32(max_obstacle_extent_low));
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    v23 = _mm_cvtsi32_si128(LODWORD(x_1));
    Vector3f::Set(&this->query_path_req_extend_limit, *(float *)v23.m128i_i32, y_1, z_1);
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      217);
    *(double *)v23.m128i_i64 = x_1;
    common::milog::MiLogStream::operator()(&v52, "load query_path_req_extend_limit=(%.2f,%.2f,%.2f)", x_1, y_1, z_1);
    common::milog::MiLogStream::~MiLogStream(&v52);
    common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 160));
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)&v52,
      "Root.PathfindingConf.QueryPathReqTargetPointLimit",
      &__a);
    common::tools::PTree::getChild(&this->pt, (const std::string *)&v52);
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v52, "<xmlattr>.value", &__a);
    v24 = common::tools::PTree::get<unsigned int>(
            (const common::tools::PTree *const)(v3 + 160),
            (const std::string *)&v52);
    if ( *(_BYTE *)(((unsigned __int64)&this->query_path_req_target_point_limit >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->query_path_req_target_point_limit >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_store4(&this->query_path_req_target_point_limit);
    }
    this->query_path_req_target_point_limit = v24;
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      223);
    if ( *(_BYTE *)(((unsigned __int64)&this->query_path_req_target_point_limit >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->query_path_req_target_point_limit >> 3)
                                                           + 0x7FFF8000) )
    {
      *(double *)v23.m128i_i64 = __asan_report_load4(&this->query_path_req_target_point_limit);
    }
    common::milog::MiLogStream::operator()(
      &v52,
      "load query_path_req_target_point_limit=%u",
      this->query_path_req_target_point_limit);
    common::milog::MiLogStream::~MiLogStream(&v52);
    common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 160));
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v52, "Root.PathfindingConf.UseHavokCut", &__a);
    common::tools::PTree::getChild(&this->pt, (const std::string *)&v52);
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v52, "<xmlattr>.value", &__a);
    v25 = common::tools::PTree::get<bool>((const common::tools::PTree *const)(v3 + 160), (const std::string *)&v52);
    if ( *(_BYTE *)(((unsigned __int64)&this->use_havok_cut >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->use_havok_cut >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->use_havok_cut);
    }
    this->use_havok_cut = v25;
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      230);
    if ( *(_BYTE *)(((unsigned __int64)&this->use_havok_cut >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->use_havok_cut >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->use_havok_cut);
    }
    common::milog::MiLogStream::operator()(&v52, "load use_havok_cut=%d", this->use_havok_cut);
    common::milog::MiLogStream::~MiLogStream(&v52);
    common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 160));
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)&v52,
      "Root.PathfindingConf.ObstacleExtendLogLimit",
      &__a);
    common::tools::PTree::getChild(&this->pt, (const std::string *)&v52);
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v52, "<xmlattr>.x", &__a);
    *(float *)v23.m128i_i32 = common::tools::PTree::get<float>(
                                (const common::tools::PTree *const)(v3 + 160),
                                (const std::string *)&v52);
    x_2 = COERCE_FLOAT(_mm_cvtsi128_si32(v23));
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v52, "<xmlattr>.y", &__a);
    *(float *)v23.m128i_i32 = common::tools::PTree::get<float>(
                                (const common::tools::PTree *const)(v3 + 160),
                                (const std::string *)&v52);
    y_2 = COERCE_FLOAT(_mm_cvtsi128_si32(v23));
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v52, "<xmlattr>.z", &__a);
    *(float *)v23.m128i_i32 = common::tools::PTree::get<float>(
                                (const common::tools::PTree *const)(v3 + 160),
                                (const std::string *)&v52);
    z_2 = COERCE_FLOAT(_mm_cvtsi128_si32(v23));
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    Vector3f::Set(&this->obstacle_extend_log_limit, x_2, y_2, z_2);
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      240);
    common::milog::MiLogStream::operator()(&v52, "load obstacle_extend_log_limit=(%.2f,%.2f,%.2f)", x_2, y_2, z_2);
    common::milog::MiLogStream::~MiLogStream(&v52);
    common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 160));
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)&v52,
      "Root.PathfindingConf.TestPlayerCount",
      &__a);
    common::tools::PTree::getChild(&this->pt, (const std::string *)&v52);
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v52, "<xmlattr>.value", &__a);
    v26 = common::tools::PTree::get<unsigned int>(
            (const common::tools::PTree *const)(v3 + 160),
            (const std::string *)&v52);
    if ( *(_BYTE *)(((unsigned __int64)&this->test_player_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->test_player_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->test_player_count);
    }
    this->test_player_count = v26;
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      247);
    if ( *(_BYTE *)(((unsigned __int64)&this->test_player_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->test_player_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->test_player_count);
    }
    common::milog::MiLogStream::operator()(&v52, "load test_player_count=%u", this->test_player_count);
    common::milog::MiLogStream::~MiLogStream(&v52);
    common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 160));
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)&v52,
      "Root.PathfindingConf.CPUProfilingMode",
      &__a);
    common::tools::PTree::getChild(&this->pt, (const std::string *)&v52);
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v52, "<xmlattr>.value", &__a);
    v27 = common::tools::PTree::get<unsigned int>(
            (const common::tools::PTree *const)(v3 + 160),
            (const std::string *)&v52);
    if ( *(_BYTE *)(((unsigned __int64)&this->cpu_profiling_mode >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cpu_profiling_mode >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_store4(&this->cpu_profiling_mode);
    }
    this->cpu_profiling_mode = v27;
    std::string::~string(&v52);
    std::allocator<char>::~allocator(&__a);
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      254);
    if ( *(_BYTE *)(((unsigned __int64)&this->cpu_profiling_mode >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cpu_profiling_mode >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&this->cpu_profiling_mode);
    }
    common::milog::MiLogStream::operator()(&v52, "load cpu_profiling_mode=%u", this->cpu_profiling_mode);
    common::milog::MiLogStream::~MiLogStream(&v52);
    common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 160));
    boost::unique_lock<boost::shared_mutex>::unique_lock(
      (boost::unique_lock<boost::shared_mutex> *const)(v3 + 224),
      &Config::version_datas_mutex_);
    while ( 1 )
    {
      v28 = std::vector<std::shared_ptr<Config::NavMeshInstance>>::size(&Config::version_datas);
      if ( *(char *)(((unsigned __int64)&this->version_count >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->version_count);
      if ( v28 <= this->version_count )
        break;
      std::vector<std::shared_ptr<Config::NavMeshInstance>>::pop_back(&Config::version_datas);
    }
    if ( std::vector<std::shared_ptr<Config::NavMeshInstance>>::size(&Config::version_datas) )
    {
      v29 = (const std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false> *)std::vector<std::shared_ptr<Config::NavMeshInstance>>::back(&Config::version_datas);
      v30 = std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v29);
      if ( *(_BYTE *)(((unsigned __int64)&v30->version >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v30->version >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v30->version);
      }
      version = v30->version;
      if ( *(_BYTE *)(((unsigned __int64)&this->oldest_version >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->oldest_version >> 3) + 0x7FFF8000) )
      {
        version = (_DWORD)this + 292;
        __asan_report_store4(&this->oldest_version);
      }
      this->oldest_version = version;
    }
    else
    {
      v32 = *(unsigned __int8 *)(((unsigned __int64)&this->server_res_version >> 3) + 0x7FFF8000);
      if ( (_BYTE)v32 != 0 && (char)v32 <= 3 )
        __asan_report_load4(&this->server_res_version);
      server_res_version = this->server_res_version;
      if ( *(_BYTE *)(((unsigned __int64)&this->oldest_version >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->oldest_version >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->oldest_version);
      }
      this->oldest_version = server_res_version;
    }
    boost::unique_lock<boost::shared_mutex>::~unique_lock((boost::unique_lock<boost::shared_mutex> *const)(v3 + 224));
    if ( *(char *)(((unsigned __int64)&this->version_count >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->version_count);
    Config::max_version_data_count = this->version_count;
    v9 = 0;
    common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 128));
    common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 96));
    common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 64));
    common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 32));
    std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 192));
  }
  result = v9;
  if ( v53 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 276: range 000000000CB5E2D0-000000000CB5E3B4
void __cdecl Config::onReloadConfig(Config *const this)
{
  std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rbx
  std::allocator<char> __a; // [rsp+1Fh] [rbp-31h] BYREF
  std::string v3; // [rsp+20h] [rbp-30h] BYREF

  v1 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&v3, _s, &__a);
  if ( *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->xml_config_version);
  }
  MonitorReport::addValue(v1, 23LL, this->xml_config_version, (unsigned __int64)&v3);
  std::string::~string(&v3);
  std::allocator<char>::~allocator(&__a);
};

// Line 282: range 000000000CB5E3B6-000000000CB5E3D0
uint32_t __cdecl Config::getAppId(const Config *const this)
{
  PathfindingserverApp *v1; // rax

  v1 = Singleton<PathfindingserverApp>::instance();
  return AppBase::getAppId((AppBase *const)v1);
};

// Line 287: range 000000000CB5E3D2-000000000CB5E4DE
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
    294);
  common::milog::MiLogStream::operator()(&v4, "server res version:%d", this->server_res_version);
  common::milog::MiLogStream::~MiLogStream(&v4);
  return 0;
};

// Line 299: range 000000000CB5E4E0-000000000CB5F1A7
int32_t __cdecl Config::loadDesignConfig(Config *const this)
{
  common::tools::TimeUtils::Timer *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  HK4EDesignConfig *p_design_config; // rdi
  std::string *p_real_data_base_dir; // rcx
  int v6; // r12d
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  HK4EDesignConfig *p_is_readlink; // rdi
  std::string *p_real_res_base_dir; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  bool v17; // r12
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r12
  common::milog::MiLogStream *v22; // rax
  int32_t result; // eax
  float val; // [rsp+1Ch] [rbp-C4h] BYREF
  int ret_code; // [rsp+20h] [rbp-C0h]
  int32_t ret; // [rsp+24h] [rbp-BCh]
  DbLocalConfigMgr *mgr; // [rsp+30h] [rbp-B0h]
  std::shared_ptr<common::midb::MySqlMgrT<std::mutex> > p_mysql_mgr_ptr; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v30; // [rsp+50h] [rbp-90h] BYREF
  char v31[112]; // [rsp+70h] [rbp-70h] BYREF

  v1 = (common::tools::TimeUtils::Timer *)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (common::tools::TimeUtils::Timer *)v2;
  }
  v1->start_tv_.tv_sec = 1102416563LL;
  v1->start_tv_.tv_usec = (__suseconds_t)"1 32 16 9 timer:310";
  v1[1].start_tv_.tv_sec = (__time_t)Config::loadDesignConfig;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
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
  {
    v6 = ret_code;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/config/config.cpp",
      "loadDesignConfig",
      304);
    v7 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
           &v30,
           (const char (*)[21])"now config base dir:");
    v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
           v7,
           &this->design_config.real_data_base_dir);
    v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])" is_readlink:");
    if ( *(char *)(((unsigned __int64)&this->is_readlink >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_readlink);
    common::milog::MiLogStream::operator<<(v9, this->is_readlink);
    common::milog::MiLogStream::~MiLogStream(&v30);
    p_is_readlink = &this->design_config;
    p_real_res_base_dir = &this->design_config.real_res_base_dir;
    if ( *(char *)(((unsigned __int64)&this->is_readlink >> 3) + 0x7FFF8000) < 0 )
    {
      p_is_readlink = (HK4EDesignConfig *)&this->is_readlink;
      __asan_report_load1(&this->is_readlink);
    }
    ret_code = HK4EDesignConfig::tryGetReadLink(
                 p_is_readlink,
                 this->is_readlink,
                 &HK4EDesignConfig::res_path[abi:cxx11],
                 p_real_res_base_dir);
    if ( ret_code )
    {
      v6 = ret_code;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/config/config.cpp",
        "loadDesignConfig",
        308);
      v12 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              &v30,
              (const char (*)[18])"now res base dir:");
      v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
              v12,
              &this->design_config.real_res_base_dir);
      v14 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v13, (const char (*)[14])" is_readlink:");
      if ( *(char *)(((unsigned __int64)&this->is_readlink >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_readlink);
      common::milog::MiLogStream::operator<<(v14, this->is_readlink);
      common::milog::MiLogStream::~MiLogStream(&v30);
      common::tools::TimeUtils::Timer::Timer(v1 + 2);
      ret = data::SceneExcelConfigMgrBase::loadConfig(
              &this->design_config.txt_config_mgr.scene_config_mgr,
              &this->design_config);
      if ( ret
        || (ret = data::NewActivityExcelConfigMgrBase::loadConfig(
                    &this->design_config.txt_config_mgr.new_activity_config_mgr,
                    &this->design_config)) != 0
        || (ret = ConstValueExcelConfigMgr::loadConfig(
                    &this->design_config.txt_config_mgr.const_value_config_mgr,
                    &this->design_config)) != 0
        || (ret = data::ActivitySalesmanExcelConfigMgrBase::loadConfig(
                    &this->design_config.txt_config_mgr.activity_salesman_config_mgr,
                    &this->design_config)) != 0 )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/config/config.cpp",
          "loadDesignConfig",
          315);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                &v30,
                (const char (*)[16])"[CONFIG_ERROR] ");
        v16 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v15, (const char (*)[11])"loadConfig");
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])"failed");
        common::milog::MiLogStream::~MiLogStream(&v30);
        v6 = -1;
      }
      else
      {
        std::shared_ptr<common::midb::MySqlMgrT<std::mutex>>::shared_ptr(&p_mysql_mgr_ptr, &ResourceBox::mysql_mgr_ptr);
        v17 = Config::loadDbData(this, &p_mysql_mgr_ptr) != 0;
        std::shared_ptr<common::midb::MySqlMgrT<std::mutex>>::~shared_ptr(&p_mysql_mgr_ptr);
        if ( v17 )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/config/config.cpp",
            "loadDesignConfig",
            322);
          v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  &v30,
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v18, (const char (*)[18])"loadDbData failed");
          common::milog::MiLogStream::~MiLogStream(&v30);
          v6 = -1;
        }
        else
        {
          mgr = &this->design_config.db_config_mgr.db_local_config_mgr;
          if ( data::DbActivityScheduleConfigMgr::rewriteDbActivityScheduleConfig(&this->design_config.db_config_mgr.db_local_config_mgr.activity_schedule_config_mgr) )
          {
            common::milog::MiLogStream::create(
              &v30,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/config/config.cpp",
              "loadDesignConfig",
              329);
            v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    &v30,
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(v19, (const char (*)[77])byte_1A5F1320);
            common::milog::MiLogStream::~MiLogStream(&v30);
            v6 = -1;
          }
          else if ( data::DbActivityScheduleConfigMgr::checkDbActivityScheduleConfig(
                      &mgr->activity_schedule_config_mgr,
                      &this->design_config.txt_config_mgr) )
          {
            common::milog::MiLogStream::create(
              &v30,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/config/config.cpp",
              "loadDesignConfig",
              335);
            v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    &v30,
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [101],(char *[101])0>(v20, (const char (*)[101])byte_1A5F13A0);
            common::milog::MiLogStream::~MiLogStream(&v30);
            v6 = -1;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v30,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/config/config.cpp",
              "loadDesignConfig",
              356);
            v21 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                    &v30,
                    (const char (*)[56])byte_1A5F1440);
            val = (float)common::tools::TimeUtils::Timer::time(v1 + 2) / 1000.0;
            v22 = common::milog::MiLogStream::operator<<<float,(float *)0>(v21, &val);
            common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v22, (const char (*)[30])byte_1A5F14A0);
            common::milog::MiLogStream::~MiLogStream(&v30);
            v6 = ret_code;
          }
        }
      }
      common::tools::TimeUtils::Timer::~Timer(v1 + 2);
    }
  }
  result = v6;
  if ( v31 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->start_tv_.tv_sec = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 385: range 000000000CB5F1A8-000000000CB5F86C
int32_t __cdecl Config::loadDbData(
        Config *const this,
        std::shared_ptr<common::midb::MySqlMgrT<std::mutex> > *p_mysql_mgr_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  int v9; // r15d
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int32_t result; // eax
  float val; // [rsp+2Ch] [rbp-D4h] BYREF
  int32_t ret; // [rsp+30h] [rbp-D0h]
  uint32_t mysql_index; // [rsp+34h] [rbp-CCh]
  DbLocalConfigMgr *mgr; // [rsp+40h] [rbp-C0h]
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 9 timer:398 64 16 12 conn_ptr:403";
  *(_QWORD *)(v3 + 16) = Config::loadDbData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  if ( std::operator==<common::midb::MySqlMgrT<std::mutex>>(0LL, p_mysql_mgr_ptr) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/config/config.cpp",
      "loadDbData",
      388);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v19, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v6, (const char (*)[25])"mysql_mgr_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v19);
    v2 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_mysql_mgr_ptr);
    if ( !common::midb::MySqlMgrT<std::mutex>::isInit(v7) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/config/config.cpp",
        "loadDbData",
        394);
      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
        &v19,
        (const char (*)[42])"mysql_mgr_ptr not init, ignore loadDbData");
      common::milog::MiLogStream::~MiLogStream(&v19);
      v2 = 0;
    }
    else
    {
      common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v3 + 32));
      ret = 0;
      mysql_index = DbConfigMgr::getMysqlIndexByDbConfigType(DB_CONFIG_LOCAL);
      v8 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_mysql_mgr_ptr);
      common::midb::MySqlMgrT<std::mutex>::grab(v8, mysql_index, 0);
      if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v3 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/config/config.cpp",
          "loadDbData",
          406);
        common::milog::MiLogStream::operator()(&v19, "grab connect failed");
        common::milog::MiLogStream::~MiLogStream(&v19);
        v2 = -1;
        v9 = 0;
      }
      else
      {
        mgr = &this->design_config.db_config_mgr.db_local_config_mgr;
        if ( data::DbActivityScheduleConfigMgr::loadDbActivityScheduleConfig(
               &this->design_config.db_config_mgr.db_local_config_mgr.activity_schedule_config_mgr,
               (common::midb::MysqlConnPtr *)(v3 + 64)) )
        {
          common::milog::MiLogStream::create(
            &v19,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/config/config.cpp",
            "loadDbData",
            415);
          v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  &v19,
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
            v10,
            (const char (*)[32])"db_config_mgr.loadConfig failed");
          common::milog::MiLogStream::~MiLogStream(&v19);
          ret = -1;
        }
        v9 = 1;
      }
      std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v3 + 64));
      if ( v9 == 1 )
      {
        if ( ret )
        {
          common::milog::MiLogStream::create(
            &v19,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/config/config.cpp",
            "loadDbData",
            430);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  &v19,
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [90],(char *[90])0>(v13, (const char (*)[90])byte_1A5F17E0);
          common::milog::MiLogStream::~MiLogStream(&v19);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v19,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/config/config.cpp",
            "loadDbData",
            426);
          v11 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(&v19, (const char (*)[55])byte_1A5F1740);
          val = (float)common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v3 + 32))
              / 1000.0;
          v12 = common::milog::MiLogStream::operator<<<float,(float *)0>(v11, &val);
          common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v12, (const char (*)[29])byte_1A5F17A0);
          common::milog::MiLogStream::~MiLogStream(&v19);
        }
        v2 = ret;
      }
      common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v3 + 32));
    }
  }
  result = v2;
  if ( v20 == (char *)v3 )
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
  return result;
};

// Line 436: range 000000000CB5F86D-000000000CB5FB58
uint32_t __cdecl innerCalcActivityHash(dynamic_array<unsigned int,false,4> *activity_ids)
{
  unsigned int *v2; // rax
  uint32_t *v3; // rdx
  unsigned int *v4; // rax
  unsigned int *v5; // rdx
  unsigned int v6; // ebx
  unsigned int *v7; // rax
  unsigned int *v8; // rdx
  unsigned int *v9; // rax
  unsigned int *v10; // rdx
  unsigned int *v11; // rax
  int *v12; // rdx
  int v13; // ebx
  unsigned int *v14; // rax
  _DWORD *v15; // rdx
  unsigned int *v16; // rax
  unsigned int *v17; // rdx
  unsigned int *v18; // rbx
  unsigned int *v19; // rax
  unsigned int *v20; // rax
  unsigned int tmp; // [rsp+14h] [rbp-1Ch]
  unsigned __int64 size; // [rsp+18h] [rbp-18h]

  size = dynamic_array<unsigned int,false,4ul>::size(activity_ids);
  if ( !dynamic_array<unsigned int,false,4ul>::size(activity_ids) )
    return 0;
  if ( dynamic_array<unsigned int,false,4ul>::size(activity_ids) == 1 )
  {
    v2 = dynamic_array<unsigned int,false,4ul>::operator[](activity_ids, 0LL);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    return *v3;
  }
  else
  {
    if ( size == 2 )
    {
      v4 = dynamic_array<unsigned int,false,4ul>::operator[](activity_ids, 1uLL);
      v5 = v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4);
      }
      v6 = *v5;
      v7 = dynamic_array<unsigned int,false,4ul>::operator[](activity_ids, 0LL);
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      if ( v6 < *v8 )
      {
        v9 = dynamic_array<unsigned int,false,4ul>::operator[](activity_ids, 0LL);
        v10 = v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v9);
        }
        tmp = *v10;
        v11 = dynamic_array<unsigned int,false,4ul>::operator[](activity_ids, 1uLL);
        v12 = (int *)v11;
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v11);
        }
        v13 = *v12;
        v14 = dynamic_array<unsigned int,false,4ul>::operator[](activity_ids, 0LL);
        v15 = v14;
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v14);
        }
        *v15 = v13;
        v16 = dynamic_array<unsigned int,false,4ul>::operator[](activity_ids, 1uLL);
        v17 = v16;
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v16);
        }
        *v17 = tmp;
      }
    }
    else if ( size > 2 )
    {
      v18 = dynamic_array<unsigned int,false,4ul>::end(activity_ids);
      v19 = dynamic_array<unsigned int,false,4ul>::begin(activity_ids);
      std::sort<unsigned int *>(v19, v18);
    }
    v20 = dynamic_array<unsigned int,false,4ul>::begin(activity_ids);
    return ComputeFNV1aHash(v20, 4 * size);
  }
};

// Line 461: range 000000000CB5FB5A-000000000CB5FFF6
__int64 __fastcall Config::calcActivityHash(
        Config *const this,
        dynamic_array<unsigned int,false,4> *activity_ids,
        uint32_t scene_id,
        uint32_t version,
        int32_t *config_version)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  char v9; // al
  uint32_t v10; // r14d
  unsigned int *v11; // rax
  __int64 result; // rax
  std::vector<std::shared_ptr<Config::NavMeshInstance>>::iterator __for_begin; // [rsp+28h] [rbp-108h] BYREF
  std::vector<std::shared_ptr<Config::NavMeshInstance>>::iterator __for_end; // [rsp+30h] [rbp-100h] BYREF
  unsigned int *activity_id_it; // [rsp+38h] [rbp-F8h]
  std::vector<std::shared_ptr<Config::NavMeshInstance>> *__for_range; // [rsp+40h] [rbp-F0h]
  std::shared_ptr<Config::NavMeshInstance> *it; // [rsp+48h] [rbp-E8h]
  std::unordered_map<unsigned int,Config::ActivitySceneInfo> *activity_nav_mesh_data_info; // [rsp+50h] [rbp-E0h]
  const Config::ActivitySceneInfo *scene_infos; // [rsp+58h] [rbp-D8h]
  char v22[208]; // [rsp+60h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 4 12 scene_id:460 64 8 15 activity_it:486 96 16 10 config:462 128 16 8 lock:464";
  *(_QWORD *)(v5 + 16) = Config::calcActivityHash;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -218959360;
  v7[536862723] = -219021312;
  v7[536862724] = -202178560;
  *(_DWORD *)(v5 + 48) = scene_id;
  *(_QWORD *)(v5 + 96) = 0LL;
  *(_QWORD *)(v5 + 104) = 0LL;
  boost::shared_lock<boost::shared_mutex>::shared_lock(
    (boost::shared_lock<boost::shared_mutex> *const)(v5 + 128),
    &Config::version_datas_mutex_);
  if ( *(_BYTE *)(((unsigned __int64)&this->oldest_version >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->oldest_version >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->oldest_version);
  }
  if ( this->oldest_version > version )
    version = 0;
  __for_range = &Config::version_datas;
  __for_begin._M_current = std::vector<std::shared_ptr<Config::NavMeshInstance>>::begin(&Config::version_datas)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<Config::NavMeshInstance>>::end(&Config::version_datas)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<Config::NavMeshInstance> *,std::vector<std::shared_ptr<Config::NavMeshInstance>>>(
            &__for_begin,
            &__for_end) )
  {
    it = __gnu_cxx::__normal_iterator<std::shared_ptr<Config::NavMeshInstance> *,std::vector<std::shared_ptr<Config::NavMeshInstance>>>::operator*(&__for_begin);
    if ( !version )
      goto LABEL_14;
    v8 = std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)it);
    if ( *(_BYTE *)(((unsigned __int64)&v8->version >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v8->version >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v8->version);
    }
    if ( (signed int)version < v8->version )
      v9 = 0;
    else
LABEL_14:
      v9 = 1;
    if ( v9 )
    {
      std::shared_ptr<Config::NavMeshInstance>::operator=(
        (std::shared_ptr<Config::NavMeshInstance> *const)(v5 + 96),
        it);
      break;
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<Config::NavMeshInstance> *,std::vector<std::shared_ptr<Config::NavMeshInstance>>>::operator++(&__for_begin);
  }
  boost::shared_lock<boost::shared_mutex>::~shared_lock((boost::shared_lock<boost::shared_mutex> *const)(v5 + 128));
  if ( std::__shared_ptr<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2>::get((const std::__shared_ptr<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2> *const)(v5 + 96)) )
  {
    activity_nav_mesh_data_info = &std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96))->activity_nav_mesh_data_info;
    activity_id_it = dynamic_array<unsigned int,false,4ul>::begin(activity_ids);
    while ( 1 )
    {
      v11 = dynamic_array<unsigned int,false,4ul>::end(activity_ids);
      if ( activity_id_it == v11 )
        break;
      *(std::unordered_map<unsigned int,Config::ActivitySceneInfo>::iterator *)(v5 + 64) = std::unordered_map<unsigned int,Config::ActivitySceneInfo>::find(
                                                                                             activity_nav_mesh_data_info,
                                                                                             activity_id_it);
      __for_end._M_current = (std::shared_ptr<Config::NavMeshInstance> *)std::unordered_map<unsigned int,Config::ActivitySceneInfo>::end(activity_nav_mesh_data_info)._M_cur;
      if ( std::__detail::operator==<std::pair<unsigned int const,Config::ActivitySceneInfo>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,Config::ActivitySceneInfo>,false> *)(v5 + 64),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,Config::ActivitySceneInfo>,false> *)&__for_end)
        || (scene_infos = &std::__detail::_Node_iterator<std::pair<unsigned int const,Config::ActivitySceneInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,Config::ActivitySceneInfo>,false,false> *const)(v5 + 64))->second,
            __for_end._M_current = (std::shared_ptr<Config::NavMeshInstance> *)std::unordered_map<unsigned int,Config::SceneBlockInfo>::end(&scene_infos->scene_block_info_map)._M_cur,
            __for_begin._M_current = (std::shared_ptr<Config::NavMeshInstance> *)std::unordered_map<unsigned int,Config::SceneBlockInfo>::find(
                                                                                   &scene_infos->scene_block_info_map,
                                                                                   (const std::unordered_map<unsigned int,Config::SceneBlockInfo>::key_type *)(v5 + 48))._M_cur,
            std::__detail::operator==<std::pair<unsigned int const,Config::SceneBlockInfo>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,Config::SceneBlockInfo>,false> *)&__for_begin,
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,Config::SceneBlockInfo>,false> *)&__for_end)) )
      {
        activity_id_it = dynamic_array<unsigned int,false,4ul>::erase(activity_ids, activity_id_it);
      }
      else
      {
        ++activity_id_it;
      }
    }
    v10 = innerCalcActivityHash(activity_ids);
  }
  else
  {
    v10 = 0;
  }
  std::shared_ptr<Config::NavMeshInstance>::~shared_ptr((std::shared_ptr<Config::NavMeshInstance> *const)(v5 + 96));
  result = v10;
  if ( v22 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 508: range 000000000CD596A6-000000000CD59741
bool __cdecl ActivitySortInfo::operator<(ActivitySortInfo *const this, const ActivitySortInfo *a)
{
  uint32_t timestamp; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&this->timestamp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->timestamp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->timestamp);
  }
  timestamp = this->timestamp;
  if ( *(_BYTE *)(((unsigned __int64)&a->timestamp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a->timestamp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a->timestamp);
  }
  return timestamp < a->timestamp;
};

// Line 515: range 000000000CB5FFF8-000000000CB60146
void __cdecl Config::push_back_activity_config(
        Config *const this,
        Config::ActivityStaticInfo *activity_config,
        std::vector<Config::ActivityStaticInfo> *activity_configs,
        uint32_t now_time,
        std::shared_ptr<Config::NavMeshInstance> *config)
{
  uint32_t v5; // edx

  v5 = innerCalcActivityHash(&activity_config->activity_ids);
  if ( *(_BYTE *)(((unsigned __int64)activity_config >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)activity_config >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(activity_config);
  }
  activity_config->activity_hash = v5;
  std::vector<Config::ActivityStaticInfo>::push_back(activity_configs, activity_config);
  if ( *(_BYTE *)(((unsigned __int64)&activity_config->start_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&activity_config->start_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&activity_config->start_time);
  }
  if ( now_time > activity_config->start_time )
  {
    if ( *(_BYTE *)(((unsigned __int64)&activity_config->end_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)activity_config + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&activity_config->end_time >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&activity_config->end_time);
    }
    if ( now_time < activity_config->end_time )
      Config::loadActivityStaticNavMesh(this, activity_config, config);
  }
  if ( *(_BYTE *)(((unsigned __int64)activity_config >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)activity_config >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(activity_config);
  }
  activity_config->activity_hash = 0;
};

// Line 528: range 000000000CB601BE-000000000CB60F7C
void __cdecl Config::loadActivityStaticNavMesh(
        Config *const this,
        Config::ActivityStaticInfo *activity_config,
        std::shared_ptr<Config::NavMeshInstance> *config)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,Config::ActivityStaticInfo> *p_activity_static_nav_mesh_map; // rdx
  std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rax
  unsigned int *v9; // rdx
  unsigned int *v10; // rax
  uint32_t activity_hash; // r15d
  const char *v12; // r14
  std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  uint32_t v14; // r15d
  const char *v15; // r14
  std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  StaticNavMesh *v17; // r14
  std::__detail::_Node_iterator<std::pair<unsigned int const,Config::NavMeshDataInstance>,false,false>::pointer v18; // rax
  StaticNavMesh *v19; // r14
  std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  unsigned __int64 v21; // rax
  std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // r14
  NavMesh *NavMesh; // rax
  std::unordered_map<unsigned int,Config::ActivityStaticInfo> *v26; // rcx
  Config::ActivityStaticInfo *v27; // r8
  uint32_t v28; // r15d
  const char *v29; // r14
  std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  std::unordered_map<unsigned int,Config::SceneBlockInfo>::iterator __for_begin; // [rsp+28h] [rbp-448h] BYREF
  std::set<StaticNavMesh*>::iterator __for_end; // [rsp+30h] [rbp-440h] BYREF
  size_t i; // [rsp+38h] [rbp-438h]
  size_t i_0; // [rsp+40h] [rbp-430h]
  std::unordered_map<unsigned int,StaticNavMeshConfig> *activity_static_nav_mesh_map; // [rsp+48h] [rbp-428h]
  std::unordered_map<unsigned int,Config::ActivitySceneInfo> *activity_nav_mesh_data_info; // [rsp+50h] [rbp-420h]
  std::unordered_map<unsigned int,Config::NavMeshDataInstance> *nav_mesh_data; // [rsp+58h] [rbp-418h]
  size_t sz; // [rsp+60h] [rbp-410h]
  size_t sz_0; // [rsp+68h] [rbp-408h]
  Config::ActivitySceneInfo *activity_info; // [rsp+70h] [rbp-400h]
  std::unordered_map<unsigned int,Config::SceneBlockInfo> *__for_range; // [rsp+78h] [rbp-3F8h]
  std::pair<unsigned int const,Config::SceneBlockInfo> *scene_it; // [rsp+80h] [rbp-3F0h]
  StaticNavMeshConfig *static_navmesh_config; // [rsp+88h] [rbp-3E8h]
  std::unordered_map<unsigned int,BlockInfo> *__for_range_0; // [rsp+90h] [rbp-3E0h]
  std::pair<unsigned int const,BlockInfo> *block_info_it; // [rsp+98h] [rbp-3D8h]
  std::set<StaticNavMesh*> *__for_range_1; // [rsp+A0h] [rbp-3D0h]
  StaticNavMeshConfig *source; // [rsp+A8h] [rbp-3C8h]
  std::shared_ptr<StaticNavMesh> __r; // [rsp+B0h] [rbp-3C0h] BYREF
  common::milog::MiLogStream v50; // [rsp+C0h] [rbp-3B0h] BYREF
  common::milog::MiLogStream v51; // [rsp+E0h] [rbp-390h] BYREF
  std::function<bool(const std::shared_ptr<NavMeshData>&)> callback; // [rsp+100h] [rbp-370h] BYREF
  char v53[848]; // [rsp+120h] [rbp-350h] BYREF

  v3 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(800LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 48 4 12 scene_id:556 64 8 6 it:533 96 8 22 static_navmesh_ptr:588 128 8 22 static_navmesh_ptr:"
                        "565 160 8 13 source_it:594 192 8 11 data_it:579 224 12 7 key:590 256 48 23 static_navmesh_ptrs:5"
                        "40 336 392 8 strs:541";
  *(_QWORD *)(v3 + 16) = Config::loadActivityStaticNavMesh;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -219020288;
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862742] = -218103808;
  v5[536862743] = -202116109;
  v5[536862744] = -202116109;
  if ( !std::operator==<Config::NavMeshInstance>(config, 0LL) )
  {
    p_activity_static_nav_mesh_map = &std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)config)->activity_static_nav_mesh_map;
    *(std::unordered_map<unsigned int,Config::ActivityStaticInfo>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,Config::ActivityStaticInfo>::find(
                                                                                            p_activity_static_nav_mesh_map,
                                                                                            &activity_config->activity_hash);
    v7 = std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)config);
    *(std::unordered_map<unsigned int,Config::ActivityStaticInfo>::iterator *)(v3 + 192) = std::unordered_map<unsigned int,Config::ActivityStaticInfo>::end(&v7->activity_static_nav_mesh_map);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,Config::ActivityStaticInfo>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,Config::ActivityStaticInfo>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,Config::ActivityStaticInfo>,false> *)(v3 + 192)) )
    {
      activity_static_nav_mesh_map = &activity_config->static_nav_meshs;
      activity_nav_mesh_data_info = &std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)config)->activity_nav_mesh_data_info;
      nav_mesh_data = &std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)config)->nav_mesh_data_map;
      std::set<StaticNavMesh *>::set((std::set<StaticNavMesh*> *const)(v3 + 256));
      std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v3 + 336);
      i = 0LL;
      sz = dynamic_array<unsigned int,false,4ul>::size(&activity_config->activity_ids);
      while ( i < sz )
      {
        v8 = (unsigned __int64)dynamic_array<unsigned int,false,4ul>::operator[](&activity_config->activity_ids, i);
        v9 = (unsigned int *)v8;
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) != 0 && (char)((v8 & 7) + 3) >= *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          __asan_report_load4(v8);
        std::ostream::operator<<(v3 + 352, *v9);
        if ( i != sz - 1 )
          std::operator<<<std::char_traits<char>>(v3 + 352, ",");
        ++i;
      }
      i_0 = 0LL;
      sz_0 = dynamic_array<unsigned int,false,4ul>::size(&activity_config->activity_ids);
      while ( i_0 < sz_0 )
      {
        v10 = dynamic_array<unsigned int,false,4ul>::operator[](&activity_config->activity_ids, i_0);
        activity_info = std::unordered_map<unsigned int,Config::ActivitySceneInfo>::operator[](
                          activity_nav_mesh_data_info,
                          v10);
        __for_range = &activity_info->scene_block_info_map;
        __for_begin._M_cur = std::unordered_map<unsigned int,Config::SceneBlockInfo>::begin(&activity_info->scene_block_info_map)._M_cur;
        *(std::unordered_map<unsigned int,Config::SceneBlockInfo>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,Config::SceneBlockInfo>::end(__for_range);
        while ( std::__detail::operator!=<std::pair<unsigned int const,Config::SceneBlockInfo>,false>(
                  &__for_begin,
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,Config::SceneBlockInfo>,false> *)(v3 + 96)) )
        {
          scene_it = std::__detail::_Node_iterator<std::pair<unsigned int const,Config::SceneBlockInfo>,false,false>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)scene_it >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)scene_it >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(scene_it);
          }
          *(_DWORD *)(v3 + 48) = scene_it->first;
          static_navmesh_config = std::unordered_map<unsigned int,StaticNavMeshConfig>::operator[](
                                    activity_static_nav_mesh_map,
                                    (const std::unordered_map<unsigned int,StaticNavMeshConfig>::key_type *)(v3 + 48));
          if ( std::operator==<StaticNavMesh>(&static_navmesh_config->static_nav_mesh, 0LL) )
          {
            common::tools::perf::make_shared<StaticNavMesh>();
            std::shared_ptr<StaticNavMesh>::operator=(&static_navmesh_config->static_nav_mesh, &__r);
            std::shared_ptr<StaticNavMesh>::~shared_ptr(&__r);
            common::milog::MiLogStream::create(
              &v50,
              &common::milog::MiLogDefault::default_log_obj_,
              2u,
              "./src/config/config.cpp",
              "loadActivityStaticNavMesh",
              562);
            if ( *(_BYTE *)(((unsigned __int64)activity_config >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)activity_config >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(activity_config);
            }
            activity_hash = activity_config->activity_hash;
            std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(&callback, v3 + 336);
            v12 = (const char *)std::string::c_str(&callback);
            v13 = std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)config);
            if ( *(_BYTE *)(((unsigned __int64)&v13->version >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v13->version >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&v13->version);
            }
            common::milog::MiLogStream::operator()(
              &v50,
              "scene_id=%d version=%d activity_id=[%s][%u] static nav mesh create.",
              *(unsigned int *)(v3 + 48),
              (unsigned int)v13->version,
              v12,
              activity_hash);
            std::string::~string(&callback);
            common::milog::MiLogStream::~MiLogStream(&v50);
          }
          *(_QWORD *)(v3 + 128) = std::__shared_ptr<StaticNavMesh,(__gnu_cxx::_Lock_policy)2>::get(&static_navmesh_config->static_nav_mesh);
          if ( *(_QWORD *)(v3 + 128) )
          {
            if ( *(char *)(((unsigned __int64)&scene_it->second >> 3) + 0x7FFF8000) < 0 )
              __asan_report_load1(&scene_it->second);
            if ( scene_it->second.is_block )
              std::set<StaticNavMesh *>::emplace<StaticNavMesh *&>(
                (std::set<StaticNavMesh*> *const)(v3 + 256),
                (StaticNavMesh **)(v3 + 128),
                (StaticNavMesh **)(v3 + 128));
            __for_range_0 = &scene_it->second.blocks;
            __for_end._M_node = (std::_Rb_tree_const_iterator<StaticNavMesh*>::_Base_ptr)std::unordered_map<unsigned int,BlockInfo>::begin(&scene_it->second.blocks)._M_cur;
            *(std::unordered_map<unsigned int,BlockInfo>::iterator *)(v3 + 160) = std::unordered_map<unsigned int,BlockInfo>::end(__for_range_0);
            while ( std::__detail::operator!=<std::pair<unsigned int const,BlockInfo>,false>(
                      (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BlockInfo>,false> *)&__for_end,
                      (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BlockInfo>,false> *)(v3 + 160)) )
            {
              block_info_it = std::__detail::_Node_iterator<std::pair<unsigned int const,BlockInfo>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,BlockInfo>,false,false> *const)&__for_end);
              *(std::unordered_map<unsigned int,Config::NavMeshDataInstance>::iterator *)(v3 + 192) = std::unordered_map<unsigned int,Config::NavMeshDataInstance>::find(nav_mesh_data, &block_info_it->second.data_id);
              v17 = *(StaticNavMesh **)(v3 + 128);
              v18 = std::__detail::_Node_iterator<std::pair<unsigned int const,Config::NavMeshDataInstance>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,Config::NavMeshDataInstance>,false,false> *const)(v3 + 192));
              StaticNavMesh::AddMeshData(v17, &v18->second.nav_mesh_data, 1);
              std::__detail::_Node_iterator<std::pair<unsigned int const,BlockInfo>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,BlockInfo>,false,false> *const)&__for_end);
            }
            v19 = *(StaticNavMesh **)(v3 + 128);
            v20 = std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)config);
            if ( *(_BYTE *)(((unsigned __int64)&v20->version >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v20->version >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&v20->version);
            }
            StaticNavMesh::SetVersion(v19, v20->version);
          }
          else
          {
            common::milog::MiLogStream::create(
              &v51,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/config/config.cpp",
              "loadActivityStaticNavMesh",
              568);
            if ( *(_BYTE *)(((unsigned __int64)activity_config >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)activity_config >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(activity_config);
            }
            v14 = activity_config->activity_hash;
            std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(&callback, v3 + 336);
            v15 = (const char *)std::string::c_str(&callback);
            v16 = std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)config);
            if ( *(_BYTE *)(((unsigned __int64)&v16->version >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v16->version >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&v16->version);
            }
            common::milog::MiLogStream::operator()(
              &v51,
              "scene_id=%d version=%d activity_id=[%s][%u] static nav mesh create failed.",
              *(unsigned int *)(v3 + 48),
              (unsigned int)v16->version,
              v15,
              v14);
            std::string::~string(&callback);
            common::milog::MiLogStream::~MiLogStream(&v51);
          }
          std::__detail::_Node_iterator<std::pair<unsigned int const,Config::SceneBlockInfo>,false,false>::operator++(&__for_begin);
        }
        ++i_0;
      }
      __for_range_1 = (std::set<StaticNavMesh*> *)(v3 + 256);
      *(std::set<StaticNavMesh*>::iterator *)(v3 + 128) = std::set<StaticNavMesh *>::begin((const std::set<StaticNavMesh*> *const)(v3 + 256));
      __for_end._M_node = std::set<StaticNavMesh *>::end(__for_range_1)._M_node;
      while ( std::operator!=((const std::_Rb_tree_const_iterator<StaticNavMesh*>::_Self *)(v3 + 128), &__for_end) )
      {
        v21 = (unsigned __int64)std::_Rb_tree_const_iterator<StaticNavMesh *>::operator*((const std::_Rb_tree_const_iterator<StaticNavMesh*> *const)(v3 + 128));
        if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
          v21 = __asan_report_load8(v21, &__for_end);
        *(_QWORD *)(v3 + 96) = *(_QWORD *)v21;
        *(_DWORD *)(v3 + 224) = StaticNavMesh::GetID(*(const StaticNavMesh *const *)(v3 + 96));
        *(_DWORD *)(v3 + 228) = StaticNavMesh::GetPolygonID(*(const StaticNavMesh *const *)(v3 + 96));
        *(_DWORD *)(v3 + 232) = StaticNavMesh::GetSceneTagHash(*(const StaticNavMesh *const *)(v3 + 96));
        v22 = std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)config);
        *(std::unordered_map<Config::StaticSceneKey,StaticNavMeshConfig,Config::StaticSceneKeyHash,std::equal_to<Config::StaticSceneKey>,std::allocator<std::pair<const Config::StaticSceneKey,StaticNavMeshConfig> > >::iterator *)(v3 + 160) = std::unordered_map<Config::StaticSceneKey,StaticNavMeshConfig,Config::StaticSceneKeyHash,std::equal_to<Config::StaticSceneKey>,std::allocator<std::pair<Config::StaticSceneKey const,StaticNavMeshConfig>>>::find(&v22->static_nav_mesh_map, (const std::unordered_map<Config::StaticSceneKey,StaticNavMeshConfig,Config::StaticSceneKeyHash,std::equal_to<Config::StaticSceneKey>,std::allocator<std::pair<const Config::StaticSceneKey,StaticNavMeshConfig> > >::key_type *)(v3 + 224));
        v23 = std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)config);
        *(std::unordered_map<Config::StaticSceneKey,StaticNavMeshConfig,Config::StaticSceneKeyHash,std::equal_to<Config::StaticSceneKey>,std::allocator<std::pair<const Config::StaticSceneKey,StaticNavMeshConfig> > >::iterator *)(v3 + 192) = std::unordered_map<Config::StaticSceneKey,StaticNavMeshConfig,Config::StaticSceneKeyHash,std::equal_to<Config::StaticSceneKey>,std::allocator<std::pair<Config::StaticSceneKey const,StaticNavMeshConfig>>>::end(&v23->static_nav_mesh_map);
        if ( std::__detail::operator!=<std::pair<Config::StaticSceneKey const,StaticNavMeshConfig>,true>(
               (const std::__detail::_Node_iterator_base<std::pair<const Config::StaticSceneKey,StaticNavMeshConfig>,true> *)(v3 + 160),
               (const std::__detail::_Node_iterator_base<std::pair<const Config::StaticSceneKey,StaticNavMeshConfig>,true> *)(v3 + 192)) )
        {
          source = &std::__detail::_Node_iterator<std::pair<Config::StaticSceneKey const,StaticNavMeshConfig>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const Config::StaticSceneKey,StaticNavMeshConfig>,false,true> *const)(v3 + 160))->second;
          v24 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)source);
          std::function<bool ()(std::shared_ptr<NavMeshData> const&)>::function<Config::loadActivityStaticNavMesh(Config::ActivityStaticInfo &,std::shared_ptr&<Config::NavMeshInstance>)::{lambda(std::shared_ptr<NavMeshData> const&)#1},void,void>(
            &callback,
            (Config::loadActivityStaticNavMesh::<lambda(const std::shared_ptr<NavMeshData>&)>)(v3 + 96));
          StaticNavMesh::ForeachNavMeshData(v24, &callback);
          std::function<bool ()(std::shared_ptr<NavMeshData> const&)>::~function(&callback);
        }
        NavMesh = StaticNavMesh::GetNavMesh(*(const StaticNavMesh *const *)(v3 + 96));
        NavMesh::PostProcessorGlobalConnectRegion(NavMesh);
        std::_Rb_tree_const_iterator<StaticNavMesh *>::operator++((std::_Rb_tree_const_iterator<StaticNavMesh*> *const)(v3 + 128));
      }
      v26 = &std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)config)->activity_static_nav_mesh_map;
      std::unordered_map<unsigned int,Config::ActivityStaticInfo>::emplace<unsigned int &,Config::ActivityStaticInfo&>(
        v26,
        &activity_config->activity_hash,
        activity_config,
        (unsigned int *)v26,
        v27);
      common::milog::MiLogStream::create(
        &v51,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/config/config.cpp",
        "loadActivityStaticNavMesh",
        610);
      if ( *(_BYTE *)(((unsigned __int64)activity_config >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)activity_config >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(activity_config);
      }
      v28 = activity_config->activity_hash;
      std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(&callback, v3 + 336);
      v29 = (const char *)std::string::c_str(&callback);
      v30 = std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)config);
      if ( *(_BYTE *)(((unsigned __int64)&v30->version >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v30->version >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v30->version);
      }
      common::milog::MiLogStream::operator()(
        &v51,
        "activity scene loaded. version=%d activity_id=[%s][%u]",
        (unsigned int)v30->version,
        v29,
        v28);
      std::string::~string(&callback);
      common::milog::MiLogStream::~MiLogStream(&v51);
      std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v3 + 336);
      std::set<StaticNavMesh *>::~set((std::set<StaticNavMesh*> *const)(v3 + 256));
    }
  }
  if ( v53 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8060) = 0;
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8060) = -168430091;
  }
};

// Line 598: range 000000000CB60148-000000000CB601BD
bool __cdecl Config::loadActivityStaticNavMesh(Config::ActivityStaticInfo &,std::shared_ptr<Config::NavMeshInstance> &)::{lambda(std::shared_ptr const&<NavMeshData>)#1}::operator()(
        const Config::loadActivityStaticNavMesh::<lambda(const std::shared_ptr<NavMeshData>&)> *const __closure,
        const std::shared_ptr<NavMeshData> *data)
{
  StaticNavMesh *const *static_navmesh_ptr; // rax

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure, data);
  static_navmesh_ptr = __closure->__static_navmesh_ptr;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__static_navmesh_ptr >> 3) + 0x7FFF8000) )
    static_navmesh_ptr = (StaticNavMesh *const *)__asan_report_load8(__closure->__static_navmesh_ptr, data);
  StaticNavMesh::AddMeshData(*static_navmesh_ptr, data, 0);
  return 1;
};

// Line 615: range 000000000CB60F7E-000000000CB61551
int32_t __cdecl Config::rewriteNewActivityScheduleExcelConfig(Config *const this, TxtConfigMgr *txt_config_mgr)
{
  uint32_t begin_time; // ecx
  uint32_t end_time; // ecx
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_activity_type_schedule_vec_map; // rbx
  std::vector<unsigned int> *v5; // rax
  std::vector<unsigned int> *v6; // rax
  std::unordered_map<data::NewActivityType,std::set<unsigned int>> *p_activity_open_time_set_map; // rbx
  std::set<unsigned int> *v8; // rax
  int *v9; // rax
  std::unordered_set<unsigned int> *p_schedule_cond_finish_quest_set; // rcx
  std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type __k; // [rsp+1Ch] [rbp-A4h] BYREF
  std::unordered_map<unsigned int,data::NewActivityScheduleExcelConfig>::iterator __for_begin; // [rsp+20h] [rbp-A0h] BYREF
  std::unordered_map<unsigned int,data::NewActivityScheduleExcelConfig>::iterator __for_end; // [rsp+28h] [rbp-98h] BYREF
  std::vector<data::NewActivityScheduleCond>::iterator __for_begin_0; // [rsp+30h] [rbp-90h] BYREF
  std::vector<data::NewActivityScheduleCond>::iterator __for_end_0; // [rsp+38h] [rbp-88h] BYREF
  std::vector<int>::iterator __for_begin_1; // [rsp+40h] [rbp-80h] BYREF
  std::vector<int>::iterator __for_end_1; // [rsp+48h] [rbp-78h] BYREF
  const data::DbActivityScheduleConfigMgr *db_activity_schedule_config; // [rsp+50h] [rbp-70h]
  NewActivityExcelConfigMgr *actvity_config_mgr; // [rsp+58h] [rbp-68h]
  std::unordered_map<unsigned int,data::NewActivityScheduleExcelConfig> *new_activity_schedule_excel_config_map; // [rsp+60h] [rbp-60h]
  std::unordered_map<unsigned int,data::NewActivityScheduleExcelConfig> *__for_range; // [rsp+68h] [rbp-58h]
  std::pair<unsigned int const,data::NewActivityScheduleExcelConfig> *__in; // [rsp+70h] [rbp-50h]
  std::tuple_element<0,std::pair<unsigned int const,data::NewActivityScheduleExcelConfig> >::type *schedule_id; // [rsp+78h] [rbp-48h]
  std::tuple_element<1,std::pair<unsigned int const,data::NewActivityScheduleExcelConfig> >::type *schedule_conf; // [rsp+80h] [rbp-40h]
  const data::ActivityScheduleConfig *db_schedule_config_ptr; // [rsp+88h] [rbp-38h]
  std::vector<data::NewActivityScheduleCond> *__for_range_0; // [rsp+90h] [rbp-30h]
  data::NewActivityScheduleCond *cond; // [rsp+98h] [rbp-28h]
  std::vector<int> *__for_range_1; // [rsp+A0h] [rbp-20h]
  int *quest_id; // [rsp+A8h] [rbp-18h]

  db_activity_schedule_config = &TxtConfigMgr::getConfig(txt_config_mgr)->db_config_mgr.db_local_config_mgr.activity_schedule_config_mgr;
  actvity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
  new_activity_schedule_excel_config_map = &txt_config_mgr->new_activity_config_mgr.new_activity_schedule_excel_config_map;
  __for_range = &txt_config_mgr->new_activity_config_mgr.new_activity_schedule_excel_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::NewActivityScheduleExcelConfig>::begin(&txt_config_mgr->new_activity_config_mgr.new_activity_schedule_excel_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::NewActivityScheduleExcelConfig>::end(&txt_config_mgr->new_activity_config_mgr.new_activity_schedule_excel_config_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::NewActivityScheduleExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::NewActivityScheduleExcelConfig>,false,false>::operator*(&__for_begin);
    schedule_id = std::get<0ul,unsigned int const,data::NewActivityScheduleExcelConfig>(__in);
    schedule_conf = std::get<1ul,unsigned int const,data::NewActivityScheduleExcelConfig>(__in);
    if ( *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)schedule_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(schedule_id);
    }
    db_schedule_config_ptr = data::DbActivityScheduleConfigMgr::findActivityScheduleConfig(
                               db_activity_schedule_config,
                               *schedule_id);
    if ( db_schedule_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&db_schedule_config_ptr->begin_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)db_schedule_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&db_schedule_config_ptr->begin_time >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&db_schedule_config_ptr->begin_time);
      }
      begin_time = db_schedule_config_ptr->begin_time;
      if ( *(_BYTE *)(((unsigned __int64)&schedule_conf->begin_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&schedule_conf->begin_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&schedule_conf->begin_time);
      }
      schedule_conf->begin_time = begin_time;
      if ( *(_BYTE *)(((unsigned __int64)&db_schedule_config_ptr->end_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)db_schedule_config_ptr + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&db_schedule_config_ptr->end_time >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&db_schedule_config_ptr->end_time);
      }
      end_time = db_schedule_config_ptr->end_time;
      if ( *(_BYTE *)(((unsigned __int64)&schedule_conf->end_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)schedule_conf + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_conf->end_time >> 3)
                                                                     + 0x7FFF8000) )
      {
        __asan_report_store4(&schedule_conf->end_time);
      }
      schedule_conf->end_time = end_time;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&schedule_conf->begin_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&schedule_conf->begin_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&schedule_conf->begin_time);
      }
      schedule_conf->begin_time = 0;
      if ( *(_BYTE *)(((unsigned __int64)&schedule_conf->end_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)schedule_conf + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_conf->end_time >> 3)
                                                                     + 0x7FFF8000) )
      {
        __asan_report_store4(&schedule_conf->end_time);
      }
      schedule_conf->end_time = 0;
    }
    p_activity_type_schedule_vec_map = &actvity_config_mgr->activity_type_schedule_vec_map;
    if ( *(_BYTE *)(((unsigned __int64)&schedule_conf->activity_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&schedule_conf->activity_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&schedule_conf->activity_id);
    }
    __k = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(actvity_config_mgr, schedule_conf->activity_id);
    v5 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](p_activity_type_schedule_vec_map, &__k);
    std::vector<unsigned int>::push_back(v5, schedule_id);
    v6 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
           &actvity_config_mgr->activity_id_schedule_vec_map,
           &schedule_conf->activity_id);
    std::vector<unsigned int>::push_back(v6, schedule_id);
    if ( *(_BYTE *)(((unsigned __int64)&schedule_conf->begin_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&schedule_conf->begin_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&schedule_conf->begin_time);
    }
    if ( schedule_conf->begin_time )
    {
      p_activity_open_time_set_map = &actvity_config_mgr->activity_open_time_set_map;
      if ( *(_BYTE *)(((unsigned __int64)&schedule_conf->activity_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&schedule_conf->activity_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&schedule_conf->activity_id);
      }
      __k = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(actvity_config_mgr, schedule_conf->activity_id);
      v8 = std::unordered_map<data::NewActivityType,std::set<unsigned int>>::operator[](
             p_activity_open_time_set_map,
             (std::unordered_map<data::NewActivityType,std::set<unsigned int>>::key_type *)&__k);
      std::set<unsigned int>::insert(v8, &schedule_conf->begin_time);
    }
    __for_range_0 = &schedule_conf->cond;
    __for_begin_0._M_current = std::vector<data::NewActivityScheduleCond>::begin(&schedule_conf->cond)._M_current;
    __for_end_0._M_current = std::vector<data::NewActivityScheduleCond>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<data::NewActivityScheduleCond *,std::vector<data::NewActivityScheduleCond>>(
              &__for_begin_0,
              &__for_end_0) )
    {
      cond = __gnu_cxx::__normal_iterator<data::NewActivityScheduleCond *,std::vector<data::NewActivityScheduleCond>>::operator*(&__for_begin_0);
      if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&cond->type);
      }
      if ( cond->type == NEW_ACTIVITY_SCHEDULE_COND_QUEST_FINISH )
      {
        __for_range_1 = &cond->param;
        __for_begin_1._M_current = std::vector<int>::begin(&cond->param)._M_current;
        __for_end_1._M_current = std::vector<int>::end(__for_range_1)._M_current;
        while ( __gnu_cxx::operator!=<int *,std::vector<int>>(&__for_begin_1, &__for_end_1) )
        {
          v9 = __gnu_cxx::__normal_iterator<int *,std::vector<int>>::operator*(&__for_begin_1);
          quest_id = v9;
          p_schedule_cond_finish_quest_set = &actvity_config_mgr->schedule_cond_finish_quest_set;
          if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v9);
          }
          __k = *quest_id;
          std::unordered_set<unsigned int>::insert(p_schedule_cond_finish_quest_set, &__k);
          __gnu_cxx::__normal_iterator<int *,std::vector<int>>::operator++(&__for_begin_1);
        }
      }
      __gnu_cxx::__normal_iterator<data::NewActivityScheduleCond *,std::vector<data::NewActivityScheduleCond>>::operator++(&__for_begin_0);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::NewActivityScheduleExcelConfig>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 661: range 000000000CB61552-000000000CB62365
int32_t __cdecl Config::rewriteConfig(Config *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,Config::ActivityStaticInfo>,false,false>::pointer v6; // rdx
  uint32_t *p_end_time; // rax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  std::__detail::_Node_iterator<std::pair<unsigned int const,Config::ActivityStaticInfo>,false,false>::pointer v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  std::__detail::_Node_iterator<std::pair<unsigned int const,Config::ActivityStaticInfo>,false,false>::pointer v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::pair<unsigned int const,Config::ActivitySceneInfo> *v18; // rax
  uint32_t end_time; // edi
  __int64 begin_time; // rcx
  ActivitySortInfo *M_current; // r14
  std::vector<ActivitySortInfo>::iterator v22; // rax
  ActivitySortInfo *v23; // rax
  unsigned int *v24; // rax
  unsigned int v25; // ecx
  common::milog::MiLogStream *v26; // r14
  common::milog::MiLogStream *v27; // rax
  int32_t result; // eax
  float val; // [rsp+10h] [rbp-250h] BYREF
  unsigned int check_interval; // [rsp+14h] [rbp-24Ch]
  std::vector<std::shared_ptr<Config::NavMeshInstance>>::iterator __for_begin; // [rsp+18h] [rbp-248h] BYREF
  std::vector<std::shared_ptr<Config::NavMeshInstance>>::iterator __for_end; // [rsp+20h] [rbp-240h] BYREF
  std::unordered_map<unsigned int,Config::ActivitySceneInfo>::iterator __for_end_0; // [rsp+28h] [rbp-238h] BYREF
  unsigned int *it_0; // [rsp+30h] [rbp-230h]
  __int64 now_time; // [rsp+38h] [rbp-228h]
  NewActivityExcelConfigMgr *activity_config_mgr; // [rsp+40h] [rbp-220h]
  std::vector<std::shared_ptr<Config::NavMeshInstance>> *__for_range; // [rsp+48h] [rbp-218h]
  std::shared_ptr<Config::NavMeshInstance> *config; // [rsp+50h] [rbp-210h]
  std::unordered_map<unsigned int,Config::ActivitySceneInfo> *activity_nav_mesh_data_info; // [rsp+58h] [rbp-208h]
  std::unordered_map<unsigned int,Config::ActivitySceneInfo> *__for_range_0; // [rsp+60h] [rbp-200h]
  std::vector<ActivitySortInfo> *__for_range_1; // [rsp+68h] [rbp-1F8h]
  ActivitySortInfo *activity_sort_info; // [rsp+70h] [rbp-1F0h]
  std::pair<unsigned int const,Config::ActivitySceneInfo> *it; // [rsp+78h] [rbp-1E8h]
  const unsigned int *activity_id; // [rsp+80h] [rbp-1E0h]
  const data::NewActivityScheduleExcelConfig *now_and_future_activity; // [rsp+88h] [rbp-1D8h]
  common::milog::MiLogStream v47; // [rsp+90h] [rbp-1D0h] BYREF
  char v48[432]; // [rsp+B0h] [rbp-1B0h] BYREF

  v1 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(384LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "6 32 8 6 it:670 64 12 22 activity_sort_info:697 96 16 9 timer:664 128 24 26 activity_excel_confi"
                        "gs:686 192 24 19 activity_config:715 256 96 24 temp_activity_config:716";
  *(_QWORD *)(v1 + 16) = Config::rewriteConfig;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -219020288;
  v3[536862723] = -219021312;
  v3[536862724] = -234881024;
  v3[536862725] = -218959118;
  v3[536862726] = -234881024;
  v3[536862727] = -218959118;
  v3[536862731] = -202116109;
  now_time = common::tools::TimeUtils::getNow();
  Config::rewriteNewActivityScheduleExcelConfig(this, &this->design_config.txt_config_mgr);
  common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v1 + 96));
  check_interval = Config::refresh_max_interval;
  activity_config_mgr = &this->design_config.txt_config_mgr.new_activity_config_mgr;
  __for_range = &Config::version_datas;
  __for_begin._M_current = std::vector<std::shared_ptr<Config::NavMeshInstance>>::begin(&Config::version_datas)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<Config::NavMeshInstance>>::end(&Config::version_datas)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<Config::NavMeshInstance> *,std::vector<std::shared_ptr<Config::NavMeshInstance>>>(
            &__for_begin,
            &__for_end) )
  {
    config = __gnu_cxx::__normal_iterator<std::shared_ptr<Config::NavMeshInstance> *,std::vector<std::shared_ptr<Config::NavMeshInstance>>>::operator*(&__for_begin);
    v4 = std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)config);
    *(std::unordered_map<unsigned int,Config::ActivityStaticInfo>::iterator *)(v1 + 32) = std::unordered_map<unsigned int,Config::ActivityStaticInfo>::begin(&v4->activity_static_nav_mesh_map);
    while ( 1 )
    {
      v5 = std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)config);
      __for_end_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,Config::ActivitySceneInfo>,false>::__node_type *)std::unordered_map<unsigned int,Config::ActivityStaticInfo>::end(&v5->activity_static_nav_mesh_map)._M_cur;
      if ( !std::__detail::operator!=<std::pair<unsigned int const,Config::ActivityStaticInfo>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,Config::ActivityStaticInfo>,false> *)(v1 + 32),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,Config::ActivityStaticInfo>,false> *)&__for_end_0) )
        break;
      v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,Config::ActivityStaticInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,Config::ActivityStaticInfo>,false,false> *const)(v1 + 32));
      p_end_time = &v6->second.end_time;
      if ( *(_BYTE *)(((unsigned __int64)p_end_time >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_end_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_end_time >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_end_time);
      }
      if ( now_time <= v6->second.end_time )
      {
        std::__detail::_Node_iterator<std::pair<unsigned int const,Config::ActivityStaticInfo>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,Config::ActivityStaticInfo>,false,false> *const)(v1 + 32));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v47,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/config/config.cpp",
          "rewriteConfig",
          674);
        v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v47, (const char (*)[9])"version=");
        v9 = std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)config);
        v10 = common::milog::MiLogStream::operator<<<int,(int *)0>(v8, &v9->version);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v10,
                (const char (*)[16])" activity_hash=");
        v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,Config::ActivityStaticInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,Config::ActivityStaticInfo>,false,false> *const)(v1 + 32));
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &v12->second.activity_hash);
        v14 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                v13,
                (const char (*)[23])" static nav mesh(size=");
        v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,Config::ActivityStaticInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,Config::ActivityStaticInfo>,false,false> *const)(v1 + 32));
        __for_end_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,Config::ActivitySceneInfo>,false>::__node_type *)std::unordered_map<unsigned int,StaticNavMeshConfig>::size(&v15->second.static_nav_meshs);
        v16 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v14,
                (const unsigned __int64 *)&__for_end_0);
        common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v16, (const char (*)[11])") erases. ");
        common::milog::MiLogStream::~MiLogStream(&v47);
        v17 = std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)config);
        *(std::unordered_map<unsigned int,Config::ActivityStaticInfo>::iterator *)(v1 + 32) = std::unordered_map<unsigned int,Config::ActivityStaticInfo>::erase(
                                                                                                &v17->activity_static_nav_mesh_map,
                                                                                                *(std::unordered_map<unsigned int,Config::ActivityStaticInfo>::iterator *)(v1 + 32));
      }
    }
    activity_nav_mesh_data_info = &std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)config)->activity_nav_mesh_data_info;
    std::vector<ActivitySortInfo>::vector((std::vector<ActivitySortInfo> *const)(v1 + 128));
    __for_range_0 = activity_nav_mesh_data_info;
    *(std::unordered_map<unsigned int,Config::ActivitySceneInfo>::iterator *)(v1 + 32) = std::unordered_map<unsigned int,Config::ActivitySceneInfo>::begin(activity_nav_mesh_data_info);
    __for_end_0._M_cur = std::unordered_map<unsigned int,Config::ActivitySceneInfo>::end(__for_range_0)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,Config::ActivitySceneInfo>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,Config::ActivitySceneInfo>,false> *)(v1 + 32),
              &__for_end_0) )
    {
      v18 = std::__detail::_Node_iterator<std::pair<unsigned int const,Config::ActivitySceneInfo>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,Config::ActivitySceneInfo>,false,false> *const)(v1 + 32));
      it = v18;
      activity_id = &v18->first;
      if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v18);
      }
      now_and_future_activity = NewActivityExcelConfigMgr::findNowAndFutureScheduleConfig(
                                  activity_config_mgr,
                                  *activity_id);
      if ( now_and_future_activity )
      {
        if ( *(_BYTE *)(((unsigned __int64)&now_and_future_activity->begin_time >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&now_and_future_activity->begin_time >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&now_and_future_activity->begin_time);
        }
        if ( now_time >= now_and_future_activity->begin_time - check_interval )
        {
          if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load4(activity_id);
          }
          *(_DWORD *)(v1 + 72) = *activity_id;
          *(_BYTE *)(v1 + 64) = 1;
          *(_DWORD *)(v1 + 68) = now_and_future_activity->begin_time;
          std::vector<ActivitySortInfo>::emplace_back<ActivitySortInfo&>(
            (std::vector<ActivitySortInfo> *const)(v1 + 128),
            (ActivitySortInfo *)(v1 + 64),
            (ActivitySortInfo *)(v1 + 64));
          *(_BYTE *)(v1 + 64) = 0;
          if ( *(_BYTE *)(((unsigned __int64)&now_and_future_activity->end_time >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)now_and_future_activity + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&now_and_future_activity->end_time >> 3)
                                                                                   + 0x7FFF8000) )
          {
            __asan_report_load4(&now_and_future_activity->end_time);
          }
          *(_DWORD *)(v1 + 68) = now_and_future_activity->end_time;
          std::vector<ActivitySortInfo>::emplace_back<ActivitySortInfo&>(
            (std::vector<ActivitySortInfo> *const)(v1 + 128),
            (ActivitySortInfo *)(v1 + 64),
            (ActivitySortInfo *)(v1 + 64));
          common::milog::MiLogStream::create(
            &v47,
            &common::milog::MiLogDefault::default_log_obj_,
            2u,
            "./src/config/config.cpp",
            "rewriteConfig",
            707);
          if ( *(_BYTE *)(((unsigned __int64)&now_and_future_activity->end_time >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)now_and_future_activity + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&now_and_future_activity->end_time >> 3)
                                                                                   + 0x7FFF8000) )
          {
            __asan_report_load4(&now_and_future_activity->end_time);
          }
          end_time = now_and_future_activity->end_time;
          if ( *(_BYTE *)(((unsigned __int64)&now_and_future_activity->begin_time >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&now_and_future_activity->begin_time >> 3) + 0x7FFF8000) <= 3 )
          {
            end_time = (_DWORD)now_and_future_activity + 80;
            __asan_report_load4(&now_and_future_activity->begin_time);
          }
          begin_time = now_and_future_activity->begin_time;
          if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3)
                                                                          + 0x7FFF8000) )
          {
            end_time = (unsigned int)activity_id;
            __asan_report_load4(activity_id);
          }
          common::milog::MiLogStream::operator()(
            &v47,
            "activity_id:%u [%u,%u] now_time:%ld, check_interval:%u",
            *activity_id,
            begin_time,
            end_time,
            now_time,
            check_interval);
          common::milog::MiLogStream::~MiLogStream(&v47);
        }
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,Config::ActivitySceneInfo>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,Config::ActivitySceneInfo>,false,false> *const)(v1 + 32));
    }
    M_current = std::vector<ActivitySortInfo>::end((std::vector<ActivitySortInfo> *const)(v1 + 128))._M_current;
    v22._M_current = std::vector<ActivitySortInfo>::begin((std::vector<ActivitySortInfo> *const)(v1 + 128))._M_current;
    std::sort<__gnu_cxx::__normal_iterator<ActivitySortInfo *,std::vector<ActivitySortInfo>>>(
      v22,
      (__gnu_cxx::__normal_iterator<ActivitySortInfo*,std::vector<ActivitySortInfo> >)M_current);
    std::vector<Config::ActivityStaticInfo>::vector((std::vector<Config::ActivityStaticInfo> *const)(v1 + 192));
    Config::ActivityStaticInfo::ActivityStaticInfo((Config::ActivityStaticInfo *const)(v1 + 256));
    __for_range_1 = (std::vector<ActivitySortInfo> *)(v1 + 128);
    *(std::vector<ActivitySortInfo>::iterator *)(v1 + 32) = std::vector<ActivitySortInfo>::begin((std::vector<ActivitySortInfo> *const)(v1 + 128));
    __for_end_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,Config::ActivitySceneInfo>,false>::__node_type *)std::vector<ActivitySortInfo>::end(__for_range_1)._M_current;
    while ( __gnu_cxx::operator!=<ActivitySortInfo *,std::vector<ActivitySortInfo>>(
              (const __gnu_cxx::__normal_iterator<ActivitySortInfo*,std::vector<ActivitySortInfo> > *)(v1 + 32),
              (const __gnu_cxx::__normal_iterator<ActivitySortInfo*,std::vector<ActivitySortInfo> > *)&__for_end_0) )
    {
      v23 = __gnu_cxx::__normal_iterator<ActivitySortInfo *,std::vector<ActivitySortInfo>>::operator*((const __gnu_cxx::__normal_iterator<ActivitySortInfo*,std::vector<ActivitySortInfo> > *const)(v1 + 32));
      activity_sort_info = v23;
      if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)v23 & 7) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(v23);
      }
      if ( activity_sort_info->is_start )
      {
        if ( dynamic_array<unsigned int,false,4ul>::size((const dynamic_array<unsigned int,false,4> *const)(v1 + 264)) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&activity_sort_info->timestamp >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)activity_sort_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&activity_sort_info->timestamp >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_load4(&activity_sort_info->timestamp);
          }
          *(_DWORD *)(v1 + 292) = activity_sort_info->timestamp + check_interval;
          Config::push_back_activity_config(
            this,
            (Config::ActivityStaticInfo *)(v1 + 256),
            (std::vector<Config::ActivityStaticInfo> *)(v1 + 192),
            now_time,
            config);
          if ( *(_BYTE *)(((unsigned __int64)&activity_sort_info->timestamp >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)activity_sort_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&activity_sort_info->timestamp >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_load4(&activity_sort_info->timestamp);
          }
          *(_DWORD *)(v1 + 288) = activity_sort_info->timestamp - check_interval;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&activity_sort_info->timestamp >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)activity_sort_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&activity_sort_info->timestamp >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_load4(&activity_sort_info->timestamp);
          }
          *(_DWORD *)(v1 + 288) = activity_sort_info->timestamp - check_interval;
        }
        dynamic_array<unsigned int,false,4ul>::push_back(
          (dynamic_array<unsigned int,false,4> *const)(v1 + 264),
          &activity_sort_info->activity_id);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&activity_sort_info->timestamp >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)activity_sort_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&activity_sort_info->timestamp >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4(&activity_sort_info->timestamp);
        }
        *(_DWORD *)(v1 + 292) = activity_sort_info->timestamp + check_interval;
        Config::push_back_activity_config(
          this,
          (Config::ActivityStaticInfo *)(v1 + 256),
          (std::vector<Config::ActivityStaticInfo> *)(v1 + 192),
          now_time,
          config);
        if ( dynamic_array<unsigned int,false,4ul>::size((const dynamic_array<unsigned int,false,4> *const)(v1 + 264)) == 1 )
        {
          dynamic_array<unsigned int,false,4ul>::clear((dynamic_array<unsigned int,false,4> *const)(v1 + 264));
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&activity_sort_info->timestamp >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)activity_sort_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&activity_sort_info->timestamp >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_load4(&activity_sort_info->timestamp);
          }
          *(_DWORD *)(v1 + 288) = activity_sort_info->timestamp - check_interval;
          for ( it_0 = dynamic_array<unsigned int,false,4ul>::begin((dynamic_array<unsigned int,false,4> *const)(v1 + 264));
                ;
                ++it_0 )
          {
            v24 = dynamic_array<unsigned int,false,4ul>::end((dynamic_array<unsigned int,false,4> *const)(v1 + 264));
            if ( it_0 == v24 )
              break;
            if ( it_0 )
            {
              if ( *(_BYTE *)(((unsigned __int64)it_0 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)it_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)it_0 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(it_0);
              }
              v25 = *it_0;
              if ( *(_BYTE *)(((unsigned __int64)&activity_sort_info->activity_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)activity_sort_info + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&activity_sort_info->activity_id >> 3)
                                                                                 + 0x7FFF8000) )
              {
                __asan_report_load4(&activity_sort_info->activity_id);
              }
              if ( v25 == activity_sort_info->activity_id )
              {
                dynamic_array<unsigned int,false,4ul>::erase(
                  (dynamic_array<unsigned int,false,4> *const)(v1 + 264),
                  it_0);
                break;
              }
            }
          }
        }
      }
      __gnu_cxx::__normal_iterator<ActivitySortInfo *,std::vector<ActivitySortInfo>>::operator++((__gnu_cxx::__normal_iterator<ActivitySortInfo*,std::vector<ActivitySortInfo> > *const)(v1 + 32));
    }
    Config::ActivityStaticInfo::~ActivityStaticInfo((Config::ActivityStaticInfo *const)(v1 + 256));
    std::vector<Config::ActivityStaticInfo>::~vector((std::vector<Config::ActivityStaticInfo> *const)(v1 + 192));
    std::vector<ActivitySortInfo>::~vector((std::vector<ActivitySortInfo> *const)(v1 + 128));
    __gnu_cxx::__normal_iterator<std::shared_ptr<Config::NavMeshInstance> *,std::vector<std::shared_ptr<Config::NavMeshInstance>>>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v47,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/config/config.cpp",
    "rewriteConfig",
    761);
  v26 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
          &v47,
          (const char (*)[67])"++++++++++++++++++++++++ activity navmesh check finish. cost time:");
  val = (float)common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v1 + 96)) / 1000.0;
  v27 = common::milog::MiLogStream::operator<<<float,(float *)0>(v26, &val);
  common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v27, (const char (*)[27])"ms +++++++++++++++++++++++");
  common::milog::MiLogStream::~MiLogStream(&v47);
  common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v1 + 96));
  result = 0;
  if ( v48 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF802C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 766: range 000000000CB62366-000000000CB63477
int32_t __cdecl Config::loadNavDatas(Config *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  const std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false> *v4; // rax
  std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  char v6; // al
  int32_t v7; // r15d
  const std::shared_ptr<Config::NavMeshInstance> *v8; // rax
  std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  const char *v10; // rax
  common::milog::MiLogStream *v11; // rax
  const char *v12; // r15
  const char *v13; // rax
  const char *v14; // rax
  uint32_t v15; // edi
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  const std::pair<unsigned int const,Config::NavMeshDataInstance> *v19; // rax
  std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  const BlockInfo *BlockInfo; // rdx
  uint32_t *p_activity_id; // rax
  std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  const BlockInfo *v25; // rdx
  uint32_t *p_polygon_id; // rax
  std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  const BlockInfo *v28; // rdx
  uint32_t *p_scene_tag_hash; // rax
  std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  StaticNavMesh *v31; // rax
  std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  StaticNavMeshConfig *v33; // rax
  std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  StaticNavMeshConfig *v35; // rdi
  std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // r15
  common::milog::MiLogStream *v46; // rax
  const std::pair<const Config::StaticSceneKey,StaticNavMeshConfig> *v47; // rax
  std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v48; // rax
  NavMesh *NavMesh; // rax
  std::shared_ptr<Config::NavMeshInstance> *v50; // rcx
  const std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false> *v51; // rax
  std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rax
  uint32_t v53; // edi
  __int64 v54; // rax
  uint32_t server_res_version; // ecx
  float val; // [rsp+18h] [rbp-578h] BYREF
  int32_t version; // [rsp+1Ch] [rbp-574h]
  std::unordered_map<unsigned int,Config::NavMeshDataInstance>::iterator __for_begin; // [rsp+20h] [rbp-570h] BYREF
  std::unordered_map<unsigned int,Config::NavMeshDataInstance>::iterator __for_end; // [rsp+28h] [rbp-568h] BYREF
  std::unordered_map<Config::StaticSceneKey,StaticNavMeshConfig,Config::StaticSceneKeyHash,std::equal_to<Config::StaticSceneKey>,std::allocator<std::pair<const Config::StaticSceneKey,StaticNavMeshConfig> > >::iterator __for_begin_0; // [rsp+30h] [rbp-560h] BYREF
  std::unordered_map<Config::StaticSceneKey,StaticNavMeshConfig,Config::StaticSceneKeyHash,std::equal_to<Config::StaticSceneKey>,std::allocator<std::pair<const Config::StaticSceneKey,StaticNavMeshConfig> > >::iterator __for_end_0; // [rsp+38h] [rbp-558h] BYREF
  unsigned __int64 data_size; // [rsp+40h] [rbp-550h]
  StaticNavMesh *static_navmesh_ptr; // [rsp+48h] [rbp-548h]
  std::unordered_map<unsigned int,Config::NavMeshDataInstance> *__for_range; // [rsp+50h] [rbp-540h]
  std::unordered_map<Config::StaticSceneKey,StaticNavMeshConfig,Config::StaticSceneKeyHash,std::equal_to<Config::StaticSceneKey>,std::allocator<std::pair<const Config::StaticSceneKey,StaticNavMeshConfig> > > *__for_range_0; // [rsp+58h] [rbp-538h]
  std::shared_ptr<StaticNavMesh> *static_navmesh_ptr_0; // [rsp+60h] [rbp-530h]
  std::shared_ptr<NavMeshData> *nav_mesh_data; // [rsp+68h] [rbp-528h]
  StaticNavMeshConfig *static_nav_mash_config; // [rsp+70h] [rbp-520h]
  StaticNavMeshConfig *static_navmesh; // [rsp+78h] [rbp-518h]
  char v72[1296]; // [rsp+80h] [rbp-510h] BYREF

  v1 = (unsigned __int64)v72;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_5(1248LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "12 32 12 7 key:809 64 16 12 old_info:774 96 16 8 info:780 128 16 9 timer:829 160 16 8 lock:850 1"
                        "92 32 13 file_name:784 256 32 7 md5:792 320 32 25 navmesh_data_filename:793 384 32 11 data_it:81"
                        "1 448 32 21 it_static_navmesh:844 512 48 21 changed_scene_ids:794 592 520 7 ifs:785";
  *(_QWORD *)(v1 + 16) = Config::loadNavDatas;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219020288;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -219021312;
  v3[536862725] = -219021312;
  v3[536862727] = -218959118;
  v3[536862729] = -218959118;
  v3[536862731] = -218959118;
  v3[536862733] = -218959118;
  v3[536862735] = -218959118;
  v3[536862737] = -219021312;
  v3[536862738] = 62194;
  v3[536862754] = -218103808;
  v3[536862755] = -202116109;
  v3[536862756] = -202116109;
  v3[536862757] = -202116109;
  v3[536862758] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->server_res_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->server_res_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->server_res_version);
  }
  version = this->server_res_version;
  data_size = std::vector<std::shared_ptr<Config::NavMeshInstance>>::size(&Config::version_datas);
  if ( !data_size )
    goto LABEL_11;
  v4 = (const std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false> *)std::vector<std::shared_ptr<Config::NavMeshInstance>>::operator[](&Config::version_datas, 0LL);
  v5 = std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v4);
  if ( *(_BYTE *)(((unsigned __int64)&v5->version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v5->version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v5->version);
  }
  if ( version == v5->version )
    v6 = 1;
  else
LABEL_11:
    v6 = 0;
  if ( v6 )
  {
    v7 = 0;
  }
  else
  {
    *(_QWORD *)(v1 + 64) = 0LL;
    *(_QWORD *)(v1 + 72) = 0LL;
    if ( data_size )
    {
      v8 = std::vector<std::shared_ptr<Config::NavMeshInstance>>::operator[](&Config::version_datas, 0LL);
      std::shared_ptr<Config::NavMeshInstance>::operator=(
        (std::shared_ptr<Config::NavMeshInstance> *const)(v1 + 64),
        v8);
    }
    common::tools::perf::make_shared<Config::NavMeshInstance>();
    v9 = std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&v9->version >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v9->version >> 3) + 0x7FFF8000) <= 3 )
    {
      v9 = (std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v9->version);
    }
    v9->version = version;
    std::operator+<char>(
      (std::string *)(v1 + 192),
      &this->design_config.real_res_base_dir,
      "/server_res_version_md5_list.txt");
    std::ifstream::basic_ifstream(v1 + 592, v1 + 192, 8LL);
    if ( (unsigned __int8)std::ios::good(v1 + 848) != 1 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 448),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/config/config.cpp",
        "loadNavDatas",
        788);
      v10 = (const char *)std::string::c_str(v1 + 192);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v1 + 448), "can't load file:%s", v10);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 448));
      v7 = -1;
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 448),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/config/config.cpp",
        "loadNavDatas",
        791);
      v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
              (common::milog::MiLogStream *const)(v1 + 448),
              (const char (*)[9])"loading ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, (const std::string *)(v1 + 192));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 448));
      std::string::basic_string(v1 + 256);
      std::string::basic_string(v1 + 320);
      std::set<Config::StaticSceneKey>::set((std::set<Config::StaticSceneKey> *const)(v1 + 512));
      while ( (unsigned __int8)std::ios::eof(v1 + 848) != 1 )
      {
        std::operator>><char>(v1 + 592, v1 + 256);
        std::operator>><char>(v1 + 592, v1 + 320);
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v1 + 448),
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/config/config.cpp",
          "loadNavDatas",
          799);
        v12 = (const char *)std::string::c_str(v1 + 256);
        v13 = (const char *)std::string::c_str(v1 + 320);
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)(v1 + 448),
          "loading file:%s, md5:%s",
          v13,
          v12);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 448));
        if ( std::string::find(v1 + 320, ".navmesh", 0LL) != -1 )
        {
          v14 = (const char *)std::string::c_str(v1 + 256);
          v15 = ComputeFNV1aHash(v14);
          if ( Config::loadNavMeshData(
                 this,
                 (const std::string *)(v1 + 320),
                 v15,
                 (const std::shared_ptr<Config::NavMeshInstance> *)(v1 + 64),
                 (std::shared_ptr<Config::NavMeshInstance> *)(v1 + 96),
                 (std::set<Config::StaticSceneKey> *)(v1 + 512)) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v1 + 448),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/config/config.cpp",
              "loadNavDatas",
              804);
            v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v1 + 448),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v17 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v16, (const char (*)[11])"load file ");
            v18 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                    v17,
                    (const std::string *)(v1 + 320));
            common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v18, (const char (*)[9])" failed.");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 448));
          }
        }
      }
      std::ifstream::close(v1 + 592);
      static_navmesh_ptr = 0LL;
      __for_range = &std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96))->nav_mesh_data_map;
      __for_begin._M_cur = std::unordered_map<unsigned int,Config::NavMeshDataInstance>::begin(__for_range)._M_cur;
      __for_end._M_cur = std::unordered_map<unsigned int,Config::NavMeshDataInstance>::end(__for_range)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,Config::NavMeshDataInstance>,false>(
                &__for_begin,
                &__for_end) )
      {
        v19 = std::__detail::_Node_iterator<std::pair<unsigned int const,Config::NavMeshDataInstance>,false,false>::operator*(&__for_begin);
        std::pair<unsigned int const,Config::NavMeshDataInstance>::pair(
          (std::pair<unsigned int const,Config::NavMeshDataInstance> *const)(v1 + 384),
          v19);
        nav_mesh_data = (std::shared_ptr<NavMeshData> *)(v1 + 392);
        v20 = std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 392));
        BlockInfo = NavMeshData::GetBlockInfo(v20);
        p_activity_id = &BlockInfo->activity_id;
        if ( *(_BYTE *)(((unsigned __int64)p_activity_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_activity_id >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(p_activity_id);
        }
        if ( !BlockInfo->activity_id )
        {
          v23 = std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false> *const)nav_mesh_data);
          *(_DWORD *)(v1 + 32) = NavMeshData::GetNavMeshDataID(v23);
          v24 = std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false> *const)nav_mesh_data);
          v25 = NavMeshData::GetBlockInfo(v24);
          p_polygon_id = &v25->polygon_id;
          if ( *(_BYTE *)(((unsigned __int64)p_polygon_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_polygon_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_polygon_id >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4(p_polygon_id);
          }
          *(_DWORD *)(v1 + 36) = v25->polygon_id;
          v27 = std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false> *const)nav_mesh_data);
          v28 = NavMeshData::GetBlockInfo(v27);
          p_scene_tag_hash = &v28->scene_tag_hash;
          if ( *(_BYTE *)(((unsigned __int64)p_scene_tag_hash >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_scene_tag_hash & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_scene_tag_hash >> 3)
                                                                               + 0x7FFF8000) )
          {
            __asan_report_load4(p_scene_tag_hash);
          }
          *(_DWORD *)(v1 + 40) = v28->scene_tag_hash;
          __for_end_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<const Config::StaticSceneKey,StaticNavMeshConfig>,true>::__node_type *)std::set<Config::StaticSceneKey>::end((const std::set<Config::StaticSceneKey> *const)(v1 + 512))._M_node;
          __for_begin_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<const Config::StaticSceneKey,StaticNavMeshConfig>,true>::__node_type *)std::set<Config::StaticSceneKey>::find((std::set<Config::StaticSceneKey> *const)(v1 + 512), (const std::set<Config::StaticSceneKey>::key_type *)(v1 + 32))._M_node;
          if ( std::operator==(
                 (const std::_Rb_tree_const_iterator<Config::StaticSceneKey>::_Self *)&__for_begin_0,
                 (const std::_Rb_tree_const_iterator<Config::StaticSceneKey>::_Self *)&__for_end_0) )
          {
            v30 = std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
            static_navmesh = std::unordered_map<Config::StaticSceneKey,StaticNavMeshConfig,Config::StaticSceneKeyHash,std::equal_to<Config::StaticSceneKey>,std::allocator<std::pair<Config::StaticSceneKey const,StaticNavMeshConfig>>>::operator[](
                               &v30->static_nav_mesh_map,
                               (const std::unordered_map<Config::StaticSceneKey,StaticNavMeshConfig,Config::StaticSceneKeyHash,std::equal_to<Config::StaticSceneKey>,std::allocator<std::pair<const Config::StaticSceneKey,StaticNavMeshConfig> > >::key_type *)(v1 + 32));
            v31 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)static_navmesh);
            StaticNavMesh::SetVersion(v31, version);
            v32 = std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            v33 = std::unordered_map<Config::StaticSceneKey,StaticNavMeshConfig,Config::StaticSceneKeyHash,std::equal_to<Config::StaticSceneKey>,std::allocator<std::pair<Config::StaticSceneKey const,StaticNavMeshConfig>>>::operator[](
                    &v32->static_nav_mesh_map,
                    (const std::unordered_map<Config::StaticSceneKey,StaticNavMeshConfig,Config::StaticSceneKeyHash,std::equal_to<Config::StaticSceneKey>,std::allocator<std::pair<const Config::StaticSceneKey,StaticNavMeshConfig> > >::key_type *)(v1 + 32));
            StaticNavMeshConfig::operator=(v33, static_navmesh);
          }
          else
          {
            common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v1 + 128));
            v34 = std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            static_nav_mash_config = std::unordered_map<Config::StaticSceneKey,StaticNavMeshConfig,Config::StaticSceneKeyHash,std::equal_to<Config::StaticSceneKey>,std::allocator<std::pair<Config::StaticSceneKey const,StaticNavMeshConfig>>>::operator[](
                                       &v34->static_nav_mesh_map,
                                       (const std::unordered_map<Config::StaticSceneKey,StaticNavMeshConfig,Config::StaticSceneKeyHash,std::equal_to<Config::StaticSceneKey>,std::allocator<std::pair<const Config::StaticSceneKey,StaticNavMeshConfig> > >::key_type *)(v1 + 32));
            if ( std::operator==<StaticNavMesh>(&static_nav_mash_config->static_nav_mesh, 0LL) )
            {
              common::tools::perf::make_shared<StaticNavMesh>();
              std::shared_ptr<StaticNavMesh>::operator=(
                &static_nav_mash_config->static_nav_mesh,
                (std::shared_ptr<StaticNavMesh> *)(v1 + 160));
              std::shared_ptr<StaticNavMesh>::~shared_ptr((std::shared_ptr<StaticNavMesh> *const)(v1 + 160));
            }
            v35 = static_nav_mash_config;
            static_navmesh_ptr = std::__shared_ptr<StaticNavMesh,(__gnu_cxx::_Lock_policy)2>::get(&static_nav_mash_config->static_nav_mesh);
            if ( !static_navmesh_ptr )
            {
              __asan_handle_no_return(v35);
              __assert_fail("static_navmesh_ptr", "./src/config/config.cpp", 0x345u, "int32_t Config::loadNavDatas()");
            }
            StaticNavMesh::AddMeshData(static_navmesh_ptr, nav_mesh_data, 1);
            v36 = std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            if ( *(_BYTE *)(((unsigned __int64)&v36->version >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v36->version >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&v36->version);
            }
            StaticNavMesh::SetVersion(static_navmesh_ptr, v36->version);
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v1 + 448),
              &common::milog::MiLogDefault::default_log_obj_,
              2u,
              "./src/config/config.cpp",
              "loadNavDatas",
              842);
            v37 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                    (common::milog::MiLogStream *const)(v1 + 448),
                    (const char (*)[19])"static navmesh id:");
            v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v37,
                    (const unsigned int *)(v1 + 32));
            v39 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v38,
                    (const char (*)[14])" ,polygon_id:");
            v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v39,
                    (const unsigned int *)(v1 + 36));
            v41 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v40,
                    (const char (*)[18])" ,scene_tag_hash:");
            v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v41,
                    (const unsigned int *)(v1 + 40));
            v43 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v42,
                    (const char (*)[13])", add data :");
            v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v43,
                    (const unsigned int *)(v1 + 384));
            v45 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v44, (const char (*)[7])" cost:");
            val = (float)common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v1 + 128))
                / 1000.0;
            v46 = common::milog::MiLogStream::operator<<<float,(float *)0>(v45, &val);
            common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v46, (const char (*)[3])"ms");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 448));
            common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v1 + 128));
          }
        }
        std::pair<unsigned int const,Config::NavMeshDataInstance>::~pair((std::pair<unsigned int const,Config::NavMeshDataInstance> *const)(v1 + 384));
        std::__detail::_Node_iterator<std::pair<unsigned int const,Config::NavMeshDataInstance>,false,false>::operator++(&__for_begin);
      }
      __for_range_0 = (std::unordered_map<Config::StaticSceneKey,StaticNavMeshConfig,Config::StaticSceneKeyHash,std::equal_to<Config::StaticSceneKey>,std::allocator<std::pair<const Config::StaticSceneKey,StaticNavMeshConfig> > > *)std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      __for_begin_0._M_cur = std::unordered_map<Config::StaticSceneKey,StaticNavMeshConfig,Config::StaticSceneKeyHash,std::equal_to<Config::StaticSceneKey>,std::allocator<std::pair<Config::StaticSceneKey const,StaticNavMeshConfig>>>::begin(__for_range_0)._M_cur;
      __for_end_0._M_cur = std::unordered_map<Config::StaticSceneKey,StaticNavMeshConfig,Config::StaticSceneKeyHash,std::equal_to<Config::StaticSceneKey>,std::allocator<std::pair<Config::StaticSceneKey const,StaticNavMeshConfig>>>::end(__for_range_0)._M_cur;
      while ( std::__detail::operator!=<std::pair<Config::StaticSceneKey const,StaticNavMeshConfig>,true>(
                &__for_begin_0,
                &__for_end_0) )
      {
        v47 = std::__detail::_Node_iterator<std::pair<Config::StaticSceneKey const,StaticNavMeshConfig>,false,true>::operator*(&__for_begin_0);
        std::pair<Config::StaticSceneKey const,StaticNavMeshConfig>::pair(
          (std::pair<const Config::StaticSceneKey,StaticNavMeshConfig> *const)(v1 + 448),
          v47);
        static_navmesh_ptr_0 = (std::shared_ptr<StaticNavMesh> *)(v1 + 464);
        v48 = std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticNavMesh,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 464));
        NavMesh = StaticNavMesh::GetNavMesh(v48);
        NavMesh::PostProcessorGlobalConnectRegion(NavMesh);
        std::pair<Config::StaticSceneKey const,StaticNavMeshConfig>::~pair((std::pair<const Config::StaticSceneKey,StaticNavMeshConfig> *const)(v1 + 448));
        std::__detail::_Node_iterator<std::pair<Config::StaticSceneKey const,StaticNavMeshConfig>,false,true>::operator++(&__for_begin_0);
      }
      boost::unique_lock<boost::shared_mutex>::unique_lock(
        (boost::unique_lock<boost::shared_mutex> *const)(v1 + 160),
        &Config::version_datas_mutex_);
      __for_begin_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<const Config::StaticSceneKey,StaticNavMeshConfig>,true>::__node_type *)std::vector<std::shared_ptr<Config::NavMeshInstance>>::begin(&Config::version_datas)._M_current;
      __gnu_cxx::__normal_iterator<std::shared_ptr<Config::NavMeshInstance> const*,std::vector<std::shared_ptr<Config::NavMeshInstance>>>::__normal_iterator<std::shared_ptr<Config::NavMeshInstance>*>(
        (__gnu_cxx::__normal_iterator<const std::shared_ptr<Config::NavMeshInstance>*,std::vector<std::shared_ptr<Config::NavMeshInstance>> > *const)&__for_end_0,
        (const __gnu_cxx::__normal_iterator<std::shared_ptr<Config::NavMeshInstance>*,std::vector<std::shared_ptr<Config::NavMeshInstance>> > *)&__for_begin_0);
      std::vector<std::shared_ptr<Config::NavMeshInstance>>::emplace<std::shared_ptr<Config::NavMeshInstance>&>(
        &Config::version_datas,
        (std::vector<std::shared_ptr<Config::NavMeshInstance>>::const_iterator)__for_end_0._M_cur,
        (std::shared_ptr<Config::NavMeshInstance> *)(v1 + 96),
        v50);
      if ( data_size == Config::max_version_data_count )
        std::vector<std::shared_ptr<Config::NavMeshInstance>>::pop_back(&Config::version_datas);
      if ( std::vector<std::shared_ptr<Config::NavMeshInstance>>::size(&Config::version_datas) )
      {
        v51 = (const std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false> *)std::vector<std::shared_ptr<Config::NavMeshInstance>>::back(&Config::version_datas);
        v52 = std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v51);
        if ( *(_BYTE *)(((unsigned __int64)&v52->version >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v52->version >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v52->version);
        }
        v53 = v52->version;
        if ( *(_BYTE *)(((unsigned __int64)&this->oldest_version >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->oldest_version >> 3)
                                                              + 0x7FFF8000) )
        {
          v53 = (_DWORD)this + 292;
          __asan_report_store4(&this->oldest_version);
        }
        this->oldest_version = v53;
      }
      else
      {
        v54 = *(unsigned __int8 *)(((unsigned __int64)&this->server_res_version >> 3) + 0x7FFF8000);
        if ( (_BYTE)v54 != 0 && (char)v54 <= 3 )
          __asan_report_load4(&this->server_res_version);
        server_res_version = this->server_res_version;
        if ( *(_BYTE *)(((unsigned __int64)&this->oldest_version >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->oldest_version >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_store4(&this->oldest_version);
        }
        this->oldest_version = server_res_version;
      }
      boost::unique_lock<boost::shared_mutex>::~unique_lock((boost::unique_lock<boost::shared_mutex> *const)(v1 + 160));
      v7 = 0;
      std::set<Config::StaticSceneKey>::~set((std::set<Config::StaticSceneKey> *const)(v1 + 512));
      std::string::~string((void *)(v1 + 320));
      std::string::~string((void *)(v1 + 256));
    }
    std::ifstream::~ifstream(v1 + 592);
    std::string::~string((void *)(v1 + 192));
    std::shared_ptr<Config::NavMeshInstance>::~shared_ptr((std::shared_ptr<Config::NavMeshInstance> *const)(v1 + 96));
    std::shared_ptr<Config::NavMeshInstance>::~shared_ptr((std::shared_ptr<Config::NavMeshInstance> *const)(v1 + 64));
  }
  if ( v72 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF802C) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8034) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF803C) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8044) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8088) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8090) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8098) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_5(v1, 1248LL, v72);
  }
  return v7;
};

// Line 871: range 000000000CB63478-000000000CB63C72
int32_t __cdecl Config::loadNavMeshData(
        Config *const this,
        const std::string *filename,
        uint32_t data_id,
        Config::NavMeshDataInstance *config)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  int32_t v8; // r14d
  NavMeshData *v9; // r14
  common::milog::MiLogStream *v10; // r14
  const char *v11; // rax
  __int64 v12; // rax
  bool v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  const std::string *v17; // rax
  const std::string *v18; // rax
  const std::string *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  const std::string *v21; // rax
  const std::string *v22; // rax
  const std::string *v23; // rax
  const std::string *v24; // rax
  const std::string *v25; // rax
  const std::string *v26; // rax
  NavMeshData *v27; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+2Fh] [rbp-141h] BYREF
  unsigned __int64 sep_lit_size_0; // [rsp+30h] [rbp-140h]
  unsigned __int64 sep_lit_size; // [rsp+38h] [rbp-138h]
  std::string __lhs; // [rsp+40h] [rbp-130h] BYREF
  common::milog::MiLogStream v35; // [rsp+60h] [rbp-110h] BYREF
  char v36[240]; // [rsp+80h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 16 13 mesh_data:872 64 24 8 info:885 128 24 12 sep_list:887";
  *(_QWORD *)(v4 + 16) = Config::loadNavMeshData;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -234881024;
  v6[536862723] = -218959118;
  v6[536862724] = -218103808;
  v6[536862725] = -202116109;
  common::tools::perf::make_shared<NavMeshData>();
  if ( std::operator==<NavMeshData>((const std::shared_ptr<NavMeshData> *)(v4 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/config/config.cpp",
      "loadNavMeshData",
      875);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v35, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      v7,
      (const char (*)[32])"alloc NavMeshData memory failed");
    common::milog::MiLogStream::~MiLogStream(&v35);
    v8 = -1;
  }
  else
  {
    v9 = std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    std::operator+<char>(&__lhs, &this->design_config.real_res_base_dir, "/");
    std::operator+<char>((std::string *)&v35, &__lhs, filename);
    LOBYTE(v9) = !NavMeshData::LoadFromFile(v9, (const std::string *)&v35);
    std::string::~string(&v35);
    std::string::~string(&__lhs);
    if ( (_BYTE)v9 )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/config/config.cpp",
        "loadNavMeshData",
        881);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v35, (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = (const char *)std::string::c_str(filename);
      common::milog::MiLogStream::operator()(v10, "can't parse file:%s", v11);
      common::milog::MiLogStream::~MiLogStream(&v35);
      v8 = -1;
    }
    else
    {
      *(_DWORD *)(v4 + 64) = 0;
      *(_WORD *)(v4 + 68) = -32640;
      *(_DWORD *)(v4 + 72) = 0;
      *(_DWORD *)(v4 + 76) = 0;
      *(_DWORD *)(v4 + 80) = 0;
      *(_BYTE *)(v4 + 84) = 0x80;
      *(_BYTE *)(v4 + 85) = 0x80;
      *(_DWORD *)(v4 + 64) = data_id;
      std::vector<std::string>::vector((std::vector<std::string> *const)(v4 + 128));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v35, "_", &__a);
      v12 = std::string::length(filename);
      std::string::substr(&__lhs, filename, 0LL, v12 - 7);
      v13 = common::tools::StringUtils::split(
              &__lhs,
              (const std::string *)&v35,
              (std::vector<std::string> *)(v4 + 128),
              0) != 0;
      std::string::~string(&__lhs);
      std::string::~string(&v35);
      std::allocator<char>::~allocator(&__a);
      if ( v13 )
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/config/config.cpp",
          "loadNavMeshData",
          890);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                &v35,
                (const char (*)[16])"[CONFIG_ERROR] ");
        v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])"file:");
        v16 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, filename);
        common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v16, (const char (*)[21])"is not a valid file.");
        common::milog::MiLogStream::~MiLogStream(&v35);
        v8 = -1;
      }
      else
      {
        v17 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v4 + 128), 0LL);
        if ( std::operator==<char>(v17, "./NavMesh/scenepolygon") )
        {
          sep_lit_size = std::vector<std::string>::size((const std::vector<std::string> *const)(v4 + 128));
          if ( sep_lit_size == 4 )
          {
            v18 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v4 + 128), 2uLL);
            *(_DWORD *)(v4 + 76) = std::stoi(v18, 0LL, 10);
            v19 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v4 + 128), 3uLL);
            *(_DWORD *)(v4 + 80) = std::stoi(v19, 0LL, 10);
          }
          else
          {
            common::milog::MiLogStream::create(
              &v35,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/config/config.cpp",
              "loadNavMeshData",
              904);
            v20 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    &v35,
                    (const char (*)[18])"invalid file name");
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, filename);
            common::milog::MiLogStream::~MiLogStream(&v35);
          }
        }
        else
        {
          sep_lit_size_0 = std::vector<std::string>::size((const std::vector<std::string> *const)(v4 + 128));
          switch ( sep_lit_size_0 )
          {
            case 3uLL:
              v21 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v4 + 128), 2uLL);
              *(_DWORD *)(v4 + 72) = std::stoi(v21, 0LL, 10);
              break;
            case 4uLL:
              v22 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v4 + 128), 2uLL);
              *(_BYTE *)(v4 + 84) = std::stoi(v22, 0LL, 10);
              v23 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v4 + 128), 3uLL);
              *(_BYTE *)(v4 + 85) = std::stoi(v23, 0LL, 10);
              break;
            case 5uLL:
              v24 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v4 + 128), 2uLL);
              *(_DWORD *)(v4 + 72) = std::stoi(v24, 0LL, 10);
              v25 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v4 + 128), 3uLL);
              *(_BYTE *)(v4 + 84) = std::stoi(v25, 0LL, 10);
              v26 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v4 + 128), 4uLL);
              *(_BYTE *)(v4 + 85) = std::stoi(v26, 0LL, 10);
              break;
          }
        }
        v27 = std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
        NavMeshData::InitBlockInfo(v27, (const BlockInfo *)(v4 + 64));
        std::shared_ptr<NavMeshData>::operator=(&config->nav_mesh_data, (const std::shared_ptr<NavMeshData> *)(v4 + 32));
        v8 = 0;
      }
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v4 + 128));
    }
  }
  std::shared_ptr<NavMeshData>::~shared_ptr((std::shared_ptr<NavMeshData> *const)(v4 + 32));
  result = v8;
  if ( v36 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 936: range 000000000CB63C74-000000000CB64500
int32_t __cdecl Config::loadNavMeshData(
        Config *const this,
        const std::string *filename,
        uint32_t md5,
        const std::shared_ptr<Config::NavMeshInstance> *old_navmesh_config,
        std::shared_ptr<Config::NavMeshInstance> *nav_mesh_config,
        std::set<Config::StaticSceneKey> *changed_scene_ids)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  common::milog::MiLogStream *v9; // rax
  int32_t v10; // r14d
  const char *v11; // rax
  std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,Config::NavMeshDataInstance>,false,false>::pointer v14; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,Config::NavMeshDataInstance>,false,false>::pointer v15; // rax
  std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  const BlockInfo *BlockInfo; // rdx
  uint32_t *p_polygon_id; // rax
  std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  const BlockInfo *v23; // rdx
  uint32_t *p_scene_tag_hash; // rax
  std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  SurfaceIDType *p_block_id; // rax
  std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  const BlockInfo *v29; // r8
  common::milog::MiLogStream *v30; // rdx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  int32_t result; // eax
  bool is_data_changed; // [rsp+3Ah] [rbp-146h]
  bool is_block; // [rsp+3Bh] [rbp-145h]
  std::unordered_map<unsigned int,Config::SceneBlockInfo>::key_type __k; // [rsp+3Ch] [rbp-144h] BYREF
  unsigned __int64 start_load_time; // [rsp+40h] [rbp-140h]
  Config::NavMeshDataInstance *config; // [rsp+48h] [rbp-138h]
  const BlockInfo *info; // [rsp+50h] [rbp-130h]
  Config::ActivitySceneInfo *activity_info; // [rsp+58h] [rbp-128h]
  Config::SceneBlockInfo *scene_block_info; // [rsp+60h] [rbp-120h]
  unsigned __int64 end_parse_data_time; // [rsp+68h] [rbp-118h]
  common::milog::MiLogStream v58; // [rsp+70h] [rbp-110h] BYREF
  char v59[240]; // [rsp+90h] [rbp-F0h] BYREF

  v6 = (unsigned __int64)v59;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(192LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "5 48 4 11 data_id:942 64 8 15 old_data_it:948 96 8 14 total_time:995 128 12 7 key:973 160 16 13 mesh_data:945";
  *(_QWORD *)(v6 + 16) = Config::loadNavMeshData;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -218959360;
  v8[536862723] = -218959360;
  v8[536862724] = -219020288;
  v8[536862725] = -202178560;
  if ( std::operator==<Config::NavMeshInstance>(nav_mesh_config, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v58,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/config/config.cpp",
      "loadNavMeshData",
      939);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v58, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      v9,
      (const char (*)[27])"nav_mesh_config is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v58);
    v10 = -1;
    goto LABEL_33;
  }
  v11 = (const char *)std::string::c_str(filename);
  *(_DWORD *)(v6 + 48) = ComputeFNV1aHash(v11);
  is_data_changed = 1;
  *(_QWORD *)(v6 + 160) = 0LL;
  *(_QWORD *)(v6 + 168) = 0LL;
  if ( std::operator!=<Config::NavMeshInstance>(old_navmesh_config, 0LL) )
  {
    v12 = std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)old_navmesh_config);
    *(std::unordered_map<unsigned int,Config::NavMeshDataInstance>::iterator *)(v6 + 64) = std::unordered_map<unsigned int,Config::NavMeshDataInstance>::find(
                                                                                             &v12->nav_mesh_data_map,
                                                                                             (const std::unordered_map<unsigned int,Config::NavMeshDataInstance>::key_type *)(v6 + 48));
    v13 = std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)old_navmesh_config);
    *(std::unordered_map<unsigned int,Config::NavMeshDataInstance>::iterator *)(v6 + 96) = std::unordered_map<unsigned int,Config::NavMeshDataInstance>::end(&v13->nav_mesh_data_map);
    if ( std::__detail::operator!=<std::pair<unsigned int const,Config::NavMeshDataInstance>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,Config::NavMeshDataInstance>,false> *)(v6 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,Config::NavMeshDataInstance>,false> *)(v6 + 96)) )
    {
      v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,Config::NavMeshDataInstance>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,Config::NavMeshDataInstance>,false,false> *const)(v6 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v14->second.md5 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v14->second.md5 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v14->second.md5);
      }
      if ( md5 == v14->second.md5 )
      {
        v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,Config::NavMeshDataInstance>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,Config::NavMeshDataInstance>,false,false> *const)(v6 + 64));
        std::shared_ptr<NavMeshData>::operator=(
          (std::shared_ptr<NavMeshData> *const)(v6 + 160),
          &v15->second.nav_mesh_data);
        is_data_changed = 0;
      }
    }
  }
  start_load_time = common::tools::TimeUtils::getNowMs();
  v16 = std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)nav_mesh_config);
  config = std::unordered_map<unsigned int,Config::NavMeshDataInstance>::operator[](
             &v16->nav_mesh_data_map,
             (const std::unordered_map<unsigned int,Config::NavMeshDataInstance>::key_type *)(v6 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&config->md5 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config->md5 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&config->md5);
  }
  config->md5 = md5;
  if ( std::operator!=<NavMeshData>((const std::shared_ptr<NavMeshData> *)(v6 + 160), 0LL) )
  {
    std::shared_ptr<NavMeshData>::operator=(&config->nav_mesh_data, (const std::shared_ptr<NavMeshData> *)(v6 + 160));
LABEL_23:
    v25 = std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 160));
    info = NavMeshData::GetBlockInfo(v25);
    p_block_id = &info->block_id;
    if ( *(_BYTE *)(((unsigned __int64)p_block_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_block_id & 7) + 1) >= *(_BYTE *)(((unsigned __int64)p_block_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load2(p_block_id);
    }
    is_block = info->block_id != 0x8080;
    if ( *(_BYTE *)(((unsigned __int64)&info->activity_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)info + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&info->activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&info->activity_id);
    }
    if ( info->activity_id )
    {
      v27 = std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)nav_mesh_config);
      activity_info = std::unordered_map<unsigned int,Config::ActivitySceneInfo>::operator[](
                        &v27->activity_nav_mesh_data_info,
                        &info->activity_id);
      v28 = std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 160));
      __k = NavMeshData::GetNavMeshDataID(v28);
      scene_block_info = std::unordered_map<unsigned int,Config::SceneBlockInfo>::operator[](
                           &activity_info->scene_block_info_map,
                           &__k);
      if ( *(char *)(((unsigned __int64)scene_block_info >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(scene_block_info);
      scene_block_info->is_block = is_block || scene_block_info->is_block;
      std::unordered_map<unsigned int,BlockInfo>::emplace<unsigned short const&,BlockInfo const&>(
        &scene_block_info->blocks,
        &info->block_id,
        info,
        (const unsigned __int16 *)&scene_block_info->blocks,
        v29);
    }
    end_parse_data_time = common::tools::TimeUtils::getNowMs();
    *(_QWORD *)(v6 + 96) = end_parse_data_time - start_load_time;
    common::milog::MiLogStream::create(
      &v58,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadNavMeshData",
      996);
    v30 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v58, (const char (*)[13])"loaded file:");
    v31 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v30, filename);
    v32 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v31, (const char (*)[10])" data_id:");
    v33 = std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 160));
    __k = NavMeshData::GetNavMeshDataID(v33);
    v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &__k);
    v35 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v34, (const char (*)[13])" polygon_id:");
    v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &info->polygon_id);
    v37 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v36, (const char (*)[17])" scene_tag_hash:");
    v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, &info->scene_tag_hash);
    v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v38, (const char (*)[16])" activity hash:");
    v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, &info->activity_id);
    v41 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v40, (const char (*)[13])" is changed:");
    v42 = common::milog::MiLogStream::operator<<(v41, is_data_changed);
    v43 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v42, (const char (*)[12])" totalTime:");
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v43, (const unsigned __int64 *)(v6 + 96));
    common::milog::MiLogStream::~MiLogStream(&v58);
    v10 = 0;
    goto LABEL_32;
  }
  if ( !Config::loadNavMeshData(this, filename, *(_DWORD *)(v6 + 48), config) )
  {
    std::shared_ptr<NavMeshData>::operator=((std::shared_ptr<NavMeshData> *const)(v6 + 160), &config->nav_mesh_data);
    v18 = std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 160));
    *(_DWORD *)(v6 + 128) = NavMeshData::GetNavMeshDataID(v18);
    v19 = std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 160));
    BlockInfo = NavMeshData::GetBlockInfo(v19);
    p_polygon_id = &BlockInfo->polygon_id;
    if ( *(_BYTE *)(((unsigned __int64)p_polygon_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_polygon_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_polygon_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_polygon_id);
    }
    *(_DWORD *)(v6 + 132) = BlockInfo->polygon_id;
    v22 = std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 160));
    v23 = NavMeshData::GetBlockInfo(v22);
    p_scene_tag_hash = &v23->scene_tag_hash;
    if ( *(_BYTE *)(((unsigned __int64)p_scene_tag_hash >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_scene_tag_hash & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_scene_tag_hash >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(p_scene_tag_hash);
    }
    *(_DWORD *)(v6 + 136) = v23->scene_tag_hash;
    std::set<Config::StaticSceneKey>::emplace<Config::StaticSceneKey&>(
      changed_scene_ids,
      (Config::StaticSceneKey *)(v6 + 128),
      (Config::StaticSceneKey *)(v6 + 128));
    goto LABEL_23;
  }
  v17 = std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)nav_mesh_config);
  std::unordered_map<unsigned int,Config::NavMeshDataInstance>::erase(
    &v17->nav_mesh_data_map,
    (const std::unordered_map<unsigned int,Config::NavMeshDataInstance>::key_type *)(v6 + 48));
  v10 = -1;
LABEL_32:
  std::shared_ptr<NavMeshData>::~shared_ptr((std::shared_ptr<NavMeshData> *const)(v6 + 160));
LABEL_33:
  result = v10;
  if ( v59 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1007: range 000000000CB64502-000000000CB64556
int32_t __cdecl Config::getOldestVersion(const Config *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->oldest_version >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->oldest_version >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->oldest_version);
  }
  return this->oldest_version;
};

// Line 1014: range 000000000CB64558-000000000CB64BCE
StaticNavMeshConfig *__fastcall Config::getStaticNavMesh(
        const Config *const this,
        std::unordered_map<unsigned int,StaticNavMeshConfig>::key_type id,
        uint32_t version,
        uint32_t activity_id,
        uint32_t polygon_id,
        uint32_t scene_tag_hash)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  char v10; // al
  StaticNavMeshConfig *p_second; // r14
  std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  StaticNavMeshConfig *result; // rax
  std::unordered_map<unsigned int,StaticNavMeshConfig>::key_type __x; // [rsp+2Ch] [rbp-164h] BYREF
  std::vector<std::shared_ptr<Config::NavMeshInstance>>::iterator __for_end; // [rsp+30h] [rbp-160h] BYREF
  std::vector<std::shared_ptr<Config::NavMeshInstance>> *__for_range; // [rsp+38h] [rbp-158h]
  std::shared_ptr<Config::NavMeshInstance> *it; // [rsp+40h] [rbp-150h]
  std::unordered_map<unsigned int,StaticNavMeshConfig> *static_nav_mesh_map_0; // [rsp+48h] [rbp-148h]
  std::unordered_map<Config::StaticSceneKey,StaticNavMeshConfig,Config::StaticSceneKeyHash,std::equal_to<Config::StaticSceneKey>,std::allocator<std::pair<const Config::StaticSceneKey,StaticNavMeshConfig> > > *static_nav_mesh_map_1; // [rsp+50h] [rbp-140h]
  std::unordered_map<Config::StaticSceneKey,StaticNavMeshConfig,Config::StaticSceneKeyHash,std::equal_to<Config::StaticSceneKey>,std::allocator<std::pair<const Config::StaticSceneKey,StaticNavMeshConfig> > > *static_nav_mesh_map; // [rsp+58h] [rbp-138h]
  common::milog::MiLogStream v26; // [rsp+60h] [rbp-130h] BYREF
  char v27[272]; // [rsp+80h] [rbp-110h] BYREF

  v6 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(224LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "6 48 4 16 activity_id:1013 64 8 27 static_nav_mesh_map_it:1047 96 8 7 it:1065 128 12 8 key:1032 "
                        "160 16 11 config:1015 192 16 9 lock:1017";
  *(_QWORD *)(v6 + 16) = Config::getStaticNavMesh;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -218959360;
  v8[536862723] = -218959360;
  v8[536862724] = -219020288;
  v8[536862725] = -219021312;
  v8[536862726] = -202178560;
  *(_DWORD *)(v6 + 48) = activity_id;
  *(_QWORD *)(v6 + 160) = 0LL;
  *(_QWORD *)(v6 + 168) = 0LL;
  boost::shared_lock<boost::shared_mutex>::shared_lock(
    (boost::shared_lock<boost::shared_mutex> *const)(v6 + 192),
    &Config::version_datas_mutex_);
  if ( *(_BYTE *)(((unsigned __int64)&this->oldest_version >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->oldest_version >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->oldest_version);
  }
  if ( this->oldest_version > version )
    version = 0;
  __for_range = &Config::version_datas;
  *(std::vector<std::shared_ptr<Config::NavMeshInstance>>::iterator *)(v6 + 96) = std::vector<std::shared_ptr<Config::NavMeshInstance>>::begin(&Config::version_datas);
  __for_end._M_current = std::vector<std::shared_ptr<Config::NavMeshInstance>>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<Config::NavMeshInstance> *,std::vector<std::shared_ptr<Config::NavMeshInstance>>>(
            (const __gnu_cxx::__normal_iterator<std::shared_ptr<Config::NavMeshInstance>*,std::vector<std::shared_ptr<Config::NavMeshInstance>> > *)(v6 + 96),
            &__for_end) )
  {
    it = __gnu_cxx::__normal_iterator<std::shared_ptr<Config::NavMeshInstance> *,std::vector<std::shared_ptr<Config::NavMeshInstance>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<Config::NavMeshInstance>*,std::vector<std::shared_ptr<Config::NavMeshInstance>> > *const)(v6 + 96));
    if ( !version )
      goto LABEL_14;
    v9 = std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)it);
    if ( *(_BYTE *)(((unsigned __int64)&v9->version >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v9->version >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v9->version);
    }
    if ( (signed int)version < v9->version )
      v10 = 0;
    else
LABEL_14:
      v10 = 1;
    if ( v10 )
    {
      std::shared_ptr<Config::NavMeshInstance>::operator=(
        (std::shared_ptr<Config::NavMeshInstance> *const)(v6 + 160),
        it);
      break;
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<Config::NavMeshInstance> *,std::vector<std::shared_ptr<Config::NavMeshInstance>>>::operator++((__gnu_cxx::__normal_iterator<std::shared_ptr<Config::NavMeshInstance>*,std::vector<std::shared_ptr<Config::NavMeshInstance>> > *const)(v6 + 96));
  }
  boost::shared_lock<boost::shared_mutex>::~shared_lock((boost::shared_lock<boost::shared_mutex> *const)(v6 + 192));
  if ( !std::__shared_ptr<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2>::get((const std::__shared_ptr<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2> *const)(v6 + 160)) )
  {
    p_second = (StaticNavMeshConfig *)&default_static_nav_mesh_ptr;
    goto LABEL_31;
  }
  *(_DWORD *)(v6 + 128) = id;
  *(_DWORD *)(v6 + 132) = polygon_id;
  *(_DWORD *)(v6 + 136) = scene_tag_hash;
  if ( *(_DWORD *)(v6 + 48) )
  {
    v12 = std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 160));
    *(std::unordered_map<unsigned int,Config::ActivityStaticInfo>::iterator *)(v6 + 64) = std::unordered_map<unsigned int,Config::ActivityStaticInfo>::find(
                                                                                            &v12->activity_static_nav_mesh_map,
                                                                                            (const std::unordered_map<unsigned int,Config::ActivityStaticInfo>::key_type *)(v6 + 48));
    v13 = std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 160));
    __for_end._M_current = (std::shared_ptr<Config::NavMeshInstance> *)std::unordered_map<unsigned int,Config::ActivityStaticInfo>::end(&v13->activity_static_nav_mesh_map)._M_cur;
    if ( std::__detail::operator==<std::pair<unsigned int const,Config::ActivityStaticInfo>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,Config::ActivityStaticInfo>,false> *)(v6 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,Config::ActivityStaticInfo>,false> *)&__for_end) )
    {
      static_nav_mesh_map_1 = (std::unordered_map<Config::StaticSceneKey,StaticNavMeshConfig,Config::StaticSceneKeyHash,std::equal_to<Config::StaticSceneKey>,std::allocator<std::pair<const Config::StaticSceneKey,StaticNavMeshConfig> > > *)std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 160));
      *(std::unordered_map<Config::StaticSceneKey,StaticNavMeshConfig,Config::StaticSceneKeyHash,std::equal_to<Config::StaticSceneKey>,std::allocator<std::pair<const Config::StaticSceneKey,StaticNavMeshConfig> > >::iterator *)(v6 + 96) = std::unordered_map<Config::StaticSceneKey,StaticNavMeshConfig,Config::StaticSceneKeyHash,std::equal_to<Config::StaticSceneKey>,std::allocator<std::pair<Config::StaticSceneKey const,StaticNavMeshConfig>>>::find(static_nav_mesh_map_1, (const std::unordered_map<Config::StaticSceneKey,StaticNavMeshConfig,Config::StaticSceneKeyHash,std::equal_to<Config::StaticSceneKey>,std::allocator<std::pair<const Config::StaticSceneKey,StaticNavMeshConfig> > >::key_type *)(v6 + 128));
      __for_end._M_current = (std::shared_ptr<Config::NavMeshInstance> *)std::unordered_map<Config::StaticSceneKey,StaticNavMeshConfig,Config::StaticSceneKeyHash,std::equal_to<Config::StaticSceneKey>,std::allocator<std::pair<Config::StaticSceneKey const,StaticNavMeshConfig>>>::end(static_nav_mesh_map_1)._M_cur;
      if ( std::__detail::operator!=<std::pair<Config::StaticSceneKey const,StaticNavMeshConfig>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const Config::StaticSceneKey,StaticNavMeshConfig>,true> *)(v6 + 96),
             (const std::__detail::_Node_iterator_base<std::pair<const Config::StaticSceneKey,StaticNavMeshConfig>,true> *)&__for_end) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/config/config.cpp",
          "getStaticNavMesh",
          1055);
        common::milog::MiLogStream::operator()(
          &v26,
          "can't find static nav mesh. %d,%u activity_id:%d, use the default navmesh",
          id,
          scene_tag_hash,
          *(unsigned int *)(v6 + 48));
        common::milog::MiLogStream::~MiLogStream(&v26);
        p_second = &std::__detail::_Node_iterator<std::pair<Config::StaticSceneKey const,StaticNavMeshConfig>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const Config::StaticSceneKey,StaticNavMeshConfig>,false,true> *const)(v6 + 96))->second;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/config/config.cpp",
          "getStaticNavMesh",
          1060);
        common::milog::MiLogStream::operator()(
          &v26,
          "can't find static nav mesh. %d activity_id:%d",
          id,
          *(unsigned int *)(v6 + 48));
        common::milog::MiLogStream::~MiLogStream(&v26);
        p_second = (StaticNavMeshConfig *)&default_static_nav_mesh_ptr;
      }
      goto LABEL_31;
    }
    static_nav_mesh_map_0 = &std::__detail::_Node_iterator<std::pair<unsigned int const,Config::ActivityStaticInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,Config::ActivityStaticInfo>,false,false> *const)(v6 + 64))->second.static_nav_meshs;
    __x = id;
    *(std::unordered_map<unsigned int,StaticNavMeshConfig>::iterator *)(v6 + 96) = std::unordered_map<unsigned int,StaticNavMeshConfig>::find(
                                                                                     static_nav_mesh_map_0,
                                                                                     &__x);
    __for_end._M_current = (std::shared_ptr<Config::NavMeshInstance> *)std::unordered_map<unsigned int,StaticNavMeshConfig>::end(static_nav_mesh_map_0)._M_cur;
    if ( std::__detail::operator!=<std::pair<unsigned int const,StaticNavMeshConfig>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,StaticNavMeshConfig>,false> *)(v6 + 96),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,StaticNavMeshConfig>,false> *)&__for_end) )
    {
      p_second = &std::__detail::_Node_iterator<std::pair<unsigned int const,StaticNavMeshConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,StaticNavMeshConfig>,false,false> *const)(v6 + 96))->second;
      goto LABEL_31;
    }
  }
  else
  {
    static_nav_mesh_map = (std::unordered_map<Config::StaticSceneKey,StaticNavMeshConfig,Config::StaticSceneKeyHash,std::equal_to<Config::StaticSceneKey>,std::allocator<std::pair<const Config::StaticSceneKey,StaticNavMeshConfig> > > *)std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config::NavMeshInstance,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 160));
    *(std::unordered_map<Config::StaticSceneKey,StaticNavMeshConfig,Config::StaticSceneKeyHash,std::equal_to<Config::StaticSceneKey>,std::allocator<std::pair<const Config::StaticSceneKey,StaticNavMeshConfig> > >::iterator *)(v6 + 96) = std::unordered_map<Config::StaticSceneKey,StaticNavMeshConfig,Config::StaticSceneKeyHash,std::equal_to<Config::StaticSceneKey>,std::allocator<std::pair<Config::StaticSceneKey const,StaticNavMeshConfig>>>::find(static_nav_mesh_map, (const std::unordered_map<Config::StaticSceneKey,StaticNavMeshConfig,Config::StaticSceneKeyHash,std::equal_to<Config::StaticSceneKey>,std::allocator<std::pair<const Config::StaticSceneKey,StaticNavMeshConfig> > >::key_type *)(v6 + 128));
    __for_end._M_current = (std::shared_ptr<Config::NavMeshInstance> *)std::unordered_map<Config::StaticSceneKey,StaticNavMeshConfig,Config::StaticSceneKeyHash,std::equal_to<Config::StaticSceneKey>,std::allocator<std::pair<Config::StaticSceneKey const,StaticNavMeshConfig>>>::end(static_nav_mesh_map)._M_cur;
    if ( std::__detail::operator!=<std::pair<Config::StaticSceneKey const,StaticNavMeshConfig>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const Config::StaticSceneKey,StaticNavMeshConfig>,true> *)(v6 + 96),
           (const std::__detail::_Node_iterator_base<std::pair<const Config::StaticSceneKey,StaticNavMeshConfig>,true> *)&__for_end) )
    {
      p_second = &std::__detail::_Node_iterator<std::pair<Config::StaticSceneKey const,StaticNavMeshConfig>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const Config::StaticSceneKey,StaticNavMeshConfig>,false,true> *const)(v6 + 96))->second;
      goto LABEL_31;
    }
  }
  p_second = (StaticNavMeshConfig *)&default_static_nav_mesh_ptr;
LABEL_31:
  std::shared_ptr<Config::NavMeshInstance>::~shared_ptr((std::shared_ptr<Config::NavMeshInstance> *const)(v6 + 160));
  result = p_second;
  if ( v27 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 1075: range 000000000CB64BD0-000000000CB64CC1
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
      3u,
      "./src/config/config.cpp",
      "IsIgnoreScene",
      1079);
    common::milog::MiLogStream::operator()(&v4, "can't find scene data[%u]", scene_id);
    common::milog::MiLogStream::~MiLogStream(&v4);
    return 1;
  }
};
