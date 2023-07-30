// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigLevelRoute.h

// Line 48: range 000000000F93BA7E-000000000F93BAAC
void __cdecl data::ConfigRoute::~ConfigRoute(data::ConfigRoute *const this)
{
  std::vector<data::ConfigWaypoint>::~vector(&this->points);
  std::string::~string(&this->name);
};

// Line 109: range 0000000011DAE006-0000000011DAE233
void __cdecl data::ConfigRoute::ConfigRoute(data::ConfigRoute *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->local_id = 0;
  std::string::basic_string(&this->name);
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = OneWay;
  v2 = ((_BYTE)this + 44) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_forward >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_forward >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_forward, v2, v3);
  this->is_forward = 1;
  std::vector<data::ConfigWaypoint>::vector(&this->points);
  if ( *(_BYTE *)(((unsigned __int64)&this->rot_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rot_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rot_type, v2);
  }
  this->rot_type = ROT_NONE;
  v4 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->rot_angle_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rot_angle_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rot_angle_type, v4);
  }
  this->rot_angle_type = ROT_ANGLE_X;
  if ( *(_BYTE *)(((unsigned __int64)&this->arrive_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->arrive_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->arrive_range, v4);
  }
  this->arrive_range = 2.0;
  v5 = ((_BYTE)this + 84) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_simulate_temp_route_by_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_simulate_temp_route_by_time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_simulate_temp_route_by_time, v5, v6);
  this->is_simulate_temp_route_by_time = 0;
  v7 = ((_BYTE)this + 85) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_json_loaded, v7, v8);
  this->is_json_loaded = 0;
};

