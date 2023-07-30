// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/ability_group/player_ability_group_comp.h

// Line 23: range 00000000174861C6-000000001748625B
void __cdecl AbilityGroupSourceParam::AbilityGroupSourceParam(AbilityGroupSourceParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->source_type = ABILITY_GROUP_SOURCE_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->source_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->source_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->source_id);
  }
  this->source_id = 0;
};

// Line 30: range 0000000017B8D5CC-0000000017B8D723
void __cdecl PlayerAbilityGroupComp::~PlayerAbilityGroupComp(PlayerAbilityGroupComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'PlayerAbilityGroupComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerCompBase = v1;
  std::unordered_map<int,unsigned int>::~unordered_map(&this->team_ability_hash_to_source_group_map_);
  std::unordered_map<int,unsigned int>::~unordered_map(&this->avatar_ability_hash_to_source_group_map_);
  std::unordered_set<std::string>::~unordered_set(&this->team_del_group_set_);
  std::unordered_set<std::string>::~unordered_set(&this->team_add_group_set_);
  std::unordered_map<std::string,unsigned int>::~unordered_map(&this->filter_team_group_map_);
  std::unordered_set<std::string>::~unordered_set(&this->del_group_set_);
  std::unordered_set<std::string>::~unordered_set(&this->add_group_set_);
  std::unordered_map<unsigned long,std::unordered_set<std::string>>::~unordered_map(&this->guid_del_group_map_);
  std::unordered_map<unsigned long,std::unordered_set<std::string>>::~unordered_map(&this->guid_add_group_map_);
  std::unordered_map<unsigned long,std::unordered_set<std::string>>::~unordered_map(&this->guid_reload_group_map_);
  std::unordered_map<unsigned long,std::unordered_set<std::string>>::~unordered_map(&this->guid_cur_group_map_);
  std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>::~unordered_map(&this->filter_feature_tag_id_map_);
  std::unordered_map<unsigned long,std::unordered_map<std::string,unsigned int>>::~unordered_map(&this->filter_guid_map_);
  std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>::~unordered_map(&this->filter_avatar_group_map_);
  std::unordered_map<std::string,unsigned int>::~unordered_map(&this->filter_none_group_map_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 30: range 0000000017B8D724-0000000017B8D74E
void __cdecl PlayerAbilityGroupComp::~PlayerAbilityGroupComp(PlayerAbilityGroupComp *const this)
{
  PlayerAbilityGroupComp::~PlayerAbilityGroupComp(this);
  operator delete(this, 0x378uLL);
};

// Line 33: range 000000001720E190-000000001720E19A
uint32_t __cdecl PlayerAbilityGroupComp::getType()
{
  return 38;
};

// Line 36: range 00000000174863B6-0000000017486565
void __cdecl ZN22PlayerAbilityGroupCompCI214PlayerCompBaseER6Player(PlayerAbilityGroupComp *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerAbilityGroupComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerCompBase = v2;
  if ( *(char *)(((unsigned __int64)&this->is_need_reload_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_need_reload_);
  this->is_need_reload_ = 0;
  std::unordered_map<std::string,unsigned int>::unordered_map(&this->filter_none_group_map_);
  std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>::unordered_map(&this->filter_avatar_group_map_);
  std::unordered_map<unsigned long,std::unordered_map<std::string,unsigned int>>::unordered_map(&this->filter_guid_map_);
  std::unordered_map<unsigned int,std::unordered_map<std::string,unsigned int>>::unordered_map(&this->filter_feature_tag_id_map_);
  std::unordered_map<unsigned long,std::unordered_set<std::string>>::unordered_map(&this->guid_cur_group_map_);
  std::unordered_map<unsigned long,std::unordered_set<std::string>>::unordered_map(&this->guid_reload_group_map_);
  std::unordered_map<unsigned long,std::unordered_set<std::string>>::unordered_map(&this->guid_add_group_map_);
  std::unordered_map<unsigned long,std::unordered_set<std::string>>::unordered_map(&this->guid_del_group_map_);
  std::unordered_set<std::string>::unordered_set(&this->add_group_set_);
  std::unordered_set<std::string>::unordered_set(&this->del_group_set_);
  std::unordered_map<std::string,unsigned int>::unordered_map(&this->filter_team_group_map_);
  std::unordered_set<std::string>::unordered_set(&this->team_add_group_set_);
  std::unordered_set<std::string>::unordered_set(&this->team_del_group_set_);
  AbilityGroupSourceParam::AbilityGroupSourceParam(&this->source_param_);
  std::unordered_map<int,unsigned int>::unordered_map(&this->avatar_ability_hash_to_source_group_map_);
  std::unordered_map<int,unsigned int>::unordered_map(&this->team_ability_hash_to_source_group_map_);
};

// Line 130: range 0000000017A03B02-0000000017A03B4A
bool __cdecl PlayerAbilityGroupComp::getIsNeedReload(const PlayerAbilityGroupComp *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_need_reload_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_need_reload_);
  return this->is_need_reload_;
};

// Line 130: range 0000000017A03B4C-0000000017A03B9D
void __cdecl PlayerAbilityGroupComp::setIsNeedReload(PlayerAbilityGroupComp *const this, bool is_need_reload__out)
{
  if ( *(char *)(((unsigned __int64)&this->is_need_reload_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_need_reload_);
  this->is_need_reload_ = is_need_reload__out;
};
