// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/avatar/player_avatar_comp.h

// Line 47: range 0000000016808854-00000000168088C5
void __cdecl AvatarTeamEntity::AvatarTeamEntity(AvatarTeamEntity *const this)
{
  __int64 v1; // rsi
  __int64 *v2; // rdx

  Creature::Creature(this);
  v2 = &`vtable for'AvatarTeamEntity + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  *(_QWORD *)this->baseclass_0 = v2;
  std::weak_ptr<Player>::weak_ptr(&this->player_wtr_);
  std::unordered_set<unsigned int>::unordered_set(&this->unfinished_combat_end_type_set_);
};

// Line 47: range 00000000168335AA-00000000168335D4
void __cdecl AvatarTeamEntity::~AvatarTeamEntity(AvatarTeamEntity *const this)
{
  AvatarTeamEntity::~AvatarTeamEntity(this);
  operator delete(this, 0xA88uLL);
};

// Line 47: range 0000000016833538-00000000168335A9
void __cdecl AvatarTeamEntity::~AvatarTeamEntity(AvatarTeamEntity *const this)
{
  __int64 v1; // rsi
  __int64 *v2; // rdx

  v2 = &`vtable for'AvatarTeamEntity + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  *(_QWORD *)this->baseclass_0 = v2;
  std::unordered_set<unsigned int>::~unordered_set(&this->unfinished_combat_end_type_set_);
  std::weak_ptr<Player>::~weak_ptr(&this->player_wtr_);
  Creature::~Creature(this);
};

// Line 53: range 000000001666C860-000000001666C86E
data::EntityType __cdecl AvatarTeamEntity::getClientEntityType(const AvatarTeamEntity *const this)
{
  return 31;
};

// Line 59: range 000000001666C870-000000001666C886
int32_t __cdecl AvatarTeamEntity::enterScene(AvatarTeamEntity *const this, Scene *scene, const VisionContext *a3)
{
  return 0;
};

// Line 63: range 000000001666C888-000000001666C8D9
PlayerPtr __cdecl AvatarTeamEntity::getPlayer(const AvatarTeamEntity *const this)
{
  PlayerPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)this);
  result._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 79: range 0000000017216C08-0000000017216CE4
void __cdecl AvatarRenameAuditData::AvatarRenameAuditData(AvatarRenameAuditData *const this)
{
  __int64 v1; // rsi
  uint32_t *p_submit_time; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  std::string::basic_string(this);
  p_submit_time = &this->submit_time;
  if ( *(_BYTE *)(((unsigned __int64)p_submit_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_submit_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->submit_time, v1, p_submit_time);
  }
  this->submit_time = 0;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->audit_state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->audit_state >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->audit_state, v3, v4);
  this->audit_state = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->source_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->source_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->source_type, v3, &this->source_type);
  }
  this->source_type = 0;
};

// Line 79: range 00000000173D6FA8-00000000173D713C
void __cdecl AvatarRenameAuditData::AvatarRenameAuditData(
        AvatarRenameAuditData *const this,
        const AvatarRenameAuditData *a2)
{
  uint32_t submit_time; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t audit_state; // ecx
  char v6; // dl
  __int64 v7; // rdx
  uint32_t source_type; // ecx
  char v9; // al
  const AvatarRenameAuditData *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&v10->submit_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->submit_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->submit_time);
  }
  submit_time = a2->submit_time;
  v3 = *(_BYTE *)(((unsigned __int64)&this->submit_time >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->submit_time, a2, &this->submit_time);
  }
  this->submit_time = submit_time;
  v4 = (((_BYTE)v10 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->audit_state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->audit_state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->audit_state);
  }
  audit_state = v10->audit_state;
  v6 = *(_BYTE *)(((unsigned __int64)&this->audit_state >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->audit_state, v4, v7);
  this->audit_state = audit_state;
  if ( *(_BYTE *)(((unsigned __int64)&v10->source_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->source_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->source_type);
  }
  source_type = v10->source_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->source_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v4) = v9 != 0;
    __asan_report_store4(&this->source_type, v4, &this->source_type);
  }
  this->source_type = source_type;
};

// Line 79: range 0000000017216CE6-0000000017216D00
void __cdecl AvatarRenameAuditData::~AvatarRenameAuditData(AvatarRenameAuditData *const this)
{
  std::string::~string(this);
};

// Line 90: range 000000001720FA28-000000001720FA7C
bool __cdecl AvatarRenameAuditData::isNotInAudit(const AvatarRenameAuditData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->audit_state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->audit_state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->audit_state);
  }
  return this->audit_state == 0;
};

// Line 94: range 0000000017216D02-0000000017216DA9
void __cdecl AvatarRenameData::AvatarRenameData(AvatarRenameData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->avatar_id = 0;
  v2 = ((_BYTE)this + 4) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->has_set_by_quest >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->has_set_by_quest >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->has_set_by_quest, v2, v3);
  this->has_set_by_quest = 0;
  std::string::basic_string(&this->cur_avatar_name);
  AvatarRenameAuditData::AvatarRenameAuditData(&this->audit_data);
};

// Line 94: range 00000000173D713E-00000000173D7298
void __cdecl AvatarRenameData::AvatarRenameData(AvatarRenameData *const this, const AvatarRenameData *a2)
{
  uint32_t avatar_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  bool has_set_by_quest; // cl
  char v6; // dl
  __int64 v7; // rdx
  const AvatarRenameData *v8; // [rsp+0h] [rbp-20h]

  v8 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  avatar_id = a2->avatar_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, this);
  }
  this->avatar_id = avatar_id;
  v4 = ((_BYTE)v8 + 4) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&v8->has_set_by_quest >> 3) + 0x7FFF8000) != 0
    && (char)v4 >= *(_BYTE *)(((unsigned __int64)&v8->has_set_by_quest >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&v8->has_set_by_quest);
  }
  has_set_by_quest = v8->has_set_by_quest;
  v6 = *(_BYTE *)(((unsigned __int64)&this->has_set_by_quest >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 4) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->has_set_by_quest, v4, v7);
  this->has_set_by_quest = has_set_by_quest;
  std::string::basic_string(&this->cur_avatar_name, &v8->cur_avatar_name);
  AvatarRenameAuditData::AvatarRenameAuditData(&this->audit_data, &v8->audit_data);
};

