// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/FireworksExcelConfig.gen.h

// Line 69: range 00000000147B4862-00000000147B4A02
data::FireworksReformParamConfig *__cdecl data::FireworksReformParamConfig::operator=(
        data::FireworksReformParamConfig *const this,
        const data::FireworksReformParamConfig *a2)
{
  data::FireworksReformParamType type; // ecx
  char v3; // al
  __int64 v4; // rsi
  int32_t standard_value; // ecx
  char v6; // dl
  bool is_can_reform; // cl
  char v8; // al
  const data::FireworksReformParamConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v3 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->type, a2);
  }
  this->type = type;
  v4 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->standard_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->standard_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->standard_value);
  }
  standard_value = v10->standard_value;
  v6 = *(_BYTE *)(((unsigned __int64)&this->standard_value >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
    __asan_report_store4(&this->standard_value, v4);
  this->standard_value = standard_value;
  if ( *(char *)(((unsigned __int64)&v10->is_can_reform >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v10->is_can_reform, v4, &v10->is_can_reform);
  is_can_reform = v10->is_can_reform;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_can_reform >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store1(&this->is_can_reform, v4, &this->is_can_reform);
  }
  this->is_can_reform = is_can_reform;
  std::vector<int>::operator=(&this->value_range, &v10->value_range);
  return this;
};

// Line 69: range 0000000014C7BCC8-0000000014C7BDD8
void __cdecl data::FireworksReformParamConfig::FireworksReformParamConfig(data::FireworksReformParamConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::FireworksReformParamConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FireworksReformParamConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = FIREWORKS_REFORM_PARAM_NONE_0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->standard_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->standard_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->standard_value, v3);
  }
  this->standard_value = 0;
  if ( *(char *)(((unsigned __int64)&this->is_can_reform >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_can_reform, v3, &this->is_can_reform);
  this->is_can_reform = 0;
  std::vector<int>::vector(&this->value_range);
};

// Line 69: range 0000000014D1A3F4-0000000014D1A5C4
void __cdecl data::FireworksReformParamConfig::FireworksReformParamConfig(
        data::FireworksReformParamConfig *const this,
        const data::FireworksReformParamConfig *a2)
{
  int (**v2)(...); // rdx
  data::FireworksReformParamType type; // ecx
  char v4; // al
  __int64 v5; // rsi
  int32_t standard_value; // ecx
  char v7; // dl
  bool is_can_reform; // cl
  char v9; // al
  const data::FireworksReformParamConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::FireworksReformParamConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FireworksReformParamConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->type, a2);
  }
  this->type = type;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->standard_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->standard_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->standard_value);
  }
  standard_value = v10->standard_value;
  v7 = *(_BYTE *)(((unsigned __int64)&this->standard_value >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
    __asan_report_store4(&this->standard_value, v5);
  this->standard_value = standard_value;
  if ( *(char *)(((unsigned __int64)&v10->is_can_reform >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v10->is_can_reform, v5, &v10->is_can_reform);
  is_can_reform = v10->is_can_reform;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_can_reform >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store1(&this->is_can_reform, v5, &this->is_can_reform);
  }
  this->is_can_reform = is_can_reform;
  std::vector<int>::vector(&this->value_range, &v10->value_range);
};

// Line 72: range 0000000014BA564C-0000000014BA569D
void __cdecl data::FireworksReformParamConfig::~FireworksReformParamConfig(
        data::FireworksReformParamConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FireworksReformParamConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FireworksReformParamConfig = v2;
  std::vector<int>::~vector(&this->value_range);
};

// Line 72: range 0000000014BA569E-0000000014BA56C8
void __cdecl data::FireworksReformParamConfig::~FireworksReformParamConfig(
        data::FireworksReformParamConfig *const this)
{
  data::FireworksReformParamConfig::~FireworksReformParamConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 84: range 000000001474453A-00000000147445C9
void __cdecl data::FireworksExcelConfig::FireworksExcelConfig(data::FireworksExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FireworksExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FireworksExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->material_id, v1);
  }
  this->material_id = 0;
  std::vector<data::FireworksReformParamConfig>::vector(&this->reform_param_list);
};

// Line 84: range 0000000014D1A648-0000000014D1A71D
void __cdecl data::FireworksExcelConfig::FireworksExcelConfig(
        data::FireworksExcelConfig *const this,
        const data::FireworksExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t material_id; // ecx
  char v4; // al
  const data::FireworksExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::FireworksExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FireworksExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->material_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->material_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->material_id);
  }
  material_id = a2->material_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->material_id, a2);
  }
  this->material_id = material_id;
  std::vector<data::FireworksReformParamConfig>::vector(&this->reform_param_list, &v5->reform_param_list);
};

