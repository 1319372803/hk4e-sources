// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Talent/ConfigTalentMixin.h

// Line 19: range 00000000142900F4-0000000014290180
void __cdecl data::ConfigTalentMixin::ConfigTalentMixin(data::ConfigTalentMixin *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::ConfigTalentMixin>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigTalentMixin>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigTalentMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigTalentMixin = v2;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 19: range 000000001429064A-0000000014290720
void __cdecl data::ConfigTalentMixin::ConfigTalentMixin(
        data::ConfigTalentMixin *const this,
        const data::ConfigTalentMixin *a2)
{
  std::enable_shared_from_this<data::ConfigTalentMixin> *v2; // rsi
  int (**v3)(...); // rdx
  bool is_json_loaded; // cl
  char v5; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigTalentMixin>;
  std::enable_shared_from_this<data::ConfigTalentMixin>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigTalentMixin>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigTalentMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigTalentMixin = v3;
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, v2, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 26: range 0000000014290B90-0000000014290BE1
void __cdecl data::ConfigTalentMixin::~ConfigTalentMixin(data::ConfigTalentMixin *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigTalentMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigTalentMixin = v2;
  std::enable_shared_from_this<data::ConfigTalentMixin>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigTalentMixin>);
};

// Line 26: range 0000000014290BE2-0000000014290C0C
void __cdecl data::ConfigTalentMixin::~ConfigTalentMixin(data::ConfigTalentMixin *const this)
{
  data::ConfigTalentMixin::~ConfigTalentMixin(this);
  operator delete(this, 0x20uLL);
};

// Line 31: range 0000000013BCB9C4-0000000013BCB9D4
const char *__cdecl data::ConfigTalentMixin::getTypeName(const data::ConfigTalentMixin *const this)
{
  return "ConfigTalentMixin";
};

// Line 32: range 0000000013BCB9D6-0000000013BCBB72
int32_t __cdecl data::ConfigTalentMixin::getHashNum(const data::ConfigTalentMixin *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigTalentMixin::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigTalentMixin",
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

// Line 39: range 0000000013BCBB74-0000000013BCBB9E
BaseTalentMixinPtr __cdecl data::ConfigTalentMixin::createTalentMixin(
        data::ConfigTalentMixin *const this,
        TalentParam *param)
{
  BaseTalentMixinPtr result; // rax

  std::shared_ptr<BaseTalentMixin>::shared_ptr((std::shared_ptr<BaseTalentMixin> *const)this, 0LL);
  result._M_ptr = (std::__shared_ptr<BaseTalentMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 66: range 0000000014290C0E-0000000014290C6B
void __cdecl data::AddAbility::AddAbility(data::AddAbility *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigTalentMixin::ConfigTalentMixin(this);
  v2 = (int (**)(...))(&`vtable for'data::AddAbility + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigTalentMixin = v2;
  std::string::basic_string(&this->ability_name);
};

// Line 66: range 0000000014291070-0000000014291106
void __cdecl data::AddAbility::AddAbility(data::AddAbility *const this, const data::AddAbility *a2)
{
  int (**v2)(...); // rdx

  data::ConfigTalentMixin::ConfigTalentMixin(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::AddAbility + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigTalentMixin = v2;
  std::string::basic_string(&this->ability_name, &a2->ability_name);
};

// Line 73: range 00000000142A0F26-00000000142A0F50
void __cdecl data::AddAbility::~AddAbility(data::AddAbility *const this)
{
  data::AddAbility::~AddAbility(this);
  operator delete(this, 0x40uLL);
};

// Line 73: range 00000000142A0EC8-00000000142A0F25
void __cdecl data::AddAbility::~AddAbility(data::AddAbility *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AddAbility + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigTalentMixin = v2;
  std::string::~string(&this->ability_name);
  data::ConfigTalentMixin::~ConfigTalentMixin(this);
};

// Line 78: range 0000000013BCBBA0-0000000013BCBBB0
const char *__cdecl data::AddAbility::getTypeName(const data::AddAbility *const this)
{
  return "AddAbility";
};

// Line 79: range 0000000013BCBBB2-0000000013BCBD4E
int32_t __cdecl data::AddAbility::getHashNum(const data::AddAbility *const this)
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
  *(_QWORD *)(v1 + 16) = data::AddAbility::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "AddAbility",
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

// Line 95: range 00000000142913F0-0000000014291431
void __cdecl data::AddAbilityFactory::AddAbilityFactory(data::AddAbilityFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AddAbilityFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AddAbilityFactory = v2;
};

// Line 103: range 0000000014291790-000000001429181D
void __cdecl data::ModifyAbility::ModifyAbility(data::ModifyAbility *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigTalentMixin::ConfigTalentMixin(this);
  v2 = (int (**)(...))(&`vtable for'data::ModifyAbility + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigTalentMixin = v2;
  std::string::basic_string(&this->ability_name);
  std::string::basic_string(&this->param_special);
  data::DynamicArgument::DynamicArgument(&this->param_delta);
  data::DynamicArgument::DynamicArgument(&this->param_ratio);
};

// Line 103: range 0000000014291BD2-0000000014291CF8
void __cdecl data::ModifyAbility::ModifyAbility(data::ModifyAbility *const this, const data::ModifyAbility *a2)
{
  int (**v2)(...); // rdx

  data::ConfigTalentMixin::ConfigTalentMixin(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ModifyAbility + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigTalentMixin = v2;
  std::string::basic_string(&this->ability_name, &a2->ability_name);
  std::string::basic_string(&this->param_special, &a2->param_special);
  data::DynamicArgument::DynamicArgument(&this->param_delta, &a2->param_delta);
  data::DynamicArgument::DynamicArgument(&this->param_ratio, &a2->param_ratio);
};

// Line 113: range 00000000142A0E9C-00000000142A0EC6
void __cdecl data::ModifyAbility::~ModifyAbility(data::ModifyAbility *const this)
{
  data::ModifyAbility::~ModifyAbility(this);
  operator delete(this, 0x90uLL);
};

// Line 113: range 00000000142A0E0E-00000000142A0E9B
void __cdecl data::ModifyAbility::~ModifyAbility(data::ModifyAbility *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ModifyAbility + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigTalentMixin = v2;
  data::DynamicArgument::~DynamicArgument(&this->param_ratio);
  data::DynamicArgument::~DynamicArgument(&this->param_delta);
  std::string::~string(&this->param_special);
  std::string::~string(&this->ability_name);
  data::ConfigTalentMixin::~ConfigTalentMixin(this);
};

// Line 118: range 0000000013BCBD50-0000000013BCBD60
const char *__cdecl data::ModifyAbility::getTypeName(const data::ModifyAbility *const this)
{
  return "ModifyAbility";
};

// Line 119: range 0000000013BCBD62-0000000013BCBEFE
int32_t __cdecl data::ModifyAbility::getHashNum(const data::ModifyAbility *const this)
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
  *(_QWORD *)(v1 + 16) = data::ModifyAbility::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ModifyAbility",
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

// Line 135: range 0000000014291FE2-0000000014292023
void __cdecl data::ModifyAbilityFactory::ModifyAbilityFactory(data::ModifyAbilityFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ModifyAbilityFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ModifyAbilityFactory = v2;
};

// Line 143: range 000000001429232C-0000000014292399
void __cdecl data::UnlockTalentParam::UnlockTalentParam(data::UnlockTalentParam *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigTalentMixin::ConfigTalentMixin(this);
  v2 = (int (**)(...))(&`vtable for'data::UnlockTalentParam + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigTalentMixin = v2;
  std::string::basic_string(&this->ability_name);
  std::string::basic_string(&this->talent_param);
};

// Line 143: range 000000001429274E-0000000014292814
void __cdecl data::UnlockTalentParam::UnlockTalentParam(
        data::UnlockTalentParam *const this,
        const data::UnlockTalentParam *a2)
{
  int (**v2)(...); // rdx

  data::ConfigTalentMixin::ConfigTalentMixin(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::UnlockTalentParam + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigTalentMixin = v2;
  std::string::basic_string(&this->ability_name, &a2->ability_name);
  std::string::basic_string(&this->talent_param, &a2->talent_param);
};

// Line 151: range 00000000142A0DE2-00000000142A0E0C
void __cdecl data::UnlockTalentParam::~UnlockTalentParam(data::UnlockTalentParam *const this)
{
  data::UnlockTalentParam::~UnlockTalentParam(this);
  operator delete(this, 0x60uLL);
};

// Line 151: range 00000000142A0D74-00000000142A0DE1
void __cdecl data::UnlockTalentParam::~UnlockTalentParam(data::UnlockTalentParam *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::UnlockTalentParam + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigTalentMixin = v2;
  std::string::~string(&this->talent_param);
  std::string::~string(&this->ability_name);
  data::ConfigTalentMixin::~ConfigTalentMixin(this);
};

// Line 156: range 0000000013BCBF00-0000000013BCBF10
const char *__cdecl data::UnlockTalentParam::getTypeName(const data::UnlockTalentParam *const this)
{
  return "UnlockTalentParam";
};

// Line 157: range 0000000013BCBF12-0000000013BCC0AE
int32_t __cdecl data::UnlockTalentParam::getHashNum(const data::UnlockTalentParam *const this)
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
  *(_QWORD *)(v1 + 16) = data::UnlockTalentParam::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "UnlockTalentParam",
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

// Line 173: range 0000000014292AFE-0000000014292B3F
void __cdecl data::UnlockTalentParamFactory::UnlockTalentParamFactory(data::UnlockTalentParamFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::UnlockTalentParamFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_UnlockTalentParamFactory = v2;
};

// Line 181: range 0000000014292E48-0000000014292EA5
void __cdecl data::UnlockControllerConditions::UnlockControllerConditions(data::UnlockControllerConditions *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigTalentMixin::ConfigTalentMixin(this);
  v2 = (int (**)(...))(&`vtable for'data::UnlockControllerConditions + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigTalentMixin = v2;
  std::string::basic_string(&this->condition_name);
};

// Line 181: range 00000000142932AA-0000000014293340
void __cdecl data::UnlockControllerConditions::UnlockControllerConditions(
        data::UnlockControllerConditions *const this,
        const data::UnlockControllerConditions *a2)
{
  int (**v2)(...); // rdx

  data::ConfigTalentMixin::ConfigTalentMixin(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::UnlockControllerConditions + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigTalentMixin = v2;
  std::string::basic_string(&this->condition_name, &a2->condition_name);
};

// Line 188: range 00000000142A0D48-00000000142A0D72
void __cdecl data::UnlockControllerConditions::~UnlockControllerConditions(
        data::UnlockControllerConditions *const this)
{
  data::UnlockControllerConditions::~UnlockControllerConditions(this);
  operator delete(this, 0x40uLL);
};

// Line 188: range 00000000142A0CEA-00000000142A0D47
void __cdecl data::UnlockControllerConditions::~UnlockControllerConditions(
        data::UnlockControllerConditions *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::UnlockControllerConditions + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigTalentMixin = v2;
  std::string::~string(&this->condition_name);
  data::ConfigTalentMixin::~ConfigTalentMixin(this);
};

// Line 193: range 0000000013BCC0B0-0000000013BCC0C0
const char *__cdecl data::UnlockControllerConditions::getTypeName(const data::UnlockControllerConditions *const this)
{
  return "UnlockControllerConditions";
};

// Line 194: range 0000000013BCC0C2-0000000013BCC25E
int32_t __cdecl data::UnlockControllerConditions::getHashNum(const data::UnlockControllerConditions *const this)
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
  *(_QWORD *)(v1 + 16) = data::UnlockControllerConditions::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "UnlockControllerConditions",
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

// Line 210: range 000000001429362A-000000001429366B
void __cdecl data::UnlockControllerConditionsFactory::UnlockControllerConditionsFactory(
        data::UnlockControllerConditionsFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::UnlockControllerConditionsFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_UnlockControllerConditionsFactory = v2;
};

// Line 218: range 0000000014293974-0000000014293A8F
void __cdecl data::ModifySkillCD::ModifySkillCD(data::ModifySkillCD *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigTalentMixin::ConfigTalentMixin((data::ConfigTalentMixin *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ModifySkillCD + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigTalentMixin = v2;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skill_id, v3);
  }
  this->skill_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd_delta >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cd_delta >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cd_delta, v3);
  }
  this->cd_delta = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cd_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cd_ratio, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->cd_ratio = 0.0;
};

// Line 218: range 0000000014293E64-0000000014294041
void __cdecl data::ModifySkillCD::ModifySkillCD(data::ModifySkillCD *const this, const data::ModifySkillCD *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t skill_id; // ecx
  char v5; // dl
  float cd_delta; // xmm0_4
  float cd_ratio; // xmm0_4

  data::ConfigTalentMixin::ConfigTalentMixin((data::ConfigTalentMixin *const)this, (const data::ConfigTalentMixin *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ModifySkillCD + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigTalentMixin = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->skill_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->skill_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->skill_id);
  }
  skill_id = a2->skill_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v5 != 0;
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
    __asan_report_store4(&this->skill_id, v3);
  this->skill_id = skill_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cd_delta >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cd_delta >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cd_delta);
  }
  cd_delta = a2->cd_delta;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd_delta >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cd_delta >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cd_delta, v3);
  }
  this->cd_delta = cd_delta;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cd_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->cd_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->cd_ratio);
  }
  cd_ratio = a2->cd_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cd_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cd_ratio, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->cd_ratio = cd_ratio;
};

