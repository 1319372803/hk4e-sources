// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/luna_rite_activity.h

// Line 27: range 00000000147E0BAC-00000000147E0D1B
void __cdecl LunaRiteAreaInfo::LunaRiteAreaInfo(LunaRiteAreaInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->area_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_battle_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finish_battle_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->finish_battle_id);
  }
  this->finish_battle_id = 0;
  std::set<unsigned int>::set(&this->sacrifice_set);
  std::set<unsigned int>::set(&this->sacrifice_reward_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->hint_status >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hint_status >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hint_status);
  }
  this->hint_status = LUNA_RITE_HINT_STATUS_DEFAULT;
  if ( *(_BYTE *)(((unsigned __int64)&this->chest_searching_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->chest_searching_num >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->chest_searching_num);
  }
  this->chest_searching_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->rune_searching_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rune_searching_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rune_searching_num);
  }
  this->rune_searching_num = 0;
};

// Line 27: range 000000001478A544-000000001478A572
void __cdecl LunaRiteAreaInfo::~LunaRiteAreaInfo(LunaRiteAreaInfo *const this)
{
  std::set<unsigned int>::~set(&this->sacrifice_reward_set);
  std::set<unsigned int>::~set(&this->sacrifice_set);
};

// Line 43: range 00000000147E0E4A-00000000147E0FCD
void __cdecl LunaRiteHintPoint::LunaRiteHintPoint(LunaRiteHintPoint *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->group_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_id);
  }
  this->config_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->index);
  }
  this->index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->area_id);
  }
  this->area_id = 0;
  Vector3::Vector3(&this->pos, 0.0, 0.0, 0.0);
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->type);
  }
  this->type = LUNA_RITE_HINT_TYPE_NONE;
};

// Line 56: range 00000000148386B0-0000000014838757
void __cdecl LunaRiteActivity::~LunaRiteActivity(LunaRiteActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'LunaRiteActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::weak_ptr<Observer>::~weak_ptr(&this->chest_open_obs_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->world_gather_obs_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->group_bundle_obs_wtr_);
  std::map<unsigned long,LunaRiteHintPoint>::~map(&this->hint_point_map_);
  std::map<unsigned int,LunaRiteAreaInfo>::~map(&this->area_info_map_);
  BaseActivity::~BaseActivity((BaseActivity *const)this);
};

// Line 56: range 0000000014838758-0000000014838782
void __cdecl LunaRiteActivity::~LunaRiteActivity(LunaRiteActivity *const this)
{
  LunaRiteActivity::~LunaRiteActivity(this);
  operator delete(this, 0x448uLL);
};

// Line 67: range 0000000016D648D0-0000000016D64A59
void __cdecl LunaRiteActivity::LunaRiteActivity(LunaRiteActivity *const this, Player *player, uint32_t activity_id)
{
  int (**v3)(...); // rdx

  BaseActivity::BaseActivity((BaseActivity *const)this, player, activity_id);
  v3 = (int (**)(...))(&`vtable for'LunaRiteActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_refresh_time_);
  }
  this->last_refresh_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->atmosphere_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->atmosphere_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->atmosphere_);
  }
  this->atmosphere_ = 0;
  std::map<unsigned int,LunaRiteAreaInfo>::map(&this->area_info_map_);
  std::map<unsigned long,LunaRiteHintPoint>::map(&this->hint_point_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->hint_point_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hint_point_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hint_point_index_);
  }
  this->hint_point_index_ = 0;
  std::weak_ptr<Observer>::weak_ptr(&this->group_bundle_obs_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->world_gather_obs_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->chest_open_obs_wtr_);
};

// Line 69: range 000000001384A505-000000001384A50F
data::NewActivityType __cdecl LunaRiteActivity::getActivityStaticType()
{
  return 2101;
};

// Line 113: range 00000000146201E8-0000000014620234
uint32_t __cdecl LunaRiteActivity::getAtmosphere(const LunaRiteActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->atmosphere_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->atmosphere_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->atmosphere_;
};

// Line 114: range 0000000014620236-0000000014620255
uint64_t __cdecl LunaRiteActivity::genGroupKey(LunaRiteActivity *const this, uint32_t group_id, uint32_t config_id)
{
  return ((unsigned __int64)group_id << 32) + config_id;
};

// Line 115: range 0000000014620256-00000000146202F9
void __cdecl LunaRiteActivity::getGroupAndConfigByKey(
        LunaRiteActivity *const this,
        uint64_t key,
        uint32_t *group_id,
        uint32_t *config_id)
{
  uint32_t v4; // edi
  uint32_t v5; // edi

  v4 = HIDWORD(key);
  if ( *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) )
  {
    v4 = (unsigned int)group_id;
    __asan_report_store4(group_id);
  }
  *group_id = v4;
  v5 = key;
  if ( *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) )
  {
    v5 = (unsigned int)config_id;
    __asan_report_store4(config_id);
  }
  *config_id = v5;
};

// Line 125: range 00000000146202FA-000000001462035D
uint32_t __cdecl LunaRiteActivity::getHintPointIndex(LunaRiteActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->hint_point_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hint_point_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return ++this->hint_point_index_;
};
