// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/ConfigEquipController.h

// Line 20: range 000000001214E9E4-000000001214EAC4
void __cdecl data::BowDrawTime::BowDrawTime(data::BowDrawTime *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->bow_draw_start_norm_time = 0.0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->bow_draw_end_norm_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bow_draw_end_norm_time >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->bow_draw_end_norm_time, v2);
  }
  this->bow_draw_end_norm_time = 1.0;
  std::string::basic_string(&this->bow_string_override_point);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 20: range 0000000012748AC8-0000000012748C61
void __cdecl data::BowDrawTime::BowDrawTime(data::BowDrawTime *const this, const data::BowDrawTime *a2)
{
  float bow_draw_start_norm_time; // xmm0_4
  float bow_draw_end_norm_time; // xmm0_4
  std::string *p_bow_string_override_point; // rsi
  bool is_json_loaded; // cl
  char v6; // al

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  bow_draw_start_norm_time = a2->bow_draw_start_norm_time;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, a2);
  }
  this->bow_draw_start_norm_time = bow_draw_start_norm_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->bow_draw_end_norm_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->bow_draw_end_norm_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->bow_draw_end_norm_time);
  }
  bow_draw_end_norm_time = a2->bow_draw_end_norm_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->bow_draw_end_norm_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bow_draw_end_norm_time >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->bow_draw_end_norm_time, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->bow_draw_end_norm_time = bow_draw_end_norm_time;
  p_bow_string_override_point = &a2->bow_string_override_point;
  std::string::basic_string(&this->bow_string_override_point, &a2->bow_string_override_point);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_bow_string_override_point, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_bow_string_override_point) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_bow_string_override_point, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 20: range 000000001232041A-00000000123205B3
void __cdecl data::BowDrawTime::BowDrawTime(data::BowDrawTime *const this, data::BowDrawTime *a2)
{
  float bow_draw_start_norm_time; // xmm0_4
  float bow_draw_end_norm_time; // xmm0_4
  std::string *p_bow_string_override_point; // rsi
  bool is_json_loaded; // cl
  char v6; // al

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  bow_draw_start_norm_time = a2->bow_draw_start_norm_time;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, a2);
  }
  this->bow_draw_start_norm_time = bow_draw_start_norm_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->bow_draw_end_norm_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->bow_draw_end_norm_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->bow_draw_end_norm_time);
  }
  bow_draw_end_norm_time = a2->bow_draw_end_norm_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->bow_draw_end_norm_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bow_draw_end_norm_time >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->bow_draw_end_norm_time, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->bow_draw_end_norm_time = bow_draw_end_norm_time;
  p_bow_string_override_point = &a2->bow_string_override_point;
  std::string::basic_string(&this->bow_string_override_point, &a2->bow_string_override_point);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_bow_string_override_point, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_bow_string_override_point) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_bow_string_override_point, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 20: range 000000001214EAC6-000000001214EAE4
void __cdecl data::BowDrawTime::~BowDrawTime(data::BowDrawTime *const this)
{
  std::string::~string(&this->bow_string_override_point);
};

// Line 50: range 000000001214EB3A-000000001214EC44
void __cdecl data::TriggerToStates::TriggerToStates(data::TriggerToStates *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->play_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->play_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->play_time, v1);
  }
  this->play_time = 0.0;
  std::vector<std::string>::vector(&this->states);
  std::vector<data::BowDrawTime>::vector(&this->bow_draw_times);
  std::string::basic_string(&this->float_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->float_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->float_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->float_value, v1);
  }
  this->float_value = 0.0;
  v2 = ((_BYTE)this + 124) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_json_loaded, v2, v3);
  this->is_json_loaded = 0;
};

