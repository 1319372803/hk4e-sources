// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/robot/src/scene/entity.h

// Line 32: range 00000000008D6AEC-00000000008D6CE2
void __cdecl Entity::Entity(Entity *const this)
{
  int (**v1)(...); // rdx

  std::enable_shared_from_this<Entity>::enable_shared_from_this(&this->std::enable_shared_from_this<Entity>);
  v1 = (int (**)(...))(&`vtable for'Entity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_Entity = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->entity_id_);
  }
  this->entity_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->group_id_);
  }
  this->group_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->config_id_);
  }
  this->config_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ptr_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->scene_ptr_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->motion_state_);
  }
  this->motion_state_ = MOTION_NONE;
  std::string::basic_string(&this->name_);
  Vector3::Vector3(&this->pos_, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->speed_, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->rot_, 0.0, 0.0, 0.0);
  std::map<data::PropType,proto::PropValue>::map(&this->prop_map_);
};

// Line 35: range 00000000004D6EB2-00000000004D6EDC
void __cdecl Entity::~Entity(Entity *const this)
{
  Entity::~Entity(this);
  operator delete(this, 0xB0uLL);
};

// Line 35: range 00000000004D6E40-00000000004D6EB1
void __cdecl Entity::~Entity(Entity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'Entity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_Entity = v1;
  std::map<data::PropType,proto::PropValue>::~map(&this->prop_map_);
  std::string::~string(&this->name_);
  std::enable_shared_from_this<Entity>::~enable_shared_from_this(&this->std::enable_shared_from_this<Entity>);
};

// Line 37: range 00000000004D6EDE-00000000004D6EEC
proto::ProtEntityType __cdecl Entity::getEntityType(const Entity *const this)
{
  return 0;
};

// Line 43: range 00000000004D6EEE-00000000004D6EFF
const Vector3 *__cdecl Entity::getPos(const Entity *const this)
{
  return &this->pos_;
};

// Line 44: range 00000000004D6F00-00000000004D6FFA
void __cdecl Entity::setPos(Entity *const this, const Vector3 *pos)
{
  if ( *(char *)(((unsigned __int64)&this->pos_ >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->pos_.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 99) & 7) >= *(_BYTE *)((((unsigned __int64)&this->pos_.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->pos_, 12LL);
  }
  if ( ((unsigned __int8)pos & 7) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(pos, 12LL);
  }
  this->pos_ = *pos;
};

// Line 46: range 00000000004D6FFC-00000000004D700D
const Vector3 *__cdecl Entity::getRot(const Entity *const this)
{
  return &this->rot_;
};

// Line 50: range 00000000004D700E-00000000004D710F
void __cdecl Entity::setSpeed(Entity *const this, const Vector3 *speed)
{
  if ( (((unsigned __int8)this + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&this->speed_ >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->speed_ >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->speed_.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 111) & 7) >= *(_BYTE *)((((unsigned __int64)&this->speed_.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->speed_, 12LL);
  }
  if ( ((unsigned __int8)speed & 7) >= *(_BYTE *)(((unsigned __int64)speed >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)speed >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&speed->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)speed + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&speed->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(speed, 12LL);
  }
  this->speed_ = *speed;
};

// Line 62: range 00000000004D7110-00000000004D7157
uint32_t __cdecl Entity::getEntityId(const Entity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->entity_id_);
  }
  return this->entity_id_;
};

// Line 62: range 00000000004D7158-00000000004D71A6
void __cdecl Entity::setEntityId(Entity *const this, uint32_t entity_id__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->entity_id_);
  }
  this->entity_id_ = entity_id__out;
};

// Line 63: range 00000000004D71A8-00000000004D71F7
uint32_t __cdecl Entity::getGroupId(const Entity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->group_id_);
  }
  return this->group_id_;
};

// Line 64: range 00000000004D71F8-00000000004D723F
uint32_t __cdecl Entity::getConfigId(const Entity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->config_id_);
  }
  return this->config_id_;
};

// Line 65: range 00000000004D7240-00000000004D7283
void __cdecl Entity::setScene(Entity *const this, Scene *scene_ptr__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ptr_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->scene_ptr_ = scene_ptr__out;
};

// Line 66: range 00000000004D7284-00000000004D72D2
void __cdecl Entity::setMotionState(Entity *const this, proto::MotionState motion_state__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->motion_state_);
  }
  this->motion_state_ = motion_state__out;
};
