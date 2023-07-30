// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/avatar/avatar.h

// Line 38: range 00000000131CD8C8-00000000131CD99D
void __cdecl SpringUseParam::SpringUseParam(SpringUseParam *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx

  v1 = (unsigned __int8)this & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(this, v1, v2);
  this->is_auto_use = 0;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->spring_auto_use_percent >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->spring_auto_use_percent >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->spring_auto_use_percent, (((_BYTE)this + 4) & 7u) + 3, v3);
  this->spring_auto_use_percent = 0;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->point_id, (((_BYTE)this + 8) & 7u) + 3, v4);
  this->point_id = 0;
};

// Line 49: range 000000001635AD50-000000001635AD7A
void __cdecl Avatar::~Avatar(Avatar *const this)
{
  Avatar::~Avatar(this);
  operator delete(this, 0xB58uLL);
};

// Line 49: range 000000001635ACA8-000000001635AD4F
void __cdecl Avatar::~Avatar(Avatar *const this)
{
  __int64 v1; // rsi
  __int64 *v2; // rdx

  v2 = &`vtable for'Avatar + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  *(_QWORD *)this->baseclass_0 = v2;
  std::shared_ptr<PlayerUnixTimer>::~shared_ptr(&this->unlock_chair_timer_ptr_);
  std::shared_ptr<PlayerTimer>::~shared_ptr(&this->stamina_timer_ptr_);
  std::vector<Vector3>::~vector(&this->last_move_params_);
  std::weak_ptr<Player>::~weak_ptr(&this->player_wtr_);
  EcsBase<Avatar,AvatarCompBase,7u>::~EcsBase(&this->EcsBase<Avatar,AvatarCompBase,7>);
  Creature::~Creature(this);
};

// Line 52: range 000000001720D768-000000001720DF14
// local variable allocation has failed, the output may be wrong!
void __cdecl Avatar::Avatar(Avatar *const this, uint32_t avatar_id)
{
  __int64 *v2; // rdx
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
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rdx

  Creature::Creature(this);
  EcsBase<Avatar,AvatarCompBase,7u>::EcsBase(&this->EcsBase<Avatar,AvatarCompBase,7>);
  v2 = &`vtable for'Avatar + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&avatar_id);
  *(_QWORD *)this->baseclass_0 = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->guid_, *(_QWORD *)&avatar_id);
  this->guid_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_id_, *(_QWORD *)&avatar_id, &this->avatar_id_);
  }
  this->avatar_id_ = avatar_id;
  v3 = (((_BYTE)this + 124) & 7u) + 3;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->promote_level_, v3, v4);
  this->promote_level_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->satiation_val_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->satiation_val_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->satiation_val_, v3, &this->satiation_val_);
  }
  this->satiation_val_ = 0.0;
  v5 = (((_BYTE)this - 124) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->satiation_penalty_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->satiation_penalty_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->satiation_penalty_time_, v5, v6);
  this->satiation_penalty_time_ = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_hp_recover_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_hp_recover_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_hp_recover_time_, v5, &this->last_hp_recover_time_);
  }
  this->last_hp_recover_time_ = 0;
  v7 = (((_BYTE)this - 116) & 7u) + 3;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->skill_depot_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_depot_id_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->skill_depot_id_, v7, v8);
  this->skill_depot_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_valid_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_valid_time_ms_, v7);
  this->last_valid_time_ms_ = 0LL;
  if ( *(char *)(((unsigned __int64)&this->is_revive_after_die_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_revive_after_die_, v7, &this->is_revive_after_die_);
  this->is_revive_after_die_ = 0;
  v9 = (((_BYTE)this - 100) & 7u) + 3;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->revive_hp_after_die_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->revive_hp_after_die_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->revive_hp_after_die_, v9, v10);
  this->revive_hp_after_die_ = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->revive_source_entity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->revive_source_entity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->revive_source_entity_id_, v9, &this->revive_source_entity_id_);
  }
  this->revive_source_entity_id_ = 0;
  v11 = (((_BYTE)this - 92) & 7u) + 3;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->born_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->born_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store4(&this->born_time_, v11, v12);
  this->born_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->sit_on_chair_id_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->sit_on_chair_id_, v11);
  this->sit_on_chair_id_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->anim_hash_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->anim_hash_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->anim_hash_, v11, &this->anim_hash_);
  }
  this->anim_hash_ = 0;
  std::weak_ptr<Player>::weak_ptr(&this->player_wtr_);
  Vector3::Vector3(&this->prev_speed_, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->last_valid_pos_, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->last_valid_rot_, 0.0, 0.0, 0.0);
  v13 = (((_BYTE)this - 20) & 7u) + 3;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->last_sub_stamina_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_sub_stamina_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_store4(&this->last_sub_stamina_, v13, v14);
  this->last_sub_stamina_ = 0.0;
  if ( *(char *)(((unsigned __int64)&this->is_inited_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_inited_, v13, &this->is_inited_);
  this->is_inited_ = 0;
  v15 = ((_BYTE)this - 15) & 7;
  v16 = (*(_BYTE *)(((unsigned __int64)&this->is_ability_reseting >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&this->is_ability_reseting >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->is_ability_reseting, v15, v16);
  this->is_ability_reseting = 0;
  std::vector<Vector3>::vector(&this->last_move_params_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_satiation_player_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_satiation_player_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_refresh_satiation_player_time_, v15, &this->last_refresh_satiation_player_time_);
  }
  this->last_refresh_satiation_player_time_ = 0.0;
  v17 = ((_BYTE)this + 20) & 7;
  v18 = (*(_BYTE *)(((unsigned __int64)&this->is_in_dash_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v17 >= *(_BYTE *)(((unsigned __int64)&this->is_in_dash_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v18 )
    __asan_report_store1(&this->is_in_dash_, v17, v18);
  this->is_in_dash_ = 0;
  v19 = ((_BYTE)this + 21) & 7;
  v20 = (*(_BYTE *)(((unsigned __int64)&this->is_in_fly_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v19 >= *(_BYTE *)(((unsigned __int64)&this->is_in_fly_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v20 )
    __asan_report_store1(&this->is_in_fly_, v19, v20);
  this->is_in_fly_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_start_dash_scene_time_ms_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_start_dash_scene_time_ms_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_start_dash_scene_time_ms_, v19, &this->last_start_dash_scene_time_ms_);
  }
  this->last_start_dash_scene_time_ms_ = 0;
  v21 = (((_BYTE)this + 28) & 7u) + 3;
  v22 = (*(_BYTE *)(((unsigned __int64)&this->last_trigger_watcher_dash_time_ms_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_trigger_watcher_dash_time_ms_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v22 )
    __asan_report_store4(&this->last_trigger_watcher_dash_time_ms_, v21, v22);
  this->last_trigger_watcher_dash_time_ms_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_start_fly_scene_time_ms_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_start_fly_scene_time_ms_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_start_fly_scene_time_ms_, v21, &this->last_start_fly_scene_time_ms_);
  }
  this->last_start_fly_scene_time_ms_ = 0;
  Vector3::Vector3(&this->last_start_fly_pos_, 0.0, 0.0, 0.0);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_trigger_watcher_fly_time_ms_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_trigger_watcher_fly_time_ms_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_trigger_watcher_fly_time_ms_, v21, &this->last_trigger_watcher_fly_time_ms_);
  }
  this->last_trigger_watcher_fly_time_ms_ = 0;
  std::shared_ptr<PlayerTimer>::shared_ptr(&this->stamina_timer_ptr_);
  std::shared_ptr<PlayerUnixTimer>::shared_ptr(&this->unlock_chair_timer_ptr_, 0LL);
};

// Line 55: range 00000000138438B8-00000000138438C6
proto::ProtEntityType __cdecl Avatar::getEntityType(const Avatar *const this)
{
  return 1;
};

// Line 57: range 00000000138438C8-00000000138438D6
data::EntityType __cdecl Avatar::getClientEntityType(const Avatar *const this)
{
  return 1;
};

// Line 99: range 00000000138438D8-00000000138438E2
void __cdecl Avatar::onDailyRefresh(Avatar *const this)
{
  ;
};

// Line 111: range 0000000013843952-0000000013843960
bool __cdecl Avatar::canEnterRegion(const Avatar *const this)
{
  return 1;
};

// Line 111: range 00000000138438E4-0000000013843951
bool __cdecl Avatar::isFormal(const Avatar *const this)
{
  unsigned __int64 v1; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v1 = *(_QWORD *)this->baseclass_0 + 400LL;
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 400LL);
  return (*(unsigned int (__fastcall **)(const Avatar *const))v1)(this) == 1;
};

// Line 201: range 0000000013843962-00000000138439B3
PlayerPtr __cdecl Avatar::getPlayer(const Avatar *const this)
{
  PlayerPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)this);
  result._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 202: range 00000000162398DC-000000001623992F
// local variable allocation has failed, the output may be wrong!
void __cdecl Avatar::setAvatarId(Avatar *const this, uint32_t avatar_id__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_id_, *(_QWORD *)&avatar_id__out, &this->avatar_id_);
  }
  this->avatar_id_ = avatar_id__out;
};

// Line 202: range 00000000162398B0-00000000162398DB
void __cdecl Avatar::setPlayer(Avatar *const this, PlayerPtr *p_player_ptr)
{
  std::weak_ptr<Player>::operator=<Player>(&this->player_wtr_, p_player_ptr);
};

// Line 278: range 0000000015A1A430-0000000015A1A443
const Vector3 *__cdecl Avatar::getLastValidPos(const Avatar *const this)
{
  return &this->last_valid_pos_;
};

// Line 279: range 0000000014F77CAA-0000000014F77CBD
const Vector3 *__cdecl Avatar::getLastValidRot(const Avatar *const this)
{
  return &this->last_valid_rot_;
};

// Line 281: range 00000000143FF024-00000000143FF12C
void __cdecl Avatar::setLastValidPos(Avatar *const this, const Vector3 *pos)
{
  if ( (((unsigned __int8)this - 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->last_valid_pos_ >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->last_valid_pos_ >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->last_valid_pos_.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 44 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->last_valid_pos_.z + 3) >> 3)
                                                           + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->last_valid_pos_, 12LL);
  }
  if ( ((unsigned __int8)pos & 7) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(pos, 12LL);
  }
  this->last_valid_pos_ = *pos;
};

// Line 282: range 00000000143FF12E-00000000143FF22F
void __cdecl Avatar::setLastValidRot(Avatar *const this, const Vector3 *rot)
{
  if ( *(char *)(((unsigned __int64)&this->last_valid_rot_ >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->last_valid_rot_.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 32 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->last_valid_rot_.z + 3) >> 3)
                                                           + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->last_valid_rot_, 12LL);
  }
  if ( ((unsigned __int8)rot & 7) >= *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)rot + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(rot, 12LL);
  }
  this->last_valid_rot_ = *rot;
};

