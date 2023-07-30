// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioEventCulling.h

// Line 18: range 00000000126DA51A-00000000126DA5A6
void __cdecl data::ConfigAudioEventCullingRuleBase::ConfigAudioEventCullingRuleBase(
        data::ConfigAudioEventCullingRuleBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::ConfigAudioEventCullingRuleBase>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigAudioEventCullingRuleBase>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAudioEventCullingRuleBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAudioEventCullingRuleBase = v2;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 18: range 00000000126DAA70-00000000126DAB46
void __cdecl data::ConfigAudioEventCullingRuleBase::ConfigAudioEventCullingRuleBase(
        data::ConfigAudioEventCullingRuleBase *const this,
        const data::ConfigAudioEventCullingRuleBase *a2)
{
  std::enable_shared_from_this<data::ConfigAudioEventCullingRuleBase> *v2; // rsi
  int (**v3)(...); // rdx
  bool is_json_loaded; // cl
  char v5; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigAudioEventCullingRuleBase>;
  std::enable_shared_from_this<data::ConfigAudioEventCullingRuleBase>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigAudioEventCullingRuleBase>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigAudioEventCullingRuleBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigAudioEventCullingRuleBase = v3;
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

// Line 25: range 00000000126DAD90-00000000126DADE1
void __cdecl data::ConfigAudioEventCullingRuleBase::~ConfigAudioEventCullingRuleBase(
        data::ConfigAudioEventCullingRuleBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAudioEventCullingRuleBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAudioEventCullingRuleBase = v2;
  std::enable_shared_from_this<data::ConfigAudioEventCullingRuleBase>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigAudioEventCullingRuleBase>);
};

// Line 25: range 00000000126DADE2-00000000126DAE0C
void __cdecl data::ConfigAudioEventCullingRuleBase::~ConfigAudioEventCullingRuleBase(
        data::ConfigAudioEventCullingRuleBase *const this)
{
  data::ConfigAudioEventCullingRuleBase::~ConfigAudioEventCullingRuleBase(this);
  operator delete(this, 0x20uLL);
};

// Line 30: range 0000000012138F86-0000000012138F96
const char *__cdecl data::ConfigAudioEventCullingRuleBase::getTypeName(
        const data::ConfigAudioEventCullingRuleBase *const this)
{
  return "ConfigAudioEventCullingRuleBase";
};

// Line 31: range 0000000012138F98-0000000012139134
int32_t __cdecl data::ConfigAudioEventCullingRuleBase::getHashNum(
        const data::ConfigAudioEventCullingRuleBase *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigAudioEventCullingRuleBase::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAudioEventCullingRuleBase",
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

// Line 50: range 00000000126DAE0E-00000000126DAEA3
void __cdecl data::ConfigRuleCullingDistance::ConfigRuleCullingDistance(data::ConfigRuleCullingDistance *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAudioEventCullingRuleBase::ConfigAudioEventCullingRuleBase((data::ConfigAudioEventCullingRuleBase *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigRuleCullingDistance + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAudioEventCullingRuleBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->distance, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->distance = 0.0;
};

// Line 50: range 00000000126DB33C-00000000126DB41C
void __cdecl data::ConfigRuleCullingDistance::ConfigRuleCullingDistance(
        data::ConfigRuleCullingDistance *const this,
        const data::ConfigRuleCullingDistance *a2)
{
  int (**v2)(...); // rdx
  float distance; // xmm0_4

  data::ConfigAudioEventCullingRuleBase::ConfigAudioEventCullingRuleBase(
    (data::ConfigAudioEventCullingRuleBase *const)this,
    (const data::ConfigAudioEventCullingRuleBase *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigRuleCullingDistance + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAudioEventCullingRuleBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->distance);
  }
  distance = a2->distance;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->distance, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->distance = distance;
};

// Line 57: range 000000001274E780-000000001274E7AA
void __cdecl data::ConfigRuleCullingDistance::~ConfigRuleCullingDistance(data::ConfigRuleCullingDistance *const this)
{
  data::ConfigRuleCullingDistance::~ConfigRuleCullingDistance(this);
  operator delete(this, 0x20uLL);
};

// Line 57: range 000000001274E732-000000001274E77F
void __cdecl data::ConfigRuleCullingDistance::~ConfigRuleCullingDistance(data::ConfigRuleCullingDistance *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigRuleCullingDistance + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAudioEventCullingRuleBase = v2;
  data::ConfigAudioEventCullingRuleBase::~ConfigAudioEventCullingRuleBase((data::ConfigAudioEventCullingRuleBase *const)this);
};

// Line 62: range 0000000012139136-0000000012139146
const char *__cdecl data::ConfigRuleCullingDistance::getTypeName(const data::ConfigRuleCullingDistance *const this)
{
  return "ConfigRuleCullingDistance";
};

// Line 63: range 0000000012139148-00000000121392E4
int32_t __cdecl data::ConfigRuleCullingDistance::getHashNum(const data::ConfigRuleCullingDistance *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigRuleCullingDistance::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigRuleCullingDistance",
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

// Line 79: range 00000000126DB666-00000000126DB6A7
void __cdecl data::ConfigRuleCullingDistanceFactory::ConfigRuleCullingDistanceFactory(
        data::ConfigRuleCullingDistanceFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigRuleCullingDistanceFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigRuleCullingDistanceFactory = v2;
};

// Line 87: range 00000000126DB9B0-00000000126DBA83
void __cdecl data::ConfigRuleWaitDistance::ConfigRuleWaitDistance(data::ConfigRuleWaitDistance *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigAudioEventCullingRuleBase::ConfigAudioEventCullingRuleBase((data::ConfigAudioEventCullingRuleBase *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigRuleWaitDistance + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAudioEventCullingRuleBase = v2;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->distance, v3);
  }
  this->distance = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->recheck_frame >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->recheck_frame >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->recheck_frame, v3);
  }
  this->recheck_frame = 5;
};

// Line 87: range 00000000126DBF8C-00000000126DC0E1
void __cdecl data::ConfigRuleWaitDistance::ConfigRuleWaitDistance(
        data::ConfigRuleWaitDistance *const this,
        const data::ConfigRuleWaitDistance *a2)
{
  int (**v2)(...); // rdx
  float distance; // xmm0_4
  __int64 v4; // rsi
  int32_t recheck_frame; // ecx
  char v6; // al

  data::ConfigAudioEventCullingRuleBase::ConfigAudioEventCullingRuleBase(
    (data::ConfigAudioEventCullingRuleBase *const)this,
    (const data::ConfigAudioEventCullingRuleBase *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigRuleWaitDistance + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAudioEventCullingRuleBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->distance);
  }
  distance = a2->distance;
  v4 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->distance, v4);
  }
  this->distance = distance;
  if ( *(_BYTE *)(((unsigned __int64)&a2->recheck_frame >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->recheck_frame >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->recheck_frame);
  }
  recheck_frame = a2->recheck_frame;
  v6 = *(_BYTE *)(((unsigned __int64)&this->recheck_frame >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->recheck_frame, v4);
  }
  this->recheck_frame = recheck_frame;
};

// Line 95: range 000000001274E706-000000001274E730
void __cdecl data::ConfigRuleWaitDistance::~ConfigRuleWaitDistance(data::ConfigRuleWaitDistance *const this)
{
  data::ConfigRuleWaitDistance::~ConfigRuleWaitDistance(this);
  operator delete(this, 0x28uLL);
};

// Line 95: range 000000001274E6B8-000000001274E705
void __cdecl data::ConfigRuleWaitDistance::~ConfigRuleWaitDistance(data::ConfigRuleWaitDistance *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigRuleWaitDistance + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAudioEventCullingRuleBase = v2;
  data::ConfigAudioEventCullingRuleBase::~ConfigAudioEventCullingRuleBase((data::ConfigAudioEventCullingRuleBase *const)this);
};

// Line 100: range 00000000121392E6-00000000121392F6
const char *__cdecl data::ConfigRuleWaitDistance::getTypeName(const data::ConfigRuleWaitDistance *const this)
{
  return "ConfigRuleWaitDistance";
};

// Line 101: range 00000000121392F8-0000000012139494
int32_t __cdecl data::ConfigRuleWaitDistance::getHashNum(const data::ConfigRuleWaitDistance *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigRuleWaitDistance::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigRuleWaitDistance",
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

// Line 117: range 00000000126DC32A-00000000126DC36B
void __cdecl data::ConfigRuleWaitDistanceFactory::ConfigRuleWaitDistanceFactory(
        data::ConfigRuleWaitDistanceFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigRuleWaitDistanceFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigRuleWaitDistanceFactory = v2;
};

// Line 125: range 00000000126DC674-00000000126DC707
void __cdecl data::ConfigRuleLimitFrameGlobal::ConfigRuleLimitFrameGlobal(data::ConfigRuleLimitFrameGlobal *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAudioEventCullingRuleBase::ConfigAudioEventCullingRuleBase((data::ConfigAudioEventCullingRuleBase *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigRuleLimitFrameGlobal + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAudioEventCullingRuleBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_frame >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->limit_frame >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->limit_frame, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->limit_frame = 0;
};

// Line 125: range 00000000126DCB9C-00000000126DCC79
void __cdecl data::ConfigRuleLimitFrameGlobal::ConfigRuleLimitFrameGlobal(
        data::ConfigRuleLimitFrameGlobal *const this,
        const data::ConfigRuleLimitFrameGlobal *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  int32_t limit_frame; // ecx
  char v5; // dl

  data::ConfigAudioEventCullingRuleBase::ConfigAudioEventCullingRuleBase(
    (data::ConfigAudioEventCullingRuleBase *const)this,
    (const data::ConfigAudioEventCullingRuleBase *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigRuleLimitFrameGlobal + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAudioEventCullingRuleBase = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->limit_frame >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->limit_frame >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->limit_frame);
  }
  limit_frame = a2->limit_frame;
  v5 = *(_BYTE *)(((unsigned __int64)&this->limit_frame >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->limit_frame, v3);
  }
  this->limit_frame = limit_frame;
};

// Line 132: range 000000001274E68C-000000001274E6B6
void __cdecl data::ConfigRuleLimitFrameGlobal::~ConfigRuleLimitFrameGlobal(
        data::ConfigRuleLimitFrameGlobal *const this)
{
  data::ConfigRuleLimitFrameGlobal::~ConfigRuleLimitFrameGlobal(this);
  operator delete(this, 0x20uLL);
};

// Line 132: range 000000001274E63E-000000001274E68B
void __cdecl data::ConfigRuleLimitFrameGlobal::~ConfigRuleLimitFrameGlobal(
        data::ConfigRuleLimitFrameGlobal *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigRuleLimitFrameGlobal + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAudioEventCullingRuleBase = v2;
  data::ConfigAudioEventCullingRuleBase::~ConfigAudioEventCullingRuleBase((data::ConfigAudioEventCullingRuleBase *const)this);
};

// Line 137: range 0000000012139496-00000000121394A6
const char *__cdecl data::ConfigRuleLimitFrameGlobal::getTypeName(const data::ConfigRuleLimitFrameGlobal *const this)
{
  return "ConfigRuleLimitFrameGlobal";
};

// Line 138: range 00000000121394A8-0000000012139644
int32_t __cdecl data::ConfigRuleLimitFrameGlobal::getHashNum(const data::ConfigRuleLimitFrameGlobal *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigRuleLimitFrameGlobal::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigRuleLimitFrameGlobal",
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

// Line 154: range 00000000126DCEC2-00000000126DCF03
void __cdecl data::ConfigRuleLimitFrameGlobalFactory::ConfigRuleLimitFrameGlobalFactory(
        data::ConfigRuleLimitFrameGlobalFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigRuleLimitFrameGlobalFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigRuleLimitFrameGlobalFactory = v2;
};

// Line 162: range 00000000126DD20C-00000000126DD29F
void __cdecl data::ConfigRuleLimitFrame::ConfigRuleLimitFrame(data::ConfigRuleLimitFrame *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAudioEventCullingRuleBase::ConfigAudioEventCullingRuleBase((data::ConfigAudioEventCullingRuleBase *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigRuleLimitFrame + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAudioEventCullingRuleBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_frame >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->limit_frame >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->limit_frame, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->limit_frame = 0;
};

// Line 162: range 00000000126DD734-00000000126DD811
void __cdecl data::ConfigRuleLimitFrame::ConfigRuleLimitFrame(
        data::ConfigRuleLimitFrame *const this,
        const data::ConfigRuleLimitFrame *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  int32_t limit_frame; // ecx
  char v5; // dl

  data::ConfigAudioEventCullingRuleBase::ConfigAudioEventCullingRuleBase(
    (data::ConfigAudioEventCullingRuleBase *const)this,
    (const data::ConfigAudioEventCullingRuleBase *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigRuleLimitFrame + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAudioEventCullingRuleBase = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->limit_frame >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->limit_frame >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->limit_frame);
  }
  limit_frame = a2->limit_frame;
  v5 = *(_BYTE *)(((unsigned __int64)&this->limit_frame >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->limit_frame, v3);
  }
  this->limit_frame = limit_frame;
};

// Line 169: range 000000001274E612-000000001274E63C
void __cdecl data::ConfigRuleLimitFrame::~ConfigRuleLimitFrame(data::ConfigRuleLimitFrame *const this)
{
  data::ConfigRuleLimitFrame::~ConfigRuleLimitFrame(this);
  operator delete(this, 0x20uLL);
};

// Line 169: range 000000001274E5C4-000000001274E611
void __cdecl data::ConfigRuleLimitFrame::~ConfigRuleLimitFrame(data::ConfigRuleLimitFrame *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigRuleLimitFrame + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAudioEventCullingRuleBase = v2;
  data::ConfigAudioEventCullingRuleBase::~ConfigAudioEventCullingRuleBase((data::ConfigAudioEventCullingRuleBase *const)this);
};

// Line 174: range 0000000012139646-0000000012139656
const char *__cdecl data::ConfigRuleLimitFrame::getTypeName(const data::ConfigRuleLimitFrame *const this)
{
  return "ConfigRuleLimitFrame";
};

// Line 175: range 0000000012139658-00000000121397F4
int32_t __cdecl data::ConfigRuleLimitFrame::getHashNum(const data::ConfigRuleLimitFrame *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigRuleLimitFrame::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigRuleLimitFrame",
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

// Line 191: range 00000000126DDA5A-00000000126DDA9B
void __cdecl data::ConfigRuleLimitFrameFactory::ConfigRuleLimitFrameFactory(
        data::ConfigRuleLimitFrameFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigRuleLimitFrameFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigRuleLimitFrameFactory = v2;
};

// Line 199: range 00000000126DDDA4-00000000126DDE01
void __cdecl data::ConfigRuleCullingEventNameContain::ConfigRuleCullingEventNameContain(
        data::ConfigRuleCullingEventNameContain *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAudioEventCullingRuleBase::ConfigAudioEventCullingRuleBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigRuleCullingEventNameContain + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAudioEventCullingRuleBase = v2;
  std::string::basic_string(&this->pattern);
};

// Line 199: range 00000000126DE206-00000000126DE29C
void __cdecl data::ConfigRuleCullingEventNameContain::ConfigRuleCullingEventNameContain(
        data::ConfigRuleCullingEventNameContain *const this,
        const data::ConfigRuleCullingEventNameContain *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAudioEventCullingRuleBase::ConfigAudioEventCullingRuleBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigRuleCullingEventNameContain + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAudioEventCullingRuleBase = v2;
  std::string::basic_string(&this->pattern, &a2->pattern);
};

// Line 206: range 000000001274E53A-000000001274E597
void __cdecl data::ConfigRuleCullingEventNameContain::~ConfigRuleCullingEventNameContain(
        data::ConfigRuleCullingEventNameContain *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigRuleCullingEventNameContain + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAudioEventCullingRuleBase = v2;
  std::string::~string(&this->pattern);
  data::ConfigAudioEventCullingRuleBase::~ConfigAudioEventCullingRuleBase(this);
};

// Line 206: range 000000001274E598-000000001274E5C2
void __cdecl data::ConfigRuleCullingEventNameContain::~ConfigRuleCullingEventNameContain(
        data::ConfigRuleCullingEventNameContain *const this)
{
  data::ConfigRuleCullingEventNameContain::~ConfigRuleCullingEventNameContain(this);
  operator delete(this, 0x40uLL);
};

// Line 211: range 00000000121397F6-0000000012139806
const char *__cdecl data::ConfigRuleCullingEventNameContain::getTypeName(
        const data::ConfigRuleCullingEventNameContain *const this)
{
  return "ConfigRuleCullingEventNameContain";
};

// Line 212: range 0000000012139808-00000000121399A4
int32_t __cdecl data::ConfigRuleCullingEventNameContain::getHashNum(
        const data::ConfigRuleCullingEventNameContain *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigRuleCullingEventNameContain::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigRuleCullingEventNameContain",
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

// Line 228: range 00000000126DE586-00000000126DE5C7
void __cdecl data::ConfigRuleCullingEventNameContainFactory::ConfigRuleCullingEventNameContainFactory(
        data::ConfigRuleCullingEventNameContainFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigRuleCullingEventNameContainFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigRuleCullingEventNameContainFactory = v2;
};

// Line 236: range 00000000126DE8D0-00000000126DE91D
void __cdecl data::ConfigRuleCullingEvent::ConfigRuleCullingEvent(data::ConfigRuleCullingEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAudioEventCullingRuleBase::ConfigAudioEventCullingRuleBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigRuleCullingEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAudioEventCullingRuleBase = v2;
};

// Line 236: range 00000000126DED32-00000000126DED8A
void __cdecl data::ConfigRuleCullingEvent::ConfigRuleCullingEvent(
        data::ConfigRuleCullingEvent *const this,
        const data::ConfigRuleCullingEvent *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAudioEventCullingRuleBase::ConfigAudioEventCullingRuleBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigRuleCullingEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAudioEventCullingRuleBase = v2;
};

// Line 242: range 000000001274E4C0-000000001274E50D
void __cdecl data::ConfigRuleCullingEvent::~ConfigRuleCullingEvent(data::ConfigRuleCullingEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigRuleCullingEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAudioEventCullingRuleBase = v2;
  data::ConfigAudioEventCullingRuleBase::~ConfigAudioEventCullingRuleBase(this);
};

// Line 242: range 000000001274E50E-000000001274E538
void __cdecl data::ConfigRuleCullingEvent::~ConfigRuleCullingEvent(data::ConfigRuleCullingEvent *const this)
{
  data::ConfigRuleCullingEvent::~ConfigRuleCullingEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 247: range 00000000121399A6-00000000121399B6
const char *__cdecl data::ConfigRuleCullingEvent::getTypeName(const data::ConfigRuleCullingEvent *const this)
{
  return "ConfigRuleCullingEvent";
};

// Line 248: range 00000000121399B8-0000000012139B54
int32_t __cdecl data::ConfigRuleCullingEvent::getHashNum(const data::ConfigRuleCullingEvent *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigRuleCullingEvent::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigRuleCullingEvent",
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

// Line 264: range 00000000126DEFD4-00000000126DF015
void __cdecl data::ConfigRuleCullingEventFactory::ConfigRuleCullingEventFactory(
        data::ConfigRuleCullingEventFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigRuleCullingEventFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigRuleCullingEventFactory = v2;
};
