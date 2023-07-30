// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/ConfigVehicle.h

// Line 20: range 000000001215B2D4-000000001215B3BF
void __cdecl data::ConfigVehicleSeat::ConfigVehicleSeat(data::ConfigVehicleSeat *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->option_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->option_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->option_id, v1);
  }
  this->option_id = 0;
  data::Vector::Vector(&this->rotate);
  v2 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->off_vehicle_up_dist >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->off_vehicle_up_dist >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->off_vehicle_up_dist, v2);
  }
  this->off_vehicle_up_dist = 0.0;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 20: range 000000001233CBD0-000000001233CE5E
void __cdecl data::ConfigVehicleSeat::ConfigVehicleSeat(
        data::ConfigVehicleSeat *const this,
        data::ConfigVehicleSeat *a2)
{
  uint32_t option_id; // ecx
  char v3; // al
  __int64 v4; // rdx
  float off_vehicle_up_dist; // xmm0_4
  __int64 v6; // rsi
  bool is_json_loaded; // cl
  char v8; // al
  data::ConfigVehicleSeat *v9; // [rsp+0h] [rbp-10h]

  v9 = a2;
  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&v9->option_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v9->option_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->option_id);
  }
  option_id = a2->option_id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->option_id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->option_id, a2);
  }
  this->option_id = option_id;
  if ( (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->rotate >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->rotate >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->rotate.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 51) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->rotate.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->rotate, 16LL);
  }
  if ( (((unsigned __int8)v9 + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&v9->rotate >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v9->rotate >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&v9->rotate.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v9 + 51) & 7) >= *(_BYTE *)(((unsigned __int64)(&v9->rotate.is_json_loaded + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&v9->rotate, 16LL);
  }
  v4 = *(_QWORD *)&v9->rotate.z;
  *(_QWORD *)&this->rotate.x = *(_QWORD *)&v9->rotate.x;
  *(_QWORD *)&this->rotate.z = v4;
  if ( *(_BYTE *)(((unsigned __int64)&v9->off_vehicle_up_dist >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v9 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->off_vehicle_up_dist >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v9->off_vehicle_up_dist);
  }
  off_vehicle_up_dist = v9->off_vehicle_up_dist;
  v6 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->off_vehicle_up_dist >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->off_vehicle_up_dist >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->off_vehicle_up_dist, v6);
  }
  this->off_vehicle_up_dist = off_vehicle_up_dist;
  if ( *(char *)(((unsigned __int64)&v9->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v9->is_json_loaded, v6, &v9->is_json_loaded);
  is_json_loaded = v9->is_json_loaded;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store1(&this->is_json_loaded, v6, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 20: range 000000000EC12EF8-000000000EC12F12
void __cdecl data::ConfigVehicleSeat::~ConfigVehicleSeat(data::ConfigVehicleSeat *const this)
{
  std::string::~string(this);
};

// Line 51: range 000000000ED92506-000000000ED926FF
void __cdecl data::ConfigVehicleStamina::ConfigVehicleStamina(data::ConfigVehicleStamina *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->stamina_upper_limit = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->stamina_recover_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stamina_recover_speed >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stamina_recover_speed, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->stamina_recover_speed = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->stamina_recover_wait_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stamina_recover_wait_time >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stamina_recover_wait_time, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->stamina_recover_wait_time = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->extra_stamina_upper_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->extra_stamina_upper_limit >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->extra_stamina_upper_limit, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->extra_stamina_upper_limit = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->sprint_stamina_cost >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sprint_stamina_cost >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->sprint_stamina_cost, (((_BYTE)this + 16) & 7u) + 3);
  }
  this->sprint_stamina_cost = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dash_stamina_cost >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dash_stamina_cost >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dash_stamina_cost, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->dash_stamina_cost = 0.0;
  v1 = ((_BYTE)this + 24) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 79: range 000000000ED92700-000000000ED928BF
void __cdecl data::ConfigVehicle::ConfigVehicle(data::ConfigVehicle *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->vehicle_type = None_30;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->play_mode >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_mode >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->play_mode, v2);
  }
  this->play_mode = Normal_9;
  std::string::basic_string(&this->camera_mode);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_seat_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_seat_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_seat_count, v2);
  }
  this->max_seat_count = 0;
  std::vector<data::ConfigVehicleSeat>::vector(&this->seats);
  if ( *(_BYTE *)(((unsigned __int64)&this->default_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->default_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->default_level, v2);
  }
  this->default_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->server_buff_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->server_buff_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->server_buff_id, (((_BYTE)this + 76) & 7u) + 3);
  }
  this->server_buff_id = 0;
  data::ConfigVehicleStamina::ConfigVehicleStamina(&this->stamina);
  v3 = ((_BYTE)this + 108) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 79: range 000000000E828A98-000000000E828EDC
