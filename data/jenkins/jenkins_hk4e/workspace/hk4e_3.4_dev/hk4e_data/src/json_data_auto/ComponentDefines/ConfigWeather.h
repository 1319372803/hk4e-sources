// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/ConfigWeather.h

// Line 57: range 000000001215C1E0-000000001215C430
void __cdecl data::ConfigElemBall::ConfigElemBall(data::ConfigElemBall *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->type = None_29;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->element_type, v2);
  }
  this->element_type = None_0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_max_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_max_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_max_num, v2);
  }
  this->cur_max_num = 5;
  std::vector<float>::vector(&this->interval_times);
  std::vector<unsigned int>::vector(&this->drop_items);
  std::vector<unsigned int>::vector(&this->drop_counts);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_num, v2);
  }
  this->max_num = 10;
  v3 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->poisson_disk >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->poisson_disk >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->poisson_disk, v3);
  }
  this->poisson_disk = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->min_radius, v3);
  }
  this->min_radius = 5.0;
  v4 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_radius, v4);
  }
  this->max_radius = 30.0;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v4, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 57: range 000000001233E30E-000000001233E749
void __cdecl data::ConfigElemBall::ConfigElemBall(data::ConfigElemBall *const this, data::ConfigElemBall *a2)
{
  data::ElemBallTriggerType type; // ecx
  char v3; // al
  __int64 v4; // rsi
  data::ElementType element_type; // ecx
  char v6; // dl
  int32_t cur_max_num; // ecx
  char v8; // al
  data::UInt32List *p_drop_counts; // rsi
  int32_t max_num; // ecx
  char v11; // al
  float poisson_disk; // xmm0_4
  __int64 v13; // rsi
  float min_radius; // xmm0_4
  float max_radius; // xmm0_4
  __int64 v16; // rsi
  bool is_json_loaded; // cl
  char v18; // al
  data::ConfigElemBall *v19; // [rsp+0h] [rbp-10h]

  v19 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  type = a2->type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->type = type;
  v4 = (((_BYTE)v19 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->element_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->element_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->element_type);
  }
  element_type = v19->element_type;
  v6 = *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->element_type, v4);
  }
  this->element_type = element_type;
  if ( *(_BYTE *)(((unsigned __int64)&v19->cur_max_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->cur_max_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->cur_max_num);
  }
  cur_max_num = v19->cur_max_num;
  v8 = *(_BYTE *)(((unsigned __int64)&this->cur_max_num >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store4(&this->cur_max_num, v4);
  }
  this->cur_max_num = cur_max_num;
  std::vector<float>::vector(&this->interval_times, &v19->interval_times);
  std::vector<unsigned int>::vector(&this->drop_items, &v19->drop_items);
  p_drop_counts = &v19->drop_counts;
  std::vector<unsigned int>::vector(&this->drop_counts, &v19->drop_counts);
  if ( *(_BYTE *)(((unsigned __int64)&v19->max_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->max_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->max_num);
  }
  max_num = v19->max_num;
  v11 = *(_BYTE *)(((unsigned __int64)&this->max_num >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(p_drop_counts) = v11 != 0;
    __asan_report_store4(&this->max_num, p_drop_counts);
  }
  this->max_num = max_num;
  if ( *(_BYTE *)(((unsigned __int64)&v19->poisson_disk >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->poisson_disk >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->poisson_disk);
  }
  poisson_disk = v19->poisson_disk;
  v13 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->poisson_disk >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->poisson_disk >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->poisson_disk, v13);
  }
  this->poisson_disk = poisson_disk;
  if ( *(_BYTE *)(((unsigned __int64)&v19->min_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->min_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->min_radius);
  }
  min_radius = v19->min_radius;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->min_radius, v13);
  }
  this->min_radius = min_radius;
  if ( *(_BYTE *)(((unsigned __int64)&v19->max_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->max_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->max_radius);
  }
  max_radius = v19->max_radius;
  v16 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_radius, v16);
  }
  this->max_radius = max_radius;
  if ( *(char *)(((unsigned __int64)&v19->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v19->is_json_loaded, v16, &v19->is_json_loaded);
  is_json_loaded = v19->is_json_loaded;
  v18 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v18 < 0 )
  {
    LOBYTE(v16) = v18 != 0;
    __asan_report_store1(&this->is_json_loaded, v16, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 57: range 000000000EC12996-000000000EC129D4
void __cdecl data::ConfigElemBall::~ConfigElemBall(data::ConfigElemBall *const this)
{
  std::vector<unsigned int>::~vector(&this->drop_counts);
  std::vector<unsigned int>::~vector(&this->drop_items);
  std::vector<float>::~vector(&this->interval_times);
};

// Line 94: range 000000000ED91B5C-000000000ED91C94
void __cdecl data::ConfigWeather::ConfigWeather(data::ConfigWeather *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  std::vector<data::ConfigElemBall>::vector(&this->drop_elem_balls);
  std::string::basic_string(&this->shape_name);
  std::vector<float>::vector(&this->position);
  if ( *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->priority, v1);
  }
  this->priority = 0;
  std::string::basic_string(&this->default_enviro);
  std::vector<std::string>::vector(&this->weather_list);
  std::vector<float>::vector(&this->weather_weight_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->refresh_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->refresh_time, v1);
  }
  this->refresh_time = 5.0;
  v2 = ((_BYTE)this - 84) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_json_loaded, v2, v3);
  this->is_json_loaded = 0;
};

// Line 94: range 000000000E825656-000000000E8258FF
void __cdecl data::ConfigWeather::ConfigWeather(data::ConfigWeather *const this, const data::ConfigWeather *a2)
{
  data::FloatList *p_position; // rsi
  int32_t priority; // ecx
  char v4; // al
  float refresh_time; // xmm0_4
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool is_json_loaded; // cl
  char v9; // dl
  __int64 v10; // rdx

  std::vector<data::ConfigElemBall>::vector(&this->drop_elem_balls, &a2->drop_elem_balls);
  std::string::basic_string(&this->shape_name, &a2->shape_name);
  p_position = &a2->position;
  std::vector<float>::vector(&this->position, p_position);
  if ( *(_BYTE *)(((unsigned __int64)&a2->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->priority);
  }
  priority = a2->priority;
  v4 = *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(p_position) = v4 != 0;
    __asan_report_store4(&this->priority, p_position);
  }
  this->priority = priority;
  std::string::basic_string(&this->default_enviro, &a2->default_enviro);
  std::vector<std::string>::vector(&this->weather_list, &a2->weather_list);
  std::vector<float>::vector(&this->weather_weight_list, &a2->weather_weight_list);
  if ( *(_BYTE *)(((unsigned __int64)&a2->refresh_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->refresh_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->refresh_time);
  }
  refresh_time = a2->refresh_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->refresh_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->refresh_time, &a2->weather_weight_list);
  }
  this->refresh_time = refresh_time;
  v6 = ((_BYTE)a2 - 84) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_load1(&a2->is_json_loaded, v6, v7);
  is_json_loaded = a2->is_json_loaded;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((((unsigned __int8)this - 84) & 7) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_json_loaded, v6, v10);
  this->is_json_loaded = is_json_loaded;
};

