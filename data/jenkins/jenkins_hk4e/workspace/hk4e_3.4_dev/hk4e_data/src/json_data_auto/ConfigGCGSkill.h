// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigGCGSkill.h

// Line 48: range 000000000D29002A-000000000D290044
void __cdecl data::GCGDeclare::~GCGDeclare(data::GCGDeclare *const this)
{
  std::string::~string(this);
};

// Line 129: range 000000000D46B74A-000000000D46B858
void __cdecl data::ConfigGCGTrigger::ConfigGCGTrigger(
        data::ConfigGCGTrigger *const this,
        const data::ConfigGCGTrigger *a2)
{
  data::GCGTriggerType type; // ecx
  char v3; // al
  data::ConfigGCGLogicConditionPtr *p_condition; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  const data::ConfigGCGTrigger *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  type = a2->type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->type = type;
  p_condition = &v7->condition;
  std::shared_ptr<data::ConfigGCGLogicCondition>::shared_ptr(&this->condition, &v7->condition);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_condition, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_condition) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_condition, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 254: range 000000000DE6A506-000000000DE6A5D5
void __cdecl data::GCGDeclaredValue::GCGDeclaredValue(data::GCGDeclaredValue *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  std::enable_shared_from_this<data::GCGDeclaredValue>::enable_shared_from_this(&this->std::enable_shared_from_this<data::GCGDeclaredValue>);
  v2 = (int (**)(...))(&`vtable for'data::GCGDeclaredValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGDeclaredValue = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = Damage;
  v3 = ((_BYTE)this + 28) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 254: range 000000000DE6AAD8-000000000DE6AC2D
void __cdecl data::GCGDeclaredValue::GCGDeclaredValue(
        data::GCGDeclaredValue *const this,
        const data::GCGDeclaredValue *a2)
{
  std::enable_shared_from_this<data::GCGDeclaredValue> *v2; // rsi
  int (**v3)(...); // rdx
  data::GCGDeclaredValueType type; // ecx
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool is_json_loaded; // cl
  char v9; // dl
  __int64 v10; // rdx

  v2 = &a2->std::enable_shared_from_this<data::GCGDeclaredValue>;
  std::enable_shared_from_this<data::GCGDeclaredValue>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::GCGDeclaredValue>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::GCGDeclaredValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_GCGDeclaredValue = v3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store4(&this->type, v2);
  }
  this->type = type;
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

// Line 262: range 000000000DE6AF18-000000000DE6AF42
void __cdecl data::GCGDeclaredValue::~GCGDeclaredValue(data::GCGDeclaredValue *const this)
{
  data::GCGDeclaredValue::~GCGDeclaredValue(this);
  operator delete(this, 0x20uLL);
};

// Line 267: range 000000000D7414EE-000000000D7414FE
const char *__cdecl data::GCGDeclaredValue::getTypeName(const data::GCGDeclaredValue *const this)
{
  return "GCGDeclaredValue";
};

// Line 268: range 000000000D741500-000000000D74169C
int32_t __cdecl data::GCGDeclaredValue::getHashNum(const data::GCGDeclaredValue *const this)
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
  *(_QWORD *)(v1 + 16) = data::GCGDeclaredValue::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "GCGDeclaredValue",
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

// Line 287: range 000000000DE6AF44-000000000DE6AFCF
void __cdecl data::GCGDeclaredValueDamage::GCGDeclaredValueDamage(data::GCGDeclaredValueDamage *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::GCGDeclaredValue::GCGDeclaredValue(this);
  v2 = (int (**)(...))(&`vtable for'data::GCGDeclaredValueDamage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGDeclaredValue = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, v1);
  }
  this->value = 0;
};

// Line 287: range 000000000DE6B4D0-000000000DE6B59D
void __cdecl data::GCGDeclaredValueDamage::GCGDeclaredValueDamage(
        data::GCGDeclaredValueDamage *const this,
        const data::GCGDeclaredValueDamage *a2)
{
  int (**v2)(...); // rdx
  uint32_t value; // ecx
  char v4; // al

  data::GCGDeclaredValue::GCGDeclaredValue(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::GCGDeclaredValueDamage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGDeclaredValue = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  v4 = *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->value, a2);
  }
  this->value = value;
};

// Line 294: range 000000000DF55412-000000000DF5543C
void __cdecl data::GCGDeclaredValueDamage::~GCGDeclaredValueDamage(data::GCGDeclaredValueDamage *const this)
{
  data::GCGDeclaredValueDamage::~GCGDeclaredValueDamage(this);
  operator delete(this, 0x28uLL);
};

// Line 294: range 000000000DF553C4-000000000DF55411
void __cdecl data::GCGDeclaredValueDamage::~GCGDeclaredValueDamage(data::GCGDeclaredValueDamage *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGDeclaredValueDamage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGDeclaredValue = v2;
  data::GCGDeclaredValue::~GCGDeclaredValue(this);
};

// Line 299: range 000000000D74169E-000000000D7416AE
const char *__cdecl data::GCGDeclaredValueDamage::getTypeName(const data::GCGDeclaredValueDamage *const this)
{
  return "GCGDeclaredValueDamage";
};

// Line 300: range 000000000D7416B0-000000000D74184C
int32_t __cdecl data::GCGDeclaredValueDamage::getHashNum(const data::GCGDeclaredValueDamage *const this)
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
  *(_QWORD *)(v1 + 16) = data::GCGDeclaredValueDamage::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "GCGDeclaredValueDamage",
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

// Line 316: range 000000000DE6B7E6-000000000DE6B827
void __cdecl data::GCGDeclaredValueDamageFactory::GCGDeclaredValueDamageFactory(
        data::GCGDeclaredValueDamageFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGDeclaredValueDamageFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGDeclaredValueDamageFactory = v2;
};

// Line 324: range 000000000DE6BB30-000000000DE6BBBB
void __cdecl data::GCGDeclaredValueElement::GCGDeclaredValueElement(data::GCGDeclaredValueElement *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::GCGDeclaredValue::GCGDeclaredValue(this);
  v2 = (int (**)(...))(&`vtable for'data::GCGDeclaredValueElement + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGDeclaredValue = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, v1);
  }
  this->value = GCG_ELEMENT_PHYSIC;
};

// Line 324: range 000000000DE6C0BC-000000000DE6C189
void __cdecl data::GCGDeclaredValueElement::GCGDeclaredValueElement(
        data::GCGDeclaredValueElement *const this,
        const data::GCGDeclaredValueElement *a2)
{
  int (**v2)(...); // rdx
  data::GCGEffectElementType value; // ecx
  char v4; // al

  data::GCGDeclaredValue::GCGDeclaredValue(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::GCGDeclaredValueElement + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGDeclaredValue = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  v4 = *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->value, a2);
  }
  this->value = value;
};

// Line 331: range 000000000DF5534A-000000000DF55397
void __cdecl data::GCGDeclaredValueElement::~GCGDeclaredValueElement(data::GCGDeclaredValueElement *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGDeclaredValueElement + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGDeclaredValue = v2;
  data::GCGDeclaredValue::~GCGDeclaredValue(this);
};

// Line 331: range 000000000DF55398-000000000DF553C2
void __cdecl data::GCGDeclaredValueElement::~GCGDeclaredValueElement(data::GCGDeclaredValueElement *const this)
{
  data::GCGDeclaredValueElement::~GCGDeclaredValueElement(this);
  operator delete(this, 0x28uLL);
};

// Line 336: range 000000000D74184E-000000000D74185E
const char *__cdecl data::GCGDeclaredValueElement::getTypeName(const data::GCGDeclaredValueElement *const this)
{
  return "GCGDeclaredValueElement";
};

// Line 337: range 000000000D741860-000000000D7419FC
int32_t __cdecl data::GCGDeclaredValueElement::getHashNum(const data::GCGDeclaredValueElement *const this)
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
  *(_QWORD *)(v1 + 16) = data::GCGDeclaredValueElement::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "GCGDeclaredValueElement",
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

// Line 353: range 000000000DE6C3D2-000000000DE6C413
void __cdecl data::GCGDeclaredValueElementFactory::GCGDeclaredValueElementFactory(
        data::GCGDeclaredValueElementFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGDeclaredValueElementFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGDeclaredValueElementFactory = v2;
};

// Line 361: range 000000000DE6C71C-000000000DE6C7A7
void __cdecl data::GCGDeclaredValueIndirectDamage::GCGDeclaredValueIndirectDamage(
        data::GCGDeclaredValueIndirectDamage *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::GCGDeclaredValue::GCGDeclaredValue(this);
  v2 = (int (**)(...))(&`vtable for'data::GCGDeclaredValueIndirectDamage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGDeclaredValue = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, v1);
  }
  this->value = 0;
};

// Line 361: range 000000000DE6CCA8-000000000DE6CD75
void __cdecl data::GCGDeclaredValueIndirectDamage::GCGDeclaredValueIndirectDamage(
        data::GCGDeclaredValueIndirectDamage *const this,
        const data::GCGDeclaredValueIndirectDamage *a2)
{
  int (**v2)(...); // rdx
  uint32_t value; // ecx
  char v4; // al

  data::GCGDeclaredValue::GCGDeclaredValue(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::GCGDeclaredValueIndirectDamage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGDeclaredValue = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  v4 = *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->value, a2);
  }
  this->value = value;
};

// Line 368: range 000000000DF552D0-000000000DF5531D
void __cdecl data::GCGDeclaredValueIndirectDamage::~GCGDeclaredValueIndirectDamage(
        data::GCGDeclaredValueIndirectDamage *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGDeclaredValueIndirectDamage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGDeclaredValue = v2;
  data::GCGDeclaredValue::~GCGDeclaredValue(this);
};

// Line 368: range 000000000DF5531E-000000000DF55348
void __cdecl data::GCGDeclaredValueIndirectDamage::~GCGDeclaredValueIndirectDamage(
        data::GCGDeclaredValueIndirectDamage *const this)
{
  data::GCGDeclaredValueIndirectDamage::~GCGDeclaredValueIndirectDamage(this);
  operator delete(this, 0x28uLL);
};

// Line 373: range 000000000D7419FE-000000000D741A0E
const char *__cdecl data::GCGDeclaredValueIndirectDamage::getTypeName(
        const data::GCGDeclaredValueIndirectDamage *const this)
{
  return "GCGDeclaredValueIndirectDamage";
};

// Line 374: range 000000000D741A10-000000000D741BAC
int32_t __cdecl data::GCGDeclaredValueIndirectDamage::getHashNum(
        const data::GCGDeclaredValueIndirectDamage *const this)
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
  *(_QWORD *)(v1 + 16) = data::GCGDeclaredValueIndirectDamage::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "GCGDeclaredValueIndirectDamage",
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

// Line 390: range 000000000DE6CFBE-000000000DE6CFFF
void __cdecl data::GCGDeclaredValueIndirectDamageFactory::GCGDeclaredValueIndirectDamageFactory(
        data::GCGDeclaredValueIndirectDamageFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGDeclaredValueIndirectDamageFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGDeclaredValueIndirectDamageFactory = v2;
};

// Line 398: range 000000000DE6D308-000000000DE6D393
void __cdecl data::GCGDeclaredValueHealAmount::GCGDeclaredValueHealAmount(data::GCGDeclaredValueHealAmount *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::GCGDeclaredValue::GCGDeclaredValue(this);
  v2 = (int (**)(...))(&`vtable for'data::GCGDeclaredValueHealAmount + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGDeclaredValue = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, v1);
  }
  this->value = 0;
};

// Line 398: range 000000000DE6D894-000000000DE6D961
void __cdecl data::GCGDeclaredValueHealAmount::GCGDeclaredValueHealAmount(
        data::GCGDeclaredValueHealAmount *const this,
        const data::GCGDeclaredValueHealAmount *a2)
{
  int (**v2)(...); // rdx
  uint32_t value; // ecx
  char v4; // al

  data::GCGDeclaredValue::GCGDeclaredValue(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::GCGDeclaredValueHealAmount + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGDeclaredValue = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  v4 = *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->value, a2);
  }
  this->value = value;
};

// Line 405: range 000000000DF55256-000000000DF552A3
void __cdecl data::GCGDeclaredValueHealAmount::~GCGDeclaredValueHealAmount(
        data::GCGDeclaredValueHealAmount *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGDeclaredValueHealAmount + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGDeclaredValue = v2;
  data::GCGDeclaredValue::~GCGDeclaredValue(this);
};

// Line 405: range 000000000DF552A4-000000000DF552CE
void __cdecl data::GCGDeclaredValueHealAmount::~GCGDeclaredValueHealAmount(
        data::GCGDeclaredValueHealAmount *const this)
{
  data::GCGDeclaredValueHealAmount::~GCGDeclaredValueHealAmount(this);
  operator delete(this, 0x28uLL);
};

// Line 410: range 000000000D741BAE-000000000D741BBE
const char *__cdecl data::GCGDeclaredValueHealAmount::getTypeName(const data::GCGDeclaredValueHealAmount *const this)
{
  return "GCGDeclaredValueHealAmount";
};

// Line 411: range 000000000D741BC0-000000000D741D5C
int32_t __cdecl data::GCGDeclaredValueHealAmount::getHashNum(const data::GCGDeclaredValueHealAmount *const this)
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
  *(_QWORD *)(v1 + 16) = data::GCGDeclaredValueHealAmount::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "GCGDeclaredValueHealAmount",
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

// Line 427: range 000000000DE6DBAA-000000000DE6DBEB
void __cdecl data::GCGDeclaredValueHealAmountFactory::GCGDeclaredValueHealAmountFactory(
        data::GCGDeclaredValueHealAmountFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGDeclaredValueHealAmountFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGDeclaredValueHealAmountFactory = v2;
};

// Line 435: range 000000000DE6DEF4-000000000DE6DF7F
void __cdecl data::GCGDeclaredValueEffectAmount::GCGDeclaredValueEffectAmount(
        data::GCGDeclaredValueEffectAmount *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::GCGDeclaredValue::GCGDeclaredValue(this);
  v2 = (int (**)(...))(&`vtable for'data::GCGDeclaredValueEffectAmount + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGDeclaredValue = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, v1);
  }
  this->value = 0;
};

// Line 435: range 000000000DE6E480-000000000DE6E54D
void __cdecl data::GCGDeclaredValueEffectAmount::GCGDeclaredValueEffectAmount(
        data::GCGDeclaredValueEffectAmount *const this,
        const data::GCGDeclaredValueEffectAmount *a2)
{
  int (**v2)(...); // rdx
  uint32_t value; // ecx
  char v4; // al

  data::GCGDeclaredValue::GCGDeclaredValue(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::GCGDeclaredValueEffectAmount + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGDeclaredValue = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  v4 = *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->value, a2);
  }
  this->value = value;
};

// Line 442: range 000000000DF5522A-000000000DF55254
void __cdecl data::GCGDeclaredValueEffectAmount::~GCGDeclaredValueEffectAmount(
        data::GCGDeclaredValueEffectAmount *const this)
{
  data::GCGDeclaredValueEffectAmount::~GCGDeclaredValueEffectAmount(this);
  operator delete(this, 0x28uLL);
};

// Line 442: range 000000000DF551DC-000000000DF55229
void __cdecl data::GCGDeclaredValueEffectAmount::~GCGDeclaredValueEffectAmount(
        data::GCGDeclaredValueEffectAmount *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGDeclaredValueEffectAmount + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGDeclaredValue = v2;
  data::GCGDeclaredValue::~GCGDeclaredValue(this);
};

// Line 447: range 000000000D741D5E-000000000D741D6E
const char *__cdecl data::GCGDeclaredValueEffectAmount::getTypeName(
        const data::GCGDeclaredValueEffectAmount *const this)
{
  return "GCGDeclaredValueEffectAmount";
};

// Line 448: range 000000000D741D70-000000000D741F0C
int32_t __cdecl data::GCGDeclaredValueEffectAmount::getHashNum(const data::GCGDeclaredValueEffectAmount *const this)
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
  *(_QWORD *)(v1 + 16) = data::GCGDeclaredValueEffectAmount::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "GCGDeclaredValueEffectAmount",
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

// Line 464: range 000000000DE6E796-000000000DE6E7D7
void __cdecl data::GCGDeclaredValueEffectAmountFactory::GCGDeclaredValueEffectAmountFactory(
        data::GCGDeclaredValueEffectAmountFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGDeclaredValueEffectAmountFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGDeclaredValueEffectAmountFactory = v2;
};

// Line 472: range 000000000DE6EAE0-000000000DE6EB6B
void __cdecl data::GCGDeclaredValueToken::GCGDeclaredValueToken(data::GCGDeclaredValueToken *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::GCGDeclaredValue::GCGDeclaredValue(this);
  v2 = (int (**)(...))(&`vtable for'data::GCGDeclaredValueToken + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGDeclaredValue = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, v1);
  }
  this->value = GCG_TOKEN_NONE;
};

// Line 472: range 000000000DE6F06C-000000000DE6F139
void __cdecl data::GCGDeclaredValueToken::GCGDeclaredValueToken(
        data::GCGDeclaredValueToken *const this,
        const data::GCGDeclaredValueToken *a2)
{
  int (**v2)(...); // rdx
  data::GCGTokenType value; // ecx
  char v4; // al

  data::GCGDeclaredValue::GCGDeclaredValue(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::GCGDeclaredValueToken + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGDeclaredValue = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  v4 = *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->value, a2);
  }
  this->value = value;
};

// Line 479: range 000000000DF55162-000000000DF551AF
void __cdecl data::GCGDeclaredValueToken::~GCGDeclaredValueToken(data::GCGDeclaredValueToken *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGDeclaredValueToken + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGDeclaredValue = v2;
  data::GCGDeclaredValue::~GCGDeclaredValue(this);
};

// Line 479: range 000000000DF551B0-000000000DF551DA
void __cdecl data::GCGDeclaredValueToken::~GCGDeclaredValueToken(data::GCGDeclaredValueToken *const this)
{
  data::GCGDeclaredValueToken::~GCGDeclaredValueToken(this);
  operator delete(this, 0x28uLL);
};

// Line 484: range 000000000D741F0E-000000000D741F1E
const char *__cdecl data::GCGDeclaredValueToken::getTypeName(const data::GCGDeclaredValueToken *const this)
{
  return "GCGDeclaredValueToken";
};

// Line 485: range 000000000D741F20-000000000D7420BC
int32_t __cdecl data::GCGDeclaredValueToken::getHashNum(const data::GCGDeclaredValueToken *const this)
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
  *(_QWORD *)(v1 + 16) = data::GCGDeclaredValueToken::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "GCGDeclaredValueToken",
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

// Line 501: range 000000000DE6F382-000000000DE6F3C3
void __cdecl data::GCGDeclaredValueTokenFactory::GCGDeclaredValueTokenFactory(
        data::GCGDeclaredValueTokenFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGDeclaredValueTokenFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGDeclaredValueTokenFactory = v2;
};

// Line 516: range 000000000D46BA6C-000000000D46BBFA
void __cdecl data::ConfigGCGLimit::ConfigGCGLimit(data::ConfigGCGLimit *const this, const data::ConfigGCGLimit *a2)
{
  data::GCGTriggerLimitType type; // ecx
  char v3; // al
  data::GCGDeclare *p_declare_value; // rsi
  bool is_need_notify; // cl
  char v6; // al
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool is_json_loaded; // cl
  char v10; // dl
  __int64 v11; // rdx
  const data::ConfigGCGLimit *v12; // [rsp+0h] [rbp-10h]

  v12 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  type = a2->type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->type = type;
  p_declare_value = &v12->declare_value;
  data::GCGDeclare::GCGDeclare(&this->declare_value, &v12->declare_value);
  if ( *(char *)(((unsigned __int64)&v12->is_need_notify >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v12->is_need_notify, p_declare_value, &v12->is_need_notify);
  is_need_notify = v12->is_need_notify;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_need_notify >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_declare_value) = v6 != 0;
    __asan_report_store1(&this->is_need_notify, p_declare_value, &this->is_need_notify);
  }
  this->is_need_notify = is_need_notify;
  v7 = ((_BYTE)v12 + 49) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&v12->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&v12->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&v12->is_json_loaded, v7, v8);
  is_json_loaded = v12->is_json_loaded;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this + 49) & 7) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->is_json_loaded, v7, v11);
  this->is_json_loaded = is_json_loaded;
};

// Line 516: range 000000000D755570-000000000D7555C5
void __cdecl data::GCGDeclare::GCGDeclare(data::GCGDeclare *const this)
{
  __int64 v1; // rsi

  std::string::basic_string(this);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 516: range 000000000D46B9D0-000000000D46BA6B
void __cdecl data::GCGDeclare::GCGDeclare(data::GCGDeclare *const this, const data::GCGDeclare *a2)
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

// Line 516: range 000000000D925DE6-000000000D925E81
void __cdecl data::GCGDeclare::GCGDeclare(data::GCGDeclare *const this, data::GCGDeclare *a2)
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

// Line 555: range 000000000D7555C6-000000000D755698
void __cdecl data::ConfigGCGLimit::ConfigGCGLimit(data::ConfigGCGLimit *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->type = Round;
  data::GCGDeclare::GCGDeclare(&this->declare_value);
  if ( *(char *)(((unsigned __int64)&this->is_need_notify >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_need_notify, v1, &this->is_need_notify);
  this->is_need_notify = 0;
  v2 = ((_BYTE)this + 49) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_json_loaded, v2, v3);
  this->is_json_loaded = 0;
};

// Line 555: range 000000000D925E82-000000000D926010
void __cdecl data::ConfigGCGLimit::ConfigGCGLimit(data::ConfigGCGLimit *const this, data::ConfigGCGLimit *a2)
{
  data::GCGTriggerLimitType type; // ecx
  char v3; // al
  data::GCGDeclare *p_declare_value; // rsi
  bool is_need_notify; // cl
  char v6; // al
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool is_json_loaded; // cl
  char v10; // dl
  __int64 v11; // rdx
  data::ConfigGCGLimit *v12; // [rsp+0h] [rbp-10h]

  v12 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  type = a2->type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->type = type;
  p_declare_value = &v12->declare_value;
  data::GCGDeclare::GCGDeclare(&this->declare_value, &v12->declare_value);
  if ( *(char *)(((unsigned __int64)&v12->is_need_notify >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v12->is_need_notify, p_declare_value, &v12->is_need_notify);
  is_need_notify = v12->is_need_notify;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_need_notify >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_declare_value) = v6 != 0;
    __asan_report_store1(&this->is_need_notify, p_declare_value, &this->is_need_notify);
  }
  this->is_need_notify = is_need_notify;
  v7 = ((_BYTE)v12 + 49) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&v12->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&v12->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&v12->is_json_loaded, v7, v8);
  is_json_loaded = v12->is_json_loaded;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this + 49) & 7) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->is_json_loaded, v7, v11);
  this->is_json_loaded = is_json_loaded;
};

// Line 555: range 000000000D290046-000000000D290064
void __cdecl data::ConfigGCGLimit::~ConfigGCGLimit(data::ConfigGCGLimit *const this)
{
  data::GCGDeclare::~GCGDeclare(&this->declare_value);
};

// Line 585: range 000000000DE68D4A-000000000DE68DD6
void __cdecl data::ConfigGCGCondition::ConfigGCGCondition(data::ConfigGCGCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::ConfigGCGCondition>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigGCGCondition>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 585: range 000000000DE6FCF4-000000000DE6FDCA
void __cdecl data::ConfigGCGCondition::ConfigGCGCondition(
        data::ConfigGCGCondition *const this,
        const data::ConfigGCGCondition *a2)
{
  std::enable_shared_from_this<data::ConfigGCGCondition> *v2; // rsi
  int (**v3)(...); // rdx
  bool is_json_loaded; // cl
  char v5; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigGCGCondition>;
  std::enable_shared_from_this<data::ConfigGCGCondition>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigGCGCondition>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigGCGCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigGCGCondition = v3;
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

// Line 592: range 000000000DE68DD8-000000000DE68E29
void __cdecl data::ConfigGCGCondition::~ConfigGCGCondition(data::ConfigGCGCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  std::enable_shared_from_this<data::ConfigGCGCondition>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigGCGCondition>);
};

// Line 592: range 000000000DE68E2A-000000000DE68E54
void __cdecl data::ConfigGCGCondition::~ConfigGCGCondition(data::ConfigGCGCondition *const this)
{
  data::ConfigGCGCondition::~ConfigGCGCondition(this);
  operator delete(this, 0x20uLL);
};

// Line 597: range 000000000D7420BE-000000000D7420CE
const char *__cdecl data::ConfigGCGCondition::getTypeName(const data::ConfigGCGCondition *const this)
{
  return "ConfigGCGCondition";
};

// Line 598: range 000000000D7420D0-000000000D74226C
int32_t __cdecl data::ConfigGCGCondition::getHashNum(const data::ConfigGCGCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGCondition",
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

// Line 605: range 000000000D74226E-000000000D742284
int32_t __cdecl data::ConfigGCGCondition::checkCondition(
        data::ConfigGCGCondition *const this,
        const GCGSkill *cur_skill,
        const GCGEffectContext *context)
{
  return 0;
};

// Line 606: range 000000000D742286-000000000D7422A7
std::string *__cdecl data::ConfigGCGCondition::getShortName[abi:cxx11](
        std::string *retstr,
        data::ConfigGCGCondition *const this)
{
  std::string::basic_string(retstr);
  return retstr;
};

// Line 646: range 000000000DE701BC-000000000DE7024F
void __cdecl data::ConfigGCGConditionConstIntegerValue::ConfigGCGConditionConstIntegerValue(
        data::ConfigGCGConditionConstIntegerValue *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition((data::ConfigGCGCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionConstIntegerValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->const_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->const_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->const_value, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->const_value = 0;
};

// Line 646: range 000000000DE706E4-000000000DE707C1
void __cdecl data::ConfigGCGConditionConstIntegerValue::ConfigGCGConditionConstIntegerValue(
        data::ConfigGCGConditionConstIntegerValue *const this,
        const data::ConfigGCGConditionConstIntegerValue *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  int32_t const_value; // ecx
  char v5; // dl

  data::ConfigGCGCondition::ConfigGCGCondition(
    (data::ConfigGCGCondition *const)this,
    (const data::ConfigGCGCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionConstIntegerValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->const_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->const_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->const_value);
  }
  const_value = a2->const_value;
  v5 = *(_BYTE *)(((unsigned __int64)&this->const_value >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->const_value, v3);
  }
  this->const_value = const_value;
};

// Line 653: range 000000000DF550E8-000000000DF55135
void __cdecl data::ConfigGCGConditionConstIntegerValue::~ConfigGCGConditionConstIntegerValue(
        data::ConfigGCGConditionConstIntegerValue *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionConstIntegerValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition((data::ConfigGCGCondition *const)this);
};

// Line 653: range 000000000DF55136-000000000DF55160
void __cdecl data::ConfigGCGConditionConstIntegerValue::~ConfigGCGConditionConstIntegerValue(
        data::ConfigGCGConditionConstIntegerValue *const this)
{
  data::ConfigGCGConditionConstIntegerValue::~ConfigGCGConditionConstIntegerValue(this);
  operator delete(this, 0x20uLL);
};

// Line 658: range 000000000D7422A8-000000000D7422B8
const char *__cdecl data::ConfigGCGConditionConstIntegerValue::getTypeName(
        const data::ConfigGCGConditionConstIntegerValue *const this)
{
  return "ConfigGCGConditionConstIntegerValue";
};

// Line 659: range 000000000D7422BA-000000000D742456
int32_t __cdecl data::ConfigGCGConditionConstIntegerValue::getHashNum(
        const data::ConfigGCGConditionConstIntegerValue *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionConstIntegerValue::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionConstIntegerValue",
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

// Line 675: range 000000000DE70A0A-000000000DE70A4B
void __cdecl data::ConfigGCGConditionConstIntegerValueFactory::ConfigGCGConditionConstIntegerValueFactory(
        data::ConfigGCGConditionConstIntegerValueFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionConstIntegerValueFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionConstIntegerValueFactory = v2;
};

// Line 683: range 000000000DE68E8E-000000000DE68F31
void __cdecl data::ConfigGCGLogicCondition::ConfigGCGLogicCondition(data::ConfigGCGLogicCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition((data::ConfigGCGCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGLogicCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->type, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->type = AND;
  std::vector<std::shared_ptr<data::ConfigGCGCondition>>::vector(&this->conditions);
};

// Line 683: range 000000000DE70D54-000000000DE70E6F
void __cdecl data::ConfigGCGLogicCondition::ConfigGCGLogicCondition(
        data::ConfigGCGLogicCondition *const this,
        const data::ConfigGCGLogicCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GCGConditionType type; // ecx
  char v5; // dl

  data::ConfigGCGCondition::ConfigGCGCondition(
    (data::ConfigGCGCondition *const)this,
    (const data::ConfigGCGCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGLogicCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->type, v3);
  }
  this->type = type;
  std::vector<std::shared_ptr<data::ConfigGCGCondition>>::vector(&this->conditions, &a2->conditions);
};

// Line 691: range 000000000DF5505E-000000000DF550BB
void __cdecl data::ConfigGCGLogicCondition::~ConfigGCGLogicCondition(data::ConfigGCGLogicCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGLogicCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  std::vector<std::shared_ptr<data::ConfigGCGCondition>>::~vector(&this->conditions);
  data::ConfigGCGCondition::~ConfigGCGCondition((data::ConfigGCGCondition *const)this);
};

// Line 691: range 000000000DF550BC-000000000DF550E6
void __cdecl data::ConfigGCGLogicCondition::~ConfigGCGLogicCondition(data::ConfigGCGLogicCondition *const this)
{
  data::ConfigGCGLogicCondition::~ConfigGCGLogicCondition(this);
  operator delete(this, 0x38uLL);
};

// Line 696: range 000000000D742458-000000000D742468
const char *__cdecl data::ConfigGCGLogicCondition::getTypeName(const data::ConfigGCGLogicCondition *const this)
{
  return "ConfigGCGLogicCondition";
};

// Line 697: range 000000000D74246A-000000000D742606
int32_t __cdecl data::ConfigGCGLogicCondition::getHashNum(const data::ConfigGCGLogicCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGLogicCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGLogicCondition",
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

// Line 713: range 000000000DE71158-000000000DE71199
void __cdecl data::ConfigGCGLogicConditionFactory::ConfigGCGLogicConditionFactory(
        data::ConfigGCGLogicConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGLogicConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGLogicConditionFactory = v2;
};

// Line 721: range 000000000DE714A2-000000000DE714EF
void __cdecl data::ConfigGCGConditionGlobalFetchCurSkill::ConfigGCGConditionGlobalFetchCurSkill(
        data::ConfigGCGConditionGlobalFetchCurSkill *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchCurSkill + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 721: range 000000000DE71904-000000000DE7195C
void __cdecl data::ConfigGCGConditionGlobalFetchCurSkill::ConfigGCGConditionGlobalFetchCurSkill(
        data::ConfigGCGConditionGlobalFetchCurSkill *const this,
        const data::ConfigGCGConditionGlobalFetchCurSkill *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchCurSkill + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 727: range 000000000DF55032-000000000DF5505C
void __cdecl data::ConfigGCGConditionGlobalFetchCurSkill::~ConfigGCGConditionGlobalFetchCurSkill(
        data::ConfigGCGConditionGlobalFetchCurSkill *const this)
{
  data::ConfigGCGConditionGlobalFetchCurSkill::~ConfigGCGConditionGlobalFetchCurSkill(this);
  operator delete(this, 0x20uLL);
};

// Line 727: range 000000000DF54FE4-000000000DF55031
void __cdecl data::ConfigGCGConditionGlobalFetchCurSkill::~ConfigGCGConditionGlobalFetchCurSkill(
        data::ConfigGCGConditionGlobalFetchCurSkill *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchCurSkill + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition(this);
};

// Line 732: range 000000000D742608-000000000D742618
const char *__cdecl data::ConfigGCGConditionGlobalFetchCurSkill::getTypeName(
        const data::ConfigGCGConditionGlobalFetchCurSkill *const this)
{
  return "ConfigGCGConditionGlobalFetchCurSkill";
};

// Line 733: range 000000000D74261A-000000000D7427B6
int32_t __cdecl data::ConfigGCGConditionGlobalFetchCurSkill::getHashNum(
        const data::ConfigGCGConditionGlobalFetchCurSkill *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionGlobalFetchCurSkill::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionGlobalFetchCurSkill",
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

// Line 749: range 000000000DE71BA6-000000000DE71BE7
void __cdecl data::ConfigGCGConditionGlobalFetchCurSkillFactory::ConfigGCGConditionGlobalFetchCurSkillFactory(
        data::ConfigGCGConditionGlobalFetchCurSkillFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchCurSkillFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionGlobalFetchCurSkillFactory = v2;
};

// Line 757: range 000000000DE71EF0-000000000DE71F96
void __cdecl data::ConfigGCGConditionGlobalFetchCurSkillObject::ConfigGCGConditionGlobalFetchCurSkillObject(
        data::ConfigGCGConditionGlobalFetchCurSkillObject *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchCurSkillObject + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  if ( *(_WORD *)(((unsigned __int64)&this->condition >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigGCGLogicCondition>();
};

// Line 757: range 000000000DE724E0-000000000DE72553
void __cdecl data::ConfigGCGConditionGlobalFetchCurSkillObject::ConfigGCGConditionGlobalFetchCurSkillObject(
        data::ConfigGCGConditionGlobalFetchCurSkillObject *const this,
        const data::ConfigGCGConditionGlobalFetchCurSkillObject *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchCurSkillObject + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
  std::shared_ptr<data::ConfigGCGLogicCondition>::shared_ptr(&this->condition, &a2->condition);
};

// Line 764: range 000000000DF54FB8-000000000DF54FE2
void __cdecl data::ConfigGCGConditionGlobalFetchCurSkillObject::~ConfigGCGConditionGlobalFetchCurSkillObject(
        data::ConfigGCGConditionGlobalFetchCurSkillObject *const this)
{
  data::ConfigGCGConditionGlobalFetchCurSkillObject::~ConfigGCGConditionGlobalFetchCurSkillObject(this);
  operator delete(this, 0x30uLL);
};

// Line 764: range 000000000DF54F5A-000000000DF54FB7
void __cdecl data::ConfigGCGConditionGlobalFetchCurSkillObject::~ConfigGCGConditionGlobalFetchCurSkillObject(
        data::ConfigGCGConditionGlobalFetchCurSkillObject *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchCurSkillObject + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  std::shared_ptr<data::ConfigGCGLogicCondition>::~shared_ptr(&this->condition);
  data::ConfigGCGCondition::~ConfigGCGCondition(this);
};

// Line 769: range 000000000D7427B8-000000000D7427C8
const char *__cdecl data::ConfigGCGConditionGlobalFetchCurSkillObject::getTypeName(
        const data::ConfigGCGConditionGlobalFetchCurSkillObject *const this)
{
  return "ConfigGCGConditionGlobalFetchCurSkillObject";
};

// Line 770: range 000000000D7427CA-000000000D742966
int32_t __cdecl data::ConfigGCGConditionGlobalFetchCurSkillObject::getHashNum(
        const data::ConfigGCGConditionGlobalFetchCurSkillObject *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionGlobalFetchCurSkillObject::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionGlobalFetchCurSkillObject",
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

// Line 786: range 000000000DE7279C-000000000DE727DD
void __cdecl data::ConfigGCGConditionGlobalFetchCurSkillObjectFactory::ConfigGCGConditionGlobalFetchCurSkillObjectFactory(
        data::ConfigGCGConditionGlobalFetchCurSkillObjectFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchCurSkillObjectFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionGlobalFetchCurSkillObjectFactory = v2;
};

// Line 794: range 000000000DE72AE6-000000000DE72B33
void __cdecl data::ConfigGCGConditionGlobalFetchCurCard::ConfigGCGConditionGlobalFetchCurCard(
        data::ConfigGCGConditionGlobalFetchCurCard *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchCurCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 794: range 000000000DE72F48-000000000DE72FA0
void __cdecl data::ConfigGCGConditionGlobalFetchCurCard::ConfigGCGConditionGlobalFetchCurCard(
        data::ConfigGCGConditionGlobalFetchCurCard *const this,
        const data::ConfigGCGConditionGlobalFetchCurCard *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchCurCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 800: range 000000000DF54EE0-000000000DF54F2D
void __cdecl data::ConfigGCGConditionGlobalFetchCurCard::~ConfigGCGConditionGlobalFetchCurCard(
        data::ConfigGCGConditionGlobalFetchCurCard *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchCurCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition(this);
};

// Line 800: range 000000000DF54F2E-000000000DF54F58
void __cdecl data::ConfigGCGConditionGlobalFetchCurCard::~ConfigGCGConditionGlobalFetchCurCard(
        data::ConfigGCGConditionGlobalFetchCurCard *const this)
{
  data::ConfigGCGConditionGlobalFetchCurCard::~ConfigGCGConditionGlobalFetchCurCard(this);
  operator delete(this, 0x20uLL);
};

// Line 805: range 000000000D742968-000000000D742978
const char *__cdecl data::ConfigGCGConditionGlobalFetchCurCard::getTypeName(
        const data::ConfigGCGConditionGlobalFetchCurCard *const this)
{
  return "ConfigGCGConditionGlobalFetchCurCard";
};

// Line 806: range 000000000D74297A-000000000D742B16
int32_t __cdecl data::ConfigGCGConditionGlobalFetchCurCard::getHashNum(
        const data::ConfigGCGConditionGlobalFetchCurCard *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionGlobalFetchCurCard::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionGlobalFetchCurCard",
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

// Line 822: range 000000000DE731EA-000000000DE7322B
void __cdecl data::ConfigGCGConditionGlobalFetchCurCardFactory::ConfigGCGConditionGlobalFetchCurCardFactory(
        data::ConfigGCGConditionGlobalFetchCurCardFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchCurCardFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionGlobalFetchCurCardFactory = v2;
};

// Line 830: range 000000000DE73534-000000000DE735DA
void __cdecl data::ConfigGCGConditionGlobalFetchCurCardObject::ConfigGCGConditionGlobalFetchCurCardObject(
        data::ConfigGCGConditionGlobalFetchCurCardObject *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchCurCardObject + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  if ( *(_WORD *)(((unsigned __int64)&this->condition >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigGCGLogicCondition>();
};

// Line 830: range 000000000DE73B24-000000000DE73B97
void __cdecl data::ConfigGCGConditionGlobalFetchCurCardObject::ConfigGCGConditionGlobalFetchCurCardObject(
        data::ConfigGCGConditionGlobalFetchCurCardObject *const this,
        const data::ConfigGCGConditionGlobalFetchCurCardObject *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchCurCardObject + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
  std::shared_ptr<data::ConfigGCGLogicCondition>::shared_ptr(&this->condition, &a2->condition);
};

// Line 837: range 000000000DF54E56-000000000DF54EB3
void __cdecl data::ConfigGCGConditionGlobalFetchCurCardObject::~ConfigGCGConditionGlobalFetchCurCardObject(
        data::ConfigGCGConditionGlobalFetchCurCardObject *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchCurCardObject + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  std::shared_ptr<data::ConfigGCGLogicCondition>::~shared_ptr(&this->condition);
  data::ConfigGCGCondition::~ConfigGCGCondition(this);
};

// Line 837: range 000000000DF54EB4-000000000DF54EDE
void __cdecl data::ConfigGCGConditionGlobalFetchCurCardObject::~ConfigGCGConditionGlobalFetchCurCardObject(
        data::ConfigGCGConditionGlobalFetchCurCardObject *const this)
{
  data::ConfigGCGConditionGlobalFetchCurCardObject::~ConfigGCGConditionGlobalFetchCurCardObject(this);
  operator delete(this, 0x30uLL);
};

// Line 842: range 000000000D742B18-000000000D742B28
const char *__cdecl data::ConfigGCGConditionGlobalFetchCurCardObject::getTypeName(
        const data::ConfigGCGConditionGlobalFetchCurCardObject *const this)
{
  return "ConfigGCGConditionGlobalFetchCurCardObject";
};

// Line 843: range 000000000D742B2A-000000000D742CC6
int32_t __cdecl data::ConfigGCGConditionGlobalFetchCurCardObject::getHashNum(
        const data::ConfigGCGConditionGlobalFetchCurCardObject *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionGlobalFetchCurCardObject::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionGlobalFetchCurCardObject",
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

// Line 859: range 000000000DE73DE0-000000000DE73E21
void __cdecl data::ConfigGCGConditionGlobalFetchCurCardObjectFactory::ConfigGCGConditionGlobalFetchCurCardObjectFactory(
        data::ConfigGCGConditionGlobalFetchCurCardObjectFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchCurCardObjectFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionGlobalFetchCurCardObjectFactory = v2;
};

// Line 867: range 000000000DE7412A-000000000DE74177
void __cdecl data::ConfigGCGConditionGlobalFetchSourceCharacter::ConfigGCGConditionGlobalFetchSourceCharacter(
        data::ConfigGCGConditionGlobalFetchSourceCharacter *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchSourceCharacter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 867: range 000000000DE7458C-000000000DE745E4
void __cdecl data::ConfigGCGConditionGlobalFetchSourceCharacter::ConfigGCGConditionGlobalFetchSourceCharacter(
        data::ConfigGCGConditionGlobalFetchSourceCharacter *const this,
        const data::ConfigGCGConditionGlobalFetchSourceCharacter *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchSourceCharacter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 873: range 000000000DF54E2A-000000000DF54E54
void __cdecl data::ConfigGCGConditionGlobalFetchSourceCharacter::~ConfigGCGConditionGlobalFetchSourceCharacter(
        data::ConfigGCGConditionGlobalFetchSourceCharacter *const this)
{
  data::ConfigGCGConditionGlobalFetchSourceCharacter::~ConfigGCGConditionGlobalFetchSourceCharacter(this);
  operator delete(this, 0x20uLL);
};

// Line 873: range 000000000DF54DDC-000000000DF54E29
void __cdecl data::ConfigGCGConditionGlobalFetchSourceCharacter::~ConfigGCGConditionGlobalFetchSourceCharacter(
        data::ConfigGCGConditionGlobalFetchSourceCharacter *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchSourceCharacter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition(this);
};

// Line 878: range 000000000D742CC8-000000000D742CD8
const char *__cdecl data::ConfigGCGConditionGlobalFetchSourceCharacter::getTypeName(
        const data::ConfigGCGConditionGlobalFetchSourceCharacter *const this)
{
  return "ConfigGCGConditionGlobalFetchSourceCharacter";
};

// Line 879: range 000000000D742CDA-000000000D742E76
int32_t __cdecl data::ConfigGCGConditionGlobalFetchSourceCharacter::getHashNum(
        const data::ConfigGCGConditionGlobalFetchSourceCharacter *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionGlobalFetchSourceCharacter::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionGlobalFetchSourceCharacter",
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

// Line 895: range 000000000DE7482E-000000000DE7486F
void __cdecl data::ConfigGCGConditionGlobalFetchSourceCharacterFactory::ConfigGCGConditionGlobalFetchSourceCharacterFactory(
        data::ConfigGCGConditionGlobalFetchSourceCharacterFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchSourceCharacterFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionGlobalFetchSourceCharacterFactory = v2;
};

// Line 903: range 000000000DE74B78-000000000DE74C1E
void __cdecl data::ConfigGCGConditionGlobalFetchSourceCharacterObject::ConfigGCGConditionGlobalFetchSourceCharacterObject(
        data::ConfigGCGConditionGlobalFetchSourceCharacterObject *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchSourceCharacterObject + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  if ( *(_WORD *)(((unsigned __int64)&this->condition >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigGCGLogicCondition>();
};

// Line 903: range 000000000DE75168-000000000DE751DB
void __cdecl data::ConfigGCGConditionGlobalFetchSourceCharacterObject::ConfigGCGConditionGlobalFetchSourceCharacterObject(
        data::ConfigGCGConditionGlobalFetchSourceCharacterObject *const this,
        const data::ConfigGCGConditionGlobalFetchSourceCharacterObject *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchSourceCharacterObject + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
  std::shared_ptr<data::ConfigGCGLogicCondition>::shared_ptr(&this->condition, &a2->condition);
};

// Line 910: range 000000000DF54D52-000000000DF54DAF
void __cdecl data::ConfigGCGConditionGlobalFetchSourceCharacterObject::~ConfigGCGConditionGlobalFetchSourceCharacterObject(
        data::ConfigGCGConditionGlobalFetchSourceCharacterObject *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchSourceCharacterObject + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  std::shared_ptr<data::ConfigGCGLogicCondition>::~shared_ptr(&this->condition);
  data::ConfigGCGCondition::~ConfigGCGCondition(this);
};

// Line 910: range 000000000DF54DB0-000000000DF54DDA
void __cdecl data::ConfigGCGConditionGlobalFetchSourceCharacterObject::~ConfigGCGConditionGlobalFetchSourceCharacterObject(
        data::ConfigGCGConditionGlobalFetchSourceCharacterObject *const this)
{
  data::ConfigGCGConditionGlobalFetchSourceCharacterObject::~ConfigGCGConditionGlobalFetchSourceCharacterObject(this);
  operator delete(this, 0x30uLL);
};

// Line 915: range 000000000D742E78-000000000D742E88
const char *__cdecl data::ConfigGCGConditionGlobalFetchSourceCharacterObject::getTypeName(
        const data::ConfigGCGConditionGlobalFetchSourceCharacterObject *const this)
{
  return "ConfigGCGConditionGlobalFetchSourceCharacterObject";
};

// Line 916: range 000000000D742E8A-000000000D743026
int32_t __cdecl data::ConfigGCGConditionGlobalFetchSourceCharacterObject::getHashNum(
        const data::ConfigGCGConditionGlobalFetchSourceCharacterObject *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionGlobalFetchSourceCharacterObject::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionGlobalFetchSourceCharacterObject",
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

// Line 932: range 000000000DE75424-000000000DE75465
void __cdecl data::ConfigGCGConditionGlobalFetchSourceCharacterObjectFactory::ConfigGCGConditionGlobalFetchSourceCharacterObjectFactory(
        data::ConfigGCGConditionGlobalFetchSourceCharacterObjectFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchSourceCharacterObjectFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionGlobalFetchSourceCharacterObjectFactory = v2;
};

// Line 940: range 000000000DE7576E-000000000DE757BB
void __cdecl data::ConfigGCGConditionGlobalFetchTargetCharacter::ConfigGCGConditionGlobalFetchTargetCharacter(
        data::ConfigGCGConditionGlobalFetchTargetCharacter *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchTargetCharacter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 940: range 000000000DE75BD0-000000000DE75C28
void __cdecl data::ConfigGCGConditionGlobalFetchTargetCharacter::ConfigGCGConditionGlobalFetchTargetCharacter(
        data::ConfigGCGConditionGlobalFetchTargetCharacter *const this,
        const data::ConfigGCGConditionGlobalFetchTargetCharacter *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchTargetCharacter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 946: range 000000000DF54CD8-000000000DF54D25
void __cdecl data::ConfigGCGConditionGlobalFetchTargetCharacter::~ConfigGCGConditionGlobalFetchTargetCharacter(
        data::ConfigGCGConditionGlobalFetchTargetCharacter *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchTargetCharacter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition(this);
};

// Line 946: range 000000000DF54D26-000000000DF54D50
void __cdecl data::ConfigGCGConditionGlobalFetchTargetCharacter::~ConfigGCGConditionGlobalFetchTargetCharacter(
        data::ConfigGCGConditionGlobalFetchTargetCharacter *const this)
{
  data::ConfigGCGConditionGlobalFetchTargetCharacter::~ConfigGCGConditionGlobalFetchTargetCharacter(this);
  operator delete(this, 0x20uLL);
};

// Line 951: range 000000000D743028-000000000D743038
const char *__cdecl data::ConfigGCGConditionGlobalFetchTargetCharacter::getTypeName(
        const data::ConfigGCGConditionGlobalFetchTargetCharacter *const this)
{
  return "ConfigGCGConditionGlobalFetchTargetCharacter";
};

// Line 952: range 000000000D74303A-000000000D7431D6
int32_t __cdecl data::ConfigGCGConditionGlobalFetchTargetCharacter::getHashNum(
        const data::ConfigGCGConditionGlobalFetchTargetCharacter *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionGlobalFetchTargetCharacter::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionGlobalFetchTargetCharacter",
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

// Line 968: range 000000000DE75E72-000000000DE75EB3
void __cdecl data::ConfigGCGConditionGlobalFetchTargetCharacterFactory::ConfigGCGConditionGlobalFetchTargetCharacterFactory(
        data::ConfigGCGConditionGlobalFetchTargetCharacterFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchTargetCharacterFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionGlobalFetchTargetCharacterFactory = v2;
};

// Line 976: range 000000000DE761BC-000000000DE76262
void __cdecl data::ConfigGCGConditionGlobalFetchTargetCharacterObject::ConfigGCGConditionGlobalFetchTargetCharacterObject(
        data::ConfigGCGConditionGlobalFetchTargetCharacterObject *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchTargetCharacterObject + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  if ( *(_WORD *)(((unsigned __int64)&this->condition >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigGCGLogicCondition>();
};

// Line 976: range 000000000DE767AC-000000000DE7681F
void __cdecl data::ConfigGCGConditionGlobalFetchTargetCharacterObject::ConfigGCGConditionGlobalFetchTargetCharacterObject(
        data::ConfigGCGConditionGlobalFetchTargetCharacterObject *const this,
        const data::ConfigGCGConditionGlobalFetchTargetCharacterObject *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchTargetCharacterObject + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
  std::shared_ptr<data::ConfigGCGLogicCondition>::shared_ptr(&this->condition, &a2->condition);
};

// Line 983: range 000000000DF54C4E-000000000DF54CAB
void __cdecl data::ConfigGCGConditionGlobalFetchTargetCharacterObject::~ConfigGCGConditionGlobalFetchTargetCharacterObject(
        data::ConfigGCGConditionGlobalFetchTargetCharacterObject *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchTargetCharacterObject + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  std::shared_ptr<data::ConfigGCGLogicCondition>::~shared_ptr(&this->condition);
  data::ConfigGCGCondition::~ConfigGCGCondition(this);
};

// Line 983: range 000000000DF54CAC-000000000DF54CD6
void __cdecl data::ConfigGCGConditionGlobalFetchTargetCharacterObject::~ConfigGCGConditionGlobalFetchTargetCharacterObject(
        data::ConfigGCGConditionGlobalFetchTargetCharacterObject *const this)
{
  data::ConfigGCGConditionGlobalFetchTargetCharacterObject::~ConfigGCGConditionGlobalFetchTargetCharacterObject(this);
  operator delete(this, 0x30uLL);
};

// Line 988: range 000000000D7431D8-000000000D7431E8
const char *__cdecl data::ConfigGCGConditionGlobalFetchTargetCharacterObject::getTypeName(
        const data::ConfigGCGConditionGlobalFetchTargetCharacterObject *const this)
{
  return "ConfigGCGConditionGlobalFetchTargetCharacterObject";
};

// Line 989: range 000000000D7431EA-000000000D743386
int32_t __cdecl data::ConfigGCGConditionGlobalFetchTargetCharacterObject::getHashNum(
        const data::ConfigGCGConditionGlobalFetchTargetCharacterObject *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionGlobalFetchTargetCharacterObject::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionGlobalFetchTargetCharacterObject",
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

// Line 1005: range 000000000DE76A68-000000000DE76AA9
void __cdecl data::ConfigGCGConditionGlobalFetchTargetCharacterObjectFactory::ConfigGCGConditionGlobalFetchTargetCharacterObjectFactory(
        data::ConfigGCGConditionGlobalFetchTargetCharacterObjectFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchTargetCharacterObjectFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionGlobalFetchTargetCharacterObjectFactory = v2;
};

// Line 1013: range 000000000DE76DB2-000000000DE76DFF
void __cdecl data::ConfigGCGConditionGlobalFetchThisCard::ConfigGCGConditionGlobalFetchThisCard(
        data::ConfigGCGConditionGlobalFetchThisCard *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchThisCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 1013: range 000000000DE77214-000000000DE7726C
void __cdecl data::ConfigGCGConditionGlobalFetchThisCard::ConfigGCGConditionGlobalFetchThisCard(
        data::ConfigGCGConditionGlobalFetchThisCard *const this,
        const data::ConfigGCGConditionGlobalFetchThisCard *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchThisCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 1019: range 000000000DF54BD4-000000000DF54C21
void __cdecl data::ConfigGCGConditionGlobalFetchThisCard::~ConfigGCGConditionGlobalFetchThisCard(
        data::ConfigGCGConditionGlobalFetchThisCard *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchThisCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition(this);
};

// Line 1019: range 000000000DF54C22-000000000DF54C4C
void __cdecl data::ConfigGCGConditionGlobalFetchThisCard::~ConfigGCGConditionGlobalFetchThisCard(
        data::ConfigGCGConditionGlobalFetchThisCard *const this)
{
  data::ConfigGCGConditionGlobalFetchThisCard::~ConfigGCGConditionGlobalFetchThisCard(this);
  operator delete(this, 0x20uLL);
};

// Line 1024: range 000000000D743388-000000000D743398
const char *__cdecl data::ConfigGCGConditionGlobalFetchThisCard::getTypeName(
        const data::ConfigGCGConditionGlobalFetchThisCard *const this)
{
  return "ConfigGCGConditionGlobalFetchThisCard";
};

// Line 1025: range 000000000D74339A-000000000D743536
int32_t __cdecl data::ConfigGCGConditionGlobalFetchThisCard::getHashNum(
        const data::ConfigGCGConditionGlobalFetchThisCard *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionGlobalFetchThisCard::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionGlobalFetchThisCard",
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

// Line 1041: range 000000000DE774B6-000000000DE774F7
void __cdecl data::ConfigGCGConditionGlobalFetchThisCardFactory::ConfigGCGConditionGlobalFetchThisCardFactory(
        data::ConfigGCGConditionGlobalFetchThisCardFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchThisCardFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionGlobalFetchThisCardFactory = v2;
};

// Line 1049: range 000000000DE77800-000000000DE778A6
void __cdecl data::ConfigGCGConditionGlobalFetchThisCardObject::ConfigGCGConditionGlobalFetchThisCardObject(
        data::ConfigGCGConditionGlobalFetchThisCardObject *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchThisCardObject + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  if ( *(_WORD *)(((unsigned __int64)&this->condition >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigGCGLogicCondition>();
};

// Line 1049: range 000000000DE77DF0-000000000DE77E63
void __cdecl data::ConfigGCGConditionGlobalFetchThisCardObject::ConfigGCGConditionGlobalFetchThisCardObject(
        data::ConfigGCGConditionGlobalFetchThisCardObject *const this,
        const data::ConfigGCGConditionGlobalFetchThisCardObject *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchThisCardObject + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
  std::shared_ptr<data::ConfigGCGLogicCondition>::shared_ptr(&this->condition, &a2->condition);
};

// Line 1056: range 000000000DF54BA8-000000000DF54BD2
void __cdecl data::ConfigGCGConditionGlobalFetchThisCardObject::~ConfigGCGConditionGlobalFetchThisCardObject(
        data::ConfigGCGConditionGlobalFetchThisCardObject *const this)
{
  data::ConfigGCGConditionGlobalFetchThisCardObject::~ConfigGCGConditionGlobalFetchThisCardObject(this);
  operator delete(this, 0x30uLL);
};

// Line 1056: range 000000000DF54B4A-000000000DF54BA7
void __cdecl data::ConfigGCGConditionGlobalFetchThisCardObject::~ConfigGCGConditionGlobalFetchThisCardObject(
        data::ConfigGCGConditionGlobalFetchThisCardObject *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchThisCardObject + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  std::shared_ptr<data::ConfigGCGLogicCondition>::~shared_ptr(&this->condition);
  data::ConfigGCGCondition::~ConfigGCGCondition(this);
};

// Line 1061: range 000000000D743538-000000000D743548
const char *__cdecl data::ConfigGCGConditionGlobalFetchThisCardObject::getTypeName(
        const data::ConfigGCGConditionGlobalFetchThisCardObject *const this)
{
  return "ConfigGCGConditionGlobalFetchThisCardObject";
};

// Line 1062: range 000000000D74354A-000000000D7436E6
int32_t __cdecl data::ConfigGCGConditionGlobalFetchThisCardObject::getHashNum(
        const data::ConfigGCGConditionGlobalFetchThisCardObject *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionGlobalFetchThisCardObject::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionGlobalFetchThisCardObject",
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

// Line 1078: range 000000000DE780AC-000000000DE780ED
void __cdecl data::ConfigGCGConditionGlobalFetchThisCardObjectFactory::ConfigGCGConditionGlobalFetchThisCardObjectFactory(
        data::ConfigGCGConditionGlobalFetchThisCardObjectFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchThisCardObjectFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionGlobalFetchThisCardObjectFactory = v2;
};

// Line 1086: range 000000000DE783F6-000000000DE78443
void __cdecl data::ConfigGCGConditionGlobalFetchOnStageSummonNumber::ConfigGCGConditionGlobalFetchOnStageSummonNumber(
        data::ConfigGCGConditionGlobalFetchOnStageSummonNumber *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchOnStageSummonNumber + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 1086: range 000000000DE78858-000000000DE788B0
void __cdecl data::ConfigGCGConditionGlobalFetchOnStageSummonNumber::ConfigGCGConditionGlobalFetchOnStageSummonNumber(
        data::ConfigGCGConditionGlobalFetchOnStageSummonNumber *const this,
        const data::ConfigGCGConditionGlobalFetchOnStageSummonNumber *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchOnStageSummonNumber + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 1092: range 000000000DF54AD0-000000000DF54B1D
void __cdecl data::ConfigGCGConditionGlobalFetchOnStageSummonNumber::~ConfigGCGConditionGlobalFetchOnStageSummonNumber(
        data::ConfigGCGConditionGlobalFetchOnStageSummonNumber *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchOnStageSummonNumber + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition(this);
};

// Line 1092: range 000000000DF54B1E-000000000DF54B48
void __cdecl data::ConfigGCGConditionGlobalFetchOnStageSummonNumber::~ConfigGCGConditionGlobalFetchOnStageSummonNumber(
        data::ConfigGCGConditionGlobalFetchOnStageSummonNumber *const this)
{
  data::ConfigGCGConditionGlobalFetchOnStageSummonNumber::~ConfigGCGConditionGlobalFetchOnStageSummonNumber(this);
  operator delete(this, 0x20uLL);
};

// Line 1097: range 000000000D7436E8-000000000D7436F8
const char *__cdecl data::ConfigGCGConditionGlobalFetchOnStageSummonNumber::getTypeName(
        const data::ConfigGCGConditionGlobalFetchOnStageSummonNumber *const this)
{
  return "ConfigGCGConditionGlobalFetchOnStageSummonNumber";
};

// Line 1098: range 000000000D7436FA-000000000D743896
int32_t __cdecl data::ConfigGCGConditionGlobalFetchOnStageSummonNumber::getHashNum(
        const data::ConfigGCGConditionGlobalFetchOnStageSummonNumber *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionGlobalFetchOnStageSummonNumber::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionGlobalFetchOnStageSummonNumber",
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

// Line 1114: range 000000000DE78AFA-000000000DE78B3B
void __cdecl data::ConfigGCGConditionGlobalFetchOnStageSummonNumberFactory::ConfigGCGConditionGlobalFetchOnStageSummonNumberFactory(
        data::ConfigGCGConditionGlobalFetchOnStageSummonNumberFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchOnStageSummonNumberFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionGlobalFetchOnStageSummonNumberFactory = v2;
};

// Line 1122: range 000000000DE78E44-000000000DE78ED7
void __cdecl data::ConfigCCGConditionCardFetchVar::ConfigCCGConditionCardFetchVar(
        data::ConfigCCGConditionCardFetchVar *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition((data::ConfigGCGCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCCGConditionCardFetchVar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->token_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->token_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->token_type, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->token_type = GCG_TOKEN_NONE;
};

// Line 1122: range 000000000DE7936C-000000000DE79449
void __cdecl data::ConfigCCGConditionCardFetchVar::ConfigCCGConditionCardFetchVar(
        data::ConfigCCGConditionCardFetchVar *const this,
        const data::ConfigCCGConditionCardFetchVar *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GCGTokenType token_type; // ecx
  char v5; // dl

  data::ConfigGCGCondition::ConfigGCGCondition(
    (data::ConfigGCGCondition *const)this,
    (const data::ConfigGCGCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCCGConditionCardFetchVar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->token_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->token_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->token_type);
  }
  token_type = a2->token_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->token_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->token_type, v3);
  }
  this->token_type = token_type;
};

// Line 1129: range 000000000DF54AA4-000000000DF54ACE
void __cdecl data::ConfigCCGConditionCardFetchVar::~ConfigCCGConditionCardFetchVar(
        data::ConfigCCGConditionCardFetchVar *const this)
{
  data::ConfigCCGConditionCardFetchVar::~ConfigCCGConditionCardFetchVar(this);
  operator delete(this, 0x20uLL);
};

// Line 1129: range 000000000DF54A56-000000000DF54AA3
void __cdecl data::ConfigCCGConditionCardFetchVar::~ConfigCCGConditionCardFetchVar(
        data::ConfigCCGConditionCardFetchVar *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCCGConditionCardFetchVar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition((data::ConfigGCGCondition *const)this);
};

// Line 1134: range 000000000D743898-000000000D7438A8
const char *__cdecl data::ConfigCCGConditionCardFetchVar::getTypeName(
        const data::ConfigCCGConditionCardFetchVar *const this)
{
  return "ConfigCCGConditionCardFetchVar";
};

// Line 1135: range 000000000D7438AA-000000000D743A46
int32_t __cdecl data::ConfigCCGConditionCardFetchVar::getHashNum(
        const data::ConfigCCGConditionCardFetchVar *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigCCGConditionCardFetchVar::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigCCGConditionCardFetchVar",
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

// Line 1151: range 000000000DE79692-000000000DE796D3
void __cdecl data::ConfigCCGConditionCardFetchVarFactory::ConfigCCGConditionCardFetchVarFactory(
        data::ConfigCCGConditionCardFetchVarFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCCGConditionCardFetchVarFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCCGConditionCardFetchVarFactory = v2;
};

// Line 1159: range 000000000DE799DC-000000000DE79A6F
void __cdecl data::ConfigGCGConditionCharacterCheckAttachCard::ConfigGCGConditionCharacterCheckAttachCard(
        data::ConfigGCGConditionCharacterCheckAttachCard *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition((data::ConfigGCGCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCharacterCheckAttachCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_id, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->card_id = 0;
};

// Line 1159: range 000000000DE79F04-000000000DE79FE1
void __cdecl data::ConfigGCGConditionCharacterCheckAttachCard::ConfigGCGConditionCharacterCheckAttachCard(
        data::ConfigGCGConditionCharacterCheckAttachCard *const this,
        const data::ConfigGCGConditionCharacterCheckAttachCard *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t card_id; // ecx
  char v5; // dl

  data::ConfigGCGCondition::ConfigGCGCondition(
    (data::ConfigGCGCondition *const)this,
    (const data::ConfigGCGCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCharacterCheckAttachCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->card_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->card_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->card_id);
  }
  card_id = a2->card_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->card_id, v3);
  }
  this->card_id = card_id;
};

// Line 1166: range 000000000DF54A2A-000000000DF54A54
void __cdecl data::ConfigGCGConditionCharacterCheckAttachCard::~ConfigGCGConditionCharacterCheckAttachCard(
        data::ConfigGCGConditionCharacterCheckAttachCard *const this)
{
  data::ConfigGCGConditionCharacterCheckAttachCard::~ConfigGCGConditionCharacterCheckAttachCard(this);
  operator delete(this, 0x20uLL);
};

// Line 1166: range 000000000DF549DC-000000000DF54A29
void __cdecl data::ConfigGCGConditionCharacterCheckAttachCard::~ConfigGCGConditionCharacterCheckAttachCard(
        data::ConfigGCGConditionCharacterCheckAttachCard *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCharacterCheckAttachCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition((data::ConfigGCGCondition *const)this);
};

// Line 1171: range 000000000D743A48-000000000D743A58
const char *__cdecl data::ConfigGCGConditionCharacterCheckAttachCard::getTypeName(
        const data::ConfigGCGConditionCharacterCheckAttachCard *const this)
{
  return "ConfigGCGConditionCharacterCheckAttachCard";
};

// Line 1172: range 000000000D743A5A-000000000D743BF6
int32_t __cdecl data::ConfigGCGConditionCharacterCheckAttachCard::getHashNum(
        const data::ConfigGCGConditionCharacterCheckAttachCard *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionCharacterCheckAttachCard::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionCharacterCheckAttachCard",
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

// Line 1188: range 000000000DE7A22A-000000000DE7A26B
void __cdecl data::ConfigGCGConditionCharacterCheckAttachCardFactory::ConfigGCGConditionCharacterCheckAttachCardFactory(
        data::ConfigGCGConditionCharacterCheckAttachCardFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCharacterCheckAttachCardFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionCharacterCheckAttachCardFactory = v2;
};

// Line 1196: range 000000000DE7A574-000000000DE7A607
void __cdecl data::ConfigGCGConditionCheckCurCharacterCamp::ConfigGCGConditionCheckCurCharacterCamp(
        data::ConfigGCGConditionCheckCurCharacterCamp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition((data::ConfigGCGCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurCharacterCamp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->camp_type, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->camp_type = CAMP_BOTH;
};

// Line 1196: range 000000000DE7AA9C-000000000DE7AB79
void __cdecl data::ConfigGCGConditionCheckCurCharacterCamp::ConfigGCGConditionCheckCurCharacterCamp(
        data::ConfigGCGConditionCheckCurCharacterCamp *const this,
        const data::ConfigGCGConditionCheckCurCharacterCamp *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GCGEffectCampType camp_type; // ecx
  char v5; // dl

  data::ConfigGCGCondition::ConfigGCGCondition(
    (data::ConfigGCGCondition *const)this,
    (const data::ConfigGCGCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurCharacterCamp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->camp_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->camp_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->camp_type);
  }
  camp_type = a2->camp_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->camp_type, v3);
  }
  this->camp_type = camp_type;
};

// Line 1203: range 000000000DF54962-000000000DF549AF
void __cdecl data::ConfigGCGConditionCheckCurCharacterCamp::~ConfigGCGConditionCheckCurCharacterCamp(
        data::ConfigGCGConditionCheckCurCharacterCamp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurCharacterCamp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition((data::ConfigGCGCondition *const)this);
};

// Line 1203: range 000000000DF549B0-000000000DF549DA
void __cdecl data::ConfigGCGConditionCheckCurCharacterCamp::~ConfigGCGConditionCheckCurCharacterCamp(
        data::ConfigGCGConditionCheckCurCharacterCamp *const this)
{
  data::ConfigGCGConditionCheckCurCharacterCamp::~ConfigGCGConditionCheckCurCharacterCamp(this);
  operator delete(this, 0x20uLL);
};

// Line 1208: range 000000000D743BF8-000000000D743C08
const char *__cdecl data::ConfigGCGConditionCheckCurCharacterCamp::getTypeName(
        const data::ConfigGCGConditionCheckCurCharacterCamp *const this)
{
  return "ConfigGCGConditionCheckCurCharacterCamp";
};

// Line 1209: range 000000000D743C0A-000000000D743DA6
int32_t __cdecl data::ConfigGCGConditionCheckCurCharacterCamp::getHashNum(
        const data::ConfigGCGConditionCheckCurCharacterCamp *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionCheckCurCharacterCamp::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionCheckCurCharacterCamp",
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

// Line 1225: range 000000000DE7ADC2-000000000DE7AE03
void __cdecl data::ConfigGCGConditionCheckCurCharacterCampFactory::ConfigGCGConditionCheckCurCharacterCampFactory(
        data::ConfigGCGConditionCheckCurCharacterCampFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurCharacterCampFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionCheckCurCharacterCampFactory = v2;
};

// Line 1233: range 000000000DE7B10C-000000000DE7B19F
void __cdecl data::ConfigGCGConditionCheckCurCharacterPosition::ConfigGCGConditionCheckCurCharacterPosition(
        data::ConfigGCGConditionCheckCurCharacterPosition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition((data::ConfigGCGCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurCharacterPosition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->position_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->position_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->position_type, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->position_type = POSITION_ONSTAGE;
};

// Line 1233: range 000000000DE7B634-000000000DE7B711
void __cdecl data::ConfigGCGConditionCheckCurCharacterPosition::ConfigGCGConditionCheckCurCharacterPosition(
        data::ConfigGCGConditionCheckCurCharacterPosition *const this,
        const data::ConfigGCGConditionCheckCurCharacterPosition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GCGEffectPositionType position_type; // ecx
  char v5; // dl

  data::ConfigGCGCondition::ConfigGCGCondition(
    (data::ConfigGCGCondition *const)this,
    (const data::ConfigGCGCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurCharacterPosition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->position_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->position_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->position_type);
  }
  position_type = a2->position_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->position_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->position_type, v3);
  }
  this->position_type = position_type;
};

// Line 1240: range 000000000DF548E8-000000000DF54935
void __cdecl data::ConfigGCGConditionCheckCurCharacterPosition::~ConfigGCGConditionCheckCurCharacterPosition(
        data::ConfigGCGConditionCheckCurCharacterPosition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurCharacterPosition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition((data::ConfigGCGCondition *const)this);
};

// Line 1240: range 000000000DF54936-000000000DF54960
void __cdecl data::ConfigGCGConditionCheckCurCharacterPosition::~ConfigGCGConditionCheckCurCharacterPosition(
        data::ConfigGCGConditionCheckCurCharacterPosition *const this)
{
  data::ConfigGCGConditionCheckCurCharacterPosition::~ConfigGCGConditionCheckCurCharacterPosition(this);
  operator delete(this, 0x20uLL);
};

// Line 1245: range 000000000D743DA8-000000000D743DB8
const char *__cdecl data::ConfigGCGConditionCheckCurCharacterPosition::getTypeName(
        const data::ConfigGCGConditionCheckCurCharacterPosition *const this)
{
  return "ConfigGCGConditionCheckCurCharacterPosition";
};

// Line 1246: range 000000000D743DBA-000000000D743F56
int32_t __cdecl data::ConfigGCGConditionCheckCurCharacterPosition::getHashNum(
        const data::ConfigGCGConditionCheckCurCharacterPosition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionCheckCurCharacterPosition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionCheckCurCharacterPosition",
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

// Line 1262: range 000000000DE7B95A-000000000DE7B99B
void __cdecl data::ConfigGCGConditionCheckCurCharacterPositionFactory::ConfigGCGConditionCheckCurCharacterPositionFactory(
        data::ConfigGCGConditionCheckCurCharacterPositionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurCharacterPositionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionCheckCurCharacterPositionFactory = v2;
};

// Line 1270: range 000000000DE7BCA4-000000000DE7BD37
void __cdecl data::ConfigGCGConditionCheckCurSkillHasTag::ConfigGCGConditionCheckCurSkillHasTag(
        data::ConfigGCGConditionCheckCurSkillHasTag *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition((data::ConfigGCGCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurSkillHasTag + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_tag_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_tag_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skill_tag_type, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->skill_tag_type = GCG_SKILL_TAG_NONE;
};

// Line 1270: range 000000000DE7C1CC-000000000DE7C2A9
void __cdecl data::ConfigGCGConditionCheckCurSkillHasTag::ConfigGCGConditionCheckCurSkillHasTag(
        data::ConfigGCGConditionCheckCurSkillHasTag *const this,
        const data::ConfigGCGConditionCheckCurSkillHasTag *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GCGSkillTagType skill_tag_type; // ecx
  char v5; // dl

  data::ConfigGCGCondition::ConfigGCGCondition(
    (data::ConfigGCGCondition *const)this,
    (const data::ConfigGCGCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurSkillHasTag + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->skill_tag_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->skill_tag_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->skill_tag_type);
  }
  skill_tag_type = a2->skill_tag_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->skill_tag_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->skill_tag_type, v3);
  }
  this->skill_tag_type = skill_tag_type;
};

// Line 1277: range 000000000DF5486E-000000000DF548BB
void __cdecl data::ConfigGCGConditionCheckCurSkillHasTag::~ConfigGCGConditionCheckCurSkillHasTag(
        data::ConfigGCGConditionCheckCurSkillHasTag *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurSkillHasTag + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition((data::ConfigGCGCondition *const)this);
};

// Line 1277: range 000000000DF548BC-000000000DF548E6
void __cdecl data::ConfigGCGConditionCheckCurSkillHasTag::~ConfigGCGConditionCheckCurSkillHasTag(
        data::ConfigGCGConditionCheckCurSkillHasTag *const this)
{
  data::ConfigGCGConditionCheckCurSkillHasTag::~ConfigGCGConditionCheckCurSkillHasTag(this);
  operator delete(this, 0x20uLL);
};

// Line 1282: range 000000000D743F58-000000000D743F68
const char *__cdecl data::ConfigGCGConditionCheckCurSkillHasTag::getTypeName(
        const data::ConfigGCGConditionCheckCurSkillHasTag *const this)
{
  return "ConfigGCGConditionCheckCurSkillHasTag";
};

// Line 1283: range 000000000D743F6A-000000000D744106
int32_t __cdecl data::ConfigGCGConditionCheckCurSkillHasTag::getHashNum(
        const data::ConfigGCGConditionCheckCurSkillHasTag *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionCheckCurSkillHasTag::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionCheckCurSkillHasTag",
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

// Line 1299: range 000000000DE7C4F2-000000000DE7C533
void __cdecl data::ConfigGCGConditionCheckCurSkillHasTagFactory::ConfigGCGConditionCheckCurSkillHasTagFactory(
        data::ConfigGCGConditionCheckCurSkillHasTagFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurSkillHasTagFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionCheckCurSkillHasTagFactory = v2;
};

// Line 1321: range 000000000DE6AEC6-000000000DE6AF17
void __cdecl data::GCGDeclaredValue::~GCGDeclaredValue(data::GCGDeclaredValue *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGDeclaredValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGDeclaredValue = v2;
  std::enable_shared_from_this<data::GCGDeclaredValue>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::GCGDeclaredValue>);
};

// Line 1325: range 000000000DE7C99C-000000000DE7CA2F
void __cdecl data::ConfigGCGConditionCurCardHasTag::ConfigGCGConditionCurCardHasTag(
        data::ConfigGCGConditionCurCardHasTag *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition((data::ConfigGCGCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCurCardHasTag + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->tag_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->tag_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->tag_type, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->tag_type = GCG_TAG_NONE;
};

// Line 1325: range 000000000DE7CEC4-000000000DE7CFA1
void __cdecl data::ConfigGCGConditionCurCardHasTag::ConfigGCGConditionCurCardHasTag(
        data::ConfigGCGConditionCurCardHasTag *const this,
        const data::ConfigGCGConditionCurCardHasTag *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GCGTagType tag_type; // ecx
  char v5; // dl

  data::ConfigGCGCondition::ConfigGCGCondition(
    (data::ConfigGCGCondition *const)this,
    (const data::ConfigGCGCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCurCardHasTag + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->tag_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->tag_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->tag_type);
  }
  tag_type = a2->tag_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->tag_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->tag_type, v3);
  }
  this->tag_type = tag_type;
};

// Line 1332: range 000000000DF54842-000000000DF5486C
void __cdecl data::ConfigGCGConditionCurCardHasTag::~ConfigGCGConditionCurCardHasTag(
        data::ConfigGCGConditionCurCardHasTag *const this)
{
  data::ConfigGCGConditionCurCardHasTag::~ConfigGCGConditionCurCardHasTag(this);
  operator delete(this, 0x20uLL);
};

// Line 1332: range 000000000DF547F4-000000000DF54841
void __cdecl data::ConfigGCGConditionCurCardHasTag::~ConfigGCGConditionCurCardHasTag(
        data::ConfigGCGConditionCurCardHasTag *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCurCardHasTag + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition((data::ConfigGCGCondition *const)this);
};

// Line 1337: range 000000000D744108-000000000D744118
const char *__cdecl data::ConfigGCGConditionCurCardHasTag::getTypeName(
        const data::ConfigGCGConditionCurCardHasTag *const this)
{
  return "ConfigGCGConditionCurCardHasTag";
};

// Line 1338: range 000000000D74411A-000000000D7442B6
int32_t __cdecl data::ConfigGCGConditionCurCardHasTag::getHashNum(
        const data::ConfigGCGConditionCurCardHasTag *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionCurCardHasTag::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionCurCardHasTag",
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

// Line 1354: range 000000000DE7D1EA-000000000DE7D22B
void __cdecl data::ConfigGCGConditionCurCardHasTagFactory::ConfigGCGConditionCurCardHasTagFactory(
        data::ConfigGCGConditionCurCardHasTagFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCurCardHasTagFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionCurCardHasTagFactory = v2;
};

// Line 1362: range 000000000DE7D534-000000000DE7D581
void __cdecl data::ConfigGCGConditionCurCardAttachToCardID::ConfigGCGConditionCurCardAttachToCardID(
        data::ConfigGCGConditionCurCardAttachToCardID *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCurCardAttachToCardID + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 1362: range 000000000DE7D996-000000000DE7D9EE
void __cdecl data::ConfigGCGConditionCurCardAttachToCardID::ConfigGCGConditionCurCardAttachToCardID(
        data::ConfigGCGConditionCurCardAttachToCardID *const this,
        const data::ConfigGCGConditionCurCardAttachToCardID *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCurCardAttachToCardID + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 1368: range 000000000DF5477A-000000000DF547C7
void __cdecl data::ConfigGCGConditionCurCardAttachToCardID::~ConfigGCGConditionCurCardAttachToCardID(
        data::ConfigGCGConditionCurCardAttachToCardID *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCurCardAttachToCardID + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition(this);
};

// Line 1368: range 000000000DF547C8-000000000DF547F2
void __cdecl data::ConfigGCGConditionCurCardAttachToCardID::~ConfigGCGConditionCurCardAttachToCardID(
        data::ConfigGCGConditionCurCardAttachToCardID *const this)
{
  data::ConfigGCGConditionCurCardAttachToCardID::~ConfigGCGConditionCurCardAttachToCardID(this);
  operator delete(this, 0x20uLL);
};

// Line 1373: range 000000000D7442B8-000000000D7442C8
const char *__cdecl data::ConfigGCGConditionCurCardAttachToCardID::getTypeName(
        const data::ConfigGCGConditionCurCardAttachToCardID *const this)
{
  return "ConfigGCGConditionCurCardAttachToCardID";
};

// Line 1374: range 000000000D7442CA-000000000D744466
int32_t __cdecl data::ConfigGCGConditionCurCardAttachToCardID::getHashNum(
        const data::ConfigGCGConditionCurCardAttachToCardID *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionCurCardAttachToCardID::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionCurCardAttachToCardID",
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

// Line 1390: range 000000000DE7DC38-000000000DE7DC79
void __cdecl data::ConfigGCGConditionCurCardAttachToCardIDFactory::ConfigGCGConditionCurCardAttachToCardIDFactory(
        data::ConfigGCGConditionCurCardAttachToCardIDFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCurCardAttachToCardIDFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionCurCardAttachToCardIDFactory = v2;
};

// Line 1398: range 000000000DE7DF82-000000000DE7E028
void __cdecl data::ConfigGCGConditionCurCardAttachToCardObject::ConfigGCGConditionCurCardAttachToCardObject(
        data::ConfigGCGConditionCurCardAttachToCardObject *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCurCardAttachToCardObject + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  if ( *(_WORD *)(((unsigned __int64)&this->condition >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigGCGLogicCondition>();
};

// Line 1398: range 000000000DE7E572-000000000DE7E5E5
void __cdecl data::ConfigGCGConditionCurCardAttachToCardObject::ConfigGCGConditionCurCardAttachToCardObject(
        data::ConfigGCGConditionCurCardAttachToCardObject *const this,
        const data::ConfigGCGConditionCurCardAttachToCardObject *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCurCardAttachToCardObject + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
  std::shared_ptr<data::ConfigGCGLogicCondition>::shared_ptr(&this->condition, &a2->condition);
};

// Line 1405: range 000000000DF5474E-000000000DF54778
void __cdecl data::ConfigGCGConditionCurCardAttachToCardObject::~ConfigGCGConditionCurCardAttachToCardObject(
        data::ConfigGCGConditionCurCardAttachToCardObject *const this)
{
  data::ConfigGCGConditionCurCardAttachToCardObject::~ConfigGCGConditionCurCardAttachToCardObject(this);
  operator delete(this, 0x30uLL);
};

// Line 1405: range 000000000DF546F0-000000000DF5474D
void __cdecl data::ConfigGCGConditionCurCardAttachToCardObject::~ConfigGCGConditionCurCardAttachToCardObject(
        data::ConfigGCGConditionCurCardAttachToCardObject *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCurCardAttachToCardObject + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  std::shared_ptr<data::ConfigGCGLogicCondition>::~shared_ptr(&this->condition);
  data::ConfigGCGCondition::~ConfigGCGCondition(this);
};

// Line 1410: range 000000000D744468-000000000D744478
const char *__cdecl data::ConfigGCGConditionCurCardAttachToCardObject::getTypeName(
        const data::ConfigGCGConditionCurCardAttachToCardObject *const this)
{
  return "ConfigGCGConditionCurCardAttachToCardObject";
};

// Line 1411: range 000000000D74447A-000000000D744616
int32_t __cdecl data::ConfigGCGConditionCurCardAttachToCardObject::getHashNum(
        const data::ConfigGCGConditionCurCardAttachToCardObject *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionCurCardAttachToCardObject::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionCurCardAttachToCardObject",
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

// Line 1427: range 000000000DE7E82E-000000000DE7E86F
void __cdecl data::ConfigGCGConditionCurCardAttachToCardObjectFactory::ConfigGCGConditionCurCardAttachToCardObjectFactory(
        data::ConfigGCGConditionCurCardAttachToCardObjectFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCurCardAttachToCardObjectFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionCurCardAttachToCardObjectFactory = v2;
};

// Line 1435: range 000000000DE7EB78-000000000DE7EBC5
void __cdecl data::ConfigGCGConditionCurCardAttachToCardIsTarget::ConfigGCGConditionCurCardAttachToCardIsTarget(
        data::ConfigGCGConditionCurCardAttachToCardIsTarget *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCurCardAttachToCardIsTarget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 1435: range 000000000DE7EFDA-000000000DE7F032
void __cdecl data::ConfigGCGConditionCurCardAttachToCardIsTarget::ConfigGCGConditionCurCardAttachToCardIsTarget(
        data::ConfigGCGConditionCurCardAttachToCardIsTarget *const this,
        const data::ConfigGCGConditionCurCardAttachToCardIsTarget *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCurCardAttachToCardIsTarget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 1441: range 000000000DF546C4-000000000DF546EE
void __cdecl data::ConfigGCGConditionCurCardAttachToCardIsTarget::~ConfigGCGConditionCurCardAttachToCardIsTarget(
        data::ConfigGCGConditionCurCardAttachToCardIsTarget *const this)
{
  data::ConfigGCGConditionCurCardAttachToCardIsTarget::~ConfigGCGConditionCurCardAttachToCardIsTarget(this);
  operator delete(this, 0x20uLL);
};

// Line 1441: range 000000000DF54676-000000000DF546C3
void __cdecl data::ConfigGCGConditionCurCardAttachToCardIsTarget::~ConfigGCGConditionCurCardAttachToCardIsTarget(
        data::ConfigGCGConditionCurCardAttachToCardIsTarget *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCurCardAttachToCardIsTarget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition(this);
};

// Line 1446: range 000000000D744618-000000000D744628
const char *__cdecl data::ConfigGCGConditionCurCardAttachToCardIsTarget::getTypeName(
        const data::ConfigGCGConditionCurCardAttachToCardIsTarget *const this)
{
  return "ConfigGCGConditionCurCardAttachToCardIsTarget";
};

// Line 1447: range 000000000D74462A-000000000D7447C6
int32_t __cdecl data::ConfigGCGConditionCurCardAttachToCardIsTarget::getHashNum(
        const data::ConfigGCGConditionCurCardAttachToCardIsTarget *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionCurCardAttachToCardIsTarget::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionCurCardAttachToCardIsTarget",
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

// Line 1463: range 000000000DE7F27C-000000000DE7F2BD
void __cdecl data::ConfigGCGConditionCurCardAttachToCardIsTargetFactory::ConfigGCGConditionCurCardAttachToCardIsTargetFactory(
        data::ConfigGCGConditionCurCardAttachToCardIsTargetFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCurCardAttachToCardIsTargetFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionCurCardAttachToCardIsTargetFactory = v2;
};

// Line 1471: range 000000000DE7F5C6-000000000DE7F659
void __cdecl data::ConfigGCGConditionCheckCurCardCamp::ConfigGCGConditionCheckCurCardCamp(
        data::ConfigGCGConditionCheckCurCardCamp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition((data::ConfigGCGCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurCardCamp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->camp_type, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->camp_type = CAMP_BOTH;
};

// Line 1471: range 000000000DE7FAEE-000000000DE7FBCB
void __cdecl data::ConfigGCGConditionCheckCurCardCamp::ConfigGCGConditionCheckCurCardCamp(
        data::ConfigGCGConditionCheckCurCardCamp *const this,
        const data::ConfigGCGConditionCheckCurCardCamp *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GCGEffectCampType camp_type; // ecx
  char v5; // dl

  data::ConfigGCGCondition::ConfigGCGCondition(
    (data::ConfigGCGCondition *const)this,
    (const data::ConfigGCGCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurCardCamp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->camp_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->camp_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->camp_type);
  }
  camp_type = a2->camp_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->camp_type, v3);
  }
  this->camp_type = camp_type;
};

// Line 1478: range 000000000DF545FC-000000000DF54649
void __cdecl data::ConfigGCGConditionCheckCurCardCamp::~ConfigGCGConditionCheckCurCardCamp(
        data::ConfigGCGConditionCheckCurCardCamp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurCardCamp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition((data::ConfigGCGCondition *const)this);
};

// Line 1478: range 000000000DF5464A-000000000DF54674
void __cdecl data::ConfigGCGConditionCheckCurCardCamp::~ConfigGCGConditionCheckCurCardCamp(
        data::ConfigGCGConditionCheckCurCardCamp *const this)
{
  data::ConfigGCGConditionCheckCurCardCamp::~ConfigGCGConditionCheckCurCardCamp(this);
  operator delete(this, 0x20uLL);
};

// Line 1483: range 000000000D7447C8-000000000D7447D8
const char *__cdecl data::ConfigGCGConditionCheckCurCardCamp::getTypeName(
        const data::ConfigGCGConditionCheckCurCardCamp *const this)
{
  return "ConfigGCGConditionCheckCurCardCamp";
};

// Line 1484: range 000000000D7447DA-000000000D744976
int32_t __cdecl data::ConfigGCGConditionCheckCurCardCamp::getHashNum(
        const data::ConfigGCGConditionCheckCurCardCamp *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionCheckCurCardCamp::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionCheckCurCardCamp",
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

// Line 1500: range 000000000DE7FE14-000000000DE7FE55
void __cdecl data::ConfigGCGConditionCheckCurCardCampFactory::ConfigGCGConditionCheckCurCardCampFactory(
        data::ConfigGCGConditionCheckCurCardCampFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurCardCampFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionCheckCurCardCampFactory = v2;
};

// Line 1508: range 000000000DE8015E-000000000DE801AB
void __cdecl data::ConfigGCGConditionGlobalCurCampHurtTotal::ConfigGCGConditionGlobalCurCampHurtTotal(
        data::ConfigGCGConditionGlobalCurCampHurtTotal *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalCurCampHurtTotal + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 1508: range 000000000DE805C0-000000000DE80618
void __cdecl data::ConfigGCGConditionGlobalCurCampHurtTotal::ConfigGCGConditionGlobalCurCampHurtTotal(
        data::ConfigGCGConditionGlobalCurCampHurtTotal *const this,
        const data::ConfigGCGConditionGlobalCurCampHurtTotal *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalCurCampHurtTotal + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 1514: range 000000000DF545D0-000000000DF545FA
void __cdecl data::ConfigGCGConditionGlobalCurCampHurtTotal::~ConfigGCGConditionGlobalCurCampHurtTotal(
        data::ConfigGCGConditionGlobalCurCampHurtTotal *const this)
{
  data::ConfigGCGConditionGlobalCurCampHurtTotal::~ConfigGCGConditionGlobalCurCampHurtTotal(this);
  operator delete(this, 0x20uLL);
};

// Line 1514: range 000000000DF54582-000000000DF545CF
void __cdecl data::ConfigGCGConditionGlobalCurCampHurtTotal::~ConfigGCGConditionGlobalCurCampHurtTotal(
        data::ConfigGCGConditionGlobalCurCampHurtTotal *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalCurCampHurtTotal + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition(this);
};

// Line 1519: range 000000000D744978-000000000D744988
const char *__cdecl data::ConfigGCGConditionGlobalCurCampHurtTotal::getTypeName(
        const data::ConfigGCGConditionGlobalCurCampHurtTotal *const this)
{
  return "ConfigGCGConditionGlobalCurCampHurtTotal";
};

// Line 1520: range 000000000D74498A-000000000D744B26
int32_t __cdecl data::ConfigGCGConditionGlobalCurCampHurtTotal::getHashNum(
        const data::ConfigGCGConditionGlobalCurCampHurtTotal *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionGlobalCurCampHurtTotal::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionGlobalCurCampHurtTotal",
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

// Line 1536: range 000000000DE80862-000000000DE808A3
void __cdecl data::ConfigGCGConditionGlobalCurCampHurtTotalFactory::ConfigGCGConditionGlobalCurCampHurtTotalFactory(
        data::ConfigGCGConditionGlobalCurCampHurtTotalFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalCurCampHurtTotalFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionGlobalCurCampHurtTotalFactory = v2;
};

// Line 1544: range 000000000DE80BAC-000000000DE80BF9
void __cdecl data::ConfigGCGConditionCheckCurCharacterHurtNum::ConfigGCGConditionCheckCurCharacterHurtNum(
        data::ConfigGCGConditionCheckCurCharacterHurtNum *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurCharacterHurtNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 1544: range 000000000DE8100E-000000000DE81066
void __cdecl data::ConfigGCGConditionCheckCurCharacterHurtNum::ConfigGCGConditionCheckCurCharacterHurtNum(
        data::ConfigGCGConditionCheckCurCharacterHurtNum *const this,
        const data::ConfigGCGConditionCheckCurCharacterHurtNum *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurCharacterHurtNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 1550: range 000000000DF54556-000000000DF54580
void __cdecl data::ConfigGCGConditionCheckCurCharacterHurtNum::~ConfigGCGConditionCheckCurCharacterHurtNum(
        data::ConfigGCGConditionCheckCurCharacterHurtNum *const this)
{
  data::ConfigGCGConditionCheckCurCharacterHurtNum::~ConfigGCGConditionCheckCurCharacterHurtNum(this);
  operator delete(this, 0x20uLL);
};

// Line 1550: range 000000000DF54508-000000000DF54555
void __cdecl data::ConfigGCGConditionCheckCurCharacterHurtNum::~ConfigGCGConditionCheckCurCharacterHurtNum(
        data::ConfigGCGConditionCheckCurCharacterHurtNum *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurCharacterHurtNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition(this);
};

// Line 1555: range 000000000D744B28-000000000D744B38
const char *__cdecl data::ConfigGCGConditionCheckCurCharacterHurtNum::getTypeName(
        const data::ConfigGCGConditionCheckCurCharacterHurtNum *const this)
{
  return "ConfigGCGConditionCheckCurCharacterHurtNum";
};

// Line 1556: range 000000000D744B3A-000000000D744CD6
int32_t __cdecl data::ConfigGCGConditionCheckCurCharacterHurtNum::getHashNum(
        const data::ConfigGCGConditionCheckCurCharacterHurtNum *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionCheckCurCharacterHurtNum::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionCheckCurCharacterHurtNum",
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

// Line 1572: range 000000000DE812B0-000000000DE812F1
void __cdecl data::ConfigGCGConditionCheckCurCharacterHurtNumFactory::ConfigGCGConditionCheckCurCharacterHurtNumFactory(
        data::ConfigGCGConditionCheckCurCharacterHurtNumFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurCharacterHurtNumFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionCheckCurCharacterHurtNumFactory = v2;
};

// Line 1580: range 000000000DE815FA-000000000DE8168D
void __cdecl data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterID::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterID(
        data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterID *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition((data::ConfigGCGCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterID + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->camp_type, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->camp_type = CAMP_BOTH;
};

// Line 1580: range 000000000DE81B22-000000000DE81BFF
void __cdecl data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterID::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterID(
        data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterID *const this,
        const data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterID *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GCGEffectCampType camp_type; // ecx
  char v5; // dl

  data::ConfigGCGCondition::ConfigGCGCondition(
    (data::ConfigGCGCondition *const)this,
    (const data::ConfigGCGCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterID + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->camp_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->camp_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->camp_type);
  }
  camp_type = a2->camp_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->camp_type, v3);
  }
  this->camp_type = camp_type;
};

// Line 1587: range 000000000DF5448E-000000000DF544DB
void __cdecl data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterID::~ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterID(
        data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterID *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterID + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition((data::ConfigGCGCondition *const)this);
};

// Line 1587: range 000000000DF544DC-000000000DF54506
void __cdecl data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterID::~ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterID(
        data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterID *const this)
{
  data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterID::~ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterID(this);
  operator delete(this, 0x20uLL);
};

// Line 1592: range 000000000D744CD8-000000000D744CE8
const char *__cdecl data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterID::getTypeName(
        const data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterID *const this)
{
  return "ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterID";
};

// Line 1593: range 000000000D744CEA-000000000D744E86
int32_t __cdecl data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterID::getHashNum(
        const data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterID *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterID::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterID",
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

// Line 1609: range 000000000DE81E48-000000000DE81E89
void __cdecl data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterIDFactory::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterIDFactory(
        data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterIDFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterIDFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterIDFactory = v2;
};

// Line 1617: range 000000000DE82192-000000000DE8227E
void __cdecl data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObject::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObject(
        data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObject *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition((data::ConfigGCGCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObject + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->camp_type, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->camp_type = CAMP_BOTH;
  if ( *(_WORD *)(((unsigned __int64)&this->condition >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigGCGLogicCondition>();
};

// Line 1617: range 000000000DE826F0-000000000DE827E8
void __cdecl data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObject::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObject(
        data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObject *const this,
        const data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObject *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GCGEffectCampType camp_type; // ecx
  char v5; // dl

  data::ConfigGCGCondition::ConfigGCGCondition(
    (data::ConfigGCGCondition *const)this,
    (const data::ConfigGCGCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObject + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->camp_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->camp_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->camp_type);
  }
  camp_type = a2->camp_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->camp_type, v3);
  }
  this->camp_type = camp_type;
  std::shared_ptr<data::ConfigGCGLogicCondition>::shared_ptr(&this->condition, &a2->condition);
};

// Line 1625: range 000000000DF54462-000000000DF5448C
void __cdecl data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObject::~ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObject(
        data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObject *const this)
{
  data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObject::~ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObject(this);
  operator delete(this, 0x30uLL);
};

// Line 1625: range 000000000DF54404-000000000DF54461
void __cdecl data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObject::~ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObject(
        data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObject *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObject + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  std::shared_ptr<data::ConfigGCGLogicCondition>::~shared_ptr(&this->condition);
  data::ConfigGCGCondition::~ConfigGCGCondition((data::ConfigGCGCondition *const)this);
};

// Line 1630: range 000000000D744E88-000000000D744E98
const char *__cdecl data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObject::getTypeName(
        const data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObject *const this)
{
  return "ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObject";
};

// Line 1631: range 000000000D744E9A-000000000D745036
int32_t __cdecl data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObject::getHashNum(
        const data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObject *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObject::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObject",
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

// Line 1647: range 000000000DE82A32-000000000DE82A73
void __cdecl data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObjectFactory::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObjectFactory(
        data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObjectFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObjectFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObjectFactory = v2;
};

// Line 1655: range 000000000DE82D7C-000000000DE82DC9
void __cdecl data::ConfigGCGConditionCheckCurSkillUsed::ConfigGCGConditionCheckCurSkillUsed(
        data::ConfigGCGConditionCheckCurSkillUsed *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurSkillUsed + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 1655: range 000000000DE831DE-000000000DE83236
void __cdecl data::ConfigGCGConditionCheckCurSkillUsed::ConfigGCGConditionCheckCurSkillUsed(
        data::ConfigGCGConditionCheckCurSkillUsed *const this,
        const data::ConfigGCGConditionCheckCurSkillUsed *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurSkillUsed + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 1661: range 000000000DF543D8-000000000DF54402
void __cdecl data::ConfigGCGConditionCheckCurSkillUsed::~ConfigGCGConditionCheckCurSkillUsed(
        data::ConfigGCGConditionCheckCurSkillUsed *const this)
{
  data::ConfigGCGConditionCheckCurSkillUsed::~ConfigGCGConditionCheckCurSkillUsed(this);
  operator delete(this, 0x20uLL);
};

// Line 1661: range 000000000DF5438A-000000000DF543D7
void __cdecl data::ConfigGCGConditionCheckCurSkillUsed::~ConfigGCGConditionCheckCurSkillUsed(
        data::ConfigGCGConditionCheckCurSkillUsed *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurSkillUsed + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition(this);
};

// Line 1666: range 000000000D745038-000000000D745048
const char *__cdecl data::ConfigGCGConditionCheckCurSkillUsed::getTypeName(
        const data::ConfigGCGConditionCheckCurSkillUsed *const this)
{
  return "ConfigGCGConditionCheckCurSkillUsed";
};

// Line 1667: range 000000000D74504A-000000000D7451E6
int32_t __cdecl data::ConfigGCGConditionCheckCurSkillUsed::getHashNum(
        const data::ConfigGCGConditionCheckCurSkillUsed *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionCheckCurSkillUsed::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionCheckCurSkillUsed",
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

// Line 1683: range 000000000DE83480-000000000DE834C1
void __cdecl data::ConfigGCGConditionCheckCurSkillUsedFactory::ConfigGCGConditionCheckCurSkillUsedFactory(
        data::ConfigGCGConditionCheckCurSkillUsedFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurSkillUsedFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionCheckCurSkillUsedFactory = v2;
};

// Line 1691: range 000000000DE837CA-000000000DE83817
void __cdecl data::ConfigGCGConditionGlobalCurCampBackStageHurtTotalNum::ConfigGCGConditionGlobalCurCampBackStageHurtTotalNum(
        data::ConfigGCGConditionGlobalCurCampBackStageHurtTotalNum *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalCurCampBackStageHurtTotalNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 1691: range 000000000DE83C2C-000000000DE83C84
void __cdecl data::ConfigGCGConditionGlobalCurCampBackStageHurtTotalNum::ConfigGCGConditionGlobalCurCampBackStageHurtTotalNum(
        data::ConfigGCGConditionGlobalCurCampBackStageHurtTotalNum *const this,
        const data::ConfigGCGConditionGlobalCurCampBackStageHurtTotalNum *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalCurCampBackStageHurtTotalNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 1697: range 000000000DF5435E-000000000DF54388
void __cdecl data::ConfigGCGConditionGlobalCurCampBackStageHurtTotalNum::~ConfigGCGConditionGlobalCurCampBackStageHurtTotalNum(
        data::ConfigGCGConditionGlobalCurCampBackStageHurtTotalNum *const this)
{
  data::ConfigGCGConditionGlobalCurCampBackStageHurtTotalNum::~ConfigGCGConditionGlobalCurCampBackStageHurtTotalNum(this);
  operator delete(this, 0x20uLL);
};

// Line 1697: range 000000000DF54310-000000000DF5435D
void __cdecl data::ConfigGCGConditionGlobalCurCampBackStageHurtTotalNum::~ConfigGCGConditionGlobalCurCampBackStageHurtTotalNum(
        data::ConfigGCGConditionGlobalCurCampBackStageHurtTotalNum *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalCurCampBackStageHurtTotalNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition(this);
};

// Line 1702: range 000000000D7451E8-000000000D7451F8
const char *__cdecl data::ConfigGCGConditionGlobalCurCampBackStageHurtTotalNum::getTypeName(
        const data::ConfigGCGConditionGlobalCurCampBackStageHurtTotalNum *const this)
{
  return "ConfigGCGConditionGlobalCurCampBackStageHurtTotalNum";
};

// Line 1703: range 000000000D7451FA-000000000D745396
int32_t __cdecl data::ConfigGCGConditionGlobalCurCampBackStageHurtTotalNum::getHashNum(
        const data::ConfigGCGConditionGlobalCurCampBackStageHurtTotalNum *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionGlobalCurCampBackStageHurtTotalNum::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionGlobalCurCampBackStageHurtTotalNum",
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

// Line 1719: range 000000000DE83ECE-000000000DE83F0F
void __cdecl data::ConfigGCGConditionGlobalCurCampBackStageHurtTotalNumFactory::ConfigGCGConditionGlobalCurCampBackStageHurtTotalNumFactory(
        data::ConfigGCGConditionGlobalCurCampBackStageHurtTotalNumFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalCurCampBackStageHurtTotalNumFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionGlobalCurCampBackStageHurtTotalNumFactory = v2;
};

// Line 1727: range 000000000DE84218-000000000DE84265
void __cdecl data::ConfigGCGConditionCurCharacterHpNum::ConfigGCGConditionCurCharacterHpNum(
        data::ConfigGCGConditionCurCharacterHpNum *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCurCharacterHpNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 1727: range 000000000DE8467A-000000000DE846D2
void __cdecl data::ConfigGCGConditionCurCharacterHpNum::ConfigGCGConditionCurCharacterHpNum(
        data::ConfigGCGConditionCurCharacterHpNum *const this,
        const data::ConfigGCGConditionCurCharacterHpNum *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCurCharacterHpNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 1733: range 000000000DF54296-000000000DF542E3
void __cdecl data::ConfigGCGConditionCurCharacterHpNum::~ConfigGCGConditionCurCharacterHpNum(
        data::ConfigGCGConditionCurCharacterHpNum *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCurCharacterHpNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition(this);
};

// Line 1733: range 000000000DF542E4-000000000DF5430E
void __cdecl data::ConfigGCGConditionCurCharacterHpNum::~ConfigGCGConditionCurCharacterHpNum(
        data::ConfigGCGConditionCurCharacterHpNum *const this)
{
  data::ConfigGCGConditionCurCharacterHpNum::~ConfigGCGConditionCurCharacterHpNum(this);
  operator delete(this, 0x20uLL);
};

// Line 1738: range 000000000D745398-000000000D7453A8
const char *__cdecl data::ConfigGCGConditionCurCharacterHpNum::getTypeName(
        const data::ConfigGCGConditionCurCharacterHpNum *const this)
{
  return "ConfigGCGConditionCurCharacterHpNum";
};

// Line 1739: range 000000000D7453AA-000000000D745546
int32_t __cdecl data::ConfigGCGConditionCurCharacterHpNum::getHashNum(
        const data::ConfigGCGConditionCurCharacterHpNum *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionCurCharacterHpNum::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionCurCharacterHpNum",
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

// Line 1755: range 000000000DE8491C-000000000DE8495D
void __cdecl data::ConfigGCGConditionCurCharacterHpNumFactory::ConfigGCGConditionCurCharacterHpNumFactory(
        data::ConfigGCGConditionCurCharacterHpNumFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCurCharacterHpNumFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionCurCharacterHpNumFactory = v2;
};

// Line 1763: range 000000000DE84C66-000000000DE84CB3
void __cdecl data::ConfigGCGConditionCurCharacterEnergyNum::ConfigGCGConditionCurCharacterEnergyNum(
        data::ConfigGCGConditionCurCharacterEnergyNum *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCurCharacterEnergyNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 1763: range 000000000DE850C8-000000000DE85120
void __cdecl data::ConfigGCGConditionCurCharacterEnergyNum::ConfigGCGConditionCurCharacterEnergyNum(
        data::ConfigGCGConditionCurCharacterEnergyNum *const this,
        const data::ConfigGCGConditionCurCharacterEnergyNum *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCurCharacterEnergyNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 1769: range 000000000DF5421C-000000000DF54269
void __cdecl data::ConfigGCGConditionCurCharacterEnergyNum::~ConfigGCGConditionCurCharacterEnergyNum(
        data::ConfigGCGConditionCurCharacterEnergyNum *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCurCharacterEnergyNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition(this);
};

// Line 1769: range 000000000DF5426A-000000000DF54294
void __cdecl data::ConfigGCGConditionCurCharacterEnergyNum::~ConfigGCGConditionCurCharacterEnergyNum(
        data::ConfigGCGConditionCurCharacterEnergyNum *const this)
{
  data::ConfigGCGConditionCurCharacterEnergyNum::~ConfigGCGConditionCurCharacterEnergyNum(this);
  operator delete(this, 0x20uLL);
};

// Line 1774: range 000000000D745548-000000000D745558
const char *__cdecl data::ConfigGCGConditionCurCharacterEnergyNum::getTypeName(
        const data::ConfigGCGConditionCurCharacterEnergyNum *const this)
{
  return "ConfigGCGConditionCurCharacterEnergyNum";
};

// Line 1775: range 000000000D74555A-000000000D7456F6
int32_t __cdecl data::ConfigGCGConditionCurCharacterEnergyNum::getHashNum(
        const data::ConfigGCGConditionCurCharacterEnergyNum *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionCurCharacterEnergyNum::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionCurCharacterEnergyNum",
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

// Line 1791: range 000000000DE8536A-000000000DE853AB
void __cdecl data::ConfigGCGConditionCurCharacterEnergyNumFactory::ConfigGCGConditionCurCharacterEnergyNumFactory(
        data::ConfigGCGConditionCurCharacterEnergyNumFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCurCharacterEnergyNumFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionCurCharacterEnergyNumFactory = v2;
};

// Line 1799: range 000000000DE856B4-000000000DE85701
void __cdecl data::ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNum::ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNum(
        data::ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNum *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 1799: range 000000000DE85B16-000000000DE85B6E
void __cdecl data::ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNum::ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNum(
        data::ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNum *const this,
        const data::ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNum *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 1805: range 000000000DF541A2-000000000DF541EF
void __cdecl data::ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNum::~ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNum(
        data::ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNum *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition(this);
};

// Line 1805: range 000000000DF541F0-000000000DF5421A
void __cdecl data::ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNum::~ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNum(
        data::ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNum *const this)
{
  data::ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNum::~ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNum(this);
  operator delete(this, 0x20uLL);
};

// Line 1810: range 000000000D7456F8-000000000D745708
const char *__cdecl data::ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNum::getTypeName(
        const data::ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNum *const this)
{
  return "ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNum";
};

// Line 1811: range 000000000D74570A-000000000D7458A6
int32_t __cdecl data::ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNum::getHashNum(
        const data::ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNum *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNum::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNum",
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

// Line 1827: range 000000000DE85DB8-000000000DE85DF9
void __cdecl data::ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNumFactory::ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNumFactory(
        data::ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNumFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNumFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNumFactory = v2;
};

// Line 1835: range 000000000DE86102-000000000DE8614F
void __cdecl data::ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNum::ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNum(
        data::ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNum *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 1835: range 000000000DE86564-000000000DE865BC
void __cdecl data::ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNum::ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNum(
        data::ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNum *const this,
        const data::ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNum *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 1841: range 000000000DF54176-000000000DF541A0
void __cdecl data::ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNum::~ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNum(
        data::ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNum *const this)
{
  data::ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNum::~ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNum(this);
  operator delete(this, 0x20uLL);
};

// Line 1841: range 000000000DF54128-000000000DF54175
void __cdecl data::ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNum::~ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNum(
        data::ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNum *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition(this);
};

// Line 1846: range 000000000D7458A8-000000000D7458B8
const char *__cdecl data::ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNum::getTypeName(
        const data::ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNum *const this)
{
  return "ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNum";
};

// Line 1847: range 000000000D7458BA-000000000D745A56
int32_t __cdecl data::ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNum::getHashNum(
        const data::ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNum *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNum::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNum",
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

// Line 1863: range 000000000DE86806-000000000DE86847
void __cdecl data::ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNumFactory::ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNumFactory(
        data::ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNumFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNumFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNumFactory = v2;
};

// Line 1871: range 000000000DE86B50-000000000DE86B9D
void __cdecl data::ConfigGCGConditionGlobalThisSkillID::ConfigGCGConditionGlobalThisSkillID(
        data::ConfigGCGConditionGlobalThisSkillID *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalThisSkillID + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 1871: range 000000000DE86FB2-000000000DE8700A
void __cdecl data::ConfigGCGConditionGlobalThisSkillID::ConfigGCGConditionGlobalThisSkillID(
        data::ConfigGCGConditionGlobalThisSkillID *const this,
        const data::ConfigGCGConditionGlobalThisSkillID *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalThisSkillID + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 1877: range 000000000DF540FC-000000000DF54126
void __cdecl data::ConfigGCGConditionGlobalThisSkillID::~ConfigGCGConditionGlobalThisSkillID(
        data::ConfigGCGConditionGlobalThisSkillID *const this)
{
  data::ConfigGCGConditionGlobalThisSkillID::~ConfigGCGConditionGlobalThisSkillID(this);
  operator delete(this, 0x20uLL);
};

// Line 1877: range 000000000DF540AE-000000000DF540FB
void __cdecl data::ConfigGCGConditionGlobalThisSkillID::~ConfigGCGConditionGlobalThisSkillID(
        data::ConfigGCGConditionGlobalThisSkillID *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalThisSkillID + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition(this);
};

// Line 1882: range 000000000D745A58-000000000D745A68
const char *__cdecl data::ConfigGCGConditionGlobalThisSkillID::getTypeName(
        const data::ConfigGCGConditionGlobalThisSkillID *const this)
{
  return "ConfigGCGConditionGlobalThisSkillID";
};

// Line 1883: range 000000000D745A6A-000000000D745C06
int32_t __cdecl data::ConfigGCGConditionGlobalThisSkillID::getHashNum(
        const data::ConfigGCGConditionGlobalThisSkillID *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionGlobalThisSkillID::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionGlobalThisSkillID",
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

// Line 1899: range 000000000DE87254-000000000DE87295
void __cdecl data::ConfigGCGConditionGlobalThisSkillIDFactory::ConfigGCGConditionGlobalThisSkillIDFactory(
        data::ConfigGCGConditionGlobalThisSkillIDFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalThisSkillIDFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionGlobalThisSkillIDFactory = v2;
};

// Line 1907: range 000000000DE8759E-000000000DE87644
void __cdecl data::ConfigGCGConditionGlobalThisSkillObject::ConfigGCGConditionGlobalThisSkillObject(
        data::ConfigGCGConditionGlobalThisSkillObject *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalThisSkillObject + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  if ( *(_WORD *)(((unsigned __int64)&this->condition >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigGCGLogicCondition>();
};

// Line 1907: range 000000000DE87B8E-000000000DE87C01
void __cdecl data::ConfigGCGConditionGlobalThisSkillObject::ConfigGCGConditionGlobalThisSkillObject(
        data::ConfigGCGConditionGlobalThisSkillObject *const this,
        const data::ConfigGCGConditionGlobalThisSkillObject *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalThisSkillObject + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
  std::shared_ptr<data::ConfigGCGLogicCondition>::shared_ptr(&this->condition, &a2->condition);
};

// Line 1914: range 000000000DF54024-000000000DF54081
void __cdecl data::ConfigGCGConditionGlobalThisSkillObject::~ConfigGCGConditionGlobalThisSkillObject(
        data::ConfigGCGConditionGlobalThisSkillObject *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalThisSkillObject + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  std::shared_ptr<data::ConfigGCGLogicCondition>::~shared_ptr(&this->condition);
  data::ConfigGCGCondition::~ConfigGCGCondition(this);
};

// Line 1914: range 000000000DF54082-000000000DF540AC
void __cdecl data::ConfigGCGConditionGlobalThisSkillObject::~ConfigGCGConditionGlobalThisSkillObject(
        data::ConfigGCGConditionGlobalThisSkillObject *const this)
{
  data::ConfigGCGConditionGlobalThisSkillObject::~ConfigGCGConditionGlobalThisSkillObject(this);
  operator delete(this, 0x30uLL);
};

// Line 1919: range 000000000D745C08-000000000D745C18
const char *__cdecl data::ConfigGCGConditionGlobalThisSkillObject::getTypeName(
        const data::ConfigGCGConditionGlobalThisSkillObject *const this)
{
  return "ConfigGCGConditionGlobalThisSkillObject";
};

// Line 1920: range 000000000D745C1A-000000000D745DB6
int32_t __cdecl data::ConfigGCGConditionGlobalThisSkillObject::getHashNum(
        const data::ConfigGCGConditionGlobalThisSkillObject *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionGlobalThisSkillObject::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionGlobalThisSkillObject",
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

// Line 1936: range 000000000DE87E4A-000000000DE87E8B
void __cdecl data::ConfigGCGConditionGlobalThisSkillObjectFactory::ConfigGCGConditionGlobalThisSkillObjectFactory(
        data::ConfigGCGConditionGlobalThisSkillObjectFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalThisSkillObjectFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionGlobalThisSkillObjectFactory = v2;
};

// Line 1944: range 000000000DE88194-000000000DE881E1
void __cdecl data::ConfigGCGConditionFetchCurSkillRoundUsedNum::ConfigGCGConditionFetchCurSkillRoundUsedNum(
        data::ConfigGCGConditionFetchCurSkillRoundUsedNum *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionFetchCurSkillRoundUsedNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 1944: range 000000000DE885F6-000000000DE8864E
void __cdecl data::ConfigGCGConditionFetchCurSkillRoundUsedNum::ConfigGCGConditionFetchCurSkillRoundUsedNum(
        data::ConfigGCGConditionFetchCurSkillRoundUsedNum *const this,
        const data::ConfigGCGConditionFetchCurSkillRoundUsedNum *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionFetchCurSkillRoundUsedNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 1950: range 000000000DF53FF8-000000000DF54022
void __cdecl data::ConfigGCGConditionFetchCurSkillRoundUsedNum::~ConfigGCGConditionFetchCurSkillRoundUsedNum(
        data::ConfigGCGConditionFetchCurSkillRoundUsedNum *const this)
{
  data::ConfigGCGConditionFetchCurSkillRoundUsedNum::~ConfigGCGConditionFetchCurSkillRoundUsedNum(this);
  operator delete(this, 0x20uLL);
};

// Line 1950: range 000000000DF53FAA-000000000DF53FF7
void __cdecl data::ConfigGCGConditionFetchCurSkillRoundUsedNum::~ConfigGCGConditionFetchCurSkillRoundUsedNum(
        data::ConfigGCGConditionFetchCurSkillRoundUsedNum *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionFetchCurSkillRoundUsedNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition(this);
};

// Line 1955: range 000000000D745DB8-000000000D745DC8
const char *__cdecl data::ConfigGCGConditionFetchCurSkillRoundUsedNum::getTypeName(
        const data::ConfigGCGConditionFetchCurSkillRoundUsedNum *const this)
{
  return "ConfigGCGConditionFetchCurSkillRoundUsedNum";
};

// Line 1956: range 000000000D745DCA-000000000D745F66
int32_t __cdecl data::ConfigGCGConditionFetchCurSkillRoundUsedNum::getHashNum(
        const data::ConfigGCGConditionFetchCurSkillRoundUsedNum *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionFetchCurSkillRoundUsedNum::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionFetchCurSkillRoundUsedNum",
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

// Line 1972: range 000000000DE88898-000000000DE888D9
void __cdecl data::ConfigGCGConditionFetchCurSkillRoundUsedNumFactory::ConfigGCGConditionFetchCurSkillRoundUsedNumFactory(
        data::ConfigGCGConditionFetchCurSkillRoundUsedNumFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionFetchCurSkillRoundUsedNumFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionFetchCurSkillRoundUsedNumFactory = v2;
};

// Line 1980: range 000000000DE88BE2-000000000DE88C75
void __cdecl data::ConfigGCGConditionCheckCurSkillHasSkillID::ConfigGCGConditionCheckCurSkillHasSkillID(
        data::ConfigGCGConditionCheckCurSkillHasSkillID *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition((data::ConfigGCGCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurSkillHasSkillID + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skill_id, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->skill_id = 0;
};

// Line 1980: range 000000000DE8910A-000000000DE891E7
void __cdecl data::ConfigGCGConditionCheckCurSkillHasSkillID::ConfigGCGConditionCheckCurSkillHasSkillID(
        data::ConfigGCGConditionCheckCurSkillHasSkillID *const this,
        const data::ConfigGCGConditionCheckCurSkillHasSkillID *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t skill_id; // ecx
  char v5; // dl

  data::ConfigGCGCondition::ConfigGCGCondition(
    (data::ConfigGCGCondition *const)this,
    (const data::ConfigGCGCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurSkillHasSkillID + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
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
};

// Line 1987: range 000000000DF53F7E-000000000DF53FA8
void __cdecl data::ConfigGCGConditionCheckCurSkillHasSkillID::~ConfigGCGConditionCheckCurSkillHasSkillID(
        data::ConfigGCGConditionCheckCurSkillHasSkillID *const this)
{
  data::ConfigGCGConditionCheckCurSkillHasSkillID::~ConfigGCGConditionCheckCurSkillHasSkillID(this);
  operator delete(this, 0x20uLL);
};

// Line 1987: range 000000000DF53F30-000000000DF53F7D
void __cdecl data::ConfigGCGConditionCheckCurSkillHasSkillID::~ConfigGCGConditionCheckCurSkillHasSkillID(
        data::ConfigGCGConditionCheckCurSkillHasSkillID *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurSkillHasSkillID + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition((data::ConfigGCGCondition *const)this);
};

// Line 1992: range 000000000D745F68-000000000D745F78
const char *__cdecl data::ConfigGCGConditionCheckCurSkillHasSkillID::getTypeName(
        const data::ConfigGCGConditionCheckCurSkillHasSkillID *const this)
{
  return "ConfigGCGConditionCheckCurSkillHasSkillID";
};

// Line 1993: range 000000000D745F7A-000000000D746116
int32_t __cdecl data::ConfigGCGConditionCheckCurSkillHasSkillID::getHashNum(
        const data::ConfigGCGConditionCheckCurSkillHasSkillID *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionCheckCurSkillHasSkillID::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionCheckCurSkillHasSkillID",
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

// Line 2009: range 000000000DE89430-000000000DE89471
void __cdecl data::ConfigGCGConditionCheckCurSkillHasSkillIDFactory::ConfigGCGConditionCheckCurSkillHasSkillIDFactory(
        data::ConfigGCGConditionCheckCurSkillHasSkillIDFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurSkillHasSkillIDFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionCheckCurSkillHasSkillIDFactory = v2;
};

// Line 2017: range 000000000DE8977A-000000000DE8980D
void __cdecl data::ConfigGCGConditionCheckCurCharacterHasCardID::ConfigGCGConditionCheckCurCharacterHasCardID(
        data::ConfigGCGConditionCheckCurCharacterHasCardID *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition((data::ConfigGCGCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurCharacterHasCardID + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_id, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->card_id = 0;
};

// Line 2017: range 000000000DE89CA2-000000000DE89D7F
void __cdecl data::ConfigGCGConditionCheckCurCharacterHasCardID::ConfigGCGConditionCheckCurCharacterHasCardID(
        data::ConfigGCGConditionCheckCurCharacterHasCardID *const this,
        const data::ConfigGCGConditionCheckCurCharacterHasCardID *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t card_id; // ecx
  char v5; // dl

  data::ConfigGCGCondition::ConfigGCGCondition(
    (data::ConfigGCGCondition *const)this,
    (const data::ConfigGCGCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurCharacterHasCardID + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->card_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->card_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->card_id);
  }
  card_id = a2->card_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->card_id, v3);
  }
  this->card_id = card_id;
};

// Line 2024: range 000000000DF53EB6-000000000DF53F03
void __cdecl data::ConfigGCGConditionCheckCurCharacterHasCardID::~ConfigGCGConditionCheckCurCharacterHasCardID(
        data::ConfigGCGConditionCheckCurCharacterHasCardID *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurCharacterHasCardID + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition((data::ConfigGCGCondition *const)this);
};

// Line 2024: range 000000000DF53F04-000000000DF53F2E
void __cdecl data::ConfigGCGConditionCheckCurCharacterHasCardID::~ConfigGCGConditionCheckCurCharacterHasCardID(
        data::ConfigGCGConditionCheckCurCharacterHasCardID *const this)
{
  data::ConfigGCGConditionCheckCurCharacterHasCardID::~ConfigGCGConditionCheckCurCharacterHasCardID(this);
  operator delete(this, 0x20uLL);
};

// Line 2029: range 000000000D746118-000000000D746128
const char *__cdecl data::ConfigGCGConditionCheckCurCharacterHasCardID::getTypeName(
        const data::ConfigGCGConditionCheckCurCharacterHasCardID *const this)
{
  return "ConfigGCGConditionCheckCurCharacterHasCardID";
};

// Line 2030: range 000000000D74612A-000000000D7462C6
int32_t __cdecl data::ConfigGCGConditionCheckCurCharacterHasCardID::getHashNum(
        const data::ConfigGCGConditionCheckCurCharacterHasCardID *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionCheckCurCharacterHasCardID::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionCheckCurCharacterHasCardID",
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

// Line 2046: range 000000000DE89FC8-000000000DE8A009
void __cdecl data::ConfigGCGConditionCheckCurCharacterHasCardIDFactory::ConfigGCGConditionCheckCurCharacterHasCardIDFactory(
        data::ConfigGCGConditionCheckCurCharacterHasCardIDFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurCharacterHasCardIDFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionCheckCurCharacterHasCardIDFactory = v2;
};

// Line 2054: range 000000000DE8A312-000000000DE8A3A5
void __cdecl data::ConfigGCGConditionCheckCurCardHasCardID::ConfigGCGConditionCheckCurCardHasCardID(
        data::ConfigGCGConditionCheckCurCardHasCardID *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition((data::ConfigGCGCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurCardHasCardID + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_id, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->card_id = 0;
};

// Line 2054: range 000000000DE8A83A-000000000DE8A917
void __cdecl data::ConfigGCGConditionCheckCurCardHasCardID::ConfigGCGConditionCheckCurCardHasCardID(
        data::ConfigGCGConditionCheckCurCardHasCardID *const this,
        const data::ConfigGCGConditionCheckCurCardHasCardID *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t card_id; // ecx
  char v5; // dl

  data::ConfigGCGCondition::ConfigGCGCondition(
    (data::ConfigGCGCondition *const)this,
    (const data::ConfigGCGCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurCardHasCardID + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->card_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->card_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->card_id);
  }
  card_id = a2->card_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->card_id, v3);
  }
  this->card_id = card_id;
};

// Line 2061: range 000000000DF53E3C-000000000DF53E89
void __cdecl data::ConfigGCGConditionCheckCurCardHasCardID::~ConfigGCGConditionCheckCurCardHasCardID(
        data::ConfigGCGConditionCheckCurCardHasCardID *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurCardHasCardID + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition((data::ConfigGCGCondition *const)this);
};

// Line 2061: range 000000000DF53E8A-000000000DF53EB4
void __cdecl data::ConfigGCGConditionCheckCurCardHasCardID::~ConfigGCGConditionCheckCurCardHasCardID(
        data::ConfigGCGConditionCheckCurCardHasCardID *const this)
{
  data::ConfigGCGConditionCheckCurCardHasCardID::~ConfigGCGConditionCheckCurCardHasCardID(this);
  operator delete(this, 0x20uLL);
};

// Line 2066: range 000000000D7462C8-000000000D7462D8
const char *__cdecl data::ConfigGCGConditionCheckCurCardHasCardID::getTypeName(
        const data::ConfigGCGConditionCheckCurCardHasCardID *const this)
{
  return "ConfigGCGConditionCheckCurCardHasCardID";
};

// Line 2067: range 000000000D7462DA-000000000D746476
int32_t __cdecl data::ConfigGCGConditionCheckCurCardHasCardID::getHashNum(
        const data::ConfigGCGConditionCheckCurCardHasCardID *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionCheckCurCardHasCardID::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionCheckCurCardHasCardID",
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

// Line 2083: range 000000000DE8AB60-000000000DE8ABA1
void __cdecl data::ConfigGCGConditionCheckCurCardHasCardIDFactory::ConfigGCGConditionCheckCurCardHasCardIDFactory(
        data::ConfigGCGConditionCheckCurCardHasCardIDFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurCardHasCardIDFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionCheckCurCardHasCardIDFactory = v2;
};

// Line 2091: range 000000000DE8AEAA-000000000DE8AEF7
void __cdecl data::ConfigGCGConditionFetchCurCardAbsorbDiceNum::ConfigGCGConditionFetchCurCardAbsorbDiceNum(
        data::ConfigGCGConditionFetchCurCardAbsorbDiceNum *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionFetchCurCardAbsorbDiceNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 2091: range 000000000DE8B30C-000000000DE8B364
void __cdecl data::ConfigGCGConditionFetchCurCardAbsorbDiceNum::ConfigGCGConditionFetchCurCardAbsorbDiceNum(
        data::ConfigGCGConditionFetchCurCardAbsorbDiceNum *const this,
        const data::ConfigGCGConditionFetchCurCardAbsorbDiceNum *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionFetchCurCardAbsorbDiceNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 2097: range 000000000DF53E10-000000000DF53E3A
void __cdecl data::ConfigGCGConditionFetchCurCardAbsorbDiceNum::~ConfigGCGConditionFetchCurCardAbsorbDiceNum(
        data::ConfigGCGConditionFetchCurCardAbsorbDiceNum *const this)
{
  data::ConfigGCGConditionFetchCurCardAbsorbDiceNum::~ConfigGCGConditionFetchCurCardAbsorbDiceNum(this);
  operator delete(this, 0x20uLL);
};

// Line 2097: range 000000000DF53DC2-000000000DF53E0F
void __cdecl data::ConfigGCGConditionFetchCurCardAbsorbDiceNum::~ConfigGCGConditionFetchCurCardAbsorbDiceNum(
        data::ConfigGCGConditionFetchCurCardAbsorbDiceNum *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionFetchCurCardAbsorbDiceNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition(this);
};

// Line 2102: range 000000000D746478-000000000D746488
const char *__cdecl data::ConfigGCGConditionFetchCurCardAbsorbDiceNum::getTypeName(
        const data::ConfigGCGConditionFetchCurCardAbsorbDiceNum *const this)
{
  return "ConfigGCGConditionFetchCurCardAbsorbDiceNum";
};

// Line 2103: range 000000000D74648A-000000000D746626
int32_t __cdecl data::ConfigGCGConditionFetchCurCardAbsorbDiceNum::getHashNum(
        const data::ConfigGCGConditionFetchCurCardAbsorbDiceNum *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionFetchCurCardAbsorbDiceNum::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionFetchCurCardAbsorbDiceNum",
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

// Line 2119: range 000000000DE8B5AE-000000000DE8B5EF
void __cdecl data::ConfigGCGConditionFetchCurCardAbsorbDiceNumFactory::ConfigGCGConditionFetchCurCardAbsorbDiceNumFactory(
        data::ConfigGCGConditionFetchCurCardAbsorbDiceNumFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionFetchCurCardAbsorbDiceNumFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionFetchCurCardAbsorbDiceNumFactory = v2;
};

// Line 2127: range 000000000DE8B8F8-000000000DE8B98B
void __cdecl data::ConfigGCGConditionCheckCurCardSetDamageElement::ConfigGCGConditionCheckCurCardSetDamageElement(
        data::ConfigGCGConditionCheckCurCardSetDamageElement *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition((data::ConfigGCGCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurCardSetDamageElement + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->element_type, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->element_type = GCG_SET_DAMAGE_ELEMENT_NONE;
};

// Line 2127: range 000000000DE8BE20-000000000DE8BEFD
void __cdecl data::ConfigGCGConditionCheckCurCardSetDamageElement::ConfigGCGConditionCheckCurCardSetDamageElement(
        data::ConfigGCGConditionCheckCurCardSetDamageElement *const this,
        const data::ConfigGCGConditionCheckCurCardSetDamageElement *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GCGEffectSetDamageElementType element_type; // ecx
  char v5; // dl

  data::ConfigGCGCondition::ConfigGCGCondition(
    (data::ConfigGCGCondition *const)this,
    (const data::ConfigGCGCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurCardSetDamageElement + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->element_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->element_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->element_type);
  }
  element_type = a2->element_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->element_type, v3);
  }
  this->element_type = element_type;
};

// Line 2134: range 000000000DF53D48-000000000DF53D95
void __cdecl data::ConfigGCGConditionCheckCurCardSetDamageElement::~ConfigGCGConditionCheckCurCardSetDamageElement(
        data::ConfigGCGConditionCheckCurCardSetDamageElement *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurCardSetDamageElement + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition((data::ConfigGCGCondition *const)this);
};

// Line 2134: range 000000000DF53D96-000000000DF53DC0
void __cdecl data::ConfigGCGConditionCheckCurCardSetDamageElement::~ConfigGCGConditionCheckCurCardSetDamageElement(
        data::ConfigGCGConditionCheckCurCardSetDamageElement *const this)
{
  data::ConfigGCGConditionCheckCurCardSetDamageElement::~ConfigGCGConditionCheckCurCardSetDamageElement(this);
  operator delete(this, 0x20uLL);
};

// Line 2139: range 000000000D746628-000000000D746638
const char *__cdecl data::ConfigGCGConditionCheckCurCardSetDamageElement::getTypeName(
        const data::ConfigGCGConditionCheckCurCardSetDamageElement *const this)
{
  return "ConfigGCGConditionCheckCurCardSetDamageElement";
};

// Line 2140: range 000000000D74663A-000000000D7467D6
int32_t __cdecl data::ConfigGCGConditionCheckCurCardSetDamageElement::getHashNum(
        const data::ConfigGCGConditionCheckCurCardSetDamageElement *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionCheckCurCardSetDamageElement::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionCheckCurCardSetDamageElement",
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

// Line 2156: range 000000000DE8C146-000000000DE8C187
void __cdecl data::ConfigGCGConditionCheckCurCardSetDamageElementFactory::ConfigGCGConditionCheckCurCardSetDamageElementFactory(
        data::ConfigGCGConditionCheckCurCardSetDamageElementFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurCardSetDamageElementFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionCheckCurCardSetDamageElementFactory = v2;
};

// Line 2181: range 000000000DE8C5F0-000000000DE8C707
void __cdecl data::ConfigGCGConditionGlobalAreaContainCard::ConfigGCGConditionGlobalAreaContainCard(
        data::ConfigGCGConditionGlobalAreaContainCard *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigGCGCondition::ConfigGCGCondition((data::ConfigGCGCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalAreaContainCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->camp_type, v3);
  }
  this->camp_type = CAMP_BOTH;
  if ( *(_BYTE *)(((unsigned __int64)&this->area_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->area_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->area_type, v3);
  }
  this->area_type = EFFECT_AREA_HAND;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_id, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->card_id = 0;
};

// Line 2181: range 000000000DE8CADC-000000000DE8CCB3
void __cdecl data::ConfigGCGConditionGlobalAreaContainCard::ConfigGCGConditionGlobalAreaContainCard(
        data::ConfigGCGConditionGlobalAreaContainCard *const this,
        const data::ConfigGCGConditionGlobalAreaContainCard *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GCGEffectCampType camp_type; // ecx
  char v5; // dl
  data::GCGEffectAreaType area_type; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t card_id; // ecx
  char v10; // dl

  data::ConfigGCGCondition::ConfigGCGCondition(
    (data::ConfigGCGCondition *const)this,
    (const data::ConfigGCGCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalAreaContainCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->camp_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->camp_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->camp_type);
  }
  camp_type = a2->camp_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->camp_type, v3);
  }
  this->camp_type = camp_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->area_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->area_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->area_type);
  }
  area_type = a2->area_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->area_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->area_type, v3);
  }
  this->area_type = area_type;
  v8 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->card_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->card_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->card_id);
  }
  card_id = a2->card_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->card_id, v8);
  }
  this->card_id = card_id;
};

// Line 2190: range 000000000DF53CCE-000000000DF53D1B
void __cdecl data::ConfigGCGConditionGlobalAreaContainCard::~ConfigGCGConditionGlobalAreaContainCard(
        data::ConfigGCGConditionGlobalAreaContainCard *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalAreaContainCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition((data::ConfigGCGCondition *const)this);
};

// Line 2190: range 000000000DF53D1C-000000000DF53D46
void __cdecl data::ConfigGCGConditionGlobalAreaContainCard::~ConfigGCGConditionGlobalAreaContainCard(
        data::ConfigGCGConditionGlobalAreaContainCard *const this)
{
  data::ConfigGCGConditionGlobalAreaContainCard::~ConfigGCGConditionGlobalAreaContainCard(this);
  operator delete(this, 0x28uLL);
};

// Line 2195: range 000000000D7467D8-000000000D7467E8
const char *__cdecl data::ConfigGCGConditionGlobalAreaContainCard::getTypeName(
        const data::ConfigGCGConditionGlobalAreaContainCard *const this)
{
  return "ConfigGCGConditionGlobalAreaContainCard";
};

// Line 2196: range 000000000D7467EA-000000000D746986
int32_t __cdecl data::ConfigGCGConditionGlobalAreaContainCard::getHashNum(
        const data::ConfigGCGConditionGlobalAreaContainCard *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionGlobalAreaContainCard::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionGlobalAreaContainCard",
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

// Line 2212: range 000000000DE8CEFC-000000000DE8CF3D
void __cdecl data::ConfigGCGConditionGlobalAreaContainCardFactory::ConfigGCGConditionGlobalAreaContainCardFactory(
        data::ConfigGCGConditionGlobalAreaContainCardFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalAreaContainCardFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionGlobalAreaContainCardFactory = v2;
};

// Line 2220: range 000000000DE8D246-000000000DE8D2EC
void __cdecl data::ConfigGCGConditionGlobalLogicNot::ConfigGCGConditionGlobalLogicNot(
        data::ConfigGCGConditionGlobalLogicNot *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalLogicNot + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  if ( *(_WORD *)(((unsigned __int64)&this->condition >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigGCGLogicCondition>();
};

// Line 2220: range 000000000DE8D836-000000000DE8D8A9
void __cdecl data::ConfigGCGConditionGlobalLogicNot::ConfigGCGConditionGlobalLogicNot(
        data::ConfigGCGConditionGlobalLogicNot *const this,
        const data::ConfigGCGConditionGlobalLogicNot *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalLogicNot + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
  std::shared_ptr<data::ConfigGCGLogicCondition>::shared_ptr(&this->condition, &a2->condition);
};

// Line 2227: range 000000000DF53C44-000000000DF53CA1
void __cdecl data::ConfigGCGConditionGlobalLogicNot::~ConfigGCGConditionGlobalLogicNot(
        data::ConfigGCGConditionGlobalLogicNot *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalLogicNot + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  std::shared_ptr<data::ConfigGCGLogicCondition>::~shared_ptr(&this->condition);
  data::ConfigGCGCondition::~ConfigGCGCondition(this);
};

// Line 2227: range 000000000DF53CA2-000000000DF53CCC
void __cdecl data::ConfigGCGConditionGlobalLogicNot::~ConfigGCGConditionGlobalLogicNot(
        data::ConfigGCGConditionGlobalLogicNot *const this)
{
  data::ConfigGCGConditionGlobalLogicNot::~ConfigGCGConditionGlobalLogicNot(this);
  operator delete(this, 0x30uLL);
};

// Line 2232: range 000000000D746988-000000000D746998
const char *__cdecl data::ConfigGCGConditionGlobalLogicNot::getTypeName(
        const data::ConfigGCGConditionGlobalLogicNot *const this)
{
  return "ConfigGCGConditionGlobalLogicNot";
};

// Line 2233: range 000000000D74699A-000000000D746B36
int32_t __cdecl data::ConfigGCGConditionGlobalLogicNot::getHashNum(
        const data::ConfigGCGConditionGlobalLogicNot *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionGlobalLogicNot::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionGlobalLogicNot",
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

// Line 2249: range 000000000DE8DAF2-000000000DE8DB33
void __cdecl data::ConfigGCGConditionGlobalLogicNotFactory::ConfigGCGConditionGlobalLogicNotFactory(
        data::ConfigGCGConditionGlobalLogicNotFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalLogicNotFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionGlobalLogicNotFactory = v2;
};

// Line 2257: range 000000000DE8DE3C-000000000DE8DE89
void __cdecl data::ConfigGCGConditionGlobalCurSkillKillCharacter::ConfigGCGConditionGlobalCurSkillKillCharacter(
        data::ConfigGCGConditionGlobalCurSkillKillCharacter *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalCurSkillKillCharacter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 2257: range 000000000DE8E29E-000000000DE8E2F6
void __cdecl data::ConfigGCGConditionGlobalCurSkillKillCharacter::ConfigGCGConditionGlobalCurSkillKillCharacter(
        data::ConfigGCGConditionGlobalCurSkillKillCharacter *const this,
        const data::ConfigGCGConditionGlobalCurSkillKillCharacter *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalCurSkillKillCharacter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 2263: range 000000000DF53BCA-000000000DF53C17
void __cdecl data::ConfigGCGConditionGlobalCurSkillKillCharacter::~ConfigGCGConditionGlobalCurSkillKillCharacter(
        data::ConfigGCGConditionGlobalCurSkillKillCharacter *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalCurSkillKillCharacter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition(this);
};

// Line 2263: range 000000000DF53C18-000000000DF53C42
void __cdecl data::ConfigGCGConditionGlobalCurSkillKillCharacter::~ConfigGCGConditionGlobalCurSkillKillCharacter(
        data::ConfigGCGConditionGlobalCurSkillKillCharacter *const this)
{
  data::ConfigGCGConditionGlobalCurSkillKillCharacter::~ConfigGCGConditionGlobalCurSkillKillCharacter(this);
  operator delete(this, 0x20uLL);
};

// Line 2268: range 000000000D746B38-000000000D746B48
const char *__cdecl data::ConfigGCGConditionGlobalCurSkillKillCharacter::getTypeName(
        const data::ConfigGCGConditionGlobalCurSkillKillCharacter *const this)
{
  return "ConfigGCGConditionGlobalCurSkillKillCharacter";
};

// Line 2269: range 000000000D746B4A-000000000D746CE6
int32_t __cdecl data::ConfigGCGConditionGlobalCurSkillKillCharacter::getHashNum(
        const data::ConfigGCGConditionGlobalCurSkillKillCharacter *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionGlobalCurSkillKillCharacter::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionGlobalCurSkillKillCharacter",
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

// Line 2285: range 000000000DE8E540-000000000DE8E581
void __cdecl data::ConfigGCGConditionGlobalCurSkillKillCharacterFactory::ConfigGCGConditionGlobalCurSkillKillCharacterFactory(
        data::ConfigGCGConditionGlobalCurSkillKillCharacterFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalCurSkillKillCharacterFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionGlobalCurSkillKillCharacterFactory = v2;
};

// Line 2293: range 000000000DE8E88A-000000000DE8E91D
void __cdecl data::ConfigGCGConditionGlobalCheckCurSkillDamageElementType::ConfigGCGConditionGlobalCheckCurSkillDamageElementType(
        data::ConfigGCGConditionGlobalCheckCurSkillDamageElementType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition((data::ConfigGCGCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalCheckCurSkillDamageElementType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->element_type, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->element_type = DAMAGE_ELEMENT_ANY;
};

// Line 2293: range 000000000DE8EDB2-000000000DE8EE8F
void __cdecl data::ConfigGCGConditionGlobalCheckCurSkillDamageElementType::ConfigGCGConditionGlobalCheckCurSkillDamageElementType(
        data::ConfigGCGConditionGlobalCheckCurSkillDamageElementType *const this,
        const data::ConfigGCGConditionGlobalCheckCurSkillDamageElementType *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GCGEffectDamageElementType element_type; // ecx
  char v5; // dl

  data::ConfigGCGCondition::ConfigGCGCondition(
    (data::ConfigGCGCondition *const)this,
    (const data::ConfigGCGCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalCheckCurSkillDamageElementType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->element_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->element_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->element_type);
  }
  element_type = a2->element_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->element_type, v3);
  }
  this->element_type = element_type;
};

// Line 2300: range 000000000DF53B9E-000000000DF53BC8
void __cdecl data::ConfigGCGConditionGlobalCheckCurSkillDamageElementType::~ConfigGCGConditionGlobalCheckCurSkillDamageElementType(
        data::ConfigGCGConditionGlobalCheckCurSkillDamageElementType *const this)
{
  data::ConfigGCGConditionGlobalCheckCurSkillDamageElementType::~ConfigGCGConditionGlobalCheckCurSkillDamageElementType(this);
  operator delete(this, 0x20uLL);
};

// Line 2300: range 000000000DF53B50-000000000DF53B9D
void __cdecl data::ConfigGCGConditionGlobalCheckCurSkillDamageElementType::~ConfigGCGConditionGlobalCheckCurSkillDamageElementType(
        data::ConfigGCGConditionGlobalCheckCurSkillDamageElementType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalCheckCurSkillDamageElementType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition((data::ConfigGCGCondition *const)this);
};

// Line 2305: range 000000000D746CE8-000000000D746CF8
const char *__cdecl data::ConfigGCGConditionGlobalCheckCurSkillDamageElementType::getTypeName(
        const data::ConfigGCGConditionGlobalCheckCurSkillDamageElementType *const this)
{
  return "ConfigGCGConditionGlobalCheckCurSkillDamageElementType";
};

// Line 2306: range 000000000D746CFA-000000000D746E96
int32_t __cdecl data::ConfigGCGConditionGlobalCheckCurSkillDamageElementType::getHashNum(
        const data::ConfigGCGConditionGlobalCheckCurSkillDamageElementType *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionGlobalCheckCurSkillDamageElementType::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionGlobalCheckCurSkillDamageElementType",
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

// Line 2322: range 000000000DE8F0D8-000000000DE8F119
void __cdecl data::ConfigGCGConditionGlobalCheckCurSkillDamageElementTypeFactory::ConfigGCGConditionGlobalCheckCurSkillDamageElementTypeFactory(
        data::ConfigGCGConditionGlobalCheckCurSkillDamageElementTypeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalCheckCurSkillDamageElementTypeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionGlobalCheckCurSkillDamageElementTypeFactory = v2;
};

// Line 2330: range 000000000DE8F422-000000000DE8F47F
void __cdecl data::ConfigGCGConditionGlobalCheckCurSkillElementReactionId::ConfigGCGConditionGlobalCheckCurSkillElementReactionId(
        data::ConfigGCGConditionGlobalCheckCurSkillElementReactionId *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalCheckCurSkillElementReactionId + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  std::vector<unsigned int>::vector(&this->element_reaction_id_list);
};

// Line 2330: range 000000000DE8F874-000000000DE8F90A
void __cdecl data::ConfigGCGConditionGlobalCheckCurSkillElementReactionId::ConfigGCGConditionGlobalCheckCurSkillElementReactionId(
        data::ConfigGCGConditionGlobalCheckCurSkillElementReactionId *const this,
        const data::ConfigGCGConditionGlobalCheckCurSkillElementReactionId *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalCheckCurSkillElementReactionId + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
  std::vector<unsigned int>::vector(&this->element_reaction_id_list, &a2->element_reaction_id_list);
};

// Line 2337: range 000000000DF53AC6-000000000DF53B23
void __cdecl data::ConfigGCGConditionGlobalCheckCurSkillElementReactionId::~ConfigGCGConditionGlobalCheckCurSkillElementReactionId(
        data::ConfigGCGConditionGlobalCheckCurSkillElementReactionId *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalCheckCurSkillElementReactionId + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  std::vector<unsigned int>::~vector(&this->element_reaction_id_list);
  data::ConfigGCGCondition::~ConfigGCGCondition(this);
};

// Line 2337: range 000000000DF53B24-000000000DF53B4E
void __cdecl data::ConfigGCGConditionGlobalCheckCurSkillElementReactionId::~ConfigGCGConditionGlobalCheckCurSkillElementReactionId(
        data::ConfigGCGConditionGlobalCheckCurSkillElementReactionId *const this)
{
  data::ConfigGCGConditionGlobalCheckCurSkillElementReactionId::~ConfigGCGConditionGlobalCheckCurSkillElementReactionId(this);
  operator delete(this, 0x38uLL);
};

// Line 2342: range 000000000D746E98-000000000D746EA8
const char *__cdecl data::ConfigGCGConditionGlobalCheckCurSkillElementReactionId::getTypeName(
        const data::ConfigGCGConditionGlobalCheckCurSkillElementReactionId *const this)
{
  return "ConfigGCGConditionGlobalCheckCurSkillElementReactionId";
};

// Line 2343: range 000000000D746EAA-000000000D747046
int32_t __cdecl data::ConfigGCGConditionGlobalCheckCurSkillElementReactionId::getHashNum(
        const data::ConfigGCGConditionGlobalCheckCurSkillElementReactionId *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionGlobalCheckCurSkillElementReactionId::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionGlobalCheckCurSkillElementReactionId",
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

// Line 2359: range 000000000DE8FBF4-000000000DE8FC35
void __cdecl data::ConfigGCGConditionGlobalCheckCurSkillElementReactionIdFactory::ConfigGCGConditionGlobalCheckCurSkillElementReactionIdFactory(
        data::ConfigGCGConditionGlobalCheckCurSkillElementReactionIdFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalCheckCurSkillElementReactionIdFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionGlobalCheckCurSkillElementReactionIdFactory = v2;
};

// Line 2367: range 000000000DE8FF3E-000000000DE8FFD1
void __cdecl data::ConfigGCGConditionGlobalCurRoundHasCharacterDie::ConfigGCGConditionGlobalCurRoundHasCharacterDie(
        data::ConfigGCGConditionGlobalCurRoundHasCharacterDie *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition((data::ConfigGCGCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalCurRoundHasCharacterDie + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->camp_type, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->camp_type = CAMP_BOTH;
};

// Line 2367: range 000000000DE90466-000000000DE90543
void __cdecl data::ConfigGCGConditionGlobalCurRoundHasCharacterDie::ConfigGCGConditionGlobalCurRoundHasCharacterDie(
        data::ConfigGCGConditionGlobalCurRoundHasCharacterDie *const this,
        const data::ConfigGCGConditionGlobalCurRoundHasCharacterDie *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GCGEffectCampType camp_type; // ecx
  char v5; // dl

  data::ConfigGCGCondition::ConfigGCGCondition(
    (data::ConfigGCGCondition *const)this,
    (const data::ConfigGCGCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalCurRoundHasCharacterDie + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->camp_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->camp_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->camp_type);
  }
  camp_type = a2->camp_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->camp_type, v3);
  }
  this->camp_type = camp_type;
};

// Line 2374: range 000000000DF53A9A-000000000DF53AC4
void __cdecl data::ConfigGCGConditionGlobalCurRoundHasCharacterDie::~ConfigGCGConditionGlobalCurRoundHasCharacterDie(
        data::ConfigGCGConditionGlobalCurRoundHasCharacterDie *const this)
{
  data::ConfigGCGConditionGlobalCurRoundHasCharacterDie::~ConfigGCGConditionGlobalCurRoundHasCharacterDie(this);
  operator delete(this, 0x20uLL);
};

// Line 2374: range 000000000DF53A4C-000000000DF53A99
void __cdecl data::ConfigGCGConditionGlobalCurRoundHasCharacterDie::~ConfigGCGConditionGlobalCurRoundHasCharacterDie(
        data::ConfigGCGConditionGlobalCurRoundHasCharacterDie *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalCurRoundHasCharacterDie + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition((data::ConfigGCGCondition *const)this);
};

// Line 2379: range 000000000D747048-000000000D747058
const char *__cdecl data::ConfigGCGConditionGlobalCurRoundHasCharacterDie::getTypeName(
        const data::ConfigGCGConditionGlobalCurRoundHasCharacterDie *const this)
{
  return "ConfigGCGConditionGlobalCurRoundHasCharacterDie";
};

// Line 2380: range 000000000D74705A-000000000D7471F6
int32_t __cdecl data::ConfigGCGConditionGlobalCurRoundHasCharacterDie::getHashNum(
        const data::ConfigGCGConditionGlobalCurRoundHasCharacterDie *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionGlobalCurRoundHasCharacterDie::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionGlobalCurRoundHasCharacterDie",
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

// Line 2396: range 000000000DE9078C-000000000DE907CD
void __cdecl data::ConfigGCGConditionGlobalCurRoundHasCharacterDieFactory::ConfigGCGConditionGlobalCurRoundHasCharacterDieFactory(
        data::ConfigGCGConditionGlobalCurRoundHasCharacterDieFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalCurRoundHasCharacterDieFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionGlobalCurRoundHasCharacterDieFactory = v2;
};

// Line 2404: range 000000000DE90AD6-000000000DE90C28
void __cdecl data::ConfigGCGConditionGlobalAreaTagCardNum::ConfigGCGConditionGlobalAreaTagCardNum(
        data::ConfigGCGConditionGlobalAreaTagCardNum *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  data::ConfigGCGCondition::ConfigGCGCondition((data::ConfigGCGCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalAreaTagCardNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->camp_type, v3);
  }
  this->camp_type = CAMP_BOTH;
  if ( *(_BYTE *)(((unsigned __int64)&this->area_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->area_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->area_type, v3);
  }
  this->area_type = EFFECT_AREA_HAND;
  v4 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->tag_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->tag_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->tag_type, v4);
  }
  this->tag_type = GCG_TAG_NONE;
  if ( *(char *)(((unsigned __int64)&this->is_calc_die_card >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_calc_die_card, v4, &this->is_calc_die_card);
  this->is_calc_die_card = 0;
};

// Line 2404: range 000000000DE91004-000000000DE91251
void __cdecl data::ConfigGCGConditionGlobalAreaTagCardNum::ConfigGCGConditionGlobalAreaTagCardNum(
        data::ConfigGCGConditionGlobalAreaTagCardNum *const this,
        const data::ConfigGCGConditionGlobalAreaTagCardNum *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GCGEffectCampType camp_type; // ecx
  char v5; // dl
  data::GCGEffectAreaType area_type; // ecx
  char v7; // al
  __int64 v8; // rsi
  data::GCGTagType tag_type; // ecx
  char v10; // dl
  bool is_calc_die_card; // cl
  char v12; // al

  data::ConfigGCGCondition::ConfigGCGCondition(
    (data::ConfigGCGCondition *const)this,
    (const data::ConfigGCGCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalAreaTagCardNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->camp_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->camp_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->camp_type);
  }
  camp_type = a2->camp_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->camp_type, v3);
  }
  this->camp_type = camp_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->area_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->area_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->area_type);
  }
  area_type = a2->area_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->area_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->area_type, v3);
  }
  this->area_type = area_type;
  v8 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->tag_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->tag_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->tag_type);
  }
  tag_type = a2->tag_type;
  v10 = *(_BYTE *)(((unsigned __int64)&this->tag_type >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v10 != 0;
  if ( v10 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v10 )
    __asan_report_store4(&this->tag_type, v8);
  this->tag_type = tag_type;
  if ( *(char *)(((unsigned __int64)&a2->is_calc_die_card >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_calc_die_card, v8, &a2->is_calc_die_card);
  is_calc_die_card = a2->is_calc_die_card;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_calc_die_card >> 3) + 0x7FFF8000);
  if ( v12 < 0 )
  {
    LOBYTE(v8) = v12 != 0;
    __asan_report_store1(&this->is_calc_die_card, v8, &this->is_calc_die_card);
  }
  this->is_calc_die_card = is_calc_die_card;
};

// Line 2414: range 000000000DF539D2-000000000DF53A1F
void __cdecl data::ConfigGCGConditionGlobalAreaTagCardNum::~ConfigGCGConditionGlobalAreaTagCardNum(
        data::ConfigGCGConditionGlobalAreaTagCardNum *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalAreaTagCardNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition((data::ConfigGCGCondition *const)this);
};

// Line 2414: range 000000000DF53A20-000000000DF53A4A
void __cdecl data::ConfigGCGConditionGlobalAreaTagCardNum::~ConfigGCGConditionGlobalAreaTagCardNum(
        data::ConfigGCGConditionGlobalAreaTagCardNum *const this)
{
  data::ConfigGCGConditionGlobalAreaTagCardNum::~ConfigGCGConditionGlobalAreaTagCardNum(this);
  operator delete(this, 0x30uLL);
};

// Line 2419: range 000000000D7471F8-000000000D747208
const char *__cdecl data::ConfigGCGConditionGlobalAreaTagCardNum::getTypeName(
        const data::ConfigGCGConditionGlobalAreaTagCardNum *const this)
{
  return "ConfigGCGConditionGlobalAreaTagCardNum";
};

// Line 2420: range 000000000D74720A-000000000D7473A6
int32_t __cdecl data::ConfigGCGConditionGlobalAreaTagCardNum::getHashNum(
        const data::ConfigGCGConditionGlobalAreaTagCardNum *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionGlobalAreaTagCardNum::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionGlobalAreaTagCardNum",
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

// Line 2436: range 000000000DE9149A-000000000DE914DB
void __cdecl data::ConfigGCGConditionGlobalAreaTagCardNumFactory::ConfigGCGConditionGlobalAreaTagCardNumFactory(
        data::ConfigGCGConditionGlobalAreaTagCardNumFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalAreaTagCardNumFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionGlobalAreaTagCardNumFactory = v2;
};

// Line 2444: range 000000000DE917E4-000000000DE91831
void __cdecl data::ConfigGCGConditionGlobalFetchCurRoundNum::ConfigGCGConditionGlobalFetchCurRoundNum(
        data::ConfigGCGConditionGlobalFetchCurRoundNum *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchCurRoundNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 2444: range 000000000DE91C46-000000000DE91C9E
void __cdecl data::ConfigGCGConditionGlobalFetchCurRoundNum::ConfigGCGConditionGlobalFetchCurRoundNum(
        data::ConfigGCGConditionGlobalFetchCurRoundNum *const this,
        const data::ConfigGCGConditionGlobalFetchCurRoundNum *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchCurRoundNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 2450: range 000000000DF539A6-000000000DF539D0
void __cdecl data::ConfigGCGConditionGlobalFetchCurRoundNum::~ConfigGCGConditionGlobalFetchCurRoundNum(
        data::ConfigGCGConditionGlobalFetchCurRoundNum *const this)
{
  data::ConfigGCGConditionGlobalFetchCurRoundNum::~ConfigGCGConditionGlobalFetchCurRoundNum(this);
  operator delete(this, 0x20uLL);
};

// Line 2450: range 000000000DF53958-000000000DF539A5
void __cdecl data::ConfigGCGConditionGlobalFetchCurRoundNum::~ConfigGCGConditionGlobalFetchCurRoundNum(
        data::ConfigGCGConditionGlobalFetchCurRoundNum *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchCurRoundNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition(this);
};

// Line 2455: range 000000000D7473A8-000000000D7473B8
const char *__cdecl data::ConfigGCGConditionGlobalFetchCurRoundNum::getTypeName(
        const data::ConfigGCGConditionGlobalFetchCurRoundNum *const this)
{
  return "ConfigGCGConditionGlobalFetchCurRoundNum";
};

// Line 2456: range 000000000D7473BA-000000000D747556
int32_t __cdecl data::ConfigGCGConditionGlobalFetchCurRoundNum::getHashNum(
        const data::ConfigGCGConditionGlobalFetchCurRoundNum *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionGlobalFetchCurRoundNum::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionGlobalFetchCurRoundNum",
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

// Line 2472: range 000000000DE91EE8-000000000DE91F29
void __cdecl data::ConfigGCGConditionGlobalFetchCurRoundNumFactory::ConfigGCGConditionGlobalFetchCurRoundNumFactory(
        data::ConfigGCGConditionGlobalFetchCurRoundNumFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchCurRoundNumFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionGlobalFetchCurRoundNumFactory = v2;
};

// Line 2480: range 000000000DE92232-000000000DE922C5
void __cdecl data::ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNum::ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNum(
        data::ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNum *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition((data::ConfigGCGCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->camp_type, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->camp_type = CAMP_BOTH;
};

// Line 2480: range 000000000DE9275A-000000000DE92837
void __cdecl data::ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNum::ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNum(
        data::ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNum *const this,
        const data::ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNum *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GCGEffectCampType camp_type; // ecx
  char v5; // dl

  data::ConfigGCGCondition::ConfigGCGCondition(
    (data::ConfigGCGCondition *const)this,
    (const data::ConfigGCGCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->camp_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->camp_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->camp_type);
  }
  camp_type = a2->camp_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->camp_type, v3);
  }
  this->camp_type = camp_type;
};

// Line 2487: range 000000000DF5392C-000000000DF53956
void __cdecl data::ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNum::~ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNum(
        data::ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNum *const this)
{
  data::ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNum::~ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNum(this);
  operator delete(this, 0x20uLL);
};

// Line 2487: range 000000000DF538DE-000000000DF5392B
void __cdecl data::ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNum::~ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNum(
        data::ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNum *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition((data::ConfigGCGCondition *const)this);
};

// Line 2492: range 000000000D747558-000000000D747568
const char *__cdecl data::ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNum::getTypeName(
        const data::ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNum *const this)
{
  return "ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNum";
};

// Line 2493: range 000000000D74756A-000000000D747706
int32_t __cdecl data::ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNum::getHashNum(
        const data::ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNum *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNum::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNum",
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

// Line 2509: range 000000000DE92A80-000000000DE92AC1
void __cdecl data::ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNumFactory::ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNumFactory(
        data::ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNumFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNumFactory
                     + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNumFactory = v2;
};

// Line 2517: range 000000000DE92DCA-000000000DE92E5D
void __cdecl data::ConfigGCGConditionGlobalCheckIsCurRoundOnStage::ConfigGCGConditionGlobalCheckIsCurRoundOnStage(
        data::ConfigGCGConditionGlobalCheckIsCurRoundOnStage *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition((data::ConfigGCGCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalCheckIsCurRoundOnStage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->camp_type, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->camp_type = CAMP_BOTH;
};

// Line 2517: range 000000000DE932F2-000000000DE933CF
void __cdecl data::ConfigGCGConditionGlobalCheckIsCurRoundOnStage::ConfigGCGConditionGlobalCheckIsCurRoundOnStage(
        data::ConfigGCGConditionGlobalCheckIsCurRoundOnStage *const this,
        const data::ConfigGCGConditionGlobalCheckIsCurRoundOnStage *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GCGEffectCampType camp_type; // ecx
  char v5; // dl

  data::ConfigGCGCondition::ConfigGCGCondition(
    (data::ConfigGCGCondition *const)this,
    (const data::ConfigGCGCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalCheckIsCurRoundOnStage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->camp_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->camp_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->camp_type);
  }
  camp_type = a2->camp_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->camp_type, v3);
  }
  this->camp_type = camp_type;
};

// Line 2524: range 000000000DF538B2-000000000DF538DC
void __cdecl data::ConfigGCGConditionGlobalCheckIsCurRoundOnStage::~ConfigGCGConditionGlobalCheckIsCurRoundOnStage(
        data::ConfigGCGConditionGlobalCheckIsCurRoundOnStage *const this)
{
  data::ConfigGCGConditionGlobalCheckIsCurRoundOnStage::~ConfigGCGConditionGlobalCheckIsCurRoundOnStage(this);
  operator delete(this, 0x20uLL);
};

// Line 2524: range 000000000DF53864-000000000DF538B1
void __cdecl data::ConfigGCGConditionGlobalCheckIsCurRoundOnStage::~ConfigGCGConditionGlobalCheckIsCurRoundOnStage(
        data::ConfigGCGConditionGlobalCheckIsCurRoundOnStage *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalCheckIsCurRoundOnStage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition((data::ConfigGCGCondition *const)this);
};

// Line 2529: range 000000000D747708-000000000D747718
const char *__cdecl data::ConfigGCGConditionGlobalCheckIsCurRoundOnStage::getTypeName(
        const data::ConfigGCGConditionGlobalCheckIsCurRoundOnStage *const this)
{
  return "ConfigGCGConditionGlobalCheckIsCurRoundOnStage";
};

// Line 2530: range 000000000D74771A-000000000D7478B6
int32_t __cdecl data::ConfigGCGConditionGlobalCheckIsCurRoundOnStage::getHashNum(
        const data::ConfigGCGConditionGlobalCheckIsCurRoundOnStage *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionGlobalCheckIsCurRoundOnStage::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionGlobalCheckIsCurRoundOnStage",
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

// Line 2546: range 000000000DE93618-000000000DE93659
void __cdecl data::ConfigGCGConditionGlobalCheckIsCurRoundOnStageFactory::ConfigGCGConditionGlobalCheckIsCurRoundOnStageFactory(
        data::ConfigGCGConditionGlobalCheckIsCurRoundOnStageFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalCheckIsCurRoundOnStageFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionGlobalCheckIsCurRoundOnStageFactory = v2;
};

// Line 2554: range 000000000DE93962-000000000DE939AF
void __cdecl data::ConfigGCGConditionFetchCurSkillOriginCostNum::ConfigGCGConditionFetchCurSkillOriginCostNum(
        data::ConfigGCGConditionFetchCurSkillOriginCostNum *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionFetchCurSkillOriginCostNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 2554: range 000000000DE93DC4-000000000DE93E1C
void __cdecl data::ConfigGCGConditionFetchCurSkillOriginCostNum::ConfigGCGConditionFetchCurSkillOriginCostNum(
        data::ConfigGCGConditionFetchCurSkillOriginCostNum *const this,
        const data::ConfigGCGConditionFetchCurSkillOriginCostNum *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionFetchCurSkillOriginCostNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 2560: range 000000000DF537EA-000000000DF53837
void __cdecl data::ConfigGCGConditionFetchCurSkillOriginCostNum::~ConfigGCGConditionFetchCurSkillOriginCostNum(
        data::ConfigGCGConditionFetchCurSkillOriginCostNum *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionFetchCurSkillOriginCostNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition(this);
};

// Line 2560: range 000000000DF53838-000000000DF53862
void __cdecl data::ConfigGCGConditionFetchCurSkillOriginCostNum::~ConfigGCGConditionFetchCurSkillOriginCostNum(
        data::ConfigGCGConditionFetchCurSkillOriginCostNum *const this)
{
  data::ConfigGCGConditionFetchCurSkillOriginCostNum::~ConfigGCGConditionFetchCurSkillOriginCostNum(this);
  operator delete(this, 0x20uLL);
};

// Line 2565: range 000000000D7478B8-000000000D7478C8
const char *__cdecl data::ConfigGCGConditionFetchCurSkillOriginCostNum::getTypeName(
        const data::ConfigGCGConditionFetchCurSkillOriginCostNum *const this)
{
  return "ConfigGCGConditionFetchCurSkillOriginCostNum";
};

// Line 2566: range 000000000D7478CA-000000000D747A66
int32_t __cdecl data::ConfigGCGConditionFetchCurSkillOriginCostNum::getHashNum(
        const data::ConfigGCGConditionFetchCurSkillOriginCostNum *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionFetchCurSkillOriginCostNum::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionFetchCurSkillOriginCostNum",
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

// Line 2582: range 000000000DE94066-000000000DE940A7
void __cdecl data::ConfigGCGConditionFetchCurSkillOriginCostNumFactory::ConfigGCGConditionFetchCurSkillOriginCostNumFactory(
        data::ConfigGCGConditionFetchCurSkillOriginCostNumFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionFetchCurSkillOriginCostNumFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionFetchCurSkillOriginCostNumFactory = v2;
};

// Line 2590: range 000000000DE943B0-000000000DE943FD
void __cdecl data::ConfigGCGConditionCurCharacterNotChargedNum::ConfigGCGConditionCurCharacterNotChargedNum(
        data::ConfigGCGConditionCurCharacterNotChargedNum *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCurCharacterNotChargedNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 2590: range 000000000DE94812-000000000DE9486A
void __cdecl data::ConfigGCGConditionCurCharacterNotChargedNum::ConfigGCGConditionCurCharacterNotChargedNum(
        data::ConfigGCGConditionCurCharacterNotChargedNum *const this,
        const data::ConfigGCGConditionCurCharacterNotChargedNum *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCurCharacterNotChargedNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 2596: range 000000000DF53770-000000000DF537BD
void __cdecl data::ConfigGCGConditionCurCharacterNotChargedNum::~ConfigGCGConditionCurCharacterNotChargedNum(
        data::ConfigGCGConditionCurCharacterNotChargedNum *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCurCharacterNotChargedNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition(this);
};

// Line 2596: range 000000000DF537BE-000000000DF537E8
void __cdecl data::ConfigGCGConditionCurCharacterNotChargedNum::~ConfigGCGConditionCurCharacterNotChargedNum(
        data::ConfigGCGConditionCurCharacterNotChargedNum *const this)
{
  data::ConfigGCGConditionCurCharacterNotChargedNum::~ConfigGCGConditionCurCharacterNotChargedNum(this);
  operator delete(this, 0x20uLL);
};

// Line 2601: range 000000000D747A68-000000000D747A78
const char *__cdecl data::ConfigGCGConditionCurCharacterNotChargedNum::getTypeName(
        const data::ConfigGCGConditionCurCharacterNotChargedNum *const this)
{
  return "ConfigGCGConditionCurCharacterNotChargedNum";
};

// Line 2602: range 000000000D747A7A-000000000D747C16
int32_t __cdecl data::ConfigGCGConditionCurCharacterNotChargedNum::getHashNum(
        const data::ConfigGCGConditionCurCharacterNotChargedNum *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionCurCharacterNotChargedNum::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionCurCharacterNotChargedNum",
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

// Line 2618: range 000000000DE94AB4-000000000DE94AF5
void __cdecl data::ConfigGCGConditionCurCharacterNotChargedNumFactory::ConfigGCGConditionCurCharacterNotChargedNumFactory(
        data::ConfigGCGConditionCurCharacterNotChargedNumFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCurCharacterNotChargedNumFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionCurCharacterNotChargedNumFactory = v2;
};

// Line 2626: range 000000000DE94DFE-000000000DE94EA4
void __cdecl data::ConfigGCGConditionGlobalFetchCurDieCardObject::ConfigGCGConditionGlobalFetchCurDieCardObject(
        data::ConfigGCGConditionGlobalFetchCurDieCardObject *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchCurDieCardObject + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  if ( *(_WORD *)(((unsigned __int64)&this->condition >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigGCGLogicCondition>();
};

// Line 2626: range 000000000DE953EE-000000000DE95461
void __cdecl data::ConfigGCGConditionGlobalFetchCurDieCardObject::ConfigGCGConditionGlobalFetchCurDieCardObject(
        data::ConfigGCGConditionGlobalFetchCurDieCardObject *const this,
        const data::ConfigGCGConditionGlobalFetchCurDieCardObject *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchCurDieCardObject + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
  std::shared_ptr<data::ConfigGCGLogicCondition>::shared_ptr(&this->condition, &a2->condition);
};

// Line 2633: range 000000000DF53744-000000000DF5376E
void __cdecl data::ConfigGCGConditionGlobalFetchCurDieCardObject::~ConfigGCGConditionGlobalFetchCurDieCardObject(
        data::ConfigGCGConditionGlobalFetchCurDieCardObject *const this)
{
  data::ConfigGCGConditionGlobalFetchCurDieCardObject::~ConfigGCGConditionGlobalFetchCurDieCardObject(this);
  operator delete(this, 0x30uLL);
};

// Line 2633: range 000000000DF536E6-000000000DF53743
void __cdecl data::ConfigGCGConditionGlobalFetchCurDieCardObject::~ConfigGCGConditionGlobalFetchCurDieCardObject(
        data::ConfigGCGConditionGlobalFetchCurDieCardObject *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchCurDieCardObject + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  std::shared_ptr<data::ConfigGCGLogicCondition>::~shared_ptr(&this->condition);
  data::ConfigGCGCondition::~ConfigGCGCondition(this);
};

// Line 2638: range 000000000D747C18-000000000D747C28
const char *__cdecl data::ConfigGCGConditionGlobalFetchCurDieCardObject::getTypeName(
        const data::ConfigGCGConditionGlobalFetchCurDieCardObject *const this)
{
  return "ConfigGCGConditionGlobalFetchCurDieCardObject";
};

// Line 2639: range 000000000D747C2A-000000000D747DC6
int32_t __cdecl data::ConfigGCGConditionGlobalFetchCurDieCardObject::getHashNum(
        const data::ConfigGCGConditionGlobalFetchCurDieCardObject *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionGlobalFetchCurDieCardObject::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionGlobalFetchCurDieCardObject",
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

// Line 2655: range 000000000DE956AA-000000000DE956EB
void __cdecl data::ConfigGCGConditionGlobalFetchCurDieCardObjectFactory::ConfigGCGConditionGlobalFetchCurDieCardObjectFactory(
        data::ConfigGCGConditionGlobalFetchCurDieCardObjectFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchCurDieCardObjectFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionGlobalFetchCurDieCardObjectFactory = v2;
};

// Line 2663: range 000000000DE959F4-000000000DE95A41
void __cdecl data::ConfigGCGConditionGlobalFetchCurDieCardOwnerID::ConfigGCGConditionGlobalFetchCurDieCardOwnerID(
        data::ConfigGCGConditionGlobalFetchCurDieCardOwnerID *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchCurDieCardOwnerID + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 2663: range 000000000DE95E56-000000000DE95EAE
void __cdecl data::ConfigGCGConditionGlobalFetchCurDieCardOwnerID::ConfigGCGConditionGlobalFetchCurDieCardOwnerID(
        data::ConfigGCGConditionGlobalFetchCurDieCardOwnerID *const this,
        const data::ConfigGCGConditionGlobalFetchCurDieCardOwnerID *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchCurDieCardOwnerID + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 2669: range 000000000DF5366C-000000000DF536B9
void __cdecl data::ConfigGCGConditionGlobalFetchCurDieCardOwnerID::~ConfigGCGConditionGlobalFetchCurDieCardOwnerID(
        data::ConfigGCGConditionGlobalFetchCurDieCardOwnerID *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchCurDieCardOwnerID + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition(this);
};

// Line 2669: range 000000000DF536BA-000000000DF536E4
void __cdecl data::ConfigGCGConditionGlobalFetchCurDieCardOwnerID::~ConfigGCGConditionGlobalFetchCurDieCardOwnerID(
        data::ConfigGCGConditionGlobalFetchCurDieCardOwnerID *const this)
{
  data::ConfigGCGConditionGlobalFetchCurDieCardOwnerID::~ConfigGCGConditionGlobalFetchCurDieCardOwnerID(this);
  operator delete(this, 0x20uLL);
};

// Line 2674: range 000000000D747DC8-000000000D747DD8
const char *__cdecl data::ConfigGCGConditionGlobalFetchCurDieCardOwnerID::getTypeName(
        const data::ConfigGCGConditionGlobalFetchCurDieCardOwnerID *const this)
{
  return "ConfigGCGConditionGlobalFetchCurDieCardOwnerID";
};

// Line 2675: range 000000000D747DDA-000000000D747F76
int32_t __cdecl data::ConfigGCGConditionGlobalFetchCurDieCardOwnerID::getHashNum(
        const data::ConfigGCGConditionGlobalFetchCurDieCardOwnerID *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionGlobalFetchCurDieCardOwnerID::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionGlobalFetchCurDieCardOwnerID",
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

// Line 2691: range 000000000DE960F8-000000000DE96139
void __cdecl data::ConfigGCGConditionGlobalFetchCurDieCardOwnerIDFactory::ConfigGCGConditionGlobalFetchCurDieCardOwnerIDFactory(
        data::ConfigGCGConditionGlobalFetchCurDieCardOwnerIDFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchCurDieCardOwnerIDFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionGlobalFetchCurDieCardOwnerIDFactory = v2;
};

// Line 2699: range 000000000DE96442-000000000DE964E8
void __cdecl data::ConfigGCGConditionGlobalFetchCurDieCardOwnerObject::ConfigGCGConditionGlobalFetchCurDieCardOwnerObject(
        data::ConfigGCGConditionGlobalFetchCurDieCardOwnerObject *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchCurDieCardOwnerObject + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  if ( *(_WORD *)(((unsigned __int64)&this->condition >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigGCGLogicCondition>();
};

// Line 2699: range 000000000DE96A32-000000000DE96AA5
void __cdecl data::ConfigGCGConditionGlobalFetchCurDieCardOwnerObject::ConfigGCGConditionGlobalFetchCurDieCardOwnerObject(
        data::ConfigGCGConditionGlobalFetchCurDieCardOwnerObject *const this,
        const data::ConfigGCGConditionGlobalFetchCurDieCardOwnerObject *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchCurDieCardOwnerObject + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
  std::shared_ptr<data::ConfigGCGLogicCondition>::shared_ptr(&this->condition, &a2->condition);
};

// Line 2706: range 000000000DF53640-000000000DF5366A
void __cdecl data::ConfigGCGConditionGlobalFetchCurDieCardOwnerObject::~ConfigGCGConditionGlobalFetchCurDieCardOwnerObject(
        data::ConfigGCGConditionGlobalFetchCurDieCardOwnerObject *const this)
{
  data::ConfigGCGConditionGlobalFetchCurDieCardOwnerObject::~ConfigGCGConditionGlobalFetchCurDieCardOwnerObject(this);
  operator delete(this, 0x30uLL);
};

// Line 2706: range 000000000DF535E2-000000000DF5363F
void __cdecl data::ConfigGCGConditionGlobalFetchCurDieCardOwnerObject::~ConfigGCGConditionGlobalFetchCurDieCardOwnerObject(
        data::ConfigGCGConditionGlobalFetchCurDieCardOwnerObject *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchCurDieCardOwnerObject + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  std::shared_ptr<data::ConfigGCGLogicCondition>::~shared_ptr(&this->condition);
  data::ConfigGCGCondition::~ConfigGCGCondition(this);
};

// Line 2711: range 000000000D747F78-000000000D747F88
const char *__cdecl data::ConfigGCGConditionGlobalFetchCurDieCardOwnerObject::getTypeName(
        const data::ConfigGCGConditionGlobalFetchCurDieCardOwnerObject *const this)
{
  return "ConfigGCGConditionGlobalFetchCurDieCardOwnerObject";
};

// Line 2712: range 000000000D747F8A-000000000D748126
int32_t __cdecl data::ConfigGCGConditionGlobalFetchCurDieCardOwnerObject::getHashNum(
        const data::ConfigGCGConditionGlobalFetchCurDieCardOwnerObject *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionGlobalFetchCurDieCardOwnerObject::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionGlobalFetchCurDieCardOwnerObject",
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

// Line 2728: range 000000000DE96CEE-000000000DE96D2F
void __cdecl data::ConfigGCGConditionGlobalFetchCurDieCardOwnerObjectFactory::ConfigGCGConditionGlobalFetchCurDieCardOwnerObjectFactory(
        data::ConfigGCGConditionGlobalFetchCurDieCardOwnerObjectFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchCurDieCardOwnerObjectFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionGlobalFetchCurDieCardOwnerObjectFactory = v2;
};

// Line 2736: range 000000000DE97038-000000000DE97124
void __cdecl data::ConfigGCGConditionGlobalCheckParitity::ConfigGCGConditionGlobalCheckParitity(
        data::ConfigGCGConditionGlobalCheckParitity *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition((data::ConfigGCGCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalCheckParitity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->partity_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->partity_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->partity_type, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->partity_type = GCG_PARITY_ODD;
  if ( *(_WORD *)(((unsigned __int64)&this->condition >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigGCGLogicCondition>();
};

// Line 2736: range 000000000DE97596-000000000DE9768E
void __cdecl data::ConfigGCGConditionGlobalCheckParitity::ConfigGCGConditionGlobalCheckParitity(
        data::ConfigGCGConditionGlobalCheckParitity *const this,
        const data::ConfigGCGConditionGlobalCheckParitity *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GCGPartityType partity_type; // ecx
  char v5; // dl

  data::ConfigGCGCondition::ConfigGCGCondition(
    (data::ConfigGCGCondition *const)this,
    (const data::ConfigGCGCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalCheckParitity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->partity_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->partity_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->partity_type);
  }
  partity_type = a2->partity_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->partity_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->partity_type, v3);
  }
  this->partity_type = partity_type;
  std::shared_ptr<data::ConfigGCGLogicCondition>::shared_ptr(&this->condition, &a2->condition);
};

// Line 2744: range 000000000DF53558-000000000DF535B5
void __cdecl data::ConfigGCGConditionGlobalCheckParitity::~ConfigGCGConditionGlobalCheckParitity(
        data::ConfigGCGConditionGlobalCheckParitity *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalCheckParitity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  std::shared_ptr<data::ConfigGCGLogicCondition>::~shared_ptr(&this->condition);
  data::ConfigGCGCondition::~ConfigGCGCondition((data::ConfigGCGCondition *const)this);
};

// Line 2744: range 000000000DF535B6-000000000DF535E0
void __cdecl data::ConfigGCGConditionGlobalCheckParitity::~ConfigGCGConditionGlobalCheckParitity(
        data::ConfigGCGConditionGlobalCheckParitity *const this)
{
  data::ConfigGCGConditionGlobalCheckParitity::~ConfigGCGConditionGlobalCheckParitity(this);
  operator delete(this, 0x30uLL);
};

// Line 2749: range 000000000D748128-000000000D748138
const char *__cdecl data::ConfigGCGConditionGlobalCheckParitity::getTypeName(
        const data::ConfigGCGConditionGlobalCheckParitity *const this)
{
  return "ConfigGCGConditionGlobalCheckParitity";
};

// Line 2750: range 000000000D74813A-000000000D7482D6
int32_t __cdecl data::ConfigGCGConditionGlobalCheckParitity::getHashNum(
        const data::ConfigGCGConditionGlobalCheckParitity *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionGlobalCheckParitity::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionGlobalCheckParitity",
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

// Line 2766: range 000000000DE978D8-000000000DE97919
void __cdecl data::ConfigGCGConditionGlobalCheckParitityFactory::ConfigGCGConditionGlobalCheckParitityFactory(
        data::ConfigGCGConditionGlobalCheckParitityFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalCheckParitityFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionGlobalCheckParitityFactory = v2;
};

// Line 2774: range 000000000DE97C22-000000000DE97CB5
void __cdecl data::ConfigGCGConditionGlobalFetchAliveBackStageCharacterNum::ConfigGCGConditionGlobalFetchAliveBackStageCharacterNum(
        data::ConfigGCGConditionGlobalFetchAliveBackStageCharacterNum *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition((data::ConfigGCGCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchAliveBackStageCharacterNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->camp_type, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->camp_type = CAMP_BOTH;
};

// Line 2774: range 000000000DE9814A-000000000DE98227
void __cdecl data::ConfigGCGConditionGlobalFetchAliveBackStageCharacterNum::ConfigGCGConditionGlobalFetchAliveBackStageCharacterNum(
        data::ConfigGCGConditionGlobalFetchAliveBackStageCharacterNum *const this,
        const data::ConfigGCGConditionGlobalFetchAliveBackStageCharacterNum *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GCGEffectCampType camp_type; // ecx
  char v5; // dl

  data::ConfigGCGCondition::ConfigGCGCondition(
    (data::ConfigGCGCondition *const)this,
    (const data::ConfigGCGCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchAliveBackStageCharacterNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->camp_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->camp_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->camp_type);
  }
  camp_type = a2->camp_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->camp_type, v3);
  }
  this->camp_type = camp_type;
};

// Line 2781: range 000000000DF534DE-000000000DF5352B
void __cdecl data::ConfigGCGConditionGlobalFetchAliveBackStageCharacterNum::~ConfigGCGConditionGlobalFetchAliveBackStageCharacterNum(
        data::ConfigGCGConditionGlobalFetchAliveBackStageCharacterNum *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchAliveBackStageCharacterNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition((data::ConfigGCGCondition *const)this);
};

// Line 2781: range 000000000DF5352C-000000000DF53556
void __cdecl data::ConfigGCGConditionGlobalFetchAliveBackStageCharacterNum::~ConfigGCGConditionGlobalFetchAliveBackStageCharacterNum(
        data::ConfigGCGConditionGlobalFetchAliveBackStageCharacterNum *const this)
{
  data::ConfigGCGConditionGlobalFetchAliveBackStageCharacterNum::~ConfigGCGConditionGlobalFetchAliveBackStageCharacterNum(this);
  operator delete(this, 0x20uLL);
};

// Line 2786: range 000000000D7482D8-000000000D7482E8
const char *__cdecl data::ConfigGCGConditionGlobalFetchAliveBackStageCharacterNum::getTypeName(
        const data::ConfigGCGConditionGlobalFetchAliveBackStageCharacterNum *const this)
{
  return "ConfigGCGConditionGlobalFetchAliveBackStageCharacterNum";
};

// Line 2787: range 000000000D7482EA-000000000D748486
int32_t __cdecl data::ConfigGCGConditionGlobalFetchAliveBackStageCharacterNum::getHashNum(
        const data::ConfigGCGConditionGlobalFetchAliveBackStageCharacterNum *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionGlobalFetchAliveBackStageCharacterNum::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionGlobalFetchAliveBackStageCharacterNum",
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

// Line 2803: range 000000000DE98470-000000000DE984B1
void __cdecl data::ConfigGCGConditionGlobalFetchAliveBackStageCharacterNumFactory::ConfigGCGConditionGlobalFetchAliveBackStageCharacterNumFactory(
        data::ConfigGCGConditionGlobalFetchAliveBackStageCharacterNumFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchAliveBackStageCharacterNumFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionGlobalFetchAliveBackStageCharacterNumFactory = v2;
};

// Line 2811: range 000000000DE987BA-000000000DE9884D
void __cdecl data::ConfigGCGConditionCheckCurCardType::ConfigGCGConditionCheckCurCardType(
        data::ConfigGCGConditionCheckCurCardType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition((data::ConfigGCGCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurCardType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_type, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->card_type = GCG_CARD_INVALID;
};

// Line 2811: range 000000000DE98CE2-000000000DE98DBF
void __cdecl data::ConfigGCGConditionCheckCurCardType::ConfigGCGConditionCheckCurCardType(
        data::ConfigGCGConditionCheckCurCardType *const this,
        const data::ConfigGCGConditionCheckCurCardType *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GCGCardType card_type; // ecx
  char v5; // dl

  data::ConfigGCGCondition::ConfigGCGCondition(
    (data::ConfigGCGCondition *const)this,
    (const data::ConfigGCGCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurCardType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->card_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->card_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->card_type);
  }
  card_type = a2->card_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->card_type, v3);
  }
  this->card_type = card_type;
};

// Line 2818: range 000000000DF534B2-000000000DF534DC
void __cdecl data::ConfigGCGConditionCheckCurCardType::~ConfigGCGConditionCheckCurCardType(
        data::ConfigGCGConditionCheckCurCardType *const this)
{
  data::ConfigGCGConditionCheckCurCardType::~ConfigGCGConditionCheckCurCardType(this);
  operator delete(this, 0x20uLL);
};

// Line 2818: range 000000000DF53464-000000000DF534B1
void __cdecl data::ConfigGCGConditionCheckCurCardType::~ConfigGCGConditionCheckCurCardType(
        data::ConfigGCGConditionCheckCurCardType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurCardType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition((data::ConfigGCGCondition *const)this);
};

// Line 2823: range 000000000D748488-000000000D748498
const char *__cdecl data::ConfigGCGConditionCheckCurCardType::getTypeName(
        const data::ConfigGCGConditionCheckCurCardType *const this)
{
  return "ConfigGCGConditionCheckCurCardType";
};

// Line 2824: range 000000000D74849A-000000000D748636
int32_t __cdecl data::ConfigGCGConditionCheckCurCardType::getHashNum(
        const data::ConfigGCGConditionCheckCurCardType *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionCheckCurCardType::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionCheckCurCardType",
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

// Line 2840: range 000000000DE99008-000000000DE99049
void __cdecl data::ConfigGCGConditionCheckCurCardTypeFactory::ConfigGCGConditionCheckCurCardTypeFactory(
        data::ConfigGCGConditionCheckCurCardTypeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurCardTypeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionCheckCurCardTypeFactory = v2;
};

// Line 2848: range 000000000DE99352-000000000DE993E5
void __cdecl data::ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNum::ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNum(
        data::ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNum *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition((data::ConfigGCGCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->camp_type, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->camp_type = CAMP_BOTH;
};

// Line 2848: range 000000000DE9987A-000000000DE99957
void __cdecl data::ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNum::ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNum(
        data::ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNum *const this,
        const data::ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNum *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GCGEffectCampType camp_type; // ecx
  char v5; // dl

  data::ConfigGCGCondition::ConfigGCGCondition(
    (data::ConfigGCGCondition *const)this,
    (const data::ConfigGCGCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->camp_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->camp_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->camp_type);
  }
  camp_type = a2->camp_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->camp_type, v3);
  }
  this->camp_type = camp_type;
};

// Line 2855: range 000000000DF533EA-000000000DF53437
void __cdecl data::ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNum::~ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNum(
        data::ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNum *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition((data::ConfigGCGCondition *const)this);
};

// Line 2855: range 000000000DF53438-000000000DF53462
void __cdecl data::ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNum::~ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNum(
        data::ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNum *const this)
{
  data::ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNum::~ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNum(this);
  operator delete(this, 0x20uLL);
};

// Line 2860: range 000000000D748638-000000000D748648
const char *__cdecl data::ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNum::getTypeName(
        const data::ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNum *const this)
{
  return "ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNum";
};

// Line 2861: range 000000000D74864A-000000000D7487E6
int32_t __cdecl data::ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNum::getHashNum(
        const data::ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNum *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNum::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNum",
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

// Line 2877: range 000000000DE99BA0-000000000DE99BE1
void __cdecl data::ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNumFactory::ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNumFactory(
        data::ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNumFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNumFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNumFactory = v2;
};

// Line 2885: range 000000000DE99EEA-000000000DE99F7D
void __cdecl data::ConfigGCGConditionCheckCurCharacterModifiedAssignTagCard::ConfigGCGConditionCheckCurCharacterModifiedAssignTagCard(
        data::ConfigGCGConditionCheckCurCharacterModifiedAssignTagCard *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition((data::ConfigGCGCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurCharacterModifiedAssignTagCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->tag_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->tag_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->tag_type, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->tag_type = GCG_TAG_NONE;
};

// Line 2885: range 000000000DE9A412-000000000DE9A4EF
void __cdecl data::ConfigGCGConditionCheckCurCharacterModifiedAssignTagCard::ConfigGCGConditionCheckCurCharacterModifiedAssignTagCard(
        data::ConfigGCGConditionCheckCurCharacterModifiedAssignTagCard *const this,
        const data::ConfigGCGConditionCheckCurCharacterModifiedAssignTagCard *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GCGTagType tag_type; // ecx
  char v5; // dl

  data::ConfigGCGCondition::ConfigGCGCondition(
    (data::ConfigGCGCondition *const)this,
    (const data::ConfigGCGCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurCharacterModifiedAssignTagCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->tag_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->tag_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->tag_type);
  }
  tag_type = a2->tag_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->tag_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->tag_type, v3);
  }
  this->tag_type = tag_type;
};

// Line 2892: range 000000000DF533BE-000000000DF533E8
void __cdecl data::ConfigGCGConditionCheckCurCharacterModifiedAssignTagCard::~ConfigGCGConditionCheckCurCharacterModifiedAssignTagCard(
        data::ConfigGCGConditionCheckCurCharacterModifiedAssignTagCard *const this)
{
  data::ConfigGCGConditionCheckCurCharacterModifiedAssignTagCard::~ConfigGCGConditionCheckCurCharacterModifiedAssignTagCard(this);
  operator delete(this, 0x20uLL);
};

// Line 2892: range 000000000DF53370-000000000DF533BD
void __cdecl data::ConfigGCGConditionCheckCurCharacterModifiedAssignTagCard::~ConfigGCGConditionCheckCurCharacterModifiedAssignTagCard(
        data::ConfigGCGConditionCheckCurCharacterModifiedAssignTagCard *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurCharacterModifiedAssignTagCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition((data::ConfigGCGCondition *const)this);
};

// Line 2897: range 000000000D7487E8-000000000D7487F8
const char *__cdecl data::ConfigGCGConditionCheckCurCharacterModifiedAssignTagCard::getTypeName(
        const data::ConfigGCGConditionCheckCurCharacterModifiedAssignTagCard *const this)
{
  return "ConfigGCGConditionCheckCurCharacterModifiedAssignTagCard";
};

// Line 2898: range 000000000D7487FA-000000000D748996
int32_t __cdecl data::ConfigGCGConditionCheckCurCharacterModifiedAssignTagCard::getHashNum(
        const data::ConfigGCGConditionCheckCurCharacterModifiedAssignTagCard *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionCheckCurCharacterModifiedAssignTagCard::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionCheckCurCharacterModifiedAssignTagCard",
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

// Line 2914: range 000000000DE9A738-000000000DE9A779
void __cdecl data::ConfigGCGConditionCheckCurCharacterModifiedAssignTagCardFactory::ConfigGCGConditionCheckCurCharacterModifiedAssignTagCardFactory(
        data::ConfigGCGConditionCheckCurCharacterModifiedAssignTagCardFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurCharacterModifiedAssignTagCardFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionCheckCurCharacterModifiedAssignTagCardFactory = v2;
};

// Line 2922: range 000000000DE9AA82-000000000DE9AB15
void __cdecl data::ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementType::ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementType(
        data::ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGCondition::ConfigGCGCondition((data::ConfigGCGCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->element_type, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->element_type = DAMAGE_ELEMENT_ANY;
};

// Line 2922: range 000000000DE9AFAA-000000000DE9B087
void __cdecl data::ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementType::ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementType(
        data::ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementType *const this,
        const data::ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementType *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GCGEffectDamageElementType element_type; // ecx
  char v5; // dl

  data::ConfigGCGCondition::ConfigGCGCondition(
    (data::ConfigGCGCondition *const)this,
    (const data::ConfigGCGCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGCondition = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->element_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->element_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->element_type);
  }
  element_type = a2->element_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->element_type, v3);
  }
  this->element_type = element_type;
};

// Line 2929: range 000000000DF53344-000000000DF5336E
void __cdecl data::ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementType::~ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementType(
        data::ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementType *const this)
{
  data::ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementType::~ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementType(this);
  operator delete(this, 0x20uLL);
};

// Line 2929: range 000000000DF532F6-000000000DF53343
void __cdecl data::ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementType::~ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementType(
        data::ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGCondition = v2;
  data::ConfigGCGCondition::~ConfigGCGCondition((data::ConfigGCGCondition *const)this);
};

// Line 2934: range 000000000D748998-000000000D7489A8
const char *__cdecl data::ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementType::getTypeName(
        const data::ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementType *const this)
{
  return "ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementType";
};

// Line 2935: range 000000000D7489AA-000000000D748B46
int32_t __cdecl data::ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementType::getHashNum(
        const data::ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementType *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementType::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementType",
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

// Line 2951: range 000000000DE9B2D0-000000000DE9B311
void __cdecl data::ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementTypeFactory::ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementTypeFactory(
        data::ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementTypeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementTypeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementTypeFactory = v2;
};

// Line 2959: range 000000000DE9B61A-000000000DE9B703
void __cdecl data::ConfigGCGEffect::ConfigGCGEffect(data::ConfigGCGEffect *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::ConfigGCGEffect>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigGCGEffect>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  if ( *(_WORD *)(((unsigned __int64)&this->condition >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigGCGLogicCondition>();
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 2959: range 000000000DE9BD00-000000000DE9BDF1
void __cdecl data::ConfigGCGEffect::ConfigGCGEffect(data::ConfigGCGEffect *const this, const data::ConfigGCGEffect *a2)
{
  std::enable_shared_from_this<data::ConfigGCGEffect> *v2; // rsi
  int (**v3)(...); // rdx
  data::ConfigGCGLogicConditionPtr *p_condition; // rsi
  bool is_json_loaded; // cl
  char v6; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigGCGEffect>;
  std::enable_shared_from_this<data::ConfigGCGEffect>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigGCGEffect>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigGCGEffect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigGCGEffect = v3;
  p_condition = &a2->condition;
  std::shared_ptr<data::ConfigGCGLogicCondition>::shared_ptr(&this->condition, &a2->condition);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_condition, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_condition) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_condition, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 2967: range 000000000DE9C082-000000000DE9C0E3
void __cdecl data::ConfigGCGEffect::~ConfigGCGEffect(data::ConfigGCGEffect *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  std::shared_ptr<data::ConfigGCGLogicCondition>::~shared_ptr(&this->condition);
  std::enable_shared_from_this<data::ConfigGCGEffect>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigGCGEffect>);
};

// Line 2967: range 000000000DE9C0E4-000000000DE9C10E
void __cdecl data::ConfigGCGEffect::~ConfigGCGEffect(data::ConfigGCGEffect *const this)
{
  data::ConfigGCGEffect::~ConfigGCGEffect(this);
  operator delete(this, 0x30uLL);
};

// Line 2972: range 000000000D748B48-000000000D748B58
const char *__cdecl data::ConfigGCGEffect::getTypeName(const data::ConfigGCGEffect *const this)
{
  return "ConfigGCGEffect";
};

// Line 2973: range 000000000D748B5A-000000000D748CF6
int32_t __cdecl data::ConfigGCGEffect::getHashNum(const data::ConfigGCGEffect *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGEffect::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGEffect",
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

// Line 2980: range 000000000D748CF8-000000000D748D22
GCGEffectBasePtr __cdecl data::ConfigGCGEffect::createEffect(data::ConfigGCGEffect *const this, GCGEffectParam *param)
{
  GCGEffectBasePtr result; // rax

  std::shared_ptr<GCGEffectBase>::shared_ptr((std::shared_ptr<GCGEffectBase> *const)this, 0LL);
  result._M_ptr = (std::__shared_ptr<GCGEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 3000: range 000000000DE9C110-000000000DE9C1E1
void __cdecl data::GCGExecEffectOnCharacterBase::GCGExecEffectOnCharacterBase(
        data::GCGExecEffectOnCharacterBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this);
  v2 = (int (**)(...))(&`vtable for'data::GCGExecEffectOnCharacterBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_camp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_camp >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->target_camp, v3);
  }
  this->target_camp = CAMP_BOTH;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_character >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_character >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_character, v3);
  }
  this->target_character = CHARACTER_ONSTAGE;
};

// Line 3000: range 000000000DE9C66C-000000000DE9C7BE
void __cdecl data::GCGExecEffectOnCharacterBase::GCGExecEffectOnCharacterBase(
        data::GCGExecEffectOnCharacterBase *const this,
        const data::GCGExecEffectOnCharacterBase *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GCGEffectCampType target_camp; // ecx
  char v5; // dl
  data::GCGChooseTargetCharaterType target_character; // ecx
  char v7; // al

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this, (const data::ConfigGCGEffect *)a2);
  v2 = (int (**)(...))(&`vtable for'data::GCGExecEffectOnCharacterBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)a2 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->target_camp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->target_camp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->target_camp);
  }
  target_camp = a2->target_camp;
  v5 = *(_BYTE *)(((unsigned __int64)&this->target_camp >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->target_camp, v3);
  }
  this->target_camp = target_camp;
  if ( *(_BYTE *)(((unsigned __int64)&a2->target_character >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->target_character >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->target_character);
  }
  target_character = a2->target_character;
  v7 = *(_BYTE *)(((unsigned __int64)&this->target_character >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->target_character, v3);
  }
  this->target_character = target_character;
};

// Line 3008: range 000000000DE9CA56-000000000DE9CA80
void __cdecl data::GCGExecEffectOnCharacterBase::~GCGExecEffectOnCharacterBase(
        data::GCGExecEffectOnCharacterBase *const this)
{
  data::GCGExecEffectOnCharacterBase::~GCGExecEffectOnCharacterBase(this);
  operator delete(this, 0x38uLL);
};

// Line 3008: range 000000000DE9CA08-000000000DE9CA55
void __cdecl data::GCGExecEffectOnCharacterBase::~GCGExecEffectOnCharacterBase(
        data::GCGExecEffectOnCharacterBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGExecEffectOnCharacterBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::ConfigGCGEffect::~ConfigGCGEffect((data::ConfigGCGEffect *const)this);
};

// Line 3013: range 000000000D748D24-000000000D748D34
const char *__cdecl data::GCGExecEffectOnCharacterBase::getTypeName(
        const data::GCGExecEffectOnCharacterBase *const this)
{
  return "GCGExecEffectOnCharacterBase";
};

// Line 3014: range 000000000D748D36-000000000D748ED2
int32_t __cdecl data::GCGExecEffectOnCharacterBase::getHashNum(const data::GCGExecEffectOnCharacterBase *const this)
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
  *(_QWORD *)(v1 + 16) = data::GCGExecEffectOnCharacterBase::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "GCGExecEffectOnCharacterBase",
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

// Line 3033: range 000000000DE9CA82-000000000DE9CB7A
void __cdecl data::ConfigGCGExecEffectDamage::ConfigGCGExecEffectDamage(data::ConfigGCGExecEffectDamage *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::GCGExecEffectOnCharacterBase::GCGExecEffectOnCharacterBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectDamage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::GCGDeclare::GCGDeclare(&this->declared_damage);
  data::GCGDeclare::GCGDeclare(&this->declared_element);
  if ( *(char *)(((unsigned __int64)&this->is_use_set_damage_element >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_use_set_damage_element, v1, &this->is_use_set_damage_element);
  this->is_use_set_damage_element = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_need_min_hp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_need_min_hp >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->target_need_min_hp, (((_BYTE)this - 116) & 7u) + 3);
  }
  this->target_need_min_hp = 0;
};

// Line 3033: range 000000000DE9CFC4-000000000DE9D199
void __cdecl data::ConfigGCGExecEffectDamage::ConfigGCGExecEffectDamage(
        data::ConfigGCGExecEffectDamage *const this,
        const data::ConfigGCGExecEffectDamage *a2)
{
  int (**v2)(...); // rdx
  data::GCGDeclare *p_declared_element; // rsi
  bool is_use_set_damage_element; // cl
  char v5; // al
  __int64 v6; // rsi
  uint32_t target_need_min_hp; // ecx
  char v8; // dl

  data::GCGExecEffectOnCharacterBase::GCGExecEffectOnCharacterBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectDamage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  data::GCGDeclare::GCGDeclare(&this->declared_damage, &a2->declared_damage);
  p_declared_element = &a2->declared_element;
  data::GCGDeclare::GCGDeclare(&this->declared_element, &a2->declared_element);
  if ( *(char *)(((unsigned __int64)&a2->is_use_set_damage_element >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_use_set_damage_element, p_declared_element, &a2->is_use_set_damage_element);
  is_use_set_damage_element = a2->is_use_set_damage_element;
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_use_set_damage_element >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_declared_element) = v5 != 0;
    __asan_report_store1(&this->is_use_set_damage_element, p_declared_element, &this->is_use_set_damage_element);
  }
  this->is_use_set_damage_element = is_use_set_damage_element;
  v6 = (((_BYTE)a2 - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->target_need_min_hp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->target_need_min_hp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->target_need_min_hp);
  }
  target_need_min_hp = a2->target_need_min_hp;
  v8 = *(_BYTE *)(((unsigned __int64)&this->target_need_min_hp >> 3) + 0x7FFF8000);
  if ( v8 != 0 && (char)((((_BYTE)this - 116) & 7) + 3) >= v8 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store4(&this->target_need_min_hp, v6);
  }
  this->target_need_min_hp = target_need_min_hp;
};

// Line 3043: range 000000000DF532CA-000000000DF532F4
void __cdecl data::ConfigGCGExecEffectDamage::~ConfigGCGExecEffectDamage(data::ConfigGCGExecEffectDamage *const this)
{
  data::ConfigGCGExecEffectDamage::~ConfigGCGExecEffectDamage(this);
  operator delete(this, 0x90uLL);
};

// Line 3043: range 000000000DF5325C-000000000DF532C9
void __cdecl data::ConfigGCGExecEffectDamage::~ConfigGCGExecEffectDamage(data::ConfigGCGExecEffectDamage *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectDamage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::GCGDeclare::~GCGDeclare(&this->declared_element);
  data::GCGDeclare::~GCGDeclare(&this->declared_damage);
  data::GCGExecEffectOnCharacterBase::~GCGExecEffectOnCharacterBase(this);
};

// Line 3048: range 000000000D748ED4-000000000D748EE4
const char *__cdecl data::ConfigGCGExecEffectDamage::getTypeName(const data::ConfigGCGExecEffectDamage *const this)
{
  return "ConfigGCGExecEffectDamage";
};

// Line 3049: range 000000000D748EE6-000000000D749082
int32_t __cdecl data::ConfigGCGExecEffectDamage::getHashNum(const data::ConfigGCGExecEffectDamage *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGExecEffectDamage::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGExecEffectDamage",
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

// Line 3065: range 000000000DE9D482-000000000DE9D4C3
void __cdecl data::ConfigGCGExecEffectDamageFactory::ConfigGCGExecEffectDamageFactory(
        data::ConfigGCGExecEffectDamageFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectDamageFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGExecEffectDamageFactory = v2;
};

// Line 3073: range 000000000DE9D7CC-000000000DE9D867
void __cdecl data::ConfigGCGExecEffectDamageRevise::ConfigGCGExecEffectDamageRevise(
        data::ConfigGCGExecEffectDamageRevise *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGEffect::ConfigGCGEffect(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectDamageRevise + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::GCGDeclare::GCGDeclare(&this->declared_output_key);
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_element_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->effect_element_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->effect_element_type, v1);
  }
  this->effect_element_type = DAMAGE_ELEMENT_ANY;
};

// Line 3073: range 000000000DE9DCB0-000000000DE9DDBB
void __cdecl data::ConfigGCGExecEffectDamageRevise::ConfigGCGExecEffectDamageRevise(
        data::ConfigGCGExecEffectDamageRevise *const this,
        const data::ConfigGCGExecEffectDamageRevise *a2)
{
  int (**v2)(...); // rdx
  data::GCGDeclare *p_declared_output_key; // rsi
  data::GCGEffectDamageElementType effect_element_type; // ecx
  char v5; // al

  data::ConfigGCGEffect::ConfigGCGEffect(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectDamageRevise + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  p_declared_output_key = &a2->declared_output_key;
  data::GCGDeclare::GCGDeclare(&this->declared_output_key, &a2->declared_output_key);
  if ( *(_BYTE *)(((unsigned __int64)&a2->effect_element_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->effect_element_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->effect_element_type);
  }
  effect_element_type = a2->effect_element_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->effect_element_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_declared_output_key) = v5 != 0;
    __asan_report_store4(&this->effect_element_type, p_declared_output_key);
  }
  this->effect_element_type = effect_element_type;
};

// Line 3081: range 000000000DF53230-000000000DF5325A
void __cdecl data::ConfigGCGExecEffectDamageRevise::~ConfigGCGExecEffectDamageRevise(
        data::ConfigGCGExecEffectDamageRevise *const this)
{
  data::ConfigGCGExecEffectDamageRevise::~ConfigGCGExecEffectDamageRevise(this);
  operator delete(this, 0x60uLL);
};

// Line 3081: range 000000000DF531D2-000000000DF5322F
void __cdecl data::ConfigGCGExecEffectDamageRevise::~ConfigGCGExecEffectDamageRevise(
        data::ConfigGCGExecEffectDamageRevise *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectDamageRevise + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::GCGDeclare::~GCGDeclare(&this->declared_output_key);
  data::ConfigGCGEffect::~ConfigGCGEffect(this);
};

// Line 3086: range 000000000D749084-000000000D749094
const char *__cdecl data::ConfigGCGExecEffectDamageRevise::getTypeName(
        const data::ConfigGCGExecEffectDamageRevise *const this)
{
  return "ConfigGCGExecEffectDamageRevise";
};

// Line 3087: range 000000000D749096-000000000D749232
int32_t __cdecl data::ConfigGCGExecEffectDamageRevise::getHashNum(
        const data::ConfigGCGExecEffectDamageRevise *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGExecEffectDamageRevise::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGExecEffectDamageRevise",
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

// Line 3103: range 000000000DE9E0A4-000000000DE9E0E5
void __cdecl data::ConfigGCGExecEffectDamageReviseFactory::ConfigGCGExecEffectDamageReviseFactory(
        data::ConfigGCGExecEffectDamageReviseFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectDamageReviseFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGExecEffectDamageReviseFactory = v2;
};

// Line 3111: range 000000000DE9E3EE-000000000DE9E44B
void __cdecl data::ConfigGCGExecEffectDamageMultiple::ConfigGCGExecEffectDamageMultiple(
        data::ConfigGCGExecEffectDamageMultiple *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGEffect::ConfigGCGEffect(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectDamageMultiple + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::GCGDeclare::GCGDeclare(&this->declared_output_key);
};

// Line 3111: range 000000000DE9E89A-000000000DE9E930
void __cdecl data::ConfigGCGExecEffectDamageMultiple::ConfigGCGExecEffectDamageMultiple(
        data::ConfigGCGExecEffectDamageMultiple *const this,
        const data::ConfigGCGExecEffectDamageMultiple *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGEffect::ConfigGCGEffect(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectDamageMultiple + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  data::GCGDeclare::GCGDeclare(&this->declared_output_key, &a2->declared_output_key);
};

// Line 3118: range 000000000DF53148-000000000DF531A5
void __cdecl data::ConfigGCGExecEffectDamageMultiple::~ConfigGCGExecEffectDamageMultiple(
        data::ConfigGCGExecEffectDamageMultiple *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectDamageMultiple + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::GCGDeclare::~GCGDeclare(&this->declared_output_key);
  data::ConfigGCGEffect::~ConfigGCGEffect(this);
};

// Line 3118: range 000000000DF531A6-000000000DF531D0
void __cdecl data::ConfigGCGExecEffectDamageMultiple::~ConfigGCGExecEffectDamageMultiple(
        data::ConfigGCGExecEffectDamageMultiple *const this)
{
  data::ConfigGCGExecEffectDamageMultiple::~ConfigGCGExecEffectDamageMultiple(this);
  operator delete(this, 0x58uLL);
};

// Line 3123: range 000000000D749234-000000000D749244
const char *__cdecl data::ConfigGCGExecEffectDamageMultiple::getTypeName(
        const data::ConfigGCGExecEffectDamageMultiple *const this)
{
  return "ConfigGCGExecEffectDamageMultiple";
};

// Line 3124: range 000000000D749246-000000000D7493E2
int32_t __cdecl data::ConfigGCGExecEffectDamageMultiple::getHashNum(
        const data::ConfigGCGExecEffectDamageMultiple *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGExecEffectDamageMultiple::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGExecEffectDamageMultiple",
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

// Line 3140: range 000000000DE9EC1A-000000000DE9EC5B
void __cdecl data::ConfigGCGExecEffectDamageMultipleFactory::ConfigGCGExecEffectDamageMultipleFactory(
        data::ConfigGCGExecEffectDamageMultipleFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectDamageMultipleFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGExecEffectDamageMultipleFactory = v2;
};

// Line 3148: range 000000000DE9EF64-000000000DE9F0C9
void __cdecl data::ConfigGCGExecEffectCharge::ConfigGCGExecEffectCharge(data::ConfigGCGExecEffectCharge *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  data::GCGExecEffectOnCharacterBase::GCGExecEffectOnCharacterBase((data::GCGExecEffectOnCharacterBase *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectCharge + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->operator_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->operator_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->operator_type, v3);
  }
  this->operator_type = OPEATER_ADD;
  data::GCGDeclare::GCGDeclare(&this->declared_output_key);
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_element_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->limit_element_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->limit_element_type, v3);
  }
  this->limit_element_type = GCG_ELEMENT_PHYSIC;
  v4 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_effective_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_effective_count >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_effective_count, v4);
  }
  this->max_effective_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_card_tag >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->limit_card_tag >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->limit_card_tag, v4);
  }
  this->limit_card_tag = GCG_TAG_NONE;
};

// Line 3148: range 000000000DE9F508-000000000DE9F792
void __cdecl data::ConfigGCGExecEffectCharge::ConfigGCGExecEffectCharge(
        data::ConfigGCGExecEffectCharge *const this,
        const data::ConfigGCGExecEffectCharge *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GCGValueOperatorType operator_type; // ecx
  char v5; // dl
  data::GCGDeclare *p_declared_output_key; // rsi
  data::GCGEffectElementType limit_element_type; // ecx
  char v8; // al
  __int64 v9; // rsi
  uint32_t max_effective_count; // ecx
  char v11; // dl
  data::GCGTagType limit_card_tag; // ecx
  char v13; // al

  data::GCGExecEffectOnCharacterBase::GCGExecEffectOnCharacterBase(
    (data::GCGExecEffectOnCharacterBase *const)this,
    (const data::GCGExecEffectOnCharacterBase *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectCharge + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)a2 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->operator_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->operator_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->operator_type);
  }
  operator_type = a2->operator_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->operator_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->operator_type, v3);
  }
  this->operator_type = operator_type;
  p_declared_output_key = &a2->declared_output_key;
  data::GCGDeclare::GCGDeclare(&this->declared_output_key, &a2->declared_output_key);
  if ( *(_BYTE *)(((unsigned __int64)&a2->limit_element_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->limit_element_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->limit_element_type);
  }
  limit_element_type = a2->limit_element_type;
  v8 = *(_BYTE *)(((unsigned __int64)&this->limit_element_type >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(p_declared_output_key) = v8 != 0;
    __asan_report_store4(&this->limit_element_type, p_declared_output_key);
  }
  this->limit_element_type = limit_element_type;
  v9 = (((_BYTE)a2 + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_effective_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->max_effective_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->max_effective_count);
  }
  max_effective_count = a2->max_effective_count;
  v11 = *(_BYTE *)(((unsigned __int64)&this->max_effective_count >> 3) + 0x7FFF8000);
  if ( v11 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v11 )
  {
    LOBYTE(v9) = v11 != 0;
    __asan_report_store4(&this->max_effective_count, v9);
  }
  this->max_effective_count = max_effective_count;
  if ( *(_BYTE *)(((unsigned __int64)&a2->limit_card_tag >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->limit_card_tag >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->limit_card_tag);
  }
  limit_card_tag = a2->limit_card_tag;
  v13 = *(_BYTE *)(((unsigned __int64)&this->limit_card_tag >> 3) + 0x7FFF8000);
  if ( v13 != 0 && v13 <= 3 )
  {
    LOBYTE(v9) = v13 != 0;
    __asan_report_store4(&this->limit_card_tag, v9);
  }
  this->limit_card_tag = limit_card_tag;
};

// Line 3159: range 000000000DF5311C-000000000DF53146
void __cdecl data::ConfigGCGExecEffectCharge::~ConfigGCGExecEffectCharge(data::ConfigGCGExecEffectCharge *const this)
{
  data::ConfigGCGExecEffectCharge::~ConfigGCGExecEffectCharge(this);
  operator delete(this, 0x70uLL);
};

// Line 3159: range 000000000DF530BE-000000000DF5311B
void __cdecl data::ConfigGCGExecEffectCharge::~ConfigGCGExecEffectCharge(data::ConfigGCGExecEffectCharge *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectCharge + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::GCGDeclare::~GCGDeclare(&this->declared_output_key);
  data::GCGExecEffectOnCharacterBase::~GCGExecEffectOnCharacterBase((data::GCGExecEffectOnCharacterBase *const)this);
};

// Line 3164: range 000000000D7493E4-000000000D7493F4
const char *__cdecl data::ConfigGCGExecEffectCharge::getTypeName(const data::ConfigGCGExecEffectCharge *const this)
{
  return "ConfigGCGExecEffectCharge";
};

// Line 3165: range 000000000D7493F6-000000000D749592
int32_t __cdecl data::ConfigGCGExecEffectCharge::getHashNum(const data::ConfigGCGExecEffectCharge *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGExecEffectCharge::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGExecEffectCharge",
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

// Line 3181: range 000000000DE9FA7C-000000000DE9FABD
void __cdecl data::ConfigGCGExecEffectChargeFactory::ConfigGCGExecEffectChargeFactory(
        data::ConfigGCGExecEffectChargeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectChargeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGExecEffectChargeFactory = v2;
};

// Line 3189: range 000000000DE9FDC6-000000000DE9FE23
void __cdecl data::ConfigGCGExecEffectHeal::ConfigGCGExecEffectHeal(data::ConfigGCGExecEffectHeal *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::GCGExecEffectOnCharacterBase::GCGExecEffectOnCharacterBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectHeal + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::GCGDeclare::GCGDeclare(&this->declared_heal_amount_key);
};

// Line 3189: range 000000000DEA026C-000000000DEA0302
void __cdecl data::ConfigGCGExecEffectHeal::ConfigGCGExecEffectHeal(
        data::ConfigGCGExecEffectHeal *const this,
        const data::ConfigGCGExecEffectHeal *a2)
{
  int (**v2)(...); // rdx

  data::GCGExecEffectOnCharacterBase::GCGExecEffectOnCharacterBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectHeal + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  data::GCGDeclare::GCGDeclare(&this->declared_heal_amount_key, &a2->declared_heal_amount_key);
};

// Line 3196: range 000000000DF53092-000000000DF530BC
void __cdecl data::ConfigGCGExecEffectHeal::~ConfigGCGExecEffectHeal(data::ConfigGCGExecEffectHeal *const this)
{
  data::ConfigGCGExecEffectHeal::~ConfigGCGExecEffectHeal(this);
  operator delete(this, 0x60uLL);
};

// Line 3196: range 000000000DF53034-000000000DF53091
void __cdecl data::ConfigGCGExecEffectHeal::~ConfigGCGExecEffectHeal(data::ConfigGCGExecEffectHeal *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectHeal + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::GCGDeclare::~GCGDeclare(&this->declared_heal_amount_key);
  data::GCGExecEffectOnCharacterBase::~GCGExecEffectOnCharacterBase(this);
};

// Line 3201: range 000000000D749594-000000000D7495A4
const char *__cdecl data::ConfigGCGExecEffectHeal::getTypeName(const data::ConfigGCGExecEffectHeal *const this)
{
  return "ConfigGCGExecEffectHeal";
};

// Line 3202: range 000000000D7495A6-000000000D749742
int32_t __cdecl data::ConfigGCGExecEffectHeal::getHashNum(const data::ConfigGCGExecEffectHeal *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGExecEffectHeal::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGExecEffectHeal",
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

// Line 3218: range 000000000DEA05EC-000000000DEA062D
void __cdecl data::ConfigGCGExecEffectHealFactory::ConfigGCGExecEffectHealFactory(
        data::ConfigGCGExecEffectHealFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectHealFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGExecEffectHealFactory = v2;
};

// Line 3226: range 000000000DEA0936-000000000DEA0A55
void __cdecl data::ConfigGCGExecEffectTransferEnergy::ConfigGCGExecEffectTransferEnergy(
        data::ConfigGCGExecEffectTransferEnergy *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::GCGExecEffectOnCharacterBase::GCGExecEffectOnCharacterBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectTransferEnergy + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::GCGDeclare::GCGDeclare(&this->declared_output_key);
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_element_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->limit_element_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->limit_element_type, v1);
  }
  this->limit_element_type = GCG_ELEMENT_PHYSIC;
  v3 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->source_camp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->source_camp >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->source_camp, v3);
  }
  this->source_camp = CAMP_BOTH;
  if ( *(_BYTE *)(((unsigned __int64)&this->source_character >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->source_character >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->source_character, v3);
  }
  this->source_character = CHARACTER_ONSTAGE;
};

// Line 3226: range 000000000DEA0E94-000000000DEA1099
void __cdecl data::ConfigGCGExecEffectTransferEnergy::ConfigGCGExecEffectTransferEnergy(
        data::ConfigGCGExecEffectTransferEnergy *const this,
        const data::ConfigGCGExecEffectTransferEnergy *a2)
{
  int (**v2)(...); // rdx
  data::GCGDeclare *p_declared_output_key; // rsi
  data::GCGEffectElementType limit_element_type; // ecx
  char v5; // al
  __int64 v6; // rsi
  data::GCGEffectCampType source_camp; // ecx
  char v8; // dl
  data::GCGChooseTargetCharaterType source_character; // ecx
  char v10; // al

  data::GCGExecEffectOnCharacterBase::GCGExecEffectOnCharacterBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectTransferEnergy + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  p_declared_output_key = &a2->declared_output_key;
  data::GCGDeclare::GCGDeclare(&this->declared_output_key, &a2->declared_output_key);
  if ( *(_BYTE *)(((unsigned __int64)&a2->limit_element_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->limit_element_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->limit_element_type);
  }
  limit_element_type = a2->limit_element_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->limit_element_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_declared_output_key) = v5 != 0;
    __asan_report_store4(&this->limit_element_type, p_declared_output_key);
  }
  this->limit_element_type = limit_element_type;
  v6 = (((_BYTE)a2 + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->source_camp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->source_camp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->source_camp);
  }
  source_camp = a2->source_camp;
  v8 = *(_BYTE *)(((unsigned __int64)&this->source_camp >> 3) + 0x7FFF8000);
  if ( v8 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v8 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store4(&this->source_camp, v6);
  }
  this->source_camp = source_camp;
  if ( *(_BYTE *)(((unsigned __int64)&a2->source_character >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->source_character >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->source_character);
  }
  source_character = a2->source_character;
  v10 = *(_BYTE *)(((unsigned __int64)&this->source_character >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(v6) = v10 != 0;
    __asan_report_store4(&this->source_character, v6);
  }
  this->source_character = source_character;
};

// Line 3236: range 000000000DF53008-000000000DF53032
void __cdecl data::ConfigGCGExecEffectTransferEnergy::~ConfigGCGExecEffectTransferEnergy(
        data::ConfigGCGExecEffectTransferEnergy *const this)
{
  data::ConfigGCGExecEffectTransferEnergy::~ConfigGCGExecEffectTransferEnergy(this);
  operator delete(this, 0x70uLL);
};

// Line 3236: range 000000000DF52FAA-000000000DF53007
void __cdecl data::ConfigGCGExecEffectTransferEnergy::~ConfigGCGExecEffectTransferEnergy(
        data::ConfigGCGExecEffectTransferEnergy *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectTransferEnergy + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::GCGDeclare::~GCGDeclare(&this->declared_output_key);
  data::GCGExecEffectOnCharacterBase::~GCGExecEffectOnCharacterBase(this);
};

// Line 3241: range 000000000D749744-000000000D749754
const char *__cdecl data::ConfigGCGExecEffectTransferEnergy::getTypeName(
        const data::ConfigGCGExecEffectTransferEnergy *const this)
{
  return "ConfigGCGExecEffectTransferEnergy";
};

// Line 3242: range 000000000D749756-000000000D7498F2
int32_t __cdecl data::ConfigGCGExecEffectTransferEnergy::getHashNum(
        const data::ConfigGCGExecEffectTransferEnergy *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGExecEffectTransferEnergy::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGExecEffectTransferEnergy",
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

// Line 3258: range 000000000DEA1382-000000000DEA13C3
void __cdecl data::ConfigGCGExecEffectTransferEnergyFactory::ConfigGCGExecEffectTransferEnergyFactory(
        data::ConfigGCGExecEffectTransferEnergyFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectTransferEnergyFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGExecEffectTransferEnergyFactory = v2;
};

// Line 3266: range 000000000DEA16CC-000000000DEA1729
void __cdecl data::ConfigGCGExecEffectAttachElement::ConfigGCGExecEffectAttachElement(
        data::ConfigGCGExecEffectAttachElement *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::GCGExecEffectOnCharacterBase::GCGExecEffectOnCharacterBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectAttachElement + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::GCGDeclare::GCGDeclare(&this->declared_element);
};

// Line 3266: range 000000000DEA1B72-000000000DEA1C08
void __cdecl data::ConfigGCGExecEffectAttachElement::ConfigGCGExecEffectAttachElement(
        data::ConfigGCGExecEffectAttachElement *const this,
        const data::ConfigGCGExecEffectAttachElement *a2)
{
  int (**v2)(...); // rdx

  data::GCGExecEffectOnCharacterBase::GCGExecEffectOnCharacterBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectAttachElement + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  data::GCGDeclare::GCGDeclare(&this->declared_element, &a2->declared_element);
};

// Line 3273: range 000000000DF52F7E-000000000DF52FA8
void __cdecl data::ConfigGCGExecEffectAttachElement::~ConfigGCGExecEffectAttachElement(
        data::ConfigGCGExecEffectAttachElement *const this)
{
  data::ConfigGCGExecEffectAttachElement::~ConfigGCGExecEffectAttachElement(this);
  operator delete(this, 0x60uLL);
};

// Line 3273: range 000000000DF52F20-000000000DF52F7D
void __cdecl data::ConfigGCGExecEffectAttachElement::~ConfigGCGExecEffectAttachElement(
        data::ConfigGCGExecEffectAttachElement *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectAttachElement + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::GCGDeclare::~GCGDeclare(&this->declared_element);
  data::GCGExecEffectOnCharacterBase::~GCGExecEffectOnCharacterBase(this);
};

// Line 3278: range 000000000D7498F4-000000000D749904
const char *__cdecl data::ConfigGCGExecEffectAttachElement::getTypeName(
        const data::ConfigGCGExecEffectAttachElement *const this)
{
  return "ConfigGCGExecEffectAttachElement";
};

// Line 3279: range 000000000D749906-000000000D749AA2
int32_t __cdecl data::ConfigGCGExecEffectAttachElement::getHashNum(
        const data::ConfigGCGExecEffectAttachElement *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGExecEffectAttachElement::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGExecEffectAttachElement",
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

// Line 3295: range 000000000DEA1EF2-000000000DEA1F33
void __cdecl data::ConfigGCGExecEffectAttachElementFactory::ConfigGCGExecEffectAttachElementFactory(
        data::ConfigGCGExecEffectAttachElementFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectAttachElementFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGExecEffectAttachElementFactory = v2;
};

// Line 3303: range 000000000DEA223C-000000000DEA2299
void __cdecl data::ConfigGCGExecEffectReviveCharacter::ConfigGCGExecEffectReviveCharacter(
        data::ConfigGCGExecEffectReviveCharacter *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::GCGExecEffectOnCharacterBase::GCGExecEffectOnCharacterBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectReviveCharacter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::GCGDeclare::GCGDeclare(&this->declared_heal_amount_key);
};

// Line 3303: range 000000000DEA26E2-000000000DEA2778
void __cdecl data::ConfigGCGExecEffectReviveCharacter::ConfigGCGExecEffectReviveCharacter(
        data::ConfigGCGExecEffectReviveCharacter *const this,
        const data::ConfigGCGExecEffectReviveCharacter *a2)
{
  int (**v2)(...); // rdx

  data::GCGExecEffectOnCharacterBase::GCGExecEffectOnCharacterBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectReviveCharacter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  data::GCGDeclare::GCGDeclare(&this->declared_heal_amount_key, &a2->declared_heal_amount_key);
};

// Line 3310: range 000000000DF52E96-000000000DF52EF3
void __cdecl data::ConfigGCGExecEffectReviveCharacter::~ConfigGCGExecEffectReviveCharacter(
        data::ConfigGCGExecEffectReviveCharacter *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectReviveCharacter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::GCGDeclare::~GCGDeclare(&this->declared_heal_amount_key);
  data::GCGExecEffectOnCharacterBase::~GCGExecEffectOnCharacterBase(this);
};

// Line 3310: range 000000000DF52EF4-000000000DF52F1E
void __cdecl data::ConfigGCGExecEffectReviveCharacter::~ConfigGCGExecEffectReviveCharacter(
        data::ConfigGCGExecEffectReviveCharacter *const this)
{
  data::ConfigGCGExecEffectReviveCharacter::~ConfigGCGExecEffectReviveCharacter(this);
  operator delete(this, 0x60uLL);
};

// Line 3315: range 000000000D749AA4-000000000D749AB4
const char *__cdecl data::ConfigGCGExecEffectReviveCharacter::getTypeName(
        const data::ConfigGCGExecEffectReviveCharacter *const this)
{
  return "ConfigGCGExecEffectReviveCharacter";
};

// Line 3316: range 000000000D749AB6-000000000D749C52
int32_t __cdecl data::ConfigGCGExecEffectReviveCharacter::getHashNum(
        const data::ConfigGCGExecEffectReviveCharacter *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGExecEffectReviveCharacter::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGExecEffectReviveCharacter",
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

// Line 3332: range 000000000DEA2A62-000000000DEA2AA3
void __cdecl data::ConfigGCGExecEffectReviveCharacterFactory::ConfigGCGExecEffectReviveCharacterFactory(
        data::ConfigGCGExecEffectReviveCharacterFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectReviveCharacterFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGExecEffectReviveCharacterFactory = v2;
};

// Line 3340: range 000000000DEA2DAC-000000000DEA2E3F
void __cdecl data::GCGExecEffectOnCampBase::GCGExecEffectOnCampBase(data::GCGExecEffectOnCampBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this);
  v2 = (int (**)(...))(&`vtable for'data::GCGExecEffectOnCampBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_camp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_camp >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->target_camp, (((_BYTE)this + 44) & 7u) + 3);
  }
  this->target_camp = CAMP_BOTH;
};

// Line 3340: range 000000000DEA32B0-000000000DEA338D
void __cdecl data::GCGExecEffectOnCampBase::GCGExecEffectOnCampBase(
        data::GCGExecEffectOnCampBase *const this,
        const data::GCGExecEffectOnCampBase *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GCGEffectCampType target_camp; // ecx
  char v5; // dl

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this, (const data::ConfigGCGEffect *)a2);
  v2 = (int (**)(...))(&`vtable for'data::GCGExecEffectOnCampBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)a2 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->target_camp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->target_camp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->target_camp);
  }
  target_camp = a2->target_camp;
  v5 = *(_BYTE *)(((unsigned __int64)&this->target_camp >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->target_camp, v3);
  }
  this->target_camp = target_camp;
};

// Line 3347: range 000000000DEA35D6-000000000DEA3623
void __cdecl data::GCGExecEffectOnCampBase::~GCGExecEffectOnCampBase(data::GCGExecEffectOnCampBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGExecEffectOnCampBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::ConfigGCGEffect::~ConfigGCGEffect((data::ConfigGCGEffect *const)this);
};

// Line 3347: range 000000000DEA3624-000000000DEA364E
void __cdecl data::GCGExecEffectOnCampBase::~GCGExecEffectOnCampBase(data::GCGExecEffectOnCampBase *const this)
{
  data::GCGExecEffectOnCampBase::~GCGExecEffectOnCampBase(this);
  operator delete(this, 0x30uLL);
};

// Line 3352: range 000000000D749C54-000000000D749C64
const char *__cdecl data::GCGExecEffectOnCampBase::getTypeName(const data::GCGExecEffectOnCampBase *const this)
{
  return "GCGExecEffectOnCampBase";
};

// Line 3353: range 000000000D749C66-000000000D749E02
int32_t __cdecl data::GCGExecEffectOnCampBase::getHashNum(const data::GCGExecEffectOnCampBase *const this)
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
  *(_QWORD *)(v1 + 16) = data::GCGExecEffectOnCampBase::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "GCGExecEffectOnCampBase",
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

// Line 3372: range 000000000DEA3650-000000000DEA36EB
void __cdecl data::ConfigGCGExecEffectGenDice::ConfigGCGExecEffectGenDice(data::ConfigGCGExecEffectGenDice *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::GCGExecEffectOnCampBase::GCGExecEffectOnCampBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectGenDice + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_dice_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->effect_dice_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->effect_dice_type, v1);
  }
  this->effect_dice_type = EFFECT_DICE_ANY;
  data::GCGDeclare::GCGDeclare(&this->declared_output_key);
};

// Line 3372: range 000000000DEA3B34-000000000DEA3C3F
void __cdecl data::ConfigGCGExecEffectGenDice::ConfigGCGExecEffectGenDice(
        data::ConfigGCGExecEffectGenDice *const this,
        const data::ConfigGCGExecEffectGenDice *a2)
{
  int (**v2)(...); // rdx
  data::GCGEffectDiceType effect_dice_type; // ecx
  char v4; // al
  const data::ConfigGCGExecEffectGenDice *v5; // [rsp+0h] [rbp-20h]

  v5 = a2;
  data::GCGExecEffectOnCampBase::GCGExecEffectOnCampBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectGenDice + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->effect_dice_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->effect_dice_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->effect_dice_type);
  }
  effect_dice_type = a2->effect_dice_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->effect_dice_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->effect_dice_type, a2);
  }
  this->effect_dice_type = effect_dice_type;
  data::GCGDeclare::GCGDeclare(&this->declared_output_key, &v5->declared_output_key);
};

// Line 3380: range 000000000DF52E0C-000000000DF52E69
void __cdecl data::ConfigGCGExecEffectGenDice::~ConfigGCGExecEffectGenDice(
        data::ConfigGCGExecEffectGenDice *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectGenDice + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::GCGDeclare::~GCGDeclare(&this->declared_output_key);
  data::GCGExecEffectOnCampBase::~GCGExecEffectOnCampBase(this);
};

// Line 3380: range 000000000DF52E6A-000000000DF52E94
void __cdecl data::ConfigGCGExecEffectGenDice::~ConfigGCGExecEffectGenDice(
        data::ConfigGCGExecEffectGenDice *const this)
{
  data::ConfigGCGExecEffectGenDice::~ConfigGCGExecEffectGenDice(this);
  operator delete(this, 0x60uLL);
};

// Line 3385: range 000000000D749E04-000000000D749E14
const char *__cdecl data::ConfigGCGExecEffectGenDice::getTypeName(const data::ConfigGCGExecEffectGenDice *const this)
{
  return "ConfigGCGExecEffectGenDice";
};

// Line 3386: range 000000000D749E16-000000000D749FB2
int32_t __cdecl data::ConfigGCGExecEffectGenDice::getHashNum(const data::ConfigGCGExecEffectGenDice *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGExecEffectGenDice::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGExecEffectGenDice",
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

// Line 3402: range 000000000DEA3F28-000000000DEA3F69
void __cdecl data::ConfigGCGExecEffectGenDiceFactory::ConfigGCGExecEffectGenDiceFactory(
        data::ConfigGCGExecEffectGenDiceFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectGenDiceFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGExecEffectGenDiceFactory = v2;
};

// Line 3410: range 000000000DEA4272-000000000DEA42FD
void __cdecl data::ConfigGCGExecEffectChangeOnstageCharater::ConfigGCGExecEffectChangeOnstageCharater(
        data::ConfigGCGExecEffectChangeOnstageCharater *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::GCGExecEffectOnCampBase::GCGExecEffectOnCampBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectChangeOnstageCharater + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->select_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->select_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->select_type, v1);
  }
  this->select_type = SELECT_ONSTAGE_BEFORE;
};

// Line 3410: range 000000000DEA4788-000000000DEA4855
void __cdecl data::ConfigGCGExecEffectChangeOnstageCharater::ConfigGCGExecEffectChangeOnstageCharater(
        data::ConfigGCGExecEffectChangeOnstageCharater *const this,
        const data::ConfigGCGExecEffectChangeOnstageCharater *a2)
{
  int (**v2)(...); // rdx
  data::GCGEffectSelectNextOnstageType select_type; // ecx
  char v4; // al

  data::GCGExecEffectOnCampBase::GCGExecEffectOnCampBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectChangeOnstageCharater + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->select_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->select_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->select_type);
  }
  select_type = a2->select_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->select_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->select_type, a2);
  }
  this->select_type = select_type;
};

// Line 3417: range 000000000DF52DE0-000000000DF52E0A
void __cdecl data::ConfigGCGExecEffectChangeOnstageCharater::~ConfigGCGExecEffectChangeOnstageCharater(
        data::ConfigGCGExecEffectChangeOnstageCharater *const this)
{
  data::ConfigGCGExecEffectChangeOnstageCharater::~ConfigGCGExecEffectChangeOnstageCharater(this);
  operator delete(this, 0x38uLL);
};

// Line 3417: range 000000000DF52D92-000000000DF52DDF
void __cdecl data::ConfigGCGExecEffectChangeOnstageCharater::~ConfigGCGExecEffectChangeOnstageCharater(
        data::ConfigGCGExecEffectChangeOnstageCharater *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectChangeOnstageCharater + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::GCGExecEffectOnCampBase::~GCGExecEffectOnCampBase(this);
};

// Line 3422: range 000000000D749FB4-000000000D749FC4
const char *__cdecl data::ConfigGCGExecEffectChangeOnstageCharater::getTypeName(
        const data::ConfigGCGExecEffectChangeOnstageCharater *const this)
{
  return "ConfigGCGExecEffectChangeOnstageCharater";
};

// Line 3423: range 000000000D749FC6-000000000D74A162
int32_t __cdecl data::ConfigGCGExecEffectChangeOnstageCharater::getHashNum(
        const data::ConfigGCGExecEffectChangeOnstageCharater *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGExecEffectChangeOnstageCharater::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGExecEffectChangeOnstageCharater",
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

// Line 3439: range 000000000DEA4A9E-000000000DEA4ADF
void __cdecl data::ConfigGCGExecEffectChangeOnstageCharaterFactory::ConfigGCGExecEffectChangeOnstageCharaterFactory(
        data::ConfigGCGExecEffectChangeOnstageCharaterFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectChangeOnstageCharaterFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGExecEffectChangeOnstageCharaterFactory = v2;
};

// Line 3447: range 000000000DEA4DE8-000000000DEA4E45
void __cdecl data::ConfigGCGExecEffectDraw::ConfigGCGExecEffectDraw(data::ConfigGCGExecEffectDraw *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::GCGExecEffectOnCampBase::GCGExecEffectOnCampBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectDraw + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::GCGDeclare::GCGDeclare(&this->declared_output_key);
};

// Line 3447: range 000000000DEA5294-000000000DEA532A
void __cdecl data::ConfigGCGExecEffectDraw::ConfigGCGExecEffectDraw(
        data::ConfigGCGExecEffectDraw *const this,
        const data::ConfigGCGExecEffectDraw *a2)
{
  int (**v2)(...); // rdx

  data::GCGExecEffectOnCampBase::GCGExecEffectOnCampBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectDraw + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  data::GCGDeclare::GCGDeclare(&this->declared_output_key, &a2->declared_output_key);
};

// Line 3454: range 000000000DF52D66-000000000DF52D90
void __cdecl data::ConfigGCGExecEffectDraw::~ConfigGCGExecEffectDraw(data::ConfigGCGExecEffectDraw *const this)
{
  data::ConfigGCGExecEffectDraw::~ConfigGCGExecEffectDraw(this);
  operator delete(this, 0x58uLL);
};

// Line 3454: range 000000000DF52D08-000000000DF52D65
void __cdecl data::ConfigGCGExecEffectDraw::~ConfigGCGExecEffectDraw(data::ConfigGCGExecEffectDraw *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectDraw + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::GCGDeclare::~GCGDeclare(&this->declared_output_key);
  data::GCGExecEffectOnCampBase::~GCGExecEffectOnCampBase(this);
};

// Line 3459: range 000000000D74A164-000000000D74A174
const char *__cdecl data::ConfigGCGExecEffectDraw::getTypeName(const data::ConfigGCGExecEffectDraw *const this)
{
  return "ConfigGCGExecEffectDraw";
};

// Line 3460: range 000000000D74A176-000000000D74A312
int32_t __cdecl data::ConfigGCGExecEffectDraw::getHashNum(const data::ConfigGCGExecEffectDraw *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGExecEffectDraw::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGExecEffectDraw",
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

// Line 3476: range 000000000DEA5614-000000000DEA5655
void __cdecl data::ConfigGCGExecEffectDrawFactory::ConfigGCGExecEffectDrawFactory(
        data::ConfigGCGExecEffectDrawFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectDrawFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGExecEffectDrawFactory = v2;
};

// Line 3484: range 000000000DEA595E-000000000DEA59F9
void __cdecl data::ConfigGCGExecEffectSearchCard::ConfigGCGExecEffectSearchCard(
        data::ConfigGCGExecEffectSearchCard *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::GCGExecEffectOnCampBase::GCGExecEffectOnCampBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectSearchCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::GCGDeclare::GCGDeclare(&this->declared_output_key);
  if ( *(_BYTE *)(((unsigned __int64)&this->take_effect_tag >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->take_effect_tag >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->take_effect_tag, v1);
  }
  this->take_effect_tag = GCG_TAG_NONE;
};

// Line 3484: range 000000000DEA5E42-000000000DEA5F4D
void __cdecl data::ConfigGCGExecEffectSearchCard::ConfigGCGExecEffectSearchCard(
        data::ConfigGCGExecEffectSearchCard *const this,
        const data::ConfigGCGExecEffectSearchCard *a2)
{
  int (**v2)(...); // rdx
  data::GCGDeclare *p_declared_output_key; // rsi
  data::GCGTagType take_effect_tag; // ecx
  char v5; // al

  data::GCGExecEffectOnCampBase::GCGExecEffectOnCampBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectSearchCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  p_declared_output_key = &a2->declared_output_key;
  data::GCGDeclare::GCGDeclare(&this->declared_output_key, &a2->declared_output_key);
  if ( *(_BYTE *)(((unsigned __int64)&a2->take_effect_tag >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->take_effect_tag >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->take_effect_tag);
  }
  take_effect_tag = a2->take_effect_tag;
  v5 = *(_BYTE *)(((unsigned __int64)&this->take_effect_tag >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_declared_output_key) = v5 != 0;
    __asan_report_store4(&this->take_effect_tag, p_declared_output_key);
  }
  this->take_effect_tag = take_effect_tag;
};

// Line 3492: range 000000000DF52CDC-000000000DF52D06
void __cdecl data::ConfigGCGExecEffectSearchCard::~ConfigGCGExecEffectSearchCard(
        data::ConfigGCGExecEffectSearchCard *const this)
{
  data::ConfigGCGExecEffectSearchCard::~ConfigGCGExecEffectSearchCard(this);
  operator delete(this, 0x60uLL);
};

// Line 3492: range 000000000DF52C7E-000000000DF52CDB
void __cdecl data::ConfigGCGExecEffectSearchCard::~ConfigGCGExecEffectSearchCard(
        data::ConfigGCGExecEffectSearchCard *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectSearchCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::GCGDeclare::~GCGDeclare(&this->declared_output_key);
  data::GCGExecEffectOnCampBase::~GCGExecEffectOnCampBase(this);
};

// Line 3497: range 000000000D74A314-000000000D74A324
const char *__cdecl data::ConfigGCGExecEffectSearchCard::getTypeName(
        const data::ConfigGCGExecEffectSearchCard *const this)
{
  return "ConfigGCGExecEffectSearchCard";
};

// Line 3498: range 000000000D74A326-000000000D74A4C2
int32_t __cdecl data::ConfigGCGExecEffectSearchCard::getHashNum(const data::ConfigGCGExecEffectSearchCard *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGExecEffectSearchCard::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGExecEffectSearchCard",
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

// Line 3514: range 000000000DEA6236-000000000DEA6277
void __cdecl data::ConfigGCGExecEffectSearchCardFactory::ConfigGCGExecEffectSearchCardFactory(
        data::ConfigGCGExecEffectSearchCardFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectSearchCardFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGExecEffectSearchCardFactory = v2;
};

// Line 3522: range 000000000DEA6580-000000000DEA661B
void __cdecl data::ConfigGCGExecEffectRandomGenDice::ConfigGCGExecEffectRandomGenDice(
        data::ConfigGCGExecEffectRandomGenDice *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::GCGExecEffectOnCampBase::GCGExecEffectOnCampBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectRandomGenDice + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->gen_dice_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gen_dice_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gen_dice_type, v1);
  }
  this->gen_dice_type = EFFECT_GEN_DICE_EXCEPT_ANY;
  data::GCGDeclare::GCGDeclare(&this->declared_output_key);
};

// Line 3522: range 000000000DEA6A64-000000000DEA6B6F
void __cdecl data::ConfigGCGExecEffectRandomGenDice::ConfigGCGExecEffectRandomGenDice(
        data::ConfigGCGExecEffectRandomGenDice *const this,
        const data::ConfigGCGExecEffectRandomGenDice *a2)
{
  int (**v2)(...); // rdx
  data::GCGEffectGenDiceType gen_dice_type; // ecx
  char v4; // al
  const data::ConfigGCGExecEffectRandomGenDice *v5; // [rsp+0h] [rbp-20h]

  v5 = a2;
  data::GCGExecEffectOnCampBase::GCGExecEffectOnCampBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectRandomGenDice + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gen_dice_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->gen_dice_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->gen_dice_type);
  }
  gen_dice_type = a2->gen_dice_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->gen_dice_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->gen_dice_type, a2);
  }
  this->gen_dice_type = gen_dice_type;
  data::GCGDeclare::GCGDeclare(&this->declared_output_key, &v5->declared_output_key);
};

// Line 3530: range 000000000DF52C52-000000000DF52C7C
void __cdecl data::ConfigGCGExecEffectRandomGenDice::~ConfigGCGExecEffectRandomGenDice(
        data::ConfigGCGExecEffectRandomGenDice *const this)
{
  data::ConfigGCGExecEffectRandomGenDice::~ConfigGCGExecEffectRandomGenDice(this);
  operator delete(this, 0x60uLL);
};

// Line 3530: range 000000000DF52BF4-000000000DF52C51
void __cdecl data::ConfigGCGExecEffectRandomGenDice::~ConfigGCGExecEffectRandomGenDice(
        data::ConfigGCGExecEffectRandomGenDice *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectRandomGenDice + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::GCGDeclare::~GCGDeclare(&this->declared_output_key);
  data::GCGExecEffectOnCampBase::~GCGExecEffectOnCampBase(this);
};

// Line 3535: range 000000000D74A4C4-000000000D74A4D4
const char *__cdecl data::ConfigGCGExecEffectRandomGenDice::getTypeName(
        const data::ConfigGCGExecEffectRandomGenDice *const this)
{
  return "ConfigGCGExecEffectRandomGenDice";
};

// Line 3536: range 000000000D74A4D6-000000000D74A672
int32_t __cdecl data::ConfigGCGExecEffectRandomGenDice::getHashNum(
        const data::ConfigGCGExecEffectRandomGenDice *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGExecEffectRandomGenDice::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGExecEffectRandomGenDice",
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

// Line 3552: range 000000000DEA6E58-000000000DEA6E99
void __cdecl data::ConfigGCGExecEffectRandomGenDiceFactory::ConfigGCGExecEffectRandomGenDiceFactory(
        data::ConfigGCGExecEffectRandomGenDiceFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectRandomGenDiceFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGExecEffectRandomGenDiceFactory = v2;
};

// Line 3560: range 000000000DEA71A2-000000000DEA72B1
void __cdecl data::ConfigGCGExecEffectSetDamageElement::ConfigGCGExecEffectSetDamageElement(
        data::ConfigGCGExecEffectSetDamageElement *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::GCGExecEffectOnCampBase::GCGExecEffectOnCampBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectSetDamageElement + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->element_type, v1);
  }
  this->element_type = GCG_SET_DAMAGE_ELEMENT_NONE;
  v3 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->choose_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->choose_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->choose_type, v3);
  }
  this->choose_type = CHOOSE_ALL;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_type, v3);
  }
  this->target_type = GCG_CARD_INVALID;
};

// Line 3560: range 000000000DEA774C-000000000DEA7913
void __cdecl data::ConfigGCGExecEffectSetDamageElement::ConfigGCGExecEffectSetDamageElement(
        data::ConfigGCGExecEffectSetDamageElement *const this,
        const data::ConfigGCGExecEffectSetDamageElement *a2)
{
  int (**v2)(...); // rdx
  data::GCGEffectSetDamageElementType element_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::GCGEffectTargetChooseType choose_type; // ecx
  char v7; // dl
  data::GCGCardType target_type; // ecx
  char v9; // al
  const data::ConfigGCGExecEffectSetDamageElement *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  data::GCGExecEffectOnCampBase::GCGExecEffectOnCampBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectSetDamageElement + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->element_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->element_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->element_type);
  }
  element_type = a2->element_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->element_type, a2);
  }
  this->element_type = element_type;
  v5 = (((_BYTE)v10 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->choose_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->choose_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->choose_type);
  }
  choose_type = v10->choose_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->choose_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->choose_type, v5);
  }
  this->choose_type = choose_type;
  if ( *(_BYTE *)(((unsigned __int64)&v10->target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->target_type);
  }
  target_type = v10->target_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->target_type, v5);
  }
  this->target_type = target_type;
};

// Line 3569: range 000000000DF52BC8-000000000DF52BF2
void __cdecl data::ConfigGCGExecEffectSetDamageElement::~ConfigGCGExecEffectSetDamageElement(
        data::ConfigGCGExecEffectSetDamageElement *const this)
{
  data::ConfigGCGExecEffectSetDamageElement::~ConfigGCGExecEffectSetDamageElement(this);
  operator delete(this, 0x40uLL);
};

// Line 3569: range 000000000DF52B7A-000000000DF52BC7
void __cdecl data::ConfigGCGExecEffectSetDamageElement::~ConfigGCGExecEffectSetDamageElement(
        data::ConfigGCGExecEffectSetDamageElement *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectSetDamageElement + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::GCGExecEffectOnCampBase::~GCGExecEffectOnCampBase(this);
};

// Line 3574: range 000000000D74A674-000000000D74A684
const char *__cdecl data::ConfigGCGExecEffectSetDamageElement::getTypeName(
        const data::ConfigGCGExecEffectSetDamageElement *const this)
{
  return "ConfigGCGExecEffectSetDamageElement";
};

// Line 3575: range 000000000D74A686-000000000D74A822
int32_t __cdecl data::ConfigGCGExecEffectSetDamageElement::getHashNum(
        const data::ConfigGCGExecEffectSetDamageElement *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGExecEffectSetDamageElement::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGExecEffectSetDamageElement",
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

// Line 3591: range 000000000DEA7B5C-000000000DEA7B9D
void __cdecl data::ConfigGCGExecEffectSetDamageElementFactory::ConfigGCGExecEffectSetDamageElementFactory(
        data::ConfigGCGExecEffectSetDamageElementFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectSetDamageElementFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGExecEffectSetDamageElementFactory = v2;
};

// Line 3599: range 000000000DEA7EA6-000000000DEA7FB5
void __cdecl data::ConfigGCGExecEffectAbsorbUnusedDice::ConfigGCGExecEffectAbsorbUnusedDice(
        data::ConfigGCGExecEffectAbsorbUnusedDice *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::GCGExecEffectOnCampBase::GCGExecEffectOnCampBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectAbsorbUnusedDice + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_absorb_num_per_dice_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_absorb_num_per_dice_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_absorb_num_per_dice_type, v1);
  }
  this->max_absorb_num_per_dice_type = 0;
  v3 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_absorb_num_per_dice_type_one_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_absorb_num_per_dice_type_one_time >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_absorb_num_per_dice_type_one_time, v3);
  }
  this->max_absorb_num_per_dice_type_one_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_absorb_num_total >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_absorb_num_total >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_absorb_num_total, v3);
  }
  this->max_absorb_num_total = 0;
};

// Line 3599: range 000000000DEA8450-000000000DEA8617
void __cdecl data::ConfigGCGExecEffectAbsorbUnusedDice::ConfigGCGExecEffectAbsorbUnusedDice(
        data::ConfigGCGExecEffectAbsorbUnusedDice *const this,
        const data::ConfigGCGExecEffectAbsorbUnusedDice *a2)
{
  int (**v2)(...); // rdx
  uint32_t max_absorb_num_per_dice_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t max_absorb_num_per_dice_type_one_time; // ecx
  char v7; // dl
  uint32_t max_absorb_num_total; // ecx
  char v9; // al
  const data::ConfigGCGExecEffectAbsorbUnusedDice *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  data::GCGExecEffectOnCampBase::GCGExecEffectOnCampBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectAbsorbUnusedDice + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_absorb_num_per_dice_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->max_absorb_num_per_dice_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->max_absorb_num_per_dice_type);
  }
  max_absorb_num_per_dice_type = a2->max_absorb_num_per_dice_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->max_absorb_num_per_dice_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->max_absorb_num_per_dice_type, a2);
  }
  this->max_absorb_num_per_dice_type = max_absorb_num_per_dice_type;
  v5 = (((_BYTE)v10 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->max_absorb_num_per_dice_type_one_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->max_absorb_num_per_dice_type_one_time >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->max_absorb_num_per_dice_type_one_time);
  }
  max_absorb_num_per_dice_type_one_time = v10->max_absorb_num_per_dice_type_one_time;
  v7 = *(_BYTE *)(((unsigned __int64)&this->max_absorb_num_per_dice_type_one_time >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->max_absorb_num_per_dice_type_one_time, v5);
  }
  this->max_absorb_num_per_dice_type_one_time = max_absorb_num_per_dice_type_one_time;
  if ( *(_BYTE *)(((unsigned __int64)&v10->max_absorb_num_total >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->max_absorb_num_total >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->max_absorb_num_total);
  }
  max_absorb_num_total = v10->max_absorb_num_total;
  v9 = *(_BYTE *)(((unsigned __int64)&this->max_absorb_num_total >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->max_absorb_num_total, v5);
  }
  this->max_absorb_num_total = max_absorb_num_total;
};

// Line 3608: range 000000000DF52B4E-000000000DF52B78
void __cdecl data::ConfigGCGExecEffectAbsorbUnusedDice::~ConfigGCGExecEffectAbsorbUnusedDice(
        data::ConfigGCGExecEffectAbsorbUnusedDice *const this)
{
  data::ConfigGCGExecEffectAbsorbUnusedDice::~ConfigGCGExecEffectAbsorbUnusedDice(this);
  operator delete(this, 0x40uLL);
};

// Line 3608: range 000000000DF52B00-000000000DF52B4D
void __cdecl data::ConfigGCGExecEffectAbsorbUnusedDice::~ConfigGCGExecEffectAbsorbUnusedDice(
        data::ConfigGCGExecEffectAbsorbUnusedDice *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectAbsorbUnusedDice + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::GCGExecEffectOnCampBase::~GCGExecEffectOnCampBase(this);
};

// Line 3613: range 000000000D74A824-000000000D74A834
const char *__cdecl data::ConfigGCGExecEffectAbsorbUnusedDice::getTypeName(
        const data::ConfigGCGExecEffectAbsorbUnusedDice *const this)
{
  return "ConfigGCGExecEffectAbsorbUnusedDice";
};

// Line 3614: range 000000000D74A836-000000000D74A9D2
int32_t __cdecl data::ConfigGCGExecEffectAbsorbUnusedDice::getHashNum(
        const data::ConfigGCGExecEffectAbsorbUnusedDice *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGExecEffectAbsorbUnusedDice::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGExecEffectAbsorbUnusedDice",
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

// Line 3630: range 000000000DEA8860-000000000DEA88A1
void __cdecl data::ConfigGCGExecEffectAbsorbUnusedDiceFactory::ConfigGCGExecEffectAbsorbUnusedDiceFactory(
        data::ConfigGCGExecEffectAbsorbUnusedDiceFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectAbsorbUnusedDiceFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGExecEffectAbsorbUnusedDiceFactory = v2;
};

// Line 3638: range 000000000DEA8BAA-000000000DEA8CB9
void __cdecl data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter::ConfigGCGExecEffectAdvanceProcessWaitingCharacter(
        data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::GCGExecEffectOnCampBase::GCGExecEffectOnCampBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->process_num_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->process_num_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->process_num_limit, v1);
  }
  this->process_num_limit = 0;
  v3 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->character_num_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->character_num_limit >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->character_num_limit, v3);
  }
  this->character_num_limit = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_index_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_index_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_index_limit, v3);
  }
  this->max_index_limit = 0;
};

// Line 3638: range 000000000DEA9154-000000000DEA931B
void __cdecl data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter::ConfigGCGExecEffectAdvanceProcessWaitingCharacter(
        data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter *const this,
        const data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter *a2)
{
  int (**v2)(...); // rdx
  uint32_t process_num_limit; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t character_num_limit; // ecx
  char v7; // dl
  uint32_t max_index_limit; // ecx
  char v9; // al
  const data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  data::GCGExecEffectOnCampBase::GCGExecEffectOnCampBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->process_num_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->process_num_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->process_num_limit);
  }
  process_num_limit = a2->process_num_limit;
  v4 = *(_BYTE *)(((unsigned __int64)&this->process_num_limit >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->process_num_limit, a2);
  }
  this->process_num_limit = process_num_limit;
  v5 = (((_BYTE)v10 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->character_num_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->character_num_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->character_num_limit);
  }
  character_num_limit = v10->character_num_limit;
  v7 = *(_BYTE *)(((unsigned __int64)&this->character_num_limit >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->character_num_limit, v5);
  }
  this->character_num_limit = character_num_limit;
  if ( *(_BYTE *)(((unsigned __int64)&v10->max_index_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->max_index_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->max_index_limit);
  }
  max_index_limit = v10->max_index_limit;
  v9 = *(_BYTE *)(((unsigned __int64)&this->max_index_limit >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->max_index_limit, v5);
  }
  this->max_index_limit = max_index_limit;
};

// Line 3647: range 000000000DF52A86-000000000DF52AD3
void __cdecl data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter::~ConfigGCGExecEffectAdvanceProcessWaitingCharacter(
        data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::GCGExecEffectOnCampBase::~GCGExecEffectOnCampBase(this);
};

// Line 3647: range 000000000DF52AD4-000000000DF52AFE
void __cdecl data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter::~ConfigGCGExecEffectAdvanceProcessWaitingCharacter(
        data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter *const this)
{
  data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter::~ConfigGCGExecEffectAdvanceProcessWaitingCharacter(this);
  operator delete(this, 0x40uLL);
};

// Line 3652: range 000000000D74A9D4-000000000D74A9E4
const char *__cdecl data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter::getTypeName(
        const data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter *const this)
{
  return "ConfigGCGExecEffectAdvanceProcessWaitingCharacter";
};

// Line 3653: range 000000000D74A9E6-000000000D74AB82
int32_t __cdecl data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter::getHashNum(
        const data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGExecEffectAdvanceProcessWaitingCharacter",
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

// Line 3669: range 000000000DEA9564-000000000DEA95A5
void __cdecl data::ConfigGCGExecEffectAdvanceProcessWaitingCharacterFactory::ConfigGCGExecEffectAdvanceProcessWaitingCharacterFactory(
        data::ConfigGCGExecEffectAdvanceProcessWaitingCharacterFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectAdvanceProcessWaitingCharacterFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGExecEffectAdvanceProcessWaitingCharacterFactory = v2;
};

// Line 3677: range 000000000DEA98AE-000000000DEA9941
void __cdecl data::ConfigGCGExecEffectFinishDuel::ConfigGCGExecEffectFinishDuel(
        data::ConfigGCGExecEffectFinishDuel *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectFinishDuel + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_camp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_camp >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->target_camp, (((_BYTE)this + 44) & 7u) + 3);
  }
  this->target_camp = CAMP_BOTH;
};

// Line 3677: range 000000000DEA9DB2-000000000DEA9E8F
void __cdecl data::ConfigGCGExecEffectFinishDuel::ConfigGCGExecEffectFinishDuel(
        data::ConfigGCGExecEffectFinishDuel *const this,
        const data::ConfigGCGExecEffectFinishDuel *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GCGEffectCampType target_camp; // ecx
  char v5; // dl

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this, (const data::ConfigGCGEffect *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectFinishDuel + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)a2 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->target_camp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->target_camp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->target_camp);
  }
  target_camp = a2->target_camp;
  v5 = *(_BYTE *)(((unsigned __int64)&this->target_camp >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->target_camp, v3);
  }
  this->target_camp = target_camp;
};

// Line 3684: range 000000000DF52A0C-000000000DF52A59
void __cdecl data::ConfigGCGExecEffectFinishDuel::~ConfigGCGExecEffectFinishDuel(
        data::ConfigGCGExecEffectFinishDuel *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectFinishDuel + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::ConfigGCGEffect::~ConfigGCGEffect((data::ConfigGCGEffect *const)this);
};

// Line 3684: range 000000000DF52A5A-000000000DF52A84
void __cdecl data::ConfigGCGExecEffectFinishDuel::~ConfigGCGExecEffectFinishDuel(
        data::ConfigGCGExecEffectFinishDuel *const this)
{
  data::ConfigGCGExecEffectFinishDuel::~ConfigGCGExecEffectFinishDuel(this);
  operator delete(this, 0x30uLL);
};

// Line 3689: range 000000000D74AB84-000000000D74AB94
const char *__cdecl data::ConfigGCGExecEffectFinishDuel::getTypeName(
        const data::ConfigGCGExecEffectFinishDuel *const this)
{
  return "ConfigGCGExecEffectFinishDuel";
};

// Line 3690: range 000000000D74AB96-000000000D74AD32
int32_t __cdecl data::ConfigGCGExecEffectFinishDuel::getHashNum(const data::ConfigGCGExecEffectFinishDuel *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGExecEffectFinishDuel::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGExecEffectFinishDuel",
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

// Line 3706: range 000000000DEAA0D8-000000000DEAA119
void __cdecl data::ConfigGCGExecEffectFinishDuelFactory::ConfigGCGExecEffectFinishDuelFactory(
        data::ConfigGCGExecEffectFinishDuelFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectFinishDuelFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGExecEffectFinishDuelFactory = v2;
};

// Line 3714: range 000000000DEAA422-000000000DEAA4B5
void __cdecl data::ConfigGCGExecEffectOnStageCharacterUseSkill::ConfigGCGExecEffectOnStageCharacterUseSkill(
        data::ConfigGCGExecEffectOnStageCharacterUseSkill *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectOnStageCharacterUseSkill + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skill_id, (((_BYTE)this + 44) & 7u) + 3);
  }
  this->skill_id = 0;
};

// Line 3714: range 000000000DEAA926-000000000DEAAA03
void __cdecl data::ConfigGCGExecEffectOnStageCharacterUseSkill::ConfigGCGExecEffectOnStageCharacterUseSkill(
        data::ConfigGCGExecEffectOnStageCharacterUseSkill *const this,
        const data::ConfigGCGExecEffectOnStageCharacterUseSkill *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t skill_id; // ecx
  char v5; // dl

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this, (const data::ConfigGCGEffect *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectOnStageCharacterUseSkill + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)a2 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->skill_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->skill_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->skill_id);
  }
  skill_id = a2->skill_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->skill_id, v3);
  }
  this->skill_id = skill_id;
};

// Line 3721: range 000000000DF529E0-000000000DF52A0A
void __cdecl data::ConfigGCGExecEffectOnStageCharacterUseSkill::~ConfigGCGExecEffectOnStageCharacterUseSkill(
        data::ConfigGCGExecEffectOnStageCharacterUseSkill *const this)
{
  data::ConfigGCGExecEffectOnStageCharacterUseSkill::~ConfigGCGExecEffectOnStageCharacterUseSkill(this);
  operator delete(this, 0x30uLL);
};

// Line 3721: range 000000000DF52992-000000000DF529DF
void __cdecl data::ConfigGCGExecEffectOnStageCharacterUseSkill::~ConfigGCGExecEffectOnStageCharacterUseSkill(
        data::ConfigGCGExecEffectOnStageCharacterUseSkill *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectOnStageCharacterUseSkill + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::ConfigGCGEffect::~ConfigGCGEffect((data::ConfigGCGEffect *const)this);
};

// Line 3726: range 000000000D74AD34-000000000D74AD44
const char *__cdecl data::ConfigGCGExecEffectOnStageCharacterUseSkill::getTypeName(
        const data::ConfigGCGExecEffectOnStageCharacterUseSkill *const this)
{
  return "ConfigGCGExecEffectOnStageCharacterUseSkill";
};

// Line 3727: range 000000000D74AD46-000000000D74AEE2
int32_t __cdecl data::ConfigGCGExecEffectOnStageCharacterUseSkill::getHashNum(
        const data::ConfigGCGExecEffectOnStageCharacterUseSkill *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGExecEffectOnStageCharacterUseSkill::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGExecEffectOnStageCharacterUseSkill",
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

// Line 3743: range 000000000DEAAC4C-000000000DEAAC8D
void __cdecl data::ConfigGCGExecEffectOnStageCharacterUseSkillFactory::ConfigGCGExecEffectOnStageCharacterUseSkillFactory(
        data::ConfigGCGExecEffectOnStageCharacterUseSkillFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectOnStageCharacterUseSkillFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGExecEffectOnStageCharacterUseSkillFactory = v2;
};

// Line 3751: range 000000000DEAAF96-000000000DEAAFF3
void __cdecl data::ConfigGCGExecEffectReroll::ConfigGCGExecEffectReroll(data::ConfigGCGExecEffectReroll *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::GCGExecEffectOnCampBase::GCGExecEffectOnCampBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectReroll + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::GCGDeclare::GCGDeclare(&this->declared_output_key);
};

// Line 3751: range 000000000DEAB442-000000000DEAB4D8
void __cdecl data::ConfigGCGExecEffectReroll::ConfigGCGExecEffectReroll(
        data::ConfigGCGExecEffectReroll *const this,
        const data::ConfigGCGExecEffectReroll *a2)
{
  int (**v2)(...); // rdx

  data::GCGExecEffectOnCampBase::GCGExecEffectOnCampBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectReroll + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  data::GCGDeclare::GCGDeclare(&this->declared_output_key, &a2->declared_output_key);
};

// Line 3758: range 000000000DF52908-000000000DF52965
void __cdecl data::ConfigGCGExecEffectReroll::~ConfigGCGExecEffectReroll(data::ConfigGCGExecEffectReroll *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectReroll + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::GCGDeclare::~GCGDeclare(&this->declared_output_key);
  data::GCGExecEffectOnCampBase::~GCGExecEffectOnCampBase(this);
};

// Line 3758: range 000000000DF52966-000000000DF52990
void __cdecl data::ConfigGCGExecEffectReroll::~ConfigGCGExecEffectReroll(data::ConfigGCGExecEffectReroll *const this)
{
  data::ConfigGCGExecEffectReroll::~ConfigGCGExecEffectReroll(this);
  operator delete(this, 0x58uLL);
};

// Line 3763: range 000000000D74AEE4-000000000D74AEF4
const char *__cdecl data::ConfigGCGExecEffectReroll::getTypeName(const data::ConfigGCGExecEffectReroll *const this)
{
  return "ConfigGCGExecEffectReroll";
};

// Line 3764: range 000000000D74AEF6-000000000D74B092
int32_t __cdecl data::ConfigGCGExecEffectReroll::getHashNum(const data::ConfigGCGExecEffectReroll *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGExecEffectReroll::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGExecEffectReroll",
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

// Line 3780: range 000000000DEAB7C2-000000000DEAB803
void __cdecl data::ConfigGCGExecEffectRerollFactory::ConfigGCGExecEffectRerollFactory(
        data::ConfigGCGExecEffectRerollFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectRerollFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGExecEffectRerollFactory = v2;
};

// Line 3802: range 000000000DEABC6C-000000000DEABE45
void __cdecl data::ConfigGCGExecEffectCreateCard::ConfigGCGExecEffectCreateCard(
        data::ConfigGCGExecEffectCreateCard *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectCreateCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_id, v3);
  }
  this->card_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->camp_type, v3);
  }
  this->camp_type = CAMP_BOTH;
  v4 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->position >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->position >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->position, v4);
  }
  this->position = CREATE_POSITION_ONSTAGE;
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_operator_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->refresh_operator_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->refresh_operator_type, v4);
  }
  this->refresh_operator_type = REFRESH_OPEATER_RESET;
  v5 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->add_show_token_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->add_show_token_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->add_show_token_num, v5);
  }
  this->add_show_token_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->add_show_token_num_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->add_show_token_num_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->add_show_token_num_limit, v5);
  }
  this->add_show_token_num_limit = 0;
};

// Line 3802: range 000000000DEAC2F6-000000000DEAC63C
void __cdecl data::ConfigGCGExecEffectCreateCard::ConfigGCGExecEffectCreateCard(
        data::ConfigGCGExecEffectCreateCard *const this,
        const data::ConfigGCGExecEffectCreateCard *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t card_id; // ecx
  char v5; // dl
  data::GCGEffectCampType camp_type; // ecx
  char v7; // al
  __int64 v8; // rsi
  data::GCGEffectCreatePositionType position; // ecx
  char v10; // dl
  data::GCGRefreshOperatorType refresh_operator_type; // ecx
  char v12; // al
  __int64 v13; // rsi
  uint32_t add_show_token_num; // ecx
  char v15; // dl
  uint32_t add_show_token_num_limit; // ecx
  char v17; // al

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this, (const data::ConfigGCGEffect *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectCreateCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)a2 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->card_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->card_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->card_id);
  }
  card_id = a2->card_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->card_id, v3);
  }
  this->card_id = card_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->camp_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->camp_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->camp_type);
  }
  camp_type = a2->camp_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->camp_type, v3);
  }
  this->camp_type = camp_type;
  v8 = (((_BYTE)a2 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->position >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->position >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->position);
  }
  position = a2->position;
  v10 = *(_BYTE *)(((unsigned __int64)&this->position >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->position, v8);
  }
  this->position = position;
  if ( *(_BYTE *)(((unsigned __int64)&a2->refresh_operator_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->refresh_operator_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->refresh_operator_type);
  }
  refresh_operator_type = a2->refresh_operator_type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->refresh_operator_type >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(v8) = v12 != 0;
    __asan_report_store4(&this->refresh_operator_type, v8);
  }
  this->refresh_operator_type = refresh_operator_type;
  v13 = (((_BYTE)a2 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->add_show_token_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->add_show_token_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->add_show_token_num);
  }
  add_show_token_num = a2->add_show_token_num;
  v15 = *(_BYTE *)(((unsigned __int64)&this->add_show_token_num >> 3) + 0x7FFF8000);
  if ( v15 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v15 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->add_show_token_num, v13);
  }
  this->add_show_token_num = add_show_token_num;
  if ( *(_BYTE *)(((unsigned __int64)&a2->add_show_token_num_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->add_show_token_num_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->add_show_token_num_limit);
  }
  add_show_token_num_limit = a2->add_show_token_num_limit;
  v17 = *(_BYTE *)(((unsigned __int64)&this->add_show_token_num_limit >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(v13) = v17 != 0;
    __asan_report_store4(&this->add_show_token_num_limit, v13);
  }
  this->add_show_token_num_limit = add_show_token_num_limit;
};

// Line 3814: range 000000000DF528DC-000000000DF52906
void __cdecl data::ConfigGCGExecEffectCreateCard::~ConfigGCGExecEffectCreateCard(
        data::ConfigGCGExecEffectCreateCard *const this)
{
  data::ConfigGCGExecEffectCreateCard::~ConfigGCGExecEffectCreateCard(this);
  operator delete(this, 0x48uLL);
};

// Line 3814: range 000000000DF5288E-000000000DF528DB
void __cdecl data::ConfigGCGExecEffectCreateCard::~ConfigGCGExecEffectCreateCard(
        data::ConfigGCGExecEffectCreateCard *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectCreateCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::ConfigGCGEffect::~ConfigGCGEffect((data::ConfigGCGEffect *const)this);
};

// Line 3819: range 000000000D74B094-000000000D74B0A4
const char *__cdecl data::ConfigGCGExecEffectCreateCard::getTypeName(
        const data::ConfigGCGExecEffectCreateCard *const this)
{
  return "ConfigGCGExecEffectCreateCard";
};

// Line 3820: range 000000000D74B0A6-000000000D74B242
int32_t __cdecl data::ConfigGCGExecEffectCreateCard::getHashNum(const data::ConfigGCGExecEffectCreateCard *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGExecEffectCreateCard::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGExecEffectCreateCard",
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

// Line 3836: range 000000000DEAC886-000000000DEAC8C7
void __cdecl data::ConfigGCGExecEffectCreateCardFactory::ConfigGCGExecEffectCreateCardFactory(
        data::ConfigGCGExecEffectCreateCardFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectCreateCardFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGExecEffectCreateCardFactory = v2;
};

// Line 3844: range 000000000DEACBD0-000000000DEACCEF
void __cdecl data::ConfigGCGExecEffectRandomCreateCard::ConfigGCGExecEffectRandomCreateCard(
        data::ConfigGCGExecEffectRandomCreateCard *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectRandomCreateCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->camp_type, v3);
  }
  this->camp_type = CAMP_BOTH;
  if ( *(_BYTE *)(((unsigned __int64)&this->position >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->position >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->position, v3);
  }
  this->position = CREATE_POSITION_ONSTAGE;
  std::vector<unsigned int>::vector(&this->card_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->preview_card_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->preview_card_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->preview_card_id, v3);
  }
  this->preview_card_id = 0;
};

// Line 3844: range 000000000DEAD13E-000000000DEAD343
void __cdecl data::ConfigGCGExecEffectRandomCreateCard::ConfigGCGExecEffectRandomCreateCard(
        data::ConfigGCGExecEffectRandomCreateCard *const this,
        const data::ConfigGCGExecEffectRandomCreateCard *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GCGEffectCampType camp_type; // ecx
  char v5; // dl
  data::GCGEffectCreatePositionType position; // ecx
  char v7; // al
  data::UInt32List *p_card_id_list; // rsi
  uint32_t preview_card_id; // ecx
  char v10; // al

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this, (const data::ConfigGCGEffect *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectRandomCreateCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)a2 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->camp_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->camp_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->camp_type);
  }
  camp_type = a2->camp_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->camp_type, v3);
  }
  this->camp_type = camp_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->position >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->position >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->position);
  }
  position = a2->position;
  v7 = *(_BYTE *)(((unsigned __int64)&this->position >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->position, v3);
  }
  this->position = position;
  p_card_id_list = &a2->card_id_list;
  std::vector<unsigned int>::vector(&this->card_id_list, &a2->card_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&a2->preview_card_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->preview_card_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->preview_card_id);
  }
  preview_card_id = a2->preview_card_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->preview_card_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_card_id_list) = v10 != 0;
    __asan_report_store4(&this->preview_card_id, p_card_id_list);
  }
  this->preview_card_id = preview_card_id;
};

// Line 3854: range 000000000DF52862-000000000DF5288C
void __cdecl data::ConfigGCGExecEffectRandomCreateCard::~ConfigGCGExecEffectRandomCreateCard(
        data::ConfigGCGExecEffectRandomCreateCard *const this)
{
  data::ConfigGCGExecEffectRandomCreateCard::~ConfigGCGExecEffectRandomCreateCard(this);
  operator delete(this, 0x58uLL);
};

// Line 3854: range 000000000DF52804-000000000DF52861
void __cdecl data::ConfigGCGExecEffectRandomCreateCard::~ConfigGCGExecEffectRandomCreateCard(
        data::ConfigGCGExecEffectRandomCreateCard *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectRandomCreateCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  std::vector<unsigned int>::~vector(&this->card_id_list);
  data::ConfigGCGEffect::~ConfigGCGEffect((data::ConfigGCGEffect *const)this);
};

// Line 3859: range 000000000D74B244-000000000D74B254
const char *__cdecl data::ConfigGCGExecEffectRandomCreateCard::getTypeName(
        const data::ConfigGCGExecEffectRandomCreateCard *const this)
{
  return "ConfigGCGExecEffectRandomCreateCard";
};

// Line 3860: range 000000000D74B256-000000000D74B3F2
int32_t __cdecl data::ConfigGCGExecEffectRandomCreateCard::getHashNum(
        const data::ConfigGCGExecEffectRandomCreateCard *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGExecEffectRandomCreateCard::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGExecEffectRandomCreateCard",
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

// Line 3876: range 000000000DEAD62C-000000000DEAD66D
void __cdecl data::ConfigGCGExecEffectRandomCreateCardFactory::ConfigGCGExecEffectRandomCreateCardFactory(
        data::ConfigGCGExecEffectRandomCreateCardFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectRandomCreateCardFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGExecEffectRandomCreateCardFactory = v2;
};

// Line 3884: range 000000000DEAD976-000000000DEADB4F
void __cdecl data::ConfigGCGExecEffectCreateModifyCard::ConfigGCGExecEffectCreateModifyCard(
        data::ConfigGCGExecEffectCreateModifyCard *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectCreateModifyCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_id, v3);
  }
  this->card_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->camp_type, v3);
  }
  this->camp_type = CAMP_BOTH;
  v4 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->choose_charater_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->choose_charater_type >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->choose_charater_type, v4);
  }
  this->choose_charater_type = CHARACTER_ONSTAGE;
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_operator_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->refresh_operator_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->refresh_operator_type, v4);
  }
  this->refresh_operator_type = REFRESH_OPEATER_RESET;
  v5 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->add_show_token_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->add_show_token_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->add_show_token_num, v5);
  }
  this->add_show_token_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->add_show_token_num_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->add_show_token_num_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->add_show_token_num_limit, v5);
  }
  this->add_show_token_num_limit = 0;
};

// Line 3884: range 000000000DEAE000-000000000DEAE346
void __cdecl data::ConfigGCGExecEffectCreateModifyCard::ConfigGCGExecEffectCreateModifyCard(
        data::ConfigGCGExecEffectCreateModifyCard *const this,
        const data::ConfigGCGExecEffectCreateModifyCard *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t card_id; // ecx
  char v5; // dl
  data::GCGEffectCampType camp_type; // ecx
  char v7; // al
  __int64 v8; // rsi
  data::GCGChooseTargetCharaterType choose_charater_type; // ecx
  char v10; // dl
  data::GCGRefreshOperatorType refresh_operator_type; // ecx
  char v12; // al
  __int64 v13; // rsi
  uint32_t add_show_token_num; // ecx
  char v15; // dl
  uint32_t add_show_token_num_limit; // ecx
  char v17; // al

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this, (const data::ConfigGCGEffect *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectCreateModifyCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)a2 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->card_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->card_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->card_id);
  }
  card_id = a2->card_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->card_id, v3);
  }
  this->card_id = card_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->camp_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->camp_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->camp_type);
  }
  camp_type = a2->camp_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->camp_type, v3);
  }
  this->camp_type = camp_type;
  v8 = (((_BYTE)a2 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->choose_charater_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->choose_charater_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->choose_charater_type);
  }
  choose_charater_type = a2->choose_charater_type;
  v10 = *(_BYTE *)(((unsigned __int64)&this->choose_charater_type >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->choose_charater_type, v8);
  }
  this->choose_charater_type = choose_charater_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->refresh_operator_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->refresh_operator_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->refresh_operator_type);
  }
  refresh_operator_type = a2->refresh_operator_type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->refresh_operator_type >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(v8) = v12 != 0;
    __asan_report_store4(&this->refresh_operator_type, v8);
  }
  this->refresh_operator_type = refresh_operator_type;
  v13 = (((_BYTE)a2 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->add_show_token_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->add_show_token_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->add_show_token_num);
  }
  add_show_token_num = a2->add_show_token_num;
  v15 = *(_BYTE *)(((unsigned __int64)&this->add_show_token_num >> 3) + 0x7FFF8000);
  if ( v15 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v15 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->add_show_token_num, v13);
  }
  this->add_show_token_num = add_show_token_num;
  if ( *(_BYTE *)(((unsigned __int64)&a2->add_show_token_num_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->add_show_token_num_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->add_show_token_num_limit);
  }
  add_show_token_num_limit = a2->add_show_token_num_limit;
  v17 = *(_BYTE *)(((unsigned __int64)&this->add_show_token_num_limit >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(v13) = v17 != 0;
    __asan_report_store4(&this->add_show_token_num_limit, v13);
  }
  this->add_show_token_num_limit = add_show_token_num_limit;
};

// Line 3896: range 000000000DF527D8-000000000DF52802
void __cdecl data::ConfigGCGExecEffectCreateModifyCard::~ConfigGCGExecEffectCreateModifyCard(
        data::ConfigGCGExecEffectCreateModifyCard *const this)
{
  data::ConfigGCGExecEffectCreateModifyCard::~ConfigGCGExecEffectCreateModifyCard(this);
  operator delete(this, 0x48uLL);
};

// Line 3896: range 000000000DF5278A-000000000DF527D7
void __cdecl data::ConfigGCGExecEffectCreateModifyCard::~ConfigGCGExecEffectCreateModifyCard(
        data::ConfigGCGExecEffectCreateModifyCard *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectCreateModifyCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::ConfigGCGEffect::~ConfigGCGEffect((data::ConfigGCGEffect *const)this);
};

// Line 3901: range 000000000D74B3F4-000000000D74B404
const char *__cdecl data::ConfigGCGExecEffectCreateModifyCard::getTypeName(
        const data::ConfigGCGExecEffectCreateModifyCard *const this)
{
  return "ConfigGCGExecEffectCreateModifyCard";
};

// Line 3902: range 000000000D74B406-000000000D74B5A2
int32_t __cdecl data::ConfigGCGExecEffectCreateModifyCard::getHashNum(
        const data::ConfigGCGExecEffectCreateModifyCard *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGExecEffectCreateModifyCard::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGExecEffectCreateModifyCard",
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

// Line 3918: range 000000000DEAE590-000000000DEAE5D1
void __cdecl data::ConfigGCGExecEffectCreateModifyCardFactory::ConfigGCGExecEffectCreateModifyCardFactory(
        data::ConfigGCGExecEffectCreateModifyCardFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectCreateModifyCardFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGExecEffectCreateModifyCardFactory = v2;
};

// Line 3926: range 000000000DEAE8DA-000000000DEAEAC3
void __cdecl data::ConfigGCGExecEffectChangeCardVar::ConfigGCGExecEffectChangeCardVar(
        data::ConfigGCGExecEffectChangeCardVar *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectChangeCardVar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->camp_type, v3);
  }
  this->camp_type = CAMP_BOTH;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_type, v3);
  }
  this->target_type = GCG_CARD_INVALID;
  v4 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->choose_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->choose_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->choose_type, v4);
  }
  this->choose_type = CHOOSE_ALL;
  if ( *(_BYTE *)(((unsigned __int64)&this->tag_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tag_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->tag_type, v4);
  }
  this->tag_type = GCG_TAG_NONE;
  v5 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->token_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->token_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->token_type, v5);
  }
  this->token_type = GCG_TOKEN_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->operator_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->operator_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->operator_type, v5);
  }
  this->operator_type = OPEATER_ADD;
  data::GCGDeclare::GCGDeclare(&this->declared_output_key);
};

// Line 3926: range 000000000DEAEF02-000000000DEAF286
void __cdecl data::ConfigGCGExecEffectChangeCardVar::ConfigGCGExecEffectChangeCardVar(
        data::ConfigGCGExecEffectChangeCardVar *const this,
        const data::ConfigGCGExecEffectChangeCardVar *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GCGEffectCampType camp_type; // ecx
  char v5; // dl
  data::GCGCardType target_type; // ecx
  char v7; // al
  __int64 v8; // rsi
  data::GCGEffectTargetChooseType choose_type; // ecx
  char v10; // dl
  data::GCGTagType tag_type; // ecx
  char v12; // al
  __int64 v13; // rsi
  data::GCGTokenType token_type; // ecx
  char v15; // dl
  data::GCGValueOperatorType operator_type; // ecx
  char v17; // al

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this, (const data::ConfigGCGEffect *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectChangeCardVar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)a2 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->camp_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->camp_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->camp_type);
  }
  camp_type = a2->camp_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->camp_type, v3);
  }
  this->camp_type = camp_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->target_type);
  }
  target_type = a2->target_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->target_type, v3);
  }
  this->target_type = target_type;
  v8 = (((_BYTE)a2 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->choose_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->choose_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->choose_type);
  }
  choose_type = a2->choose_type;
  v10 = *(_BYTE *)(((unsigned __int64)&this->choose_type >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->choose_type, v8);
  }
  this->choose_type = choose_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->tag_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->tag_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->tag_type);
  }
  tag_type = a2->tag_type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->tag_type >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(v8) = v12 != 0;
    __asan_report_store4(&this->tag_type, v8);
  }
  this->tag_type = tag_type;
  v13 = (((_BYTE)a2 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->token_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->token_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->token_type);
  }
  token_type = a2->token_type;
  v15 = *(_BYTE *)(((unsigned __int64)&this->token_type >> 3) + 0x7FFF8000);
  if ( v15 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v15 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->token_type, v13);
  }
  this->token_type = token_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->operator_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->operator_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->operator_type);
  }
  operator_type = a2->operator_type;
  v17 = *(_BYTE *)(((unsigned __int64)&this->operator_type >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(v13) = v17 != 0;
    __asan_report_store4(&this->operator_type, v13);
  }
  this->operator_type = operator_type;
  data::GCGDeclare::GCGDeclare(&this->declared_output_key, &a2->declared_output_key);
};

// Line 3939: range 000000000DF52700-000000000DF5275D
void __cdecl data::ConfigGCGExecEffectChangeCardVar::~ConfigGCGExecEffectChangeCardVar(
        data::ConfigGCGExecEffectChangeCardVar *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectChangeCardVar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::GCGDeclare::~GCGDeclare(&this->declared_output_key);
  data::ConfigGCGEffect::~ConfigGCGEffect((data::ConfigGCGEffect *const)this);
};

// Line 3939: range 000000000DF5275E-000000000DF52788
void __cdecl data::ConfigGCGExecEffectChangeCardVar::~ConfigGCGExecEffectChangeCardVar(
        data::ConfigGCGExecEffectChangeCardVar *const this)
{
  data::ConfigGCGExecEffectChangeCardVar::~ConfigGCGExecEffectChangeCardVar(this);
  operator delete(this, 0x70uLL);
};

// Line 3944: range 000000000D74B5A4-000000000D74B5B4
const char *__cdecl data::ConfigGCGExecEffectChangeCardVar::getTypeName(
        const data::ConfigGCGExecEffectChangeCardVar *const this)
{
  return "ConfigGCGExecEffectChangeCardVar";
};

// Line 3945: range 000000000D74B5B6-000000000D74B752
int32_t __cdecl data::ConfigGCGExecEffectChangeCardVar::getHashNum(
        const data::ConfigGCGExecEffectChangeCardVar *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGExecEffectChangeCardVar::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGExecEffectChangeCardVar",
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

// Line 3961: range 000000000DEAF570-000000000DEAF5B1
void __cdecl data::ConfigGCGExecEffectChangeCardVarFactory::ConfigGCGExecEffectChangeCardVarFactory(
        data::ConfigGCGExecEffectChangeCardVarFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectChangeCardVarFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGExecEffectChangeCardVarFactory = v2;
};

// Line 3969: range 000000000DEAF8BA-000000000DEAFA1F
void __cdecl data::ConfigGCGExecEffectChangeCardShowTokenVar::ConfigGCGExecEffectChangeCardShowTokenVar(
        data::ConfigGCGExecEffectChangeCardShowTokenVar *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectChangeCardShowTokenVar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->camp_type, v3);
  }
  this->camp_type = CAMP_BOTH;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_type, v3);
  }
  this->target_type = GCG_CARD_INVALID;
  v4 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->choose_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->choose_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->choose_type, v4);
  }
  this->choose_type = CHOOSE_ALL;
  if ( *(_BYTE *)(((unsigned __int64)&this->operator_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->operator_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->operator_type, v4);
  }
  this->operator_type = OPEATER_ADD;
  data::GCGDeclare::GCGDeclare(&this->declared_output_key);
};

// Line 3969: range 000000000DEAFE68-000000000DEB00F2
void __cdecl data::ConfigGCGExecEffectChangeCardShowTokenVar::ConfigGCGExecEffectChangeCardShowTokenVar(
        data::ConfigGCGExecEffectChangeCardShowTokenVar *const this,
        const data::ConfigGCGExecEffectChangeCardShowTokenVar *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GCGEffectCampType camp_type; // ecx
  char v5; // dl
  data::GCGCardType target_type; // ecx
  char v7; // al
  __int64 v8; // rsi
  data::GCGEffectTargetChooseType choose_type; // ecx
  char v10; // dl
  data::GCGValueOperatorType operator_type; // ecx
  char v12; // al

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this, (const data::ConfigGCGEffect *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectChangeCardShowTokenVar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)a2 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->camp_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->camp_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->camp_type);
  }
  camp_type = a2->camp_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->camp_type, v3);
  }
  this->camp_type = camp_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->target_type);
  }
  target_type = a2->target_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->target_type, v3);
  }
  this->target_type = target_type;
  v8 = (((_BYTE)a2 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->choose_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->choose_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->choose_type);
  }
  choose_type = a2->choose_type;
  v10 = *(_BYTE *)(((unsigned __int64)&this->choose_type >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->choose_type, v8);
  }
  this->choose_type = choose_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->operator_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->operator_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->operator_type);
  }
  operator_type = a2->operator_type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->operator_type >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(v8) = v12 != 0;
    __asan_report_store4(&this->operator_type, v8);
  }
  this->operator_type = operator_type;
  data::GCGDeclare::GCGDeclare(&this->declared_output_key, &a2->declared_output_key);
};

// Line 3980: range 000000000DF52676-000000000DF526D3
void __cdecl data::ConfigGCGExecEffectChangeCardShowTokenVar::~ConfigGCGExecEffectChangeCardShowTokenVar(
        data::ConfigGCGExecEffectChangeCardShowTokenVar *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectChangeCardShowTokenVar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::GCGDeclare::~GCGDeclare(&this->declared_output_key);
  data::ConfigGCGEffect::~ConfigGCGEffect((data::ConfigGCGEffect *const)this);
};

// Line 3980: range 000000000DF526D4-000000000DF526FE
void __cdecl data::ConfigGCGExecEffectChangeCardShowTokenVar::~ConfigGCGExecEffectChangeCardShowTokenVar(
        data::ConfigGCGExecEffectChangeCardShowTokenVar *const this)
{
  data::ConfigGCGExecEffectChangeCardShowTokenVar::~ConfigGCGExecEffectChangeCardShowTokenVar(this);
  operator delete(this, 0x68uLL);
};

// Line 3985: range 000000000D74B754-000000000D74B764
const char *__cdecl data::ConfigGCGExecEffectChangeCardShowTokenVar::getTypeName(
        const data::ConfigGCGExecEffectChangeCardShowTokenVar *const this)
{
  return "ConfigGCGExecEffectChangeCardShowTokenVar";
};

// Line 3986: range 000000000D74B766-000000000D74B902
int32_t __cdecl data::ConfigGCGExecEffectChangeCardShowTokenVar::getHashNum(
        const data::ConfigGCGExecEffectChangeCardShowTokenVar *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGExecEffectChangeCardShowTokenVar::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGExecEffectChangeCardShowTokenVar",
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

// Line 4002: range 000000000DEB03DC-000000000DEB041D
void __cdecl data::ConfigGCGExecEffectChangeCardShowTokenVarFactory::ConfigGCGExecEffectChangeCardShowTokenVarFactory(
        data::ConfigGCGExecEffectChangeCardShowTokenVarFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectChangeCardShowTokenVarFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGExecEffectChangeCardShowTokenVarFactory = v2;
};

// Line 4010: range 000000000DEB0726-000000000DEB07B9
void __cdecl data::ConfigGCGExecEffectOnstageCharacterUseSkill::ConfigGCGExecEffectOnstageCharacterUseSkill(
        data::ConfigGCGExecEffectOnstageCharacterUseSkill *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectOnstageCharacterUseSkill + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skill_id, (((_BYTE)this + 44) & 7u) + 3);
  }
  this->skill_id = 0;
};

// Line 4010: range 000000000DEB0C2A-000000000DEB0D07
void __cdecl data::ConfigGCGExecEffectOnstageCharacterUseSkill::ConfigGCGExecEffectOnstageCharacterUseSkill(
        data::ConfigGCGExecEffectOnstageCharacterUseSkill *const this,
        const data::ConfigGCGExecEffectOnstageCharacterUseSkill *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t skill_id; // ecx
  char v5; // dl

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this, (const data::ConfigGCGEffect *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectOnstageCharacterUseSkill + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)a2 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->skill_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->skill_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->skill_id);
  }
  skill_id = a2->skill_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->skill_id, v3);
  }
  this->skill_id = skill_id;
};

// Line 4017: range 000000000DF5264A-000000000DF52674
void __cdecl data::ConfigGCGExecEffectOnstageCharacterUseSkill::~ConfigGCGExecEffectOnstageCharacterUseSkill(
        data::ConfigGCGExecEffectOnstageCharacterUseSkill *const this)
{
  data::ConfigGCGExecEffectOnstageCharacterUseSkill::~ConfigGCGExecEffectOnstageCharacterUseSkill(this);
  operator delete(this, 0x30uLL);
};

// Line 4017: range 000000000DF525FC-000000000DF52649
void __cdecl data::ConfigGCGExecEffectOnstageCharacterUseSkill::~ConfigGCGExecEffectOnstageCharacterUseSkill(
        data::ConfigGCGExecEffectOnstageCharacterUseSkill *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectOnstageCharacterUseSkill + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::ConfigGCGEffect::~ConfigGCGEffect((data::ConfigGCGEffect *const)this);
};

// Line 4022: range 000000000D74B904-000000000D74B914
const char *__cdecl data::ConfigGCGExecEffectOnstageCharacterUseSkill::getTypeName(
        const data::ConfigGCGExecEffectOnstageCharacterUseSkill *const this)
{
  return "ConfigGCGExecEffectOnstageCharacterUseSkill";
};

// Line 4023: range 000000000D74B916-000000000D74BAB2
int32_t __cdecl data::ConfigGCGExecEffectOnstageCharacterUseSkill::getHashNum(
        const data::ConfigGCGExecEffectOnstageCharacterUseSkill *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGExecEffectOnstageCharacterUseSkill::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGExecEffectOnstageCharacterUseSkill",
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

// Line 4039: range 000000000DEB0F50-000000000DEB0F91
void __cdecl data::ConfigGCGExecEffectOnstageCharacterUseSkillFactory::ConfigGCGExecEffectOnstageCharacterUseSkillFactory(
        data::ConfigGCGExecEffectOnstageCharacterUseSkillFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectOnstageCharacterUseSkillFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGExecEffectOnstageCharacterUseSkillFactory = v2;
};

// Line 4047: range 000000000DEB129A-000000000DEB13B1
void __cdecl data::ConfigGCGExecEffectDestroyCard::ConfigGCGExecEffectDestroyCard(
        data::ConfigGCGExecEffectDestroyCard *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectDestroyCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_id, v3);
  }
  this->card_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->camp_type, v3);
  }
  this->camp_type = CAMP_BOTH;
  if ( *(_BYTE *)(((unsigned __int64)&this->position >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->position >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->position, (((_BYTE)this + 52) & 7u) + 3);
  }
  this->position = CREATE_POSITION_ONSTAGE;
};

// Line 4047: range 000000000DEB183C-000000000DEB1A13
void __cdecl data::ConfigGCGExecEffectDestroyCard::ConfigGCGExecEffectDestroyCard(
        data::ConfigGCGExecEffectDestroyCard *const this,
        const data::ConfigGCGExecEffectDestroyCard *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t card_id; // ecx
  char v5; // dl
  data::GCGEffectCampType camp_type; // ecx
  char v7; // al
  __int64 v8; // rsi
  data::GCGEffectCreatePositionType position; // ecx
  char v10; // dl

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this, (const data::ConfigGCGEffect *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectDestroyCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)a2 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->card_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->card_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->card_id);
  }
  card_id = a2->card_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->card_id, v3);
  }
  this->card_id = card_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->camp_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->camp_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->camp_type);
  }
  camp_type = a2->camp_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->camp_type, v3);
  }
  this->camp_type = camp_type;
  v8 = (((_BYTE)a2 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->position >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->position >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->position);
  }
  position = a2->position;
  v10 = *(_BYTE *)(((unsigned __int64)&this->position >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->position, v8);
  }
  this->position = position;
};

// Line 4056: range 000000000DF52582-000000000DF525CF
void __cdecl data::ConfigGCGExecEffectDestroyCard::~ConfigGCGExecEffectDestroyCard(
        data::ConfigGCGExecEffectDestroyCard *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectDestroyCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::ConfigGCGEffect::~ConfigGCGEffect((data::ConfigGCGEffect *const)this);
};

// Line 4056: range 000000000DF525D0-000000000DF525FA
void __cdecl data::ConfigGCGExecEffectDestroyCard::~ConfigGCGExecEffectDestroyCard(
        data::ConfigGCGExecEffectDestroyCard *const this)
{
  data::ConfigGCGExecEffectDestroyCard::~ConfigGCGExecEffectDestroyCard(this);
  operator delete(this, 0x38uLL);
};

// Line 4061: range 000000000D74BAB4-000000000D74BAC4
const char *__cdecl data::ConfigGCGExecEffectDestroyCard::getTypeName(
        const data::ConfigGCGExecEffectDestroyCard *const this)
{
  return "ConfigGCGExecEffectDestroyCard";
};

// Line 4062: range 000000000D74BAC6-000000000D74BC62
int32_t __cdecl data::ConfigGCGExecEffectDestroyCard::getHashNum(
        const data::ConfigGCGExecEffectDestroyCard *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGExecEffectDestroyCard::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGExecEffectDestroyCard",
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

// Line 4078: range 000000000DEB1C5C-000000000DEB1C9D
void __cdecl data::ConfigGCGExecEffectDestroyCardFactory::ConfigGCGExecEffectDestroyCardFactory(
        data::ConfigGCGExecEffectDestroyCardFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectDestroyCardFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGExecEffectDestroyCardFactory = v2;
};

// Line 4086: range 000000000DEB1FA6-000000000DEB20BD
void __cdecl data::ConfigGCGExecEffectDestroyModifyCard::ConfigGCGExecEffectDestroyModifyCard(
        data::ConfigGCGExecEffectDestroyModifyCard *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectDestroyModifyCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_id, v3);
  }
  this->card_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->camp_type, v3);
  }
  this->camp_type = CAMP_BOTH;
  if ( *(_BYTE *)(((unsigned __int64)&this->choose_charater_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->choose_charater_type >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->choose_charater_type, (((_BYTE)this + 52) & 7u) + 3);
  }
  this->choose_charater_type = CHARACTER_ONSTAGE;
};

// Line 4086: range 000000000DEB2548-000000000DEB271F
void __cdecl data::ConfigGCGExecEffectDestroyModifyCard::ConfigGCGExecEffectDestroyModifyCard(
        data::ConfigGCGExecEffectDestroyModifyCard *const this,
        const data::ConfigGCGExecEffectDestroyModifyCard *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t card_id; // ecx
  char v5; // dl
  data::GCGEffectCampType camp_type; // ecx
  char v7; // al
  __int64 v8; // rsi
  data::GCGChooseTargetCharaterType choose_charater_type; // ecx
  char v10; // dl

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this, (const data::ConfigGCGEffect *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectDestroyModifyCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)a2 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->card_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->card_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->card_id);
  }
  card_id = a2->card_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->card_id, v3);
  }
  this->card_id = card_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->camp_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->camp_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->camp_type);
  }
  camp_type = a2->camp_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->camp_type, v3);
  }
  this->camp_type = camp_type;
  v8 = (((_BYTE)a2 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->choose_charater_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->choose_charater_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->choose_charater_type);
  }
  choose_charater_type = a2->choose_charater_type;
  v10 = *(_BYTE *)(((unsigned __int64)&this->choose_charater_type >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->choose_charater_type, v8);
  }
  this->choose_charater_type = choose_charater_type;
};

// Line 4095: range 000000000DF52556-000000000DF52580
void __cdecl data::ConfigGCGExecEffectDestroyModifyCard::~ConfigGCGExecEffectDestroyModifyCard(
        data::ConfigGCGExecEffectDestroyModifyCard *const this)
{
  data::ConfigGCGExecEffectDestroyModifyCard::~ConfigGCGExecEffectDestroyModifyCard(this);
  operator delete(this, 0x38uLL);
};

// Line 4095: range 000000000DF52508-000000000DF52555
void __cdecl data::ConfigGCGExecEffectDestroyModifyCard::~ConfigGCGExecEffectDestroyModifyCard(
        data::ConfigGCGExecEffectDestroyModifyCard *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectDestroyModifyCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::ConfigGCGEffect::~ConfigGCGEffect((data::ConfigGCGEffect *const)this);
};

// Line 4100: range 000000000D74BC64-000000000D74BC74
const char *__cdecl data::ConfigGCGExecEffectDestroyModifyCard::getTypeName(
        const data::ConfigGCGExecEffectDestroyModifyCard *const this)
{
  return "ConfigGCGExecEffectDestroyModifyCard";
};

// Line 4101: range 000000000D74BC76-000000000D74BE12
int32_t __cdecl data::ConfigGCGExecEffectDestroyModifyCard::getHashNum(
        const data::ConfigGCGExecEffectDestroyModifyCard *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGExecEffectDestroyModifyCard::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGExecEffectDestroyModifyCard",
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

// Line 4117: range 000000000DEB2968-000000000DEB29A9
void __cdecl data::ConfigGCGExecEffectDestroyModifyCardFactory::ConfigGCGExecEffectDestroyModifyCardFactory(
        data::ConfigGCGExecEffectDestroyModifyCardFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectDestroyModifyCardFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGExecEffectDestroyModifyCardFactory = v2;
};

// Line 4125: range 000000000DEB2CB2-000000000DEB2DC9
void __cdecl data::ConfigGCGExecEffectTransferModifyCard::ConfigGCGExecEffectTransferModifyCard(
        data::ConfigGCGExecEffectTransferModifyCard *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectTransferModifyCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_tag >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->effect_tag >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->effect_tag, v3);
  }
  this->effect_tag = GCG_TAG_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->source_choose_idx >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->source_choose_idx >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->source_choose_idx, v3);
  }
  this->source_choose_idx = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_choose_idx >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_choose_idx >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->target_choose_idx, (((_BYTE)this + 52) & 7u) + 3);
  }
  this->target_choose_idx = 0;
};

// Line 4125: range 000000000DEB3254-000000000DEB342B
void __cdecl data::ConfigGCGExecEffectTransferModifyCard::ConfigGCGExecEffectTransferModifyCard(
        data::ConfigGCGExecEffectTransferModifyCard *const this,
        const data::ConfigGCGExecEffectTransferModifyCard *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GCGTagType effect_tag; // ecx
  char v5; // dl
  uint32_t source_choose_idx; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t target_choose_idx; // ecx
  char v10; // dl

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this, (const data::ConfigGCGEffect *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectTransferModifyCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)a2 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->effect_tag >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->effect_tag >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->effect_tag);
  }
  effect_tag = a2->effect_tag;
  v5 = *(_BYTE *)(((unsigned __int64)&this->effect_tag >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->effect_tag, v3);
  }
  this->effect_tag = effect_tag;
  if ( *(_BYTE *)(((unsigned __int64)&a2->source_choose_idx >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->source_choose_idx >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->source_choose_idx);
  }
  source_choose_idx = a2->source_choose_idx;
  v7 = *(_BYTE *)(((unsigned __int64)&this->source_choose_idx >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->source_choose_idx, v3);
  }
  this->source_choose_idx = source_choose_idx;
  v8 = (((_BYTE)a2 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->target_choose_idx >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->target_choose_idx >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->target_choose_idx);
  }
  target_choose_idx = a2->target_choose_idx;
  v10 = *(_BYTE *)(((unsigned __int64)&this->target_choose_idx >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->target_choose_idx, v8);
  }
  this->target_choose_idx = target_choose_idx;
};

// Line 4134: range 000000000DF524DC-000000000DF52506
void __cdecl data::ConfigGCGExecEffectTransferModifyCard::~ConfigGCGExecEffectTransferModifyCard(
        data::ConfigGCGExecEffectTransferModifyCard *const this)
{
  data::ConfigGCGExecEffectTransferModifyCard::~ConfigGCGExecEffectTransferModifyCard(this);
  operator delete(this, 0x38uLL);
};

// Line 4134: range 000000000DF5248E-000000000DF524DB
void __cdecl data::ConfigGCGExecEffectTransferModifyCard::~ConfigGCGExecEffectTransferModifyCard(
        data::ConfigGCGExecEffectTransferModifyCard *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectTransferModifyCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::ConfigGCGEffect::~ConfigGCGEffect((data::ConfigGCGEffect *const)this);
};

// Line 4139: range 000000000D74BE14-000000000D74BE24
const char *__cdecl data::ConfigGCGExecEffectTransferModifyCard::getTypeName(
        const data::ConfigGCGExecEffectTransferModifyCard *const this)
{
  return "ConfigGCGExecEffectTransferModifyCard";
};

// Line 4140: range 000000000D74BE26-000000000D74BFC2
int32_t __cdecl data::ConfigGCGExecEffectTransferModifyCard::getHashNum(
        const data::ConfigGCGExecEffectTransferModifyCard *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGExecEffectTransferModifyCard::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGExecEffectTransferModifyCard",
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

// Line 4156: range 000000000DEB3674-000000000DEB36B5
void __cdecl data::ConfigGCGExecEffectTransferModifyCardFactory::ConfigGCGExecEffectTransferModifyCardFactory(
        data::ConfigGCGExecEffectTransferModifyCardFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGExecEffectTransferModifyCardFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGExecEffectTransferModifyCardFactory = v2;
};

// Line 4164: range 000000000DEB39BE-000000000DEB3B94
void __cdecl data::ConfigGCGEffectAddShield::ConfigGCGEffectAddShield(data::ConfigGCGEffectAddShield *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectAddShield + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->token_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->token_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->token_type, v3);
  }
  this->token_type = GCG_TOKEN_NONE;
  if ( *(char *)(((unsigned __int64)&this->is_ignore_shield_cost >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_ignore_shield_cost, v3, &this->is_ignore_shield_cost);
  this->is_ignore_shield_cost = 0;
  v4 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->deduction_per_shield >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->deduction_per_shield >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->deduction_per_shield, v4);
  }
  this->deduction_per_shield = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_one_times >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->limit_one_times >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->limit_one_times, v4);
  }
  this->limit_one_times = 0;
  v5 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_damage_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_damage_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->min_damage_limit, v5);
  }
  this->min_damage_limit = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_element_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->effect_element_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->effect_element_type, v5);
  }
  this->effect_element_type = DAMAGE_ELEMENT_ANY;
};

// Line 4164: range 000000000DEB4046-000000000DEB438D
void __cdecl data::ConfigGCGEffectAddShield::ConfigGCGEffectAddShield(
        data::ConfigGCGEffectAddShield *const this,
        const data::ConfigGCGEffectAddShield *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GCGTokenType token_type; // ecx
  char v5; // dl
  bool is_ignore_shield_cost; // cl
  char v7; // al
  __int64 v8; // rsi
  uint32_t deduction_per_shield; // ecx
  char v10; // dl
  uint32_t limit_one_times; // ecx
  char v12; // al
  __int64 v13; // rsi
  uint32_t min_damage_limit; // ecx
  char v15; // dl
  data::GCGEffectDamageElementType effect_element_type; // ecx
  char v17; // al

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this, (const data::ConfigGCGEffect *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectAddShield + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)a2 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->token_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->token_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->token_type);
  }
  token_type = a2->token_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->token_type >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v5 != 0;
  if ( v5 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v5 )
    __asan_report_store4(&this->token_type, v3);
  this->token_type = token_type;
  if ( *(char *)(((unsigned __int64)&a2->is_ignore_shield_cost >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_ignore_shield_cost, v3, &a2->is_ignore_shield_cost);
  is_ignore_shield_cost = a2->is_ignore_shield_cost;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_ignore_shield_cost >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store1(&this->is_ignore_shield_cost, v3, &this->is_ignore_shield_cost);
  }
  this->is_ignore_shield_cost = is_ignore_shield_cost;
  v8 = (((_BYTE)a2 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->deduction_per_shield >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->deduction_per_shield >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->deduction_per_shield);
  }
  deduction_per_shield = a2->deduction_per_shield;
  v10 = *(_BYTE *)(((unsigned __int64)&this->deduction_per_shield >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->deduction_per_shield, v8);
  }
  this->deduction_per_shield = deduction_per_shield;
  if ( *(_BYTE *)(((unsigned __int64)&a2->limit_one_times >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->limit_one_times >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->limit_one_times);
  }
  limit_one_times = a2->limit_one_times;
  v12 = *(_BYTE *)(((unsigned __int64)&this->limit_one_times >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(v8) = v12 != 0;
    __asan_report_store4(&this->limit_one_times, v8);
  }
  this->limit_one_times = limit_one_times;
  v13 = (((_BYTE)a2 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->min_damage_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->min_damage_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->min_damage_limit);
  }
  min_damage_limit = a2->min_damage_limit;
  v15 = *(_BYTE *)(((unsigned __int64)&this->min_damage_limit >> 3) + 0x7FFF8000);
  if ( v15 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v15 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->min_damage_limit, v13);
  }
  this->min_damage_limit = min_damage_limit;
  if ( *(_BYTE *)(((unsigned __int64)&a2->effect_element_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->effect_element_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->effect_element_type);
  }
  effect_element_type = a2->effect_element_type;
  v17 = *(_BYTE *)(((unsigned __int64)&this->effect_element_type >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(v13) = v17 != 0;
    __asan_report_store4(&this->effect_element_type, v13);
  }
  this->effect_element_type = effect_element_type;
};

// Line 4176: range 000000000DF52414-000000000DF52461
void __cdecl data::ConfigGCGEffectAddShield::~ConfigGCGEffectAddShield(data::ConfigGCGEffectAddShield *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectAddShield + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::ConfigGCGEffect::~ConfigGCGEffect((data::ConfigGCGEffect *const)this);
};

// Line 4176: range 000000000DF52462-000000000DF5248C
void __cdecl data::ConfigGCGEffectAddShield::~ConfigGCGEffectAddShield(data::ConfigGCGEffectAddShield *const this)
{
  data::ConfigGCGEffectAddShield::~ConfigGCGEffectAddShield(this);
  operator delete(this, 0x48uLL);
};

// Line 4181: range 000000000D74BFC4-000000000D74BFD4
const char *__cdecl data::ConfigGCGEffectAddShield::getTypeName(const data::ConfigGCGEffectAddShield *const this)
{
  return "ConfigGCGEffectAddShield";
};

// Line 4182: range 000000000D74BFD6-000000000D74C172
int32_t __cdecl data::ConfigGCGEffectAddShield::getHashNum(const data::ConfigGCGEffectAddShield *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGEffectAddShield::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGEffectAddShield",
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

// Line 4198: range 000000000DEB45D6-000000000DEB4617
void __cdecl data::ConfigGCGEffectAddShieldFactory::ConfigGCGEffectAddShieldFactory(
        data::ConfigGCGEffectAddShieldFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectAddShieldFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffectAddShieldFactory = v2;
};

// Line 4206: range 000000000DEB4920-000000000DEB49B3
void __cdecl data::ConfigGCGEffectAttachPhysicDamageToElement::ConfigGCGEffectAttachPhysicDamageToElement(
        data::ConfigGCGEffectAttachPhysicDamageToElement *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectAttachPhysicDamageToElement + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->attached_element_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->attached_element_type >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->attached_element_type, (((_BYTE)this + 44) & 7u) + 3);
  }
  this->attached_element_type = GCG_ELEMENT_PHYSIC;
};

// Line 4206: range 000000000DEB4E24-000000000DEB4F01
void __cdecl data::ConfigGCGEffectAttachPhysicDamageToElement::ConfigGCGEffectAttachPhysicDamageToElement(
        data::ConfigGCGEffectAttachPhysicDamageToElement *const this,
        const data::ConfigGCGEffectAttachPhysicDamageToElement *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GCGEffectElementType attached_element_type; // ecx
  char v5; // dl

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this, (const data::ConfigGCGEffect *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectAttachPhysicDamageToElement + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)a2 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->attached_element_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->attached_element_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->attached_element_type);
  }
  attached_element_type = a2->attached_element_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->attached_element_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->attached_element_type, v3);
  }
  this->attached_element_type = attached_element_type;
};

// Line 4213: range 000000000DF5239A-000000000DF523E7
void __cdecl data::ConfigGCGEffectAttachPhysicDamageToElement::~ConfigGCGEffectAttachPhysicDamageToElement(
        data::ConfigGCGEffectAttachPhysicDamageToElement *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectAttachPhysicDamageToElement + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::ConfigGCGEffect::~ConfigGCGEffect((data::ConfigGCGEffect *const)this);
};

// Line 4213: range 000000000DF523E8-000000000DF52412
void __cdecl data::ConfigGCGEffectAttachPhysicDamageToElement::~ConfigGCGEffectAttachPhysicDamageToElement(
        data::ConfigGCGEffectAttachPhysicDamageToElement *const this)
{
  data::ConfigGCGEffectAttachPhysicDamageToElement::~ConfigGCGEffectAttachPhysicDamageToElement(this);
  operator delete(this, 0x30uLL);
};

// Line 4218: range 000000000D74C174-000000000D74C184
const char *__cdecl data::ConfigGCGEffectAttachPhysicDamageToElement::getTypeName(
        const data::ConfigGCGEffectAttachPhysicDamageToElement *const this)
{
  return "ConfigGCGEffectAttachPhysicDamageToElement";
};

// Line 4219: range 000000000D74C186-000000000D74C322
int32_t __cdecl data::ConfigGCGEffectAttachPhysicDamageToElement::getHashNum(
        const data::ConfigGCGEffectAttachPhysicDamageToElement *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGEffectAttachPhysicDamageToElement::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGEffectAttachPhysicDamageToElement",
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

// Line 4235: range 000000000DEB514A-000000000DEB518B
void __cdecl data::ConfigGCGEffectAttachPhysicDamageToElementFactory::ConfigGCGEffectAttachPhysicDamageToElementFactory(
        data::ConfigGCGEffectAttachPhysicDamageToElementFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectAttachPhysicDamageToElementFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffectAttachPhysicDamageToElementFactory = v2;
};

// Line 4243: range 000000000DEB5494-000000000DEB5565
void __cdecl data::ConfigGCGEffectFixRerollDiceToSpecialType::ConfigGCGEffectFixRerollDiceToSpecialType(
        data::ConfigGCGEffectFixRerollDiceToSpecialType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectFixRerollDiceToSpecialType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->fixed_dice_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fixed_dice_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fixed_dice_type, v3);
  }
  this->fixed_dice_type = EFFECT_DICE_ANY;
  if ( *(_BYTE *)(((unsigned __int64)&this->fixed_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fixed_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fixed_num, v3);
  }
  this->fixed_num = 0;
};

// Line 4243: range 000000000DEB59F0-000000000DEB5B42
void __cdecl data::ConfigGCGEffectFixRerollDiceToSpecialType::ConfigGCGEffectFixRerollDiceToSpecialType(
        data::ConfigGCGEffectFixRerollDiceToSpecialType *const this,
        const data::ConfigGCGEffectFixRerollDiceToSpecialType *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GCGEffectDiceType fixed_dice_type; // ecx
  char v5; // dl
  uint32_t fixed_num; // ecx
  char v7; // al

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this, (const data::ConfigGCGEffect *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectFixRerollDiceToSpecialType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)a2 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->fixed_dice_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->fixed_dice_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->fixed_dice_type);
  }
  fixed_dice_type = a2->fixed_dice_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->fixed_dice_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->fixed_dice_type, v3);
  }
  this->fixed_dice_type = fixed_dice_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->fixed_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->fixed_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->fixed_num);
  }
  fixed_num = a2->fixed_num;
  v7 = *(_BYTE *)(((unsigned __int64)&this->fixed_num >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->fixed_num, v3);
  }
  this->fixed_num = fixed_num;
};

// Line 4251: range 000000000DF52320-000000000DF5236D
void __cdecl data::ConfigGCGEffectFixRerollDiceToSpecialType::~ConfigGCGEffectFixRerollDiceToSpecialType(
        data::ConfigGCGEffectFixRerollDiceToSpecialType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectFixRerollDiceToSpecialType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::ConfigGCGEffect::~ConfigGCGEffect((data::ConfigGCGEffect *const)this);
};

// Line 4251: range 000000000DF5236E-000000000DF52398
void __cdecl data::ConfigGCGEffectFixRerollDiceToSpecialType::~ConfigGCGEffectFixRerollDiceToSpecialType(
        data::ConfigGCGEffectFixRerollDiceToSpecialType *const this)
{
  data::ConfigGCGEffectFixRerollDiceToSpecialType::~ConfigGCGEffectFixRerollDiceToSpecialType(this);
  operator delete(this, 0x38uLL);
};

// Line 4256: range 000000000D74C324-000000000D74C334
const char *__cdecl data::ConfigGCGEffectFixRerollDiceToSpecialType::getTypeName(
        const data::ConfigGCGEffectFixRerollDiceToSpecialType *const this)
{
  return "ConfigGCGEffectFixRerollDiceToSpecialType";
};

// Line 4257: range 000000000D74C336-000000000D74C4D2
int32_t __cdecl data::ConfigGCGEffectFixRerollDiceToSpecialType::getHashNum(
        const data::ConfigGCGEffectFixRerollDiceToSpecialType *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGEffectFixRerollDiceToSpecialType::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGEffectFixRerollDiceToSpecialType",
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

// Line 4273: range 000000000DEB5D8C-000000000DEB5DCD
void __cdecl data::ConfigGCGEffectFixRerollDiceToSpecialTypeFactory::ConfigGCGEffectFixRerollDiceToSpecialTypeFactory(
        data::ConfigGCGEffectFixRerollDiceToSpecialTypeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectFixRerollDiceToSpecialTypeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffectFixRerollDiceToSpecialTypeFactory = v2;
};

// Line 4295: range 000000000DEB6236-000000000DEB6307
void __cdecl data::ConfigGCGEffectSkillUseCostRevise::ConfigGCGEffectSkillUseCostRevise(
        data::ConfigGCGEffectSkillUseCostRevise *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectSkillUseCostRevise + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cost_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cost_type, v3);
  }
  this->cost_type = GCG_COST_INVALID_0;
  if ( *(_BYTE *)(((unsigned __int64)&this->revise_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->revise_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->revise_num, v3);
  }
  this->revise_num = 0;
};

// Line 4295: range 000000000DEB6792-000000000DEB68E4
void __cdecl data::ConfigGCGEffectSkillUseCostRevise::ConfigGCGEffectSkillUseCostRevise(
        data::ConfigGCGEffectSkillUseCostRevise *const this,
        const data::ConfigGCGEffectSkillUseCostRevise *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GCGEffectCostType cost_type; // ecx
  char v5; // dl
  int32_t revise_num; // ecx
  char v7; // al

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this, (const data::ConfigGCGEffect *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectSkillUseCostRevise + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)a2 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cost_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->cost_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->cost_type);
  }
  cost_type = a2->cost_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->cost_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->cost_type, v3);
  }
  this->cost_type = cost_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->revise_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->revise_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->revise_num);
  }
  revise_num = a2->revise_num;
  v7 = *(_BYTE *)(((unsigned __int64)&this->revise_num >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->revise_num, v3);
  }
  this->revise_num = revise_num;
};

// Line 4303: range 000000000DF522A6-000000000DF522F3
void __cdecl data::ConfigGCGEffectSkillUseCostRevise::~ConfigGCGEffectSkillUseCostRevise(
        data::ConfigGCGEffectSkillUseCostRevise *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectSkillUseCostRevise + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::ConfigGCGEffect::~ConfigGCGEffect((data::ConfigGCGEffect *const)this);
};

// Line 4303: range 000000000DF522F4-000000000DF5231E
void __cdecl data::ConfigGCGEffectSkillUseCostRevise::~ConfigGCGEffectSkillUseCostRevise(
        data::ConfigGCGEffectSkillUseCostRevise *const this)
{
  data::ConfigGCGEffectSkillUseCostRevise::~ConfigGCGEffectSkillUseCostRevise(this);
  operator delete(this, 0x38uLL);
};

// Line 4308: range 000000000D74C4D4-000000000D74C4E4
const char *__cdecl data::ConfigGCGEffectSkillUseCostRevise::getTypeName(
        const data::ConfigGCGEffectSkillUseCostRevise *const this)
{
  return "ConfigGCGEffectSkillUseCostRevise";
};

// Line 4309: range 000000000D74C4E6-000000000D74C682
int32_t __cdecl data::ConfigGCGEffectSkillUseCostRevise::getHashNum(
        const data::ConfigGCGEffectSkillUseCostRevise *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGEffectSkillUseCostRevise::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGEffectSkillUseCostRevise",
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

// Line 4325: range 000000000DEB6B2E-000000000DEB6B6F
void __cdecl data::ConfigGCGEffectSkillUseCostReviseFactory::ConfigGCGEffectSkillUseCostReviseFactory(
        data::ConfigGCGEffectSkillUseCostReviseFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectSkillUseCostReviseFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffectSkillUseCostReviseFactory = v2;
};

// Line 4333: range 000000000DEB6E78-000000000DEB6F49
void __cdecl data::ConfigGCGEffectPlayCardCostRevise::ConfigGCGEffectPlayCardCostRevise(
        data::ConfigGCGEffectPlayCardCostRevise *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectPlayCardCostRevise + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cost_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cost_type, v3);
  }
  this->cost_type = GCG_COST_INVALID_0;
  if ( *(_BYTE *)(((unsigned __int64)&this->revise_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->revise_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->revise_num, v3);
  }
  this->revise_num = 0;
};

// Line 4333: range 000000000DEB73D4-000000000DEB7526
void __cdecl data::ConfigGCGEffectPlayCardCostRevise::ConfigGCGEffectPlayCardCostRevise(
        data::ConfigGCGEffectPlayCardCostRevise *const this,
        const data::ConfigGCGEffectPlayCardCostRevise *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GCGEffectCostType cost_type; // ecx
  char v5; // dl
  int32_t revise_num; // ecx
  char v7; // al

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this, (const data::ConfigGCGEffect *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectPlayCardCostRevise + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)a2 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cost_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->cost_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->cost_type);
  }
  cost_type = a2->cost_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->cost_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->cost_type, v3);
  }
  this->cost_type = cost_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->revise_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->revise_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->revise_num);
  }
  revise_num = a2->revise_num;
  v7 = *(_BYTE *)(((unsigned __int64)&this->revise_num >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->revise_num, v3);
  }
  this->revise_num = revise_num;
};

// Line 4341: range 000000000DF5227A-000000000DF522A4
void __cdecl data::ConfigGCGEffectPlayCardCostRevise::~ConfigGCGEffectPlayCardCostRevise(
        data::ConfigGCGEffectPlayCardCostRevise *const this)
{
  data::ConfigGCGEffectPlayCardCostRevise::~ConfigGCGEffectPlayCardCostRevise(this);
  operator delete(this, 0x38uLL);
};

// Line 4341: range 000000000DF5222C-000000000DF52279
void __cdecl data::ConfigGCGEffectPlayCardCostRevise::~ConfigGCGEffectPlayCardCostRevise(
        data::ConfigGCGEffectPlayCardCostRevise *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectPlayCardCostRevise + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::ConfigGCGEffect::~ConfigGCGEffect((data::ConfigGCGEffect *const)this);
};

// Line 4346: range 000000000D74C684-000000000D74C694
const char *__cdecl data::ConfigGCGEffectPlayCardCostRevise::getTypeName(
        const data::ConfigGCGEffectPlayCardCostRevise *const this)
{
  return "ConfigGCGEffectPlayCardCostRevise";
};

// Line 4347: range 000000000D74C696-000000000D74C832
int32_t __cdecl data::ConfigGCGEffectPlayCardCostRevise::getHashNum(
        const data::ConfigGCGEffectPlayCardCostRevise *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGEffectPlayCardCostRevise::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGEffectPlayCardCostRevise",
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

// Line 4363: range 000000000DEB7770-000000000DEB77B1
void __cdecl data::ConfigGCGEffectPlayCardCostReviseFactory::ConfigGCGEffectPlayCardCostReviseFactory(
        data::ConfigGCGEffectPlayCardCostReviseFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectPlayCardCostReviseFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffectPlayCardCostReviseFactory = v2;
};

// Line 4371: range 000000000DEB7ABA-000000000DEB7BD1
void __cdecl data::ConfigGCGEffectPayByCardTag::ConfigGCGEffectPayByCardTag(
        data::ConfigGCGEffectPayByCardTag *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectPayByCardTag + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_tag >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->effect_tag >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->effect_tag, v3);
  }
  this->effect_tag = GCG_TAG_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cost_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cost_type, v3);
  }
  this->cost_type = GCG_COST_INVALID_0;
  if ( *(_BYTE *)(((unsigned __int64)&this->token_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->token_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->token_type, (((_BYTE)this + 52) & 7u) + 3);
  }
  this->token_type = GCG_TOKEN_NONE;
};

// Line 4371: range 000000000DEB805C-000000000DEB8233
void __cdecl data::ConfigGCGEffectPayByCardTag::ConfigGCGEffectPayByCardTag(
        data::ConfigGCGEffectPayByCardTag *const this,
        const data::ConfigGCGEffectPayByCardTag *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GCGTagType effect_tag; // ecx
  char v5; // dl
  data::GCGEffectCostType cost_type; // ecx
  char v7; // al
  __int64 v8; // rsi
  data::GCGTokenType token_type; // ecx
  char v10; // dl

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this, (const data::ConfigGCGEffect *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectPayByCardTag + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)a2 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->effect_tag >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->effect_tag >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->effect_tag);
  }
  effect_tag = a2->effect_tag;
  v5 = *(_BYTE *)(((unsigned __int64)&this->effect_tag >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->effect_tag, v3);
  }
  this->effect_tag = effect_tag;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cost_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cost_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cost_type);
  }
  cost_type = a2->cost_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->cost_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->cost_type, v3);
  }
  this->cost_type = cost_type;
  v8 = (((_BYTE)a2 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->token_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->token_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->token_type);
  }
  token_type = a2->token_type;
  v10 = *(_BYTE *)(((unsigned __int64)&this->token_type >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->token_type, v8);
  }
  this->token_type = token_type;
};

// Line 4380: range 000000000DF52200-000000000DF5222A
void __cdecl data::ConfigGCGEffectPayByCardTag::~ConfigGCGEffectPayByCardTag(
        data::ConfigGCGEffectPayByCardTag *const this)
{
  data::ConfigGCGEffectPayByCardTag::~ConfigGCGEffectPayByCardTag(this);
  operator delete(this, 0x38uLL);
};

// Line 4380: range 000000000DF521B2-000000000DF521FF
void __cdecl data::ConfigGCGEffectPayByCardTag::~ConfigGCGEffectPayByCardTag(
        data::ConfigGCGEffectPayByCardTag *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectPayByCardTag + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::ConfigGCGEffect::~ConfigGCGEffect((data::ConfigGCGEffect *const)this);
};

// Line 4385: range 000000000D74C834-000000000D74C844
const char *__cdecl data::ConfigGCGEffectPayByCardTag::getTypeName(const data::ConfigGCGEffectPayByCardTag *const this)
{
  return "ConfigGCGEffectPayByCardTag";
};

// Line 4386: range 000000000D74C846-000000000D74C9E2
int32_t __cdecl data::ConfigGCGEffectPayByCardTag::getHashNum(const data::ConfigGCGEffectPayByCardTag *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGEffectPayByCardTag::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGEffectPayByCardTag",
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

// Line 4402: range 000000000DEB847C-000000000DEB84BD
void __cdecl data::ConfigGCGEffectPayByCardTagFactory::ConfigGCGEffectPayByCardTagFactory(
        data::ConfigGCGEffectPayByCardTagFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectPayByCardTagFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffectPayByCardTagFactory = v2;
};

// Line 4410: range 000000000DEB87C6-000000000DEB8897
void __cdecl data::ConfigGCGEffectChangeCharacterReviseCost::ConfigGCGEffectChangeCharacterReviseCost(
        data::ConfigGCGEffectChangeCharacterReviseCost *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectChangeCharacterReviseCost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_revise >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cost_revise >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cost_revise, v3);
  }
  this->cost_revise = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cost_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cost_type, v3);
  }
  this->cost_type = GCG_COST_INVALID_0;
};

// Line 4410: range 000000000DEB8D22-000000000DEB8E74
void __cdecl data::ConfigGCGEffectChangeCharacterReviseCost::ConfigGCGEffectChangeCharacterReviseCost(
        data::ConfigGCGEffectChangeCharacterReviseCost *const this,
        const data::ConfigGCGEffectChangeCharacterReviseCost *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  int32_t cost_revise; // ecx
  char v5; // dl
  data::GCGEffectCostType cost_type; // ecx
  char v7; // al

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this, (const data::ConfigGCGEffect *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectChangeCharacterReviseCost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)a2 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cost_revise >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->cost_revise >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->cost_revise);
  }
  cost_revise = a2->cost_revise;
  v5 = *(_BYTE *)(((unsigned __int64)&this->cost_revise >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->cost_revise, v3);
  }
  this->cost_revise = cost_revise;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cost_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cost_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cost_type);
  }
  cost_type = a2->cost_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->cost_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->cost_type, v3);
  }
  this->cost_type = cost_type;
};

// Line 4418: range 000000000DF52186-000000000DF521B0
void __cdecl data::ConfigGCGEffectChangeCharacterReviseCost::~ConfigGCGEffectChangeCharacterReviseCost(
        data::ConfigGCGEffectChangeCharacterReviseCost *const this)
{
  data::ConfigGCGEffectChangeCharacterReviseCost::~ConfigGCGEffectChangeCharacterReviseCost(this);
  operator delete(this, 0x38uLL);
};

// Line 4418: range 000000000DF52138-000000000DF52185
void __cdecl data::ConfigGCGEffectChangeCharacterReviseCost::~ConfigGCGEffectChangeCharacterReviseCost(
        data::ConfigGCGEffectChangeCharacterReviseCost *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectChangeCharacterReviseCost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::ConfigGCGEffect::~ConfigGCGEffect((data::ConfigGCGEffect *const)this);
};

// Line 4423: range 000000000D74C9E4-000000000D74C9F4
const char *__cdecl data::ConfigGCGEffectChangeCharacterReviseCost::getTypeName(
        const data::ConfigGCGEffectChangeCharacterReviseCost *const this)
{
  return "ConfigGCGEffectChangeCharacterReviseCost";
};

// Line 4424: range 000000000D74C9F6-000000000D74CB92
int32_t __cdecl data::ConfigGCGEffectChangeCharacterReviseCost::getHashNum(
        const data::ConfigGCGEffectChangeCharacterReviseCost *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGEffectChangeCharacterReviseCost::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGEffectChangeCharacterReviseCost",
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

// Line 4440: range 000000000DEB90BE-000000000DEB90FF
void __cdecl data::ConfigGCGEffectChangeCharacterReviseCostFactory::ConfigGCGEffectChangeCharacterReviseCostFactory(
        data::ConfigGCGEffectChangeCharacterReviseCostFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectChangeCharacterReviseCostFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffectChangeCharacterReviseCostFactory = v2;
};

// Line 4448: range 000000000DEB9408-000000000DEB94D9
void __cdecl data::ConfigGCGEffectChangeCharacterIncreCost::ConfigGCGEffectChangeCharacterIncreCost(
        data::ConfigGCGEffectChangeCharacterIncreCost *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectChangeCharacterIncreCost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_revise >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cost_revise >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cost_revise, v3);
  }
  this->cost_revise = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cost_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cost_type, v3);
  }
  this->cost_type = GCG_COST_INVALID_0;
};

// Line 4448: range 000000000DEB9964-000000000DEB9AB6
void __cdecl data::ConfigGCGEffectChangeCharacterIncreCost::ConfigGCGEffectChangeCharacterIncreCost(
        data::ConfigGCGEffectChangeCharacterIncreCost *const this,
        const data::ConfigGCGEffectChangeCharacterIncreCost *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t cost_revise; // ecx
  char v5; // dl
  data::GCGEffectCostType cost_type; // ecx
  char v7; // al

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this, (const data::ConfigGCGEffect *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectChangeCharacterIncreCost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)a2 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cost_revise >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->cost_revise >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->cost_revise);
  }
  cost_revise = a2->cost_revise;
  v5 = *(_BYTE *)(((unsigned __int64)&this->cost_revise >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->cost_revise, v3);
  }
  this->cost_revise = cost_revise;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cost_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cost_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cost_type);
  }
  cost_type = a2->cost_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->cost_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->cost_type, v3);
  }
  this->cost_type = cost_type;
};

// Line 4456: range 000000000DF520BE-000000000DF5210B
void __cdecl data::ConfigGCGEffectChangeCharacterIncreCost::~ConfigGCGEffectChangeCharacterIncreCost(
        data::ConfigGCGEffectChangeCharacterIncreCost *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectChangeCharacterIncreCost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::ConfigGCGEffect::~ConfigGCGEffect((data::ConfigGCGEffect *const)this);
};

// Line 4456: range 000000000DF5210C-000000000DF52136
void __cdecl data::ConfigGCGEffectChangeCharacterIncreCost::~ConfigGCGEffectChangeCharacterIncreCost(
        data::ConfigGCGEffectChangeCharacterIncreCost *const this)
{
  data::ConfigGCGEffectChangeCharacterIncreCost::~ConfigGCGEffectChangeCharacterIncreCost(this);
  operator delete(this, 0x38uLL);
};

// Line 4461: range 000000000D74CB94-000000000D74CBA4
const char *__cdecl data::ConfigGCGEffectChangeCharacterIncreCost::getTypeName(
        const data::ConfigGCGEffectChangeCharacterIncreCost *const this)
{
  return "ConfigGCGEffectChangeCharacterIncreCost";
};

// Line 4462: range 000000000D74CBA6-000000000D74CD42
int32_t __cdecl data::ConfigGCGEffectChangeCharacterIncreCost::getHashNum(
        const data::ConfigGCGEffectChangeCharacterIncreCost *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGEffectChangeCharacterIncreCost::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGEffectChangeCharacterIncreCost",
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

// Line 4478: range 000000000DEB9D00-000000000DEB9D41
void __cdecl data::ConfigGCGEffectChangeCharacterIncreCostFactory::ConfigGCGEffectChangeCharacterIncreCostFactory(
        data::ConfigGCGEffectChangeCharacterIncreCostFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectChangeCharacterIncreCostFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffectChangeCharacterIncreCostFactory = v2;
};

// Line 4486: range 000000000DEBA04A-000000000DEBA11B
void __cdecl data::ConfigGCGEffectOpponentChangeCharacterIncreCost::ConfigGCGEffectOpponentChangeCharacterIncreCost(
        data::ConfigGCGEffectOpponentChangeCharacterIncreCost *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectOpponentChangeCharacterIncreCost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_revise >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cost_revise >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cost_revise, v3);
  }
  this->cost_revise = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cost_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cost_type, v3);
  }
  this->cost_type = GCG_COST_INVALID_0;
};

// Line 4486: range 000000000DEBA5A6-000000000DEBA6F8
void __cdecl data::ConfigGCGEffectOpponentChangeCharacterIncreCost::ConfigGCGEffectOpponentChangeCharacterIncreCost(
        data::ConfigGCGEffectOpponentChangeCharacterIncreCost *const this,
        const data::ConfigGCGEffectOpponentChangeCharacterIncreCost *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t cost_revise; // ecx
  char v5; // dl
  data::GCGEffectCostType cost_type; // ecx
  char v7; // al

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this, (const data::ConfigGCGEffect *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectOpponentChangeCharacterIncreCost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)a2 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cost_revise >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->cost_revise >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->cost_revise);
  }
  cost_revise = a2->cost_revise;
  v5 = *(_BYTE *)(((unsigned __int64)&this->cost_revise >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->cost_revise, v3);
  }
  this->cost_revise = cost_revise;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cost_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cost_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cost_type);
  }
  cost_type = a2->cost_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->cost_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->cost_type, v3);
  }
  this->cost_type = cost_type;
};

// Line 4494: range 000000000DF52092-000000000DF520BC
void __cdecl data::ConfigGCGEffectOpponentChangeCharacterIncreCost::~ConfigGCGEffectOpponentChangeCharacterIncreCost(
        data::ConfigGCGEffectOpponentChangeCharacterIncreCost *const this)
{
  data::ConfigGCGEffectOpponentChangeCharacterIncreCost::~ConfigGCGEffectOpponentChangeCharacterIncreCost(this);
  operator delete(this, 0x38uLL);
};

// Line 4494: range 000000000DF52044-000000000DF52091
void __cdecl data::ConfigGCGEffectOpponentChangeCharacterIncreCost::~ConfigGCGEffectOpponentChangeCharacterIncreCost(
        data::ConfigGCGEffectOpponentChangeCharacterIncreCost *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectOpponentChangeCharacterIncreCost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::ConfigGCGEffect::~ConfigGCGEffect((data::ConfigGCGEffect *const)this);
};

// Line 4499: range 000000000D74CD44-000000000D74CD54
const char *__cdecl data::ConfigGCGEffectOpponentChangeCharacterIncreCost::getTypeName(
        const data::ConfigGCGEffectOpponentChangeCharacterIncreCost *const this)
{
  return "ConfigGCGEffectOpponentChangeCharacterIncreCost";
};

// Line 4500: range 000000000D74CD56-000000000D74CEF2
int32_t __cdecl data::ConfigGCGEffectOpponentChangeCharacterIncreCost::getHashNum(
        const data::ConfigGCGEffectOpponentChangeCharacterIncreCost *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGEffectOpponentChangeCharacterIncreCost::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGEffectOpponentChangeCharacterIncreCost",
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

// Line 4516: range 000000000DEBA942-000000000DEBA983
void __cdecl data::ConfigGCGEffectOpponentChangeCharacterIncreCostFactory::ConfigGCGEffectOpponentChangeCharacterIncreCostFactory(
        data::ConfigGCGEffectOpponentChangeCharacterIncreCostFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectOpponentChangeCharacterIncreCostFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffectOpponentChangeCharacterIncreCostFactory = v2;
};

// Line 4524: range 000000000DEBAC8C-000000000DEBAD1F
void __cdecl data::ConfigGCGEffectRerollReviseCost::ConfigGCGEffectRerollReviseCost(
        data::ConfigGCGEffectRerollReviseCost *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectRerollReviseCost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_revise >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cost_revise >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cost_revise, (((_BYTE)this + 44) & 7u) + 3);
  }
  this->cost_revise = 0;
};

// Line 4524: range 000000000DEBB190-000000000DEBB26D
void __cdecl data::ConfigGCGEffectRerollReviseCost::ConfigGCGEffectRerollReviseCost(
        data::ConfigGCGEffectRerollReviseCost *const this,
        const data::ConfigGCGEffectRerollReviseCost *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  int32_t cost_revise; // ecx
  char v5; // dl

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this, (const data::ConfigGCGEffect *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectRerollReviseCost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)a2 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cost_revise >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->cost_revise >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->cost_revise);
  }
  cost_revise = a2->cost_revise;
  v5 = *(_BYTE *)(((unsigned __int64)&this->cost_revise >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->cost_revise, v3);
  }
  this->cost_revise = cost_revise;
};

// Line 4531: range 000000000DF52018-000000000DF52042
void __cdecl data::ConfigGCGEffectRerollReviseCost::~ConfigGCGEffectRerollReviseCost(
        data::ConfigGCGEffectRerollReviseCost *const this)
{
  data::ConfigGCGEffectRerollReviseCost::~ConfigGCGEffectRerollReviseCost(this);
  operator delete(this, 0x30uLL);
};

// Line 4531: range 000000000DF51FCA-000000000DF52017
void __cdecl data::ConfigGCGEffectRerollReviseCost::~ConfigGCGEffectRerollReviseCost(
        data::ConfigGCGEffectRerollReviseCost *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectRerollReviseCost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::ConfigGCGEffect::~ConfigGCGEffect((data::ConfigGCGEffect *const)this);
};

// Line 4536: range 000000000D74CEF4-000000000D74CF04
const char *__cdecl data::ConfigGCGEffectRerollReviseCost::getTypeName(
        const data::ConfigGCGEffectRerollReviseCost *const this)
{
  return "ConfigGCGEffectRerollReviseCost";
};

// Line 4537: range 000000000D74CF06-000000000D74D0A2
int32_t __cdecl data::ConfigGCGEffectRerollReviseCost::getHashNum(
        const data::ConfigGCGEffectRerollReviseCost *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGEffectRerollReviseCost::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGEffectRerollReviseCost",
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

// Line 4553: range 000000000DEBB4B6-000000000DEBB4F7
void __cdecl data::ConfigGCGEffectRerollReviseCostFactory::ConfigGCGEffectRerollReviseCostFactory(
        data::ConfigGCGEffectRerollReviseCostFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectRerollReviseCostFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffectRerollReviseCostFactory = v2;
};

// Line 4561: range 000000000DEBB800-000000000DEBB917
void __cdecl data::ConfigGCGEffectFixRerollDice::ConfigGCGEffectFixRerollDice(
        data::ConfigGCGEffectFixRerollDice *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectFixRerollDice + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->fixed_dice_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fixed_dice_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fixed_dice_type, v3);
  }
  this->fixed_dice_type = EFFECT_DICE_ANY;
  if ( *(_BYTE *)(((unsigned __int64)&this->fixed_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fixed_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fixed_num, v3);
  }
  this->fixed_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_reroll_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->limit_reroll_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->limit_reroll_time, (((_BYTE)this + 52) & 7u) + 3);
  }
  this->limit_reroll_time = 0;
};

// Line 4561: range 000000000DEBBDA2-000000000DEBBF79
void __cdecl data::ConfigGCGEffectFixRerollDice::ConfigGCGEffectFixRerollDice(
        data::ConfigGCGEffectFixRerollDice *const this,
        const data::ConfigGCGEffectFixRerollDice *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GCGEffectDiceType fixed_dice_type; // ecx
  char v5; // dl
  uint32_t fixed_num; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t limit_reroll_time; // ecx
  char v10; // dl

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this, (const data::ConfigGCGEffect *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectFixRerollDice + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)a2 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->fixed_dice_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->fixed_dice_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->fixed_dice_type);
  }
  fixed_dice_type = a2->fixed_dice_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->fixed_dice_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->fixed_dice_type, v3);
  }
  this->fixed_dice_type = fixed_dice_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->fixed_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->fixed_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->fixed_num);
  }
  fixed_num = a2->fixed_num;
  v7 = *(_BYTE *)(((unsigned __int64)&this->fixed_num >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->fixed_num, v3);
  }
  this->fixed_num = fixed_num;
  v8 = (((_BYTE)a2 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->limit_reroll_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->limit_reroll_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->limit_reroll_time);
  }
  limit_reroll_time = a2->limit_reroll_time;
  v10 = *(_BYTE *)(((unsigned __int64)&this->limit_reroll_time >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->limit_reroll_time, v8);
  }
  this->limit_reroll_time = limit_reroll_time;
};

// Line 4570: range 000000000DF51F50-000000000DF51F9D
void __cdecl data::ConfigGCGEffectFixRerollDice::~ConfigGCGEffectFixRerollDice(
        data::ConfigGCGEffectFixRerollDice *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectFixRerollDice + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::ConfigGCGEffect::~ConfigGCGEffect((data::ConfigGCGEffect *const)this);
};

// Line 4570: range 000000000DF51F9E-000000000DF51FC8
void __cdecl data::ConfigGCGEffectFixRerollDice::~ConfigGCGEffectFixRerollDice(
        data::ConfigGCGEffectFixRerollDice *const this)
{
  data::ConfigGCGEffectFixRerollDice::~ConfigGCGEffectFixRerollDice(this);
  operator delete(this, 0x38uLL);
};

// Line 4575: range 000000000D74D0A4-000000000D74D0B4
const char *__cdecl data::ConfigGCGEffectFixRerollDice::getTypeName(
        const data::ConfigGCGEffectFixRerollDice *const this)
{
  return "ConfigGCGEffectFixRerollDice";
};

// Line 4576: range 000000000D74D0B6-000000000D74D252
int32_t __cdecl data::ConfigGCGEffectFixRerollDice::getHashNum(const data::ConfigGCGEffectFixRerollDice *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGEffectFixRerollDice::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGEffectFixRerollDice",
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

// Line 4592: range 000000000DEBC1C2-000000000DEBC203
void __cdecl data::ConfigGCGEffectFixRerollDiceFactory::ConfigGCGEffectFixRerollDiceFactory(
        data::ConfigGCGEffectFixRerollDiceFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectFixRerollDiceFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffectFixRerollDiceFactory = v2;
};

// Line 4600: range 000000000DEBC50C-000000000DEBC559
void __cdecl data::ConfigGCGEffectChangeCharacterSetQuick::ConfigGCGEffectChangeCharacterSetQuick(
        data::ConfigGCGEffectChangeCharacterSetQuick *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGEffect::ConfigGCGEffect(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectChangeCharacterSetQuick + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 4600: range 000000000DEBCAA2-000000000DEBCAFA
void __cdecl data::ConfigGCGEffectChangeCharacterSetQuick::ConfigGCGEffectChangeCharacterSetQuick(
        data::ConfigGCGEffectChangeCharacterSetQuick *const this,
        const data::ConfigGCGEffectChangeCharacterSetQuick *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGEffect::ConfigGCGEffect(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectChangeCharacterSetQuick + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 4606: range 000000000DF51ED6-000000000DF51F23
void __cdecl data::ConfigGCGEffectChangeCharacterSetQuick::~ConfigGCGEffectChangeCharacterSetQuick(
        data::ConfigGCGEffectChangeCharacterSetQuick *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectChangeCharacterSetQuick + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::ConfigGCGEffect::~ConfigGCGEffect(this);
};

// Line 4606: range 000000000DF51F24-000000000DF51F4E
void __cdecl data::ConfigGCGEffectChangeCharacterSetQuick::~ConfigGCGEffectChangeCharacterSetQuick(
        data::ConfigGCGEffectChangeCharacterSetQuick *const this)
{
  data::ConfigGCGEffectChangeCharacterSetQuick::~ConfigGCGEffectChangeCharacterSetQuick(this);
  operator delete(this, 0x30uLL);
};

// Line 4611: range 000000000D74D254-000000000D74D264
const char *__cdecl data::ConfigGCGEffectChangeCharacterSetQuick::getTypeName(
        const data::ConfigGCGEffectChangeCharacterSetQuick *const this)
{
  return "ConfigGCGEffectChangeCharacterSetQuick";
};

// Line 4612: range 000000000D74D266-000000000D74D402
int32_t __cdecl data::ConfigGCGEffectChangeCharacterSetQuick::getHashNum(
        const data::ConfigGCGEffectChangeCharacterSetQuick *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGEffectChangeCharacterSetQuick::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGEffectChangeCharacterSetQuick",
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

// Line 4628: range 000000000DEBCD44-000000000DEBCD85
void __cdecl data::ConfigGCGEffectChangeCharacterSetQuickFactory::ConfigGCGEffectChangeCharacterSetQuickFactory(
        data::ConfigGCGEffectChangeCharacterSetQuickFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectChangeCharacterSetQuickFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffectChangeCharacterSetQuickFactory = v2;
};

// Line 4636: range 000000000DEBD08E-000000000DEBD121
void __cdecl data::ConfigGCGEffectBeingHitDamageReduceToHalf::ConfigGCGEffectBeingHitDamageReduceToHalf(
        data::ConfigGCGEffectBeingHitDamageReduceToHalf *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectBeingHitDamageReduceToHalf + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_element_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->effect_element_type >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->effect_element_type, (((_BYTE)this + 44) & 7u) + 3);
  }
  this->effect_element_type = DAMAGE_ELEMENT_ANY;
};

// Line 4636: range 000000000DEBD592-000000000DEBD66F
void __cdecl data::ConfigGCGEffectBeingHitDamageReduceToHalf::ConfigGCGEffectBeingHitDamageReduceToHalf(
        data::ConfigGCGEffectBeingHitDamageReduceToHalf *const this,
        const data::ConfigGCGEffectBeingHitDamageReduceToHalf *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GCGEffectDamageElementType effect_element_type; // ecx
  char v5; // dl

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this, (const data::ConfigGCGEffect *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectBeingHitDamageReduceToHalf + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)a2 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->effect_element_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->effect_element_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->effect_element_type);
  }
  effect_element_type = a2->effect_element_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->effect_element_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->effect_element_type, v3);
  }
  this->effect_element_type = effect_element_type;
};

// Line 4643: range 000000000DF51E5C-000000000DF51EA9
void __cdecl data::ConfigGCGEffectBeingHitDamageReduceToHalf::~ConfigGCGEffectBeingHitDamageReduceToHalf(
        data::ConfigGCGEffectBeingHitDamageReduceToHalf *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectBeingHitDamageReduceToHalf + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::ConfigGCGEffect::~ConfigGCGEffect((data::ConfigGCGEffect *const)this);
};

// Line 4643: range 000000000DF51EAA-000000000DF51ED4
void __cdecl data::ConfigGCGEffectBeingHitDamageReduceToHalf::~ConfigGCGEffectBeingHitDamageReduceToHalf(
        data::ConfigGCGEffectBeingHitDamageReduceToHalf *const this)
{
  data::ConfigGCGEffectBeingHitDamageReduceToHalf::~ConfigGCGEffectBeingHitDamageReduceToHalf(this);
  operator delete(this, 0x30uLL);
};

// Line 4648: range 000000000D74D404-000000000D74D414
const char *__cdecl data::ConfigGCGEffectBeingHitDamageReduceToHalf::getTypeName(
        const data::ConfigGCGEffectBeingHitDamageReduceToHalf *const this)
{
  return "ConfigGCGEffectBeingHitDamageReduceToHalf";
};

// Line 4649: range 000000000D74D416-000000000D74D5B2
int32_t __cdecl data::ConfigGCGEffectBeingHitDamageReduceToHalf::getHashNum(
        const data::ConfigGCGEffectBeingHitDamageReduceToHalf *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGEffectBeingHitDamageReduceToHalf::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGEffectBeingHitDamageReduceToHalf",
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

// Line 4665: range 000000000DEBD8B8-000000000DEBD8F9
void __cdecl data::ConfigGCGEffectBeingHitDamageReduceToHalfFactory::ConfigGCGEffectBeingHitDamageReduceToHalfFactory(
        data::ConfigGCGEffectBeingHitDamageReduceToHalfFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectBeingHitDamageReduceToHalfFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffectBeingHitDamageReduceToHalfFactory = v2;
};

// Line 4673: range 000000000DEBDC02-000000000DEBDC9D
void __cdecl data::ConfigGCGEffectBeingHitDamageRevise::ConfigGCGEffectBeingHitDamageRevise(
        data::ConfigGCGEffectBeingHitDamageRevise *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGEffect::ConfigGCGEffect(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectBeingHitDamageRevise + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::GCGDeclare::GCGDeclare(&this->declared_output_key);
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_element_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->effect_element_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->effect_element_type, v1);
  }
  this->effect_element_type = DAMAGE_ELEMENT_ANY;
};

// Line 4673: range 000000000DEBE0E6-000000000DEBE1F1
void __cdecl data::ConfigGCGEffectBeingHitDamageRevise::ConfigGCGEffectBeingHitDamageRevise(
        data::ConfigGCGEffectBeingHitDamageRevise *const this,
        const data::ConfigGCGEffectBeingHitDamageRevise *a2)
{
  int (**v2)(...); // rdx
  data::GCGDeclare *p_declared_output_key; // rsi
  data::GCGEffectDamageElementType effect_element_type; // ecx
  char v5; // al

  data::ConfigGCGEffect::ConfigGCGEffect(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectBeingHitDamageRevise + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  p_declared_output_key = &a2->declared_output_key;
  data::GCGDeclare::GCGDeclare(&this->declared_output_key, &a2->declared_output_key);
  if ( *(_BYTE *)(((unsigned __int64)&a2->effect_element_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->effect_element_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->effect_element_type);
  }
  effect_element_type = a2->effect_element_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->effect_element_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_declared_output_key) = v5 != 0;
    __asan_report_store4(&this->effect_element_type, p_declared_output_key);
  }
  this->effect_element_type = effect_element_type;
};

// Line 4681: range 000000000DF51E30-000000000DF51E5A
void __cdecl data::ConfigGCGEffectBeingHitDamageRevise::~ConfigGCGEffectBeingHitDamageRevise(
        data::ConfigGCGEffectBeingHitDamageRevise *const this)
{
  data::ConfigGCGEffectBeingHitDamageRevise::~ConfigGCGEffectBeingHitDamageRevise(this);
  operator delete(this, 0x60uLL);
};

// Line 4681: range 000000000DF51DD2-000000000DF51E2F
void __cdecl data::ConfigGCGEffectBeingHitDamageRevise::~ConfigGCGEffectBeingHitDamageRevise(
        data::ConfigGCGEffectBeingHitDamageRevise *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectBeingHitDamageRevise + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::GCGDeclare::~GCGDeclare(&this->declared_output_key);
  data::ConfigGCGEffect::~ConfigGCGEffect(this);
};

// Line 4686: range 000000000D74D5B4-000000000D74D5C4
const char *__cdecl data::ConfigGCGEffectBeingHitDamageRevise::getTypeName(
        const data::ConfigGCGEffectBeingHitDamageRevise *const this)
{
  return "ConfigGCGEffectBeingHitDamageRevise";
};

// Line 4687: range 000000000D74D5C6-000000000D74D762
int32_t __cdecl data::ConfigGCGEffectBeingHitDamageRevise::getHashNum(
        const data::ConfigGCGEffectBeingHitDamageRevise *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGEffectBeingHitDamageRevise::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGEffectBeingHitDamageRevise",
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

// Line 4703: range 000000000DEBE4DA-000000000DEBE51B
void __cdecl data::ConfigGCGEffectBeingHitDamageReviseFactory::ConfigGCGEffectBeingHitDamageReviseFactory(
        data::ConfigGCGEffectBeingHitDamageReviseFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectBeingHitDamageReviseFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffectBeingHitDamageReviseFactory = v2;
};

// Line 4711: range 000000000DEBE824-000000000DEBE8F5
void __cdecl data::ConfigGCGEffectReplaceReactionElementByCardVar::ConfigGCGEffectReplaceReactionElementByCardVar(
        data::ConfigGCGEffectReplaceReactionElementByCardVar *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectReplaceReactionElementByCardVar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_element_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->effect_element_type >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->effect_element_type, v3);
  }
  this->effect_element_type = GCG_ELEMENT_PHYSIC;
  if ( *(_BYTE *)(((unsigned __int64)&this->token_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->token_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->token_type, v3);
  }
  this->token_type = GCG_TOKEN_NONE;
};

// Line 4711: range 000000000DEBED80-000000000DEBEED2
void __cdecl data::ConfigGCGEffectReplaceReactionElementByCardVar::ConfigGCGEffectReplaceReactionElementByCardVar(
        data::ConfigGCGEffectReplaceReactionElementByCardVar *const this,
        const data::ConfigGCGEffectReplaceReactionElementByCardVar *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::GCGEffectElementType effect_element_type; // ecx
  char v5; // dl
  data::GCGTokenType token_type; // ecx
  char v7; // al

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this, (const data::ConfigGCGEffect *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectReplaceReactionElementByCardVar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)a2 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->effect_element_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->effect_element_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->effect_element_type);
  }
  effect_element_type = a2->effect_element_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->effect_element_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->effect_element_type, v3);
  }
  this->effect_element_type = effect_element_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->token_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->token_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->token_type);
  }
  token_type = a2->token_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->token_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->token_type, v3);
  }
  this->token_type = token_type;
};

// Line 4719: range 000000000DF51DA6-000000000DF51DD0
void __cdecl data::ConfigGCGEffectReplaceReactionElementByCardVar::~ConfigGCGEffectReplaceReactionElementByCardVar(
        data::ConfigGCGEffectReplaceReactionElementByCardVar *const this)
{
  data::ConfigGCGEffectReplaceReactionElementByCardVar::~ConfigGCGEffectReplaceReactionElementByCardVar(this);
  operator delete(this, 0x38uLL);
};

// Line 4719: range 000000000DF51D58-000000000DF51DA5
void __cdecl data::ConfigGCGEffectReplaceReactionElementByCardVar::~ConfigGCGEffectReplaceReactionElementByCardVar(
        data::ConfigGCGEffectReplaceReactionElementByCardVar *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectReplaceReactionElementByCardVar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::ConfigGCGEffect::~ConfigGCGEffect((data::ConfigGCGEffect *const)this);
};

// Line 4724: range 000000000D74D764-000000000D74D774
const char *__cdecl data::ConfigGCGEffectReplaceReactionElementByCardVar::getTypeName(
        const data::ConfigGCGEffectReplaceReactionElementByCardVar *const this)
{
  return "ConfigGCGEffectReplaceReactionElementByCardVar";
};

// Line 4725: range 000000000D74D776-000000000D74D912
int32_t __cdecl data::ConfigGCGEffectReplaceReactionElementByCardVar::getHashNum(
        const data::ConfigGCGEffectReplaceReactionElementByCardVar *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGEffectReplaceReactionElementByCardVar::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGEffectReplaceReactionElementByCardVar",
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

// Line 4741: range 000000000DEBF11C-000000000DEBF15D
void __cdecl data::ConfigGCGEffectReplaceReactionElementByCardVarFactory::ConfigGCGEffectReplaceReactionElementByCardVarFactory(
        data::ConfigGCGEffectReplaceReactionElementByCardVarFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectReplaceReactionElementByCardVarFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffectReplaceReactionElementByCardVarFactory = v2;
};

// Line 4749: range 000000000DEBF466-000000000DEBF4F9
void __cdecl data::ConfigGCGEffectModifiedCharacterAssignUseSkill::ConfigGCGEffectModifiedCharacterAssignUseSkill(
        data::ConfigGCGEffectModifiedCharacterAssignUseSkill *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectModifiedCharacterAssignUseSkill + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skill_id, (((_BYTE)this + 44) & 7u) + 3);
  }
  this->skill_id = 0;
};

// Line 4749: range 000000000DEBF96A-000000000DEBFA47
void __cdecl data::ConfigGCGEffectModifiedCharacterAssignUseSkill::ConfigGCGEffectModifiedCharacterAssignUseSkill(
        data::ConfigGCGEffectModifiedCharacterAssignUseSkill *const this,
        const data::ConfigGCGEffectModifiedCharacterAssignUseSkill *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t skill_id; // ecx
  char v5; // dl

  data::ConfigGCGEffect::ConfigGCGEffect((data::ConfigGCGEffect *const)this, (const data::ConfigGCGEffect *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectModifiedCharacterAssignUseSkill + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  v3 = (((_BYTE)a2 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->skill_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->skill_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->skill_id);
  }
  skill_id = a2->skill_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->skill_id, v3);
  }
  this->skill_id = skill_id;
};

// Line 4756: range 000000000DF51CDE-000000000DF51D2B
void __cdecl data::ConfigGCGEffectModifiedCharacterAssignUseSkill::~ConfigGCGEffectModifiedCharacterAssignUseSkill(
        data::ConfigGCGEffectModifiedCharacterAssignUseSkill *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectModifiedCharacterAssignUseSkill + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::ConfigGCGEffect::~ConfigGCGEffect((data::ConfigGCGEffect *const)this);
};

// Line 4756: range 000000000DF51D2C-000000000DF51D56
void __cdecl data::ConfigGCGEffectModifiedCharacterAssignUseSkill::~ConfigGCGEffectModifiedCharacterAssignUseSkill(
        data::ConfigGCGEffectModifiedCharacterAssignUseSkill *const this)
{
  data::ConfigGCGEffectModifiedCharacterAssignUseSkill::~ConfigGCGEffectModifiedCharacterAssignUseSkill(this);
  operator delete(this, 0x30uLL);
};

// Line 4761: range 000000000D74D914-000000000D74D924
const char *__cdecl data::ConfigGCGEffectModifiedCharacterAssignUseSkill::getTypeName(
        const data::ConfigGCGEffectModifiedCharacterAssignUseSkill *const this)
{
  return "ConfigGCGEffectModifiedCharacterAssignUseSkill";
};

// Line 4762: range 000000000D74D926-000000000D74DAC2
int32_t __cdecl data::ConfigGCGEffectModifiedCharacterAssignUseSkill::getHashNum(
        const data::ConfigGCGEffectModifiedCharacterAssignUseSkill *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGEffectModifiedCharacterAssignUseSkill::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGEffectModifiedCharacterAssignUseSkill",
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

// Line 4778: range 000000000DEBFC90-000000000DEBFCD1
void __cdecl data::ConfigGCGEffectModifiedCharacterAssignUseSkillFactory::ConfigGCGEffectModifiedCharacterAssignUseSkillFactory(
        data::ConfigGCGEffectModifiedCharacterAssignUseSkillFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectModifiedCharacterAssignUseSkillFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffectModifiedCharacterAssignUseSkillFactory = v2;
};

// Line 4786: range 000000000DEBFFDA-000000000DEC0037
void __cdecl data::ConfigGCGEffectReviveWhenDeath::ConfigGCGEffectReviveWhenDeath(
        data::ConfigGCGEffectReviveWhenDeath *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGCGEffect::ConfigGCGEffect(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectReviveWhenDeath + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::GCGDeclare::GCGDeclare(&this->declared_heal_amount_key);
};

// Line 4786: range 000000000DEC0486-000000000DEC051C
void __cdecl data::ConfigGCGEffectReviveWhenDeath::ConfigGCGEffectReviveWhenDeath(
        data::ConfigGCGEffectReviveWhenDeath *const this,
        const data::ConfigGCGEffectReviveWhenDeath *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGEffect::ConfigGCGEffect(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectReviveWhenDeath + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGCGEffect = v2;
  data::GCGDeclare::GCGDeclare(&this->declared_heal_amount_key, &a2->declared_heal_amount_key);
};

// Line 4793: range 000000000DF51C54-000000000DF51CB1
void __cdecl data::ConfigGCGEffectReviveWhenDeath::~ConfigGCGEffectReviveWhenDeath(
        data::ConfigGCGEffectReviveWhenDeath *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectReviveWhenDeath + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffect = v2;
  data::GCGDeclare::~GCGDeclare(&this->declared_heal_amount_key);
  data::ConfigGCGEffect::~ConfigGCGEffect(this);
};

// Line 4793: range 000000000DF51CB2-000000000DF51CDC
void __cdecl data::ConfigGCGEffectReviveWhenDeath::~ConfigGCGEffectReviveWhenDeath(
        data::ConfigGCGEffectReviveWhenDeath *const this)
{
  data::ConfigGCGEffectReviveWhenDeath::~ConfigGCGEffectReviveWhenDeath(this);
  operator delete(this, 0x58uLL);
};

// Line 4798: range 000000000D74DAC4-000000000D74DAD4
const char *__cdecl data::ConfigGCGEffectReviveWhenDeath::getTypeName(
        const data::ConfigGCGEffectReviveWhenDeath *const this)
{
  return "ConfigGCGEffectReviveWhenDeath";
};

// Line 4799: range 000000000D74DAD6-000000000D74DC72
int32_t __cdecl data::ConfigGCGEffectReviveWhenDeath::getHashNum(
        const data::ConfigGCGEffectReviveWhenDeath *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGCGEffectReviveWhenDeath::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGCGEffectReviveWhenDeath",
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

// Line 4815: range 000000000DEC0806-000000000DEC0847
void __cdecl data::ConfigGCGEffectReviveWhenDeathFactory::ConfigGCGEffectReviveWhenDeathFactory(
        data::ConfigGCGEffectReviveWhenDeathFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGCGEffectReviveWhenDeathFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGCGEffectReviveWhenDeathFactory = v2;
};

// Line 4853: range 000000000D76BD16-000000000D76BDCE
void __cdecl data::ConfigGCGTrigger::ConfigGCGTrigger(data::ConfigGCGTrigger *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->type = GCG_TRIGGER_INVALID;
  if ( *(_WORD *)(((unsigned __int64)&this->condition >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigGCGLogicCondition>();
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 4853: range 000000000D949410-000000000D94951E
void __cdecl data::ConfigGCGTrigger::ConfigGCGTrigger(data::ConfigGCGTrigger *const this, data::ConfigGCGTrigger *a2)
{
  data::GCGTriggerType type; // ecx
  char v3; // al
  data::ConfigGCGLogicConditionPtr *p_condition; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  data::ConfigGCGTrigger *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  type = a2->type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->type = type;
  p_condition = &v7->condition;
  std::shared_ptr<data::ConfigGCGLogicCondition>::shared_ptr(&this->condition, &v7->condition);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_condition, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_condition) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_condition, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 4853: range 000000000D28FFE2-000000000D290000
void __cdecl data::ConfigGCGTrigger::~ConfigGCGTrigger(data::ConfigGCGTrigger *const this)
{
  std::shared_ptr<data::ConfigGCGLogicCondition>::~shared_ptr(&this->condition);
};

// Line 4882: range 000000000CE39BB8-000000000CE39C54
void __cdecl data::ConfigGCGSkill::ConfigGCGSkill(data::ConfigGCGSkill *const this)
{
  __int64 v1; // rsi

  std::string::basic_string(this);
  std::unordered_map<std::string,std::shared_ptr<data::GCGDeclaredValue>>::unordered_map(&this->declared_value_map);
  std::vector<data::ConfigGCGTrigger>::vector(&this->trigger_list);
  std::vector<data::ConfigGCGLimit>::vector(&this->limit_list);
  std::vector<std::shared_ptr<data::ConfigGCGEffect>>::vector(&this->effect_list);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 4882: range 000000000D39A506-000000000D39A67E
void __cdecl data::ConfigGCGSkill::ConfigGCGSkill(data::ConfigGCGSkill *const this, const data::ConfigGCGSkill *a2)
{
  data::ConfigGCGEffectList *p_effect_list; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::string::basic_string(this, a2);
  std::unordered_map<std::string,std::shared_ptr<data::GCGDeclaredValue>>::unordered_map(
    &this->declared_value_map,
    &a2->declared_value_map);
  std::vector<data::ConfigGCGTrigger>::vector(&this->trigger_list, &a2->trigger_list);
  std::vector<data::ConfigGCGLimit>::vector(&this->limit_list, &a2->limit_list);
  p_effect_list = &a2->effect_list;
  std::vector<std::shared_ptr<data::ConfigGCGEffect>>::vector(&this->effect_list, p_effect_list);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_effect_list, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_effect_list) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_effect_list, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 4882: range 000000000CE39C56-000000000CE39CB2
void __cdecl data::ConfigGCGSkill::~ConfigGCGSkill(data::ConfigGCGSkill *const this)
{
  std::vector<std::shared_ptr<data::ConfigGCGEffect>>::~vector(&this->effect_list);
  std::vector<data::ConfigGCGLimit>::~vector(&this->limit_list);
  std::vector<data::ConfigGCGTrigger>::~vector(&this->trigger_list);
  std::unordered_map<std::string,std::shared_ptr<data::GCGDeclaredValue>>::~unordered_map(&this->declared_value_map);
  std::string::~string(this);
};
