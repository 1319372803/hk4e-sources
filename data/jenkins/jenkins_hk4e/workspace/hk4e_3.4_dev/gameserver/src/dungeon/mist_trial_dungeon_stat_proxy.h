// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/dungeon/mist_trial_dungeon_stat_proxy.h

// Line 31: range 0000000015D364EA-0000000015D3673F
void __cdecl MistTrialDungeonStatProxy::MistTrialDungeonStatProxy(MistTrialDungeonStatProxy *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MistTrialDungeonStatProxy + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MistTrialDungeonStatProxy = v1;
  std::weak_ptr<DungeonScene>::weak_ptr(&this->dungeon_scene_wtr_);
  if ( *(char *)(((unsigned __int64)&this->is_enable_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_enable_);
  this->is_enable_ = 0;
  std::map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::map(&this->player_stat_value_map_);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->stat_type_id_set_map_);
  std::unordered_map<std::string,std::set<unsigned int>>::unordered_map(&this->attack_tag_related_stat_id_map_);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->monster_weapon_gadget_id_related_stat_id_map_);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->disable_gadget_id_related_stat_id_map_);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->challenge_index_related_stat_id_map_);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::unordered_map(&this->element_reaction_stat_id_reaction_type_map_);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::unordered_set<unsigned int>>>::unordered_map(&this->player_triggered_element_reaction_type_map_);
  std::unordered_set<unsigned int>::unordered_set(&this->stat_realted_reaction_type_set_);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->reatcion_type_related_stat_id_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->damage_beard_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->damage_beard_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->damage_beard_);
  }
  this->damage_beard_ = 0;
  std::unordered_map<data::ElementReactionType,unsigned int>::unordered_map(&this->element_reaction_type_count_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->element_burst_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->element_burst_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->element_burst_count_);
  }
  this->element_burst_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->strongest_blow_once_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->strongest_blow_once_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->strongest_blow_once_);
  }
  this->strongest_blow_once_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->strongest_blow_avatar_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->strongest_blow_avatar_guid_);
  this->strongest_blow_avatar_guid_ = 0LL;
};

// Line 32: range 0000000015F2D848-0000000015F2D95B
void __cdecl MistTrialDungeonStatProxy::~MistTrialDungeonStatProxy(MistTrialDungeonStatProxy *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MistTrialDungeonStatProxy + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MistTrialDungeonStatProxy = v1;
  std::unordered_map<data::ElementReactionType,unsigned int>::~unordered_map(&this->element_reaction_type_count_map_);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->reatcion_type_related_stat_id_map_);
  std::unordered_set<unsigned int>::~unordered_set(&this->stat_realted_reaction_type_set_);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::unordered_set<unsigned int>>>::~unordered_map(&this->player_triggered_element_reaction_type_map_);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::~unordered_map(&this->element_reaction_stat_id_reaction_type_map_);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->challenge_index_related_stat_id_map_);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->disable_gadget_id_related_stat_id_map_);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->monster_weapon_gadget_id_related_stat_id_map_);
  std::unordered_map<std::string,std::set<unsigned int>>::~unordered_map(&this->attack_tag_related_stat_id_map_);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->stat_type_id_set_map_);
  std::map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::~map(&this->player_stat_value_map_);
  std::weak_ptr<DungeonScene>::~weak_ptr(&this->dungeon_scene_wtr_);
};

// Line 32: range 0000000015F2D95C-0000000015F2D986
void __cdecl MistTrialDungeonStatProxy::~MistTrialDungeonStatProxy(MistTrialDungeonStatProxy *const this)
{
  MistTrialDungeonStatProxy::~MistTrialDungeonStatProxy(this);
  operator delete(this, 0x298uLL);
};

// Line 34: range 000000001604F67E-000000001604F6A6
void __cdecl MistTrialDungeonStatProxy::setDungeonScene(
        MistTrialDungeonStatProxy *const this,
        DungeonScenePtr *p_dungeon_scene_ptr)
{
  std::weak_ptr<DungeonScene>::operator=<DungeonScene>(&this->dungeon_scene_wtr_, p_dungeon_scene_ptr);
};

// Line 50: range 000000001461E702-000000001461E74E
uint32_t __cdecl MistTrialDungeonStatProxy::getDamageBeard(const MistTrialDungeonStatProxy *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->damage_beard_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->damage_beard_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->damage_beard_);
  }
  return this->damage_beard_;
};

// Line 51: range 000000001461E776-000000001461E7A5
std::unordered_map<data::ElementReactionType,unsigned int> *__cdecl MistTrialDungeonStatProxy::getElementReactionTypeCountMap(
        std::unordered_map<data::ElementReactionType,unsigned int> *retstr,
        const MistTrialDungeonStatProxy *const this)
{
  std::unordered_map<data::ElementReactionType,unsigned int>::unordered_map(
    retstr,
    &this->element_reaction_type_count_map_);
  return retstr;
};

// Line 52: range 000000001461E7A6-000000001461E7F2
uint32_t __cdecl MistTrialDungeonStatProxy::getElementBurstCount(const MistTrialDungeonStatProxy *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->element_burst_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->element_burst_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->element_burst_count_);
  }
  return this->element_burst_count_;
};

// Line 53: range 000000001461E7F4-000000001461E848
uint32_t __cdecl MistTrialDungeonStatProxy::getStrongestBlow(const MistTrialDungeonStatProxy *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->strongest_blow_once_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->strongest_blow_once_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->strongest_blow_once_);
  }
  return this->strongest_blow_once_;
};

// Line 54: range 000000001461E84A-000000001461E889
uint64_t __cdecl MistTrialDungeonStatProxy::getStrongestBlowAvatarGuid(const MistTrialDungeonStatProxy *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->strongest_blow_avatar_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->strongest_blow_avatar_guid_;
};

// Line 57: range 00000000155B7AAC-00000000155B7AFA
DungeonScenePtr __cdecl MistTrialDungeonStatProxy::getDungeonScene(MistTrialDungeonStatProxy *const this)
{
  DungeonScenePtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::weak_ptr<DungeonScene>::lock((const std::weak_ptr<DungeonScene> *const)this);
  result._M_ptr = (std::__shared_ptr<DungeonScene,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};
