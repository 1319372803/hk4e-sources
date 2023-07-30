// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Audio/ConfigSpatialAudio.h

// Line 79: range 0000000012135800-0000000012135A18
void __cdecl data::ConfigSpatialRoom::ConfigSpatialRoom(data::ConfigSpatialRoom *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  std::string::basic_string(this);
  data::ConfigWwiseString::ConfigWwiseString(&this->reverb_aux_bus);
  if ( *(_BYTE *)(((unsigned __int64)&this->reverb_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reverb_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reverb_level, v1);
  }
  this->reverb_level = 1.0;
  v2 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->wall_occlusion >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->wall_occlusion >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->wall_occlusion, v2);
  }
  this->wall_occlusion = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->aux_send_level_to_self >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->aux_send_level_to_self >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->aux_send_level_to_self, v2);
  }
  this->aux_send_level_to_self = 0.0;
  v3 = ((_BYTE)this + 84) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->keep_register >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->keep_register >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->keep_register, v3, v4);
  this->keep_register = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->priority, v3);
  }
  this->priority = 0;
  v5 = ((_BYTE)this + 92) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_major_room >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_major_room >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_major_room, v5, v6);
  this->is_major_room = 0;
  std::vector<data::ConfigSpatialBoxRoomTrigger>::vector(&this->box_room_triggers);
  std::vector<data::ConfigSpatialSphereRoomTrigger>::vector(&this->sphere_room_triggers);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v5, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 79: range 00000000122E896A-00000000122E8D4D
