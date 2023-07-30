// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Audio/ConfigStateAudioEvent.h

// Line 35: range 00000000121362D4-000000001213638C
void __cdecl data::ConfigStateAudioEvent::ConfigStateAudioEvent(data::ConfigStateAudioEvent *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  std::string::basic_string(this);
  data::ConfigWwiseString::ConfigWwiseString(&this->audio_event);
  std::vector<std::string>::vector(&this->other_state_names);
  if ( *(_BYTE *)(((unsigned __int64)&this->usage >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->usage >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->usage, v1);
  }
  this->usage = Any_1;
  v2 = ((_BYTE)this + 100) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_json_loaded, v2, v3);
  this->is_json_loaded = 0;
};

// Line 35: range 000000001260274E-00000000126028D6
void __cdecl data::ConfigStateAudioEvent::ConfigStateAudioEvent(
        data::ConfigStateAudioEvent *const this,
        const data::ConfigStateAudioEvent *a2)
{
  data::StringList *p_other_state_names; // rsi
  data::StateAudioEventUsage usage; // ecx
  char v4; // al
  __int64 v5; // rsi
  __int64 v6; // rdx
  bool is_json_loaded; // cl
  char v8; // dl
  __int64 v9; // rdx

  std::string::basic_string(this, a2);
  data::ConfigWwiseString::ConfigWwiseString(&this->audio_event, &a2->audio_event);
  p_other_state_names = &a2->other_state_names;
  std::vector<std::string>::vector(&this->other_state_names, p_other_state_names);
  if ( *(_BYTE *)(((unsigned __int64)&a2->usage >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->usage >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->usage);
  }
  usage = a2->usage;
  v4 = *(_BYTE *)(((unsigned __int64)&this->usage >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(p_other_state_names) = v4 != 0;
    __asan_report_store4(&this->usage, p_other_state_names);
  }
  this->usage = usage;
  v5 = ((_BYTE)a2 + 100) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&a2->is_json_loaded, v5, v6);
  is_json_loaded = a2->is_json_loaded;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((((unsigned __int8)this + 100) & 7) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_json_loaded, v5, v9);
  this->is_json_loaded = is_json_loaded;
};

// Line 35: range 00000000122EA5C0-00000000122EA710
void __cdecl data::ConfigStateAudioEvent::ConfigStateAudioEvent(
        data::ConfigStateAudioEvent *const this,
        data::ConfigStateAudioEvent *a2)
{
  std::vector<std::string> *p_other_state_names; // rsi
  data::StateAudioEventUsage usage; // ecx
  char v4; // al
  __int64 v5; // rsi
  __int64 v6; // rdx
  bool is_json_loaded; // cl
  char v8; // dl
  __int64 v9; // rdx

  std::string::basic_string(this, a2);
  data::ConfigWwiseString::ConfigWwiseString(&this->audio_event, &a2->audio_event);
  p_other_state_names = &a2->other_state_names;
  std::vector<std::string>::vector(&this->other_state_names, p_other_state_names);
  if ( *(_BYTE *)(((unsigned __int64)&a2->usage >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->usage >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->usage);
  }
  usage = a2->usage;
  v4 = *(_BYTE *)(((unsigned __int64)&this->usage >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(p_other_state_names) = v4 != 0;
    __asan_report_store4(&this->usage, p_other_state_names);
  }
  this->usage = usage;
  v5 = ((_BYTE)a2 + 100) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&a2->is_json_loaded, v5, v6);
  is_json_loaded = a2->is_json_loaded;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((((unsigned __int8)this + 100) & 7) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_json_loaded, v5, v9);
  this->is_json_loaded = is_json_loaded;
};

// Line 35: range 000000001213638E-00000000121363C8
void __cdecl data::ConfigStateAudioEvent::~ConfigStateAudioEvent(data::ConfigStateAudioEvent *const this)
{
  std::vector<std::string>::~vector(&this->other_state_names);
  data::ConfigWwiseString::~ConfigWwiseString(&this->audio_event);
  std::string::~string(this);
};
