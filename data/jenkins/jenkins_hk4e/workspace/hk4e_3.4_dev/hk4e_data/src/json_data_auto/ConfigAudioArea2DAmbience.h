// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigAudioArea2DAmbience.h

// Line 20: range 0000000013C0EF90-0000000013C0F2F0
void __cdecl data::ConfigAudioArea2DAmbience::ConfigAudioArea2DAmbience(data::ConfigAudioArea2DAmbience *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx

  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->short_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->short_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->short_id, v1);
  }
  this->short_id = 0;
  std::vector<data::Vector>::vector(&this->area_points);
  if ( *(_BYTE *)(((unsigned __int64)&this->yzero_anchor >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->yzero_anchor >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->yzero_anchor, v1);
  }
  this->yzero_anchor = 0.0;
  data::ConfigWwiseString::ConfigWwiseString(&this->area_group_name);
  if ( *(char *)(((unsigned __int64)&this->enable_height_check >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->enable_height_check, v1, &this->enable_height_check);
  this->enable_height_check = 0;
  v2 = (((_BYTE)this + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->top >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->top >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->top, v2);
  }
  this->top = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->bottom >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bottom >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->bottom, v2);
  }
  this->bottom = 0.0;
  v3 = ((_BYTE)this + 124) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_ambience >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_ambience >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_ambience, v3, v4);
  this->is_ambience = 0;
  std::vector<data::ConfigWwiseString>::vector(&this->enter_events);
  std::vector<data::ConfigWwiseString>::vector(&this->leave_events);
  if ( *(char *)(((unsigned __int64)&this->is_reverb >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_reverb, v3, &this->is_reverb);
  this->is_reverb = 0;
  data::ConfigWwiseString::ConfigWwiseString(&this->aux_bus_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->priority, v3);
  }
  this->priority = 0;
  v5 = ((_BYTE)this - 28) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->exclude_other >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->exclude_other >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->exclude_other, v5, v6);
  this->exclude_other = 0;
  v7 = ((_BYTE)this - 27) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->enable_change_states >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->enable_change_states >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->enable_change_states, v7, v8);
  this->enable_change_states = 0;
  std::vector<data::AudioStateOp>::vector(&this->enter_states);
  std::vector<data::AudioStateOp>::vector(&this->leave_states);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v7, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 20: range 0000000013E57BE6-0000000013E58252
