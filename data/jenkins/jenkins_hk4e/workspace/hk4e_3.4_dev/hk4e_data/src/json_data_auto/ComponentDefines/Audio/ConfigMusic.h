// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Audio/ConfigMusic.h

// Line 19: range 0000000011B634D0-0000000011B635E1
void __cdecl data::ConfigMusicSyncTransitions::ConfigMusicSyncTransitions(
        data::ConfigMusicSyncTransitions *const this,
        data::ConfigMusicSyncTransitions *a2)
{
  data::ConfigMusicTransitions *p_exit_transitions; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  data::ConfigMusicTransitions::ConfigMusicTransitions(&this->beat_transitions, &a2->beat_transitions);
  data::ConfigMusicTransitions::ConfigMusicTransitions(&this->bar_transitions, &a2->bar_transitions);
  data::ConfigMusicTransitions::ConfigMusicTransitions(&this->grid_transitions, &a2->grid_transitions);
  data::ConfigMusicTransitions::ConfigMusicTransitions(&this->cue_transitions, &a2->cue_transitions);
  p_exit_transitions = &a2->exit_transitions;
  data::ConfigMusicTransitions::ConfigMusicTransitions(&this->exit_transitions, p_exit_transitions);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_exit_transitions, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_exit_transitions) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_exit_transitions, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 98: range 0000000011DC3574-0000000011DC3643
void __cdecl data::ConfigMusicCondition::ConfigMusicCondition(data::ConfigMusicCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  std::enable_shared_from_this<data::ConfigMusicCondition>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigMusicCondition>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = ((_BYTE)this + 28) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 98: range 0000000011DC3B88-0000000011DC3CDD
void __cdecl data::ConfigMusicCondition::ConfigMusicCondition(
        data::ConfigMusicCondition *const this,
        const data::ConfigMusicCondition *a2)
{
  std::enable_shared_from_this<data::ConfigMusicCondition> *v2; // rsi
  int (**v3)(...); // rdx
  int32_t id; // ecx
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool is_json_loaded; // cl
  char v9; // dl
  __int64 v10; // rdx

  v2 = &a2->std::enable_shared_from_this<data::ConfigMusicCondition>;
  std::enable_shared_from_this<data::ConfigMusicCondition>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigMusicCondition>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigMusicCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigMusicCondition = v3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store4(&this->id, v2);
  }
  this->id = id;
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

// Line 106: range 0000000011DC3FC0-0000000011DC3FEA
void __cdecl data::ConfigMusicCondition::~ConfigMusicCondition(data::ConfigMusicCondition *const this)
{
  data::ConfigMusicCondition::~ConfigMusicCondition(this);
  operator delete(this, 0x20uLL);
};

// Line 106: range 0000000011DC3F6E-0000000011DC3FBF
void __cdecl data::ConfigMusicCondition::~ConfigMusicCondition(data::ConfigMusicCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  std::enable_shared_from_this<data::ConfigMusicCondition>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigMusicCondition>);
};

// Line 111: range 0000000011A60CE4-0000000011A60CF4
const char *__cdecl data::ConfigMusicCondition::getTypeName(const data::ConfigMusicCondition *const this)
{
  return "ConfigMusicCondition";
};

// Line 112: range 0000000011A60CF6-0000000011A60E92
int32_t __cdecl data::ConfigMusicCondition::getHashNum(const data::ConfigMusicCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicCondition",
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

// Line 138: range 0000000011DC3FEC-0000000011DC4039
void __cdecl data::ConfigMusicTrueCondition::ConfigMusicTrueCondition(data::ConfigMusicTrueCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicCondition::ConfigMusicCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicTrueCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 138: range 0000000011DC44CA-0000000011DC4522
void __cdecl data::ConfigMusicTrueCondition::ConfigMusicTrueCondition(
        data::ConfigMusicTrueCondition *const this,
        const data::ConfigMusicTrueCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicCondition::ConfigMusicCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicTrueCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 144: range 0000000011E06870-0000000011E068BD
void __cdecl data::ConfigMusicTrueCondition::~ConfigMusicTrueCondition(data::ConfigMusicTrueCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicTrueCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicCondition::~ConfigMusicCondition(this);
};

// Line 144: range 0000000011E068BE-0000000011E068E8
void __cdecl data::ConfigMusicTrueCondition::~ConfigMusicTrueCondition(data::ConfigMusicTrueCondition *const this)
{
  data::ConfigMusicTrueCondition::~ConfigMusicTrueCondition(this);
  operator delete(this, 0x20uLL);
};

// Line 149: range 0000000011A60E94-0000000011A60EA4
const char *__cdecl data::ConfigMusicTrueCondition::getTypeName(const data::ConfigMusicTrueCondition *const this)
{
  return "ConfigMusicTrueCondition";
};

// Line 150: range 0000000011A60EA6-0000000011A61042
int32_t __cdecl data::ConfigMusicTrueCondition::getHashNum(const data::ConfigMusicTrueCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicTrueCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicTrueCondition",
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

// Line 166: range 0000000011DC476C-0000000011DC47AD
void __cdecl data::ConfigMusicTrueConditionFactory::ConfigMusicTrueConditionFactory(
        data::ConfigMusicTrueConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicTrueConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicTrueConditionFactory = v2;
};

// Line 174: range 0000000011DC4AB6-0000000011DC4B41
void __cdecl data::ConfigMusicNegativeCondition::ConfigMusicNegativeCondition(
        data::ConfigMusicNegativeCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicCondition::ConfigMusicCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicNegativeCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->inner_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->inner_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->inner_id, v1);
  }
  this->inner_id = 0;
};

// Line 174: range 0000000011DC5042-0000000011DC510F
void __cdecl data::ConfigMusicNegativeCondition::ConfigMusicNegativeCondition(
        data::ConfigMusicNegativeCondition *const this,
        const data::ConfigMusicNegativeCondition *a2)
{
  int (**v2)(...); // rdx
  int32_t inner_id; // ecx
  char v4; // al

  data::ConfigMusicCondition::ConfigMusicCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicNegativeCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->inner_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->inner_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->inner_id);
  }
  inner_id = a2->inner_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->inner_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->inner_id, a2);
  }
  this->inner_id = inner_id;
};

// Line 181: range 0000000011E067F6-0000000011E06843
void __cdecl data::ConfigMusicNegativeCondition::~ConfigMusicNegativeCondition(
        data::ConfigMusicNegativeCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicNegativeCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicCondition::~ConfigMusicCondition(this);
};

// Line 181: range 0000000011E06844-0000000011E0686E
void __cdecl data::ConfigMusicNegativeCondition::~ConfigMusicNegativeCondition(
        data::ConfigMusicNegativeCondition *const this)
{
  data::ConfigMusicNegativeCondition::~ConfigMusicNegativeCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 186: range 0000000011A61044-0000000011A61054
const char *__cdecl data::ConfigMusicNegativeCondition::getTypeName(
        const data::ConfigMusicNegativeCondition *const this)
{
  return "ConfigMusicNegativeCondition";
};

// Line 187: range 0000000011A61056-0000000011A611F2
int32_t __cdecl data::ConfigMusicNegativeCondition::getHashNum(const data::ConfigMusicNegativeCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicNegativeCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicNegativeCondition",
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

// Line 203: range 0000000011DC5358-0000000011DC5399
void __cdecl data::ConfigMusicNegativeConditionFactory::ConfigMusicNegativeConditionFactory(
        data::ConfigMusicNegativeConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicNegativeConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicNegativeConditionFactory = v2;
};

// Line 211: range 0000000011DC56A2-0000000011DC5773
void __cdecl data::ConfigMusicBinaryCondition::ConfigMusicBinaryCondition(data::ConfigMusicBinaryCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicCondition::ConfigMusicCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicBinaryCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->lhs_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->lhs_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->lhs_id, v1);
  }
  this->lhs_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->rhs_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rhs_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rhs_id, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->rhs_id = 0;
};

// Line 211: range 0000000011DC5B48-0000000011DC5C9A
void __cdecl data::ConfigMusicBinaryCondition::ConfigMusicBinaryCondition(
        data::ConfigMusicBinaryCondition *const this,
        const data::ConfigMusicBinaryCondition *a2)
{
  int (**v2)(...); // rdx
  int32_t lhs_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  int32_t rhs_id; // ecx
  char v7; // dl
  const data::ConfigMusicBinaryCondition *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  data::ConfigMusicCondition::ConfigMusicCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicBinaryCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->lhs_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->lhs_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->lhs_id);
  }
  lhs_id = a2->lhs_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->lhs_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->lhs_id, a2);
  }
  this->lhs_id = lhs_id;
  v5 = (((_BYTE)v8 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->rhs_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->rhs_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->rhs_id);
  }
  rhs_id = v8->rhs_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->rhs_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->rhs_id, v5);
  }
  this->rhs_id = rhs_id;
};

