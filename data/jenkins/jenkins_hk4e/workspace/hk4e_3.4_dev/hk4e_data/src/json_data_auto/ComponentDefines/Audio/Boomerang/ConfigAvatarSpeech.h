// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAvatarSpeech.h

// Line 21: range 0000000013C1DE64-0000000013C1DEF6
void __cdecl data::AvatarSpeechEquipObtain::AvatarSpeechEquipObtain(data::AvatarSpeechEquipObtain *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->quality = 0;
  data::ConfigWwiseString::ConfigWwiseString(&this->event_name);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 21: range 0000000013E8CEC8-0000000013E8CFD6
void __cdecl data::AvatarSpeechEquipObtain::AvatarSpeechEquipObtain(
        data::AvatarSpeechEquipObtain *const this,
        data::AvatarSpeechEquipObtain *a2)
{
  int32_t quality; // ecx
  char v3; // al
  data::ConfigWwiseString *p_event_name; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  data::AvatarSpeechEquipObtain *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  quality = a2->quality;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->quality = quality;
  p_event_name = &v7->event_name;
  data::ConfigWwiseString::ConfigWwiseString(&this->event_name, &v7->event_name);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_event_name, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_event_name) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_event_name, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 21: range 0000000013C1DEF8-0000000013C1DF16
void __cdecl data::AvatarSpeechEquipObtain::~AvatarSpeechEquipObtain(data::AvatarSpeechEquipObtain *const this)
{
  data::ConfigWwiseString::~ConfigWwiseString(&this->event_name);
};

// Line 83: range 0000000013C1EB82-0000000013C1EC5A
void __cdecl data::VoiceSound::VoiceSound(data::VoiceSound *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->personality = First_0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->positioning >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->positioning >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->positioning, v2);
  }
  this->positioning = TwoDimensional;
  data::ConfigWwiseString::ConfigWwiseString(&this->sound_name);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 83: range 0000000013E8E516-0000000013E8E6A9
void __cdecl data::VoiceSound::VoiceSound(data::VoiceSound *const this, data::VoiceSound *a2)
{
  data::VoicePersonality personality; // ecx
  char v3; // al
  __int64 v4; // rsi
  data::VoicePositioning positioning; // ecx
  char v6; // dl
  data::ConfigWwiseString *p_sound_name; // rsi
  bool is_json_loaded; // cl
  char v9; // al
  data::VoiceSound *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  personality = a2->personality;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->personality = personality;
  v4 = (((_BYTE)v10 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->positioning >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->positioning >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->positioning);
  }
  positioning = v10->positioning;
  v6 = *(_BYTE *)(((unsigned __int64)&this->positioning >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->positioning, v4);
  }
  this->positioning = positioning;
  p_sound_name = &v10->sound_name;
  data::ConfigWwiseString::ConfigWwiseString(&this->sound_name, &v10->sound_name);
  if ( *(char *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v10->is_json_loaded, p_sound_name, &v10->is_json_loaded);
  is_json_loaded = v10->is_json_loaded;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(p_sound_name) = v9 != 0;
    __asan_report_store1(&this->is_json_loaded, p_sound_name, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 83: range 0000000013C1EC5C-0000000013C1EC7A
void __cdecl data::VoiceSound::~VoiceSound(data::VoiceSound *const this)
{
  data::ConfigWwiseString::~ConfigWwiseString(&this->sound_name);
};
