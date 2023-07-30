// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/entity/entity.h

// Line 50: range 00000000131DB9F8-00000000131DBBD2
void __cdecl MotionContext::MotionContext(MotionContext *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->scene_time_ms = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reliable_seq >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reliable_seq >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reliable_seq);
  }
  this->reliable_seq = 0;
  if ( *(char *)(((unsigned __int64)&this->is_reliable >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_reliable);
  this->is_reliable = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->exclude_uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exclude_uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->exclude_uid);
  }
  this->exclude_uid = 0;
  if ( *(char *)(((unsigned __int64)&this->is_notify >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_notify);
  this->is_notify = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->interval_velocity >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->interval_velocity >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->interval_velocity);
  }
  this->interval_velocity = 0;
  std::vector<unsigned int>::vector(&this->sync_uid_vec);
  if ( *(char *)(((unsigned __int64)&this->is_do_move >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_do_move);
  this->is_do_move = 1;
};

// Line 50: range 00000000131DBBD4-00000000131DBBF2
void __cdecl MotionContext::~MotionContext(MotionContext *const this)
{
  std::vector<unsigned int>::~vector(&this->sync_uid_vec);
};

// Line 65: range 0000000014613ADC-0000000014613C06
void __cdecl SceneEntityAiInfo::SceneEntityAiInfo(SceneEntityAiInfo *const this)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this);
  this->is_ai_open = 1;
  Vector3::Vector3(&this->born_pos, 0.0, 0.0, 0.0);
  std::map<unsigned int,unsigned int>::map(&this->skill_cd_map);
  std::map<unsigned int,unsigned int>::map(&this->skill_group_cd_map);
  std::shared_ptr<proto::ServantInfo>::shared_ptr(&this->servant_info_ptr);
  google::protobuf::Map<unsigned int,unsigned int>::Map(&this->ai_threat_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_tactic >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_tactic >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_tactic);
  }
  this->cur_tactic = 0;
};

// Line 65: range 0000000014613C08-0000000014613C56
void __cdecl SceneEntityAiInfo::~SceneEntityAiInfo(SceneEntityAiInfo *const this)
{
  google::protobuf::Map<unsigned int,unsigned int>::~Map(&this->ai_threat_map);
  std::shared_ptr<proto::ServantInfo>::~shared_ptr(&this->servant_info_ptr);
  std::map<unsigned int,unsigned int>::~map(&this->skill_group_cd_map);
  std::map<unsigned int,unsigned int>::~map(&this->skill_cd_map);
};

// Line 74: range 00000000131F41AA-00000000131F430E
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<Creature> __cdecl Entity::findEntityInSameScene<Creature>(const Entity *const this, uint32_t entity_id)
{
  uint32_t v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rax
  std::shared_ptr<Creature> result; // rax
  uint32_t entity_ida; // [rsp+Ch] [rbp-74h]
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  entity_ida = v2;
  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 entity_ptr:413";
  *(_QWORD *)(v3 + 16) = Entity::findEntityInSameScene<Creature>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)((*(_QWORD *)&entity_id >> 3) + 0x7FFF8000LL) )
    __asan_report_load8();
  v6 = **(_QWORD **)&entity_id + 120LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, uint32_t, _QWORD))v6)(v3 + 32, entity_id, entity_ida);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  std::dynamic_pointer_cast<Creature,Entity>((const std::shared_ptr<Entity> *)this);
  std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 32));
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<Creature,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 90: range 00000000131C685A-00000000131C6937
void __cdecl VisionContext::VisionContext(VisionContext *const this, proto::VisionType type_)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->type = type_;
  if ( *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->param);
  }
  this->param = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->exclude_uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exclude_uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->exclude_uid);
  }
  this->exclude_uid = 0;
};

// Line 106: range 00000000131EAE78-00000000131EAEBA
void __cdecl Transform::Transform(Transform *const this)
{
  Vector3::Vector3(&this->position, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->rotation, 0.0, 0.0, 0.0);
};

