// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/platform_route.h

// Line 26: range 00000000169161C4-00000000169166B6
PlatformRouteParam *__cdecl PlatformRouteParam::operator=(PlatformRouteParam *const this, const PlatformRouteParam *a2)
{
  uint32_t point_array_id; // ecx
  char v3; // al
  const PlatformRouteParam *v4; // rsi
  __int64 v5; // rdx
  data::RouteType route_type; // ecx
  char v7; // al
  __int64 v8; // rsi
  bool is_turn_mode; // cl
  char v10; // dl
  __int64 v11; // rdx
  data::RouteRecordMode record_mode; // ecx
  char v13; // al
  __int64 v14; // rsi
  bool is_trigger_one_way_end; // cl
  char v16; // dl
  __int64 v17; // rdx
  __int64 v18; // rsi
  bool is_simulate_temp_route_by_time; // cl
  char v20; // dl
  __int64 v21; // rdx
  uint32_t speed_level; // ecx
  char v23; // al
  float arrive_range; // xmm0_4
  bool v25; // dl
  const PlatformRouteParam *v27; // [rsp+0h] [rbp-10h]

  v27 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  point_array_id = a2->point_array_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, (_BYTE)this);
  }
  this->point_array_id = point_array_id;
  std::vector<data::ConfigPoint>::operator=(&this->config_point_vec, &v27->config_point_vec);
  if ( *(char *)(((unsigned __int64)&this->current_transform >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->current_transform.rotation.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 55) & 7) >= *(_BYTE *)((((unsigned __int64)&this->current_transform.rotation.z + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->current_transform, 24LL);
  }
  if ( *(char *)(((unsigned __int64)&v27->current_transform >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v27->current_transform.rotation.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v27 + 55) & 7) >= *(_BYTE *)((((unsigned __int64)&v27->current_transform.rotation.z + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&v27->current_transform, 24LL);
  }
  v4 = v27;
  v5 = *(_QWORD *)&v27->current_transform.position.z;
  *(_QWORD *)&this->current_transform.position.x = *(_QWORD *)&v27->current_transform.position.x;
  *(_QWORD *)&this->current_transform.position.z = v5;
  *(_QWORD *)&this->current_transform.rotation.y = *(_QWORD *)&v27->current_transform.rotation.y;
  if ( *(_BYTE *)(((unsigned __int64)&v27->route_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v27->route_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v27->route_type);
  }
  route_type = v27->route_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->route_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v4) = v7 != 0;
    __asan_report_store4(&this->route_type, v4, (_BYTE)this + 56);
  }
  this->route_type = route_type;
  v8 = ((_BYTE)v27 + 60) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&v27->is_turn_mode >> 3) + 0x7FFF8000) != 0
    && (char)v8 >= *(_BYTE *)(((unsigned __int64)&v27->is_turn_mode >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&v27->is_turn_mode);
  }
  is_turn_mode = v27->is_turn_mode;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_turn_mode >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this + 60) & 7) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->is_turn_mode, v8, v11);
  this->is_turn_mode = is_turn_mode;
  if ( *(_BYTE *)(((unsigned __int64)&v27->record_mode >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v27->record_mode >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v27->record_mode);
  }
  record_mode = v27->record_mode;
  v13 = *(_BYTE *)(((unsigned __int64)&this->record_mode >> 3) + 0x7FFF8000);
  if ( v13 != 0 && v13 <= 3 )
  {
    LOBYTE(v8) = v13 != 0;
    __asan_report_store4(&this->record_mode, v8, (_BYTE)this + 64);
  }
  this->record_mode = record_mode;
  v14 = ((_BYTE)v27 + 68) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&v27->is_trigger_one_way_end >> 3) + 0x7FFF8000) != 0
    && (char)v14 >= *(_BYTE *)(((unsigned __int64)&v27->is_trigger_one_way_end >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&v27->is_trigger_one_way_end);
  }
  is_trigger_one_way_end = v27->is_trigger_one_way_end;
  v16 = *(_BYTE *)(((unsigned __int64)&this->is_trigger_one_way_end >> 3) + 0x7FFF8000);
  LOBYTE(v14) = v16 != 0;
  v17 = (v16 != 0) & (unsigned __int8)((((unsigned __int8)this + 68) & 7) >= v16);
  if ( (_BYTE)v17 )
    __asan_report_store1(&this->is_trigger_one_way_end, v14, v17);
  this->is_trigger_one_way_end = is_trigger_one_way_end;
  v18 = ((_BYTE)v27 + 69) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&v27->is_simulate_temp_route_by_time >> 3) + 0x7FFF8000) != 0
    && (char)v18 >= *(_BYTE *)(((unsigned __int64)&v27->is_simulate_temp_route_by_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&v27->is_simulate_temp_route_by_time);
  }
  is_simulate_temp_route_by_time = v27->is_simulate_temp_route_by_time;
  v20 = *(_BYTE *)(((unsigned __int64)&this->is_simulate_temp_route_by_time >> 3) + 0x7FFF8000);
  LOBYTE(v18) = v20 != 0;
  v21 = (v20 != 0) & (unsigned __int8)((((unsigned __int8)this + 69) & 7) >= v20);
  if ( (_BYTE)v21 )
    __asan_report_store1(&this->is_simulate_temp_route_by_time, v18, v21);
  this->is_simulate_temp_route_by_time = is_simulate_temp_route_by_time;
  if ( *(_BYTE *)(((unsigned __int64)&v27->speed_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v27->speed_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v27->speed_level);
  }
  speed_level = v27->speed_level;
  v23 = *(_BYTE *)(((unsigned __int64)&this->speed_level >> 3) + 0x7FFF8000);
  if ( v23 != 0 && v23 <= 3 )
  {
    LOBYTE(v18) = v23 != 0;
    __asan_report_store4(&this->speed_level, v18, (_BYTE)this + 72);
  }
  this->speed_level = speed_level;
  if ( *(_BYTE *)(((unsigned __int64)&v27->arrive_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v27 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v27->arrive_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v27->arrive_range);
  }
  arrive_range = v27->arrive_range;
  v25 = *(_BYTE *)(((unsigned __int64)&this->arrive_range >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->arrive_range >> 3) + 0x7FFF8000);
  if ( v25 )
    __asan_report_store4(&this->arrive_range, (((_BYTE)this + 76) & 7u) + 3, v25);
  this->arrive_range = arrive_range;
  return this;
};

// Line 26: range 000000001461DB10-000000001461DD39
void __cdecl PlatformRouteParam::PlatformRouteParam(PlatformRouteParam *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool v8; // dl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, (_BYTE)this);
  }
  this->point_array_id = 0;
  std::vector<data::ConfigPoint>::vector(&this->config_point_vec);
  Transform::Transform(&this->current_transform);
  if ( *(_BYTE *)(((unsigned __int64)&this->route_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->route_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->route_type, v1, (_BYTE)this + 56);
  }
  this->route_type = OneWay;
  v2 = ((_BYTE)this + 60) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_turn_mode >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_turn_mode >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_turn_mode, v2, v3);
  this->is_turn_mode = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->record_mode >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->record_mode >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->record_mode, v2, (_BYTE)this + 64);
  }
  this->record_mode = None_13;
  v4 = ((_BYTE)this + 68) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_trigger_one_way_end >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_trigger_one_way_end >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_trigger_one_way_end, v4, v5);
  this->is_trigger_one_way_end = 1;
  v6 = ((_BYTE)this + 69) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->is_simulate_temp_route_by_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_simulate_temp_route_by_time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_simulate_temp_route_by_time, v6, v7);
  this->is_simulate_temp_route_by_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->speed_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->speed_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->speed_level, v6, (_BYTE)this + 72);
  }
  this->speed_level = 0;
  v8 = *(_BYTE *)(((unsigned __int64)&this->arrive_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->arrive_range >> 3) + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->arrive_range, (((_BYTE)this + 76) & 7u) + 3, v8);
  this->arrive_range = 0.0;
};

