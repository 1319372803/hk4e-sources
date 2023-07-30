// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Audio/ConfigAudioStageEvents.h

// Line 20: range 0000000012164ECA-0000000012164F5E
void __cdecl data::ConfigAudioStageProgressEvent::ConfigAudioStageProgressEvent(
        data::ConfigAudioStageProgressEvent *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->progress = 0.0;
  std::vector<std::string>::vector(&this->events);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 20: range 000000001234F968-000000001234FA79
void __cdecl data::ConfigAudioStageProgressEvent::ConfigAudioStageProgressEvent(
        data::ConfigAudioStageProgressEvent *const this,
        data::ConfigAudioStageProgressEvent *a2)
{
  float progress; // xmm0_4
  data::StringArray *p_events; // rsi
  bool is_json_loaded; // cl
  char v5; // al

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  progress = a2->progress;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, a2);
  }
  this->progress = progress;
  p_events = &a2->events;
  std::vector<std::string>::vector(&this->events, &a2->events);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_events, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_events) = v5 != 0;
    __asan_report_store1(&this->is_json_loaded, p_events, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 20: range 0000000012164F60-0000000012164F7E
void __cdecl data::ConfigAudioStageProgressEvent::~ConfigAudioStageProgressEvent(
        data::ConfigAudioStageProgressEvent *const this)
{
  std::vector<std::string>::~vector(&this->events);
};

// Line 49: range 0000000012164F80-0000000012164FE5
void __cdecl data::ConfigAudioStateGroup::ConfigAudioStateGroup(data::ConfigAudioStateGroup *const this)
{
  __int64 v1; // rsi

  data::ConfigWwiseString::ConfigWwiseString(&this->state_group_key);
  data::ConfigWwiseString::ConfigWwiseString(&this->state_value);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 49: range 0000000012350204-00000000123502BA
void __cdecl data::ConfigAudioStateGroup::ConfigAudioStateGroup(
        data::ConfigAudioStateGroup *const this,
        data::ConfigAudioStateGroup *a2)
{
  data::ConfigWwiseString *p_state_value; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  data::ConfigWwiseString::ConfigWwiseString(&this->state_group_key, &a2->state_group_key);
  p_state_value = &a2->state_value;
  data::ConfigWwiseString::ConfigWwiseString(&this->state_value, p_state_value);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_state_value, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_state_value) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_state_value, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 49: range 0000000012164FE6-0000000012165010
void __cdecl data::ConfigAudioStateGroup::~ConfigAudioStateGroup(data::ConfigAudioStateGroup *const this)
{
  data::ConfigWwiseString::~ConfigWwiseString(&this->state_value);
  data::ConfigWwiseString::~ConfigWwiseString(&this->state_group_key);
};