// Line 94: range 000000000E825900-000000000E82596C
void __cdecl data::ConfigWeather::~ConfigWeather(data::ConfigWeather *const this)
{
  std::vector<float>::~vector(&this->weather_weight_list);
  std::vector<std::string>::~vector(&this->weather_list);
  std::string::~string(&this->default_enviro);
  std::vector<float>::~vector(&this->position);
  std::string::~string(&this->shape_name);
  std::vector<data::ConfigElemBall>::~vector(&this->drop_elem_balls);
};

// Line 124: range 000000000ED91C96-000000000ED91D34
void __cdecl data::ConfigWall::ConfigWall(data::ConfigWall *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->fade_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fade_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fade_duration, v1);
  }
  this->fade_duration = 0.5;
  v2 = ((_BYTE)this + 36) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_json_loaded, v2, v3);
  this->is_json_loaded = 0;
};

// Line 124: range 000000000E825CD4-000000000E825DF1
void __cdecl data::ConfigWall::ConfigWall(data::ConfigWall *const this, const data::ConfigWall *a2)
{
  float fade_duration; // xmm0_4
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_json_loaded; // cl
  char v6; // dl
  __int64 v7; // rdx

  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&a2->fade_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->fade_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->fade_duration);
  }
  fade_duration = a2->fade_duration;
  if ( *(_BYTE *)(((unsigned __int64)&this->fade_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fade_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fade_duration, a2);
  }
  this->fade_duration = fade_duration;
  v3 = ((_BYTE)a2 + 36) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->is_json_loaded, v3, v4);
  is_json_loaded = a2->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 36) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_json_loaded, v3, v7);
  this->is_json_loaded = is_json_loaded;
};

