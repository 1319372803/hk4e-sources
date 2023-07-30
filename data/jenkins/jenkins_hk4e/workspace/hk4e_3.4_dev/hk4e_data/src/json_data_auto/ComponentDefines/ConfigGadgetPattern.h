// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/ConfigGadgetPattern.h

// Line 20: range 00000000126EF2CA-00000000126EF356
void __cdecl data::ConfigBaseGadgetTriggerAction::ConfigBaseGadgetTriggerAction(
        data::ConfigBaseGadgetTriggerAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::ConfigBaseGadgetTriggerAction>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigBaseGadgetTriggerAction>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBaseGadgetTriggerAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGadgetTriggerAction = v2;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 20: range 00000000126EF820-00000000126EF8F6
void __cdecl data::ConfigBaseGadgetTriggerAction::ConfigBaseGadgetTriggerAction(
        data::ConfigBaseGadgetTriggerAction *const this,
        const data::ConfigBaseGadgetTriggerAction *a2)
{
  std::enable_shared_from_this<data::ConfigBaseGadgetTriggerAction> *v2; // rsi
  int (**v3)(...); // rdx
  bool is_json_loaded; // cl
  char v5; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigBaseGadgetTriggerAction>;
  std::enable_shared_from_this<data::ConfigBaseGadgetTriggerAction>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigBaseGadgetTriggerAction>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigBaseGadgetTriggerAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigBaseGadgetTriggerAction = v3;
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

// Line 27: range 00000000126EFB92-00000000126EFBBC
void __cdecl data::ConfigBaseGadgetTriggerAction::~ConfigBaseGadgetTriggerAction(
        data::ConfigBaseGadgetTriggerAction *const this)
{
  data::ConfigBaseGadgetTriggerAction::~ConfigBaseGadgetTriggerAction(this);
  operator delete(this, 0x20uLL);
};

// Line 27: range 00000000126EFB40-00000000126EFB91
void __cdecl data::ConfigBaseGadgetTriggerAction::~ConfigBaseGadgetTriggerAction(
        data::ConfigBaseGadgetTriggerAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBaseGadgetTriggerAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGadgetTriggerAction = v2;
  std::enable_shared_from_this<data::ConfigBaseGadgetTriggerAction>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigBaseGadgetTriggerAction>);
};

// Line 32: range 000000001214F3DE-000000001214F3EE
const char *__cdecl data::ConfigBaseGadgetTriggerAction::getTypeName(
        const data::ConfigBaseGadgetTriggerAction *const this)
{
  return "ConfigBaseGadgetTriggerAction";
};

// Line 33: range 000000001214F3F0-000000001214F58C
int32_t __cdecl data::ConfigBaseGadgetTriggerAction::getHashNum(const data::ConfigBaseGadgetTriggerAction *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigBaseGadgetTriggerAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBaseGadgetTriggerAction",
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

// Line 52: range 00000000126EFBBE-00000000126EFC1B
void __cdecl data::ConfigGadgetDoAttackEvent::ConfigGadgetDoAttackEvent(data::ConfigGadgetDoAttackEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseGadgetTriggerAction::ConfigBaseGadgetTriggerAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetDoAttackEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGadgetTriggerAction = v2;
  std::string::basic_string(&this->attack_event);
};

// Line 52: range 00000000126F0020-00000000126F00B6
void __cdecl data::ConfigGadgetDoAttackEvent::ConfigGadgetDoAttackEvent(
        data::ConfigGadgetDoAttackEvent *const this,
        const data::ConfigGadgetDoAttackEvent *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBaseGadgetTriggerAction::ConfigBaseGadgetTriggerAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetDoAttackEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGadgetTriggerAction = v2;
  std::string::basic_string(&this->attack_event, &a2->attack_event);
};

// Line 59: range 000000001274DF78-000000001274DFD5
void __cdecl data::ConfigGadgetDoAttackEvent::~ConfigGadgetDoAttackEvent(data::ConfigGadgetDoAttackEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetDoAttackEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGadgetTriggerAction = v2;
  std::string::~string(&this->attack_event);
  data::ConfigBaseGadgetTriggerAction::~ConfigBaseGadgetTriggerAction(this);
};

// Line 59: range 000000001274DFD6-000000001274E000
void __cdecl data::ConfigGadgetDoAttackEvent::~ConfigGadgetDoAttackEvent(data::ConfigGadgetDoAttackEvent *const this)
{
  data::ConfigGadgetDoAttackEvent::~ConfigGadgetDoAttackEvent(this);
  operator delete(this, 0x40uLL);
};

// Line 64: range 000000001214F58E-000000001214F59E
const char *__cdecl data::ConfigGadgetDoAttackEvent::getTypeName(const data::ConfigGadgetDoAttackEvent *const this)
{
  return "ConfigGadgetDoAttackEvent";
};

// Line 65: range 000000001214F5A0-000000001214F73C
int32_t __cdecl data::ConfigGadgetDoAttackEvent::getHashNum(const data::ConfigGadgetDoAttackEvent *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGadgetDoAttackEvent::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGadgetDoAttackEvent",
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

// Line 81: range 00000000126F03A0-00000000126F03E1
void __cdecl data::ConfigGadgetDoAttackEventFactory::ConfigGadgetDoAttackEventFactory(
        data::ConfigGadgetDoAttackEventFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetDoAttackEventFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetDoAttackEventFactory = v2;
};

// Line 89: range 00000000126F06EA-00000000126F0747
void __cdecl data::ConfigGadgetTriggerAbility::ConfigGadgetTriggerAbility(data::ConfigGadgetTriggerAbility *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseGadgetTriggerAction::ConfigBaseGadgetTriggerAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetTriggerAbility + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGadgetTriggerAction = v2;
  std::string::basic_string(&this->ability_name);
};

// Line 89: range 00000000126F0B4C-00000000126F0BE2
void __cdecl data::ConfigGadgetTriggerAbility::ConfigGadgetTriggerAbility(
        data::ConfigGadgetTriggerAbility *const this,
        const data::ConfigGadgetTriggerAbility *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBaseGadgetTriggerAction::ConfigBaseGadgetTriggerAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetTriggerAbility + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGadgetTriggerAction = v2;
  std::string::basic_string(&this->ability_name, &a2->ability_name);
};

// Line 96: range 000000001274DF4C-000000001274DF76
void __cdecl data::ConfigGadgetTriggerAbility::~ConfigGadgetTriggerAbility(
        data::ConfigGadgetTriggerAbility *const this)
{
  data::ConfigGadgetTriggerAbility::~ConfigGadgetTriggerAbility(this);
  operator delete(this, 0x40uLL);
};

// Line 96: range 000000001274DEEE-000000001274DF4B
void __cdecl data::ConfigGadgetTriggerAbility::~ConfigGadgetTriggerAbility(
        data::ConfigGadgetTriggerAbility *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetTriggerAbility + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGadgetTriggerAction = v2;
  std::string::~string(&this->ability_name);
  data::ConfigBaseGadgetTriggerAction::~ConfigBaseGadgetTriggerAction(this);
};

// Line 101: range 000000001214F73E-000000001214F74E
const char *__cdecl data::ConfigGadgetTriggerAbility::getTypeName(const data::ConfigGadgetTriggerAbility *const this)
{
  return "ConfigGadgetTriggerAbility";
};

// Line 102: range 000000001214F750-000000001214F8EC
int32_t __cdecl data::ConfigGadgetTriggerAbility::getHashNum(const data::ConfigGadgetTriggerAbility *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGadgetTriggerAbility::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGadgetTriggerAbility",
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

// Line 118: range 00000000126F0ECC-00000000126F0F0D
void __cdecl data::ConfigGadgetTriggerAbilityFactory::ConfigGadgetTriggerAbilityFactory(
        data::ConfigGadgetTriggerAbilityFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetTriggerAbilityFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetTriggerAbilityFactory = v2;
};

// Line 126: range 00000000126F1216-00000000126F12E1
void __cdecl data::ConfigGadgetDamageByAttackValue::ConfigGadgetDamageByAttackValue(
        data::ConfigGadgetDamageByAttackValue *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseGadgetTriggerAction::ConfigBaseGadgetTriggerAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetDamageByAttackValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGadgetTriggerAction = v2;
  if ( *(_WORD *)(((unsigned __int64)&this->born >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBornType>();
  data::ConfigAttackInfo::ConfigAttackInfo(&this->attack_info);
};

// Line 126: range 00000000126F172A-00000000126F17EB
void __cdecl data::ConfigGadgetDamageByAttackValue::ConfigGadgetDamageByAttackValue(
        data::ConfigGadgetDamageByAttackValue *const this,
        const data::ConfigGadgetDamageByAttackValue *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBaseGadgetTriggerAction::ConfigBaseGadgetTriggerAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetDamageByAttackValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseGadgetTriggerAction = v2;
  std::shared_ptr<data::ConfigBornType>::shared_ptr(&this->born, &a2->born);
  data::ConfigAttackInfo::ConfigAttackInfo(&this->attack_info, &a2->attack_info);
};

// Line 134: range 000000001274DE54-000000001274DEC1
void __cdecl data::ConfigGadgetDamageByAttackValue::~ConfigGadgetDamageByAttackValue(
        data::ConfigGadgetDamageByAttackValue *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetDamageByAttackValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseGadgetTriggerAction = v2;
  data::ConfigAttackInfo::~ConfigAttackInfo(&this->attack_info);
  std::shared_ptr<data::ConfigBornType>::~shared_ptr(&this->born);
  data::ConfigBaseGadgetTriggerAction::~ConfigBaseGadgetTriggerAction(this);
};

// Line 134: range 000000001274DEC2-000000001274DEEC
void __cdecl data::ConfigGadgetDamageByAttackValue::~ConfigGadgetDamageByAttackValue(
        data::ConfigGadgetDamageByAttackValue *const this)
{
  data::ConfigGadgetDamageByAttackValue::~ConfigGadgetDamageByAttackValue(this);
  operator delete(this, 0x3E0uLL);
};

// Line 139: range 000000001214F8EE-000000001214F8FE
const char *__cdecl data::ConfigGadgetDamageByAttackValue::getTypeName(
        const data::ConfigGadgetDamageByAttackValue *const this)
{
  return "ConfigGadgetDamageByAttackValue";
};

// Line 140: range 000000001214F900-000000001214FA9C
int32_t __cdecl data::ConfigGadgetDamageByAttackValue::getHashNum(
        const data::ConfigGadgetDamageByAttackValue *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGadgetDamageByAttackValue::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGadgetDamageByAttackValue",
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

// Line 156: range 00000000126F1AD4-00000000126F1B15
void __cdecl data::ConfigGadgetDamageByAttackValueFactory::ConfigGadgetDamageByAttackValueFactory(
        data::ConfigGadgetDamageByAttackValueFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetDamageByAttackValueFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetDamageByAttackValueFactory = v2;
};

// Line 186: range 000000000ED727A2-000000000ED728B9
void __cdecl data::ConfigCCD::ConfigCCD(data::ConfigCCD *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->type = OnlyHighSpeed;
  if ( *(_BYTE *)(((unsigned __int64)&this->detect_cd >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->detect_cd >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->detect_cd, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->detect_cd = 0.0;
  v1 = ((_BYTE)this + 8) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->sorted_hit_result >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->sorted_hit_result >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->sorted_hit_result, v1, v2);
  this->sorted_hit_result = 0;
  v3 = ((_BYTE)this + 9) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 211: range 000000000ED728BA-000000000ED72AA8
void __cdecl data::ConfigCollision::ConfigCollision(data::ConfigCollision *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx

  data::ConfigCCD::ConfigCCD(&this->ccd);
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trigger_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->trigger_type, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->trigger_type = TriggerOnce_0;
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_cd >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trigger_cd >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->trigger_cd, (((_BYTE)this + 16) & 7u) + 3);
  }
  this->trigger_cd = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->target_type, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->target_type = None_22;
  v1 = ((_BYTE)this + 24) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->ignore_scene >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->ignore_scene >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->ignore_scene, v1, v2);
  this->ignore_scene = 0;
  v3 = ((_BYTE)this + 25) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->ignore_water >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->ignore_water >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->ignore_water, v3, v4);
  this->ignore_water = 0;
  v5 = ((_BYTE)this + 26) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->born_with_trigger_enabled >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->born_with_trigger_enabled >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->born_with_trigger_enabled, v5, v6);
  this->born_with_trigger_enabled = 1;
  v7 = ((_BYTE)this + 27) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_json_loaded, v7, v8);
  this->is_json_loaded = 0;
};

// Line 240: range 000000000ED72AAA-000000000ED72B8B
void __cdecl data::ConfigGadgetPattern::ConfigGadgetPattern(data::ConfigGadgetPattern *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  std::enable_shared_from_this<data::ConfigGadgetPattern>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigGadgetPattern>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetPattern + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetPattern = v2;
  data::ConfigCollision::ConfigCollision(&this->collision);
  v3 = ((_BYTE)this + 52) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->collider_check_on_init >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->collider_check_on_init >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->collider_check_on_init, v3, v4);
  this->collider_check_on_init = 0;
  v5 = ((_BYTE)this + 53) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_json_loaded, v5, v6);
  this->is_json_loaded = 0;
};

// Line 240: range 00000000126F207A-00000000126F22D6
void __cdecl data::ConfigGadgetPattern::ConfigGadgetPattern(
        data::ConfigGadgetPattern *const this,
        const data::ConfigGadgetPattern *a2)
{
  std::enable_shared_from_this<data::ConfigGadgetPattern> *v2; // rsi
  int (**v3)(...); // rdx
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdx
  bool collider_check_on_init; // cl
  char v8; // dl
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool is_json_loaded; // cl
  char v13; // dl
  __int64 v14; // rdx

  v2 = &a2->std::enable_shared_from_this<data::ConfigGadgetPattern>;
  std::enable_shared_from_this<data::ConfigGadgetPattern>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigGadgetPattern>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigGadgetPattern + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigGadgetPattern = v3;
  if ( *(char *)(((unsigned __int64)&this->collision >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)&this->collision.is_json_loaded >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 51) & 7) >= *(_BYTE *)(((unsigned __int64)&this->collision.is_json_loaded >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->collision, 28LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->collision >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)&a2->collision.is_json_loaded >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 51) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->collision.is_json_loaded >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->collision, 28LL);
  }
  v4 = *(_QWORD *)&a2->collision.ccd.sorted_hit_result;
  *(_QWORD *)&this->collision.ccd.type = *(_QWORD *)&a2->collision.ccd.type;
  *(_QWORD *)&this->collision.ccd.sorted_hit_result = v4;
  *(_QWORD *)&this->collision.trigger_cd = *(_QWORD *)&a2->collision.trigger_cd;
  *(_DWORD *)&this->collision.ignore_scene = *(_DWORD *)&a2->collision.ignore_scene;
  v5 = ((_BYTE)a2 + 52) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&a2->collider_check_on_init >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&a2->collider_check_on_init >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&a2->collider_check_on_init, v5, v6);
  collider_check_on_init = a2->collider_check_on_init;
  v8 = *(_BYTE *)(((unsigned __int64)&this->collider_check_on_init >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((((unsigned __int8)this + 52) & 7) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->collider_check_on_init, v5, v9);
  this->collider_check_on_init = collider_check_on_init;
  v10 = ((_BYTE)a2 + 53) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&a2->is_json_loaded, v10, v11);
  is_json_loaded = a2->is_json_loaded;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this + 53) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_json_loaded, v10, v14);
  this->is_json_loaded = is_json_loaded;
};