void __cdecl data::ConfigSpatialRoom::ConfigSpatialRoom(
        data::ConfigSpatialRoom *const this,
        data::ConfigSpatialRoom *a2)
{
  data::ConfigWwiseString *p_reverb_aux_bus; // rsi
  float reverb_level; // xmm0_4
  float wall_occlusion; // xmm0_4
  __int64 v5; // rsi
  float aux_send_level_to_self; // xmm0_4
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool keep_register; // cl
  char v10; // dl
  __int64 v11; // rdx
  int32_t priority; // ecx
  char v13; // al
  __int64 v14; // rsi
  __int64 v15; // rdx
  bool is_major_room; // cl
  char v17; // dl
  __int64 v18; // rdx
  data::ConfigSpatialSphereRoomTriggerList *p_sphere_room_triggers; // rsi
  bool is_json_loaded; // cl
  char v21; // al

  std::string::basic_string(this, a2);
  p_reverb_aux_bus = &a2->reverb_aux_bus;
  data::ConfigWwiseString::ConfigWwiseString(&this->reverb_aux_bus, p_reverb_aux_bus);
  if ( *(_BYTE *)(((unsigned __int64)&a2->reverb_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->reverb_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->reverb_level);
  }
  reverb_level = a2->reverb_level;
  if ( *(_BYTE *)(((unsigned __int64)&this->reverb_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reverb_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reverb_level, p_reverb_aux_bus);
  }
  this->reverb_level = reverb_level;
  if ( *(_BYTE *)(((unsigned __int64)&a2->wall_occlusion >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->wall_occlusion >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->wall_occlusion);
  }
  wall_occlusion = a2->wall_occlusion;
  v5 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->wall_occlusion >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->wall_occlusion >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->wall_occlusion, v5);
  }
  this->wall_occlusion = wall_occlusion;
  if ( *(_BYTE *)(((unsigned __int64)&a2->aux_send_level_to_self >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->aux_send_level_to_self >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->aux_send_level_to_self);
  }
  aux_send_level_to_self = a2->aux_send_level_to_self;
  if ( *(_BYTE *)(((unsigned __int64)&this->aux_send_level_to_self >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->aux_send_level_to_self >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->aux_send_level_to_self, v5);
  }
  this->aux_send_level_to_self = aux_send_level_to_self;
  v7 = ((_BYTE)a2 + 84) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&a2->keep_register >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&a2->keep_register >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&a2->keep_register, v7, v8);
  keep_register = a2->keep_register;
  v10 = *(_BYTE *)(((unsigned __int64)&this->keep_register >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this + 84) & 7) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->keep_register, v7, v11);
  this->keep_register = keep_register;
  if ( *(_BYTE *)(((unsigned __int64)&a2->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->priority);
  }
  priority = a2->priority;
  v13 = *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000);
  if ( v13 != 0 && v13 <= 3 )
  {
    LOBYTE(v7) = v13 != 0;
    __asan_report_store4(&this->priority, v7);
  }
  this->priority = priority;
  v14 = ((_BYTE)a2 + 92) & 7;
  v15 = (*(_BYTE *)(((unsigned __int64)&a2->is_major_room >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)&a2->is_major_room >> 3) + 0x7FFF8000));
  if ( (_BYTE)v15 )
    __asan_report_load1(&a2->is_major_room, v14, v15);
  is_major_room = a2->is_major_room;
  v17 = *(_BYTE *)(((unsigned __int64)&this->is_major_room >> 3) + 0x7FFF8000);
  LOBYTE(v14) = v17 != 0;
  v18 = (v17 != 0) & (unsigned __int8)((((unsigned __int8)this + 92) & 7) >= v17);
  if ( (_BYTE)v18 )
    __asan_report_store1(&this->is_major_room, v14, v18);
  this->is_major_room = is_major_room;
  std::vector<data::ConfigSpatialBoxRoomTrigger>::vector(&this->box_room_triggers, &a2->box_room_triggers);
  p_sphere_room_triggers = &a2->sphere_room_triggers;
  std::vector<data::ConfigSpatialSphereRoomTrigger>::vector(&this->sphere_room_triggers, &a2->sphere_room_triggers);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_sphere_room_triggers, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v21 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v21 < 0 )
  {
    LOBYTE(p_sphere_room_triggers) = v21 != 0;
    __asan_report_store1(&this->is_json_loaded, p_sphere_room_triggers, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 79: range 0000000012135A1A-0000000012135A64
void __cdecl data::ConfigSpatialRoom::~ConfigSpatialRoom(data::ConfigSpatialRoom *const this)
{
  std::vector<data::ConfigSpatialSphereRoomTrigger>::~vector(&this->sphere_room_triggers);
  std::vector<data::ConfigSpatialBoxRoomTrigger>::~vector(&this->box_room_triggers);
  data::ConfigWwiseString::~ConfigWwiseString(&this->reverb_aux_bus);
  std::string::~string(this);
};

// Line 116: range 0000000012135A66-0000000012135D3D
void __cdecl data::ConfigSpatialPortal::ConfigSpatialPortal(data::ConfigSpatialPortal *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  char v5[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigSpatialPortal::ConfigSpatialPortal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202116351;
  std::string::basic_string(this);
  data::Vector::Vector(&this->position);
  data::Vector::Vector(&this->rotation);
  data::Vector::Vector(&this->size);
  if ( *(char *)(((unsigned __int64)&this->enabled >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->enabled, v1, &this->enabled);
  this->enabled = 1;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    &this->front_room_name,
    "Outdoors",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    &this->back_room_name,
    "Outdoors",
    (const std::allocator<char> *)(v2 + 64));
  std::allocator<char>::~allocator(v2 + 64);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, "Outdoors", &this->is_json_loaded);
  this->is_json_loaded = 0;
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 116: range 00000000122E94DE-00000000122E975B
void __cdecl data::ConfigSpatialPortal::ConfigSpatialPortal(
        data::ConfigSpatialPortal *const this,
        data::ConfigSpatialPortal *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  bool enabled; // cl
  char v6; // al
  std::string *p_back_room_name; // rsi
  bool is_json_loaded; // cl
  char v9; // al
  data::ConfigSpatialPortal *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  std::string::basic_string(this, a2);
  if ( *(_WORD *)(((unsigned __int64)&this->position >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->position >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->position);
  v2 = *(_QWORD *)&a2->position.z;
  *(_QWORD *)&this->position.x = *(_QWORD *)&a2->position.x;
  *(_QWORD *)&this->position.z = v2;
  if ( *(_WORD *)(((unsigned __int64)&this->rotation >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->rotation >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->rotation);
  v3 = *(_QWORD *)&a2->rotation.z;
  *(_QWORD *)&this->rotation.x = *(_QWORD *)&a2->rotation.x;
  *(_QWORD *)&this->rotation.z = v3;
  if ( *(_WORD *)(((unsigned __int64)&this->size >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->size >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->size);
  v4 = *(_QWORD *)&a2->size.z;
  *(_QWORD *)&this->size.x = *(_QWORD *)&a2->size.x;
  *(_QWORD *)&this->size.z = v4;
  if ( *(char *)(((unsigned __int64)&a2->enabled >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->enabled, a2, &a2->enabled);
  enabled = a2->enabled;
  v6 = *(_BYTE *)(((unsigned __int64)&this->enabled >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(a2) = v6 != 0;
    __asan_report_store1(&this->enabled, a2, &this->enabled);
  }
  this->enabled = enabled;
  std::string::basic_string(&this->front_room_name, &v10->front_room_name);
  p_back_room_name = &v10->back_room_name;
  std::string::basic_string(&this->back_room_name, &v10->back_room_name);
  if ( *(char *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v10->is_json_loaded, p_back_room_name, &v10->is_json_loaded);
  is_json_loaded = v10->is_json_loaded;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(p_back_room_name) = v9 != 0;
    __asan_report_store1(&this->is_json_loaded, p_back_room_name, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 116: range 0000000012135D3E-0000000012135D78
void __cdecl data::ConfigSpatialPortal::~ConfigSpatialPortal(data::ConfigSpatialPortal *const this)
{
  std::string::~string(&this->back_room_name);
  std::string::~string(&this->front_room_name);
  std::string::~string(this);
};