// Line 227: range 00000000142A0C70-00000000142A0CBD
void __cdecl data::ModifySkillCD::~ModifySkillCD(data::ModifySkillCD *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ModifySkillCD + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigTalentMixin = v2;
  data::ConfigTalentMixin::~ConfigTalentMixin((data::ConfigTalentMixin *const)this);
};

// Line 227: range 00000000142A0CBE-00000000142A0CE8
void __cdecl data::ModifySkillCD::~ModifySkillCD(data::ModifySkillCD *const this)
{
  data::ModifySkillCD::~ModifySkillCD(this);
  operator delete(this, 0x28uLL);
};

// Line 232: range 0000000013BCC260-0000000013BCC270
const char *__cdecl data::ModifySkillCD::getTypeName(const data::ModifySkillCD *const this)
{
  return "ModifySkillCD";
};

// Line 233: range 0000000013BCC272-0000000013BCC40E
int32_t __cdecl data::ModifySkillCD::getHashNum(const data::ModifySkillCD *const this)
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
  *(_QWORD *)(v1 + 16) = data::ModifySkillCD::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ModifySkillCD",
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

// Line 249: range 000000001429428A-00000000142942CB
void __cdecl data::ModifySkillCDFactory::ModifySkillCDFactory(data::ModifySkillCDFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ModifySkillCDFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ModifySkillCDFactory = v2;
};

