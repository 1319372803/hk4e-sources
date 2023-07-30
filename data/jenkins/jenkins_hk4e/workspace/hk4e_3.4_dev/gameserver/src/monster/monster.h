// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/monster/monster.h

// Line 29: range 00000000173F337E-00000000173F33D5
void __cdecl SummonInfo::SummonInfo(SummonInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->max_count = 0;
  std::set<std::shared_ptr<Monster>>::set(&this->monster_set);
};

// Line 29: range 000000001747541E-00000000174754B6
void __cdecl SummonInfo::SummonInfo(SummonInfo *const this, const SummonInfo *a2)
{
  uint32_t max_count; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  max_count = a2->max_count;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->max_count = max_count;
  std::set<std::shared_ptr<Monster>>::set(&this->monster_set, &a2->monster_set);
};

// Line 29: range 0000000017349198-00000000173491B6
void __cdecl SummonInfo::~SummonInfo(SummonInfo *const this)
{
  std::set<std::shared_ptr<Monster>>::~set(&this->monster_set);
};

// Line 36: range 00000000174B277E-00000000174B27A8
void __cdecl Monster::~Monster(Monster *const this)
{
  Monster::~Monster(this);
  operator delete(this, 0xC48uLL);
};

// Line 36: range 00000000174B268E-00000000174B277D
void __cdecl Monster::~Monster(Monster *const this)
{
  __int64 *v1; // rdx

  v1 = &`vtable for'Monster + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  *(_QWORD *)this->baseclass_0 = v1;
  std::map<unsigned int,Monster::PlayerHurtData>::~map(&this->player_hurt_map_);
  std::shared_ptr<PlatformRoute>::~shared_ptr(&this->route_ptr_);
  std::string::~string(&this->drop_tag_);
  std::set<unsigned int>::~set(&this->alert_partner_set_);
  std::set<unsigned int>::~set(&this->alert_player_set_);
  std::map<unsigned int,SummonInfo>::~map(&this->summon_map_);
  std::set<unsigned int>::~set(&this->affix_set_);
  std::map<std::string,std::shared_ptr<MonsterWeaponGadget>>::~map(&this->weapon_gadget_map_);
  EcsBase<Monster,MonsterCompBase,4u>::~EcsBase(&this->EcsBase<Monster,MonsterCompBase,4>);
  Creature::~Creature(this);
};

// Line 39: range 000000001666FB7E-000000001667040C
void __cdecl Monster::Monster(Monster *const this, uint32_t monster_id)
{
  __int64 *v2; // rdx
  uint32_t MonsterMainTypeId; // edx

  Creature::Creature(this);
  EcsBase<Monster,MonsterCompBase,4u>::EcsBase(&this->EcsBase<Monster,MonsterCompBase,4>);
  v2 = &`vtable for'Monster + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  *(_QWORD *)this->baseclass_0 = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->monster_id_);
  }
  this->monster_id_ = monster_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->drop_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->drop_id_);
  }
  this->drop_id_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_ban_txt_drop_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_ban_txt_drop_);
  this->is_ban_txt_drop_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_ban_all_drop_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 121) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ban_all_drop_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_ban_all_drop_);
  }
  this->is_ban_all_drop_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_elite_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 122) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_elite_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_elite_);
  }
  this->is_elite_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->summoned_tag_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->summoned_tag_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->summoned_tag_);
  }
  this->summoned_tag_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->born_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->born_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->born_type_);
  }
  this->born_type_ = MONSTER_BORN_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->title_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->title_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->title_id_);
  }
  this->title_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->special_name_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->special_name_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->special_name_id_);
  }
  this->special_name_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->pose_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pose_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->pose_id_);
  }
  this->pose_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_pool_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_pool_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->monster_pool_id_);
  }
  this->monster_pool_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_score_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_score_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->kill_score_);
  }
  this->kill_score_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->ai_config_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ai_config_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ai_config_id_);
  }
  this->ai_config_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_route_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_route_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level_route_id_);
  }
  this->level_route_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->init_pose_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->init_pose_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->init_pose_id_);
  }
  this->init_pose_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_light_config_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_light_config_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_light_config_);
  }
  this->is_light_config_ = 0;
  MonsterMainTypeId = Monster::getMonsterMainTypeId(monster_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_main_type_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_main_type_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->monster_main_type_id_);
  }
  this->monster_main_type_id_ = MonsterMainTypeId;
  if ( *(_BYTE *)(((unsigned __int64)&this->initial_hp_percentage_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->initial_hp_percentage_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->initial_hp_percentage_);
  }
  this->initial_hp_percentage_ = 0.0;
  Vector3::Vector3(&this->born_pos_, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->born_rot_, 0.0, 0.0, 0.0);
  if ( *(_BYTE *)(((unsigned __int64)&this->dropped_hp_percent_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dropped_hp_percent_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dropped_hp_percent_);
  }
  this->dropped_hp_percent_ = 100.0;
  std::map<std::string,std::shared_ptr<MonsterWeaponGadget>>::map(&this->weapon_gadget_map_);
  std::set<unsigned int>::set(&this->affix_set_);
  std::map<unsigned int,SummonInfo>::map(&this->summon_map_);
  std::set<unsigned int>::set(&this->alert_player_set_);
  std::set<unsigned int>::set(&this->alert_partner_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->guest_ban_drop_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guest_ban_drop_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->guest_ban_drop_);
  }
  this->guest_ban_drop_ = 0;
  std::string::basic_string(&this->drop_tag_);
  if ( *(char *)(((unsigned __int64)&this->is_checked_ai_hash_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_checked_ai_hash_);
  this->is_checked_ai_hash_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->attack_target_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->attack_target_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->attack_target_id_);
  }
  this->attack_target_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->json_climate_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->json_climate_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->json_climate_type_);
  }
  this->json_climate_type_ = Normal;
  if ( *(_BYTE *)(((unsigned __int64)&this->json_climate_area_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->json_climate_area_id_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->json_climate_area_id_);
  }
  this->json_climate_area_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->lua_climate_area_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->lua_climate_area_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->lua_climate_area_id_);
  }
  this->lua_climate_area_id_ = 0;
  std::shared_ptr<PlatformRoute>::shared_ptr(&this->route_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_drag_back_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_drag_back_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_drag_back_time_);
  }
  this->last_drag_back_time_ = 0;
  std::map<unsigned int,Monster::PlayerHurtData>::map(&this->player_hurt_map_);
};