// Line 50: range 000000001261D806-000000001261DA39
void __cdecl data::TriggerToStates::TriggerToStates(data::TriggerToStates *const this, const data::TriggerToStates *a2)
{
  float play_time; // xmm0_4
  float float_value; // xmm0_4
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool is_json_loaded; // cl
  char v7; // dl
  __int64 v8; // rdx

  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&a2->play_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->play_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->play_time);
  }
  play_time = a2->play_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->play_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->play_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->play_time, a2);
  }
  this->play_time = play_time;
  std::vector<std::string>::vector(&this->states, &a2->states);
  std::vector<data::BowDrawTime>::vector(&this->bow_draw_times, &a2->bow_draw_times);
  std::string::basic_string(&this->float_id, &a2->float_id);
  if ( *(_BYTE *)(((unsigned __int64)&a2->float_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->float_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->float_value);
  }
  float_value = a2->float_value;
  if ( *(_BYTE *)(((unsigned __int64)&this->float_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->float_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->float_value, &a2->float_id);
  }
  this->float_value = float_value;
  v4 = ((_BYTE)a2 + 124) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&a2->is_json_loaded, v4, v5);
  is_json_loaded = a2->is_json_loaded;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 124) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_json_loaded, v4, v8);
  this->is_json_loaded = is_json_loaded;
};

// Line 50: range 0000000012320DA6-0000000012320F8C
void __cdecl data::TriggerToStates::TriggerToStates(data::TriggerToStates *const this, data::TriggerToStates *a2)
{
  float play_time; // xmm0_4
  float float_value; // xmm0_4
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool is_json_loaded; // cl
  char v7; // dl
  __int64 v8; // rdx

  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&a2->play_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->play_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->play_time);
  }
  play_time = a2->play_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->play_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->play_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->play_time, a2);
  }
  this->play_time = play_time;
  std::vector<std::string>::vector(&this->states, &a2->states);
  std::vector<data::BowDrawTime>::vector(&this->bow_draw_times, &a2->bow_draw_times);
  std::string::basic_string(&this->float_id, &a2->float_id);
  if ( *(_BYTE *)(((unsigned __int64)&a2->float_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->float_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->float_value);
  }
  float_value = a2->float_value;
  if ( *(_BYTE *)(((unsigned __int64)&this->float_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->float_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->float_value, &a2->float_id);
  }
  this->float_value = float_value;
  v4 = ((_BYTE)a2 + 124) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&a2->is_json_loaded, v4, v5);
  is_json_loaded = a2->is_json_loaded;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 124) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_json_loaded, v4, v8);
  this->is_json_loaded = is_json_loaded;
};

// Line 50: range 000000001214EC46-000000001214EC90
void __cdecl data::TriggerToStates::~TriggerToStates(data::TriggerToStates *const this)
{
  std::string::~string(&this->float_id);
  std::vector<data::BowDrawTime>::~vector(&this->bow_draw_times);
  std::vector<std::string>::~vector(&this->states);
  std::string::~string(this);
};

// Line 83: range 000000001214EC92-000000001214EE40
void __cdecl data::WeaponAwayFromHandState::WeaponAwayFromHandState(data::WeaponAwayFromHandState *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx

  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->start_norm_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_norm_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_norm_time, v1);
  }
  this->start_norm_time = 0.0;
  v2 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_norm_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_norm_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->end_norm_time, v2);
  }
  this->end_norm_time = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->delay_appear_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->delay_appear_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->delay_appear_time, v2);
  }
  this->delay_appear_time = 0.0;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->dissolve_show_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dissolve_show_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dissolve_show_time, v3);
  }
  this->dissolve_show_time = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dissolve_hide_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dissolve_hide_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dissolve_hide_time, v3);
  }
  this->dissolve_hide_time = 0.0;
  v4 = ((_BYTE)this + 52) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_json_loaded, v4, v5);
  this->is_json_loaded = 0;
};

