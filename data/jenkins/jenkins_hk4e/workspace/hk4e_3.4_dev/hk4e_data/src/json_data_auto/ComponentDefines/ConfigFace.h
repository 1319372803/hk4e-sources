// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/ConfigFace.h

// Line 19: range 000000000ED91D36-000000000ED91E33
void __cdecl data::ConfigFace::ConfigFace(data::ConfigFace *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  std::string::basic_string(this);
  std::string::basic_string(&this->base_face_animation);
  std::string::basic_string(&this->interval_face_animation);
  if ( *(_BYTE *)(((unsigned __int64)&this->min_interval >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min_interval >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->min_interval, v1);
  }
  this->min_interval = 0.0;
  v2 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_interval, v2);
  }
  this->max_interval = 0.0;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 19: range 000000000E826174-000000000E82637D
void __cdecl data::ConfigFace::ConfigFace(data::ConfigFace *const this, const data::ConfigFace *a2)
{
  std::string *p_interval_face_animation; // rsi
  float min_interval; // xmm0_4
  float max_interval; // xmm0_4
  __int64 v5; // rsi
  bool is_json_loaded; // cl
  char v7; // al

  std::string::basic_string(this, a2);
  std::string::basic_string(&this->base_face_animation, &a2->base_face_animation);
  p_interval_face_animation = &a2->interval_face_animation;
  std::string::basic_string(&this->interval_face_animation, p_interval_face_animation);
  if ( *(_BYTE *)(((unsigned __int64)&a2->min_interval >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->min_interval >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->min_interval);
  }
  min_interval = a2->min_interval;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_interval >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min_interval >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->min_interval, p_interval_face_animation);
  }
  this->min_interval = min_interval;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->max_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->max_interval);
  }
  max_interval = a2->max_interval;
  v5 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_interval, v5);
  }
  this->max_interval = max_interval;
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, v5, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store1(&this->is_json_loaded, v5, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 19: range 000000000E82637E-000000000E8263B8
void __cdecl data::ConfigFace::~ConfigFace(data::ConfigFace *const this)
{
  std::string::~string(&this->interval_face_animation);
  std::string::~string(&this->base_face_animation);
  std::string::~string(this);
};
