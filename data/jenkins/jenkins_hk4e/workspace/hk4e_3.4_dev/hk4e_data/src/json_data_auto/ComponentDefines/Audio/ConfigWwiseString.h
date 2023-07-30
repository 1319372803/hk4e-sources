// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Audio/ConfigWwiseString.h

// Line 19: range 000000000ED73C24-000000000ED73C79
void __cdecl data::ConfigWwiseString::ConfigWwiseString(data::ConfigWwiseString *const this)
{
  __int64 v1; // rsi

  std::string::basic_string(this);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 19: range 000000000E807E76-000000000E807F11
void __cdecl data::ConfigWwiseString::ConfigWwiseString(
        data::ConfigWwiseString *const this,
        const data::ConfigWwiseString *a2)
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

// Line 19: range 0000000011B63434-0000000011B634CF
void __cdecl data::ConfigWwiseString::ConfigWwiseString(
        data::ConfigWwiseString *const this,
        data::ConfigWwiseString *a2)
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

// Line 19: range 000000000E807F12-000000000E807F2C
void __cdecl data::ConfigWwiseString::~ConfigWwiseString(data::ConfigWwiseString *const this)
{
  std::string::~string(this);
};
