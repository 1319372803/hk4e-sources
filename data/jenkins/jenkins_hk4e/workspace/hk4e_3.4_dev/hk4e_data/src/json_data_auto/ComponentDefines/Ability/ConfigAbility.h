// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Ability/ConfigAbility.h

// Line 23: range 0000000012703CC8-0000000012703F9E
void __cdecl data::ConfigAbility::ConfigAbility(data::ConfigAbility *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::ConfigAbility>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigAbility>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAbility + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbility = v2;
  std::string::basic_string(&this->ability_name);
  std::vector<std::shared_ptr<data::ConfigAbilityMixin>>::vector(&this->ability_mixins);
  std::unordered_map<std::string,data::DynamicArgument>::unordered_map(&this->ability_specials);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigAbilityModifier>>::unordered_map(&this->modifiers);
  if ( *(_WORD *)(((unsigned __int64)&this->default_modifier >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigAbilityModifier>();
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_added);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_removed);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_ability_start);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_kill);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_field_enter);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_field_exit);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_attach);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_detach);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_avatar_in);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_avatar_out);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_vehicle_in);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_vehicle_out);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_trigger_avatar_ray);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_zone_enter);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_zone_exit);
  if ( *(char *)(((unsigned __int64)&this->is_dynamic_ability >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_dynamic_ability, v1, &this->is_dynamic_ability);
  this->is_dynamic_ability = 0;
  std::unordered_map<std::string,data::ConfigAbilityPropertyEntry>::unordered_map(&this->ability_defined_properties);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 23: range 000000000F7C9A76-000000000F7CA052
void __cdecl data::ConfigAbility::ConfigAbility(data::ConfigAbility *const this, const data::ConfigAbility *a2)
{
  std::enable_shared_from_this<data::ConfigAbility> *v2; // rsi
  int (**v3)(...); // rdx
  data::ConfigAbilityActionArray *p_on_zone_exit; // rsi
  bool is_dynamic_ability; // cl
  char v6; // al
  data::ConfigAbilityPropertyEntryMap *p_ability_defined_properties; // rsi
  bool is_json_loaded; // cl
  char v9; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigAbility>;
  std::enable_shared_from_this<data::ConfigAbility>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigAbility>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigAbility + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigAbility = v3;
  std::string::basic_string(&this->ability_name, &a2->ability_name);
  std::vector<std::shared_ptr<data::ConfigAbilityMixin>>::vector(&this->ability_mixins, &a2->ability_mixins);
  std::unordered_map<std::string,data::DynamicArgument>::unordered_map(&this->ability_specials, &a2->ability_specials);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigAbilityModifier>>::unordered_map(
    &this->modifiers,
    &a2->modifiers);
  std::shared_ptr<data::ConfigAbilityModifier>::shared_ptr(&this->default_modifier, &a2->default_modifier);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_added, &a2->on_added);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_removed, &a2->on_removed);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_ability_start, &a2->on_ability_start);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_kill, &a2->on_kill);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_field_enter, &a2->on_field_enter);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_field_exit, &a2->on_field_exit);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_attach, &a2->on_attach);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_detach, &a2->on_detach);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_avatar_in, &a2->on_avatar_in);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_avatar_out, &a2->on_avatar_out);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_vehicle_in, &a2->on_vehicle_in);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_vehicle_out, &a2->on_vehicle_out);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(
    &this->on_trigger_avatar_ray,
    &a2->on_trigger_avatar_ray);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_zone_enter, &a2->on_zone_enter);
  p_on_zone_exit = &a2->on_zone_exit;
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_zone_exit, &a2->on_zone_exit);
  if ( *(char *)(((unsigned __int64)&a2->is_dynamic_ability >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_dynamic_ability, p_on_zone_exit, &a2->is_dynamic_ability);
  is_dynamic_ability = a2->is_dynamic_ability;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_dynamic_ability >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_on_zone_exit) = v6 != 0;
    __asan_report_store1(&this->is_dynamic_ability, p_on_zone_exit, &this->is_dynamic_ability);
  }
  this->is_dynamic_ability = is_dynamic_ability;
  p_ability_defined_properties = &a2->ability_defined_properties;
  std::unordered_map<std::string,data::ConfigAbilityPropertyEntry>::unordered_map(
    &this->ability_defined_properties,
    &a2->ability_defined_properties);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_ability_defined_properties, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(p_ability_defined_properties) = v9 != 0;
    __asan_report_store1(&this->is_json_loaded, p_ability_defined_properties, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 52: range 000000000F823F42-000000000F824107
void __cdecl data::ConfigAbility::~ConfigAbility(data::ConfigAbility *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAbility + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbility = v2;
  std::unordered_map<std::string,data::ConfigAbilityPropertyEntry>::~unordered_map(&this->ability_defined_properties);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::~vector(&this->on_zone_exit);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::~vector(&this->on_zone_enter);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::~vector(&this->on_trigger_avatar_ray);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::~vector(&this->on_vehicle_out);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::~vector(&this->on_vehicle_in);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::~vector(&this->on_avatar_out);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::~vector(&this->on_avatar_in);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::~vector(&this->on_detach);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::~vector(&this->on_attach);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::~vector(&this->on_field_exit);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::~vector(&this->on_field_enter);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::~vector(&this->on_kill);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::~vector(&this->on_ability_start);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::~vector(&this->on_removed);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::~vector(&this->on_added);
  std::shared_ptr<data::ConfigAbilityModifier>::~shared_ptr(&this->default_modifier);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigAbilityModifier>>::~unordered_map(&this->modifiers);
  std::unordered_map<std::string,data::DynamicArgument>::~unordered_map(&this->ability_specials);
  std::vector<std::shared_ptr<data::ConfigAbilityMixin>>::~vector(&this->ability_mixins);
  std::string::~string(&this->ability_name);
  std::enable_shared_from_this<data::ConfigAbility>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigAbility>);
};

