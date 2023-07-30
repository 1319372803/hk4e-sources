// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Audio/ConfigCombatSpeech.h

// Line 20: range 000000000ED7662E-000000000ED76683
void __cdecl data::ConfigCombatSpeech::ConfigCombatSpeech(data::ConfigCombatSpeech *const this)
{
  __int64 v1; // rsi

  data::ConfigWwiseString::ConfigWwiseString(&this->head_shot_speech_event);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 20: range 00000000122160AA-0000000012216145
void __cdecl data::ConfigCombatSpeech::ConfigCombatSpeech(
        data::ConfigCombatSpeech *const this,
        const data::ConfigCombatSpeech *a2)
{
  bool is_json_loaded; // cl
  char v3; // al

  data::ConfigWwiseString::ConfigWwiseString(&this->head_shot_speech_event, &a2->head_shot_speech_event);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, a2, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v3 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(&this->is_json_loaded, a2, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 20: range 0000000012216146-0000000012216160
void __cdecl data::ConfigCombatSpeech::~ConfigCombatSpeech(data::ConfigCombatSpeech *const this)
{
  data::ConfigWwiseString::~ConfigWwiseString(&this->head_shot_speech_event);
};