// Line 257: range 00000000142945D4-00000000142946EF
void __cdecl data::ModifySkillCost::ModifySkillCost(data::ModifySkillCost *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigTalentMixin::ConfigTalentMixin((data::ConfigTalentMixin *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ModifySkillCost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigTalentMixin = v2;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skill_id, v3);
  }
  this->skill_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_delta >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cost_delta >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cost_delta, v3);
  }
  this->cost_delta = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cost_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cost_ratio, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->cost_ratio = 0.0;
};

// Line 257: range 0000000014294AC4-0000000014294CA1
void __cdecl data::ModifySkillCost::ModifySkillCost(data::ModifySkillCost *const this, const data::ModifySkillCost *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t skill_id; // ecx
  char v5; // dl
  float cost_delta; // xmm0_4
  float cost_ratio; // xmm0_4

  data::ConfigTalentMixin::ConfigTalentMixin((data::ConfigTalentMixin *const)this, (const data::ConfigTalentMixin *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ModifySkillCost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigTalentMixin = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->skill_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->skill_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->skill_id);
  }
  skill_id = a2->skill_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v5 != 0;
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
    __asan_report_store4(&this->skill_id, v3);
  this->skill_id = skill_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cost_delta >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cost_delta >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cost_delta);
  }
  cost_delta = a2->cost_delta;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_delta >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cost_delta >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cost_delta, v3);
  }
  this->cost_delta = cost_delta;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cost_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->cost_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->cost_ratio);
  }
  cost_ratio = a2->cost_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cost_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cost_ratio, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->cost_ratio = cost_ratio;
};

