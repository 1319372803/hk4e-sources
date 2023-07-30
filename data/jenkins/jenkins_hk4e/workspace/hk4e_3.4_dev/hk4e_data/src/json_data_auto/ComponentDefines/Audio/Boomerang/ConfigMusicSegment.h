// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigMusicSegment.h

// Line 19: range 0000000013C1ECB0-0000000013C1ED8B
void __cdecl data::MusicSegment::MusicSegment(data::MusicSegment *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->short_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->short_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->short_id, v1);
  }
  this->short_id = 0;
  v2 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_position >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_position >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->end_position, v2);
  }
  this->end_position = 0.0;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 19: range 0000000013E8F234-0000000013E8F3CC
void __cdecl data::MusicSegment::MusicSegment(data::MusicSegment *const this, data::MusicSegment *a2)
{
  uint32_t short_id; // ecx
  char v3; // al
  float end_position; // xmm0_4
  __int64 v5; // rsi
  bool is_json_loaded; // cl
  char v7; // al
  data::MusicSegment *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&v8->short_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->short_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->short_id);
  }
  short_id = a2->short_id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->short_id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->short_id, a2);
  }
  this->short_id = short_id;
  if ( *(_BYTE *)(((unsigned __int64)&v8->end_position >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->end_position >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->end_position);
  }
  end_position = v8->end_position;
  v5 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_position >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_position >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->end_position, v5);
  }
  this->end_position = end_position;
  if ( *(char *)(((unsigned __int64)&v8->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v8->is_json_loaded, v5, &v8->is_json_loaded);
  is_json_loaded = v8->is_json_loaded;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store1(&this->is_json_loaded, v5, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 19: range 0000000013C1ED8C-0000000013C1EDA6
void __cdecl data::MusicSegment::~MusicSegment(data::MusicSegment *const this)
{
  std::string::~string(this);
};
