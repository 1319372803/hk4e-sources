// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioMutualExclusion.h

// Line 34: range 0000000013C1C3DE-0000000013C1C486
void __cdecl data::AudioMutualExclusion::AudioMutualExclusion(data::AudioMutualExclusion *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  std::string::basic_string(this);
  std::string::basic_string(&this->event_name_b);
  if ( *(_BYTE *)(((unsigned __int64)&this->scope >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scope >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scope, v1);
  }
  this->scope = Global;
  v2 = ((_BYTE)this + 68) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_json_loaded, v2, v3);
  this->is_json_loaded = 0;
};

// Line 34: range 0000000013E848B2-0000000013E849E7
void __cdecl data::AudioMutualExclusion::AudioMutualExclusion(
        data::AudioMutualExclusion *const this,
        data::AudioMutualExclusion *a2)
{
  std::string *p_event_name_b; // rsi
  data::AudioScope scope; // ecx
  char v4; // al
  __int64 v5; // rsi
  __int64 v6; // rdx
  bool is_json_loaded; // cl
  char v8; // dl
  __int64 v9; // rdx

  std::string::basic_string(this, a2);
  p_event_name_b = &a2->event_name_b;
  std::string::basic_string(&this->event_name_b, p_event_name_b);
  if ( *(_BYTE *)(((unsigned __int64)&a2->scope >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->scope >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->scope);
  }
  scope = a2->scope;
  v4 = *(_BYTE *)(((unsigned __int64)&this->scope >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(p_event_name_b) = v4 != 0;
    __asan_report_store4(&this->scope, p_event_name_b);
  }
  this->scope = scope;
  v5 = ((_BYTE)a2 + 68) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&a2->is_json_loaded, v5, v6);
  is_json_loaded = a2->is_json_loaded;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((((unsigned __int8)this + 68) & 7) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_json_loaded, v5, v9);
  this->is_json_loaded = is_json_loaded;
};

// Line 34: range 0000000013C1C488-0000000013C1C4B2
void __cdecl data::AudioMutualExclusion::~AudioMutualExclusion(data::AudioMutualExclusion *const this)
{
  std::string::~string(&this->event_name_b);
  std::string::~string(this);
};
