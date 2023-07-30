// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.h

// Line 23: range 0000000013C1DA78-0000000013C1DB42
void __cdecl data::AudioWeatherProperties::AudioWeatherProperties(data::AudioWeatherProperties *const this)
{
  __int64 v1; // rsi

  data::ConfigWwiseString::ConfigWwiseString(&this->state_value);
  data::ConfigWwiseString::ConfigWwiseString(&this->music_state_value);
  data::ConfigWwiseString::ConfigWwiseString(&this->switch_value);
  if ( *(_BYTE *)(((unsigned __int64)&this->rtpc_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rtpc_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rtpc_value, v1);
  }
  this->rtpc_value = 0.0;
  std::string::basic_string(&this->surface_override);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 23: range 00000000141F9BCA-00000000141F9D85
void __cdecl data::AudioWeatherProperties::AudioWeatherProperties(
        data::AudioWeatherProperties *const this,
        const data::AudioWeatherProperties *a2)
{
  data::ConfigWwiseString *p_switch_value; // rsi
  float rtpc_value; // xmm0_4
  std::string *p_surface_override; // rsi
  bool is_json_loaded; // cl
  char v6; // al

  data::ConfigWwiseString::ConfigWwiseString(&this->state_value, &a2->state_value);
  data::ConfigWwiseString::ConfigWwiseString(&this->music_state_value, &a2->music_state_value);
  p_switch_value = &a2->switch_value;
  data::ConfigWwiseString::ConfigWwiseString(&this->switch_value, p_switch_value);
  if ( *(_BYTE *)(((unsigned __int64)&a2->rtpc_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->rtpc_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->rtpc_value);
  }
  rtpc_value = a2->rtpc_value;
  if ( *(_BYTE *)(((unsigned __int64)&this->rtpc_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rtpc_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rtpc_value, p_switch_value);
  }
  this->rtpc_value = rtpc_value;
  p_surface_override = &a2->surface_override;
  std::string::basic_string(&this->surface_override, &a2->surface_override);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_surface_override, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_surface_override) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_surface_override, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 23: range 0000000013C1DB44-0000000013C1DB8E
void __cdecl data::AudioWeatherProperties::~AudioWeatherProperties(data::AudioWeatherProperties *const this)
{
  std::string::~string(&this->surface_override);
  data::ConfigWwiseString::~ConfigWwiseString(&this->switch_value);
  data::ConfigWwiseString::~ConfigWwiseString(&this->music_state_value);
  data::ConfigWwiseString::~ConfigWwiseString(&this->state_value);
};

// Line 116: range 0000000013C1DC6C-0000000013C1DE04
void __cdecl data::AudioWeatherVoTrigger::AudioWeatherVoTrigger(data::AudioWeatherVoTrigger *const this)
{
  __int64 v1; // rsi

  std::vector<data::ConfigWeatherType>::vector(&this->weather_type_list);
  if ( *(char *)(((unsigned __int64)&this->weather_type_is_include >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->weather_type_is_include, v1, &this->weather_type_is_include);
  this->weather_type_is_include = 0;
  std::vector<std::string>::vector(&this->weather_list);
  if ( *(char *)(((unsigned __int64)&this->weather_is_include >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->weather_is_include, v1, &this->weather_is_include);
  this->weather_is_include = 0;
  std::vector<data::ConfigWeatherType>::vector(&this->previous_weather_type_list);
  if ( *(char *)(((unsigned __int64)&this->previous_weather_type_is_include >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->previous_weather_type_is_include, v1, &this->previous_weather_type_is_include);
  this->previous_weather_type_is_include = 0;
  std::vector<std::string>::vector(&this->previous_weather_list);
  if ( *(char *)(((unsigned __int64)&this->previous_weather_is_include >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->previous_weather_is_include, v1, &this->previous_weather_is_include);
  this->previous_weather_is_include = 0;
  data::VoiceTriggerIdentity::VoiceTriggerIdentity(&this->vo_trigger);
  std::vector<data::AudioWeatherVoTrigger_TimeRule>::vector(&this->time_limit);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 116: range 0000000013E8C34C-0000000013E8C734
void __cdecl data::AudioWeatherVoTrigger::AudioWeatherVoTrigger(
        data::AudioWeatherVoTrigger *const this,
        data::AudioWeatherVoTrigger *a2)
{
  bool weather_type_is_include; // cl
  char v3; // al
  data::StringList *p_weather_list; // rsi
  bool weather_is_include; // cl
  char v6; // al
  data::ConfigWeatherTypeList *p_previous_weather_type_list; // rsi
  bool previous_weather_type_is_include; // cl
  char v9; // al
  data::StringList *p_previous_weather_list; // rsi
  bool previous_weather_is_include; // cl
  char v12; // al
  data::AudioWeatherVoTrigger_TimeRuleList *p_time_limit; // rsi
  bool is_json_loaded; // cl
  char v15; // al
  data::AudioWeatherVoTrigger *v16; // [rsp+0h] [rbp-10h]

  v16 = a2;
  std::vector<data::ConfigWeatherType>::vector(&this->weather_type_list, &a2->weather_type_list);
  if ( *(char *)(((unsigned __int64)&a2->weather_type_is_include >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->weather_type_is_include, a2, &a2->weather_type_is_include);
  weather_type_is_include = a2->weather_type_is_include;
  v3 = *(_BYTE *)(((unsigned __int64)&this->weather_type_is_include >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(&this->weather_type_is_include, a2, &this->weather_type_is_include);
  }
  this->weather_type_is_include = weather_type_is_include;
  p_weather_list = &v16->weather_list;
  std::vector<std::string>::vector(&this->weather_list, &v16->weather_list);
  if ( *(char *)(((unsigned __int64)&v16->weather_is_include >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v16->weather_is_include, p_weather_list, &v16->weather_is_include);
  weather_is_include = v16->weather_is_include;
  v6 = *(_BYTE *)(((unsigned __int64)&this->weather_is_include >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_weather_list) = v6 != 0;
    __asan_report_store1(&this->weather_is_include, p_weather_list, &this->weather_is_include);
  }
  this->weather_is_include = weather_is_include;
  p_previous_weather_type_list = &v16->previous_weather_type_list;
  std::vector<data::ConfigWeatherType>::vector(&this->previous_weather_type_list, &v16->previous_weather_type_list);
  if ( *(char *)(((unsigned __int64)&v16->previous_weather_type_is_include >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(
      &v16->previous_weather_type_is_include,
      p_previous_weather_type_list,
      &v16->previous_weather_type_is_include);
  previous_weather_type_is_include = v16->previous_weather_type_is_include;
  v9 = *(_BYTE *)(((unsigned __int64)&this->previous_weather_type_is_include >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(p_previous_weather_type_list) = v9 != 0;
    __asan_report_store1(
      &this->previous_weather_type_is_include,
      p_previous_weather_type_list,
      &this->previous_weather_type_is_include);
  }
  this->previous_weather_type_is_include = previous_weather_type_is_include;
  p_previous_weather_list = &v16->previous_weather_list;
  std::vector<std::string>::vector(&this->previous_weather_list, &v16->previous_weather_list);
  if ( *(char *)(((unsigned __int64)&v16->previous_weather_is_include >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v16->previous_weather_is_include, p_previous_weather_list, &v16->previous_weather_is_include);
  previous_weather_is_include = v16->previous_weather_is_include;
  v12 = *(_BYTE *)(((unsigned __int64)&this->previous_weather_is_include >> 3) + 0x7FFF8000);
  if ( v12 < 0 )
  {
    LOBYTE(p_previous_weather_list) = v12 != 0;
    __asan_report_store1(
      &this->previous_weather_is_include,
      p_previous_weather_list,
      &this->previous_weather_is_include);
  }
  this->previous_weather_is_include = previous_weather_is_include;
  if ( (((unsigned __int8)this + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->vo_trigger >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->vo_trigger >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->vo_trigger.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 121) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->vo_trigger.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->vo_trigger, 12LL);
  }
  if ( (((unsigned __int8)v16 + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&v16->vo_trigger >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v16->vo_trigger >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&v16->vo_trigger.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v16 - 121) & 7) >= *(_BYTE *)(((unsigned __int64)(&v16->vo_trigger.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load_n(&v16->vo_trigger, 12LL);
  }
  this->vo_trigger = v16->vo_trigger;
  p_time_limit = &v16->time_limit;
  std::vector<data::AudioWeatherVoTrigger_TimeRule>::vector(&this->time_limit, &v16->time_limit);
  if ( *(char *)(((unsigned __int64)&v16->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v16->is_json_loaded, p_time_limit, &v16->is_json_loaded);
  is_json_loaded = v16->is_json_loaded;
  v15 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v15 < 0 )
  {
    LOBYTE(p_time_limit) = v15 != 0;
    __asan_report_store1(&this->is_json_loaded, p_time_limit, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 116: range 0000000013C1DE06-0000000013C1DE62
void __cdecl data::AudioWeatherVoTrigger::~AudioWeatherVoTrigger(data::AudioWeatherVoTrigger *const this)
{
  std::vector<data::AudioWeatherVoTrigger_TimeRule>::~vector(&this->time_limit);
  std::vector<std::string>::~vector(&this->previous_weather_list);
  std::vector<data::ConfigWeatherType>::~vector(&this->previous_weather_type_list);
  std::vector<std::string>::~vector(&this->weather_list);
  std::vector<data::ConfigWeatherType>::~vector(&this->weather_type_list);
};