// Line 347: range 00000000131CDA2E-00000000131CDA7B
bool __cdecl Avatar::isInited(const Avatar *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_inited_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_inited_);
  return this->is_inited_;
};

// Line 370: range 00000000131CDA7C-00000000131CDABB
uint64_t __cdecl Avatar::getGuid(const Avatar *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->guid_);
  return this->guid_;
};

// Line 370: range 000000001720DF16-000000001720DF5E
void __cdecl Avatar::setGuid(Avatar *const this, uint64_t guid__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->guid_, guid__out);
  this->guid_ = guid__out;
};

// Line 371: range 00000000131CDABC-00000000131CDB08
uint32_t __cdecl Avatar::getAvatarId(const Avatar *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->avatar_id_);
  }
  return this->avatar_id_;
};

// Line 372: range 00000000149ED0E2-00000000149ED136
uint32_t __cdecl Avatar::getPromoteLevel(const Avatar *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->promote_level_);
  }
  return this->promote_level_;
};

// Line 373: range 0000000017D680A2-0000000017D680F0
float __cdecl Avatar::getSatiationVal(const Avatar *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->satiation_val_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->satiation_val_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->satiation_val_);
  }
  return this->satiation_val_;
};

// Line 374: range 0000000017D680F2-0000000017D68148
float __cdecl Avatar::getSatiationPenaltyTime(const Avatar *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->satiation_penalty_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->satiation_penalty_time_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->satiation_penalty_time_);
  }
  return this->satiation_penalty_time_;
};