// Line 114: range 0000000014613CC8-0000000014613D3F
void __cdecl EntityViewMgr::EntityViewMgr(EntityViewMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->group_vision_type_ = 0;
  std::map<unsigned int,std::weak_ptr<Player>>::map(&this->viewing_player_map_);
  std::shared_ptr<EntitySightGroup>::shared_ptr(&this->sight_group_ptr_);
  std::shared_ptr<EntitySightGroup>::shared_ptr(&this->preinstall_sight_group_ptr_);
};

// Line 114: range 0000000014613D40-0000000014613D7E
void __cdecl EntityViewMgr::~EntityViewMgr(EntityViewMgr *const this)
{
  std::shared_ptr<EntitySightGroup>::~shared_ptr(&this->preinstall_sight_group_ptr_);
  std::shared_ptr<EntitySightGroup>::~shared_ptr(&this->sight_group_ptr_);
  std::map<unsigned int,std::weak_ptr<Player>>::~map(&this->viewing_player_map_);
};

// Line 131: range 0000000014613D80-0000000014614422
void __cdecl Entity::Entity(Entity *const this)
{
  int (**v1)(...); // rdx

  std::enable_shared_from_this<Entity>::enable_shared_from_this(&this->std::enable_shared_from_this<Entity>);
  common::milog::DescribalBase::DescribalBase(this);
  v1 = (int (**)(...))(&`vtable for'Entity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  ZN18EntityAnimatorCompCI214EntityCompBaseER6Entity(&this->animator_comp_, this);
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->entity_id_);
  }
  this->entity_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_id_);
  }
  this->config_id_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_client_created_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_client_created_);
  this->is_client_created_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_client_visible_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 9) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_client_visible_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_client_visible_);
  }
  this->is_client_visible_ = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->only_vision_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->only_vision_uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->only_vision_uid_);
  }
  this->only_vision_uid_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_execute_trigger_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_execute_trigger_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_execute_trigger_time_);
  }
  this->last_execute_trigger_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->vision_level_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->vision_level_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->vision_level_type_);
  }
  this->vision_level_type_ = VISION_LEVEL_NORMAL;
  if ( *(_BYTE *)(((unsigned __int64)&this->dead_clear_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dead_clear_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dead_clear_time_);
  }
  this->dead_clear_time_ = 0;
  std::string::basic_string(&this->name_);
  std::weak_ptr<Scene>::weak_ptr(&this->scene_wtr_);
  std::weak_ptr<Group>::weak_ptr(&this->group_wtr_);
  if ( *(char *)(((unsigned __int64)&this->is_on_grid_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_on_grid_);
  this->is_on_grid_ = 0;
  Vector3::Vector3(&this->position_, 0.0, 0.0, 0.0);
  if ( *(_BYTE *)(((unsigned __int64)&this->room_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->room_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->room_id_);
  }
  this->room_id_ = 0;
  Coordinate::Coordinate(&this->coord_, 0, 0);
  Vector3::Vector3(&this->rotation_, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->speed_, 0.0, 0.0, 0.0);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_speed_length_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_speed_length_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_speed_length_);
  }
  this->max_speed_length_ = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->motion_state_);
  }
  this->motion_state_ = MOTION_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_motion_state_change_time_ms_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_motion_state_change_time_ms_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_motion_state_change_time_ms_);
  }
  this->last_motion_state_change_time_ms_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_move_reliable_seq_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_move_reliable_seq_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_move_reliable_seq_);
  }
  this->last_move_reliable_seq_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_move_scene_time_ms_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_move_scene_time_ms_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_move_scene_time_ms_);
  }
  this->last_move_scene_time_ms_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_move_sent_reliable_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_move_sent_reliable_);
  this->is_move_sent_reliable_ = 0;
  SceneEntityAiInfo::SceneEntityAiInfo(&this->ai_info_);
  Vector3::Vector3(&this->born_pos_, 0.0, 0.0, 0.0);
  std::string::basic_string(&this->client_data_);
  if ( *(_BYTE *)(((unsigned __int64)&this->enter_scene_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->enter_scene_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->enter_scene_time_);
  }
  this->enter_scene_time_ = 0;
  EntityViewMgr::EntityViewMgr(&this->view_mgr_);
  Vector3::Vector3(&this->skill_anchor_position_, 0.0, 0.0, 0.0);
};

// Line 134: range 0000000014614424-00000000146144F1
void __cdecl Entity::~Entity(Entity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'Entity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  EntityViewMgr::~EntityViewMgr(&this->view_mgr_);
  std::string::~string(&this->client_data_);
  SceneEntityAiInfo::~SceneEntityAiInfo(&this->ai_info_);
  std::weak_ptr<Group>::~weak_ptr(&this->group_wtr_);
  std::weak_ptr<Scene>::~weak_ptr(&this->scene_wtr_);
  std::string::~string(&this->name_);
  EntityAnimatorComp::~EntityAnimatorComp(&this->animator_comp_);
  std::enable_shared_from_this<Entity>::~enable_shared_from_this(&this->std::enable_shared_from_this<Entity>);
};

// Line 134: range 00000000146144F2-000000001461451C
void __cdecl Entity::~Entity(Entity *const this)
{
  Entity::~Entity(this);
  operator delete(this, 0x2F0uLL);
};

// Line 140: range 0000000014F74114-0000000014F74122
data::EntityType __cdecl Entity::getClientEntityType(const Entity *const this)
{
  return 0;
};

// Line 151: range 00000000138413C0-00000000138413D6
int32_t __cdecl Entity::onBeforeEnterScene(Entity *const this, Scene *scene, const VisionContext *context)
{
  return 0;
};

// Line 154: range 00000000131C6974-00000000131C69C5
ScenePtr __cdecl Entity::getScene(const Entity *const this)
{
  ScenePtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::weak_ptr<Scene>::lock((const std::weak_ptr<Scene> *const)this);
  result._M_ptr = (std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 169: range 00000000131C6A02-00000000131C6A53
GroupPtr __cdecl Entity::getGroup(const Entity *const this)
{
  GroupPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::weak_ptr<Group>::lock((const std::weak_ptr<Group> *const)this);
  result._M_ptr = (std::__shared_ptr<Group,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 178: range 00000000131C6A54-00000000131C6A67
const Vector3 *__cdecl Entity::getPosition(const Entity *const this)
{
  return &this->position_;
};

// Line 179: range 00000000138413D8-00000000138414E0
void __cdecl Entity::setPosition(Entity *const this, const Vector3 *pos)
{
  if ( (((unsigned __int8)this + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&this->position_ >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->position_ >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->position_.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 111) & 7) >= *(_BYTE *)((((unsigned __int64)&this->position_.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->position_, 12LL);
  }
  if ( ((unsigned __int8)pos & 7) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(pos, 12LL);
  }
  this->position_ = *pos;
};

// Line 181: range 00000000138414E2-000000001384152E
uint32_t __cdecl Entity::getRoomId(const Entity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->room_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->room_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->room_id_);
  }
  return this->room_id_;
};

// Line 182: range 0000000015D3053A-0000000015D3058C
void __cdecl Entity::setRoomId(Entity *const this, uint32_t room_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->room_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->room_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->room_id_);
  }
  this->room_id_ = room_id;
};

// Line 186: range 0000000014F74124-0000000014F741C8
Vector3 __cdecl Entity::getBornPosition(Entity *const this)
{
  float z; // xmm1_4
  __int64 v2; // xmm0_8
  Vector3 result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( *(char *)(((unsigned __int64)&this->born_pos_ >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->born_pos_.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 91) & 7) >= *(_BYTE *)((((unsigned __int64)&this->born_pos_.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&this->born_pos_, 12LL);
  }
  z = this->born_pos_.z;
  v2 = *(_QWORD *)&this->born_pos_.x;
  result.x = *(float *)&v2;
  result.y = *((float *)&v2 + 1);
  result.z = z;
  return result;
};

// Line 189: range 00000000131C6A68-00000000131C6A7B
const Vector3 *__cdecl Entity::getRotation(const Entity *const this)
{
  return &this->rotation_;
};

// Line 189: range 00000000131C6A7C-00000000131C6B84
void __cdecl Entity::setRotation(Entity *const this, const Vector3 *rot)
{
  if ( (((unsigned __int8)this + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->rotation_ >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->rotation_ >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->rotation_.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 121) & 7) >= *(_BYTE *)((((unsigned __int64)&this->rotation_.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->rotation_, 12LL);
  }
  if ( ((unsigned __int8)rot & 7) >= *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)rot + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(rot, 12LL);
  }
  this->rotation_ = *rot;
};

// Line 196: range 0000000014F741CA-0000000014F741DD
const Vector3 *__cdecl Entity::getSkillAnchorPosition(const Entity *const this)
{
  return &this->skill_anchor_position_;
};

// Line 197: range 00000000131C6B86-00000000131C6C87
void __cdecl Entity::setSkillAnchorPosition(Entity *const this, const Vector3 *skill_anchor_pos)
{
  if ( *(char *)(((unsigned __int64)&this->skill_anchor_position_ >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->skill_anchor_position_.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 32 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->skill_anchor_position_.z + 3) >> 3)
                                                           + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->skill_anchor_position_, 12LL);
  }
  if ( ((unsigned __int8)skill_anchor_pos & 7) >= *(_BYTE *)(((unsigned __int64)skill_anchor_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)skill_anchor_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&skill_anchor_pos->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)skill_anchor_pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&skill_anchor_pos->z + 3) >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_load_n(skill_anchor_pos, 12LL);
  }
  this->skill_anchor_position_ = *skill_anchor_pos;
};

// Line 203: range 00000000146119DC-0000000014611BE4
Transform *__cdecl Entity::getTransform(Transform *retstr, Entity *const this)
{
  if ( ((unsigned __int8)retstr & 7) >= *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&retstr->position.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->position.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 12LL);
  }
  if ( (((unsigned __int8)this + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&this->position_ >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->position_ >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->position_.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 111) & 7) >= *(_BYTE *)((((unsigned __int64)&this->position_.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&this->position_, 12LL);
  }
  retstr->position = this->position_;
  if ( (((unsigned __int8)retstr + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&retstr->rotation >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&retstr->rotation >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&retstr->rotation.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->rotation.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&retstr->rotation, 12LL);
  }
  if ( (((unsigned __int8)this + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->rotation_ >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->rotation_ >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->rotation_.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 121) & 7) >= *(_BYTE *)((((unsigned __int64)&this->rotation_.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&this->rotation_, 12LL);
  }
  retstr->rotation = this->rotation_;
  return retstr;
};

// Line 219: range 0000000014611BE6-0000000014611BFF
int32_t __cdecl Entity::checkMoveSpeed(
        Entity *const this,
        proto::MotionState motion_state,
        const Vector3 *pos,
        MotionContext *motion_context)
{
  return 0;
};

// Line 221: range 0000000013841530-000000001384157C
proto::MotionState __cdecl Entity::getMotionState(Entity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->motion_state_);
  }
  return this->motion_state_;
};

// Line 232: range 00000000131C6C88-00000000131C6CD5
bool __cdecl Entity::isOnGrid(const Entity *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_on_grid_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_on_grid_);
  return this->is_on_grid_;
};

// Line 233: range 00000000131C6D2C-00000000131C6D3F
const Coordinate *__cdecl Entity::getCoordinate(const Entity *const this)
{
  return &this->coord_;
};

// Line 233: range 00000000131C6CD6-00000000131C6D2B
void __cdecl Entity::setOnGrid(Entity *const this, bool is_on_grid)
{
  if ( *(char *)(((unsigned __int64)&this->is_on_grid_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_on_grid_);
  this->is_on_grid_ = is_on_grid;
};

// Line 236: range 00000000131C6D40-00000000131C6E3F
void __cdecl Entity::setCoordinate(Entity *const this, const Coordinate *coord)
{
  if ( (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->coord_ >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->coord_ >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->coord_.y + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 123) & 7) >= *(_BYTE *)((((unsigned __int64)&this->coord_.y + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->coord_, 8LL);
  }
  if ( ((unsigned __int8)coord & 7) >= *(_BYTE *)(((unsigned __int64)coord >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)coord >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&coord->y + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)coord + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&coord->y + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(coord, 8LL);
  }
  this->coord_ = *coord;
};

// Line 240: range 00000000131C6EEA-00000000131C6EFB
EntityAnimatorComp *__cdecl Entity::getAnimatorComp(Entity *const this)
{
  return &this->animator_comp_;
};

// Line 240: range 00000000131C6E40-00000000131C6EE9
bool __cdecl Entity::isOnScene(const Entity *const this)
{
  bool v1; // r12
  std::shared_ptr<Scene> __a; // [rsp+10h] [rbp-20h] BYREF

  Entity::getScene((const Entity *const)&__a);
  if ( !std::operator!=<Scene>(&__a, 0LL) )
    goto LABEL_6;
  if ( *(char *)(((unsigned __int64)&this->is_on_grid_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_on_grid_);
  if ( this->is_on_grid_ )
    v1 = 1;
  else
LABEL_6:
    v1 = 0;
  std::shared_ptr<Scene>::~shared_ptr(&__a);
  return v1;
};

// Line 251: range 000000001666B1DC-000000001666B1EE
int32_t __cdecl Entity::onBeforeLeaveScene(Entity *const this, const VisionContext *context)
{
  return 0;
};

// Line 252: range 000000001384157E-0000000013841590
int32_t __cdecl Entity::onAfterLeaveScene(Entity *const this, const VisionContext *context)
{
  return 0;
};

// Line 255: range 0000000014611C00-0000000014611C26
PlayerPtr __cdecl Entity::getPlayer(const Entity *const this)
{
  PlayerPtr result; // rax

  std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)this, 0LL);
  result._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 259: range 0000000015D3058E-0000000015D305B4
PlayerPtr __cdecl Entity::getOwnerPlayer(const Entity *const this)
{
  PlayerPtr result; // rax

  std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)this, 0LL);
  result._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 271: range 0000000013841592-00000000138415A0
proto::InteractType __cdecl Entity::getInteractType(const Entity *const this)
{
  return 0;
};

// Line 274: range 00000000138415A2-00000000138415B8
int32_t __cdecl Entity::interactCheck(Entity *const this, Player *player, const EntityInteractParam *param)
{
  return 0;
};

// Line 277: range 00000000138415BA-00000000138415D0
int32_t __cdecl Entity::interact(Entity *const this, Player *player, const EntityInteractParam *param)
{
  return 0;
};

// Line 290: range 00000000138415D2-00000000138415E0
bool __cdecl Entity::canChangeAuthority(const Entity *const this)
{
  return 0;
};

// Line 314: range 0000000014611C28-0000000014611C36
bool __cdecl Entity::canEnterRegion(const Entity *const this)
{
  return 0;
};

// Line 320: range 0000000015D305C8-0000000015D305EA
bool __cdecl Entity::isAnyPlayerViewing(const Entity *const this)
{
  return !std::map<unsigned int,std::weak_ptr<Player>>::empty(&this->view_mgr_.viewing_player_map_);
};

// Line 320: range 0000000015D305B6-0000000015D305C7
const EntityAnimatorComp *__cdecl Entity::getAnimatorComp(const Entity *const this)
{
  return &this->animator_comp_;
};

// Line 351: range 00000000131C6EFC-00000000131C6F0F
EntityViewMgr *__cdecl Entity::getViewMgr(Entity *const this)
{
  return &this->view_mgr_;
};

// Line 356: range 00000000149EBDFC-00000000149EBE2B
EntitySightGroupPtr __cdecl Entity::getSightGroup(const Entity *const this)
{
  const std::shared_ptr<EntitySightGroup> *v1; // rsi
  EntitySightGroupPtr result; // rax

  std::shared_ptr<EntitySightGroup>::shared_ptr((std::shared_ptr<EntitySightGroup> *const)this, v1 + 44);
  result._M_ptr = (std::__shared_ptr<EntitySightGroup,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 357: range 000000001666B29C-000000001666B2C7
void __cdecl Entity::setSightGroup(Entity *const this, const EntitySightGroupPtr *sight_group_ptr)
{
  std::shared_ptr<EntitySightGroup>::operator=(&this->view_mgr_.sight_group_ptr_, sight_group_ptr);
};

// Line 360: range 0000000015A19D0A-0000000015A19D39
EntitySightGroupPtr __cdecl Entity::getPreIntallSightGroup(const Entity *const this)
{
  const std::shared_ptr<EntitySightGroup> *v1; // rsi
  EntitySightGroupPtr result; // rax

  std::shared_ptr<EntitySightGroup>::shared_ptr((std::shared_ptr<EntitySightGroup> *const)this, v1 + 45);
  result._M_ptr = (std::__shared_ptr<EntitySightGroup,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 361: range 000000001666B2C8-000000001666B2F3
void __cdecl Entity::setPreInstallSightGroup(Entity *const this, const EntitySightGroupPtr *sight_group_ptr)
{
  std::shared_ptr<EntitySightGroup>::operator=(&this->view_mgr_.preinstall_sight_group_ptr_, sight_group_ptr);
};

// Line 363: range 00000000131C6F4C-00000000131C6F98
uint32_t __cdecl Entity::getGroupVisionType(const Entity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->view_mgr_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->view_mgr_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->view_mgr_);
  }
  return this->view_mgr_.group_vision_type_;
};

// Line 367: range 0000000017208AF4-0000000017208B07
SceneEntityAiInfo *__cdecl Entity::getEntityAiInfo(Entity *const this)
{
  return &this->ai_info_;
};

// Line 377: range 00000000131C6F9A-00000000131C6FE6
uint32_t __cdecl Entity::getEntityId(const Entity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->entity_id_);
  }
  return this->entity_id_;
};

// Line 377: range 0000000014611C38-0000000014611C8B
void __cdecl Entity::setEntityId(Entity *const this, uint32_t entity_id__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->entity_id_);
  }
  this->entity_id_ = entity_id__out;
};

// Line 378: range 00000000131C6FE8-00000000131C703C
uint32_t __cdecl Entity::getConfigId(const Entity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->config_id_);
  }
  return this->config_id_;
};

// Line 378: range 000000001666B2F4-000000001666B34F
void __cdecl Entity::setConfigId(Entity *const this, uint32_t config_id__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_id_);
  }
  this->config_id_ = config_id__out;
};

// Line 378: range 000000001666B350-000000001666B3AB
void __cdecl Entity::setOnlyVisionUid(Entity *const this, uint32_t only_vision_uid__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->only_vision_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->only_vision_uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->only_vision_uid_);
  }
  this->only_vision_uid_ = only_vision_uid__out;
};

// Line 379: range 0000000013EB9538-0000000013EB9585
bool __cdecl Entity::getIsClientCreated(const Entity *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_client_created_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_client_created_);
  return this->is_client_created_;
};

// Line 379: range 0000000013EB9586-0000000013EB95DC
void __cdecl Entity::setIsClientCreated(Entity *const this, bool is_client_created__out)
{
  if ( *(char *)(((unsigned __int64)&this->is_client_created_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_client_created_);
  this->is_client_created_ = is_client_created__out;
};

// Line 380: range 0000000015A19D3A-0000000015A19D8C
bool __cdecl Entity::getIsClientVisible(const Entity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_client_visible_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 9) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_client_visible_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_client_visible_);
  }
  return this->is_client_visible_;
};

// Line 380: range 000000001762E6B0-000000001762E70B
void __cdecl Entity::setIsClientVisible(Entity *const this, bool is_client_visible__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_client_visible_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 9) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_client_visible_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_client_visible_);
  }
  this->is_client_visible_ = is_client_visible__out;
};

// Line 381: range 0000000015189CA6-0000000015189CFA
uint32_t __cdecl Entity::getOnlyVisionUid(const Entity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->only_vision_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->only_vision_uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->only_vision_uid_);
  }
  return this->only_vision_uid_;
};

// Line 382: range 0000000015A19D8E-0000000015A19DDA
uint32_t __cdecl Entity::getLastExecuteTriggerTime(const Entity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_execute_trigger_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_execute_trigger_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_execute_trigger_time_);
  }
  return this->last_execute_trigger_time_;
};

// Line 382: range 0000000015A19DDC-0000000015A19E2F
void __cdecl Entity::setLastExecuteTriggerTime(Entity *const this, uint32_t last_execute_trigger_time__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_execute_trigger_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_execute_trigger_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_execute_trigger_time_);
  }
  this->last_execute_trigger_time_ = last_execute_trigger_time__out;
};

// Line 383: range 00000000131C703E-00000000131C7092
data::VisionLevelType __cdecl Entity::getVisionLevelType(const Entity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->vision_level_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->vision_level_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->vision_level_type_);
  }
  return this->vision_level_type_;
};

// Line 383: range 000000001666B3AC-000000001666B407
void __cdecl Entity::setVisionLevelType(Entity *const this, data::VisionLevelType vision_level_type__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->vision_level_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->vision_level_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->vision_level_type_);
  }
  this->vision_level_type_ = vision_level_type__out;
};

// Line 384: range 0000000014F741DE-0000000014F7422A
uint32_t __cdecl Entity::getDeadClearTime(const Entity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->dead_clear_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dead_clear_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->dead_clear_time_);
  }
  return this->dead_clear_time_;
};

// Line 384: range 000000001762E70C-000000001762E75F
void __cdecl Entity::setDeadClearTime(Entity *const this, uint32_t dead_clear_time__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->dead_clear_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dead_clear_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dead_clear_time_);
  }
  this->dead_clear_time_ = dead_clear_time__out;
};

// Line 398: range 0000000015A19E30-0000000015A19E8B
void __cdecl Entity::setLastMoveSceneTimeMs(Entity *const this, uint32_t last_move_scene_time_ms__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_move_scene_time_ms_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_move_scene_time_ms_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_move_scene_time_ms_);
  }
  this->last_move_scene_time_ms_ = last_move_scene_time_ms__out;
};

// Line 411: range 0000000013863C34-0000000013863D98
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<Monster> __cdecl Entity::findEntityInSameScene<Monster>(const Entity *const this, uint32_t entity_id)
{
  uint32_t v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rax
  std::shared_ptr<Monster> result; // rax
  uint32_t entity_ida; // [rsp+Ch] [rbp-74h]
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  entity_ida = v2;
  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 entity_ptr:413";
  *(_QWORD *)(v3 + 16) = Entity::findEntityInSameScene<Monster>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)((*(_QWORD *)&entity_id >> 3) + 0x7FFF8000LL) )
    __asan_report_load8();
  v6 = **(_QWORD **)&entity_id + 120LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, uint32_t, _QWORD))v6)(v3 + 32, entity_id, entity_ida);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  std::dynamic_pointer_cast<Monster,Entity>((const std::shared_ptr<Entity> *)this);
  std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 32));
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<Monster,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 419: range 00000000180A9DC2-00000000180A9DDA
bool __cdecl operator!=(const Entity *left, const Entity *right)
{
  return left != right;
};

// Line 106259: range 000000001604EA32-000000001604EA5D
void __cdecl Entity::setGroup(Entity *const this, GroupPtr *p_group_ptr)
{
  std::weak_ptr<Group>::operator=<Group>(&this->group_wtr_, p_group_ptr);
};

// Line 108854: range 0000000013841394-00000000138413BF
void __cdecl Entity::setName(Entity *const this, const std::string *name)
{
  std::string::operator=(&this->name_, name);
};

// Line 114034: range 000000001666B1C4-000000001666B1DA
int32_t __cdecl Entity::onAfterEnterScene(Entity *const this, Scene *scene, const VisionContext *context)
{
  return 0;
};

// Line 117781: range 00000000180A9DAE-00000000180A9DC1
const Vector3 *__cdecl Entity::getSpeed(const Entity *const this)
{
  return &this->speed_;
};

// Line 118160: range 0000000014F74104-0000000014F74112
proto::ProtEntityType __cdecl Entity::getEntityType(const Entity *const this)
{
  return 0;
};