void __cdecl data::ConfigAudioArea2DAmbience::ConfigAudioArea2DAmbience(
        data::ConfigAudioArea2DAmbience *const this,
        data::ConfigAudioArea2DAmbience *a2)
{
  uint32_t short_id; // ecx
  char v3; // al
  float yzero_anchor; // xmm0_4
  data::ConfigWwiseString *p_area_group_name; // rsi
  bool enable_height_check; // cl
  char v7; // al
  float top; // xmm0_4
  __int64 v9; // rsi
  float bottom; // xmm0_4
  __int64 v11; // rsi
  __int64 v12; // rdx
  bool is_ambience; // cl
  char v14; // dl
  __int64 v15; // rdx
  data::ConfigWwiseStringArray *p_leave_events; // rsi
  bool is_reverb; // cl
  char v18; // al
  data::ConfigWwiseString *p_aux_bus_name; // rsi
  int32_t priority; // ecx
  char v21; // al
  __int64 v22; // rsi
  __int64 v23; // rdx
  bool exclude_other; // cl
  char v25; // dl
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rdx
  bool enable_change_states; // cl
  char v30; // dl
  __int64 v31; // rdx
  data::AudioStateOpArray *p_leave_states; // rsi
  bool is_json_loaded; // cl
  char v34; // al
  data::ConfigAudioArea2DAmbience *v35; // [rsp+0h] [rbp-10h]

  v35 = a2;
  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&v35->short_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v35->short_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->short_id);
  }
  short_id = a2->short_id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->short_id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->short_id, a2);
  }
  this->short_id = short_id;
  std::vector<data::Vector>::vector(&this->area_points, &v35->area_points);
  if ( *(_BYTE *)(((unsigned __int64)&v35->yzero_anchor >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v35->yzero_anchor >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v35->yzero_anchor);
  }
  yzero_anchor = v35->yzero_anchor;
  if ( *(_BYTE *)(((unsigned __int64)&this->yzero_anchor >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->yzero_anchor >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->yzero_anchor, &v35->area_points);
  }
  this->yzero_anchor = yzero_anchor;
  p_area_group_name = &v35->area_group_name;
  data::ConfigWwiseString::ConfigWwiseString(&this->area_group_name, &v35->area_group_name);
  if ( *(char *)(((unsigned __int64)&v35->enable_height_check >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v35->enable_height_check, p_area_group_name, &v35->enable_height_check);
  enable_height_check = v35->enable_height_check;
  v7 = *(_BYTE *)(((unsigned __int64)&this->enable_height_check >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(p_area_group_name) = v7 != 0;
    __asan_report_store1(&this->enable_height_check, p_area_group_name, &this->enable_height_check);
  }
  this->enable_height_check = enable_height_check;
  if ( *(_BYTE *)(((unsigned __int64)&v35->top >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v35 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v35->top >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v35->top);
  }
  top = v35->top;
  v9 = (((_BYTE)this + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->top >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->top >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->top, v9);
  }
  this->top = top;
  if ( *(_BYTE *)(((unsigned __int64)&v35->bottom >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v35->bottom >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v35->bottom);
  }
  bottom = v35->bottom;
  if ( *(_BYTE *)(((unsigned __int64)&this->bottom >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bottom >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->bottom, v9);
  }
  this->bottom = bottom;
  v11 = ((_BYTE)v35 + 124) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&v35->is_ambience >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&v35->is_ambience >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_load1(&v35->is_ambience, v11, v12);
  is_ambience = v35->is_ambience;
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_ambience >> 3) + 0x7FFF8000);
  LOBYTE(v11) = v14 != 0;
  v15 = (v14 != 0) & (unsigned __int8)((((unsigned __int8)this + 124) & 7) >= v14);
  if ( (_BYTE)v15 )
    __asan_report_store1(&this->is_ambience, v11, v15);
  this->is_ambience = is_ambience;
  std::vector<data::ConfigWwiseString>::vector(&this->enter_events, &v35->enter_events);
  p_leave_events = &v35->leave_events;
  std::vector<data::ConfigWwiseString>::vector(&this->leave_events, &v35->leave_events);
  if ( *(char *)(((unsigned __int64)&v35->is_reverb >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v35->is_reverb, p_leave_events, &v35->is_reverb);
  is_reverb = v35->is_reverb;
  v18 = *(_BYTE *)(((unsigned __int64)&this->is_reverb >> 3) + 0x7FFF8000);
  if ( v18 < 0 )
  {
    LOBYTE(p_leave_events) = v18 != 0;
    __asan_report_store1(&this->is_reverb, p_leave_events, &this->is_reverb);
  }
  this->is_reverb = is_reverb;
  p_aux_bus_name = &v35->aux_bus_name;
  data::ConfigWwiseString::ConfigWwiseString(&this->aux_bus_name, &v35->aux_bus_name);
  if ( *(_BYTE *)(((unsigned __int64)&v35->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v35->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v35->priority);
  }
  priority = v35->priority;
  v21 = *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000);
  if ( v21 != 0 && v21 <= 3 )
  {
    LOBYTE(p_aux_bus_name) = v21 != 0;
    __asan_report_store4(&this->priority, p_aux_bus_name);
  }
  this->priority = priority;
  v22 = ((_BYTE)v35 - 28) & 7;
  v23 = (*(_BYTE *)(((unsigned __int64)&v35->exclude_other >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v22 >= *(_BYTE *)(((unsigned __int64)&v35->exclude_other >> 3) + 0x7FFF8000));
  if ( (_BYTE)v23 )
    __asan_report_load1(&v35->exclude_other, v22, v23);
  exclude_other = v35->exclude_other;
  v25 = *(_BYTE *)(((unsigned __int64)&this->exclude_other >> 3) + 0x7FFF8000);
  LOBYTE(v22) = v25 != 0;
  v26 = (v25 != 0) & (unsigned __int8)((((unsigned __int8)this - 28) & 7) >= v25);
  if ( (_BYTE)v26 )
    __asan_report_store1(&this->exclude_other, v22, v26);
  this->exclude_other = exclude_other;
  v27 = ((_BYTE)v35 - 27) & 7;
  v28 = (*(_BYTE *)(((unsigned __int64)&v35->enable_change_states >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v27 >= *(_BYTE *)(((unsigned __int64)&v35->enable_change_states >> 3) + 0x7FFF8000));
  if ( (_BYTE)v28 )
    __asan_report_load1(&v35->enable_change_states, v27, v28);
  enable_change_states = v35->enable_change_states;
  v30 = *(_BYTE *)(((unsigned __int64)&this->enable_change_states >> 3) + 0x7FFF8000);
  LOBYTE(v27) = v30 != 0;
  v31 = (v30 != 0) & (unsigned __int8)((((unsigned __int8)this - 27) & 7) >= v30);
  if ( (_BYTE)v31 )
    __asan_report_store1(&this->enable_change_states, v27, v31);
  this->enable_change_states = enable_change_states;
  std::vector<data::AudioStateOp>::vector(&this->enter_states, &v35->enter_states);
  p_leave_states = &v35->leave_states;
  std::vector<data::AudioStateOp>::vector(&this->leave_states, &v35->leave_states);
  if ( *(char *)(((unsigned __int64)&v35->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v35->is_json_loaded, p_leave_states, &v35->is_json_loaded);
  is_json_loaded = v35->is_json_loaded;
  v34 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v34 < 0 )
  {
    LOBYTE(p_leave_states) = v34 != 0;
    __asan_report_store1(&this->is_json_loaded, p_leave_states, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 20: range 0000000013C0F2F2-0000000013C0F384
void __cdecl data::ConfigAudioArea2DAmbience::~ConfigAudioArea2DAmbience(data::ConfigAudioArea2DAmbience *const this)
{
  std::vector<data::AudioStateOp>::~vector(&this->leave_states);
  std::vector<data::AudioStateOp>::~vector(&this->enter_states);
  data::ConfigWwiseString::~ConfigWwiseString(&this->aux_bus_name);
  std::vector<data::ConfigWwiseString>::~vector(&this->leave_events);
  std::vector<data::ConfigWwiseString>::~vector(&this->enter_events);
  data::ConfigWwiseString::~ConfigWwiseString(&this->area_group_name);
  std::vector<data::Vector>::~vector(&this->area_points);
  std::string::~string(this);
};
