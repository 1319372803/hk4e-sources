// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigLevelGadget.h

// Line 96: range 00000000126E6360-00000000126E63EC
void __cdecl data::IndicatorCondition::IndicatorCondition(data::IndicatorCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::IndicatorCondition>::enable_shared_from_this(&this->std::enable_shared_from_this<data::IndicatorCondition>);
  v2 = (int (**)(...))(&`vtable for'data::IndicatorCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IndicatorCondition = v2;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 96: range 00000000126E68B6-00000000126E698C
void __cdecl data::IndicatorCondition::IndicatorCondition(
        data::IndicatorCondition *const this,
        const data::IndicatorCondition *a2)
{
  std::enable_shared_from_this<data::IndicatorCondition> *v2; // rsi
  int (**v3)(...); // rdx
  bool is_json_loaded; // cl
  char v5; // al

  v2 = &a2->std::enable_shared_from_this<data::IndicatorCondition>;
  std::enable_shared_from_this<data::IndicatorCondition>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::IndicatorCondition>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::IndicatorCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_IndicatorCondition = v3;
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

// Line 103: range 00000000126E6C70-00000000126E6C9A
void __cdecl data::IndicatorCondition::~IndicatorCondition(data::IndicatorCondition *const this)
{
  data::IndicatorCondition::~IndicatorCondition(this);
  operator delete(this, 0x20uLL);
};

// Line 103: range 00000000126E6C1E-00000000126E6C6F
void __cdecl data::IndicatorCondition::~IndicatorCondition(data::IndicatorCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::IndicatorCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IndicatorCondition = v2;
  std::enable_shared_from_this<data::IndicatorCondition>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::IndicatorCondition>);
};

// Line 108: range 0000000012146452-0000000012146462
const char *__cdecl data::IndicatorCondition::getTypeName(const data::IndicatorCondition *const this)
{
  return "IndicatorCondition";
};

// Line 109: range 0000000012146464-0000000012146600
int32_t __cdecl data::IndicatorCondition::getHashNum(const data::IndicatorCondition *const this)
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
  *(_QWORD *)(v1 + 16) = data::IndicatorCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "IndicatorCondition",
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

// Line 135: range 00000000126E6C9C-00000000126E6D6D
void __cdecl data::IndicatorConditionGadgetState::IndicatorConditionGadgetState(
        data::IndicatorConditionGadgetState *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::IndicatorCondition::IndicatorCondition((data::IndicatorCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::IndicatorConditionGadgetState + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IndicatorCondition = v2;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->from_state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->from_state >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->from_state, v3);
  }
  this->from_state = -1;
  if ( *(_BYTE *)(((unsigned __int64)&this->to_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->to_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->to_state, v3);
  }
  this->to_state = -1;
};

// Line 135: range 00000000126E7272-00000000126E73C4
void __cdecl data::IndicatorConditionGadgetState::IndicatorConditionGadgetState(
        data::IndicatorConditionGadgetState *const this,
        const data::IndicatorConditionGadgetState *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  int32_t from_state; // ecx
  char v5; // dl
  int32_t to_state; // ecx
  char v7; // al

  data::IndicatorCondition::IndicatorCondition(
    (data::IndicatorCondition *const)this,
    (const data::IndicatorCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::IndicatorConditionGadgetState + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_IndicatorCondition = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->from_state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->from_state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->from_state);
  }
  from_state = a2->from_state;
  v5 = *(_BYTE *)(((unsigned __int64)&this->from_state >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->from_state, v3);
  }
  this->from_state = from_state;
  if ( *(_BYTE *)(((unsigned __int64)&a2->to_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->to_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->to_state);
  }
  to_state = a2->to_state;
  v7 = *(_BYTE *)(((unsigned __int64)&this->to_state >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->to_state, v3);
  }
  this->to_state = to_state;
};

// Line 143: range 000000001274E494-000000001274E4BE
void __cdecl data::IndicatorConditionGadgetState::~IndicatorConditionGadgetState(
        data::IndicatorConditionGadgetState *const this)
{
  data::IndicatorConditionGadgetState::~IndicatorConditionGadgetState(this);
  operator delete(this, 0x28uLL);
};

// Line 143: range 000000001274E446-000000001274E493
void __cdecl data::IndicatorConditionGadgetState::~IndicatorConditionGadgetState(
        data::IndicatorConditionGadgetState *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::IndicatorConditionGadgetState + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IndicatorCondition = v2;
  data::IndicatorCondition::~IndicatorCondition((data::IndicatorCondition *const)this);
};

// Line 148: range 0000000012146602-0000000012146612
const char *__cdecl data::IndicatorConditionGadgetState::getTypeName(
        const data::IndicatorConditionGadgetState *const this)
{
  return "IndicatorConditionGadgetState";
};

// Line 149: range 0000000012146614-00000000121467B0
int32_t __cdecl data::IndicatorConditionGadgetState::getHashNum(const data::IndicatorConditionGadgetState *const this)
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
  *(_QWORD *)(v1 + 16) = data::IndicatorConditionGadgetState::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "IndicatorConditionGadgetState",
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

// Line 165: range 00000000126E760E-00000000126E764F
void __cdecl data::IndicatorConditionGadgetStateFactory::IndicatorConditionGadgetStateFactory(
        data::IndicatorConditionGadgetStateFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::IndicatorConditionGadgetStateFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IndicatorConditionGadgetStateFactory = v2;
};

// Line 173: range 00000000126E7958-00000000126E79E5
void __cdecl data::IndicatorConditionAllowInteract::IndicatorConditionAllowInteract(
        data::IndicatorConditionAllowInteract *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::IndicatorCondition::IndicatorCondition((data::IndicatorCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::IndicatorConditionAllowInteract + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IndicatorCondition = v2;
  v3 = ((_BYTE)this + 25) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->allow_interact >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->allow_interact >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->allow_interact, v3, v4);
  this->allow_interact = 0;
};

// Line 173: range 00000000126E7E6E-00000000126E7F46
void __cdecl data::IndicatorConditionAllowInteract::IndicatorConditionAllowInteract(
        data::IndicatorConditionAllowInteract *const this,
        const data::IndicatorConditionAllowInteract *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool allow_interact; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::IndicatorCondition::IndicatorCondition(
    (data::IndicatorCondition *const)this,
    (const data::IndicatorCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::IndicatorConditionAllowInteract + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_IndicatorCondition = v2;
  v3 = ((_BYTE)a2 + 25) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->allow_interact >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->allow_interact >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->allow_interact, v3, v4);
  allow_interact = a2->allow_interact;
  v6 = *(_BYTE *)(((unsigned __int64)&this->allow_interact >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 25) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->allow_interact, v3, v7);
  this->allow_interact = allow_interact;
};

// Line 180: range 000000001274E3CC-000000001274E419
void __cdecl data::IndicatorConditionAllowInteract::~IndicatorConditionAllowInteract(
        data::IndicatorConditionAllowInteract *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::IndicatorConditionAllowInteract + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IndicatorCondition = v2;
  data::IndicatorCondition::~IndicatorCondition((data::IndicatorCondition *const)this);
};

// Line 180: range 000000001274E41A-000000001274E444
void __cdecl data::IndicatorConditionAllowInteract::~IndicatorConditionAllowInteract(
        data::IndicatorConditionAllowInteract *const this)
{
  data::IndicatorConditionAllowInteract::~IndicatorConditionAllowInteract(this);
  operator delete(this, 0x20uLL);
};

// Line 185: range 00000000121467B2-00000000121467C2
const char *__cdecl data::IndicatorConditionAllowInteract::getTypeName(
        const data::IndicatorConditionAllowInteract *const this)
{
  return "IndicatorConditionAllowInteract";
};

// Line 186: range 00000000121467C4-0000000012146960
int32_t __cdecl data::IndicatorConditionAllowInteract::getHashNum(
        const data::IndicatorConditionAllowInteract *const this)
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
  *(_QWORD *)(v1 + 16) = data::IndicatorConditionAllowInteract::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "IndicatorConditionAllowInteract",
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

// Line 202: range 00000000126E8190-00000000126E81D1
void __cdecl data::IndicatorConditionAllowInteractFactory::IndicatorConditionAllowInteractFactory(
        data::IndicatorConditionAllowInteractFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::IndicatorConditionAllowInteractFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IndicatorConditionAllowInteractFactory = v2;
};

// Line 210: range 00000000126E84DA-00000000126E85CB
void __cdecl data::IndicatorConditionDummyPointDistance::IndicatorConditionDummyPointDistance(
        data::IndicatorConditionDummyPointDistance *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::IndicatorCondition::IndicatorCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::IndicatorConditionDummyPointDistance + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IndicatorCondition = v2;
  if ( *(_WORD *)(((unsigned __int64)&this->key >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::TemplateParamString>();
  if ( *(_WORD *)(((unsigned __int64)&this->distance >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::TemplateParamFloat>();
};

// Line 210: range 00000000126E8A66-00000000126E8AF4
void __cdecl data::IndicatorConditionDummyPointDistance::IndicatorConditionDummyPointDistance(
        data::IndicatorConditionDummyPointDistance *const this,
        const data::IndicatorConditionDummyPointDistance *a2)
{
  int (**v2)(...); // rdx

  data::IndicatorCondition::IndicatorCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::IndicatorConditionDummyPointDistance + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_IndicatorCondition = v2;
  std::shared_ptr<data::TemplateParamString>::shared_ptr(&this->key, &a2->key);
  std::shared_ptr<data::TemplateParamFloat>::shared_ptr(&this->distance, &a2->distance);
};

// Line 218: range 000000001274E3A0-000000001274E3CA
void __cdecl data::IndicatorConditionDummyPointDistance::~IndicatorConditionDummyPointDistance(
        data::IndicatorConditionDummyPointDistance *const this)
{
  data::IndicatorConditionDummyPointDistance::~IndicatorConditionDummyPointDistance(this);
  operator delete(this, 0x40uLL);
};

// Line 218: range 000000001274E332-000000001274E39F
void __cdecl data::IndicatorConditionDummyPointDistance::~IndicatorConditionDummyPointDistance(
        data::IndicatorConditionDummyPointDistance *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::IndicatorConditionDummyPointDistance + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IndicatorCondition = v2;
  std::shared_ptr<data::TemplateParamFloat>::~shared_ptr(&this->distance);
  std::shared_ptr<data::TemplateParamString>::~shared_ptr(&this->key);
  data::IndicatorCondition::~IndicatorCondition(this);
};

// Line 223: range 00000000121469DA-00000000121469EA
const char *__cdecl data::IndicatorConditionDummyPointDistance::getTypeName(
        const data::IndicatorConditionDummyPointDistance *const this)
{
  return "IndicatorConditionDummyPointDistance";
};

// Line 224: range 00000000121469EC-0000000012146B88
int32_t __cdecl data::IndicatorConditionDummyPointDistance::getHashNum(
        const data::IndicatorConditionDummyPointDistance *const this)
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
  *(_QWORD *)(v1 + 16) = data::IndicatorConditionDummyPointDistance::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "IndicatorConditionDummyPointDistance",
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

// Line 240: range 00000000126E8D3E-00000000126E8D7F
void __cdecl data::IndicatorConditionDummyPointDistanceFactory::IndicatorConditionDummyPointDistanceFactory(
        data::IndicatorConditionDummyPointDistanceFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::IndicatorConditionDummyPointDistanceFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IndicatorConditionDummyPointDistanceFactory = v2;
};

// Line 248: range 00000000126E9088-00000000126E912E
void __cdecl data::IndicatorConditionAvatarDistance::IndicatorConditionAvatarDistance(
        data::IndicatorConditionAvatarDistance *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::IndicatorCondition::IndicatorCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::IndicatorConditionAvatarDistance + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IndicatorCondition = v2;
  if ( *(_WORD *)(((unsigned __int64)&this->distance >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::TemplateParamFloat>();
};

// Line 248: range 00000000126E9678-00000000126E96EB
void __cdecl data::IndicatorConditionAvatarDistance::IndicatorConditionAvatarDistance(
        data::IndicatorConditionAvatarDistance *const this,
        const data::IndicatorConditionAvatarDistance *a2)
{
  int (**v2)(...); // rdx

  data::IndicatorCondition::IndicatorCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::IndicatorConditionAvatarDistance + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_IndicatorCondition = v2;
  std::shared_ptr<data::TemplateParamFloat>::shared_ptr(&this->distance, &a2->distance);
};

// Line 255: range 000000001274E306-000000001274E330
void __cdecl data::IndicatorConditionAvatarDistance::~IndicatorConditionAvatarDistance(
        data::IndicatorConditionAvatarDistance *const this)
{
  data::IndicatorConditionAvatarDistance::~IndicatorConditionAvatarDistance(this);
  operator delete(this, 0x30uLL);
};

// Line 255: range 000000001274E2A8-000000001274E305
void __cdecl data::IndicatorConditionAvatarDistance::~IndicatorConditionAvatarDistance(
        data::IndicatorConditionAvatarDistance *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::IndicatorConditionAvatarDistance + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IndicatorCondition = v2;
  std::shared_ptr<data::TemplateParamFloat>::~shared_ptr(&this->distance);
  data::IndicatorCondition::~IndicatorCondition(this);
};

// Line 260: range 0000000012146B8A-0000000012146B9A
const char *__cdecl data::IndicatorConditionAvatarDistance::getTypeName(
        const data::IndicatorConditionAvatarDistance *const this)
{
  return "IndicatorConditionAvatarDistance";
};

// Line 261: range 0000000012146B9C-0000000012146D38
int32_t __cdecl data::IndicatorConditionAvatarDistance::getHashNum(
        const data::IndicatorConditionAvatarDistance *const this)
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
  *(_QWORD *)(v1 + 16) = data::IndicatorConditionAvatarDistance::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "IndicatorConditionAvatarDistance",
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

// Line 277: range 00000000126E9934-00000000126E9975
void __cdecl data::IndicatorConditionAvatarDistanceFactory::IndicatorConditionAvatarDistanceFactory(
        data::IndicatorConditionAvatarDistanceFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::IndicatorConditionAvatarDistanceFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IndicatorConditionAvatarDistanceFactory = v2;
};

// Line 285: range 00000000126E9C7E-00000000126E9CCB
void __cdecl data::IndicatorConditionKilled::IndicatorConditionKilled(data::IndicatorConditionKilled *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::IndicatorCondition::IndicatorCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::IndicatorConditionKilled + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IndicatorCondition = v2;
};

// Line 285: range 00000000126EA0E0-00000000126EA138
void __cdecl data::IndicatorConditionKilled::IndicatorConditionKilled(
        data::IndicatorConditionKilled *const this,
        const data::IndicatorConditionKilled *a2)
{
  int (**v2)(...); // rdx

  data::IndicatorCondition::IndicatorCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::IndicatorConditionKilled + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_IndicatorCondition = v2;
};

// Line 291: range 000000001274E22E-000000001274E27B
void __cdecl data::IndicatorConditionKilled::~IndicatorConditionKilled(data::IndicatorConditionKilled *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::IndicatorConditionKilled + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IndicatorCondition = v2;
  data::IndicatorCondition::~IndicatorCondition(this);
};

// Line 291: range 000000001274E27C-000000001274E2A6
void __cdecl data::IndicatorConditionKilled::~IndicatorConditionKilled(data::IndicatorConditionKilled *const this)
{
  data::IndicatorConditionKilled::~IndicatorConditionKilled(this);
  operator delete(this, 0x20uLL);
};

// Line 296: range 0000000012146D3A-0000000012146D4A
const char *__cdecl data::IndicatorConditionKilled::getTypeName(const data::IndicatorConditionKilled *const this)
{
  return "IndicatorConditionKilled";
};

// Line 297: range 0000000012146D4C-0000000012146EE8
int32_t __cdecl data::IndicatorConditionKilled::getHashNum(const data::IndicatorConditionKilled *const this)
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
  *(_QWORD *)(v1 + 16) = data::IndicatorConditionKilled::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "IndicatorConditionKilled",
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

// Line 313: range 00000000126EA382-00000000126EA3C3
void __cdecl data::IndicatorConditionKilledFactory::IndicatorConditionKilledFactory(
        data::IndicatorConditionKilledFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::IndicatorConditionKilledFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IndicatorConditionKilledFactory = v2;
};

// Line 321: range 00000000126EA6CC-00000000126EA75F
void __cdecl data::IndicatorConditionPlayerLevel::IndicatorConditionPlayerLevel(
        data::IndicatorConditionPlayerLevel *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::IndicatorCondition::IndicatorCondition((data::IndicatorCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::IndicatorConditionPlayerLevel + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IndicatorCondition = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->level = 0;
};

// Line 321: range 00000000126EABF4-00000000126EACD1
void __cdecl data::IndicatorConditionPlayerLevel::IndicatorConditionPlayerLevel(
        data::IndicatorConditionPlayerLevel *const this,
        const data::IndicatorConditionPlayerLevel *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t level; // ecx
  char v5; // dl

  data::IndicatorCondition::IndicatorCondition(
    (data::IndicatorCondition *const)this,
    (const data::IndicatorCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::IndicatorConditionPlayerLevel + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_IndicatorCondition = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->level);
  }
  level = a2->level;
  v5 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->level, v3);
  }
  this->level = level;
};

// Line 328: range 000000001274E202-000000001274E22C
void __cdecl data::IndicatorConditionPlayerLevel::~IndicatorConditionPlayerLevel(
        data::IndicatorConditionPlayerLevel *const this)
{
  data::IndicatorConditionPlayerLevel::~IndicatorConditionPlayerLevel(this);
  operator delete(this, 0x20uLL);
};

// Line 328: range 000000001274E1B4-000000001274E201
void __cdecl data::IndicatorConditionPlayerLevel::~IndicatorConditionPlayerLevel(
        data::IndicatorConditionPlayerLevel *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::IndicatorConditionPlayerLevel + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IndicatorCondition = v2;
  data::IndicatorCondition::~IndicatorCondition((data::IndicatorCondition *const)this);
};

// Line 333: range 0000000012146EEA-0000000012146EFA
const char *__cdecl data::IndicatorConditionPlayerLevel::getTypeName(
        const data::IndicatorConditionPlayerLevel *const this)
{
  return "IndicatorConditionPlayerLevel";
};

// Line 334: range 0000000012146EFC-0000000012147098
int32_t __cdecl data::IndicatorConditionPlayerLevel::getHashNum(const data::IndicatorConditionPlayerLevel *const this)
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
  *(_QWORD *)(v1 + 16) = data::IndicatorConditionPlayerLevel::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "IndicatorConditionPlayerLevel",
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

// Line 350: range 00000000126EAF1A-00000000126EAF5B
void __cdecl data::IndicatorConditionPlayerLevelFactory::IndicatorConditionPlayerLevelFactory(
        data::IndicatorConditionPlayerLevelFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::IndicatorConditionPlayerLevelFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IndicatorConditionPlayerLevelFactory = v2;
};

// Line 358: range 00000000126EB264-00000000126EB2F1
void __cdecl data::IndicatorConditionSceneTransPointLockState::IndicatorConditionSceneTransPointLockState(
        data::IndicatorConditionSceneTransPointLockState *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::IndicatorCondition::IndicatorCondition((data::IndicatorCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::IndicatorConditionSceneTransPointLockState + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IndicatorCondition = v2;
  v3 = ((_BYTE)this + 25) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->unlocked >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->unlocked >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->unlocked, v3, v4);
  this->unlocked = 0;
};

// Line 358: range 00000000126EB77A-00000000126EB852
void __cdecl data::IndicatorConditionSceneTransPointLockState::IndicatorConditionSceneTransPointLockState(
        data::IndicatorConditionSceneTransPointLockState *const this,
        const data::IndicatorConditionSceneTransPointLockState *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool unlocked; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::IndicatorCondition::IndicatorCondition(
    (data::IndicatorCondition *const)this,
    (const data::IndicatorCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::IndicatorConditionSceneTransPointLockState + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_IndicatorCondition = v2;
  v3 = ((_BYTE)a2 + 25) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->unlocked >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->unlocked >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->unlocked, v3, v4);
  unlocked = a2->unlocked;
  v6 = *(_BYTE *)(((unsigned __int64)&this->unlocked >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 25) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->unlocked, v3, v7);
  this->unlocked = unlocked;
};

// Line 365: range 000000001274E13A-000000001274E187
void __cdecl data::IndicatorConditionSceneTransPointLockState::~IndicatorConditionSceneTransPointLockState(
        data::IndicatorConditionSceneTransPointLockState *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::IndicatorConditionSceneTransPointLockState + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IndicatorCondition = v2;
  data::IndicatorCondition::~IndicatorCondition((data::IndicatorCondition *const)this);
};

// Line 365: range 000000001274E188-000000001274E1B2
void __cdecl data::IndicatorConditionSceneTransPointLockState::~IndicatorConditionSceneTransPointLockState(
        data::IndicatorConditionSceneTransPointLockState *const this)
{
  data::IndicatorConditionSceneTransPointLockState::~IndicatorConditionSceneTransPointLockState(this);
  operator delete(this, 0x20uLL);
};

// Line 370: range 000000001214709A-00000000121470AA
const char *__cdecl data::IndicatorConditionSceneTransPointLockState::getTypeName(
        const data::IndicatorConditionSceneTransPointLockState *const this)
{
  return "IndicatorConditionSceneTransPointLockState";
};

// Line 371: range 00000000121470AC-0000000012147248
int32_t __cdecl data::IndicatorConditionSceneTransPointLockState::getHashNum(
        const data::IndicatorConditionSceneTransPointLockState *const this)
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
  *(_QWORD *)(v1 + 16) = data::IndicatorConditionSceneTransPointLockState::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "IndicatorConditionSceneTransPointLockState",
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

// Line 387: range 00000000126EBA9C-00000000126EBADD
void __cdecl data::IndicatorConditionSceneTransPointLockStateFactory::IndicatorConditionSceneTransPointLockStateFactory(
        data::IndicatorConditionSceneTransPointLockStateFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::IndicatorConditionSceneTransPointLockStateFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_IndicatorConditionSceneTransPointLockStateFactory = v2;
};

// Line 395: range 0000000012149D8E-0000000012149E20
void __cdecl data::IndicatorLogic::IndicatorLogic(data::IndicatorLogic *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->ioperator = And;
  std::vector<std::shared_ptr<data::IndicatorCondition>>::vector(&this->iconditions);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 395: range 00000000127485FC-000000001274870A
void __cdecl data::IndicatorLogic::IndicatorLogic(data::IndicatorLogic *const this, const data::IndicatorLogic *a2)
{
  data::IndicatorOperator ioperator; // ecx
  char v3; // al
  data::IndicatorConditionArray *p_iconditions; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  const data::IndicatorLogic *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  ioperator = a2->ioperator;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->ioperator = ioperator;
  p_iconditions = &v7->iconditions;
  std::vector<std::shared_ptr<data::IndicatorCondition>>::vector(&this->iconditions, &v7->iconditions);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_iconditions, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_iconditions) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_iconditions, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 395: range 0000000012319752-0000000012319860
void __cdecl data::IndicatorLogic::IndicatorLogic(data::IndicatorLogic *const this, data::IndicatorLogic *a2)
{
  data::IndicatorOperator ioperator; // ecx
  char v3; // al
  data::IndicatorConditionArray *p_iconditions; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  data::IndicatorLogic *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  ioperator = a2->ioperator;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->ioperator = ioperator;
  p_iconditions = &v7->iconditions;
  std::vector<std::shared_ptr<data::IndicatorCondition>>::vector(&this->iconditions, &v7->iconditions);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_iconditions, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_iconditions) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_iconditions, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 395: range 0000000012149E22-0000000012149E40
void __cdecl data::IndicatorLogic::~IndicatorLogic(data::IndicatorLogic *const this)
{
  std::vector<std::shared_ptr<data::IndicatorCondition>>::~vector(&this->iconditions);
};

// Line 424: range 0000000012149E96-0000000012149F9B
void __cdecl data::ConfigUIIndicator::ConfigUIIndicator(data::ConfigUIIndicator *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::TemplateParamString>();
  if ( *(_BYTE *)(((unsigned __int64)&this->distance__show >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->distance__show >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->distance__show, v1);
  }
  this->distance__show = None_65;
  v2 = ((_BYTE)this + 20) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->follow_move >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->follow_move >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->follow_move, v2, v3);
  this->follow_move = 0;
  std::vector<data::IndicatorLogic>::vector(&this->indicator);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 424: range 000000001261C2FC-000000001261C4CA
void __cdecl data::ConfigUIIndicator::ConfigUIIndicator(
        data::ConfigUIIndicator *const this,
        const data::ConfigUIIndicator *a2)
{
  data::IndicatorDistanceInfoType distance__show; // ecx
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool follow_move; // cl
  char v7; // dl
  __int64 v8; // rdx
  data::IndicatorLogicArray *p_indicator; // rsi
  bool is_json_loaded; // cl
  char v11; // al
  const data::ConfigUIIndicator *v12; // [rsp+0h] [rbp-20h]

  v12 = a2;
  std::shared_ptr<data::TemplateParamString>::shared_ptr(&this->icon, &a2->icon);
  if ( *(_BYTE *)(((unsigned __int64)&v12->distance__show >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v12->distance__show >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->distance__show);
  }
  distance__show = a2->distance__show;
  v3 = *(_BYTE *)(((unsigned __int64)&this->distance__show >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->distance__show, a2);
  }
  this->distance__show = distance__show;
  v4 = ((_BYTE)v12 + 20) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&v12->follow_move >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&v12->follow_move >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&v12->follow_move, v4, v5);
  follow_move = v12->follow_move;
  v7 = *(_BYTE *)(((unsigned __int64)&this->follow_move >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 20) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->follow_move, v4, v8);
  this->follow_move = follow_move;
  p_indicator = &v12->indicator;
  std::vector<data::IndicatorLogic>::vector(&this->indicator, &v12->indicator);
  if ( *(char *)(((unsigned __int64)&v12->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v12->is_json_loaded, p_indicator, &v12->is_json_loaded);
  is_json_loaded = v12->is_json_loaded;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v11 < 0 )
  {
    LOBYTE(p_indicator) = v11 != 0;
    __asan_report_store1(&this->is_json_loaded, p_indicator, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 424: range 0000000012149F9C-0000000012149FC6
void __cdecl data::ConfigUIIndicator::~ConfigUIIndicator(data::ConfigUIIndicator *const this)
{
  std::vector<data::IndicatorLogic>::~vector(&this->indicator);
  std::shared_ptr<data::TemplateParamString>::~shared_ptr(&this->icon);
};

// Line 457: range 0000000012149FFC-000000001214A2CF
void __cdecl data::ConfigTriggerOverride::ConfigTriggerOverride(data::ConfigTriggerOverride *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this, v1, this);
  this->override_trigger_flag = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_flag >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trigger_flag >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->trigger_flag, v2);
  }
  this->trigger_flag = None_25;
  if ( *(char *)(((unsigned __int64)&this->override_check_count >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->override_check_count, v2, &this->override_check_count);
  this->override_check_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->check_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 10) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->check_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(&this->check_count);
  }
  this->check_count = -1;
  v3 = ((_BYTE)this + 12) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->override_trigger_interval >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->override_trigger_interval >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->override_trigger_interval, v3, v4);
  this->override_trigger_interval = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_interval >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trigger_interval >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->trigger_interval, v3);
  }
  this->trigger_interval = 0.0;
  if ( *(_WORD *)(((unsigned __int64)&this->raw_shape >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBaseShape>();
  if ( *(char *)(((unsigned __int64)&this->override_use_local_trigger_logic >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->override_use_local_trigger_logic, v3, &this->override_use_local_trigger_logic);
  this->override_use_local_trigger_logic = 0;
  v5 = ((_BYTE)this + 41) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->use_local_trigger_logic >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->use_local_trigger_logic >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->use_local_trigger_logic, v5, v6);
  this->use_local_trigger_logic = 0;
  if ( *(_WORD *)(((unsigned __int64)&this->local_trigger_meta >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigLocalTriggerMeta>();
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v5, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 457: range 000000001231A536-000000001231A9D0
void __cdecl data::ConfigTriggerOverride::ConfigTriggerOverride(
        data::ConfigTriggerOverride *const this,
        data::ConfigTriggerOverride *a2)
{
  bool override_trigger_flag; // cl
  char v3; // al
  __int64 v4; // rsi
  data::TriggerFlag trigger_flag; // ecx
  char v6; // dl
  bool override_check_count; // cl
  char v8; // al
  int16_t check_count; // cx
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool override_trigger_interval; // cl
  char v13; // dl
  __int64 v14; // rdx
  float trigger_interval; // xmm0_4
  data::ConfigBaseShapePtr *p_raw_shape; // rsi
  bool override_use_local_trigger_logic; // cl
  char v18; // al
  __int64 v19; // rsi
  __int64 v20; // rdx
  bool use_local_trigger_logic; // cl
  char v22; // dl
  __int64 v23; // rdx
  data::ConfigLocalTriggerMetaPtr *p_local_trigger_meta; // rsi
  bool is_json_loaded; // cl
  char v26; // al
  data::ConfigTriggerOverride *v27; // [rsp+0h] [rbp-10h]

  v27 = a2;
  if ( *(char *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(a2, a2, a2);
  override_trigger_flag = a2->override_trigger_flag;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(this, a2, this);
  }
  this->override_trigger_flag = override_trigger_flag;
  v4 = (((_BYTE)v27 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v27->trigger_flag >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v27 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v27->trigger_flag >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v27->trigger_flag);
  }
  trigger_flag = v27->trigger_flag;
  v6 = *(_BYTE *)(((unsigned __int64)&this->trigger_flag >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
    __asan_report_store4(&this->trigger_flag, v4);
  this->trigger_flag = trigger_flag;
  if ( *(char *)(((unsigned __int64)&v27->override_check_count >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v27->override_check_count, v4, &v27->override_check_count);
  override_check_count = v27->override_check_count;
  v8 = *(_BYTE *)(((unsigned __int64)&this->override_check_count >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store1(&this->override_check_count, v4, &this->override_check_count);
  }
  this->override_check_count = override_check_count;
  if ( *(_BYTE *)(((unsigned __int64)&v27->check_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v27 + 10) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&v27->check_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(&v27->check_count);
  }
  check_count = v27->check_count;
  if ( *(_BYTE *)(((unsigned __int64)&this->check_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 10) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->check_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(&this->check_count);
  }
  this->check_count = check_count;
  v10 = ((_BYTE)v27 + 12) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&v27->override_trigger_interval >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&v27->override_trigger_interval >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&v27->override_trigger_interval, v10, v11);
  override_trigger_interval = v27->override_trigger_interval;
  v13 = *(_BYTE *)(((unsigned __int64)&this->override_trigger_interval >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this + 12) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->override_trigger_interval, v10, v14);
  this->override_trigger_interval = override_trigger_interval;
  if ( *(_BYTE *)(((unsigned __int64)&v27->trigger_interval >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v27->trigger_interval >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v27->trigger_interval);
  }
  trigger_interval = v27->trigger_interval;
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_interval >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trigger_interval >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->trigger_interval, v10);
  }
  this->trigger_interval = trigger_interval;
  p_raw_shape = &v27->raw_shape;
  std::shared_ptr<data::ConfigBaseShape>::shared_ptr(&this->raw_shape, &v27->raw_shape);
  if ( *(char *)(((unsigned __int64)&v27->override_use_local_trigger_logic >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v27->override_use_local_trigger_logic, p_raw_shape, &v27->override_use_local_trigger_logic);
  override_use_local_trigger_logic = v27->override_use_local_trigger_logic;
  v18 = *(_BYTE *)(((unsigned __int64)&this->override_use_local_trigger_logic >> 3) + 0x7FFF8000);
  if ( v18 < 0 )
  {
    LOBYTE(p_raw_shape) = v18 != 0;
    __asan_report_store1(&this->override_use_local_trigger_logic, p_raw_shape, &this->override_use_local_trigger_logic);
  }
  this->override_use_local_trigger_logic = override_use_local_trigger_logic;
  v19 = ((_BYTE)v27 + 41) & 7;
  v20 = (*(_BYTE *)(((unsigned __int64)&v27->use_local_trigger_logic >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v19 >= *(_BYTE *)(((unsigned __int64)&v27->use_local_trigger_logic >> 3) + 0x7FFF8000));
  if ( (_BYTE)v20 )
    __asan_report_load1(&v27->use_local_trigger_logic, v19, v20);
  use_local_trigger_logic = v27->use_local_trigger_logic;
  v22 = *(_BYTE *)(((unsigned __int64)&this->use_local_trigger_logic >> 3) + 0x7FFF8000);
  LOBYTE(v19) = v22 != 0;
  v23 = (v22 != 0) & (unsigned __int8)((((unsigned __int8)this + 41) & 7) >= v22);
  if ( (_BYTE)v23 )
    __asan_report_store1(&this->use_local_trigger_logic, v19, v23);
  this->use_local_trigger_logic = use_local_trigger_logic;
  p_local_trigger_meta = &v27->local_trigger_meta;
  std::shared_ptr<data::ConfigLocalTriggerMeta>::shared_ptr(&this->local_trigger_meta, &v27->local_trigger_meta);
  if ( *(char *)(((unsigned __int64)&v27->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v27->is_json_loaded, p_local_trigger_meta, &v27->is_json_loaded);
  is_json_loaded = v27->is_json_loaded;
  v26 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v26 < 0 )
  {
    LOBYTE(p_local_trigger_meta) = v26 != 0;
    __asan_report_store1(&this->is_json_loaded, p_local_trigger_meta, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 457: range 000000001214A2D0-000000001214A2FE
void __cdecl data::ConfigTriggerOverride::~ConfigTriggerOverride(data::ConfigTriggerOverride *const this)
{
  std::shared_ptr<data::ConfigLocalTriggerMeta>::~shared_ptr(&this->local_trigger_meta);
  std::shared_ptr<data::ConfigBaseShape>::~shared_ptr(&this->raw_shape);
};

// Line 489: range 000000001214A300-000000001214A81E
void __cdecl data::LevelGadget::LevelGadget(data::LevelGadget *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->group_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->map_inst_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->map_inst_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->map_inst_id, v2);
  }
  this->map_inst_id = 0;
  std::string::basic_string(&this->follow_move__attach_point);
  if ( *(_BYTE *)(((unsigned __int64)&this->follow_move_target_instance_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->follow_move_target_instance_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->follow_move_target_instance_id, v2);
  }
  this->follow_move_target_instance_id = 0;
  v3 = ((_BYTE)this + 44) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->gadget_misc__unlock_show_cut_scene >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->gadget_misc__unlock_show_cut_scene >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->gadget_misc__unlock_show_cut_scene, v3, v4);
  this->gadget_misc__unlock_show_cut_scene = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_misc__chest_show_moment >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_misc__chest_show_moment >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_misc__chest_show_moment, v3);
  }
  this->gadget_misc__chest_show_moment = None_67;
  v5 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_misc__chest_show_uiremind >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_misc__chest_show_uiremind >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gadget_misc__chest_show_uiremind, v5);
  }
  this->gadget_misc__chest_show_uiremind = None_68;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_misc__chest_show_cts_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_misc__chest_show_cts_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_misc__chest_show_cts_type, v5);
  }
  this->gadget_misc__chest_show_cts_type = None_69;
  v6 = ((_BYTE)this + 60) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->billboard__has_uibar >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->billboard__has_uibar >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->billboard__has_uibar, v6, v7);
  this->billboard__has_uibar = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->billboard__show_uibar_dis >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->billboard__show_uibar_dis >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->billboard__show_uibar_dis, v6);
  }
  this->billboard__show_uibar_dis = 64.0;
  v8 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->billboard__hide_uibar_dis >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->billboard__hide_uibar_dis >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->billboard__hide_uibar_dis, v8);
  }
  this->billboard__hide_uibar_dis = 100.0;
  if ( *(char *)(((unsigned __int64)&this->billboard__uibar_need_enter_combat >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->billboard__uibar_need_enter_combat, v8, &this->billboard__uibar_need_enter_combat);
  this->billboard__uibar_need_enter_combat = 0;
  v9 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->billboard__hp_bar_style >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->billboard__hp_bar_style >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->billboard__hp_bar_style, v9);
  }
  this->billboard__hp_bar_style = Auto_0;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_indicator__type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_indicator__type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_indicator__type, v9);
  }
  this->target_indicator__type = DEFAULT_1;
  data::ConfigTemplateData::ConfigTemplateData(&this->ui__indicator);
  if ( *(_BYTE *)(((unsigned __int64)&this->target_indicator__task_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_indicator__task_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_indicator__task_id, v9);
  }
  this->target_indicator__task_id = 0;
  v10 = (((_BYTE)this - 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->billboard__multi_bar_sort_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->billboard__multi_bar_sort_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->billboard__multi_bar_sort_id, v10);
  }
  this->billboard__multi_bar_sort_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->billboard__multi_bar_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->billboard__multi_bar_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->billboard__multi_bar_num, v10);
  }
  this->billboard__multi_bar_num = 0;
  data::ConfigTriggerOverride::ConfigTriggerOverride(&this->trigger);
  data::Vector::Vector(&this->follow_rotate_offset);
  data::Vector::Vector(&this->follow_rotate_forward_offfset);
  std::unordered_map<unsigned int,std::string>::unordered_map(&this->entity_to_maneuver_city_map);
  std::string::basic_string(&this->rotate_core_city_name);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v10, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 489: range 000000001231A9F8-000000001231B3D9
void __cdecl data::LevelGadget::LevelGadget(data::LevelGadget *const this, data::LevelGadget *a2)
{
  uint32_t group_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t map_inst_id; // ecx
  char v6; // dl
  std::string *p_follow_move__attach_point; // rsi
  uint32_t follow_move_target_instance_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool gadget_misc__unlock_show_cut_scene; // cl
  char v13; // dl
  __int64 v14; // rdx
  data::ChestShowMoment gadget_misc__chest_show_moment; // ecx
  char v16; // al
  __int64 v17; // rsi
  data::ChestShowUIRemind gadget_misc__chest_show_uiremind; // ecx
  char v19; // dl
  data::ChestShowCutsceneType gadget_misc__chest_show_cts_type; // ecx
  char v21; // al
  __int64 v22; // rsi
  __int64 v23; // rdx
  bool billboard__has_uibar; // cl
  char v25; // dl
  __int64 v26; // rdx
  float billboard__show_uibar_dis; // xmm0_4
  float billboard__hide_uibar_dis; // xmm0_4
  __int64 v29; // rsi
  bool billboard__uibar_need_enter_combat; // cl
  char v31; // al
  __int64 v32; // rsi
  data::HpBarStyle billboard__hp_bar_style; // ecx
  char v34; // dl
  data::TargetIndicatorType target_indicator__type; // ecx
  char v36; // al
  data::ConfigTemplateData *p_ui__indicator; // rsi
  uint32_t target_indicator__task_id; // ecx
  char v39; // al
  __int64 v40; // rsi
  uint32_t billboard__multi_bar_sort_id; // ecx
  char v42; // dl
  uint32_t billboard__multi_bar_num; // ecx
  char v44; // al
  __int64 v45; // rdx
  __int64 v46; // rdx
  std::string *p_rotate_core_city_name; // rsi
  bool is_json_loaded; // cl
  char v49; // al
  data::LevelGadget *v50; // [rsp+0h] [rbp-10h]

  v50 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  group_id = a2->group_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->group_id = group_id;
  v4 = (((_BYTE)v50 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v50->map_inst_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v50 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v50->map_inst_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v50->map_inst_id);
  }
  map_inst_id = v50->map_inst_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->map_inst_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->map_inst_id, v4);
  }
  this->map_inst_id = map_inst_id;
  p_follow_move__attach_point = &v50->follow_move__attach_point;
  std::string::basic_string(&this->follow_move__attach_point, &v50->follow_move__attach_point);
  if ( *(_BYTE *)(((unsigned __int64)&v50->follow_move_target_instance_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v50->follow_move_target_instance_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v50->follow_move_target_instance_id);
  }
  follow_move_target_instance_id = v50->follow_move_target_instance_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->follow_move_target_instance_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(p_follow_move__attach_point) = v9 != 0;
    __asan_report_store4(&this->follow_move_target_instance_id, p_follow_move__attach_point);
  }
  this->follow_move_target_instance_id = follow_move_target_instance_id;
  v10 = ((_BYTE)v50 + 44) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&v50->gadget_misc__unlock_show_cut_scene >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&v50->gadget_misc__unlock_show_cut_scene >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&v50->gadget_misc__unlock_show_cut_scene, v10, v11);
  gadget_misc__unlock_show_cut_scene = v50->gadget_misc__unlock_show_cut_scene;
  v13 = *(_BYTE *)(((unsigned __int64)&this->gadget_misc__unlock_show_cut_scene >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->gadget_misc__unlock_show_cut_scene, v10, v14);
  this->gadget_misc__unlock_show_cut_scene = gadget_misc__unlock_show_cut_scene;
  if ( *(_BYTE *)(((unsigned __int64)&v50->gadget_misc__chest_show_moment >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v50->gadget_misc__chest_show_moment >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v50->gadget_misc__chest_show_moment);
  }
  gadget_misc__chest_show_moment = v50->gadget_misc__chest_show_moment;
  v16 = *(_BYTE *)(((unsigned __int64)&this->gadget_misc__chest_show_moment >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(v10) = v16 != 0;
    __asan_report_store4(&this->gadget_misc__chest_show_moment, v10);
  }
  this->gadget_misc__chest_show_moment = gadget_misc__chest_show_moment;
  v17 = (((_BYTE)v50 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v50->gadget_misc__chest_show_uiremind >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v50 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v50->gadget_misc__chest_show_uiremind >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v50->gadget_misc__chest_show_uiremind);
  }
  gadget_misc__chest_show_uiremind = v50->gadget_misc__chest_show_uiremind;
  v19 = *(_BYTE *)(((unsigned __int64)&this->gadget_misc__chest_show_uiremind >> 3) + 0x7FFF8000);
  if ( v19 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v19 )
  {
    LOBYTE(v17) = v19 != 0;
    __asan_report_store4(&this->gadget_misc__chest_show_uiremind, v17);
  }
  this->gadget_misc__chest_show_uiremind = gadget_misc__chest_show_uiremind;
  if ( *(_BYTE *)(((unsigned __int64)&v50->gadget_misc__chest_show_cts_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v50->gadget_misc__chest_show_cts_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v50->gadget_misc__chest_show_cts_type);
  }
  gadget_misc__chest_show_cts_type = v50->gadget_misc__chest_show_cts_type;
  v21 = *(_BYTE *)(((unsigned __int64)&this->gadget_misc__chest_show_cts_type >> 3) + 0x7FFF8000);
  if ( v21 != 0 && v21 <= 3 )
  {
    LOBYTE(v17) = v21 != 0;
    __asan_report_store4(&this->gadget_misc__chest_show_cts_type, v17);
  }
  this->gadget_misc__chest_show_cts_type = gadget_misc__chest_show_cts_type;
  v22 = ((_BYTE)v50 + 60) & 7;
  v23 = (*(_BYTE *)(((unsigned __int64)&v50->billboard__has_uibar >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v22 >= *(_BYTE *)(((unsigned __int64)&v50->billboard__has_uibar >> 3) + 0x7FFF8000));
  if ( (_BYTE)v23 )
    __asan_report_load1(&v50->billboard__has_uibar, v22, v23);
  billboard__has_uibar = v50->billboard__has_uibar;
  v25 = *(_BYTE *)(((unsigned __int64)&this->billboard__has_uibar >> 3) + 0x7FFF8000);
  LOBYTE(v22) = v25 != 0;
  v26 = (v25 != 0) & (unsigned __int8)((((unsigned __int8)this + 60) & 7) >= v25);
  if ( (_BYTE)v26 )
    __asan_report_store1(&this->billboard__has_uibar, v22, v26);
  this->billboard__has_uibar = billboard__has_uibar;
  if ( *(_BYTE *)(((unsigned __int64)&v50->billboard__show_uibar_dis >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v50->billboard__show_uibar_dis >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v50->billboard__show_uibar_dis);
  }
  billboard__show_uibar_dis = v50->billboard__show_uibar_dis;
  if ( *(_BYTE *)(((unsigned __int64)&this->billboard__show_uibar_dis >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->billboard__show_uibar_dis >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->billboard__show_uibar_dis, v22);
  }
  this->billboard__show_uibar_dis = billboard__show_uibar_dis;
  if ( *(_BYTE *)(((unsigned __int64)&v50->billboard__hide_uibar_dis >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v50 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v50->billboard__hide_uibar_dis >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v50->billboard__hide_uibar_dis);
  }
  billboard__hide_uibar_dis = v50->billboard__hide_uibar_dis;
  v29 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->billboard__hide_uibar_dis >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->billboard__hide_uibar_dis >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->billboard__hide_uibar_dis, v29);
  }
  this->billboard__hide_uibar_dis = billboard__hide_uibar_dis;
  if ( *(char *)(((unsigned __int64)&v50->billboard__uibar_need_enter_combat >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v50->billboard__uibar_need_enter_combat, v29, &v50->billboard__uibar_need_enter_combat);
  billboard__uibar_need_enter_combat = v50->billboard__uibar_need_enter_combat;
  v31 = *(_BYTE *)(((unsigned __int64)&this->billboard__uibar_need_enter_combat >> 3) + 0x7FFF8000);
  if ( v31 < 0 )
  {
    LOBYTE(v29) = v31 != 0;
    __asan_report_store1(&this->billboard__uibar_need_enter_combat, v29, &this->billboard__uibar_need_enter_combat);
  }
  this->billboard__uibar_need_enter_combat = billboard__uibar_need_enter_combat;
  v32 = (((_BYTE)v50 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v50->billboard__hp_bar_style >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v50 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v50->billboard__hp_bar_style >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v50->billboard__hp_bar_style);
  }
  billboard__hp_bar_style = v50->billboard__hp_bar_style;
  v34 = *(_BYTE *)(((unsigned __int64)&this->billboard__hp_bar_style >> 3) + 0x7FFF8000);
  if ( v34 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v34 )
  {
    LOBYTE(v32) = v34 != 0;
    __asan_report_store4(&this->billboard__hp_bar_style, v32);
  }
  this->billboard__hp_bar_style = billboard__hp_bar_style;
  if ( *(_BYTE *)(((unsigned __int64)&v50->target_indicator__type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v50->target_indicator__type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v50->target_indicator__type);
  }
  target_indicator__type = v50->target_indicator__type;
  v36 = *(_BYTE *)(((unsigned __int64)&this->target_indicator__type >> 3) + 0x7FFF8000);
  if ( v36 != 0 && v36 <= 3 )
  {
    LOBYTE(v32) = v36 != 0;
    __asan_report_store4(&this->target_indicator__type, v32);
  }
  this->target_indicator__type = target_indicator__type;
  p_ui__indicator = &v50->ui__indicator;
  data::ConfigTemplateData::ConfigTemplateData(&this->ui__indicator, &v50->ui__indicator);
  if ( *(_BYTE *)(((unsigned __int64)&v50->target_indicator__task_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v50->target_indicator__task_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v50->target_indicator__task_id);
  }
  target_indicator__task_id = v50->target_indicator__task_id;
  v39 = *(_BYTE *)(((unsigned __int64)&this->target_indicator__task_id >> 3) + 0x7FFF8000);
  if ( v39 != 0 && v39 <= 3 )
  {
    LOBYTE(p_ui__indicator) = v39 != 0;
    __asan_report_store4(&this->target_indicator__task_id, p_ui__indicator);
  }
  this->target_indicator__task_id = target_indicator__task_id;
  v40 = (((_BYTE)v50 - 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v50->billboard__multi_bar_sort_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v50 - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v50->billboard__multi_bar_sort_id >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v50->billboard__multi_bar_sort_id);
  }
  billboard__multi_bar_sort_id = v50->billboard__multi_bar_sort_id;
  v42 = *(_BYTE *)(((unsigned __int64)&this->billboard__multi_bar_sort_id >> 3) + 0x7FFF8000);
  if ( v42 != 0 && (char)((((_BYTE)this - 68) & 7) + 3) >= v42 )
  {
    LOBYTE(v40) = v42 != 0;
    __asan_report_store4(&this->billboard__multi_bar_sort_id, v40);
  }
  this->billboard__multi_bar_sort_id = billboard__multi_bar_sort_id;
  if ( *(_BYTE *)(((unsigned __int64)&v50->billboard__multi_bar_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v50->billboard__multi_bar_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v50->billboard__multi_bar_num);
  }
  billboard__multi_bar_num = v50->billboard__multi_bar_num;
  v44 = *(_BYTE *)(((unsigned __int64)&this->billboard__multi_bar_num >> 3) + 0x7FFF8000);
  if ( v44 != 0 && v44 <= 3 )
  {
    LOBYTE(v40) = v44 != 0;
    __asan_report_store4(&this->billboard__multi_bar_num, v40);
  }
  this->billboard__multi_bar_num = billboard__multi_bar_num;
  data::ConfigTriggerOverride::ConfigTriggerOverride(&this->trigger, &v50->trigger);
  if ( *(_WORD *)(((unsigned __int64)&this->follow_rotate_offset >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&v50->follow_rotate_offset >> 3) + 0x7FFF8000) )
    __asan_report_load16(&v50->follow_rotate_offset);
  v45 = *(_QWORD *)&v50->follow_rotate_offset.z;
  *(_QWORD *)&this->follow_rotate_offset.x = *(_QWORD *)&v50->follow_rotate_offset.x;
  *(_QWORD *)&this->follow_rotate_offset.z = v45;
  if ( *(_WORD *)(((unsigned __int64)&this->follow_rotate_forward_offfset >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&v50->follow_rotate_forward_offfset >> 3) + 0x7FFF8000) )
    __asan_report_load16(&v50->follow_rotate_forward_offfset);
  v46 = *(_QWORD *)&v50->follow_rotate_forward_offfset.z;
  *(_QWORD *)&this->follow_rotate_forward_offfset.x = *(_QWORD *)&v50->follow_rotate_forward_offfset.x;
  *(_QWORD *)&this->follow_rotate_forward_offfset.z = v46;
  std::unordered_map<unsigned int,std::string>::unordered_map(
    &this->entity_to_maneuver_city_map,
    &v50->entity_to_maneuver_city_map);
  p_rotate_core_city_name = &v50->rotate_core_city_name;
  std::string::basic_string(&this->rotate_core_city_name, &v50->rotate_core_city_name);
  if ( *(char *)(((unsigned __int64)&v50->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v50->is_json_loaded, p_rotate_core_city_name, &v50->is_json_loaded);
  is_json_loaded = v50->is_json_loaded;
  v49 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v49 < 0 )
  {
    LOBYTE(p_rotate_core_city_name) = v49 != 0;
    __asan_report_store1(&this->is_json_loaded, p_rotate_core_city_name, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 489: range 000000001214A820-000000001214A884
void __cdecl data::LevelGadget::~LevelGadget(data::LevelGadget *const this)
{
  std::string::~string(&this->rotate_core_city_name);
  std::unordered_map<unsigned int,std::string>::~unordered_map(&this->entity_to_maneuver_city_map);
  data::ConfigTriggerOverride::~ConfigTriggerOverride(&this->trigger);
  data::ConfigTemplateData::~ConfigTemplateData(&this->ui__indicator);
  std::string::~string(&this->follow_move__attach_point);
};
