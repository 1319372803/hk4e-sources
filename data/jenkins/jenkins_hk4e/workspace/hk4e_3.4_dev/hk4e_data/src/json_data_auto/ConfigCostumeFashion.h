// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigCostumeFashion.h

// Line 20: range 0000000013C16E16-0000000013C16E70
void __cdecl data::ConfigCostumeAudio::ConfigCostumeAudio(data::ConfigCostumeAudio *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  data::VoiceTriggerIdentity::VoiceTriggerIdentity(&this->wear_voice);
  v1 = ((_BYTE)this + 12) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 43: range 0000000013C16E72-0000000013C16F0E
void __cdecl data::ConfigCostumeInfo::ConfigCostumeInfo(data::ConfigCostumeInfo *const this)
{
  __int64 v1; // rsi

  std::unordered_map<std::string,std::string>::unordered_map(&this->effects);
  std::unordered_map<std::string,std::string>::unordered_map(&this->gadgets);
  data::ConfigCostumeAudio::ConfigCostumeAudio(&this->audio);
  std::unordered_map<std::string,std::string>::unordered_map(&this->weather_patterns);
  std::unordered_map<std::string,std::string>::unordered_map(&this->event_patterns);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 43: range 00000000141EF0AA-00000000141EF256
void __cdecl data::ConfigCostumeInfo::ConfigCostumeInfo(
        data::ConfigCostumeInfo *const this,
        const data::ConfigCostumeInfo *a2)
{
  __int64 v2; // rdx
  data::StringMap *p_event_patterns; // rsi
  bool is_json_loaded; // cl
  char v5; // al

  std::unordered_map<std::string,std::string>::unordered_map(&this->effects, &a2->effects);
  std::unordered_map<std::string,std::string>::unordered_map(&this->gadgets, &a2->gadgets);
  if ( *(_WORD *)(((unsigned __int64)&this->audio >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->audio >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->audio);
  v2 = *(_QWORD *)&a2->audio.wear_voice.is_json_loaded;
  *(_QWORD *)&this->audio.wear_voice._game_trigger = *(_QWORD *)&a2->audio.wear_voice._game_trigger;
  *(_QWORD *)&this->audio.wear_voice.is_json_loaded = v2;
  std::unordered_map<std::string,std::string>::unordered_map(&this->weather_patterns, &a2->weather_patterns);
  p_event_patterns = &a2->event_patterns;
  std::unordered_map<std::string,std::string>::unordered_map(&this->event_patterns, &a2->event_patterns);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_event_patterns, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_event_patterns) = v5 != 0;
    __asan_report_store1(&this->is_json_loaded, p_event_patterns, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 43: range 0000000013C16F10-0000000013C16F5C
void __cdecl data::ConfigCostumeInfo::~ConfigCostumeInfo(data::ConfigCostumeInfo *const this)
{
  std::unordered_map<std::string,std::string>::~unordered_map(&this->event_patterns);
  std::unordered_map<std::string,std::string>::~unordered_map(&this->weather_patterns);
  std::unordered_map<std::string,std::string>::~unordered_map(&this->gadgets);
  std::unordered_map<std::string,std::string>::~unordered_map(&this->effects);
};