// Line 266: range 00000000142A0BF6-00000000142A0C43
void __cdecl data::ModifySkillCost::~ModifySkillCost(data::ModifySkillCost *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ModifySkillCost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigTalentMixin = v2;
  data::ConfigTalentMixin::~ConfigTalentMixin((data::ConfigTalentMixin *const)this);
};

// Line 266: range 00000000142A0C44-00000000142A0C6E
void __cdecl data::ModifySkillCost::~ModifySkillCost(data::ModifySkillCost *const this)
{
  data::ModifySkillCost::~ModifySkillCost(this);
  operator delete(this, 0x28uLL);
};

// Line 271: range 0000000013BCC410-0000000013BCC420
const char *__cdecl data::ModifySkillCost::getTypeName(const data::ModifySkillCost *const this)
{
  return "ModifySkillCost";
};

// Line 272: range 0000000013BCC422-0000000013BCC5BE
int32_t __cdecl data::ModifySkillCost::getHashNum(const data::ModifySkillCost *const this)
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
  *(_QWORD *)(v1 + 16) = data::ModifySkillCost::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ModifySkillCost",
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

// Line 288: range 0000000014294EEA-0000000014294F2B
void __cdecl data::ModifySkillCostFactory::ModifySkillCostFactory(data::ModifySkillCostFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ModifySkillCostFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ModifySkillCostFactory = v2;
};