// Line 52: range 000000000F824108-000000000F824132
void __cdecl data::ConfigAbility::~ConfigAbility(data::ConfigAbility *const this)
{
  data::ConfigAbility::~ConfigAbility(this);
  operator delete(this, 0x280uLL);
};

// Line 57: range 000000001215E7F2-000000001215E802
const char *__cdecl data::ConfigAbility::getTypeName(const data::ConfigAbility *const this)
{
  return "ConfigAbility";
};

// Line 58: range 000000001215E804-000000001215E9A0
int32_t __cdecl data::ConfigAbility::getHashNum(const data::ConfigAbility *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigAbility::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAbility",
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

// Line 65: range 000000001215E9A2-000000001215E9AC
void __cdecl data::ConfigAbility::onLoaded(data::ConfigAbility *const this)
{
  ;
};

// Line 66: range 000000001215E9AE-000000001215E9BC
int32_t __cdecl data::ConfigAbility::getHashCode(data::ConfigAbility *const this)
{
  return 0;
};

// Line 67: range 000000001215E9F6-000000001215EA96
std::vector<std::shared_ptr<data::BaseActionContainer>> *__cdecl data::ConfigAbility::getInvokeSites(
        std::vector<std::shared_ptr<data::BaseActionContainer>> *retstr,
        data::ConfigAbility *const this)
{
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 24LL);
  }
  retstr->_M_impl._M_start = 0LL;
  retstr->_M_impl._M_finish = 0LL;
  retstr->_M_impl._M_end_of_storage = 0LL;
  std::vector<std::shared_ptr<data::BaseActionContainer>>::vector(retstr);
  return retstr;
};

// Line 87: range 0000000012704792-00000000127047DF
void __cdecl data::ConfigDummyAbility::ConfigDummyAbility(data::ConfigDummyAbility *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbility::ConfigAbility(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDummyAbility + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbility = v2;
};

// Line 87: range 0000000012704C30-0000000012704C88
void __cdecl data::ConfigDummyAbility::ConfigDummyAbility(
        data::ConfigDummyAbility *const this,
        const data::ConfigDummyAbility *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAbility::ConfigAbility(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDummyAbility + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbility = v2;
};

// Line 93: range 000000001274D59E-000000001274D5C8
void __cdecl data::ConfigDummyAbility::~ConfigDummyAbility(data::ConfigDummyAbility *const this)
{
  data::ConfigDummyAbility::~ConfigDummyAbility(this);
  operator delete(this, 0x280uLL);
};

// Line 93: range 000000001274D550-000000001274D59D
void __cdecl data::ConfigDummyAbility::~ConfigDummyAbility(data::ConfigDummyAbility *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDummyAbility + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbility = v2;
  data::ConfigAbility::~ConfigAbility(this);
};

// Line 98: range 000000001215EA98-000000001215EAA8
const char *__cdecl data::ConfigDummyAbility::getTypeName(const data::ConfigDummyAbility *const this)
{
  return "ConfigDummyAbility";
};

// Line 99: range 000000001215EAAA-000000001215EC46
int32_t __cdecl data::ConfigDummyAbility::getHashNum(const data::ConfigDummyAbility *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigDummyAbility::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigDummyAbility",
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

// Line 115: range 0000000012704F72-0000000012704FB3
void __cdecl data::ConfigDummyAbilityFactory::ConfigDummyAbilityFactory(data::ConfigDummyAbilityFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDummyAbilityFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDummyAbilityFactory = v2;
};

// Line 142: range 000000001215F13C-000000001215F1CB
void __cdecl data::ConfigAbilitySystem::ConfigAbilitySystem(data::ConfigAbilitySystem *const this)
{
  __int64 v1; // rsi

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this, v1, this);
  this->should_pre_active = 0;
  std::vector<std::shared_ptr<data::ConfigAbilityTask>>::vector(&this->tasks);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 142: range 0000000012342936-0000000012342A45
void __cdecl data::ConfigAbilitySystem::ConfigAbilitySystem(
        data::ConfigAbilitySystem *const this,
        data::ConfigAbilitySystem *a2)
{
  bool should_pre_active; // cl
  char v3; // al
  data::AbilityTaskArray *p_tasks; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  data::ConfigAbilitySystem *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(char *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(a2, a2, a2);
  should_pre_active = a2->should_pre_active;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(this, a2, this);
  }
  this->should_pre_active = should_pre_active;
  p_tasks = &v7->tasks;
  std::vector<std::shared_ptr<data::ConfigAbilityTask>>::vector(&this->tasks, &v7->tasks);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_tasks, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_tasks) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_tasks, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 142: range 000000001215F1CC-000000001215F1EA
void __cdecl data::ConfigAbilitySystem::~ConfigAbilitySystem(data::ConfigAbilitySystem *const this)
{
  std::vector<std::shared_ptr<data::ConfigAbilityTask>>::~vector(&this->tasks);
};