// Line 26: range 0000000016916798-0000000016916C87
void __cdecl PlatformRouteParam::PlatformRouteParam(PlatformRouteParam *const this, const PlatformRouteParam *a2)
{
  uint32_t point_array_id; // ecx
  char v3; // al
  const PlatformRouteParam *v4; // rsi
  __int64 v5; // rdx
  data::RouteType route_type; // ecx
  char v7; // al
  __int64 v8; // rsi
  bool is_turn_mode; // cl
  char v10; // dl
  __int64 v11; // rdx
  data::RouteRecordMode record_mode; // ecx
  char v13; // al
  __int64 v14; // rsi
  bool is_trigger_one_way_end; // cl
  char v16; // dl
  __int64 v17; // rdx
  __int64 v18; // rsi
  bool is_simulate_temp_route_by_time; // cl
  char v20; // dl
  __int64 v21; // rdx
  uint32_t speed_level; // ecx
  char v23; // al
  float arrive_range; // xmm0_4
  bool v25; // dl
  const PlatformRouteParam *v26; // [rsp+0h] [rbp-10h]

  v26 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  point_array_id = a2->point_array_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, (_BYTE)this);
  }
  this->point_array_id = point_array_id;
  std::vector<data::ConfigPoint>::vector(&this->config_point_vec, &v26->config_point_vec);
  if ( *(char *)(((unsigned __int64)&this->current_transform >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->current_transform.rotation.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 55) & 7) >= *(_BYTE *)((((unsigned __int64)&this->current_transform.rotation.z + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->current_transform, 24LL);
  }
  if ( *(char *)(((unsigned __int64)&v26->current_transform >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v26->current_transform.rotation.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v26 + 55) & 7) >= *(_BYTE *)((((unsigned __int64)&v26->current_transform.rotation.z + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&v26->current_transform, 24LL);
  }
  v4 = v26;
  v5 = *(_QWORD *)&v26->current_transform.position.z;
  *(_QWORD *)&this->current_transform.position.x = *(_QWORD *)&v26->current_transform.position.x;
  *(_QWORD *)&this->current_transform.position.z = v5;
  *(_QWORD *)&this->current_transform.rotation.y = *(_QWORD *)&v26->current_transform.rotation.y;
  if ( *(_BYTE *)(((unsigned __int64)&v26->route_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v26->route_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v26->route_type);
  }
  route_type = v26->route_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->route_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v4) = v7 != 0;
    __asan_report_store4(&this->route_type, v4, (_BYTE)this + 56);
  }
  this->route_type = route_type;
  v8 = ((_BYTE)v26 + 60) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&v26->is_turn_mode >> 3) + 0x7FFF8000) != 0
    && (char)v8 >= *(_BYTE *)(((unsigned __int64)&v26->is_turn_mode >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&v26->is_turn_mode);
  }
  is_turn_mode = v26->is_turn_mode;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_turn_mode >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this + 60) & 7) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->is_turn_mode, v8, v11);
  this->is_turn_mode = is_turn_mode;
  if ( *(_BYTE *)(((unsigned __int64)&v26->record_mode >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v26->record_mode >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v26->record_mode);
  }
  record_mode = v26->record_mode;
  v13 = *(_BYTE *)(((unsigned __int64)&this->record_mode >> 3) + 0x7FFF8000);
  if ( v13 != 0 && v13 <= 3 )
  {
    LOBYTE(v8) = v13 != 0;
    __asan_report_store4(&this->record_mode, v8, (_BYTE)this + 64);
  }
  this->record_mode = record_mode;
  v14 = ((_BYTE)v26 + 68) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&v26->is_trigger_one_way_end >> 3) + 0x7FFF8000) != 0
    && (char)v14 >= *(_BYTE *)(((unsigned __int64)&v26->is_trigger_one_way_end >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&v26->is_trigger_one_way_end);
  }
  is_trigger_one_way_end = v26->is_trigger_one_way_end;
  v16 = *(_BYTE *)(((unsigned __int64)&this->is_trigger_one_way_end >> 3) + 0x7FFF8000);
  LOBYTE(v14) = v16 != 0;
  v17 = (v16 != 0) & (unsigned __int8)((((unsigned __int8)this + 68) & 7) >= v16);
  if ( (_BYTE)v17 )
    __asan_report_store1(&this->is_trigger_one_way_end, v14, v17);
  this->is_trigger_one_way_end = is_trigger_one_way_end;
  v18 = ((_BYTE)v26 + 69) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&v26->is_simulate_temp_route_by_time >> 3) + 0x7FFF8000) != 0
    && (char)v18 >= *(_BYTE *)(((unsigned __int64)&v26->is_simulate_temp_route_by_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&v26->is_simulate_temp_route_by_time);
  }
  is_simulate_temp_route_by_time = v26->is_simulate_temp_route_by_time;
  v20 = *(_BYTE *)(((unsigned __int64)&this->is_simulate_temp_route_by_time >> 3) + 0x7FFF8000);
  LOBYTE(v18) = v20 != 0;
  v21 = (v20 != 0) & (unsigned __int8)((((unsigned __int8)this + 69) & 7) >= v20);
  if ( (_BYTE)v21 )
    __asan_report_store1(&this->is_simulate_temp_route_by_time, v18, v21);
  this->is_simulate_temp_route_by_time = is_simulate_temp_route_by_time;
  if ( *(_BYTE *)(((unsigned __int64)&v26->speed_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v26->speed_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v26->speed_level);
  }
  speed_level = v26->speed_level;
  v23 = *(_BYTE *)(((unsigned __int64)&this->speed_level >> 3) + 0x7FFF8000);
  if ( v23 != 0 && v23 <= 3 )
  {
    LOBYTE(v18) = v23 != 0;
    __asan_report_store4(&this->speed_level, v18, (_BYTE)this + 72);
  }
  this->speed_level = speed_level;
  if ( *(_BYTE *)(((unsigned __int64)&v26->arrive_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v26 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v26->arrive_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v26->arrive_range);
  }
  arrive_range = v26->arrive_range;
  v25 = *(_BYTE *)(((unsigned __int64)&this->arrive_range >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->arrive_range >> 3) + 0x7FFF8000);
  if ( v25 )
    __asan_report_store4(&this->arrive_range, (((_BYTE)this + 76) & 7u) + 3, v25);
  this->arrive_range = arrive_range;
};

// Line 26: range 000000001461DD3A-000000001461DD58
void __cdecl PlatformRouteParam::~PlatformRouteParam(PlatformRouteParam *const this)
{
  std::vector<data::ConfigPoint>::~vector(&this->config_point_vec);
};

// Line 41: range 000000001461D802-000000001461D9E7
void __cdecl PlatformSimulateResult::PlatformSimulateResult(PlatformSimulateResult *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  bool v3; // dl
  __int64 v4; // rsi
  bool v5; // dl
  __int64 v6; // rsi
  __int64 v7; // rdx

  Vector3::Vector3(&this->position, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->rotation, 0.0, 0.0, 0.0);
  if ( *(_BYTE *)(((unsigned __int64)&this->left_temp_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->left_temp_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->left_temp_time, v1, (_BYTE)this + 24);
  }
  this->left_temp_time = 0;
  v2 = (((_BYTE)this + 28) & 7u) + 3;
  v3 = *(_BYTE *)(((unsigned __int64)&this->route_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->route_time >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->route_time, v2, v3);
  this->route_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->route_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->route_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->route_index, v2, (_BYTE)this + 32);
  }
  this->route_index = 0;
  Transform::Transform(&this->platform_transform);
  v4 = (((_BYTE)this + 60) & 7u) + 3;
  v5 = *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000);
  if ( v5 )
    __asan_report_store4(&this->point_id, v4, v5);
  this->point_id = 0;
  std::vector<unsigned int>::vector(&this->triggerable_route_index_vec);
  if ( *(char *)(((unsigned __int64)&this->is_stop >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_stop, v4, &this->is_stop);
  this->is_stop = 0;
  v6 = ((_BYTE)this + 89) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->is_ignore_reach_point >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_ignore_reach_point >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_ignore_reach_point, v6, v7);
  this->is_ignore_reach_point = 0;
};

// Line 41: range 000000001461D9E8-000000001461DA06
void __cdecl PlatformSimulateResult::~PlatformSimulateResult(PlatformSimulateResult *const this)
{
  std::vector<unsigned int>::~vector(&this->triggerable_route_index_vec);
};

// Line 58: range 00000000131EA10E-00000000131EAB34
RoutePoint *__cdecl RoutePoint::operator=(RoutePoint *const this, const RoutePoint *a2)
{
  uint32_t route_index; // ecx
  char v3; // al
  char v4; // dl
  __int64 v5; // rsi
  float target_velocity; // xmm0_4
  __int64 v7; // rsi
  uint32_t wait_time; // ecx
  char v9; // dl
  bool v10; // dl
  uint32_t time_to_next_point; // ecx
  char v12; // al
  __int64 v13; // rsi
  bool has_reach_event; // cl
  char v15; // dl
  __int64 v16; // rdx
  char v17; // dl
  __int64 v18; // rsi
  bool is_reach_stop; // cl
  char v20; // al
  __int64 v21; // rsi
  bool rot_angle_same_stop; // cl
  char v23; // dl
  __int64 v24; // rdx
  float rot_angle_move_speed; // xmm0_4
  __int64 v26; // rsi
  bool v27; // dl
  float rot_angle_wait_speed; // xmm0_4
  __int64 v29; // rsi
  int rot_round_reach_rounds; // ecx
  char v31; // dl
  bool v32; // dl
  int rot_round_wait_rounds; // ecx
  char v34; // al
  __int64 v35; // rdx
  __int64 v36; // rdx
  const RoutePoint *v38; // [rsp+0h] [rbp-10h]

  v38 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->route_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->route_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->route_index);
  }
  route_index = a2->route_index;
  v3 = *(_BYTE *)(((unsigned __int64)&this->route_index >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->route_index, a2, (_BYTE)this + 8);
  }
  this->route_index = route_index;
  if ( (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->position >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->position >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->position.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&this->position.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->position, 12LL);
  }
  v4 = *(_BYTE *)((((unsigned __int64)&v38->position.z + 3) >> 3) + 0x7FFF8000);
  v5 = v4 != 0;
  if ( ((((unsigned __int8)v38 + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&v38->position >> 3) + 0x7FFF8000)
     && *(_BYTE *)(((unsigned __int64)&v38->position >> 3) + 0x7FFF8000) != 0) | (unsigned __int8)v5 & ((((unsigned __int8)v38 + 23) & 7) >= v4) )
  {
    v5 = 12LL;
    __asan_report_load_n(&v38->position, 12LL);
  }
  this->position = v38->position;
  if ( *(_BYTE *)(((unsigned __int64)&v38->target_velocity >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v38->target_velocity >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v38->target_velocity);
  }
  target_velocity = v38->target_velocity;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_velocity >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_velocity >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_velocity, v5, (_BYTE)this + 24);
  }
  this->target_velocity = target_velocity;
  v7 = (((_BYTE)v38 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v38->wait_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v38 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v38->wait_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v38->wait_time);
  }
  wait_time = v38->wait_time;
  v9 = *(_BYTE *)(((unsigned __int64)&this->wait_time >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v9 != 0;
  v10 = v9 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v9;
  if ( v10 )
    __asan_report_store4(&this->wait_time, v7, v10);
  this->wait_time = wait_time;
  if ( *(_BYTE *)(((unsigned __int64)&v38->time_to_next_point >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v38->time_to_next_point >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v38->time_to_next_point);
  }
  time_to_next_point = v38->time_to_next_point;
  v12 = *(_BYTE *)(((unsigned __int64)&this->time_to_next_point >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(v7) = v12 != 0;
    __asan_report_store4(&this->time_to_next_point, v7, (_BYTE)this + 32);
  }
  this->time_to_next_point = time_to_next_point;
  v13 = ((_BYTE)v38 + 36) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&v38->has_reach_event >> 3) + 0x7FFF8000) != 0
    && (char)v13 >= *(_BYTE *)(((unsigned __int64)&v38->has_reach_event >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&v38->has_reach_event);
  }
  has_reach_event = v38->has_reach_event;
  v15 = *(_BYTE *)(((unsigned __int64)&this->has_reach_event >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v15 != 0;
  v16 = (v15 != 0) & (unsigned __int8)((((unsigned __int8)this + 36) & 7) >= v15);
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->has_reach_event, v13, v16);
  this->has_reach_event = has_reach_event;
  if ( *(char *)(((unsigned __int64)&this->rotation >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->rotation.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 51) & 7) >= *(_BYTE *)((((unsigned __int64)&this->rotation.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->rotation, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&v38->rotation >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v38->rotation.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v38 + 51) & 7) >= *(_BYTE *)((((unsigned __int64)&v38->rotation.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&v38->rotation, 12LL);
  }
  this->rotation = v38->rotation;
  if ( (((unsigned __int8)this + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->dir_leave_the_point >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->dir_leave_the_point >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->dir_leave_the_point.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&this->dir_leave_the_point.z + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->dir_leave_the_point, 12LL);
  }
  v17 = *(_BYTE *)((((unsigned __int64)&v38->dir_leave_the_point.z + 3) >> 3) + 0x7FFF8000);
  v18 = v17 != 0;
  if ( ((((unsigned __int8)v38 + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&v38->dir_leave_the_point >> 3) + 0x7FFF8000)
     && *(_BYTE *)(((unsigned __int64)&v38->dir_leave_the_point >> 3) + 0x7FFF8000) != 0) | (unsigned __int8)v18 & ((((unsigned __int8)v38 + 63) & 7) >= v17) )
  {
    v18 = 12LL;
    __asan_report_load_n(&v38->dir_leave_the_point, 12LL);
  }
  this->dir_leave_the_point = v38->dir_leave_the_point;
  if ( *(char *)(((unsigned __int64)&v38->is_reach_stop >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v38->is_reach_stop);
  is_reach_stop = v38->is_reach_stop;
  v20 = *(_BYTE *)(((unsigned __int64)&this->is_reach_stop >> 3) + 0x7FFF8000);
  if ( v20 < 0 )
  {
    LOBYTE(v18) = v20 != 0;
    __asan_report_store1(&this->is_reach_stop, v18, &this->is_reach_stop);
  }
  this->is_reach_stop = is_reach_stop;
  v21 = ((_BYTE)v38 + 65) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&v38->rot_angle_same_stop >> 3) + 0x7FFF8000) != 0
    && (char)v21 >= *(_BYTE *)(((unsigned __int64)&v38->rot_angle_same_stop >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&v38->rot_angle_same_stop);
  }
  rot_angle_same_stop = v38->rot_angle_same_stop;
  v23 = *(_BYTE *)(((unsigned __int64)&this->rot_angle_same_stop >> 3) + 0x7FFF8000);
  LOBYTE(v21) = v23 != 0;
  v24 = (v23 != 0) & (unsigned __int8)((((unsigned __int8)this + 65) & 7) >= v23);
  if ( (_BYTE)v24 )
    __asan_report_store1(&this->rot_angle_same_stop, v21, v24);
  this->rot_angle_same_stop = rot_angle_same_stop;
  if ( *(_BYTE *)(((unsigned __int64)&v38->rot_angle_move_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v38 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v38->rot_angle_move_speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v38->rot_angle_move_speed);
  }
  rot_angle_move_speed = v38->rot_angle_move_speed;
  v26 = (((_BYTE)this + 68) & 7u) + 3;
  v27 = *(_BYTE *)(((unsigned __int64)&this->rot_angle_move_speed >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rot_angle_move_speed >> 3)
                                                         + 0x7FFF8000);
  if ( v27 )
    __asan_report_store4(&this->rot_angle_move_speed, v26, v27);
  this->rot_angle_move_speed = rot_angle_move_speed;
  if ( *(_BYTE *)(((unsigned __int64)&v38->rot_angle_wait_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v38->rot_angle_wait_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v38->rot_angle_wait_speed);
  }
  rot_angle_wait_speed = v38->rot_angle_wait_speed;
  if ( *(_BYTE *)(((unsigned __int64)&this->rot_angle_wait_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rot_angle_wait_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rot_angle_wait_speed, v26, (_BYTE)this + 72);
  }
  this->rot_angle_wait_speed = rot_angle_wait_speed;
  v29 = (((_BYTE)v38 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v38->rot_round_reach_rounds >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v38 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v38->rot_round_reach_rounds >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v38->rot_round_reach_rounds);
  }
  rot_round_reach_rounds = v38->rot_round_reach_rounds;
  v31 = *(_BYTE *)(((unsigned __int64)&this->rot_round_reach_rounds >> 3) + 0x7FFF8000);
  LOBYTE(v29) = v31 != 0;
  v32 = v31 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v31;
  if ( v32 )
    __asan_report_store4(&this->rot_round_reach_rounds, v29, v32);
  this->rot_round_reach_rounds = rot_round_reach_rounds;
  if ( *(_BYTE *)(((unsigned __int64)&v38->rot_round_wait_rounds >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v38->rot_round_wait_rounds >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v38->rot_round_wait_rounds);
  }
  rot_round_wait_rounds = v38->rot_round_wait_rounds;
  v34 = *(_BYTE *)(((unsigned __int64)&this->rot_round_wait_rounds >> 3) + 0x7FFF8000);
  if ( v34 != 0 && v34 <= 3 )
  {
    LOBYTE(v29) = v34 != 0;
    __asan_report_store4(&this->rot_round_wait_rounds, v29, (_BYTE)this + 80);
  }
  this->rot_round_wait_rounds = rot_round_wait_rounds;
  if ( (((unsigned __int8)this + 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->axis_angle_to_next_point >> 3)
                                                      + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->axis_angle_to_next_point >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->axis_angle_to_next_point.angle + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 99) & 7) >= *(_BYTE *)((((unsigned __int64)&this->axis_angle_to_next_point.angle + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->axis_angle_to_next_point, 16LL);
  }
  if ( (((unsigned __int8)v38 + 84) & 7) >= *(_BYTE *)(((unsigned __int64)&v38->axis_angle_to_next_point >> 3)
                                                     + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v38->axis_angle_to_next_point >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&v38->axis_angle_to_next_point.angle + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v38 + 99) & 7) >= *(_BYTE *)((((unsigned __int64)&v38->axis_angle_to_next_point.angle + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&v38->axis_angle_to_next_point, 16LL);
  }
  v35 = *(_QWORD *)&v38->axis_angle_to_next_point.axis.z;
  *(_QWORD *)&this->axis_angle_to_next_point.axis.x = *(_QWORD *)&v38->axis_angle_to_next_point.axis.x;
  *(_QWORD *)&this->axis_angle_to_next_point.axis.z = v35;
  if ( (((unsigned __int8)this + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&this->axis_angle_wait_the_point >> 3)
                                                       + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->axis_angle_wait_the_point >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->axis_angle_wait_the_point.angle + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 115) & 7) >= *(_BYTE *)((((unsigned __int64)&this->axis_angle_wait_the_point.angle + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->axis_angle_wait_the_point, 16LL);
  }
  if ( (((unsigned __int8)v38 + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&v38->axis_angle_wait_the_point >> 3)
                                                      + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v38->axis_angle_wait_the_point >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&v38->axis_angle_wait_the_point.angle + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v38 + 115) & 7) >= *(_BYTE *)((((unsigned __int64)&v38->axis_angle_wait_the_point.angle + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load_n(&v38->axis_angle_wait_the_point, 16LL);
  }
  v36 = *(_QWORD *)&v38->axis_angle_wait_the_point.axis.z;
  *(_QWORD *)&this->axis_angle_wait_the_point.axis.x = *(_QWORD *)&v38->axis_angle_wait_the_point.axis.x;
  *(_QWORD *)&this->axis_angle_wait_the_point.axis.z = v36;
  return this;
};

// Line 58: range 00000000135F017E-00000000135F04FC
void __cdecl RoutePoint::RoutePoint(RoutePoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  bool v4; // dl
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  bool v10; // dl
  __int64 v11; // rsi
  bool v12; // dl

  v2 = (int (**)(...))(&`vtable for'RoutePoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RoutePoint = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->route_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->route_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->route_index, v1, (_BYTE)this + 8);
  }
  this->route_index = 0;
  Vector3::Vector3(&this->position, 0.0, 0.0, 0.0);
  if ( *(_BYTE *)(((unsigned __int64)&this->target_velocity >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_velocity >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_velocity, v1, (_BYTE)this + 24);
  }
  this->target_velocity = 0.0;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  v4 = *(_BYTE *)(((unsigned __int64)&this->wait_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->wait_time >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->wait_time, v3, v4);
  this->wait_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_to_next_point >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_to_next_point >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_to_next_point, v3, (_BYTE)this + 32);
  }
  this->time_to_next_point = 0;
  v5 = ((_BYTE)this + 36) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->has_reach_event >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->has_reach_event >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->has_reach_event, v5, v6);
  this->has_reach_event = 0;
  Vector3::Vector3(&this->rotation, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->dir_leave_the_point, 0.0, 0.0, 0.0);
  if ( *(char *)(((unsigned __int64)&this->is_reach_stop >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_reach_stop, v5, &this->is_reach_stop);
  this->is_reach_stop = 0;
  v7 = ((_BYTE)this + 65) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->rot_angle_same_stop >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->rot_angle_same_stop >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->rot_angle_same_stop, v7, v8);
  this->rot_angle_same_stop = 0;
  v9 = (((_BYTE)this + 68) & 7u) + 3;
  v10 = *(_BYTE *)(((unsigned __int64)&this->rot_angle_move_speed >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rot_angle_move_speed >> 3)
                                                         + 0x7FFF8000);
  if ( v10 )
    __asan_report_store4(&this->rot_angle_move_speed, v9, v10);
  this->rot_angle_move_speed = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->rot_angle_wait_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rot_angle_wait_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rot_angle_wait_speed, v9, (_BYTE)this + 72);
  }
  this->rot_angle_wait_speed = 0.0;
  v11 = (((_BYTE)this + 76) & 7u) + 3;
  v12 = *(_BYTE *)(((unsigned __int64)&this->rot_round_reach_rounds >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rot_round_reach_rounds >> 3)
                                                         + 0x7FFF8000);
  if ( v12 )
    __asan_report_store4(&this->rot_round_reach_rounds, v11, v12);
  this->rot_round_reach_rounds = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->rot_round_wait_rounds >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rot_round_wait_rounds >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rot_round_wait_rounds, v11, (_BYTE)this + 80);
  }
  this->rot_round_wait_rounds = 0;
  RouteAxisAngle::RouteAxisAngle(&this->axis_angle_to_next_point);
  RouteAxisAngle::RouteAxisAngle(&this->axis_angle_wait_the_point);
};

// Line 81: range 00000000135F0818-00000000135F0842
void __cdecl RoutePoint::~RoutePoint(RoutePoint *const this)
{
  RoutePoint::~RoutePoint(this);
  operator delete(this, 0x78uLL);
};

// Line 81: range 00000000135F07D6-00000000135F0817
void __cdecl RoutePoint::~RoutePoint(RoutePoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'RoutePoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RoutePoint = v2;
};

// Line 83: range 00000000131D9D14-00000000131D9D22
void __cdecl RoutePoint::toMonsterRoutePoint(const RoutePoint *const this, proto::RoutePoint *proto_route_point)
{
  ;
};

// Line 84: range 00000000131D9D24-00000000131D9D32
uint32_t __cdecl RoutePoint::getPointId(const RoutePoint *const this)
{
  return 0;
};

// Line 93: range 00000000131D9D34-00000000131D9DD0
bool __cdecl RoutePoint::hasReachTrigger(const RoutePoint *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->has_reach_event >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->has_reach_event >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->has_reach_event);
  }
  if ( this->has_reach_event )
    return 1;
  if ( *(char *)(((unsigned __int64)&this->is_reach_stop >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_reach_stop);
  return this->is_reach_stop;
};

// Line 117: range 00000000131EAB36-00000000131EAE77
ArrayRoutePoint *__cdecl ArrayRoutePoint::operator=(ArrayRoutePoint *const this, const ArrayRoutePoint *a2)
{
  uint32_t *p_point_id; // rax
  __int64 v3; // rsi
  uint32_t point_id; // ecx
  char v5; // dl
  bool v6; // dl
  __int64 v7; // rdx
  float arrive_range; // xmm0_4
  bool v9; // dl

  RoutePoint::operator=((RoutePoint *const)this, (const RoutePoint *)a2);
  p_point_id = &a2->point_id;
  v3 = (((_BYTE)a2 + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->point_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_point_id);
  }
  point_id = a2->point_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v5 != 0;
  v6 = v5 != 0 && (char)((((_BYTE)this + 116) & 7) + 3) >= v5;
  if ( v6 )
    __asan_report_store4(&this->point_id, v3, v6);
  this->point_id = point_id;
  if ( (((unsigned __int8)this + 120) & 7) >= *(_BYTE *)(((unsigned __int64)&this->move_params >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->move_params >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)&this->move_params._M_index >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->move_params._M_index >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->move_params, 5LL);
  }
  if ( (((unsigned __int8)a2 + 120) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->move_params >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->move_params >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)&a2->move_params._M_index >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->move_params._M_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->move_params, 5LL);
  }
  this->move_params = a2->move_params;
  if ( (((unsigned __int8)this + 0x80) & 7) >= *(_BYTE *)(((unsigned __int64)&this->rotate_params >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->rotate_params >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)&this->rotate_params._M_index >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 112) & 7) >= *(_BYTE *)(((unsigned __int64)&this->rotate_params._M_index >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->rotate_params, 17LL);
  }
  if ( (((unsigned __int8)a2 + 0x80) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->rotate_params >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->rotate_params >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)&a2->rotate_params._M_index >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 112) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->rotate_params._M_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->rotate_params, 17LL);
  }
  v7 = *((_QWORD *)&a2->rotate_params._M_u._M_rest._M_rest._M_rest + 1);
  *(_QWORD *)this->rotate_params._M_u._M_first._M_storage._M_storage = *(_QWORD *)a2->rotate_params._M_u._M_first._M_storage._M_storage;
  *((_QWORD *)&this->rotate_params._M_u._M_rest._M_rest._M_rest + 1) = v7;
  this->rotate_params._M_index = a2->rotate_params._M_index;
  if ( *(_BYTE *)(((unsigned __int64)&a2->arrive_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->arrive_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->arrive_range);
  }
  arrive_range = a2->arrive_range;
  v9 = *(_BYTE *)(((unsigned __int64)&this->arrive_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->arrive_range >> 3) + 0x7FFF8000);
  if ( v9 )
    __asan_report_store4(&this->arrive_range, (((_BYTE)this - 108) & 7u) + 3, v9);
  this->arrive_range = arrive_range;
  return this;
};

// Line 117: range 0000000013611198-00000000136111E5
void __cdecl ArrayRoutePoint::~ArrayRoutePoint(ArrayRoutePoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ArrayRoutePoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RoutePoint = v2;
  RoutePoint::~RoutePoint((RoutePoint *const)this);
};

// Line 117: range 00000000136111E6-0000000013611210
void __cdecl ArrayRoutePoint::~ArrayRoutePoint(ArrayRoutePoint *const this)
{
  ArrayRoutePoint::~ArrayRoutePoint(this);
  operator delete(this, 0x98uLL);
};

// Line 129: range 00000000135F087C-00000000135F099F
void __cdecl ArrayRoutePoint::ArrayRoutePoint(ArrayRoutePoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  bool v3; // dl
  bool v4; // dl

  RoutePoint::RoutePoint((RoutePoint *const)this);
  v2 = (int (**)(...))(&`vtable for'ArrayRoutePoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RoutePoint = v2;
  v3 = *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->point_id, (((_BYTE)this + 116) & 7u) + 3, v3);
  this->point_id = 0;
  std::variant<float,float,bool>::variant(&this->move_params);
  std::variant<Vector3,RouteAxisAngle,RouteAxisAngle>::variant(&this->rotate_params);
  v4 = *(_BYTE *)(((unsigned __int64)&this->arrive_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->arrive_range >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->arrive_range, (((_BYTE)this - 108) & 7u) + 3, v4);
  this->arrive_range = 0.0;
};

// Line 132: range 00000000131D9DD2-00000000131D9E21
uint32_t __cdecl ArrayRoutePoint::getPointId(const ArrayRoutePoint *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->point_id);
  }
  return this->point_id;
};

// Line 142: range 000000001486624E-0000000014866278
void __cdecl PlatformRoute::~PlatformRoute(PlatformRoute *const this)
{
  std::vector<std::shared_ptr<RoutePoint>>::~vector(&this->point_vec_);
  std::enable_shared_from_this<PlatformRoute>::~enable_shared_from_this(this);
};

// Line 147: range 0000000014616ED0-000000001461720C
// local variable allocation has failed, the output may be wrong!
void __cdecl PlatformRoute::PlatformRoute(PlatformRoute *const this, uint32_t route_id)
{
  __int64 v2; // rsi
  bool v3; // dl
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  bool v9; // dl
  __int64 v10; // rsi
  bool v11; // dl
  __int64 v12; // rsi
  bool v13; // dl

  std::enable_shared_from_this<PlatformRoute>::enable_shared_from_this(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->route_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->route_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->route_id_, *(_QWORD *)&route_id, (_BYTE)this + 16);
  }
  this->route_id_ = route_id;
  v2 = (((_BYTE)this + 20) & 7u) + 3;
  v3 = *(_BYTE *)(((unsigned __int64)&this->point_array_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->point_array_id_ >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->point_array_id_, v2, v3);
  this->point_array_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type_, v2, (_BYTE)this + 24);
  }
  this->type_ = OneWay;
  v4 = ((_BYTE)this + 28) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->has_reach_trigger_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->has_reach_trigger_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->has_reach_trigger_, v4, v5);
  this->has_reach_trigger_ = 0;
  v6 = ((_BYTE)this + 29) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->is_simulate_temp_route_by_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_simulate_temp_route_by_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_simulate_temp_route_by_time_, v6, v7);
  this->is_simulate_temp_route_by_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->rot_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rot_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rot_type_, v6, (_BYTE)this + 32);
  }
  this->rot_type_ = ROT_NONE;
  v8 = (((_BYTE)this + 36) & 7u) + 3;
  v9 = *(_BYTE *)(((unsigned __int64)&this->rot_angle_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rot_angle_type_ >> 3) + 0x7FFF8000);
  if ( v9 )
    __asan_report_store4(&this->rot_angle_type_, v8, v9);
  this->rot_angle_type_ = ROT_ANGLE_Y;
  if ( *(_BYTE *)(((unsigned __int64)&this->record_mode_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->record_mode_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->record_mode_, v8, (_BYTE)this + 40);
  }
  this->record_mode_ = None_13;
  v10 = (((_BYTE)this + 44) & 7u) + 3;
  v11 = *(_BYTE *)(((unsigned __int64)&this->speed_level_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->speed_level_ >> 3) + 0x7FFF8000);
  if ( v11 )
    __asan_report_store4(&this->speed_level_, v10, v11);
  this->speed_level_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->arrive_range_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->arrive_range_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->arrive_range_, v10, (_BYTE)this + 48);
  }
  this->arrive_range_ = 0.0;
  v12 = (((_BYTE)this + 52) & 7u) + 3;
  v13 = *(_BYTE *)(((unsigned __int64)&this->total_time_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_time_ >> 3) + 0x7FFF8000);
  if ( v13 )
    __asan_report_store4(&this->total_time_, v12, v13);
  this->total_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->rot_total_angle_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rot_total_angle_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rot_total_angle_, v12, (_BYTE)this + 56);
  }
  this->rot_total_angle_ = 0.0;
  std::vector<std::shared_ptr<RoutePoint>>::vector(&this->point_vec_);
};

// Line 197: range 00000000131D9E86-00000000131D9ED3
bool __cdecl PlatformRoute::getIsSimulateTempRouteByTime(const PlatformRoute *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_simulate_temp_route_by_time_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 29) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_simulate_temp_route_by_time_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_simulate_temp_route_by_time_);
  }
  return this->is_simulate_temp_route_by_time_;
};

// Line 197: range 00000000131D9E3E-00000000131D9E85
uint32_t __cdecl PlatformRoute::getRouteId(const PlatformRoute *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->route_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->route_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->route_id_);
  }
  return this->route_id_;
};

// Line 198: range 000000001461725E-00000000146172AB
bool __cdecl PlatformRoute::getHasReachTrigger(const PlatformRoute *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->has_reach_trigger_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&this->has_reach_trigger_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->has_reach_trigger_);
  }
  return this->has_reach_trigger_;
};

// Line 198: range 000000001461720E-000000001461725D
uint32_t __cdecl PlatformRoute::getPointArrayId(const PlatformRoute *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->point_array_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->point_array_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->point_array_id_);
  }
  return this->point_array_id_;
};

// Line 202: range 00000000131D9F1C-00000000131D9F6B
data::RotAngleType __cdecl PlatformRoute::getRotAngleType(const PlatformRoute *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->rot_angle_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rot_angle_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->rot_angle_type_);
  }
  return this->rot_angle_type_;
};

// Line 202: range 00000000131D9ED4-00000000131D9F1B
data::RotType __cdecl PlatformRoute::getRotType(const PlatformRoute *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->rot_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rot_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->rot_type_);
  }
  return this->rot_type_;
};

// Line 346: range 00000000131D9D04-00000000131D9D12
void __cdecl RoutePoint::toClient(const RoutePoint *const this, proto::RoutePoint *proto_route_point)
{
  ;
};