// Line 296: range 0000000014295234-0000000014295305
void __cdecl data::ModifySkillPoint::ModifySkillPoint(data::ModifySkillPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigTalentMixin::ConfigTalentMixin((data::ConfigTalentMixin *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ModifySkillPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigTalentMixin = v2;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skill_id, v3);
  }
  this->skill_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->point_delta >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->point_delta >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->point_delta, v3);
  }
  this->point_delta = 0;
};

// Line 296: range 000000001429580A-000000001429595C
void __cdecl data::ModifySkillPoint::ModifySkillPoint(
        data::ModifySkillPoint *const this,
        const data::ModifySkillPoint *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t skill_id; // ecx
  char v5; // dl
  int32_t point_delta; // ecx
  char v7; // al

  data::ConfigTalentMixin::ConfigTalentMixin((data::ConfigTalentMixin *const)this, (const data::ConfigTalentMixin *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ModifySkillPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigTalentMixin = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->skill_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->skill_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->skill_id);
  }
  skill_id = a2->skill_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->skill_id, v3);
  }
  this->skill_id = skill_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->point_delta >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->point_delta >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->point_delta);
  }
  point_delta = a2->point_delta;
  v7 = *(_BYTE *)(((unsigned __int64)&this->point_delta >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->point_delta, v3);
  }
  this->point_delta = point_delta;
};

// Line 304: range 00000000142A0B7C-00000000142A0BC9
void __cdecl data::ModifySkillPoint::~ModifySkillPoint(data::ModifySkillPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ModifySkillPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigTalentMixin = v2;
  data::ConfigTalentMixin::~ConfigTalentMixin((data::ConfigTalentMixin *const)this);
};

// Line 304: range 00000000142A0BCA-00000000142A0BF4
void __cdecl data::ModifySkillPoint::~ModifySkillPoint(data::ModifySkillPoint *const this)
{
  data::ModifySkillPoint::~ModifySkillPoint(this);
  operator delete(this, 0x28uLL);
};

// Line 309: range 0000000013BCC5C0-0000000013BCC5D0
const char *__cdecl data::ModifySkillPoint::getTypeName(const data::ModifySkillPoint *const this)
{
  return "ModifySkillPoint";
};