// Line 379: range 00000000138439B4-0000000013843A08
uint32_t __cdecl Avatar::getSkillDepotId(const Avatar *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_depot_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_depot_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->skill_depot_id_);
  }
  return this->skill_depot_id_;
};

// Line 379: range 0000000016239930-000000001623998B
void __cdecl Avatar::setSkillDepotId(Avatar *const this, uint32_t skill_depot_id__out)
{
  __int64 v2; // rdx

  v2 = (*(_BYTE *)(((unsigned __int64)&this->skill_depot_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_depot_id_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->skill_depot_id_, (((_BYTE)this - 116) & 7u) + 3, v2);
  this->skill_depot_id_ = skill_depot_id__out;
};

// Line 380: range 000000001720DF60-000000001720DF9F
uint64_t __cdecl Avatar::getLastValidTime(const Avatar *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_valid_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->last_valid_time_ms_);
  return this->last_valid_time_ms_;
};

// Line 380: range 000000001720DFA0-000000001720DFE8
void __cdecl Avatar::setLastValidTime(Avatar *const this, uint64_t last_valid_time_ms__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_valid_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_valid_time_ms_, last_valid_time_ms__out);
  this->last_valid_time_ms_ = last_valid_time_ms__out;
};

// Line 381: range 000000001720DFEA-000000001720E037
bool __cdecl Avatar::getIsReviveAfterDie(const Avatar *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_revive_after_die_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_revive_after_die_);
  return this->is_revive_after_die_;
};

