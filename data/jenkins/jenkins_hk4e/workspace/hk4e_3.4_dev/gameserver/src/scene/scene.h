// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene.h

// Line 63: range 0000000015D31F86-0000000015D3201A
void __cdecl SceneUnlockInfo::SceneUnlockInfo(SceneUnlockInfo *const this)
{
  std::unordered_set<unsigned int>::unordered_set(&this->unlocked_point_set);
  std::unordered_set<unsigned int>::unordered_set(&this->unlocked_force_set);
  std::unordered_set<unsigned int>::unordered_set(&this->locked_point_set);
  std::unordered_set<unsigned int>::unordered_set(&this->not_explored_set);
  std::unordered_set<unsigned int>::unordered_set(&this->to_be_explored_set);
  std::unordered_set<unsigned int>::unordered_set(&this->group_unlimit_point_set);
  std::unordered_set<unsigned int>::unordered_set(&this->hide_point_set);
  std::unordered_set<unsigned int>::unordered_set(&this->unhide_point_set);
};

// Line 63: range 0000000015D3201C-0000000015D320B0
void __cdecl SceneUnlockInfo::~SceneUnlockInfo(SceneUnlockInfo *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->unhide_point_set);
  std::unordered_set<unsigned int>::~unordered_set(&this->hide_point_set);
  std::unordered_set<unsigned int>::~unordered_set(&this->group_unlimit_point_set);
  std::unordered_set<unsigned int>::~unordered_set(&this->to_be_explored_set);
  std::unordered_set<unsigned int>::~unordered_set(&this->not_explored_set);
  std::unordered_set<unsigned int>::~unordered_set(&this->locked_point_set);
  std::unordered_set<unsigned int>::~unordered_set(&this->unlocked_force_set);
  std::unordered_set<unsigned int>::~unordered_set(&this->unlocked_point_set);
};

// Line 78: range 0000000015A1AA90-0000000015A1AB43
void __cdecl CheckRegionParam::CheckRegionParam(CheckRegionParam *const this, CheckRegionType type_)
{
  bool v2; // dl
  bool v3; // dl

  v2 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v2);
  this->type = type_;
  Vector3::Vector3(&this->prev_pos, 0.0, 0.0, 0.0);
  v3 = *(_BYTE *)(((unsigned __int64)&this->prev_room >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->prev_room >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->prev_room, (((_BYTE)this + 16) & 7u) + 3, v3);
  this->prev_room = 0;
};

// Line 81: range 0000000013842724-000000001384279E
void __cdecl ScenePlayerLocation::ScenePlayerLocation(ScenePlayerLocation *const this)
{
  Vector3::Vector3(&this->cur_pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->cur_rot, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->last_valid_pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->last_valid_rot, 0.0, 0.0, 0.0);
};