// Line 109: range 000000000F9A7C6E-000000000F9A80AF
void __cdecl data::ConfigRoute::ConfigRoute(data::ConfigRoute *const this, const data::ConfigRoute *a2)
{
  uint32_t local_id; // ecx
  char v3; // al
  std::string *p_name; // rsi
  data::RouteType type; // ecx
  char v6; // al
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool is_forward; // cl
  char v10; // dl
  __int64 v11; // rdx
  data::ConfigWaypointList *p_points; // rsi
  data::RotType rot_type; // ecx
  char v14; // al
  __int64 v15; // rsi
  data::RotAngleType rot_angle_type; // ecx
  char v17; // dl
  float arrive_range; // xmm0_4
  __int64 v19; // rsi
  __int64 v20; // rdx
  bool is_simulate_temp_route_by_time; // cl
  char v22; // dl
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdx
  bool is_json_loaded; // cl
  char v27; // dl
  __int64 v28; // rdx
  const data::ConfigRoute *v29; // [rsp+0h] [rbp-20h]

  v29 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  local_id = a2->local_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->local_id = local_id;
  p_name = &v29->name;
  std::string::basic_string(&this->name, &v29->name);
  if ( *(_BYTE *)(((unsigned __int64)&v29->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v29->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v29->type);
  }
  type = v29->type;
  v6 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_name) = v6 != 0;
    __asan_report_store4(&this->type, p_name);
  }
  this->type = type;
  v7 = ((_BYTE)v29 + 44) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&v29->is_forward >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&v29->is_forward >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&v29->is_forward, v7, v8);
  is_forward = v29->is_forward;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_forward >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->is_forward, v7, v11);
  this->is_forward = is_forward;
  p_points = &v29->points;
  std::vector<data::ConfigWaypoint>::vector(&this->points, &v29->points);
  if ( *(_BYTE *)(((unsigned __int64)&v29->rot_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v29->rot_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v29->rot_type);
  }
  rot_type = v29->rot_type;
  v14 = *(_BYTE *)(((unsigned __int64)&this->rot_type >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(p_points) = v14 != 0;
    __asan_report_store4(&this->rot_type, p_points);
  }
  this->rot_type = rot_type;
  v15 = (((_BYTE)v29 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v29->rot_angle_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v29 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v29->rot_angle_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v29->rot_angle_type);
  }
  rot_angle_type = v29->rot_angle_type;
  v17 = *(_BYTE *)(((unsigned __int64)&this->rot_angle_type >> 3) + 0x7FFF8000);
  LOBYTE(v15) = v17 != 0;
  if ( v17 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v17 )
    __asan_report_store4(&this->rot_angle_type, v15);
  this->rot_angle_type = rot_angle_type;
  if ( *(_BYTE *)(((unsigned __int64)&v29->arrive_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v29->arrive_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v29->arrive_range);
  }
  arrive_range = v29->arrive_range;
  if ( *(_BYTE *)(((unsigned __int64)&this->arrive_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->arrive_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->arrive_range, v15);
  }
  this->arrive_range = arrive_range;
  v19 = ((_BYTE)v29 + 84) & 7;
  v20 = (*(_BYTE *)(((unsigned __int64)&v29->is_simulate_temp_route_by_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v19 >= *(_BYTE *)(((unsigned __int64)&v29->is_simulate_temp_route_by_time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v20 )
    __asan_report_load1(&v29->is_simulate_temp_route_by_time, v19, v20);
  is_simulate_temp_route_by_time = v29->is_simulate_temp_route_by_time;
  v22 = *(_BYTE *)(((unsigned __int64)&this->is_simulate_temp_route_by_time >> 3) + 0x7FFF8000);
  LOBYTE(v19) = v22 != 0;
  v23 = (v22 != 0) & (unsigned __int8)((((unsigned __int8)this + 84) & 7) >= v22);
  if ( (_BYTE)v23 )
    __asan_report_store1(&this->is_simulate_temp_route_by_time, v19, v23);
  this->is_simulate_temp_route_by_time = is_simulate_temp_route_by_time;
  v24 = ((_BYTE)v29 + 85) & 7;
  v25 = (*(_BYTE *)(((unsigned __int64)&v29->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v24 >= *(_BYTE *)(((unsigned __int64)&v29->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v25 )
    __asan_report_load1(&v29->is_json_loaded, v24, v25);
  is_json_loaded = v29->is_json_loaded;
  v27 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v24) = v27 != 0;
  v28 = (v27 != 0) & (unsigned __int8)((((unsigned __int8)this + 85) & 7) >= v27);
  if ( (_BYTE)v28 )
    __asan_report_store1(&this->is_json_loaded, v24, v28);
  this->is_json_loaded = is_json_loaded;
};

// Line 109: range 0000000012354852-0000000012354C6C
void __cdecl data::ConfigRoute::ConfigRoute(data::ConfigRoute *const this, data::ConfigRoute *a2)
{
  uint32_t local_id; // ecx
  char v3; // al
  std::string *p_name; // rsi
  data::RouteType type; // ecx
  char v6; // al
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool is_forward; // cl
  char v10; // dl
  __int64 v11; // rdx
  data::ConfigWaypointList *p_points; // rsi
  data::RotType rot_type; // ecx
  char v14; // al
  __int64 v15; // rsi
  data::RotAngleType rot_angle_type; // ecx
  char v17; // dl
  float arrive_range; // xmm0_4
  __int64 v19; // rsi
  __int64 v20; // rdx
  bool is_simulate_temp_route_by_time; // cl
  char v22; // dl
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdx
  bool is_json_loaded; // cl
  char v27; // dl
  __int64 v28; // rdx
  data::ConfigRoute *v29; // [rsp+0h] [rbp-10h]

  v29 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  local_id = a2->local_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->local_id = local_id;
  p_name = &v29->name;
  std::string::basic_string(&this->name, &v29->name);
  if ( *(_BYTE *)(((unsigned __int64)&v29->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v29->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v29->type);
  }
  type = v29->type;
  v6 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_name) = v6 != 0;
    __asan_report_store4(&this->type, p_name);
  }
  this->type = type;
  v7 = ((_BYTE)v29 + 44) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&v29->is_forward >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&v29->is_forward >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&v29->is_forward, v7, v8);
  is_forward = v29->is_forward;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_forward >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->is_forward, v7, v11);
  this->is_forward = is_forward;
  p_points = &v29->points;
  std::vector<data::ConfigWaypoint>::vector(&this->points, &v29->points);
  if ( *(_BYTE *)(((unsigned __int64)&v29->rot_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v29->rot_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v29->rot_type);
  }
  rot_type = v29->rot_type;
  v14 = *(_BYTE *)(((unsigned __int64)&this->rot_type >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(p_points) = v14 != 0;
    __asan_report_store4(&this->rot_type, p_points);
  }
  this->rot_type = rot_type;
  v15 = (((_BYTE)v29 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v29->rot_angle_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v29 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v29->rot_angle_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v29->rot_angle_type);
  }
  rot_angle_type = v29->rot_angle_type;
  v17 = *(_BYTE *)(((unsigned __int64)&this->rot_angle_type >> 3) + 0x7FFF8000);
  LOBYTE(v15) = v17 != 0;
  if ( v17 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v17 )
    __asan_report_store4(&this->rot_angle_type, v15);
  this->rot_angle_type = rot_angle_type;
  if ( *(_BYTE *)(((unsigned __int64)&v29->arrive_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v29->arrive_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v29->arrive_range);
  }
  arrive_range = v29->arrive_range;
  if ( *(_BYTE *)(((unsigned __int64)&this->arrive_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->arrive_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->arrive_range, v15);
  }
  this->arrive_range = arrive_range;
  v19 = ((_BYTE)v29 + 84) & 7;
  v20 = (*(_BYTE *)(((unsigned __int64)&v29->is_simulate_temp_route_by_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v19 >= *(_BYTE *)(((unsigned __int64)&v29->is_simulate_temp_route_by_time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v20 )
    __asan_report_load1(&v29->is_simulate_temp_route_by_time, v19, v20);
  is_simulate_temp_route_by_time = v29->is_simulate_temp_route_by_time;
  v22 = *(_BYTE *)(((unsigned __int64)&this->is_simulate_temp_route_by_time >> 3) + 0x7FFF8000);
  LOBYTE(v19) = v22 != 0;
  v23 = (v22 != 0) & (unsigned __int8)((((unsigned __int8)this + 84) & 7) >= v22);
  if ( (_BYTE)v23 )
    __asan_report_store1(&this->is_simulate_temp_route_by_time, v19, v23);
  this->is_simulate_temp_route_by_time = is_simulate_temp_route_by_time;
  v24 = ((_BYTE)v29 + 85) & 7;
  v25 = (*(_BYTE *)(((unsigned __int64)&v29->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v24 >= *(_BYTE *)(((unsigned __int64)&v29->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v25 )
    __asan_report_load1(&v29->is_json_loaded, v24, v25);
  is_json_loaded = v29->is_json_loaded;
  v27 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v24) = v27 != 0;
  v28 = (v27 != 0) & (unsigned __int8)((((unsigned __int8)this + 85) & 7) >= v27);
  if ( (_BYTE)v28 )
    __asan_report_store1(&this->is_json_loaded, v24, v28);
  this->is_json_loaded = is_json_loaded;
};

// Line 145: range 000000000F778F1E-000000000F778FB0
void __cdecl data::ConfigLevelRoute::ConfigLevelRoute(data::ConfigLevelRoute *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->scene_id = 0;
  std::vector<data::ConfigRoute>::vector(&this->routes);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 145: range 000000000F778FB2-000000000F778FD0
void __cdecl data::ConfigLevelRoute::~ConfigLevelRoute(data::ConfigLevelRoute *const this)
{
  std::vector<data::ConfigRoute>::~vector(&this->routes);
};

// Line 227: range 0000000012166C0C-0000000012166D2E
void __cdecl data::ConfigPointArray::ConfigPointArray(data::ConfigPointArray *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->point_array_id = 0;
  std::vector<data::ConfigPoint>::vector(&this->platform_point_list);
  std::unordered_map<unsigned int,data::ConfigPoint>::unordered_map(&this->config_point_map);
  if ( *(char *)(((unsigned __int64)&this->is_simulate_temp_route_by_time >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_simulate_temp_route_by_time, v1, &this->is_simulate_temp_route_by_time);
  this->is_simulate_temp_route_by_time = 0;
  v2 = ((_BYTE)this + 89) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_move_to_route_point_on_init >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_move_to_route_point_on_init >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_move_to_route_point_on_init, v2, v3);
  this->is_move_to_route_point_on_init = 0;
  v4 = ((_BYTE)this + 90) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_json_loaded, v4, v5);
  this->is_json_loaded = 0;
};

// Line 227: range 000000000F9A871E-000000000F9A8947
void __cdecl data::ConfigPointArray::ConfigPointArray(data::ConfigPointArray *const this, data::ConfigPointArray *a2)
{
  uint32_t point_array_id; // ecx
  char v3; // al
  data::ConfigPointMap *p_config_point_map; // rsi
  bool is_simulate_temp_route_by_time; // cl
  char v6; // al
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool is_move_to_route_point_on_init; // cl
  char v10; // dl
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx
  bool is_json_loaded; // cl
  char v15; // dl
  __int64 v16; // rdx
  data::ConfigPointArray *v17; // [rsp+0h] [rbp-10h]

  v17 = a2;
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
    __asan_report_store4(this, a2);
  }
  this->point_array_id = point_array_id;
  std::vector<data::ConfigPoint>::vector(&this->platform_point_list, &v17->platform_point_list);
  p_config_point_map = &v17->config_point_map;
  std::unordered_map<unsigned int,data::ConfigPoint>::unordered_map(&this->config_point_map, &v17->config_point_map);
  if ( *(char *)(((unsigned __int64)&v17->is_simulate_temp_route_by_time >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v17->is_simulate_temp_route_by_time, p_config_point_map, &v17->is_simulate_temp_route_by_time);
  is_simulate_temp_route_by_time = v17->is_simulate_temp_route_by_time;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_simulate_temp_route_by_time >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_config_point_map) = v6 != 0;
    __asan_report_store1(
      &this->is_simulate_temp_route_by_time,
      p_config_point_map,
      &this->is_simulate_temp_route_by_time);
  }
  this->is_simulate_temp_route_by_time = is_simulate_temp_route_by_time;
  v7 = ((_BYTE)v17 + 89) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&v17->is_move_to_route_point_on_init >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&v17->is_move_to_route_point_on_init >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&v17->is_move_to_route_point_on_init, v7, v8);
  is_move_to_route_point_on_init = v17->is_move_to_route_point_on_init;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_move_to_route_point_on_init >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this + 89) & 7) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->is_move_to_route_point_on_init, v7, v11);
  this->is_move_to_route_point_on_init = is_move_to_route_point_on_init;
  v12 = ((_BYTE)v17 + 90) & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)&v17->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&v17->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_load1(&v17->is_json_loaded, v12, v13);
  is_json_loaded = v17->is_json_loaded;
  v15 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v12) = v15 != 0;
  v16 = (v15 != 0) & (unsigned __int8)((((unsigned __int8)this + 90) & 7) >= v15);
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->is_json_loaded, v12, v16);
  this->is_json_loaded = is_json_loaded;
};

// Line 227: range 000000000F93C150-000000000F93C17E
void __cdecl data::ConfigPointArray::~ConfigPointArray(data::ConfigPointArray *const this)
{
  std::unordered_map<unsigned int,data::ConfigPoint>::~unordered_map(&this->config_point_map);
  std::vector<data::ConfigPoint>::~vector(&this->platform_point_list);
};