void __cdecl data::ConfigVehicle::ConfigVehicle(data::ConfigVehicle *const this, const data::ConfigVehicle *a2)
{
  data::VehicleType vehicle_type; // ecx
  char v3; // al
  __int64 v4; // rsi
  data::PlayModeType play_mode; // ecx
  char v6; // dl
  std::string *p_camera_mode; // rsi
  uint32_t max_seat_count; // ecx
  char v9; // al
  data::ConfigVehicleSeatArray *p_seats; // rsi
  uint32_t default_level; // ecx
  char v12; // al
  __int64 v13; // rsi
  uint32_t server_buff_id; // ecx
  char v15; // dl
  __int64 v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // rdx
  bool is_json_loaded; // cl
  char v20; // dl
  __int64 v21; // rdx
  const data::ConfigVehicle *v22; // [rsp+0h] [rbp-20h]

  v22 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  vehicle_type = a2->vehicle_type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->vehicle_type = vehicle_type;
  v4 = (((_BYTE)v22 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v22->play_mode >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v22 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->play_mode >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v22->play_mode);
  }
  play_mode = v22->play_mode;
  v6 = *(_BYTE *)(((unsigned __int64)&this->play_mode >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->play_mode, v4);
  }
  this->play_mode = play_mode;
  p_camera_mode = &v22->camera_mode;
  std::string::basic_string(&this->camera_mode, &v22->camera_mode);
  if ( *(_BYTE *)(((unsigned __int64)&v22->max_seat_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v22->max_seat_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v22->max_seat_count);
  }
  max_seat_count = v22->max_seat_count;
  v9 = *(_BYTE *)(((unsigned __int64)&this->max_seat_count >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(p_camera_mode) = v9 != 0;
    __asan_report_store4(&this->max_seat_count, p_camera_mode);
  }
  this->max_seat_count = max_seat_count;
  p_seats = &v22->seats;
  std::vector<data::ConfigVehicleSeat>::vector(&this->seats, &v22->seats);
  if ( *(_BYTE *)(((unsigned __int64)&v22->default_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v22->default_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v22->default_level);
  }
  default_level = v22->default_level;
  v12 = *(_BYTE *)(((unsigned __int64)&this->default_level >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_seats) = v12 != 0;
    __asan_report_store4(&this->default_level, p_seats);
  }
  this->default_level = default_level;
  v13 = (((_BYTE)v22 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v22->server_buff_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v22 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->server_buff_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v22->server_buff_id);
  }
  server_buff_id = v22->server_buff_id;
  v15 = *(_BYTE *)(((unsigned __int64)&this->server_buff_id >> 3) + 0x7FFF8000);
  if ( v15 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v15 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->server_buff_id, v13);
  }
  this->server_buff_id = server_buff_id;
  if ( *(char *)(((unsigned __int64)&this->stamina >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->stamina.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 107) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->stamina.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->stamina, 28LL);
  }
  if ( *(char *)(((unsigned __int64)&v22->stamina >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&v22->stamina.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v22 + 107) & 7) >= *(_BYTE *)(((unsigned __int64)(&v22->stamina.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load_n(&v22->stamina, 28LL);
  }
  v16 = *(_QWORD *)&v22->stamina.stamina_recover_wait_time;
  *(_QWORD *)&this->stamina.stamina_upper_limit = *(_QWORD *)&v22->stamina.stamina_upper_limit;
  *(_QWORD *)&this->stamina.stamina_recover_wait_time = v16;
  *(_QWORD *)&this->stamina.sprint_stamina_cost = *(_QWORD *)&v22->stamina.sprint_stamina_cost;
  *(_DWORD *)&this->stamina.is_json_loaded = *(_DWORD *)&v22->stamina.is_json_loaded;
  v17 = ((_BYTE)v22 + 108) & 7;
  v18 = (*(_BYTE *)(((unsigned __int64)&v22->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v17 >= *(_BYTE *)(((unsigned __int64)&v22->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v18 )
    __asan_report_load1(&v22->is_json_loaded, v17, v18);
  is_json_loaded = v22->is_json_loaded;
  v20 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v17) = v20 != 0;
  v21 = (v20 != 0) & (unsigned __int8)((((unsigned __int8)this + 108) & 7) >= v20);
  if ( (_BYTE)v21 )
    __asan_report_store1(&this->is_json_loaded, v17, v21);
  this->is_json_loaded = is_json_loaded;
};

// Line 79: range 000000000E828EDE-000000000E828F0C
void __cdecl data::ConfigVehicle::~ConfigVehicle(data::ConfigVehicle *const this)
{
  std::vector<data::ConfigVehicleSeat>::~vector(&this->seats);
  std::string::~string(&this->camera_mode);
};

// Line 820: range 000000000EC12BFA-000000000EC12E88
void __cdecl data::ConfigVehicleSeat::ConfigVehicleSeat(
        data::ConfigVehicleSeat *const this,
        const data::ConfigVehicleSeat *a2)
{
  uint32_t option_id; // ecx
  char v3; // al
  __int64 v4; // rdx
  float off_vehicle_up_dist; // xmm0_4
  __int64 v6; // rsi
  bool is_json_loaded; // cl
  char v8; // al
  const data::ConfigVehicleSeat *v9; // [rsp+0h] [rbp-10h]

  v9 = a2;
  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&v9->option_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v9->option_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->option_id);
  }
  option_id = a2->option_id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->option_id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->option_id, a2);
  }
  this->option_id = option_id;
  if ( (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->rotate >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->rotate >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->rotate.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 51) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->rotate.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->rotate, 16LL);
  }
  if ( (((unsigned __int8)v9 + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&v9->rotate >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v9->rotate >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&v9->rotate.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v9 + 51) & 7) >= *(_BYTE *)(((unsigned __int64)(&v9->rotate.is_json_loaded + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&v9->rotate, 16LL);
  }
  v4 = *(_QWORD *)&v9->rotate.z;
  *(_QWORD *)&this->rotate.x = *(_QWORD *)&v9->rotate.x;
  *(_QWORD *)&this->rotate.z = v4;
  if ( *(_BYTE *)(((unsigned __int64)&v9->off_vehicle_up_dist >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v9 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->off_vehicle_up_dist >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v9->off_vehicle_up_dist);
  }
  off_vehicle_up_dist = v9->off_vehicle_up_dist;
  v6 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->off_vehicle_up_dist >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->off_vehicle_up_dist >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->off_vehicle_up_dist, v6);
  }
  this->off_vehicle_up_dist = off_vehicle_up_dist;
  if ( *(char *)(((unsigned __int64)&v9->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v9->is_json_loaded, v6, &v9->is_json_loaded);
  is_json_loaded = v9->is_json_loaded;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store1(&this->is_json_loaded, v6, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};