// Line 91: range 0000000015BAACD4-0000000015BAAD69
void __cdecl ScenePlayerPeerInfo::ScenePlayerPeerInfo(ScenePlayerPeerInfo *const this)
{
  bool v1; // dl
  bool v2; // dl

  v1 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->uid = 0;
  v2 = *(_BYTE *)(((unsigned __int64)&this->enter_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->enter_time >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->enter_time, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->enter_time = 0;
};

// Line 97: range 0000000015A1DD8C-0000000015A1DE13
void __cdecl SceneVehicle::SceneVehicle(SceneVehicle *const this)
{
  bool v1; // dl

  v1 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->config_id = 0;
  Vector3::Vector3(&this->cur_pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->cur_rot, 0.0, 0.0, 0.0);
};

// Line 99: range 000000001666BBB6-000000001666BBC4
proto::ProtEntityType __cdecl SceneEntity::getEntityType(const SceneEntity *const this)
{
  return 8;
};

// Line 105: range 00000000168084D0-000000001680852F
void __cdecl SceneEntity::SceneEntity(SceneEntity *const this)
{
  __int64 v1; // rsi
  __int64 *v2; // rdx

  Creature::Creature(this);
  v2 = &`vtable for'SceneEntity + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  *(_QWORD *)this->baseclass_0 = v2;
  std::vector<std::string>::vector(&this->level_config_name_vec_);
};

// Line 105: range 00000000168335D6-0000000016833635
void __cdecl SceneEntity::~SceneEntity(SceneEntity *const this)
{
  __int64 v1; // rsi
  __int64 *v2; // rdx

  v2 = &`vtable for'SceneEntity + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  *(_QWORD *)this->baseclass_0 = v2;
  std::vector<std::string>::~vector(&this->level_config_name_vec_);
  Creature::~Creature(this);
};

// Line 105: range 0000000016833636-0000000016833660
void __cdecl SceneEntity::~SceneEntity(SceneEntity *const this)
{
  SceneEntity::~SceneEntity(this);
  operator delete(this, 0xA58uLL);
};

// Line 111: range 000000001666BBC6-000000001666BBD4
data::EntityType __cdecl SceneEntity::getClientEntityType(const SceneEntity *const this)
{
  return 11;
};

// Line 115: range 000000001666BBD6-000000001666BBEC
int32_t __cdecl SceneEntity::enterScene(SceneEntity *const this, Scene *scene, const VisionContext *a3)
{
  return 0;
};

// Line 117: range 0000000013EB9AC0-0000000013EB9AD3
const std::vector<std::string> *__cdecl SceneEntity::getLevelConfigNameVec[abi:cxx11](const SceneEntity *const this)
{
  return &this->level_config_name_vec_;
};

// Line 117: range 0000000013EB9AD4-0000000013EB9BA8
_BOOL8 __fastcall Scene::isDungeonEntryInteraced(Scene *const this, uint32_t dungeon_entry_config_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  _BOOL8 result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 27 dungeon_entry_config_id:694";
  *(_QWORD *)(v2 + 16) = Scene::isDungeonEntryInteraced;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = dungeon_entry_config_id;
  result = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
             &this->interacted_to_be_explored_dungeon_entry_config_id_set_,
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

// Line 127: range 0000000015BD4C46-0000000015BD4C93
void __cdecl MPLevelEntity::MPLevelEntity(MPLevelEntity *const this)
{
  __int64 v1; // rsi
  __int64 *v2; // rdx

  Creature::Creature(this);
  v2 = &`vtable for'MPLevelEntity + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  *(_QWORD *)this->baseclass_0 = v2;
};

// Line 127: range 0000000015BFA1B8-0000000015BFA205
void __cdecl MPLevelEntity::~MPLevelEntity(MPLevelEntity *const this)
{
  __int64 v1; // rsi
  __int64 *v2; // rdx

  v2 = &`vtable for'MPLevelEntity + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  *(_QWORD *)this->baseclass_0 = v2;
  Creature::~Creature(this);
};

// Line 127: range 0000000015BFA206-0000000015BFA230
void __cdecl MPLevelEntity::~MPLevelEntity(MPLevelEntity *const this)
{
  MPLevelEntity::~MPLevelEntity(this);
  operator delete(this, 0xA40uLL);
};

// Line 129: range 0000000013842AB0-0000000013842ADF
MPLevelEntityPtr __cdecl Scene::getMPLevelEntity(Scene *const this)
{
  __int64 v1; // rsi
  MPLevelEntityPtr result; // rax

  std::shared_ptr<MPLevelEntity>::shared_ptr(
    (std::shared_ptr<MPLevelEntity> *const)this,
    (const std::shared_ptr<MPLevelEntity> *)(v1 + 1224));
  result._M_ptr = (std::__shared_ptr<MPLevelEntity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 130: range 0000000015A1AB44-0000000015A1AB52
proto::ProtEntityType __cdecl MPLevelEntity::getEntityType(const MPLevelEntity *const this)
{
  return 11;
};

// Line 131: range 0000000015A1AB54-0000000015A1AB62
data::EntityType __cdecl MPLevelEntity::getClientEntityType(const MPLevelEntity *const this)
{
  return 42;
};

// Line 133: range 0000000015A1AB64-0000000015A1AB7A
int32_t __cdecl MPLevelEntity::enterScene(MPLevelEntity *const this, Scene *scene, const VisionContext *a3)
{
  return 0;
};

// Line 147: range 00000000131E523E-00000000131E5397
void __cdecl DropParam::DropParam(DropParam *const this)
{
  bool v1; // dl
  bool v2; // dl
  bool v3; // dl
  bool v4; // dl

  v1 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->drop_id = 0;
  v2 = *(_BYTE *)(((unsigned __int64)&this->drop_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->drop_count >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->drop_count, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->drop_count = 0;
  v3 = *(_BYTE *)(((unsigned __int64)&this->source_entity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->source_entity_id >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->source_entity_id, (((_BYTE)this + 8) & 7u) + 3, v3);
  this->source_entity_id = 0;
  v4 = *(_BYTE *)(((unsigned __int64)&this->only_vision_uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->only_vision_uid >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->only_vision_uid, (((_BYTE)this + 12) & 7u) + 3, v4);
  this->only_vision_uid = 0;
  Vector3::Vector3(&this->pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->rot, 0.0, 0.0, 0.0);
};

// Line 158: range 0000000015F2CDBC-0000000015F2D08D
void __cdecl Scene::~Scene(Scene *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'Scene + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>>::~map(&this->ongoing_challenge_id_2_pair_set_map_);
  std::unordered_map<unsigned int,proto::SceneTagOpType>::~unordered_map(&this->scene_tag_op_map_);
  std::map<unsigned int,std::map<unsigned int,std::weak_ptr<Gadget>>>::~map(&this->player_vehicle_map_);
  std::map<unsigned int,SceneVehicle>::~map(&this->vehicle_map_);
  std::map<unsigned int,std::pair<std::shared_ptr<DieCreatureRecord>,unsigned long>>::~map(&this->die_creature_record_map_);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::~unordered_map(&this->play_team_entity_map_);
  std::unordered_set<unsigned int>::~unordered_set(&this->closed_climate_area_set_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->climate_area_map_);
  std::unordered_set<unsigned int>::~unordered_set(&this->closed_weather_area_set_);
  std::unordered_map<unsigned int,std::shared_ptr<WeatherArea>>::~unordered_map(&this->weather_area_map_);
  std::unordered_set<unsigned int>::~unordered_set(&this->interacted_to_be_explored_dungeon_entry_config_id_set_);
  std::map<unsigned int,unsigned long>::~map(&this->last_force_refresh_authority_time_map_);
  std::unordered_set<unsigned int>::~unordered_set(&this->group_limit_point_set_);
  std::unordered_map<std::type_index,std::weak_ptr<Observer>>::~unordered_map(&this->observer_map_);
  std::shared_ptr<UnixTimerMgr>::~shared_ptr(&this->unix_timer_mgr_ptr_);
  std::shared_ptr<SceneTimerMgr>::~shared_ptr(&this->scene_timer_mgr_ptr_);
  std::shared_ptr<UnixTimer>::~shared_ptr(&this->timer_ptr_);
  std::unordered_map<unsigned int,std::shared_ptr<WindSeedSpawner>>::~unordered_map(&this->wind_seed_spawner_map_);
  std::shared_ptr<MPLevelEntity>::~shared_ptr(&this->mp_level_entity_ptr_);
  std::unordered_map<unsigned int,std::unordered_map<long,unsigned int>>::~unordered_map(&this->massive_entity_obj_map_);
  std::map<unsigned int,std::shared_ptr<ScenePlayerLocation>>::~map(&this->player_location_map_);
  SceneUnlockInfo::~SceneUnlockInfo(&this->unlock_info_);
  std::map<unsigned int,std::unordered_set<unsigned int>>::~map(&this->peer_authority_entity_map_);
  std::map<unsigned int,ScenePlayerPeerInfo>::~map(&this->peer_map_);
  std::map<unsigned int,std::shared_ptr<PlayerViewMgr>>::~map(&this->player_view_mgr_map_);
  std::map<unsigned int,std::weak_ptr<Player>>::~map(&this->player_map_);
  std::unordered_map<unsigned int,std::shared_ptr<Entity>>::~unordered_map(&this->dead_entity_map_);
  std::unordered_map<unsigned int,std::shared_ptr<Entity>>::~unordered_map(&this->gridless_entity_map_);
  std::unordered_map<unsigned int,std::shared_ptr<Entity>>::~unordered_map(&this->entity_map_);
  std::weak_ptr<Player>::~weak_ptr(&this->host_player_wtr_);
  std::weak_ptr<Home>::~weak_ptr(&this->home_wtr_);
  std::weak_ptr<Player>::~weak_ptr(&this->player_wtr_);
  std::string::~string(&this->scene_transaction_);
  std::shared_ptr<SceneEntityMovesInfo>::~shared_ptr(&this->pending_moves_info_ptr_);
  std::shared_ptr<SceneEntity>::~shared_ptr(&this->scene_entity_ptr_);
  EcsBase<Scene,SceneCompBase,12u>::~EcsBase(&this->EcsBase<Scene,SceneCompBase,12>);
  std::enable_shared_from_this<Scene>::~enable_shared_from_this(&this->std::enable_shared_from_this<Scene>);
};

// Line 167: range 00000000131D444A-00000000131D44A3
uint32_t __cdecl Scene::getNextMassiveEntityOpIndex(Scene *const this)
{
  uint32_t result; // eax

  if ( *(_BYTE *)(((unsigned __int64)&this->massive_entity_op_idx_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->massive_entity_op_idx_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->massive_entity_op_idx_);
  }
  result = this->massive_entity_op_idx_;
  this->massive_entity_op_idx_ = result + 1;
  return result;
};

// Line 170: range 0000000015D32AF4-0000000015D331A0
// local variable allocation has failed, the output may be wrong!
void __cdecl Scene::Scene(Scene *const this, uint32_t scene_id)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  bool v4; // dl

  std::enable_shared_from_this<Scene>::enable_shared_from_this(&this->std::enable_shared_from_this<Scene>);
  common::milog::DescribalBase::DescribalBase(this);
  EcsBase<Scene,SceneCompBase,12u>::EcsBase(&this->EcsBase<Scene,SceneCompBase,12>);
  v2 = (int (**)(...))(&`vtable for'Scene + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&scene_id);
  this->_vptr_DescribalBase = v2;
  if ( *(char *)(((unsigned __int64)&this->is_inited_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_inited_, *(_QWORD *)&scene_id, &this->is_inited_);
  this->is_inited_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->begin_time_ms_, *(_QWORD *)&scene_id);
  this->begin_time_ms_ = 0LL;
  std::shared_ptr<SceneEntity>::shared_ptr(&this->scene_entity_ptr_, 0LL);
  std::shared_ptr<SceneEntityMovesInfo>::shared_ptr(&this->pending_moves_info_ptr_, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id_, 0LL, (_BYTE)this + 120);
  }
  this->scene_id_ = scene_id;
  std::string::basic_string(&this->scene_transaction_);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_discrete_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->scene_discrete_time_ms_, 0LL);
  this->scene_discrete_time_ms_ = 0LL;
  if ( *(char *)(((unsigned __int64)&this->is_scene_timer_mgr_paused_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_scene_timer_mgr_paused_, 0LL, &this->is_scene_timer_mgr_paused_);
  this->is_scene_timer_mgr_paused_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_discrete_last_update_time_ms >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->scene_discrete_last_update_time_ms, 0LL);
  this->scene_discrete_last_update_time_ms = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->owner_leave_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->owner_leave_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->owner_leave_time_, 0LL, (_BYTE)this - 72);
  }
  this->owner_leave_time_ = 0;
  v3 = (((_BYTE)this - 68) & 7u) + 3;
  v4 = *(_BYTE *)(((unsigned __int64)&this->next_entity_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->next_entity_index_ >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->next_entity_index_, v3, v4);
  this->next_entity_index_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->owner_uid_, v3, (_BYTE)this - 64);
  }
  this->owner_uid_ = 0;
  std::weak_ptr<Player>::weak_ptr(&this->player_wtr_);
  std::weak_ptr<Home>::weak_ptr(&this->home_wtr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->home_module_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->home_module_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->home_module_id_, v3, (_BYTE)this - 24);
  }
  this->home_module_id_ = 0;
  std::weak_ptr<Player>::weak_ptr(&this->host_player_wtr_);
  std::unordered_map<unsigned int,std::shared_ptr<Entity>>::unordered_map(&this->entity_map_);
  std::unordered_map<unsigned int,std::shared_ptr<Entity>>::unordered_map(&this->gridless_entity_map_);
  std::unordered_map<unsigned int,std::shared_ptr<Entity>>::unordered_map(&this->dead_entity_map_);
  std::map<unsigned int,std::weak_ptr<Player>>::map(&this->player_map_);
  std::map<unsigned int,std::shared_ptr<PlayerViewMgr>>::map(&this->player_view_mgr_map_);
  std::map<unsigned int,ScenePlayerPeerInfo>::map(&this->peer_map_);
  std::map<unsigned int,std::unordered_set<unsigned int>>::map(&this->peer_authority_entity_map_);
  SceneUnlockInfo::SceneUnlockInfo(&this->unlock_info_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_check_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_check_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_check_time_, v3, (_BYTE)this + 40);
  }
  this->last_check_time_ = 0;
  std::map<unsigned int,std::shared_ptr<ScenePlayerLocation>>::map(&this->player_location_map_);
  ScenePlayerLocation::ScenePlayerLocation(&this->owner_player_location_);
  std::unordered_map<unsigned int,std::unordered_map<long,unsigned int>>::unordered_map(&this->massive_entity_obj_map_);
  std::shared_ptr<MPLevelEntity>::shared_ptr(&this->mp_level_entity_ptr_, 0LL);
  std::unordered_map<unsigned int,std::shared_ptr<WindSeedSpawner>>::unordered_map(&this->wind_seed_spawner_map_);
  std::shared_ptr<UnixTimer>::shared_ptr(&this->timer_ptr_);
  std::shared_ptr<SceneTimerMgr>::shared_ptr(&this->scene_timer_mgr_ptr_);
  std::shared_ptr<UnixTimerMgr>::shared_ptr(&this->unix_timer_mgr_ptr_);
  std::mutex::mutex(&this->entity_id_mu_);
  std::unordered_map<std::type_index,std::weak_ptr<Observer>>::unordered_map(&this->observer_map_);
  std::unordered_set<unsigned int>::unordered_set(&this->group_limit_point_set_);
  std::map<unsigned int,unsigned long>::map(&this->last_force_refresh_authority_time_map_);
  std::unordered_set<unsigned int>::unordered_set(&this->interacted_to_be_explored_dungeon_entry_config_id_set_);
  std::unordered_map<unsigned int,std::shared_ptr<WeatherArea>>::unordered_map(&this->weather_area_map_);
  std::unordered_set<unsigned int>::unordered_set(&this->closed_weather_area_set_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->climate_area_map_);
  std::unordered_set<unsigned int>::unordered_set(&this->closed_climate_area_set_);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::unordered_map(&this->play_team_entity_map_);
  std::map<unsigned int,std::pair<std::shared_ptr<DieCreatureRecord>,unsigned long>>::map(&this->die_creature_record_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->massive_entity_op_idx_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->massive_entity_op_idx_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->massive_entity_op_idx_, 0LL, (_BYTE)this - 120);
  }
  this->massive_entity_op_idx_ = 0;
  std::map<unsigned int,SceneVehicle>::map(&this->vehicle_map_);
  std::map<unsigned int,std::map<unsigned int,std::weak_ptr<Gadget>>>::map(&this->player_vehicle_map_);
  std::unordered_map<unsigned int,proto::SceneTagOpType>::unordered_map(&this->scene_tag_op_map_);
  if ( *(char *)(((unsigned __int64)&this->is_started_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_started_, 0LL, &this->is_started_);
  this->is_started_ = 0;
  std::map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>>::map(&this->ongoing_challenge_id_2_pair_set_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_clear_challenge_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_clear_challenge_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_clear_challenge_time_, 0LL, (_BYTE)this + 96);
  }
  this->last_clear_challenge_time_ = 0;
};

// Line 207: range 00000000155B69B0-00000000155B69DF
SceneTimerMgrPtr __cdecl Scene::getSceneTimerMgr(Scene *const this)
{
  const std::shared_ptr<SceneTimerMgr> *v1; // rsi
  SceneTimerMgrPtr result; // rax

  std::shared_ptr<SceneTimerMgr>::shared_ptr((std::shared_ptr<SceneTimerMgr> *const)this, v1 + 82);
  result._M_ptr = (std::__shared_ptr<SceneTimerMgr,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 209: range 00000000155B69E0-00000000155B6A0F
UnixTimerMgrPtr __cdecl Scene::getUnixTimerMgr(Scene *const this)
{
  const std::shared_ptr<UnixTimerMgr> *v1; // rsi
  UnixTimerMgrPtr result; // rax

  std::shared_ptr<UnixTimerMgr>::shared_ptr((std::shared_ptr<UnixTimerMgr> *const)this, v1 + 83);
  result._M_ptr = (std::__shared_ptr<UnixTimerMgr,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 218: range 00000000131D44E0-00000000131D4527
uint32_t __cdecl Scene::getSceneId(const Scene *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->scene_id_);
  }
  return this->scene_id_;
};

// Line 219: range 000000001720D6FC-000000001720D72B
std::string *__cdecl Scene::getSceneTransaction[abi:cxx11](std::string *retstr, const Scene *const this)
{
  std::string::basic_string(retstr, &this->scene_transaction_);
  return retstr;
};

// Line 222: range 00000000131D4528-00000000131D4579
PlayerPtr __cdecl Scene::getOwnPlayer(const Scene *const this)
{
  __int64 v1; // rsi
  PlayerPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)this);
  result._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 226: range 00000000131D45B6-00000000131D4607
HomePtr __cdecl Scene::getOwnHome(const Scene *const this)
{
  __int64 v1; // rsi
  HomePtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = std::weak_ptr<Home>::lock((const std::weak_ptr<Home> *const)this);
  result._M_ptr = (std::__shared_ptr<Home,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 227: range 0000000014616D2A-0000000014616D76
uint32_t __cdecl Scene::getOwnHomeModuleId(const Scene *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->home_module_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->home_module_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->home_module_id_);
  }
  return this->home_module_id_;
};

// Line 230: range 00000000131D4608-00000000131D4654
uint32_t __cdecl Scene::getOwnerUid(const Scene *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->owner_uid_);
  }
  return this->owner_uid_;
};

// Line 232: range 0000000015A1ABB4-0000000015A1ABDA
WorldPtr __cdecl Scene::getOwnWorld(const Scene *const this)
{
  WorldPtr result; // rax

  std::shared_ptr<World>::shared_ptr((std::shared_ptr<World> *const)this, 0LL);
  result._M_ptr = (std::__shared_ptr<World,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 233: range 00000000131D46CE-00000000131D46F4
PlayerWorldPtr __cdecl Scene::getOwnPlayerWorld(const Scene *const this)
{
  PlayerWorldPtr result; // rax

  std::shared_ptr<PlayerWorld>::shared_ptr((std::shared_ptr<PlayerWorld> *const)this, 0LL);
  result._M_ptr = (std::__shared_ptr<PlayerWorld,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 234: range 00000000131D4732-00000000131D4758
HomeWorldPtr __cdecl Scene::getOwnHomeWorld(const Scene *const this)
{
  HomeWorldPtr result; // rax

  std::shared_ptr<HomeWorld>::shared_ptr((std::shared_ptr<HomeWorld> *const)this, 0LL);
  result._M_ptr = (std::__shared_ptr<HomeWorld,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 237: range 00000000149ECFFC-00000000149ED04D
PlayerPtr __cdecl Scene::getHostPlayer(const Scene *const this)
{
  __int64 v1; // rsi
  PlayerPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)this);
  result._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 400: range 000000001666BBEE-000000001666BC6F
int32_t __cdecl Scene::notifyViewingPlayers(
        Scene *const this,
        Entity *entity,
        common::minet::ConstMessagePtr *p_msg_ptr,
        bool include_me)
{
  int32_t v5; // ebx
  std::shared_ptr<const google::protobuf::Message> v7; // [rsp+20h] [rbp-20h] BYREF

  std::shared_ptr<google::protobuf::Message const>::shared_ptr(&v7, p_msg_ptr);
  v5 = Scene::notifyViewingPlayersExclude(this, entity, &v7, 0, include_me);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v7);
  return v5;
};

// Line 533: range 00000000131D483A-00000000131D484C
void __cdecl Scene::onMonsterDie(Scene *const this, ChangeHpContext *context, Monster *monster)
{
  ;
};

// Line 539: range 00000000131D484E-00000000131D4862
void __cdecl Scene::onSkillEvent(Scene *const this, uint32_t skill_id, uint64_t avatar_guid, uint32_t avatar_entity_id)
{
  ;
};

// Line 542: range 00000000131D4864-00000000131D4876
void __cdecl Scene::onChangeAvatar(Scene *const this, uint64_t old_guid, uint64_t new_guid)
{
  ;
};

// Line 544: range 00000000131D4878-00000000131D4889
void __cdecl Scene::onAvatarHeal(Scene *const this, uint32_t add_hp, Avatar *avatar)
{
  ;
};

// Line 547: range 00000000131D488A-00000000131D4897
void __cdecl Scene::onQuestFinish(Scene *const this, uint32_t quest_id)
{
  ;
};

// Line 553: range 00000000131D4898-00000000131D48A8
void __cdecl Scene::onGagdetStateChange(Scene *const this, uint32_t gadget_id, uint32_t state)
{
  ;
};

// Line 556: range 00000000131D48AA-00000000131D48BB
void __cdecl Scene::onMonsterDelWeapon(Scene *const this, Monster *monster, uint32_t weapon_gadget_id)
{
  ;
};

// Line 559: range 00000000131D48BC-00000000131D48CD
void __cdecl Scene::onMonsterTriggerElementReaction(
        Scene *const this,
        CreaturePtr *p_attacker_ptr,
        data::ElementReactionType reaction_type)
{
  ;
};

// Line 562: range 00000000131D48CE-00000000131D48DC
uint32_t __cdecl Scene::getReviseLevel(const Scene *const this)
{
  return 0;
};

// Line 595: range 00000000131D4910-00000000131D4923
const std::unordered_map<unsigned int,std::shared_ptr<WeatherArea>> *__cdecl Scene::getWeatherAreaMap(
        const Scene *const this)
{
  return &this->weather_area_map_;
};

// Line 595: range 00000000131D48DE-00000000131D490F
uint32_t __cdecl Scene::getSceneTimeSeconds(Scene *const this)
{
  return Scene::getSceneTimeMs(this) / 0x3E8;
};

// Line 598: range 0000000013842972-0000000013842985
const std::map<unsigned int,std::weak_ptr<Player>> *__cdecl Scene::getAllPlayerMap(Scene *const this)
{
  return &this->player_map_;
};

// Line 598: range 0000000013842932-0000000013842971
uint64_t __cdecl Scene::getSceneDiscreteTimeMs(Scene *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_discrete_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->scene_discrete_time_ms_;
};

// Line 634: range 00000000131D4924-00000000131D49F5
void __fastcall Scene::closeWeatherArea(Scene *const this, uint32_t weather_area_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 19 weather_area_id:634";
  *(_QWORD *)(v2 + 16) = Scene::closeWeatherArea;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = weather_area_id;
  std::unordered_set<unsigned int>::insert(
    &this->closed_weather_area_set_,
    (const std::unordered_set<unsigned int>::value_type *)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 636: range 00000000131D49F6-00000000131D4AC7
bool __fastcall Scene::isWeatherAreaClosed(const Scene *const this, uint32_t weather_area_id)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 19 weather_area_id:636";
  *(_QWORD *)(v2 + 16) = Scene::isWeatherAreaClosed;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = weather_area_id;
  result = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
             &this->closed_weather_area_set_,
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

// Line 638: range 00000000131D4AC8-00000000131D4ADB
const std::unordered_set<unsigned int> *__cdecl Scene::getClosedWeatherArea(const Scene *const this)
{
  return &this->closed_weather_area_set_;
};

// Line 705: range 0000000017D6803E-0000000017D680A0
// local variable allocation has failed, the output may be wrong!
void __cdecl Scene::setNextEntityIndexByGm(Scene *const this, uint32_t index)
{
  uint32_t v2; // ecx
  char v3; // dl
  bool v4; // dl

  v2 = index & 0xFFFFFF;
  v3 = *(_BYTE *)(((unsigned __int64)&this->next_entity_index_ >> 3) + 0x7FFF8000);
  LOBYTE(index) = v3 != 0;
  v4 = v3 != 0 && (char)((((_BYTE)this - 68) & 7) + 3) >= v3;
  if ( v4 )
    __asan_report_store4(&this->next_entity_index_, *(_QWORD *)&index, v4);
  this->next_entity_index_ = v2;
};

// Line 707: range 00000000131D4ADC-00000000131D4AEA
int32_t __cdecl Scene::checkIsValid(Scene *const this)
{
  return 0;
};

// Line 722: range 00000000131D4B28-00000000131D4B70
SceneBlockGroupComp *__cdecl Scene::getBlockGroupComp(Scene *const this)
{
  SceneBlockGroupComp *v1; // rbx
  std::shared_ptr<SceneBlockGroupComp> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  EcsBase<Scene,SceneCompBase,12u>::findComp<SceneBlockGroupComp>((const EcsBase<Scene,SceneCompBase,12> *const)v3);
  v1 = std::__shared_ptr_access<SceneBlockGroupComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<SceneBlockGroupComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3);
  std::shared_ptr<SceneBlockGroupComp>::~shared_ptr(v3);
  return v1;
};

// Line 723: range 0000000013EB9BE6-0000000013EB9C2E
SceneAreaComp *__cdecl Scene::getAreaComp(Scene *const this)
{
  std::__shared_ptr_access<SceneAreaComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rbx
  std::shared_ptr<SceneAreaComp> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  EcsBase<Scene,SceneCompBase,12u>::findComp<SceneAreaComp>((const EcsBase<Scene,SceneCompBase,12> *const)v3);
  v1 = std::__shared_ptr_access<SceneAreaComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<SceneAreaComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3);
  std::shared_ptr<SceneAreaComp>::~shared_ptr(v3);
  return v1;
};

// Line 724: range 00000000149ED08A-00000000149ED0D2
SceneMiscComp *__cdecl Scene::getMiscComp(Scene *const this)
{
  std::__shared_ptr_access<SceneMiscComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rbx
  std::shared_ptr<SceneMiscComp> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  EcsBase<Scene,SceneCompBase,12u>::findComp<SceneMiscComp>((const EcsBase<Scene,SceneCompBase,12> *const)v3);
  v1 = std::__shared_ptr_access<SceneMiscComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<SceneMiscComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3);
  std::shared_ptr<SceneMiscComp>::~shared_ptr(v3);
  return v1;
};

// Line 725: range 0000000015A1AC18-0000000015A1AC60
SceneSightComp *__cdecl Scene::getSightComp(Scene *const this)
{
  SceneSightComp *v1; // rbx
  std::shared_ptr<SceneSightComp> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  EcsBase<Scene,SceneCompBase,12u>::findComp<SceneSightComp>((const EcsBase<Scene,SceneCompBase,12> *const)v3);
  v1 = std::__shared_ptr_access<SceneSightComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<SceneSightComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3);
  std::shared_ptr<SceneSightComp>::~shared_ptr(v3);
  return v1;
};

// Line 726: range 00000000138429C2-0000000013842A0A
SceneMultistagePlayComp *__cdecl Scene::getMultistagePlayComp(Scene *const this)
{
  std::__shared_ptr_access<SceneMultistagePlayComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rbx
  std::shared_ptr<SceneMultistagePlayComp> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  EcsBase<Scene,SceneCompBase,12u>::findComp<SceneMultistagePlayComp>((const EcsBase<Scene,SceneCompBase,12> *const)v3);
  v1 = std::__shared_ptr_access<SceneMultistagePlayComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<SceneMultistagePlayComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3);
  std::shared_ptr<SceneMultistagePlayComp>::~shared_ptr(v3);
  return v1;
};

// Line 727: range 00000000131D4BAE-00000000131D4BF6
SceneGalleryComp *__cdecl Scene::getGalleryComp(Scene *const this)
{
  std::__shared_ptr_access<SceneGalleryComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rbx
  std::shared_ptr<SceneGalleryComp> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  EcsBase<Scene,SceneCompBase,12u>::findComp<SceneGalleryComp>((const EcsBase<Scene,SceneCompBase,12> *const)v3);
  v1 = std::__shared_ptr_access<SceneGalleryComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<SceneGalleryComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3);
  std::shared_ptr<SceneGalleryComp>::~shared_ptr(v3);
  return v1;
};

// Line 728: range 0000000013EB9C6C-0000000013EB9CB4
SceneTransferGuardComp *__cdecl Scene::getTransferGuardComp(Scene *const this)
{
  std::__shared_ptr_access<SceneTransferGuardComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rbx
  std::shared_ptr<SceneTransferGuardComp> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  EcsBase<Scene,SceneCompBase,12u>::findComp<SceneTransferGuardComp>((const EcsBase<Scene,SceneCompBase,12> *const)v3);
  v1 = std::__shared_ptr_access<SceneTransferGuardComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<SceneTransferGuardComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3);
  std::shared_ptr<SceneTransferGuardComp>::~shared_ptr(v3);
  return v1;
};

// Line 751: range 0000000015A1AC62-0000000015A1AC81
int32_t __cdecl Scene::getEntityCount(Scene *const this)
{
  return std::unordered_map<unsigned int,std::shared_ptr<Entity>>::size(&this->entity_map_);
};

// Line 801: range 00000000131D4BF8-00000000131D4C05
void __cdecl Scene::onPlayerPostEnterScene(Scene *const this, uint32_t uid)
{
  ;
};

// Line 857: range 0000000015D331A2-0000000015D331EA
bool __cdecl Scene::getIsInited(const Scene *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_inited_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_inited_);
  return this->is_inited_;
};

// Line 858: range 000000001720D72C-000000001720D766
uint64_t __cdecl Scene::getBeginTime(const Scene *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->begin_time_ms_;
};

// Line 859: range 0000000013842B84-0000000013842BB0
SceneEntityPtr __cdecl Scene::getSceneEntity(const Scene *const this)
{
  __int64 v1; // rsi
  SceneEntityPtr result; // rax

  std::shared_ptr<SceneEntity>::shared_ptr(
    (std::shared_ptr<SceneEntity> *const)this,
    (const std::shared_ptr<SceneEntity> *)(v1 + 88));
  result._M_ptr = (std::__shared_ptr<SceneEntity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 860: range 000000001666BD14-000000001666BD40
SceneEntityMovesInfoPtr __cdecl Scene::getPendingMovesInfo(const Scene *const this)
{
  __int64 v1; // rsi
  SceneEntityMovesInfoPtr result; // rax

  std::shared_ptr<SceneEntityMovesInfo>::shared_ptr(
    (std::shared_ptr<SceneEntityMovesInfo> *const)this,
    (const std::shared_ptr<SceneEntityMovesInfo> *)(v1 + 104));
  result._M_ptr = (std::__shared_ptr<SceneEntityMovesInfo,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 930: range 0000000013EB9CB6-0000000013EB9D03
bool __cdecl Scene::getIsStarted(const Scene *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_started_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_started_);
  return this->is_started_;
};