// Line 381: range 0000000013843A0A-0000000013843A60
// local variable allocation has failed, the output may be wrong!
void __cdecl Avatar::setIsReviveAfterDie(Avatar *const this, bool is_revive_after_die__out)
{
  if ( *(char *)(((unsigned __int64)&this->is_revive_after_die_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_revive_after_die_, is_revive_after_die__out, &this->is_revive_after_die_);
  this->is_revive_after_die_ = is_revive_after_die__out;
};

// Line 382: range 000000001720E038-000000001720E08E
float __cdecl Avatar::getReviveHpAfterDie(const Avatar *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->revive_hp_after_die_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->revive_hp_after_die_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->revive_hp_after_die_);
  }
  return this->revive_hp_after_die_;
};

// Line 382: range 0000000013843A62-0000000013843AC3
void __cdecl Avatar::setReviveHpAfterDie(Avatar *const this, float revive_hp_after_die__out)
{
  __int64 v2; // rdx

  v2 = (*(_BYTE *)(((unsigned __int64)&this->revive_hp_after_die_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->revive_hp_after_die_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->revive_hp_after_die_, (((_BYTE)this - 100) & 7u) + 3, v2);
  this->revive_hp_after_die_ = revive_hp_after_die__out;
};

// Line 383: range 000000001720E090-000000001720E0DC
uint32_t __cdecl Avatar::getReviveSourceEntityId(const Avatar *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->revive_source_entity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->revive_source_entity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->revive_source_entity_id_);
  }
  return this->revive_source_entity_id_;
};

// Line 383: range 0000000013843AC4-0000000013843B17
// local variable allocation has failed, the output may be wrong!
void __cdecl Avatar::setReviveSourceEntityId(Avatar *const this, uint32_t revive_source_entity_id__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->revive_source_entity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->revive_source_entity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(
      &this->revive_source_entity_id_,
      *(_QWORD *)&revive_source_entity_id__out,
      &this->revive_source_entity_id_);
  }
  this->revive_source_entity_id_ = revive_source_entity_id__out;
};

// Line 384: range 000000001720E0DE-000000001720E132
uint32_t __cdecl Avatar::getBornTime(const Avatar *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->born_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->born_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->born_time_);
  }
  return this->born_time_;
};

// Line 384: range 000000001720E134-000000001720E18F
void __cdecl Avatar::setBornTime(Avatar *const this, uint32_t born_time__out)
{
  __int64 v2; // rdx

  v2 = (*(_BYTE *)(((unsigned __int64)&this->born_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->born_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->born_time_, (((_BYTE)this - 92) & 7u) + 3, v2);
  this->born_time_ = born_time__out;
};

// Line 385: range 00000000131CDB0A-00000000131CDB49
uint64_t __cdecl Avatar::getSitOnChairId(const Avatar *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->sit_on_chair_id_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->sit_on_chair_id_);
  return this->sit_on_chair_id_;
};

// Line 385: range 00000000131CDB4A-00000000131CDB92
void __cdecl Avatar::setSitOnChairId(Avatar *const this, uint64_t sit_on_chair_id__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->sit_on_chair_id_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->sit_on_chair_id_, sit_on_chair_id__out);
  this->sit_on_chair_id_ = sit_on_chair_id__out;
};

// Line 386: range 00000000131CDB94-00000000131CDBE0
uint32_t __cdecl Avatar::getAnimHash(const Avatar *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->anim_hash_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->anim_hash_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->anim_hash_);
  }
  return this->anim_hash_;
};

// Line 386: range 00000000131CDBE2-00000000131CDC35
// local variable allocation has failed, the output may be wrong!
void __cdecl Avatar::setAnimHash(Avatar *const this, uint32_t anim_hash__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->anim_hash_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->anim_hash_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->anim_hash_, *(_QWORD *)&anim_hash__out, &this->anim_hash_);
  }
  this->anim_hash_ = anim_hash__out;
};