// Line 94: range 0000000017216DAA-0000000017216DD8
void __cdecl AvatarRenameData::~AvatarRenameData(AvatarRenameData *const this)
{
  AvatarRenameAuditData::~AvatarRenameAuditData(&this->audit_data);
  std::string::~string(&this->cur_avatar_name);
};

// Line 106: range 000000001720FA7E-000000001720FA9B
bool __cdecl AvatarRenameData::isNotInAudit(const AvatarRenameData *const this)
{
  return AvatarRenameAuditData::isNotInAudit(&this->audit_data);
};

// Line 112: range 00000000174B25E4-00000000174B260E
void __cdecl PlayerAvatarComp::~PlayerAvatarComp(PlayerAvatarComp *const this)
{
  PlayerAvatarComp::~PlayerAvatarComp(this);
  operator delete(this, 0x5C8uLL);
};

// Line 112: range 00000000174B23B8-00000000174B25E3
void __cdecl PlayerAvatarComp::~PlayerAvatarComp(PlayerAvatarComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerAvatarComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::map<unsigned int,AvatarRenameData>::~map(&this->avatar_rename_data_map_);
  std::list<unsigned int>::~list(&this->backup_team_id_order_list_);
  std::unordered_map<std::tuple<unsigned int,unsigned int,unsigned int,unsigned int>,unsigned int,boost::hash<std::tuple<unsigned int,unsigned int,unsigned int,unsigned int>>,std::equal_to<std::tuple<unsigned int,unsigned int,unsigned int,unsigned int>>,std::allocator<std::pair<std::tuple<unsigned int,unsigned int,unsigned int,unsigned int> const,unsigned int>>>::~unordered_map(&this->frame_attack_count_map_);
  std::shared_ptr<proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit>::~shared_ptr(&this->anti_cheat_body_scene_time_move_speed_over_limit_log_ptr_);
  std::shared_ptr<proto_log::AntiCheatBodyMoveSpeedOverLimit>::~shared_ptr(&this->anti_cheat_body_move_speed_over_limit_log_ptr_);
  std::set<unsigned int>::~set(&this->alert_monster_set_);
  std::set<unsigned int>::~set(&this->owned_costume_set_);
  std::set<unsigned int>::~set(&this->owned_flycloak_set_);
  PlayerUnixTimer::~PlayerUnixTimer(&this->avatar_log_timer_);
  std::set<std::weak_ptr<Avatar>,std::owner_less<std::weak_ptr<Avatar>>,std::allocator<std::weak_ptr<Avatar>>>::~set(&this->avatar_info_change_set_);
  std::unordered_map<std::string,std::shared_ptr<proto_log::PlayerLogBodyAvatarHpChange>>::~unordered_map(&this->avatar_hp_change_log_map_);
  std::string::~string(&this->cur_combat_transaction_);
  PlayerTimer::~PlayerTimer(&this->buff_timer_);
  std::multimap<unsigned int,std::shared_ptr<Buff>>::~multimap(&this->avatar_team_buff_mmap_);
  std::unordered_map<unsigned int,std::weak_ptr<Group>>::~unordered_map(&this->group_wtr_map_);
  std::set<std::weak_ptr<Group>,std::owner_less<std::weak_ptr<Group>>,std::allocator<std::weak_ptr<Group>>>::~set(&this->group_wtr_set_);
  PlayerUnixTimer::~PlayerUnixTimer(&this->avatar_state_timer_);
  std::vector<unsigned long>::~vector(&this->lock_team_avatar_guid_vec_);
  std::vector<unsigned long>::~vector(&this->quest_lock_team_avatar_guid_vec_);
  std::unordered_set<unsigned long>::~unordered_set(&this->temp_avatar_guid_set_);
  std::map<unsigned int,AvatarTeam>::~map(&this->avatar_team_map_);
  std::map<unsigned long,proto::AvatarSnapshotBin>::~map(&this->avatar_snapshot_map_);
  std::set<unsigned long>::~set(&this->trial_avatar_guid_set_);
  std::map<unsigned long,std::shared_ptr<Avatar>>::~map(&this->avatar_map_);
  std::shared_ptr<AvatarTeamEntity>::~shared_ptr(&this->team_entity_ptr_);
  std::shared_ptr<Avatar>::~shared_ptr(&this->cur_avatar_ptr_);
  std::shared_ptr<Avatar>::~shared_ptr(&this->reborn_avatar_ptr_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 129: range 000000001747966E-000000001747AA2B
void __cdecl ZN16PlayerAvatarCompCI214PlayerCompBaseER6Player(PlayerAvatarComp *const this, Player *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rdx
  PlayerAvatarComp **v16; // r8
  const std::_Placeholder<1> *v17; // r9
  PlayerAvatarComp **v18; // r8
  const std::_Placeholder<1> *v19; // r9
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rdx
  PlayerAvatarComp **v23; // r8
  const std::_Placeholder<1> *v24; // r9
  char v25; // dl
  __int64 v26; // rsi
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // rdx
  PlayerAvatarComp *v41; // [rsp+18h] [rbp-A8h] BYREF
  PlayerAvatarComp *v42; // [rsp+20h] [rbp-A0h] BYREF
  PlayerAvatarComp *v43; // [rsp+28h] [rbp-98h] BYREF
  void (*__f[2])(PlayerAvatarComp *, unsigned __int64); // [rsp+30h] [rbp-90h] BYREF
  void (*v45[2])(PlayerAvatarComp *, unsigned __int64); // [rsp+40h] [rbp-80h] BYREF
  PlayerPtr v46; // [rsp+50h] [rbp-70h] BYREF
  PlayerPtr p_player_ptr; // [rsp+60h] [rbp-60h] BYREF
  std::_Bind_helper<false,void (PlayerAvatarComp::*)(long unsigned int),PlayerAvatarComp*,const std::_Placeholder<1>&>::type p___f; // [rsp+70h] [rbp-50h] BYREF
  std::function<void(long unsigned int)> p_callback; // [rsp+90h] [rbp-30h] BYREF

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerAvatarComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  std::shared_ptr<Avatar>::shared_ptr(&this->reborn_avatar_ptr_, 0LL);
  std::shared_ptr<Avatar>::shared_ptr(&this->cur_avatar_ptr_, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_avatar_die_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_avatar_die_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_avatar_die_time_, 0LL, &this->last_avatar_die_time_);
  }
  this->last_avatar_die_time_ = 0;
  v3 = ((_BYTE)this + 68) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_spring_auto_use_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_spring_auto_use_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_spring_auto_use_, v3, v4);
  this->is_spring_auto_use_ = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->spring_auto_use_percent_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->spring_auto_use_percent_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->spring_auto_use_percent_, v3, &this->spring_auto_use_percent_);
  }
  this->spring_auto_use_percent_ = 0;
  v5 = (((_BYTE)this + 76) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->die_type_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->die_type_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->die_type_, v5, v6);
  this->die_type_ = PLAYER_DIE_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_avatar_team_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_avatar_team_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_avatar_team_id_, v5, &this->cur_avatar_team_id_);
  }
  this->cur_avatar_team_id_ = 0;
  std::shared_ptr<AvatarTeamEntity>::shared_ptr(&this->team_entity_ptr_, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->choose_avatar_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->choose_avatar_guid_, 0LL);
  this->choose_avatar_guid_ = 0LL;
  if ( *(char *)(((unsigned __int64)&this->is_changed_equip_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_changed_equip_, 0LL, &this->is_changed_equip_);
  this->is_changed_equip_ = 0;
  v7 = ((_BYTE)this + 113) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->is_flyable_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_flyable_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_flyable_, v7, v8);
  this->is_flyable_ = 0;
  v9 = ((_BYTE)this + 114) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->is_transferable_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->is_transferable_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_transferable_, v9, v10);
  this->is_transferable_ = 1;
  v11 = ((_BYTE)this + 115) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->is_allow_use_skill_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->is_allow_use_skill_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->is_allow_use_skill_, v11, v12);
  this->is_allow_use_skill_ = 1;
  v13 = ((_BYTE)this + 116) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->is_reconnect_flag_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&this->is_reconnect_flag_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_reconnect_flag_, v13, v14);
  this->is_reconnect_flag_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->total_expedition_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_expedition_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_expedition_num_, v13, &this->total_expedition_num_);
  }
  this->total_expedition_num_ = 0;
  std::map<unsigned long,std::shared_ptr<Avatar>>::map(&this->avatar_map_);
  std::set<unsigned long>::set(&this->trial_avatar_guid_set_);
  std::map<unsigned long,proto::AvatarSnapshotBin>::map(&this->avatar_snapshot_map_);
  std::map<unsigned int,AvatarTeam>::map(&this->avatar_team_map_);
  std::unordered_set<unsigned long>::unordered_set(&this->temp_avatar_guid_set_);
  std::vector<unsigned long>::vector(&this->quest_lock_team_avatar_guid_vec_);
  std::vector<unsigned long>::vector(&this->lock_team_avatar_guid_vec_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_change_avatar_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_change_avatar_time_ms_, v13);
  this->last_change_avatar_time_ms_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_backgroud_avatar_recover_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_backgroud_avatar_recover_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_backgroud_avatar_recover_time_, v13, &this->last_backgroud_avatar_recover_time_);
  }
  this->last_backgroud_avatar_recover_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_avatar_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_avatar_guid_, v13);
  this->last_avatar_guid_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->murderer_entity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->murderer_entity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->murderer_entity_id_, v13, &this->murderer_entity_id_);
  }
  this->murderer_entity_id_ = 0;
  v15 = (*(_BYTE *)(((unsigned __int64)&this->murderer_top_owner_entity_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->murderer_top_owner_entity_id_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v15 )
    __asan_report_store4(&this->murderer_top_owner_entity_id_, (((_BYTE)this - 60) & 7u) + 3, v15);
  this->murderer_top_owner_entity_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  toPtr<Player,Player>((Player *)&p_player_ptr);
  v41 = this;
  __f[0] = (void (*)(PlayerAvatarComp *, unsigned __int64))PlayerAvatarComp::checkAvatarState;
  __f[1] = 0LL;
  std::bind<void (PlayerAvatarComp::*)(unsigned long),PlayerAvatarComp*,std::_Placeholder<1> const&>(
    &p___f,
    __f,
    &v41,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v16,
    v17);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (PlayerAvatarComp::*)(unsigned long) ()(PlayerAvatarComp*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  PlayerUnixTimer::PlayerUnixTimer(&this->avatar_state_timer_, &p_player_ptr, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
  std::set<std::weak_ptr<Group>,std::owner_less<std::weak_ptr<Group>>,std::allocator<std::weak_ptr<Group>>>::set(&this->group_wtr_set_);
  std::unordered_map<unsigned int,std::weak_ptr<Group>>::unordered_map(&this->group_wtr_map_);
  std::multimap<unsigned int,std::shared_ptr<Buff>>::multimap(&this->avatar_team_buff_mmap_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  toPtr<Player,Player>((Player *)&p_player_ptr);
  v42 = this;
  v45[0] = (void (*)(PlayerAvatarComp *, unsigned __int64))PlayerAvatarComp::checkAvatarBuff;
  v45[1] = 0LL;
  std::bind<void (PlayerAvatarComp::*)(unsigned long),PlayerAvatarComp*,std::_Placeholder<1> const&>(
    &p___f,
    v45,
    &v42,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v18,
    v19);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (PlayerAvatarComp::*)(unsigned long) ()(PlayerAvatarComp*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  PlayerTimer::PlayerTimer(&this->buff_timer_, &p_player_ptr, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
  if ( *(char *)(((unsigned __int64)&this->is_team_buff_recovered_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_team_buff_recovered_, &p_player_ptr, &this->is_team_buff_recovered_);
  this->is_team_buff_recovered_ = 0;
  v20 = (((_BYTE)this + 20) & 7u) + 3;
  v21 = (*(_BYTE *)(((unsigned __int64)&this->last_server_buff_uid_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_server_buff_uid_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v21 )
    __asan_report_store4(&this->last_server_buff_uid_, v20, v21);
  this->last_server_buff_uid_ = 0;
  std::string::basic_string(&this->cur_combat_transaction_);
  std::unordered_map<std::string,std::shared_ptr<proto_log::PlayerLogBodyAvatarHpChange>>::unordered_map(&this->avatar_hp_change_log_map_);
  std::set<std::weak_ptr<Avatar>,std::owner_less<std::weak_ptr<Avatar>>,std::allocator<std::weak_ptr<Avatar>>>::set(&this->avatar_info_change_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_hp_log_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_hp_log_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_refresh_hp_log_time_, v20, &this->last_refresh_hp_log_time_);
  }
  this->last_refresh_hp_log_time_ = 0;
  v22 = (*(_BYTE *)(((unsigned __int64)&this->last_refresh_info_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_refresh_info_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v22 )
    __asan_report_store4(&this->last_refresh_info_time_, (((_BYTE)this - 92) & 7u) + 3, v22);
  this->last_refresh_info_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  toPtr<Player,Player>((Player *)&v46);
  v43 = this;
  p_player_ptr._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)PlayerAvatarComp::onAvatarLogTimer;
  p_player_ptr._M_refcount._M_pi = 0LL;
  std::bind<void (PlayerAvatarComp::*)(unsigned long),PlayerAvatarComp*,std::_Placeholder<1> const&>(
    &p___f,
    (void (**)(PlayerAvatarComp *, unsigned __int64))&p_player_ptr,
    &v43,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v23,
    v24);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (PlayerAvatarComp::*)(unsigned long) ()(PlayerAvatarComp*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  PlayerUnixTimer::PlayerUnixTimer(&this->avatar_log_timer_, &v46, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr(&v46);
  if ( *(char *)(((unsigned __int64)&this->drag_back_pos_ >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->drag_back_pos_.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->drag_back_pos_.z + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->drag_back_pos_, 12LL);
  }
  v25 = *(_BYTE *)((((unsigned __int64)&Vector3::zero.z + 3) >> 3) + 0x7FFF8000);
  v26 = v25 != 0;
  if ( ((char)((unsigned __int64)&Vector3::zero & 7) >= *(_BYTE *)(((unsigned __int64)&Vector3::zero >> 3) + 0x7FFF8000)
     && *(_BYTE *)(((unsigned __int64)&Vector3::zero >> 3) + 0x7FFF8000) != 0) | (unsigned __int8)v26 & ((((unsigned __int8)&Vector3::zero.z + 3) & 7) >= v25) )
  {
    v26 = 12LL;
    __asan_report_load_n(&Vector3::zero, 12LL);
  }
  this->drag_back_pos_ = Vector3::zero;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_move_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_move_time_ms_, v26);
  this->last_move_time_ms_ = 0LL;
  if ( *(char *)(((unsigned __int64)&this->is_need_drag_back_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_need_drag_back_, v26, &this->is_need_drag_back_);
  this->is_need_drag_back_ = 0;
  v27 = (((_BYTE)this + 28) & 7u) + 3;
  v28 = (*(_BYTE *)(((unsigned __int64)&this->client_report_move_speed_over_limit_count_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->client_report_move_speed_over_limit_count_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v28 )
    __asan_report_store4(&this->client_report_move_speed_over_limit_count_, v27, v28);
  this->client_report_move_speed_over_limit_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_check_move_speed_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_check_move_speed_time_ms_, v27);
  this->last_check_move_speed_time_ms_ = 0LL;
  Vector3::Vector3(&this->last_check_move_speed_pos_, 0.0, 0.0, 0.0);
  v29 = (((_BYTE)this + 52) & 7u) + 3;
  v30 = (*(_BYTE *)(((unsigned __int64)&this->last_check_fastest_move_type_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_check_fastest_move_type_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v30 )
    __asan_report_store4(&this->last_check_fastest_move_type_, v29, v30);
  this->last_check_fastest_move_type_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_time_last_check_move_speed_time_ms_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_time_last_check_move_speed_time_ms_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(
      &this->scene_time_last_check_move_speed_time_ms_,
      v29,
      &this->scene_time_last_check_move_speed_time_ms_);
  }
  this->scene_time_last_check_move_speed_time_ms_ = 0;
  Vector3::Vector3(&this->scene_time_last_check_move_speed_pos_, 0.0, 0.0, 0.0);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_force_move_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_force_move_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_refresh_force_move_time_, v29, &this->last_refresh_force_move_time_);
  }
  this->last_refresh_force_move_time_ = 0;
  v31 = (((_BYTE)this + 76) & 7u) + 3;
  v32 = (*(_BYTE *)(((unsigned __int64)&this->force_drag_move_count_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->force_drag_move_count_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v32 )
    __asan_report_store4(&this->force_drag_move_count_, v31, v32);
  this->force_drag_move_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->total_move_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_move_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_move_count_, v31, &this->total_move_count_);
  }
  this->total_move_count_ = 0;
  std::set<unsigned int>::set(&this->owned_flycloak_set_);
  std::set<unsigned int>::set(&this->owned_costume_set_);
  std::set<unsigned int>::set(&this->alert_monster_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_die_invincible_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_die_invincible_time_ms_, v31);
  this->last_die_invincible_time_ms_ = 0LL;
  if ( *(char *)(((unsigned __int64)&this->is_all_die_enter_scene_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_all_die_enter_scene_, v31, &this->is_all_die_enter_scene_);
  this->is_all_die_enter_scene_ = 0;
  v33 = (((_BYTE)this - 12) & 7u) + 3;
  v34 = (*(_BYTE *)(((unsigned __int64)&this->last_record_anti_cheat_body_move_speed_over_limit_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_record_anti_cheat_body_move_speed_over_limit_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v34 )
    __asan_report_store4(&this->last_record_anti_cheat_body_move_speed_over_limit_time_, v33, v34);
  this->last_record_anti_cheat_body_move_speed_over_limit_time_ = 0;
  std::shared_ptr<proto_log::AntiCheatBodyMoveSpeedOverLimit>::shared_ptr(&this->anti_cheat_body_move_speed_over_limit_log_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_record_anti_cheat_body_scene_time_move_speed_over_limit_time_ >> 3)
                + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_record_anti_cheat_body_scene_time_move_speed_over_limit_time_ >> 3)
                + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(
      &this->last_record_anti_cheat_body_scene_time_move_speed_over_limit_time_,
      v33,
      &this->last_record_anti_cheat_body_scene_time_move_speed_over_limit_time_);
  }
  this->last_record_anti_cheat_body_scene_time_move_speed_over_limit_time_ = 0;
  std::shared_ptr<proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit>::shared_ptr(&this->anti_cheat_body_scene_time_move_speed_over_limit_log_ptr_);
  std::unordered_map<std::tuple<unsigned int,unsigned int,unsigned int,unsigned int>,unsigned int,boost::hash<std::tuple<unsigned int,unsigned int,unsigned int,unsigned int>>,std::equal_to<std::tuple<unsigned int,unsigned int,unsigned int,unsigned int>>,std::allocator<std::pair<std::tuple<unsigned int,unsigned int,unsigned int,unsigned int> const,unsigned int>>>::unordered_map(&this->frame_attack_count_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->frame_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->frame_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->frame_num_, v33, &this->frame_num_);
  }
  this->frame_num_ = 0;
  v35 = (((_BYTE)this + 92) & 7u) + 3;
  v36 = (*(_BYTE *)(((unsigned __int64)&this->qiandaogua_anticheat_log_count_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->qiandaogua_anticheat_log_count_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v36 )
    __asan_report_store4(&this->qiandaogua_anticheat_log_count_, v35, v36);
  this->qiandaogua_anticheat_log_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_attack_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_attack_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_attack_count_, v35, &this->max_attack_count_);
  }
  this->max_attack_count_ = 0;
  v37 = (((_BYTE)this + 100) & 7u) + 3;
  v38 = (*(_BYTE *)(((unsigned __int64)&this->client_sgv_anticheat_log_count_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->client_sgv_anticheat_log_count_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v38 )
    __asan_report_store4(&this->client_sgv_anticheat_log_count_, v37, v38);
  this->client_sgv_anticheat_log_count_ = 0;
  std::list<unsigned int>::list(&this->backup_team_id_order_list_);
  AntiCheatLogRecord::AntiCheatLogRecord(&this->attack_damage_anticheat_record_);
  std::map<unsigned int,AvatarRenameData>::map(&this->avatar_rename_data_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_rename_during_last_time_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_rename_during_last_time_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(
      &this->avatar_rename_during_last_time_count_,
      v37,
      &this->avatar_rename_during_last_time_count_);
  }
  this->avatar_rename_during_last_time_count_ = 0;
  v39 = (((_BYTE)this - 68) & 7u) + 3;
  v40 = (*(_BYTE *)(((unsigned __int64)&this->avatar_rename_next_limit_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_rename_next_limit_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v40 )
    __asan_report_store4(&this->avatar_rename_next_limit_time_, v39, v40);
  this->avatar_rename_next_limit_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->next_avatar_rename_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->next_avatar_rename_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->next_avatar_rename_time_, v39, &this->next_avatar_rename_time_);
  }
  this->next_avatar_rename_time_ = 0;
};

// Line 246: range 00000000155B6A1E-00000000155B6A73
AvatarTeam *__cdecl PlayerAvatarComp::findCurAvatarTeam(PlayerAvatarComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_avatar_team_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_avatar_team_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_avatar_team_id_);
  }
  return PlayerAvatarComp::findAvatarTeam(this, this->cur_avatar_team_id_);
};

// Line 251: range 000000001720FA9C-000000001720FB3A
std::vector<long unsigned int> *__cdecl PlayerAvatarComp::getCurAvatarTeamWithTempAvatar(
        std::vector<long unsigned int> *retstr,
        PlayerAvatarComp *const this)
{
  uint32_t CurAvatarTeamId; // esi

  CurAvatarTeamId = PlayerAvatarComp::getCurAvatarTeamId(this);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    CurAvatarTeamId = 24;
    __asan_report_store_n(retstr, 24LL);
  }
  PlayerAvatarComp::getAvatarTeamWithTempAvatar(retstr, this, CurAvatarTeamId);
  return retstr;
};

// Line 278: range 0000000015A1A444-0000000015A1A46F
void __cdecl AvatarTeamEntity::setPlayer(AvatarTeamEntity *const this, PlayerPtr *p_player_ptr)
{
  std::weak_ptr<Player>::operator=<Player>(&this->player_wtr_, p_player_ptr);
};

// Line 365: range 00000000131D8E14-00000000131D8E32
bool __cdecl PlayerAvatarComp::isInCombat(PlayerAvatarComp *const this)
{
  return PlayerAvatarComp::getMonsterAlertCount(this) != 0;
};

// Line 384: range 00000000138443F2-0000000013844405
const std::string *__cdecl PlayerAvatarComp::getCombatTransaction[abi:cxx11](const PlayerAvatarComp *const this)
{
  return &this->cur_combat_transaction_;
};

// Line 457: range 0000000015D3683A-0000000015D36887
bool __cdecl PlayerAvatarComp::getIsReconnectFlag(const PlayerAvatarComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_reconnect_flag_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_reconnect_flag_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_reconnect_flag_);
  }
  return this->is_reconnect_flag_;
};

// Line 458: range 0000000017D68A2A-0000000017D68A3D
std::map<long unsigned int,proto::AvatarSnapshotBin> *__cdecl PlayerAvatarComp::getAvatarSnapshotMapByGm(
        PlayerAvatarComp *const this)
{
  return &this->avatar_snapshot_map_;
};

// Line 468: range 0000000016905948-000000001690595B
const std::unordered_set<long unsigned int> *__cdecl PlayerAvatarComp::getQuestTempAvatarGuidSet(
        const PlayerAvatarComp *const this)
{
  return &this->temp_avatar_guid_set_;
};

// Line 468: range 0000000016905934-0000000016905947
const std::vector<long unsigned int> *__cdecl PlayerAvatarComp::getQuestLockTeamAvatarGuidVec(
        PlayerAvatarComp *const this)
{
  return &this->quest_lock_team_avatar_guid_vec_;
};

// Line 473: range 000000001690595C-000000001690596F
const std::vector<long unsigned int> *__cdecl PlayerAvatarComp::getLockTeamAvatarGuidVec(PlayerAvatarComp *const this)
{
  return &this->lock_team_avatar_guid_vec_;
};

// Line 473: range 0000000016905970-00000000169059C6
void __cdecl PlayerAvatarComp::setIsSpringAutoUse(PlayerAvatarComp *const this, bool is_spring_auto_use__out)
{
  __int64 v2; // rsi
  __int64 v3; // rdx

  v2 = ((_BYTE)this + 68) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_spring_auto_use_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_spring_auto_use_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_spring_auto_use_, v2, v3);
  this->is_spring_auto_use_ = is_spring_auto_use__out;
};

// Line 487: range 0000000013844406-00000000138444D7
bool __fastcall PlayerAvatarComp::isHasTeamBuff(const PlayerAvatarComp *const this, uint32_t buff_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 buff_id:487";
  *(_QWORD *)(v2 + 16) = PlayerAvatarComp::isHasTeamBuff;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = buff_id;
  result = common::tools::MiscUtils::isContains<std::multimap<unsigned int,std::shared_ptr<Buff>> const,unsigned int>(
             &this->avatar_team_buff_mmap_,
             (const unsigned int *)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 495: range 00000000143FF510-00000000143FF57B
uint32_t __cdecl PlayerAvatarComp::getNextServerBuffUid(PlayerAvatarComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_server_buff_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_server_buff_uid_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_server_buff_uid_);
  }
  return ++this->last_server_buff_uid_;
};

// Line 511: range 00000000131D8E34-00000000131D8F05
bool __fastcall PlayerAvatarComp::hasFlycloak(PlayerAvatarComp *const this, uint32_t flycloak_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 flycloak_id:511";
  *(_QWORD *)(v2 + 16) = PlayerAvatarComp::hasFlycloak;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = flycloak_id;
  result = common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
             &this->owned_flycloak_set_,
             (const unsigned int *)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 673: range 00000000141F121C-00000000141F1245
void __cdecl PlayerAvatarComp::setRebornAvatar(PlayerAvatarComp *const this, AvatarPtr *p_reborn_avatar_ptr__out)
{
  std::shared_ptr<Avatar>::operator=(&this->reborn_avatar_ptr_, p_reborn_avatar_ptr__out);
};

// Line 674: range 00000000131D8FAA-00000000131D8FD6
AvatarPtr __cdecl PlayerAvatarComp::getCurAvatar(const PlayerAvatarComp *const this)
{
  const std::shared_ptr<Avatar> *v1; // rsi
  AvatarPtr result; // rax

  std::shared_ptr<Avatar>::shared_ptr((std::shared_ptr<Avatar> *const)this, v1 + 3);
  result._M_ptr = (std::__shared_ptr<Avatar,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 674: range 0000000015A1A470-0000000015A1A499
void __cdecl PlayerAvatarComp::setCurAvatar(PlayerAvatarComp *const this, AvatarPtr *p_cur_avatar_ptr__out)
{
  std::shared_ptr<Avatar>::operator=(&this->cur_avatar_ptr_, p_cur_avatar_ptr__out);
};

// Line 676: range 000000001720FB3C-000000001720FB89
bool __cdecl PlayerAvatarComp::getIsSpringAutoUse(const PlayerAvatarComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_spring_auto_use_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_spring_auto_use_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_spring_auto_use_);
  }
  return this->is_spring_auto_use_;
};

// Line 677: range 000000001720FB8A-000000001720FBD1
uint32_t __cdecl PlayerAvatarComp::getSpringAutoUsePercent(const PlayerAvatarComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->spring_auto_use_percent_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->spring_auto_use_percent_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->spring_auto_use_percent_);
  }
  return this->spring_auto_use_percent_;
};

// Line 677: range 00000000169059C8-0000000016905A16
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerAvatarComp::setSpringAutoUsePercent(
        PlayerAvatarComp *const this,
        uint32_t spring_auto_use_percent__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->spring_auto_use_percent_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->spring_auto_use_percent_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(
      &this->spring_auto_use_percent_,
      *(_QWORD *)&spring_auto_use_percent__out,
      &this->spring_auto_use_percent_);
  }
  this->spring_auto_use_percent_ = spring_auto_use_percent__out;
};

// Line 678: range 00000000138444D8-0000000013844527
proto::PlayerDieType __cdecl PlayerAvatarComp::getDieType(const PlayerAvatarComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->die_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->die_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->die_type_);
  }
  return this->die_type_;
};

// Line 679: range 00000000131D8FD8-00000000131D901F
uint32_t __cdecl PlayerAvatarComp::getCurAvatarTeamId(const PlayerAvatarComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_avatar_team_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_avatar_team_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_avatar_team_id_);
  }
  return this->cur_avatar_team_id_;
};

// Line 679: range 00000000131D9020-00000000131D906E
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerAvatarComp::setCurAvatarTeamId(PlayerAvatarComp *const this, uint32_t cur_avatar_team_id__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_avatar_team_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_avatar_team_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_avatar_team_id_, *(_QWORD *)&cur_avatar_team_id__out, &this->cur_avatar_team_id_);
  }
  this->cur_avatar_team_id_ = cur_avatar_team_id__out;
};

// Line 680: range 00000000138445CC-00000000138445F8
AvatarTeamEntityPtr __cdecl PlayerAvatarComp::getTeamEntity(const PlayerAvatarComp *const this)
{
  __int64 v1; // rsi
  AvatarTeamEntityPtr result; // rax

  std::shared_ptr<AvatarTeamEntity>::shared_ptr(
    (std::shared_ptr<AvatarTeamEntity> *const)this,
    (const std::shared_ptr<AvatarTeamEntity> *)(v1 + 88));
  result._M_ptr = (std::__shared_ptr<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 680: range 0000000015A1A546-0000000015A1A56F
void __cdecl PlayerAvatarComp::setTeamEntity(PlayerAvatarComp *const this, AvatarTeamEntityPtr *p_team_entity_ptr__out)
{
  std::shared_ptr<AvatarTeamEntity>::operator=(&this->team_entity_ptr_, p_team_entity_ptr__out);
};

// Line 681: range 00000000131D9070-00000000131D90AA
uint64_t __cdecl PlayerAvatarComp::getChooseAvatarGuid(const PlayerAvatarComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->choose_avatar_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->choose_avatar_guid_);
  return this->choose_avatar_guid_;
};

// Line 681: range 000000001720FBD2-000000001720FC15
void __cdecl PlayerAvatarComp::setChooseAvatarGuid(PlayerAvatarComp *const this, uint64_t choose_avatar_guid__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->choose_avatar_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->choose_avatar_guid_, choose_avatar_guid__out);
  this->choose_avatar_guid_ = choose_avatar_guid__out;
};

// Line 682: range 00000000138445FA-000000001384464B
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerAvatarComp::setIsChangedEquip(PlayerAvatarComp *const this, bool is_changed_equip__out)
{
  if ( *(char *)(((unsigned __int64)&this->is_changed_equip_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_changed_equip_, is_changed_equip__out, &this->is_changed_equip_);
  this->is_changed_equip_ = is_changed_equip__out;
};

// Line 683: range 000000001720FC16-000000001720FC63
bool __cdecl PlayerAvatarComp::getIsFlyable(const PlayerAvatarComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_flyable_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 113) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_flyable_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_flyable_);
  }
  return this->is_flyable_;
};

// Line 684: range 000000001720FC64-000000001720FCB1
bool __cdecl PlayerAvatarComp::getIsTransferable(const PlayerAvatarComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_transferable_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 114) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_transferable_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_transferable_);
  }
  return this->is_transferable_;
};