// Line 124: range 000000000E825DF2-000000000E825E0C
void __cdecl data::ConfigWall::~ConfigWall(data::ConfigWall *const this)
{
  std::string::~string(this);
};

// Line 820: range 000000000EC124B0-000000000EC12927
void __cdecl data::ConfigElemBall::ConfigElemBall(data::ConfigElemBall *const this, const data::ConfigElemBall *a2)
{
  data::ElemBallTriggerType type; // ecx
  char v3; // al
  __int64 v4; // rsi
  data::ElementType element_type; // ecx
  char v6; // dl
  int32_t cur_max_num; // ecx
  char v8; // al
  data::UInt32List *p_drop_counts; // rsi
  int32_t max_num; // ecx
  char v11; // al
  float poisson_disk; // xmm0_4
  __int64 v13; // rsi
  float min_radius; // xmm0_4
  float max_radius; // xmm0_4
  __int64 v16; // rsi
  bool is_json_loaded; // cl
  char v18; // al
  const data::ConfigElemBall *v19; // [rsp+0h] [rbp-20h]

  v19 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  type = a2->type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->type = type;
  v4 = (((_BYTE)v19 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->element_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->element_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->element_type);
  }
  element_type = v19->element_type;
  v6 = *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->element_type, v4);
  }
  this->element_type = element_type;
  if ( *(_BYTE *)(((unsigned __int64)&v19->cur_max_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->cur_max_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->cur_max_num);
  }
  cur_max_num = v19->cur_max_num;
  v8 = *(_BYTE *)(((unsigned __int64)&this->cur_max_num >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store4(&this->cur_max_num, v4);
  }
  this->cur_max_num = cur_max_num;
  std::vector<float>::vector(&this->interval_times, &v19->interval_times);
  std::vector<unsigned int>::vector(&this->drop_items, &v19->drop_items);
  p_drop_counts = &v19->drop_counts;
  std::vector<unsigned int>::vector(&this->drop_counts, &v19->drop_counts);
  if ( *(_BYTE *)(((unsigned __int64)&v19->max_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->max_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->max_num);
  }
  max_num = v19->max_num;
  v11 = *(_BYTE *)(((unsigned __int64)&this->max_num >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(p_drop_counts) = v11 != 0;
    __asan_report_store4(&this->max_num, p_drop_counts);
  }
  this->max_num = max_num;
  if ( *(_BYTE *)(((unsigned __int64)&v19->poisson_disk >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->poisson_disk >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->poisson_disk);
  }
  poisson_disk = v19->poisson_disk;
  v13 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->poisson_disk >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->poisson_disk >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->poisson_disk, v13);
  }
  this->poisson_disk = poisson_disk;
  if ( *(_BYTE *)(((unsigned __int64)&v19->min_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->min_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->min_radius);
  }
  min_radius = v19->min_radius;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->min_radius, v13);
  }
  this->min_radius = min_radius;
  if ( *(_BYTE *)(((unsigned __int64)&v19->max_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->max_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->max_radius);
  }
  max_radius = v19->max_radius;
  v16 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_radius, v16);
  }
  this->max_radius = max_radius;
  if ( *(char *)(((unsigned __int64)&v19->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v19->is_json_loaded, v16, &v19->is_json_loaded);
  is_json_loaded = v19->is_json_loaded;
  v18 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v18 < 0 )
  {
    LOBYTE(v16) = v18 != 0;
    __asan_report_store1(&this->is_json_loaded, v16, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};
