// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/config/config.h

// Line 22: range 000000000CD59F1E-000000000CD59F46
StaticNavMeshConfig *__cdecl StaticNavMeshConfig::operator=(
        StaticNavMeshConfig *const this,
        const StaticNavMeshConfig *a2)
{
  std::shared_ptr<StaticNavMesh>::operator=(&this->static_nav_mesh, &a2->static_nav_mesh);
  return this;
};

// Line 22: range 000000000D03E674-000000000D03E68E
void __cdecl StaticNavMeshConfig::StaticNavMeshConfig(StaticNavMeshConfig *const this)
{
  std::shared_ptr<StaticNavMesh>::shared_ptr(&this->static_nav_mesh);
};

// Line 22: range 000000000CD59FEC-000000000CD5A011
void __cdecl StaticNavMeshConfig::StaticNavMeshConfig(StaticNavMeshConfig *const this, const StaticNavMeshConfig *a2)
{
  std::shared_ptr<StaticNavMesh>::shared_ptr(&this->static_nav_mesh, &a2->static_nav_mesh);
};

// Line 22: range 000000000CD5A012-000000000CD5A02C
void __cdecl StaticNavMeshConfig::~StaticNavMeshConfig(StaticNavMeshConfig *const this)
{
  std::shared_ptr<StaticNavMesh>::~shared_ptr(&this->static_nav_mesh);
};