// Line 685: range 00000000131D90AC-00000000131D90F9
bool __cdecl PlayerAvatarComp::getIsAllowUseSkill(const PlayerAvatarComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_allow_use_skill_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 115) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_allow_use_skill_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_allow_use_skill_);
  }
  return this->is_allow_use_skill_;
};

// Line 685: range 00000000131D90FA-00000000131D9146
uint32_t __cdecl PlayerAvatarComp::getNextAvatarRenameTime(const PlayerAvatarComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->next_avatar_rename_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->next_avatar_rename_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->next_avatar_rename_time_);
  }
  return this->next_avatar_rename_time_;
};

// Line 686: range 0000000015D36888-0000000015D368DE
void __cdecl PlayerAvatarComp::setIsReconnectFlag(PlayerAvatarComp *const this, bool is_reconnect_flag__out)
{
  __int64 v2; // rsi
  __int64 v3; // rdx

  v2 = ((_BYTE)this + 116) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_reconnect_flag_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_reconnect_flag_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_reconnect_flag_, v2, v3);
  this->is_reconnect_flag_ = is_reconnect_flag__out;
};

// Line 687: range 000000001518A500-000000001518A547
uint32_t __cdecl PlayerAvatarComp::getTotalExpeditionNum(const PlayerAvatarComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->total_expedition_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_expedition_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->total_expedition_num_);
  }
  return this->total_expedition_num_;
};