// Line 310: range 0000000013BCC5D2-0000000013BCC76E
int32_t __cdecl data::ModifySkillPoint::getHashNum(const data::ModifySkillPoint *const this)
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
  *(_QWORD *)(v1 + 16) = data::ModifySkillPoint::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ModifySkillPoint",
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

// Line 326: range 0000000014295BA6-0000000014295BE7
void __cdecl data::ModifySkillPointFactory::ModifySkillPointFactory(data::ModifySkillPointFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ModifySkillPointFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ModifySkillPointFactory = v2;
};

// Line 350: range 0000000014296050-0000000014296167
void __cdecl data::AddTalentExtraLevel::AddTalentExtraLevel(data::AddTalentExtraLevel *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigTalentMixin::ConfigTalentMixin((data::ConfigTalentMixin *const)this);
  v2 = (int (**)(...))(&`vtable for'data::AddTalentExtraLevel + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigTalentMixin = v2;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->talent_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->talent_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->talent_type, v3);
  }
  this->talent_type = None_76;
  if ( *(_BYTE *)(((unsigned __int64)&this->talent_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->talent_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->talent_index, v3);
  }
  this->talent_index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->extra_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->extra_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->extra_level, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->extra_level = 0;
};

// Line 350: range 000000001429653C-0000000014296713
void __cdecl data::AddTalentExtraLevel::AddTalentExtraLevel(
        data::AddTalentExtraLevel *const this,
        const data::AddTalentExtraLevel *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::TalentType talent_type; // ecx
  char v5; // dl
  uint32_t talent_index; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t extra_level; // ecx
  char v10; // dl

  data::ConfigTalentMixin::ConfigTalentMixin((data::ConfigTalentMixin *const)this, (const data::ConfigTalentMixin *)a2);
  v2 = (int (**)(...))(&`vtable for'data::AddTalentExtraLevel + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigTalentMixin = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->talent_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->talent_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->talent_type);
  }
  talent_type = a2->talent_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->talent_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->talent_type, v3);
  }
  this->talent_type = talent_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->talent_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->talent_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->talent_index);
  }
  talent_index = a2->talent_index;
  v7 = *(_BYTE *)(((unsigned __int64)&this->talent_index >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->talent_index, v3);
  }
  this->talent_index = talent_index;
  v8 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->extra_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->extra_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->extra_level);
  }
  extra_level = a2->extra_level;
  v10 = *(_BYTE *)(((unsigned __int64)&this->extra_level >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->extra_level, v8);
  }
  this->extra_level = extra_level;
};

// Line 359: range 00000000142A0B50-00000000142A0B7A
void __cdecl data::AddTalentExtraLevel::~AddTalentExtraLevel(data::AddTalentExtraLevel *const this)
{
  data::AddTalentExtraLevel::~AddTalentExtraLevel(this);
  operator delete(this, 0x28uLL);
};

// Line 359: range 00000000142A0B02-00000000142A0B4F
void __cdecl data::AddTalentExtraLevel::~AddTalentExtraLevel(data::AddTalentExtraLevel *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AddTalentExtraLevel + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigTalentMixin = v2;
  data::ConfigTalentMixin::~ConfigTalentMixin((data::ConfigTalentMixin *const)this);
};

// Line 364: range 0000000013BCC770-0000000013BCC780
const char *__cdecl data::AddTalentExtraLevel::getTypeName(const data::AddTalentExtraLevel *const this)
{
  return "AddTalentExtraLevel";
};

// Line 365: range 0000000013BCC782-0000000013BCC91E
int32_t __cdecl data::AddTalentExtraLevel::getHashNum(const data::AddTalentExtraLevel *const this)
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
  *(_QWORD *)(v1 + 16) = data::AddTalentExtraLevel::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "AddTalentExtraLevel",
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

// Line 381: range 000000001429695C-000000001429699D
void __cdecl data::AddTalentExtraLevelFactory::AddTalentExtraLevelFactory(data::AddTalentExtraLevelFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AddTalentExtraLevelFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AddTalentExtraLevelFactory = v2;
};
