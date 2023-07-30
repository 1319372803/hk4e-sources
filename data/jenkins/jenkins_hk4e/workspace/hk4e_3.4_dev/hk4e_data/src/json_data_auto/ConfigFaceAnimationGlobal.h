// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigFaceAnimationGlobal.h

// Line 43: range 000000001213CF68-000000001213CFBD
void __cdecl data::FaceAnimationTSettingPathConfig::FaceAnimationTSettingPathConfig(
        data::FaceAnimationTSettingPathConfig *const this)
{
  __int64 v1; // rsi

  std::string::basic_string(this);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 43: range 000000001260F9D0-000000001260FA6B
void __cdecl data::FaceAnimationTSettingPathConfig::FaceAnimationTSettingPathConfig(
        data::FaceAnimationTSettingPathConfig *const this,
        const data::FaceAnimationTSettingPathConfig *a2)
{
  bool is_json_loaded; // cl
  char v3; // al

  std::string::basic_string(this, a2);
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

// Line 43: range 000000001213CFBE-000000001213CFD8
void __cdecl data::FaceAnimationTSettingPathConfig::~FaceAnimationTSettingPathConfig(
        data::FaceAnimationTSettingPathConfig *const this)
{
  std::string::~string(this);
};