// Line 42: range 00000000172095C2-00000000172095D0
proto::ProtEntityType __cdecl Monster::getEntityType(const Monster *const this)
{
  return 2;
};

// Line 44: range 00000000172095D2-00000000172095E0
data::EntityType __cdecl Monster::getClientEntityType(const Monster *const this)
{
  return 2;
};

// Line 126: range 00000000172095E2-00000000172096E3
void __cdecl Monster::setBornPos(Monster *const this, const Vector3 *pos)
{
  if ( *(char *)(((unsigned __int64)&this->born_pos_ >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->born_pos_.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 80 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->born_pos_.z + 3) >> 3)
                                                           + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->born_pos_, 12LL);
  }
  if ( ((unsigned __int8)pos & 7) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(pos, 12LL);
  }
  this->born_pos_ = *pos;
};

// Line 130: range 00000000172096E4-00000000172097EC
void __cdecl Monster::setBornRot(Monster *const this, const Vector3 *rot)
{
  if ( (((unsigned __int8)this - 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->born_rot_ >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->born_rot_ >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->born_rot_.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 68 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->born_rot_.z + 3) >> 3)
                                                           + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->born_rot_, 12LL);
  }
  if ( ((unsigned __int8)rot & 7) >= *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)rot + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(rot, 12LL);
  }
  this->born_rot_ = *rot;
};

// Line 138: range 00000000172097EE-0000000017209807
bool __cdecl Monster::canChangeAuthority(const Monster *const this)
{
  return Entity::isOnScene((const Entity *const)this);
};

// Line 162: range 0000000013843B18-0000000013843B2B
const std::set<unsigned int> *__cdecl Monster::getAffixSet(const Monster *const this)
{
  return &this->affix_set_;
};

// Line 162: range 0000000013843B2C-0000000013843B87
void __cdecl Monster::setIsBanAllDrop(Monster *const this, bool is_ban_all_drop__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_ban_all_drop_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 121) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ban_all_drop_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_ban_all_drop_);
  }
  this->is_ban_all_drop_ = is_ban_all_drop__out;
};

// Line 222: range 0000000015A1D636-0000000015A1D665
PlatformRoutePtr __cdecl Monster::getMonsterRoute(const Monster *const this)
{
  const std::shared_ptr<PlatformRoute> *v1; // rsi
  PlatformRoutePtr result; // rax

  std::shared_ptr<PlatformRoute>::shared_ptr((std::shared_ptr<PlatformRoute> *const)this, v1 + 192);
  result._M_ptr = (std::__shared_ptr<PlatformRoute,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 269: range 00000000131D9148-00000000131D9194
uint32_t __cdecl Monster::getMonsterId(const Monster *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->monster_id_;
};

// Line 270: range 0000000017209808-0000000017209863
void __cdecl Monster::setDropId(Monster *const this, uint32_t drop_id__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->drop_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->drop_id_);
  }
  this->drop_id_ = drop_id__out;
};

// Line 271: range 0000000017209864-00000000172098BA
void __cdecl Monster::setIsBanTxtDrop(Monster *const this, bool is_ban_txt_drop__out)
{
  if ( *(char *)(((unsigned __int64)&this->is_ban_txt_drop_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_ban_txt_drop_);
  this->is_ban_txt_drop_ = is_ban_txt_drop__out;
};

// Line 272: range 00000000172098BC-000000001720990E
bool __cdecl Monster::getIsBanAllDrop(const Monster *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_ban_all_drop_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 121) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ban_all_drop_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_ban_all_drop_);
  }
  return this->is_ban_all_drop_;
};