// Line 687: range 000000001518A548-000000001518A596
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerAvatarComp::setTotalExpeditionNum(PlayerAvatarComp *const this, uint32_t total_expedition_num__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->total_expedition_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_expedition_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(
      &this->total_expedition_num_,
      *(_QWORD *)&total_expedition_num__out,
      &this->total_expedition_num_);
  }
  this->total_expedition_num_ = total_expedition_num__out;
};

// Line 717: range 0000000015A1A570-0000000015A1A614
Vector3 __cdecl PlayerAvatarComp::getDragBackPos(const PlayerAvatarComp *const this)
{
  float z; // xmm1_4
  __int64 v2; // xmm0_8
  Vector3 result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( *(char *)(((unsigned __int64)&this->drag_back_pos_ >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->drag_back_pos_.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->drag_back_pos_.z + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load_n(&this->drag_back_pos_, 12LL);
  }
  z = this->drag_back_pos_.z;
  v2 = *(_QWORD *)&this->drag_back_pos_.x;
  result.x = *(float *)&v2;
  result.y = *((float *)&v2 + 1);
  result.z = z;
  return result;
};

// Line 717: range 000000001384464C-000000001384479F
// local variable allocation has failed, the output may be wrong!
void __fastcall PlayerAvatarComp::setDragBackPos(PlayerAvatarComp *const this, Vector3 drag_back_pos__out)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // rdx
  __int64 v5; // rax
  char v6[80]; // [rsp+20h] [rbp-50h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 64);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 22 drag_back_pos__out:717";
  *(_QWORD *)(v2 + 16) = PlayerAvatarComp::setDragBackPos;
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202177536;
  *(Vector3 *)(v2 + 32) = drag_back_pos__out;
  if ( *(char *)(((unsigned __int64)&this->drag_back_pos_ >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->drag_back_pos_.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->drag_back_pos_.z + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    v5 = __asan_report_store_n(&this->drag_back_pos_, 12LL);
  }
  this->drag_back_pos_ = *(Vector3 *)(v4 - 32);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)(v5 + 2147450880) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)(v5 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 718: range 00000000138447A0-00000000138447DF
uint64_t __cdecl PlayerAvatarComp::getLastMoveTimeMs(const PlayerAvatarComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_move_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->last_move_time_ms_);
  return this->last_move_time_ms_;
};

// Line 718: range 00000000138447E0-0000000013844828
void __cdecl PlayerAvatarComp::setLastMoveTimeMs(PlayerAvatarComp *const this, uint64_t last_move_time_ms__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_move_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_move_time_ms_, last_move_time_ms__out);
  this->last_move_time_ms_ = last_move_time_ms__out;
};

// Line 719: range 000000001384482A-0000000013844877
bool __cdecl PlayerAvatarComp::getIsNeedDragBack(const PlayerAvatarComp *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_need_drag_back_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_need_drag_back_);
  return this->is_need_drag_back_;
};

