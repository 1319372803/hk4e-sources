// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/group/pool_monster_tide_comp.h

// Line 35: range 0000000016B676D2-0000000016B67AE1
void __cdecl PoolMonsterTide::PoolMonsterTide(PoolMonsterTide *const this)
{
  std::enable_shared_from_this<PoolMonsterTide>::enable_shared_from_this(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->tide_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tide_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->tide_index);
  }
  this->tide_index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->total_monster_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_monster_count >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->total_monster_count);
  }
  this->total_monster_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_monster_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min_monster_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->min_monster_count);
  }
  this->min_monster_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_monster_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_monster_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_monster_count);
  }
  this->max_monster_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_pool_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_pool_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->monster_pool_id);
  }
  this->monster_pool_id = 0;
  std::set<unsigned int>::set(&this->affix_set);
  std::map<std::string,float>::map(&this->server_global_value_map);
  PlatformRouteParam::PlatformRouteParam(&this->platform_route_param);
  if ( *(_BYTE *)(((unsigned __int64)&this->fill_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fill_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fill_count);
  }
  this->fill_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fill_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fill_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fill_time);
  }
  this->fill_time = 0;
  std::vector<MonsterScriptConfig>::vector(&this->monster_config_vec);
  std::map<unsigned int,unsigned int>::map(&this->cur_point_to_monster_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->index);
  }
  this->index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monster_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->monster_count);
  }
  this->monster_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->tide_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tide_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->tide_count);
  }
  this->tide_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->state);
  }
  this->state = POOL_MONSTER_TIDE_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_fill_time >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_fill_time);
  this->last_fill_time = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->fill_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fill_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fill_type);
  }
  this->fill_type = POOL_MONSTER_TIDE_FILL_ON_DEATH;
  if ( *(_BYTE *)(((unsigned __int64)&this->pause_time >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->pause_time);
  this->pause_time = 0LL;
};

// Line 35: range 0000000016BDFB96-0000000016BDFC06
void __cdecl PoolMonsterTide::~PoolMonsterTide(PoolMonsterTide *const this)
{
  std::map<unsigned int,unsigned int>::~map(&this->cur_point_to_monster_map);
  std::vector<MonsterScriptConfig>::~vector(&this->monster_config_vec);
  PlatformRouteParam::~PlatformRouteParam(&this->platform_route_param);
  std::map<std::string,float>::~map(&this->server_global_value_map);
  std::set<unsigned int>::~set(&this->affix_set);
  std::enable_shared_from_this<PoolMonsterTide>::~enable_shared_from_this(this);
};

// Line 62: range 0000000015A1AE92-0000000015A1AECC
void __cdecl PoolMonsterTideComp::~PoolMonsterTideComp(PoolMonsterTideComp *const this)
{
  std::shared_ptr<SceneTimer>::~shared_ptr(&this->timer_ptr_);
  std::unordered_map<unsigned int,std::shared_ptr<PoolMonsterTide>>::~unordered_map(&this->monster_tide_map_);
  std::enable_shared_from_this<PoolMonsterTideComp>::~enable_shared_from_this(this);
};

// Line 65: range 000000001605007A-00000000160500E9
void __cdecl PoolMonsterTideComp::PoolMonsterTideComp(PoolMonsterTideComp *const this, Group *group)
{
  std::enable_shared_from_this<PoolMonsterTideComp>::enable_shared_from_this(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->group_);
  this->group_ = group;
  std::unordered_map<unsigned int,std::shared_ptr<PoolMonsterTide>>::unordered_map(&this->monster_tide_map_);
  std::shared_ptr<SceneTimer>::shared_ptr(&this->timer_ptr_);
};
