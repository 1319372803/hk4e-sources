// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/ConfigMove.h

// Line 54: range 000000000ED72230-000000000ED7230F
void __cdecl data::ConfigMoveVelocityForce::ConfigMoveVelocityForce(data::ConfigMoveVelocityForce *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this, v1, this);
  this->mute_all = 0;
  v2 = ((_BYTE)this + 1) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->use_all >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->use_all >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->use_all, v2, v3);
  this->use_all = 0;
  std::vector<data::VelocityForceType>::vector(&this->include_forces);
  std::vector<data::VelocityForceType>::vector(&this->exclude_forces);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 54: range 0000000011AD075A-0000000011AD092B
void __cdecl data::ConfigMoveVelocityForce::ConfigMoveVelocityForce(
        data::ConfigMoveVelocityForce *const this,
        const data::ConfigMoveVelocityForce *a2)
{
  bool mute_all; // cl
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool use_all; // cl
  char v7; // dl
  __int64 v8; // rdx
  data::ConfigVelocityForceTypeList *p_exclude_forces; // rsi
  bool is_json_loaded; // cl
  char v11; // al
  const data::ConfigMoveVelocityForce *v12; // [rsp+0h] [rbp-20h]

  v12 = a2;
  if ( *(char *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(a2, a2, a2);
  mute_all = a2->mute_all;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(this, a2, this);
  }
  this->mute_all = mute_all;
  v4 = ((_BYTE)v12 + 1) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&v12->use_all >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&v12->use_all >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&v12->use_all, v4, v5);
  use_all = v12->use_all;
  v7 = *(_BYTE *)(((unsigned __int64)&this->use_all >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 1) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->use_all, v4, v8);
  this->use_all = use_all;
  std::vector<data::VelocityForceType>::vector(&this->include_forces, &v12->include_forces);
  p_exclude_forces = &v12->exclude_forces;
  std::vector<data::VelocityForceType>::vector(&this->exclude_forces, &v12->exclude_forces);
  if ( *(char *)(((unsigned __int64)&v12->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v12->is_json_loaded, p_exclude_forces, &v12->is_json_loaded);
  is_json_loaded = v12->is_json_loaded;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v11 < 0 )
  {
    LOBYTE(p_exclude_forces) = v11 != 0;
    __asan_report_store1(&this->is_json_loaded, p_exclude_forces, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 54: range 0000000011AD092C-0000000011AD095A
void __cdecl data::ConfigMoveVelocityForce::~ConfigMoveVelocityForce(data::ConfigMoveVelocityForce *const this)
{
  std::vector<data::VelocityForceType>::~vector(&this->exclude_forces);
  std::vector<data::VelocityForceType>::~vector(&this->include_forces);
};

// Line 80: range 0000000011DABB6A-0000000011DABD1B
void __cdecl data::ConfigMoveSmoothedSpeed::ConfigMoveSmoothedSpeed(data::ConfigMoveSmoothedSpeed *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->max_speed = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->acceleration_xz >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->acceleration_xz >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->acceleration_xz, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->acceleration_xz = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->acceleration_y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->acceleration_y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->acceleration_y, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->acceleration_y = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->zeroing_speed_xz >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->zeroing_speed_xz >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->zeroing_speed_xz, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->zeroing_speed_xz = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->zeroing_speed_y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->zeroing_speed_y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->zeroing_speed_y, (((_BYTE)this + 16) & 7u) + 3);
  }
  this->zeroing_speed_y = 0.0;
  v1 = ((_BYTE)this + 20) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 107: range 000000000ED72310-000000000ED723EC
void __cdecl data::ConfigMove::ConfigMove(data::ConfigMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  std::enable_shared_from_this<data::ConfigMove>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigMove>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  data::ConfigMoveVelocityForce::ConfigMoveVelocityForce(&this->velocity_force);
  if ( *(char *)(((unsigned __int64)&this->handle_combat_task_immediately >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->handle_combat_task_immediately, v1, &this->handle_combat_task_immediately);
  this->handle_combat_task_immediately = 0;
  v3 = ((_BYTE)this + 89) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 107: range 0000000011DA5158-0000000011DA52F0
void __cdecl data::ConfigMove::ConfigMove(data::ConfigMove *const this, const data::ConfigMove *a2)
{
  std::enable_shared_from_this<data::ConfigMove> *v2; // rsi
  int (**v3)(...); // rdx
  data::ConfigMoveVelocityForce *p_velocity_force; // rsi
  bool handle_combat_task_immediately; // cl
  char v6; // al
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool is_json_loaded; // cl
  char v10; // dl
  __int64 v11; // rdx

  v2 = &a2->std::enable_shared_from_this<data::ConfigMove>;
  std::enable_shared_from_this<data::ConfigMove>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigMove>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigMove = v3;
  p_velocity_force = &a2->velocity_force;
  data::ConfigMoveVelocityForce::ConfigMoveVelocityForce(&this->velocity_force, &a2->velocity_force);
  if ( *(char *)(((unsigned __int64)&a2->handle_combat_task_immediately >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->handle_combat_task_immediately, p_velocity_force, &a2->handle_combat_task_immediately);
  handle_combat_task_immediately = a2->handle_combat_task_immediately;
  v6 = *(_BYTE *)(((unsigned __int64)&this->handle_combat_task_immediately >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_velocity_force) = v6 != 0;
    __asan_report_store1(&this->handle_combat_task_immediately, p_velocity_force, &this->handle_combat_task_immediately);
  }
  this->handle_combat_task_immediately = handle_combat_task_immediately;
  v7 = ((_BYTE)a2 + 89) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&a2->is_json_loaded, v7, v8);
  is_json_loaded = a2->is_json_loaded;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this + 89) & 7) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->is_json_loaded, v7, v11);
  this->is_json_loaded = is_json_loaded;
};

// Line 109: range 0000000011DAE234-0000000011DAE39B
void __cdecl data::ConfigPlatformMove::ConfigPlatformMove(data::ConfigPlatformMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx

  data::ConfigMove::ConfigMove((data::ConfigMove *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPlatformMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  v3 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_trigger_event_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_trigger_event_distance >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->avatar_trigger_event_distance, v3);
  }
  this->avatar_trigger_event_distance = 5.0;
  if ( *(char *)(((unsigned __int64)&this->is_moving_water >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_moving_water, v3, &this->is_moving_water);
  this->is_moving_water = 0;
  v4 = ((_BYTE)this + 97) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->calc_move_state_in_tick >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->calc_move_state_in_tick >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->calc_move_state_in_tick, v4, v5);
  this->calc_move_state_in_tick = 0;
  data::ConfigRoute::ConfigRoute(&this->route);
  if ( *(_BYTE *)(((unsigned __int64)&this->delay_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->delay_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->delay_type, v4);
  }
  this->delay_type = Normal_20;
};

// Line 116: range 0000000011DA5A10-0000000011DA5A3A
void __cdecl data::ConfigMove::~ConfigMove(data::ConfigMove *const this)
{
  data::ConfigMove::~ConfigMove(this);
  operator delete(this, 0x60uLL);
};

// Line 116: range 0000000011DA59AE-0000000011DA5A0F
void __cdecl data::ConfigMove::~ConfigMove(data::ConfigMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  data::ConfigMoveVelocityForce::~ConfigMoveVelocityForce(&this->velocity_force);
  std::enable_shared_from_this<data::ConfigMove>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigMove>);
};

// Line 121: range 0000000011A522C2-0000000011A522D2
const char *__cdecl data::ConfigMove::getTypeName(const data::ConfigMove *const this)
{
  return "ConfigMove";
};

// Line 122: range 0000000011A522D4-0000000011A52470
int32_t __cdecl data::ConfigMove::getHashNum(const data::ConfigMove *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigMove::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMove",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 141: range 0000000011DA3FCE-0000000011DA405A
void __cdecl data::ConfigMoveCorrection::ConfigMoveCorrection(data::ConfigMoveCorrection *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::ConfigMoveCorrection>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigMoveCorrection>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMoveCorrection + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMoveCorrection = v2;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 141: range 0000000011DA568E-0000000011DA5764
void __cdecl data::ConfigMoveCorrection::ConfigMoveCorrection(
        data::ConfigMoveCorrection *const this,
        const data::ConfigMoveCorrection *a2)
{
  std::enable_shared_from_this<data::ConfigMoveCorrection> *v2; // rsi
  int (**v3)(...); // rdx
  bool is_json_loaded; // cl
  char v5; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigMoveCorrection>;
  std::enable_shared_from_this<data::ConfigMoveCorrection>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigMoveCorrection>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigMoveCorrection + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigMoveCorrection = v3;
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, v2, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 148: range 0000000011DB7DFE-0000000011DB7E28
void __cdecl data::ConfigMoveCorrection::~ConfigMoveCorrection(data::ConfigMoveCorrection *const this)
{
  data::ConfigMoveCorrection::~ConfigMoveCorrection(this);
  operator delete(this, 0x20uLL);
};

// Line 148: range 0000000011DB7DAC-0000000011DB7DFD
void __cdecl data::ConfigMoveCorrection::~ConfigMoveCorrection(data::ConfigMoveCorrection *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMoveCorrection + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMoveCorrection = v2;
  std::enable_shared_from_this<data::ConfigMoveCorrection>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigMoveCorrection>);
};

// Line 153: range 0000000011A52472-0000000011A52482
const char *__cdecl data::ConfigMoveCorrection::getTypeName(const data::ConfigMoveCorrection *const this)
{
  return "ConfigMoveCorrection";
};

// Line 154: range 0000000011A52484-0000000011A52620
int32_t __cdecl data::ConfigMoveCorrection::getHashNum(const data::ConfigMoveCorrection *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigMoveCorrection::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMoveCorrection",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 173: range 0000000011DA5A3C-0000000011DA5B0C
void __cdecl data::ConfigSimpleMove::ConfigSimpleMove(data::ConfigSimpleMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigMove::ConfigMove((data::ConfigMove *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSimpleMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  v3 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->const_speed_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->const_speed_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->const_speed_ratio, v3);
  }
  this->const_speed_ratio = 0.0;
  if ( *(char *)(((unsigned __int64)&this->follow_reference_system >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->follow_reference_system, v3, &this->follow_reference_system);
  this->follow_reference_system = 1;
};

// Line 173: range 0000000011DA5EC2-0000000011DA6018
void __cdecl data::ConfigSimpleMove::ConfigSimpleMove(
        data::ConfigSimpleMove *const this,
        const data::ConfigSimpleMove *a2)
{
  int (**v2)(...); // rdx
  float const_speed_ratio; // xmm0_4
  __int64 v4; // rsi
  bool follow_reference_system; // cl
  char v6; // al

  data::ConfigMove::ConfigMove((data::ConfigMove *const)this, (const data::ConfigMove *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSimpleMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMove = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->const_speed_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->const_speed_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->const_speed_ratio);
  }
  const_speed_ratio = a2->const_speed_ratio;
  v4 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->const_speed_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->const_speed_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->const_speed_ratio, v4);
  }
  this->const_speed_ratio = const_speed_ratio;
  if ( *(char *)(((unsigned __int64)&a2->follow_reference_system >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->follow_reference_system, v4, &a2->follow_reference_system);
  follow_reference_system = a2->follow_reference_system;
  v6 = *(_BYTE *)(((unsigned __int64)&this->follow_reference_system >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store1(&this->follow_reference_system, v4, &this->follow_reference_system);
  }
  this->follow_reference_system = follow_reference_system;
};

// Line 181: range 0000000011E0766C-0000000011E07696
void __cdecl data::ConfigSimpleMove::~ConfigSimpleMove(data::ConfigSimpleMove *const this)
{
  data::ConfigSimpleMove::~ConfigSimpleMove(this);
  operator delete(this, 0x68uLL);
};

// Line 181: range 0000000011E0761E-0000000011E0766B
void __cdecl data::ConfigSimpleMove::~ConfigSimpleMove(data::ConfigSimpleMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSimpleMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  data::ConfigMove::~ConfigMove((data::ConfigMove *const)this);
};

// Line 186: range 0000000011A52622-0000000011A52632
const char *__cdecl data::ConfigSimpleMove::getTypeName(const data::ConfigSimpleMove *const this)
{
  return "ConfigSimpleMove";
};

// Line 187: range 0000000011A52634-0000000011A527D0
int32_t __cdecl data::ConfigSimpleMove::getHashNum(const data::ConfigSimpleMove *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigSimpleMove::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigSimpleMove",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 203: range 0000000011DA6302-0000000011DA6343
void __cdecl data::ConfigSimpleMoveFactory::ConfigSimpleMoveFactory(data::ConfigSimpleMoveFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSimpleMoveFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigSimpleMoveFactory = v2;
};

// Line 211: range 0000000011DA664C-0000000011DA685C
void __cdecl data::ConfigRigidbodyMove::ConfigRigidbodyMove(data::ConfigRigidbodyMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx

  data::ConfigMove::ConfigMove((data::ConfigMove *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigRigidbodyMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  v3 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->const_speed_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->const_speed_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->const_speed_ratio, v3);
  }
  this->const_speed_ratio = 0.0;
  if ( *(char *)(((unsigned __int64)&this->start_close_to_ground >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->start_close_to_ground, v3, &this->start_close_to_ground);
  this->start_close_to_ground = 1;
  v4 = ((_BYTE)this + 97) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->enable_close_to_ground_when_tick >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->enable_close_to_ground_when_tick >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->enable_close_to_ground_when_tick, v4, v5);
  this->enable_close_to_ground_when_tick = 1;
  v6 = ((_BYTE)this + 98) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->follow_reference_system >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->follow_reference_system >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->follow_reference_system, v6, v7);
  this->follow_reference_system = 1;
  v8 = ((_BYTE)this + 99) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->use_aniamtor_velocity >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->use_aniamtor_velocity >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->use_aniamtor_velocity, v8, v9);
  this->use_aniamtor_velocity = 0;
  v10 = ((_BYTE)this + 100) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&this->enable_sync_trans_to_server >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&this->enable_sync_trans_to_server >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->enable_sync_trans_to_server, v10, v11);
  this->enable_sync_trans_to_server = 0;
  v12 = ((_BYTE)this + 101) & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)&this->ignore_enable_rigidbody_dist >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&this->ignore_enable_rigidbody_dist >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->ignore_enable_rigidbody_dist, v12, v13);
  this->ignore_enable_rigidbody_dist = 0;
};

// Line 211: range 0000000011DA6C12-0000000011DA6FE8
void __cdecl data::ConfigRigidbodyMove::ConfigRigidbodyMove(
        data::ConfigRigidbodyMove *const this,
        const data::ConfigRigidbodyMove *a2)
{
  int (**v2)(...); // rdx
  float const_speed_ratio; // xmm0_4
  __int64 v4; // rsi
  bool start_close_to_ground; // cl
  char v6; // al
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool enable_close_to_ground_when_tick; // cl
  char v10; // dl
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx
  bool follow_reference_system; // cl
  char v15; // dl
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdx
  bool use_aniamtor_velocity; // cl
  char v20; // dl
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdx
  bool enable_sync_trans_to_server; // cl
  char v25; // dl
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rdx
  bool ignore_enable_rigidbody_dist; // cl
  char v30; // dl
  __int64 v31; // rdx

  data::ConfigMove::ConfigMove((data::ConfigMove *const)this, (const data::ConfigMove *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigRigidbodyMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMove = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->const_speed_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->const_speed_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->const_speed_ratio);
  }
  const_speed_ratio = a2->const_speed_ratio;
  v4 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->const_speed_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->const_speed_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->const_speed_ratio, v4);
  }
  this->const_speed_ratio = const_speed_ratio;
  if ( *(char *)(((unsigned __int64)&a2->start_close_to_ground >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->start_close_to_ground, v4, &a2->start_close_to_ground);
  start_close_to_ground = a2->start_close_to_ground;
  v6 = *(_BYTE *)(((unsigned __int64)&this->start_close_to_ground >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store1(&this->start_close_to_ground, v4, &this->start_close_to_ground);
  }
  this->start_close_to_ground = start_close_to_ground;
  v7 = ((_BYTE)a2 + 97) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&a2->enable_close_to_ground_when_tick >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&a2->enable_close_to_ground_when_tick >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&a2->enable_close_to_ground_when_tick, v7, v8);
  enable_close_to_ground_when_tick = a2->enable_close_to_ground_when_tick;
  v10 = *(_BYTE *)(((unsigned __int64)&this->enable_close_to_ground_when_tick >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this + 97) & 7) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->enable_close_to_ground_when_tick, v7, v11);
  this->enable_close_to_ground_when_tick = enable_close_to_ground_when_tick;
  v12 = ((_BYTE)a2 + 98) & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)&a2->follow_reference_system >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&a2->follow_reference_system >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_load1(&a2->follow_reference_system, v12, v13);
  follow_reference_system = a2->follow_reference_system;
  v15 = *(_BYTE *)(((unsigned __int64)&this->follow_reference_system >> 3) + 0x7FFF8000);
  LOBYTE(v12) = v15 != 0;
  v16 = (v15 != 0) & (unsigned __int8)((((unsigned __int8)this + 98) & 7) >= v15);
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->follow_reference_system, v12, v16);
  this->follow_reference_system = follow_reference_system;
  v17 = ((_BYTE)a2 + 99) & 7;
  v18 = (*(_BYTE *)(((unsigned __int64)&a2->use_aniamtor_velocity >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v17 >= *(_BYTE *)(((unsigned __int64)&a2->use_aniamtor_velocity >> 3) + 0x7FFF8000));
  if ( (_BYTE)v18 )
    __asan_report_load1(&a2->use_aniamtor_velocity, v17, v18);
  use_aniamtor_velocity = a2->use_aniamtor_velocity;
  v20 = *(_BYTE *)(((unsigned __int64)&this->use_aniamtor_velocity >> 3) + 0x7FFF8000);
  LOBYTE(v17) = v20 != 0;
  v21 = (v20 != 0) & (unsigned __int8)((((unsigned __int8)this + 99) & 7) >= v20);
  if ( (_BYTE)v21 )
    __asan_report_store1(&this->use_aniamtor_velocity, v17, v21);
  this->use_aniamtor_velocity = use_aniamtor_velocity;
  v22 = ((_BYTE)a2 + 100) & 7;
  v23 = (*(_BYTE *)(((unsigned __int64)&a2->enable_sync_trans_to_server >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v22 >= *(_BYTE *)(((unsigned __int64)&a2->enable_sync_trans_to_server >> 3) + 0x7FFF8000));
  if ( (_BYTE)v23 )
    __asan_report_load1(&a2->enable_sync_trans_to_server, v22, v23);
  enable_sync_trans_to_server = a2->enable_sync_trans_to_server;
  v25 = *(_BYTE *)(((unsigned __int64)&this->enable_sync_trans_to_server >> 3) + 0x7FFF8000);
  LOBYTE(v22) = v25 != 0;
  v26 = (v25 != 0) & (unsigned __int8)((((unsigned __int8)this + 100) & 7) >= v25);
  if ( (_BYTE)v26 )
    __asan_report_store1(&this->enable_sync_trans_to_server, v22, v26);
  this->enable_sync_trans_to_server = enable_sync_trans_to_server;
  v27 = ((_BYTE)a2 + 101) & 7;
  v28 = (*(_BYTE *)(((unsigned __int64)&a2->ignore_enable_rigidbody_dist >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v27 >= *(_BYTE *)(((unsigned __int64)&a2->ignore_enable_rigidbody_dist >> 3) + 0x7FFF8000));
  if ( (_BYTE)v28 )
    __asan_report_load1(&a2->ignore_enable_rigidbody_dist, v27, v28);
  ignore_enable_rigidbody_dist = a2->ignore_enable_rigidbody_dist;
  v30 = *(_BYTE *)(((unsigned __int64)&this->ignore_enable_rigidbody_dist >> 3) + 0x7FFF8000);
  LOBYTE(v27) = v30 != 0;
  v31 = (v30 != 0) & (unsigned __int8)((((unsigned __int8)this + 101) & 7) >= v30);
  if ( (_BYTE)v31 )
    __asan_report_store1(&this->ignore_enable_rigidbody_dist, v27, v31);
  this->ignore_enable_rigidbody_dist = ignore_enable_rigidbody_dist;
};

// Line 224: range 0000000011E075F2-0000000011E0761C
void __cdecl data::ConfigRigidbodyMove::~ConfigRigidbodyMove(data::ConfigRigidbodyMove *const this)
{
  data::ConfigRigidbodyMove::~ConfigRigidbodyMove(this);
  operator delete(this, 0x68uLL);
};

// Line 224: range 0000000011E075A4-0000000011E075F1
void __cdecl data::ConfigRigidbodyMove::~ConfigRigidbodyMove(data::ConfigRigidbodyMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigRigidbodyMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  data::ConfigMove::~ConfigMove((data::ConfigMove *const)this);
};

// Line 229: range 0000000011A527D2-0000000011A527E2
const char *__cdecl data::ConfigRigidbodyMove::getTypeName(const data::ConfigRigidbodyMove *const this)
{
  return "ConfigRigidbodyMove";
};

// Line 230: range 0000000011A527E4-0000000011A52980
int32_t __cdecl data::ConfigRigidbodyMove::getHashNum(const data::ConfigRigidbodyMove *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigRigidbodyMove::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigRigidbodyMove",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 246: range 0000000011DA72D2-0000000011DA7313
void __cdecl data::ConfigRigidbodyMoveFactory::ConfigRigidbodyMoveFactory(data::ConfigRigidbodyMoveFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigRigidbodyMoveFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigRigidbodyMoveFactory = v2;
};

// Line 254: range 0000000011DA761C-0000000011DA7735
void __cdecl data::ConfigMixinDriveMove::ConfigMixinDriveMove(data::ConfigMixinDriveMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  data::ConfigMove::ConfigMove((data::ConfigMove *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMixinDriveMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  v3 = ((_BYTE)this + 90) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->enable_close_to_ground >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->enable_close_to_ground >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->enable_close_to_ground, v3, v4);
  this->enable_close_to_ground = 1;
  v5 = ((_BYTE)this + 91) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->follow_reference_system >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->follow_reference_system >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->follow_reference_system, v5, v6);
  this->follow_reference_system = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->yaw_speed_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->yaw_speed_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->yaw_speed_ratio, (((_BYTE)this + 92) & 7u) + 3);
  }
  this->yaw_speed_ratio = 5.0;
};

// Line 254: range 0000000011DA7AEA-0000000011DA7CCA
void __cdecl data::ConfigMixinDriveMove::ConfigMixinDriveMove(
        data::ConfigMixinDriveMove *const this,
        const data::ConfigMixinDriveMove *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool enable_close_to_ground; // cl
  char v6; // dl
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  bool follow_reference_system; // cl
  char v11; // dl
  __int64 v12; // rdx
  float yaw_speed_ratio; // xmm0_4

  data::ConfigMove::ConfigMove((data::ConfigMove *const)this, (const data::ConfigMove *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMixinDriveMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMove = v2;
  v3 = ((_BYTE)a2 + 90) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->enable_close_to_ground >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->enable_close_to_ground >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->enable_close_to_ground, v3, v4);
  enable_close_to_ground = a2->enable_close_to_ground;
  v6 = *(_BYTE *)(((unsigned __int64)&this->enable_close_to_ground >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 90) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->enable_close_to_ground, v3, v7);
  this->enable_close_to_ground = enable_close_to_ground;
  v8 = ((_BYTE)a2 + 91) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&a2->follow_reference_system >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&a2->follow_reference_system >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_load1(&a2->follow_reference_system, v8, v9);
  follow_reference_system = a2->follow_reference_system;
  v11 = *(_BYTE *)(((unsigned __int64)&this->follow_reference_system >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v11 != 0;
  v12 = (v11 != 0) & (unsigned __int8)((((unsigned __int8)this + 91) & 7) >= v11);
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->follow_reference_system, v8, v12);
  this->follow_reference_system = follow_reference_system;
  if ( *(_BYTE *)(((unsigned __int64)&a2->yaw_speed_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->yaw_speed_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->yaw_speed_ratio);
  }
  yaw_speed_ratio = a2->yaw_speed_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&this->yaw_speed_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->yaw_speed_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->yaw_speed_ratio, (((_BYTE)this + 92) & 7u) + 3);
  }
  this->yaw_speed_ratio = yaw_speed_ratio;
};

// Line 263: range 0000000011E07578-0000000011E075A2
void __cdecl data::ConfigMixinDriveMove::~ConfigMixinDriveMove(data::ConfigMixinDriveMove *const this)
{
  data::ConfigMixinDriveMove::~ConfigMixinDriveMove(this);
  operator delete(this, 0x60uLL);
};

// Line 263: range 0000000011E0752A-0000000011E07577
void __cdecl data::ConfigMixinDriveMove::~ConfigMixinDriveMove(data::ConfigMixinDriveMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMixinDriveMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  data::ConfigMove::~ConfigMove((data::ConfigMove *const)this);
};

// Line 268: range 0000000011A52982-0000000011A52992
const char *__cdecl data::ConfigMixinDriveMove::getTypeName(const data::ConfigMixinDriveMove *const this)
{
  return "ConfigMixinDriveMove";
};

// Line 269: range 0000000011A52994-0000000011A52B30
int32_t __cdecl data::ConfigMixinDriveMove::getHashNum(const data::ConfigMixinDriveMove *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigMixinDriveMove::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMixinDriveMove",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 285: range 0000000011DA7FB4-0000000011DA7FF5
void __cdecl data::ConfigMixinDriveMoveFactory::ConfigMixinDriveMoveFactory(
        data::ConfigMixinDriveMoveFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMixinDriveMoveFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMixinDriveMoveFactory = v2;
};

// Line 352: range 0000000011DA887E-0000000011DA8B37
void __cdecl data::ConfigFormulaicMove::ConfigFormulaicMove(data::ConfigFormulaicMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rdx

  data::ConfigMove::ConfigMove((data::ConfigMove *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigFormulaicMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  v3 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_control >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->time_control >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->time_control, v3);
  }
  this->time_control = Level_2;
  if ( *(_BYTE *)(((unsigned __int64)&this->formula_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->formula_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->formula_type, v3);
  }
  this->formula_type = Linear_0;
  v4 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->move_mode >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->move_mode >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->move_mode, v4);
  }
  this->move_mode = Loop_0;
  std::vector<float>::vector(&this->off_time);
  if ( *(char *)(((unsigned __int64)&this->automatic_move >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->automatic_move, v4, &this->automatic_move);
  this->automatic_move = 1;
  v5 = (((_BYTE)this - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->polar >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->polar >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->polar, v5);
  }
  this->polar = Y_0;
  std::vector<float>::vector(&this->angle_section);
  if ( *(_BYTE *)(((unsigned __int64)&this->angle_step >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->angle_step >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->angle_step, v5);
  }
  this->angle_step = 0.0;
  v6 = ((_BYTE)this - 92) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->is_clock_wise >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_clock_wise >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_clock_wise, v6, v7);
  this->is_clock_wise = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->angle_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->angle_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->angle_speed, v6);
  }
  this->angle_speed = 10.0;
  std::vector<float>::vector(&this->period);
  std::vector<data::Vector>::vector(&this->route);
};

// Line 352: range 0000000011DA8EEC-0000000011DA943D
void __cdecl data::ConfigFormulaicMove::ConfigFormulaicMove(
        data::ConfigFormulaicMove *const this,
        const data::ConfigFormulaicMove *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::UGCTimeControlType time_control; // ecx
  char v5; // dl
  data::UGCFormulaType formula_type; // ecx
  char v7; // al
  __int64 v8; // rsi
  data::UGCMoveType move_mode; // ecx
  char v10; // dl
  data::FloatList *p_off_time; // rsi
  bool automatic_move; // cl
  char v13; // al
  __int64 v14; // rsi
  data::UGCAxialType polar; // ecx
  char v16; // dl
  float angle_step; // xmm0_4
  __int64 v18; // rsi
  __int64 v19; // rdx
  bool is_clock_wise; // cl
  char v21; // dl
  __int64 v22; // rdx
  float angle_speed; // xmm0_4

  data::ConfigMove::ConfigMove((data::ConfigMove *const)this, (const data::ConfigMove *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigFormulaicMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMove = v2;
  v3 = (((_BYTE)a2 + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->time_control >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->time_control >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->time_control);
  }
  time_control = a2->time_control;
  v5 = *(_BYTE *)(((unsigned __int64)&this->time_control >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 92) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->time_control, v3);
  }
  this->time_control = time_control;
  if ( *(_BYTE *)(((unsigned __int64)&a2->formula_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->formula_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->formula_type);
  }
  formula_type = a2->formula_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->formula_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->formula_type, v3);
  }
  this->formula_type = formula_type;
  v8 = (((_BYTE)a2 + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->move_mode >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->move_mode >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->move_mode);
  }
  move_mode = a2->move_mode;
  v10 = *(_BYTE *)(((unsigned __int64)&this->move_mode >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->move_mode, v8);
  }
  this->move_mode = move_mode;
  p_off_time = &a2->off_time;
  std::vector<float>::vector(&this->off_time, &a2->off_time);
  if ( *(char *)(((unsigned __int64)&a2->automatic_move >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->automatic_move, p_off_time, &a2->automatic_move);
  automatic_move = a2->automatic_move;
  v13 = *(_BYTE *)(((unsigned __int64)&this->automatic_move >> 3) + 0x7FFF8000);
  if ( v13 < 0 )
  {
    LOBYTE(p_off_time) = v13 != 0;
    __asan_report_store1(&this->automatic_move, p_off_time, &this->automatic_move);
  }
  this->automatic_move = automatic_move;
  v14 = (((_BYTE)a2 - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->polar >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->polar >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->polar);
  }
  polar = a2->polar;
  v16 = *(_BYTE *)(((unsigned __int64)&this->polar >> 3) + 0x7FFF8000);
  if ( v16 != 0 && (char)((((_BYTE)this - 124) & 7) + 3) >= v16 )
  {
    LOBYTE(v14) = v16 != 0;
    __asan_report_store4(&this->polar, v14);
  }
  this->polar = polar;
  std::vector<float>::vector(&this->angle_section, &a2->angle_section);
  if ( *(_BYTE *)(((unsigned __int64)&a2->angle_step >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->angle_step >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->angle_step);
  }
  angle_step = a2->angle_step;
  if ( *(_BYTE *)(((unsigned __int64)&this->angle_step >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->angle_step >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->angle_step, &a2->angle_section);
  }
  this->angle_step = angle_step;
  v18 = ((_BYTE)a2 - 92) & 7;
  v19 = (*(_BYTE *)(((unsigned __int64)&a2->is_clock_wise >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v18 >= *(_BYTE *)(((unsigned __int64)&a2->is_clock_wise >> 3) + 0x7FFF8000));
  if ( (_BYTE)v19 )
    __asan_report_load1(&a2->is_clock_wise, v18, v19);
  is_clock_wise = a2->is_clock_wise;
  v21 = *(_BYTE *)(((unsigned __int64)&this->is_clock_wise >> 3) + 0x7FFF8000);
  LOBYTE(v18) = v21 != 0;
  v22 = (v21 != 0) & (unsigned __int8)((((unsigned __int8)this - 92) & 7) >= v21);
  if ( (_BYTE)v22 )
    __asan_report_store1(&this->is_clock_wise, v18, v22);
  this->is_clock_wise = is_clock_wise;
  if ( *(_BYTE *)(((unsigned __int64)&a2->angle_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->angle_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->angle_speed);
  }
  angle_speed = a2->angle_speed;
  if ( *(_BYTE *)(((unsigned __int64)&this->angle_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->angle_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->angle_speed, v18);
  }
  this->angle_speed = angle_speed;
  std::vector<float>::vector(&this->period, &a2->period);
  std::vector<data::Vector>::vector(&this->route, &a2->route);
};

// Line 370: range 0000000011E074FE-0000000011E07528
void __cdecl data::ConfigFormulaicMove::~ConfigFormulaicMove(data::ConfigFormulaicMove *const this)
{
  data::ConfigFormulaicMove::~ConfigFormulaicMove(this);
  operator delete(this, 0xE0uLL);
};

// Line 370: range 0000000011E0746A-0000000011E074FD
void __cdecl data::ConfigFormulaicMove::~ConfigFormulaicMove(data::ConfigFormulaicMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigFormulaicMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  std::vector<data::Vector>::~vector(&this->route);
  std::vector<float>::~vector(&this->period);
  std::vector<float>::~vector(&this->angle_section);
  std::vector<float>::~vector(&this->off_time);
  data::ConfigMove::~ConfigMove((data::ConfigMove *const)this);
};

// Line 375: range 0000000011A52B32-0000000011A52B42
const char *__cdecl data::ConfigFormulaicMove::getTypeName(const data::ConfigFormulaicMove *const this)
{
  return "ConfigFormulaicMove";
};

// Line 376: range 0000000011A52B44-0000000011A52CE0
int32_t __cdecl data::ConfigFormulaicMove::getHashNum(const data::ConfigFormulaicMove *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigFormulaicMove::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigFormulaicMove",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 392: range 0000000011DA9726-0000000011DA9767
void __cdecl data::ConfigFormulaicMoveFactory::ConfigFormulaicMoveFactory(data::ConfigFormulaicMoveFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigFormulaicMoveFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigFormulaicMoveFactory = v2;
};

// Line 400: range 0000000011DA9A70-0000000011DA9ABD
void __cdecl data::ConfigVehicleMove::ConfigVehicleMove(data::ConfigVehicleMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMove::ConfigMove(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigVehicleMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
};

// Line 400: range 0000000011DA9E72-0000000011DA9ECA
void __cdecl data::ConfigVehicleMove::ConfigVehicleMove(
        data::ConfigVehicleMove *const this,
        const data::ConfigVehicleMove *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMove::ConfigMove(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigVehicleMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMove = v2;
};

// Line 406: range 0000000011DAA1B4-0000000011DAA201
void __cdecl data::ConfigVehicleMove::~ConfigVehicleMove(data::ConfigVehicleMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigVehicleMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  data::ConfigMove::~ConfigMove(this);
};

// Line 406: range 0000000011DAA202-0000000011DAA22C
void __cdecl data::ConfigVehicleMove::~ConfigVehicleMove(data::ConfigVehicleMove *const this)
{
  data::ConfigVehicleMove::~ConfigVehicleMove(this);
  operator delete(this, 0x60uLL);
};

// Line 411: range 0000000011A52CE2-0000000011A52CF2
const char *__cdecl data::ConfigVehicleMove::getTypeName(const data::ConfigVehicleMove *const this)
{
  return "ConfigVehicleMove";
};

// Line 412: range 0000000011A52CF4-0000000011A52E90
int32_t __cdecl data::ConfigVehicleMove::getHashNum(const data::ConfigVehicleMove *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigVehicleMove::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigVehicleMove",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 431: range 0000000011DAA22E-0000000011DAA27B
void __cdecl data::ConfigBoatMove::ConfigBoatMove(data::ConfigBoatMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigVehicleMove::ConfigVehicleMove(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBoatMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
};

// Line 431: range 0000000011DAA630-0000000011DAA688
void __cdecl data::ConfigBoatMove::ConfigBoatMove(data::ConfigBoatMove *const this, const data::ConfigBoatMove *a2)
{
  int (**v2)(...); // rdx

  data::ConfigVehicleMove::ConfigVehicleMove(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBoatMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMove = v2;
};

// Line 437: range 0000000011E0743E-0000000011E07468
void __cdecl data::ConfigBoatMove::~ConfigBoatMove(data::ConfigBoatMove *const this)
{
  data::ConfigBoatMove::~ConfigBoatMove(this);
  operator delete(this, 0x60uLL);
};

// Line 437: range 0000000011E073F0-0000000011E0743D
void __cdecl data::ConfigBoatMove::~ConfigBoatMove(data::ConfigBoatMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBoatMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  data::ConfigVehicleMove::~ConfigVehicleMove(this);
};

// Line 442: range 0000000011A52E92-0000000011A52EA2
const char *__cdecl data::ConfigBoatMove::getTypeName(const data::ConfigBoatMove *const this)
{
  return "ConfigBoatMove";
};

// Line 443: range 0000000011A52EA4-0000000011A53040
int32_t __cdecl data::ConfigBoatMove::getHashNum(const data::ConfigBoatMove *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigBoatMove::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBoatMove",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 459: range 0000000011DAA972-0000000011DAA9B3
void __cdecl data::ConfigBoatMoveFactory::ConfigBoatMoveFactory(data::ConfigBoatMoveFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBoatMoveFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBoatMoveFactory = v2;
};

// Line 467: range 0000000011DAACBC-0000000011DAAD09
void __cdecl data::ConfigSkiffMove::ConfigSkiffMove(data::ConfigSkiffMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigVehicleMove::ConfigVehicleMove(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSkiffMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
};

// Line 467: range 0000000011DAB0BE-0000000011DAB116
void __cdecl data::ConfigSkiffMove::ConfigSkiffMove(data::ConfigSkiffMove *const this, const data::ConfigSkiffMove *a2)
{
  int (**v2)(...); // rdx

  data::ConfigVehicleMove::ConfigVehicleMove(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSkiffMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMove = v2;
};

// Line 473: range 0000000011E073C4-0000000011E073EE
void __cdecl data::ConfigSkiffMove::~ConfigSkiffMove(data::ConfigSkiffMove *const this)
{
  data::ConfigSkiffMove::~ConfigSkiffMove(this);
  operator delete(this, 0x60uLL);
};

// Line 473: range 0000000011E07376-0000000011E073C3
void __cdecl data::ConfigSkiffMove::~ConfigSkiffMove(data::ConfigSkiffMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSkiffMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  data::ConfigVehicleMove::~ConfigVehicleMove(this);
};

// Line 478: range 0000000011A53042-0000000011A53052
const char *__cdecl data::ConfigSkiffMove::getTypeName(const data::ConfigSkiffMove *const this)
{
  return "ConfigSkiffMove";
};

// Line 479: range 0000000011A53054-0000000011A531F0
int32_t __cdecl data::ConfigSkiffMove::getHashNum(const data::ConfigSkiffMove *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigSkiffMove::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigSkiffMove",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 495: range 0000000011DAB400-0000000011DAB441
void __cdecl data::ConfigSkiffMoveFactory::ConfigSkiffMoveFactory(data::ConfigSkiffMoveFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSkiffMoveFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigSkiffMoveFactory = v2;
};

// Line 566: range 0000000011DABEAE-0000000011DAC2D0
void __cdecl data::ConfigAnimatorMove::ConfigAnimatorMove(data::ConfigAnimatorMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rsi

  data::ConfigMove::ConfigMove((data::ConfigMove *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAnimatorMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  v3 = ((_BYTE)this + 90) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->init_with_ground_hit_check >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->init_with_ground_hit_check >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->init_with_ground_hit_check, v3, v4);
  this->init_with_ground_hit_check = 1;
  data::ConfigMoveSmoothedSpeed::ConfigMoveSmoothedSpeed(&this->smoothed_speed);
  v5 = ((_BYTE)this + 116) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->move_on_ground >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->move_on_ground >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->move_on_ground, v5, v6);
  this->move_on_ground = 1;
  v7 = ((_BYTE)this + 117) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->move_on_water >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->move_on_water >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->move_on_water, v7, v8);
  this->move_on_water = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->move_on_water_depth >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->move_on_water_depth >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->move_on_water_depth, v7);
  }
  this->move_on_water_depth = 0.0;
  std::vector<data::ConfigRaycast>::vector(&this->raycasts);
  if ( *(_BYTE *)(((unsigned __int64)&this->deep_water_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->deep_water_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->deep_water_level, v7);
  }
  this->deep_water_level = -1.0;
  v9 = (((_BYTE)this - 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->facing_move >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->facing_move >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->facing_move, v9);
  }
  this->facing_move = ForwardOnly;
  if ( *(_BYTE *)(((unsigned __int64)&this->air_facing_move >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->air_facing_move >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->air_facing_move, v9);
  }
  this->air_facing_move = ForwardOnly;
  v10 = (((_BYTE)this - 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_size_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monster_size_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->monster_size_type, v10);
  }
  this->monster_size_type = OtherType;
  if ( *(_BYTE *)(((unsigned __int64)&this->position_modify_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->position_modify_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->position_modify_state, v10);
  }
  this->position_modify_state = All_11;
  std::unordered_map<unsigned int,data::PositionModifyState>::unordered_map(&this->position_modify_state_map);
  if ( *(char *)(((unsigned __int64)&this->destroy_rock_when_init >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->destroy_rock_when_init, v10, &this->destroy_rock_when_init);
  this->destroy_rock_when_init = 0;
  v11 = (((_BYTE)this - 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->yaw_speed_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->yaw_speed_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->yaw_speed_ratio, v11);
  }
  this->yaw_speed_ratio = 5.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->velocity_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->velocity_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->velocity_ratio, v11);
  }
  this->velocity_ratio = 1.0;
  std::vector<std::string>::vector(&this->launch_states);
  std::vector<std::string>::vector(&this->land_states);
  if ( *(char *)(((unsigned __int64)&this->position_modify_extra >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->position_modify_extra, v11, &this->position_modify_extra);
  this->position_modify_extra = 0;
};

// Line 566: range 0000000011DAC686-0000000011DACF67
void __cdecl data::ConfigAnimatorMove::ConfigAnimatorMove(
        data::ConfigAnimatorMove *const this,
        const data::ConfigAnimatorMove *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool init_with_ground_hit_check; // cl
  char v6; // dl
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  bool move_on_ground; // cl
  char v12; // dl
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
  bool move_on_water; // cl
  char v17; // dl
  __int64 v18; // rdx
  float move_on_water_depth; // xmm0_4
  float deep_water_level; // xmm0_4
  __int64 v21; // rsi
  data::FacingMoveType facing_move; // ecx
  char v23; // dl
  data::FacingMoveType air_facing_move; // ecx
  char v25; // al
  __int64 v26; // rsi
  data::MonsterSizeType monster_size_type; // ecx
  char v28; // dl
  data::PositionModifyState position_modify_state; // ecx
  char v30; // al
  data::PositionModifyStateMap *p_position_modify_state_map; // rsi
  bool destroy_rock_when_init; // cl
  char v33; // al
  float yaw_speed_ratio; // xmm0_4
  __int64 v35; // rsi
  float velocity_ratio; // xmm0_4
  data::StringList *p_land_states; // rsi
  bool position_modify_extra; // cl
  char v39; // al

  data::ConfigMove::ConfigMove((data::ConfigMove *const)this, (const data::ConfigMove *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAnimatorMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMove = v2;
  v3 = ((_BYTE)a2 + 90) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->init_with_ground_hit_check >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->init_with_ground_hit_check >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->init_with_ground_hit_check, v3, v4);
  init_with_ground_hit_check = a2->init_with_ground_hit_check;
  v6 = *(_BYTE *)(((unsigned __int64)&this->init_with_ground_hit_check >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 90) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->init_with_ground_hit_check, v3, v7);
  this->init_with_ground_hit_check = init_with_ground_hit_check;
  if ( (((unsigned __int8)this + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->smoothed_speed >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->smoothed_speed >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->smoothed_speed.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 115) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->smoothed_speed.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->smoothed_speed, 24LL);
  }
  if ( (((unsigned __int8)a2 + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->smoothed_speed >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->smoothed_speed >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->smoothed_speed.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 115) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->smoothed_speed.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->smoothed_speed, 24LL);
  }
  v8 = *(_QWORD *)&a2->smoothed_speed.acceleration_y;
  *(_QWORD *)&this->smoothed_speed.max_speed = *(_QWORD *)&a2->smoothed_speed.max_speed;
  *(_QWORD *)&this->smoothed_speed.acceleration_y = v8;
  *(_QWORD *)&this->smoothed_speed.zeroing_speed_y = *(_QWORD *)&a2->smoothed_speed.zeroing_speed_y;
  v9 = ((_BYTE)a2 + 116) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&a2->move_on_ground >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&a2->move_on_ground >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_load1(&a2->move_on_ground, v9, v10);
  move_on_ground = a2->move_on_ground;
  v12 = *(_BYTE *)(((unsigned __int64)&this->move_on_ground >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((((unsigned __int8)this + 116) & 7) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->move_on_ground, v9, v13);
  this->move_on_ground = move_on_ground;
  v14 = ((_BYTE)a2 + 117) & 7;
  v15 = (*(_BYTE *)(((unsigned __int64)&a2->move_on_water >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)&a2->move_on_water >> 3) + 0x7FFF8000));
  if ( (_BYTE)v15 )
    __asan_report_load1(&a2->move_on_water, v14, v15);
  move_on_water = a2->move_on_water;
  v17 = *(_BYTE *)(((unsigned __int64)&this->move_on_water >> 3) + 0x7FFF8000);
  LOBYTE(v14) = v17 != 0;
  v18 = (v17 != 0) & (unsigned __int8)((((unsigned __int8)this + 117) & 7) >= v17);
  if ( (_BYTE)v18 )
    __asan_report_store1(&this->move_on_water, v14, v18);
  this->move_on_water = move_on_water;
  if ( *(_BYTE *)(((unsigned __int64)&a2->move_on_water_depth >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->move_on_water_depth >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->move_on_water_depth);
  }
  move_on_water_depth = a2->move_on_water_depth;
  if ( *(_BYTE *)(((unsigned __int64)&this->move_on_water_depth >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->move_on_water_depth >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->move_on_water_depth, v14);
  }
  this->move_on_water_depth = move_on_water_depth;
  std::vector<data::ConfigRaycast>::vector(&this->raycasts, &a2->raycasts);
  if ( *(_BYTE *)(((unsigned __int64)&a2->deep_water_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->deep_water_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->deep_water_level);
  }
  deep_water_level = a2->deep_water_level;
  if ( *(_BYTE *)(((unsigned __int64)&this->deep_water_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->deep_water_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->deep_water_level, &a2->raycasts);
  }
  this->deep_water_level = deep_water_level;
  v21 = (((_BYTE)a2 - 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->facing_move >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->facing_move >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->facing_move);
  }
  facing_move = a2->facing_move;
  v23 = *(_BYTE *)(((unsigned __int64)&this->facing_move >> 3) + 0x7FFF8000);
  if ( v23 != 0 && (char)((((_BYTE)this - 100) & 7) + 3) >= v23 )
  {
    LOBYTE(v21) = v23 != 0;
    __asan_report_store4(&this->facing_move, v21);
  }
  this->facing_move = facing_move;
  if ( *(_BYTE *)(((unsigned __int64)&a2->air_facing_move >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->air_facing_move >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->air_facing_move);
  }
  air_facing_move = a2->air_facing_move;
  v25 = *(_BYTE *)(((unsigned __int64)&this->air_facing_move >> 3) + 0x7FFF8000);
  if ( v25 != 0 && v25 <= 3 )
  {
    LOBYTE(v21) = v25 != 0;
    __asan_report_store4(&this->air_facing_move, v21);
  }
  this->air_facing_move = air_facing_move;
  v26 = (((_BYTE)a2 - 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->monster_size_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->monster_size_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->monster_size_type);
  }
  monster_size_type = a2->monster_size_type;
  v28 = *(_BYTE *)(((unsigned __int64)&this->monster_size_type >> 3) + 0x7FFF8000);
  if ( v28 != 0 && (char)((((_BYTE)this - 92) & 7) + 3) >= v28 )
  {
    LOBYTE(v26) = v28 != 0;
    __asan_report_store4(&this->monster_size_type, v26);
  }
  this->monster_size_type = monster_size_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->position_modify_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->position_modify_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->position_modify_state);
  }
  position_modify_state = a2->position_modify_state;
  v30 = *(_BYTE *)(((unsigned __int64)&this->position_modify_state >> 3) + 0x7FFF8000);
  if ( v30 != 0 && v30 <= 3 )
  {
    LOBYTE(v26) = v30 != 0;
    __asan_report_store4(&this->position_modify_state, v26);
  }
  this->position_modify_state = position_modify_state;
  p_position_modify_state_map = &a2->position_modify_state_map;
  std::unordered_map<unsigned int,data::PositionModifyState>::unordered_map(
    &this->position_modify_state_map,
    &a2->position_modify_state_map);
  if ( *(char *)(((unsigned __int64)&a2->destroy_rock_when_init >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->destroy_rock_when_init, p_position_modify_state_map, &a2->destroy_rock_when_init);
  destroy_rock_when_init = a2->destroy_rock_when_init;
  v33 = *(_BYTE *)(((unsigned __int64)&this->destroy_rock_when_init >> 3) + 0x7FFF8000);
  if ( v33 < 0 )
  {
    LOBYTE(p_position_modify_state_map) = v33 != 0;
    __asan_report_store1(&this->destroy_rock_when_init, p_position_modify_state_map, &this->destroy_rock_when_init);
  }
  this->destroy_rock_when_init = destroy_rock_when_init;
  if ( *(_BYTE *)(((unsigned __int64)&a2->yaw_speed_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->yaw_speed_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->yaw_speed_ratio);
  }
  yaw_speed_ratio = a2->yaw_speed_ratio;
  v35 = (((_BYTE)this - 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->yaw_speed_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->yaw_speed_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->yaw_speed_ratio, v35);
  }
  this->yaw_speed_ratio = yaw_speed_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&a2->velocity_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->velocity_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->velocity_ratio);
  }
  velocity_ratio = a2->velocity_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&this->velocity_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->velocity_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->velocity_ratio, v35);
  }
  this->velocity_ratio = velocity_ratio;
  std::vector<std::string>::vector(&this->launch_states, &a2->launch_states);
  p_land_states = &a2->land_states;
  std::vector<std::string>::vector(&this->land_states, &a2->land_states);
  if ( *(char *)(((unsigned __int64)&a2->position_modify_extra >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->position_modify_extra, p_land_states, &a2->position_modify_extra);
  position_modify_extra = a2->position_modify_extra;
  v39 = *(_BYTE *)(((unsigned __int64)&this->position_modify_extra >> 3) + 0x7FFF8000);
  if ( v39 < 0 )
  {
    LOBYTE(p_land_states) = v39 != 0;
    __asan_report_store1(&this->position_modify_extra, p_land_states, &this->position_modify_extra);
  }
  this->position_modify_extra = position_modify_extra;
};

// Line 590: range 0000000011DAD2E4-0000000011DAD30E
void __cdecl data::ConfigAnimatorMove::~ConfigAnimatorMove(data::ConfigAnimatorMove *const this)
{
  data::ConfigAnimatorMove::~ConfigAnimatorMove(this);
  operator delete(this, 0x130uLL);
};

// Line 590: range 0000000011DAD250-0000000011DAD2E3
void __cdecl data::ConfigAnimatorMove::~ConfigAnimatorMove(data::ConfigAnimatorMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAnimatorMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  std::vector<std::string>::~vector(&this->land_states);
  std::vector<std::string>::~vector(&this->launch_states);
  std::unordered_map<unsigned int,data::PositionModifyState>::~unordered_map(&this->position_modify_state_map);
  std::vector<data::ConfigRaycast>::~vector(&this->raycasts);
  data::ConfigMove::~ConfigMove((data::ConfigMove *const)this);
};

// Line 595: range 0000000011A531F2-0000000011A53202
const char *__cdecl data::ConfigAnimatorMove::getTypeName(const data::ConfigAnimatorMove *const this)
{
  return "ConfigAnimatorMove";
};

// Line 596: range 0000000011A53204-0000000011A533A0
int32_t __cdecl data::ConfigAnimatorMove::getHashNum(const data::ConfigAnimatorMove *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAnimatorMove::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAnimatorMove",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 615: range 0000000011DAD310-0000000011DAD3A2
void __cdecl data::ConfigNPCMove::ConfigNPCMove(data::ConfigNPCMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigAnimatorMove::ConfigAnimatorMove((data::ConfigAnimatorMove *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigNPCMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  v3 = ((_BYTE)this + 41) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->water_check >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->water_check >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->water_check, v3, v4);
  this->water_check = 0;
};

// Line 615: range 0000000011DAD758-0000000011DAD83A
void __cdecl data::ConfigNPCMove::ConfigNPCMove(data::ConfigNPCMove *const this, const data::ConfigNPCMove *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool water_check; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigAnimatorMove::ConfigAnimatorMove(
    (data::ConfigAnimatorMove *const)this,
    (const data::ConfigAnimatorMove *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigNPCMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMove = v2;
  v3 = ((_BYTE)a2 + 41) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->water_check >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->water_check >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->water_check, v3, v4);
  water_check = a2->water_check;
  v6 = *(_BYTE *)(((unsigned __int64)&this->water_check >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 41) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->water_check, v3, v7);
  this->water_check = water_check;
};

// Line 622: range 0000000011E0734A-0000000011E07374
void __cdecl data::ConfigNPCMove::~ConfigNPCMove(data::ConfigNPCMove *const this)
{
  data::ConfigNPCMove::~ConfigNPCMove(this);
  operator delete(this, 0x130uLL);
};

// Line 622: range 0000000011E072FC-0000000011E07349
void __cdecl data::ConfigNPCMove::~ConfigNPCMove(data::ConfigNPCMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigNPCMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  data::ConfigAnimatorMove::~ConfigAnimatorMove((data::ConfigAnimatorMove *const)this);
};

// Line 627: range 0000000011A533A2-0000000011A533B2
const char *__cdecl data::ConfigNPCMove::getTypeName(const data::ConfigNPCMove *const this)
{
  return "ConfigNPCMove";
};

// Line 628: range 0000000011A533B4-0000000011A53550
int32_t __cdecl data::ConfigNPCMove::getHashNum(const data::ConfigNPCMove *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigNPCMove::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigNPCMove",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 644: range 0000000011DADB24-0000000011DADB65
void __cdecl data::ConfigNPCMoveFactory::ConfigNPCMoveFactory(data::ConfigNPCMoveFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigNPCMoveFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigNPCMoveFactory = v2;
};

// Line 667: range 0000000011DAE75A-0000000011DAE9ED
void __cdecl data::ConfigPlatformMove::ConfigPlatformMove(
        data::ConfigPlatformMove *const this,
        const data::ConfigPlatformMove *a2)
{
  int (**v2)(...); // rdx
  float avatar_trigger_event_distance; // xmm0_4
  __int64 v4; // rsi
  bool is_moving_water; // cl
  char v6; // al
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool calc_move_state_in_tick; // cl
  char v10; // dl
  __int64 v11; // rdx
  data::ConfigRoute *p_route; // rsi
  data::MovePlatformDelayType delay_type; // ecx
  char v14; // al

  data::ConfigMove::ConfigMove((data::ConfigMove *const)this, (const data::ConfigMove *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPlatformMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMove = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->avatar_trigger_event_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->avatar_trigger_event_distance >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->avatar_trigger_event_distance);
  }
  avatar_trigger_event_distance = a2->avatar_trigger_event_distance;
  v4 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_trigger_event_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_trigger_event_distance >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->avatar_trigger_event_distance, v4);
  }
  this->avatar_trigger_event_distance = avatar_trigger_event_distance;
  if ( *(char *)(((unsigned __int64)&a2->is_moving_water >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_moving_water, v4, &a2->is_moving_water);
  is_moving_water = a2->is_moving_water;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_moving_water >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store1(&this->is_moving_water, v4, &this->is_moving_water);
  }
  this->is_moving_water = is_moving_water;
  v7 = ((_BYTE)a2 + 97) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&a2->calc_move_state_in_tick >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&a2->calc_move_state_in_tick >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&a2->calc_move_state_in_tick, v7, v8);
  calc_move_state_in_tick = a2->calc_move_state_in_tick;
  v10 = *(_BYTE *)(((unsigned __int64)&this->calc_move_state_in_tick >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this + 97) & 7) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->calc_move_state_in_tick, v7, v11);
  this->calc_move_state_in_tick = calc_move_state_in_tick;
  p_route = &a2->route;
  data::ConfigRoute::ConfigRoute(&this->route, &a2->route);
  if ( *(_BYTE *)(((unsigned __int64)&a2->delay_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->delay_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->delay_type);
  }
  delay_type = a2->delay_type;
  v14 = *(_BYTE *)(((unsigned __int64)&this->delay_type >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(p_route) = v14 != 0;
    __asan_report_store4(&this->delay_type, p_route);
  }
  this->delay_type = delay_type;
};

// Line 678: range 0000000011DAECD6-0000000011DAED33
void __cdecl data::ConfigPlatformMove::~ConfigPlatformMove(data::ConfigPlatformMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPlatformMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  data::ConfigRoute::~ConfigRoute(&this->route);
  data::ConfigMove::~ConfigMove((data::ConfigMove *const)this);
};

// Line 678: range 0000000011DAED34-0000000011DAED5E
void __cdecl data::ConfigPlatformMove::~ConfigPlatformMove(data::ConfigPlatformMove *const this)
{
  data::ConfigPlatformMove::~ConfigPlatformMove(this);
  operator delete(this, 0xC8uLL);
};

// Line 683: range 0000000011A53552-0000000011A53562
const char *__cdecl data::ConfigPlatformMove::getTypeName(const data::ConfigPlatformMove *const this)
{
  return "ConfigPlatformMove";
};

// Line 684: range 0000000011A53564-0000000011A53700
int32_t __cdecl data::ConfigPlatformMove::getHashNum(const data::ConfigPlatformMove *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigPlatformMove::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigPlatformMove",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 703: range 0000000011DAED60-0000000011DAEDAD
void __cdecl data::ConfigScenePropWayPointMove::ConfigScenePropWayPointMove(
        data::ConfigScenePropWayPointMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigPlatformMove::ConfigPlatformMove(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigScenePropWayPointMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
};

// Line 703: range 0000000011DAF16C-0000000011DAF1C4
void __cdecl data::ConfigScenePropWayPointMove::ConfigScenePropWayPointMove(
        data::ConfigScenePropWayPointMove *const this,
        const data::ConfigScenePropWayPointMove *a2)
{
  int (**v2)(...); // rdx

  data::ConfigPlatformMove::ConfigPlatformMove(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigScenePropWayPointMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMove = v2;
};

// Line 709: range 0000000011E072D0-0000000011E072FA
void __cdecl data::ConfigScenePropWayPointMove::~ConfigScenePropWayPointMove(
        data::ConfigScenePropWayPointMove *const this)
{
  data::ConfigScenePropWayPointMove::~ConfigScenePropWayPointMove(this);
  operator delete(this, 0xC8uLL);
};

// Line 709: range 0000000011E07282-0000000011E072CF
void __cdecl data::ConfigScenePropWayPointMove::~ConfigScenePropWayPointMove(
        data::ConfigScenePropWayPointMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigScenePropWayPointMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  data::ConfigPlatformMove::~ConfigPlatformMove(this);
};

// Line 714: range 0000000011A53702-0000000011A53712
const char *__cdecl data::ConfigScenePropWayPointMove::getTypeName(const data::ConfigScenePropWayPointMove *const this)
{
  return "ConfigScenePropWayPointMove";
};

// Line 715: range 0000000011A53714-0000000011A538B0
int32_t __cdecl data::ConfigScenePropWayPointMove::getHashNum(const data::ConfigScenePropWayPointMove *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigScenePropWayPointMove::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigScenePropWayPointMove",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 731: range 0000000011DAF4AE-0000000011DAF4EF
void __cdecl data::ConfigScenePropWayPointMoveFactory::ConfigScenePropWayPointMoveFactory(
        data::ConfigScenePropWayPointMoveFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigScenePropWayPointMoveFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePropWayPointMoveFactory = v2;
};

// Line 739: range 0000000011DAF7F8-0000000011DAF845
void __cdecl data::ConfigScenePropAnimatorMove::ConfigScenePropAnimatorMove(
        data::ConfigScenePropAnimatorMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMove::ConfigMove(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigScenePropAnimatorMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
};

// Line 739: range 0000000011DAFBFA-0000000011DAFC52
void __cdecl data::ConfigScenePropAnimatorMove::ConfigScenePropAnimatorMove(
        data::ConfigScenePropAnimatorMove *const this,
        const data::ConfigScenePropAnimatorMove *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMove::ConfigMove(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigScenePropAnimatorMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMove = v2;
};

// Line 745: range 0000000011E07256-0000000011E07280
void __cdecl data::ConfigScenePropAnimatorMove::~ConfigScenePropAnimatorMove(
        data::ConfigScenePropAnimatorMove *const this)
{
  data::ConfigScenePropAnimatorMove::~ConfigScenePropAnimatorMove(this);
  operator delete(this, 0x60uLL);
};

// Line 745: range 0000000011E07208-0000000011E07255
void __cdecl data::ConfigScenePropAnimatorMove::~ConfigScenePropAnimatorMove(
        data::ConfigScenePropAnimatorMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigScenePropAnimatorMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  data::ConfigMove::~ConfigMove(this);
};

// Line 750: range 0000000011A538B2-0000000011A538C2
const char *__cdecl data::ConfigScenePropAnimatorMove::getTypeName(const data::ConfigScenePropAnimatorMove *const this)
{
  return "ConfigScenePropAnimatorMove";
};

// Line 751: range 0000000011A538C4-0000000011A53A60
int32_t __cdecl data::ConfigScenePropAnimatorMove::getHashNum(const data::ConfigScenePropAnimatorMove *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigScenePropAnimatorMove::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigScenePropAnimatorMove",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 767: range 0000000011DAFF3C-0000000011DAFF7D
void __cdecl data::ConfigScenePropAnimatorMoveFactory::ConfigScenePropAnimatorMoveFactory(
        data::ConfigScenePropAnimatorMoveFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigScenePropAnimatorMoveFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePropAnimatorMoveFactory = v2;
};

// Line 775: range 0000000011DB0286-0000000011DB03F4
void __cdecl data::ConfigScenePropColliderMove::ConfigScenePropColliderMove(
        data::ConfigScenePropColliderMove *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigScenePropColliderMove::ConfigScenePropColliderMove;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  data::ConfigMove::ConfigMove(this);
  v5 = (int (**)(...))(&`vtable for'data::ConfigScenePropColliderMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v5;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    &this->attach_point,
    "ColliderRoot",
    (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 775: range 0000000011DB083E-0000000011DB08D4
void __cdecl data::ConfigScenePropColliderMove::ConfigScenePropColliderMove(
        data::ConfigScenePropColliderMove *const this,
        const data::ConfigScenePropColliderMove *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMove::ConfigMove(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigScenePropColliderMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMove = v2;
  std::string::basic_string(&this->attach_point, &a2->attach_point);
};

// Line 782: range 0000000011E071DC-0000000011E07206
void __cdecl data::ConfigScenePropColliderMove::~ConfigScenePropColliderMove(
        data::ConfigScenePropColliderMove *const this)
{
  data::ConfigScenePropColliderMove::~ConfigScenePropColliderMove(this);
  operator delete(this, 0x80uLL);
};

// Line 782: range 0000000011E0717E-0000000011E071DB
void __cdecl data::ConfigScenePropColliderMove::~ConfigScenePropColliderMove(
        data::ConfigScenePropColliderMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigScenePropColliderMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  std::string::~string(&this->attach_point);
  data::ConfigMove::~ConfigMove(this);
};

// Line 787: range 0000000011A53A62-0000000011A53A72
const char *__cdecl data::ConfigScenePropColliderMove::getTypeName(const data::ConfigScenePropColliderMove *const this)
{
  return "ConfigScenePropColliderMove";
};

// Line 788: range 0000000011A53A74-0000000011A53C10
int32_t __cdecl data::ConfigScenePropColliderMove::getHashNum(const data::ConfigScenePropColliderMove *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigScenePropColliderMove::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigScenePropColliderMove",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 804: range 0000000011DB0BBE-0000000011DB0BFF
void __cdecl data::ConfigScenePropColliderMoveFactory::ConfigScenePropColliderMoveFactory(
        data::ConfigScenePropColliderMoveFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigScenePropColliderMoveFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePropColliderMoveFactory = v2;
};

// Line 812: range 0000000011DB0F08-0000000011DB0F55
void __cdecl data::ConfigWindmillMove::ConfigWindmillMove(data::ConfigWindmillMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMove::ConfigMove(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWindmillMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
};

// Line 812: range 0000000011DB130A-0000000011DB1362
void __cdecl data::ConfigWindmillMove::ConfigWindmillMove(
        data::ConfigWindmillMove *const this,
        const data::ConfigWindmillMove *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMove::ConfigMove(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWindmillMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMove = v2;
};

// Line 818: range 0000000011E07152-0000000011E0717C
void __cdecl data::ConfigWindmillMove::~ConfigWindmillMove(data::ConfigWindmillMove *const this)
{
  data::ConfigWindmillMove::~ConfigWindmillMove(this);
  operator delete(this, 0x60uLL);
};

// Line 818: range 0000000011E07104-0000000011E07151
void __cdecl data::ConfigWindmillMove::~ConfigWindmillMove(data::ConfigWindmillMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWindmillMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  data::ConfigMove::~ConfigMove(this);
};

// Line 823: range 0000000011A53C12-0000000011A53C22
const char *__cdecl data::ConfigWindmillMove::getTypeName(const data::ConfigWindmillMove *const this)
{
  return "ConfigWindmillMove";
};

// Line 824: range 0000000011A53C24-0000000011A53DC0
int32_t __cdecl data::ConfigWindmillMove::getHashNum(const data::ConfigWindmillMove *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigWindmillMove::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWindmillMove",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 840: range 0000000011DB164C-0000000011DB168D
void __cdecl data::ConfigWindmillMoveFactory::ConfigWindmillMoveFactory(data::ConfigWindmillMoveFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWindmillMoveFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWindmillMoveFactory = v2;
};

// Line 848: range 0000000011DA3B2C-0000000011DA3BB8
void __cdecl data::ConfigBulletMoveAngle::ConfigBulletMoveAngle(data::ConfigBulletMoveAngle *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::ConfigBulletMoveAngle>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigBulletMoveAngle>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBulletMoveAngle + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBulletMoveAngle = v2;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 848: range 0000000011DB1A4A-0000000011DB1B20
void __cdecl data::ConfigBulletMoveAngle::ConfigBulletMoveAngle(
        data::ConfigBulletMoveAngle *const this,
        const data::ConfigBulletMoveAngle *a2)
{
  std::enable_shared_from_this<data::ConfigBulletMoveAngle> *v2; // rsi
  int (**v3)(...); // rdx
  bool is_json_loaded; // cl
  char v5; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigBulletMoveAngle>;
  std::enable_shared_from_this<data::ConfigBulletMoveAngle>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigBulletMoveAngle>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigBulletMoveAngle + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigBulletMoveAngle = v3;
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, v2, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 855: range 0000000011DB1D6A-0000000011DB1DBB
void __cdecl data::ConfigBulletMoveAngle::~ConfigBulletMoveAngle(data::ConfigBulletMoveAngle *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBulletMoveAngle + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBulletMoveAngle = v2;
  std::enable_shared_from_this<data::ConfigBulletMoveAngle>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigBulletMoveAngle>);
};

// Line 855: range 0000000011DB1DBC-0000000011DB1DE6
void __cdecl data::ConfigBulletMoveAngle::~ConfigBulletMoveAngle(data::ConfigBulletMoveAngle *const this)
{
  data::ConfigBulletMoveAngle::~ConfigBulletMoveAngle(this);
  operator delete(this, 0x20uLL);
};

// Line 860: range 0000000011A53DC2-0000000011A53DD2
const char *__cdecl data::ConfigBulletMoveAngle::getTypeName(const data::ConfigBulletMoveAngle *const this)
{
  return "ConfigBulletMoveAngle";
};

// Line 861: range 0000000011A53DD4-0000000011A53F70
int32_t __cdecl data::ConfigBulletMoveAngle::getHashNum(const data::ConfigBulletMoveAngle *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigBulletMoveAngle::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBulletMoveAngle",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 880: range 0000000011DB1DE8-0000000011DB1EBC
void __cdecl data::ConfigBulletMoveAngleByVelocity::ConfigBulletMoveAngleByVelocity(
        data::ConfigBulletMoveAngleByVelocity *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigBulletMoveAngle::ConfigBulletMoveAngle((data::ConfigBulletMoveAngle *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBulletMoveAngleByVelocity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBulletMoveAngle = v2;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->trace_lerp_coef >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trace_lerp_coef >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->trace_lerp_coef, v3);
  }
  this->trace_lerp_coef = 10.0;
  if ( *(char *)(((unsigned __int64)&this->is_smooth_rotation >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_smooth_rotation, v3, &this->is_smooth_rotation);
  this->is_smooth_rotation = 0;
};

// Line 880: range 0000000011DB23BE-0000000011DB2514
void __cdecl data::ConfigBulletMoveAngleByVelocity::ConfigBulletMoveAngleByVelocity(
        data::ConfigBulletMoveAngleByVelocity *const this,
        const data::ConfigBulletMoveAngleByVelocity *a2)
{
  int (**v2)(...); // rdx
  float trace_lerp_coef; // xmm0_4
  __int64 v4; // rsi
  bool is_smooth_rotation; // cl
  char v6; // al

  data::ConfigBulletMoveAngle::ConfigBulletMoveAngle(
    (data::ConfigBulletMoveAngle *const)this,
    (const data::ConfigBulletMoveAngle *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBulletMoveAngleByVelocity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBulletMoveAngle = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->trace_lerp_coef >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->trace_lerp_coef >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->trace_lerp_coef);
  }
  trace_lerp_coef = a2->trace_lerp_coef;
  v4 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->trace_lerp_coef >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trace_lerp_coef >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->trace_lerp_coef, v4);
  }
  this->trace_lerp_coef = trace_lerp_coef;
  if ( *(char *)(((unsigned __int64)&a2->is_smooth_rotation >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_smooth_rotation, v4, &a2->is_smooth_rotation);
  is_smooth_rotation = a2->is_smooth_rotation;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_smooth_rotation >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store1(&this->is_smooth_rotation, v4, &this->is_smooth_rotation);
  }
  this->is_smooth_rotation = is_smooth_rotation;
};

// Line 888: range 0000000011E0708A-0000000011E070D7
void __cdecl data::ConfigBulletMoveAngleByVelocity::~ConfigBulletMoveAngleByVelocity(
        data::ConfigBulletMoveAngleByVelocity *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBulletMoveAngleByVelocity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBulletMoveAngle = v2;
  data::ConfigBulletMoveAngle::~ConfigBulletMoveAngle((data::ConfigBulletMoveAngle *const)this);
};

// Line 888: range 0000000011E070D8-0000000011E07102
void __cdecl data::ConfigBulletMoveAngleByVelocity::~ConfigBulletMoveAngleByVelocity(
        data::ConfigBulletMoveAngleByVelocity *const this)
{
  data::ConfigBulletMoveAngleByVelocity::~ConfigBulletMoveAngleByVelocity(this);
  operator delete(this, 0x28uLL);
};

// Line 893: range 0000000011A53F72-0000000011A53F82
const char *__cdecl data::ConfigBulletMoveAngleByVelocity::getTypeName(
        const data::ConfigBulletMoveAngleByVelocity *const this)
{
  return "ConfigBulletMoveAngleByVelocity";
};

// Line 894: range 0000000011A53F84-0000000011A54120
int32_t __cdecl data::ConfigBulletMoveAngleByVelocity::getHashNum(
        const data::ConfigBulletMoveAngleByVelocity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigBulletMoveAngleByVelocity::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBulletMoveAngleByVelocity",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 910: range 0000000011DB275E-0000000011DB279F
void __cdecl data::ConfigBulletMoveAngleByVelocityFactory::ConfigBulletMoveAngleByVelocityFactory(
        data::ConfigBulletMoveAngleByVelocityFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBulletMoveAngleByVelocityFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBulletMoveAngleByVelocityFactory = v2;
};

// Line 918: range 0000000011DB2AA8-0000000011DB2B05
void __cdecl data::ConfigBulletMoveAngleRotating::ConfigBulletMoveAngleRotating(
        data::ConfigBulletMoveAngleRotating *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBulletMoveAngle::ConfigBulletMoveAngle((data::ConfigBulletMoveAngle *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBulletMoveAngleRotating + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBulletMoveAngle = v2;
  data::Vector::Vector(&this->angular_velocity);
};

// Line 918: range 0000000011DB2EE0-0000000011DB302E
void __cdecl data::ConfigBulletMoveAngleRotating::ConfigBulletMoveAngleRotating(
        data::ConfigBulletMoveAngleRotating *const this,
        const data::ConfigBulletMoveAngleRotating *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rdx

  data::ConfigBulletMoveAngle::ConfigBulletMoveAngle(
    (data::ConfigBulletMoveAngle *const)this,
    (const data::ConfigBulletMoveAngle *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBulletMoveAngleRotating + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBulletMoveAngle = v2;
  if ( (((unsigned __int8)this + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&this->angular_velocity >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->angular_velocity >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->angular_velocity.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 43) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->angular_velocity.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->angular_velocity, 16LL);
  }
  if ( (((unsigned __int8)a2 + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->angular_velocity >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->angular_velocity >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->angular_velocity.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 43) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->angular_velocity.is_json_loaded + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->angular_velocity, 16LL);
  }
  v3 = *(_QWORD *)&a2->angular_velocity.z;
  *(_QWORD *)&this->angular_velocity.x = *(_QWORD *)&a2->angular_velocity.x;
  *(_QWORD *)&this->angular_velocity.z = v3;
};

// Line 925: range 0000000011E0705E-0000000011E07088
void __cdecl data::ConfigBulletMoveAngleRotating::~ConfigBulletMoveAngleRotating(
        data::ConfigBulletMoveAngleRotating *const this)
{
  data::ConfigBulletMoveAngleRotating::~ConfigBulletMoveAngleRotating(this);
  operator delete(this, 0x30uLL);
};

// Line 925: range 0000000011E07010-0000000011E0705D
void __cdecl data::ConfigBulletMoveAngleRotating::~ConfigBulletMoveAngleRotating(
        data::ConfigBulletMoveAngleRotating *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBulletMoveAngleRotating + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBulletMoveAngle = v2;
  data::ConfigBulletMoveAngle::~ConfigBulletMoveAngle((data::ConfigBulletMoveAngle *const)this);
};

// Line 930: range 0000000011A54122-0000000011A54132
const char *__cdecl data::ConfigBulletMoveAngleRotating::getTypeName(
        const data::ConfigBulletMoveAngleRotating *const this)
{
  return "ConfigBulletMoveAngleRotating";
};

// Line 931: range 0000000011A54134-0000000011A542D0
int32_t __cdecl data::ConfigBulletMoveAngleRotating::getHashNum(const data::ConfigBulletMoveAngleRotating *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigBulletMoveAngleRotating::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBulletMoveAngleRotating",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 947: range 0000000011DB3278-0000000011DB32B9
void __cdecl data::ConfigBulletMoveAngleRotatingFactory::ConfigBulletMoveAngleRotatingFactory(
        data::ConfigBulletMoveAngleRotatingFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBulletMoveAngleRotatingFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBulletMoveAngleRotatingFactory = v2;
};

// Line 971: range 0000000011DB3722-0000000011DB3997
void __cdecl data::ConfigMoveStickToGround::ConfigMoveStickToGround(data::ConfigMoveStickToGround *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->max_step_height = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_slope_angle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_slope_angle >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_slope_angle, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->max_slope_angle = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->height_to_ground >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->height_to_ground >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->height_to_ground, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->height_to_ground = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->flexible_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->flexible_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->flexible_range, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->flexible_range = 0.0;
  v1 = ((_BYTE)this + 16) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_stick_to_water >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_stick_to_water >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_stick_to_water, v1, v2);
  this->is_stick_to_water = 0;
  v3 = ((_BYTE)this + 17) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->ignore_barrier >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->ignore_barrier >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->ignore_barrier, v3, v4);
  this->ignore_barrier = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->unstick_when_down_slide >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->unstick_when_down_slide >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->unstick_when_down_slide, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->unstick_when_down_slide = Destroy;
  if ( *(_BYTE *)(((unsigned __int64)&this->unstick_when_up_slide >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->unstick_when_up_slide >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->unstick_when_up_slide, (((_BYTE)this + 24) & 7u) + 3);
  }
  this->unstick_when_up_slide = Destroy;
  v5 = ((_BYTE)this + 28) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_json_loaded, v5, v6);
  this->is_json_loaded = 0;
};

// Line 1001: range 0000000011DB3998-0000000011DB3D48
void __cdecl data::ConfigBulletMove::ConfigBulletMove(data::ConfigBulletMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx

  data::ConfigMove::ConfigMove((data::ConfigMove *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBulletMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  v3 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->speed, v3);
  }
  this->speed = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_speed, v3);
  }
  this->max_speed = 1000.0;
  v4 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->min_speed, v4);
  }
  this->min_speed = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->angler_velocity >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->angler_velocity >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->angler_velocity, v4);
  }
  this->angler_velocity = 3600.0;
  v5 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->acceleration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->acceleration >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->acceleration, v5);
  }
  this->acceleration = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->acceleration_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->acceleration_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->acceleration_time, v5);
  }
  this->acceleration_time = 3.4028235e38;
  v6 = ((_BYTE)this + 116) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->can_born_in_water >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->can_born_in_water >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->can_born_in_water, v6, v7);
  this->can_born_in_water = 0;
  if ( *(_WORD *)(((unsigned __int64)&this->update_angle >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBulletMoveAngle>();
  if ( *(_BYTE *)(((unsigned __int64)&this->delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->delay, v6);
  }
  this->delay = 0.0;
  data::ConfigMoveStickToGround::ConfigMoveStickToGround(&this->stick_to_ground);
  v8 = ((_BYTE)this - 84) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->sync_to_remote >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->sync_to_remote >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->sync_to_remote, v8, v9);
  this->sync_to_remote = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->blocked_by_monster_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->blocked_by_monster_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->blocked_by_monster_radius, v8);
  }
  this->blocked_by_monster_radius = 0.0;
  v10 = ((_BYTE)this - 76) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&this->use_default_dir_when_opposite >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&this->use_default_dir_when_opposite >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->use_default_dir_when_opposite, v10, v11);
  this->use_default_dir_when_opposite = 1;
};

// Line 1001: range 0000000011DB419E-0000000011DB48CB
void __cdecl data::ConfigBulletMove::ConfigBulletMove(
        data::ConfigBulletMove *const this,
        const data::ConfigBulletMove *a2)
{
  int (**v2)(...); // rdx
  float speed; // xmm0_4
  __int64 v4; // rsi
  float max_speed; // xmm0_4
  float min_speed; // xmm0_4
  __int64 v7; // rsi
  float angler_velocity; // xmm0_4
  float acceleration; // xmm0_4
  __int64 v10; // rsi
  float acceleration_time; // xmm0_4
  __int64 v12; // rsi
  __int64 v13; // rdx
  bool can_born_in_water; // cl
  char v15; // dl
  __int64 v16; // rdx
  float delay; // xmm0_4
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdx
  bool sync_to_remote; // cl
  char v23; // dl
  __int64 v24; // rdx
  float blocked_by_monster_radius; // xmm0_4
  __int64 v26; // rsi
  __int64 v27; // rdx
  bool use_default_dir_when_opposite; // cl
  char v29; // dl
  __int64 v30; // rdx

  data::ConfigMove::ConfigMove((data::ConfigMove *const)this, (const data::ConfigMove *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBulletMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMove = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->speed);
  }
  speed = a2->speed;
  v4 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->speed, v4);
  }
  this->speed = speed;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->max_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->max_speed);
  }
  max_speed = a2->max_speed;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_speed, v4);
  }
  this->max_speed = max_speed;
  if ( *(_BYTE *)(((unsigned __int64)&a2->min_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->min_speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->min_speed);
  }
  min_speed = a2->min_speed;
  v7 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->min_speed, v7);
  }
  this->min_speed = min_speed;
  if ( *(_BYTE *)(((unsigned __int64)&a2->angler_velocity >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->angler_velocity >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->angler_velocity);
  }
  angler_velocity = a2->angler_velocity;
  if ( *(_BYTE *)(((unsigned __int64)&this->angler_velocity >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->angler_velocity >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->angler_velocity, v7);
  }
  this->angler_velocity = angler_velocity;
  if ( *(_BYTE *)(((unsigned __int64)&a2->acceleration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->acceleration >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->acceleration);
  }
  acceleration = a2->acceleration;
  v10 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->acceleration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->acceleration >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->acceleration, v10);
  }
  this->acceleration = acceleration;
  if ( *(_BYTE *)(((unsigned __int64)&a2->acceleration_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->acceleration_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->acceleration_time);
  }
  acceleration_time = a2->acceleration_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->acceleration_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->acceleration_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->acceleration_time, v10);
  }
  this->acceleration_time = acceleration_time;
  v12 = ((_BYTE)a2 + 116) & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)&a2->can_born_in_water >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&a2->can_born_in_water >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_load1(&a2->can_born_in_water, v12, v13);
  can_born_in_water = a2->can_born_in_water;
  v15 = *(_BYTE *)(((unsigned __int64)&this->can_born_in_water >> 3) + 0x7FFF8000);
  LOBYTE(v12) = v15 != 0;
  v16 = (v15 != 0) & (unsigned __int8)((((unsigned __int8)this + 116) & 7) >= v15);
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->can_born_in_water, v12, v16);
  this->can_born_in_water = can_born_in_water;
  std::shared_ptr<data::ConfigBulletMoveAngle>::shared_ptr(&this->update_angle, &a2->update_angle);
  if ( *(_BYTE *)(((unsigned __int64)&a2->delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->delay);
  }
  delay = a2->delay;
  if ( *(_BYTE *)(((unsigned __int64)&this->delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->delay, &a2->update_angle);
  }
  this->delay = delay;
  if ( (((unsigned __int8)this - 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->stick_to_ground >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->stick_to_ground >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->stick_to_ground.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 85) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->stick_to_ground.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->stick_to_ground, 32LL);
  }
  if ( (((unsigned __int8)a2 - 116) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->stick_to_ground >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->stick_to_ground >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->stick_to_ground.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 85) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->stick_to_ground.is_json_loaded + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->stick_to_ground, 32LL);
  }
  v18 = *(_QWORD *)&a2->stick_to_ground.height_to_ground;
  *(_QWORD *)&this->stick_to_ground.max_step_height = *(_QWORD *)&a2->stick_to_ground.max_step_height;
  *(_QWORD *)&this->stick_to_ground.height_to_ground = v18;
  v19 = *(_QWORD *)&a2->stick_to_ground.unstick_when_up_slide;
  *(_QWORD *)&this->stick_to_ground.is_stick_to_water = *(_QWORD *)&a2->stick_to_ground.is_stick_to_water;
  *(_QWORD *)&this->stick_to_ground.unstick_when_up_slide = v19;
  v20 = ((_BYTE)a2 - 84) & 7;
  v21 = (*(_BYTE *)(((unsigned __int64)&a2->sync_to_remote >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v20 >= *(_BYTE *)(((unsigned __int64)&a2->sync_to_remote >> 3) + 0x7FFF8000));
  if ( (_BYTE)v21 )
    __asan_report_load1(&a2->sync_to_remote, v20, v21);
  sync_to_remote = a2->sync_to_remote;
  v23 = *(_BYTE *)(((unsigned __int64)&this->sync_to_remote >> 3) + 0x7FFF8000);
  LOBYTE(v20) = v23 != 0;
  v24 = (v23 != 0) & (unsigned __int8)((((unsigned __int8)this - 84) & 7) >= v23);
  if ( (_BYTE)v24 )
    __asan_report_store1(&this->sync_to_remote, v20, v24);
  this->sync_to_remote = sync_to_remote;
  if ( *(_BYTE *)(((unsigned __int64)&a2->blocked_by_monster_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->blocked_by_monster_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->blocked_by_monster_radius);
  }
  blocked_by_monster_radius = a2->blocked_by_monster_radius;
  if ( *(_BYTE *)(((unsigned __int64)&this->blocked_by_monster_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->blocked_by_monster_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->blocked_by_monster_radius, v20);
  }
  this->blocked_by_monster_radius = blocked_by_monster_radius;
  v26 = ((_BYTE)a2 - 76) & 7;
  v27 = (*(_BYTE *)(((unsigned __int64)&a2->use_default_dir_when_opposite >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v26 >= *(_BYTE *)(((unsigned __int64)&a2->use_default_dir_when_opposite >> 3) + 0x7FFF8000));
  if ( (_BYTE)v27 )
    __asan_report_load1(&a2->use_default_dir_when_opposite, v26, v27);
  use_default_dir_when_opposite = a2->use_default_dir_when_opposite;
  v29 = *(_BYTE *)(((unsigned __int64)&this->use_default_dir_when_opposite >> 3) + 0x7FFF8000);
  LOBYTE(v26) = v29 != 0;
  v30 = (v29 != 0) & (unsigned __int8)((((unsigned __int8)this - 76) & 7) >= v29);
  if ( (_BYTE)v30 )
    __asan_report_store1(&this->use_default_dir_when_opposite, v26, v30);
  this->use_default_dir_when_opposite = use_default_dir_when_opposite;
};

// Line 1020: range 0000000011DB4BB4-0000000011DB4C11
void __cdecl data::ConfigBulletMove::~ConfigBulletMove(data::ConfigBulletMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBulletMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  std::shared_ptr<data::ConfigBulletMoveAngle>::~shared_ptr(&this->update_angle);
  data::ConfigMove::~ConfigMove((data::ConfigMove *const)this);
};

// Line 1020: range 0000000011DB4C12-0000000011DB4C3C
void __cdecl data::ConfigBulletMove::~ConfigBulletMove(data::ConfigBulletMove *const this)
{
  data::ConfigBulletMove::~ConfigBulletMove(this);
  operator delete(this, 0xB8uLL);
};

// Line 1025: range 0000000011A5430E-0000000011A5431E
const char *__cdecl data::ConfigBulletMove::getTypeName(const data::ConfigBulletMove *const this)
{
  return "ConfigBulletMove";
};

// Line 1026: range 0000000011A54320-0000000011A544BC
int32_t __cdecl data::ConfigBulletMove::getHashNum(const data::ConfigBulletMove *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigBulletMove::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBulletMove",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1045: range 0000000011DB4C3E-0000000011DB4C8B
void __cdecl data::ConfigLinerBulletMove::ConfigLinerBulletMove(data::ConfigLinerBulletMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBulletMove::ConfigBulletMove(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLinerBulletMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
};

// Line 1045: range 0000000011DB50E0-0000000011DB5138
void __cdecl data::ConfigLinerBulletMove::ConfigLinerBulletMove(
        data::ConfigLinerBulletMove *const this,
        const data::ConfigLinerBulletMove *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBulletMove::ConfigBulletMove(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLinerBulletMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMove = v2;
};

// Line 1051: range 0000000011DBD99C-0000000011DBD9C6
void __cdecl data::ConfigLinerBulletMove::~ConfigLinerBulletMove(data::ConfigLinerBulletMove *const this)
{
  data::ConfigLinerBulletMove::~ConfigLinerBulletMove(this);
  operator delete(this, 0xB8uLL);
};

// Line 1051: range 0000000011DBD94E-0000000011DBD99B
void __cdecl data::ConfigLinerBulletMove::~ConfigLinerBulletMove(data::ConfigLinerBulletMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLinerBulletMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  data::ConfigBulletMove::~ConfigBulletMove(this);
};

// Line 1056: range 0000000011A544BE-0000000011A544CE
const char *__cdecl data::ConfigLinerBulletMove::getTypeName(const data::ConfigLinerBulletMove *const this)
{
  return "ConfigLinerBulletMove";
};

// Line 1057: range 0000000011A544D0-0000000011A5466C
int32_t __cdecl data::ConfigLinerBulletMove::getHashNum(const data::ConfigLinerBulletMove *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigLinerBulletMove::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigLinerBulletMove",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1076: range 0000000011DB5422-0000000011DB546F
void __cdecl data::ConfigAnimationBulletMove::ConfigAnimationBulletMove(data::ConfigAnimationBulletMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBulletMove::ConfigBulletMove(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAnimationBulletMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
};

// Line 1076: range 0000000011DB58C4-0000000011DB591C
void __cdecl data::ConfigAnimationBulletMove::ConfigAnimationBulletMove(
        data::ConfigAnimationBulletMove *const this,
        const data::ConfigAnimationBulletMove *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBulletMove::ConfigBulletMove(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAnimationBulletMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMove = v2;
};

// Line 1082: range 0000000011E06FE4-0000000011E0700E
void __cdecl data::ConfigAnimationBulletMove::~ConfigAnimationBulletMove(data::ConfigAnimationBulletMove *const this)
{
  data::ConfigAnimationBulletMove::~ConfigAnimationBulletMove(this);
  operator delete(this, 0xB8uLL);
};

// Line 1082: range 0000000011E06F96-0000000011E06FE3
void __cdecl data::ConfigAnimationBulletMove::~ConfigAnimationBulletMove(data::ConfigAnimationBulletMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAnimationBulletMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  data::ConfigBulletMove::~ConfigBulletMove(this);
};

// Line 1087: range 0000000011A5466E-0000000011A5467E
const char *__cdecl data::ConfigAnimationBulletMove::getTypeName(const data::ConfigAnimationBulletMove *const this)
{
  return "ConfigAnimationBulletMove";
};

// Line 1088: range 0000000011A54680-0000000011A5481C
int32_t __cdecl data::ConfigAnimationBulletMove::getHashNum(const data::ConfigAnimationBulletMove *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAnimationBulletMove::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAnimationBulletMove",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1104: range 0000000011DB5C06-0000000011DB5C47
void __cdecl data::ConfigAnimationBulletMoveFactory::ConfigAnimationBulletMoveFactory(
        data::ConfigAnimationBulletMoveFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAnimationBulletMoveFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAnimationBulletMoveFactory = v2;
};

// Line 1112: range 0000000011DB5F50-0000000011DB60B1
void __cdecl data::ConfigSurroundBulletMove::ConfigSurroundBulletMove(data::ConfigSurroundBulletMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx

  data::ConfigBulletMove::ConfigBulletMove((data::ConfigBulletMove *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSurroundBulletMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  v3 = ((_BYTE)this - 75) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->clockwise >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->clockwise >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->clockwise, v3, v4);
  this->clockwise = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->radius, v3);
  }
  this->radius = 0.0;
  v5 = ((_BYTE)this - 68) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->trace_on_yaxis >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->trace_on_yaxis >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->trace_on_yaxis, v5, v6);
  this->trace_on_yaxis = 0;
  v7 = ((_BYTE)this - 67) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->destroy_when_target_die >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->destroy_when_target_die >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->destroy_when_target_die, v7, v8);
  this->destroy_when_target_die = 0;
};

// Line 1112: range 0000000011DB6500-0000000011DB6778
void __cdecl data::ConfigSurroundBulletMove::ConfigSurroundBulletMove(
        data::ConfigSurroundBulletMove *const this,
        const data::ConfigSurroundBulletMove *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool clockwise; // cl
  char v6; // dl
  __int64 v7; // rdx
  float radius; // xmm0_4
  __int64 v9; // rsi
  __int64 v10; // rdx
  bool trace_on_yaxis; // cl
  char v12; // dl
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
  bool destroy_when_target_die; // cl
  char v17; // dl
  __int64 v18; // rdx

  data::ConfigBulletMove::ConfigBulletMove((data::ConfigBulletMove *const)this, (const data::ConfigBulletMove *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSurroundBulletMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMove = v2;
  v3 = ((_BYTE)a2 - 75) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->clockwise >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->clockwise >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->clockwise, v3, v4);
  clockwise = a2->clockwise;
  v6 = *(_BYTE *)(((unsigned __int64)&this->clockwise >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this - 75) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->clockwise, v3, v7);
  this->clockwise = clockwise;
  if ( *(_BYTE *)(((unsigned __int64)&a2->radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->radius);
  }
  radius = a2->radius;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->radius, v3);
  }
  this->radius = radius;
  v9 = ((_BYTE)a2 - 68) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&a2->trace_on_yaxis >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&a2->trace_on_yaxis >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_load1(&a2->trace_on_yaxis, v9, v10);
  trace_on_yaxis = a2->trace_on_yaxis;
  v12 = *(_BYTE *)(((unsigned __int64)&this->trace_on_yaxis >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((((unsigned __int8)this - 68) & 7) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->trace_on_yaxis, v9, v13);
  this->trace_on_yaxis = trace_on_yaxis;
  v14 = ((_BYTE)a2 - 67) & 7;
  v15 = (*(_BYTE *)(((unsigned __int64)&a2->destroy_when_target_die >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)&a2->destroy_when_target_die >> 3) + 0x7FFF8000));
  if ( (_BYTE)v15 )
    __asan_report_load1(&a2->destroy_when_target_die, v14, v15);
  destroy_when_target_die = a2->destroy_when_target_die;
  v17 = *(_BYTE *)(((unsigned __int64)&this->destroy_when_target_die >> 3) + 0x7FFF8000);
  LOBYTE(v14) = v17 != 0;
  v18 = (v17 != 0) & (unsigned __int8)((((unsigned __int8)this - 67) & 7) >= v17);
  if ( (_BYTE)v18 )
    __asan_report_store1(&this->destroy_when_target_die, v14, v18);
  this->destroy_when_target_die = destroy_when_target_die;
};

// Line 1122: range 0000000011E06F6A-0000000011E06F94
void __cdecl data::ConfigSurroundBulletMove::~ConfigSurroundBulletMove(data::ConfigSurroundBulletMove *const this)
{
  data::ConfigSurroundBulletMove::~ConfigSurroundBulletMove(this);
  operator delete(this, 0xC0uLL);
};

// Line 1122: range 0000000011E06F1C-0000000011E06F69
void __cdecl data::ConfigSurroundBulletMove::~ConfigSurroundBulletMove(data::ConfigSurroundBulletMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSurroundBulletMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  data::ConfigBulletMove::~ConfigBulletMove((data::ConfigBulletMove *const)this);
};

// Line 1127: range 0000000011A5481E-0000000011A5482E
const char *__cdecl data::ConfigSurroundBulletMove::getTypeName(const data::ConfigSurroundBulletMove *const this)
{
  return "ConfigSurroundBulletMove";
};

// Line 1128: range 0000000011A54830-0000000011A549CC
int32_t __cdecl data::ConfigSurroundBulletMove::getHashNum(const data::ConfigSurroundBulletMove *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigSurroundBulletMove::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigSurroundBulletMove",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1144: range 0000000011DB6A62-0000000011DB6AA3
void __cdecl data::ConfigSurroundBulletMoveFactory::ConfigSurroundBulletMoveFactory(
        data::ConfigSurroundBulletMoveFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSurroundBulletMoveFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigSurroundBulletMoveFactory = v2;
};

// Line 1152: range 0000000011DB6DAC-0000000011DB6FAB
void __cdecl data::ConfigPinballBulletMove::ConfigPinballBulletMove(data::ConfigPinballBulletMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi

  data::ConfigBulletMove::ConfigBulletMove(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPinballBulletMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->radius, v1);
  }
  this->radius = 0.0;
  v3 = ((_BYTE)this - 68) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->trace_on_yaxis >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->trace_on_yaxis >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->trace_on_yaxis, v3, v4);
  this->trace_on_yaxis = 0;
  v5 = ((_BYTE)this - 67) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->destroy_when_target_die >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->destroy_when_target_die >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->destroy_when_target_die, v5, v6);
  this->destroy_when_target_die = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->random_back_angle_added >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->random_back_angle_added >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->random_back_angle_added, v5);
  }
  this->random_back_angle_added = 30.0;
  v7 = (((_BYTE)this - 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->rebound_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rebound_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rebound_interval, v7);
  }
  this->rebound_interval = 0.1;
  if ( *(_BYTE *)(((unsigned __int64)&this->out_of_range_fix_cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->out_of_range_fix_cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->out_of_range_fix_cd, v7);
  }
  this->out_of_range_fix_cd = 2.0;
};

// Line 1152: range 0000000011DB73F4-0000000011DB7778
void __cdecl data::ConfigPinballBulletMove::ConfigPinballBulletMove(
        data::ConfigPinballBulletMove *const this,
        const data::ConfigPinballBulletMove *a2)
{
  int (**v2)(...); // rdx
  float radius; // xmm0_4
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool trace_on_yaxis; // cl
  char v7; // dl
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  bool destroy_when_target_die; // cl
  char v12; // dl
  __int64 v13; // rdx
  float random_back_angle_added; // xmm0_4
  float rebound_interval; // xmm0_4
  __int64 v16; // rsi
  float out_of_range_fix_cd; // xmm0_4

  data::ConfigBulletMove::ConfigBulletMove(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPinballBulletMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMove = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->radius);
  }
  radius = a2->radius;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->radius, a2);
  }
  this->radius = radius;
  v4 = ((_BYTE)a2 - 68) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&a2->trace_on_yaxis >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&a2->trace_on_yaxis >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&a2->trace_on_yaxis, v4, v5);
  trace_on_yaxis = a2->trace_on_yaxis;
  v7 = *(_BYTE *)(((unsigned __int64)&this->trace_on_yaxis >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this - 68) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->trace_on_yaxis, v4, v8);
  this->trace_on_yaxis = trace_on_yaxis;
  v9 = ((_BYTE)a2 - 67) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&a2->destroy_when_target_die >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&a2->destroy_when_target_die >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_load1(&a2->destroy_when_target_die, v9, v10);
  destroy_when_target_die = a2->destroy_when_target_die;
  v12 = *(_BYTE *)(((unsigned __int64)&this->destroy_when_target_die >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((((unsigned __int8)this - 67) & 7) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->destroy_when_target_die, v9, v13);
  this->destroy_when_target_die = destroy_when_target_die;
  if ( *(_BYTE *)(((unsigned __int64)&a2->random_back_angle_added >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->random_back_angle_added >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->random_back_angle_added);
  }
  random_back_angle_added = a2->random_back_angle_added;
  if ( *(_BYTE *)(((unsigned __int64)&this->random_back_angle_added >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->random_back_angle_added >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->random_back_angle_added, v9);
  }
  this->random_back_angle_added = random_back_angle_added;
  if ( *(_BYTE *)(((unsigned __int64)&a2->rebound_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->rebound_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->rebound_interval);
  }
  rebound_interval = a2->rebound_interval;
  v16 = (((_BYTE)this - 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->rebound_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rebound_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rebound_interval, v16);
  }
  this->rebound_interval = rebound_interval;
  if ( *(_BYTE *)(((unsigned __int64)&a2->out_of_range_fix_cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->out_of_range_fix_cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->out_of_range_fix_cd);
  }
  out_of_range_fix_cd = a2->out_of_range_fix_cd;
  if ( *(_BYTE *)(((unsigned __int64)&this->out_of_range_fix_cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->out_of_range_fix_cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->out_of_range_fix_cd, v16);
  }
  this->out_of_range_fix_cd = out_of_range_fix_cd;
};

// Line 1164: range 0000000011E06EF0-0000000011E06F1A
void __cdecl data::ConfigPinballBulletMove::~ConfigPinballBulletMove(data::ConfigPinballBulletMove *const this)
{
  data::ConfigPinballBulletMove::~ConfigPinballBulletMove(this);
  operator delete(this, 0xD0uLL);
};

// Line 1164: range 0000000011E06EA2-0000000011E06EEF
void __cdecl data::ConfigPinballBulletMove::~ConfigPinballBulletMove(data::ConfigPinballBulletMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPinballBulletMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  data::ConfigBulletMove::~ConfigBulletMove(this);
};

// Line 1169: range 0000000011A549CE-0000000011A549DE
const char *__cdecl data::ConfigPinballBulletMove::getTypeName(const data::ConfigPinballBulletMove *const this)
{
  return "ConfigPinballBulletMove";
};

// Line 1170: range 0000000011A549E0-0000000011A54B7C
int32_t __cdecl data::ConfigPinballBulletMove::getHashNum(const data::ConfigPinballBulletMove *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigPinballBulletMove::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigPinballBulletMove",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1186: range 0000000011DB7A62-0000000011DB7AA3
void __cdecl data::ConfigPinballBulletMoveFactory::ConfigPinballBulletMoveFactory(
        data::ConfigPinballBulletMoveFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPinballBulletMoveFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPinballBulletMoveFactory = v2;
};

// Line 1194: range 0000000011DB7E2A-0000000011DB7F8F
void __cdecl data::ConfigParabolaBulletMoveCorrection::ConfigParabolaBulletMoveCorrection(
        data::ConfigParabolaBulletMoveCorrection *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  data::ConfigMoveCorrection::ConfigMoveCorrection((data::ConfigMoveCorrection *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigParabolaBulletMoveCorrection + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMoveCorrection = v2;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->deviation >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->deviation >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->deviation, v3);
  }
  this->deviation = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fix_angle_of_ver >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fix_angle_of_ver >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fix_angle_of_ver, v3);
  }
  this->fix_angle_of_ver = 0.0;
  v4 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->min_speed, v4);
  }
  this->min_speed = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_speed, v4);
  }
  this->max_speed = 30.0;
};

// Line 1194: range 0000000011DB836A-0000000011DB85C2
void __cdecl data::ConfigParabolaBulletMoveCorrection::ConfigParabolaBulletMoveCorrection(
        data::ConfigParabolaBulletMoveCorrection *const this,
        const data::ConfigParabolaBulletMoveCorrection *a2)
{
  int (**v2)(...); // rdx
  float deviation; // xmm0_4
  __int64 v4; // rsi
  float fix_angle_of_ver; // xmm0_4
  float min_speed; // xmm0_4
  __int64 v7; // rsi
  float max_speed; // xmm0_4

  data::ConfigMoveCorrection::ConfigMoveCorrection(
    (data::ConfigMoveCorrection *const)this,
    (const data::ConfigMoveCorrection *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigParabolaBulletMoveCorrection + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMoveCorrection = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->deviation >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->deviation >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->deviation);
  }
  deviation = a2->deviation;
  v4 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->deviation >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->deviation >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->deviation, v4);
  }
  this->deviation = deviation;
  if ( *(_BYTE *)(((unsigned __int64)&a2->fix_angle_of_ver >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->fix_angle_of_ver >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->fix_angle_of_ver);
  }
  fix_angle_of_ver = a2->fix_angle_of_ver;
  if ( *(_BYTE *)(((unsigned __int64)&this->fix_angle_of_ver >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fix_angle_of_ver >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fix_angle_of_ver, v4);
  }
  this->fix_angle_of_ver = fix_angle_of_ver;
  if ( *(_BYTE *)(((unsigned __int64)&a2->min_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->min_speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->min_speed);
  }
  min_speed = a2->min_speed;
  v7 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->min_speed, v7);
  }
  this->min_speed = min_speed;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->max_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->max_speed);
  }
  max_speed = a2->max_speed;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_speed, v7);
  }
  this->max_speed = max_speed;
};

// Line 1204: range 0000000011E06E28-0000000011E06E75
void __cdecl data::ConfigParabolaBulletMoveCorrection::~ConfigParabolaBulletMoveCorrection(
        data::ConfigParabolaBulletMoveCorrection *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigParabolaBulletMoveCorrection + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMoveCorrection = v2;
  data::ConfigMoveCorrection::~ConfigMoveCorrection((data::ConfigMoveCorrection *const)this);
};

// Line 1204: range 0000000011E06E76-0000000011E06EA0
void __cdecl data::ConfigParabolaBulletMoveCorrection::~ConfigParabolaBulletMoveCorrection(
        data::ConfigParabolaBulletMoveCorrection *const this)
{
  data::ConfigParabolaBulletMoveCorrection::~ConfigParabolaBulletMoveCorrection(this);
  operator delete(this, 0x30uLL);
};

// Line 1209: range 0000000011A54B7E-0000000011A54B8E
const char *__cdecl data::ConfigParabolaBulletMoveCorrection::getTypeName(
        const data::ConfigParabolaBulletMoveCorrection *const this)
{
  return "ConfigParabolaBulletMoveCorrection";
};

// Line 1210: range 0000000011A54B90-0000000011A54D2C
int32_t __cdecl data::ConfigParabolaBulletMoveCorrection::getHashNum(
        const data::ConfigParabolaBulletMoveCorrection *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigParabolaBulletMoveCorrection::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigParabolaBulletMoveCorrection",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1226: range 0000000011DB880C-0000000011DB884D
void __cdecl data::ConfigParabolaBulletMoveCorrectionFactory::ConfigParabolaBulletMoveCorrectionFactory(
        data::ConfigParabolaBulletMoveCorrectionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigParabolaBulletMoveCorrectionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigParabolaBulletMoveCorrectionFactory = v2;
};

// Line 1234: range 0000000011DB8B56-0000000011DB8C92
void __cdecl data::ConfigParabolaBulletMove::ConfigParabolaBulletMove(data::ConfigParabolaBulletMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBulletMove::ConfigBulletMove(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigParabolaBulletMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->angle_off_hor >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->angle_off_hor >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->angle_off_hor, v1);
  }
  this->angle_off_hor = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gravity_of_acceleration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gravity_of_acceleration >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gravity_of_acceleration, (((_BYTE)this - 68) & 7u) + 3);
  }
  this->gravity_of_acceleration = 0.0;
  if ( *(_WORD *)(((unsigned __int64)&this->correction >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigMoveCorrection>();
};

// Line 1234: range 0000000011DB90DC-0000000011DB9268
void __cdecl data::ConfigParabolaBulletMove::ConfigParabolaBulletMove(
        data::ConfigParabolaBulletMove *const this,
        const data::ConfigParabolaBulletMove *a2)
{
  int (**v2)(...); // rdx
  float angle_off_hor; // xmm0_4
  float gravity_of_acceleration; // xmm0_4

  data::ConfigBulletMove::ConfigBulletMove(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigParabolaBulletMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMove = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->angle_off_hor >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->angle_off_hor >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->angle_off_hor);
  }
  angle_off_hor = a2->angle_off_hor;
  if ( *(_BYTE *)(((unsigned __int64)&this->angle_off_hor >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->angle_off_hor >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->angle_off_hor, a2);
  }
  this->angle_off_hor = angle_off_hor;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gravity_of_acceleration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->gravity_of_acceleration >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->gravity_of_acceleration);
  }
  gravity_of_acceleration = a2->gravity_of_acceleration;
  if ( *(_BYTE *)(((unsigned __int64)&this->gravity_of_acceleration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gravity_of_acceleration >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gravity_of_acceleration, (((_BYTE)this - 68) & 7u) + 3);
  }
  this->gravity_of_acceleration = gravity_of_acceleration;
  std::shared_ptr<data::ConfigMoveCorrection>::shared_ptr(&this->correction, &a2->correction);
};

// Line 1243: range 0000000011E06D9C-0000000011E06DFB
void __cdecl data::ConfigParabolaBulletMove::~ConfigParabolaBulletMove(data::ConfigParabolaBulletMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigParabolaBulletMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  std::shared_ptr<data::ConfigMoveCorrection>::~shared_ptr(&this->correction);
  data::ConfigBulletMove::~ConfigBulletMove(this);
};

// Line 1243: range 0000000011E06DFC-0000000011E06E26
void __cdecl data::ConfigParabolaBulletMove::~ConfigParabolaBulletMove(data::ConfigParabolaBulletMove *const this)
{
  data::ConfigParabolaBulletMove::~ConfigParabolaBulletMove(this);
  operator delete(this, 0xD0uLL);
};

// Line 1248: range 0000000011A54D6A-0000000011A54D7A
const char *__cdecl data::ConfigParabolaBulletMove::getTypeName(const data::ConfigParabolaBulletMove *const this)
{
  return "ConfigParabolaBulletMove";
};

// Line 1249: range 0000000011A54D7C-0000000011A54F18
int32_t __cdecl data::ConfigParabolaBulletMove::getHashNum(const data::ConfigParabolaBulletMove *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigParabolaBulletMove::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigParabolaBulletMove",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1265: range 0000000011DB9552-0000000011DB9593
void __cdecl data::ConfigParabolaBulletMoveFactory::ConfigParabolaBulletMoveFactory(
        data::ConfigParabolaBulletMoveFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigParabolaBulletMoveFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigParabolaBulletMoveFactory = v2;
};

// Line 1273: range 0000000011DB989C-0000000011DB9995
void __cdecl data::ConfigFishingAimParabolaBulletMove::ConfigFishingAimParabolaBulletMove(
        data::ConfigFishingAimParabolaBulletMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBulletMove::ConfigBulletMove(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigFishingAimParabolaBulletMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->gravity >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gravity >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gravity, v1);
  }
  this->gravity = -10.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->init_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->init_speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->init_speed, (((_BYTE)this - 68) & 7u) + 3);
  }
  this->init_speed = 12.0;
  std::string::basic_string(&this->global_value_key);
};

// Line 1273: range 0000000011DB9DDE-0000000011DB9F8D
void __cdecl data::ConfigFishingAimParabolaBulletMove::ConfigFishingAimParabolaBulletMove(
        data::ConfigFishingAimParabolaBulletMove *const this,
        const data::ConfigFishingAimParabolaBulletMove *a2)
{
  int (**v2)(...); // rdx
  float gravity; // xmm0_4
  float init_speed; // xmm0_4

  data::ConfigBulletMove::ConfigBulletMove(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigFishingAimParabolaBulletMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMove = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gravity >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->gravity >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->gravity);
  }
  gravity = a2->gravity;
  if ( *(_BYTE *)(((unsigned __int64)&this->gravity >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gravity >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gravity, a2);
  }
  this->gravity = gravity;
  if ( *(_BYTE *)(((unsigned __int64)&a2->init_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->init_speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->init_speed);
  }
  init_speed = a2->init_speed;
  if ( *(_BYTE *)(((unsigned __int64)&this->init_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->init_speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->init_speed, (((_BYTE)this - 68) & 7u) + 3);
  }
  this->init_speed = init_speed;
  std::string::basic_string(&this->global_value_key, &a2->global_value_key);
};

// Line 1282: range 0000000011E06D10-0000000011E06D6F
void __cdecl data::ConfigFishingAimParabolaBulletMove::~ConfigFishingAimParabolaBulletMove(
        data::ConfigFishingAimParabolaBulletMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigFishingAimParabolaBulletMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  std::string::~string(&this->global_value_key);
  data::ConfigBulletMove::~ConfigBulletMove(this);
};

// Line 1282: range 0000000011E06D70-0000000011E06D9A
void __cdecl data::ConfigFishingAimParabolaBulletMove::~ConfigFishingAimParabolaBulletMove(
        data::ConfigFishingAimParabolaBulletMove *const this)
{
  data::ConfigFishingAimParabolaBulletMove::~ConfigFishingAimParabolaBulletMove(this);
  operator delete(this, 0xE0uLL);
};

// Line 1287: range 0000000011A54F1A-0000000011A54F2A
const char *__cdecl data::ConfigFishingAimParabolaBulletMove::getTypeName(
        const data::ConfigFishingAimParabolaBulletMove *const this)
{
  return "ConfigFishingAimParabolaBulletMove";
};

// Line 1288: range 0000000011A54F2C-0000000011A550C8
int32_t __cdecl data::ConfigFishingAimParabolaBulletMove::getHashNum(
        const data::ConfigFishingAimParabolaBulletMove *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigFishingAimParabolaBulletMove::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigFishingAimParabolaBulletMove",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1304: range 0000000011DBA276-0000000011DBA2B7
void __cdecl data::ConfigFishingAimParabolaBulletMoveFactory::ConfigFishingAimParabolaBulletMoveFactory(
        data::ConfigFishingAimParabolaBulletMoveFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigFishingAimParabolaBulletMoveFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigFishingAimParabolaBulletMoveFactory = v2;
};

// Line 1312: range 0000000011DA4470-0000000011DA4559
void __cdecl data::ConfigWhenNoTarget::ConfigWhenNoTarget(data::ConfigWhenNoTarget *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::ConfigWhenNoTarget>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigWhenNoTarget>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWhenNoTarget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWhenNoTarget = v2;
  if ( *(_WORD *)(((unsigned __int64)&this->default_target >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBornType>();
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 1312: range 0000000011DBA674-0000000011DBA765
void __cdecl data::ConfigWhenNoTarget::ConfigWhenNoTarget(
        data::ConfigWhenNoTarget *const this,
        const data::ConfigWhenNoTarget *a2)
{
  std::enable_shared_from_this<data::ConfigWhenNoTarget> *v2; // rsi
  int (**v3)(...); // rdx
  data::ConfigBornTypePtr *p_default_target; // rsi
  bool is_json_loaded; // cl
  char v6; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigWhenNoTarget>;
  std::enable_shared_from_this<data::ConfigWhenNoTarget>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigWhenNoTarget>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigWhenNoTarget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigWhenNoTarget = v3;
  p_default_target = &a2->default_target;
  std::shared_ptr<data::ConfigBornType>::shared_ptr(&this->default_target, &a2->default_target);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_default_target, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_default_target) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_default_target, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 1320: range 0000000011DBA9AE-0000000011DBAA0F
void __cdecl data::ConfigWhenNoTarget::~ConfigWhenNoTarget(data::ConfigWhenNoTarget *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWhenNoTarget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWhenNoTarget = v2;
  std::shared_ptr<data::ConfigBornType>::~shared_ptr(&this->default_target);
  std::enable_shared_from_this<data::ConfigWhenNoTarget>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigWhenNoTarget>);
};

// Line 1320: range 0000000011DBAA10-0000000011DBAA3A
void __cdecl data::ConfigWhenNoTarget::~ConfigWhenNoTarget(data::ConfigWhenNoTarget *const this)
{
  data::ConfigWhenNoTarget::~ConfigWhenNoTarget(this);
  operator delete(this, 0x30uLL);
};

// Line 1325: range 0000000011A550CA-0000000011A550DA
const char *__cdecl data::ConfigWhenNoTarget::getTypeName(const data::ConfigWhenNoTarget *const this)
{
  return "ConfigWhenNoTarget";
};

// Line 1326: range 0000000011A550DC-0000000011A55278
int32_t __cdecl data::ConfigWhenNoTarget::getHashNum(const data::ConfigWhenNoTarget *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigWhenNoTarget::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWhenNoTarget",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1345: range 0000000011DBAA3C-0000000011DBAB11
void __cdecl data::ConfigDestroyByTargetSphere::ConfigDestroyByTargetSphere(
        data::ConfigDestroyByTargetSphere *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigWhenNoTarget::ConfigWhenNoTarget((data::ConfigWhenNoTarget *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDestroyByTargetSphere + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWhenNoTarget = v2;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->radius, v3);
  }
  this->radius = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->detect_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->detect_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->detect_delay, v3);
  }
  this->detect_delay = 0.0;
};

// Line 1345: range 0000000011DBAF9C-0000000011DBB0F4
void __cdecl data::ConfigDestroyByTargetSphere::ConfigDestroyByTargetSphere(
        data::ConfigDestroyByTargetSphere *const this,
        const data::ConfigDestroyByTargetSphere *a2)
{
  int (**v2)(...); // rdx
  float radius; // xmm0_4
  __int64 v4; // rsi
  float detect_delay; // xmm0_4

  data::ConfigWhenNoTarget::ConfigWhenNoTarget(
    (data::ConfigWhenNoTarget *const)this,
    (const data::ConfigWhenNoTarget *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDestroyByTargetSphere + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigWhenNoTarget = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->radius);
  }
  radius = a2->radius;
  v4 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->radius, v4);
  }
  this->radius = radius;
  if ( *(_BYTE *)(((unsigned __int64)&a2->detect_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->detect_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->detect_delay);
  }
  detect_delay = a2->detect_delay;
  if ( *(_BYTE *)(((unsigned __int64)&this->detect_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->detect_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->detect_delay, v4);
  }
  this->detect_delay = detect_delay;
};

// Line 1353: range 0000000011E06C96-0000000011E06CE3
void __cdecl data::ConfigDestroyByTargetSphere::~ConfigDestroyByTargetSphere(
        data::ConfigDestroyByTargetSphere *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDestroyByTargetSphere + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWhenNoTarget = v2;
  data::ConfigWhenNoTarget::~ConfigWhenNoTarget((data::ConfigWhenNoTarget *const)this);
};

// Line 1353: range 0000000011E06CE4-0000000011E06D0E
void __cdecl data::ConfigDestroyByTargetSphere::~ConfigDestroyByTargetSphere(
        data::ConfigDestroyByTargetSphere *const this)
{
  data::ConfigDestroyByTargetSphere::~ConfigDestroyByTargetSphere(this);
  operator delete(this, 0x38uLL);
};

// Line 1358: range 0000000011A5527A-0000000011A5528A
const char *__cdecl data::ConfigDestroyByTargetSphere::getTypeName(const data::ConfigDestroyByTargetSphere *const this)
{
  return "ConfigDestroyByTargetSphere";
};

// Line 1359: range 0000000011A5528C-0000000011A55428
int32_t __cdecl data::ConfigDestroyByTargetSphere::getHashNum(const data::ConfigDestroyByTargetSphere *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigDestroyByTargetSphere::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigDestroyByTargetSphere",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1375: range 0000000011DBB33E-0000000011DBB37F
void __cdecl data::ConfigDestroyByTargetSphereFactory::ConfigDestroyByTargetSphereFactory(
        data::ConfigDestroyByTargetSphereFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDestroyByTargetSphereFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDestroyByTargetSphereFactory = v2;
};

// Line 1383: range 0000000011DBB688-0000000011DBB71D
void __cdecl data::ConfigDestroyAfterTime::ConfigDestroyAfterTime(data::ConfigDestroyAfterTime *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigWhenNoTarget::ConfigWhenNoTarget((data::ConfigWhenNoTarget *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDestroyAfterTime + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWhenNoTarget = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->time, (((_BYTE)this + 44) & 7u) + 3);
  }
  this->time = 0.0;
};

// Line 1383: range 0000000011DBBB8E-0000000011DBBC6E
void __cdecl data::ConfigDestroyAfterTime::ConfigDestroyAfterTime(
        data::ConfigDestroyAfterTime *const this,
        const data::ConfigDestroyAfterTime *a2)
{
  int (**v2)(...); // rdx
  float time; // xmm0_4

  data::ConfigWhenNoTarget::ConfigWhenNoTarget(
    (data::ConfigWhenNoTarget *const)this,
    (const data::ConfigWhenNoTarget *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDestroyAfterTime + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigWhenNoTarget = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->time);
  }
  time = a2->time;
  if ( *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->time, (((_BYTE)this + 44) & 7u) + 3);
  }
  this->time = time;
};

// Line 1390: range 0000000011E06C1C-0000000011E06C69
void __cdecl data::ConfigDestroyAfterTime::~ConfigDestroyAfterTime(data::ConfigDestroyAfterTime *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDestroyAfterTime + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWhenNoTarget = v2;
  data::ConfigWhenNoTarget::~ConfigWhenNoTarget((data::ConfigWhenNoTarget *const)this);
};

// Line 1390: range 0000000011E06C6A-0000000011E06C94
void __cdecl data::ConfigDestroyAfterTime::~ConfigDestroyAfterTime(data::ConfigDestroyAfterTime *const this)
{
  data::ConfigDestroyAfterTime::~ConfigDestroyAfterTime(this);
  operator delete(this, 0x30uLL);
};

// Line 1395: range 0000000011A5542A-0000000011A5543A
const char *__cdecl data::ConfigDestroyAfterTime::getTypeName(const data::ConfigDestroyAfterTime *const this)
{
  return "ConfigDestroyAfterTime";
};

// Line 1396: range 0000000011A5543C-0000000011A555D8
int32_t __cdecl data::ConfigDestroyAfterTime::getHashNum(const data::ConfigDestroyAfterTime *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigDestroyAfterTime::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigDestroyAfterTime",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1412: range 0000000011DBBEB8-0000000011DBBEF9
void __cdecl data::ConfigDestroyAfterTimeFactory::ConfigDestroyAfterTimeFactory(
        data::ConfigDestroyAfterTimeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDestroyAfterTimeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDestroyAfterTimeFactory = v2;
};

// Line 1420: range 0000000011DBC202-0000000011DBC336
void __cdecl data::ConfigTrackBulletMove::ConfigTrackBulletMove(data::ConfigTrackBulletMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  data::ConfigBulletMove::ConfigBulletMove((data::ConfigBulletMove *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigTrackBulletMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  v3 = ((_BYTE)this - 75) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->destroy_when_target_die >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->destroy_when_target_die >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->destroy_when_target_die, v3, v4);
  this->destroy_when_target_die = 0;
  v5 = ((_BYTE)this - 74) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->trace_on_yaxis >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->trace_on_yaxis >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->trace_on_yaxis, v5, v6);
  this->trace_on_yaxis = 0;
  if ( *(_WORD *)(((unsigned __int64)&this->when_no_target >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigWhenNoTarget>();
};

// Line 1420: range 0000000011DBC78A-0000000011DBC916
void __cdecl data::ConfigTrackBulletMove::ConfigTrackBulletMove(
        data::ConfigTrackBulletMove *const this,
        const data::ConfigTrackBulletMove *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool destroy_when_target_die; // cl
  char v6; // dl
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  bool trace_on_yaxis; // cl
  char v11; // dl
  __int64 v12; // rdx

  data::ConfigBulletMove::ConfigBulletMove((data::ConfigBulletMove *const)this, (const data::ConfigBulletMove *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigTrackBulletMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMove = v2;
  v3 = ((_BYTE)a2 - 75) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->destroy_when_target_die >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->destroy_when_target_die >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->destroy_when_target_die, v3, v4);
  destroy_when_target_die = a2->destroy_when_target_die;
  v6 = *(_BYTE *)(((unsigned __int64)&this->destroy_when_target_die >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this - 75) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->destroy_when_target_die, v3, v7);
  this->destroy_when_target_die = destroy_when_target_die;
  v8 = ((_BYTE)a2 - 74) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&a2->trace_on_yaxis >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&a2->trace_on_yaxis >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_load1(&a2->trace_on_yaxis, v8, v9);
  trace_on_yaxis = a2->trace_on_yaxis;
  v11 = *(_BYTE *)(((unsigned __int64)&this->trace_on_yaxis >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v11 != 0;
  v12 = (v11 != 0) & (unsigned __int8)((((unsigned __int8)this - 74) & 7) >= v11);
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->trace_on_yaxis, v8, v12);
  this->trace_on_yaxis = trace_on_yaxis;
  std::shared_ptr<data::ConfigWhenNoTarget>::shared_ptr(&this->when_no_target, &a2->when_no_target);
};

// Line 1429: range 0000000011DBCC60-0000000011DBCC8A
void __cdecl data::ConfigTrackBulletMove::~ConfigTrackBulletMove(data::ConfigTrackBulletMove *const this)
{
  data::ConfigTrackBulletMove::~ConfigTrackBulletMove(this);
  operator delete(this, 0xC8uLL);
};

// Line 1429: range 0000000011DBCC00-0000000011DBCC5F
void __cdecl data::ConfigTrackBulletMove::~ConfigTrackBulletMove(data::ConfigTrackBulletMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigTrackBulletMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  std::shared_ptr<data::ConfigWhenNoTarget>::~shared_ptr(&this->when_no_target);
  data::ConfigBulletMove::~ConfigBulletMove((data::ConfigBulletMove *const)this);
};

// Line 1434: range 0000000011A55616-0000000011A55626
const char *__cdecl data::ConfigTrackBulletMove::getTypeName(const data::ConfigTrackBulletMove *const this)
{
  return "ConfigTrackBulletMove";
};

// Line 1435: range 0000000011A55628-0000000011A557C4
int32_t __cdecl data::ConfigTrackBulletMove::getHashNum(const data::ConfigTrackBulletMove *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigTrackBulletMove::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigTrackBulletMove",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1454: range 0000000011DBCC8C-0000000011DBCD66
void __cdecl data::ConfigBoomerangBulletMove::ConfigBoomerangBulletMove(data::ConfigBoomerangBulletMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigTrackBulletMove::ConfigTrackBulletMove(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBoomerangBulletMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  if ( *(char *)(((unsigned __int64)&this->init_clockwise >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->init_clockwise, v1, &this->init_clockwise);
  this->init_clockwise = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->stick_to_ground_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stick_to_ground_duration >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stick_to_ground_duration, (((_BYTE)this - 52) & 7u) + 3);
  }
  this->stick_to_ground_duration = 0.0;
};

// Line 1454: range 0000000011DBD1B0-0000000011DBD31A
void __cdecl data::ConfigBoomerangBulletMove::ConfigBoomerangBulletMove(
        data::ConfigBoomerangBulletMove *const this,
        const data::ConfigBoomerangBulletMove *a2)
{
  int (**v2)(...); // rdx
  bool init_clockwise; // cl
  char v4; // al
  float stick_to_ground_duration; // xmm0_4
  const data::ConfigBoomerangBulletMove *v6; // [rsp+0h] [rbp-10h]

  v6 = a2;
  data::ConfigTrackBulletMove::ConfigTrackBulletMove(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBoomerangBulletMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMove = v2;
  if ( *(char *)(((unsigned __int64)&a2->init_clockwise >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->init_clockwise, a2, &a2->init_clockwise);
  init_clockwise = a2->init_clockwise;
  v4 = *(_BYTE *)(((unsigned __int64)&this->init_clockwise >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store1(&this->init_clockwise, a2, &this->init_clockwise);
  }
  this->init_clockwise = init_clockwise;
  if ( *(_BYTE *)(((unsigned __int64)&v6->stick_to_ground_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v6 - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->stick_to_ground_duration >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&v6->stick_to_ground_duration);
  }
  stick_to_ground_duration = v6->stick_to_ground_duration;
  if ( *(_BYTE *)(((unsigned __int64)&this->stick_to_ground_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stick_to_ground_duration >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stick_to_ground_duration, (((_BYTE)this - 52) & 7u) + 3);
  }
  this->stick_to_ground_duration = stick_to_ground_duration;
};

// Line 1462: range 0000000011E06BA2-0000000011E06BEF
void __cdecl data::ConfigBoomerangBulletMove::~ConfigBoomerangBulletMove(data::ConfigBoomerangBulletMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBoomerangBulletMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  data::ConfigTrackBulletMove::~ConfigTrackBulletMove(this);
};

// Line 1462: range 0000000011E06BF0-0000000011E06C1A
void __cdecl data::ConfigBoomerangBulletMove::~ConfigBoomerangBulletMove(data::ConfigBoomerangBulletMove *const this)
{
  data::ConfigBoomerangBulletMove::~ConfigBoomerangBulletMove(this);
  operator delete(this, 0xD0uLL);
};

// Line 1467: range 0000000011A557C6-0000000011A557D6
const char *__cdecl data::ConfigBoomerangBulletMove::getTypeName(const data::ConfigBoomerangBulletMove *const this)
{
  return "ConfigBoomerangBulletMove";
};

// Line 1468: range 0000000011A557D8-0000000011A55974
int32_t __cdecl data::ConfigBoomerangBulletMove::getHashNum(const data::ConfigBoomerangBulletMove *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigBoomerangBulletMove::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBoomerangBulletMove",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1484: range 0000000011DBD604-0000000011DBD645
void __cdecl data::ConfigBoomerangBulletMoveFactory::ConfigBoomerangBulletMoveFactory(
        data::ConfigBoomerangBulletMoveFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBoomerangBulletMoveFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBoomerangBulletMoveFactory = v2;
};

// Line 1492: range 0000000011DBD9C8-0000000011DBDAEC
void __cdecl data::ConfigLinerParabolaBulletMove::ConfigLinerParabolaBulletMove(
        data::ConfigLinerParabolaBulletMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigLinerBulletMove::ConfigLinerBulletMove(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLinerParabolaBulletMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->straight_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->straight_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->straight_range, v1);
  }
  this->straight_range = 0.0;
  v3 = (((_BYTE)this - 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gravity_of_acceleration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gravity_of_acceleration >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gravity_of_acceleration, v3);
  }
  this->gravity_of_acceleration = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->air_resistance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->air_resistance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->air_resistance, v3);
  }
  this->air_resistance = 0.0;
};

// Line 1492: range 0000000011DBDF40-0000000011DBE12E
void __cdecl data::ConfigLinerParabolaBulletMove::ConfigLinerParabolaBulletMove(
        data::ConfigLinerParabolaBulletMove *const this,
        const data::ConfigLinerParabolaBulletMove *a2)
{
  int (**v2)(...); // rdx
  float straight_range; // xmm0_4
  float gravity_of_acceleration; // xmm0_4
  __int64 v5; // rsi
  float air_resistance; // xmm0_4

  data::ConfigLinerBulletMove::ConfigLinerBulletMove(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLinerParabolaBulletMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMove = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->straight_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->straight_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->straight_range);
  }
  straight_range = a2->straight_range;
  if ( *(_BYTE *)(((unsigned __int64)&this->straight_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->straight_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->straight_range, a2);
  }
  this->straight_range = straight_range;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gravity_of_acceleration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->gravity_of_acceleration >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->gravity_of_acceleration);
  }
  gravity_of_acceleration = a2->gravity_of_acceleration;
  v5 = (((_BYTE)this - 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gravity_of_acceleration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gravity_of_acceleration >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gravity_of_acceleration, v5);
  }
  this->gravity_of_acceleration = gravity_of_acceleration;
  if ( *(_BYTE *)(((unsigned __int64)&a2->air_resistance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->air_resistance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->air_resistance);
  }
  air_resistance = a2->air_resistance;
  if ( *(_BYTE *)(((unsigned __int64)&this->air_resistance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->air_resistance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->air_resistance, v5);
  }
  this->air_resistance = air_resistance;
};

// Line 1501: range 0000000011E06B76-0000000011E06BA0
void __cdecl data::ConfigLinerParabolaBulletMove::~ConfigLinerParabolaBulletMove(
        data::ConfigLinerParabolaBulletMove *const this)
{
  data::ConfigLinerParabolaBulletMove::~ConfigLinerParabolaBulletMove(this);
  operator delete(this, 0xC8uLL);
};

// Line 1501: range 0000000011E06B28-0000000011E06B75
void __cdecl data::ConfigLinerParabolaBulletMove::~ConfigLinerParabolaBulletMove(
        data::ConfigLinerParabolaBulletMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLinerParabolaBulletMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  data::ConfigLinerBulletMove::~ConfigLinerBulletMove(this);
};

// Line 1506: range 0000000011A55976-0000000011A55986
const char *__cdecl data::ConfigLinerParabolaBulletMove::getTypeName(
        const data::ConfigLinerParabolaBulletMove *const this)
{
  return "ConfigLinerParabolaBulletMove";
};

// Line 1507: range 0000000011A55988-0000000011A55B24
int32_t __cdecl data::ConfigLinerParabolaBulletMove::getHashNum(const data::ConfigLinerParabolaBulletMove *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigLinerParabolaBulletMove::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigLinerParabolaBulletMove",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1523: range 0000000011DBE418-0000000011DBE459
void __cdecl data::ConfigLinerParabolaBulletMoveFactory::ConfigLinerParabolaBulletMoveFactory(
        data::ConfigLinerParabolaBulletMoveFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLinerParabolaBulletMoveFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigLinerParabolaBulletMoveFactory = v2;
};

// Line 1531: range 0000000011DBE762-0000000011DBE959
void __cdecl data::ConfigItanoCircusBulletMove::ConfigItanoCircusBulletMove(
        data::ConfigItanoCircusBulletMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  data::ConfigBulletMove::ConfigBulletMove(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigItanoCircusBulletMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->itano_circus_start_angler >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->itano_circus_start_angler >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->itano_circus_start_angler, v1);
  }
  this->itano_circus_start_angler = 0.0;
  v3 = ((_BYTE)this - 68) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->destroy_when_target_die >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->destroy_when_target_die >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->destroy_when_target_die, v3, v4);
  this->destroy_when_target_die = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->guidance_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guidance_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->guidance_delay, v3);
  }
  this->guidance_delay = 0.0;
  v5 = ((_BYTE)this - 60) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->guidance_speed_change >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->guidance_speed_change >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->guidance_speed_change, v5, v6);
  this->guidance_speed_change = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->guidance_min_angler_velocity >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guidance_min_angler_velocity >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->guidance_min_angler_velocity, v5);
  }
  this->guidance_min_angler_velocity = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->guidance_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guidance_duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->guidance_duration, (((_BYTE)this - 52) & 7u) + 3);
  }
  this->guidance_duration = 100.0;
};

// Line 1531: range 0000000011DBEDA2-0000000011DBF126
void __cdecl data::ConfigItanoCircusBulletMove::ConfigItanoCircusBulletMove(
        data::ConfigItanoCircusBulletMove *const this,
        const data::ConfigItanoCircusBulletMove *a2)
{
  int (**v2)(...); // rdx
  float itano_circus_start_angler; // xmm0_4
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool destroy_when_target_die; // cl
  char v7; // dl
  __int64 v8; // rdx
  float guidance_delay; // xmm0_4
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool guidance_speed_change; // cl
  char v13; // dl
  __int64 v14; // rdx
  float guidance_min_angler_velocity; // xmm0_4
  float guidance_duration; // xmm0_4

  data::ConfigBulletMove::ConfigBulletMove(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigItanoCircusBulletMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMove = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->itano_circus_start_angler >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->itano_circus_start_angler >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->itano_circus_start_angler);
  }
  itano_circus_start_angler = a2->itano_circus_start_angler;
  if ( *(_BYTE *)(((unsigned __int64)&this->itano_circus_start_angler >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->itano_circus_start_angler >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->itano_circus_start_angler, a2);
  }
  this->itano_circus_start_angler = itano_circus_start_angler;
  v4 = ((_BYTE)a2 - 68) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&a2->destroy_when_target_die >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&a2->destroy_when_target_die >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&a2->destroy_when_target_die, v4, v5);
  destroy_when_target_die = a2->destroy_when_target_die;
  v7 = *(_BYTE *)(((unsigned __int64)&this->destroy_when_target_die >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this - 68) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->destroy_when_target_die, v4, v8);
  this->destroy_when_target_die = destroy_when_target_die;
  if ( *(_BYTE *)(((unsigned __int64)&a2->guidance_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->guidance_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->guidance_delay);
  }
  guidance_delay = a2->guidance_delay;
  if ( *(_BYTE *)(((unsigned __int64)&this->guidance_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guidance_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->guidance_delay, v4);
  }
  this->guidance_delay = guidance_delay;
  v10 = ((_BYTE)a2 - 60) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&a2->guidance_speed_change >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&a2->guidance_speed_change >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&a2->guidance_speed_change, v10, v11);
  guidance_speed_change = a2->guidance_speed_change;
  v13 = *(_BYTE *)(((unsigned __int64)&this->guidance_speed_change >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this - 60) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->guidance_speed_change, v10, v14);
  this->guidance_speed_change = guidance_speed_change;
  if ( *(_BYTE *)(((unsigned __int64)&a2->guidance_min_angler_velocity >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->guidance_min_angler_velocity >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->guidance_min_angler_velocity);
  }
  guidance_min_angler_velocity = a2->guidance_min_angler_velocity;
  if ( *(_BYTE *)(((unsigned __int64)&this->guidance_min_angler_velocity >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guidance_min_angler_velocity >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->guidance_min_angler_velocity, v10);
  }
  this->guidance_min_angler_velocity = guidance_min_angler_velocity;
  if ( *(_BYTE *)(((unsigned __int64)&a2->guidance_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->guidance_duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->guidance_duration);
  }
  guidance_duration = a2->guidance_duration;
  if ( *(_BYTE *)(((unsigned __int64)&this->guidance_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guidance_duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->guidance_duration, (((_BYTE)this - 52) & 7u) + 3);
  }
  this->guidance_duration = guidance_duration;
};

// Line 1543: range 0000000011E06AFC-0000000011E06B26
void __cdecl data::ConfigItanoCircusBulletMove::~ConfigItanoCircusBulletMove(
        data::ConfigItanoCircusBulletMove *const this)
{
  data::ConfigItanoCircusBulletMove::~ConfigItanoCircusBulletMove(this);
  operator delete(this, 0xD0uLL);
};

// Line 1543: range 0000000011E06AAE-0000000011E06AFB
void __cdecl data::ConfigItanoCircusBulletMove::~ConfigItanoCircusBulletMove(
        data::ConfigItanoCircusBulletMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigItanoCircusBulletMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  data::ConfigBulletMove::~ConfigBulletMove(this);
};

// Line 1548: range 0000000011A55B26-0000000011A55B36
const char *__cdecl data::ConfigItanoCircusBulletMove::getTypeName(const data::ConfigItanoCircusBulletMove *const this)
{
  return "ConfigItanoCircusBulletMove";
};

// Line 1549: range 0000000011A55B38-0000000011A55CD4
int32_t __cdecl data::ConfigItanoCircusBulletMove::getHashNum(const data::ConfigItanoCircusBulletMove *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigItanoCircusBulletMove::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigItanoCircusBulletMove",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1565: range 0000000011DBF410-0000000011DBF451
void __cdecl data::ConfigItanoCircusBulletMoveFactory::ConfigItanoCircusBulletMoveFactory(
        data::ConfigItanoCircusBulletMoveFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigItanoCircusBulletMoveFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigItanoCircusBulletMoveFactory = v2;
};

// Line 1573: range 0000000011DBF75A-0000000011DBF7A7
void __cdecl data::ConfigMultiBulletMove::ConfigMultiBulletMove(data::ConfigMultiBulletMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBulletMove::ConfigBulletMove(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMultiBulletMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
};

// Line 1573: range 0000000011DBFBFC-0000000011DBFC54
void __cdecl data::ConfigMultiBulletMove::ConfigMultiBulletMove(
        data::ConfigMultiBulletMove *const this,
        const data::ConfigMultiBulletMove *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBulletMove::ConfigBulletMove(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMultiBulletMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMove = v2;
};

// Line 1579: range 0000000011E06A34-0000000011E06A81
void __cdecl data::ConfigMultiBulletMove::~ConfigMultiBulletMove(data::ConfigMultiBulletMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMultiBulletMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  data::ConfigBulletMove::~ConfigBulletMove(this);
};

// Line 1579: range 0000000011E06A82-0000000011E06AAC
void __cdecl data::ConfigMultiBulletMove::~ConfigMultiBulletMove(data::ConfigMultiBulletMove *const this)
{
  data::ConfigMultiBulletMove::~ConfigMultiBulletMove(this);
  operator delete(this, 0xB8uLL);
};

// Line 1584: range 0000000011A55CD6-0000000011A55CE6
const char *__cdecl data::ConfigMultiBulletMove::getTypeName(const data::ConfigMultiBulletMove *const this)
{
  return "ConfigMultiBulletMove";
};

// Line 1585: range 0000000011A55CE8-0000000011A55E84
int32_t __cdecl data::ConfigMultiBulletMove::getHashNum(const data::ConfigMultiBulletMove *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigMultiBulletMove::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMultiBulletMove",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1601: range 0000000011DBFF3E-0000000011DBFF7F
void __cdecl data::ConfigMultiBulletMoveFactory::ConfigMultiBulletMoveFactory(
        data::ConfigMultiBulletMoveFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMultiBulletMoveFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMultiBulletMoveFactory = v2;
};

// Line 1671: range 0000000011DC168E-0000000011DC16F3
void __cdecl data::ConfigIgnoreCollision::ConfigIgnoreCollision(data::ConfigIgnoreCollision *const this)
{
  __int64 v1; // rsi

  std::vector<data::ConfigEntityCollider>::vector(&this->self_colliders);
  std::vector<data::ConfigEntityCollider>::vector(&this->target_colliders);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 1671: range 0000000011AEEADC-0000000011AEEBB5
void __cdecl data::ConfigIgnoreCollision::ConfigIgnoreCollision(
        data::ConfigIgnoreCollision *const this,
        const data::ConfigIgnoreCollision *a2)
{
  data::ConfigEntityColliderList *p_target_colliders; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::vector<data::ConfigEntityCollider>::vector(&this->self_colliders, &a2->self_colliders);
  p_target_colliders = &a2->target_colliders;
  std::vector<data::ConfigEntityCollider>::vector(&this->target_colliders, p_target_colliders);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_target_colliders, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_target_colliders) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_target_colliders, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 1671: range 0000000011AEEBB6-0000000011AEEBE0
void __cdecl data::ConfigIgnoreCollision::~ConfigIgnoreCollision(data::ConfigIgnoreCollision *const this)
{
  std::vector<data::ConfigEntityCollider>::~vector(&this->target_colliders);
  std::vector<data::ConfigEntityCollider>::~vector(&this->self_colliders);
};

// Line 1695: range 0000000011DC16F4-0000000011DC178E
void __cdecl data::ConfigMoveDisableCollision::ConfigMoveDisableCollision(data::ConfigMoveDisableCollision *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  std::vector<data::ConfigEntityCollider>::vector(&this->self_colliders);
  if ( *(_BYTE *)(((unsigned __int64)&this->delay_enable_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->delay_enable_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->delay_enable_time, v1);
  }
  this->delay_enable_time = 0.0;
  v2 = ((_BYTE)this + 28) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_json_loaded, v2, v3);
  this->is_json_loaded = 0;
};

// Line 1695: range 0000000011AEEF48-0000000011AEF065
void __cdecl data::ConfigMoveDisableCollision::ConfigMoveDisableCollision(
        data::ConfigMoveDisableCollision *const this,
        const data::ConfigMoveDisableCollision *a2)
{
  float delay_enable_time; // xmm0_4
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_json_loaded; // cl
  char v6; // dl
  __int64 v7; // rdx

  std::vector<data::ConfigEntityCollider>::vector(&this->self_colliders, &a2->self_colliders);
  if ( *(_BYTE *)(((unsigned __int64)&a2->delay_enable_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->delay_enable_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->delay_enable_time);
  }
  delay_enable_time = a2->delay_enable_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->delay_enable_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->delay_enable_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->delay_enable_time, a2);
  }
  this->delay_enable_time = delay_enable_time;
  v3 = ((_BYTE)a2 + 28) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->is_json_loaded, v3, v4);
  is_json_loaded = a2->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 28) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_json_loaded, v3, v7);
  this->is_json_loaded = is_json_loaded;
};

// Line 1695: range 0000000011AEF066-0000000011AEF080
void __cdecl data::ConfigMoveDisableCollision::~ConfigMoveDisableCollision(
        data::ConfigMoveDisableCollision *const this)
{
  std::vector<data::ConfigEntityCollider>::~vector(&this->self_colliders);
};

// Line 1719: range 0000000011DC1790-0000000011DC181A
void __cdecl data::ConfigMoveAudio::ConfigMoveAudio(data::ConfigMoveAudio *const this)
{
  __int64 v1; // rsi

  data::ConfigWwiseString::ConfigWwiseString(&this->start_event);
  data::ConfigWwiseString::ConfigWwiseString(&this->stop_event);
  data::ConfigWwiseString::ConfigWwiseString(&this->move_state_param);
  data::ConfigWwiseString::ConfigWwiseString(&this->fall_on_ground_event);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 1719: range 0000000011AEF3E8-0000000011AEF52B
void __cdecl data::ConfigMoveAudio::ConfigMoveAudio(data::ConfigMoveAudio *const this, const data::ConfigMoveAudio *a2)
{
  data::ConfigWwiseString *p_fall_on_ground_event; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  data::ConfigWwiseString::ConfigWwiseString(&this->start_event, &a2->start_event);
  data::ConfigWwiseString::ConfigWwiseString(&this->stop_event, &a2->stop_event);
  data::ConfigWwiseString::ConfigWwiseString(&this->move_state_param, &a2->move_state_param);
  p_fall_on_ground_event = &a2->fall_on_ground_event;
  data::ConfigWwiseString::ConfigWwiseString(&this->fall_on_ground_event, p_fall_on_ground_event);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_fall_on_ground_event, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_fall_on_ground_event) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_fall_on_ground_event, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 1719: range 0000000011AEF52C-0000000011AEF576
void __cdecl data::ConfigMoveAudio::~ConfigMoveAudio(data::ConfigMoveAudio *const this)
{
  data::ConfigWwiseString::~ConfigWwiseString(&this->fall_on_ground_event);
  data::ConfigWwiseString::~ConfigWwiseString(&this->move_state_param);
  data::ConfigWwiseString::~ConfigWwiseString(&this->stop_event);
  data::ConfigWwiseString::~ConfigWwiseString(&this->start_event);
};

// Line 1745: range 0000000011DA4AA2-0000000011DA4B2E
void __cdecl data::ConfigMoveFollowTarget::ConfigMoveFollowTarget(data::ConfigMoveFollowTarget *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::ConfigMoveFollowTarget>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigMoveFollowTarget>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMoveFollowTarget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMoveFollowTarget = v2;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 1745: range 0000000011DC05FC-0000000011DC06D2
void __cdecl data::ConfigMoveFollowTarget::ConfigMoveFollowTarget(
        data::ConfigMoveFollowTarget *const this,
        const data::ConfigMoveFollowTarget *a2)
{
  std::enable_shared_from_this<data::ConfigMoveFollowTarget> *v2; // rsi
  int (**v3)(...); // rdx
  bool is_json_loaded; // cl
  char v5; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigMoveFollowTarget>;
  std::enable_shared_from_this<data::ConfigMoveFollowTarget>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigMoveFollowTarget>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigMoveFollowTarget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigMoveFollowTarget = v3;
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, v2, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 1752: range 0000000011DC096E-0000000011DC0998
void __cdecl data::ConfigMoveFollowTarget::~ConfigMoveFollowTarget(data::ConfigMoveFollowTarget *const this)
{
  data::ConfigMoveFollowTarget::~ConfigMoveFollowTarget(this);
  operator delete(this, 0x20uLL);
};

// Line 1752: range 0000000011DC091C-0000000011DC096D
void __cdecl data::ConfigMoveFollowTarget::~ConfigMoveFollowTarget(data::ConfigMoveFollowTarget *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMoveFollowTarget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMoveFollowTarget = v2;
  std::enable_shared_from_this<data::ConfigMoveFollowTarget>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigMoveFollowTarget>);
};

// Line 1757: range 0000000011A55E86-0000000011A55E96
const char *__cdecl data::ConfigMoveFollowTarget::getTypeName(const data::ConfigMoveFollowTarget *const this)
{
  return "ConfigMoveFollowTarget";
};

// Line 1758: range 0000000011A55E98-0000000011A56034
int32_t __cdecl data::ConfigMoveFollowTarget::getHashNum(const data::ConfigMoveFollowTarget *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigMoveFollowTarget::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMoveFollowTarget",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1777: range 0000000011DC099A-0000000011DC0A6B
void __cdecl data::ConfigMoveFollowNpc::ConfigMoveFollowNpc(data::ConfigMoveFollowNpc *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigMoveFollowTarget::ConfigMoveFollowTarget((data::ConfigMoveFollowTarget *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMoveFollowNpc + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMoveFollowTarget = v2;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_id, v3);
  }
  this->config_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->quest_id, v3);
  }
  this->quest_id = 0;
};

// Line 1777: range 0000000011DC0F70-0000000011DC10C2
void __cdecl data::ConfigMoveFollowNpc::ConfigMoveFollowNpc(
        data::ConfigMoveFollowNpc *const this,
        const data::ConfigMoveFollowNpc *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t config_id; // ecx
  char v5; // dl
  uint32_t quest_id; // ecx
  char v7; // al

  data::ConfigMoveFollowTarget::ConfigMoveFollowTarget(
    (data::ConfigMoveFollowTarget *const)this,
    (const data::ConfigMoveFollowTarget *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMoveFollowNpc + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMoveFollowTarget = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->config_id);
  }
  config_id = a2->config_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->config_id, v3);
  }
  this->config_id = config_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->quest_id);
  }
  quest_id = a2->quest_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->quest_id, v3);
  }
  this->quest_id = quest_id;
};

// Line 1785: range 0000000011E06A08-0000000011E06A32
void __cdecl data::ConfigMoveFollowNpc::~ConfigMoveFollowNpc(data::ConfigMoveFollowNpc *const this)
{
  data::ConfigMoveFollowNpc::~ConfigMoveFollowNpc(this);
  operator delete(this, 0x28uLL);
};

// Line 1785: range 0000000011E069BA-0000000011E06A07
void __cdecl data::ConfigMoveFollowNpc::~ConfigMoveFollowNpc(data::ConfigMoveFollowNpc *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMoveFollowNpc + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMoveFollowTarget = v2;
  data::ConfigMoveFollowTarget::~ConfigMoveFollowTarget((data::ConfigMoveFollowTarget *const)this);
};

// Line 1790: range 0000000011A56036-0000000011A56046
const char *__cdecl data::ConfigMoveFollowNpc::getTypeName(const data::ConfigMoveFollowNpc *const this)
{
  return "ConfigMoveFollowNpc";
};

// Line 1791: range 0000000011A56048-0000000011A561E4
int32_t __cdecl data::ConfigMoveFollowNpc::getHashNum(const data::ConfigMoveFollowNpc *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigMoveFollowNpc::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMoveFollowNpc",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1807: range 0000000011DC130C-0000000011DC134D
void __cdecl data::ConfigMoveFollowNpcFactory::ConfigMoveFollowNpcFactory(data::ConfigMoveFollowNpcFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMoveFollowNpcFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMoveFollowNpcFactory = v2;
};

// Line 1815: range 0000000011DC181C-0000000011DC1CB8
void __cdecl data::ConfigFollowMove::ConfigFollowMove(data::ConfigFollowMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rdx

  data::ConfigMove::ConfigMove((data::ConfigMove *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigFollowMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  v3 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->target >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->target, v3);
  }
  this->target = LocalAvatar_2;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_target_instance_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_target_instance_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_target_instance_id, v3);
  }
  this->group_target_instance_id = 0;
  if ( *(_WORD *)(((unsigned __int64)&this->follow_target_ex >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigMoveFollowTarget>();
  std::string::basic_string(&this->attach_point);
  if ( *(char *)(((unsigned __int64)&this->follow_rotation >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->follow_rotation, v3, &this->follow_rotation);
  this->follow_rotation = 0;
  data::Vector::Vector(&this->offset);
  data::Vector::Vector(&this->forward);
  v4 = ((_BYTE)this - 68) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->follow_owner_invisible >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->follow_owner_invisible >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->follow_owner_invisible, v4, v5);
  this->follow_owner_invisible = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fixed_y >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fixed_y >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fixed_y, v4);
  }
  this->fixed_y = -3.4028235e38;
  data::ConfigIgnoreCollision::ConfigIgnoreCollision(&this->ignore_collision);
  data::ConfigMoveDisableCollision::ConfigMoveDisableCollision(&this->move_disable_collision);
  data::ConfigMoveAudio::ConfigMoveAudio(&this->move_audio);
  if ( *(char *)(((unsigned __int64)&this->sync_trans_to_server >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->sync_trans_to_server, v4, &this->sync_trans_to_server);
  this->sync_trans_to_server = 0;
  v6 = (((_BYTE)this - 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->sync_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sync_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->sync_interval, v6);
  }
  this->sync_interval = 1.0;
  if ( *(char *)(((unsigned __int64)&this->handle_in_late_tick >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->handle_in_late_tick, v6, &this->handle_in_late_tick);
  this->handle_in_late_tick = 0;
  v7 = (((_BYTE)this - 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->follow_position_smoothed_damp_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->follow_position_smoothed_damp_time >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->follow_position_smoothed_damp_time, v7);
  }
  this->follow_position_smoothed_damp_time = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->follow_rotation_smoothed_damp_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->follow_rotation_smoothed_damp_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->follow_rotation_smoothed_damp_time, v7);
  }
  this->follow_rotation_smoothed_damp_time = 0.0;
  v8 = ((_BYTE)this - 36) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->follow_in_fixed_update >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->follow_in_fixed_update >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->follow_in_fixed_update, v8, v9);
  this->follow_in_fixed_update = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fixed_follow_pos_max_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fixed_follow_pos_max_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fixed_follow_pos_max_speed, v8);
  }
  this->fixed_follow_pos_max_speed = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fixed_follow_rot_max_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fixed_follow_rot_max_speed >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fixed_follow_rot_max_speed, (((_BYTE)this - 28) & 7u) + 3);
  }
  this->fixed_follow_rot_max_speed = 0.0;
};

// Line 1815: range 0000000011DC2102-0000000011DC2B3C
void __cdecl data::ConfigFollowMove::ConfigFollowMove(
        data::ConfigFollowMove *const this,
        const data::ConfigFollowMove *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::FollowTarget target; // ecx
  char v5; // dl
  uint32_t group_target_instance_id; // ecx
  char v7; // al
  std::string *p_attach_point; // rsi
  bool follow_rotation; // cl
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  bool follow_owner_invisible; // cl
  char v16; // dl
  __int64 v17; // rdx
  float fixed_y; // xmm0_4
  data::ConfigMoveAudio *p_move_audio; // rsi
  bool sync_trans_to_server; // cl
  char v21; // al
  float sync_interval; // xmm0_4
  __int64 v23; // rsi
  bool handle_in_late_tick; // cl
  char v25; // al
  float follow_position_smoothed_damp_time; // xmm0_4
  __int64 v27; // rsi
  float follow_rotation_smoothed_damp_time; // xmm0_4
  __int64 v29; // rsi
  __int64 v30; // rdx
  bool follow_in_fixed_update; // cl
  char v32; // dl
  __int64 v33; // rdx
  float fixed_follow_pos_max_speed; // xmm0_4
  float fixed_follow_rot_max_speed; // xmm0_4

  data::ConfigMove::ConfigMove((data::ConfigMove *const)this, (const data::ConfigMove *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigFollowMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMove = v2;
  v3 = (((_BYTE)a2 + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->target >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->target >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->target);
  }
  target = a2->target;
  v5 = *(_BYTE *)(((unsigned __int64)&this->target >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 92) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->target, v3);
  }
  this->target = target;
  if ( *(_BYTE *)(((unsigned __int64)&a2->group_target_instance_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->group_target_instance_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->group_target_instance_id);
  }
  group_target_instance_id = a2->group_target_instance_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->group_target_instance_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->group_target_instance_id, v3);
  }
  this->group_target_instance_id = group_target_instance_id;
  std::shared_ptr<data::ConfigMoveFollowTarget>::shared_ptr(&this->follow_target_ex, &a2->follow_target_ex);
  p_attach_point = &a2->attach_point;
  std::string::basic_string(&this->attach_point, &a2->attach_point);
  if ( *(char *)(((unsigned __int64)&a2->follow_rotation >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->follow_rotation, p_attach_point, &a2->follow_rotation);
  follow_rotation = a2->follow_rotation;
  v10 = *(_BYTE *)(((unsigned __int64)&this->follow_rotation >> 3) + 0x7FFF8000);
  if ( v10 < 0 )
  {
    LOBYTE(p_attach_point) = v10 != 0;
    __asan_report_store1(&this->follow_rotation, p_attach_point, &this->follow_rotation);
  }
  this->follow_rotation = follow_rotation;
  if ( (((unsigned __int8)this - 100) & 7) >= *(_BYTE *)(((unsigned __int64)&this->offset >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->offset >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->offset.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 85) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->offset.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->offset, 16LL);
  }
  if ( (((unsigned __int8)a2 - 100) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->offset >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->offset >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->offset.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 85) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->offset.is_json_loaded + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->offset, 16LL);
  }
  v11 = *(_QWORD *)&a2->offset.z;
  *(_QWORD *)&this->offset.x = *(_QWORD *)&a2->offset.x;
  *(_QWORD *)&this->offset.z = v11;
  if ( (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->forward >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->forward >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->forward.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 69) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->forward.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->forward, 16LL);
  }
  if ( (((unsigned __int8)a2 - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->forward >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->forward >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->forward.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 69) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->forward.is_json_loaded + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->forward, 16LL);
  }
  v12 = *(_QWORD *)&a2->forward.z;
  *(_QWORD *)&this->forward.x = *(_QWORD *)&a2->forward.x;
  *(_QWORD *)&this->forward.z = v12;
  v13 = ((_BYTE)a2 - 68) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&a2->follow_owner_invisible >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&a2->follow_owner_invisible >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_load1(&a2->follow_owner_invisible, v13, v14);
  follow_owner_invisible = a2->follow_owner_invisible;
  v16 = *(_BYTE *)(((unsigned __int64)&this->follow_owner_invisible >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v16 != 0;
  v17 = (v16 != 0) & (unsigned __int8)((((unsigned __int8)this - 68) & 7) >= v16);
  if ( (_BYTE)v17 )
    __asan_report_store1(&this->follow_owner_invisible, v13, v17);
  this->follow_owner_invisible = follow_owner_invisible;
  if ( *(_BYTE *)(((unsigned __int64)&a2->fixed_y >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->fixed_y >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->fixed_y);
  }
  fixed_y = a2->fixed_y;
  if ( *(_BYTE *)(((unsigned __int64)&this->fixed_y >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fixed_y >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fixed_y, v13);
  }
  this->fixed_y = fixed_y;
  data::ConfigIgnoreCollision::ConfigIgnoreCollision(&this->ignore_collision, &a2->ignore_collision);
  data::ConfigMoveDisableCollision::ConfigMoveDisableCollision(
    &this->move_disable_collision,
    &a2->move_disable_collision);
  p_move_audio = &a2->move_audio;
  data::ConfigMoveAudio::ConfigMoveAudio(&this->move_audio, &a2->move_audio);
  if ( *(char *)(((unsigned __int64)&a2->sync_trans_to_server >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->sync_trans_to_server, p_move_audio, &a2->sync_trans_to_server);
  sync_trans_to_server = a2->sync_trans_to_server;
  v21 = *(_BYTE *)(((unsigned __int64)&this->sync_trans_to_server >> 3) + 0x7FFF8000);
  if ( v21 < 0 )
  {
    LOBYTE(p_move_audio) = v21 != 0;
    __asan_report_store1(&this->sync_trans_to_server, p_move_audio, &this->sync_trans_to_server);
  }
  this->sync_trans_to_server = sync_trans_to_server;
  if ( *(_BYTE *)(((unsigned __int64)&a2->sync_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->sync_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->sync_interval);
  }
  sync_interval = a2->sync_interval;
  v23 = (((_BYTE)this - 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->sync_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sync_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->sync_interval, v23);
  }
  this->sync_interval = sync_interval;
  if ( *(char *)(((unsigned __int64)&a2->handle_in_late_tick >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->handle_in_late_tick, v23, &a2->handle_in_late_tick);
  handle_in_late_tick = a2->handle_in_late_tick;
  v25 = *(_BYTE *)(((unsigned __int64)&this->handle_in_late_tick >> 3) + 0x7FFF8000);
  if ( v25 < 0 )
  {
    LOBYTE(v23) = v25 != 0;
    __asan_report_store1(&this->handle_in_late_tick, v23, &this->handle_in_late_tick);
  }
  this->handle_in_late_tick = handle_in_late_tick;
  if ( *(_BYTE *)(((unsigned __int64)&a2->follow_position_smoothed_damp_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->follow_position_smoothed_damp_time >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->follow_position_smoothed_damp_time);
  }
  follow_position_smoothed_damp_time = a2->follow_position_smoothed_damp_time;
  v27 = (((_BYTE)this - 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->follow_position_smoothed_damp_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->follow_position_smoothed_damp_time >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->follow_position_smoothed_damp_time, v27);
  }
  this->follow_position_smoothed_damp_time = follow_position_smoothed_damp_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->follow_rotation_smoothed_damp_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->follow_rotation_smoothed_damp_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->follow_rotation_smoothed_damp_time);
  }
  follow_rotation_smoothed_damp_time = a2->follow_rotation_smoothed_damp_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->follow_rotation_smoothed_damp_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->follow_rotation_smoothed_damp_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->follow_rotation_smoothed_damp_time, v27);
  }
  this->follow_rotation_smoothed_damp_time = follow_rotation_smoothed_damp_time;
  v29 = ((_BYTE)a2 - 36) & 7;
  v30 = (*(_BYTE *)(((unsigned __int64)&a2->follow_in_fixed_update >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v29 >= *(_BYTE *)(((unsigned __int64)&a2->follow_in_fixed_update >> 3) + 0x7FFF8000));
  if ( (_BYTE)v30 )
    __asan_report_load1(&a2->follow_in_fixed_update, v29, v30);
  follow_in_fixed_update = a2->follow_in_fixed_update;
  v32 = *(_BYTE *)(((unsigned __int64)&this->follow_in_fixed_update >> 3) + 0x7FFF8000);
  LOBYTE(v29) = v32 != 0;
  v33 = (v32 != 0) & (unsigned __int8)((((unsigned __int8)this - 36) & 7) >= v32);
  if ( (_BYTE)v33 )
    __asan_report_store1(&this->follow_in_fixed_update, v29, v33);
  this->follow_in_fixed_update = follow_in_fixed_update;
  if ( *(_BYTE *)(((unsigned __int64)&a2->fixed_follow_pos_max_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->fixed_follow_pos_max_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->fixed_follow_pos_max_speed);
  }
  fixed_follow_pos_max_speed = a2->fixed_follow_pos_max_speed;
  if ( *(_BYTE *)(((unsigned __int64)&this->fixed_follow_pos_max_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fixed_follow_pos_max_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fixed_follow_pos_max_speed, v29);
  }
  this->fixed_follow_pos_max_speed = fixed_follow_pos_max_speed;
  if ( *(_BYTE *)(((unsigned __int64)&a2->fixed_follow_rot_max_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->fixed_follow_rot_max_speed >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->fixed_follow_rot_max_speed);
  }
  fixed_follow_rot_max_speed = a2->fixed_follow_rot_max_speed;
  if ( *(_BYTE *)(((unsigned __int64)&this->fixed_follow_rot_max_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fixed_follow_rot_max_speed >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fixed_follow_rot_max_speed, (((_BYTE)this - 28) & 7u) + 3);
  }
  this->fixed_follow_rot_max_speed = fixed_follow_rot_max_speed;
};

// Line 1841: range 0000000011E068EA-0000000011E0698D
void __cdecl data::ConfigFollowMove::~ConfigFollowMove(data::ConfigFollowMove *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigFollowMove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMove = v2;
  data::ConfigMoveAudio::~ConfigMoveAudio(&this->move_audio);
  data::ConfigMoveDisableCollision::~ConfigMoveDisableCollision(&this->move_disable_collision);
  data::ConfigIgnoreCollision::~ConfigIgnoreCollision(&this->ignore_collision);
  std::string::~string(&this->attach_point);
  std::shared_ptr<data::ConfigMoveFollowTarget>::~shared_ptr(&this->follow_target_ex);
  data::ConfigMove::~ConfigMove((data::ConfigMove *const)this);
};

// Line 1841: range 0000000011E0698E-0000000011E069B8
void __cdecl data::ConfigFollowMove::~ConfigFollowMove(data::ConfigFollowMove *const this)
{
  data::ConfigFollowMove::~ConfigFollowMove(this);
  operator delete(this, 0x1E8uLL);
};

// Line 1846: range 0000000011A56222-0000000011A56232
const char *__cdecl data::ConfigFollowMove::getTypeName(const data::ConfigFollowMove *const this)
{
  return "ConfigFollowMove";
};

// Line 1847: range 0000000011A56234-0000000011A563D0
int32_t __cdecl data::ConfigFollowMove::getHashNum(const data::ConfigFollowMove *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigFollowMove::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigFollowMove",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1863: range 0000000011DC2E26-0000000011DC2E67
void __cdecl data::ConfigFollowMoveFactory::ConfigFollowMoveFactory(data::ConfigFollowMoveFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigFollowMoveFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigFollowMoveFactory = v2;
};