// Line 83: range 000000001261DD80-000000001261E09D
void __cdecl data::WeaponAwayFromHandState::WeaponAwayFromHandState(
        data::WeaponAwayFromHandState *const this,
        const data::WeaponAwayFromHandState *a2)
{
  float start_norm_time; // xmm0_4
  float end_norm_time; // xmm0_4
  __int64 v4; // rsi
  float delay_appear_time; // xmm0_4
  float dissolve_show_time; // xmm0_4
  __int64 v7; // rsi
  float dissolve_hide_time; // xmm0_4
  __int64 v9; // rsi
  __int64 v10; // rdx
  bool is_json_loaded; // cl
  char v12; // dl
  __int64 v13; // rdx

  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&a2->start_norm_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->start_norm_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->start_norm_time);
  }
  start_norm_time = a2->start_norm_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_norm_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_norm_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_norm_time, a2);
  }
  this->start_norm_time = start_norm_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->end_norm_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->end_norm_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->end_norm_time);
  }
  end_norm_time = a2->end_norm_time;
  v4 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_norm_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_norm_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->end_norm_time, v4);
  }
  this->end_norm_time = end_norm_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->delay_appear_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->delay_appear_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->delay_appear_time);
  }
  delay_appear_time = a2->delay_appear_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->delay_appear_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->delay_appear_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->delay_appear_time, v4);
  }
  this->delay_appear_time = delay_appear_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->dissolve_show_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->dissolve_show_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->dissolve_show_time);
  }
  dissolve_show_time = a2->dissolve_show_time;
  v7 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->dissolve_show_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dissolve_show_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dissolve_show_time, v7);
  }
  this->dissolve_show_time = dissolve_show_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->dissolve_hide_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->dissolve_hide_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->dissolve_hide_time);
  }
  dissolve_hide_time = a2->dissolve_hide_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->dissolve_hide_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dissolve_hide_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dissolve_hide_time, v7);
  }
  this->dissolve_hide_time = dissolve_hide_time;
  v9 = ((_BYTE)a2 + 52) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_load1(&a2->is_json_loaded, v9, v10);
  is_json_loaded = a2->is_json_loaded;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((((unsigned __int8)this + 52) & 7) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->is_json_loaded, v9, v13);
  this->is_json_loaded = is_json_loaded;
};

// Line 83: range 0000000012321728-0000000012321A45
void __cdecl data::WeaponAwayFromHandState::WeaponAwayFromHandState(
        data::WeaponAwayFromHandState *const this,
        data::WeaponAwayFromHandState *a2)
{
  float start_norm_time; // xmm0_4
  float end_norm_time; // xmm0_4
  __int64 v4; // rsi
  float delay_appear_time; // xmm0_4
  float dissolve_show_time; // xmm0_4
  __int64 v7; // rsi
  float dissolve_hide_time; // xmm0_4
  __int64 v9; // rsi
  __int64 v10; // rdx
  bool is_json_loaded; // cl
  char v12; // dl
  __int64 v13; // rdx

  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&a2->start_norm_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->start_norm_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->start_norm_time);
  }
  start_norm_time = a2->start_norm_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_norm_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_norm_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_norm_time, a2);
  }
  this->start_norm_time = start_norm_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->end_norm_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->end_norm_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->end_norm_time);
  }
  end_norm_time = a2->end_norm_time;
  v4 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_norm_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_norm_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->end_norm_time, v4);
  }
  this->end_norm_time = end_norm_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->delay_appear_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->delay_appear_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->delay_appear_time);
  }
  delay_appear_time = a2->delay_appear_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->delay_appear_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->delay_appear_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->delay_appear_time, v4);
  }
  this->delay_appear_time = delay_appear_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->dissolve_show_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->dissolve_show_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->dissolve_show_time);
  }
  dissolve_show_time = a2->dissolve_show_time;
  v7 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->dissolve_show_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dissolve_show_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dissolve_show_time, v7);
  }
  this->dissolve_show_time = dissolve_show_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->dissolve_hide_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->dissolve_hide_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->dissolve_hide_time);
  }
  dissolve_hide_time = a2->dissolve_hide_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->dissolve_hide_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dissolve_hide_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dissolve_hide_time, v7);
  }
  this->dissolve_hide_time = dissolve_hide_time;
  v9 = ((_BYTE)a2 + 52) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_load1(&a2->is_json_loaded, v9, v10);
  is_json_loaded = a2->is_json_loaded;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((((unsigned __int8)this + 52) & 7) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->is_json_loaded, v9, v13);
  this->is_json_loaded = is_json_loaded;
};

// Line 83: range 000000001214EE42-000000001214EE5C
void __cdecl data::WeaponAwayFromHandState::~WeaponAwayFromHandState(data::WeaponAwayFromHandState *const this)
{
  std::string::~string(this);
};

