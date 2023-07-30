// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/service/activity_service.h

// Line 33: range 000000000DF3DEE6-000000000DF3DF4E
void __cdecl ActivityThreadLocal::ActivityThreadLocal(ActivityThreadLocal *const this)
{
  std::map<unsigned long,proto::CustomDungeonBriefRedisData>::map(&this->custom_dungeon_new_recommend_map);
  std::map<unsigned long,proto::CustomDungeonBriefRedisData>::map(&this->custom_dungeon_old_recommend_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_custom_dungeon_recommend_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_custom_dungeon_recommend_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_custom_dungeon_recommend_time);
  }
  this->last_custom_dungeon_recommend_time = 0;
};

// Line 33: range 000000000E0A00CA-000000000E0A017F
void __cdecl ActivityThreadLocal::ActivityThreadLocal(ActivityThreadLocal *const this, ActivityThreadLocal *a2)
{
  uint32_t last_custom_dungeon_recommend_time; // ecx

  std::map<unsigned long,proto::CustomDungeonBriefRedisData>::map(
    &this->custom_dungeon_new_recommend_map,
    &a2->custom_dungeon_new_recommend_map);
  std::map<unsigned long,proto::CustomDungeonBriefRedisData>::map(
    &this->custom_dungeon_old_recommend_map,
    &a2->custom_dungeon_old_recommend_map);
  if ( *(_BYTE *)(((unsigned __int64)&a2->last_custom_dungeon_recommend_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->last_custom_dungeon_recommend_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->last_custom_dungeon_recommend_time);
  }
  last_custom_dungeon_recommend_time = a2->last_custom_dungeon_recommend_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_custom_dungeon_recommend_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_custom_dungeon_recommend_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_custom_dungeon_recommend_time);
  }
  this->last_custom_dungeon_recommend_time = last_custom_dungeon_recommend_time;
};

// Line 33: range 000000000DF3DF50-000000000DF3DF7A
void __cdecl ActivityThreadLocal::~ActivityThreadLocal(ActivityThreadLocal *const this)
{
  std::map<unsigned long,proto::CustomDungeonBriefRedisData>::~map(&this->custom_dungeon_old_recommend_map);
  std::map<unsigned long,proto::CustomDungeonBriefRedisData>::~map(&this->custom_dungeon_new_recommend_map);
};

// Line 40: range 000000000DD657D6-000000000DD6587D
void __cdecl ActivityService::ActivityService(ActivityService *const this)
{
  int (**v1)(...); // rdx

  ServiceBase::ServiceBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityService + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ServiceBase = v1;
  std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::unique_ptr<std::default_delete<common::minet::http_client::HttpClientMgrBase>,void>(&this->http_client_mgr_ptr_);
  std::vector<ActivityThreadLocal>::vector(&this->activity_thread_local_vec_);
  common::tools::LruCache<unsigned long,proto::ServerCustomDungeon>::LruCache(&this->custom_dungeon_cache_);
  common::tools::LruCache<unsigned long,proto::CustomDungeonBriefRedisData>::LruCache(&this->custom_dungeon_search_cache_);
  common::tools::LruCache<std::string,proto::HomeBlueprintDetailRedisData>::LruCache(&this->home_blueprint_detail_cache_);
};

// Line 40: range 000000000E0BF3F6-000000000E0BF49D
void __cdecl ActivityService::~ActivityService(ActivityService *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityService + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ServiceBase = v1;
  common::tools::LruCache<std::string,proto::HomeBlueprintDetailRedisData>::~LruCache(&this->home_blueprint_detail_cache_);
  common::tools::LruCache<unsigned long,proto::CustomDungeonBriefRedisData>::~LruCache(&this->custom_dungeon_search_cache_);
  common::tools::LruCache<unsigned long,proto::ServerCustomDungeon>::~LruCache(&this->custom_dungeon_cache_);
  std::vector<ActivityThreadLocal>::~vector(&this->activity_thread_local_vec_);
  std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::~unique_ptr(&this->http_client_mgr_ptr_);
  ServiceBase::~ServiceBase(this);
};

// Line 40: range 000000000E0BF49E-000000000E0BF4C8
void __cdecl ActivityService::~ActivityService(ActivityService *const this)
{
  ActivityService::~ActivityService(this);
  operator delete(this, 0x4C0uLL);
};

// Line 43: range 000000000DF3D00C-000000000DF3D01A
uint32_t __cdecl ActivityService::getServiceType(ActivityService *const this)
{
  return 13;
};

// Line 54: range 000000000DF3D01C-000000000DF3D02F
common::tools::LruCache<long unsigned int,proto::ServerCustomDungeon> *__cdecl ActivityService::getCustomDungeonCache(
        ActivityService *const this)
{
  return &this->custom_dungeon_cache_;
};

// Line 55: range 000000000DF3D030-000000000DF3D043
common::tools::LruCache<long unsigned int,proto::CustomDungeonBriefRedisData> *__cdecl ActivityService::getCustomDungeonSearchCache(
        ActivityService *const this)
{
  return &this->custom_dungeon_search_cache_;
};

// Line 57: range 000000000DF3D044-000000000DF3D057
common::tools::LruCache<std::string,proto::HomeBlueprintDetailRedisData> *__cdecl ActivityService::getHomeBlueprintDetailCache[abi:cxx11](
        ActivityService *const this)
{
  return &this->home_blueprint_detail_cache_;
};