// Line 273: range 0000000013843B88-0000000013843BDA
bool __cdecl Monster::getIsElite(const Monster *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_elite_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 122) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_elite_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_elite_);
  }
  return this->is_elite_;
};

// Line 273: range 0000000017209910-000000001720996B
void __cdecl Monster::setIsElite(Monster *const this, bool is_elite__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_elite_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 122) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_elite_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_elite_);
  }
  this->is_elite_ = is_elite__out;
};

// Line 274: range 000000001720996C-00000000172099C0
uint32_t __cdecl Monster::getSummonedTag(const Monster *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->summoned_tag_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->summoned_tag_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->summoned_tag_;
};

// Line 274: range 00000000172099C2-0000000017209A1D
void __cdecl Monster::setSummonedTag(Monster *const this, uint32_t summoned_tag__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->summoned_tag_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->summoned_tag_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->summoned_tag_);
  }
  this->summoned_tag_ = summoned_tag__out;
};

// Line 275: range 0000000017209A1E-0000000017209A71
void __cdecl Monster::setMonsterBornType(Monster *const this, proto::MonsterBornType born_type__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->born_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->born_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->born_type_);
  }
  this->born_type_ = born_type__out;
};

// Line 276: range 0000000017209A72-0000000017209ACD
void __cdecl Monster::setTitleId(Monster *const this, uint32_t title_id__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->title_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->title_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->title_id_);
  }
  this->title_id_ = title_id__out;
};

// Line 277: range 0000000017209ACE-0000000017209B21
void __cdecl Monster::setSpecialNameId(Monster *const this, uint32_t special_name_id__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->special_name_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->special_name_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->special_name_id_);
  }
  this->special_name_id_ = special_name_id__out;
};

// Line 278: range 0000000017209B22-0000000017209B76
uint32_t __cdecl Monster::getPoseId(const Monster *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->pose_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pose_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->pose_id_;
};

// Line 278: range 0000000017209B78-0000000017209BD3
void __cdecl Monster::setPoseId(Monster *const this, uint32_t pose_id__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->pose_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pose_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->pose_id_);
  }
  this->pose_id_ = pose_id__out;
};

// Line 279: range 000000001604FD6A-000000001604FDB6
uint32_t __cdecl Monster::getMonsterPoolId(const Monster *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_pool_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_pool_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->monster_pool_id_;
};

// Line 280: range 000000001518F1FC-000000001518F250
uint32_t __cdecl Monster::getKillScore(const Monster *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_score_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_score_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->kill_score_;
};

// Line 280: range 0000000016915EC8-0000000016915F23
void __cdecl Monster::setKillScore(Monster *const this, uint32_t kill_score__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_score_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_score_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->kill_score_);
  }
  this->kill_score_ = kill_score__out;
};

// Line 283: range 0000000017209BD4-0000000017209C20
uint32_t __cdecl Monster::getInitPoseId(const Monster *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->init_pose_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->init_pose_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->init_pose_id_;
};

// Line 283: range 0000000017209C22-0000000017209C75
void __cdecl Monster::setInitPoseId(Monster *const this, uint32_t init_pose_id__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->init_pose_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->init_pose_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->init_pose_id_);
  }
  this->init_pose_id_ = init_pose_id__out;
};

// Line 284: range 0000000013843BDC-0000000013843C2E
bool __cdecl Monster::getIsLightConfig(const Monster *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_light_config_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_light_config_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_light_config_);
  }
  return this->is_light_config_;
};

// Line 284: range 0000000017209C76-0000000017209CD1
void __cdecl Monster::setIsLightConfig(Monster *const this, bool is_light_config__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_light_config_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_light_config_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_light_config_);
  }
  this->is_light_config_ = is_light_config__out;
};

// Line 285: range 0000000017209CD2-0000000017209D1E
uint32_t __cdecl Monster::getMonsterMainTypeId(const Monster *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_main_type_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_main_type_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->monster_main_type_id_;
};

// Line 286: range 000000001667040E-000000001667046F
void __cdecl Monster::setMonsterInitialHpPercentage(Monster *const this, float initial_hp_percentage__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->initial_hp_percentage_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->initial_hp_percentage_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->initial_hp_percentage_);
  }
  this->initial_hp_percentage_ = initial_hp_percentage__out;
};

// Line 300: range 00000000155B81AE-00000000155B81FA
data::JsonClimateType __cdecl Monster::getJsonClimateAreaType(const Monster *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->json_climate_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->json_climate_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->json_climate_type_;
};

// Line 301: range 00000000155B81FC-00000000155B8250
uint32_t __cdecl Monster::getJsonClimateAreaId(const Monster *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->json_climate_area_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->json_climate_area_id_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->json_climate_area_id_;
};

// Line 306: range 00000000173F609E-00000000173F6135
void __cdecl Monster::PlayerHurtData::PlayerHurtData(Monster::PlayerHurtData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->hurt_hp = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_hurt_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_hurt_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_hurt_time);
  }
  this->last_hurt_time = 0;
};
