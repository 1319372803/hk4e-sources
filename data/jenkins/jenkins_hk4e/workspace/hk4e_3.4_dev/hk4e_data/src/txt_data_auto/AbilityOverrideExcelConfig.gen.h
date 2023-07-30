// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/AbilityOverrideExcelConfig.gen.h

// Line 18: range 0000000013302D92-0000000013302E23
void __cdecl data::AbilityOverrideParamConfig::AbilityOverrideParamConfig(data::AbilityOverrideParamConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AbilityOverrideParamConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AbilityOverrideParamConfig = v2;
  std::string::basic_string(&this->param_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->param_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->param_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->param_value, v1);
  }
  this->param_value = 0.0;
};

// Line 18: range 0000000013384B02-0000000013384BDA
void __cdecl data::AbilityOverrideParamConfig::AbilityOverrideParamConfig(
        data::AbilityOverrideParamConfig *const this,
        const data::AbilityOverrideParamConfig *a2)
{
  int (**v2)(...); // rdx
  float param_value; // xmm0_4

  v2 = (int (**)(...))(&`vtable for'data::AbilityOverrideParamConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_AbilityOverrideParamConfig = v2;
  std::string::basic_string(&this->param_name, &a2->param_name);
  if ( *(_BYTE *)(((unsigned __int64)&a2->param_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->param_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->param_value);
  }
  param_value = a2->param_value;
  if ( *(_BYTE *)(((unsigned __int64)&this->param_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->param_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->param_value, &a2->param_name);
  }
  this->param_value = param_value;
};

// Line 21: range 00000000132581B2-0000000013258203
void __cdecl data::AbilityOverrideParamConfig::~AbilityOverrideParamConfig(
        data::AbilityOverrideParamConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AbilityOverrideParamConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AbilityOverrideParamConfig = v2;
  std::string::~string(&this->param_name);
};

// Line 21: range 0000000013258204-000000001325822E
void __cdecl data::AbilityOverrideParamConfig::~AbilityOverrideParamConfig(
        data::AbilityOverrideParamConfig *const this)
{
  data::AbilityOverrideParamConfig::~AbilityOverrideParamConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 31: range 0000000012EADA10-0000000012EADB0A
void __cdecl data::AbilityOverrideExcelConfig::AbilityOverrideExcelConfig(data::AbilityOverrideExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AbilityOverrideExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AbilityOverrideExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::string::basic_string(&this->ability_name);
  std::vector<data::AbilityOverrideParamConfig>::vector(&this->ability_special_param_config);
  std::vector<std::string>::vector(&this->param_name_list);
  std::vector<float>::vector(&this->param_value_list);
  if ( *(char *)(((unsigned __int64)&this->reset_ability_special >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->reset_ability_special, v1, &this->reset_ability_special);
  this->reset_ability_special = 0;
};

// Line 31: range 0000000013384C5E-0000000013384E4B
void __cdecl data::AbilityOverrideExcelConfig::AbilityOverrideExcelConfig(
        data::AbilityOverrideExcelConfig *const this,
        const data::AbilityOverrideExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::vector<float> *p_param_value_list; // rsi
  bool reset_ability_special; // cl
  char v7; // al
  const data::AbilityOverrideExcelConfig *v8; // [rsp+0h] [rbp-20h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::AbilityOverrideExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_AbilityOverrideExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  std::string::basic_string(&this->ability_name, &v8->ability_name);
  std::vector<data::AbilityOverrideParamConfig>::vector(
    &this->ability_special_param_config,
    &v8->ability_special_param_config);
  std::vector<std::string>::vector(&this->param_name_list, &v8->param_name_list);
  p_param_value_list = &v8->param_value_list;
  std::vector<float>::vector(&this->param_value_list, &v8->param_value_list);
  if ( *(char *)(((unsigned __int64)&v8->reset_ability_special >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v8->reset_ability_special, p_param_value_list, &v8->reset_ability_special);
  reset_ability_special = v8->reset_ability_special;
  v7 = *(_BYTE *)(((unsigned __int64)&this->reset_ability_special >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(p_param_value_list) = v7 != 0;
    __asan_report_store1(&this->reset_ability_special, p_param_value_list, &this->reset_ability_special);
  }
  this->reset_ability_special = reset_ability_special;
};

// Line 34: range 0000000013426CFE-0000000013426D7F
void __cdecl data::AbilityOverrideExcelConfig::~AbilityOverrideExcelConfig(
        data::AbilityOverrideExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AbilityOverrideExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AbilityOverrideExcelConfig = v2;
  std::vector<float>::~vector(&this->param_value_list);
  std::vector<std::string>::~vector(&this->param_name_list);
  std::vector<data::AbilityOverrideParamConfig>::~vector(&this->ability_special_param_config);
  std::string::~string(&this->ability_name);
};

// Line 34: range 0000000013426D80-0000000013426DAA
void __cdecl data::AbilityOverrideExcelConfig::~AbilityOverrideExcelConfig(
        data::AbilityOverrideExcelConfig *const this)
{
  data::AbilityOverrideExcelConfig::~AbilityOverrideExcelConfig(this);
  operator delete(this, 0x80uLL);
};