// Line 116: range 000000000ED75F9C-000000000ED76110
void __cdecl data::ConfigBaseEquipController::ConfigBaseEquipController(data::ConfigBaseEquipController *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  std::enable_shared_from_this<data::ConfigBaseEquipController>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigBaseEquipController>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBaseEquipController + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseEquipController = v2;
  std::string::basic_string(&this->sheath_point);
  if ( *(_BYTE *)(((unsigned __int64)&this->dissolve_sheath_fade_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dissolve_sheath_fade_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dissolve_sheath_fade_delay, v1);
  }
  this->dissolve_sheath_fade_delay = 0.0;
  v3 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->dissolve_sheath_fade_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dissolve_sheath_fade_time >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dissolve_sheath_fade_time, v3);
  }
  this->dissolve_sheath_fade_time = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dissolve_take_fade_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dissolve_take_fade_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dissolve_take_fade_time, v3);
  }
  this->dissolve_take_fade_time = 0.0;
  std::vector<data::TriggerToStates>::vector(&this->trigger_to_states);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v3, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 116: range 00000000126ED24A-00000000126ED50A
void __cdecl data::ConfigBaseEquipController::ConfigBaseEquipController(
        data::ConfigBaseEquipController *const this,
        const data::ConfigBaseEquipController *a2)
{
  std::enable_shared_from_this<data::ConfigBaseEquipController> *v2; // rsi
  int (**v3)(...); // rdx
  float dissolve_sheath_fade_delay; // xmm0_4
  float dissolve_sheath_fade_time; // xmm0_4
  __int64 v6; // rsi
  float dissolve_take_fade_time; // xmm0_4
  data::TriggerToStatesArray *p_trigger_to_states; // rsi
  bool is_json_loaded; // cl
  char v10; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigBaseEquipController>;
  std::enable_shared_from_this<data::ConfigBaseEquipController>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigBaseEquipController>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigBaseEquipController + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigBaseEquipController = v3;
  std::string::basic_string(&this->sheath_point, &a2->sheath_point);
  if ( *(_BYTE *)(((unsigned __int64)&a2->dissolve_sheath_fade_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->dissolve_sheath_fade_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->dissolve_sheath_fade_delay);
  }
  dissolve_sheath_fade_delay = a2->dissolve_sheath_fade_delay;
  if ( *(_BYTE *)(((unsigned __int64)&this->dissolve_sheath_fade_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dissolve_sheath_fade_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dissolve_sheath_fade_delay, &a2->sheath_point);
  }
  this->dissolve_sheath_fade_delay = dissolve_sheath_fade_delay;
  if ( *(_BYTE *)(((unsigned __int64)&a2->dissolve_sheath_fade_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->dissolve_sheath_fade_time >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->dissolve_sheath_fade_time);
  }
  dissolve_sheath_fade_time = a2->dissolve_sheath_fade_time;
  v6 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->dissolve_sheath_fade_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dissolve_sheath_fade_time >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dissolve_sheath_fade_time, v6);
  }
  this->dissolve_sheath_fade_time = dissolve_sheath_fade_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->dissolve_take_fade_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->dissolve_take_fade_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->dissolve_take_fade_time);
  }
  dissolve_take_fade_time = a2->dissolve_take_fade_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->dissolve_take_fade_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dissolve_take_fade_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dissolve_take_fade_time, v6);
  }
  this->dissolve_take_fade_time = dissolve_take_fade_time;
  p_trigger_to_states = &a2->trigger_to_states;
  std::vector<data::TriggerToStates>::vector(&this->trigger_to_states, &a2->trigger_to_states);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_trigger_to_states, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v10 < 0 )
  {
    LOBYTE(p_trigger_to_states) = v10 != 0;
    __asan_report_store1(&this->is_json_loaded, p_trigger_to_states, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 128: range 00000000126ED866-00000000126ED890
void __cdecl data::ConfigBaseEquipController::~ConfigBaseEquipController(data::ConfigBaseEquipController *const this)
{
  data::ConfigBaseEquipController::~ConfigBaseEquipController(this);
  operator delete(this, 0x68uLL);
};

// Line 128: range 00000000126ED7F4-00000000126ED865
void __cdecl data::ConfigBaseEquipController::~ConfigBaseEquipController(data::ConfigBaseEquipController *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBaseEquipController + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseEquipController = v2;
  std::vector<data::TriggerToStates>::~vector(&this->trigger_to_states);
  std::string::~string(&this->sheath_point);
  std::enable_shared_from_this<data::ConfigBaseEquipController>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigBaseEquipController>);
};

// Line 133: range 000000001214E4D4-000000001214E4E4
const char *__cdecl data::ConfigBaseEquipController::getTypeName(const data::ConfigBaseEquipController *const this)
{
  return "ConfigBaseEquipController";
};

// Line 134: range 000000001214E4E6-000000001214E682
int32_t __cdecl data::ConfigBaseEquipController::getHashNum(const data::ConfigBaseEquipController *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigBaseEquipController::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBaseEquipController",
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

// Line 153: range 000000000ED7614A-000000000ED761B9
void __cdecl data::ConfigEquipController::ConfigEquipController(data::ConfigEquipController *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseEquipController::ConfigBaseEquipController(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigEquipController + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseEquipController = v2;
  std::unordered_map<std::string,std::string>::unordered_map(&this->attach_points);
  std::vector<data::WeaponAwayFromHandState>::vector(&this->weapon_away_from_hand_states);
};

// Line 153: range 00000000126ED892-00000000126ED95D
void __cdecl data::ConfigEquipController::ConfigEquipController(
        data::ConfigEquipController *const this,
        const data::ConfigEquipController *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBaseEquipController::ConfigBaseEquipController(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigEquipController + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseEquipController = v2;
  std::unordered_map<std::string,std::string>::unordered_map(&this->attach_points, &a2->attach_points);
  std::vector<data::WeaponAwayFromHandState>::vector(
    &this->weapon_away_from_hand_states,
    &a2->weapon_away_from_hand_states);
};

// Line 161: range 000000001274E10E-000000001274E138
void __cdecl data::ConfigEquipController::~ConfigEquipController(data::ConfigEquipController *const this)
{
  data::ConfigEquipController::~ConfigEquipController(this);
  operator delete(this, 0xB8uLL);
};

// Line 161: range 000000001274E09E-000000001274E10D
void __cdecl data::ConfigEquipController::~ConfigEquipController(data::ConfigEquipController *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigEquipController + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseEquipController = v2;
  std::vector<data::WeaponAwayFromHandState>::~vector(&this->weapon_away_from_hand_states);
  std::unordered_map<std::string,std::string>::~unordered_map(&this->attach_points);
  data::ConfigBaseEquipController::~ConfigBaseEquipController(this);
};

// Line 166: range 000000001214E684-000000001214E694
const char *__cdecl data::ConfigEquipController::getTypeName(const data::ConfigEquipController *const this)
{
  return "ConfigEquipController";
};

// Line 167: range 000000001214E696-000000001214E832
int32_t __cdecl data::ConfigEquipController::getHashNum(const data::ConfigEquipController *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigEquipController::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigEquipController",
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

// Line 183: range 00000000126EDC46-00000000126EDC87
void __cdecl data::ConfigEquipControllerFactory::ConfigEquipControllerFactory(
        data::ConfigEquipControllerFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigEquipControllerFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEquipControllerFactory = v2;
};

// Line 191: range 00000000126EDF90-00000000126EE0CC
void __cdecl data::ConfigSubEquipController::ConfigSubEquipController(data::ConfigSubEquipController *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  data::ConfigBaseEquipController::ConfigBaseEquipController(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSubEquipController + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseEquipController = v2;
  std::string::basic_string(&this->name);
  std::string::basic_string(&this->attach_point);
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->config_id, v1);
  }
  this->config_id = 0;
  v3 = ((_BYTE)this - 84) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->mute_ability_state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->mute_ability_state >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->mute_ability_state, v3, v4);
  this->mute_ability_state = 0;
  v5 = ((_BYTE)this - 83) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->mute_element_view >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->mute_element_view >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->mute_element_view, v5, v6);
  this->mute_element_view = 0;
};

// Line 191: range 00000000126EE482-00000000126EE6E0
void __cdecl data::ConfigSubEquipController::ConfigSubEquipController(
        data::ConfigSubEquipController *const this,
        const data::ConfigSubEquipController *a2)
{
  int (**v2)(...); // rdx
  std::string *p_attach_point; // rsi
  uint32_t config_id; // ecx
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool mute_ability_state; // cl
  char v9; // dl
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  bool mute_element_view; // cl
  char v14; // dl
  __int64 v15; // rdx

  data::ConfigBaseEquipController::ConfigBaseEquipController(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSubEquipController + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseEquipController = v2;
  std::string::basic_string(&this->name, &a2->name);
  p_attach_point = &a2->attach_point;
  std::string::basic_string(&this->attach_point, &a2->attach_point);
  if ( *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->config_id);
  }
  config_id = a2->config_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_attach_point) = v5 != 0;
    __asan_report_store4(&this->config_id, p_attach_point);
  }
  this->config_id = config_id;
  v6 = ((_BYTE)a2 - 84) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&a2->mute_ability_state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&a2->mute_ability_state >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_load1(&a2->mute_ability_state, v6, v7);
  mute_ability_state = a2->mute_ability_state;
  v9 = *(_BYTE *)(((unsigned __int64)&this->mute_ability_state >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((((unsigned __int8)this - 84) & 7) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->mute_ability_state, v6, v10);
  this->mute_ability_state = mute_ability_state;
  v11 = ((_BYTE)a2 - 83) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&a2->mute_element_view >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&a2->mute_element_view >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_load1(&a2->mute_element_view, v11, v12);
  mute_element_view = a2->mute_element_view;
  v14 = *(_BYTE *)(((unsigned __int64)&this->mute_element_view >> 3) + 0x7FFF8000);
  LOBYTE(v11) = v14 != 0;
  v15 = (v14 != 0) & (unsigned __int8)((((unsigned __int8)this - 83) & 7) >= v14);
  if ( (_BYTE)v15 )
    __asan_report_store1(&this->mute_element_view, v11, v15);
  this->mute_element_view = mute_element_view;
};

// Line 202: range 000000001274E002-000000001274E071
void __cdecl data::ConfigSubEquipController::~ConfigSubEquipController(data::ConfigSubEquipController *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSubEquipController + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseEquipController = v2;
  std::string::~string(&this->attach_point);
  std::string::~string(&this->name);
  data::ConfigBaseEquipController::~ConfigBaseEquipController(this);
};

// Line 202: range 000000001274E072-000000001274E09C
void __cdecl data::ConfigSubEquipController::~ConfigSubEquipController(data::ConfigSubEquipController *const this)
{
  data::ConfigSubEquipController::~ConfigSubEquipController(this);
  operator delete(this, 0xB0uLL);
};

// Line 207: range 000000001214E834-000000001214E844
const char *__cdecl data::ConfigSubEquipController::getTypeName(const data::ConfigSubEquipController *const this)
{
  return "ConfigSubEquipController";
};

// Line 208: range 000000001214E846-000000001214E9E2
int32_t __cdecl data::ConfigSubEquipController::getHashNum(const data::ConfigSubEquipController *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigSubEquipController::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigSubEquipController",
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

// Line 224: range 00000000126EE9CA-00000000126EEA0B
void __cdecl data::ConfigSubEquipControllerFactory::ConfigSubEquipControllerFactory(
        data::ConfigSubEquipControllerFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSubEquipControllerFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigSubEquipControllerFactory = v2;
};

// Line 239: range 000000000ED8C250-000000000ED8C2FA
void __cdecl data::ConfigBowData::ConfigBowData(data::ConfigBowData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  std::string::basic_string(this);
  data::Vector::Vector(&this->bow_string_loose_point);
  if ( *(_BYTE *)(((unsigned __int64)&this->bow_string_max_len >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bow_string_max_len >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->bow_string_max_len, v1);
  }
  this->bow_string_max_len = 0.0;
  v2 = ((_BYTE)this + 52) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_json_loaded, v2, v3);
  this->is_json_loaded = 0;
};

// Line 239: range 000000000E81B436-000000000E81B5B7
void __cdecl data::ConfigBowData::ConfigBowData(data::ConfigBowData *const this, const data::ConfigBowData *a2)
{
  __int64 v2; // rdx
  float bow_string_max_len; // xmm0_4
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool is_json_loaded; // cl
  char v7; // dl
  __int64 v8; // rdx

  std::string::basic_string(this, a2);
  if ( *(_WORD *)(((unsigned __int64)&this->bow_string_loose_point >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->bow_string_loose_point >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->bow_string_loose_point);
  v2 = *(_QWORD *)&a2->bow_string_loose_point.z;
  *(_QWORD *)&this->bow_string_loose_point.x = *(_QWORD *)&a2->bow_string_loose_point.x;
  *(_QWORD *)&this->bow_string_loose_point.z = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->bow_string_max_len >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->bow_string_max_len >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->bow_string_max_len);
  }
  bow_string_max_len = a2->bow_string_max_len;
  if ( *(_BYTE *)(((unsigned __int64)&this->bow_string_max_len >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bow_string_max_len >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->bow_string_max_len, a2);
  }
  this->bow_string_max_len = bow_string_max_len;
  v4 = ((_BYTE)a2 + 52) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&a2->is_json_loaded, v4, v5);
  is_json_loaded = a2->is_json_loaded;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 52) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_json_loaded, v4, v8);
  this->is_json_loaded = is_json_loaded;
};

// Line 239: range 000000000E81B5B8-000000000E81B5D2
void __cdecl data::ConfigBowData::~ConfigBowData(data::ConfigBowData *const this)
{
  std::string::~string(this);
};

// Line 264: range 000000000ED8C2FC-000000000ED8C414
void __cdecl data::ConfigEquipment::ConfigEquipment(data::ConfigEquipment *const this)
{
  __int64 v1; // rsi

  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sub_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sub_gadget_id, v1);
  }
  this->sub_gadget_id = 0;
  std::string::basic_string(&this->sub_attach_to);
  std::string::basic_string(&this->aux_to_trans);
  if ( *(_BYTE *)(((unsigned __int64)&this->equip_entity_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->equip_entity_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->equip_entity_type, v1);
  }
  this->equip_entity_type = None_6;
  data::ConfigBladeElementFx::ConfigBladeElementFx(&this->blade_fx);
  data::ConfigBowData::ConfigBowData(&this->bow_data);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 264: range 000000000E81B5D4-000000000E81B836
void __cdecl data::ConfigEquipment::ConfigEquipment(data::ConfigEquipment *const this, const data::ConfigEquipment *a2)
{
  uint32_t sub_gadget_id; // ecx
  char v3; // al
  std::string *p_aux_to_trans; // rsi
  data::EquipEntityType equip_entity_type; // ecx
  char v6; // al
  data::ConfigBowData *p_bow_data; // rsi
  bool is_json_loaded; // cl
  char v9; // al
  const data::ConfigEquipment *v10; // [rsp+0h] [rbp-20h]

  v10 = a2;
  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&v10->sub_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->sub_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->sub_gadget_id);
  }
  sub_gadget_id = a2->sub_gadget_id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->sub_gadget_id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->sub_gadget_id, a2);
  }
  this->sub_gadget_id = sub_gadget_id;
  std::string::basic_string(&this->sub_attach_to, &v10->sub_attach_to);
  p_aux_to_trans = &v10->aux_to_trans;
  std::string::basic_string(&this->aux_to_trans, &v10->aux_to_trans);
  if ( *(_BYTE *)(((unsigned __int64)&v10->equip_entity_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->equip_entity_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->equip_entity_type);
  }
  equip_entity_type = v10->equip_entity_type;
  v6 = *(_BYTE *)(((unsigned __int64)&this->equip_entity_type >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_aux_to_trans) = v6 != 0;
    __asan_report_store4(&this->equip_entity_type, p_aux_to_trans);
  }
  this->equip_entity_type = equip_entity_type;
  data::ConfigBladeElementFx::ConfigBladeElementFx(&this->blade_fx, &v10->blade_fx);
  p_bow_data = &v10->bow_data;
  data::ConfigBowData::ConfigBowData(&this->bow_data, &v10->bow_data);
  if ( *(char *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v10->is_json_loaded, p_bow_data, &v10->is_json_loaded);
  is_json_loaded = v10->is_json_loaded;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(p_bow_data) = v9 != 0;
    __asan_report_store1(&this->is_json_loaded, p_bow_data, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 264: range 000000000E81B838-000000000E81B894
void __cdecl data::ConfigEquipment::~ConfigEquipment(data::ConfigEquipment *const this)
{
  data::ConfigBowData::~ConfigBowData(&this->bow_data);
  data::ConfigBladeElementFx::~ConfigBladeElementFx(&this->blade_fx);
  std::string::~string(&this->aux_to_trans);
  std::string::~string(&this->sub_attach_to);
  std::string::~string(this);
};
