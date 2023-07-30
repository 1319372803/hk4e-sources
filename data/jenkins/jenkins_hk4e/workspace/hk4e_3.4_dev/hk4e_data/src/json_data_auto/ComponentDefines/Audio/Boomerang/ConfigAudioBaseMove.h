// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioBaseMove.h

// Line 36: range 0000000012137C22-0000000012137DC1
void __cdecl data::AudioPlatformMoveSettings::AudioPlatformMoveSettings(data::AudioPlatformMoveSettings *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->move_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->move_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->move_type, v2);
  }
  this->move_type = None_66;
  data::ConfigWwiseString::ConfigWwiseString(&this->move_start_event);
  data::ConfigWwiseString::ConfigWwiseString(&this->move_stop_event);
  data::ConfigWwiseString::ConfigWwiseString(&this->rotate_start_event);
  data::ConfigWwiseString::ConfigWwiseString(&this->rotate_stop_event);
  if ( *(_BYTE *)(((unsigned __int64)&this->linear_velocity_threshold >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->linear_velocity_threshold >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->linear_velocity_threshold, v2);
  }
  this->linear_velocity_threshold = 0.0;
  v3 = (((_BYTE)this - 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->angular_velocity_threshold >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->angular_velocity_threshold >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->angular_velocity_threshold, v3);
  }
  this->angular_velocity_threshold = 0.0;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v3, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 36: range 00000000122F28E8-00000000122F2BEA
void __cdecl data::AudioPlatformMoveSettings::AudioPlatformMoveSettings(
        data::AudioPlatformMoveSettings *const this,
        data::AudioPlatformMoveSettings *a2)
{
  uint32_t id; // ecx
  char v3; // al
  __int64 v4; // rsi
  data::AudioPlatformMoveType move_type; // ecx
  char v6; // dl
  float linear_velocity_threshold; // xmm0_4
  float angular_velocity_threshold; // xmm0_4
  __int64 v9; // rsi
  bool is_json_loaded; // cl
  char v11; // al
  data::AudioPlatformMoveSettings *v12; // [rsp+0h] [rbp-10h]

  v12 = a2;
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
  v4 = (((_BYTE)v12 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v12->move_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v12 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v12->move_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v12->move_type);
  }
  move_type = v12->move_type;
  v6 = *(_BYTE *)(((unsigned __int64)&this->move_type >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->move_type, v4);
  }
  this->move_type = move_type;
  data::ConfigWwiseString::ConfigWwiseString(&this->move_start_event, &v12->move_start_event);
  data::ConfigWwiseString::ConfigWwiseString(&this->move_stop_event, &v12->move_stop_event);
  data::ConfigWwiseString::ConfigWwiseString(&this->rotate_start_event, &v12->rotate_start_event);
  data::ConfigWwiseString::ConfigWwiseString(&this->rotate_stop_event, &v12->rotate_stop_event);
  if ( *(_BYTE *)(((unsigned __int64)&v12->linear_velocity_threshold >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v12->linear_velocity_threshold >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v12->linear_velocity_threshold);
  }
  linear_velocity_threshold = v12->linear_velocity_threshold;
  if ( *(_BYTE *)(((unsigned __int64)&this->linear_velocity_threshold >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->linear_velocity_threshold >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->linear_velocity_threshold, &v12->rotate_stop_event);
  }
  this->linear_velocity_threshold = linear_velocity_threshold;
  if ( *(_BYTE *)(((unsigned __int64)&v12->angular_velocity_threshold >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v12 - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v12->angular_velocity_threshold >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v12->angular_velocity_threshold);
  }
  angular_velocity_threshold = v12->angular_velocity_threshold;
  v9 = (((_BYTE)this - 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->angular_velocity_threshold >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->angular_velocity_threshold >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->angular_velocity_threshold, v9);
  }
  this->angular_velocity_threshold = angular_velocity_threshold;
  if ( *(char *)(((unsigned __int64)&v12->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v12->is_json_loaded, v9, &v12->is_json_loaded);
  is_json_loaded = v12->is_json_loaded;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v11 < 0 )
  {
    LOBYTE(v9) = v11 != 0;
    __asan_report_store1(&this->is_json_loaded, v9, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 36: range 0000000012137DC2-0000000012137E10
void __cdecl data::AudioPlatformMoveSettings::~AudioPlatformMoveSettings(data::AudioPlatformMoveSettings *const this)
{
  data::ConfigWwiseString::~ConfigWwiseString(&this->rotate_stop_event);
  data::ConfigWwiseString::~ConfigWwiseString(&this->rotate_start_event);
  data::ConfigWwiseString::~ConfigWwiseString(&this->move_stop_event);
  data::ConfigWwiseString::~ConfigWwiseString(&this->move_start_event);
};