// Line 719: range 0000000013844878-00000000138448CE
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerAvatarComp::setIsNeedDragBack(PlayerAvatarComp *const this, bool is_need_drag_back__out)
{
  if ( *(char *)(((unsigned __int64)&this->is_need_drag_back_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_need_drag_back_, is_need_drag_back__out, &this->is_need_drag_back_);
  this->is_need_drag_back_ = is_need_drag_back__out;
};

// Line 741: range 000000001720FCB2-000000001720FCFF
bool __cdecl PlayerAvatarComp::getIsAllDieEnterScene(const PlayerAvatarComp *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_all_die_enter_scene_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_all_die_enter_scene_);
  return this->is_all_die_enter_scene_;
};

// Line 741: range 00000000141F1246-00000000141F129C
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerAvatarComp::setIsAllDieEnterScene(PlayerAvatarComp *const this, bool is_all_die_enter_scene__out)
{
  if ( *(char *)(((unsigned __int64)&this->is_all_die_enter_scene_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_all_die_enter_scene_, is_all_die_enter_scene__out, &this->is_all_die_enter_scene_);
  this->is_all_die_enter_scene_ = is_all_die_enter_scene__out;
};

// Line 757: range 0000000016905A18-0000000016905A6C
uint32_t __cdecl PlayerAvatarComp::getClientSgvAnticheatLogCount(const PlayerAvatarComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->client_sgv_anticheat_log_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->client_sgv_anticheat_log_count_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->client_sgv_anticheat_log_count_);
  }
  return this->client_sgv_anticheat_log_count_;
};

// Line 757: range 0000000016905A6E-0000000016905AC9
void __cdecl PlayerAvatarComp::setClientSgvAnticheatLogCount(
        PlayerAvatarComp *const this,
        uint32_t client_sgv_anticheat_log_count__out)
{
  __int64 v2; // rdx

  v2 = (*(_BYTE *)(((unsigned __int64)&this->client_sgv_anticheat_log_count_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->client_sgv_anticheat_log_count_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->client_sgv_anticheat_log_count_, (((_BYTE)this + 100) & 7u) + 3, v2);
  this->client_sgv_anticheat_log_count_ = client_sgv_anticheat_log_count__out;
};

// Line 774: range 000000001720FD00-000000001720FD0A
uint32_t __cdecl PlayerAvatarComp::getType()
{
  return 2;
};

// Line 778: range 000000001440D4AA-000000001440D51B
std::shared_ptr<MirrorAvatar> __cdecl PlayerAvatarComp::findAvatar<MirrorAvatar>(
        const PlayerAvatarComp *const this,
        uint64_t guid)
{
  __int64 v2; // rdx
  std::shared_ptr<MirrorAvatar> result; // rax
  std::shared_ptr<Avatar> v4; // [rsp+20h] [rbp-10h] BYREF

  PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)&v4, guid, v2);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  std::dynamic_pointer_cast<MirrorAvatar,Avatar>((const std::shared_ptr<Avatar> *)this);
  std::shared_ptr<Avatar>::~shared_ptr(&v4);
  result._M_ptr = (std::__shared_ptr<MirrorAvatar,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 778: range 0000000014631C10-0000000014631C81
std::shared_ptr<TrialAvatar> __cdecl PlayerAvatarComp::findAvatar<TrialAvatar>(
        const PlayerAvatarComp *const this,
        uint64_t guid)
{
  __int64 v2; // rdx
  std::shared_ptr<TrialAvatar> result; // rax
  std::shared_ptr<Avatar> v4; // [rsp+20h] [rbp-10h] BYREF

  PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)&v4, guid, v2);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  std::dynamic_pointer_cast<TrialAvatar,Avatar>((const std::shared_ptr<Avatar> *)this);
  std::shared_ptr<Avatar>::~shared_ptr(&v4);
  result._M_ptr = (std::__shared_ptr<TrialAvatar,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 15578: range 000000001666C850-000000001666C85E
proto::ProtEntityType __cdecl AvatarTeamEntity::getEntityType(const AvatarTeamEntity *const this)
{
  return 9;
};