// Line 30: range 000000000CD54540-000000000CD549B9
void __cdecl Config::Config(Config *const this)
{
  int (**v1)(...); // rdx

  ConfigBase::ConfigBase(this);
  v1 = (int (**)(...))(&`vtable for'Config + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_ConfigBase = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->xml_config_version);
  }
  this->xml_config_version = 0;
  std::string::basic_string(&this->log_level_mask_);
  std::string::basic_string(&this->region_name);
  std::string::basic_string(&this->data_dir_path);
  if ( *(_BYTE *)(((unsigned __int64)&this->token_keep_alive_ms >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->token_keep_alive_ms = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->obstacle_time_limit >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->obstacle_time_limit = 60000LL;
  if ( *(char *)(((unsigned __int64)&this->version_count >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->version_count);
  this->version_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->oldest_version >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->oldest_version >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->oldest_version);
  }
  this->oldest_version = 0;
  Vector3f::Vector3f(&this->target_extend);
  Vector3f::Vector3f(&this->source_extend);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_obstacle_extent >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_obstacle_extent >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_obstacle_extent);
  }
  this->max_obstacle_extent = 128.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->use_havok_cut >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->use_havok_cut >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->use_havok_cut);
  }
  this->use_havok_cut = 1;
  Vector3f::Vector3f(&this->obstacle_extend_log_limit);
  if ( *(_BYTE *)(((unsigned __int64)&this->query_path_req_time_limit >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->query_path_req_time_limit = 500LL;
  Vector3f::Vector3f(&this->query_path_req_extend_limit);
  if ( *(_BYTE *)(((unsigned __int64)&this->query_path_req_target_point_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->query_path_req_target_point_limit >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->query_path_req_target_point_limit);
  }
  this->query_path_req_target_point_limit = 5;
  if ( *(_BYTE *)(((unsigned __int64)&this->test_player_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->test_player_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->test_player_count);
  }
  this->test_player_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cpu_profiling_mode >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cpu_profiling_mode >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cpu_profiling_mode);
  }
  this->cpu_profiling_mode = 0;
  ClientVersionConfig::ClientVersionConfig(&this->version_config);
  HK4EDesignConfig::HK4EDesignConfig(&this->design_config);
  if ( *(_BYTE *)(((unsigned __int64)&this->server_res_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->server_res_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->server_res_version);
  }
  this->server_res_version = 0;
};

// Line 31: range 000000000CD549BA-000000000CD54A61
void __cdecl Config::~Config(Config *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'Config + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_ConfigBase = v1;
  HK4EDesignConfig::~HK4EDesignConfig(&this->design_config);
  ClientVersionConfig::~ClientVersionConfig(&this->version_config);
  std::string::~string(&this->data_dir_path);
  std::string::~string(&this->region_name);
  std::string::~string(&this->log_level_mask_);
  ConfigBase::~ConfigBase(this);
};

// Line 31: range 000000000CD54A62-000000000CD54A8C
void __cdecl Config::~Config(Config *const this)
{
  Config::~Config(this);
  operator delete(this, 0x189F0uLL);
};

// Line 42: range 000000000CD54A8E-000000000CD54ACD
uint64_t __cdecl Config::getTokenKeepAliveMs(const Config *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->token_keep_alive_ms >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->token_keep_alive_ms, v1);
  return this->token_keep_alive_ms;
};

// Line 43: range 000000000CD54ACE-000000000CD54B0D
uint64_t __cdecl Config::getObstacleTimeLimit(const Config *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->obstacle_time_limit >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->obstacle_time_limit, v1);
  return this->obstacle_time_limit;
};

// Line 46: range 000000000CD54B0E-000000000CD54B21
const Vector3f *__cdecl Config::GetSourceExtend(const Config *const this)
{
  return &this->source_extend;
};

// Line 47: range 000000000CD54B22-000000000CD54B35
const Vector3f *__cdecl Config::GetTargetExtend(const Config *const this)
{
  return &this->target_extend;
};

// Line 48: range 000000000CD54B36-000000000CD54B84
float __cdecl Config::GetMaxObstacleExtent(const Config *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->max_obstacle_extent >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_obstacle_extent >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->max_obstacle_extent);
  }
  return this->max_obstacle_extent;
};

// Line 49: range 000000000CD54B86-000000000CD54BC5
uint64_t __cdecl Config::GetQueryPathReqTimeLimit(const Config *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->query_path_req_time_limit >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->query_path_req_time_limit, v1);
  return this->query_path_req_time_limit;
};

// Line 50: range 000000000CD54BC6-000000000CD54BD9
const Vector3f *__cdecl Config::GetQueryPathReqExtendLimit(const Config *const this)
{
  return &this->query_path_req_extend_limit;
};

// Line 51: range 000000000CD54BDA-000000000CD54C2E
uint32_t __cdecl Config::GetQueryPathReqTargetPointLimit(const Config *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->query_path_req_target_point_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->query_path_req_target_point_limit >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->query_path_req_target_point_limit);
  }
  return this->query_path_req_target_point_limit;
};

// Line 54: range 000000000CD54C30-000000000CD54C82
bool __cdecl Config::UseHavokCut(const Config *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->use_havok_cut >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->use_havok_cut >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->use_havok_cut);
  }
  return this->use_havok_cut;
};

// Line 58: range 000000000CD54C84-000000000CD54CD0
uint32_t __cdecl Config::getTestPlayerCount(const Config *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->test_player_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->test_player_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->test_player_count);
  }
  return this->test_player_count;
};

// Line 59: range 000000000CD54CD2-000000000CD54D26
uint32_t __cdecl Config::getCPUProfilingMode(const Config *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cpu_profiling_mode >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cpu_profiling_mode >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cpu_profiling_mode);
  }
  return this->cpu_profiling_mode;
};

// Line 75: range 000000000D041264-000000000D04127E
void __cdecl Config::NavMeshDataInstance::NavMeshDataInstance(Config::NavMeshDataInstance *const this)
{
  std::shared_ptr<NavMeshData>::shared_ptr(&this->nav_mesh_data);
};

// Line 75: range 000000000CD59D00-000000000CD59D9A
void __cdecl Config::NavMeshDataInstance::NavMeshDataInstance(
        Config::NavMeshDataInstance *const this,
        const Config::NavMeshDataInstance *a2)
{
  uint32_t md5; // ecx

  std::shared_ptr<NavMeshData>::shared_ptr(&this->nav_mesh_data, &a2->nav_mesh_data);
  if ( *(_BYTE *)(((unsigned __int64)&a2->md5 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->md5 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->md5);
  }
  md5 = a2->md5;
  if ( *(_BYTE *)(((unsigned __int64)&this->md5 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->md5 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->md5);
  }
  this->md5 = md5;
};

// Line 75: range 000000000CD59D9C-000000000CD59DB6
void __cdecl Config::NavMeshDataInstance::~NavMeshDataInstance(Config::NavMeshDataInstance *const this)
{
  std::shared_ptr<NavMeshData>::~shared_ptr(&this->nav_mesh_data);
};

// Line 90: range 000000000CD54D28-000000000CD54EF9
bool __cdecl Config::StaticSceneKey::operator<(
        const Config::StaticSceneKey *const this,
        const Config::StaticSceneKey *right)
{
  uint32_t scene_id; // ecx
  uint32_t polygon_id; // ecx
  uint32_t scene_tag_hash; // ecx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  scene_id = this->scene_id;
  if ( *(_BYTE *)(((unsigned __int64)right >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)right & 7) + 3) >= *(_BYTE *)(((unsigned __int64)right >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(right);
  }
  if ( scene_id != right->scene_id )
    return this->scene_id < right->scene_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->polygon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->polygon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->polygon_id);
  }
  polygon_id = this->polygon_id;
  if ( *(_BYTE *)(((unsigned __int64)&right->polygon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)right + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&right->polygon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&right->polygon_id);
  }
  if ( polygon_id != right->polygon_id )
    return this->polygon_id < right->polygon_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_tag_hash >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_tag_hash >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->scene_tag_hash);
  }
  scene_tag_hash = this->scene_tag_hash;
  if ( *(_BYTE *)(((unsigned __int64)&right->scene_tag_hash >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)right + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&right->scene_tag_hash >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&right->scene_tag_hash);
  }
  return scene_tag_hash < right->scene_tag_hash;
};

// Line 97: range 000000000CD54EFA-000000000CD550B0
bool __cdecl Config::StaticSceneKey::operator==(
        const Config::StaticSceneKey *const this,
        const Config::StaticSceneKey *right)
{
  uint32_t scene_id; // ecx
  uint32_t polygon_id; // ecx
  uint32_t scene_tag_hash; // ecx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  scene_id = this->scene_id;
  if ( *(_BYTE *)(((unsigned __int64)right >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)right & 7) + 3) >= *(_BYTE *)(((unsigned __int64)right >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(right);
  }
  if ( scene_id != right->scene_id )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->polygon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->polygon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->polygon_id);
  }
  polygon_id = this->polygon_id;
  if ( *(_BYTE *)(((unsigned __int64)&right->polygon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)right + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&right->polygon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&right->polygon_id);
  }
  if ( polygon_id != right->polygon_id )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_tag_hash >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_tag_hash >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->scene_tag_hash);
  }
  scene_tag_hash = this->scene_tag_hash;
  if ( *(_BYTE *)(((unsigned __int64)&right->scene_tag_hash >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)right + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&right->scene_tag_hash >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&right->scene_tag_hash);
  }
  return scene_tag_hash == right->scene_tag_hash;
};

// Line 104: range 000000000CD550B2-000000000CD5518C
size_t __cdecl Config::StaticSceneKeyHash::operator()(
        const Config::StaticSceneKeyHash *const this,
        const Config::StaticSceneKey *k)
{
  uint32_t scene_id; // ecx
  uint32_t v3; // ecx

  if ( *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)k & 7) + 3) >= *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(k);
  }
  scene_id = k->scene_id;
  if ( *(_BYTE *)(((unsigned __int64)&k->polygon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)k + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&k->polygon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&k->polygon_id);
  }
  v3 = k->polygon_id ^ scene_id;
  if ( *(_BYTE *)(((unsigned __int64)&k->scene_tag_hash >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)k + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&k->scene_tag_hash >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&k->scene_tag_hash);
  }
  return v3 ^ k->scene_tag_hash;
};

// Line 110: range 000000000D0416D2-000000000D0416F0
void __cdecl Config::SceneBlockInfo::SceneBlockInfo(Config::SceneBlockInfo *const this)
{
  std::unordered_map<unsigned int,BlockInfo>::unordered_map(&this->blocks);
};

// Line 110: range 000000000D008A56-000000000D008A74
void __cdecl Config::SceneBlockInfo::~SceneBlockInfo(Config::SceneBlockInfo *const this)
{
  std::unordered_map<unsigned int,BlockInfo>::~unordered_map(&this->blocks);
};

// Line 116: range 000000000D03E382-000000000D03E39C
void __cdecl Config::ActivitySceneInfo::ActivitySceneInfo(Config::ActivitySceneInfo *const this)
{
  std::unordered_map<unsigned int,Config::SceneBlockInfo>::unordered_map(&this->scene_block_info_map);
};

// Line 116: range 000000000D0040F4-000000000D00410E
void __cdecl Config::ActivitySceneInfo::~ActivitySceneInfo(Config::ActivitySceneInfo *const this)
{
  std::unordered_map<unsigned int,Config::SceneBlockInfo>::~unordered_map(&this->scene_block_info_map);
};

// Line 124: range 000000000CD59A94-000000000CD59B7F
void __cdecl Config::ActivityStaticInfo::ActivityStaticInfo(Config::ActivityStaticInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->activity_hash = 0;
  dynamic_array<unsigned int,false,4ul>::dynamic_array(&this->activity_ids);
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_time);
  }
  this->start_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->end_time);
  }
  this->end_time = 0;
  std::unordered_map<unsigned int,StaticNavMeshConfig>::unordered_map(&this->static_nav_meshs);
};

// Line 124: range 000000000CEA03A2-000000000CEA0576
void __cdecl Config::ActivityStaticInfo::ActivityStaticInfo(
        Config::ActivityStaticInfo *const this,
        const Config::ActivityStaticInfo *a2)
{
  uint32_t activity_hash; // ecx
  uint32_t start_time; // ecx
  uint32_t end_time; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  activity_hash = a2->activity_hash;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->activity_hash = activity_hash;
  dynamic_array<unsigned int,false,4ul>::dynamic_array(&this->activity_ids, &a2->activity_ids);
  if ( *(_BYTE *)(((unsigned __int64)&a2->start_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->start_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->start_time);
  }
  start_time = a2->start_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_time);
  }
  this->start_time = start_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->end_time);
  }
  end_time = a2->end_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->end_time);
  }
  this->end_time = end_time;
  std::unordered_map<unsigned int,StaticNavMeshConfig>::unordered_map(&this->static_nav_meshs, &a2->static_nav_meshs);
};

// Line 124: range 000000000CD59B80-000000000CD59BAE
void __cdecl Config::ActivityStaticInfo::~ActivityStaticInfo(Config::ActivityStaticInfo *const this)
{
  std::unordered_map<unsigned int,StaticNavMeshConfig>::~unordered_map(&this->static_nav_meshs);
  dynamic_array<unsigned int,false,4ul>::~dynamic_array(&this->activity_ids);
};