// Line 87: range 0000000014DEA17E-0000000014DEA1CF
void __cdecl data::FireworksExcelConfig::~FireworksExcelConfig(data::FireworksExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FireworksExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FireworksExcelConfig = v2;
  std::vector<data::FireworksReformParamConfig>::~vector(&this->reform_param_list);
};

// Line 87: range 0000000014DEA1D0-0000000014DEA1FA
void __cdecl data::FireworksExcelConfig::~FireworksExcelConfig(data::FireworksExcelConfig *const this)
{
  data::FireworksExcelConfig::~FireworksExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 99: range 00000000147445CA-00000000147446ED
void __cdecl data::FireworksLaunchExcelConfig::FireworksLaunchExcelConfig(data::FireworksLaunchExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::FireworksLaunchExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FireworksLaunchExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->launch_param_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->launch_param_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->launch_param_type, v1);
  }
  this->launch_param_type = FIREWORKS_LAUNCH_PARAM_NONE_0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->default_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->default_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->default_value, v3);
  }
  this->default_value = 0;
  std::vector<int>::vector(&this->adjust_range);
  if ( *(_BYTE *)(((unsigned __int64)&this->adjust_step >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->adjust_step >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->adjust_step, v3);
  }
  this->adjust_step = 0;
  std::string::basic_string(&this->launch_param_name);
};

// Line 99: range 0000000014D1A85E-0000000014D1AA6F
void __cdecl data::FireworksLaunchExcelConfig::FireworksLaunchExcelConfig(
        data::FireworksLaunchExcelConfig *const this,
        const data::FireworksLaunchExcelConfig *a2)
{
  int (**v2)(...); // rdx
  data::FireworksLaunchParamType launch_param_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  int32_t default_value; // ecx
  char v7; // dl
  std::vector<int> *p_adjust_range; // rsi
  int32_t adjust_step; // ecx
  char v10; // al
  const data::FireworksLaunchExcelConfig *v11; // [rsp+0h] [rbp-20h]

  v11 = a2;
  v2 = (int (**)(...))(&`vtable for'data::FireworksLaunchExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FireworksLaunchExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->launch_param_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->launch_param_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->launch_param_type);
  }
  launch_param_type = a2->launch_param_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->launch_param_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->launch_param_type, a2);
  }
  this->launch_param_type = launch_param_type;
  v5 = (((_BYTE)v11 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->default_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->default_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->default_value);
  }
  default_value = v11->default_value;
  v7 = *(_BYTE *)(((unsigned __int64)&this->default_value >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->default_value, v5);
  }
  this->default_value = default_value;
  p_adjust_range = &v11->adjust_range;
  std::vector<int>::vector(&this->adjust_range, &v11->adjust_range);
  if ( *(_BYTE *)(((unsigned __int64)&v11->adjust_step >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->adjust_step >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->adjust_step);
  }
  adjust_step = v11->adjust_step;
  v10 = *(_BYTE *)(((unsigned __int64)&this->adjust_step >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_adjust_range) = v10 != 0;
    __asan_report_store4(&this->adjust_step, p_adjust_range);
  }
  this->adjust_step = adjust_step;
  std::string::basic_string(&this->launch_param_name, &v11->launch_param_name);
};

// Line 102: range 0000000014DEA0F0-0000000014DEA151
void __cdecl data::FireworksLaunchExcelConfig::~FireworksLaunchExcelConfig(
        data::FireworksLaunchExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FireworksLaunchExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FireworksLaunchExcelConfig = v2;
  std::string::~string(&this->launch_param_name);
  std::vector<int>::~vector(&this->adjust_range);
};

// Line 102: range 0000000014DEA152-0000000014DEA17C
void __cdecl data::FireworksLaunchExcelConfig::~FireworksLaunchExcelConfig(
        data::FireworksLaunchExcelConfig *const this)
{
  data::FireworksLaunchExcelConfig::~FireworksLaunchExcelConfig(this);
  operator delete(this, 0x50uLL);
};
