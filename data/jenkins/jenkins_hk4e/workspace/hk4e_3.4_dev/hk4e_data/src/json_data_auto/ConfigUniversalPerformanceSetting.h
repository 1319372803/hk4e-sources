// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigUniversalPerformanceSetting.h

// Line 89: range 000000000E3EF3E4-000000000E3EF504
void __cdecl data::ConfigPerfItemOverrideInfoBase::ConfigPerfItemOverrideInfoBase(
        data::ConfigPerfItemOverrideInfoBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  std::enable_shared_from_this<data::ConfigPerfItemOverrideInfoBase>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigPerfItemOverrideInfoBase>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfItemOverrideInfoBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemOverrideInfoBase = v2;
  std::vector<data::ConfigGraphicsRequirement>::vector(&this->requirement_array);
  if ( *(_BYTE *)(((unsigned __int64)&this->device_override_rule >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->device_override_rule >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->device_override_rule, v1);
  }
  this->device_override_rule = Force;
  v3 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->combine_override_rule >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->combine_override_rule >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->combine_override_rule, v3);
  }
  this->combine_override_rule = Min_0;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v3, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 89: range 000000000E3EFA62-000000000E3EFC74
void __cdecl data::ConfigPerfItemOverrideInfoBase::ConfigPerfItemOverrideInfoBase(
        data::ConfigPerfItemOverrideInfoBase *const this,
        const data::ConfigPerfItemOverrideInfoBase *a2)
{
  std::enable_shared_from_this<data::ConfigPerfItemOverrideInfoBase> *v2; // rsi
  int (**v3)(...); // rdx
  data::ConfigGraphicsRequirementArray *p_requirement_array; // rsi
  data::PerfOptionOverrideRule device_override_rule; // ecx
  char v6; // al
  __int64 v7; // rsi
  data::PerfOptionOverrideRule combine_override_rule; // ecx
  char v9; // dl
  bool is_json_loaded; // cl
  char v11; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigPerfItemOverrideInfoBase>;
  std::enable_shared_from_this<data::ConfigPerfItemOverrideInfoBase>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigPerfItemOverrideInfoBase>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigPerfItemOverrideInfoBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigPerfItemOverrideInfoBase = v3;
  p_requirement_array = &a2->requirement_array;
  std::vector<data::ConfigGraphicsRequirement>::vector(&this->requirement_array, &a2->requirement_array);
  if ( *(_BYTE *)(((unsigned __int64)&a2->device_override_rule >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->device_override_rule >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->device_override_rule);
  }
  device_override_rule = a2->device_override_rule;
  v6 = *(_BYTE *)(((unsigned __int64)&this->device_override_rule >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_requirement_array) = v6 != 0;
    __asan_report_store4(&this->device_override_rule, p_requirement_array);
  }
  this->device_override_rule = device_override_rule;
  v7 = (((_BYTE)a2 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->combine_override_rule >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->combine_override_rule >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->combine_override_rule);
  }
  combine_override_rule = a2->combine_override_rule;
  v9 = *(_BYTE *)(((unsigned __int64)&this->combine_override_rule >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v9 != 0;
  if ( v9 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v9 )
    __asan_report_store4(&this->combine_override_rule, v7);
  this->combine_override_rule = combine_override_rule;
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, v7, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v11 < 0 )
  {
    LOBYTE(v7) = v11 != 0;
    __asan_report_store1(&this->is_json_loaded, v7, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 99: range 000000000E3EFF5E-000000000E3EFFBF
void __cdecl data::ConfigPerfItemOverrideInfoBase::~ConfigPerfItemOverrideInfoBase(
        data::ConfigPerfItemOverrideInfoBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfItemOverrideInfoBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemOverrideInfoBase = v2;
  std::vector<data::ConfigGraphicsRequirement>::~vector(&this->requirement_array);
  std::enable_shared_from_this<data::ConfigPerfItemOverrideInfoBase>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigPerfItemOverrideInfoBase>);
};

// Line 99: range 000000000E3EFFC0-000000000E3EFFEA
void __cdecl data::ConfigPerfItemOverrideInfoBase::~ConfigPerfItemOverrideInfoBase(
        data::ConfigPerfItemOverrideInfoBase *const this)
{
  data::ConfigPerfItemOverrideInfoBase::~ConfigPerfItemOverrideInfoBase(this);
  operator delete(this, 0x40uLL);
};

// Line 104: range 000000000E188E4C-000000000E188E5C
const char *__cdecl data::ConfigPerfItemOverrideInfoBase::getTypeName(
        const data::ConfigPerfItemOverrideInfoBase *const this)
{
  return "ConfigPerfItemOverrideInfoBase";
};

// Line 105: range 000000000E188E5E-000000000E188FFA
int32_t __cdecl data::ConfigPerfItemOverrideInfoBase::getHashNum(
        const data::ConfigPerfItemOverrideInfoBase *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigPerfItemOverrideInfoBase::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigPerfItemOverrideInfoBase",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 124: range 000000000E3EFFEC-000000000E3F0059
void __cdecl data::PlayerCustomOptionConfig::PlayerCustomOptionConfig(data::PlayerCustomOptionConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigPerfItemOverrideInfoBase::ConfigPerfItemOverrideInfoBase(this);
  v2 = (int (**)(...))(&`vtable for'data::PlayerCustomOptionConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemOverrideInfoBase = v2;
  std::vector<std::string>::vector(&this->option_text_name);
  std::vector<float>::vector(&this->perf_cost_ratio);
};

// Line 124: range 000000000E3F0404-000000000E3F04CA
void __cdecl data::PlayerCustomOptionConfig::PlayerCustomOptionConfig(
        data::PlayerCustomOptionConfig *const this,
        const data::PlayerCustomOptionConfig *a2)
{
  int (**v2)(...); // rdx

  data::ConfigPerfItemOverrideInfoBase::ConfigPerfItemOverrideInfoBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::PlayerCustomOptionConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigPerfItemOverrideInfoBase = v2;
  std::vector<std::string>::vector(&this->option_text_name, &a2->option_text_name);
  std::vector<float>::vector(&this->perf_cost_ratio, &a2->perf_cost_ratio);
};

// Line 132: range 000000000E435010-000000000E43503A
void __cdecl data::PlayerCustomOptionConfig::~PlayerCustomOptionConfig(data::PlayerCustomOptionConfig *const this)
{
  data::PlayerCustomOptionConfig::~PlayerCustomOptionConfig(this);
  operator delete(this, 0x70uLL);
};

// Line 132: range 000000000E434FA2-000000000E43500F
void __cdecl data::PlayerCustomOptionConfig::~PlayerCustomOptionConfig(data::PlayerCustomOptionConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::PlayerCustomOptionConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemOverrideInfoBase = v2;
  std::vector<float>::~vector(&this->perf_cost_ratio);
  std::vector<std::string>::~vector(&this->option_text_name);
  data::ConfigPerfItemOverrideInfoBase::~ConfigPerfItemOverrideInfoBase(this);
};

// Line 137: range 000000000E188FFC-000000000E18900C
const char *__cdecl data::PlayerCustomOptionConfig::getTypeName(const data::PlayerCustomOptionConfig *const this)
{
  return "PlayerCustomOptionConfig";
};

// Line 138: range 000000000E18900E-000000000E1891AA
int32_t __cdecl data::PlayerCustomOptionConfig::getHashNum(const data::PlayerCustomOptionConfig *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::PlayerCustomOptionConfig::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "PlayerCustomOptionConfig",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 139: range 000000000E3F56F4-000000000E3F578A
void __cdecl data::ConfigPerfNumberArrayItemOptionArrayInfo::ConfigPerfNumberArrayItemOptionArrayInfo(
        data::ConfigPerfNumberArrayItemOptionArrayInfo *const this,
        const data::ConfigPerfNumberArrayItemOptionArrayInfo *a2)
{
  int (**v2)(...); // rdx

  data::ConfigPerfItemOptionArrayInfoBase::ConfigPerfItemOptionArrayInfoBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfNumberArrayItemOptionArrayInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigPerfItemOptionArrayInfoBase = v2;
  std::vector<std::vector<float>>::vector(&this->item_option_array, &a2->item_option_array);
};

// Line 154: range 000000000E3F07B4-000000000E3F07F5
void __cdecl data::PlayerCustomOptionConfigFactory::PlayerCustomOptionConfigFactory(
        data::PlayerCustomOptionConfigFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::PlayerCustomOptionConfigFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCustomOptionConfigFactory = v2;
};

// Line 169: range 000000000E3F1580-000000000E3F1696
void __cdecl data::PlayerCustomOptionSetting::PlayerCustomOptionSetting(data::PlayerCustomOptionSetting *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->setting_entry = Invalid_2;
  std::unordered_map<std::string,std::shared_ptr<data::PlayerCustomOptionConfig>>::unordered_map(&this->custom_config_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->option_name_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->option_name_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->option_name_type, v1);
  }
  this->option_name_type = Grade_0;
  v2 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->sort_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sort_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->sort_type, v2);
  }
  this->sort_type = None_16;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 169: range 000000000E1F2600-000000000E1F2808
void __cdecl data::PlayerCustomOptionSetting::PlayerCustomOptionSetting(
        data::PlayerCustomOptionSetting *const this,
        const data::PlayerCustomOptionSetting *a2)
{
  data::GraphicsSettingEntryType setting_entry; // ecx
  char v3; // al
  data::PlayerCustomOptionOverrideInfoMap *p_custom_config_map; // rsi
  data::PerfOptionTextType option_name_type; // ecx
  char v6; // al
  __int64 v7; // rsi
  data::ConfigGraphicSettingEntrySortType sort_type; // ecx
  char v9; // dl
  bool is_json_loaded; // cl
  char v11; // al
  const data::PlayerCustomOptionSetting *v12; // [rsp+0h] [rbp-10h]

  v12 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  setting_entry = a2->setting_entry;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->setting_entry = setting_entry;
  p_custom_config_map = &v12->custom_config_map;
  std::unordered_map<std::string,std::shared_ptr<data::PlayerCustomOptionConfig>>::unordered_map(
    &this->custom_config_map,
    &v12->custom_config_map);
  if ( *(_BYTE *)(((unsigned __int64)&v12->option_name_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v12->option_name_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v12->option_name_type);
  }
  option_name_type = v12->option_name_type;
  v6 = *(_BYTE *)(((unsigned __int64)&this->option_name_type >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_custom_config_map) = v6 != 0;
    __asan_report_store4(&this->option_name_type, p_custom_config_map);
  }
  this->option_name_type = option_name_type;
  v7 = (((_BYTE)v12 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v12->sort_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v12 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v12->sort_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v12->sort_type);
  }
  sort_type = v12->sort_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->sort_type >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v9 != 0;
  if ( v9 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v9 )
    __asan_report_store4(&this->sort_type, v7);
  this->sort_type = sort_type;
  if ( *(char *)(((unsigned __int64)&v12->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v12->is_json_loaded, v7, &v12->is_json_loaded);
  is_json_loaded = v12->is_json_loaded;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v11 < 0 )
  {
    LOBYTE(v7) = v11 != 0;
    __asan_report_store1(&this->is_json_loaded, v7, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 169: range 000000000E1F280A-000000000E1F2828
void __cdecl data::PlayerCustomOptionSetting::~PlayerCustomOptionSetting(data::PlayerCustomOptionSetting *const this)
{
  std::unordered_map<std::string,std::shared_ptr<data::PlayerCustomOptionConfig>>::~unordered_map(&this->custom_config_map);
};

// Line 195: range 000000000E18D16E-000000000E18D210
void __cdecl data::ConfigPerfRatingLevel::ConfigPerfRatingLevel(data::ConfigPerfRatingLevel *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->tier = 0;
  std::vector<data::ConfigGraphicsRequirement>::vector(&this->requirement_array);
  std::vector<std::string>::vector(&this->special_case_requirment);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 195: range 000000000E432894-000000000E4329E4
void __cdecl data::ConfigPerfRatingLevel::ConfigPerfRatingLevel(
        data::ConfigPerfRatingLevel *const this,
        const data::ConfigPerfRatingLevel *a2)
{
  int32_t tier; // ecx
  char v3; // al
  data::StringArray *p_special_case_requirment; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  const data::ConfigPerfRatingLevel *v7; // [rsp+0h] [rbp-20h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  tier = a2->tier;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->tier = tier;
  std::vector<data::ConfigGraphicsRequirement>::vector(&this->requirement_array, &v7->requirement_array);
  p_special_case_requirment = &v7->special_case_requirment;
  std::vector<std::string>::vector(&this->special_case_requirment, &v7->special_case_requirment);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_special_case_requirment, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_special_case_requirment) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_special_case_requirment, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 195: range 000000000E18D212-000000000E18D240
void __cdecl data::ConfigPerfRatingLevel::~ConfigPerfRatingLevel(data::ConfigPerfRatingLevel *const this)
{
  std::vector<std::string>::~vector(&this->special_case_requirment);
  std::vector<data::ConfigGraphicsRequirement>::~vector(&this->requirement_array);
};

// Line 295: range 000000000E3F1698-000000000E3F1749
void __cdecl data::ConfigPerfItemBase::ConfigPerfItemBase(data::ConfigPerfItemBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::ConfigPerfItemBase>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigPerfItemBase>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfItemBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemBase = v2;
  std::unordered_map<data::PerfRatingCategory,std::vector<int>>::unordered_map(&this->category_rating_map);
  data::PlayerCustomOptionSetting::PlayerCustomOptionSetting(&this->player_custom_option);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 295: range 000000000E3F1C50-000000000E3F1DA2
void __cdecl data::ConfigPerfItemBase::ConfigPerfItemBase(
        data::ConfigPerfItemBase *const this,
        const data::ConfigPerfItemBase *a2)
{
  std::enable_shared_from_this<data::ConfigPerfItemBase> *v2; // rsi
  int (**v3)(...); // rdx
  data::PlayerCustomOptionSetting *p_player_custom_option; // rsi
  bool is_json_loaded; // cl
  char v6; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigPerfItemBase>;
  std::enable_shared_from_this<data::ConfigPerfItemBase>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigPerfItemBase>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigPerfItemBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigPerfItemBase = v3;
  std::unordered_map<data::PerfRatingCategory,std::vector<int>>::unordered_map(
    &this->category_rating_map,
    &a2->category_rating_map);
  p_player_custom_option = &a2->player_custom_option;
  data::PlayerCustomOptionSetting::PlayerCustomOptionSetting(&this->player_custom_option, &a2->player_custom_option);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_player_custom_option, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_player_custom_option) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_player_custom_option, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 304: range 000000000E3F4272-000000000E3F429C
void __cdecl data::ConfigPerfItemBase::~ConfigPerfItemBase(data::ConfigPerfItemBase *const this)
{
  data::ConfigPerfItemBase::~ConfigPerfItemBase(this);
  operator delete(this, 0xA8uLL);
};

// Line 304: range 000000000E3F4200-000000000E3F4271
void __cdecl data::ConfigPerfItemBase::~ConfigPerfItemBase(data::ConfigPerfItemBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfItemBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemBase = v2;
  data::PlayerCustomOptionSetting::~PlayerCustomOptionSetting(&this->player_custom_option);
  std::unordered_map<data::PerfRatingCategory,std::vector<int>>::~unordered_map(&this->category_rating_map);
  std::enable_shared_from_this<data::ConfigPerfItemBase>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigPerfItemBase>);
};

// Line 309: range 000000000E1891AC-000000000E1891BC
const char *__cdecl data::ConfigPerfItemBase::getTypeName(const data::ConfigPerfItemBase *const this)
{
  return "ConfigPerfItemBase";
};

// Line 310: range 000000000E1891BE-000000000E18935A
int32_t __cdecl data::ConfigPerfItemBase::getHashNum(const data::ConfigPerfItemBase *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigPerfItemBase::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigPerfItemBase",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 329: range 000000000E3F208C-000000000E3F2128
void __cdecl data::ConfigPerfItemOptionArrayInfoBase::ConfigPerfItemOptionArrayInfoBase(
        data::ConfigPerfItemOptionArrayInfoBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::ConfigPerfItemOptionArrayInfoBase>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigPerfItemOptionArrayInfoBase>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfItemOptionArrayInfoBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemOptionArrayInfoBase = v2;
  std::vector<data::ConfigGraphicsRequirement>::vector(&this->requirement_array);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 329: range 000000000E3F2676-000000000E3F278E
void __cdecl data::ConfigPerfItemOptionArrayInfoBase::ConfigPerfItemOptionArrayInfoBase(
        data::ConfigPerfItemOptionArrayInfoBase *const this,
        const data::ConfigPerfItemOptionArrayInfoBase *a2)
{
  std::enable_shared_from_this<data::ConfigPerfItemOptionArrayInfoBase> *v2; // rsi
  int (**v3)(...); // rdx
  data::ConfigGraphicsRequirementArray *p_requirement_array; // rsi
  bool is_json_loaded; // cl
  char v6; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigPerfItemOptionArrayInfoBase>;
  std::enable_shared_from_this<data::ConfigPerfItemOptionArrayInfoBase>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigPerfItemOptionArrayInfoBase>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigPerfItemOptionArrayInfoBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigPerfItemOptionArrayInfoBase = v3;
  p_requirement_array = &a2->requirement_array;
  std::vector<data::ConfigGraphicsRequirement>::vector(&this->requirement_array, &a2->requirement_array);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_requirement_array, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_requirement_array) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_requirement_array, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 337: range 000000000E3F2ADA-000000000E3F2B04
void __cdecl data::ConfigPerfItemOptionArrayInfoBase::~ConfigPerfItemOptionArrayInfoBase(
        data::ConfigPerfItemOptionArrayInfoBase *const this)
{
  data::ConfigPerfItemOptionArrayInfoBase::~ConfigPerfItemOptionArrayInfoBase(this);
  operator delete(this, 0x38uLL);
};

// Line 337: range 000000000E3F2A78-000000000E3F2AD9
void __cdecl data::ConfigPerfItemOptionArrayInfoBase::~ConfigPerfItemOptionArrayInfoBase(
        data::ConfigPerfItemOptionArrayInfoBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfItemOptionArrayInfoBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemOptionArrayInfoBase = v2;
  std::vector<data::ConfigGraphicsRequirement>::~vector(&this->requirement_array);
  std::enable_shared_from_this<data::ConfigPerfItemOptionArrayInfoBase>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigPerfItemOptionArrayInfoBase>);
};

// Line 342: range 000000000E18935C-000000000E18936C
const char *__cdecl data::ConfigPerfItemOptionArrayInfoBase::getTypeName(
        const data::ConfigPerfItemOptionArrayInfoBase *const this)
{
  return "ConfigPerfItemOptionArrayInfoBase";
};

// Line 343: range 000000000E18936E-000000000E18950A
int32_t __cdecl data::ConfigPerfItemOptionArrayInfoBase::getHashNum(
        const data::ConfigPerfItemOptionArrayInfoBase *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigPerfItemOptionArrayInfoBase::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigPerfItemOptionArrayInfoBase",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 362: range 000000000E3F2B06-000000000E3F2B63
void __cdecl data::ConfigPerfNumberItemOptionArrayInfo::ConfigPerfNumberItemOptionArrayInfo(
        data::ConfigPerfNumberItemOptionArrayInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigPerfItemOptionArrayInfoBase::ConfigPerfItemOptionArrayInfoBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfNumberItemOptionArrayInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemOptionArrayInfoBase = v2;
  std::vector<float>::vector(&this->item_option_array);
};

// Line 362: range 000000000E3F2F88-000000000E3F301E
void __cdecl data::ConfigPerfNumberItemOptionArrayInfo::ConfigPerfNumberItemOptionArrayInfo(
        data::ConfigPerfNumberItemOptionArrayInfo *const this,
        const data::ConfigPerfNumberItemOptionArrayInfo *a2)
{
  int (**v2)(...); // rdx

  data::ConfigPerfItemOptionArrayInfoBase::ConfigPerfItemOptionArrayInfoBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfNumberItemOptionArrayInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigPerfItemOptionArrayInfoBase = v2;
  std::vector<float>::vector(&this->item_option_array, &a2->item_option_array);
};

// Line 369: range 000000000E434F76-000000000E434FA0
void __cdecl data::ConfigPerfNumberItemOptionArrayInfo::~ConfigPerfNumberItemOptionArrayInfo(
        data::ConfigPerfNumberItemOptionArrayInfo *const this)
{
  data::ConfigPerfNumberItemOptionArrayInfo::~ConfigPerfNumberItemOptionArrayInfo(this);
  operator delete(this, 0x50uLL);
};

// Line 369: range 000000000E434F18-000000000E434F75
void __cdecl data::ConfigPerfNumberItemOptionArrayInfo::~ConfigPerfNumberItemOptionArrayInfo(
        data::ConfigPerfNumberItemOptionArrayInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfNumberItemOptionArrayInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemOptionArrayInfoBase = v2;
  std::vector<float>::~vector(&this->item_option_array);
  data::ConfigPerfItemOptionArrayInfoBase::~ConfigPerfItemOptionArrayInfoBase(this);
};

// Line 374: range 000000000E18950C-000000000E18951C
const char *__cdecl data::ConfigPerfNumberItemOptionArrayInfo::getTypeName(
        const data::ConfigPerfNumberItemOptionArrayInfo *const this)
{
  return "ConfigPerfNumberItemOptionArrayInfo";
};

// Line 375: range 000000000E18951E-000000000E1896BA
int32_t __cdecl data::ConfigPerfNumberItemOptionArrayInfo::getHashNum(
        const data::ConfigPerfNumberItemOptionArrayInfo *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigPerfNumberItemOptionArrayInfo::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigPerfNumberItemOptionArrayInfo",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 391: range 000000000E3F3308-000000000E3F3349
void __cdecl data::ConfigPerfNumberItemOptionArrayInfoFactory::ConfigPerfNumberItemOptionArrayInfoFactory(
        data::ConfigPerfNumberItemOptionArrayInfoFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfNumberItemOptionArrayInfoFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfNumberItemOptionArrayInfoFactory = v2;
};

// Line 406: range 000000000E3F3652-000000000E3F36E7
void __cdecl data::ConfigPerfNumberItemOverrideInfo::ConfigPerfNumberItemOverrideInfo(
        data::ConfigPerfNumberItemOverrideInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigPerfItemOverrideInfoBase::ConfigPerfItemOverrideInfoBase((data::ConfigPerfItemOverrideInfoBase *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfNumberItemOverrideInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemOverrideInfoBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->override_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->override_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->override_value, (((_BYTE)this + 60) & 7u) + 3);
  }
  this->override_value = 0.0;
};

// Line 406: range 000000000E3F3AEC-000000000E3F3BCC
void __cdecl data::ConfigPerfNumberItemOverrideInfo::ConfigPerfNumberItemOverrideInfo(
        data::ConfigPerfNumberItemOverrideInfo *const this,
        const data::ConfigPerfNumberItemOverrideInfo *a2)
{
  int (**v2)(...); // rdx
  float override_value; // xmm0_4

  data::ConfigPerfItemOverrideInfoBase::ConfigPerfItemOverrideInfoBase(
    (data::ConfigPerfItemOverrideInfoBase *const)this,
    (const data::ConfigPerfItemOverrideInfoBase *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfNumberItemOverrideInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigPerfItemOverrideInfoBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->override_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->override_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->override_value);
  }
  override_value = a2->override_value;
  if ( *(_BYTE *)(((unsigned __int64)&this->override_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->override_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->override_value, (((_BYTE)this + 60) & 7u) + 3);
  }
  this->override_value = override_value;
};

// Line 413: range 000000000E434EEC-000000000E434F16
void __cdecl data::ConfigPerfNumberItemOverrideInfo::~ConfigPerfNumberItemOverrideInfo(
        data::ConfigPerfNumberItemOverrideInfo *const this)
{
  data::ConfigPerfNumberItemOverrideInfo::~ConfigPerfNumberItemOverrideInfo(this);
  operator delete(this, 0x40uLL);
};

// Line 413: range 000000000E434E9E-000000000E434EEB
void __cdecl data::ConfigPerfNumberItemOverrideInfo::~ConfigPerfNumberItemOverrideInfo(
        data::ConfigPerfNumberItemOverrideInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfNumberItemOverrideInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemOverrideInfoBase = v2;
  data::ConfigPerfItemOverrideInfoBase::~ConfigPerfItemOverrideInfoBase((data::ConfigPerfItemOverrideInfoBase *const)this);
};

// Line 418: range 000000000E1896BC-000000000E1896CC
const char *__cdecl data::ConfigPerfNumberItemOverrideInfo::getTypeName(
        const data::ConfigPerfNumberItemOverrideInfo *const this)
{
  return "ConfigPerfNumberItemOverrideInfo";
};

// Line 419: range 000000000E1896CE-000000000E18986A
int32_t __cdecl data::ConfigPerfNumberItemOverrideInfo::getHashNum(
        const data::ConfigPerfNumberItemOverrideInfo *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigPerfNumberItemOverrideInfo::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigPerfNumberItemOverrideInfo",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 435: range 000000000E3F3EB6-000000000E3F3EF7
void __cdecl data::ConfigPerfNumberItemOverrideInfoFactory::ConfigPerfNumberItemOverrideInfoFactory(
        data::ConfigPerfNumberItemOverrideInfoFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfNumberItemOverrideInfoFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfNumberItemOverrideInfoFactory = v2;
};

// Line 450: range 000000000E3F46AC-000000000E3F472F
void __cdecl data::ConfigPerfNumberItem::ConfigPerfNumberItem(data::ConfigPerfNumberItem *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigPerfItemBase::ConfigPerfItemBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfNumberItem + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemBase = v2;
  std::unordered_map<std::string,float>::unordered_map(&this->device_spec_item);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigPerfNumberItemOptionArrayInfo>>::unordered_map(&this->item_option_map);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigPerfNumberItemOverrideInfo>>::unordered_map(&this->override_map);
};

// Line 450: range 000000000E3F4AEA-000000000E3F4BF3
void __cdecl data::ConfigPerfNumberItem::ConfigPerfNumberItem(
        data::ConfigPerfNumberItem *const this,
        const data::ConfigPerfNumberItem *a2)
{
  int (**v2)(...); // rdx

  data::ConfigPerfItemBase::ConfigPerfItemBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfNumberItem + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigPerfItemBase = v2;
  std::unordered_map<std::string,float>::unordered_map(&this->device_spec_item, &a2->device_spec_item);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigPerfNumberItemOptionArrayInfo>>::unordered_map(
    &this->item_option_map,
    &a2->item_option_map);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigPerfNumberItemOverrideInfo>>::unordered_map(
    &this->override_map,
    &a2->override_map);
};

// Line 459: range 000000000E434DEE-000000000E434E71
void __cdecl data::ConfigPerfNumberItem::~ConfigPerfNumberItem(data::ConfigPerfNumberItem *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfNumberItem + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemBase = v2;
  std::unordered_map<std::string,std::shared_ptr<data::ConfigPerfNumberItemOverrideInfo>>::~unordered_map(&this->override_map);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigPerfNumberItemOptionArrayInfo>>::~unordered_map(&this->item_option_map);
  std::unordered_map<std::string,float>::~unordered_map(&this->device_spec_item);
  data::ConfigPerfItemBase::~ConfigPerfItemBase(this);
};

// Line 459: range 000000000E434E72-000000000E434E9C
void __cdecl data::ConfigPerfNumberItem::~ConfigPerfNumberItem(data::ConfigPerfNumberItem *const this)
{
  data::ConfigPerfNumberItem::~ConfigPerfNumberItem(this);
  operator delete(this, 0x150uLL);
};

// Line 464: range 000000000E18986C-000000000E18987C
const char *__cdecl data::ConfigPerfNumberItem::getTypeName(const data::ConfigPerfNumberItem *const this)
{
  return "ConfigPerfNumberItem";
};

// Line 465: range 000000000E18987E-000000000E189A1A
int32_t __cdecl data::ConfigPerfNumberItem::getHashNum(const data::ConfigPerfNumberItem *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigPerfNumberItem::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigPerfNumberItem",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 481: range 000000000E3F4EDC-000000000E3F4F1D
void __cdecl data::ConfigPerfNumberItemFactory::ConfigPerfNumberItemFactory(
        data::ConfigPerfNumberItemFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfNumberItemFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfNumberItemFactory = v2;
};

// Line 489: range 000000000E3F525E-000000000E3F52BB
void __cdecl data::ConfigPerfNumberArrayItemOptionArrayInfo::ConfigPerfNumberArrayItemOptionArrayInfo(
        data::ConfigPerfNumberArrayItemOptionArrayInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigPerfItemOptionArrayInfoBase::ConfigPerfItemOptionArrayInfoBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfNumberArrayItemOptionArrayInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemOptionArrayInfoBase = v2;
  std::vector<std::vector<float>>::vector(&this->item_option_array);
};

// Line 496: range 000000000E434D64-000000000E434DC1
void __cdecl data::ConfigPerfNumberArrayItemOptionArrayInfo::~ConfigPerfNumberArrayItemOptionArrayInfo(
        data::ConfigPerfNumberArrayItemOptionArrayInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfNumberArrayItemOptionArrayInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemOptionArrayInfoBase = v2;
  std::vector<std::vector<float>>::~vector(&this->item_option_array);
  data::ConfigPerfItemOptionArrayInfoBase::~ConfigPerfItemOptionArrayInfoBase(this);
};

// Line 496: range 000000000E434DC2-000000000E434DEC
void __cdecl data::ConfigPerfNumberArrayItemOptionArrayInfo::~ConfigPerfNumberArrayItemOptionArrayInfo(
        data::ConfigPerfNumberArrayItemOptionArrayInfo *const this)
{
  data::ConfigPerfNumberArrayItemOptionArrayInfo::~ConfigPerfNumberArrayItemOptionArrayInfo(this);
  operator delete(this, 0x50uLL);
};

// Line 501: range 000000000E189A1C-000000000E189A2C
const char *__cdecl data::ConfigPerfNumberArrayItemOptionArrayInfo::getTypeName(
        const data::ConfigPerfNumberArrayItemOptionArrayInfo *const this)
{
  return "ConfigPerfNumberArrayItemOptionArrayInfo";
};

// Line 502: range 000000000E189A2E-000000000E189BCA
int32_t __cdecl data::ConfigPerfNumberArrayItemOptionArrayInfo::getHashNum(
        const data::ConfigPerfNumberArrayItemOptionArrayInfo *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigPerfNumberArrayItemOptionArrayInfo::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigPerfNumberArrayItemOptionArrayInfo",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 518: range 000000000E3F5A74-000000000E3F5AB5
void __cdecl data::ConfigPerfNumberArrayItemOptionArrayInfoFactory::ConfigPerfNumberArrayItemOptionArrayInfoFactory(
        data::ConfigPerfNumberArrayItemOptionArrayInfoFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfNumberArrayItemOptionArrayInfoFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfNumberArrayItemOptionArrayInfoFactory = v2;
};

// Line 533: range 000000000E3F5DBE-000000000E3F5E1B
void __cdecl data::ConfigPerfNumberArrayItemOverrideInfo::ConfigPerfNumberArrayItemOverrideInfo(
        data::ConfigPerfNumberArrayItemOverrideInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigPerfItemOverrideInfoBase::ConfigPerfItemOverrideInfoBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfNumberArrayItemOverrideInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemOverrideInfoBase = v2;
  std::vector<float>::vector(&this->override_value);
};

// Line 533: range 000000000E3F61D6-000000000E3F626C
void __cdecl data::ConfigPerfNumberArrayItemOverrideInfo::ConfigPerfNumberArrayItemOverrideInfo(
        data::ConfigPerfNumberArrayItemOverrideInfo *const this,
        const data::ConfigPerfNumberArrayItemOverrideInfo *a2)
{
  int (**v2)(...); // rdx

  data::ConfigPerfItemOverrideInfoBase::ConfigPerfItemOverrideInfoBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfNumberArrayItemOverrideInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigPerfItemOverrideInfoBase = v2;
  std::vector<float>::vector(&this->override_value, &a2->override_value);
};

// Line 540: range 000000000E434CDA-000000000E434D37
void __cdecl data::ConfigPerfNumberArrayItemOverrideInfo::~ConfigPerfNumberArrayItemOverrideInfo(
        data::ConfigPerfNumberArrayItemOverrideInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfNumberArrayItemOverrideInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemOverrideInfoBase = v2;
  std::vector<float>::~vector(&this->override_value);
  data::ConfigPerfItemOverrideInfoBase::~ConfigPerfItemOverrideInfoBase(this);
};

// Line 540: range 000000000E434D38-000000000E434D62
void __cdecl data::ConfigPerfNumberArrayItemOverrideInfo::~ConfigPerfNumberArrayItemOverrideInfo(
        data::ConfigPerfNumberArrayItemOverrideInfo *const this)
{
  data::ConfigPerfNumberArrayItemOverrideInfo::~ConfigPerfNumberArrayItemOverrideInfo(this);
  operator delete(this, 0x58uLL);
};

// Line 545: range 000000000E189BCC-000000000E189BDC
const char *__cdecl data::ConfigPerfNumberArrayItemOverrideInfo::getTypeName(
        const data::ConfigPerfNumberArrayItemOverrideInfo *const this)
{
  return "ConfigPerfNumberArrayItemOverrideInfo";
};

// Line 546: range 000000000E189BDE-000000000E189D7A
int32_t __cdecl data::ConfigPerfNumberArrayItemOverrideInfo::getHashNum(
        const data::ConfigPerfNumberArrayItemOverrideInfo *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigPerfNumberArrayItemOverrideInfo::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigPerfNumberArrayItemOverrideInfo",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 562: range 000000000E3F6556-000000000E3F6597
void __cdecl data::ConfigPerfNumberArrayItemOverrideInfoFactory::ConfigPerfNumberArrayItemOverrideInfoFactory(
        data::ConfigPerfNumberArrayItemOverrideInfoFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfNumberArrayItemOverrideInfoFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfNumberArrayItemOverrideInfoFactory = v2;
};

// Line 569: range 000000000E23332C-000000000E233455
void __cdecl data::ConfigPerfRatingLevel::ConfigPerfRatingLevel(
        data::ConfigPerfRatingLevel *const this,
        data::ConfigPerfRatingLevel *a2)
{
  int32_t tier; // ecx
  char v3; // al
  data::StringArray *p_special_case_requirment; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  data::ConfigPerfRatingLevel *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  tier = a2->tier;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->tier = tier;
  std::vector<data::ConfigGraphicsRequirement>::vector(&this->requirement_array, &v7->requirement_array);
  p_special_case_requirment = &v7->special_case_requirment;
  std::vector<std::string>::vector(&this->special_case_requirment, &v7->special_case_requirment);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_special_case_requirment, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_special_case_requirment) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_special_case_requirment, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 577: range 000000000E3F6CAE-000000000E3F6D31
void __cdecl data::ConfigPerfNumberArrayItem::ConfigPerfNumberArrayItem(data::ConfigPerfNumberArrayItem *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigPerfItemBase::ConfigPerfItemBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfNumberArrayItem + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemBase = v2;
  std::unordered_map<std::string,std::vector<float>>::unordered_map(&this->device_spec_item);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigPerfNumberArrayItemOptionArrayInfo>>::unordered_map(&this->item_option_map);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigPerfNumberArrayItemOverrideInfo>>::unordered_map(&this->override_map);
};

// Line 577: range 000000000E3F7106-000000000E3F720F
void __cdecl data::ConfigPerfNumberArrayItem::ConfigPerfNumberArrayItem(
        data::ConfigPerfNumberArrayItem *const this,
        const data::ConfigPerfNumberArrayItem *a2)
{
  int (**v2)(...); // rdx

  data::ConfigPerfItemBase::ConfigPerfItemBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfNumberArrayItem + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigPerfItemBase = v2;
  std::unordered_map<std::string,std::vector<float>>::unordered_map(&this->device_spec_item, &a2->device_spec_item);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigPerfNumberArrayItemOptionArrayInfo>>::unordered_map(
    &this->item_option_map,
    &a2->item_option_map);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigPerfNumberArrayItemOverrideInfo>>::unordered_map(
    &this->override_map,
    &a2->override_map);
};

// Line 586: range 000000000E434CAE-000000000E434CD8
void __cdecl data::ConfigPerfNumberArrayItem::~ConfigPerfNumberArrayItem(data::ConfigPerfNumberArrayItem *const this)
{
  data::ConfigPerfNumberArrayItem::~ConfigPerfNumberArrayItem(this);
  operator delete(this, 0x150uLL);
};

// Line 586: range 000000000E434C2A-000000000E434CAD
void __cdecl data::ConfigPerfNumberArrayItem::~ConfigPerfNumberArrayItem(data::ConfigPerfNumberArrayItem *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfNumberArrayItem + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemBase = v2;
  std::unordered_map<std::string,std::shared_ptr<data::ConfigPerfNumberArrayItemOverrideInfo>>::~unordered_map(&this->override_map);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigPerfNumberArrayItemOptionArrayInfo>>::~unordered_map(&this->item_option_map);
  std::unordered_map<std::string,std::vector<float>>::~unordered_map(&this->device_spec_item);
  data::ConfigPerfItemBase::~ConfigPerfItemBase(this);
};

// Line 591: range 000000000E189D7C-000000000E189D8C
const char *__cdecl data::ConfigPerfNumberArrayItem::getTypeName(const data::ConfigPerfNumberArrayItem *const this)
{
  return "ConfigPerfNumberArrayItem";
};

// Line 592: range 000000000E189D8E-000000000E189F2A
int32_t __cdecl data::ConfigPerfNumberArrayItem::getHashNum(const data::ConfigPerfNumberArrayItem *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigPerfNumberArrayItem::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigPerfNumberArrayItem",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 608: range 000000000E3F74F8-000000000E3F7539
void __cdecl data::ConfigPerfNumberArrayItemFactory::ConfigPerfNumberArrayItemFactory(
        data::ConfigPerfNumberArrayItemFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfNumberArrayItemFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfNumberArrayItemFactory = v2;
};

// Line 616: range 000000000E3F7842-000000000E3F789F
void __cdecl data::ConfigPerfStringKeyItemOptionArrayInfo::ConfigPerfStringKeyItemOptionArrayInfo(
        data::ConfigPerfStringKeyItemOptionArrayInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigPerfItemOptionArrayInfoBase::ConfigPerfItemOptionArrayInfoBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfStringKeyItemOptionArrayInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemOptionArrayInfoBase = v2;
  std::vector<std::string>::vector(&this->item_option_array);
};

// Line 616: range 000000000E3F7CC4-000000000E3F7D5A
void __cdecl data::ConfigPerfStringKeyItemOptionArrayInfo::ConfigPerfStringKeyItemOptionArrayInfo(
        data::ConfigPerfStringKeyItemOptionArrayInfo *const this,
        const data::ConfigPerfStringKeyItemOptionArrayInfo *a2)
{
  int (**v2)(...); // rdx

  data::ConfigPerfItemOptionArrayInfoBase::ConfigPerfItemOptionArrayInfoBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfStringKeyItemOptionArrayInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigPerfItemOptionArrayInfoBase = v2;
  std::vector<std::string>::vector(&this->item_option_array, &a2->item_option_array);
};

// Line 623: range 000000000E434BFE-000000000E434C28
void __cdecl data::ConfigPerfStringKeyItemOptionArrayInfo::~ConfigPerfStringKeyItemOptionArrayInfo(
        data::ConfigPerfStringKeyItemOptionArrayInfo *const this)
{
  data::ConfigPerfStringKeyItemOptionArrayInfo::~ConfigPerfStringKeyItemOptionArrayInfo(this);
  operator delete(this, 0x50uLL);
};

// Line 623: range 000000000E434BA0-000000000E434BFD
void __cdecl data::ConfigPerfStringKeyItemOptionArrayInfo::~ConfigPerfStringKeyItemOptionArrayInfo(
        data::ConfigPerfStringKeyItemOptionArrayInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfStringKeyItemOptionArrayInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemOptionArrayInfoBase = v2;
  std::vector<std::string>::~vector(&this->item_option_array);
  data::ConfigPerfItemOptionArrayInfoBase::~ConfigPerfItemOptionArrayInfoBase(this);
};

// Line 628: range 000000000E189F2C-000000000E189F3C
const char *__cdecl data::ConfigPerfStringKeyItemOptionArrayInfo::getTypeName(
        const data::ConfigPerfStringKeyItemOptionArrayInfo *const this)
{
  return "ConfigPerfStringKeyItemOptionArrayInfo";
};

// Line 629: range 000000000E189F3E-000000000E18A0DA
int32_t __cdecl data::ConfigPerfStringKeyItemOptionArrayInfo::getHashNum(
        const data::ConfigPerfStringKeyItemOptionArrayInfo *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigPerfStringKeyItemOptionArrayInfo::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigPerfStringKeyItemOptionArrayInfo",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 645: range 000000000E3F8044-000000000E3F8085
void __cdecl data::ConfigPerfStringKeyItemOptionArrayInfoFactory::ConfigPerfStringKeyItemOptionArrayInfoFactory(
        data::ConfigPerfStringKeyItemOptionArrayInfoFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfStringKeyItemOptionArrayInfoFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfStringKeyItemOptionArrayInfoFactory = v2;
};

// Line 660: range 000000000E3F838E-000000000E3F83EB
void __cdecl data::ConfigPerfStringKeyItemOverrideInfo::ConfigPerfStringKeyItemOverrideInfo(
        data::ConfigPerfStringKeyItemOverrideInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigPerfItemOverrideInfoBase::ConfigPerfItemOverrideInfoBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfStringKeyItemOverrideInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemOverrideInfoBase = v2;
  std::string::basic_string(&this->override_value);
};

// Line 660: range 000000000E3F87A0-000000000E3F8836
void __cdecl data::ConfigPerfStringKeyItemOverrideInfo::ConfigPerfStringKeyItemOverrideInfo(
        data::ConfigPerfStringKeyItemOverrideInfo *const this,
        const data::ConfigPerfStringKeyItemOverrideInfo *a2)
{
  int (**v2)(...); // rdx

  data::ConfigPerfItemOverrideInfoBase::ConfigPerfItemOverrideInfoBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfStringKeyItemOverrideInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigPerfItemOverrideInfoBase = v2;
  std::string::basic_string(&this->override_value, &a2->override_value);
};

// Line 667: range 000000000E434B16-000000000E434B73
void __cdecl data::ConfigPerfStringKeyItemOverrideInfo::~ConfigPerfStringKeyItemOverrideInfo(
        data::ConfigPerfStringKeyItemOverrideInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfStringKeyItemOverrideInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemOverrideInfoBase = v2;
  std::string::~string(&this->override_value);
  data::ConfigPerfItemOverrideInfoBase::~ConfigPerfItemOverrideInfoBase(this);
};

// Line 667: range 000000000E434B74-000000000E434B9E
void __cdecl data::ConfigPerfStringKeyItemOverrideInfo::~ConfigPerfStringKeyItemOverrideInfo(
        data::ConfigPerfStringKeyItemOverrideInfo *const this)
{
  data::ConfigPerfStringKeyItemOverrideInfo::~ConfigPerfStringKeyItemOverrideInfo(this);
  operator delete(this, 0x60uLL);
};

// Line 672: range 000000000E18A0DC-000000000E18A0EC
const char *__cdecl data::ConfigPerfStringKeyItemOverrideInfo::getTypeName(
        const data::ConfigPerfStringKeyItemOverrideInfo *const this)
{
  return "ConfigPerfStringKeyItemOverrideInfo";
};

// Line 673: range 000000000E18A0EE-000000000E18A28A
int32_t __cdecl data::ConfigPerfStringKeyItemOverrideInfo::getHashNum(
        const data::ConfigPerfStringKeyItemOverrideInfo *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigPerfStringKeyItemOverrideInfo::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigPerfStringKeyItemOverrideInfo",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 689: range 000000000E3F8B20-000000000E3F8B61
void __cdecl data::ConfigPerfStringKeyItemOverrideInfoFactory::ConfigPerfStringKeyItemOverrideInfoFactory(
        data::ConfigPerfStringKeyItemOverrideInfoFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfStringKeyItemOverrideInfoFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfStringKeyItemOverrideInfoFactory = v2;
};

// Line 704: range 000000000E3F93D2-000000000E3F9467
void __cdecl data::ConfigPerfStringKeyItem::ConfigPerfStringKeyItem(data::ConfigPerfStringKeyItem *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigPerfItemBase::ConfigPerfItemBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfStringKeyItem + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemBase = v2;
  std::unordered_map<std::string,std::string>::unordered_map(&this->device_spec_item);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigPerfStringKeyItemOptionArrayInfo>>::unordered_map(&this->item_option_map);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigPerfStringKeyItemOverrideInfo>>::unordered_map(&this->override_map);
  std::unordered_map<std::string,int>::unordered_map(&this->string_key_comparison_map);
};

// Line 704: range 000000000E3F9830-000000000E3F9970
void __cdecl data::ConfigPerfStringKeyItem::ConfigPerfStringKeyItem(
        data::ConfigPerfStringKeyItem *const this,
        const data::ConfigPerfStringKeyItem *a2)
{
  int (**v2)(...); // rdx

  data::ConfigPerfItemBase::ConfigPerfItemBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfStringKeyItem + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigPerfItemBase = v2;
  std::unordered_map<std::string,std::string>::unordered_map(&this->device_spec_item, &a2->device_spec_item);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigPerfStringKeyItemOptionArrayInfo>>::unordered_map(
    &this->item_option_map,
    &a2->item_option_map);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigPerfStringKeyItemOverrideInfo>>::unordered_map(
    &this->override_map,
    &a2->override_map);
  std::unordered_map<std::string,int>::unordered_map(&this->string_key_comparison_map, &a2->string_key_comparison_map);
};

// Line 714: range 000000000E434A54-000000000E434AE9
void __cdecl data::ConfigPerfStringKeyItem::~ConfigPerfStringKeyItem(data::ConfigPerfStringKeyItem *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfStringKeyItem + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemBase = v2;
  std::unordered_map<std::string,int>::~unordered_map(&this->string_key_comparison_map);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigPerfStringKeyItemOverrideInfo>>::~unordered_map(&this->override_map);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigPerfStringKeyItemOptionArrayInfo>>::~unordered_map(&this->item_option_map);
  std::unordered_map<std::string,std::string>::~unordered_map(&this->device_spec_item);
  data::ConfigPerfItemBase::~ConfigPerfItemBase(this);
};

// Line 714: range 000000000E434AEA-000000000E434B14
void __cdecl data::ConfigPerfStringKeyItem::~ConfigPerfStringKeyItem(data::ConfigPerfStringKeyItem *const this)
{
  data::ConfigPerfStringKeyItem::~ConfigPerfStringKeyItem(this);
  operator delete(this, 0x188uLL);
};

// Line 719: range 000000000E18A28C-000000000E18A29C
const char *__cdecl data::ConfigPerfStringKeyItem::getTypeName(const data::ConfigPerfStringKeyItem *const this)
{
  return "ConfigPerfStringKeyItem";
};

// Line 720: range 000000000E18A29E-000000000E18A43A
int32_t __cdecl data::ConfigPerfStringKeyItem::getHashNum(const data::ConfigPerfStringKeyItem *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigPerfStringKeyItem::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigPerfStringKeyItem",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 736: range 000000000E3F9C5A-000000000E3F9C9B
void __cdecl data::ConfigPerfStringKeyItemFactory::ConfigPerfStringKeyItemFactory(
        data::ConfigPerfStringKeyItemFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfStringKeyItemFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfStringKeyItemFactory = v2;
};

// Line 744: range 000000000E3F9FA4-000000000E3FA001
void __cdecl data::ConfigPerfGradeItemOptionArrayInfo::ConfigPerfGradeItemOptionArrayInfo(
        data::ConfigPerfGradeItemOptionArrayInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigPerfItemOptionArrayInfoBase::ConfigPerfItemOptionArrayInfoBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfGradeItemOptionArrayInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemOptionArrayInfoBase = v2;
  std::vector<int>::vector(&this->item_option_array);
};

// Line 744: range 000000000E3FA426-000000000E3FA4BC
void __cdecl data::ConfigPerfGradeItemOptionArrayInfo::ConfigPerfGradeItemOptionArrayInfo(
        data::ConfigPerfGradeItemOptionArrayInfo *const this,
        const data::ConfigPerfGradeItemOptionArrayInfo *a2)
{
  int (**v2)(...); // rdx

  data::ConfigPerfItemOptionArrayInfoBase::ConfigPerfItemOptionArrayInfoBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfGradeItemOptionArrayInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigPerfItemOptionArrayInfoBase = v2;
  std::vector<int>::vector(&this->item_option_array, &a2->item_option_array);
};

// Line 751: range 000000000E434A28-000000000E434A52
void __cdecl data::ConfigPerfGradeItemOptionArrayInfo::~ConfigPerfGradeItemOptionArrayInfo(
        data::ConfigPerfGradeItemOptionArrayInfo *const this)
{
  data::ConfigPerfGradeItemOptionArrayInfo::~ConfigPerfGradeItemOptionArrayInfo(this);
  operator delete(this, 0x50uLL);
};

// Line 751: range 000000000E4349CA-000000000E434A27
void __cdecl data::ConfigPerfGradeItemOptionArrayInfo::~ConfigPerfGradeItemOptionArrayInfo(
        data::ConfigPerfGradeItemOptionArrayInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfGradeItemOptionArrayInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemOptionArrayInfoBase = v2;
  std::vector<int>::~vector(&this->item_option_array);
  data::ConfigPerfItemOptionArrayInfoBase::~ConfigPerfItemOptionArrayInfoBase(this);
};

// Line 756: range 000000000E18A43C-000000000E18A44C
const char *__cdecl data::ConfigPerfGradeItemOptionArrayInfo::getTypeName(
        const data::ConfigPerfGradeItemOptionArrayInfo *const this)
{
  return "ConfigPerfGradeItemOptionArrayInfo";
};

// Line 757: range 000000000E18A44E-000000000E18A5EA
int32_t __cdecl data::ConfigPerfGradeItemOptionArrayInfo::getHashNum(
        const data::ConfigPerfGradeItemOptionArrayInfo *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigPerfGradeItemOptionArrayInfo::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigPerfGradeItemOptionArrayInfo",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 773: range 000000000E3FA7A6-000000000E3FA7E7
void __cdecl data::ConfigPerfGradeItemOptionArrayInfoFactory::ConfigPerfGradeItemOptionArrayInfoFactory(
        data::ConfigPerfGradeItemOptionArrayInfoFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfGradeItemOptionArrayInfoFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfGradeItemOptionArrayInfoFactory = v2;
};

// Line 788: range 000000000E3FAAF0-000000000E3FAB83
void __cdecl data::ConfigPerfGradeItemOverrideInfo::ConfigPerfGradeItemOverrideInfo(
        data::ConfigPerfGradeItemOverrideInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigPerfItemOverrideInfoBase::ConfigPerfItemOverrideInfoBase((data::ConfigPerfItemOverrideInfoBase *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfGradeItemOverrideInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemOverrideInfoBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->override_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->override_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->override_value, (((_BYTE)this + 60) & 7u) + 3);
  }
  this->override_value = 0;
};

// Line 788: range 000000000E3FAF88-000000000E3FB065
void __cdecl data::ConfigPerfGradeItemOverrideInfo::ConfigPerfGradeItemOverrideInfo(
        data::ConfigPerfGradeItemOverrideInfo *const this,
        const data::ConfigPerfGradeItemOverrideInfo *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  int32_t override_value; // ecx
  char v5; // dl

  data::ConfigPerfItemOverrideInfoBase::ConfigPerfItemOverrideInfoBase(
    (data::ConfigPerfItemOverrideInfoBase *const)this,
    (const data::ConfigPerfItemOverrideInfoBase *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfGradeItemOverrideInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigPerfItemOverrideInfoBase = v2;
  v3 = (((_BYTE)a2 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->override_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->override_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->override_value);
  }
  override_value = a2->override_value;
  v5 = *(_BYTE *)(((unsigned __int64)&this->override_value >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->override_value, v3);
  }
  this->override_value = override_value;
};

// Line 795: range 000000000E434950-000000000E43499D
void __cdecl data::ConfigPerfGradeItemOverrideInfo::~ConfigPerfGradeItemOverrideInfo(
        data::ConfigPerfGradeItemOverrideInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfGradeItemOverrideInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemOverrideInfoBase = v2;
  data::ConfigPerfItemOverrideInfoBase::~ConfigPerfItemOverrideInfoBase((data::ConfigPerfItemOverrideInfoBase *const)this);
};

// Line 795: range 000000000E43499E-000000000E4349C8
void __cdecl data::ConfigPerfGradeItemOverrideInfo::~ConfigPerfGradeItemOverrideInfo(
        data::ConfigPerfGradeItemOverrideInfo *const this)
{
  data::ConfigPerfGradeItemOverrideInfo::~ConfigPerfGradeItemOverrideInfo(this);
  operator delete(this, 0x40uLL);
};

// Line 800: range 000000000E18A5EC-000000000E18A5FC
const char *__cdecl data::ConfigPerfGradeItemOverrideInfo::getTypeName(
        const data::ConfigPerfGradeItemOverrideInfo *const this)
{
  return "ConfigPerfGradeItemOverrideInfo";
};

// Line 801: range 000000000E18A5FE-000000000E18A79A
int32_t __cdecl data::ConfigPerfGradeItemOverrideInfo::getHashNum(
        const data::ConfigPerfGradeItemOverrideInfo *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigPerfGradeItemOverrideInfo::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigPerfGradeItemOverrideInfo",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 817: range 000000000E3FB34E-000000000E3FB38F
void __cdecl data::ConfigPerfGradeItemOverrideInfoFactory::ConfigPerfGradeItemOverrideInfoFactory(
        data::ConfigPerfGradeItemOverrideInfoFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfGradeItemOverrideInfoFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfGradeItemOverrideInfoFactory = v2;
};

// Line 832: range 000000000E3FB94C-000000000E3FB9CF
void __cdecl data::ConfigPerfGradeItem::ConfigPerfGradeItem(data::ConfigPerfGradeItem *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigPerfItemBase::ConfigPerfItemBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfGradeItem + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemBase = v2;
  std::unordered_map<std::string,int>::unordered_map(&this->device_spec_item);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigPerfGradeItemOptionArrayInfo>>::unordered_map(&this->item_option_map);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigPerfGradeItemOverrideInfo>>::unordered_map(&this->override_map);
};

// Line 832: range 000000000E3FBD8A-000000000E3FBE93
void __cdecl data::ConfigPerfGradeItem::ConfigPerfGradeItem(
        data::ConfigPerfGradeItem *const this,
        const data::ConfigPerfGradeItem *a2)
{
  int (**v2)(...); // rdx

  data::ConfigPerfItemBase::ConfigPerfItemBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfGradeItem + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigPerfItemBase = v2;
  std::unordered_map<std::string,int>::unordered_map(&this->device_spec_item, &a2->device_spec_item);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigPerfGradeItemOptionArrayInfo>>::unordered_map(
    &this->item_option_map,
    &a2->item_option_map);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigPerfGradeItemOverrideInfo>>::unordered_map(
    &this->override_map,
    &a2->override_map);
};

// Line 841: range 000000000E4348A0-000000000E434923
void __cdecl data::ConfigPerfGradeItem::~ConfigPerfGradeItem(data::ConfigPerfGradeItem *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfGradeItem + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemBase = v2;
  std::unordered_map<std::string,std::shared_ptr<data::ConfigPerfGradeItemOverrideInfo>>::~unordered_map(&this->override_map);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigPerfGradeItemOptionArrayInfo>>::~unordered_map(&this->item_option_map);
  std::unordered_map<std::string,int>::~unordered_map(&this->device_spec_item);
  data::ConfigPerfItemBase::~ConfigPerfItemBase(this);
};

// Line 841: range 000000000E434924-000000000E43494E
void __cdecl data::ConfigPerfGradeItem::~ConfigPerfGradeItem(data::ConfigPerfGradeItem *const this)
{
  data::ConfigPerfGradeItem::~ConfigPerfGradeItem(this);
  operator delete(this, 0x150uLL);
};

// Line 846: range 000000000E18A79C-000000000E18A7AC
const char *__cdecl data::ConfigPerfGradeItem::getTypeName(const data::ConfigPerfGradeItem *const this)
{
  return "ConfigPerfGradeItem";
};

// Line 847: range 000000000E18A7AE-000000000E18A94A
int32_t __cdecl data::ConfigPerfGradeItem::getHashNum(const data::ConfigPerfGradeItem *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigPerfGradeItem::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigPerfGradeItem",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 863: range 000000000E3FC17C-000000000E3FC1BD
void __cdecl data::ConfigPerfGradeItemFactory::ConfigPerfGradeItemFactory(data::ConfigPerfGradeItemFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfGradeItemFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfGradeItemFactory = v2;
};

// Line 871: range 000000000E3FC4C6-000000000E3FC523
void __cdecl data::ConfigPerfBoolItemOptionArrayInfo::ConfigPerfBoolItemOptionArrayInfo(
        data::ConfigPerfBoolItemOptionArrayInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigPerfItemOptionArrayInfoBase::ConfigPerfItemOptionArrayInfoBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfBoolItemOptionArrayInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemOptionArrayInfoBase = v2;
  std::vector<bool>::vector(&this->item_option_array);
};

// Line 871: range 000000000E3FC8D8-000000000E3FC96E
void __cdecl data::ConfigPerfBoolItemOptionArrayInfo::ConfigPerfBoolItemOptionArrayInfo(
        data::ConfigPerfBoolItemOptionArrayInfo *const this,
        const data::ConfigPerfBoolItemOptionArrayInfo *a2)
{
  int (**v2)(...); // rdx

  data::ConfigPerfItemOptionArrayInfoBase::ConfigPerfItemOptionArrayInfoBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfBoolItemOptionArrayInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigPerfItemOptionArrayInfoBase = v2;
  std::vector<bool>::vector(&this->item_option_array, &a2->item_option_array);
};

// Line 878: range 000000000E434874-000000000E43489E
void __cdecl data::ConfigPerfBoolItemOptionArrayInfo::~ConfigPerfBoolItemOptionArrayInfo(
        data::ConfigPerfBoolItemOptionArrayInfo *const this)
{
  data::ConfigPerfBoolItemOptionArrayInfo::~ConfigPerfBoolItemOptionArrayInfo(this);
  operator delete(this, 0x60uLL);
};

// Line 878: range 000000000E434816-000000000E434873
void __cdecl data::ConfigPerfBoolItemOptionArrayInfo::~ConfigPerfBoolItemOptionArrayInfo(
        data::ConfigPerfBoolItemOptionArrayInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfBoolItemOptionArrayInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemOptionArrayInfoBase = v2;
  std::vector<bool>::~vector(&this->item_option_array);
  data::ConfigPerfItemOptionArrayInfoBase::~ConfigPerfItemOptionArrayInfoBase(this);
};

// Line 883: range 000000000E18A94C-000000000E18A95C
const char *__cdecl data::ConfigPerfBoolItemOptionArrayInfo::getTypeName(
        const data::ConfigPerfBoolItemOptionArrayInfo *const this)
{
  return "ConfigPerfBoolItemOptionArrayInfo";
};

// Line 884: range 000000000E18A95E-000000000E18AAFA
int32_t __cdecl data::ConfigPerfBoolItemOptionArrayInfo::getHashNum(
        const data::ConfigPerfBoolItemOptionArrayInfo *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigPerfBoolItemOptionArrayInfo::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigPerfBoolItemOptionArrayInfo",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 900: range 000000000E3FCC58-000000000E3FCC99
void __cdecl data::ConfigPerfBoolItemOptionArrayInfoFactory::ConfigPerfBoolItemOptionArrayInfoFactory(
        data::ConfigPerfBoolItemOptionArrayInfoFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfBoolItemOptionArrayInfoFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfBoolItemOptionArrayInfoFactory = v2;
};

// Line 915: range 000000000E3FCFA2-000000000E3FD02F
void __cdecl data::ConfigPerfBoolItemOverrideInfo::ConfigPerfBoolItemOverrideInfo(
        data::ConfigPerfBoolItemOverrideInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigPerfItemOverrideInfoBase::ConfigPerfItemOverrideInfoBase((data::ConfigPerfItemOverrideInfoBase *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfBoolItemOverrideInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemOverrideInfoBase = v2;
  v3 = ((_BYTE)this + 57) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->override_value >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->override_value >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->override_value, v3, v4);
  this->override_value = 0;
};

// Line 915: range 000000000E3FD434-000000000E3FD50C
void __cdecl data::ConfigPerfBoolItemOverrideInfo::ConfigPerfBoolItemOverrideInfo(
        data::ConfigPerfBoolItemOverrideInfo *const this,
        const data::ConfigPerfBoolItemOverrideInfo *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool override_value; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigPerfItemOverrideInfoBase::ConfigPerfItemOverrideInfoBase(
    (data::ConfigPerfItemOverrideInfoBase *const)this,
    (const data::ConfigPerfItemOverrideInfoBase *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfBoolItemOverrideInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigPerfItemOverrideInfoBase = v2;
  v3 = ((_BYTE)a2 + 57) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->override_value >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->override_value >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->override_value, v3, v4);
  override_value = a2->override_value;
  v6 = *(_BYTE *)(((unsigned __int64)&this->override_value >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 57) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->override_value, v3, v7);
  this->override_value = override_value;
};

// Line 922: range 000000000E4347EA-000000000E434814
void __cdecl data::ConfigPerfBoolItemOverrideInfo::~ConfigPerfBoolItemOverrideInfo(
        data::ConfigPerfBoolItemOverrideInfo *const this)
{
  data::ConfigPerfBoolItemOverrideInfo::~ConfigPerfBoolItemOverrideInfo(this);
  operator delete(this, 0x40uLL);
};

// Line 922: range 000000000E43479C-000000000E4347E9
void __cdecl data::ConfigPerfBoolItemOverrideInfo::~ConfigPerfBoolItemOverrideInfo(
        data::ConfigPerfBoolItemOverrideInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfBoolItemOverrideInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemOverrideInfoBase = v2;
  data::ConfigPerfItemOverrideInfoBase::~ConfigPerfItemOverrideInfoBase((data::ConfigPerfItemOverrideInfoBase *const)this);
};

// Line 927: range 000000000E18AAFC-000000000E18AB0C
const char *__cdecl data::ConfigPerfBoolItemOverrideInfo::getTypeName(
        const data::ConfigPerfBoolItemOverrideInfo *const this)
{
  return "ConfigPerfBoolItemOverrideInfo";
};

// Line 928: range 000000000E18AB0E-000000000E18ACAA
int32_t __cdecl data::ConfigPerfBoolItemOverrideInfo::getHashNum(
        const data::ConfigPerfBoolItemOverrideInfo *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigPerfBoolItemOverrideInfo::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigPerfBoolItemOverrideInfo",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 944: range 000000000E3FD7F6-000000000E3FD837
void __cdecl data::ConfigPerfBoolItemOverrideInfoFactory::ConfigPerfBoolItemOverrideInfoFactory(
        data::ConfigPerfBoolItemOverrideInfoFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfBoolItemOverrideInfoFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfBoolItemOverrideInfoFactory = v2;
};

// Line 959: range 000000000E3FDF4E-000000000E3FDFD1
void __cdecl data::ConfigPerfBoolItem::ConfigPerfBoolItem(data::ConfigPerfBoolItem *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigPerfItemBase::ConfigPerfItemBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfBoolItem + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemBase = v2;
  std::unordered_map<std::string,bool>::unordered_map(&this->device_spec_item);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigPerfBoolItemOptionArrayInfo>>::unordered_map(&this->item_option_map);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigPerfBoolItemOverrideInfo>>::unordered_map(&this->override_map);
};

// Line 959: range 000000000E3FE3A6-000000000E3FE4AF
void __cdecl data::ConfigPerfBoolItem::ConfigPerfBoolItem(
        data::ConfigPerfBoolItem *const this,
        const data::ConfigPerfBoolItem *a2)
{
  int (**v2)(...); // rdx

  data::ConfigPerfItemBase::ConfigPerfItemBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfBoolItem + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigPerfItemBase = v2;
  std::unordered_map<std::string,bool>::unordered_map(&this->device_spec_item, &a2->device_spec_item);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigPerfBoolItemOptionArrayInfo>>::unordered_map(
    &this->item_option_map,
    &a2->item_option_map);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigPerfBoolItemOverrideInfo>>::unordered_map(
    &this->override_map,
    &a2->override_map);
};

// Line 968: range 000000000E4346EC-000000000E43476F
void __cdecl data::ConfigPerfBoolItem::~ConfigPerfBoolItem(data::ConfigPerfBoolItem *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfBoolItem + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemBase = v2;
  std::unordered_map<std::string,std::shared_ptr<data::ConfigPerfBoolItemOverrideInfo>>::~unordered_map(&this->override_map);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigPerfBoolItemOptionArrayInfo>>::~unordered_map(&this->item_option_map);
  std::unordered_map<std::string,bool>::~unordered_map(&this->device_spec_item);
  data::ConfigPerfItemBase::~ConfigPerfItemBase(this);
};

// Line 968: range 000000000E434770-000000000E43479A
void __cdecl data::ConfigPerfBoolItem::~ConfigPerfBoolItem(data::ConfigPerfBoolItem *const this)
{
  data::ConfigPerfBoolItem::~ConfigPerfBoolItem(this);
  operator delete(this, 0x150uLL);
};

// Line 973: range 000000000E18ACAC-000000000E18ACBC
const char *__cdecl data::ConfigPerfBoolItem::getTypeName(const data::ConfigPerfBoolItem *const this)
{
  return "ConfigPerfBoolItem";
};

// Line 974: range 000000000E18ACBE-000000000E18AE5A
int32_t __cdecl data::ConfigPerfBoolItem::getHashNum(const data::ConfigPerfBoolItem *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigPerfBoolItem::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigPerfBoolItem",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 990: range 000000000E3FE798-000000000E3FE7D9
void __cdecl data::ConfigPerfBoolItemFactory::ConfigPerfBoolItemFactory(data::ConfigPerfBoolItemFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfBoolItemFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfBoolItemFactory = v2;
};

// Line 998: range 000000000E3FEAE2-000000000E3FEB4F
void __cdecl data::ConfigPerfCombineItemOptionArrayInfo::ConfigPerfCombineItemOptionArrayInfo(
        data::ConfigPerfCombineItemOptionArrayInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigPerfItemOptionArrayInfoBase::ConfigPerfItemOptionArrayInfoBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfCombineItemOptionArrayInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemOptionArrayInfoBase = v2;
  std::vector<std::string>::vector(&this->included_options);
  std::vector<std::vector<unsigned int>>::vector(&this->item_option_array);
};

// Line 998: range 000000000E3FEF04-000000000E3FEFCA
void __cdecl data::ConfigPerfCombineItemOptionArrayInfo::ConfigPerfCombineItemOptionArrayInfo(
        data::ConfigPerfCombineItemOptionArrayInfo *const this,
        const data::ConfigPerfCombineItemOptionArrayInfo *a2)
{
  int (**v2)(...); // rdx

  data::ConfigPerfItemOptionArrayInfoBase::ConfigPerfItemOptionArrayInfoBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfCombineItemOptionArrayInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigPerfItemOptionArrayInfoBase = v2;
  std::vector<std::string>::vector(&this->included_options, &a2->included_options);
  std::vector<std::vector<unsigned int>>::vector(&this->item_option_array, &a2->item_option_array);
};

// Line 1006: range 000000000E434652-000000000E4346BF
void __cdecl data::ConfigPerfCombineItemOptionArrayInfo::~ConfigPerfCombineItemOptionArrayInfo(
        data::ConfigPerfCombineItemOptionArrayInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfCombineItemOptionArrayInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemOptionArrayInfoBase = v2;
  std::vector<std::vector<unsigned int>>::~vector(&this->item_option_array);
  std::vector<std::string>::~vector(&this->included_options);
  data::ConfigPerfItemOptionArrayInfoBase::~ConfigPerfItemOptionArrayInfoBase(this);
};

// Line 1006: range 000000000E4346C0-000000000E4346EA
void __cdecl data::ConfigPerfCombineItemOptionArrayInfo::~ConfigPerfCombineItemOptionArrayInfo(
        data::ConfigPerfCombineItemOptionArrayInfo *const this)
{
  data::ConfigPerfCombineItemOptionArrayInfo::~ConfigPerfCombineItemOptionArrayInfo(this);
  operator delete(this, 0x68uLL);
};

// Line 1011: range 000000000E18AE5C-000000000E18AE6C
const char *__cdecl data::ConfigPerfCombineItemOptionArrayInfo::getTypeName(
        const data::ConfigPerfCombineItemOptionArrayInfo *const this)
{
  return "ConfigPerfCombineItemOptionArrayInfo";
};

// Line 1012: range 000000000E18AE6E-000000000E18B00A
int32_t __cdecl data::ConfigPerfCombineItemOptionArrayInfo::getHashNum(
        const data::ConfigPerfCombineItemOptionArrayInfo *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigPerfCombineItemOptionArrayInfo::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigPerfCombineItemOptionArrayInfo",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1028: range 000000000E3FF2B4-000000000E3FF2F5
void __cdecl data::ConfigPerfCombineItemOptionArrayInfoFactory::ConfigPerfCombineItemOptionArrayInfoFactory(
        data::ConfigPerfCombineItemOptionArrayInfoFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfCombineItemOptionArrayInfoFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfCombineItemOptionArrayInfoFactory = v2;
};

// Line 1043: range 000000000E3FF758-000000000E3FF7B7
void __cdecl data::ConfigPerfCombinedItem::ConfigPerfCombinedItem(data::ConfigPerfCombinedItem *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigPerfItemBase::ConfigPerfItemBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfCombinedItem + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemBase = v2;
  std::unordered_map<std::string,std::shared_ptr<data::ConfigPerfCombineItemOptionArrayInfo>>::unordered_map(&this->item_option_map);
};

// Line 1043: range 000000000E3FFB6C-000000000E3FFC07
void __cdecl data::ConfigPerfCombinedItem::ConfigPerfCombinedItem(
        data::ConfigPerfCombinedItem *const this,
        const data::ConfigPerfCombinedItem *a2)
{
  int (**v2)(...); // rdx

  data::ConfigPerfItemBase::ConfigPerfItemBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfCombinedItem + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigPerfItemBase = v2;
  std::unordered_map<std::string,std::shared_ptr<data::ConfigPerfCombineItemOptionArrayInfo>>::unordered_map(
    &this->item_option_map,
    &a2->item_option_map);
};

// Line 1050: range 000000000E4345C6-000000000E434625
void __cdecl data::ConfigPerfCombinedItem::~ConfigPerfCombinedItem(data::ConfigPerfCombinedItem *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfCombinedItem + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfItemBase = v2;
  std::unordered_map<std::string,std::shared_ptr<data::ConfigPerfCombineItemOptionArrayInfo>>::~unordered_map(&this->item_option_map);
  data::ConfigPerfItemBase::~ConfigPerfItemBase(this);
};

// Line 1050: range 000000000E434626-000000000E434650
void __cdecl data::ConfigPerfCombinedItem::~ConfigPerfCombinedItem(data::ConfigPerfCombinedItem *const this)
{
  data::ConfigPerfCombinedItem::~ConfigPerfCombinedItem(this);
  operator delete(this, 0xE0uLL);
};

// Line 1055: range 000000000E18B00C-000000000E18B01C
const char *__cdecl data::ConfigPerfCombinedItem::getTypeName(const data::ConfigPerfCombinedItem *const this)
{
  return "ConfigPerfCombinedItem";
};

// Line 1056: range 000000000E18B01E-000000000E18B1BA
int32_t __cdecl data::ConfigPerfCombinedItem::getHashNum(const data::ConfigPerfCombinedItem *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigPerfCombinedItem::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigPerfCombinedItem",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1072: range 000000000E3FFEF0-000000000E3FFF31
void __cdecl data::ConfigPerfCombinedItemFactory::ConfigPerfCombinedItemFactory(
        data::ConfigPerfCombinedItemFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPerfCombinedItemFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPerfCombinedItemFactory = v2;
};