// Line 249: range 00000000126F2572-00000000126F259C
void __cdecl data::ConfigGadgetPattern::~ConfigGadgetPattern(data::ConfigGadgetPattern *const this)
{
  data::ConfigGadgetPattern::~ConfigGadgetPattern(this);
  operator delete(this, 0x38uLL);
};

// Line 249: range 00000000126F2520-00000000126F2571
void __cdecl data::ConfigGadgetPattern::~ConfigGadgetPattern(data::ConfigGadgetPattern *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetPattern + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetPattern = v2;
  std::enable_shared_from_this<data::ConfigGadgetPattern>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigGadgetPattern>);
};

// Line 254: range 000000001214FA9E-000000001214FAAE
const char *__cdecl data::ConfigGadgetPattern::getTypeName(const data::ConfigGadgetPattern *const this)
{
  return "ConfigGadgetPattern";
};

// Line 255: range 000000001214FAB0-000000001214FC4C
int32_t __cdecl data::ConfigGadgetPattern::getHashNum(const data::ConfigGadgetPattern *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGadgetPattern::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGadgetPattern",
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

// Line 274: range 00000000126F25D6-00000000126F283E
void __cdecl data::ConfigGadgetCollidedPattern::ConfigGadgetCollidedPattern(
        data::ConfigGadgetCollidedPattern *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int (**v5)(...); // rdx
  char v6[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigGadgetCollidedPattern::ConfigGadgetCollidedPattern;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202116351;
  data::ConfigGadgetPattern::ConfigGadgetPattern(this);
  v5 = (int (**)(...))(&`vtable for'data::ConfigGadgetCollidedPattern + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetPattern = v5;
  std::vector<std::shared_ptr<data::ConfigBaseGadgetTriggerAction>>::vector(&this->collision_actions);
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    &this->this_collider_name,
    "Collider",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    &this->target_collider_name,
    "InteeTrigger",
    (const std::allocator<char> *)(v2 + 64));
  std::allocator<char>::~allocator(v2 + 64);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 274: range 00000000126F2C88-00000000126F2D7E
void __cdecl data::ConfigGadgetCollidedPattern::ConfigGadgetCollidedPattern(
        data::ConfigGadgetCollidedPattern *const this,
        const data::ConfigGadgetCollidedPattern *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGadgetPattern::ConfigGadgetPattern(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetCollidedPattern + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGadgetPattern = v2;
  std::vector<std::shared_ptr<data::ConfigBaseGadgetTriggerAction>>::vector(
    &this->collision_actions,
    &a2->collision_actions);
  std::string::basic_string(&this->this_collider_name, &a2->this_collider_name);
  std::string::basic_string(&this->target_collider_name, &a2->target_collider_name);
};

// Line 283: range 000000001274DDAA-000000001274DE27
void __cdecl data::ConfigGadgetCollidedPattern::~ConfigGadgetCollidedPattern(
        data::ConfigGadgetCollidedPattern *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetCollidedPattern + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetPattern = v2;
  std::string::~string(&this->target_collider_name);
  std::string::~string(&this->this_collider_name);
  std::vector<std::shared_ptr<data::ConfigBaseGadgetTriggerAction>>::~vector(&this->collision_actions);
  data::ConfigGadgetPattern::~ConfigGadgetPattern(this);
};

// Line 283: range 000000001274DE28-000000001274DE52
void __cdecl data::ConfigGadgetCollidedPattern::~ConfigGadgetCollidedPattern(
        data::ConfigGadgetCollidedPattern *const this)
{
  data::ConfigGadgetCollidedPattern::~ConfigGadgetCollidedPattern(this);
  operator delete(this, 0x90uLL);
};

// Line 288: range 000000001214FC4E-000000001214FC5E
const char *__cdecl data::ConfigGadgetCollidedPattern::getTypeName(const data::ConfigGadgetCollidedPattern *const this)
{
  return "ConfigGadgetCollidedPattern";
};

// Line 289: range 000000001214FC60-000000001214FDFC
int32_t __cdecl data::ConfigGadgetCollidedPattern::getHashNum(const data::ConfigGadgetCollidedPattern *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGadgetCollidedPattern::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGadgetCollidedPattern",
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

// Line 305: range 00000000126F3068-00000000126F30A9
void __cdecl data::ConfigGadgetCollidedPatternFactory::ConfigGadgetCollidedPatternFactory(
        data::ConfigGadgetCollidedPatternFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetCollidedPatternFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetCollidedPatternFactory = v2;
};

// Line 313: range 00000000126F33B2-00000000126F35E9
void __cdecl data::ConfigBulletPattern::ConfigBulletPattern(data::ConfigBulletPattern *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx

  data::ConfigGadgetPattern::ConfigGadgetPattern(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBulletPattern + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetPattern = v2;
  std::vector<std::shared_ptr<data::ConfigBaseGadgetTriggerAction>>::vector(&this->trigger_actions);
  std::vector<std::shared_ptr<data::ConfigBaseGadgetTriggerAction>>::vector(&this->trigger_life_over_actions);
  if ( *(char *)(((unsigned __int64)&this->kill_by_other >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->kill_by_other, v1, &this->kill_by_other);
  this->kill_by_other = 0;
  v3 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->die_delay_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->die_delay_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->die_delay_time, v3);
  }
  this->die_delay_time = 5.0;
  if ( *(char *)(((unsigned __int64)&this->fire_aisound_event >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->fire_aisound_event, v3, &this->fire_aisound_event);
  this->fire_aisound_event = 0;
  v4 = (((_BYTE)this + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_auto_kill_dist >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_auto_kill_dist >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_auto_kill_dist, v4);
  }
  this->max_auto_kill_dist = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->enable_collision_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->enable_collision_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->enable_collision_delay, v4);
  }
  this->enable_collision_delay = 0.0;
  v5 = ((_BYTE)this + 124) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->reset_last_pos_on_delay_end >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->reset_last_pos_on_delay_end >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->reset_last_pos_on_delay_end, v5, v6);
  this->reset_last_pos_on_delay_end = 0;
  v7 = ((_BYTE)this + 125) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->re_trigger_on_delay_end >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->re_trigger_on_delay_end >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->re_trigger_on_delay_end, v7, v8);
  this->re_trigger_on_delay_end = 0;
};

// Line 313: range 00000000126F399E-00000000126F3DD8
void __cdecl data::ConfigBulletPattern::ConfigBulletPattern(
        data::ConfigBulletPattern *const this,
        const data::ConfigBulletPattern *a2)
{
  int (**v2)(...); // rdx
  data::ConfigBaseGadgetTriggerActionList *p_trigger_life_over_actions; // rsi
  bool kill_by_other; // cl
  char v5; // al
  float die_delay_time; // xmm0_4
  __int64 v7; // rsi
  bool fire_aisound_event; // cl
  char v9; // al
  float max_auto_kill_dist; // xmm0_4
  __int64 v11; // rsi
  float enable_collision_delay; // xmm0_4
  __int64 v13; // rsi
  __int64 v14; // rdx
  bool reset_last_pos_on_delay_end; // cl
  char v16; // dl
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdx
  bool re_trigger_on_delay_end; // cl
  char v21; // dl
  __int64 v22; // rdx

  data::ConfigGadgetPattern::ConfigGadgetPattern(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBulletPattern + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGadgetPattern = v2;
  std::vector<std::shared_ptr<data::ConfigBaseGadgetTriggerAction>>::vector(
    &this->trigger_actions,
    &a2->trigger_actions);
  p_trigger_life_over_actions = &a2->trigger_life_over_actions;
  std::vector<std::shared_ptr<data::ConfigBaseGadgetTriggerAction>>::vector(
    &this->trigger_life_over_actions,
    &a2->trigger_life_over_actions);
  if ( *(char *)(((unsigned __int64)&a2->kill_by_other >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->kill_by_other, p_trigger_life_over_actions, &a2->kill_by_other);
  kill_by_other = a2->kill_by_other;
  v5 = *(_BYTE *)(((unsigned __int64)&this->kill_by_other >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_trigger_life_over_actions) = v5 != 0;
    __asan_report_store1(&this->kill_by_other, p_trigger_life_over_actions, &this->kill_by_other);
  }
  this->kill_by_other = kill_by_other;
  if ( *(_BYTE *)(((unsigned __int64)&a2->die_delay_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->die_delay_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->die_delay_time);
  }
  die_delay_time = a2->die_delay_time;
  v7 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->die_delay_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->die_delay_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->die_delay_time, v7);
  }
  this->die_delay_time = die_delay_time;
  if ( *(char *)(((unsigned __int64)&a2->fire_aisound_event >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->fire_aisound_event, v7, &a2->fire_aisound_event);
  fire_aisound_event = a2->fire_aisound_event;
  v9 = *(_BYTE *)(((unsigned __int64)&this->fire_aisound_event >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(v7) = v9 != 0;
    __asan_report_store1(&this->fire_aisound_event, v7, &this->fire_aisound_event);
  }
  this->fire_aisound_event = fire_aisound_event;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_auto_kill_dist >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->max_auto_kill_dist >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->max_auto_kill_dist);
  }
  max_auto_kill_dist = a2->max_auto_kill_dist;
  v11 = (((_BYTE)this + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_auto_kill_dist >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_auto_kill_dist >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_auto_kill_dist, v11);
  }
  this->max_auto_kill_dist = max_auto_kill_dist;
  if ( *(_BYTE *)(((unsigned __int64)&a2->enable_collision_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->enable_collision_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->enable_collision_delay);
  }
  enable_collision_delay = a2->enable_collision_delay;
  if ( *(_BYTE *)(((unsigned __int64)&this->enable_collision_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->enable_collision_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->enable_collision_delay, v11);
  }
  this->enable_collision_delay = enable_collision_delay;
  v13 = ((_BYTE)a2 + 124) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&a2->reset_last_pos_on_delay_end >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&a2->reset_last_pos_on_delay_end >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_load1(&a2->reset_last_pos_on_delay_end, v13, v14);
  reset_last_pos_on_delay_end = a2->reset_last_pos_on_delay_end;
  v16 = *(_BYTE *)(((unsigned __int64)&this->reset_last_pos_on_delay_end >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v16 != 0;
  v17 = (v16 != 0) & (unsigned __int8)((((unsigned __int8)this + 124) & 7) >= v16);
  if ( (_BYTE)v17 )
    __asan_report_store1(&this->reset_last_pos_on_delay_end, v13, v17);
  this->reset_last_pos_on_delay_end = reset_last_pos_on_delay_end;
  v18 = ((_BYTE)a2 + 125) & 7;
  v19 = (*(_BYTE *)(((unsigned __int64)&a2->re_trigger_on_delay_end >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v18 >= *(_BYTE *)(((unsigned __int64)&a2->re_trigger_on_delay_end >> 3) + 0x7FFF8000));
  if ( (_BYTE)v19 )
    __asan_report_load1(&a2->re_trigger_on_delay_end, v18, v19);
  re_trigger_on_delay_end = a2->re_trigger_on_delay_end;
  v21 = *(_BYTE *)(((unsigned __int64)&this->re_trigger_on_delay_end >> 3) + 0x7FFF8000);
  LOBYTE(v18) = v21 != 0;
  v22 = (v21 != 0) & (unsigned __int8)((((unsigned __int8)this + 125) & 7) >= v21);
  if ( (_BYTE)v22 )
    __asan_report_store1(&this->re_trigger_on_delay_end, v18, v22);
  this->re_trigger_on_delay_end = re_trigger_on_delay_end;
};

// Line 328: range 00000000126F528C-00000000126F52B6
void __cdecl data::ConfigBulletPattern::~ConfigBulletPattern(data::ConfigBulletPattern *const this)
{
  data::ConfigBulletPattern::~ConfigBulletPattern(this);
  operator delete(this, 0x80uLL);
};

// Line 328: range 00000000126F521E-00000000126F528B
void __cdecl data::ConfigBulletPattern::~ConfigBulletPattern(data::ConfigBulletPattern *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBulletPattern + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetPattern = v2;
  std::vector<std::shared_ptr<data::ConfigBaseGadgetTriggerAction>>::~vector(&this->trigger_life_over_actions);
  std::vector<std::shared_ptr<data::ConfigBaseGadgetTriggerAction>>::~vector(&this->trigger_actions);
  data::ConfigGadgetPattern::~ConfigGadgetPattern(this);
};

// Line 333: range 000000001214FDFE-000000001214FE0E
const char *__cdecl data::ConfigBulletPattern::getTypeName(const data::ConfigBulletPattern *const this)
{
  return "ConfigBulletPattern";
};

// Line 334: range 000000001214FE10-000000001214FFAC
int32_t __cdecl data::ConfigBulletPattern::getHashNum(const data::ConfigBulletPattern *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigBulletPattern::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBulletPattern",
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

// Line 368: range 00000000126EED6A-00000000126EEE39
void __cdecl data::ConfigMultiBullet::ConfigMultiBullet(data::ConfigMultiBullet *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  std::enable_shared_from_this<data::ConfigMultiBullet>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigMultiBullet>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMultiBullet + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMultiBullet = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->select_target_default_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->select_target_default_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->select_target_default_type, v1);
  }
  this->select_target_default_type = First;
  v3 = ((_BYTE)this + 28) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 368: range 00000000126F42D6-00000000126F442B
void __cdecl data::ConfigMultiBullet::ConfigMultiBullet(
        data::ConfigMultiBullet *const this,
        const data::ConfigMultiBullet *a2)
{
  std::enable_shared_from_this<data::ConfigMultiBullet> *v2; // rsi
  int (**v3)(...); // rdx
  data::SelectTargetDefaultType select_target_default_type; // ecx
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool is_json_loaded; // cl
  char v9; // dl
  __int64 v10; // rdx

  v2 = &a2->std::enable_shared_from_this<data::ConfigMultiBullet>;
  std::enable_shared_from_this<data::ConfigMultiBullet>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigMultiBullet>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigMultiBullet + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigMultiBullet = v3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->select_target_default_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->select_target_default_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->select_target_default_type);
  }
  select_target_default_type = a2->select_target_default_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->select_target_default_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store4(&this->select_target_default_type, v2);
  }
  this->select_target_default_type = select_target_default_type;
  v6 = ((_BYTE)a2 + 28) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_load1(&a2->is_json_loaded, v6, v7);
  is_json_loaded = a2->is_json_loaded;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((((unsigned __int8)this + 28) & 7) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_json_loaded, v6, v10);
  this->is_json_loaded = is_json_loaded;
};

// Line 376: range 00000000126F46C6-00000000126F46F0
void __cdecl data::ConfigMultiBullet::~ConfigMultiBullet(data::ConfigMultiBullet *const this)
{
  data::ConfigMultiBullet::~ConfigMultiBullet(this);
  operator delete(this, 0x20uLL);
};

// Line 376: range 00000000126F4674-00000000126F46C5
void __cdecl data::ConfigMultiBullet::~ConfigMultiBullet(data::ConfigMultiBullet *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMultiBullet + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMultiBullet = v2;
  std::enable_shared_from_this<data::ConfigMultiBullet>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigMultiBullet>);
};

// Line 381: range 000000001214FFAE-000000001214FFBE
const char *__cdecl data::ConfigMultiBullet::getTypeName(const data::ConfigMultiBullet *const this)
{
  return "ConfigMultiBullet";
};

// Line 382: range 000000001214FFC0-000000001215015C
int32_t __cdecl data::ConfigMultiBullet::getHashNum(const data::ConfigMultiBullet *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMultiBullet::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMultiBullet",
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

// Line 401: range 00000000126F46F2-00000000126F474F
void __cdecl data::ConfigEffectItanoCircusBullet::ConfigEffectItanoCircusBullet(
        data::ConfigEffectItanoCircusBullet *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMultiBullet::ConfigMultiBullet(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigEffectItanoCircusBullet + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMultiBullet = v2;
  std::string::basic_string(&this->effect_pattern);
};

// Line 401: range 00000000126F4B54-00000000126F4BEA
void __cdecl data::ConfigEffectItanoCircusBullet::ConfigEffectItanoCircusBullet(
        data::ConfigEffectItanoCircusBullet *const this,
        const data::ConfigEffectItanoCircusBullet *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMultiBullet::ConfigMultiBullet(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigEffectItanoCircusBullet + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMultiBullet = v2;
  std::string::basic_string(&this->effect_pattern, &a2->effect_pattern);
};

// Line 408: range 000000001274DD7E-000000001274DDA8
void __cdecl data::ConfigEffectItanoCircusBullet::~ConfigEffectItanoCircusBullet(
        data::ConfigEffectItanoCircusBullet *const this)
{
  data::ConfigEffectItanoCircusBullet::~ConfigEffectItanoCircusBullet(this);
  operator delete(this, 0x40uLL);
};

// Line 408: range 000000001274DD20-000000001274DD7D
void __cdecl data::ConfigEffectItanoCircusBullet::~ConfigEffectItanoCircusBullet(
        data::ConfigEffectItanoCircusBullet *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigEffectItanoCircusBullet + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMultiBullet = v2;
  std::string::~string(&this->effect_pattern);
  data::ConfigMultiBullet::~ConfigMultiBullet(this);
};

// Line 413: range 000000001215015E-000000001215016E
const char *__cdecl data::ConfigEffectItanoCircusBullet::getTypeName(
        const data::ConfigEffectItanoCircusBullet *const this)
{
  return "ConfigEffectItanoCircusBullet";
};

// Line 414: range 0000000012150170-000000001215030C
int32_t __cdecl data::ConfigEffectItanoCircusBullet::getHashNum(const data::ConfigEffectItanoCircusBullet *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigEffectItanoCircusBullet::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigEffectItanoCircusBullet",
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

// Line 430: range 00000000126F4ED4-00000000126F4F15
void __cdecl data::ConfigEffectItanoCircusBulletFactory::ConfigEffectItanoCircusBulletFactory(
        data::ConfigEffectItanoCircusBulletFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigEffectItanoCircusBulletFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEffectItanoCircusBulletFactory = v2;
};

// Line 438: range 00000000126F52B8-00000000126F539E
void __cdecl data::ConfigMultiBulletPattern::ConfigMultiBulletPattern(data::ConfigMultiBulletPattern *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBulletPattern::ConfigBulletPattern(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMultiBulletPattern + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetPattern = v2;
  if ( *(_WORD *)(((unsigned __int64)&this->multi_bullet_config >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigMultiBullet>();
  if ( *(char *)(((unsigned __int64)&this->disable_trigger_action >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->disable_trigger_action, v1, &this->disable_trigger_action);
  this->disable_trigger_action = 0;
};

// Line 438: range 00000000126F57F0-00000000126F58E3
void __cdecl data::ConfigMultiBulletPattern::ConfigMultiBulletPattern(
        data::ConfigMultiBulletPattern *const this,
        const data::ConfigMultiBulletPattern *a2)
{
  int (**v2)(...); // rdx
  data::ConfigMultiBulletPtr *p_multi_bullet_config; // rsi
  bool disable_trigger_action; // cl
  char v5; // al

  data::ConfigBulletPattern::ConfigBulletPattern(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMultiBulletPattern + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGadgetPattern = v2;
  p_multi_bullet_config = &a2->multi_bullet_config;
  std::shared_ptr<data::ConfigMultiBullet>::shared_ptr(&this->multi_bullet_config, &a2->multi_bullet_config);
  if ( *(char *)(((unsigned __int64)&a2->disable_trigger_action >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->disable_trigger_action, p_multi_bullet_config, &a2->disable_trigger_action);
  disable_trigger_action = a2->disable_trigger_action;
  v5 = *(_BYTE *)(((unsigned __int64)&this->disable_trigger_action >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_multi_bullet_config) = v5 != 0;
    __asan_report_store1(&this->disable_trigger_action, p_multi_bullet_config, &this->disable_trigger_action);
  }
  this->disable_trigger_action = disable_trigger_action;
};

// Line 446: range 000000001274DCF4-000000001274DD1E
void __cdecl data::ConfigMultiBulletPattern::~ConfigMultiBulletPattern(data::ConfigMultiBulletPattern *const this)
{
  data::ConfigMultiBulletPattern::~ConfigMultiBulletPattern(this);
  operator delete(this, 0x98uLL);
};

// Line 446: range 000000001274DC96-000000001274DCF3
void __cdecl data::ConfigMultiBulletPattern::~ConfigMultiBulletPattern(data::ConfigMultiBulletPattern *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMultiBulletPattern + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetPattern = v2;
  std::shared_ptr<data::ConfigMultiBullet>::~shared_ptr(&this->multi_bullet_config);
  data::ConfigBulletPattern::~ConfigBulletPattern(this);
};

// Line 451: range 000000001215034A-000000001215035A
const char *__cdecl data::ConfigMultiBulletPattern::getTypeName(const data::ConfigMultiBulletPattern *const this)
{
  return "ConfigMultiBulletPattern";
};

// Line 452: range 000000001215035C-00000000121504F8
int32_t __cdecl data::ConfigMultiBulletPattern::getHashNum(const data::ConfigMultiBulletPattern *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMultiBulletPattern::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMultiBulletPattern",
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

// Line 468: range 00000000126F5BCC-00000000126F5C0D
void __cdecl data::ConfigMultiBulletPatternFactory::ConfigMultiBulletPatternFactory(
        data::ConfigMultiBulletPatternFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMultiBulletPatternFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMultiBulletPatternFactory = v2;
};
