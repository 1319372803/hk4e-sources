// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Talent/ConfigDynamicTalentInfo.h

// Line 18: range 0000000013C2424A-0000000013C2429F
void __cdecl data::ConfigDynamicTalent::ConfigDynamicTalent(data::ConfigDynamicTalent *const this)
{
  __int64 v1; // rsi

  std::string::basic_string(this);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 18: range 000000000F94FD36-000000000F94FDD1
void __cdecl data::ConfigDynamicTalent::ConfigDynamicTalent(
        data::ConfigDynamicTalent *const this,
        const data::ConfigDynamicTalent *a2)
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

// Line 18: range 0000000013E93F8A-0000000013E94025
void __cdecl data::ConfigDynamicTalent::ConfigDynamicTalent(
        data::ConfigDynamicTalent *const this,
        data::ConfigDynamicTalent *a2)
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

// Line 18: range 000000000F94F908-000000000F94F922
void __cdecl data::ConfigDynamicTalent::~ConfigDynamicTalent(data::ConfigDynamicTalent *const this)
{
  std::string::~string(this);
};

// Line 872: range 000000000F94F94C-000000000F94F9EA
data::ConfigDynamicTalent *__cdecl data::ConfigDynamicTalent::operator=(
        data::ConfigDynamicTalent *const this,
        const data::ConfigDynamicTalent *a2)
{
  bool is_json_loaded; // cl
  char v3; // al

  std::string::operator=(this, a2);
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
  return this;
};
