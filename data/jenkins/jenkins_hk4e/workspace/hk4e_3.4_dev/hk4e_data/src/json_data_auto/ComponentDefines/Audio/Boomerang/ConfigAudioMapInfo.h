// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioMapInfo.h

// Line 20: range 000000001213B046-000000001213B11F
void __cdecl data::ConfigAudioMapArea::ConfigAudioMapArea(data::ConfigAudioMapArea *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->id = 0;
  data::ConfigWwiseString::ConfigWwiseString(&this->state_value);
  data::ConfigWwiseString::ConfigWwiseString(&this->sub_state_group);
  data::ConfigWwiseString::ConfigWwiseString(&this->default_sub_state_value);
  std::vector<data::ConfigWwiseString>::vector(&this->events_on_enter);
  std::vector<data::ConfigWwiseString>::vector(&this->events_on_exit);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 20: range 00000000122FA214-00000000122FA39D
void __cdecl data::ConfigAudioMapArea::ConfigAudioMapArea(
        data::ConfigAudioMapArea *const this,
        data::ConfigAudioMapArea *a2)
{
  uint32_t id; // ecx
  char v3; // al
  data::ConfigWwiseStringArray *p_events_on_exit; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  data::ConfigAudioMapArea *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  id = a2->id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->id = id;
  data::ConfigWwiseString::ConfigWwiseString(&this->state_value, &v7->state_value);
  data::ConfigWwiseString::ConfigWwiseString(&this->sub_state_group, &v7->sub_state_group);
  data::ConfigWwiseString::ConfigWwiseString(&this->default_sub_state_value, &v7->default_sub_state_value);
  std::vector<data::ConfigWwiseString>::vector(&this->events_on_enter, &v7->events_on_enter);
  p_events_on_exit = &v7->events_on_exit;
  std::vector<data::ConfigWwiseString>::vector(&this->events_on_exit, &v7->events_on_exit);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_events_on_exit, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_events_on_exit) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_events_on_exit, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 20: range 000000001213B120-000000001213B180
void __cdecl data::ConfigAudioMapArea::~ConfigAudioMapArea(data::ConfigAudioMapArea *const this)
{
  std::vector<data::ConfigWwiseString>::~vector(&this->events_on_exit);
  std::vector<data::ConfigWwiseString>::~vector(&this->events_on_enter);
  data::ConfigWwiseString::~ConfigWwiseString(&this->default_sub_state_value);
  data::ConfigWwiseString::~ConfigWwiseString(&this->sub_state_group);
  data::ConfigWwiseString::~ConfigWwiseString(&this->state_value);
};