// Line 219: range 0000000011DC5F32-0000000011DC5F5C
void __cdecl data::ConfigMusicBinaryCondition::~ConfigMusicBinaryCondition(
        data::ConfigMusicBinaryCondition *const this)
{
  data::ConfigMusicBinaryCondition::~ConfigMusicBinaryCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 219: range 0000000011DC5EE4-0000000011DC5F31
void __cdecl data::ConfigMusicBinaryCondition::~ConfigMusicBinaryCondition(
        data::ConfigMusicBinaryCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicBinaryCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicCondition::~ConfigMusicCondition(this);
};

// Line 224: range 0000000011A611F4-0000000011A61204
const char *__cdecl data::ConfigMusicBinaryCondition::getTypeName(const data::ConfigMusicBinaryCondition *const this)
{
  return "ConfigMusicBinaryCondition";
};

// Line 225: range 0000000011A61206-0000000011A613A2
int32_t __cdecl data::ConfigMusicBinaryCondition::getHashNum(const data::ConfigMusicBinaryCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicBinaryCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicBinaryCondition",
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

// Line 244: range 0000000011DC5F5E-0000000011DC5FAB
void __cdecl data::ConfigMusicConjunctiveCondition::ConfigMusicConjunctiveCondition(
        data::ConfigMusicConjunctiveCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicBinaryCondition::ConfigMusicBinaryCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicConjunctiveCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 244: range 0000000011DC6380-0000000011DC63D8
void __cdecl data::ConfigMusicConjunctiveCondition::ConfigMusicConjunctiveCondition(
        data::ConfigMusicConjunctiveCondition *const this,
        const data::ConfigMusicConjunctiveCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicBinaryCondition::ConfigMusicBinaryCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicConjunctiveCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 250: range 0000000011E0677C-0000000011E067C9
void __cdecl data::ConfigMusicConjunctiveCondition::~ConfigMusicConjunctiveCondition(
        data::ConfigMusicConjunctiveCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicConjunctiveCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicBinaryCondition::~ConfigMusicBinaryCondition(this);
};

// Line 250: range 0000000011E067CA-0000000011E067F4
void __cdecl data::ConfigMusicConjunctiveCondition::~ConfigMusicConjunctiveCondition(
        data::ConfigMusicConjunctiveCondition *const this)
{
  data::ConfigMusicConjunctiveCondition::~ConfigMusicConjunctiveCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 255: range 0000000011A613A4-0000000011A613B4
const char *__cdecl data::ConfigMusicConjunctiveCondition::getTypeName(
        const data::ConfigMusicConjunctiveCondition *const this)
{
  return "ConfigMusicConjunctiveCondition";
};

// Line 256: range 0000000011A613B6-0000000011A61552
int32_t __cdecl data::ConfigMusicConjunctiveCondition::getHashNum(
        const data::ConfigMusicConjunctiveCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicConjunctiveCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicConjunctiveCondition",
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

// Line 272: range 0000000011DC6622-0000000011DC6663
void __cdecl data::ConfigMusicConjunctiveConditionFactory::ConfigMusicConjunctiveConditionFactory(
        data::ConfigMusicConjunctiveConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicConjunctiveConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicConjunctiveConditionFactory = v2;
};

// Line 280: range 0000000011DC696C-0000000011DC69B9
void __cdecl data::ConfigMusicDisjunctiveCondition::ConfigMusicDisjunctiveCondition(
        data::ConfigMusicDisjunctiveCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicBinaryCondition::ConfigMusicBinaryCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicDisjunctiveCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 280: range 0000000011DC6D8E-0000000011DC6DE6
void __cdecl data::ConfigMusicDisjunctiveCondition::ConfigMusicDisjunctiveCondition(
        data::ConfigMusicDisjunctiveCondition *const this,
        const data::ConfigMusicDisjunctiveCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicBinaryCondition::ConfigMusicBinaryCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicDisjunctiveCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 286: range 0000000011E06750-0000000011E0677A
void __cdecl data::ConfigMusicDisjunctiveCondition::~ConfigMusicDisjunctiveCondition(
        data::ConfigMusicDisjunctiveCondition *const this)
{
  data::ConfigMusicDisjunctiveCondition::~ConfigMusicDisjunctiveCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 286: range 0000000011E06702-0000000011E0674F
void __cdecl data::ConfigMusicDisjunctiveCondition::~ConfigMusicDisjunctiveCondition(
        data::ConfigMusicDisjunctiveCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicDisjunctiveCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicBinaryCondition::~ConfigMusicBinaryCondition(this);
};

// Line 291: range 0000000011A61554-0000000011A61564
const char *__cdecl data::ConfigMusicDisjunctiveCondition::getTypeName(
        const data::ConfigMusicDisjunctiveCondition *const this)
{
  return "ConfigMusicDisjunctiveCondition";
};

// Line 292: range 0000000011A61566-0000000011A61702
int32_t __cdecl data::ConfigMusicDisjunctiveCondition::getHashNum(
        const data::ConfigMusicDisjunctiveCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicDisjunctiveCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicDisjunctiveCondition",
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

// Line 308: range 0000000011DC7030-0000000011DC7071
void __cdecl data::ConfigMusicDisjunctiveConditionFactory::ConfigMusicDisjunctiveConditionFactory(
        data::ConfigMusicDisjunctiveConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicDisjunctiveConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicDisjunctiveConditionFactory = v2;
};

// Line 316: range 0000000011DC737A-0000000011DC7405
void __cdecl data::ConfigMusicParameterCondition::ConfigMusicParameterCondition(
        data::ConfigMusicParameterCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicCondition::ConfigMusicCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicParameterCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->game_param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->game_param, v1);
  }
  this->game_param = None_62;
};

// Line 316: range 0000000011DC7906-0000000011DC79D3
void __cdecl data::ConfigMusicParameterCondition::ConfigMusicParameterCondition(
        data::ConfigMusicParameterCondition *const this,
        const data::ConfigMusicParameterCondition *a2)
{
  int (**v2)(...); // rdx
  data::MusicGameParam game_param; // ecx
  char v4; // al

  data::ConfigMusicCondition::ConfigMusicCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicParameterCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->game_param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->game_param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->game_param);
  }
  game_param = a2->game_param;
  v4 = *(_BYTE *)(((unsigned __int64)&this->game_param >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->game_param, a2);
  }
  this->game_param = game_param;
};

// Line 323: range 0000000011DC7C1C-0000000011DC7C69
void __cdecl data::ConfigMusicParameterCondition::~ConfigMusicParameterCondition(
        data::ConfigMusicParameterCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicParameterCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicCondition::~ConfigMusicCondition(this);
};

// Line 323: range 0000000011DC7C6A-0000000011DC7C94
void __cdecl data::ConfigMusicParameterCondition::~ConfigMusicParameterCondition(
        data::ConfigMusicParameterCondition *const this)
{
  data::ConfigMusicParameterCondition::~ConfigMusicParameterCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 328: range 0000000011A61704-0000000011A61714
const char *__cdecl data::ConfigMusicParameterCondition::getTypeName(
        const data::ConfigMusicParameterCondition *const this)
{
  return "ConfigMusicParameterCondition";
};

// Line 329: range 0000000011A61716-0000000011A618B2
int32_t __cdecl data::ConfigMusicParameterCondition::getHashNum(const data::ConfigMusicParameterCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicParameterCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicParameterCondition",
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

// Line 348: range 0000000011DC7C96-0000000011DC7D29
void __cdecl data::ConfigMusicInt32Condition::ConfigMusicInt32Condition(data::ConfigMusicInt32Condition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicParameterCondition::ConfigMusicParameterCondition((data::ConfigMusicParameterCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicInt32Condition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->value, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->value = 0;
};

// Line 348: range 0000000011DC80FE-0000000011DC81DB
void __cdecl data::ConfigMusicInt32Condition::ConfigMusicInt32Condition(
        data::ConfigMusicInt32Condition *const this,
        const data::ConfigMusicInt32Condition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  int32_t value; // ecx
  char v5; // dl

  data::ConfigMusicParameterCondition::ConfigMusicParameterCondition(
    (data::ConfigMusicParameterCondition *const)this,
    (const data::ConfigMusicParameterCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicInt32Condition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  v5 = *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->value, v3);
  }
  this->value = value;
};

// Line 355: range 0000000011DC8424-0000000011DC8471
void __cdecl data::ConfigMusicInt32Condition::~ConfigMusicInt32Condition(data::ConfigMusicInt32Condition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicInt32Condition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicParameterCondition::~ConfigMusicParameterCondition((data::ConfigMusicParameterCondition *const)this);
};

// Line 355: range 0000000011DC8472-0000000011DC849C
void __cdecl data::ConfigMusicInt32Condition::~ConfigMusicInt32Condition(data::ConfigMusicInt32Condition *const this)
{
  data::ConfigMusicInt32Condition::~ConfigMusicInt32Condition(this);
  operator delete(this, 0x28uLL);
};

// Line 360: range 0000000011A618B4-0000000011A618C4
const char *__cdecl data::ConfigMusicInt32Condition::getTypeName(const data::ConfigMusicInt32Condition *const this)
{
  return "ConfigMusicInt32Condition";
};

// Line 361: range 0000000011A618C6-0000000011A61A62
int32_t __cdecl data::ConfigMusicInt32Condition::getHashNum(const data::ConfigMusicInt32Condition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicInt32Condition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicInt32Condition",
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

// Line 380: range 0000000011DC849E-0000000011DC84EB
void __cdecl data::ConfigMusicInt32EqualityCondition::ConfigMusicInt32EqualityCondition(
        data::ConfigMusicInt32EqualityCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicInt32Condition::ConfigMusicInt32Condition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicInt32EqualityCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 380: range 0000000011DC88C0-0000000011DC8918
void __cdecl data::ConfigMusicInt32EqualityCondition::ConfigMusicInt32EqualityCondition(
        data::ConfigMusicInt32EqualityCondition *const this,
        const data::ConfigMusicInt32EqualityCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicInt32Condition::ConfigMusicInt32Condition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicInt32EqualityCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 386: range 0000000011E06688-0000000011E066D5
void __cdecl data::ConfigMusicInt32EqualityCondition::~ConfigMusicInt32EqualityCondition(
        data::ConfigMusicInt32EqualityCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicInt32EqualityCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicInt32Condition::~ConfigMusicInt32Condition(this);
};

// Line 386: range 0000000011E066D6-0000000011E06700
void __cdecl data::ConfigMusicInt32EqualityCondition::~ConfigMusicInt32EqualityCondition(
        data::ConfigMusicInt32EqualityCondition *const this)
{
  data::ConfigMusicInt32EqualityCondition::~ConfigMusicInt32EqualityCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 391: range 0000000011A61A64-0000000011A61A74
const char *__cdecl data::ConfigMusicInt32EqualityCondition::getTypeName(
        const data::ConfigMusicInt32EqualityCondition *const this)
{
  return "ConfigMusicInt32EqualityCondition";
};

// Line 392: range 0000000011A61A76-0000000011A61C12
int32_t __cdecl data::ConfigMusicInt32EqualityCondition::getHashNum(
        const data::ConfigMusicInt32EqualityCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicInt32EqualityCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicInt32EqualityCondition",
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

// Line 408: range 0000000011DC8B62-0000000011DC8BA3
void __cdecl data::ConfigMusicInt32EqualityConditionFactory::ConfigMusicInt32EqualityConditionFactory(
        data::ConfigMusicInt32EqualityConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicInt32EqualityConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicInt32EqualityConditionFactory = v2;
};

// Line 416: range 0000000011DC8EAC-0000000011DC8EF9
void __cdecl data::ConfigMusicInt32InequalityCondition::ConfigMusicInt32InequalityCondition(
        data::ConfigMusicInt32InequalityCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicInt32Condition::ConfigMusicInt32Condition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicInt32InequalityCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 416: range 0000000011DC92CE-0000000011DC9326
void __cdecl data::ConfigMusicInt32InequalityCondition::ConfigMusicInt32InequalityCondition(
        data::ConfigMusicInt32InequalityCondition *const this,
        const data::ConfigMusicInt32InequalityCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicInt32Condition::ConfigMusicInt32Condition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicInt32InequalityCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 422: range 0000000011E0665C-0000000011E06686
void __cdecl data::ConfigMusicInt32InequalityCondition::~ConfigMusicInt32InequalityCondition(
        data::ConfigMusicInt32InequalityCondition *const this)
{
  data::ConfigMusicInt32InequalityCondition::~ConfigMusicInt32InequalityCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 422: range 0000000011E0660E-0000000011E0665B
void __cdecl data::ConfigMusicInt32InequalityCondition::~ConfigMusicInt32InequalityCondition(
        data::ConfigMusicInt32InequalityCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicInt32InequalityCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicInt32Condition::~ConfigMusicInt32Condition(this);
};

// Line 427: range 0000000011A61C14-0000000011A61C24
const char *__cdecl data::ConfigMusicInt32InequalityCondition::getTypeName(
        const data::ConfigMusicInt32InequalityCondition *const this)
{
  return "ConfigMusicInt32InequalityCondition";
};

// Line 428: range 0000000011A61C26-0000000011A61DC2
int32_t __cdecl data::ConfigMusicInt32InequalityCondition::getHashNum(
        const data::ConfigMusicInt32InequalityCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicInt32InequalityCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicInt32InequalityCondition",
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

// Line 444: range 0000000011DC9570-0000000011DC95B1
void __cdecl data::ConfigMusicInt32InequalityConditionFactory::ConfigMusicInt32InequalityConditionFactory(
        data::ConfigMusicInt32InequalityConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicInt32InequalityConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicInt32InequalityConditionFactory = v2;
};

// Line 452: range 0000000011DC98BA-0000000011DC9907
void __cdecl data::ConfigMusicInt32GreaterThanCondition::ConfigMusicInt32GreaterThanCondition(
        data::ConfigMusicInt32GreaterThanCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicInt32Condition::ConfigMusicInt32Condition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicInt32GreaterThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 452: range 0000000011DC9CDC-0000000011DC9D34
void __cdecl data::ConfigMusicInt32GreaterThanCondition::ConfigMusicInt32GreaterThanCondition(
        data::ConfigMusicInt32GreaterThanCondition *const this,
        const data::ConfigMusicInt32GreaterThanCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicInt32Condition::ConfigMusicInt32Condition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicInt32GreaterThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 458: range 0000000011E065E2-0000000011E0660C
void __cdecl data::ConfigMusicInt32GreaterThanCondition::~ConfigMusicInt32GreaterThanCondition(
        data::ConfigMusicInt32GreaterThanCondition *const this)
{
  data::ConfigMusicInt32GreaterThanCondition::~ConfigMusicInt32GreaterThanCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 458: range 0000000011E06594-0000000011E065E1
void __cdecl data::ConfigMusicInt32GreaterThanCondition::~ConfigMusicInt32GreaterThanCondition(
        data::ConfigMusicInt32GreaterThanCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicInt32GreaterThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicInt32Condition::~ConfigMusicInt32Condition(this);
};

// Line 463: range 0000000011A61DC4-0000000011A61DD4
const char *__cdecl data::ConfigMusicInt32GreaterThanCondition::getTypeName(
        const data::ConfigMusicInt32GreaterThanCondition *const this)
{
  return "ConfigMusicInt32GreaterThanCondition";
};

// Line 464: range 0000000011A61DD6-0000000011A61F72
int32_t __cdecl data::ConfigMusicInt32GreaterThanCondition::getHashNum(
        const data::ConfigMusicInt32GreaterThanCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicInt32GreaterThanCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicInt32GreaterThanCondition",
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

// Line 480: range 0000000011DC9F7E-0000000011DC9FBF
void __cdecl data::ConfigMusicInt32GreaterThanConditionFactory::ConfigMusicInt32GreaterThanConditionFactory(
        data::ConfigMusicInt32GreaterThanConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicInt32GreaterThanConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicInt32GreaterThanConditionFactory = v2;
};

// Line 488: range 0000000011DCA2C8-0000000011DCA315
void __cdecl data::ConfigMusicInt32LessThanCondition::ConfigMusicInt32LessThanCondition(
        data::ConfigMusicInt32LessThanCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicInt32Condition::ConfigMusicInt32Condition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicInt32LessThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 488: range 0000000011DCA6EA-0000000011DCA742
void __cdecl data::ConfigMusicInt32LessThanCondition::ConfigMusicInt32LessThanCondition(
        data::ConfigMusicInt32LessThanCondition *const this,
        const data::ConfigMusicInt32LessThanCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicInt32Condition::ConfigMusicInt32Condition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicInt32LessThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 494: range 0000000011E0651A-0000000011E06567
void __cdecl data::ConfigMusicInt32LessThanCondition::~ConfigMusicInt32LessThanCondition(
        data::ConfigMusicInt32LessThanCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicInt32LessThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicInt32Condition::~ConfigMusicInt32Condition(this);
};

// Line 494: range 0000000011E06568-0000000011E06592
void __cdecl data::ConfigMusicInt32LessThanCondition::~ConfigMusicInt32LessThanCondition(
        data::ConfigMusicInt32LessThanCondition *const this)
{
  data::ConfigMusicInt32LessThanCondition::~ConfigMusicInt32LessThanCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 499: range 0000000011A61F74-0000000011A61F84
const char *__cdecl data::ConfigMusicInt32LessThanCondition::getTypeName(
        const data::ConfigMusicInt32LessThanCondition *const this)
{
  return "ConfigMusicInt32LessThanCondition";
};

// Line 500: range 0000000011A61F86-0000000011A62122
int32_t __cdecl data::ConfigMusicInt32LessThanCondition::getHashNum(
        const data::ConfigMusicInt32LessThanCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicInt32LessThanCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicInt32LessThanCondition",
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

// Line 516: range 0000000011DCA98C-0000000011DCA9CD
void __cdecl data::ConfigMusicInt32LessThanConditionFactory::ConfigMusicInt32LessThanConditionFactory(
        data::ConfigMusicInt32LessThanConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicInt32LessThanConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicInt32LessThanConditionFactory = v2;
};

// Line 524: range 0000000011DCACD6-0000000011DCAD23
void __cdecl data::ConfigMusicInt32NoGreaterThanCondition::ConfigMusicInt32NoGreaterThanCondition(
        data::ConfigMusicInt32NoGreaterThanCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicInt32Condition::ConfigMusicInt32Condition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicInt32NoGreaterThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 524: range 0000000011DCB0F8-0000000011DCB150
void __cdecl data::ConfigMusicInt32NoGreaterThanCondition::ConfigMusicInt32NoGreaterThanCondition(
        data::ConfigMusicInt32NoGreaterThanCondition *const this,
        const data::ConfigMusicInt32NoGreaterThanCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicInt32Condition::ConfigMusicInt32Condition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicInt32NoGreaterThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 530: range 0000000011E064EE-0000000011E06518
void __cdecl data::ConfigMusicInt32NoGreaterThanCondition::~ConfigMusicInt32NoGreaterThanCondition(
        data::ConfigMusicInt32NoGreaterThanCondition *const this)
{
  data::ConfigMusicInt32NoGreaterThanCondition::~ConfigMusicInt32NoGreaterThanCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 530: range 0000000011E064A0-0000000011E064ED
void __cdecl data::ConfigMusicInt32NoGreaterThanCondition::~ConfigMusicInt32NoGreaterThanCondition(
        data::ConfigMusicInt32NoGreaterThanCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicInt32NoGreaterThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicInt32Condition::~ConfigMusicInt32Condition(this);
};

// Line 535: range 0000000011A62124-0000000011A62134
const char *__cdecl data::ConfigMusicInt32NoGreaterThanCondition::getTypeName(
        const data::ConfigMusicInt32NoGreaterThanCondition *const this)
{
  return "ConfigMusicInt32NoGreaterThanCondition";
};

// Line 536: range 0000000011A62136-0000000011A622D2
int32_t __cdecl data::ConfigMusicInt32NoGreaterThanCondition::getHashNum(
        const data::ConfigMusicInt32NoGreaterThanCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicInt32NoGreaterThanCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicInt32NoGreaterThanCondition",
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

// Line 552: range 0000000011DCB39A-0000000011DCB3DB
void __cdecl data::ConfigMusicInt32NoGreaterThanConditionFactory::ConfigMusicInt32NoGreaterThanConditionFactory(
        data::ConfigMusicInt32NoGreaterThanConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicInt32NoGreaterThanConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicInt32NoGreaterThanConditionFactory = v2;
};

// Line 560: range 0000000011DCB6E4-0000000011DCB731
void __cdecl data::ConfigMusicInt32NoLessThanCondition::ConfigMusicInt32NoLessThanCondition(
        data::ConfigMusicInt32NoLessThanCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicInt32Condition::ConfigMusicInt32Condition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicInt32NoLessThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 560: range 0000000011DCBB06-0000000011DCBB5E
void __cdecl data::ConfigMusicInt32NoLessThanCondition::ConfigMusicInt32NoLessThanCondition(
        data::ConfigMusicInt32NoLessThanCondition *const this,
        const data::ConfigMusicInt32NoLessThanCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicInt32Condition::ConfigMusicInt32Condition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicInt32NoLessThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 566: range 0000000011E06474-0000000011E0649E
void __cdecl data::ConfigMusicInt32NoLessThanCondition::~ConfigMusicInt32NoLessThanCondition(
        data::ConfigMusicInt32NoLessThanCondition *const this)
{
  data::ConfigMusicInt32NoLessThanCondition::~ConfigMusicInt32NoLessThanCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 566: range 0000000011E06426-0000000011E06473
void __cdecl data::ConfigMusicInt32NoLessThanCondition::~ConfigMusicInt32NoLessThanCondition(
        data::ConfigMusicInt32NoLessThanCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicInt32NoLessThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicInt32Condition::~ConfigMusicInt32Condition(this);
};

// Line 571: range 0000000011A622D4-0000000011A622E4
const char *__cdecl data::ConfigMusicInt32NoLessThanCondition::getTypeName(
        const data::ConfigMusicInt32NoLessThanCondition *const this)
{
  return "ConfigMusicInt32NoLessThanCondition";
};

// Line 572: range 0000000011A622E6-0000000011A62482
int32_t __cdecl data::ConfigMusicInt32NoLessThanCondition::getHashNum(
        const data::ConfigMusicInt32NoLessThanCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicInt32NoLessThanCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicInt32NoLessThanCondition",
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

// Line 588: range 0000000011DCBDA8-0000000011DCBDE9
void __cdecl data::ConfigMusicInt32NoLessThanConditionFactory::ConfigMusicInt32NoLessThanConditionFactory(
        data::ConfigMusicInt32NoLessThanConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicInt32NoLessThanConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicInt32NoLessThanConditionFactory = v2;
};

// Line 596: range 0000000011DCC0F2-0000000011DCC185
void __cdecl data::ConfigMusicUInt32Condition::ConfigMusicUInt32Condition(data::ConfigMusicUInt32Condition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicParameterCondition::ConfigMusicParameterCondition((data::ConfigMusicParameterCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32Condition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->value, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->value = 0;
};

// Line 596: range 0000000011DCC55A-0000000011DCC637
void __cdecl data::ConfigMusicUInt32Condition::ConfigMusicUInt32Condition(
        data::ConfigMusicUInt32Condition *const this,
        const data::ConfigMusicUInt32Condition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t value; // ecx
  char v5; // dl

  data::ConfigMusicParameterCondition::ConfigMusicParameterCondition(
    (data::ConfigMusicParameterCondition *const)this,
    (const data::ConfigMusicParameterCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32Condition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  v5 = *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->value, v3);
  }
  this->value = value;
};

// Line 603: range 0000000011DCC880-0000000011DCC8CD
void __cdecl data::ConfigMusicUInt32Condition::~ConfigMusicUInt32Condition(
        data::ConfigMusicUInt32Condition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32Condition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicParameterCondition::~ConfigMusicParameterCondition((data::ConfigMusicParameterCondition *const)this);
};

// Line 603: range 0000000011DCC8CE-0000000011DCC8F8
void __cdecl data::ConfigMusicUInt32Condition::~ConfigMusicUInt32Condition(
        data::ConfigMusicUInt32Condition *const this)
{
  data::ConfigMusicUInt32Condition::~ConfigMusicUInt32Condition(this);
  operator delete(this, 0x28uLL);
};

// Line 608: range 0000000011A62484-0000000011A62494
const char *__cdecl data::ConfigMusicUInt32Condition::getTypeName(const data::ConfigMusicUInt32Condition *const this)
{
  return "ConfigMusicUInt32Condition";
};

// Line 609: range 0000000011A62496-0000000011A62632
int32_t __cdecl data::ConfigMusicUInt32Condition::getHashNum(const data::ConfigMusicUInt32Condition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicUInt32Condition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicUInt32Condition",
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

// Line 628: range 0000000011DCC8FA-0000000011DCC947
void __cdecl data::ConfigMusicUInt32EqualityCondition::ConfigMusicUInt32EqualityCondition(
        data::ConfigMusicUInt32EqualityCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicUInt32Condition::ConfigMusicUInt32Condition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32EqualityCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 628: range 0000000011DCCD1C-0000000011DCCD74
void __cdecl data::ConfigMusicUInt32EqualityCondition::ConfigMusicUInt32EqualityCondition(
        data::ConfigMusicUInt32EqualityCondition *const this,
        const data::ConfigMusicUInt32EqualityCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicUInt32Condition::ConfigMusicUInt32Condition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32EqualityCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 634: range 0000000011E063AC-0000000011E063F9
void __cdecl data::ConfigMusicUInt32EqualityCondition::~ConfigMusicUInt32EqualityCondition(
        data::ConfigMusicUInt32EqualityCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32EqualityCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicUInt32Condition::~ConfigMusicUInt32Condition(this);
};

// Line 634: range 0000000011E063FA-0000000011E06424
void __cdecl data::ConfigMusicUInt32EqualityCondition::~ConfigMusicUInt32EqualityCondition(
        data::ConfigMusicUInt32EqualityCondition *const this)
{
  data::ConfigMusicUInt32EqualityCondition::~ConfigMusicUInt32EqualityCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 639: range 0000000011A62634-0000000011A62644
const char *__cdecl data::ConfigMusicUInt32EqualityCondition::getTypeName(
        const data::ConfigMusicUInt32EqualityCondition *const this)
{
  return "ConfigMusicUInt32EqualityCondition";
};

// Line 640: range 0000000011A62646-0000000011A627E2
int32_t __cdecl data::ConfigMusicUInt32EqualityCondition::getHashNum(
        const data::ConfigMusicUInt32EqualityCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicUInt32EqualityCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicUInt32EqualityCondition",
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

// Line 656: range 0000000011DCCFBE-0000000011DCCFFF
void __cdecl data::ConfigMusicUInt32EqualityConditionFactory::ConfigMusicUInt32EqualityConditionFactory(
        data::ConfigMusicUInt32EqualityConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32EqualityConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicUInt32EqualityConditionFactory = v2;
};

// Line 664: range 0000000011DCD308-0000000011DCD355
void __cdecl data::ConfigMusicUInt32InequalityCondition::ConfigMusicUInt32InequalityCondition(
        data::ConfigMusicUInt32InequalityCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicUInt32Condition::ConfigMusicUInt32Condition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32InequalityCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 664: range 0000000011DCD72A-0000000011DCD782
void __cdecl data::ConfigMusicUInt32InequalityCondition::ConfigMusicUInt32InequalityCondition(
        data::ConfigMusicUInt32InequalityCondition *const this,
        const data::ConfigMusicUInt32InequalityCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicUInt32Condition::ConfigMusicUInt32Condition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32InequalityCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 670: range 0000000011E06380-0000000011E063AA
void __cdecl data::ConfigMusicUInt32InequalityCondition::~ConfigMusicUInt32InequalityCondition(
        data::ConfigMusicUInt32InequalityCondition *const this)
{
  data::ConfigMusicUInt32InequalityCondition::~ConfigMusicUInt32InequalityCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 670: range 0000000011E06332-0000000011E0637F
void __cdecl data::ConfigMusicUInt32InequalityCondition::~ConfigMusicUInt32InequalityCondition(
        data::ConfigMusicUInt32InequalityCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32InequalityCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicUInt32Condition::~ConfigMusicUInt32Condition(this);
};

// Line 675: range 0000000011A627E4-0000000011A627F4
const char *__cdecl data::ConfigMusicUInt32InequalityCondition::getTypeName(
        const data::ConfigMusicUInt32InequalityCondition *const this)
{
  return "ConfigMusicUInt32InequalityCondition";
};

// Line 676: range 0000000011A627F6-0000000011A62992
int32_t __cdecl data::ConfigMusicUInt32InequalityCondition::getHashNum(
        const data::ConfigMusicUInt32InequalityCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicUInt32InequalityCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicUInt32InequalityCondition",
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

// Line 692: range 0000000011DCD9CC-0000000011DCDA0D
void __cdecl data::ConfigMusicUInt32InequalityConditionFactory::ConfigMusicUInt32InequalityConditionFactory(
        data::ConfigMusicUInt32InequalityConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32InequalityConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicUInt32InequalityConditionFactory = v2;
};

// Line 700: range 0000000011DCDD16-0000000011DCDD63
void __cdecl data::ConfigMusicUInt32GreaterThanCondition::ConfigMusicUInt32GreaterThanCondition(
        data::ConfigMusicUInt32GreaterThanCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicUInt32Condition::ConfigMusicUInt32Condition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32GreaterThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 700: range 0000000011DCE138-0000000011DCE190
void __cdecl data::ConfigMusicUInt32GreaterThanCondition::ConfigMusicUInt32GreaterThanCondition(
        data::ConfigMusicUInt32GreaterThanCondition *const this,
        const data::ConfigMusicUInt32GreaterThanCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicUInt32Condition::ConfigMusicUInt32Condition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32GreaterThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 706: range 0000000011E062B8-0000000011E06305
void __cdecl data::ConfigMusicUInt32GreaterThanCondition::~ConfigMusicUInt32GreaterThanCondition(
        data::ConfigMusicUInt32GreaterThanCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32GreaterThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicUInt32Condition::~ConfigMusicUInt32Condition(this);
};

// Line 706: range 0000000011E06306-0000000011E06330
void __cdecl data::ConfigMusicUInt32GreaterThanCondition::~ConfigMusicUInt32GreaterThanCondition(
        data::ConfigMusicUInt32GreaterThanCondition *const this)
{
  data::ConfigMusicUInt32GreaterThanCondition::~ConfigMusicUInt32GreaterThanCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 711: range 0000000011A62994-0000000011A629A4
const char *__cdecl data::ConfigMusicUInt32GreaterThanCondition::getTypeName(
        const data::ConfigMusicUInt32GreaterThanCondition *const this)
{
  return "ConfigMusicUInt32GreaterThanCondition";
};

// Line 712: range 0000000011A629A6-0000000011A62B42
int32_t __cdecl data::ConfigMusicUInt32GreaterThanCondition::getHashNum(
        const data::ConfigMusicUInt32GreaterThanCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicUInt32GreaterThanCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicUInt32GreaterThanCondition",
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

// Line 728: range 0000000011DCE3DA-0000000011DCE41B
void __cdecl data::ConfigMusicUInt32GreaterThanConditionFactory::ConfigMusicUInt32GreaterThanConditionFactory(
        data::ConfigMusicUInt32GreaterThanConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32GreaterThanConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicUInt32GreaterThanConditionFactory = v2;
};

// Line 736: range 0000000011DCE724-0000000011DCE771
void __cdecl data::ConfigMusicUInt32LessThanCondition::ConfigMusicUInt32LessThanCondition(
        data::ConfigMusicUInt32LessThanCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicUInt32Condition::ConfigMusicUInt32Condition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32LessThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 736: range 0000000011DCEB46-0000000011DCEB9E
void __cdecl data::ConfigMusicUInt32LessThanCondition::ConfigMusicUInt32LessThanCondition(
        data::ConfigMusicUInt32LessThanCondition *const this,
        const data::ConfigMusicUInt32LessThanCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicUInt32Condition::ConfigMusicUInt32Condition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32LessThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 742: range 0000000011E0623E-0000000011E0628B
void __cdecl data::ConfigMusicUInt32LessThanCondition::~ConfigMusicUInt32LessThanCondition(
        data::ConfigMusicUInt32LessThanCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32LessThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicUInt32Condition::~ConfigMusicUInt32Condition(this);
};

// Line 742: range 0000000011E0628C-0000000011E062B6
void __cdecl data::ConfigMusicUInt32LessThanCondition::~ConfigMusicUInt32LessThanCondition(
        data::ConfigMusicUInt32LessThanCondition *const this)
{
  data::ConfigMusicUInt32LessThanCondition::~ConfigMusicUInt32LessThanCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 747: range 0000000011A62B44-0000000011A62B54
const char *__cdecl data::ConfigMusicUInt32LessThanCondition::getTypeName(
        const data::ConfigMusicUInt32LessThanCondition *const this)
{
  return "ConfigMusicUInt32LessThanCondition";
};

// Line 748: range 0000000011A62B56-0000000011A62CF2
int32_t __cdecl data::ConfigMusicUInt32LessThanCondition::getHashNum(
        const data::ConfigMusicUInt32LessThanCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicUInt32LessThanCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicUInt32LessThanCondition",
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

// Line 764: range 0000000011DCEDE8-0000000011DCEE29
void __cdecl data::ConfigMusicUInt32LessThanConditionFactory::ConfigMusicUInt32LessThanConditionFactory(
        data::ConfigMusicUInt32LessThanConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32LessThanConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicUInt32LessThanConditionFactory = v2;
};

// Line 772: range 0000000011DCF132-0000000011DCF17F
void __cdecl data::ConfigMusicUInt32NoGreaterThanCondition::ConfigMusicUInt32NoGreaterThanCondition(
        data::ConfigMusicUInt32NoGreaterThanCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicUInt32Condition::ConfigMusicUInt32Condition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32NoGreaterThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 772: range 0000000011DCF554-0000000011DCF5AC
void __cdecl data::ConfigMusicUInt32NoGreaterThanCondition::ConfigMusicUInt32NoGreaterThanCondition(
        data::ConfigMusicUInt32NoGreaterThanCondition *const this,
        const data::ConfigMusicUInt32NoGreaterThanCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicUInt32Condition::ConfigMusicUInt32Condition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32NoGreaterThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 778: range 0000000011E061C4-0000000011E06211
void __cdecl data::ConfigMusicUInt32NoGreaterThanCondition::~ConfigMusicUInt32NoGreaterThanCondition(
        data::ConfigMusicUInt32NoGreaterThanCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32NoGreaterThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicUInt32Condition::~ConfigMusicUInt32Condition(this);
};

// Line 778: range 0000000011E06212-0000000011E0623C
void __cdecl data::ConfigMusicUInt32NoGreaterThanCondition::~ConfigMusicUInt32NoGreaterThanCondition(
        data::ConfigMusicUInt32NoGreaterThanCondition *const this)
{
  data::ConfigMusicUInt32NoGreaterThanCondition::~ConfigMusicUInt32NoGreaterThanCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 783: range 0000000011A62CF4-0000000011A62D04
const char *__cdecl data::ConfigMusicUInt32NoGreaterThanCondition::getTypeName(
        const data::ConfigMusicUInt32NoGreaterThanCondition *const this)
{
  return "ConfigMusicUInt32NoGreaterThanCondition";
};

// Line 784: range 0000000011A62D06-0000000011A62EA2
int32_t __cdecl data::ConfigMusicUInt32NoGreaterThanCondition::getHashNum(
        const data::ConfigMusicUInt32NoGreaterThanCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicUInt32NoGreaterThanCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicUInt32NoGreaterThanCondition",
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

// Line 800: range 0000000011DCF7F6-0000000011DCF837
void __cdecl data::ConfigMusicUInt32NoGreaterThanConditionFactory::ConfigMusicUInt32NoGreaterThanConditionFactory(
        data::ConfigMusicUInt32NoGreaterThanConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32NoGreaterThanConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicUInt32NoGreaterThanConditionFactory = v2;
};

// Line 808: range 0000000011DCFB40-0000000011DCFB8D
void __cdecl data::ConfigMusicUInt32NoLessThanCondition::ConfigMusicUInt32NoLessThanCondition(
        data::ConfigMusicUInt32NoLessThanCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicUInt32Condition::ConfigMusicUInt32Condition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32NoLessThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 808: range 0000000011DCFF62-0000000011DCFFBA
void __cdecl data::ConfigMusicUInt32NoLessThanCondition::ConfigMusicUInt32NoLessThanCondition(
        data::ConfigMusicUInt32NoLessThanCondition *const this,
        const data::ConfigMusicUInt32NoLessThanCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicUInt32Condition::ConfigMusicUInt32Condition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32NoLessThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 814: range 0000000011E0614A-0000000011E06197
void __cdecl data::ConfigMusicUInt32NoLessThanCondition::~ConfigMusicUInt32NoLessThanCondition(
        data::ConfigMusicUInt32NoLessThanCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32NoLessThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicUInt32Condition::~ConfigMusicUInt32Condition(this);
};

// Line 814: range 0000000011E06198-0000000011E061C2
void __cdecl data::ConfigMusicUInt32NoLessThanCondition::~ConfigMusicUInt32NoLessThanCondition(
        data::ConfigMusicUInt32NoLessThanCondition *const this)
{
  data::ConfigMusicUInt32NoLessThanCondition::~ConfigMusicUInt32NoLessThanCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 819: range 0000000011A62EA4-0000000011A62EB4
const char *__cdecl data::ConfigMusicUInt32NoLessThanCondition::getTypeName(
        const data::ConfigMusicUInt32NoLessThanCondition *const this)
{
  return "ConfigMusicUInt32NoLessThanCondition";
};

// Line 820: range 0000000011A62EB6-0000000011A63052
int32_t __cdecl data::ConfigMusicUInt32NoLessThanCondition::getHashNum(
        const data::ConfigMusicUInt32NoLessThanCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicUInt32NoLessThanCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicUInt32NoLessThanCondition",
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

// Line 836: range 0000000011DD0204-0000000011DD0245
void __cdecl data::ConfigMusicUInt32NoLessThanConditionFactory::ConfigMusicUInt32NoLessThanConditionFactory(
        data::ConfigMusicUInt32NoLessThanConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32NoLessThanConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicUInt32NoLessThanConditionFactory = v2;
};

// Line 844: range 0000000011DD054E-0000000011DD05AB
void __cdecl data::ConfigMusicUInt32MultiCondition::ConfigMusicUInt32MultiCondition(
        data::ConfigMusicUInt32MultiCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicParameterCondition::ConfigMusicParameterCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32MultiCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  std::vector<unsigned int>::vector(&this->values);
};

// Line 844: range 0000000011DD09B0-0000000011DD0A46
void __cdecl data::ConfigMusicUInt32MultiCondition::ConfigMusicUInt32MultiCondition(
        data::ConfigMusicUInt32MultiCondition *const this,
        const data::ConfigMusicUInt32MultiCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicParameterCondition::ConfigMusicParameterCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32MultiCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
  std::vector<unsigned int>::vector(&this->values, &a2->values);
};

// Line 851: range 0000000011E0611E-0000000011E06148
void __cdecl data::ConfigMusicUInt32MultiCondition::~ConfigMusicUInt32MultiCondition(
        data::ConfigMusicUInt32MultiCondition *const this)
{
  data::ConfigMusicUInt32MultiCondition::~ConfigMusicUInt32MultiCondition(this);
  operator delete(this, 0x40uLL);
};

// Line 851: range 0000000011E060C0-0000000011E0611D
void __cdecl data::ConfigMusicUInt32MultiCondition::~ConfigMusicUInt32MultiCondition(
        data::ConfigMusicUInt32MultiCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32MultiCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  std::vector<unsigned int>::~vector(&this->values);
  data::ConfigMusicParameterCondition::~ConfigMusicParameterCondition(this);
};

// Line 856: range 0000000011A63054-0000000011A63064
const char *__cdecl data::ConfigMusicUInt32MultiCondition::getTypeName(
        const data::ConfigMusicUInt32MultiCondition *const this)
{
  return "ConfigMusicUInt32MultiCondition";
};

// Line 857: range 0000000011A63066-0000000011A63202
int32_t __cdecl data::ConfigMusicUInt32MultiCondition::getHashNum(
        const data::ConfigMusicUInt32MultiCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicUInt32MultiCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicUInt32MultiCondition",
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

// Line 873: range 0000000011DD0D30-0000000011DD0D71
void __cdecl data::ConfigMusicUInt32MultiConditionFactory::ConfigMusicUInt32MultiConditionFactory(
        data::ConfigMusicUInt32MultiConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32MultiConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicUInt32MultiConditionFactory = v2;
};

// Line 881: range 0000000011DD107A-0000000011DD110F
void __cdecl data::ConfigMusicSingleCondition::ConfigMusicSingleCondition(data::ConfigMusicSingleCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicParameterCondition::ConfigMusicParameterCondition((data::ConfigMusicParameterCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicSingleCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->value, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->value = 0.0;
};

// Line 881: range 0000000011DD14E4-0000000011DD15C4
void __cdecl data::ConfigMusicSingleCondition::ConfigMusicSingleCondition(
        data::ConfigMusicSingleCondition *const this,
        const data::ConfigMusicSingleCondition *a2)
{
  int (**v2)(...); // rdx
  float value; // xmm0_4

  data::ConfigMusicParameterCondition::ConfigMusicParameterCondition(
    (data::ConfigMusicParameterCondition *const)this,
    (const data::ConfigMusicParameterCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicSingleCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->value, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->value = value;
};

// Line 888: range 0000000011DD180E-0000000011DD185B
void __cdecl data::ConfigMusicSingleCondition::~ConfigMusicSingleCondition(
        data::ConfigMusicSingleCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicSingleCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicParameterCondition::~ConfigMusicParameterCondition((data::ConfigMusicParameterCondition *const)this);
};

// Line 888: range 0000000011DD185C-0000000011DD1886
void __cdecl data::ConfigMusicSingleCondition::~ConfigMusicSingleCondition(
        data::ConfigMusicSingleCondition *const this)
{
  data::ConfigMusicSingleCondition::~ConfigMusicSingleCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 893: range 0000000011A63204-0000000011A63214
const char *__cdecl data::ConfigMusicSingleCondition::getTypeName(const data::ConfigMusicSingleCondition *const this)
{
  return "ConfigMusicSingleCondition";
};

// Line 894: range 0000000011A63216-0000000011A633B2
int32_t __cdecl data::ConfigMusicSingleCondition::getHashNum(const data::ConfigMusicSingleCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicSingleCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicSingleCondition",
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

// Line 913: range 0000000011DD1888-0000000011DD18D5
void __cdecl data::ConfigMusicSingleEqualityCondition::ConfigMusicSingleEqualityCondition(
        data::ConfigMusicSingleEqualityCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicSingleCondition::ConfigMusicSingleCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicSingleEqualityCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 913: range 0000000011DD1CAA-0000000011DD1D02
void __cdecl data::ConfigMusicSingleEqualityCondition::ConfigMusicSingleEqualityCondition(
        data::ConfigMusicSingleEqualityCondition *const this,
        const data::ConfigMusicSingleEqualityCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicSingleCondition::ConfigMusicSingleCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicSingleEqualityCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 919: range 0000000011E06094-0000000011E060BE
void __cdecl data::ConfigMusicSingleEqualityCondition::~ConfigMusicSingleEqualityCondition(
        data::ConfigMusicSingleEqualityCondition *const this)
{
  data::ConfigMusicSingleEqualityCondition::~ConfigMusicSingleEqualityCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 919: range 0000000011E06046-0000000011E06093
void __cdecl data::ConfigMusicSingleEqualityCondition::~ConfigMusicSingleEqualityCondition(
        data::ConfigMusicSingleEqualityCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicSingleEqualityCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicSingleCondition::~ConfigMusicSingleCondition(this);
};

// Line 924: range 0000000011A633B4-0000000011A633C4
const char *__cdecl data::ConfigMusicSingleEqualityCondition::getTypeName(
        const data::ConfigMusicSingleEqualityCondition *const this)
{
  return "ConfigMusicSingleEqualityCondition";
};

// Line 925: range 0000000011A633C6-0000000011A63562
int32_t __cdecl data::ConfigMusicSingleEqualityCondition::getHashNum(
        const data::ConfigMusicSingleEqualityCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicSingleEqualityCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicSingleEqualityCondition",
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

// Line 941: range 0000000011DD1F4C-0000000011DD1F8D
void __cdecl data::ConfigMusicSingleEqualityConditionFactory::ConfigMusicSingleEqualityConditionFactory(
        data::ConfigMusicSingleEqualityConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicSingleEqualityConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicSingleEqualityConditionFactory = v2;
};

// Line 949: range 0000000011DD2296-0000000011DD22E3
void __cdecl data::ConfigMusicSingleInequalityCondition::ConfigMusicSingleInequalityCondition(
        data::ConfigMusicSingleInequalityCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicSingleCondition::ConfigMusicSingleCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicSingleInequalityCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 949: range 0000000011DD26B8-0000000011DD2710
void __cdecl data::ConfigMusicSingleInequalityCondition::ConfigMusicSingleInequalityCondition(
        data::ConfigMusicSingleInequalityCondition *const this,
        const data::ConfigMusicSingleInequalityCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicSingleCondition::ConfigMusicSingleCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicSingleInequalityCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 955: range 0000000011E0601A-0000000011E06044
void __cdecl data::ConfigMusicSingleInequalityCondition::~ConfigMusicSingleInequalityCondition(
        data::ConfigMusicSingleInequalityCondition *const this)
{
  data::ConfigMusicSingleInequalityCondition::~ConfigMusicSingleInequalityCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 955: range 0000000011E05FCC-0000000011E06019
void __cdecl data::ConfigMusicSingleInequalityCondition::~ConfigMusicSingleInequalityCondition(
        data::ConfigMusicSingleInequalityCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicSingleInequalityCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicSingleCondition::~ConfigMusicSingleCondition(this);
};

// Line 960: range 0000000011A63564-0000000011A63574
const char *__cdecl data::ConfigMusicSingleInequalityCondition::getTypeName(
        const data::ConfigMusicSingleInequalityCondition *const this)
{
  return "ConfigMusicSingleInequalityCondition";
};

// Line 961: range 0000000011A63576-0000000011A63712
int32_t __cdecl data::ConfigMusicSingleInequalityCondition::getHashNum(
        const data::ConfigMusicSingleInequalityCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicSingleInequalityCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicSingleInequalityCondition",
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

// Line 977: range 0000000011DD295A-0000000011DD299B
void __cdecl data::ConfigMusicSingleInequalityConditionFactory::ConfigMusicSingleInequalityConditionFactory(
        data::ConfigMusicSingleInequalityConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicSingleInequalityConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicSingleInequalityConditionFactory = v2;
};

// Line 985: range 0000000011DD2CA4-0000000011DD2CF1
void __cdecl data::ConfigMusicSingleGreaterThanCondition::ConfigMusicSingleGreaterThanCondition(
        data::ConfigMusicSingleGreaterThanCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicSingleCondition::ConfigMusicSingleCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicSingleGreaterThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 985: range 0000000011DD30C6-0000000011DD311E
void __cdecl data::ConfigMusicSingleGreaterThanCondition::ConfigMusicSingleGreaterThanCondition(
        data::ConfigMusicSingleGreaterThanCondition *const this,
        const data::ConfigMusicSingleGreaterThanCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicSingleCondition::ConfigMusicSingleCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicSingleGreaterThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 991: range 0000000011E05FA0-0000000011E05FCA
void __cdecl data::ConfigMusicSingleGreaterThanCondition::~ConfigMusicSingleGreaterThanCondition(
        data::ConfigMusicSingleGreaterThanCondition *const this)
{
  data::ConfigMusicSingleGreaterThanCondition::~ConfigMusicSingleGreaterThanCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 991: range 0000000011E05F52-0000000011E05F9F
void __cdecl data::ConfigMusicSingleGreaterThanCondition::~ConfigMusicSingleGreaterThanCondition(
        data::ConfigMusicSingleGreaterThanCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicSingleGreaterThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicSingleCondition::~ConfigMusicSingleCondition(this);
};

// Line 996: range 0000000011A63714-0000000011A63724
const char *__cdecl data::ConfigMusicSingleGreaterThanCondition::getTypeName(
        const data::ConfigMusicSingleGreaterThanCondition *const this)
{
  return "ConfigMusicSingleGreaterThanCondition";
};

// Line 997: range 0000000011A63726-0000000011A638C2
int32_t __cdecl data::ConfigMusicSingleGreaterThanCondition::getHashNum(
        const data::ConfigMusicSingleGreaterThanCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicSingleGreaterThanCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicSingleGreaterThanCondition",
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

// Line 1013: range 0000000011DD3368-0000000011DD33A9
void __cdecl data::ConfigMusicSingleGreaterThanConditionFactory::ConfigMusicSingleGreaterThanConditionFactory(
        data::ConfigMusicSingleGreaterThanConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicSingleGreaterThanConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicSingleGreaterThanConditionFactory = v2;
};

// Line 1021: range 0000000011DD36B2-0000000011DD36FF
void __cdecl data::ConfigMusicSingleLessThanCondition::ConfigMusicSingleLessThanCondition(
        data::ConfigMusicSingleLessThanCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicSingleCondition::ConfigMusicSingleCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicSingleLessThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 1021: range 0000000011DD3AD4-0000000011DD3B2C
void __cdecl data::ConfigMusicSingleLessThanCondition::ConfigMusicSingleLessThanCondition(
        data::ConfigMusicSingleLessThanCondition *const this,
        const data::ConfigMusicSingleLessThanCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicSingleCondition::ConfigMusicSingleCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicSingleLessThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 1027: range 0000000011E05ED8-0000000011E05F25
void __cdecl data::ConfigMusicSingleLessThanCondition::~ConfigMusicSingleLessThanCondition(
        data::ConfigMusicSingleLessThanCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicSingleLessThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicSingleCondition::~ConfigMusicSingleCondition(this);
};

// Line 1027: range 0000000011E05F26-0000000011E05F50
void __cdecl data::ConfigMusicSingleLessThanCondition::~ConfigMusicSingleLessThanCondition(
        data::ConfigMusicSingleLessThanCondition *const this)
{
  data::ConfigMusicSingleLessThanCondition::~ConfigMusicSingleLessThanCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 1032: range 0000000011A638C4-0000000011A638D4
const char *__cdecl data::ConfigMusicSingleLessThanCondition::getTypeName(
        const data::ConfigMusicSingleLessThanCondition *const this)
{
  return "ConfigMusicSingleLessThanCondition";
};

// Line 1033: range 0000000011A638D6-0000000011A63A72
int32_t __cdecl data::ConfigMusicSingleLessThanCondition::getHashNum(
        const data::ConfigMusicSingleLessThanCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicSingleLessThanCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicSingleLessThanCondition",
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

// Line 1049: range 0000000011DD3D76-0000000011DD3DB7
void __cdecl data::ConfigMusicSingleLessThanConditionFactory::ConfigMusicSingleLessThanConditionFactory(
        data::ConfigMusicSingleLessThanConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicSingleLessThanConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicSingleLessThanConditionFactory = v2;
};

// Line 1057: range 0000000011DD40C0-0000000011DD410D
void __cdecl data::ConfigMusicSingleNoGreaterThanCondition::ConfigMusicSingleNoGreaterThanCondition(
        data::ConfigMusicSingleNoGreaterThanCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicSingleCondition::ConfigMusicSingleCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicSingleNoGreaterThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 1057: range 0000000011DD44E2-0000000011DD453A
void __cdecl data::ConfigMusicSingleNoGreaterThanCondition::ConfigMusicSingleNoGreaterThanCondition(
        data::ConfigMusicSingleNoGreaterThanCondition *const this,
        const data::ConfigMusicSingleNoGreaterThanCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicSingleCondition::ConfigMusicSingleCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicSingleNoGreaterThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 1063: range 0000000011E05E5E-0000000011E05EAB
void __cdecl data::ConfigMusicSingleNoGreaterThanCondition::~ConfigMusicSingleNoGreaterThanCondition(
        data::ConfigMusicSingleNoGreaterThanCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicSingleNoGreaterThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicSingleCondition::~ConfigMusicSingleCondition(this);
};

// Line 1063: range 0000000011E05EAC-0000000011E05ED6
void __cdecl data::ConfigMusicSingleNoGreaterThanCondition::~ConfigMusicSingleNoGreaterThanCondition(
        data::ConfigMusicSingleNoGreaterThanCondition *const this)
{
  data::ConfigMusicSingleNoGreaterThanCondition::~ConfigMusicSingleNoGreaterThanCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 1068: range 0000000011A63A74-0000000011A63A84
const char *__cdecl data::ConfigMusicSingleNoGreaterThanCondition::getTypeName(
        const data::ConfigMusicSingleNoGreaterThanCondition *const this)
{
  return "ConfigMusicSingleNoGreaterThanCondition";
};

// Line 1069: range 0000000011A63A86-0000000011A63C22
int32_t __cdecl data::ConfigMusicSingleNoGreaterThanCondition::getHashNum(
        const data::ConfigMusicSingleNoGreaterThanCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicSingleNoGreaterThanCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicSingleNoGreaterThanCondition",
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

// Line 1085: range 0000000011DD4784-0000000011DD47C5
void __cdecl data::ConfigMusicSingleNoGreaterThanConditionFactory::ConfigMusicSingleNoGreaterThanConditionFactory(
        data::ConfigMusicSingleNoGreaterThanConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicSingleNoGreaterThanConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicSingleNoGreaterThanConditionFactory = v2;
};

// Line 1093: range 0000000011DD4ACE-0000000011DD4B1B
void __cdecl data::ConfigMusicSingleNoLessThanCondition::ConfigMusicSingleNoLessThanCondition(
        data::ConfigMusicSingleNoLessThanCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicSingleCondition::ConfigMusicSingleCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicSingleNoLessThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 1093: range 0000000011DD4EF0-0000000011DD4F48
void __cdecl data::ConfigMusicSingleNoLessThanCondition::ConfigMusicSingleNoLessThanCondition(
        data::ConfigMusicSingleNoLessThanCondition *const this,
        const data::ConfigMusicSingleNoLessThanCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicSingleCondition::ConfigMusicSingleCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicSingleNoLessThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 1099: range 0000000011E05E32-0000000011E05E5C
void __cdecl data::ConfigMusicSingleNoLessThanCondition::~ConfigMusicSingleNoLessThanCondition(
        data::ConfigMusicSingleNoLessThanCondition *const this)
{
  data::ConfigMusicSingleNoLessThanCondition::~ConfigMusicSingleNoLessThanCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 1099: range 0000000011E05DE4-0000000011E05E31
void __cdecl data::ConfigMusicSingleNoLessThanCondition::~ConfigMusicSingleNoLessThanCondition(
        data::ConfigMusicSingleNoLessThanCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicSingleNoLessThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicSingleCondition::~ConfigMusicSingleCondition(this);
};

// Line 1104: range 0000000011A63C24-0000000011A63C34
const char *__cdecl data::ConfigMusicSingleNoLessThanCondition::getTypeName(
        const data::ConfigMusicSingleNoLessThanCondition *const this)
{
  return "ConfigMusicSingleNoLessThanCondition";
};

// Line 1105: range 0000000011A63C36-0000000011A63DD2
int32_t __cdecl data::ConfigMusicSingleNoLessThanCondition::getHashNum(
        const data::ConfigMusicSingleNoLessThanCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicSingleNoLessThanCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicSingleNoLessThanCondition",
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

// Line 1121: range 0000000011DD5192-0000000011DD51D3
void __cdecl data::ConfigMusicSingleNoLessThanConditionFactory::ConfigMusicSingleNoLessThanConditionFactory(
        data::ConfigMusicSingleNoLessThanConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicSingleNoLessThanConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicSingleNoLessThanConditionFactory = v2;
};

// Line 1129: range 0000000011DD54DC-0000000011DD555B
void __cdecl data::ConfigMusicDoubleCondition::ConfigMusicDoubleCondition(data::ConfigMusicDoubleCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicParameterCondition::ConfigMusicParameterCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicDoubleCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->value, v1);
  this->value = 0.0;
};

// Line 1129: range 0000000011DD5936-0000000011DD59EA
void __cdecl data::ConfigMusicDoubleCondition::ConfigMusicDoubleCondition(
        data::ConfigMusicDoubleCondition *const this,
        const data::ConfigMusicDoubleCondition *a2)
{
  int (**v2)(...); // rdx
  double value; // xmm0_8

  data::ConfigMusicParameterCondition::ConfigMusicParameterCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicDoubleCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->value);
  value = a2->value;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->value, a2);
  this->value = value;
};

// Line 1136: range 0000000011DD5C34-0000000011DD5C81
void __cdecl data::ConfigMusicDoubleCondition::~ConfigMusicDoubleCondition(
        data::ConfigMusicDoubleCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicDoubleCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicParameterCondition::~ConfigMusicParameterCondition(this);
};

// Line 1136: range 0000000011DD5C82-0000000011DD5CAC
void __cdecl data::ConfigMusicDoubleCondition::~ConfigMusicDoubleCondition(
        data::ConfigMusicDoubleCondition *const this)
{
  data::ConfigMusicDoubleCondition::~ConfigMusicDoubleCondition(this);
  operator delete(this, 0x30uLL);
};

// Line 1141: range 0000000011A63DD4-0000000011A63DE4
const char *__cdecl data::ConfigMusicDoubleCondition::getTypeName(const data::ConfigMusicDoubleCondition *const this)
{
  return "ConfigMusicDoubleCondition";
};

// Line 1142: range 0000000011A63DE6-0000000011A63F82
int32_t __cdecl data::ConfigMusicDoubleCondition::getHashNum(const data::ConfigMusicDoubleCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicDoubleCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicDoubleCondition",
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

// Line 1161: range 0000000011DD5CAE-0000000011DD5CFB
void __cdecl data::ConfigMusicDoubleEqualityCondition::ConfigMusicDoubleEqualityCondition(
        data::ConfigMusicDoubleEqualityCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicDoubleCondition::ConfigMusicDoubleCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicDoubleEqualityCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 1161: range 0000000011DD60D6-0000000011DD612E
void __cdecl data::ConfigMusicDoubleEqualityCondition::ConfigMusicDoubleEqualityCondition(
        data::ConfigMusicDoubleEqualityCondition *const this,
        const data::ConfigMusicDoubleEqualityCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicDoubleCondition::ConfigMusicDoubleCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicDoubleEqualityCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 1167: range 0000000011E05DB8-0000000011E05DE2
void __cdecl data::ConfigMusicDoubleEqualityCondition::~ConfigMusicDoubleEqualityCondition(
        data::ConfigMusicDoubleEqualityCondition *const this)
{
  data::ConfigMusicDoubleEqualityCondition::~ConfigMusicDoubleEqualityCondition(this);
  operator delete(this, 0x30uLL);
};

// Line 1167: range 0000000011E05D6A-0000000011E05DB7
void __cdecl data::ConfigMusicDoubleEqualityCondition::~ConfigMusicDoubleEqualityCondition(
        data::ConfigMusicDoubleEqualityCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicDoubleEqualityCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicDoubleCondition::~ConfigMusicDoubleCondition(this);
};

// Line 1172: range 0000000011A63F84-0000000011A63F94
const char *__cdecl data::ConfigMusicDoubleEqualityCondition::getTypeName(
        const data::ConfigMusicDoubleEqualityCondition *const this)
{
  return "ConfigMusicDoubleEqualityCondition";
};

// Line 1173: range 0000000011A63F96-0000000011A64132
int32_t __cdecl data::ConfigMusicDoubleEqualityCondition::getHashNum(
        const data::ConfigMusicDoubleEqualityCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicDoubleEqualityCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicDoubleEqualityCondition",
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

// Line 1189: range 0000000011DD6378-0000000011DD63B9
void __cdecl data::ConfigMusicDoubleEqualityConditionFactory::ConfigMusicDoubleEqualityConditionFactory(
        data::ConfigMusicDoubleEqualityConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicDoubleEqualityConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicDoubleEqualityConditionFactory = v2;
};

// Line 1197: range 0000000011DD66C2-0000000011DD670F
void __cdecl data::ConfigMusicDoubleInequalityCondition::ConfigMusicDoubleInequalityCondition(
        data::ConfigMusicDoubleInequalityCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicDoubleCondition::ConfigMusicDoubleCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicDoubleInequalityCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 1197: range 0000000011DD6AEA-0000000011DD6B42
void __cdecl data::ConfigMusicDoubleInequalityCondition::ConfigMusicDoubleInequalityCondition(
        data::ConfigMusicDoubleInequalityCondition *const this,
        const data::ConfigMusicDoubleInequalityCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicDoubleCondition::ConfigMusicDoubleCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicDoubleInequalityCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 1203: range 0000000011E05CF0-0000000011E05D3D
void __cdecl data::ConfigMusicDoubleInequalityCondition::~ConfigMusicDoubleInequalityCondition(
        data::ConfigMusicDoubleInequalityCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicDoubleInequalityCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicDoubleCondition::~ConfigMusicDoubleCondition(this);
};

// Line 1203: range 0000000011E05D3E-0000000011E05D68
void __cdecl data::ConfigMusicDoubleInequalityCondition::~ConfigMusicDoubleInequalityCondition(
        data::ConfigMusicDoubleInequalityCondition *const this)
{
  data::ConfigMusicDoubleInequalityCondition::~ConfigMusicDoubleInequalityCondition(this);
  operator delete(this, 0x30uLL);
};

// Line 1208: range 0000000011A64134-0000000011A64144
const char *__cdecl data::ConfigMusicDoubleInequalityCondition::getTypeName(
        const data::ConfigMusicDoubleInequalityCondition *const this)
{
  return "ConfigMusicDoubleInequalityCondition";
};

// Line 1209: range 0000000011A64146-0000000011A642E2
int32_t __cdecl data::ConfigMusicDoubleInequalityCondition::getHashNum(
        const data::ConfigMusicDoubleInequalityCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicDoubleInequalityCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicDoubleInequalityCondition",
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

// Line 1225: range 0000000011DD6D8C-0000000011DD6DCD
void __cdecl data::ConfigMusicDoubleInequalityConditionFactory::ConfigMusicDoubleInequalityConditionFactory(
        data::ConfigMusicDoubleInequalityConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicDoubleInequalityConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicDoubleInequalityConditionFactory = v2;
};

// Line 1233: range 0000000011DD70D6-0000000011DD7123
void __cdecl data::ConfigMusicDoubleGreaterThanCondition::ConfigMusicDoubleGreaterThanCondition(
        data::ConfigMusicDoubleGreaterThanCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicDoubleCondition::ConfigMusicDoubleCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicDoubleGreaterThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 1233: range 0000000011DD74FE-0000000011DD7556
void __cdecl data::ConfigMusicDoubleGreaterThanCondition::ConfigMusicDoubleGreaterThanCondition(
        data::ConfigMusicDoubleGreaterThanCondition *const this,
        const data::ConfigMusicDoubleGreaterThanCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicDoubleCondition::ConfigMusicDoubleCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicDoubleGreaterThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 1239: range 0000000011E05CC4-0000000011E05CEE
void __cdecl data::ConfigMusicDoubleGreaterThanCondition::~ConfigMusicDoubleGreaterThanCondition(
        data::ConfigMusicDoubleGreaterThanCondition *const this)
{
  data::ConfigMusicDoubleGreaterThanCondition::~ConfigMusicDoubleGreaterThanCondition(this);
  operator delete(this, 0x30uLL);
};

// Line 1239: range 0000000011E05C76-0000000011E05CC3
void __cdecl data::ConfigMusicDoubleGreaterThanCondition::~ConfigMusicDoubleGreaterThanCondition(
        data::ConfigMusicDoubleGreaterThanCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicDoubleGreaterThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicDoubleCondition::~ConfigMusicDoubleCondition(this);
};

// Line 1244: range 0000000011A642E4-0000000011A642F4
const char *__cdecl data::ConfigMusicDoubleGreaterThanCondition::getTypeName(
        const data::ConfigMusicDoubleGreaterThanCondition *const this)
{
  return "ConfigMusicDoubleGreaterThanCondition";
};

// Line 1245: range 0000000011A642F6-0000000011A64492
int32_t __cdecl data::ConfigMusicDoubleGreaterThanCondition::getHashNum(
        const data::ConfigMusicDoubleGreaterThanCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicDoubleGreaterThanCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicDoubleGreaterThanCondition",
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

// Line 1261: range 0000000011DD77A0-0000000011DD77E1
void __cdecl data::ConfigMusicDoubleGreaterThanConditionFactory::ConfigMusicDoubleGreaterThanConditionFactory(
        data::ConfigMusicDoubleGreaterThanConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicDoubleGreaterThanConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicDoubleGreaterThanConditionFactory = v2;
};

// Line 1269: range 0000000011DD7AEA-0000000011DD7B37
void __cdecl data::ConfigMusicDoubleLessThanCondition::ConfigMusicDoubleLessThanCondition(
        data::ConfigMusicDoubleLessThanCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicDoubleCondition::ConfigMusicDoubleCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicDoubleLessThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 1269: range 0000000011DD7F12-0000000011DD7F6A
void __cdecl data::ConfigMusicDoubleLessThanCondition::ConfigMusicDoubleLessThanCondition(
        data::ConfigMusicDoubleLessThanCondition *const this,
        const data::ConfigMusicDoubleLessThanCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicDoubleCondition::ConfigMusicDoubleCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicDoubleLessThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 1275: range 0000000011E05BFC-0000000011E05C49
void __cdecl data::ConfigMusicDoubleLessThanCondition::~ConfigMusicDoubleLessThanCondition(
        data::ConfigMusicDoubleLessThanCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicDoubleLessThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicDoubleCondition::~ConfigMusicDoubleCondition(this);
};

// Line 1275: range 0000000011E05C4A-0000000011E05C74
void __cdecl data::ConfigMusicDoubleLessThanCondition::~ConfigMusicDoubleLessThanCondition(
        data::ConfigMusicDoubleLessThanCondition *const this)
{
  data::ConfigMusicDoubleLessThanCondition::~ConfigMusicDoubleLessThanCondition(this);
  operator delete(this, 0x30uLL);
};

// Line 1280: range 0000000011A64494-0000000011A644A4
const char *__cdecl data::ConfigMusicDoubleLessThanCondition::getTypeName(
        const data::ConfigMusicDoubleLessThanCondition *const this)
{
  return "ConfigMusicDoubleLessThanCondition";
};

// Line 1281: range 0000000011A644A6-0000000011A64642
int32_t __cdecl data::ConfigMusicDoubleLessThanCondition::getHashNum(
        const data::ConfigMusicDoubleLessThanCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicDoubleLessThanCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicDoubleLessThanCondition",
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

// Line 1297: range 0000000011DD81B4-0000000011DD81F5
void __cdecl data::ConfigMusicDoubleLessThanConditionFactory::ConfigMusicDoubleLessThanConditionFactory(
        data::ConfigMusicDoubleLessThanConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicDoubleLessThanConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicDoubleLessThanConditionFactory = v2;
};

// Line 1305: range 0000000011DD84FE-0000000011DD854B
void __cdecl data::ConfigMusicDoubleNoGreaterThanCondition::ConfigMusicDoubleNoGreaterThanCondition(
        data::ConfigMusicDoubleNoGreaterThanCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicDoubleCondition::ConfigMusicDoubleCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicDoubleNoGreaterThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 1305: range 0000000011DD8926-0000000011DD897E
void __cdecl data::ConfigMusicDoubleNoGreaterThanCondition::ConfigMusicDoubleNoGreaterThanCondition(
        data::ConfigMusicDoubleNoGreaterThanCondition *const this,
        const data::ConfigMusicDoubleNoGreaterThanCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicDoubleCondition::ConfigMusicDoubleCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicDoubleNoGreaterThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 1311: range 0000000011E05B82-0000000011E05BCF
void __cdecl data::ConfigMusicDoubleNoGreaterThanCondition::~ConfigMusicDoubleNoGreaterThanCondition(
        data::ConfigMusicDoubleNoGreaterThanCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicDoubleNoGreaterThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicDoubleCondition::~ConfigMusicDoubleCondition(this);
};

// Line 1311: range 0000000011E05BD0-0000000011E05BFA
void __cdecl data::ConfigMusicDoubleNoGreaterThanCondition::~ConfigMusicDoubleNoGreaterThanCondition(
        data::ConfigMusicDoubleNoGreaterThanCondition *const this)
{
  data::ConfigMusicDoubleNoGreaterThanCondition::~ConfigMusicDoubleNoGreaterThanCondition(this);
  operator delete(this, 0x30uLL);
};

// Line 1316: range 0000000011A64644-0000000011A64654
const char *__cdecl data::ConfigMusicDoubleNoGreaterThanCondition::getTypeName(
        const data::ConfigMusicDoubleNoGreaterThanCondition *const this)
{
  return "ConfigMusicDoubleNoGreaterThanCondition";
};

// Line 1317: range 0000000011A64656-0000000011A647F2
int32_t __cdecl data::ConfigMusicDoubleNoGreaterThanCondition::getHashNum(
        const data::ConfigMusicDoubleNoGreaterThanCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicDoubleNoGreaterThanCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicDoubleNoGreaterThanCondition",
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

// Line 1333: range 0000000011DD8BC8-0000000011DD8C09
void __cdecl data::ConfigMusicDoubleNoGreaterThanConditionFactory::ConfigMusicDoubleNoGreaterThanConditionFactory(
        data::ConfigMusicDoubleNoGreaterThanConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicDoubleNoGreaterThanConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicDoubleNoGreaterThanConditionFactory = v2;
};

// Line 1341: range 0000000011DD8F12-0000000011DD8F5F
void __cdecl data::ConfigMusicDoubleNoLessThanCondition::ConfigMusicDoubleNoLessThanCondition(
        data::ConfigMusicDoubleNoLessThanCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicDoubleCondition::ConfigMusicDoubleCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicDoubleNoLessThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 1341: range 0000000011DD933A-0000000011DD9392
void __cdecl data::ConfigMusicDoubleNoLessThanCondition::ConfigMusicDoubleNoLessThanCondition(
        data::ConfigMusicDoubleNoLessThanCondition *const this,
        const data::ConfigMusicDoubleNoLessThanCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicDoubleCondition::ConfigMusicDoubleCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicDoubleNoLessThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 1347: range 0000000011E05B08-0000000011E05B55
void __cdecl data::ConfigMusicDoubleNoLessThanCondition::~ConfigMusicDoubleNoLessThanCondition(
        data::ConfigMusicDoubleNoLessThanCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicDoubleNoLessThanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicDoubleCondition::~ConfigMusicDoubleCondition(this);
};

// Line 1347: range 0000000011E05B56-0000000011E05B80
void __cdecl data::ConfigMusicDoubleNoLessThanCondition::~ConfigMusicDoubleNoLessThanCondition(
        data::ConfigMusicDoubleNoLessThanCondition *const this)
{
  data::ConfigMusicDoubleNoLessThanCondition::~ConfigMusicDoubleNoLessThanCondition(this);
  operator delete(this, 0x30uLL);
};

// Line 1352: range 0000000011A647F4-0000000011A64804
const char *__cdecl data::ConfigMusicDoubleNoLessThanCondition::getTypeName(
        const data::ConfigMusicDoubleNoLessThanCondition *const this)
{
  return "ConfigMusicDoubleNoLessThanCondition";
};

// Line 1353: range 0000000011A64806-0000000011A649A2
int32_t __cdecl data::ConfigMusicDoubleNoLessThanCondition::getHashNum(
        const data::ConfigMusicDoubleNoLessThanCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicDoubleNoLessThanCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicDoubleNoLessThanCondition",
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

// Line 1369: range 0000000011DD95DC-0000000011DD961D
void __cdecl data::ConfigMusicDoubleNoLessThanConditionFactory::ConfigMusicDoubleNoLessThanConditionFactory(
        data::ConfigMusicDoubleNoLessThanConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicDoubleNoLessThanConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicDoubleNoLessThanConditionFactory = v2;
};

// Line 1377: range 0000000011DD9926-0000000011DD99B3
void __cdecl data::ConfigMusicBooleanCondition::ConfigMusicBooleanCondition(
        data::ConfigMusicBooleanCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigMusicParameterCondition::ConfigMusicParameterCondition((data::ConfigMusicParameterCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicBooleanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  v3 = ((_BYTE)this + 36) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->value, v3, v4);
  this->value = 0;
};

// Line 1377: range 0000000011DD9D88-0000000011DD9E60
void __cdecl data::ConfigMusicBooleanCondition::ConfigMusicBooleanCondition(
        data::ConfigMusicBooleanCondition *const this,
        const data::ConfigMusicBooleanCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool value; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigMusicParameterCondition::ConfigMusicParameterCondition(
    (data::ConfigMusicParameterCondition *const)this,
    (const data::ConfigMusicParameterCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicBooleanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
  v3 = ((_BYTE)a2 + 36) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->value, v3, v4);
  value = a2->value;
  v6 = *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 36) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->value, v3, v7);
  this->value = value;
};

// Line 1384: range 0000000011E05ADC-0000000011E05B06
void __cdecl data::ConfigMusicBooleanCondition::~ConfigMusicBooleanCondition(
        data::ConfigMusicBooleanCondition *const this)
{
  data::ConfigMusicBooleanCondition::~ConfigMusicBooleanCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 1384: range 0000000011E05A8E-0000000011E05ADB
void __cdecl data::ConfigMusicBooleanCondition::~ConfigMusicBooleanCondition(
        data::ConfigMusicBooleanCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicBooleanCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicParameterCondition::~ConfigMusicParameterCondition((data::ConfigMusicParameterCondition *const)this);
};

// Line 1389: range 0000000011A649A4-0000000011A649B4
const char *__cdecl data::ConfigMusicBooleanCondition::getTypeName(const data::ConfigMusicBooleanCondition *const this)
{
  return "ConfigMusicBooleanCondition";
};

// Line 1390: range 0000000011A649B6-0000000011A64B52
int32_t __cdecl data::ConfigMusicBooleanCondition::getHashNum(const data::ConfigMusicBooleanCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicBooleanCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicBooleanCondition",
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

// Line 1406: range 0000000011DDA0AA-0000000011DDA0EB
void __cdecl data::ConfigMusicBooleanConditionFactory::ConfigMusicBooleanConditionFactory(
        data::ConfigMusicBooleanConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicBooleanConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicBooleanConditionFactory = v2;
};

// Line 1414: range 0000000011DDA3F4-0000000011DDA451
void __cdecl data::ConfigMusicStringCondition::ConfigMusicStringCondition(data::ConfigMusicStringCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicParameterCondition::ConfigMusicParameterCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicStringCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  std::string::basic_string(&this->value);
};

// Line 1414: range 0000000011DDA86C-0000000011DDA902
void __cdecl data::ConfigMusicStringCondition::ConfigMusicStringCondition(
        data::ConfigMusicStringCondition *const this,
        const data::ConfigMusicStringCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicParameterCondition::ConfigMusicParameterCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicStringCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
  std::string::basic_string(&this->value, &a2->value);
};

// Line 1421: range 0000000011DDAC4A-0000000011DDAC74
void __cdecl data::ConfigMusicStringCondition::~ConfigMusicStringCondition(
        data::ConfigMusicStringCondition *const this)
{
  data::ConfigMusicStringCondition::~ConfigMusicStringCondition(this);
  operator delete(this, 0x48uLL);
};

// Line 1421: range 0000000011DDABEC-0000000011DDAC49
void __cdecl data::ConfigMusicStringCondition::~ConfigMusicStringCondition(
        data::ConfigMusicStringCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicStringCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  std::string::~string(&this->value);
  data::ConfigMusicParameterCondition::~ConfigMusicParameterCondition(this);
};

// Line 1426: range 0000000011A64B54-0000000011A64B64
const char *__cdecl data::ConfigMusicStringCondition::getTypeName(const data::ConfigMusicStringCondition *const this)
{
  return "ConfigMusicStringCondition";
};

// Line 1427: range 0000000011A64B66-0000000011A64D02
int32_t __cdecl data::ConfigMusicStringCondition::getHashNum(const data::ConfigMusicStringCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicStringCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicStringCondition",
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

// Line 1446: range 0000000011DDAC76-0000000011DDACC3
void __cdecl data::ConfigMusicStringEqualityCondition::ConfigMusicStringEqualityCondition(
        data::ConfigMusicStringEqualityCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicStringCondition::ConfigMusicStringCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicStringEqualityCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 1446: range 0000000011DDB0DE-0000000011DDB136
void __cdecl data::ConfigMusicStringEqualityCondition::ConfigMusicStringEqualityCondition(
        data::ConfigMusicStringEqualityCondition *const this,
        const data::ConfigMusicStringEqualityCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicStringCondition::ConfigMusicStringCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicStringEqualityCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 1452: range 0000000011E05A14-0000000011E05A61
void __cdecl data::ConfigMusicStringEqualityCondition::~ConfigMusicStringEqualityCondition(
        data::ConfigMusicStringEqualityCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicStringEqualityCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicStringCondition::~ConfigMusicStringCondition(this);
};

// Line 1452: range 0000000011E05A62-0000000011E05A8C
void __cdecl data::ConfigMusicStringEqualityCondition::~ConfigMusicStringEqualityCondition(
        data::ConfigMusicStringEqualityCondition *const this)
{
  data::ConfigMusicStringEqualityCondition::~ConfigMusicStringEqualityCondition(this);
  operator delete(this, 0x48uLL);
};

// Line 1457: range 0000000011A64D04-0000000011A64D14
const char *__cdecl data::ConfigMusicStringEqualityCondition::getTypeName(
        const data::ConfigMusicStringEqualityCondition *const this)
{
  return "ConfigMusicStringEqualityCondition";
};

// Line 1458: range 0000000011A64D16-0000000011A64EB2
int32_t __cdecl data::ConfigMusicStringEqualityCondition::getHashNum(
        const data::ConfigMusicStringEqualityCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicStringEqualityCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicStringEqualityCondition",
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

// Line 1474: range 0000000011DDB420-0000000011DDB461
void __cdecl data::ConfigMusicStringEqualityConditionFactory::ConfigMusicStringEqualityConditionFactory(
        data::ConfigMusicStringEqualityConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicStringEqualityConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicStringEqualityConditionFactory = v2;
};

// Line 1482: range 0000000011DDB76A-0000000011DDB7B7
void __cdecl data::ConfigMusicStringContainmentCondition::ConfigMusicStringContainmentCondition(
        data::ConfigMusicStringContainmentCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicStringCondition::ConfigMusicStringCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicStringContainmentCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 1482: range 0000000011DDBBD2-0000000011DDBC2A
void __cdecl data::ConfigMusicStringContainmentCondition::ConfigMusicStringContainmentCondition(
        data::ConfigMusicStringContainmentCondition *const this,
        const data::ConfigMusicStringContainmentCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicStringCondition::ConfigMusicStringCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicStringContainmentCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 1488: range 0000000011E059E8-0000000011E05A12
void __cdecl data::ConfigMusicStringContainmentCondition::~ConfigMusicStringContainmentCondition(
        data::ConfigMusicStringContainmentCondition *const this)
{
  data::ConfigMusicStringContainmentCondition::~ConfigMusicStringContainmentCondition(this);
  operator delete(this, 0x48uLL);
};

// Line 1488: range 0000000011E0599A-0000000011E059E7
void __cdecl data::ConfigMusicStringContainmentCondition::~ConfigMusicStringContainmentCondition(
        data::ConfigMusicStringContainmentCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicStringContainmentCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicStringCondition::~ConfigMusicStringCondition(this);
};

// Line 1493: range 0000000011A64EB4-0000000011A64EC4
const char *__cdecl data::ConfigMusicStringContainmentCondition::getTypeName(
        const data::ConfigMusicStringContainmentCondition *const this)
{
  return "ConfigMusicStringContainmentCondition";
};

// Line 1494: range 0000000011A64EC6-0000000011A65062
int32_t __cdecl data::ConfigMusicStringContainmentCondition::getHashNum(
        const data::ConfigMusicStringContainmentCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicStringContainmentCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicStringContainmentCondition",
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

// Line 1510: range 0000000011DDBF14-0000000011DDBF55
void __cdecl data::ConfigMusicStringContainmentConditionFactory::ConfigMusicStringContainmentConditionFactory(
        data::ConfigMusicStringContainmentConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicStringContainmentConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicStringContainmentConditionFactory = v2;
};

// Line 1518: range 0000000011DDC25E-0000000011DDC2AB
void __cdecl data::ConfigMusicUInt32ListCondition::ConfigMusicUInt32ListCondition(
        data::ConfigMusicUInt32ListCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicParameterCondition::ConfigMusicParameterCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32ListCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 1518: range 0000000011DDC7AC-0000000011DDC804
void __cdecl data::ConfigMusicUInt32ListCondition::ConfigMusicUInt32ListCondition(
        data::ConfigMusicUInt32ListCondition *const this,
        const data::ConfigMusicUInt32ListCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicParameterCondition::ConfigMusicParameterCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32ListCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 1524: range 0000000011DDCA4E-0000000011DDCA9B
void __cdecl data::ConfigMusicUInt32ListCondition::~ConfigMusicUInt32ListCondition(
        data::ConfigMusicUInt32ListCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32ListCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicParameterCondition::~ConfigMusicParameterCondition(this);
};

// Line 1524: range 0000000011DDCA9C-0000000011DDCAC6
void __cdecl data::ConfigMusicUInt32ListCondition::~ConfigMusicUInt32ListCondition(
        data::ConfigMusicUInt32ListCondition *const this)
{
  data::ConfigMusicUInt32ListCondition::~ConfigMusicUInt32ListCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 1529: range 0000000011A65064-0000000011A65074
const char *__cdecl data::ConfigMusicUInt32ListCondition::getTypeName(
        const data::ConfigMusicUInt32ListCondition *const this)
{
  return "ConfigMusicUInt32ListCondition";
};

// Line 1530: range 0000000011A65076-0000000011A65212
int32_t __cdecl data::ConfigMusicUInt32ListCondition::getHashNum(
        const data::ConfigMusicUInt32ListCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicUInt32ListCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicUInt32ListCondition",
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

// Line 1549: range 0000000011DDCAC8-0000000011DDCB55
void __cdecl data::ConfigMusicUInt32ListEmptinessCondition::ConfigMusicUInt32ListEmptinessCondition(
        data::ConfigMusicUInt32ListEmptinessCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigMusicUInt32ListCondition::ConfigMusicUInt32ListCondition((data::ConfigMusicUInt32ListCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32ListEmptinessCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  v3 = ((_BYTE)this + 36) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->value, v3, v4);
  this->value = 0;
};

// Line 1549: range 0000000011DDCF2A-0000000011DDD002
void __cdecl data::ConfigMusicUInt32ListEmptinessCondition::ConfigMusicUInt32ListEmptinessCondition(
        data::ConfigMusicUInt32ListEmptinessCondition *const this,
        const data::ConfigMusicUInt32ListEmptinessCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool value; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigMusicUInt32ListCondition::ConfigMusicUInt32ListCondition(
    (data::ConfigMusicUInt32ListCondition *const)this,
    (const data::ConfigMusicUInt32ListCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32ListEmptinessCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
  v3 = ((_BYTE)a2 + 36) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->value, v3, v4);
  value = a2->value;
  v6 = *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 36) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->value, v3, v7);
  this->value = value;
};

// Line 1556: range 0000000011E0596E-0000000011E05998
void __cdecl data::ConfigMusicUInt32ListEmptinessCondition::~ConfigMusicUInt32ListEmptinessCondition(
        data::ConfigMusicUInt32ListEmptinessCondition *const this)
{
  data::ConfigMusicUInt32ListEmptinessCondition::~ConfigMusicUInt32ListEmptinessCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 1556: range 0000000011E05920-0000000011E0596D
void __cdecl data::ConfigMusicUInt32ListEmptinessCondition::~ConfigMusicUInt32ListEmptinessCondition(
        data::ConfigMusicUInt32ListEmptinessCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32ListEmptinessCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicUInt32ListCondition::~ConfigMusicUInt32ListCondition((data::ConfigMusicUInt32ListCondition *const)this);
};

// Line 1561: range 0000000011A65214-0000000011A65224
const char *__cdecl data::ConfigMusicUInt32ListEmptinessCondition::getTypeName(
        const data::ConfigMusicUInt32ListEmptinessCondition *const this)
{
  return "ConfigMusicUInt32ListEmptinessCondition";
};

// Line 1562: range 0000000011A65226-0000000011A653C2
int32_t __cdecl data::ConfigMusicUInt32ListEmptinessCondition::getHashNum(
        const data::ConfigMusicUInt32ListEmptinessCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicUInt32ListEmptinessCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicUInt32ListEmptinessCondition",
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

// Line 1578: range 0000000011DDD24C-0000000011DDD28D
void __cdecl data::ConfigMusicUInt32ListEmptinessConditionFactory::ConfigMusicUInt32ListEmptinessConditionFactory(
        data::ConfigMusicUInt32ListEmptinessConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32ListEmptinessConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicUInt32ListEmptinessConditionFactory = v2;
};

// Line 1586: range 0000000011DDD596-0000000011DDD629
void __cdecl data::ConfigMusicUInt32ListMemberCondition::ConfigMusicUInt32ListMemberCondition(
        data::ConfigMusicUInt32ListMemberCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicUInt32ListCondition::ConfigMusicUInt32ListCondition((data::ConfigMusicUInt32ListCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32ListMemberCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->value, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->value = 0;
};

// Line 1586: range 0000000011DDD9FE-0000000011DDDADB
void __cdecl data::ConfigMusicUInt32ListMemberCondition::ConfigMusicUInt32ListMemberCondition(
        data::ConfigMusicUInt32ListMemberCondition *const this,
        const data::ConfigMusicUInt32ListMemberCondition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t value; // ecx
  char v5; // dl

  data::ConfigMusicUInt32ListCondition::ConfigMusicUInt32ListCondition(
    (data::ConfigMusicUInt32ListCondition *const)this,
    (const data::ConfigMusicUInt32ListCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32ListMemberCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  v5 = *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->value, v3);
  }
  this->value = value;
};

// Line 1593: range 0000000011DDDD24-0000000011DDDD71
void __cdecl data::ConfigMusicUInt32ListMemberCondition::~ConfigMusicUInt32ListMemberCondition(
        data::ConfigMusicUInt32ListMemberCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32ListMemberCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicUInt32ListCondition::~ConfigMusicUInt32ListCondition((data::ConfigMusicUInt32ListCondition *const)this);
};

// Line 1593: range 0000000011DDDD72-0000000011DDDD9C
void __cdecl data::ConfigMusicUInt32ListMemberCondition::~ConfigMusicUInt32ListMemberCondition(
        data::ConfigMusicUInt32ListMemberCondition *const this)
{
  data::ConfigMusicUInt32ListMemberCondition::~ConfigMusicUInt32ListMemberCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 1598: range 0000000011A653C4-0000000011A653D4
const char *__cdecl data::ConfigMusicUInt32ListMemberCondition::getTypeName(
        const data::ConfigMusicUInt32ListMemberCondition *const this)
{
  return "ConfigMusicUInt32ListMemberCondition";
};

// Line 1599: range 0000000011A653D6-0000000011A65572
int32_t __cdecl data::ConfigMusicUInt32ListMemberCondition::getHashNum(
        const data::ConfigMusicUInt32ListMemberCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicUInt32ListMemberCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicUInt32ListMemberCondition",
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

// Line 1618: range 0000000011DDDD9E-0000000011DDDDEB
void __cdecl data::ConfigMusicUInt32ListPresenceCondition::ConfigMusicUInt32ListPresenceCondition(
        data::ConfigMusicUInt32ListPresenceCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicUInt32ListMemberCondition::ConfigMusicUInt32ListMemberCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32ListPresenceCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 1618: range 0000000011DDE1C0-0000000011DDE218
void __cdecl data::ConfigMusicUInt32ListPresenceCondition::ConfigMusicUInt32ListPresenceCondition(
        data::ConfigMusicUInt32ListPresenceCondition *const this,
        const data::ConfigMusicUInt32ListPresenceCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicUInt32ListMemberCondition::ConfigMusicUInt32ListMemberCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32ListPresenceCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 1624: range 0000000011E058F4-0000000011E0591E
void __cdecl data::ConfigMusicUInt32ListPresenceCondition::~ConfigMusicUInt32ListPresenceCondition(
        data::ConfigMusicUInt32ListPresenceCondition *const this)
{
  data::ConfigMusicUInt32ListPresenceCondition::~ConfigMusicUInt32ListPresenceCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 1624: range 0000000011E058A6-0000000011E058F3
void __cdecl data::ConfigMusicUInt32ListPresenceCondition::~ConfigMusicUInt32ListPresenceCondition(
        data::ConfigMusicUInt32ListPresenceCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32ListPresenceCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicUInt32ListMemberCondition::~ConfigMusicUInt32ListMemberCondition(this);
};

// Line 1629: range 0000000011A65574-0000000011A65584
const char *__cdecl data::ConfigMusicUInt32ListPresenceCondition::getTypeName(
        const data::ConfigMusicUInt32ListPresenceCondition *const this)
{
  return "ConfigMusicUInt32ListPresenceCondition";
};

// Line 1630: range 0000000011A65586-0000000011A65722
int32_t __cdecl data::ConfigMusicUInt32ListPresenceCondition::getHashNum(
        const data::ConfigMusicUInt32ListPresenceCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicUInt32ListPresenceCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicUInt32ListPresenceCondition",
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

// Line 1646: range 0000000011DDE462-0000000011DDE4A3
void __cdecl data::ConfigMusicUInt32ListPresenceConditionFactory::ConfigMusicUInt32ListPresenceConditionFactory(
        data::ConfigMusicUInt32ListPresenceConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32ListPresenceConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicUInt32ListPresenceConditionFactory = v2;
};

// Line 1654: range 0000000011DDE7AC-0000000011DDE7F9
void __cdecl data::ConfigMusicUInt32ListAbsenceCondition::ConfigMusicUInt32ListAbsenceCondition(
        data::ConfigMusicUInt32ListAbsenceCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicUInt32ListMemberCondition::ConfigMusicUInt32ListMemberCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32ListAbsenceCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 1654: range 0000000011DDEBCE-0000000011DDEC26
void __cdecl data::ConfigMusicUInt32ListAbsenceCondition::ConfigMusicUInt32ListAbsenceCondition(
        data::ConfigMusicUInt32ListAbsenceCondition *const this,
        const data::ConfigMusicUInt32ListAbsenceCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicUInt32ListMemberCondition::ConfigMusicUInt32ListMemberCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32ListAbsenceCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 1660: range 0000000011E0587A-0000000011E058A4
void __cdecl data::ConfigMusicUInt32ListAbsenceCondition::~ConfigMusicUInt32ListAbsenceCondition(
        data::ConfigMusicUInt32ListAbsenceCondition *const this)
{
  data::ConfigMusicUInt32ListAbsenceCondition::~ConfigMusicUInt32ListAbsenceCondition(this);
  operator delete(this, 0x28uLL);
};

// Line 1660: range 0000000011E0582C-0000000011E05879
void __cdecl data::ConfigMusicUInt32ListAbsenceCondition::~ConfigMusicUInt32ListAbsenceCondition(
        data::ConfigMusicUInt32ListAbsenceCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32ListAbsenceCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicUInt32ListMemberCondition::~ConfigMusicUInt32ListMemberCondition(this);
};

// Line 1665: range 0000000011A65724-0000000011A65734
const char *__cdecl data::ConfigMusicUInt32ListAbsenceCondition::getTypeName(
        const data::ConfigMusicUInt32ListAbsenceCondition *const this)
{
  return "ConfigMusicUInt32ListAbsenceCondition";
};

// Line 1666: range 0000000011A65736-0000000011A658D2
int32_t __cdecl data::ConfigMusicUInt32ListAbsenceCondition::getHashNum(
        const data::ConfigMusicUInt32ListAbsenceCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicUInt32ListAbsenceCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicUInt32ListAbsenceCondition",
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

// Line 1682: range 0000000011DDEE70-0000000011DDEEB1
void __cdecl data::ConfigMusicUInt32ListAbsenceConditionFactory::ConfigMusicUInt32ListAbsenceConditionFactory(
        data::ConfigMusicUInt32ListAbsenceConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32ListAbsenceConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicUInt32ListAbsenceConditionFactory = v2;
};

// Line 1690: range 0000000011DDF1BA-0000000011DDF217
void __cdecl data::ConfigMusicUInt32ListMultiMemberCondition::ConfigMusicUInt32ListMultiMemberCondition(
        data::ConfigMusicUInt32ListMultiMemberCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicUInt32ListCondition::ConfigMusicUInt32ListCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32ListMultiMemberCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  std::vector<unsigned int>::vector(&this->values);
};

// Line 1690: range 0000000011DDF61C-0000000011DDF6B2
void __cdecl data::ConfigMusicUInt32ListMultiMemberCondition::ConfigMusicUInt32ListMultiMemberCondition(
        data::ConfigMusicUInt32ListMultiMemberCondition *const this,
        const data::ConfigMusicUInt32ListMultiMemberCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicUInt32ListCondition::ConfigMusicUInt32ListCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32ListMultiMemberCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
  std::vector<unsigned int>::vector(&this->values, &a2->values);
};

// Line 1697: range 0000000011DDF99C-0000000011DDF9F9
void __cdecl data::ConfigMusicUInt32ListMultiMemberCondition::~ConfigMusicUInt32ListMultiMemberCondition(
        data::ConfigMusicUInt32ListMultiMemberCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32ListMultiMemberCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  std::vector<unsigned int>::~vector(&this->values);
  data::ConfigMusicUInt32ListCondition::~ConfigMusicUInt32ListCondition(this);
};

// Line 1697: range 0000000011DDF9FA-0000000011DDFA24
void __cdecl data::ConfigMusicUInt32ListMultiMemberCondition::~ConfigMusicUInt32ListMultiMemberCondition(
        data::ConfigMusicUInt32ListMultiMemberCondition *const this)
{
  data::ConfigMusicUInt32ListMultiMemberCondition::~ConfigMusicUInt32ListMultiMemberCondition(this);
  operator delete(this, 0x40uLL);
};

// Line 1702: range 0000000011A658D4-0000000011A658E4
const char *__cdecl data::ConfigMusicUInt32ListMultiMemberCondition::getTypeName(
        const data::ConfigMusicUInt32ListMultiMemberCondition *const this)
{
  return "ConfigMusicUInt32ListMultiMemberCondition";
};

// Line 1703: range 0000000011A658E6-0000000011A65A82
int32_t __cdecl data::ConfigMusicUInt32ListMultiMemberCondition::getHashNum(
        const data::ConfigMusicUInt32ListMultiMemberCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicUInt32ListMultiMemberCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicUInt32ListMultiMemberCondition",
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

// Line 1722: range 0000000011DDFA26-0000000011DDFA73
void __cdecl data::ConfigMusicUInt32ListAllPresenceCondition::ConfigMusicUInt32ListAllPresenceCondition(
        data::ConfigMusicUInt32ListAllPresenceCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicUInt32ListMultiMemberCondition::ConfigMusicUInt32ListMultiMemberCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32ListAllPresenceCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 1722: range 0000000011DDFE78-0000000011DDFED0
void __cdecl data::ConfigMusicUInt32ListAllPresenceCondition::ConfigMusicUInt32ListAllPresenceCondition(
        data::ConfigMusicUInt32ListAllPresenceCondition *const this,
        const data::ConfigMusicUInt32ListAllPresenceCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicUInt32ListMultiMemberCondition::ConfigMusicUInt32ListMultiMemberCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32ListAllPresenceCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 1728: range 0000000011E05800-0000000011E0582A
void __cdecl data::ConfigMusicUInt32ListAllPresenceCondition::~ConfigMusicUInt32ListAllPresenceCondition(
        data::ConfigMusicUInt32ListAllPresenceCondition *const this)
{
  data::ConfigMusicUInt32ListAllPresenceCondition::~ConfigMusicUInt32ListAllPresenceCondition(this);
  operator delete(this, 0x40uLL);
};

// Line 1728: range 0000000011E057B2-0000000011E057FF
void __cdecl data::ConfigMusicUInt32ListAllPresenceCondition::~ConfigMusicUInt32ListAllPresenceCondition(
        data::ConfigMusicUInt32ListAllPresenceCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32ListAllPresenceCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicUInt32ListMultiMemberCondition::~ConfigMusicUInt32ListMultiMemberCondition(this);
};

// Line 1733: range 0000000011A65A84-0000000011A65A94
const char *__cdecl data::ConfigMusicUInt32ListAllPresenceCondition::getTypeName(
        const data::ConfigMusicUInt32ListAllPresenceCondition *const this)
{
  return "ConfigMusicUInt32ListAllPresenceCondition";
};

// Line 1734: range 0000000011A65A96-0000000011A65C32
int32_t __cdecl data::ConfigMusicUInt32ListAllPresenceCondition::getHashNum(
        const data::ConfigMusicUInt32ListAllPresenceCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicUInt32ListAllPresenceCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicUInt32ListAllPresenceCondition",
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

// Line 1750: range 0000000011DE01BA-0000000011DE01FB
void __cdecl data::ConfigMusicUInt32ListAllPresenceConditionFactory::ConfigMusicUInt32ListAllPresenceConditionFactory(
        data::ConfigMusicUInt32ListAllPresenceConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32ListAllPresenceConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicUInt32ListAllPresenceConditionFactory = v2;
};

// Line 1758: range 0000000011DE0504-0000000011DE0551
void __cdecl data::ConfigMusicUInt32ListNonePresenceCondition::ConfigMusicUInt32ListNonePresenceCondition(
        data::ConfigMusicUInt32ListNonePresenceCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicUInt32ListMultiMemberCondition::ConfigMusicUInt32ListMultiMemberCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32ListNonePresenceCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 1758: range 0000000011DE0956-0000000011DE09AE
void __cdecl data::ConfigMusicUInt32ListNonePresenceCondition::ConfigMusicUInt32ListNonePresenceCondition(
        data::ConfigMusicUInt32ListNonePresenceCondition *const this,
        const data::ConfigMusicUInt32ListNonePresenceCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicUInt32ListMultiMemberCondition::ConfigMusicUInt32ListMultiMemberCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32ListNonePresenceCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 1764: range 0000000011E05738-0000000011E05785
void __cdecl data::ConfigMusicUInt32ListNonePresenceCondition::~ConfigMusicUInt32ListNonePresenceCondition(
        data::ConfigMusicUInt32ListNonePresenceCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32ListNonePresenceCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicUInt32ListMultiMemberCondition::~ConfigMusicUInt32ListMultiMemberCondition(this);
};

// Line 1764: range 0000000011E05786-0000000011E057B0
void __cdecl data::ConfigMusicUInt32ListNonePresenceCondition::~ConfigMusicUInt32ListNonePresenceCondition(
        data::ConfigMusicUInt32ListNonePresenceCondition *const this)
{
  data::ConfigMusicUInt32ListNonePresenceCondition::~ConfigMusicUInt32ListNonePresenceCondition(this);
  operator delete(this, 0x40uLL);
};

// Line 1769: range 0000000011A65C34-0000000011A65C44
const char *__cdecl data::ConfigMusicUInt32ListNonePresenceCondition::getTypeName(
        const data::ConfigMusicUInt32ListNonePresenceCondition *const this)
{
  return "ConfigMusicUInt32ListNonePresenceCondition";
};

// Line 1770: range 0000000011A65C46-0000000011A65DE2
int32_t __cdecl data::ConfigMusicUInt32ListNonePresenceCondition::getHashNum(
        const data::ConfigMusicUInt32ListNonePresenceCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicUInt32ListNonePresenceCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicUInt32ListNonePresenceCondition",
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

// Line 1786: range 0000000011DE0C98-0000000011DE0CD9
void __cdecl data::ConfigMusicUInt32ListNonePresenceConditionFactory::ConfigMusicUInt32ListNonePresenceConditionFactory(
        data::ConfigMusicUInt32ListNonePresenceConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32ListNonePresenceConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicUInt32ListNonePresenceConditionFactory = v2;
};

// Line 1794: range 0000000011DE0FE2-0000000011DE102F
void __cdecl data::ConfigMusicUInt32ListPartialPresenceCondition::ConfigMusicUInt32ListPartialPresenceCondition(
        data::ConfigMusicUInt32ListPartialPresenceCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicUInt32ListMultiMemberCondition::ConfigMusicUInt32ListMultiMemberCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32ListPartialPresenceCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 1794: range 0000000011DE1434-0000000011DE148C
void __cdecl data::ConfigMusicUInt32ListPartialPresenceCondition::ConfigMusicUInt32ListPartialPresenceCondition(
        data::ConfigMusicUInt32ListPartialPresenceCondition *const this,
        const data::ConfigMusicUInt32ListPartialPresenceCondition *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicUInt32ListMultiMemberCondition::ConfigMusicUInt32ListMultiMemberCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32ListPartialPresenceCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicCondition = v2;
};

// Line 1800: range 0000000011E056BE-0000000011E0570B
void __cdecl data::ConfigMusicUInt32ListPartialPresenceCondition::~ConfigMusicUInt32ListPartialPresenceCondition(
        data::ConfigMusicUInt32ListPartialPresenceCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32ListPartialPresenceCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicCondition = v2;
  data::ConfigMusicUInt32ListMultiMemberCondition::~ConfigMusicUInt32ListMultiMemberCondition(this);
};

// Line 1800: range 0000000011E0570C-0000000011E05736
void __cdecl data::ConfigMusicUInt32ListPartialPresenceCondition::~ConfigMusicUInt32ListPartialPresenceCondition(
        data::ConfigMusicUInt32ListPartialPresenceCondition *const this)
{
  data::ConfigMusicUInt32ListPartialPresenceCondition::~ConfigMusicUInt32ListPartialPresenceCondition(this);
  operator delete(this, 0x40uLL);
};

// Line 1805: range 0000000011A65DE4-0000000011A65DF4
const char *__cdecl data::ConfigMusicUInt32ListPartialPresenceCondition::getTypeName(
        const data::ConfigMusicUInt32ListPartialPresenceCondition *const this)
{
  return "ConfigMusicUInt32ListPartialPresenceCondition";
};

// Line 1806: range 0000000011A65DF6-0000000011A65F92
int32_t __cdecl data::ConfigMusicUInt32ListPartialPresenceCondition::getHashNum(
        const data::ConfigMusicUInt32ListPartialPresenceCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicUInt32ListPartialPresenceCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicUInt32ListPartialPresenceCondition",
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

// Line 1822: range 0000000011DE1776-0000000011DE17B7
void __cdecl data::ConfigMusicUInt32ListPartialPresenceConditionFactory::ConfigMusicUInt32ListPartialPresenceConditionFactory(
        data::ConfigMusicUInt32ListPartialPresenceConditionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUInt32ListPartialPresenceConditionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicUInt32ListPartialPresenceConditionFactory = v2;
};

// Line 1859: range 0000000011A71372-0000000011A713C7
void __cdecl data::ConfigMusicTransitions::ConfigMusicTransitions(data::ConfigMusicTransitions *const this)
{
  __int64 v1; // rsi

  std::vector<data::ConfigMusicShifter>::vector(&this->shifters);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 1859: range 0000000011B0AD78-0000000011B0AE13
void __cdecl data::ConfigMusicTransitions::ConfigMusicTransitions(
        data::ConfigMusicTransitions *const this,
        const data::ConfigMusicTransitions *a2)
{
  bool is_json_loaded; // cl
  char v3; // al

  std::vector<data::ConfigMusicShifter>::vector(&this->shifters, &a2->shifters);
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

// Line 1859: range 0000000011B5DD2A-0000000011B5DDC5
void __cdecl data::ConfigMusicTransitions::ConfigMusicTransitions(
        data::ConfigMusicTransitions *const this,
        data::ConfigMusicTransitions *a2)
{
  bool is_json_loaded; // cl
  char v3; // al

  std::vector<data::ConfigMusicShifter>::vector(&this->shifters, &a2->shifters);
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

// Line 1859: range 0000000011A713C8-0000000011A713E2
void __cdecl data::ConfigMusicTransitions::~ConfigMusicTransitions(data::ConfigMusicTransitions *const this)
{
  std::vector<data::ConfigMusicShifter>::~vector(&this->shifters);
};

// Line 1882: range 0000000011A734E8-0000000011A73582
void __cdecl data::ConfigMusicSyncTransitions::ConfigMusicSyncTransitions(data::ConfigMusicSyncTransitions *const this)
{
  __int64 v1; // rsi

  data::ConfigMusicTransitions::ConfigMusicTransitions(&this->beat_transitions);
  data::ConfigMusicTransitions::ConfigMusicTransitions(&this->bar_transitions);
  data::ConfigMusicTransitions::ConfigMusicTransitions(&this->grid_transitions);
  data::ConfigMusicTransitions::ConfigMusicTransitions(&this->cue_transitions);
  data::ConfigMusicTransitions::ConfigMusicTransitions(&this->exit_transitions);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 1882: range 0000000011A73584-0000000011A735DE
void __cdecl data::ConfigMusicSyncTransitions::~ConfigMusicSyncTransitions(
        data::ConfigMusicSyncTransitions *const this)
{
  data::ConfigMusicTransitions::~ConfigMusicTransitions(&this->exit_transitions);
  data::ConfigMusicTransitions::~ConfigMusicTransitions(&this->cue_transitions);
  data::ConfigMusicTransitions::~ConfigMusicTransitions(&this->grid_transitions);
  data::ConfigMusicTransitions::~ConfigMusicTransitions(&this->bar_transitions);
  data::ConfigMusicTransitions::~ConfigMusicTransitions(&this->beat_transitions);
};

// Line 1909: range 0000000011A713E4-0000000011A7147E
void __cdecl data::ConfigMusicFixedTimeTransitions::ConfigMusicFixedTimeTransitions(
        data::ConfigMusicFixedTimeTransitions *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  data::ConfigMusicTransitions::ConfigMusicTransitions(&this->transitions);
  if ( *(_BYTE *)(((unsigned __int64)&this->fixed_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fixed_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fixed_time, v1);
  }
  this->fixed_time = 0.0;
  v2 = ((_BYTE)this + 36) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_json_loaded, v2, v3);
  this->is_json_loaded = 0;
};

// Line 1909: range 0000000011B5DDC6-0000000011B5DEE3
void __cdecl data::ConfigMusicFixedTimeTransitions::ConfigMusicFixedTimeTransitions(
        data::ConfigMusicFixedTimeTransitions *const this,
        data::ConfigMusicFixedTimeTransitions *a2)
{
  float fixed_time; // xmm0_4
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_json_loaded; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigMusicTransitions::ConfigMusicTransitions(&this->transitions, &a2->transitions);
  if ( *(_BYTE *)(((unsigned __int64)&a2->fixed_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->fixed_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->fixed_time);
  }
  fixed_time = a2->fixed_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->fixed_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fixed_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fixed_time, a2);
  }
  this->fixed_time = fixed_time;
  v3 = ((_BYTE)a2 + 36) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->is_json_loaded, v3, v4);
  is_json_loaded = a2->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 36) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_json_loaded, v3, v7);
  this->is_json_loaded = is_json_loaded;
};

// Line 1909: range 0000000011A71480-0000000011A7149A
void __cdecl data::ConfigMusicFixedTimeTransitions::~ConfigMusicFixedTimeTransitions(
        data::ConfigMusicFixedTimeTransitions *const this)
{
  data::ConfigMusicTransitions::~ConfigMusicTransitions(&this->transitions);
};

// Line 1938: range 0000000011A73634-0000000011A736D8
void __cdecl data::ConfigMusicTimeTransitions::ConfigMusicTimeTransitions(data::ConfigMusicTimeTransitions *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->interval = 0.0;
  data::ConfigMusicTransitions::ConfigMusicTransitions(&this->repetitives);
  std::vector<data::ConfigMusicFixedTimeTransitions>::vector(&this->fixed_times);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 1938: range 0000000011B6362E-0000000011B6375A
void __cdecl data::ConfigMusicTimeTransitions::ConfigMusicTimeTransitions(
        data::ConfigMusicTimeTransitions *const this,
        data::ConfigMusicTimeTransitions *a2)
{
  float interval; // xmm0_4
  data::ConfigMusicFixedTimeTransitionArray *p_fixed_times; // rsi
  bool is_json_loaded; // cl
  char v5; // al

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  interval = a2->interval;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, a2);
  }
  this->interval = interval;
  data::ConfigMusicTransitions::ConfigMusicTransitions(&this->repetitives, &a2->repetitives);
  p_fixed_times = &a2->fixed_times;
  std::vector<data::ConfigMusicFixedTimeTransitions>::vector(&this->fixed_times, &a2->fixed_times);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_fixed_times, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_fixed_times) = v5 != 0;
    __asan_report_store1(&this->is_json_loaded, p_fixed_times, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 1938: range 0000000011A736DA-0000000011A73708
void __cdecl data::ConfigMusicTimeTransitions::~ConfigMusicTimeTransitions(
        data::ConfigMusicTimeTransitions *const this)
{
  std::vector<data::ConfigMusicFixedTimeTransitions>::~vector(&this->fixed_times);
  data::ConfigMusicTransitions::~ConfigMusicTransitions(&this->repetitives);
};

// Line 1963: range 0000000011DE1AC0-0000000011DE1B8D
void __cdecl data::ConfigMusicStimulusHandler::ConfigMusicStimulusHandler(data::ConfigMusicStimulusHandler *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::ConfigMusicStimulusHandler>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigMusicStimulusHandler>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicStimulusHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicStimulusHandler = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->stimulus >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->stimulus, v1);
  this->stimulus = None_61;
  data::ConfigMusicTransitions::ConfigMusicTransitions(&this->transitions);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 1963: range 0000000011DE205C-0000000011DE21CE
void __cdecl data::ConfigMusicStimulusHandler::ConfigMusicStimulusHandler(
        data::ConfigMusicStimulusHandler *const this,
        const data::ConfigMusicStimulusHandler *a2)
{
  std::enable_shared_from_this<data::ConfigMusicStimulusHandler> *v2; // rsi
  int (**v3)(...); // rdx
  data::MusicStimulus stimulus; // rdx
  data::ConfigMusicTransitions *p_transitions; // rsi
  bool is_json_loaded; // cl
  char v7; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigMusicStimulusHandler>;
  std::enable_shared_from_this<data::ConfigMusicStimulusHandler>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigMusicStimulusHandler>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigMusicStimulusHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigMusicStimulusHandler = v3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->stimulus >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->stimulus);
  stimulus = a2->stimulus;
  if ( *(_BYTE *)(((unsigned __int64)&this->stimulus >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->stimulus, v2);
  this->stimulus = stimulus;
  p_transitions = &a2->transitions;
  data::ConfigMusicTransitions::ConfigMusicTransitions(&this->transitions, &a2->transitions);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_transitions, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(p_transitions) = v7 != 0;
    __asan_report_store1(&this->is_json_loaded, p_transitions, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 1972: range 0000000011DE2562-0000000011DE258C
void __cdecl data::ConfigMusicStimulusHandler::~ConfigMusicStimulusHandler(
        data::ConfigMusicStimulusHandler *const this)
{
  data::ConfigMusicStimulusHandler::~ConfigMusicStimulusHandler(this);
  operator delete(this, 0x48uLL);
};

// Line 1972: range 0000000011DE2500-0000000011DE2561
void __cdecl data::ConfigMusicStimulusHandler::~ConfigMusicStimulusHandler(
        data::ConfigMusicStimulusHandler *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicStimulusHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicStimulusHandler = v2;
  data::ConfigMusicTransitions::~ConfigMusicTransitions(&this->transitions);
  std::enable_shared_from_this<data::ConfigMusicStimulusHandler>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigMusicStimulusHandler>);
};

// Line 1977: range 0000000011A65F94-0000000011A65FA4
const char *__cdecl data::ConfigMusicStimulusHandler::getTypeName(const data::ConfigMusicStimulusHandler *const this)
{
  return "ConfigMusicStimulusHandler";
};

// Line 1978: range 0000000011A65FA6-0000000011A66142
int32_t __cdecl data::ConfigMusicStimulusHandler::getHashNum(const data::ConfigMusicStimulusHandler *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicStimulusHandler::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicStimulusHandler",
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

// Line 2004: range 0000000011DE258E-0000000011DE25DB
void __cdecl data::ConfigMusicParameterizedStimulusHandler::ConfigMusicParameterizedStimulusHandler(
        data::ConfigMusicParameterizedStimulusHandler *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicStimulusHandler::ConfigMusicStimulusHandler(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicParameterizedStimulusHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicStimulusHandler = v2;
};

// Line 2004: range 0000000011DE29F6-0000000011DE2A4E
void __cdecl data::ConfigMusicParameterizedStimulusHandler::ConfigMusicParameterizedStimulusHandler(
        data::ConfigMusicParameterizedStimulusHandler *const this,
        const data::ConfigMusicParameterizedStimulusHandler *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicStimulusHandler::ConfigMusicStimulusHandler(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicParameterizedStimulusHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicStimulusHandler = v2;
};

// Line 2010: range 0000000011DE2D86-0000000011DE2DB0
void __cdecl data::ConfigMusicParameterizedStimulusHandler::~ConfigMusicParameterizedStimulusHandler(
        data::ConfigMusicParameterizedStimulusHandler *const this)
{
  data::ConfigMusicParameterizedStimulusHandler::~ConfigMusicParameterizedStimulusHandler(this);
  operator delete(this, 0x48uLL);
};

// Line 2010: range 0000000011DE2D38-0000000011DE2D85
void __cdecl data::ConfigMusicParameterizedStimulusHandler::~ConfigMusicParameterizedStimulusHandler(
        data::ConfigMusicParameterizedStimulusHandler *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicParameterizedStimulusHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicStimulusHandler = v2;
  data::ConfigMusicStimulusHandler::~ConfigMusicStimulusHandler(this);
};

// Line 2015: range 0000000011A66144-0000000011A66154
const char *__cdecl data::ConfigMusicParameterizedStimulusHandler::getTypeName(
        const data::ConfigMusicParameterizedStimulusHandler *const this)
{
  return "ConfigMusicParameterizedStimulusHandler";
};

// Line 2016: range 0000000011A66156-0000000011A662F2
int32_t __cdecl data::ConfigMusicParameterizedStimulusHandler::getHashNum(
        const data::ConfigMusicParameterizedStimulusHandler *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicParameterizedStimulusHandler::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicParameterizedStimulusHandler",
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

// Line 2035: range 0000000011DE2DB2-0000000011DE2E45
void __cdecl data::ConfigMusicIntStimulusHandler::ConfigMusicIntStimulusHandler(
        data::ConfigMusicIntStimulusHandler *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicParameterizedStimulusHandler::ConfigMusicParameterizedStimulusHandler((data::ConfigMusicParameterizedStimulusHandler *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicIntStimulusHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicStimulusHandler = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->int_param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->int_param >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->int_param, (((_BYTE)this + 68) & 7u) + 3);
  }
  this->int_param = 0;
};

// Line 2035: range 0000000011DE3260-0000000011DE333D
void __cdecl data::ConfigMusicIntStimulusHandler::ConfigMusicIntStimulusHandler(
        data::ConfigMusicIntStimulusHandler *const this,
        const data::ConfigMusicIntStimulusHandler *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  int32_t int_param; // ecx
  char v5; // dl

  data::ConfigMusicParameterizedStimulusHandler::ConfigMusicParameterizedStimulusHandler(
    (data::ConfigMusicParameterizedStimulusHandler *const)this,
    (const data::ConfigMusicParameterizedStimulusHandler *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicIntStimulusHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicStimulusHandler = v2;
  v3 = (((_BYTE)a2 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->int_param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->int_param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->int_param);
  }
  int_param = a2->int_param;
  v5 = *(_BYTE *)(((unsigned __int64)&this->int_param >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->int_param, v3);
  }
  this->int_param = int_param;
};

// Line 2042: range 0000000011E05644-0000000011E05691
void __cdecl data::ConfigMusicIntStimulusHandler::~ConfigMusicIntStimulusHandler(
        data::ConfigMusicIntStimulusHandler *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicIntStimulusHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicStimulusHandler = v2;
  data::ConfigMusicParameterizedStimulusHandler::~ConfigMusicParameterizedStimulusHandler((data::ConfigMusicParameterizedStimulusHandler *const)this);
};

// Line 2042: range 0000000011E05692-0000000011E056BC
void __cdecl data::ConfigMusicIntStimulusHandler::~ConfigMusicIntStimulusHandler(
        data::ConfigMusicIntStimulusHandler *const this)
{
  data::ConfigMusicIntStimulusHandler::~ConfigMusicIntStimulusHandler(this);
  operator delete(this, 0x48uLL);
};

// Line 2047: range 0000000011A662F4-0000000011A66304
const char *__cdecl data::ConfigMusicIntStimulusHandler::getTypeName(
        const data::ConfigMusicIntStimulusHandler *const this)
{
  return "ConfigMusicIntStimulusHandler";
};

// Line 2048: range 0000000011A66306-0000000011A664A2
int32_t __cdecl data::ConfigMusicIntStimulusHandler::getHashNum(const data::ConfigMusicIntStimulusHandler *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicIntStimulusHandler::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicIntStimulusHandler",
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

// Line 2064: range 0000000011DE3626-0000000011DE3667
void __cdecl data::ConfigMusicIntStimulusHandlerFactory::ConfigMusicIntStimulusHandlerFactory(
        data::ConfigMusicIntStimulusHandlerFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicIntStimulusHandlerFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicIntStimulusHandlerFactory = v2;
};

// Line 2072: range 0000000011DE3970-0000000011DE3A03
void __cdecl data::ConfigMusicUIntStimulusHandler::ConfigMusicUIntStimulusHandler(
        data::ConfigMusicUIntStimulusHandler *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicParameterizedStimulusHandler::ConfigMusicParameterizedStimulusHandler((data::ConfigMusicParameterizedStimulusHandler *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUIntStimulusHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicStimulusHandler = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->uint_param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->uint_param >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->uint_param, (((_BYTE)this + 68) & 7u) + 3);
  }
  this->uint_param = 0;
};

// Line 2072: range 0000000011DE3E1E-0000000011DE3EFB
void __cdecl data::ConfigMusicUIntStimulusHandler::ConfigMusicUIntStimulusHandler(
        data::ConfigMusicUIntStimulusHandler *const this,
        const data::ConfigMusicUIntStimulusHandler *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t uint_param; // ecx
  char v5; // dl

  data::ConfigMusicParameterizedStimulusHandler::ConfigMusicParameterizedStimulusHandler(
    (data::ConfigMusicParameterizedStimulusHandler *const)this,
    (const data::ConfigMusicParameterizedStimulusHandler *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUIntStimulusHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicStimulusHandler = v2;
  v3 = (((_BYTE)a2 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->uint_param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->uint_param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->uint_param);
  }
  uint_param = a2->uint_param;
  v5 = *(_BYTE *)(((unsigned __int64)&this->uint_param >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->uint_param, v3);
  }
  this->uint_param = uint_param;
};

// Line 2079: range 0000000011E055CA-0000000011E05617
void __cdecl data::ConfigMusicUIntStimulusHandler::~ConfigMusicUIntStimulusHandler(
        data::ConfigMusicUIntStimulusHandler *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUIntStimulusHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicStimulusHandler = v2;
  data::ConfigMusicParameterizedStimulusHandler::~ConfigMusicParameterizedStimulusHandler((data::ConfigMusicParameterizedStimulusHandler *const)this);
};

// Line 2079: range 0000000011E05618-0000000011E05642
void __cdecl data::ConfigMusicUIntStimulusHandler::~ConfigMusicUIntStimulusHandler(
        data::ConfigMusicUIntStimulusHandler *const this)
{
  data::ConfigMusicUIntStimulusHandler::~ConfigMusicUIntStimulusHandler(this);
  operator delete(this, 0x48uLL);
};

// Line 2084: range 0000000011A664A4-0000000011A664B4
const char *__cdecl data::ConfigMusicUIntStimulusHandler::getTypeName(
        const data::ConfigMusicUIntStimulusHandler *const this)
{
  return "ConfigMusicUIntStimulusHandler";
};

// Line 2085: range 0000000011A664B6-0000000011A66652
int32_t __cdecl data::ConfigMusicUIntStimulusHandler::getHashNum(
        const data::ConfigMusicUIntStimulusHandler *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicUIntStimulusHandler::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicUIntStimulusHandler",
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

// Line 2101: range 0000000011DE41E4-0000000011DE4225
void __cdecl data::ConfigMusicUIntStimulusHandlerFactory::ConfigMusicUIntStimulusHandlerFactory(
        data::ConfigMusicUIntStimulusHandlerFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUIntStimulusHandlerFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicUIntStimulusHandlerFactory = v2;
};

// Line 2109: range 0000000011DE452E-0000000011DE45C3
void __cdecl data::ConfigMusicFloatStimulusHandler::ConfigMusicFloatStimulusHandler(
        data::ConfigMusicFloatStimulusHandler *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicParameterizedStimulusHandler::ConfigMusicParameterizedStimulusHandler((data::ConfigMusicParameterizedStimulusHandler *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicFloatStimulusHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicStimulusHandler = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->float_param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->float_param >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->float_param, (((_BYTE)this + 68) & 7u) + 3);
  }
  this->float_param = 0.0;
};

// Line 2109: range 0000000011DE49DE-0000000011DE4ABE
void __cdecl data::ConfigMusicFloatStimulusHandler::ConfigMusicFloatStimulusHandler(
        data::ConfigMusicFloatStimulusHandler *const this,
        const data::ConfigMusicFloatStimulusHandler *a2)
{
  int (**v2)(...); // rdx
  float float_param; // xmm0_4

  data::ConfigMusicParameterizedStimulusHandler::ConfigMusicParameterizedStimulusHandler(
    (data::ConfigMusicParameterizedStimulusHandler *const)this,
    (const data::ConfigMusicParameterizedStimulusHandler *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicFloatStimulusHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicStimulusHandler = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->float_param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->float_param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->float_param);
  }
  float_param = a2->float_param;
  if ( *(_BYTE *)(((unsigned __int64)&this->float_param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->float_param >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->float_param, (((_BYTE)this + 68) & 7u) + 3);
  }
  this->float_param = float_param;
};

// Line 2116: range 0000000011E0559E-0000000011E055C8
void __cdecl data::ConfigMusicFloatStimulusHandler::~ConfigMusicFloatStimulusHandler(
        data::ConfigMusicFloatStimulusHandler *const this)
{
  data::ConfigMusicFloatStimulusHandler::~ConfigMusicFloatStimulusHandler(this);
  operator delete(this, 0x48uLL);
};

// Line 2116: range 0000000011E05550-0000000011E0559D
void __cdecl data::ConfigMusicFloatStimulusHandler::~ConfigMusicFloatStimulusHandler(
        data::ConfigMusicFloatStimulusHandler *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicFloatStimulusHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicStimulusHandler = v2;
  data::ConfigMusicParameterizedStimulusHandler::~ConfigMusicParameterizedStimulusHandler((data::ConfigMusicParameterizedStimulusHandler *const)this);
};

// Line 2121: range 0000000011A66654-0000000011A66664
const char *__cdecl data::ConfigMusicFloatStimulusHandler::getTypeName(
        const data::ConfigMusicFloatStimulusHandler *const this)
{
  return "ConfigMusicFloatStimulusHandler";
};

// Line 2122: range 0000000011A66666-0000000011A66802
int32_t __cdecl data::ConfigMusicFloatStimulusHandler::getHashNum(
        const data::ConfigMusicFloatStimulusHandler *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicFloatStimulusHandler::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicFloatStimulusHandler",
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

// Line 2138: range 0000000011DE4DA8-0000000011DE4DE9
void __cdecl data::ConfigMusicFloatStimulusHandlerFactory::ConfigMusicFloatStimulusHandlerFactory(
        data::ConfigMusicFloatStimulusHandlerFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicFloatStimulusHandlerFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicFloatStimulusHandlerFactory = v2;
};

// Line 2146: range 0000000011DE50F2-0000000011DE514F
void __cdecl data::ConfigMusicStringStimulusHandler::ConfigMusicStringStimulusHandler(
        data::ConfigMusicStringStimulusHandler *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicParameterizedStimulusHandler::ConfigMusicParameterizedStimulusHandler(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicStringStimulusHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicStimulusHandler = v2;
  std::string::basic_string(&this->string_param);
};

// Line 2146: range 0000000011DE5504-0000000011DE559A
void __cdecl data::ConfigMusicStringStimulusHandler::ConfigMusicStringStimulusHandler(
        data::ConfigMusicStringStimulusHandler *const this,
        const data::ConfigMusicStringStimulusHandler *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicParameterizedStimulusHandler::ConfigMusicParameterizedStimulusHandler(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicStringStimulusHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicStimulusHandler = v2;
  std::string::basic_string(&this->string_param, &a2->string_param);
};

// Line 2153: range 0000000011E054C6-0000000011E05523
void __cdecl data::ConfigMusicStringStimulusHandler::~ConfigMusicStringStimulusHandler(
        data::ConfigMusicStringStimulusHandler *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicStringStimulusHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicStimulusHandler = v2;
  std::string::~string(&this->string_param);
  data::ConfigMusicParameterizedStimulusHandler::~ConfigMusicParameterizedStimulusHandler(this);
};

// Line 2153: range 0000000011E05524-0000000011E0554E
void __cdecl data::ConfigMusicStringStimulusHandler::~ConfigMusicStringStimulusHandler(
        data::ConfigMusicStringStimulusHandler *const this)
{
  data::ConfigMusicStringStimulusHandler::~ConfigMusicStringStimulusHandler(this);
  operator delete(this, 0x68uLL);
};

// Line 2158: range 0000000011A66804-0000000011A66814
const char *__cdecl data::ConfigMusicStringStimulusHandler::getTypeName(
        const data::ConfigMusicStringStimulusHandler *const this)
{
  return "ConfigMusicStringStimulusHandler";
};

// Line 2159: range 0000000011A66816-0000000011A669B2
int32_t __cdecl data::ConfigMusicStringStimulusHandler::getHashNum(
        const data::ConfigMusicStringStimulusHandler *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicStringStimulusHandler::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicStringStimulusHandler",
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

// Line 2175: range 0000000011DE5884-0000000011DE58C5
void __cdecl data::ConfigMusicStringStimulusHandlerFactory::ConfigMusicStringStimulusHandlerFactory(
        data::ConfigMusicStringStimulusHandlerFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicStringStimulusHandlerFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicStringStimulusHandlerFactory = v2;
};

// Line 2183: range 0000000011DE5BCE-0000000011DE5C1B
void __cdecl data::ConfigMusicMultiValueParameterizedStimulusHandler::ConfigMusicMultiValueParameterizedStimulusHandler(
        data::ConfigMusicMultiValueParameterizedStimulusHandler *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicParameterizedStimulusHandler::ConfigMusicParameterizedStimulusHandler(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicMultiValueParameterizedStimulusHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicStimulusHandler = v2;
};

// Line 2183: range 0000000011DE6036-0000000011DE608E
void __cdecl data::ConfigMusicMultiValueParameterizedStimulusHandler::ConfigMusicMultiValueParameterizedStimulusHandler(
        data::ConfigMusicMultiValueParameterizedStimulusHandler *const this,
        const data::ConfigMusicMultiValueParameterizedStimulusHandler *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicParameterizedStimulusHandler::ConfigMusicParameterizedStimulusHandler(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicMultiValueParameterizedStimulusHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicStimulusHandler = v2;
};

// Line 2189: range 0000000011DE63C6-0000000011DE63F0
void __cdecl data::ConfigMusicMultiValueParameterizedStimulusHandler::~ConfigMusicMultiValueParameterizedStimulusHandler(
        data::ConfigMusicMultiValueParameterizedStimulusHandler *const this)
{
  data::ConfigMusicMultiValueParameterizedStimulusHandler::~ConfigMusicMultiValueParameterizedStimulusHandler(this);
  operator delete(this, 0x48uLL);
};

// Line 2189: range 0000000011DE6378-0000000011DE63C5
void __cdecl data::ConfigMusicMultiValueParameterizedStimulusHandler::~ConfigMusicMultiValueParameterizedStimulusHandler(
        data::ConfigMusicMultiValueParameterizedStimulusHandler *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicMultiValueParameterizedStimulusHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicStimulusHandler = v2;
  data::ConfigMusicParameterizedStimulusHandler::~ConfigMusicParameterizedStimulusHandler(this);
};

// Line 2194: range 0000000011A669B4-0000000011A669C4
const char *__cdecl data::ConfigMusicMultiValueParameterizedStimulusHandler::getTypeName(
        const data::ConfigMusicMultiValueParameterizedStimulusHandler *const this)
{
  return "ConfigMusicMultiValueParameterizedStimulusHandler";
};

// Line 2195: range 0000000011A669C6-0000000011A66B62
int32_t __cdecl data::ConfigMusicMultiValueParameterizedStimulusHandler::getHashNum(
        const data::ConfigMusicMultiValueParameterizedStimulusHandler *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicMultiValueParameterizedStimulusHandler::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicMultiValueParameterizedStimulusHandler",
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

// Line 2214: range 0000000011DE63F2-0000000011DE644F
void __cdecl data::ConfigMusicUIntMultiValueStimulusHandler::ConfigMusicUIntMultiValueStimulusHandler(
        data::ConfigMusicUIntMultiValueStimulusHandler *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicMultiValueParameterizedStimulusHandler::ConfigMusicMultiValueParameterizedStimulusHandler(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUIntMultiValueStimulusHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicStimulusHandler = v2;
  std::vector<unsigned int>::vector(&this->uint_params);
};

// Line 2214: range 0000000011DE6804-0000000011DE689A
void __cdecl data::ConfigMusicUIntMultiValueStimulusHandler::ConfigMusicUIntMultiValueStimulusHandler(
        data::ConfigMusicUIntMultiValueStimulusHandler *const this,
        const data::ConfigMusicUIntMultiValueStimulusHandler *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicMultiValueParameterizedStimulusHandler::ConfigMusicMultiValueParameterizedStimulusHandler(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUIntMultiValueStimulusHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicStimulusHandler = v2;
  std::vector<unsigned int>::vector(&this->uint_params, &a2->uint_params);
};

// Line 2221: range 0000000011DE6BE2-0000000011DE6C0C
void __cdecl data::ConfigMusicUIntMultiValueStimulusHandler::~ConfigMusicUIntMultiValueStimulusHandler(
        data::ConfigMusicUIntMultiValueStimulusHandler *const this)
{
  data::ConfigMusicUIntMultiValueStimulusHandler::~ConfigMusicUIntMultiValueStimulusHandler(this);
  operator delete(this, 0x60uLL);
};

// Line 2221: range 0000000011DE6B84-0000000011DE6BE1
void __cdecl data::ConfigMusicUIntMultiValueStimulusHandler::~ConfigMusicUIntMultiValueStimulusHandler(
        data::ConfigMusicUIntMultiValueStimulusHandler *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUIntMultiValueStimulusHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicStimulusHandler = v2;
  std::vector<unsigned int>::~vector(&this->uint_params);
  data::ConfigMusicMultiValueParameterizedStimulusHandler::~ConfigMusicMultiValueParameterizedStimulusHandler(this);
};

// Line 2226: range 0000000011A66B64-0000000011A66B74
const char *__cdecl data::ConfigMusicUIntMultiValueStimulusHandler::getTypeName(
        const data::ConfigMusicUIntMultiValueStimulusHandler *const this)
{
  return "ConfigMusicUIntMultiValueStimulusHandler";
};

// Line 2227: range 0000000011A66B76-0000000011A66D12
int32_t __cdecl data::ConfigMusicUIntMultiValueStimulusHandler::getHashNum(
        const data::ConfigMusicUIntMultiValueStimulusHandler *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicUIntMultiValueStimulusHandler::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicUIntMultiValueStimulusHandler",
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

// Line 2246: range 0000000011DE6C0E-0000000011DE6C5B
void __cdecl data::ConfigMusicUIntPresenceStimulusHandler::ConfigMusicUIntPresenceStimulusHandler(
        data::ConfigMusicUIntPresenceStimulusHandler *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicUIntMultiValueStimulusHandler::ConfigMusicUIntMultiValueStimulusHandler(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUIntPresenceStimulusHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicStimulusHandler = v2;
};

// Line 2246: range 0000000011DE7010-0000000011DE7068
void __cdecl data::ConfigMusicUIntPresenceStimulusHandler::ConfigMusicUIntPresenceStimulusHandler(
        data::ConfigMusicUIntPresenceStimulusHandler *const this,
        const data::ConfigMusicUIntPresenceStimulusHandler *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicUIntMultiValueStimulusHandler::ConfigMusicUIntMultiValueStimulusHandler(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUIntPresenceStimulusHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicStimulusHandler = v2;
};

// Line 2252: range 0000000011E0549A-0000000011E054C4
void __cdecl data::ConfigMusicUIntPresenceStimulusHandler::~ConfigMusicUIntPresenceStimulusHandler(
        data::ConfigMusicUIntPresenceStimulusHandler *const this)
{
  data::ConfigMusicUIntPresenceStimulusHandler::~ConfigMusicUIntPresenceStimulusHandler(this);
  operator delete(this, 0x60uLL);
};

// Line 2252: range 0000000011E0544C-0000000011E05499
void __cdecl data::ConfigMusicUIntPresenceStimulusHandler::~ConfigMusicUIntPresenceStimulusHandler(
        data::ConfigMusicUIntPresenceStimulusHandler *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUIntPresenceStimulusHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicStimulusHandler = v2;
  data::ConfigMusicUIntMultiValueStimulusHandler::~ConfigMusicUIntMultiValueStimulusHandler(this);
};

// Line 2257: range 0000000011A66D14-0000000011A66D24
const char *__cdecl data::ConfigMusicUIntPresenceStimulusHandler::getTypeName(
        const data::ConfigMusicUIntPresenceStimulusHandler *const this)
{
  return "ConfigMusicUIntPresenceStimulusHandler";
};

// Line 2258: range 0000000011A66D26-0000000011A66EC2
int32_t __cdecl data::ConfigMusicUIntPresenceStimulusHandler::getHashNum(
        const data::ConfigMusicUIntPresenceStimulusHandler *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicUIntPresenceStimulusHandler::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicUIntPresenceStimulusHandler",
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

// Line 2274: range 0000000011DE7352-0000000011DE7393
void __cdecl data::ConfigMusicUIntPresenceStimulusHandlerFactory::ConfigMusicUIntPresenceStimulusHandlerFactory(
        data::ConfigMusicUIntPresenceStimulusHandlerFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUIntPresenceStimulusHandlerFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicUIntPresenceStimulusHandlerFactory = v2;
};

// Line 2282: range 0000000011DE769C-0000000011DE76E9
void __cdecl data::ConfigMusicUIntAbsenceStimulusHandler::ConfigMusicUIntAbsenceStimulusHandler(
        data::ConfigMusicUIntAbsenceStimulusHandler *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicUIntMultiValueStimulusHandler::ConfigMusicUIntMultiValueStimulusHandler(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUIntAbsenceStimulusHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicStimulusHandler = v2;
};

// Line 2282: range 0000000011DE7A9E-0000000011DE7AF6
void __cdecl data::ConfigMusicUIntAbsenceStimulusHandler::ConfigMusicUIntAbsenceStimulusHandler(
        data::ConfigMusicUIntAbsenceStimulusHandler *const this,
        const data::ConfigMusicUIntAbsenceStimulusHandler *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicUIntMultiValueStimulusHandler::ConfigMusicUIntMultiValueStimulusHandler(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUIntAbsenceStimulusHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicStimulusHandler = v2;
};

// Line 2288: range 0000000011E05420-0000000011E0544A
void __cdecl data::ConfigMusicUIntAbsenceStimulusHandler::~ConfigMusicUIntAbsenceStimulusHandler(
        data::ConfigMusicUIntAbsenceStimulusHandler *const this)
{
  data::ConfigMusicUIntAbsenceStimulusHandler::~ConfigMusicUIntAbsenceStimulusHandler(this);
  operator delete(this, 0x60uLL);
};

// Line 2288: range 0000000011E053D2-0000000011E0541F
void __cdecl data::ConfigMusicUIntAbsenceStimulusHandler::~ConfigMusicUIntAbsenceStimulusHandler(
        data::ConfigMusicUIntAbsenceStimulusHandler *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUIntAbsenceStimulusHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicStimulusHandler = v2;
  data::ConfigMusicUIntMultiValueStimulusHandler::~ConfigMusicUIntMultiValueStimulusHandler(this);
};

// Line 2293: range 0000000011A66EC4-0000000011A66ED4
const char *__cdecl data::ConfigMusicUIntAbsenceStimulusHandler::getTypeName(
        const data::ConfigMusicUIntAbsenceStimulusHandler *const this)
{
  return "ConfigMusicUIntAbsenceStimulusHandler";
};

// Line 2294: range 0000000011A66ED6-0000000011A67072
int32_t __cdecl data::ConfigMusicUIntAbsenceStimulusHandler::getHashNum(
        const data::ConfigMusicUIntAbsenceStimulusHandler *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicUIntAbsenceStimulusHandler::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicUIntAbsenceStimulusHandler",
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

// Line 2310: range 0000000011DE7DE0-0000000011DE7E21
void __cdecl data::ConfigMusicUIntAbsenceStimulusHandlerFactory::ConfigMusicUIntAbsenceStimulusHandlerFactory(
        data::ConfigMusicUIntAbsenceStimulusHandlerFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicUIntAbsenceStimulusHandlerFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicUIntAbsenceStimulusHandlerFactory = v2;
};

// Line 2318: range 0000000011DE812A-0000000011DE8187
void __cdecl data::ConfigMusicStringMultiValueStimulusHandler::ConfigMusicStringMultiValueStimulusHandler(
        data::ConfigMusicStringMultiValueStimulusHandler *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicMultiValueParameterizedStimulusHandler::ConfigMusicMultiValueParameterizedStimulusHandler(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicStringMultiValueStimulusHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicStimulusHandler = v2;
  std::vector<std::string>::vector(&this->string_params);
};

// Line 2318: range 0000000011DE853C-0000000011DE85D2
void __cdecl data::ConfigMusicStringMultiValueStimulusHandler::ConfigMusicStringMultiValueStimulusHandler(
        data::ConfigMusicStringMultiValueStimulusHandler *const this,
        const data::ConfigMusicStringMultiValueStimulusHandler *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicMultiValueParameterizedStimulusHandler::ConfigMusicMultiValueParameterizedStimulusHandler(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicStringMultiValueStimulusHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicStimulusHandler = v2;
  std::vector<std::string>::vector(&this->string_params, &a2->string_params);
};

// Line 2325: range 0000000011DE891A-0000000011DE8944
void __cdecl data::ConfigMusicStringMultiValueStimulusHandler::~ConfigMusicStringMultiValueStimulusHandler(
        data::ConfigMusicStringMultiValueStimulusHandler *const this)
{
  data::ConfigMusicStringMultiValueStimulusHandler::~ConfigMusicStringMultiValueStimulusHandler(this);
  operator delete(this, 0x60uLL);
};

// Line 2325: range 0000000011DE88BC-0000000011DE8919
void __cdecl data::ConfigMusicStringMultiValueStimulusHandler::~ConfigMusicStringMultiValueStimulusHandler(
        data::ConfigMusicStringMultiValueStimulusHandler *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicStringMultiValueStimulusHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicStimulusHandler = v2;
  std::vector<std::string>::~vector(&this->string_params);
  data::ConfigMusicMultiValueParameterizedStimulusHandler::~ConfigMusicMultiValueParameterizedStimulusHandler(this);
};

// Line 2330: range 0000000011A67074-0000000011A67084
const char *__cdecl data::ConfigMusicStringMultiValueStimulusHandler::getTypeName(
        const data::ConfigMusicStringMultiValueStimulusHandler *const this)
{
  return "ConfigMusicStringMultiValueStimulusHandler";
};

// Line 2331: range 0000000011A67086-0000000011A67222
int32_t __cdecl data::ConfigMusicStringMultiValueStimulusHandler::getHashNum(
        const data::ConfigMusicStringMultiValueStimulusHandler *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicStringMultiValueStimulusHandler::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicStringMultiValueStimulusHandler",
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

// Line 2350: range 0000000011DE8946-0000000011DE8993
void __cdecl data::ConfigMusicStringPresenceStimulusHandler::ConfigMusicStringPresenceStimulusHandler(
        data::ConfigMusicStringPresenceStimulusHandler *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicStringMultiValueStimulusHandler::ConfigMusicStringMultiValueStimulusHandler(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicStringPresenceStimulusHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicStimulusHandler = v2;
};

// Line 2350: range 0000000011DE8D48-0000000011DE8DA0
void __cdecl data::ConfigMusicStringPresenceStimulusHandler::ConfigMusicStringPresenceStimulusHandler(
        data::ConfigMusicStringPresenceStimulusHandler *const this,
        const data::ConfigMusicStringPresenceStimulusHandler *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicStringMultiValueStimulusHandler::ConfigMusicStringMultiValueStimulusHandler(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicStringPresenceStimulusHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicStimulusHandler = v2;
};

// Line 2356: range 0000000011E053A6-0000000011E053D0
void __cdecl data::ConfigMusicStringPresenceStimulusHandler::~ConfigMusicStringPresenceStimulusHandler(
        data::ConfigMusicStringPresenceStimulusHandler *const this)
{
  data::ConfigMusicStringPresenceStimulusHandler::~ConfigMusicStringPresenceStimulusHandler(this);
  operator delete(this, 0x60uLL);
};

// Line 2356: range 0000000011E05358-0000000011E053A5
void __cdecl data::ConfigMusicStringPresenceStimulusHandler::~ConfigMusicStringPresenceStimulusHandler(
        data::ConfigMusicStringPresenceStimulusHandler *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicStringPresenceStimulusHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicStimulusHandler = v2;
  data::ConfigMusicStringMultiValueStimulusHandler::~ConfigMusicStringMultiValueStimulusHandler(this);
};

// Line 2361: range 0000000011A67224-0000000011A67234
const char *__cdecl data::ConfigMusicStringPresenceStimulusHandler::getTypeName(
        const data::ConfigMusicStringPresenceStimulusHandler *const this)
{
  return "ConfigMusicStringPresenceStimulusHandler";
};

// Line 2362: range 0000000011A67236-0000000011A673D2
int32_t __cdecl data::ConfigMusicStringPresenceStimulusHandler::getHashNum(
        const data::ConfigMusicStringPresenceStimulusHandler *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicStringPresenceStimulusHandler::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicStringPresenceStimulusHandler",
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

// Line 2378: range 0000000011DE908A-0000000011DE90CB
void __cdecl data::ConfigMusicStringPresenceStimulusHandlerFactory::ConfigMusicStringPresenceStimulusHandlerFactory(
        data::ConfigMusicStringPresenceStimulusHandlerFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicStringPresenceStimulusHandlerFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicStringPresenceStimulusHandlerFactory = v2;
};

// Line 2386: range 0000000011DE93D4-0000000011DE9421
void __cdecl data::ConfigMusicStringAbsenceStimulusHandler::ConfigMusicStringAbsenceStimulusHandler(
        data::ConfigMusicStringAbsenceStimulusHandler *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMusicStringMultiValueStimulusHandler::ConfigMusicStringMultiValueStimulusHandler(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicStringAbsenceStimulusHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicStimulusHandler = v2;
};

// Line 2386: range 0000000011DE97D6-0000000011DE982E
void __cdecl data::ConfigMusicStringAbsenceStimulusHandler::ConfigMusicStringAbsenceStimulusHandler(
        data::ConfigMusicStringAbsenceStimulusHandler *const this,
        const data::ConfigMusicStringAbsenceStimulusHandler *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMusicStringMultiValueStimulusHandler::ConfigMusicStringMultiValueStimulusHandler(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicStringAbsenceStimulusHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMusicStimulusHandler = v2;
};

// Line 2392: range 0000000011E052DE-0000000011E0532B
void __cdecl data::ConfigMusicStringAbsenceStimulusHandler::~ConfigMusicStringAbsenceStimulusHandler(
        data::ConfigMusicStringAbsenceStimulusHandler *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicStringAbsenceStimulusHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicStimulusHandler = v2;
  data::ConfigMusicStringMultiValueStimulusHandler::~ConfigMusicStringMultiValueStimulusHandler(this);
};

// Line 2392: range 0000000011E0532C-0000000011E05356
void __cdecl data::ConfigMusicStringAbsenceStimulusHandler::~ConfigMusicStringAbsenceStimulusHandler(
        data::ConfigMusicStringAbsenceStimulusHandler *const this)
{
  data::ConfigMusicStringAbsenceStimulusHandler::~ConfigMusicStringAbsenceStimulusHandler(this);
  operator delete(this, 0x60uLL);
};

// Line 2397: range 0000000011A673D4-0000000011A673E4
const char *__cdecl data::ConfigMusicStringAbsenceStimulusHandler::getTypeName(
        const data::ConfigMusicStringAbsenceStimulusHandler *const this)
{
  return "ConfigMusicStringAbsenceStimulusHandler";
};

// Line 2398: range 0000000011A673E6-0000000011A67582
int32_t __cdecl data::ConfigMusicStringAbsenceStimulusHandler::getHashNum(
        const data::ConfigMusicStringAbsenceStimulusHandler *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMusicStringAbsenceStimulusHandler::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMusicStringAbsenceStimulusHandler",
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

// Line 2414: range 0000000011DE9B18-0000000011DE9B59
void __cdecl data::ConfigMusicStringAbsenceStimulusHandlerFactory::ConfigMusicStringAbsenceStimulusHandlerFactory(
        data::ConfigMusicStringAbsenceStimulusHandlerFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMusicStringAbsenceStimulusHandlerFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMusicStringAbsenceStimulusHandlerFactory = v2;
};

// Line 2422: range 0000000011A7375E-0000000011A73871
void __cdecl data::ConfigSong::ConfigSong(data::ConfigSong *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->id = 0;
  data::ConfigWwiseString::ConfigWwiseString(&this->switch_value);
  data::ConfigMusicSyncTransitions::ConfigMusicSyncTransitions(&this->sync_transitions);
  data::ConfigMusicTimeTransitions::ConfigMusicTimeTransitions(&this->time_transitions);
  std::vector<std::shared_ptr<data::ConfigMusicStimulusHandler>>::vector(&this->stimulus_handlers);
  if ( *(_BYTE *)(((unsigned __int64)&this->ignorance_mask >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ignorance_mask >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ignorance_mask, v1);
  }
  this->ignorance_mask = 0;
  v2 = ((_BYTE)this + 60) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_json_loaded, v2, v3);
  this->is_json_loaded = 0;
};

// Line 2422: range 0000000011B637A8-0000000011B639A4
void __cdecl data::ConfigSong::ConfigSong(data::ConfigSong *const this, data::ConfigSong *a2)
{
  int32_t id; // ecx
  char v3; // al
  data::ConfigMusicStimulusHandlerArray *p_stimulus_handlers; // rsi
  int32_t ignorance_mask; // ecx
  char v6; // al
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool is_json_loaded; // cl
  char v10; // dl
  __int64 v11; // rdx
  data::ConfigSong *v12; // [rsp+0h] [rbp-10h]

  v12 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  id = a2->id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->id = id;
  data::ConfigWwiseString::ConfigWwiseString(&this->switch_value, &v12->switch_value);
  data::ConfigMusicSyncTransitions::ConfigMusicSyncTransitions(&this->sync_transitions, &v12->sync_transitions);
  data::ConfigMusicTimeTransitions::ConfigMusicTimeTransitions(&this->time_transitions, &v12->time_transitions);
  p_stimulus_handlers = &v12->stimulus_handlers;
  std::vector<std::shared_ptr<data::ConfigMusicStimulusHandler>>::vector(
    &this->stimulus_handlers,
    &v12->stimulus_handlers);
  if ( *(_BYTE *)(((unsigned __int64)&v12->ignorance_mask >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v12->ignorance_mask >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v12->ignorance_mask);
  }
  ignorance_mask = v12->ignorance_mask;
  v6 = *(_BYTE *)(((unsigned __int64)&this->ignorance_mask >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_stimulus_handlers) = v6 != 0;
    __asan_report_store4(&this->ignorance_mask, p_stimulus_handlers);
  }
  this->ignorance_mask = ignorance_mask;
  v7 = ((_BYTE)v12 + 60) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&v12->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&v12->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&v12->is_json_loaded, v7, v8);
  is_json_loaded = v12->is_json_loaded;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this + 60) & 7) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->is_json_loaded, v7, v11);
  this->is_json_loaded = is_json_loaded;
};

// Line 2422: range 0000000011A73872-0000000011A738C4
void __cdecl data::ConfigSong::~ConfigSong(data::ConfigSong *const this)
{
  std::vector<std::shared_ptr<data::ConfigMusicStimulusHandler>>::~vector(&this->stimulus_handlers);
  data::ConfigMusicTimeTransitions::~ConfigMusicTimeTransitions(&this->time_transitions);
  data::ConfigMusicSyncTransitions::~ConfigMusicSyncTransitions(&this->sync_transitions);
  data::ConfigWwiseString::~ConfigWwiseString(&this->switch_value);
};
