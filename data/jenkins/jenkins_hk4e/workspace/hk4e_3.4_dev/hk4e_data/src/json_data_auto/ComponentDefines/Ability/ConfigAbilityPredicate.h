// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Ability/ConfigAbilityPredicate.h

// Line 23: range 000000000ECD90CA-000000000ECD9199
void __cdecl data::ConfigAbilityPredicate::ConfigAbilityPredicate(data::ConfigAbilityPredicate *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  std::enable_shared_from_this<data::ConfigAbilityPredicate>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigAbilityPredicate>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAbilityPredicate + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->target >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target, v1);
  }
  this->target = Target;
  v3 = ((_BYTE)this + 28) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 23: range 000000000ECD96DE-000000000ECD9833
void __cdecl data::ConfigAbilityPredicate::ConfigAbilityPredicate(
        data::ConfigAbilityPredicate *const this,
        const data::ConfigAbilityPredicate *a2)
{
  std::enable_shared_from_this<data::ConfigAbilityPredicate> *v2; // rsi
  int (**v3)(...); // rdx
  data::AbilityTargetting target; // ecx
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool is_json_loaded; // cl
  char v9; // dl
  __int64 v10; // rdx

  v2 = &a2->std::enable_shared_from_this<data::ConfigAbilityPredicate>;
  std::enable_shared_from_this<data::ConfigAbilityPredicate>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigAbilityPredicate>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigAbilityPredicate + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigAbilityPredicate = v3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->target >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->target >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->target);
  }
  target = a2->target;
  v5 = *(_BYTE *)(((unsigned __int64)&this->target >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store4(&this->target, v2);
  }
  this->target = target;
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

// Line 31: range 000000000ECD9AC4-000000000ECD9B15
void __cdecl data::ConfigAbilityPredicate::~ConfigAbilityPredicate(data::ConfigAbilityPredicate *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAbilityPredicate + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::enable_shared_from_this<data::ConfigAbilityPredicate>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigAbilityPredicate>);
};

// Line 31: range 000000000ECD9B16-000000000ECD9B40
void __cdecl data::ConfigAbilityPredicate::~ConfigAbilityPredicate(data::ConfigAbilityPredicate *const this)
{
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
  operator delete(this, 0x20uLL);
};

// Line 36: range 000000000E69FB8A-000000000E69FB9A
const char *__cdecl data::ConfigAbilityPredicate::getTypeName(const data::ConfigAbilityPredicate *const this)
{
  return "ConfigAbilityPredicate";
};

// Line 37: range 000000000E69FB9C-000000000E69FD38
int32_t __cdecl data::ConfigAbilityPredicate::getHashNum(const data::ConfigAbilityPredicate *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigAbilityPredicate::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAbilityPredicate",
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

// Line 44: range 000000000E69FD3A-000000000E69FD4C
bool __cdecl data::ConfigAbilityPredicate::check(data::ConfigAbilityPredicate *const this, PredicateParam *param)
{
  return 1;
};

// Line 64: range 000000000ECD9B42-000000000ECD9BCD
void __cdecl data::RelationalOperationPredicate::RelationalOperationPredicate(
        data::RelationalOperationPredicate *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::RelationalOperationPredicate + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->logic, v1);
  }
  this->logic = Greater_1;
};

// Line 64: range 000000000ECDA0CE-000000000ECDA19B
void __cdecl data::RelationalOperationPredicate::RelationalOperationPredicate(
        data::RelationalOperationPredicate *const this,
        const data::RelationalOperationPredicate *a2)
{
  int (**v2)(...); // rdx
  data::RelationalOperator logic; // ecx
  char v4; // al

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::RelationalOperationPredicate + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->logic >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->logic >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->logic);
  }
  logic = a2->logic;
  v4 = *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->logic, a2);
  }
  this->logic = logic;
};

// Line 71: range 000000000ECDA3E4-000000000ECDA431
void __cdecl data::RelationalOperationPredicate::~RelationalOperationPredicate(
        data::RelationalOperationPredicate *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RelationalOperationPredicate + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 71: range 000000000ECDA432-000000000ECDA45C
void __cdecl data::RelationalOperationPredicate::~RelationalOperationPredicate(
        data::RelationalOperationPredicate *const this)
{
  data::RelationalOperationPredicate::~RelationalOperationPredicate(this);
  operator delete(this, 0x28uLL);
};

// Line 76: range 000000000E69FD4E-000000000E69FD5E
const char *__cdecl data::RelationalOperationPredicate::getTypeName(
        const data::RelationalOperationPredicate *const this)
{
  return "RelationalOperationPredicate";
};

// Line 77: range 000000000E69FD60-000000000E69FEFC
int32_t __cdecl data::RelationalOperationPredicate::getHashNum(const data::RelationalOperationPredicate *const this)
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
  *(_QWORD *)(v1 + 16) = data::RelationalOperationPredicate::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "RelationalOperationPredicate",
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

// Line 96: range 000000000ECDA45E-000000000ECDA4BB
void __cdecl data::ByTargetHPRatio::ByTargetHPRatio(data::ByTargetHPRatio *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::RelationalOperationPredicate::RelationalOperationPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetHPRatio + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicFloat::DynamicFloat(&this->hpratio);
};

// Line 96: range 000000000ECDA8D6-000000000ECDA96C
void __cdecl data::ByTargetHPRatio::ByTargetHPRatio(data::ByTargetHPRatio *const this, const data::ByTargetHPRatio *a2)
{
  int (**v2)(...); // rdx

  data::RelationalOperationPredicate::RelationalOperationPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetHPRatio + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicFloat::DynamicFloat(&this->hpratio, &a2->hpratio);
};

// Line 103: range 000000000EDAFF9E-000000000EDAFFC8
void __cdecl data::ByTargetHPRatio::~ByTargetHPRatio(data::ByTargetHPRatio *const this)
{
  data::ByTargetHPRatio::~ByTargetHPRatio(this);
  operator delete(this, 0x48uLL);
};

// Line 103: range 000000000EDAFF40-000000000EDAFF9D
void __cdecl data::ByTargetHPRatio::~ByTargetHPRatio(data::ByTargetHPRatio *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetHPRatio + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicFloat::~DynamicFloat(&this->hpratio);
  data::RelationalOperationPredicate::~RelationalOperationPredicate(this);
};

// Line 108: range 000000000E69FEFE-000000000E69FF0E
const char *__cdecl data::ByTargetHPRatio::getTypeName(const data::ByTargetHPRatio *const this)
{
  return "ByTargetHPRatio";
};

// Line 109: range 000000000E69FF10-000000000E6A00AC
int32_t __cdecl data::ByTargetHPRatio::getHashNum(const data::ByTargetHPRatio *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByTargetHPRatio::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByTargetHPRatio",
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

// Line 125: range 000000000ECDAC56-000000000ECDAC97
void __cdecl data::ByTargetHPRatioFactory::ByTargetHPRatioFactory(data::ByTargetHPRatioFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetHPRatioFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByTargetHPRatioFactory = v2;
};

// Line 133: range 000000000ECDAFA0-000000000ECDAFED
void __cdecl data::ByTargetRaycastVisiable::ByTargetRaycastVisiable(data::ByTargetRaycastVisiable *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetRaycastVisiable + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 133: range 000000000ECDB47E-000000000ECDB4D6
void __cdecl data::ByTargetRaycastVisiable::ByTargetRaycastVisiable(
        data::ByTargetRaycastVisiable *const this,
        const data::ByTargetRaycastVisiable *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetRaycastVisiable + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 139: range 000000000EDAFF14-000000000EDAFF3E
void __cdecl data::ByTargetRaycastVisiable::~ByTargetRaycastVisiable(data::ByTargetRaycastVisiable *const this)
{
  data::ByTargetRaycastVisiable::~ByTargetRaycastVisiable(this);
  operator delete(this, 0x20uLL);
};

// Line 139: range 000000000EDAFEC6-000000000EDAFF13
void __cdecl data::ByTargetRaycastVisiable::~ByTargetRaycastVisiable(data::ByTargetRaycastVisiable *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetRaycastVisiable + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 144: range 000000000E6A00AE-000000000E6A00BE
const char *__cdecl data::ByTargetRaycastVisiable::getTypeName(const data::ByTargetRaycastVisiable *const this)
{
  return "ByTargetRaycastVisiable";
};

// Line 145: range 000000000E6A00C0-000000000E6A025C
int32_t __cdecl data::ByTargetRaycastVisiable::getHashNum(const data::ByTargetRaycastVisiable *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByTargetRaycastVisiable::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByTargetRaycastVisiable",
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

// Line 161: range 000000000ECDB720-000000000ECDB761
void __cdecl data::ByTargetRaycastVisiableFactory::ByTargetRaycastVisiableFactory(
        data::ByTargetRaycastVisiableFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetRaycastVisiableFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByTargetRaycastVisiableFactory = v2;
};

// Line 169: range 000000000ECDBA6A-000000000ECDBAEE
void __cdecl data::ByLocalAvatarStamina::ByLocalAvatarStamina(data::ByLocalAvatarStamina *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::RelationalOperationPredicate::RelationalOperationPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByLocalAvatarStamina + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicFloat::DynamicFloat(&this->stamina, 0.0);
};

// Line 169: range 000000000ECDBFA0-000000000ECDC036
void __cdecl data::ByLocalAvatarStamina::ByLocalAvatarStamina(
        data::ByLocalAvatarStamina *const this,
        const data::ByLocalAvatarStamina *a2)
{
  int (**v2)(...); // rdx

  data::RelationalOperationPredicate::RelationalOperationPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByLocalAvatarStamina + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicFloat::DynamicFloat(&this->stamina, &a2->stamina);
};

// Line 176: range 000000000EDAFE9A-000000000EDAFEC4
void __cdecl data::ByLocalAvatarStamina::~ByLocalAvatarStamina(data::ByLocalAvatarStamina *const this)
{
  data::ByLocalAvatarStamina::~ByLocalAvatarStamina(this);
  operator delete(this, 0x48uLL);
};

// Line 176: range 000000000EDAFE3C-000000000EDAFE99
void __cdecl data::ByLocalAvatarStamina::~ByLocalAvatarStamina(data::ByLocalAvatarStamina *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByLocalAvatarStamina + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicFloat::~DynamicFloat(&this->stamina);
  data::RelationalOperationPredicate::~RelationalOperationPredicate(this);
};

// Line 181: range 000000000E6A025E-000000000E6A026E
const char *__cdecl data::ByLocalAvatarStamina::getTypeName(const data::ByLocalAvatarStamina *const this)
{
  return "ByLocalAvatarStamina";
};

// Line 182: range 000000000E6A0270-000000000E6A040C
int32_t __cdecl data::ByLocalAvatarStamina::getHashNum(const data::ByLocalAvatarStamina *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByLocalAvatarStamina::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByLocalAvatarStamina",
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

// Line 198: range 000000000ECDC320-000000000ECDC361
void __cdecl data::ByLocalAvatarStaminaFactory::ByLocalAvatarStaminaFactory(
        data::ByLocalAvatarStaminaFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByLocalAvatarStaminaFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByLocalAvatarStaminaFactory = v2;
};

// Line 206: range 000000000ECDC66A-000000000ECDC6EE
void __cdecl data::ByLocalAvatarStaminaRatio::ByLocalAvatarStaminaRatio(data::ByLocalAvatarStaminaRatio *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::RelationalOperationPredicate::RelationalOperationPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByLocalAvatarStaminaRatio + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicFloat::DynamicFloat(&this->stamina_ratio, 0.0);
};

// Line 206: range 000000000ECDCBA0-000000000ECDCC36
void __cdecl data::ByLocalAvatarStaminaRatio::ByLocalAvatarStaminaRatio(
        data::ByLocalAvatarStaminaRatio *const this,
        const data::ByLocalAvatarStaminaRatio *a2)
{
  int (**v2)(...); // rdx

  data::RelationalOperationPredicate::RelationalOperationPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByLocalAvatarStaminaRatio + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicFloat::DynamicFloat(&this->stamina_ratio, &a2->stamina_ratio);
};

// Line 213: range 000000000EDAFDB2-000000000EDAFE0F
void __cdecl data::ByLocalAvatarStaminaRatio::~ByLocalAvatarStaminaRatio(data::ByLocalAvatarStaminaRatio *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByLocalAvatarStaminaRatio + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicFloat::~DynamicFloat(&this->stamina_ratio);
  data::RelationalOperationPredicate::~RelationalOperationPredicate(this);
};

// Line 213: range 000000000EDAFE10-000000000EDAFE3A
void __cdecl data::ByLocalAvatarStaminaRatio::~ByLocalAvatarStaminaRatio(data::ByLocalAvatarStaminaRatio *const this)
{
  data::ByLocalAvatarStaminaRatio::~ByLocalAvatarStaminaRatio(this);
  operator delete(this, 0x48uLL);
};

// Line 218: range 000000000E6A040E-000000000E6A041E
const char *__cdecl data::ByLocalAvatarStaminaRatio::getTypeName(const data::ByLocalAvatarStaminaRatio *const this)
{
  return "ByLocalAvatarStaminaRatio";
};

// Line 219: range 000000000E6A0420-000000000E6A05BC
int32_t __cdecl data::ByLocalAvatarStaminaRatio::getHashNum(const data::ByLocalAvatarStaminaRatio *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByLocalAvatarStaminaRatio::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByLocalAvatarStaminaRatio",
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

// Line 235: range 000000000ECDCF20-000000000ECDCF61
void __cdecl data::ByLocalAvatarStaminaRatioFactory::ByLocalAvatarStaminaRatioFactory(
        data::ByLocalAvatarStaminaRatioFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByLocalAvatarStaminaRatioFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByLocalAvatarStaminaRatioFactory = v2;
};

// Line 243: range 000000000ECDD26A-000000000ECDD2C7
void __cdecl data::ByTargetHPValue::ByTargetHPValue(data::ByTargetHPValue *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::RelationalOperationPredicate::RelationalOperationPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetHPValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicFloat::DynamicFloat(&this->hp);
};

// Line 243: range 000000000ECDD6E2-000000000ECDD778
void __cdecl data::ByTargetHPValue::ByTargetHPValue(data::ByTargetHPValue *const this, const data::ByTargetHPValue *a2)
{
  int (**v2)(...); // rdx

  data::RelationalOperationPredicate::RelationalOperationPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetHPValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicFloat::DynamicFloat(&this->hp, &a2->hp);
};

// Line 250: range 000000000EDAFD28-000000000EDAFD85
void __cdecl data::ByTargetHPValue::~ByTargetHPValue(data::ByTargetHPValue *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetHPValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicFloat::~DynamicFloat(&this->hp);
  data::RelationalOperationPredicate::~RelationalOperationPredicate(this);
};

// Line 250: range 000000000EDAFD86-000000000EDAFDB0
void __cdecl data::ByTargetHPValue::~ByTargetHPValue(data::ByTargetHPValue *const this)
{
  data::ByTargetHPValue::~ByTargetHPValue(this);
  operator delete(this, 0x48uLL);
};

// Line 255: range 000000000E6A05BE-000000000E6A05CE
const char *__cdecl data::ByTargetHPValue::getTypeName(const data::ByTargetHPValue *const this)
{
  return "ByTargetHPValue";
};

// Line 256: range 000000000E6A05D0-000000000E6A076C
int32_t __cdecl data::ByTargetHPValue::getHashNum(const data::ByTargetHPValue *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByTargetHPValue::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByTargetHPValue",
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

// Line 272: range 000000000ECDDA62-000000000ECDDAA3
void __cdecl data::ByTargetHPValueFactory::ByTargetHPValueFactory(data::ByTargetHPValueFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetHPValueFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByTargetHPValueFactory = v2;
};

// Line 280: range 000000000ECDDDAC-000000000ECDDE44
void __cdecl data::ByHitDamage::ByHitDamage(data::ByHitDamage *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::RelationalOperationPredicate::RelationalOperationPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByHitDamage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicFloat::DynamicFloat(&this->damage);
  if ( *(char *)(((unsigned __int64)&this->use_origin_damage >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->use_origin_damage, v1, &this->use_origin_damage);
  this->use_origin_damage = 0;
};

// Line 280: range 000000000ECDE26A-000000000ECDE376
void __cdecl data::ByHitDamage::ByHitDamage(data::ByHitDamage *const this, const data::ByHitDamage *a2)
{
  int (**v2)(...); // rdx
  data::DynamicFloat *p_damage; // rsi
  bool use_origin_damage; // cl
  char v5; // al

  data::RelationalOperationPredicate::RelationalOperationPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByHitDamage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  p_damage = &a2->damage;
  data::DynamicFloat::DynamicFloat(&this->damage, &a2->damage);
  if ( *(char *)(((unsigned __int64)&a2->use_origin_damage >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->use_origin_damage, p_damage, &a2->use_origin_damage);
  use_origin_damage = a2->use_origin_damage;
  v5 = *(_BYTE *)(((unsigned __int64)&this->use_origin_damage >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_damage) = v5 != 0;
    __asan_report_store1(&this->use_origin_damage, p_damage, &this->use_origin_damage);
  }
  this->use_origin_damage = use_origin_damage;
};

// Line 288: range 000000000EDAFC9E-000000000EDAFCFB
void __cdecl data::ByHitDamage::~ByHitDamage(data::ByHitDamage *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHitDamage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicFloat::~DynamicFloat(&this->damage);
  data::RelationalOperationPredicate::~RelationalOperationPredicate(this);
};

// Line 288: range 000000000EDAFCFC-000000000EDAFD26
void __cdecl data::ByHitDamage::~ByHitDamage(data::ByHitDamage *const this)
{
  data::ByHitDamage::~ByHitDamage(this);
  operator delete(this, 0x50uLL);
};

// Line 293: range 000000000E6A076E-000000000E6A077E
const char *__cdecl data::ByHitDamage::getTypeName(const data::ByHitDamage *const this)
{
  return "ByHitDamage";
};

// Line 294: range 000000000E6A0780-000000000E6A091C
int32_t __cdecl data::ByHitDamage::getHashNum(const data::ByHitDamage *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByHitDamage::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByHitDamage",
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

// Line 310: range 000000000ECDE660-000000000ECDE6A1
void __cdecl data::ByHitDamageFactory::ByHitDamageFactory(data::ByHitDamageFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHitDamageFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByHitDamageFactory = v2;
};

// Line 318: range 000000000ECDE9AA-000000000ECDEA07
void __cdecl data::ByHitEnBreak::ByHitEnBreak(data::ByHitEnBreak *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::RelationalOperationPredicate::RelationalOperationPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByHitEnBreak + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicFloat::DynamicFloat(&this->en_break);
};

// Line 318: range 000000000ECDEE22-000000000ECDEEB8
void __cdecl data::ByHitEnBreak::ByHitEnBreak(data::ByHitEnBreak *const this, const data::ByHitEnBreak *a2)
{
  int (**v2)(...); // rdx

  data::RelationalOperationPredicate::RelationalOperationPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByHitEnBreak + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicFloat::DynamicFloat(&this->en_break, &a2->en_break);
};

// Line 325: range 000000000EDAFC72-000000000EDAFC9C
void __cdecl data::ByHitEnBreak::~ByHitEnBreak(data::ByHitEnBreak *const this)
{
  data::ByHitEnBreak::~ByHitEnBreak(this);
  operator delete(this, 0x48uLL);
};

// Line 325: range 000000000EDAFC14-000000000EDAFC71
void __cdecl data::ByHitEnBreak::~ByHitEnBreak(data::ByHitEnBreak *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHitEnBreak + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicFloat::~DynamicFloat(&this->en_break);
  data::RelationalOperationPredicate::~RelationalOperationPredicate(this);
};

// Line 330: range 000000000E6A091E-000000000E6A092E
const char *__cdecl data::ByHitEnBreak::getTypeName(const data::ByHitEnBreak *const this)
{
  return "ByHitEnBreak";
};

// Line 331: range 000000000E6A0930-000000000E6A0ACC
int32_t __cdecl data::ByHitEnBreak::getHashNum(const data::ByHitEnBreak *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByHitEnBreak::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByHitEnBreak",
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

// Line 347: range 000000000ECDF1A2-000000000ECDF1E3
void __cdecl data::ByHitEnBreakFactory::ByHitEnBreakFactory(data::ByHitEnBreakFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHitEnBreakFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByHitEnBreakFactory = v2;
};

// Line 355: range 000000000ECDF4EC-000000000ECDF539
void __cdecl data::ByHitCritical::ByHitCritical(data::ByHitCritical *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByHitCritical + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 355: range 000000000ECDF9CA-000000000ECDFA22
void __cdecl data::ByHitCritical::ByHitCritical(data::ByHitCritical *const this, const data::ByHitCritical *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByHitCritical + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 361: range 000000000EDAFB9A-000000000EDAFBE7
void __cdecl data::ByHitCritical::~ByHitCritical(data::ByHitCritical *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHitCritical + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 361: range 000000000EDAFBE8-000000000EDAFC12
void __cdecl data::ByHitCritical::~ByHitCritical(data::ByHitCritical *const this)
{
  data::ByHitCritical::~ByHitCritical(this);
  operator delete(this, 0x20uLL);
};

// Line 366: range 000000000E6A0ACE-000000000E6A0ADE
const char *__cdecl data::ByHitCritical::getTypeName(const data::ByHitCritical *const this)
{
  return "ByHitCritical";
};

// Line 367: range 000000000E6A0AE0-000000000E6A0C7C
int32_t __cdecl data::ByHitCritical::getHashNum(const data::ByHitCritical *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByHitCritical::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByHitCritical",
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

// Line 383: range 000000000ECDFC6C-000000000ECDFCAD
void __cdecl data::ByHitCriticalFactory::ByHitCriticalFactory(data::ByHitCriticalFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHitCriticalFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByHitCriticalFactory = v2;
};

// Line 391: range 000000000ECDFFB6-000000000ECE0033
void __cdecl data::ByTargetOverrideMapValue::ByTargetOverrideMapValue(data::ByTargetOverrideMapValue *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::RelationalOperationPredicate::RelationalOperationPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetOverrideMapValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::string::basic_string(&this->target_ability_name);
  std::string::basic_string(&this->target_key);
  data::DynamicFloat::DynamicFloat(&this->target_value);
};

// Line 391: range 000000000ECE03EE-000000000ECE04E4
void __cdecl data::ByTargetOverrideMapValue::ByTargetOverrideMapValue(
        data::ByTargetOverrideMapValue *const this,
        const data::ByTargetOverrideMapValue *a2)
{
  int (**v2)(...); // rdx

  data::RelationalOperationPredicate::RelationalOperationPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetOverrideMapValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::string::basic_string(&this->target_ability_name, &a2->target_ability_name);
  std::string::basic_string(&this->target_key, &a2->target_key);
  data::DynamicFloat::DynamicFloat(&this->target_value, &a2->target_value);
};

// Line 400: range 000000000EDAFB6E-000000000EDAFB98
void __cdecl data::ByTargetOverrideMapValue::~ByTargetOverrideMapValue(data::ByTargetOverrideMapValue *const this)
{
  data::ByTargetOverrideMapValue::~ByTargetOverrideMapValue(this);
  operator delete(this, 0x88uLL);
};

// Line 400: range 000000000EDAFAF0-000000000EDAFB6D
void __cdecl data::ByTargetOverrideMapValue::~ByTargetOverrideMapValue(data::ByTargetOverrideMapValue *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetOverrideMapValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicFloat::~DynamicFloat(&this->target_value);
  std::string::~string(&this->target_key);
  std::string::~string(&this->target_ability_name);
  data::RelationalOperationPredicate::~RelationalOperationPredicate(this);
};

// Line 405: range 000000000E6A0C7E-000000000E6A0C8E
const char *__cdecl data::ByTargetOverrideMapValue::getTypeName(const data::ByTargetOverrideMapValue *const this)
{
  return "ByTargetOverrideMapValue";
};

// Line 406: range 000000000E6A0C90-000000000E6A0E2C
int32_t __cdecl data::ByTargetOverrideMapValue::getHashNum(const data::ByTargetOverrideMapValue *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByTargetOverrideMapValue::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByTargetOverrideMapValue",
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

// Line 422: range 000000000ECE07CE-000000000ECE080F
void __cdecl data::ByTargetOverrideMapValueFactory::ByTargetOverrideMapValueFactory(
        data::ByTargetOverrideMapValueFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetOverrideMapValueFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByTargetOverrideMapValueFactory = v2;
};

// Line 430: range 000000000ECE0B18-000000000ECE0B65
void __cdecl data::ByWetHitCollider::ByWetHitCollider(data::ByWetHitCollider *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByWetHitCollider + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 430: range 000000000ECE0FF6-000000000ECE104E
void __cdecl data::ByWetHitCollider::ByWetHitCollider(
        data::ByWetHitCollider *const this,
        const data::ByWetHitCollider *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByWetHitCollider + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 436: range 000000000EDAFAC4-000000000EDAFAEE
void __cdecl data::ByWetHitCollider::~ByWetHitCollider(data::ByWetHitCollider *const this)
{
  data::ByWetHitCollider::~ByWetHitCollider(this);
  operator delete(this, 0x20uLL);
};

// Line 436: range 000000000EDAFA76-000000000EDAFAC3
void __cdecl data::ByWetHitCollider::~ByWetHitCollider(data::ByWetHitCollider *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByWetHitCollider + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 441: range 000000000E6A0E2E-000000000E6A0E3E
const char *__cdecl data::ByWetHitCollider::getTypeName(const data::ByWetHitCollider *const this)
{
  return "ByWetHitCollider";
};

// Line 442: range 000000000E6A0E40-000000000E6A0FDC
int32_t __cdecl data::ByWetHitCollider::getHashNum(const data::ByWetHitCollider *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByWetHitCollider::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByWetHitCollider",
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

// Line 458: range 000000000ECE1298-000000000ECE12D9
void __cdecl data::ByWetHitColliderFactory::ByWetHitColliderFactory(data::ByWetHitColliderFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByWetHitColliderFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByWetHitColliderFactory = v2;
};

// Line 466: range 000000000ECE15E2-000000000ECE163F
void __cdecl data::ByHitBoxName::ByHitBoxName(data::ByHitBoxName *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByHitBoxName + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<std::string>::vector(&this->hit_box_names);
};

// Line 466: range 000000000ECE1A34-000000000ECE1ACA
void __cdecl data::ByHitBoxName::ByHitBoxName(data::ByHitBoxName *const this, const data::ByHitBoxName *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByHitBoxName + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<std::string>::vector(&this->hit_box_names, &a2->hit_box_names);
};

// Line 473: range 000000000EDAF9EC-000000000EDAFA49
void __cdecl data::ByHitBoxName::~ByHitBoxName(data::ByHitBoxName *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHitBoxName + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<std::string>::~vector(&this->hit_box_names);
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 473: range 000000000EDAFA4A-000000000EDAFA74
void __cdecl data::ByHitBoxName::~ByHitBoxName(data::ByHitBoxName *const this)
{
  data::ByHitBoxName::~ByHitBoxName(this);
  operator delete(this, 0x38uLL);
};

// Line 478: range 000000000E6A0FDE-000000000E6A0FEE
const char *__cdecl data::ByHitBoxName::getTypeName(const data::ByHitBoxName *const this)
{
  return "ByHitBoxName";
};

// Line 479: range 000000000E6A0FF0-000000000E6A118C
int32_t __cdecl data::ByHitBoxName::getHashNum(const data::ByHitBoxName *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByHitBoxName::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByHitBoxName",
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

// Line 495: range 000000000ECE1DB4-000000000ECE1DF5
void __cdecl data::ByHitBoxNameFactory::ByHitBoxNameFactory(data::ByHitBoxNameFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHitBoxNameFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByHitBoxNameFactory = v2;
};

// Line 503: range 000000000ECE20FE-000000000ECE2189
void __cdecl data::ByHitBoxType::ByHitBoxType(data::ByHitBoxType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByHitBoxType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->hit_box_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hit_box_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hit_box_type, v1);
  }
  this->hit_box_type = Normal_10;
};

// Line 503: range 000000000ECE268A-000000000ECE2757
void __cdecl data::ByHitBoxType::ByHitBoxType(data::ByHitBoxType *const this, const data::ByHitBoxType *a2)
{
  int (**v2)(...); // rdx
  data::HitBoxType hit_box_type; // ecx
  char v4; // al

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByHitBoxType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->hit_box_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->hit_box_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->hit_box_type);
  }
  hit_box_type = a2->hit_box_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->hit_box_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->hit_box_type, a2);
  }
  this->hit_box_type = hit_box_type;
};

// Line 510: range 000000000EDAF9C0-000000000EDAF9EA
void __cdecl data::ByHitBoxType::~ByHitBoxType(data::ByHitBoxType *const this)
{
  data::ByHitBoxType::~ByHitBoxType(this);
  operator delete(this, 0x28uLL);
};

// Line 510: range 000000000EDAF972-000000000EDAF9BF
void __cdecl data::ByHitBoxType::~ByHitBoxType(data::ByHitBoxType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHitBoxType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 515: range 000000000E6A118E-000000000E6A119E
const char *__cdecl data::ByHitBoxType::getTypeName(const data::ByHitBoxType *const this)
{
  return "ByHitBoxType";
};

// Line 516: range 000000000E6A11A0-000000000E6A133C
int32_t __cdecl data::ByHitBoxType::getHashNum(const data::ByHitBoxType *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByHitBoxType::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByHitBoxType",
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

// Line 532: range 000000000ECE29A0-000000000ECE29E1
void __cdecl data::ByHitBoxTypeFactory::ByHitBoxTypeFactory(data::ByHitBoxTypeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHitBoxTypeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByHitBoxTypeFactory = v2;
};

// Line 540: range 000000000ECE2CEA-000000000ECE2D75
void __cdecl data::ByHasElement::ByHasElement(data::ByHasElement *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByHasElement + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->element >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->element >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->element, v1);
  }
  this->element = None_0;
};

// Line 540: range 000000000ECE3276-000000000ECE3343
void __cdecl data::ByHasElement::ByHasElement(data::ByHasElement *const this, const data::ByHasElement *a2)
{
  int (**v2)(...); // rdx
  data::ElementType element; // ecx
  char v4; // al

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByHasElement + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->element >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->element >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->element);
  }
  element = a2->element;
  v4 = *(_BYTE *)(((unsigned __int64)&this->element >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->element, a2);
  }
  this->element = element;
};

// Line 547: range 000000000EDAF8F8-000000000EDAF945
void __cdecl data::ByHasElement::~ByHasElement(data::ByHasElement *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHasElement + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 547: range 000000000EDAF946-000000000EDAF970
void __cdecl data::ByHasElement::~ByHasElement(data::ByHasElement *const this)
{
  data::ByHasElement::~ByHasElement(this);
  operator delete(this, 0x28uLL);
};

// Line 552: range 000000000E6A133E-000000000E6A134E
const char *__cdecl data::ByHasElement::getTypeName(const data::ByHasElement *const this)
{
  return "ByHasElement";
};

// Line 553: range 000000000E6A1350-000000000E6A14EC
int32_t __cdecl data::ByHasElement::getHashNum(const data::ByHasElement *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByHasElement::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByHasElement",
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

// Line 569: range 000000000ECE358C-000000000ECE35CD
void __cdecl data::ByHasElementFactory::ByHasElementFactory(data::ByHasElementFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHasElementFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByHasElementFactory = v2;
};

// Line 577: range 000000000ECE38D6-000000000ECE3954
void __cdecl data::ByHasAbilityState::ByHasAbilityState(data::ByHasAbilityState *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByHasAbilityState + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->ability_state >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->ability_state, v1);
  this->ability_state = None_5;
};

// Line 577: range 000000000ECE3E36-000000000ECE3EE8
void __cdecl data::ByHasAbilityState::ByHasAbilityState(
        data::ByHasAbilityState *const this,
        const data::ByHasAbilityState *a2)
{
  int (**v2)(...); // rdx
  data::AbilityState ability_state; // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByHasAbilityState + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->ability_state >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->ability_state);
  ability_state = a2->ability_state;
  if ( *(_BYTE *)(((unsigned __int64)&this->ability_state >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->ability_state, a2);
  this->ability_state = ability_state;
};

// Line 584: range 000000000EDAF87E-000000000EDAF8CB
void __cdecl data::ByHasAbilityState::~ByHasAbilityState(data::ByHasAbilityState *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHasAbilityState + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 584: range 000000000EDAF8CC-000000000EDAF8F6
void __cdecl data::ByHasAbilityState::~ByHasAbilityState(data::ByHasAbilityState *const this)
{
  data::ByHasAbilityState::~ByHasAbilityState(this);
  operator delete(this, 0x28uLL);
};

// Line 589: range 000000000E6A14EE-000000000E6A14FE
const char *__cdecl data::ByHasAbilityState::getTypeName(const data::ByHasAbilityState *const this)
{
  return "ByHasAbilityState";
};

// Line 590: range 000000000E6A1500-000000000E6A169C
int32_t __cdecl data::ByHasAbilityState::getHashNum(const data::ByHasAbilityState *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByHasAbilityState::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByHasAbilityState",
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

// Line 606: range 000000000ECE4132-000000000ECE4173
void __cdecl data::ByHasAbilityStateFactory::ByHasAbilityStateFactory(data::ByHasAbilityStateFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHasAbilityStateFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByHasAbilityStateFactory = v2;
};

// Line 614: range 000000000ECE44B4-000000000ECE4511
void __cdecl data::ByNot::ByNot(data::ByNot *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByNot + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<std::shared_ptr<data::ConfigAbilityPredicate>>::vector(&this->predicates);
};

// Line 614: range 000000000ECE4906-000000000ECE499C
void __cdecl data::ByNot::ByNot(data::ByNot *const this, const data::ByNot *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByNot + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<std::shared_ptr<data::ConfigAbilityPredicate>>::vector(&this->predicates, &a2->predicates);
};

// Line 621: range 000000000EDAF852-000000000EDAF87C
void __cdecl data::ByNot::~ByNot(data::ByNot *const this)
{
  data::ByNot::~ByNot(this);
  operator delete(this, 0x38uLL);
};

// Line 621: range 000000000EDAF7F4-000000000EDAF851
void __cdecl data::ByNot::~ByNot(data::ByNot *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByNot + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<std::shared_ptr<data::ConfigAbilityPredicate>>::~vector(&this->predicates);
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 626: range 000000000E6A169E-000000000E6A16AE
const char *__cdecl data::ByNot::getTypeName(const data::ByNot *const this)
{
  return "ByNot";
};

// Line 627: range 000000000E6A16B0-000000000E6A184C
int32_t __cdecl data::ByNot::getHashNum(const data::ByNot *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByNot::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByNot",
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

// Line 643: range 000000000ECE4C86-000000000ECE4CC7
void __cdecl data::ByNotFactory::ByNotFactory(data::ByNotFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByNotFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByNotFactory = v2;
};

// Line 651: range 000000000ECE4FD0-000000000ECE502D
void __cdecl data::ByAny::ByAny(data::ByAny *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByAny + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<std::shared_ptr<data::ConfigAbilityPredicate>>::vector(&this->predicates);
};

// Line 651: range 000000000ECE5422-000000000ECE54B8
void __cdecl data::ByAny::ByAny(data::ByAny *const this, const data::ByAny *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByAny + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<std::shared_ptr<data::ConfigAbilityPredicate>>::vector(&this->predicates, &a2->predicates);
};

// Line 658: range 000000000EDAF7C8-000000000EDAF7F2
void __cdecl data::ByAny::~ByAny(data::ByAny *const this)
{
  data::ByAny::~ByAny(this);
  operator delete(this, 0x38uLL);
};

// Line 658: range 000000000EDAF76A-000000000EDAF7C7
void __cdecl data::ByAny::~ByAny(data::ByAny *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByAny + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<std::shared_ptr<data::ConfigAbilityPredicate>>::~vector(&this->predicates);
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 663: range 000000000E6A184E-000000000E6A185E
const char *__cdecl data::ByAny::getTypeName(const data::ByAny *const this)
{
  return "ByAny";
};

// Line 664: range 000000000E6A1860-000000000E6A19FC
int32_t __cdecl data::ByAny::getHashNum(const data::ByAny *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByAny::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByAny",
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

// Line 680: range 000000000ECE57A2-000000000ECE57E3
void __cdecl data::ByAnyFactory::ByAnyFactory(data::ByAnyFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByAnyFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByAnyFactory = v2;
};

// Line 688: range 000000000ECE5AEC-000000000ECE5B49
void __cdecl data::ByAnd::ByAnd(data::ByAnd *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByAnd + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<std::shared_ptr<data::ConfigAbilityPredicate>>::vector(&this->predicates);
};

// Line 688: range 000000000ECE5F3E-000000000ECE5FD4
void __cdecl data::ByAnd::ByAnd(data::ByAnd *const this, const data::ByAnd *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByAnd + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<std::shared_ptr<data::ConfigAbilityPredicate>>::vector(&this->predicates, &a2->predicates);
};

// Line 695: range 000000000EDAF73E-000000000EDAF768
void __cdecl data::ByAnd::~ByAnd(data::ByAnd *const this)
{
  data::ByAnd::~ByAnd(this);
  operator delete(this, 0x38uLL);
};

// Line 695: range 000000000EDAF6E0-000000000EDAF73D
void __cdecl data::ByAnd::~ByAnd(data::ByAnd *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByAnd + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<std::shared_ptr<data::ConfigAbilityPredicate>>::~vector(&this->predicates);
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 700: range 000000000E6A19FE-000000000E6A1A0E
const char *__cdecl data::ByAnd::getTypeName(const data::ByAnd *const this)
{
  return "ByAnd";
};

// Line 701: range 000000000E6A1A10-000000000E6A1BAC
int32_t __cdecl data::ByAnd::getHashNum(const data::ByAnd *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByAnd::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByAnd",
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

// Line 717: range 000000000ECE62BE-000000000ECE62FF
void __cdecl data::ByAndFactory::ByAndFactory(data::ByAndFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByAndFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByAndFactory = v2;
};

// Line 725: range 000000000ECE6608-000000000ECE6655
void __cdecl data::ByHasAttackTarget::ByHasAttackTarget(data::ByHasAttackTarget *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByHasAttackTarget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 725: range 000000000ECE6AE6-000000000ECE6B3E
void __cdecl data::ByHasAttackTarget::ByHasAttackTarget(
        data::ByHasAttackTarget *const this,
        const data::ByHasAttackTarget *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByHasAttackTarget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 731: range 000000000EDAF666-000000000EDAF6B3
void __cdecl data::ByHasAttackTarget::~ByHasAttackTarget(data::ByHasAttackTarget *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHasAttackTarget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 731: range 000000000EDAF6B4-000000000EDAF6DE
void __cdecl data::ByHasAttackTarget::~ByHasAttackTarget(data::ByHasAttackTarget *const this)
{
  data::ByHasAttackTarget::~ByHasAttackTarget(this);
  operator delete(this, 0x20uLL);
};

// Line 736: range 000000000E6A1BAE-000000000E6A1BBE
const char *__cdecl data::ByHasAttackTarget::getTypeName(const data::ByHasAttackTarget *const this)
{
  return "ByHasAttackTarget";
};

// Line 737: range 000000000E6A1BC0-000000000E6A1D5C
int32_t __cdecl data::ByHasAttackTarget::getHashNum(const data::ByHasAttackTarget *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByHasAttackTarget::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByHasAttackTarget",
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

// Line 753: range 000000000ECE6D88-000000000ECE6DC9
void __cdecl data::ByHasAttackTargetFactory::ByHasAttackTargetFactory(data::ByHasAttackTargetFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHasAttackTargetFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByHasAttackTargetFactory = v2;
};

// Line 761: range 000000000ECE70D2-000000000ECE711F
void __cdecl data::ByTargetIsGhostToEnemy::ByTargetIsGhostToEnemy(data::ByTargetIsGhostToEnemy *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetIsGhostToEnemy + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 761: range 000000000ECE75B0-000000000ECE7608
void __cdecl data::ByTargetIsGhostToEnemy::ByTargetIsGhostToEnemy(
        data::ByTargetIsGhostToEnemy *const this,
        const data::ByTargetIsGhostToEnemy *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetIsGhostToEnemy + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 767: range 000000000EDAF63A-000000000EDAF664
void __cdecl data::ByTargetIsGhostToEnemy::~ByTargetIsGhostToEnemy(data::ByTargetIsGhostToEnemy *const this)
{
  data::ByTargetIsGhostToEnemy::~ByTargetIsGhostToEnemy(this);
  operator delete(this, 0x20uLL);
};

// Line 767: range 000000000EDAF5EC-000000000EDAF639
void __cdecl data::ByTargetIsGhostToEnemy::~ByTargetIsGhostToEnemy(data::ByTargetIsGhostToEnemy *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetIsGhostToEnemy + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 772: range 000000000E6A1D5E-000000000E6A1D6E
const char *__cdecl data::ByTargetIsGhostToEnemy::getTypeName(const data::ByTargetIsGhostToEnemy *const this)
{
  return "ByTargetIsGhostToEnemy";
};

// Line 773: range 000000000E6A1D70-000000000E6A1F0C
int32_t __cdecl data::ByTargetIsGhostToEnemy::getHashNum(const data::ByTargetIsGhostToEnemy *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByTargetIsGhostToEnemy::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByTargetIsGhostToEnemy",
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

// Line 789: range 000000000ECE7852-000000000ECE7893
void __cdecl data::ByTargetIsGhostToEnemyFactory::ByTargetIsGhostToEnemyFactory(
        data::ByTargetIsGhostToEnemyFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetIsGhostToEnemyFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByTargetIsGhostToEnemyFactory = v2;
};

// Line 797: range 000000000ECE7B9C-000000000ECE7C29
void __cdecl data::ByTargetIsSelf::ByTargetIsSelf(data::ByTargetIsSelf *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate((data::ConfigAbilityPredicate *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetIsSelf + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  v3 = ((_BYTE)this + 29) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_self >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_self >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_self, v3, v4);
  this->is_self = 1;
};

// Line 797: range 000000000ECE812A-000000000ECE8202
void __cdecl data::ByTargetIsSelf::ByTargetIsSelf(data::ByTargetIsSelf *const this, const data::ByTargetIsSelf *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_self; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(
    (data::ConfigAbilityPredicate *const)this,
    (const data::ConfigAbilityPredicate *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetIsSelf + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  v3 = ((_BYTE)a2 + 29) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->is_self >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->is_self >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->is_self, v3, v4);
  is_self = a2->is_self;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_self >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 29) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_self, v3, v7);
  this->is_self = is_self;
};

// Line 804: range 000000000EDAF5C0-000000000EDAF5EA
void __cdecl data::ByTargetIsSelf::~ByTargetIsSelf(data::ByTargetIsSelf *const this)
{
  data::ByTargetIsSelf::~ByTargetIsSelf(this);
  operator delete(this, 0x20uLL);
};

// Line 804: range 000000000EDAF572-000000000EDAF5BF
void __cdecl data::ByTargetIsSelf::~ByTargetIsSelf(data::ByTargetIsSelf *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetIsSelf + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate((data::ConfigAbilityPredicate *const)this);
};

// Line 809: range 000000000E6A1F0E-000000000E6A1F1E
const char *__cdecl data::ByTargetIsSelf::getTypeName(const data::ByTargetIsSelf *const this)
{
  return "ByTargetIsSelf";
};

// Line 810: range 000000000E6A1F20-000000000E6A20BC
int32_t __cdecl data::ByTargetIsSelf::getHashNum(const data::ByTargetIsSelf *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByTargetIsSelf::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByTargetIsSelf",
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

// Line 826: range 000000000ECE844C-000000000ECE848D
void __cdecl data::ByTargetIsSelfFactory::ByTargetIsSelfFactory(data::ByTargetIsSelfFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetIsSelfFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByTargetIsSelfFactory = v2;
};

// Line 834: range 000000000ECE8796-000000000ECE8821
void __cdecl data::ByTargetElement::ByTargetElement(data::ByTargetElement *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetElement + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->element_type, v1);
  }
  this->element_type = None_0;
};

// Line 834: range 000000000ECE8D22-000000000ECE8DEF
void __cdecl data::ByTargetElement::ByTargetElement(data::ByTargetElement *const this, const data::ByTargetElement *a2)
{
  int (**v2)(...); // rdx
  data::ElementType element_type; // ecx
  char v4; // al

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetElement + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
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
};

// Line 841: range 000000000EDAF4F8-000000000EDAF545
void __cdecl data::ByTargetElement::~ByTargetElement(data::ByTargetElement *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetElement + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 841: range 000000000EDAF546-000000000EDAF570
void __cdecl data::ByTargetElement::~ByTargetElement(data::ByTargetElement *const this)
{
  data::ByTargetElement::~ByTargetElement(this);
  operator delete(this, 0x28uLL);
};

// Line 846: range 000000000E6A20BE-000000000E6A20CE
const char *__cdecl data::ByTargetElement::getTypeName(const data::ByTargetElement *const this)
{
  return "ByTargetElement";
};

// Line 847: range 000000000E6A20D0-000000000E6A226C
int32_t __cdecl data::ByTargetElement::getHashNum(const data::ByTargetElement *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByTargetElement::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByTargetElement",
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

// Line 863: range 000000000ECE9038-000000000ECE9079
void __cdecl data::ByTargetElementFactory::ByTargetElementFactory(data::ByTargetElementFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetElementFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByTargetElementFactory = v2;
};

// Line 871: range 000000000ECE9382-000000000ECE940F
void __cdecl data::ByHostOrGuest::ByHostOrGuest(data::ByHostOrGuest *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate((data::ConfigAbilityPredicate *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ByHostOrGuest + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  v3 = ((_BYTE)this + 29) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_host >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_host >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_host, v3, v4);
  this->is_host = 0;
};

// Line 871: range 000000000ECE9910-000000000ECE99E8
void __cdecl data::ByHostOrGuest::ByHostOrGuest(data::ByHostOrGuest *const this, const data::ByHostOrGuest *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_host; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(
    (data::ConfigAbilityPredicate *const)this,
    (const data::ConfigAbilityPredicate *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ByHostOrGuest + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  v3 = ((_BYTE)a2 + 29) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->is_host >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->is_host >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->is_host, v3, v4);
  is_host = a2->is_host;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_host >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 29) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_host, v3, v7);
  this->is_host = is_host;
};

// Line 878: range 000000000EDAF47E-000000000EDAF4CB
void __cdecl data::ByHostOrGuest::~ByHostOrGuest(data::ByHostOrGuest *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHostOrGuest + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate((data::ConfigAbilityPredicate *const)this);
};

// Line 878: range 000000000EDAF4CC-000000000EDAF4F6
void __cdecl data::ByHostOrGuest::~ByHostOrGuest(data::ByHostOrGuest *const this)
{
  data::ByHostOrGuest::~ByHostOrGuest(this);
  operator delete(this, 0x20uLL);
};

// Line 883: range 000000000E6A226E-000000000E6A227E
const char *__cdecl data::ByHostOrGuest::getTypeName(const data::ByHostOrGuest *const this)
{
  return "ByHostOrGuest";
};

// Line 884: range 000000000E6A2280-000000000E6A241C
int32_t __cdecl data::ByHostOrGuest::getHashNum(const data::ByHostOrGuest *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByHostOrGuest::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByHostOrGuest",
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

// Line 900: range 000000000ECE9C32-000000000ECE9C73
void __cdecl data::ByHostOrGuestFactory::ByHostOrGuestFactory(data::ByHostOrGuestFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHostOrGuestFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByHostOrGuestFactory = v2;
};

// Line 908: range 000000000ECE9F7C-000000000ECEA009
void __cdecl data::ByAvatarIsHost::ByAvatarIsHost(data::ByAvatarIsHost *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate((data::ConfigAbilityPredicate *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ByAvatarIsHost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  v3 = ((_BYTE)this + 29) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_host >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_host >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_host, v3, v4);
  this->is_host = 1;
};

// Line 908: range 000000000ECEA50A-000000000ECEA5E2
void __cdecl data::ByAvatarIsHost::ByAvatarIsHost(data::ByAvatarIsHost *const this, const data::ByAvatarIsHost *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_host; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(
    (data::ConfigAbilityPredicate *const)this,
    (const data::ConfigAbilityPredicate *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ByAvatarIsHost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  v3 = ((_BYTE)a2 + 29) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->is_host >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->is_host >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->is_host, v3, v4);
  is_host = a2->is_host;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_host >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 29) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_host, v3, v7);
  this->is_host = is_host;
};

// Line 915: range 000000000EDAF452-000000000EDAF47C
void __cdecl data::ByAvatarIsHost::~ByAvatarIsHost(data::ByAvatarIsHost *const this)
{
  data::ByAvatarIsHost::~ByAvatarIsHost(this);
  operator delete(this, 0x20uLL);
};

// Line 915: range 000000000EDAF404-000000000EDAF451
void __cdecl data::ByAvatarIsHost::~ByAvatarIsHost(data::ByAvatarIsHost *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByAvatarIsHost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate((data::ConfigAbilityPredicate *const)this);
};

// Line 920: range 000000000E6A241E-000000000E6A242E
const char *__cdecl data::ByAvatarIsHost::getTypeName(const data::ByAvatarIsHost *const this)
{
  return "ByAvatarIsHost";
};

// Line 921: range 000000000E6A2430-000000000E6A25CC
int32_t __cdecl data::ByAvatarIsHost::getHashNum(const data::ByAvatarIsHost *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByAvatarIsHost::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByAvatarIsHost",
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

// Line 937: range 000000000ECEA82C-000000000ECEA86D
void __cdecl data::ByAvatarIsHostFactory::ByAvatarIsHostFactory(data::ByAvatarIsHostFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByAvatarIsHostFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByAvatarIsHostFactory = v2;
};

// Line 945: range 000000000ECEAB76-000000000ECEABD3
void __cdecl data::ByTargetWeight::ByTargetWeight(data::ByTargetWeight *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::RelationalOperationPredicate::RelationalOperationPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetWeight + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicFloat::DynamicFloat(&this->weight);
};

// Line 945: range 000000000ECEAFEE-000000000ECEB084
void __cdecl data::ByTargetWeight::ByTargetWeight(data::ByTargetWeight *const this, const data::ByTargetWeight *a2)
{
  int (**v2)(...); // rdx

  data::RelationalOperationPredicate::RelationalOperationPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetWeight + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicFloat::DynamicFloat(&this->weight, &a2->weight);
};

// Line 952: range 000000000EDAF37A-000000000EDAF3D7
void __cdecl data::ByTargetWeight::~ByTargetWeight(data::ByTargetWeight *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetWeight + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicFloat::~DynamicFloat(&this->weight);
  data::RelationalOperationPredicate::~RelationalOperationPredicate(this);
};

// Line 952: range 000000000EDAF3D8-000000000EDAF402
void __cdecl data::ByTargetWeight::~ByTargetWeight(data::ByTargetWeight *const this)
{
  data::ByTargetWeight::~ByTargetWeight(this);
  operator delete(this, 0x48uLL);
};

// Line 957: range 000000000E6A25CE-000000000E6A25DE
const char *__cdecl data::ByTargetWeight::getTypeName(const data::ByTargetWeight *const this)
{
  return "ByTargetWeight";
};

// Line 958: range 000000000E6A25E0-000000000E6A277C
int32_t __cdecl data::ByTargetWeight::getHashNum(const data::ByTargetWeight *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByTargetWeight::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByTargetWeight",
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

// Line 974: range 000000000ECEB36E-000000000ECEB3AF
void __cdecl data::ByTargetWeightFactory::ByTargetWeightFactory(data::ByTargetWeightFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetWeightFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByTargetWeightFactory = v2;
};

// Line 982: range 000000000ECEB6B8-000000000ECEB725
void __cdecl data::ByAnimatorFloat::ByAnimatorFloat(data::ByAnimatorFloat *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::RelationalOperationPredicate::RelationalOperationPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByAnimatorFloat + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicFloat::DynamicFloat(&this->value);
  std::string::basic_string(&this->parameter);
};

// Line 982: range 000000000ECEBADA-000000000ECEBBA0
void __cdecl data::ByAnimatorFloat::ByAnimatorFloat(data::ByAnimatorFloat *const this, const data::ByAnimatorFloat *a2)
{
  int (**v2)(...); // rdx

  data::RelationalOperationPredicate::RelationalOperationPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByAnimatorFloat + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicFloat::DynamicFloat(&this->value, &a2->value);
  std::string::basic_string(&this->parameter, &a2->parameter);
};

// Line 990: range 000000000EDAF34E-000000000EDAF378
void __cdecl data::ByAnimatorFloat::~ByAnimatorFloat(data::ByAnimatorFloat *const this)
{
  data::ByAnimatorFloat::~ByAnimatorFloat(this);
  operator delete(this, 0x68uLL);
};

// Line 990: range 000000000EDAF2E0-000000000EDAF34D
void __cdecl data::ByAnimatorFloat::~ByAnimatorFloat(data::ByAnimatorFloat *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByAnimatorFloat + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::string::~string(&this->parameter);
  data::DynamicFloat::~DynamicFloat(&this->value);
  data::RelationalOperationPredicate::~RelationalOperationPredicate(this);
};

// Line 995: range 000000000E6A277E-000000000E6A278E
const char *__cdecl data::ByAnimatorFloat::getTypeName(const data::ByAnimatorFloat *const this)
{
  return "ByAnimatorFloat";
};

// Line 996: range 000000000E6A2790-000000000E6A292C
int32_t __cdecl data::ByAnimatorFloat::getHashNum(const data::ByAnimatorFloat *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByAnimatorFloat::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByAnimatorFloat",
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

// Line 1012: range 000000000ECEBE8A-000000000ECEBECB
void __cdecl data::ByAnimatorFloatFactory::ByAnimatorFloatFactory(data::ByAnimatorFloatFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByAnimatorFloatFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByAnimatorFloatFactory = v2;
};

// Line 1020: range 000000000ECEC1D4-000000000ECEC241
void __cdecl data::ByAnimatorInt::ByAnimatorInt(data::ByAnimatorInt *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::RelationalOperationPredicate::RelationalOperationPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByAnimatorInt + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicInt::DynamicInt(&this->value);
  std::string::basic_string(&this->parameter);
};

// Line 1020: range 000000000ECEC5F6-000000000ECEC6BC
void __cdecl data::ByAnimatorInt::ByAnimatorInt(data::ByAnimatorInt *const this, const data::ByAnimatorInt *a2)
{
  int (**v2)(...); // rdx

  data::RelationalOperationPredicate::RelationalOperationPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByAnimatorInt + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicInt::DynamicInt(&this->value, &a2->value);
  std::string::basic_string(&this->parameter, &a2->parameter);
};

// Line 1028: range 000000000EDAF246-000000000EDAF2B3
void __cdecl data::ByAnimatorInt::~ByAnimatorInt(data::ByAnimatorInt *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByAnimatorInt + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::string::~string(&this->parameter);
  data::DynamicInt::~DynamicInt(&this->value);
  data::RelationalOperationPredicate::~RelationalOperationPredicate(this);
};

// Line 1028: range 000000000EDAF2B4-000000000EDAF2DE
void __cdecl data::ByAnimatorInt::~ByAnimatorInt(data::ByAnimatorInt *const this)
{
  data::ByAnimatorInt::~ByAnimatorInt(this);
  operator delete(this, 0x78uLL);
};

// Line 1033: range 000000000E6A292E-000000000E6A293E
const char *__cdecl data::ByAnimatorInt::getTypeName(const data::ByAnimatorInt *const this)
{
  return "ByAnimatorInt";
};

// Line 1034: range 000000000E6A2940-000000000E6A2ADC
int32_t __cdecl data::ByAnimatorInt::getHashNum(const data::ByAnimatorInt *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByAnimatorInt::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByAnimatorInt",
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

// Line 1050: range 000000000ECEC9A6-000000000ECEC9E7
void __cdecl data::ByAnimatorIntFactory::ByAnimatorIntFactory(data::ByAnimatorIntFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByAnimatorIntFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByAnimatorIntFactory = v2;
};

// Line 1058: range 000000000ECECCF0-000000000ECECD8D
void __cdecl data::ByAnimatorBool::ByAnimatorBool(data::ByAnimatorBool *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::RelationalOperationPredicate::RelationalOperationPredicate((data::RelationalOperationPredicate *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ByAnimatorBool + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  v3 = ((_BYTE)this + 36) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->value, v3, v4);
  this->value = 0;
  std::string::basic_string(&this->parameter);
};

// Line 1058: range 000000000ECED1A8-000000000ECED2BE
void __cdecl data::ByAnimatorBool::ByAnimatorBool(data::ByAnimatorBool *const this, const data::ByAnimatorBool *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool value; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::RelationalOperationPredicate::RelationalOperationPredicate(
    (data::RelationalOperationPredicate *const)this,
    (const data::RelationalOperationPredicate *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ByAnimatorBool + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
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
  std::string::basic_string(&this->parameter, &a2->parameter);
};

// Line 1066: range 000000000EDAF1BC-000000000EDAF219
void __cdecl data::ByAnimatorBool::~ByAnimatorBool(data::ByAnimatorBool *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByAnimatorBool + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::string::~string(&this->parameter);
  data::RelationalOperationPredicate::~RelationalOperationPredicate((data::RelationalOperationPredicate *const)this);
};

// Line 1066: range 000000000EDAF21A-000000000EDAF244
void __cdecl data::ByAnimatorBool::~ByAnimatorBool(data::ByAnimatorBool *const this)
{
  data::ByAnimatorBool::~ByAnimatorBool(this);
  operator delete(this, 0x48uLL);
};

// Line 1071: range 000000000E6A2ADE-000000000E6A2AEE
const char *__cdecl data::ByAnimatorBool::getTypeName(const data::ByAnimatorBool *const this)
{
  return "ByAnimatorBool";
};

// Line 1072: range 000000000E6A2AF0-000000000E6A2C8C
int32_t __cdecl data::ByAnimatorBool::getHashNum(const data::ByAnimatorBool *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByAnimatorBool::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByAnimatorBool",
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

// Line 1088: range 000000000ECED5A8-000000000ECED5E9
void __cdecl data::ByAnimatorBoolFactory::ByAnimatorBoolFactory(data::ByAnimatorBoolFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByAnimatorBoolFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByAnimatorBoolFactory = v2;
};

// Line 1132: range 000000000ECEDBB2-000000000ECEDCB8
void __cdecl data::ByTargetGlobalValue::ByTargetGlobalValue(data::ByTargetGlobalValue *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetGlobalValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::string::basic_string(&this->key);
  data::DynamicFloat::DynamicFloat(&this->value);
  data::DynamicFloat::DynamicFloat(&this->max_value);
  if ( *(char *)(((unsigned __int64)&this->force_by_caster >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->force_by_caster, v1, &this->force_by_caster);
  this->force_by_caster = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->compare_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->compare_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->compare_type, (((_BYTE)this - 124) & 7u) + 3);
  }
  this->compare_type = Equal_2;
};

// Line 1132: range 000000000ECEE074-000000000ECEE275
void __cdecl data::ByTargetGlobalValue::ByTargetGlobalValue(
        data::ByTargetGlobalValue *const this,
        const data::ByTargetGlobalValue *a2)
{
  int (**v2)(...); // rdx
  data::DynamicFloat *p_max_value; // rsi
  bool force_by_caster; // cl
  char v5; // al
  __int64 v6; // rsi
  data::RelationType compare_type; // ecx
  char v8; // dl

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetGlobalValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::string::basic_string(&this->key, &a2->key);
  data::DynamicFloat::DynamicFloat(&this->value, &a2->value);
  p_max_value = &a2->max_value;
  data::DynamicFloat::DynamicFloat(&this->max_value, &a2->max_value);
  if ( *(char *)(((unsigned __int64)&a2->force_by_caster >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->force_by_caster, p_max_value, &a2->force_by_caster);
  force_by_caster = a2->force_by_caster;
  v5 = *(_BYTE *)(((unsigned __int64)&this->force_by_caster >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_max_value) = v5 != 0;
    __asan_report_store1(&this->force_by_caster, p_max_value, &this->force_by_caster);
  }
  this->force_by_caster = force_by_caster;
  v6 = (((_BYTE)a2 - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->compare_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->compare_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->compare_type);
  }
  compare_type = a2->compare_type;
  v8 = *(_BYTE *)(((unsigned __int64)&this->compare_type >> 3) + 0x7FFF8000);
  if ( v8 != 0 && (char)((((_BYTE)this - 124) & 7) + 3) >= v8 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store4(&this->compare_type, v6);
  }
  this->compare_type = compare_type;
};

// Line 1143: range 000000000EDAF190-000000000EDAF1BA
void __cdecl data::ByTargetGlobalValue::~ByTargetGlobalValue(data::ByTargetGlobalValue *const this)
{
  data::ByTargetGlobalValue::~ByTargetGlobalValue(this);
  operator delete(this, 0x88uLL);
};

// Line 1143: range 000000000EDAF112-000000000EDAF18F
void __cdecl data::ByTargetGlobalValue::~ByTargetGlobalValue(data::ByTargetGlobalValue *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetGlobalValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicFloat::~DynamicFloat(&this->max_value);
  data::DynamicFloat::~DynamicFloat(&this->value);
  std::string::~string(&this->key);
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 1148: range 000000000E6A2C8E-000000000E6A2C9E
const char *__cdecl data::ByTargetGlobalValue::getTypeName(const data::ByTargetGlobalValue *const this)
{
  return "ByTargetGlobalValue";
};

// Line 1149: range 000000000E6A2CA0-000000000E6A2E3C
int32_t __cdecl data::ByTargetGlobalValue::getHashNum(const data::ByTargetGlobalValue *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByTargetGlobalValue::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByTargetGlobalValue",
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

// Line 1165: range 000000000ECEE55E-000000000ECEE59F
void __cdecl data::ByTargetGlobalValueFactory::ByTargetGlobalValueFactory(data::ByTargetGlobalValueFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetGlobalValueFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByTargetGlobalValueFactory = v2;
};

// Line 1173: range 000000000ECEE8A8-000000000ECEE979
void __cdecl data::ByScenePropState::ByScenePropState(data::ByScenePropState *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByScenePropState + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entity_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->entity_type, v1);
  }
  this->entity_type = None_10;
  if ( *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->state, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->state = Normal_11;
};

// Line 1173: range 000000000ECEED4E-000000000ECEEEA0
void __cdecl data::ByScenePropState::ByScenePropState(
        data::ByScenePropState *const this,
        const data::ByScenePropState *a2)
{
  int (**v2)(...); // rdx
  data::EntityType entity_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::SceneObjState state; // ecx
  char v7; // dl
  const data::ByScenePropState *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByScenePropState + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->entity_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->entity_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->entity_type);
  }
  entity_type = a2->entity_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->entity_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->entity_type, a2);
  }
  this->entity_type = entity_type;
  v5 = (((_BYTE)v8 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->state);
  }
  state = v8->state;
  v7 = *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->state, v5);
  }
  this->state = state;
};

// Line 1181: range 000000000EDAF098-000000000EDAF0E5
void __cdecl data::ByScenePropState::~ByScenePropState(data::ByScenePropState *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByScenePropState + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 1181: range 000000000EDAF0E6-000000000EDAF110
void __cdecl data::ByScenePropState::~ByScenePropState(data::ByScenePropState *const this)
{
  data::ByScenePropState::~ByScenePropState(this);
  operator delete(this, 0x28uLL);
};

// Line 1186: range 000000000E6A2E3E-000000000E6A2E4E
const char *__cdecl data::ByScenePropState::getTypeName(const data::ByScenePropState *const this)
{
  return "ByScenePropState";
};

// Line 1187: range 000000000E6A2E50-000000000E6A2FEC
int32_t __cdecl data::ByScenePropState::getHashNum(const data::ByScenePropState *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByScenePropState::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByScenePropState",
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

// Line 1203: range 000000000ECEF0EA-000000000ECEF12B
void __cdecl data::ByScenePropStateFactory::ByScenePropStateFactory(data::ByScenePropStateFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByScenePropStateFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByScenePropStateFactory = v2;
};

// Line 1211: range 000000000ECEF434-000000000ECEF507
void __cdecl data::ByAvatarInWaterDepth::ByAvatarInWaterDepth(data::ByAvatarInWaterDepth *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByAvatarInWaterDepth + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->compare_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->compare_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->compare_type, v1);
  }
  this->compare_type = Equal_2;
  if ( *(_BYTE *)(((unsigned __int64)&this->depth >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->depth >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->depth, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->depth = 0.0;
};

// Line 1211: range 000000000ECEF8DC-000000000ECEFA31
void __cdecl data::ByAvatarInWaterDepth::ByAvatarInWaterDepth(
        data::ByAvatarInWaterDepth *const this,
        const data::ByAvatarInWaterDepth *a2)
{
  int (**v2)(...); // rdx
  data::RelationType compare_type; // ecx
  char v4; // al
  float depth; // xmm0_4
  const data::ByAvatarInWaterDepth *v6; // [rsp+0h] [rbp-10h]

  v6 = a2;
  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByAvatarInWaterDepth + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->compare_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->compare_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->compare_type);
  }
  compare_type = a2->compare_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->compare_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->compare_type, a2);
  }
  this->compare_type = compare_type;
  if ( *(_BYTE *)(((unsigned __int64)&v6->depth >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v6 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->depth >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v6->depth);
  }
  depth = v6->depth;
  if ( *(_BYTE *)(((unsigned __int64)&this->depth >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->depth >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->depth, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->depth = depth;
};

// Line 1219: range 000000000EDAF01E-000000000EDAF06B
void __cdecl data::ByAvatarInWaterDepth::~ByAvatarInWaterDepth(data::ByAvatarInWaterDepth *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByAvatarInWaterDepth + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 1219: range 000000000EDAF06C-000000000EDAF096
void __cdecl data::ByAvatarInWaterDepth::~ByAvatarInWaterDepth(data::ByAvatarInWaterDepth *const this)
{
  data::ByAvatarInWaterDepth::~ByAvatarInWaterDepth(this);
  operator delete(this, 0x28uLL);
};

// Line 1224: range 000000000E6A2FEE-000000000E6A2FFE
const char *__cdecl data::ByAvatarInWaterDepth::getTypeName(const data::ByAvatarInWaterDepth *const this)
{
  return "ByAvatarInWaterDepth";
};

// Line 1225: range 000000000E6A3000-000000000E6A319C
int32_t __cdecl data::ByAvatarInWaterDepth::getHashNum(const data::ByAvatarInWaterDepth *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByAvatarInWaterDepth::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByAvatarInWaterDepth",
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

// Line 1241: range 000000000ECEFC7A-000000000ECEFCBB
void __cdecl data::ByAvatarInWaterDepthFactory::ByAvatarInWaterDepthFactory(
        data::ByAvatarInWaterDepthFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByAvatarInWaterDepthFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByAvatarInWaterDepthFactory = v2;
};

// Line 1249: range 000000000ECEFFFC-000000000ECF0119
void __cdecl data::ByEntityTypes::ByEntityTypes(data::ByEntityTypes *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByEntityTypes + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<data::EntityType>::vector(&this->entity_types);
  if ( *(char *)(((unsigned __int64)&this->reject >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->reject, v1, &this->reject);
  this->reject = 0;
  v3 = ((_BYTE)this + 57) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->use_event_source >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->use_event_source >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->use_event_source, v3, v4);
  this->use_event_source = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_authority >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 58) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->is_authority >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(&this->is_authority);
  }
  this->is_authority = -1;
};

// Line 1249: range 000000000ECF0646-000000000ECF0859
void __cdecl data::ByEntityTypes::ByEntityTypes(data::ByEntityTypes *const this, const data::ByEntityTypes *a2)
{
  int (**v2)(...); // rdx
  data::ConfigEntityTypeArray *p_entity_types; // rsi
  bool reject; // cl
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool use_event_source; // cl
  char v9; // dl
  __int64 v10; // rdx
  int16_t is_authority; // cx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByEntityTypes + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  p_entity_types = &a2->entity_types;
  std::vector<data::EntityType>::vector(&this->entity_types, &a2->entity_types);
  if ( *(char *)(((unsigned __int64)&a2->reject >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->reject, p_entity_types, &a2->reject);
  reject = a2->reject;
  v5 = *(_BYTE *)(((unsigned __int64)&this->reject >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_entity_types) = v5 != 0;
    __asan_report_store1(&this->reject, p_entity_types, &this->reject);
  }
  this->reject = reject;
  v6 = ((_BYTE)a2 + 57) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&a2->use_event_source >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&a2->use_event_source >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_load1(&a2->use_event_source, v6, v7);
  use_event_source = a2->use_event_source;
  v9 = *(_BYTE *)(((unsigned __int64)&this->use_event_source >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((((unsigned __int8)this + 57) & 7) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->use_event_source, v6, v10);
  this->use_event_source = use_event_source;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_authority >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 58) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&a2->is_authority >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(&a2->is_authority);
  }
  is_authority = a2->is_authority;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_authority >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 58) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->is_authority >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(&this->is_authority);
  }
  this->is_authority = is_authority;
};

// Line 1259: range 000000000EDAEFF2-000000000EDAF01C
void __cdecl data::ByEntityTypes::~ByEntityTypes(data::ByEntityTypes *const this)
{
  data::ByEntityTypes::~ByEntityTypes(this);
  operator delete(this, 0x40uLL);
};

// Line 1259: range 000000000EDAEF94-000000000EDAEFF1
void __cdecl data::ByEntityTypes::~ByEntityTypes(data::ByEntityTypes *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByEntityTypes + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<data::EntityType>::~vector(&this->entity_types);
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 1264: range 000000000E6A319E-000000000E6A31AE
const char *__cdecl data::ByEntityTypes::getTypeName(const data::ByEntityTypes *const this)
{
  return "ByEntityTypes";
};

// Line 1265: range 000000000E6A31B0-000000000E6A334C
int32_t __cdecl data::ByEntityTypes::getHashNum(const data::ByEntityTypes *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByEntityTypes::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByEntityTypes",
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

// Line 1281: range 000000000ECF0B42-000000000ECF0B83
void __cdecl data::ByEntityTypesFactory::ByEntityTypesFactory(data::ByEntityTypesFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByEntityTypesFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByEntityTypesFactory = v2;
};

// Line 1289: range 000000000ECF0E8C-000000000ECF0F1D
void __cdecl data::ByHitImpulse::ByHitImpulse(data::ByHitImpulse *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByHitImpulse + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->hit_impulse >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hit_impulse >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hit_impulse, v1);
  }
  this->hit_impulse = 10000.0;
};

// Line 1289: range 000000000ECF1422-000000000ECF14F2
void __cdecl data::ByHitImpulse::ByHitImpulse(data::ByHitImpulse *const this, const data::ByHitImpulse *a2)
{
  int (**v2)(...); // rdx
  float hit_impulse; // xmm0_4

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByHitImpulse + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->hit_impulse >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->hit_impulse >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->hit_impulse);
  }
  hit_impulse = a2->hit_impulse;
  if ( *(_BYTE *)(((unsigned __int64)&this->hit_impulse >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hit_impulse >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hit_impulse, a2);
  }
  this->hit_impulse = hit_impulse;
};

// Line 1296: range 000000000EDAEF1A-000000000EDAEF67
void __cdecl data::ByHitImpulse::~ByHitImpulse(data::ByHitImpulse *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHitImpulse + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 1296: range 000000000EDAEF68-000000000EDAEF92
void __cdecl data::ByHitImpulse::~ByHitImpulse(data::ByHitImpulse *const this)
{
  data::ByHitImpulse::~ByHitImpulse(this);
  operator delete(this, 0x28uLL);
};

// Line 1301: range 000000000E6A334E-000000000E6A335E
const char *__cdecl data::ByHitImpulse::getTypeName(const data::ByHitImpulse *const this)
{
  return "ByHitImpulse";
};

// Line 1302: range 000000000E6A3360-000000000E6A34FC
int32_t __cdecl data::ByHitImpulse::getHashNum(const data::ByHitImpulse *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByHitImpulse::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByHitImpulse",
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

// Line 1318: range 000000000ECF173C-000000000ECF177D
void __cdecl data::ByHitImpulseFactory::ByHitImpulseFactory(data::ByHitImpulseFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHitImpulseFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByHitImpulseFactory = v2;
};

// Line 1326: range 000000000ECF1A86-000000000ECF1B11
void __cdecl data::ByHitElement::ByHitElement(data::ByHitElement *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByHitElement + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->element >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->element >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->element, v1);
  }
  this->element = None_0;
};

// Line 1326: range 000000000ECF2012-000000000ECF20DF
void __cdecl data::ByHitElement::ByHitElement(data::ByHitElement *const this, const data::ByHitElement *a2)
{
  int (**v2)(...); // rdx
  data::ElementType element; // ecx
  char v4; // al

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByHitElement + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->element >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->element >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->element);
  }
  element = a2->element;
  v4 = *(_BYTE *)(((unsigned __int64)&this->element >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->element, a2);
  }
  this->element = element;
};

// Line 1333: range 000000000EDAEEEE-000000000EDAEF18
void __cdecl data::ByHitElement::~ByHitElement(data::ByHitElement *const this)
{
  data::ByHitElement::~ByHitElement(this);
  operator delete(this, 0x28uLL);
};

// Line 1333: range 000000000EDAEEA0-000000000EDAEEED
void __cdecl data::ByHitElement::~ByHitElement(data::ByHitElement *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHitElement + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 1338: range 000000000E6A34FE-000000000E6A350E
const char *__cdecl data::ByHitElement::getTypeName(const data::ByHitElement *const this)
{
  return "ByHitElement";
};

// Line 1339: range 000000000E6A3510-000000000E6A36AC
int32_t __cdecl data::ByHitElement::getHashNum(const data::ByHitElement *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByHitElement::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByHitElement",
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

// Line 1355: range 000000000ECF2328-000000000ECF2369
void __cdecl data::ByHitElementFactory::ByHitElementFactory(data::ByHitElementFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHitElementFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByHitElementFactory = v2;
};

// Line 1363: range 000000000ECF2672-000000000ECF26FD
void __cdecl data::ByHitStrikeType::ByHitStrikeType(data::ByHitStrikeType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByHitStrikeType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->strike_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->strike_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->strike_type, v1);
  }
  this->strike_type = Default_0;
};

// Line 1363: range 000000000ECF2BFE-000000000ECF2CCB
void __cdecl data::ByHitStrikeType::ByHitStrikeType(data::ByHitStrikeType *const this, const data::ByHitStrikeType *a2)
{
  int (**v2)(...); // rdx
  data::StrikeType strike_type; // ecx
  char v4; // al

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByHitStrikeType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->strike_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->strike_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->strike_type);
  }
  strike_type = a2->strike_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->strike_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->strike_type, a2);
  }
  this->strike_type = strike_type;
};

// Line 1370: range 000000000EDAEE74-000000000EDAEE9E
void __cdecl data::ByHitStrikeType::~ByHitStrikeType(data::ByHitStrikeType *const this)
{
  data::ByHitStrikeType::~ByHitStrikeType(this);
  operator delete(this, 0x28uLL);
};

// Line 1370: range 000000000EDAEE26-000000000EDAEE73
void __cdecl data::ByHitStrikeType::~ByHitStrikeType(data::ByHitStrikeType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHitStrikeType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 1375: range 000000000E6A36AE-000000000E6A36BE
const char *__cdecl data::ByHitStrikeType::getTypeName(const data::ByHitStrikeType *const this)
{
  return "ByHitStrikeType";
};

// Line 1376: range 000000000E6A36C0-000000000E6A385C
int32_t __cdecl data::ByHitStrikeType::getHashNum(const data::ByHitStrikeType *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByHitStrikeType::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByHitStrikeType",
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

// Line 1392: range 000000000ECF2F14-000000000ECF2F55
void __cdecl data::ByHitStrikeTypeFactory::ByHitStrikeTypeFactory(data::ByHitStrikeTypeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHitStrikeTypeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByHitStrikeTypeFactory = v2;
};

// Line 1400: range 000000000ECF325E-000000000ECF32AB
void __cdecl data::ByIsMoveOnWater::ByIsMoveOnWater(data::ByIsMoveOnWater *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByIsMoveOnWater + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 1400: range 000000000ECF373C-000000000ECF3794
void __cdecl data::ByIsMoveOnWater::ByIsMoveOnWater(data::ByIsMoveOnWater *const this, const data::ByIsMoveOnWater *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByIsMoveOnWater + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 1406: range 000000000EDAEDFA-000000000EDAEE24
void __cdecl data::ByIsMoveOnWater::~ByIsMoveOnWater(data::ByIsMoveOnWater *const this)
{
  data::ByIsMoveOnWater::~ByIsMoveOnWater(this);
  operator delete(this, 0x20uLL);
};

// Line 1406: range 000000000EDAEDAC-000000000EDAEDF9
void __cdecl data::ByIsMoveOnWater::~ByIsMoveOnWater(data::ByIsMoveOnWater *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByIsMoveOnWater + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 1411: range 000000000E6A385E-000000000E6A386E
const char *__cdecl data::ByIsMoveOnWater::getTypeName(const data::ByIsMoveOnWater *const this)
{
  return "ByIsMoveOnWater";
};

// Line 1412: range 000000000E6A3870-000000000E6A3A0C
int32_t __cdecl data::ByIsMoveOnWater::getHashNum(const data::ByIsMoveOnWater *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByIsMoveOnWater::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByIsMoveOnWater",
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

// Line 1428: range 000000000ECF39DE-000000000ECF3A1F
void __cdecl data::ByIsMoveOnWaterFactory::ByIsMoveOnWaterFactory(data::ByIsMoveOnWaterFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByIsMoveOnWaterFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByIsMoveOnWaterFactory = v2;
};

// Line 1436: range 000000000ECF3D28-000000000ECF3D85
void __cdecl data::ByAttackTags::ByAttackTags(data::ByAttackTags *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByAttackTags + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<std::string>::vector(&this->attack_tags);
};

// Line 1436: range 000000000ECF417A-000000000ECF4210
void __cdecl data::ByAttackTags::ByAttackTags(data::ByAttackTags *const this, const data::ByAttackTags *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByAttackTags + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<std::string>::vector(&this->attack_tags, &a2->attack_tags);
};

// Line 1443: range 000000000EDAED22-000000000EDAED7F
void __cdecl data::ByAttackTags::~ByAttackTags(data::ByAttackTags *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByAttackTags + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<std::string>::~vector(&this->attack_tags);
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 1443: range 000000000EDAED80-000000000EDAEDAA
void __cdecl data::ByAttackTags::~ByAttackTags(data::ByAttackTags *const this)
{
  data::ByAttackTags::~ByAttackTags(this);
  operator delete(this, 0x38uLL);
};

// Line 1448: range 000000000E6A3A0E-000000000E6A3A1E
const char *__cdecl data::ByAttackTags::getTypeName(const data::ByAttackTags *const this)
{
  return "ByAttackTags";
};

// Line 1449: range 000000000E6A3A20-000000000E6A3BBC
int32_t __cdecl data::ByAttackTags::getHashNum(const data::ByAttackTags *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByAttackTags::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByAttackTags",
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

// Line 1465: range 000000000ECF44FA-000000000ECF453B
void __cdecl data::ByAttackTagsFactory::ByAttackTagsFactory(data::ByAttackTagsFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByAttackTagsFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByAttackTagsFactory = v2;
};

// Line 1513: range 000000000ECF49DC-000000000ECF4A84
void __cdecl data::BySceneSurfaceType::BySceneSurfaceType(data::BySceneSurfaceType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::BySceneSurfaceType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<data::SceneSurfaceType>::vector(&this->filters);
  if ( *(char *)(((unsigned __int64)&this->include >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->include, v1, &this->include);
  this->include = 1;
  data::Vector::Vector(&this->offset);
};

// Line 1513: range 000000000ECF4FD2-000000000ECF51D4
void __cdecl data::BySceneSurfaceType::BySceneSurfaceType(
        data::BySceneSurfaceType *const this,
        const data::BySceneSurfaceType *a2)
{
  int (**v2)(...); // rdx
  data::SceneSurfaceTypeArray *p_filters; // rsi
  bool include; // cl
  char v5; // al
  __int64 v6; // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::BySceneSurfaceType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  p_filters = &a2->filters;
  std::vector<data::SceneSurfaceType>::vector(&this->filters, &a2->filters);
  if ( *(char *)(((unsigned __int64)&a2->include >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->include, p_filters, &a2->include);
  include = a2->include;
  v5 = *(_BYTE *)(((unsigned __int64)&this->include >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_filters) = v5 != 0;
    __asan_report_store1(&this->include, p_filters, &this->include);
  }
  this->include = include;
  if ( (((unsigned __int8)this + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&this->offset >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->offset >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->offset.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 75) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->offset.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->offset, 16LL);
  }
  if ( (((unsigned __int8)a2 + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->offset >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->offset >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->offset.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 75) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->offset.is_json_loaded + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->offset, 16LL);
  }
  v6 = *(_QWORD *)&a2->offset.z;
  *(_QWORD *)&this->offset.x = *(_QWORD *)&a2->offset.x;
  *(_QWORD *)&this->offset.z = v6;
};

// Line 1522: range 000000000EDAECF6-000000000EDAED20
void __cdecl data::BySceneSurfaceType::~BySceneSurfaceType(data::BySceneSurfaceType *const this)
{
  data::BySceneSurfaceType::~BySceneSurfaceType(this);
  operator delete(this, 0x50uLL);
};

// Line 1522: range 000000000EDAEC98-000000000EDAECF5
void __cdecl data::BySceneSurfaceType::~BySceneSurfaceType(data::BySceneSurfaceType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BySceneSurfaceType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<data::SceneSurfaceType>::~vector(&this->filters);
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 1527: range 000000000E6A3BBE-000000000E6A3BCE
const char *__cdecl data::BySceneSurfaceType::getTypeName(const data::BySceneSurfaceType *const this)
{
  return "BySceneSurfaceType";
};

// Line 1528: range 000000000E6A3BD0-000000000E6A3D6C
int32_t __cdecl data::BySceneSurfaceType::getHashNum(const data::BySceneSurfaceType *const this)
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
  *(_QWORD *)(v1 + 16) = data::BySceneSurfaceType::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "BySceneSurfaceType",
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

// Line 1544: range 000000000ECF54BE-000000000ECF54FF
void __cdecl data::BySceneSurfaceTypeFactory::BySceneSurfaceTypeFactory(data::BySceneSurfaceTypeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BySceneSurfaceTypeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BySceneSurfaceTypeFactory = v2;
};

// Line 1552: range 000000000ECF5808-000000000ECF5865
void __cdecl data::ByUnlockTalentParam::ByUnlockTalentParam(data::ByUnlockTalentParam *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByUnlockTalentParam + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::string::basic_string(&this->talent_param);
};

// Line 1552: range 000000000ECF5C6A-000000000ECF5D00
void __cdecl data::ByUnlockTalentParam::ByUnlockTalentParam(
        data::ByUnlockTalentParam *const this,
        const data::ByUnlockTalentParam *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByUnlockTalentParam + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::string::basic_string(&this->talent_param, &a2->talent_param);
};

// Line 1559: range 000000000EDAEC0E-000000000EDAEC6B
void __cdecl data::ByUnlockTalentParam::~ByUnlockTalentParam(data::ByUnlockTalentParam *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByUnlockTalentParam + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::string::~string(&this->talent_param);
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 1559: range 000000000EDAEC6C-000000000EDAEC96
void __cdecl data::ByUnlockTalentParam::~ByUnlockTalentParam(data::ByUnlockTalentParam *const this)
{
  data::ByUnlockTalentParam::~ByUnlockTalentParam(this);
  operator delete(this, 0x40uLL);
};

// Line 1564: range 000000000E6A3D6E-000000000E6A3D7E
const char *__cdecl data::ByUnlockTalentParam::getTypeName(const data::ByUnlockTalentParam *const this)
{
  return "ByUnlockTalentParam";
};

// Line 1565: range 000000000E6A3D80-000000000E6A3F1C
int32_t __cdecl data::ByUnlockTalentParam::getHashNum(const data::ByUnlockTalentParam *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByUnlockTalentParam::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByUnlockTalentParam",
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

// Line 1581: range 000000000ECF5FEA-000000000ECF602B
void __cdecl data::ByUnlockTalentParamFactory::ByUnlockTalentParamFactory(data::ByUnlockTalentParamFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByUnlockTalentParamFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByUnlockTalentParamFactory = v2;
};

// Line 1589: range 000000000ECF6334-000000000ECF63CF
void __cdecl data::BySkillReady::BySkillReady(data::BySkillReady *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::BySkillReady + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->skill_id, v1);
  }
  this->skill_id = 0;
  std::vector<unsigned int>::vector(&this->skill_slot);
};

// Line 1589: range 000000000ECF67D4-000000000ECF68DF
void __cdecl data::BySkillReady::BySkillReady(data::BySkillReady *const this, const data::BySkillReady *a2)
{
  int (**v2)(...); // rdx
  uint32_t skill_id; // ecx
  char v4; // al
  const data::BySkillReady *v5; // [rsp+0h] [rbp-20h]

  v5 = a2;
  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::BySkillReady + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->skill_id);
  }
  skill_id = a2->skill_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->skill_id, a2);
  }
  this->skill_id = skill_id;
  std::vector<unsigned int>::vector(&this->skill_slot, &v5->skill_slot);
};

// Line 1597: range 000000000EDAEBE2-000000000EDAEC0C
void __cdecl data::BySkillReady::~BySkillReady(data::BySkillReady *const this)
{
  data::BySkillReady::~BySkillReady(this);
  operator delete(this, 0x40uLL);
};

// Line 1597: range 000000000EDAEB84-000000000EDAEBE1
void __cdecl data::BySkillReady::~BySkillReady(data::BySkillReady *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BySkillReady + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<unsigned int>::~vector(&this->skill_slot);
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 1602: range 000000000E6A3F1E-000000000E6A3F2E
const char *__cdecl data::BySkillReady::getTypeName(const data::BySkillReady *const this)
{
  return "BySkillReady";
};

// Line 1603: range 000000000E6A3F30-000000000E6A40CC
int32_t __cdecl data::BySkillReady::getHashNum(const data::BySkillReady *const this)
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
  *(_QWORD *)(v1 + 16) = data::BySkillReady::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "BySkillReady",
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

// Line 1619: range 000000000ECF6BC8-000000000ECF6C09
void __cdecl data::BySkillReadyFactory::BySkillReadyFactory(data::BySkillReadyFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BySkillReadyFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BySkillReadyFactory = v2;
};

// Line 1642: range 000000000ECF7072-000000000ECF7115
void __cdecl data::ByTargetPositionToSelfPosition::ByTargetPositionToSelfPosition(
        data::ByTargetPositionToSelfPosition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::RelationalOperationPredicate::RelationalOperationPredicate((data::RelationalOperationPredicate *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetPositionToSelfPosition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->compare_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->compare_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->compare_type, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->compare_type = XZ;
  data::DynamicFloat::DynamicFloat(&this->value);
};

// Line 1642: range 000000000ECF7530-000000000ECF764B
void __cdecl data::ByTargetPositionToSelfPosition::ByTargetPositionToSelfPosition(
        data::ByTargetPositionToSelfPosition *const this,
        const data::ByTargetPositionToSelfPosition *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::TargetPosToSelfPosType compare_type; // ecx
  char v5; // dl

  data::RelationalOperationPredicate::RelationalOperationPredicate(
    (data::RelationalOperationPredicate *const)this,
    (const data::RelationalOperationPredicate *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetPositionToSelfPosition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->compare_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->compare_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->compare_type);
  }
  compare_type = a2->compare_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->compare_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->compare_type, v3);
  }
  this->compare_type = compare_type;
  data::DynamicFloat::DynamicFloat(&this->value, &a2->value);
};

// Line 1650: range 000000000EDAEAFA-000000000EDAEB57
void __cdecl data::ByTargetPositionToSelfPosition::~ByTargetPositionToSelfPosition(
        data::ByTargetPositionToSelfPosition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetPositionToSelfPosition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicFloat::~DynamicFloat(&this->value);
  data::RelationalOperationPredicate::~RelationalOperationPredicate((data::RelationalOperationPredicate *const)this);
};

// Line 1650: range 000000000EDAEB58-000000000EDAEB82
void __cdecl data::ByTargetPositionToSelfPosition::~ByTargetPositionToSelfPosition(
        data::ByTargetPositionToSelfPosition *const this)
{
  data::ByTargetPositionToSelfPosition::~ByTargetPositionToSelfPosition(this);
  operator delete(this, 0x48uLL);
};

// Line 1655: range 000000000E6A40CE-000000000E6A40DE
const char *__cdecl data::ByTargetPositionToSelfPosition::getTypeName(
        const data::ByTargetPositionToSelfPosition *const this)
{
  return "ByTargetPositionToSelfPosition";
};

// Line 1656: range 000000000E6A40E0-000000000E6A427C
int32_t __cdecl data::ByTargetPositionToSelfPosition::getHashNum(
        const data::ByTargetPositionToSelfPosition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByTargetPositionToSelfPosition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByTargetPositionToSelfPosition",
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

// Line 1672: range 000000000ECF7934-000000000ECF7975
void __cdecl data::ByTargetPositionToSelfPositionFactory::ByTargetPositionToSelfPositionFactory(
        data::ByTargetPositionToSelfPositionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetPositionToSelfPositionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByTargetPositionToSelfPositionFactory = v2;
};

// Line 1680: range 000000000ECF7C7E-000000000ECF7D16
void __cdecl data::ByTargetForwardAndSelfPosition::ByTargetForwardAndSelfPosition(
        data::ByTargetForwardAndSelfPosition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::RelationalOperationPredicate::RelationalOperationPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetForwardAndSelfPosition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicFloat::DynamicFloat(&this->value);
  if ( *(char *)(((unsigned __int64)&this->is_xz >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_xz, v1, &this->is_xz);
  this->is_xz = 1;
};

// Line 1680: range 000000000ECF813C-000000000ECF8248
void __cdecl data::ByTargetForwardAndSelfPosition::ByTargetForwardAndSelfPosition(
        data::ByTargetForwardAndSelfPosition *const this,
        const data::ByTargetForwardAndSelfPosition *a2)
{
  int (**v2)(...); // rdx
  data::DynamicFloat *p_value; // rsi
  bool is_xz; // cl
  char v5; // al

  data::RelationalOperationPredicate::RelationalOperationPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetForwardAndSelfPosition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  p_value = &a2->value;
  data::DynamicFloat::DynamicFloat(&this->value, &a2->value);
  if ( *(char *)(((unsigned __int64)&a2->is_xz >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_xz, p_value, &a2->is_xz);
  is_xz = a2->is_xz;
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_xz >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_value) = v5 != 0;
    __asan_report_store1(&this->is_xz, p_value, &this->is_xz);
  }
  this->is_xz = is_xz;
};

// Line 1688: range 000000000EDAEA70-000000000EDAEACD
void __cdecl data::ByTargetForwardAndSelfPosition::~ByTargetForwardAndSelfPosition(
        data::ByTargetForwardAndSelfPosition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetForwardAndSelfPosition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicFloat::~DynamicFloat(&this->value);
  data::RelationalOperationPredicate::~RelationalOperationPredicate(this);
};

// Line 1688: range 000000000EDAEACE-000000000EDAEAF8
void __cdecl data::ByTargetForwardAndSelfPosition::~ByTargetForwardAndSelfPosition(
        data::ByTargetForwardAndSelfPosition *const this)
{
  data::ByTargetForwardAndSelfPosition::~ByTargetForwardAndSelfPosition(this);
  operator delete(this, 0x50uLL);
};

// Line 1693: range 000000000E6A427E-000000000E6A428E
const char *__cdecl data::ByTargetForwardAndSelfPosition::getTypeName(
        const data::ByTargetForwardAndSelfPosition *const this)
{
  return "ByTargetForwardAndSelfPosition";
};

// Line 1694: range 000000000E6A4290-000000000E6A442C
int32_t __cdecl data::ByTargetForwardAndSelfPosition::getHashNum(
        const data::ByTargetForwardAndSelfPosition *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByTargetForwardAndSelfPosition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByTargetForwardAndSelfPosition",
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

// Line 1710: range 000000000ECF8532-000000000ECF8573
void __cdecl data::ByTargetForwardAndSelfPositionFactory::ByTargetForwardAndSelfPositionFactory(
        data::ByTargetForwardAndSelfPositionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetForwardAndSelfPositionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByTargetForwardAndSelfPositionFactory = v2;
};

// Line 1718: range 000000000ECF887C-000000000ECF8914
void __cdecl data::BySelfForwardAndTargetPosition::BySelfForwardAndTargetPosition(
        data::BySelfForwardAndTargetPosition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::RelationalOperationPredicate::RelationalOperationPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::BySelfForwardAndTargetPosition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicFloat::DynamicFloat(&this->value);
  if ( *(char *)(((unsigned __int64)&this->is_xz >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_xz, v1, &this->is_xz);
  this->is_xz = 1;
};

// Line 1718: range 000000000ECF8D3A-000000000ECF8E46
void __cdecl data::BySelfForwardAndTargetPosition::BySelfForwardAndTargetPosition(
        data::BySelfForwardAndTargetPosition *const this,
        const data::BySelfForwardAndTargetPosition *a2)
{
  int (**v2)(...); // rdx
  data::DynamicFloat *p_value; // rsi
  bool is_xz; // cl
  char v5; // al

  data::RelationalOperationPredicate::RelationalOperationPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::BySelfForwardAndTargetPosition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  p_value = &a2->value;
  data::DynamicFloat::DynamicFloat(&this->value, &a2->value);
  if ( *(char *)(((unsigned __int64)&a2->is_xz >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_xz, p_value, &a2->is_xz);
  is_xz = a2->is_xz;
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_xz >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_value) = v5 != 0;
    __asan_report_store1(&this->is_xz, p_value, &this->is_xz);
  }
  this->is_xz = is_xz;
};

// Line 1726: range 000000000EDAE9E6-000000000EDAEA43
void __cdecl data::BySelfForwardAndTargetPosition::~BySelfForwardAndTargetPosition(
        data::BySelfForwardAndTargetPosition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BySelfForwardAndTargetPosition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicFloat::~DynamicFloat(&this->value);
  data::RelationalOperationPredicate::~RelationalOperationPredicate(this);
};

// Line 1726: range 000000000EDAEA44-000000000EDAEA6E
void __cdecl data::BySelfForwardAndTargetPosition::~BySelfForwardAndTargetPosition(
        data::BySelfForwardAndTargetPosition *const this)
{
  data::BySelfForwardAndTargetPosition::~BySelfForwardAndTargetPosition(this);
  operator delete(this, 0x50uLL);
};

// Line 1731: range 000000000E6A442E-000000000E6A443E
const char *__cdecl data::BySelfForwardAndTargetPosition::getTypeName(
        const data::BySelfForwardAndTargetPosition *const this)
{
  return "BySelfForwardAndTargetPosition";
};

// Line 1732: range 000000000E6A4440-000000000E6A45DC
int32_t __cdecl data::BySelfForwardAndTargetPosition::getHashNum(
        const data::BySelfForwardAndTargetPosition *const this)
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
  *(_QWORD *)(v1 + 16) = data::BySelfForwardAndTargetPosition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "BySelfForwardAndTargetPosition",
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

// Line 1748: range 000000000ECF9130-000000000ECF9171
void __cdecl data::BySelfForwardAndTargetPositionFactory::BySelfForwardAndTargetPositionFactory(
        data::BySelfForwardAndTargetPositionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BySelfForwardAndTargetPositionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BySelfForwardAndTargetPositionFactory = v2;
};

// Line 1756: range 000000000ECF947A-000000000ECF94D7
void __cdecl data::ByEnergyRatio::ByEnergyRatio(data::ByEnergyRatio *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::RelationalOperationPredicate::RelationalOperationPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByEnergyRatio + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicFloat::DynamicFloat(&this->ratio);
};

// Line 1756: range 000000000ECF98F2-000000000ECF9988
void __cdecl data::ByEnergyRatio::ByEnergyRatio(data::ByEnergyRatio *const this, const data::ByEnergyRatio *a2)
{
  int (**v2)(...); // rdx

  data::RelationalOperationPredicate::RelationalOperationPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByEnergyRatio + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicFloat::DynamicFloat(&this->ratio, &a2->ratio);
};

// Line 1763: range 000000000EDAE95C-000000000EDAE9B9
void __cdecl data::ByEnergyRatio::~ByEnergyRatio(data::ByEnergyRatio *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByEnergyRatio + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicFloat::~DynamicFloat(&this->ratio);
  data::RelationalOperationPredicate::~RelationalOperationPredicate(this);
};

// Line 1763: range 000000000EDAE9BA-000000000EDAE9E4
void __cdecl data::ByEnergyRatio::~ByEnergyRatio(data::ByEnergyRatio *const this)
{
  data::ByEnergyRatio::~ByEnergyRatio(this);
  operator delete(this, 0x48uLL);
};

// Line 1768: range 000000000E6A45DE-000000000E6A45EE
const char *__cdecl data::ByEnergyRatio::getTypeName(const data::ByEnergyRatio *const this)
{
  return "ByEnergyRatio";
};

// Line 1769: range 000000000E6A45F0-000000000E6A478C
int32_t __cdecl data::ByEnergyRatio::getHashNum(const data::ByEnergyRatio *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByEnergyRatio::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByEnergyRatio",
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

// Line 1785: range 000000000ECF9C72-000000000ECF9CB3
void __cdecl data::ByEnergyRatioFactory::ByEnergyRatioFactory(data::ByEnergyRatioFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByEnergyRatioFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByEnergyRatioFactory = v2;
};

// Line 1793: range 000000000ECF9FBC-000000000ECFA019
void __cdecl data::ByEnergy::ByEnergy(data::ByEnergy *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::RelationalOperationPredicate::RelationalOperationPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByEnergy + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicFloat::DynamicFloat(&this->value);
};

// Line 1793: range 000000000ECFA434-000000000ECFA4CA
void __cdecl data::ByEnergy::ByEnergy(data::ByEnergy *const this, const data::ByEnergy *a2)
{
  int (**v2)(...); // rdx

  data::RelationalOperationPredicate::RelationalOperationPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByEnergy + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicFloat::DynamicFloat(&this->value, &a2->value);
};

// Line 1800: range 000000000EDAE930-000000000EDAE95A
void __cdecl data::ByEnergy::~ByEnergy(data::ByEnergy *const this)
{
  data::ByEnergy::~ByEnergy(this);
  operator delete(this, 0x48uLL);
};

// Line 1800: range 000000000EDAE8D2-000000000EDAE92F
void __cdecl data::ByEnergy::~ByEnergy(data::ByEnergy *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByEnergy + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicFloat::~DynamicFloat(&this->value);
  data::RelationalOperationPredicate::~RelationalOperationPredicate(this);
};

// Line 1805: range 000000000E6A478E-000000000E6A479E
const char *__cdecl data::ByEnergy::getTypeName(const data::ByEnergy *const this)
{
  return "ByEnergy";
};

// Line 1806: range 000000000E6A47A0-000000000E6A493C
int32_t __cdecl data::ByEnergy::getHashNum(const data::ByEnergy *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByEnergy::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByEnergy",
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

// Line 1822: range 000000000ECFA7B4-000000000ECFA7F5
void __cdecl data::ByEnergyFactory::ByEnergyFactory(data::ByEnergyFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByEnergyFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByEnergyFactory = v2;
};

// Line 1830: range 000000000ECFAAFE-000000000ECFABA1
void __cdecl data::BySummonTagValue::BySummonTagValue(data::BySummonTagValue *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::RelationalOperationPredicate::RelationalOperationPredicate((data::RelationalOperationPredicate *const)this);
  v2 = (int (**)(...))(&`vtable for'data::BySummonTagValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->summon_tag >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->summon_tag >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->summon_tag, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->summon_tag = 0;
  data::DynamicInt::DynamicInt(&this->value);
};

// Line 1830: range 000000000ECFAF5C-000000000ECFB077
void __cdecl data::BySummonTagValue::BySummonTagValue(
        data::BySummonTagValue *const this,
        const data::BySummonTagValue *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t summon_tag; // ecx
  char v5; // dl

  data::RelationalOperationPredicate::RelationalOperationPredicate(
    (data::RelationalOperationPredicate *const)this,
    (const data::RelationalOperationPredicate *)a2);
  v2 = (int (**)(...))(&`vtable for'data::BySummonTagValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->summon_tag >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->summon_tag >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->summon_tag);
  }
  summon_tag = a2->summon_tag;
  v5 = *(_BYTE *)(((unsigned __int64)&this->summon_tag >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->summon_tag, v3);
  }
  this->summon_tag = summon_tag;
  data::DynamicInt::DynamicInt(&this->value, &a2->value);
};

// Line 1838: range 000000000EDAE848-000000000EDAE8A5
void __cdecl data::BySummonTagValue::~BySummonTagValue(data::BySummonTagValue *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BySummonTagValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicInt::~DynamicInt(&this->value);
  data::RelationalOperationPredicate::~RelationalOperationPredicate((data::RelationalOperationPredicate *const)this);
};

// Line 1838: range 000000000EDAE8A6-000000000EDAE8D0
void __cdecl data::BySummonTagValue::~BySummonTagValue(data::BySummonTagValue *const this)
{
  data::BySummonTagValue::~BySummonTagValue(this);
  operator delete(this, 0x58uLL);
};

// Line 1843: range 000000000E6A493E-000000000E6A494E
const char *__cdecl data::BySummonTagValue::getTypeName(const data::BySummonTagValue *const this)
{
  return "BySummonTagValue";
};

// Line 1844: range 000000000E6A4950-000000000E6A4AEC
int32_t __cdecl data::BySummonTagValue::getHashNum(const data::BySummonTagValue *const this)
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
  *(_QWORD *)(v1 + 16) = data::BySummonTagValue::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "BySummonTagValue",
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

// Line 1860: range 000000000ECFB360-000000000ECFB3A1
void __cdecl data::BySummonTagValueFactory::BySummonTagValueFactory(data::BySummonTagValueFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BySummonTagValueFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BySummonTagValueFactory = v2;
};

// Line 1868: range 000000000ECFB6AA-000000000ECFB78B
void __cdecl data::ByAttackNotHitScene::ByAttackNotHitScene(data::ByAttackNotHitScene *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::RelationalOperationPredicate::RelationalOperationPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByAttackNotHitScene + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_WORD *)(((unsigned __int64)&this->attack_pattern >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBaseAttackPattern>();
  if ( *(char *)(((unsigned __int64)&this->check_water_layer >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->check_water_layer, v1, &this->check_water_layer);
  this->check_water_layer = 0;
};

// Line 1868: range 000000000ECFBC26-000000000ECFBD0F
void __cdecl data::ByAttackNotHitScene::ByAttackNotHitScene(
        data::ByAttackNotHitScene *const this,
        const data::ByAttackNotHitScene *a2)
{
  int (**v2)(...); // rdx
  data::ConfigBaseAttackPatternPtr *p_attack_pattern; // rsi
  bool check_water_layer; // cl
  char v5; // al

  data::RelationalOperationPredicate::RelationalOperationPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByAttackNotHitScene + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  p_attack_pattern = &a2->attack_pattern;
  std::shared_ptr<data::ConfigBaseAttackPattern>::shared_ptr(&this->attack_pattern, &a2->attack_pattern);
  if ( *(char *)(((unsigned __int64)&a2->check_water_layer >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->check_water_layer, p_attack_pattern, &a2->check_water_layer);
  check_water_layer = a2->check_water_layer;
  v5 = *(_BYTE *)(((unsigned __int64)&this->check_water_layer >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_attack_pattern) = v5 != 0;
    __asan_report_store1(&this->check_water_layer, p_attack_pattern, &this->check_water_layer);
  }
  this->check_water_layer = check_water_layer;
};

// Line 1876: range 000000000EDAE81C-000000000EDAE846
void __cdecl data::ByAttackNotHitScene::~ByAttackNotHitScene(data::ByAttackNotHitScene *const this)
{
  data::ByAttackNotHitScene::~ByAttackNotHitScene(this);
  operator delete(this, 0x40uLL);
};

// Line 1876: range 000000000EDAE7BE-000000000EDAE81B
void __cdecl data::ByAttackNotHitScene::~ByAttackNotHitScene(data::ByAttackNotHitScene *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByAttackNotHitScene + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::shared_ptr<data::ConfigBaseAttackPattern>::~shared_ptr(&this->attack_pattern);
  data::RelationalOperationPredicate::~RelationalOperationPredicate(this);
};

// Line 1881: range 000000000E6A4AEE-000000000E6A4AFE
const char *__cdecl data::ByAttackNotHitScene::getTypeName(const data::ByAttackNotHitScene *const this)
{
  return "ByAttackNotHitScene";
};

// Line 1882: range 000000000E6A4B00-000000000E6A4C9C
int32_t __cdecl data::ByAttackNotHitScene::getHashNum(const data::ByAttackNotHitScene *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByAttackNotHitScene::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByAttackNotHitScene",
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

// Line 1898: range 000000000ECFBF58-000000000ECFBF99
void __cdecl data::ByAttackNotHitSceneFactory::ByAttackNotHitSceneFactory(data::ByAttackNotHitSceneFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByAttackNotHitSceneFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByAttackNotHitSceneFactory = v2;
};

// Line 1906: range 000000000ECFC2A2-000000000ECFC2EF
void __cdecl data::ByIsCombat::ByIsCombat(data::ByIsCombat *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByIsCombat + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 1906: range 000000000ECFC780-000000000ECFC7D8
void __cdecl data::ByIsCombat::ByIsCombat(data::ByIsCombat *const this, const data::ByIsCombat *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByIsCombat + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 1912: range 000000000EDAE792-000000000EDAE7BC
void __cdecl data::ByIsCombat::~ByIsCombat(data::ByIsCombat *const this)
{
  data::ByIsCombat::~ByIsCombat(this);
  operator delete(this, 0x20uLL);
};

// Line 1912: range 000000000EDAE744-000000000EDAE791
void __cdecl data::ByIsCombat::~ByIsCombat(data::ByIsCombat *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByIsCombat + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 1917: range 000000000E6A4C9E-000000000E6A4CAE
const char *__cdecl data::ByIsCombat::getTypeName(const data::ByIsCombat *const this)
{
  return "ByIsCombat";
};

// Line 1918: range 000000000E6A4CB0-000000000E6A4E4C
int32_t __cdecl data::ByIsCombat::getHashNum(const data::ByIsCombat *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByIsCombat::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByIsCombat",
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

// Line 1934: range 000000000ECFCA22-000000000ECFCA63
void __cdecl data::ByIsCombatFactory::ByIsCombatFactory(data::ByIsCombatFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByIsCombatFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByIsCombatFactory = v2;
};

// Line 1942: range 000000000ECFCD6C-000000000ECFCDB9
void __cdecl data::ByVehicleIsCombat::ByVehicleIsCombat(data::ByVehicleIsCombat *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByVehicleIsCombat + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 1942: range 000000000ECFD24A-000000000ECFD2A2
void __cdecl data::ByVehicleIsCombat::ByVehicleIsCombat(
        data::ByVehicleIsCombat *const this,
        const data::ByVehicleIsCombat *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByVehicleIsCombat + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 1948: range 000000000EDAE6CA-000000000EDAE717
void __cdecl data::ByVehicleIsCombat::~ByVehicleIsCombat(data::ByVehicleIsCombat *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByVehicleIsCombat + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 1948: range 000000000EDAE718-000000000EDAE742
void __cdecl data::ByVehicleIsCombat::~ByVehicleIsCombat(data::ByVehicleIsCombat *const this)
{
  data::ByVehicleIsCombat::~ByVehicleIsCombat(this);
  operator delete(this, 0x20uLL);
};

// Line 1953: range 000000000E6A4E4E-000000000E6A4E5E
const char *__cdecl data::ByVehicleIsCombat::getTypeName(const data::ByVehicleIsCombat *const this)
{
  return "ByVehicleIsCombat";
};

// Line 1954: range 000000000E6A4E60-000000000E6A4FFC
int32_t __cdecl data::ByVehicleIsCombat::getHashNum(const data::ByVehicleIsCombat *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByVehicleIsCombat::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByVehicleIsCombat",
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

// Line 1970: range 000000000ECFD4EC-000000000ECFD52D
void __cdecl data::ByVehicleIsCombatFactory::ByVehicleIsCombatFactory(data::ByVehicleIsCombatFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByVehicleIsCombatFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByVehicleIsCombatFactory = v2;
};

// Line 1993: range 000000000ECFD996-000000000ECFDA31
void __cdecl data::ByTargetAltitude::ByTargetAltitude(data::ByTargetAltitude *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::RelationalOperationPredicate::RelationalOperationPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetAltitude + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicFloat::DynamicFloat(&this->value);
  if ( *(_BYTE *)(((unsigned __int64)&this->target_altitude_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_altitude_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_altitude_type, v1);
  }
  this->target_altitude_type = Both;
};

// Line 1993: range 000000000ECFDE56-000000000ECFDF61
void __cdecl data::ByTargetAltitude::ByTargetAltitude(
        data::ByTargetAltitude *const this,
        const data::ByTargetAltitude *a2)
{
  int (**v2)(...); // rdx
  data::DynamicFloat *p_value; // rsi
  data::TargetAltitudeType target_altitude_type; // ecx
  char v5; // al

  data::RelationalOperationPredicate::RelationalOperationPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetAltitude + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  p_value = &a2->value;
  data::DynamicFloat::DynamicFloat(&this->value, &a2->value);
  if ( *(_BYTE *)(((unsigned __int64)&a2->target_altitude_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->target_altitude_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->target_altitude_type);
  }
  target_altitude_type = a2->target_altitude_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->target_altitude_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_value) = v5 != 0;
    __asan_report_store4(&this->target_altitude_type, p_value);
  }
  this->target_altitude_type = target_altitude_type;
};

// Line 2001: range 000000000EDAE69E-000000000EDAE6C8
void __cdecl data::ByTargetAltitude::~ByTargetAltitude(data::ByTargetAltitude *const this)
{
  data::ByTargetAltitude::~ByTargetAltitude(this);
  operator delete(this, 0x50uLL);
};

// Line 2001: range 000000000EDAE640-000000000EDAE69D
void __cdecl data::ByTargetAltitude::~ByTargetAltitude(data::ByTargetAltitude *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetAltitude + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicFloat::~DynamicFloat(&this->value);
  data::RelationalOperationPredicate::~RelationalOperationPredicate(this);
};

// Line 2006: range 000000000E6A4FFE-000000000E6A500E
const char *__cdecl data::ByTargetAltitude::getTypeName(const data::ByTargetAltitude *const this)
{
  return "ByTargetAltitude";
};

// Line 2007: range 000000000E6A5010-000000000E6A51AC
int32_t __cdecl data::ByTargetAltitude::getHashNum(const data::ByTargetAltitude *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByTargetAltitude::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByTargetAltitude",
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

// Line 2023: range 000000000ECFE24A-000000000ECFE28B
void __cdecl data::ByTargetAltitudeFactory::ByTargetAltitudeFactory(data::ByTargetAltitudeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetAltitudeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByTargetAltitudeFactory = v2;
};

// Line 2031: range 000000000ECFE594-000000000ECFE5E1
void __cdecl data::ByStageIsReadyTemp::ByStageIsReadyTemp(data::ByStageIsReadyTemp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByStageIsReadyTemp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 2031: range 000000000ECFEA72-000000000ECFEACA
void __cdecl data::ByStageIsReadyTemp::ByStageIsReadyTemp(
        data::ByStageIsReadyTemp *const this,
        const data::ByStageIsReadyTemp *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByStageIsReadyTemp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 2037: range 000000000EDAE5C6-000000000EDAE613
void __cdecl data::ByStageIsReadyTemp::~ByStageIsReadyTemp(data::ByStageIsReadyTemp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByStageIsReadyTemp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 2037: range 000000000EDAE614-000000000EDAE63E
void __cdecl data::ByStageIsReadyTemp::~ByStageIsReadyTemp(data::ByStageIsReadyTemp *const this)
{
  data::ByStageIsReadyTemp::~ByStageIsReadyTemp(this);
  operator delete(this, 0x20uLL);
};

// Line 2042: range 000000000E6A51AE-000000000E6A51BE
const char *__cdecl data::ByStageIsReadyTemp::getTypeName(const data::ByStageIsReadyTemp *const this)
{
  return "ByStageIsReadyTemp";
};

// Line 2043: range 000000000E6A51C0-000000000E6A535C
int32_t __cdecl data::ByStageIsReadyTemp::getHashNum(const data::ByStageIsReadyTemp *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByStageIsReadyTemp::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByStageIsReadyTemp",
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

// Line 2059: range 000000000ECFED14-000000000ECFED55
void __cdecl data::ByStageIsReadyTempFactory::ByStageIsReadyTempFactory(data::ByStageIsReadyTempFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByStageIsReadyTempFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByStageIsReadyTempFactory = v2;
};

// Line 2067: range 000000000ECFF05E-000000000ECFF12F
void __cdecl data::ByItemNumber::ByItemNumber(data::ByItemNumber *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByItemNumber + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_id, v1);
  }
  this->item_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->item_num, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->item_num = 0;
};

// Line 2067: range 000000000ECFF504-000000000ECFF656
void __cdecl data::ByItemNumber::ByItemNumber(data::ByItemNumber *const this, const data::ByItemNumber *a2)
{
  int (**v2)(...); // rdx
  uint32_t item_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t item_num; // ecx
  char v7; // dl
  const data::ByItemNumber *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByItemNumber + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->item_id);
  }
  item_id = a2->item_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->item_id, a2);
  }
  this->item_id = item_id;
  v5 = (((_BYTE)v8 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->item_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->item_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->item_num);
  }
  item_num = v8->item_num;
  v7 = *(_BYTE *)(((unsigned __int64)&this->item_num >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->item_num, v5);
  }
  this->item_num = item_num;
};

// Line 2075: range 000000000EDAE54C-000000000EDAE599
void __cdecl data::ByItemNumber::~ByItemNumber(data::ByItemNumber *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByItemNumber + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 2075: range 000000000EDAE59A-000000000EDAE5C4
void __cdecl data::ByItemNumber::~ByItemNumber(data::ByItemNumber *const this)
{
  data::ByItemNumber::~ByItemNumber(this);
  operator delete(this, 0x28uLL);
};

// Line 2080: range 000000000E6A535E-000000000E6A536E
const char *__cdecl data::ByItemNumber::getTypeName(const data::ByItemNumber *const this)
{
  return "ByItemNumber";
};

// Line 2081: range 000000000E6A5370-000000000E6A550C
int32_t __cdecl data::ByItemNumber::getHashNum(const data::ByItemNumber *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByItemNumber::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByItemNumber",
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

// Line 2097: range 000000000ECFF8A0-000000000ECFF8E1
void __cdecl data::ByItemNumberFactory::ByItemNumberFactory(data::ByItemNumberFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByItemNumberFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByItemNumberFactory = v2;
};

// Line 2105: range 000000000ECFFBEA-000000000ECFFC47
void __cdecl data::ByHasFeatureTag::ByHasFeatureTag(data::ByHasFeatureTag *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByHasFeatureTag + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<unsigned int>::vector(&this->feature_tag_ids);
};

// Line 2105: range 000000000ED0003C-000000000ED000D2
void __cdecl data::ByHasFeatureTag::ByHasFeatureTag(data::ByHasFeatureTag *const this, const data::ByHasFeatureTag *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByHasFeatureTag + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<unsigned int>::vector(&this->feature_tag_ids, &a2->feature_tag_ids);
};

// Line 2112: range 000000000EDAE4C2-000000000EDAE51F
void __cdecl data::ByHasFeatureTag::~ByHasFeatureTag(data::ByHasFeatureTag *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHasFeatureTag + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<unsigned int>::~vector(&this->feature_tag_ids);
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 2112: range 000000000EDAE520-000000000EDAE54A
void __cdecl data::ByHasFeatureTag::~ByHasFeatureTag(data::ByHasFeatureTag *const this)
{
  data::ByHasFeatureTag::~ByHasFeatureTag(this);
  operator delete(this, 0x38uLL);
};

// Line 2117: range 000000000E6A550E-000000000E6A551E
const char *__cdecl data::ByHasFeatureTag::getTypeName(const data::ByHasFeatureTag *const this)
{
  return "ByHasFeatureTag";
};

// Line 2118: range 000000000E6A5520-000000000E6A56BC
int32_t __cdecl data::ByHasFeatureTag::getHashNum(const data::ByHasFeatureTag *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByHasFeatureTag::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByHasFeatureTag",
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

// Line 2134: range 000000000ED003BC-000000000ED003FD
void __cdecl data::ByHasFeatureTagFactory::ByHasFeatureTagFactory(data::ByHasFeatureTagFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHasFeatureTagFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByHasFeatureTagFactory = v2;
};

// Line 2142: range 000000000ED00706-000000000ED00791
void __cdecl data::ByAvatarElementType::ByAvatarElementType(data::ByAvatarElementType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByAvatarElementType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->element_type, v1);
  }
  this->element_type = None_0;
};

// Line 2142: range 000000000ED00C92-000000000ED00D5F
void __cdecl data::ByAvatarElementType::ByAvatarElementType(
        data::ByAvatarElementType *const this,
        const data::ByAvatarElementType *a2)
{
  int (**v2)(...); // rdx
  data::ElementType element_type; // ecx
  char v4; // al

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByAvatarElementType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
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
};

// Line 2149: range 000000000EDAE496-000000000EDAE4C0
void __cdecl data::ByAvatarElementType::~ByAvatarElementType(data::ByAvatarElementType *const this)
{
  data::ByAvatarElementType::~ByAvatarElementType(this);
  operator delete(this, 0x28uLL);
};

// Line 2149: range 000000000EDAE448-000000000EDAE495
void __cdecl data::ByAvatarElementType::~ByAvatarElementType(data::ByAvatarElementType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByAvatarElementType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 2154: range 000000000E6A56BE-000000000E6A56CE
const char *__cdecl data::ByAvatarElementType::getTypeName(const data::ByAvatarElementType *const this)
{
  return "ByAvatarElementType";
};

// Line 2155: range 000000000E6A56D0-000000000E6A586C
int32_t __cdecl data::ByAvatarElementType::getHashNum(const data::ByAvatarElementType *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByAvatarElementType::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByAvatarElementType",
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

// Line 2171: range 000000000ED00FA8-000000000ED00FE9
void __cdecl data::ByAvatarElementTypeFactory::ByAvatarElementTypeFactory(data::ByAvatarElementTypeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByAvatarElementTypeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByAvatarElementTypeFactory = v2;
};

// Line 2179: range 000000000ED012F2-000000000ED0134F
void __cdecl data::ByAvatarWeaponType::ByAvatarWeaponType(data::ByAvatarWeaponType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByAvatarWeaponType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<std::string>::vector(&this->weapon_types);
};

// Line 2179: range 000000000ED01744-000000000ED017DA
void __cdecl data::ByAvatarWeaponType::ByAvatarWeaponType(
        data::ByAvatarWeaponType *const this,
        const data::ByAvatarWeaponType *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByAvatarWeaponType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<std::string>::vector(&this->weapon_types, &a2->weapon_types);
};

// Line 2186: range 000000000EDAE41C-000000000EDAE446
void __cdecl data::ByAvatarWeaponType::~ByAvatarWeaponType(data::ByAvatarWeaponType *const this)
{
  data::ByAvatarWeaponType::~ByAvatarWeaponType(this);
  operator delete(this, 0x38uLL);
};

// Line 2186: range 000000000EDAE3BE-000000000EDAE41B
void __cdecl data::ByAvatarWeaponType::~ByAvatarWeaponType(data::ByAvatarWeaponType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByAvatarWeaponType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<std::string>::~vector(&this->weapon_types);
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 2191: range 000000000E6A586E-000000000E6A587E
const char *__cdecl data::ByAvatarWeaponType::getTypeName(const data::ByAvatarWeaponType *const this)
{
  return "ByAvatarWeaponType";
};

// Line 2192: range 000000000E6A5880-000000000E6A5A1C
int32_t __cdecl data::ByAvatarWeaponType::getHashNum(const data::ByAvatarWeaponType *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByAvatarWeaponType::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByAvatarWeaponType",
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

// Line 2208: range 000000000ED01AC4-000000000ED01B05
void __cdecl data::ByAvatarWeaponTypeFactory::ByAvatarWeaponTypeFactory(data::ByAvatarWeaponTypeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByAvatarWeaponTypeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByAvatarWeaponTypeFactory = v2;
};

// Line 2216: range 000000000ED01E0E-000000000ED01E6B
void __cdecl data::ByAvatarBodyType::ByAvatarBodyType(data::ByAvatarBodyType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByAvatarBodyType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::string::basic_string(&this->body_type);
};

// Line 2216: range 000000000ED02270-000000000ED02306
void __cdecl data::ByAvatarBodyType::ByAvatarBodyType(
        data::ByAvatarBodyType *const this,
        const data::ByAvatarBodyType *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByAvatarBodyType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::string::basic_string(&this->body_type, &a2->body_type);
};

// Line 2223: range 000000000EDAE392-000000000EDAE3BC
void __cdecl data::ByAvatarBodyType::~ByAvatarBodyType(data::ByAvatarBodyType *const this)
{
  data::ByAvatarBodyType::~ByAvatarBodyType(this);
  operator delete(this, 0x40uLL);
};

// Line 2223: range 000000000EDAE334-000000000EDAE391
void __cdecl data::ByAvatarBodyType::~ByAvatarBodyType(data::ByAvatarBodyType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByAvatarBodyType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::string::~string(&this->body_type);
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 2228: range 000000000E6A5A1E-000000000E6A5A2E
const char *__cdecl data::ByAvatarBodyType::getTypeName(const data::ByAvatarBodyType *const this)
{
  return "ByAvatarBodyType";
};

// Line 2229: range 000000000E6A5A30-000000000E6A5BCC
int32_t __cdecl data::ByAvatarBodyType::getHashNum(const data::ByAvatarBodyType *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByAvatarBodyType::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByAvatarBodyType",
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

// Line 2245: range 000000000ED025F0-000000000ED02631
void __cdecl data::ByAvatarBodyTypeFactory::ByAvatarBodyTypeFactory(data::ByAvatarBodyTypeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByAvatarBodyTypeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByAvatarBodyTypeFactory = v2;
};

// Line 2253: range 000000000ED0293A-000000000ED02A49
void __cdecl data::ByCurTeamHasFeatureTag::ByCurTeamHasFeatureTag(data::ByCurTeamHasFeatureTag *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByCurTeamHasFeatureTag + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->feature_tag_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->feature_tag_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->feature_tag_id, v1);
  }
  this->feature_tag_id = 0;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->number, v3);
  }
  this->number = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->logic, v3);
  }
  this->logic = Greater_1;
};

// Line 2253: range 000000000ED02E24-000000000ED02FEB
void __cdecl data::ByCurTeamHasFeatureTag::ByCurTeamHasFeatureTag(
        data::ByCurTeamHasFeatureTag *const this,
        const data::ByCurTeamHasFeatureTag *a2)
{
  int (**v2)(...); // rdx
  uint32_t feature_tag_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t number; // ecx
  char v7; // dl
  data::RelationalOperator logic; // ecx
  char v9; // al
  const data::ByCurTeamHasFeatureTag *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByCurTeamHasFeatureTag + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->feature_tag_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->feature_tag_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->feature_tag_id);
  }
  feature_tag_id = a2->feature_tag_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->feature_tag_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->feature_tag_id, a2);
  }
  this->feature_tag_id = feature_tag_id;
  v5 = (((_BYTE)v10 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->number >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->number >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->number);
  }
  number = v10->number;
  v7 = *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->number, v5);
  }
  this->number = number;
  if ( *(_BYTE *)(((unsigned __int64)&v10->logic >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->logic >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->logic);
  }
  logic = v10->logic;
  v9 = *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->logic, v5);
  }
  this->logic = logic;
};

// Line 2262: range 000000000EDAE2BA-000000000EDAE307
void __cdecl data::ByCurTeamHasFeatureTag::~ByCurTeamHasFeatureTag(data::ByCurTeamHasFeatureTag *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByCurTeamHasFeatureTag + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 2262: range 000000000EDAE308-000000000EDAE332
void __cdecl data::ByCurTeamHasFeatureTag::~ByCurTeamHasFeatureTag(data::ByCurTeamHasFeatureTag *const this)
{
  data::ByCurTeamHasFeatureTag::~ByCurTeamHasFeatureTag(this);
  operator delete(this, 0x30uLL);
};

// Line 2267: range 000000000E6A5BCE-000000000E6A5BDE
const char *__cdecl data::ByCurTeamHasFeatureTag::getTypeName(const data::ByCurTeamHasFeatureTag *const this)
{
  return "ByCurTeamHasFeatureTag";
};

// Line 2268: range 000000000E6A5BE0-000000000E6A5D7C
int32_t __cdecl data::ByCurTeamHasFeatureTag::getHashNum(const data::ByCurTeamHasFeatureTag *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByCurTeamHasFeatureTag::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByCurTeamHasFeatureTag",
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

// Line 2284: range 000000000ED03234-000000000ED03275
void __cdecl data::ByCurTeamHasFeatureTagFactory::ByCurTeamHasFeatureTagFactory(
        data::ByCurTeamHasFeatureTagFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByCurTeamHasFeatureTagFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByCurTeamHasFeatureTagFactory = v2;
};

// Line 2292: range 000000000ED0357E-000000000ED0368D
void __cdecl data::ByCurTeamHasElementType::ByCurTeamHasElementType(data::ByCurTeamHasElementType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByCurTeamHasElementType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->element_type, v1);
  }
  this->element_type = None_0;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->number, v3);
  }
  this->number = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->logic, v3);
  }
  this->logic = Greater_1;
};

// Line 2292: range 000000000ED03A68-000000000ED03C2F
void __cdecl data::ByCurTeamHasElementType::ByCurTeamHasElementType(
        data::ByCurTeamHasElementType *const this,
        const data::ByCurTeamHasElementType *a2)
{
  int (**v2)(...); // rdx
  data::ElementType element_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t number; // ecx
  char v7; // dl
  data::RelationalOperator logic; // ecx
  char v9; // al
  const data::ByCurTeamHasElementType *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByCurTeamHasElementType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
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
  v5 = (((_BYTE)v10 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->number >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->number >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->number);
  }
  number = v10->number;
  v7 = *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->number, v5);
  }
  this->number = number;
  if ( *(_BYTE *)(((unsigned __int64)&v10->logic >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->logic >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->logic);
  }
  logic = v10->logic;
  v9 = *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->logic, v5);
  }
  this->logic = logic;
};

// Line 2301: range 000000000EDAE28E-000000000EDAE2B8
void __cdecl data::ByCurTeamHasElementType::~ByCurTeamHasElementType(data::ByCurTeamHasElementType *const this)
{
  data::ByCurTeamHasElementType::~ByCurTeamHasElementType(this);
  operator delete(this, 0x30uLL);
};

// Line 2301: range 000000000EDAE240-000000000EDAE28D
void __cdecl data::ByCurTeamHasElementType::~ByCurTeamHasElementType(data::ByCurTeamHasElementType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByCurTeamHasElementType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 2306: range 000000000E6A5D7E-000000000E6A5D8E
const char *__cdecl data::ByCurTeamHasElementType::getTypeName(const data::ByCurTeamHasElementType *const this)
{
  return "ByCurTeamHasElementType";
};

// Line 2307: range 000000000E6A5D90-000000000E6A5F2C
int32_t __cdecl data::ByCurTeamHasElementType::getHashNum(const data::ByCurTeamHasElementType *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByCurTeamHasElementType::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByCurTeamHasElementType",
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

// Line 2323: range 000000000ED03E78-000000000ED03EB9
void __cdecl data::ByCurTeamHasElementTypeFactory::ByCurTeamHasElementTypeFactory(
        data::ByCurTeamHasElementTypeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByCurTeamHasElementTypeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByCurTeamHasElementTypeFactory = v2;
};

// Line 2331: range 000000000ED041C2-000000000ED04293
void __cdecl data::ByCurTeamElementTypeSort::ByCurTeamElementTypeSort(data::ByCurTeamElementTypeSort *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByCurTeamElementTypeSort + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->number, v1);
  }
  this->number = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->logic, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->logic = Greater_1;
};

// Line 2331: range 000000000ED04668-000000000ED047BA
void __cdecl data::ByCurTeamElementTypeSort::ByCurTeamElementTypeSort(
        data::ByCurTeamElementTypeSort *const this,
        const data::ByCurTeamElementTypeSort *a2)
{
  int (**v2)(...); // rdx
  uint32_t number; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::RelationalOperator logic; // ecx
  char v7; // dl
  const data::ByCurTeamElementTypeSort *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByCurTeamElementTypeSort + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->number >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->number >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->number);
  }
  number = a2->number;
  v4 = *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->number, a2);
  }
  this->number = number;
  v5 = (((_BYTE)v8 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->logic >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->logic >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->logic);
  }
  logic = v8->logic;
  v7 = *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->logic, v5);
  }
  this->logic = logic;
};

// Line 2339: range 000000000EDAE1C6-000000000EDAE213
void __cdecl data::ByCurTeamElementTypeSort::~ByCurTeamElementTypeSort(data::ByCurTeamElementTypeSort *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByCurTeamElementTypeSort + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 2339: range 000000000EDAE214-000000000EDAE23E
void __cdecl data::ByCurTeamElementTypeSort::~ByCurTeamElementTypeSort(data::ByCurTeamElementTypeSort *const this)
{
  data::ByCurTeamElementTypeSort::~ByCurTeamElementTypeSort(this);
  operator delete(this, 0x28uLL);
};

// Line 2344: range 000000000E6A5F2E-000000000E6A5F3E
const char *__cdecl data::ByCurTeamElementTypeSort::getTypeName(const data::ByCurTeamElementTypeSort *const this)
{
  return "ByCurTeamElementTypeSort";
};

// Line 2345: range 000000000E6A5F40-000000000E6A60DC
int32_t __cdecl data::ByCurTeamElementTypeSort::getHashNum(const data::ByCurTeamElementTypeSort *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByCurTeamElementTypeSort::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByCurTeamElementTypeSort",
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

// Line 2361: range 000000000ED04A04-000000000ED04A45
void __cdecl data::ByCurTeamElementTypeSortFactory::ByCurTeamElementTypeSortFactory(
        data::ByCurTeamElementTypeSortFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByCurTeamElementTypeSortFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByCurTeamElementTypeSortFactory = v2;
};

// Line 2369: range 000000000ED04D4E-000000000ED04E2F
void __cdecl data::ByCurTeamHasWeaponType::ByCurTeamHasWeaponType(data::ByCurTeamHasWeaponType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByCurTeamHasWeaponType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::string::basic_string(&this->weapon_type);
  if ( *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->number, v1);
  }
  this->number = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->logic, (((_BYTE)this + 68) & 7u) + 3);
  }
  this->logic = Greater_1;
};

// Line 2369: range 000000000ED0524A-000000000ED053DA
void __cdecl data::ByCurTeamHasWeaponType::ByCurTeamHasWeaponType(
        data::ByCurTeamHasWeaponType *const this,
        const data::ByCurTeamHasWeaponType *a2)
{
  int (**v2)(...); // rdx
  std::string *p_weapon_type; // rsi
  uint32_t number; // ecx
  char v5; // al
  __int64 v6; // rsi
  data::RelationalOperator logic; // ecx
  char v8; // dl

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByCurTeamHasWeaponType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  p_weapon_type = &a2->weapon_type;
  std::string::basic_string(&this->weapon_type, &a2->weapon_type);
  if ( *(_BYTE *)(((unsigned __int64)&a2->number >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->number >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->number);
  }
  number = a2->number;
  v5 = *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_weapon_type) = v5 != 0;
    __asan_report_store4(&this->number, p_weapon_type);
  }
  this->number = number;
  v6 = (((_BYTE)a2 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->logic >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->logic >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->logic);
  }
  logic = a2->logic;
  v8 = *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000);
  if ( v8 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v8 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store4(&this->logic, v6);
  }
  this->logic = logic;
};

// Line 2378: range 000000000EDAE13C-000000000EDAE199
void __cdecl data::ByCurTeamHasWeaponType::~ByCurTeamHasWeaponType(data::ByCurTeamHasWeaponType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByCurTeamHasWeaponType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::string::~string(&this->weapon_type);
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 2378: range 000000000EDAE19A-000000000EDAE1C4
void __cdecl data::ByCurTeamHasWeaponType::~ByCurTeamHasWeaponType(data::ByCurTeamHasWeaponType *const this)
{
  data::ByCurTeamHasWeaponType::~ByCurTeamHasWeaponType(this);
  operator delete(this, 0x48uLL);
};

// Line 2383: range 000000000E6A60DE-000000000E6A60EE
const char *__cdecl data::ByCurTeamHasWeaponType::getTypeName(const data::ByCurTeamHasWeaponType *const this)
{
  return "ByCurTeamHasWeaponType";
};

// Line 2384: range 000000000E6A60F0-000000000E6A628C
int32_t __cdecl data::ByCurTeamHasWeaponType::getHashNum(const data::ByCurTeamHasWeaponType *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByCurTeamHasWeaponType::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByCurTeamHasWeaponType",
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

// Line 2400: range 000000000ED056C4-000000000ED05705
void __cdecl data::ByCurTeamHasWeaponTypeFactory::ByCurTeamHasWeaponTypeFactory(
        data::ByCurTeamHasWeaponTypeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByCurTeamHasWeaponTypeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByCurTeamHasWeaponTypeFactory = v2;
};

// Line 2408: range 000000000ED05A0E-000000000ED05ADF
void __cdecl data::ByCurTeamWeaponTypeSort::ByCurTeamWeaponTypeSort(data::ByCurTeamWeaponTypeSort *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByCurTeamWeaponTypeSort + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->number, v1);
  }
  this->number = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->logic, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->logic = Greater_1;
};

// Line 2408: range 000000000ED05EB4-000000000ED06006
void __cdecl data::ByCurTeamWeaponTypeSort::ByCurTeamWeaponTypeSort(
        data::ByCurTeamWeaponTypeSort *const this,
        const data::ByCurTeamWeaponTypeSort *a2)
{
  int (**v2)(...); // rdx
  uint32_t number; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::RelationalOperator logic; // ecx
  char v7; // dl
  const data::ByCurTeamWeaponTypeSort *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByCurTeamWeaponTypeSort + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->number >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->number >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->number);
  }
  number = a2->number;
  v4 = *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->number, a2);
  }
  this->number = number;
  v5 = (((_BYTE)v8 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->logic >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->logic >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->logic);
  }
  logic = v8->logic;
  v7 = *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->logic, v5);
  }
  this->logic = logic;
};

// Line 2416: range 000000000EDAE0C2-000000000EDAE10F
void __cdecl data::ByCurTeamWeaponTypeSort::~ByCurTeamWeaponTypeSort(data::ByCurTeamWeaponTypeSort *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByCurTeamWeaponTypeSort + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 2416: range 000000000EDAE110-000000000EDAE13A
void __cdecl data::ByCurTeamWeaponTypeSort::~ByCurTeamWeaponTypeSort(data::ByCurTeamWeaponTypeSort *const this)
{
  data::ByCurTeamWeaponTypeSort::~ByCurTeamWeaponTypeSort(this);
  operator delete(this, 0x28uLL);
};

// Line 2421: range 000000000E6A628E-000000000E6A629E
const char *__cdecl data::ByCurTeamWeaponTypeSort::getTypeName(const data::ByCurTeamWeaponTypeSort *const this)
{
  return "ByCurTeamWeaponTypeSort";
};

// Line 2422: range 000000000E6A62A0-000000000E6A643C
int32_t __cdecl data::ByCurTeamWeaponTypeSort::getHashNum(const data::ByCurTeamWeaponTypeSort *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByCurTeamWeaponTypeSort::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByCurTeamWeaponTypeSort",
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

// Line 2438: range 000000000ED06250-000000000ED06291
void __cdecl data::ByCurTeamWeaponTypeSortFactory::ByCurTeamWeaponTypeSortFactory(
        data::ByCurTeamWeaponTypeSortFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByCurTeamWeaponTypeSortFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByCurTeamWeaponTypeSortFactory = v2;
};

// Line 2446: range 000000000ED0659A-000000000ED0667B
void __cdecl data::ByCurTeamHasBodyType::ByCurTeamHasBodyType(data::ByCurTeamHasBodyType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByCurTeamHasBodyType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::string::basic_string(&this->body_type);
  if ( *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->number, v1);
  }
  this->number = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->logic, (((_BYTE)this + 68) & 7u) + 3);
  }
  this->logic = Greater_1;
};

// Line 2446: range 000000000ED06A96-000000000ED06C26
void __cdecl data::ByCurTeamHasBodyType::ByCurTeamHasBodyType(
        data::ByCurTeamHasBodyType *const this,
        const data::ByCurTeamHasBodyType *a2)
{
  int (**v2)(...); // rdx
  std::string *p_body_type; // rsi
  uint32_t number; // ecx
  char v5; // al
  __int64 v6; // rsi
  data::RelationalOperator logic; // ecx
  char v8; // dl

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByCurTeamHasBodyType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  p_body_type = &a2->body_type;
  std::string::basic_string(&this->body_type, &a2->body_type);
  if ( *(_BYTE *)(((unsigned __int64)&a2->number >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->number >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->number);
  }
  number = a2->number;
  v5 = *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_body_type) = v5 != 0;
    __asan_report_store4(&this->number, p_body_type);
  }
  this->number = number;
  v6 = (((_BYTE)a2 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->logic >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->logic >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->logic);
  }
  logic = a2->logic;
  v8 = *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000);
  if ( v8 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v8 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store4(&this->logic, v6);
  }
  this->logic = logic;
};

// Line 2455: range 000000000EDAE096-000000000EDAE0C0
void __cdecl data::ByCurTeamHasBodyType::~ByCurTeamHasBodyType(data::ByCurTeamHasBodyType *const this)
{
  data::ByCurTeamHasBodyType::~ByCurTeamHasBodyType(this);
  operator delete(this, 0x48uLL);
};

// Line 2455: range 000000000EDAE038-000000000EDAE095
void __cdecl data::ByCurTeamHasBodyType::~ByCurTeamHasBodyType(data::ByCurTeamHasBodyType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByCurTeamHasBodyType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::string::~string(&this->body_type);
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 2460: range 000000000E6A643E-000000000E6A644E
const char *__cdecl data::ByCurTeamHasBodyType::getTypeName(const data::ByCurTeamHasBodyType *const this)
{
  return "ByCurTeamHasBodyType";
};

// Line 2461: range 000000000E6A6450-000000000E6A65EC
int32_t __cdecl data::ByCurTeamHasBodyType::getHashNum(const data::ByCurTeamHasBodyType *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByCurTeamHasBodyType::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByCurTeamHasBodyType",
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

// Line 2477: range 000000000ED06F10-000000000ED06F51
void __cdecl data::ByCurTeamHasBodyTypeFactory::ByCurTeamHasBodyTypeFactory(
        data::ByCurTeamHasBodyTypeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByCurTeamHasBodyTypeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByCurTeamHasBodyTypeFactory = v2;
};

// Line 2485: range 000000000ED0725A-000000000ED0732B
void __cdecl data::ByCurTeamBodyTypeSort::ByCurTeamBodyTypeSort(data::ByCurTeamBodyTypeSort *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByCurTeamBodyTypeSort + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->number, v1);
  }
  this->number = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->logic, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->logic = Greater_1;
};

// Line 2485: range 000000000ED07700-000000000ED07852
void __cdecl data::ByCurTeamBodyTypeSort::ByCurTeamBodyTypeSort(
        data::ByCurTeamBodyTypeSort *const this,
        const data::ByCurTeamBodyTypeSort *a2)
{
  int (**v2)(...); // rdx
  uint32_t number; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::RelationalOperator logic; // ecx
  char v7; // dl
  const data::ByCurTeamBodyTypeSort *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByCurTeamBodyTypeSort + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->number >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->number >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->number);
  }
  number = a2->number;
  v4 = *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->number, a2);
  }
  this->number = number;
  v5 = (((_BYTE)v8 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->logic >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->logic >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->logic);
  }
  logic = v8->logic;
  v7 = *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->logic, v5);
  }
  this->logic = logic;
};

// Line 2493: range 000000000EDAE00C-000000000EDAE036
void __cdecl data::ByCurTeamBodyTypeSort::~ByCurTeamBodyTypeSort(data::ByCurTeamBodyTypeSort *const this)
{
  data::ByCurTeamBodyTypeSort::~ByCurTeamBodyTypeSort(this);
  operator delete(this, 0x28uLL);
};

// Line 2493: range 000000000EDADFBE-000000000EDAE00B
void __cdecl data::ByCurTeamBodyTypeSort::~ByCurTeamBodyTypeSort(data::ByCurTeamBodyTypeSort *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByCurTeamBodyTypeSort + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 2498: range 000000000E6A65EE-000000000E6A65FE
const char *__cdecl data::ByCurTeamBodyTypeSort::getTypeName(const data::ByCurTeamBodyTypeSort *const this)
{
  return "ByCurTeamBodyTypeSort";
};

// Line 2499: range 000000000E6A6600-000000000E6A679C
int32_t __cdecl data::ByCurTeamBodyTypeSort::getHashNum(const data::ByCurTeamBodyTypeSort *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByCurTeamBodyTypeSort::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByCurTeamBodyTypeSort",
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

// Line 2515: range 000000000ED07A9C-000000000ED07ADD
void __cdecl data::ByCurTeamBodyTypeSortFactory::ByCurTeamBodyTypeSortFactory(
        data::ByCurTeamBodyTypeSortFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByCurTeamBodyTypeSortFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByCurTeamBodyTypeSortFactory = v2;
};

// Line 2523: range 000000000ED07DE6-000000000ED07EF5
void __cdecl data::ByBigTeamHasFeatureTag::ByBigTeamHasFeatureTag(data::ByBigTeamHasFeatureTag *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByBigTeamHasFeatureTag + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->feature_tag_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->feature_tag_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->feature_tag_id, v1);
  }
  this->feature_tag_id = 0;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->number, v3);
  }
  this->number = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->logic, v3);
  }
  this->logic = Greater_1;
};

// Line 2523: range 000000000ED082D0-000000000ED08497
void __cdecl data::ByBigTeamHasFeatureTag::ByBigTeamHasFeatureTag(
        data::ByBigTeamHasFeatureTag *const this,
        const data::ByBigTeamHasFeatureTag *a2)
{
  int (**v2)(...); // rdx
  uint32_t feature_tag_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t number; // ecx
  char v7; // dl
  data::RelationalOperator logic; // ecx
  char v9; // al
  const data::ByBigTeamHasFeatureTag *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByBigTeamHasFeatureTag + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->feature_tag_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->feature_tag_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->feature_tag_id);
  }
  feature_tag_id = a2->feature_tag_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->feature_tag_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->feature_tag_id, a2);
  }
  this->feature_tag_id = feature_tag_id;
  v5 = (((_BYTE)v10 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->number >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->number >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->number);
  }
  number = v10->number;
  v7 = *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->number, v5);
  }
  this->number = number;
  if ( *(_BYTE *)(((unsigned __int64)&v10->logic >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->logic >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->logic);
  }
  logic = v10->logic;
  v9 = *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->logic, v5);
  }
  this->logic = logic;
};

// Line 2532: range 000000000EDADF44-000000000EDADF91
void __cdecl data::ByBigTeamHasFeatureTag::~ByBigTeamHasFeatureTag(data::ByBigTeamHasFeatureTag *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByBigTeamHasFeatureTag + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 2532: range 000000000EDADF92-000000000EDADFBC
void __cdecl data::ByBigTeamHasFeatureTag::~ByBigTeamHasFeatureTag(data::ByBigTeamHasFeatureTag *const this)
{
  data::ByBigTeamHasFeatureTag::~ByBigTeamHasFeatureTag(this);
  operator delete(this, 0x30uLL);
};

// Line 2537: range 000000000E6A679E-000000000E6A67AE
const char *__cdecl data::ByBigTeamHasFeatureTag::getTypeName(const data::ByBigTeamHasFeatureTag *const this)
{
  return "ByBigTeamHasFeatureTag";
};

// Line 2538: range 000000000E6A67B0-000000000E6A694C
int32_t __cdecl data::ByBigTeamHasFeatureTag::getHashNum(const data::ByBigTeamHasFeatureTag *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByBigTeamHasFeatureTag::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByBigTeamHasFeatureTag",
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

// Line 2554: range 000000000ED086E0-000000000ED08721
void __cdecl data::ByBigTeamHasFeatureTagFactory::ByBigTeamHasFeatureTagFactory(
        data::ByBigTeamHasFeatureTagFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByBigTeamHasFeatureTagFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByBigTeamHasFeatureTagFactory = v2;
};

// Line 2562: range 000000000ED08A2A-000000000ED08B39
void __cdecl data::ByBigTeamHasElementType::ByBigTeamHasElementType(data::ByBigTeamHasElementType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByBigTeamHasElementType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->element_type, v1);
  }
  this->element_type = None_0;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->number, v3);
  }
  this->number = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->logic, v3);
  }
  this->logic = Greater_1;
};

// Line 2562: range 000000000ED08F14-000000000ED090DB
void __cdecl data::ByBigTeamHasElementType::ByBigTeamHasElementType(
        data::ByBigTeamHasElementType *const this,
        const data::ByBigTeamHasElementType *a2)
{
  int (**v2)(...); // rdx
  data::ElementType element_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t number; // ecx
  char v7; // dl
  data::RelationalOperator logic; // ecx
  char v9; // al
  const data::ByBigTeamHasElementType *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByBigTeamHasElementType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
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
  v5 = (((_BYTE)v10 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->number >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->number >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->number);
  }
  number = v10->number;
  v7 = *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->number, v5);
  }
  this->number = number;
  if ( *(_BYTE *)(((unsigned __int64)&v10->logic >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->logic >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->logic);
  }
  logic = v10->logic;
  v9 = *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->logic, v5);
  }
  this->logic = logic;
};

// Line 2571: range 000000000EDADECA-000000000EDADF17
void __cdecl data::ByBigTeamHasElementType::~ByBigTeamHasElementType(data::ByBigTeamHasElementType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByBigTeamHasElementType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 2571: range 000000000EDADF18-000000000EDADF42
void __cdecl data::ByBigTeamHasElementType::~ByBigTeamHasElementType(data::ByBigTeamHasElementType *const this)
{
  data::ByBigTeamHasElementType::~ByBigTeamHasElementType(this);
  operator delete(this, 0x30uLL);
};

// Line 2576: range 000000000E6A694E-000000000E6A695E
const char *__cdecl data::ByBigTeamHasElementType::getTypeName(const data::ByBigTeamHasElementType *const this)
{
  return "ByBigTeamHasElementType";
};

// Line 2577: range 000000000E6A6960-000000000E6A6AFC
int32_t __cdecl data::ByBigTeamHasElementType::getHashNum(const data::ByBigTeamHasElementType *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByBigTeamHasElementType::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByBigTeamHasElementType",
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

// Line 2593: range 000000000ED09324-000000000ED09365
void __cdecl data::ByBigTeamHasElementTypeFactory::ByBigTeamHasElementTypeFactory(
        data::ByBigTeamHasElementTypeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByBigTeamHasElementTypeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByBigTeamHasElementTypeFactory = v2;
};

// Line 2601: range 000000000ED0966E-000000000ED0973F
void __cdecl data::ByBigTeamElementTypeSort::ByBigTeamElementTypeSort(data::ByBigTeamElementTypeSort *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByBigTeamElementTypeSort + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->number, v1);
  }
  this->number = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->logic, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->logic = Greater_1;
};

// Line 2601: range 000000000ED09B14-000000000ED09C66
void __cdecl data::ByBigTeamElementTypeSort::ByBigTeamElementTypeSort(
        data::ByBigTeamElementTypeSort *const this,
        const data::ByBigTeamElementTypeSort *a2)
{
  int (**v2)(...); // rdx
  uint32_t number; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::RelationalOperator logic; // ecx
  char v7; // dl
  const data::ByBigTeamElementTypeSort *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByBigTeamElementTypeSort + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->number >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->number >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->number);
  }
  number = a2->number;
  v4 = *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->number, a2);
  }
  this->number = number;
  v5 = (((_BYTE)v8 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->logic >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->logic >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->logic);
  }
  logic = v8->logic;
  v7 = *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->logic, v5);
  }
  this->logic = logic;
};

// Line 2609: range 000000000EDADE9E-000000000EDADEC8
void __cdecl data::ByBigTeamElementTypeSort::~ByBigTeamElementTypeSort(data::ByBigTeamElementTypeSort *const this)
{
  data::ByBigTeamElementTypeSort::~ByBigTeamElementTypeSort(this);
  operator delete(this, 0x28uLL);
};

// Line 2609: range 000000000EDADE50-000000000EDADE9D
void __cdecl data::ByBigTeamElementTypeSort::~ByBigTeamElementTypeSort(data::ByBigTeamElementTypeSort *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByBigTeamElementTypeSort + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 2614: range 000000000E6A6AFE-000000000E6A6B0E
const char *__cdecl data::ByBigTeamElementTypeSort::getTypeName(const data::ByBigTeamElementTypeSort *const this)
{
  return "ByBigTeamElementTypeSort";
};

// Line 2615: range 000000000E6A6B10-000000000E6A6CAC
int32_t __cdecl data::ByBigTeamElementTypeSort::getHashNum(const data::ByBigTeamElementTypeSort *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByBigTeamElementTypeSort::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByBigTeamElementTypeSort",
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

// Line 2631: range 000000000ED09EB0-000000000ED09EF1
void __cdecl data::ByBigTeamElementTypeSortFactory::ByBigTeamElementTypeSortFactory(
        data::ByBigTeamElementTypeSortFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByBigTeamElementTypeSortFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByBigTeamElementTypeSortFactory = v2;
};

// Line 2639: range 000000000ED0A1FA-000000000ED0A2DB
void __cdecl data::ByBigTeamHasWeaponType::ByBigTeamHasWeaponType(data::ByBigTeamHasWeaponType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByBigTeamHasWeaponType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::string::basic_string(&this->weapon_type);
  if ( *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->number, v1);
  }
  this->number = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->logic, (((_BYTE)this + 68) & 7u) + 3);
  }
  this->logic = Greater_1;
};

// Line 2639: range 000000000ED0A6F6-000000000ED0A886
void __cdecl data::ByBigTeamHasWeaponType::ByBigTeamHasWeaponType(
        data::ByBigTeamHasWeaponType *const this,
        const data::ByBigTeamHasWeaponType *a2)
{
  int (**v2)(...); // rdx
  std::string *p_weapon_type; // rsi
  uint32_t number; // ecx
  char v5; // al
  __int64 v6; // rsi
  data::RelationalOperator logic; // ecx
  char v8; // dl

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByBigTeamHasWeaponType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  p_weapon_type = &a2->weapon_type;
  std::string::basic_string(&this->weapon_type, &a2->weapon_type);
  if ( *(_BYTE *)(((unsigned __int64)&a2->number >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->number >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->number);
  }
  number = a2->number;
  v5 = *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_weapon_type) = v5 != 0;
    __asan_report_store4(&this->number, p_weapon_type);
  }
  this->number = number;
  v6 = (((_BYTE)a2 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->logic >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->logic >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->logic);
  }
  logic = a2->logic;
  v8 = *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000);
  if ( v8 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v8 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store4(&this->logic, v6);
  }
  this->logic = logic;
};

// Line 2648: range 000000000EDADDC6-000000000EDADE23
void __cdecl data::ByBigTeamHasWeaponType::~ByBigTeamHasWeaponType(data::ByBigTeamHasWeaponType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByBigTeamHasWeaponType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::string::~string(&this->weapon_type);
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 2648: range 000000000EDADE24-000000000EDADE4E
void __cdecl data::ByBigTeamHasWeaponType::~ByBigTeamHasWeaponType(data::ByBigTeamHasWeaponType *const this)
{
  data::ByBigTeamHasWeaponType::~ByBigTeamHasWeaponType(this);
  operator delete(this, 0x48uLL);
};

// Line 2653: range 000000000E6A6CAE-000000000E6A6CBE
const char *__cdecl data::ByBigTeamHasWeaponType::getTypeName(const data::ByBigTeamHasWeaponType *const this)
{
  return "ByBigTeamHasWeaponType";
};

// Line 2654: range 000000000E6A6CC0-000000000E6A6E5C
int32_t __cdecl data::ByBigTeamHasWeaponType::getHashNum(const data::ByBigTeamHasWeaponType *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByBigTeamHasWeaponType::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByBigTeamHasWeaponType",
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

// Line 2670: range 000000000ED0AB70-000000000ED0ABB1
void __cdecl data::ByBigTeamHasWeaponTypeFactory::ByBigTeamHasWeaponTypeFactory(
        data::ByBigTeamHasWeaponTypeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByBigTeamHasWeaponTypeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByBigTeamHasWeaponTypeFactory = v2;
};

// Line 2678: range 000000000ED0AEBA-000000000ED0AF8B
void __cdecl data::ByBigTeamWeaponTypeSort::ByBigTeamWeaponTypeSort(data::ByBigTeamWeaponTypeSort *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByBigTeamWeaponTypeSort + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->number, v1);
  }
  this->number = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->logic, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->logic = Greater_1;
};

// Line 2678: range 000000000ED0B360-000000000ED0B4B2
void __cdecl data::ByBigTeamWeaponTypeSort::ByBigTeamWeaponTypeSort(
        data::ByBigTeamWeaponTypeSort *const this,
        const data::ByBigTeamWeaponTypeSort *a2)
{
  int (**v2)(...); // rdx
  uint32_t number; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::RelationalOperator logic; // ecx
  char v7; // dl
  const data::ByBigTeamWeaponTypeSort *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByBigTeamWeaponTypeSort + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->number >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->number >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->number);
  }
  number = a2->number;
  v4 = *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->number, a2);
  }
  this->number = number;
  v5 = (((_BYTE)v8 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->logic >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->logic >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->logic);
  }
  logic = v8->logic;
  v7 = *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->logic, v5);
  }
  this->logic = logic;
};

// Line 2686: range 000000000EDADD9A-000000000EDADDC4
void __cdecl data::ByBigTeamWeaponTypeSort::~ByBigTeamWeaponTypeSort(data::ByBigTeamWeaponTypeSort *const this)
{
  data::ByBigTeamWeaponTypeSort::~ByBigTeamWeaponTypeSort(this);
  operator delete(this, 0x28uLL);
};

// Line 2686: range 000000000EDADD4C-000000000EDADD99
void __cdecl data::ByBigTeamWeaponTypeSort::~ByBigTeamWeaponTypeSort(data::ByBigTeamWeaponTypeSort *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByBigTeamWeaponTypeSort + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 2691: range 000000000E6A6E5E-000000000E6A6E6E
const char *__cdecl data::ByBigTeamWeaponTypeSort::getTypeName(const data::ByBigTeamWeaponTypeSort *const this)
{
  return "ByBigTeamWeaponTypeSort";
};

// Line 2692: range 000000000E6A6E70-000000000E6A700C
int32_t __cdecl data::ByBigTeamWeaponTypeSort::getHashNum(const data::ByBigTeamWeaponTypeSort *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByBigTeamWeaponTypeSort::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByBigTeamWeaponTypeSort",
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

// Line 2708: range 000000000ED0B6FC-000000000ED0B73D
void __cdecl data::ByBigTeamWeaponTypeSortFactory::ByBigTeamWeaponTypeSortFactory(
        data::ByBigTeamWeaponTypeSortFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByBigTeamWeaponTypeSortFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByBigTeamWeaponTypeSortFactory = v2;
};

// Line 2716: range 000000000ED0BA46-000000000ED0BB27
void __cdecl data::ByBigTeamHasBodyType::ByBigTeamHasBodyType(data::ByBigTeamHasBodyType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByBigTeamHasBodyType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::string::basic_string(&this->body_type);
  if ( *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->number, v1);
  }
  this->number = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->logic, (((_BYTE)this + 68) & 7u) + 3);
  }
  this->logic = Greater_1;
};

// Line 2716: range 000000000ED0BF42-000000000ED0C0D2
void __cdecl data::ByBigTeamHasBodyType::ByBigTeamHasBodyType(
        data::ByBigTeamHasBodyType *const this,
        const data::ByBigTeamHasBodyType *a2)
{
  int (**v2)(...); // rdx
  std::string *p_body_type; // rsi
  uint32_t number; // ecx
  char v5; // al
  __int64 v6; // rsi
  data::RelationalOperator logic; // ecx
  char v8; // dl

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByBigTeamHasBodyType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  p_body_type = &a2->body_type;
  std::string::basic_string(&this->body_type, &a2->body_type);
  if ( *(_BYTE *)(((unsigned __int64)&a2->number >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->number >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->number);
  }
  number = a2->number;
  v5 = *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_body_type) = v5 != 0;
    __asan_report_store4(&this->number, p_body_type);
  }
  this->number = number;
  v6 = (((_BYTE)a2 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->logic >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->logic >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->logic);
  }
  logic = a2->logic;
  v8 = *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000);
  if ( v8 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v8 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store4(&this->logic, v6);
  }
  this->logic = logic;
};

// Line 2725: range 000000000EDADCC2-000000000EDADD1F
void __cdecl data::ByBigTeamHasBodyType::~ByBigTeamHasBodyType(data::ByBigTeamHasBodyType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByBigTeamHasBodyType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::string::~string(&this->body_type);
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 2725: range 000000000EDADD20-000000000EDADD4A
void __cdecl data::ByBigTeamHasBodyType::~ByBigTeamHasBodyType(data::ByBigTeamHasBodyType *const this)
{
  data::ByBigTeamHasBodyType::~ByBigTeamHasBodyType(this);
  operator delete(this, 0x48uLL);
};

// Line 2730: range 000000000E6A700E-000000000E6A701E
const char *__cdecl data::ByBigTeamHasBodyType::getTypeName(const data::ByBigTeamHasBodyType *const this)
{
  return "ByBigTeamHasBodyType";
};

// Line 2731: range 000000000E6A7020-000000000E6A71BC
int32_t __cdecl data::ByBigTeamHasBodyType::getHashNum(const data::ByBigTeamHasBodyType *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByBigTeamHasBodyType::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByBigTeamHasBodyType",
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

// Line 2747: range 000000000ED0C3BC-000000000ED0C3FD
void __cdecl data::ByBigTeamHasBodyTypeFactory::ByBigTeamHasBodyTypeFactory(
        data::ByBigTeamHasBodyTypeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByBigTeamHasBodyTypeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByBigTeamHasBodyTypeFactory = v2;
};

// Line 2755: range 000000000ED0C706-000000000ED0C7D7
void __cdecl data::ByBigTeamBodyTypeSort::ByBigTeamBodyTypeSort(data::ByBigTeamBodyTypeSort *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByBigTeamBodyTypeSort + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->number, v1);
  }
  this->number = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->logic, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->logic = Greater_1;
};

// Line 2755: range 000000000ED0CBAC-000000000ED0CCFE
void __cdecl data::ByBigTeamBodyTypeSort::ByBigTeamBodyTypeSort(
        data::ByBigTeamBodyTypeSort *const this,
        const data::ByBigTeamBodyTypeSort *a2)
{
  int (**v2)(...); // rdx
  uint32_t number; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::RelationalOperator logic; // ecx
  char v7; // dl
  const data::ByBigTeamBodyTypeSort *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByBigTeamBodyTypeSort + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->number >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->number >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->number);
  }
  number = a2->number;
  v4 = *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->number, a2);
  }
  this->number = number;
  v5 = (((_BYTE)v8 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->logic >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->logic >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->logic);
  }
  logic = v8->logic;
  v7 = *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->logic, v5);
  }
  this->logic = logic;
};

// Line 2763: range 000000000EDADC48-000000000EDADC95
void __cdecl data::ByBigTeamBodyTypeSort::~ByBigTeamBodyTypeSort(data::ByBigTeamBodyTypeSort *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByBigTeamBodyTypeSort + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 2763: range 000000000EDADC96-000000000EDADCC0
void __cdecl data::ByBigTeamBodyTypeSort::~ByBigTeamBodyTypeSort(data::ByBigTeamBodyTypeSort *const this)
{
  data::ByBigTeamBodyTypeSort::~ByBigTeamBodyTypeSort(this);
  operator delete(this, 0x28uLL);
};

// Line 2768: range 000000000E6A71BE-000000000E6A71CE
const char *__cdecl data::ByBigTeamBodyTypeSort::getTypeName(const data::ByBigTeamBodyTypeSort *const this)
{
  return "ByBigTeamBodyTypeSort";
};

// Line 2769: range 000000000E6A71D0-000000000E6A736C
int32_t __cdecl data::ByBigTeamBodyTypeSort::getHashNum(const data::ByBigTeamBodyTypeSort *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByBigTeamBodyTypeSort::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByBigTeamBodyTypeSort",
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

// Line 2785: range 000000000ED0CF48-000000000ED0CF89
void __cdecl data::ByBigTeamBodyTypeSortFactory::ByBigTeamBodyTypeSortFactory(
        data::ByBigTeamBodyTypeSortFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByBigTeamBodyTypeSortFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByBigTeamBodyTypeSortFactory = v2;
};

// Line 2793: range 000000000ED0D292-000000000ED0D31D
void __cdecl data::ByAttackType::ByAttackType(data::ByAttackType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByAttackType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->attack_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->attack_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->attack_type, v1);
  }
  this->attack_type = None_2;
};

// Line 2793: range 000000000ED0D81E-000000000ED0D8EB
void __cdecl data::ByAttackType::ByAttackType(data::ByAttackType *const this, const data::ByAttackType *a2)
{
  int (**v2)(...); // rdx
  data::AttackType attack_type; // ecx
  char v4; // al

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByAttackType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->attack_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->attack_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->attack_type);
  }
  attack_type = a2->attack_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->attack_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->attack_type, a2);
  }
  this->attack_type = attack_type;
};

// Line 2800: range 000000000EDADBCE-000000000EDADC1B
void __cdecl data::ByAttackType::~ByAttackType(data::ByAttackType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByAttackType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 2800: range 000000000EDADC1C-000000000EDADC46
void __cdecl data::ByAttackType::~ByAttackType(data::ByAttackType *const this)
{
  data::ByAttackType::~ByAttackType(this);
  operator delete(this, 0x28uLL);
};

// Line 2805: range 000000000E6A736E-000000000E6A737E
const char *__cdecl data::ByAttackType::getTypeName(const data::ByAttackType *const this)
{
  return "ByAttackType";
};

// Line 2806: range 000000000E6A7380-000000000E6A751C
int32_t __cdecl data::ByAttackType::getHashNum(const data::ByAttackType *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByAttackType::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByAttackType",
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

// Line 2822: range 000000000ED0DB34-000000000ED0DB75
void __cdecl data::ByAttackTypeFactory::ByAttackTypeFactory(data::ByAttackTypeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByAttackTypeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByAttackTypeFactory = v2;
};

// Line 2843: range 000000000ED0DFDE-000000000ED0E0A9
void __cdecl data::ByCompareWithTarget::ByCompareWithTarget(data::ByCompareWithTarget *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::RelationalOperationPredicate::RelationalOperationPredicate((data::RelationalOperationPredicate *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ByCompareWithTarget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  v3 = ((_BYTE)this + 36) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->use_owner >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->use_owner >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->use_owner, v3, v4);
  this->use_owner = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->property >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->property >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->property, v3);
  }
  this->property = HPRatio;
};

// Line 2843: range 000000000ED0E484-000000000ED0E5D1
void __cdecl data::ByCompareWithTarget::ByCompareWithTarget(
        data::ByCompareWithTarget *const this,
        const data::ByCompareWithTarget *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool use_owner; // cl
  char v6; // dl
  __int64 v7; // rdx
  data::CompareProperty property; // ecx
  char v9; // al

  data::RelationalOperationPredicate::RelationalOperationPredicate(
    (data::RelationalOperationPredicate *const)this,
    (const data::RelationalOperationPredicate *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ByCompareWithTarget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  v3 = ((_BYTE)a2 + 36) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->use_owner >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->use_owner >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->use_owner, v3, v4);
  use_owner = a2->use_owner;
  v6 = *(_BYTE *)(((unsigned __int64)&this->use_owner >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 36) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->use_owner, v3, v7);
  this->use_owner = use_owner;
  if ( *(_BYTE *)(((unsigned __int64)&a2->property >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->property >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->property);
  }
  property = a2->property;
  v9 = *(_BYTE *)(((unsigned __int64)&this->property >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v3) = v9 != 0;
    __asan_report_store4(&this->property, v3);
  }
  this->property = property;
};

// Line 2851: range 000000000EDADB54-000000000EDADBA1
void __cdecl data::ByCompareWithTarget::~ByCompareWithTarget(data::ByCompareWithTarget *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByCompareWithTarget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::RelationalOperationPredicate::~RelationalOperationPredicate((data::RelationalOperationPredicate *const)this);
};

// Line 2851: range 000000000EDADBA2-000000000EDADBCC
void __cdecl data::ByCompareWithTarget::~ByCompareWithTarget(data::ByCompareWithTarget *const this)
{
  data::ByCompareWithTarget::~ByCompareWithTarget(this);
  operator delete(this, 0x30uLL);
};

// Line 2856: range 000000000E6A751E-000000000E6A752E
const char *__cdecl data::ByCompareWithTarget::getTypeName(const data::ByCompareWithTarget *const this)
{
  return "ByCompareWithTarget";
};

// Line 2857: range 000000000E6A7530-000000000E6A76CC
int32_t __cdecl data::ByCompareWithTarget::getHashNum(const data::ByCompareWithTarget *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByCompareWithTarget::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByCompareWithTarget",
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

// Line 2873: range 000000000ED0E81A-000000000ED0E85B
void __cdecl data::ByCompareWithTargetFactory::ByCompareWithTargetFactory(data::ByCompareWithTargetFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByCompareWithTargetFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByCompareWithTargetFactory = v2;
};

// Line 2881: range 000000000ED0EB64-000000000ED0EBEF
void __cdecl data::ByEntityAppearVisionType::ByEntityAppearVisionType(data::ByEntityAppearVisionType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByEntityAppearVisionType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->vision_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->vision_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->vision_type, v1);
  }
  this->vision_type = VisionNone;
};

// Line 2881: range 000000000ED0F0F0-000000000ED0F1BD
void __cdecl data::ByEntityAppearVisionType::ByEntityAppearVisionType(
        data::ByEntityAppearVisionType *const this,
        const data::ByEntityAppearVisionType *a2)
{
  int (**v2)(...); // rdx
  data::EntityAppearVisionType vision_type; // ecx
  char v4; // al

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByEntityAppearVisionType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->vision_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->vision_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->vision_type);
  }
  vision_type = a2->vision_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->vision_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->vision_type, a2);
  }
  this->vision_type = vision_type;
};

// Line 2888: range 000000000EDADB28-000000000EDADB52
void __cdecl data::ByEntityAppearVisionType::~ByEntityAppearVisionType(data::ByEntityAppearVisionType *const this)
{
  data::ByEntityAppearVisionType::~ByEntityAppearVisionType(this);
  operator delete(this, 0x28uLL);
};

// Line 2888: range 000000000EDADADA-000000000EDADB27
void __cdecl data::ByEntityAppearVisionType::~ByEntityAppearVisionType(data::ByEntityAppearVisionType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByEntityAppearVisionType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 2893: range 000000000E6A76CE-000000000E6A76DE
const char *__cdecl data::ByEntityAppearVisionType::getTypeName(const data::ByEntityAppearVisionType *const this)
{
  return "ByEntityAppearVisionType";
};

// Line 2894: range 000000000E6A76E0-000000000E6A787C
int32_t __cdecl data::ByEntityAppearVisionType::getHashNum(const data::ByEntityAppearVisionType *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByEntityAppearVisionType::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByEntityAppearVisionType",
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

// Line 2910: range 000000000ED0F406-000000000ED0F447
void __cdecl data::ByEntityAppearVisionTypeFactory::ByEntityAppearVisionTypeFactory(
        data::ByEntityAppearVisionTypeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByEntityAppearVisionTypeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByEntityAppearVisionTypeFactory = v2;
};

// Line 2918: range 000000000ED0F750-000000000ED0F7E8
void __cdecl data::ByElementTriggerEntityType::ByElementTriggerEntityType(data::ByElementTriggerEntityType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByElementTriggerEntityType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<data::EntityType>::vector(&this->entity_types);
  if ( *(char *)(((unsigned __int64)&this->forceby_origin_owner >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->forceby_origin_owner, v1, &this->forceby_origin_owner);
  this->forceby_origin_owner = 0;
};

// Line 2918: range 000000000ED0FBEE-000000000ED0FCFA
void __cdecl data::ByElementTriggerEntityType::ByElementTriggerEntityType(
        data::ByElementTriggerEntityType *const this,
        const data::ByElementTriggerEntityType *a2)
{
  int (**v2)(...); // rdx
  data::ConfigEntityTypeArray *p_entity_types; // rsi
  bool forceby_origin_owner; // cl
  char v5; // al

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByElementTriggerEntityType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  p_entity_types = &a2->entity_types;
  std::vector<data::EntityType>::vector(&this->entity_types, &a2->entity_types);
  if ( *(char *)(((unsigned __int64)&a2->forceby_origin_owner >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->forceby_origin_owner, p_entity_types, &a2->forceby_origin_owner);
  forceby_origin_owner = a2->forceby_origin_owner;
  v5 = *(_BYTE *)(((unsigned __int64)&this->forceby_origin_owner >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_entity_types) = v5 != 0;
    __asan_report_store1(&this->forceby_origin_owner, p_entity_types, &this->forceby_origin_owner);
  }
  this->forceby_origin_owner = forceby_origin_owner;
};

// Line 2926: range 000000000EDADAAE-000000000EDADAD8
void __cdecl data::ByElementTriggerEntityType::~ByElementTriggerEntityType(
        data::ByElementTriggerEntityType *const this)
{
  data::ByElementTriggerEntityType::~ByElementTriggerEntityType(this);
  operator delete(this, 0x40uLL);
};

// Line 2926: range 000000000EDADA50-000000000EDADAAD
void __cdecl data::ByElementTriggerEntityType::~ByElementTriggerEntityType(
        data::ByElementTriggerEntityType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByElementTriggerEntityType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<data::EntityType>::~vector(&this->entity_types);
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 2931: range 000000000E6A787E-000000000E6A788E
const char *__cdecl data::ByElementTriggerEntityType::getTypeName(const data::ByElementTriggerEntityType *const this)
{
  return "ByElementTriggerEntityType";
};

// Line 2932: range 000000000E6A7890-000000000E6A7A2C
int32_t __cdecl data::ByElementTriggerEntityType::getHashNum(const data::ByElementTriggerEntityType *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByElementTriggerEntityType::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByElementTriggerEntityType",
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

// Line 2948: range 000000000ED0FFE4-000000000ED10025
void __cdecl data::ByElementTriggerEntityTypeFactory::ByElementTriggerEntityTypeFactory(
        data::ByElementTriggerEntityTypeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByElementTriggerEntityTypeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByElementTriggerEntityTypeFactory = v2;
};

// Line 2956: range 000000000ED1032E-000000000ED103B9
void __cdecl data::ByElementReactionSourceType::ByElementReactionSourceType(
        data::ByElementReactionSourceType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByElementReactionSourceType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->source_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->source_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->source_type, v1);
  }
  this->source_type = None_32;
};

// Line 2956: range 000000000ED108BA-000000000ED10987
void __cdecl data::ByElementReactionSourceType::ByElementReactionSourceType(
        data::ByElementReactionSourceType *const this,
        const data::ByElementReactionSourceType *a2)
{
  int (**v2)(...); // rdx
  data::ElementReactionSourceType source_type; // ecx
  char v4; // al

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByElementReactionSourceType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->source_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->source_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->source_type);
  }
  source_type = a2->source_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->source_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->source_type, a2);
  }
  this->source_type = source_type;
};

// Line 2963: range 000000000EDADA24-000000000EDADA4E
void __cdecl data::ByElementReactionSourceType::~ByElementReactionSourceType(
        data::ByElementReactionSourceType *const this)
{
  data::ByElementReactionSourceType::~ByElementReactionSourceType(this);
  operator delete(this, 0x28uLL);
};

// Line 2963: range 000000000EDAD9D6-000000000EDADA23
void __cdecl data::ByElementReactionSourceType::~ByElementReactionSourceType(
        data::ByElementReactionSourceType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByElementReactionSourceType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 2968: range 000000000E6A7A2E-000000000E6A7A3E
const char *__cdecl data::ByElementReactionSourceType::getTypeName(const data::ByElementReactionSourceType *const this)
{
  return "ByElementReactionSourceType";
};

// Line 2969: range 000000000E6A7A40-000000000E6A7BDC
int32_t __cdecl data::ByElementReactionSourceType::getHashNum(const data::ByElementReactionSourceType *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByElementReactionSourceType::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByElementReactionSourceType",
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

// Line 2985: range 000000000ED10BD0-000000000ED10C11
void __cdecl data::ByElementReactionSourceTypeFactory::ByElementReactionSourceTypeFactory(
        data::ByElementReactionSourceTypeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByElementReactionSourceTypeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByElementReactionSourceTypeFactory = v2;
};

// Line 2993: range 000000000ED10F1A-000000000ED10FA5
void __cdecl data::ByElementReactionType::ByElementReactionType(data::ByElementReactionType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByElementReactionType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->reaction_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reaction_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reaction_type, v1);
  }
  this->reaction_type = None_4;
};

// Line 2993: range 000000000ED114A6-000000000ED11573
void __cdecl data::ByElementReactionType::ByElementReactionType(
        data::ByElementReactionType *const this,
        const data::ByElementReactionType *a2)
{
  int (**v2)(...); // rdx
  data::ElementReactionType reaction_type; // ecx
  char v4; // al

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByElementReactionType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->reaction_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->reaction_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->reaction_type);
  }
  reaction_type = a2->reaction_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->reaction_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->reaction_type, a2);
  }
  this->reaction_type = reaction_type;
};

// Line 3000: range 000000000EDAD95C-000000000EDAD9A9
void __cdecl data::ByElementReactionType::~ByElementReactionType(data::ByElementReactionType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByElementReactionType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 3000: range 000000000EDAD9AA-000000000EDAD9D4
void __cdecl data::ByElementReactionType::~ByElementReactionType(data::ByElementReactionType *const this)
{
  data::ByElementReactionType::~ByElementReactionType(this);
  operator delete(this, 0x28uLL);
};

// Line 3005: range 000000000E6A7BDE-000000000E6A7BEE
const char *__cdecl data::ByElementReactionType::getTypeName(const data::ByElementReactionType *const this)
{
  return "ByElementReactionType";
};

// Line 3006: range 000000000E6A7BF0-000000000E6A7D8C
int32_t __cdecl data::ByElementReactionType::getHashNum(const data::ByElementReactionType *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByElementReactionType::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByElementReactionType",
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

// Line 3022: range 000000000ED117BC-000000000ED117FD
void __cdecl data::ByElementReactionTypeFactory::ByElementReactionTypeFactory(
        data::ByElementReactionTypeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByElementReactionTypeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByElementReactionTypeFactory = v2;
};

// Line 3030: range 000000000ED11B06-000000000ED11B63
void __cdecl data::ByTargetConfigID::ByTargetConfigID(data::ByTargetConfigID *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetConfigID + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<unsigned int>::vector(&this->config_id_array);
};

// Line 3030: range 000000000ED11F58-000000000ED11FEE
void __cdecl data::ByTargetConfigID::ByTargetConfigID(
        data::ByTargetConfigID *const this,
        const data::ByTargetConfigID *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetConfigID + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<unsigned int>::vector(&this->config_id_array, &a2->config_id_array);
};

// Line 3037: range 000000000EDAD8D2-000000000EDAD92F
void __cdecl data::ByTargetConfigID::~ByTargetConfigID(data::ByTargetConfigID *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetConfigID + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<unsigned int>::~vector(&this->config_id_array);
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 3037: range 000000000EDAD930-000000000EDAD95A
void __cdecl data::ByTargetConfigID::~ByTargetConfigID(data::ByTargetConfigID *const this)
{
  data::ByTargetConfigID::~ByTargetConfigID(this);
  operator delete(this, 0x38uLL);
};

// Line 3042: range 000000000E6A7D8E-000000000E6A7D9E
const char *__cdecl data::ByTargetConfigID::getTypeName(const data::ByTargetConfigID *const this)
{
  return "ByTargetConfigID";
};

// Line 3043: range 000000000E6A7DA0-000000000E6A7F3C
int32_t __cdecl data::ByTargetConfigID::getHashNum(const data::ByTargetConfigID *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByTargetConfigID::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByTargetConfigID",
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

// Line 3059: range 000000000ED122D8-000000000ED12319
void __cdecl data::ByTargetConfigIDFactory::ByTargetConfigIDFactory(data::ByTargetConfigIDFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetConfigIDFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByTargetConfigIDFactory = v2;
};

// Line 3067: range 000000000ED12622-000000000ED1266F
void __cdecl data::ByIsLocalAvatar::ByIsLocalAvatar(data::ByIsLocalAvatar *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByIsLocalAvatar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 3067: range 000000000ED12B00-000000000ED12B58
void __cdecl data::ByIsLocalAvatar::ByIsLocalAvatar(data::ByIsLocalAvatar *const this, const data::ByIsLocalAvatar *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByIsLocalAvatar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 3073: range 000000000EDAD858-000000000EDAD8A5
void __cdecl data::ByIsLocalAvatar::~ByIsLocalAvatar(data::ByIsLocalAvatar *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByIsLocalAvatar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 3073: range 000000000EDAD8A6-000000000EDAD8D0
void __cdecl data::ByIsLocalAvatar::~ByIsLocalAvatar(data::ByIsLocalAvatar *const this)
{
  data::ByIsLocalAvatar::~ByIsLocalAvatar(this);
  operator delete(this, 0x20uLL);
};

// Line 3078: range 000000000E6A7F3E-000000000E6A7F4E
const char *__cdecl data::ByIsLocalAvatar::getTypeName(const data::ByIsLocalAvatar *const this)
{
  return "ByIsLocalAvatar";
};

// Line 3079: range 000000000E6A7F50-000000000E6A80EC
int32_t __cdecl data::ByIsLocalAvatar::getHashNum(const data::ByIsLocalAvatar *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByIsLocalAvatar::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByIsLocalAvatar",
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

// Line 3095: range 000000000ED12DA2-000000000ED12DE3
void __cdecl data::ByIsLocalAvatarFactory::ByIsLocalAvatarFactory(data::ByIsLocalAvatarFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByIsLocalAvatarFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByIsLocalAvatarFactory = v2;
};

// Line 3103: range 000000000ED130EC-000000000ED13177
void __cdecl data::ByTargetGadgetState::ByTargetGadgetState(data::ByTargetGadgetState *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetGadgetState + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_state, v1);
  }
  this->gadget_state = 0;
};

// Line 3103: range 000000000ED13678-000000000ED13745
void __cdecl data::ByTargetGadgetState::ByTargetGadgetState(
        data::ByTargetGadgetState *const this,
        const data::ByTargetGadgetState *a2)
{
  int (**v2)(...); // rdx
  uint32_t gadget_state; // ecx
  char v4; // al

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetGadgetState + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gadget_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->gadget_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->gadget_state);
  }
  gadget_state = a2->gadget_state;
  v4 = *(_BYTE *)(((unsigned __int64)&this->gadget_state >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->gadget_state, a2);
  }
  this->gadget_state = gadget_state;
};

// Line 3110: range 000000000EDAD82C-000000000EDAD856
void __cdecl data::ByTargetGadgetState::~ByTargetGadgetState(data::ByTargetGadgetState *const this)
{
  data::ByTargetGadgetState::~ByTargetGadgetState(this);
  operator delete(this, 0x28uLL);
};

// Line 3110: range 000000000EDAD7DE-000000000EDAD82B
void __cdecl data::ByTargetGadgetState::~ByTargetGadgetState(data::ByTargetGadgetState *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetGadgetState + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 3115: range 000000000E6A80EE-000000000E6A80FE
const char *__cdecl data::ByTargetGadgetState::getTypeName(const data::ByTargetGadgetState *const this)
{
  return "ByTargetGadgetState";
};

// Line 3116: range 000000000E6A8100-000000000E6A829C
int32_t __cdecl data::ByTargetGadgetState::getHashNum(const data::ByTargetGadgetState *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByTargetGadgetState::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByTargetGadgetState",
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

// Line 3132: range 000000000ED1398E-000000000ED139CF
void __cdecl data::ByTargetGadgetStateFactory::ByTargetGadgetStateFactory(data::ByTargetGadgetStateFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetGadgetStateFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByTargetGadgetStateFactory = v2;
};

// Line 3140: range 000000000ED13CD8-000000000ED13D63
void __cdecl data::ByDieStateFlag::ByDieStateFlag(data::ByDieStateFlag *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByDieStateFlag + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->die_state_flag >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->die_state_flag >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->die_state_flag, v1);
  }
  this->die_state_flag = None_33;
};

// Line 3140: range 000000000ED14264-000000000ED14331
void __cdecl data::ByDieStateFlag::ByDieStateFlag(data::ByDieStateFlag *const this, const data::ByDieStateFlag *a2)
{
  int (**v2)(...); // rdx
  data::DieStateFlag die_state_flag; // ecx
  char v4; // al

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByDieStateFlag + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->die_state_flag >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->die_state_flag >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->die_state_flag);
  }
  die_state_flag = a2->die_state_flag;
  v4 = *(_BYTE *)(((unsigned __int64)&this->die_state_flag >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->die_state_flag, a2);
  }
  this->die_state_flag = die_state_flag;
};

// Line 3147: range 000000000EDAD764-000000000EDAD7B1
void __cdecl data::ByDieStateFlag::~ByDieStateFlag(data::ByDieStateFlag *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByDieStateFlag + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 3147: range 000000000EDAD7B2-000000000EDAD7DC
void __cdecl data::ByDieStateFlag::~ByDieStateFlag(data::ByDieStateFlag *const this)
{
  data::ByDieStateFlag::~ByDieStateFlag(this);
  operator delete(this, 0x28uLL);
};

// Line 3152: range 000000000E6A829E-000000000E6A82AE
const char *__cdecl data::ByDieStateFlag::getTypeName(const data::ByDieStateFlag *const this)
{
  return "ByDieStateFlag";
};

// Line 3153: range 000000000E6A82B0-000000000E6A844C
int32_t __cdecl data::ByDieStateFlag::getHashNum(const data::ByDieStateFlag *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByDieStateFlag::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByDieStateFlag",
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

// Line 3169: range 000000000ED1457A-000000000ED145BB
void __cdecl data::ByDieStateFlagFactory::ByDieStateFlagFactory(data::ByDieStateFlagFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByDieStateFlagFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByDieStateFlagFactory = v2;
};

// Line 3193: range 000000000ED14A24-000000000ED14B2D
void __cdecl data::ByHasShield::ByHasShield(data::ByHasShield *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByHasShield + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = EliteShield;
  v3 = ((_BYTE)this + 36) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->use_potent_shield >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->use_potent_shield >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->use_potent_shield, v3, v4);
  this->use_potent_shield = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->potent_shield_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->potent_shield_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->potent_shield_type, v3);
  }
  this->potent_shield_type = None_0;
};

// Line 3193: range 000000000ED14F08-000000000ED150CA
void __cdecl data::ByHasShield::ByHasShield(data::ByHasShield *const this, const data::ByHasShield *a2)
{
  int (**v2)(...); // rdx
  data::HasShieldType type; // ecx
  char v4; // al
  __int64 v5; // rsi
  __int64 v6; // rdx
  bool use_potent_shield; // cl
  char v8; // dl
  __int64 v9; // rdx
  data::ElementType potent_shield_type; // ecx
  char v11; // al
  const data::ByHasShield *v12; // [rsp+0h] [rbp-10h]

  v12 = a2;
  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByHasShield + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
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
  v5 = ((_BYTE)v12 + 36) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&v12->use_potent_shield >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&v12->use_potent_shield >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&v12->use_potent_shield, v5, v6);
  use_potent_shield = v12->use_potent_shield;
  v8 = *(_BYTE *)(((unsigned __int64)&this->use_potent_shield >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((((unsigned __int8)this + 36) & 7) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->use_potent_shield, v5, v9);
  this->use_potent_shield = use_potent_shield;
  if ( *(_BYTE *)(((unsigned __int64)&v12->potent_shield_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v12->potent_shield_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v12->potent_shield_type);
  }
  potent_shield_type = v12->potent_shield_type;
  v11 = *(_BYTE *)(((unsigned __int64)&this->potent_shield_type >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(v5) = v11 != 0;
    __asan_report_store4(&this->potent_shield_type, v5);
  }
  this->potent_shield_type = potent_shield_type;
};

// Line 3202: range 000000000ED15314-000000000ED15361
void __cdecl data::ByHasShield::~ByHasShield(data::ByHasShield *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHasShield + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 3202: range 000000000ED15362-000000000ED1538C
void __cdecl data::ByHasShield::~ByHasShield(data::ByHasShield *const this)
{
  data::ByHasShield::~ByHasShield(this);
  operator delete(this, 0x30uLL);
};

// Line 3207: range 000000000E6A844E-000000000E6A845E
const char *__cdecl data::ByHasShield::getTypeName(const data::ByHasShield *const this)
{
  return "ByHasShield";
};

// Line 3208: range 000000000E6A8460-000000000E6A85FC
int32_t __cdecl data::ByHasShield::getHashNum(const data::ByHasShield *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByHasShield::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByHasShield",
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

// Line 3227: range 000000000ED1538E-000000000ED153DB
void __cdecl data::ByHasShieldV2::ByHasShieldV2(data::ByHasShieldV2 *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ByHasShield::ByHasShield(this);
  v2 = (int (**)(...))(&`vtable for'data::ByHasShieldV2 + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 3227: range 000000000ED157B6-000000000ED1580E
void __cdecl data::ByHasShieldV2::ByHasShieldV2(data::ByHasShieldV2 *const this, const data::ByHasShieldV2 *a2)
{
  int (**v2)(...); // rdx

  data::ByHasShield::ByHasShield(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByHasShieldV2 + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 3233: range 000000000EDAD6EA-000000000EDAD737
void __cdecl data::ByHasShieldV2::~ByHasShieldV2(data::ByHasShieldV2 *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHasShieldV2 + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ByHasShield::~ByHasShield(this);
};

// Line 3233: range 000000000EDAD738-000000000EDAD762
void __cdecl data::ByHasShieldV2::~ByHasShieldV2(data::ByHasShieldV2 *const this)
{
  data::ByHasShieldV2::~ByHasShieldV2(this);
  operator delete(this, 0x30uLL);
};

// Line 3238: range 000000000E6A85FE-000000000E6A860E
const char *__cdecl data::ByHasShieldV2::getTypeName(const data::ByHasShieldV2 *const this)
{
  return "ByHasShieldV2";
};

// Line 3239: range 000000000E6A8610-000000000E6A87AC
int32_t __cdecl data::ByHasShieldV2::getHashNum(const data::ByHasShieldV2 *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByHasShieldV2::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByHasShieldV2",
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

// Line 3255: range 000000000ED15A58-000000000ED15A99
void __cdecl data::ByHasShieldV2Factory::ByHasShieldV2Factory(data::ByHasShieldV2Factory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHasShieldV2Factory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByHasShieldV2Factory = v2;
};

// Line 3263: range 000000000ED15DA2-000000000ED15E6D
void __cdecl data::ByHasShieldBar::ByHasShieldBar(data::ByHasShieldBar *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate((data::ConfigAbilityPredicate *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ByHasShieldBar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  v3 = ((_BYTE)this + 29) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->use_potent_shield >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->use_potent_shield >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->use_potent_shield, v3, v4);
  this->use_potent_shield = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->potent_shield_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->potent_shield_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->potent_shield_type, v3);
  }
  this->potent_shield_type = None_0;
};

// Line 3263: range 000000000ED16242-000000000ED1638F
void __cdecl data::ByHasShieldBar::ByHasShieldBar(data::ByHasShieldBar *const this, const data::ByHasShieldBar *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool use_potent_shield; // cl
  char v6; // dl
  __int64 v7; // rdx
  data::ElementType potent_shield_type; // ecx
  char v9; // al

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(
    (data::ConfigAbilityPredicate *const)this,
    (const data::ConfigAbilityPredicate *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ByHasShieldBar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  v3 = ((_BYTE)a2 + 29) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->use_potent_shield >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->use_potent_shield >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->use_potent_shield, v3, v4);
  use_potent_shield = a2->use_potent_shield;
  v6 = *(_BYTE *)(((unsigned __int64)&this->use_potent_shield >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 29) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->use_potent_shield, v3, v7);
  this->use_potent_shield = use_potent_shield;
  if ( *(_BYTE *)(((unsigned __int64)&a2->potent_shield_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->potent_shield_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->potent_shield_type);
  }
  potent_shield_type = a2->potent_shield_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->potent_shield_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v3) = v9 != 0;
    __asan_report_store4(&this->potent_shield_type, v3);
  }
  this->potent_shield_type = potent_shield_type;
};

// Line 3271: range 000000000EDAD670-000000000EDAD6BD
void __cdecl data::ByHasShieldBar::~ByHasShieldBar(data::ByHasShieldBar *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHasShieldBar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate((data::ConfigAbilityPredicate *const)this);
};

// Line 3271: range 000000000EDAD6BE-000000000EDAD6E8
void __cdecl data::ByHasShieldBar::~ByHasShieldBar(data::ByHasShieldBar *const this)
{
  data::ByHasShieldBar::~ByHasShieldBar(this);
  operator delete(this, 0x28uLL);
};

// Line 3276: range 000000000E6A87AE-000000000E6A87BE
const char *__cdecl data::ByHasShieldBar::getTypeName(const data::ByHasShieldBar *const this)
{
  return "ByHasShieldBar";
};

// Line 3277: range 000000000E6A87C0-000000000E6A895C
int32_t __cdecl data::ByHasShieldBar::getHashNum(const data::ByHasShieldBar *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByHasShieldBar::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByHasShieldBar",
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

// Line 3293: range 000000000ED165D8-000000000ED16619
void __cdecl data::ByHasShieldBarFactory::ByHasShieldBarFactory(data::ByHasShieldBarFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHasShieldBarFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByHasShieldBarFactory = v2;
};

// Line 3301: range 000000000ED16922-000000000ED169CA
void __cdecl data::ByGlobalPosToGround::ByGlobalPosToGround(data::ByGlobalPosToGround *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::RelationalOperationPredicate::RelationalOperationPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByGlobalPosToGround + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::string::basic_string(&this->global_pos);
  data::DynamicFloat::DynamicFloat(&this->to_ground_height);
  if ( *(char *)(((unsigned __int64)&this->to_water >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->to_water, v1, &this->to_water);
  this->to_water = 0;
};

// Line 3301: range 000000000ED16D76-000000000ED16EB2
void __cdecl data::ByGlobalPosToGround::ByGlobalPosToGround(
        data::ByGlobalPosToGround *const this,
        const data::ByGlobalPosToGround *a2)
{
  int (**v2)(...); // rdx
  data::DynamicFloat *p_to_ground_height; // rsi
  bool to_water; // cl
  char v5; // al

  data::RelationalOperationPredicate::RelationalOperationPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByGlobalPosToGround + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::string::basic_string(&this->global_pos, &a2->global_pos);
  p_to_ground_height = &a2->to_ground_height;
  data::DynamicFloat::DynamicFloat(&this->to_ground_height, &a2->to_ground_height);
  if ( *(char *)(((unsigned __int64)&a2->to_water >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->to_water, p_to_ground_height, &a2->to_water);
  to_water = a2->to_water;
  v5 = *(_BYTE *)(((unsigned __int64)&this->to_water >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_to_ground_height) = v5 != 0;
    __asan_report_store1(&this->to_water, p_to_ground_height, &this->to_water);
  }
  this->to_water = to_water;
};

// Line 3310: range 000000000EDAD644-000000000EDAD66E
void __cdecl data::ByGlobalPosToGround::~ByGlobalPosToGround(data::ByGlobalPosToGround *const this)
{
  data::ByGlobalPosToGround::~ByGlobalPosToGround(this);
  operator delete(this, 0x70uLL);
};

// Line 3310: range 000000000EDAD5D6-000000000EDAD643
void __cdecl data::ByGlobalPosToGround::~ByGlobalPosToGround(data::ByGlobalPosToGround *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByGlobalPosToGround + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicFloat::~DynamicFloat(&this->to_ground_height);
  std::string::~string(&this->global_pos);
  data::RelationalOperationPredicate::~RelationalOperationPredicate(this);
};

// Line 3315: range 000000000E6A895E-000000000E6A896E
const char *__cdecl data::ByGlobalPosToGround::getTypeName(const data::ByGlobalPosToGround *const this)
{
  return "ByGlobalPosToGround";
};

// Line 3316: range 000000000E6A8970-000000000E6A8B0C
int32_t __cdecl data::ByGlobalPosToGround::getHashNum(const data::ByGlobalPosToGround *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByGlobalPosToGround::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByGlobalPosToGround",
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

// Line 3332: range 000000000ED1719C-000000000ED171DD
void __cdecl data::ByGlobalPosToGroundFactory::ByGlobalPosToGroundFactory(data::ByGlobalPosToGroundFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByGlobalPosToGroundFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByGlobalPosToGroundFactory = v2;
};

// Line 3340: range 000000000ED174E6-000000000ED17571
void __cdecl data::ByEquipAffixReady::ByEquipAffixReady(data::ByEquipAffixReady *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByEquipAffixReady + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->equip_affix_data_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->equip_affix_data_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->equip_affix_data_id, v1);
  }
  this->equip_affix_data_id = 0;
};

// Line 3340: range 000000000ED17A72-000000000ED17B3F
void __cdecl data::ByEquipAffixReady::ByEquipAffixReady(
        data::ByEquipAffixReady *const this,
        const data::ByEquipAffixReady *a2)
{
  int (**v2)(...); // rdx
  uint32_t equip_affix_data_id; // ecx
  char v4; // al

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByEquipAffixReady + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->equip_affix_data_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->equip_affix_data_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->equip_affix_data_id);
  }
  equip_affix_data_id = a2->equip_affix_data_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->equip_affix_data_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->equip_affix_data_id, a2);
  }
  this->equip_affix_data_id = equip_affix_data_id;
};

// Line 3347: range 000000000EDAD55C-000000000EDAD5A9
void __cdecl data::ByEquipAffixReady::~ByEquipAffixReady(data::ByEquipAffixReady *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByEquipAffixReady + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 3347: range 000000000EDAD5AA-000000000EDAD5D4
void __cdecl data::ByEquipAffixReady::~ByEquipAffixReady(data::ByEquipAffixReady *const this)
{
  data::ByEquipAffixReady::~ByEquipAffixReady(this);
  operator delete(this, 0x28uLL);
};

// Line 3352: range 000000000E6A8B0E-000000000E6A8B1E
const char *__cdecl data::ByEquipAffixReady::getTypeName(const data::ByEquipAffixReady *const this)
{
  return "ByEquipAffixReady";
};

// Line 3353: range 000000000E6A8B20-000000000E6A8CBC
int32_t __cdecl data::ByEquipAffixReady::getHashNum(const data::ByEquipAffixReady *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByEquipAffixReady::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByEquipAffixReady",
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

// Line 3369: range 000000000ED17D88-000000000ED17DC9
void __cdecl data::ByEquipAffixReadyFactory::ByEquipAffixReadyFactory(data::ByEquipAffixReadyFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByEquipAffixReadyFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByEquipAffixReadyFactory = v2;
};

// Line 3392: range 000000000ED18232-000000000ED182CD
void __cdecl data::ByTargetInArea::ByTargetInArea(data::ByTargetInArea *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetInArea + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->area_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->area_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->area_level, v1);
  }
  this->area_level = City;
  std::vector<unsigned int>::vector(&this->areas);
};

// Line 3392: range 000000000ED186D2-000000000ED187DD
void __cdecl data::ByTargetInArea::ByTargetInArea(data::ByTargetInArea *const this, const data::ByTargetInArea *a2)
{
  int (**v2)(...); // rdx
  data::TargetPositionAreaLevel area_level; // ecx
  char v4; // al
  const data::ByTargetInArea *v5; // [rsp+0h] [rbp-20h]

  v5 = a2;
  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetInArea + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->area_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->area_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->area_level);
  }
  area_level = a2->area_level;
  v4 = *(_BYTE *)(((unsigned __int64)&this->area_level >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->area_level, a2);
  }
  this->area_level = area_level;
  std::vector<unsigned int>::vector(&this->areas, &v5->areas);
};

// Line 3400: range 000000000EDAD530-000000000EDAD55A
void __cdecl data::ByTargetInArea::~ByTargetInArea(data::ByTargetInArea *const this)
{
  data::ByTargetInArea::~ByTargetInArea(this);
  operator delete(this, 0x40uLL);
};

// Line 3400: range 000000000EDAD4D2-000000000EDAD52F
void __cdecl data::ByTargetInArea::~ByTargetInArea(data::ByTargetInArea *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetInArea + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<unsigned int>::~vector(&this->areas);
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 3405: range 000000000E6A8CBE-000000000E6A8CCE
const char *__cdecl data::ByTargetInArea::getTypeName(const data::ByTargetInArea *const this)
{
  return "ByTargetInArea";
};

// Line 3406: range 000000000E6A8CD0-000000000E6A8E6C
int32_t __cdecl data::ByTargetInArea::getHashNum(const data::ByTargetInArea *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByTargetInArea::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByTargetInArea",
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

// Line 3422: range 000000000ED18AC6-000000000ED18B07
void __cdecl data::ByTargetInAreaFactory::ByTargetInAreaFactory(data::ByTargetInAreaFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetInAreaFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByTargetInAreaFactory = v2;
};

// Line 3430: range 000000000ED18E10-000000000ED18EE1
void __cdecl data::ByIsTargetCamp::ByIsTargetCamp(data::ByIsTargetCamp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByIsTargetCamp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_base_on >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->camp_base_on >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->camp_base_on, v1);
  }
  this->camp_base_on = Self_0;
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_target_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camp_target_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->camp_target_type, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->camp_target_type = None_22;
};

// Line 3430: range 000000000ED192B6-000000000ED19408
void __cdecl data::ByIsTargetCamp::ByIsTargetCamp(data::ByIsTargetCamp *const this, const data::ByIsTargetCamp *a2)
{
  int (**v2)(...); // rdx
  data::AbilityTargetting camp_base_on; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::TargetType camp_target_type; // ecx
  char v7; // dl
  const data::ByIsTargetCamp *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByIsTargetCamp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->camp_base_on >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->camp_base_on >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->camp_base_on);
  }
  camp_base_on = a2->camp_base_on;
  v4 = *(_BYTE *)(((unsigned __int64)&this->camp_base_on >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->camp_base_on, a2);
  }
  this->camp_base_on = camp_base_on;
  v5 = (((_BYTE)v8 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->camp_target_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->camp_target_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->camp_target_type);
  }
  camp_target_type = v8->camp_target_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->camp_target_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->camp_target_type, v5);
  }
  this->camp_target_type = camp_target_type;
};

// Line 3438: range 000000000EDAD458-000000000EDAD4A5
void __cdecl data::ByIsTargetCamp::~ByIsTargetCamp(data::ByIsTargetCamp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByIsTargetCamp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 3438: range 000000000EDAD4A6-000000000EDAD4D0
void __cdecl data::ByIsTargetCamp::~ByIsTargetCamp(data::ByIsTargetCamp *const this)
{
  data::ByIsTargetCamp::~ByIsTargetCamp(this);
  operator delete(this, 0x28uLL);
};

// Line 3443: range 000000000E6A8E6E-000000000E6A8E7E
const char *__cdecl data::ByIsTargetCamp::getTypeName(const data::ByIsTargetCamp *const this)
{
  return "ByIsTargetCamp";
};

// Line 3444: range 000000000E6A8E80-000000000E6A901C
int32_t __cdecl data::ByIsTargetCamp::getHashNum(const data::ByIsTargetCamp *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByIsTargetCamp::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByIsTargetCamp",
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

// Line 3460: range 000000000ED19652-000000000ED19693
void __cdecl data::ByIsTargetCampFactory::ByIsTargetCampFactory(data::ByIsTargetCampFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByIsTargetCampFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByIsTargetCampFactory = v2;
};

// Line 3468: range 000000000ED1999C-000000000ED19AF8
void __cdecl data::ByHasChildGadget::ByHasChildGadget(data::ByHasChildGadget *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByHasChildGadget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<unsigned int>::vector(&this->config_id_array);
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, v1);
  }
  this->value = 0;
  v3 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->compare_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->compare_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->compare_type, v3);
  }
  this->compare_type = Equal_2;
  if ( *(char *)(((unsigned __int64)&this->force_by_caster >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->force_by_caster, v3, &this->force_by_caster);
  this->force_by_caster = 0;
  v4 = ((_BYTE)this + 65) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->check_entity_alive >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->check_entity_alive >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->check_entity_alive, v4, v5);
  this->check_entity_alive = 0;
};

// Line 3468: range 000000000ED19F14-000000000ED1A19A
void __cdecl data::ByHasChildGadget::ByHasChildGadget(
        data::ByHasChildGadget *const this,
        const data::ByHasChildGadget *a2)
{
  int (**v2)(...); // rdx
  data::UInt32Array *p_config_id_array; // rsi
  uint32_t value; // ecx
  char v5; // al
  __int64 v6; // rsi
  data::RelationType compare_type; // ecx
  char v8; // dl
  bool force_by_caster; // cl
  char v10; // al
  __int64 v11; // rsi
  __int64 v12; // rdx
  bool check_entity_alive; // cl
  char v14; // dl
  __int64 v15; // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByHasChildGadget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  p_config_id_array = &a2->config_id_array;
  std::vector<unsigned int>::vector(&this->config_id_array, &a2->config_id_array);
  if ( *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  v5 = *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_config_id_array) = v5 != 0;
    __asan_report_store4(&this->value, p_config_id_array);
  }
  this->value = value;
  v6 = (((_BYTE)a2 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->compare_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->compare_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->compare_type);
  }
  compare_type = a2->compare_type;
  v8 = *(_BYTE *)(((unsigned __int64)&this->compare_type >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v8 != 0;
  if ( v8 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v8 )
    __asan_report_store4(&this->compare_type, v6);
  this->compare_type = compare_type;
  if ( *(char *)(((unsigned __int64)&a2->force_by_caster >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->force_by_caster, v6, &a2->force_by_caster);
  force_by_caster = a2->force_by_caster;
  v10 = *(_BYTE *)(((unsigned __int64)&this->force_by_caster >> 3) + 0x7FFF8000);
  if ( v10 < 0 )
  {
    LOBYTE(v6) = v10 != 0;
    __asan_report_store1(&this->force_by_caster, v6, &this->force_by_caster);
  }
  this->force_by_caster = force_by_caster;
  v11 = ((_BYTE)a2 + 65) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&a2->check_entity_alive >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&a2->check_entity_alive >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_load1(&a2->check_entity_alive, v11, v12);
  check_entity_alive = a2->check_entity_alive;
  v14 = *(_BYTE *)(((unsigned __int64)&this->check_entity_alive >> 3) + 0x7FFF8000);
  LOBYTE(v11) = v14 != 0;
  v15 = (v14 != 0) & (unsigned __int8)((((unsigned __int8)this + 65) & 7) >= v14);
  if ( (_BYTE)v15 )
    __asan_report_store1(&this->check_entity_alive, v11, v15);
  this->check_entity_alive = check_entity_alive;
};

// Line 3479: range 000000000EDAD3CE-000000000EDAD42B
void __cdecl data::ByHasChildGadget::~ByHasChildGadget(data::ByHasChildGadget *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHasChildGadget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<unsigned int>::~vector(&this->config_id_array);
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 3479: range 000000000EDAD42C-000000000EDAD456
void __cdecl data::ByHasChildGadget::~ByHasChildGadget(data::ByHasChildGadget *const this)
{
  data::ByHasChildGadget::~ByHasChildGadget(this);
  operator delete(this, 0x48uLL);
};

// Line 3484: range 000000000E6A901E-000000000E6A902E
const char *__cdecl data::ByHasChildGadget::getTypeName(const data::ByHasChildGadget *const this)
{
  return "ByHasChildGadget";
};

// Line 3485: range 000000000E6A9030-000000000E6A91CC
int32_t __cdecl data::ByHasChildGadget::getHashNum(const data::ByHasChildGadget *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByHasChildGadget::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByHasChildGadget",
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

// Line 3501: range 000000000ED1A484-000000000ED1A4C5
void __cdecl data::ByHasChildGadgetFactory::ByHasChildGadgetFactory(data::ByHasChildGadgetFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHasChildGadgetFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByHasChildGadgetFactory = v2;
};

// Line 3509: range 000000000ED1A7CE-000000000ED1A8DD
void __cdecl data::ByTargetLayoutArea::ByTargetLayoutArea(data::ByTargetLayoutArea *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetLayoutArea + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->area_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->area_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->area_type, v1);
  }
  this->area_type = Normal;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->climate_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->climate_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->climate_type, v3);
  }
  this->climate_type = Normal;
  if ( *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->area_id, v3);
  }
  this->area_id = 0;
};

// Line 3509: range 000000000ED1ACB8-000000000ED1AE7F
void __cdecl data::ByTargetLayoutArea::ByTargetLayoutArea(
        data::ByTargetLayoutArea *const this,
        const data::ByTargetLayoutArea *a2)
{
  int (**v2)(...); // rdx
  data::JsonClimateType area_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::JsonClimateType climate_type; // ecx
  char v7; // dl
  uint32_t area_id; // ecx
  char v9; // al
  const data::ByTargetLayoutArea *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetLayoutArea + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->area_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->area_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->area_type);
  }
  area_type = a2->area_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->area_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->area_type, a2);
  }
  this->area_type = area_type;
  v5 = (((_BYTE)v10 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->climate_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->climate_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->climate_type);
  }
  climate_type = v10->climate_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->climate_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->climate_type, v5);
  }
  this->climate_type = climate_type;
  if ( *(_BYTE *)(((unsigned __int64)&v10->area_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->area_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->area_id);
  }
  area_id = v10->area_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->area_id, v5);
  }
  this->area_id = area_id;
};

// Line 3518: range 000000000EDAD3A2-000000000EDAD3CC
void __cdecl data::ByTargetLayoutArea::~ByTargetLayoutArea(data::ByTargetLayoutArea *const this)
{
  data::ByTargetLayoutArea::~ByTargetLayoutArea(this);
  operator delete(this, 0x30uLL);
};

// Line 3518: range 000000000EDAD354-000000000EDAD3A1
void __cdecl data::ByTargetLayoutArea::~ByTargetLayoutArea(data::ByTargetLayoutArea *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetLayoutArea + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 3523: range 000000000E6A91CE-000000000E6A91DE
const char *__cdecl data::ByTargetLayoutArea::getTypeName(const data::ByTargetLayoutArea *const this)
{
  return "ByTargetLayoutArea";
};

// Line 3524: range 000000000E6A91E0-000000000E6A937C
int32_t __cdecl data::ByTargetLayoutArea::getHashNum(const data::ByTargetLayoutArea *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByTargetLayoutArea::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByTargetLayoutArea",
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

// Line 3540: range 000000000ED1B0C8-000000000ED1B109
void __cdecl data::ByTargetLayoutAreaFactory::ByTargetLayoutAreaFactory(data::ByTargetLayoutAreaFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetLayoutAreaFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByTargetLayoutAreaFactory = v2;
};

// Line 3548: range 000000000ED1B412-000000000ED1B49D
void __cdecl data::ByPlayerClimateType::ByPlayerClimateType(data::ByPlayerClimateType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByPlayerClimateType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->climate_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->climate_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->climate_type, v1);
  }
  this->climate_type = Normal;
};

// Line 3548: range 000000000ED1B99E-000000000ED1BA6B
void __cdecl data::ByPlayerClimateType::ByPlayerClimateType(
        data::ByPlayerClimateType *const this,
        const data::ByPlayerClimateType *a2)
{
  int (**v2)(...); // rdx
  data::JsonClimateType climate_type; // ecx
  char v4; // al

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByPlayerClimateType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->climate_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->climate_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->climate_type);
  }
  climate_type = a2->climate_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->climate_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->climate_type, a2);
  }
  this->climate_type = climate_type;
};

// Line 3555: range 000000000EDAD2DA-000000000EDAD327
void __cdecl data::ByPlayerClimateType::~ByPlayerClimateType(data::ByPlayerClimateType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByPlayerClimateType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 3555: range 000000000EDAD328-000000000EDAD352
void __cdecl data::ByPlayerClimateType::~ByPlayerClimateType(data::ByPlayerClimateType *const this)
{
  data::ByPlayerClimateType::~ByPlayerClimateType(this);
  operator delete(this, 0x28uLL);
};

// Line 3560: range 000000000E6A937E-000000000E6A938E
const char *__cdecl data::ByPlayerClimateType::getTypeName(const data::ByPlayerClimateType *const this)
{
  return "ByPlayerClimateType";
};

// Line 3561: range 000000000E6A9390-000000000E6A952C
int32_t __cdecl data::ByPlayerClimateType::getHashNum(const data::ByPlayerClimateType *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByPlayerClimateType::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByPlayerClimateType",
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

// Line 3577: range 000000000ED1BCB4-000000000ED1BCF5
void __cdecl data::ByPlayerClimateTypeFactory::ByPlayerClimateTypeFactory(data::ByPlayerClimateTypeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByPlayerClimateTypeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByPlayerClimateTypeFactory = v2;
};

// Line 3585: range 000000000ED1BFFE-000000000ED1C05B
void __cdecl data::ByTargetWeatherName::ByTargetWeatherName(data::ByTargetWeatherName *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetWeatherName + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::string::basic_string(&this->weather_name);
};

// Line 3585: range 000000000ED1C460-000000000ED1C4F6
void __cdecl data::ByTargetWeatherName::ByTargetWeatherName(
        data::ByTargetWeatherName *const this,
        const data::ByTargetWeatherName *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetWeatherName + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::string::basic_string(&this->weather_name, &a2->weather_name);
};

// Line 3592: range 000000000EDAD250-000000000EDAD2AD
void __cdecl data::ByTargetWeatherName::~ByTargetWeatherName(data::ByTargetWeatherName *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetWeatherName + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::string::~string(&this->weather_name);
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 3592: range 000000000EDAD2AE-000000000EDAD2D8
void __cdecl data::ByTargetWeatherName::~ByTargetWeatherName(data::ByTargetWeatherName *const this)
{
  data::ByTargetWeatherName::~ByTargetWeatherName(this);
  operator delete(this, 0x40uLL);
};

// Line 3597: range 000000000E6A952E-000000000E6A953E
const char *__cdecl data::ByTargetWeatherName::getTypeName(const data::ByTargetWeatherName *const this)
{
  return "ByTargetWeatherName";
};

// Line 3598: range 000000000E6A9540-000000000E6A96DC
int32_t __cdecl data::ByTargetWeatherName::getHashNum(const data::ByTargetWeatherName *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByTargetWeatherName::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByTargetWeatherName",
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

// Line 3614: range 000000000ED1C7E0-000000000ED1C821
void __cdecl data::ByTargetWeatherNameFactory::ByTargetWeatherNameFactory(data::ByTargetWeatherNameFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetWeatherNameFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByTargetWeatherNameFactory = v2;
};

// Line 3622: range 000000000ED1CB2A-000000000ED1CBC2
void __cdecl data::ByIsGadgetExistAround::ByIsGadgetExistAround(data::ByIsGadgetExistAround *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByIsGadgetExistAround + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<unsigned int>::vector(&this->gadget_id_array);
  if ( *(char *)(((unsigned __int64)&this->trun_to_target >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->trun_to_target, v1, &this->trun_to_target);
  this->trun_to_target = 0;
};

// Line 3622: range 000000000ED1CFC8-000000000ED1D0D4
void __cdecl data::ByIsGadgetExistAround::ByIsGadgetExistAround(
        data::ByIsGadgetExistAround *const this,
        const data::ByIsGadgetExistAround *a2)
{
  int (**v2)(...); // rdx
  data::UInt32Array *p_gadget_id_array; // rsi
  bool trun_to_target; // cl
  char v5; // al

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByIsGadgetExistAround + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  p_gadget_id_array = &a2->gadget_id_array;
  std::vector<unsigned int>::vector(&this->gadget_id_array, &a2->gadget_id_array);
  if ( *(char *)(((unsigned __int64)&a2->trun_to_target >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->trun_to_target, p_gadget_id_array, &a2->trun_to_target);
  trun_to_target = a2->trun_to_target;
  v5 = *(_BYTE *)(((unsigned __int64)&this->trun_to_target >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_gadget_id_array) = v5 != 0;
    __asan_report_store1(&this->trun_to_target, p_gadget_id_array, &this->trun_to_target);
  }
  this->trun_to_target = trun_to_target;
};

// Line 3630: range 000000000EDAD1C6-000000000EDAD223
void __cdecl data::ByIsGadgetExistAround::~ByIsGadgetExistAround(data::ByIsGadgetExistAround *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByIsGadgetExistAround + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<unsigned int>::~vector(&this->gadget_id_array);
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 3630: range 000000000EDAD224-000000000EDAD24E
void __cdecl data::ByIsGadgetExistAround::~ByIsGadgetExistAround(data::ByIsGadgetExistAround *const this)
{
  data::ByIsGadgetExistAround::~ByIsGadgetExistAround(this);
  operator delete(this, 0x40uLL);
};

// Line 3635: range 000000000E6A96DE-000000000E6A96EE
const char *__cdecl data::ByIsGadgetExistAround::getTypeName(const data::ByIsGadgetExistAround *const this)
{
  return "ByIsGadgetExistAround";
};

// Line 3636: range 000000000E6A96F0-000000000E6A988C
int32_t __cdecl data::ByIsGadgetExistAround::getHashNum(const data::ByIsGadgetExistAround *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByIsGadgetExistAround::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByIsGadgetExistAround",
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

// Line 3652: range 000000000ED1D3BE-000000000ED1D3FF
void __cdecl data::ByIsGadgetExistAroundFactory::ByIsGadgetExistAroundFactory(
        data::ByIsGadgetExistAroundFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByIsGadgetExistAroundFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByIsGadgetExistAroundFactory = v2;
};

// Line 3660: range 000000000ED1D708-000000000ED1D755
void __cdecl data::ByEntityIsAlive::ByEntityIsAlive(data::ByEntityIsAlive *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByEntityIsAlive + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 3660: range 000000000ED1DBE6-000000000ED1DC3E
void __cdecl data::ByEntityIsAlive::ByEntityIsAlive(data::ByEntityIsAlive *const this, const data::ByEntityIsAlive *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByEntityIsAlive + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 3666: range 000000000EDAD19A-000000000EDAD1C4
void __cdecl data::ByEntityIsAlive::~ByEntityIsAlive(data::ByEntityIsAlive *const this)
{
  data::ByEntityIsAlive::~ByEntityIsAlive(this);
  operator delete(this, 0x20uLL);
};

// Line 3666: range 000000000EDAD14C-000000000EDAD199
void __cdecl data::ByEntityIsAlive::~ByEntityIsAlive(data::ByEntityIsAlive *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByEntityIsAlive + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 3671: range 000000000E6A988E-000000000E6A989E
const char *__cdecl data::ByEntityIsAlive::getTypeName(const data::ByEntityIsAlive *const this)
{
  return "ByEntityIsAlive";
};

// Line 3672: range 000000000E6A98A0-000000000E6A9A3C
int32_t __cdecl data::ByEntityIsAlive::getHashNum(const data::ByEntityIsAlive *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByEntityIsAlive::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByEntityIsAlive",
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

// Line 3688: range 000000000ED1DE88-000000000ED1DEC9
void __cdecl data::ByEntityIsAliveFactory::ByEntityIsAliveFactory(data::ByEntityIsAliveFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByEntityIsAliveFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByEntityIsAliveFactory = v2;
};

// Line 3696: range 000000000ED1E1D2-000000000ED1E25F
void __cdecl data::ByMonsterAirState::ByMonsterAirState(data::ByMonsterAirState *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate((data::ConfigAbilityPredicate *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ByMonsterAirState + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  v3 = ((_BYTE)this + 29) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_air_move >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_air_move >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_air_move, v3, v4);
  this->is_air_move = 0;
};

// Line 3696: range 000000000ED1E760-000000000ED1E838
void __cdecl data::ByMonsterAirState::ByMonsterAirState(
        data::ByMonsterAirState *const this,
        const data::ByMonsterAirState *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_air_move; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(
    (data::ConfigAbilityPredicate *const)this,
    (const data::ConfigAbilityPredicate *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ByMonsterAirState + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  v3 = ((_BYTE)a2 + 29) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->is_air_move >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->is_air_move >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->is_air_move, v3, v4);
  is_air_move = a2->is_air_move;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_air_move >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 29) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_air_move, v3, v7);
  this->is_air_move = is_air_move;
};

// Line 3703: range 000000000EDAD120-000000000EDAD14A
void __cdecl data::ByMonsterAirState::~ByMonsterAirState(data::ByMonsterAirState *const this)
{
  data::ByMonsterAirState::~ByMonsterAirState(this);
  operator delete(this, 0x20uLL);
};

// Line 3703: range 000000000EDAD0D2-000000000EDAD11F
void __cdecl data::ByMonsterAirState::~ByMonsterAirState(data::ByMonsterAirState *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByMonsterAirState + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate((data::ConfigAbilityPredicate *const)this);
};

// Line 3708: range 000000000E6A9A3E-000000000E6A9A4E
const char *__cdecl data::ByMonsterAirState::getTypeName(const data::ByMonsterAirState *const this)
{
  return "ByMonsterAirState";
};

// Line 3709: range 000000000E6A9A50-000000000E6A9BEC
int32_t __cdecl data::ByMonsterAirState::getHashNum(const data::ByMonsterAirState *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByMonsterAirState::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByMonsterAirState",
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

// Line 3725: range 000000000ED1EA82-000000000ED1EAC3
void __cdecl data::ByMonsterAirStateFactory::ByMonsterAirStateFactory(data::ByMonsterAirStateFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByMonsterAirStateFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByMonsterAirStateFactory = v2;
};

// Line 3733: range 000000000ED1EDCC-000000000ED1EE59
void __cdecl data::ByGameTimeIsLocked::ByGameTimeIsLocked(data::ByGameTimeIsLocked *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate((data::ConfigAbilityPredicate *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ByGameTimeIsLocked + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  v3 = ((_BYTE)this + 29) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_locked >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_locked >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_locked, v3, v4);
  this->is_locked = 0;
};

// Line 3733: range 000000000ED1F35A-000000000ED1F432
void __cdecl data::ByGameTimeIsLocked::ByGameTimeIsLocked(
        data::ByGameTimeIsLocked *const this,
        const data::ByGameTimeIsLocked *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_locked; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(
    (data::ConfigAbilityPredicate *const)this,
    (const data::ConfigAbilityPredicate *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ByGameTimeIsLocked + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  v3 = ((_BYTE)a2 + 29) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->is_locked >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->is_locked >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->is_locked, v3, v4);
  is_locked = a2->is_locked;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_locked >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 29) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_locked, v3, v7);
  this->is_locked = is_locked;
};

// Line 3740: range 000000000EDAD058-000000000EDAD0A5
void __cdecl data::ByGameTimeIsLocked::~ByGameTimeIsLocked(data::ByGameTimeIsLocked *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByGameTimeIsLocked + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate((data::ConfigAbilityPredicate *const)this);
};

// Line 3740: range 000000000EDAD0A6-000000000EDAD0D0
void __cdecl data::ByGameTimeIsLocked::~ByGameTimeIsLocked(data::ByGameTimeIsLocked *const this)
{
  data::ByGameTimeIsLocked::~ByGameTimeIsLocked(this);
  operator delete(this, 0x20uLL);
};

// Line 3745: range 000000000E6A9BEE-000000000E6A9BFE
const char *__cdecl data::ByGameTimeIsLocked::getTypeName(const data::ByGameTimeIsLocked *const this)
{
  return "ByGameTimeIsLocked";
};

// Line 3746: range 000000000E6A9C00-000000000E6A9D9C
int32_t __cdecl data::ByGameTimeIsLocked::getHashNum(const data::ByGameTimeIsLocked *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByGameTimeIsLocked::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByGameTimeIsLocked",
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

// Line 3762: range 000000000ED1F67C-000000000ED1F6BD
void __cdecl data::ByGameTimeIsLockedFactory::ByGameTimeIsLockedFactory(data::ByGameTimeIsLockedFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByGameTimeIsLockedFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByGameTimeIsLockedFactory = v2;
};

// Line 3770: range 000000000ED1F9C6-000000000ED1FA53
void __cdecl data::ByTargetIsCaster::ByTargetIsCaster(data::ByTargetIsCaster *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate((data::ConfigAbilityPredicate *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetIsCaster + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  v3 = ((_BYTE)this + 29) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_caster >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_caster >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_caster, v3, v4);
  this->is_caster = 1;
};

// Line 3770: range 000000000ED1FF54-000000000ED2002C
void __cdecl data::ByTargetIsCaster::ByTargetIsCaster(
        data::ByTargetIsCaster *const this,
        const data::ByTargetIsCaster *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_caster; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(
    (data::ConfigAbilityPredicate *const)this,
    (const data::ConfigAbilityPredicate *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetIsCaster + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  v3 = ((_BYTE)a2 + 29) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->is_caster >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->is_caster >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->is_caster, v3, v4);
  is_caster = a2->is_caster;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_caster >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 29) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_caster, v3, v7);
  this->is_caster = is_caster;
};

// Line 3777: range 000000000EDAD02C-000000000EDAD056
void __cdecl data::ByTargetIsCaster::~ByTargetIsCaster(data::ByTargetIsCaster *const this)
{
  data::ByTargetIsCaster::~ByTargetIsCaster(this);
  operator delete(this, 0x20uLL);
};

// Line 3777: range 000000000EDACFDE-000000000EDAD02B
void __cdecl data::ByTargetIsCaster::~ByTargetIsCaster(data::ByTargetIsCaster *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetIsCaster + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate((data::ConfigAbilityPredicate *const)this);
};

// Line 3782: range 000000000E6A9D9E-000000000E6A9DAE
const char *__cdecl data::ByTargetIsCaster::getTypeName(const data::ByTargetIsCaster *const this)
{
  return "ByTargetIsCaster";
};

// Line 3783: range 000000000E6A9DB0-000000000E6A9F4C
int32_t __cdecl data::ByTargetIsCaster::getHashNum(const data::ByTargetIsCaster *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByTargetIsCaster::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByTargetIsCaster",
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

// Line 3799: range 000000000ED20276-000000000ED202B7
void __cdecl data::ByTargetIsCasterFactory::ByTargetIsCasterFactory(data::ByTargetIsCasterFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetIsCasterFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByTargetIsCasterFactory = v2;
};

// Line 3807: range 000000000ED205C0-000000000ED20711
void __cdecl data::ByHitElementDurability::ByHitElementDurability(data::ByHitElementDurability *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByHitElementDurability + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->element >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->element >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->element, v1);
  }
  this->element = None_0;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->durability >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->durability >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->durability, v3);
  }
  this->durability = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->compare_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->compare_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->compare_type, v3);
  }
  this->compare_type = Equal_2;
  v4 = ((_BYTE)this + 44) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->apply_attenuation >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->apply_attenuation >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->apply_attenuation, v4, v5);
  this->apply_attenuation = 1;
};

// Line 3807: range 000000000ED20AEC-000000000ED20D36
void __cdecl data::ByHitElementDurability::ByHitElementDurability(
        data::ByHitElementDurability *const this,
        const data::ByHitElementDurability *a2)
{
  int (**v2)(...); // rdx
  data::ElementType element; // ecx
  char v4; // al
  float durability; // xmm0_4
  __int64 v6; // rsi
  data::RelationType compare_type; // ecx
  char v8; // al
  __int64 v9; // rsi
  __int64 v10; // rdx
  bool apply_attenuation; // cl
  char v12; // dl
  __int64 v13; // rdx
  const data::ByHitElementDurability *v14; // [rsp+0h] [rbp-10h]

  v14 = a2;
  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByHitElementDurability + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->element >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->element >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->element);
  }
  element = a2->element;
  v4 = *(_BYTE *)(((unsigned __int64)&this->element >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->element, a2);
  }
  this->element = element;
  if ( *(_BYTE *)(((unsigned __int64)&v14->durability >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->durability >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->durability);
  }
  durability = v14->durability;
  v6 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->durability >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->durability >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->durability, v6);
  }
  this->durability = durability;
  if ( *(_BYTE *)(((unsigned __int64)&v14->compare_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->compare_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v14->compare_type);
  }
  compare_type = v14->compare_type;
  v8 = *(_BYTE *)(((unsigned __int64)&this->compare_type >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store4(&this->compare_type, v6);
  }
  this->compare_type = compare_type;
  v9 = ((_BYTE)v14 + 44) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&v14->apply_attenuation >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&v14->apply_attenuation >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_load1(&v14->apply_attenuation, v9, v10);
  apply_attenuation = v14->apply_attenuation;
  v12 = *(_BYTE *)(((unsigned __int64)&this->apply_attenuation >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->apply_attenuation, v9, v13);
  this->apply_attenuation = apply_attenuation;
};

// Line 3817: range 000000000EDACF64-000000000EDACFB1
void __cdecl data::ByHitElementDurability::~ByHitElementDurability(data::ByHitElementDurability *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHitElementDurability + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 3817: range 000000000EDACFB2-000000000EDACFDC
void __cdecl data::ByHitElementDurability::~ByHitElementDurability(data::ByHitElementDurability *const this)
{
  data::ByHitElementDurability::~ByHitElementDurability(this);
  operator delete(this, 0x30uLL);
};

// Line 3822: range 000000000E6A9F4E-000000000E6A9F5E
const char *__cdecl data::ByHitElementDurability::getTypeName(const data::ByHitElementDurability *const this)
{
  return "ByHitElementDurability";
};

// Line 3823: range 000000000E6A9F60-000000000E6AA0FC
int32_t __cdecl data::ByHitElementDurability::getHashNum(const data::ByHitElementDurability *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByHitElementDurability::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByHitElementDurability",
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

// Line 3839: range 000000000ED20F80-000000000ED20FC1
void __cdecl data::ByHitElementDurabilityFactory::ByHitElementDurabilityFactory(
        data::ByHitElementDurabilityFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHitElementDurabilityFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByHitElementDurabilityFactory = v2;
};

// Line 3847: range 000000000ED212CA-000000000ED21327
void __cdecl data::ByHasTag::ByHasTag(data::ByHasTag *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByHasTag + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::string::basic_string(&this->tag);
};

// Line 3847: range 000000000ED2172C-000000000ED217C2
void __cdecl data::ByHasTag::ByHasTag(data::ByHasTag *const this, const data::ByHasTag *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByHasTag + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::string::basic_string(&this->tag, &a2->tag);
};

// Line 3854: range 000000000EDACEDA-000000000EDACF37
void __cdecl data::ByHasTag::~ByHasTag(data::ByHasTag *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHasTag + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::string::~string(&this->tag);
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 3854: range 000000000EDACF38-000000000EDACF62
void __cdecl data::ByHasTag::~ByHasTag(data::ByHasTag *const this)
{
  data::ByHasTag::~ByHasTag(this);
  operator delete(this, 0x40uLL);
};

// Line 3859: range 000000000E6AA0FE-000000000E6AA10E
const char *__cdecl data::ByHasTag::getTypeName(const data::ByHasTag *const this)
{
  return "ByHasTag";
};

// Line 3860: range 000000000E6AA110-000000000E6AA2AC
int32_t __cdecl data::ByHasTag::getHashNum(const data::ByHasTag *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByHasTag::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByHasTag",
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

// Line 3876: range 000000000ED21AAC-000000000ED21AED
void __cdecl data::ByHasTagFactory::ByHasTagFactory(data::ByHasTagFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHasTagFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByHasTagFactory = v2;
};

// Line 3884: range 000000000ED21DF6-000000000ED21E91
void __cdecl data::ByHasLevelTag::ByHasLevelTag(data::ByHasLevelTag *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByHasLevelTag + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::string::basic_string(&this->level_tag);
  if ( *(_BYTE *)(((unsigned __int64)&this->level_tag_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_tag_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_tag_id, v1);
  }
  this->level_tag_id = 0;
};

// Line 3884: range 000000000ED222AC-000000000ED223B7
void __cdecl data::ByHasLevelTag::ByHasLevelTag(data::ByHasLevelTag *const this, const data::ByHasLevelTag *a2)
{
  int (**v2)(...); // rdx
  std::string *p_level_tag; // rsi
  uint32_t level_tag_id; // ecx
  char v5; // al

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByHasLevelTag + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  p_level_tag = &a2->level_tag;
  std::string::basic_string(&this->level_tag, &a2->level_tag);
  if ( *(_BYTE *)(((unsigned __int64)&a2->level_tag_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->level_tag_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->level_tag_id);
  }
  level_tag_id = a2->level_tag_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->level_tag_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_level_tag) = v5 != 0;
    __asan_report_store4(&this->level_tag_id, p_level_tag);
  }
  this->level_tag_id = level_tag_id;
};

// Line 3892: range 000000000EDACEAE-000000000EDACED8
void __cdecl data::ByHasLevelTag::~ByHasLevelTag(data::ByHasLevelTag *const this)
{
  data::ByHasLevelTag::~ByHasLevelTag(this);
  operator delete(this, 0x48uLL);
};

// Line 3892: range 000000000EDACE50-000000000EDACEAD
void __cdecl data::ByHasLevelTag::~ByHasLevelTag(data::ByHasLevelTag *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHasLevelTag + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::string::~string(&this->level_tag);
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 3897: range 000000000E6AA2AE-000000000E6AA2BE
const char *__cdecl data::ByHasLevelTag::getTypeName(const data::ByHasLevelTag *const this)
{
  return "ByHasLevelTag";
};

// Line 3898: range 000000000E6AA2C0-000000000E6AA45C
int32_t __cdecl data::ByHasLevelTag::getHashNum(const data::ByHasLevelTag *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByHasLevelTag::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByHasLevelTag",
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

// Line 3914: range 000000000ED226A0-000000000ED226E1
void __cdecl data::ByHasLevelTagFactory::ByHasLevelTagFactory(data::ByHasLevelTagFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHasLevelTagFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByHasLevelTagFactory = v2;
};

// Line 3927: range 000000000ED22A22-000000000ED22A7F
void __cdecl data::ByCurrentSceneTypes::ByCurrentSceneTypes(data::ByCurrentSceneTypes *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByCurrentSceneTypes + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<data::SceneType>::vector(&this->scene_types);
};

// Line 3927: range 000000000ED22F9C-000000000ED23032
void __cdecl data::ByCurrentSceneTypes::ByCurrentSceneTypes(
        data::ByCurrentSceneTypes *const this,
        const data::ByCurrentSceneTypes *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByCurrentSceneTypes + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<data::SceneType>::vector(&this->scene_types, &a2->scene_types);
};

// Line 3934: range 000000000EDACDC6-000000000EDACE23
void __cdecl data::ByCurrentSceneTypes::~ByCurrentSceneTypes(data::ByCurrentSceneTypes *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByCurrentSceneTypes + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<data::SceneType>::~vector(&this->scene_types);
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 3934: range 000000000EDACE24-000000000EDACE4E
void __cdecl data::ByCurrentSceneTypes::~ByCurrentSceneTypes(data::ByCurrentSceneTypes *const this)
{
  data::ByCurrentSceneTypes::~ByCurrentSceneTypes(this);
  operator delete(this, 0x38uLL);
};

// Line 3939: range 000000000E6AA45E-000000000E6AA46E
const char *__cdecl data::ByCurrentSceneTypes::getTypeName(const data::ByCurrentSceneTypes *const this)
{
  return "ByCurrentSceneTypes";
};

// Line 3940: range 000000000E6AA470-000000000E6AA60C
int32_t __cdecl data::ByCurrentSceneTypes::getHashNum(const data::ByCurrentSceneTypes *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByCurrentSceneTypes::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByCurrentSceneTypes",
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

// Line 3956: range 000000000ED2331C-000000000ED2335D
void __cdecl data::ByCurrentSceneTypesFactory::ByCurrentSceneTypesFactory(data::ByCurrentSceneTypesFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByCurrentSceneTypesFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByCurrentSceneTypesFactory = v2;
};

// Line 3964: range 000000000ED23666-000000000ED23731
void __cdecl data::ByTargetType::ByTargetType(data::ByTargetType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_type, v1);
  }
  this->target_type = Self_0;
  v3 = ((_BYTE)this + 36) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_target >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_target >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_target, v3, v4);
  this->is_target = 1;
};

// Line 3964: range 000000000ED23B06-000000000ED23C53
void __cdecl data::ByTargetType::ByTargetType(data::ByTargetType *const this, const data::ByTargetType *a2)
{
  int (**v2)(...); // rdx
  data::AbilityTargetting target_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  __int64 v6; // rdx
  bool is_target; // cl
  char v8; // dl
  __int64 v9; // rdx
  const data::ByTargetType *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->target_type);
  }
  target_type = a2->target_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->target_type, a2);
  }
  this->target_type = target_type;
  v5 = ((_BYTE)v10 + 36) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&v10->is_target >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&v10->is_target >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&v10->is_target, v5, v6);
  is_target = v10->is_target;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_target >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((((unsigned __int8)this + 36) & 7) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_target, v5, v9);
  this->is_target = is_target;
};

// Line 3972: range 000000000EDACD4C-000000000EDACD99
void __cdecl data::ByTargetType::~ByTargetType(data::ByTargetType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 3972: range 000000000EDACD9A-000000000EDACDC4
void __cdecl data::ByTargetType::~ByTargetType(data::ByTargetType *const this)
{
  data::ByTargetType::~ByTargetType(this);
  operator delete(this, 0x28uLL);
};

// Line 3977: range 000000000E6AA60E-000000000E6AA61E
const char *__cdecl data::ByTargetType::getTypeName(const data::ByTargetType *const this)
{
  return "ByTargetType";
};

// Line 3978: range 000000000E6AA620-000000000E6AA7BC
int32_t __cdecl data::ByTargetType::getHashNum(const data::ByTargetType *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByTargetType::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByTargetType",
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

// Line 3994: range 000000000ED23E9C-000000000ED23EDD
void __cdecl data::ByTargetTypeFactory::ByTargetTypeFactory(data::ByTargetTypeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetTypeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByTargetTypeFactory = v2;
};

// Line 4002: range 000000000ED241E6-000000000ED24243
void __cdecl data::ByCurrentSceneId::ByCurrentSceneId(data::ByCurrentSceneId *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByCurrentSceneId + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<unsigned int>::vector(&this->scene_ids);
};

// Line 4002: range 000000000ED24638-000000000ED246CE
void __cdecl data::ByCurrentSceneId::ByCurrentSceneId(
        data::ByCurrentSceneId *const this,
        const data::ByCurrentSceneId *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByCurrentSceneId + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<unsigned int>::vector(&this->scene_ids, &a2->scene_ids);
};

// Line 4009: range 000000000EDACCC2-000000000EDACD1F
void __cdecl data::ByCurrentSceneId::~ByCurrentSceneId(data::ByCurrentSceneId *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByCurrentSceneId + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::vector<unsigned int>::~vector(&this->scene_ids);
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 4009: range 000000000EDACD20-000000000EDACD4A
void __cdecl data::ByCurrentSceneId::~ByCurrentSceneId(data::ByCurrentSceneId *const this)
{
  data::ByCurrentSceneId::~ByCurrentSceneId(this);
  operator delete(this, 0x38uLL);
};

// Line 4014: range 000000000E6AA7BE-000000000E6AA7CE
const char *__cdecl data::ByCurrentSceneId::getTypeName(const data::ByCurrentSceneId *const this)
{
  return "ByCurrentSceneId";
};

// Line 4015: range 000000000E6AA7D0-000000000E6AA96C
int32_t __cdecl data::ByCurrentSceneId::getHashNum(const data::ByCurrentSceneId *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByCurrentSceneId::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByCurrentSceneId",
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

// Line 4031: range 000000000ED249B8-000000000ED249F9
void __cdecl data::ByCurrentSceneIdFactory::ByCurrentSceneIdFactory(data::ByCurrentSceneIdFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByCurrentSceneIdFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByCurrentSceneIdFactory = v2;
};

// Line 4039: range 000000000ED24D02-000000000ED24DEB
void __cdecl data::ByTargetChargeValue::ByTargetChargeValue(data::ByTargetChargeValue *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetChargeValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->element >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->element >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->element, v1);
  }
  this->element = None_0;
  std::string::basic_string(&this->global_value_key);
  data::DynamicFloat::DynamicFloat(&this->value);
  if ( *(_BYTE *)(((unsigned __int64)&this->compare_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->compare_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->compare_type, v1);
  }
  this->compare_type = Equal_2;
};

// Line 4039: range 000000000ED25196-000000000ED25346
void __cdecl data::ByTargetChargeValue::ByTargetChargeValue(
        data::ByTargetChargeValue *const this,
        const data::ByTargetChargeValue *a2)
{
  int (**v2)(...); // rdx
  data::ElementType element; // ecx
  char v4; // al
  data::DynamicFloat *p_value; // rsi
  data::RelationType compare_type; // ecx
  char v7; // al
  const data::ByTargetChargeValue *v8; // [rsp+0h] [rbp-20h]

  v8 = a2;
  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetChargeValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->element >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->element >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->element);
  }
  element = a2->element;
  v4 = *(_BYTE *)(((unsigned __int64)&this->element >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->element, a2);
  }
  this->element = element;
  std::string::basic_string(&this->global_value_key, &v8->global_value_key);
  p_value = &v8->value;
  data::DynamicFloat::DynamicFloat(&this->value, &v8->value);
  if ( *(_BYTE *)(((unsigned __int64)&v8->compare_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->compare_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v8->compare_type);
  }
  compare_type = v8->compare_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->compare_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_value) = v7 != 0;
    __asan_report_store4(&this->compare_type, p_value);
  }
  this->compare_type = compare_type;
};

// Line 4049: range 000000000EDACC96-000000000EDACCC0
void __cdecl data::ByTargetChargeValue::~ByTargetChargeValue(data::ByTargetChargeValue *const this)
{
  data::ByTargetChargeValue::~ByTargetChargeValue(this);
  operator delete(this, 0x70uLL);
};

// Line 4049: range 000000000EDACC28-000000000EDACC95
void __cdecl data::ByTargetChargeValue::~ByTargetChargeValue(data::ByTargetChargeValue *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetChargeValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicFloat::~DynamicFloat(&this->value);
  std::string::~string(&this->global_value_key);
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 4054: range 000000000E6AA96E-000000000E6AA97E
const char *__cdecl data::ByTargetChargeValue::getTypeName(const data::ByTargetChargeValue *const this)
{
  return "ByTargetChargeValue";
};

// Line 4055: range 000000000E6AA980-000000000E6AAB1C
int32_t __cdecl data::ByTargetChargeValue::getHashNum(const data::ByTargetChargeValue *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByTargetChargeValue::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByTargetChargeValue",
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

// Line 4071: range 000000000ED25630-000000000ED25671
void __cdecl data::ByTargetChargeValueFactory::ByTargetChargeValueFactory(data::ByTargetChargeValueFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetChargeValueFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByTargetChargeValueFactory = v2;
};

// Line 4079: range 000000000ED2597A-000000000ED259D7
void __cdecl data::ByHasModifier::ByHasModifier(data::ByHasModifier *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByHasModifier + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::string::basic_string(&this->modifier_name);
};

// Line 4079: range 000000000ED25DDC-000000000ED25E72
void __cdecl data::ByHasModifier::ByHasModifier(data::ByHasModifier *const this, const data::ByHasModifier *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByHasModifier + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::string::basic_string(&this->modifier_name, &a2->modifier_name);
};

// Line 4086: range 000000000EDACBFC-000000000EDACC26
void __cdecl data::ByHasModifier::~ByHasModifier(data::ByHasModifier *const this)
{
  data::ByHasModifier::~ByHasModifier(this);
  operator delete(this, 0x40uLL);
};

// Line 4086: range 000000000EDACB9E-000000000EDACBFB
void __cdecl data::ByHasModifier::~ByHasModifier(data::ByHasModifier *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHasModifier + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::string::~string(&this->modifier_name);
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 4091: range 000000000E6AAB1E-000000000E6AAB2E
const char *__cdecl data::ByHasModifier::getTypeName(const data::ByHasModifier *const this)
{
  return "ByHasModifier";
};

// Line 4092: range 000000000E6AAB30-000000000E6AACCC
int32_t __cdecl data::ByHasModifier::getHashNum(const data::ByHasModifier *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByHasModifier::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByHasModifier",
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

// Line 4108: range 000000000ED2615C-000000000ED2619D
void __cdecl data::ByHasModifierFactory::ByHasModifierFactory(data::ByHasModifierFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHasModifierFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByHasModifierFactory = v2;
};

// Line 4116: range 000000000ED264A6-000000000ED26533
void __cdecl data::ByFindBlinkPointSuccess::ByFindBlinkPointSuccess(data::ByFindBlinkPointSuccess *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate((data::ConfigAbilityPredicate *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ByFindBlinkPointSuccess + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  v3 = ((_BYTE)this + 29) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->find_point_success >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->find_point_success >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->find_point_success, v3, v4);
  this->find_point_success = 1;
};

// Line 4116: range 000000000ED26A34-000000000ED26B0C
void __cdecl data::ByFindBlinkPointSuccess::ByFindBlinkPointSuccess(
        data::ByFindBlinkPointSuccess *const this,
        const data::ByFindBlinkPointSuccess *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool find_point_success; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(
    (data::ConfigAbilityPredicate *const)this,
    (const data::ConfigAbilityPredicate *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ByFindBlinkPointSuccess + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  v3 = ((_BYTE)a2 + 29) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->find_point_success >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->find_point_success >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->find_point_success, v3, v4);
  find_point_success = a2->find_point_success;
  v6 = *(_BYTE *)(((unsigned __int64)&this->find_point_success >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 29) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->find_point_success, v3, v7);
  this->find_point_success = find_point_success;
};

// Line 4123: range 000000000EDACB24-000000000EDACB71
void __cdecl data::ByFindBlinkPointSuccess::~ByFindBlinkPointSuccess(data::ByFindBlinkPointSuccess *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByFindBlinkPointSuccess + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate((data::ConfigAbilityPredicate *const)this);
};

// Line 4123: range 000000000EDACB72-000000000EDACB9C
void __cdecl data::ByFindBlinkPointSuccess::~ByFindBlinkPointSuccess(data::ByFindBlinkPointSuccess *const this)
{
  data::ByFindBlinkPointSuccess::~ByFindBlinkPointSuccess(this);
  operator delete(this, 0x20uLL);
};

// Line 4128: range 000000000E6AACCE-000000000E6AACDE
const char *__cdecl data::ByFindBlinkPointSuccess::getTypeName(const data::ByFindBlinkPointSuccess *const this)
{
  return "ByFindBlinkPointSuccess";
};

// Line 4129: range 000000000E6AACE0-000000000E6AAE7C
int32_t __cdecl data::ByFindBlinkPointSuccess::getHashNum(const data::ByFindBlinkPointSuccess *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByFindBlinkPointSuccess::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByFindBlinkPointSuccess",
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

// Line 4145: range 000000000ED26D56-000000000ED26D97
void __cdecl data::ByFindBlinkPointSuccessFactory::ByFindBlinkPointSuccessFactory(
        data::ByFindBlinkPointSuccessFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByFindBlinkPointSuccessFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByFindBlinkPointSuccessFactory = v2;
};

// Line 4153: range 000000000ED270A0-000000000ED27228
void __cdecl data::ByFollowTargetValid::ByFollowTargetValid(data::ByFollowTargetValid *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate((data::ConfigAbilityPredicate *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ByFollowTargetValid + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  v3 = ((_BYTE)this + 29) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->check_component >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->check_component >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->check_component, v3, v4);
  this->check_component = 1;
  v5 = ((_BYTE)this + 30) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->check_has_follow_target >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->check_has_follow_target >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->check_has_follow_target, v5, v6);
  this->check_has_follow_target = 1;
  v7 = ((_BYTE)this + 31) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->check_visible >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->check_visible >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->check_visible, v7, v8);
  this->check_visible = 1;
  if ( *(char *)(((unsigned __int64)&this->check_active >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->check_active, v7, &this->check_active);
  this->check_active = 1;
  v9 = ((_BYTE)this + 33) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->check_valid >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->check_valid >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->check_valid, v9, v10);
  this->check_valid = 1;
};

// Line 4153: range 000000000ED275FE-000000000ED278CC
void __cdecl data::ByFollowTargetValid::ByFollowTargetValid(
        data::ByFollowTargetValid *const this,
        const data::ByFollowTargetValid *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool check_component; // cl
  char v6; // dl
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  bool check_has_follow_target; // cl
  char v11; // dl
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  bool check_visible; // cl
  char v16; // dl
  __int64 v17; // rdx
  bool check_active; // cl
  char v19; // al
  __int64 v20; // rsi
  __int64 v21; // rdx
  bool check_valid; // cl
  char v23; // dl
  __int64 v24; // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(
    (data::ConfigAbilityPredicate *const)this,
    (const data::ConfigAbilityPredicate *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ByFollowTargetValid + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  v3 = ((_BYTE)a2 + 29) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->check_component >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->check_component >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->check_component, v3, v4);
  check_component = a2->check_component;
  v6 = *(_BYTE *)(((unsigned __int64)&this->check_component >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 29) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->check_component, v3, v7);
  this->check_component = check_component;
  v8 = ((_BYTE)a2 + 30) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&a2->check_has_follow_target >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&a2->check_has_follow_target >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_load1(&a2->check_has_follow_target, v8, v9);
  check_has_follow_target = a2->check_has_follow_target;
  v11 = *(_BYTE *)(((unsigned __int64)&this->check_has_follow_target >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v11 != 0;
  v12 = (v11 != 0) & (unsigned __int8)((((unsigned __int8)this + 30) & 7) >= v11);
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->check_has_follow_target, v8, v12);
  this->check_has_follow_target = check_has_follow_target;
  v13 = ((_BYTE)a2 + 31) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&a2->check_visible >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&a2->check_visible >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_load1(&a2->check_visible, v13, v14);
  check_visible = a2->check_visible;
  v16 = *(_BYTE *)(((unsigned __int64)&this->check_visible >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v16 != 0;
  v17 = (v16 != 0) & (unsigned __int8)((((unsigned __int8)this + 31) & 7) >= v16);
  if ( (_BYTE)v17 )
    __asan_report_store1(&this->check_visible, v13, v17);
  this->check_visible = check_visible;
  if ( *(char *)(((unsigned __int64)&a2->check_active >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->check_active, v13, &a2->check_active);
  check_active = a2->check_active;
  v19 = *(_BYTE *)(((unsigned __int64)&this->check_active >> 3) + 0x7FFF8000);
  if ( v19 < 0 )
  {
    LOBYTE(v13) = v19 != 0;
    __asan_report_store1(&this->check_active, v13, &this->check_active);
  }
  this->check_active = check_active;
  v20 = ((_BYTE)a2 + 33) & 7;
  v21 = (*(_BYTE *)(((unsigned __int64)&a2->check_valid >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v20 >= *(_BYTE *)(((unsigned __int64)&a2->check_valid >> 3) + 0x7FFF8000));
  if ( (_BYTE)v21 )
    __asan_report_load1(&a2->check_valid, v20, v21);
  check_valid = a2->check_valid;
  v23 = *(_BYTE *)(((unsigned __int64)&this->check_valid >> 3) + 0x7FFF8000);
  LOBYTE(v20) = v23 != 0;
  v24 = (v23 != 0) & (unsigned __int8)((((unsigned __int8)this + 33) & 7) >= v23);
  if ( (_BYTE)v24 )
    __asan_report_store1(&this->check_valid, v20, v24);
  this->check_valid = check_valid;
};

// Line 4164: range 000000000EDACAF8-000000000EDACB22
void __cdecl data::ByFollowTargetValid::~ByFollowTargetValid(data::ByFollowTargetValid *const this)
{
  data::ByFollowTargetValid::~ByFollowTargetValid(this);
  operator delete(this, 0x28uLL);
};

// Line 4164: range 000000000EDACAAA-000000000EDACAF7
void __cdecl data::ByFollowTargetValid::~ByFollowTargetValid(data::ByFollowTargetValid *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByFollowTargetValid + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate((data::ConfigAbilityPredicate *const)this);
};

// Line 4169: range 000000000E6AAE7E-000000000E6AAE8E
const char *__cdecl data::ByFollowTargetValid::getTypeName(const data::ByFollowTargetValid *const this)
{
  return "ByFollowTargetValid";
};

// Line 4170: range 000000000E6AAE90-000000000E6AB02C
int32_t __cdecl data::ByFollowTargetValid::getHashNum(const data::ByFollowTargetValid *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByFollowTargetValid::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByFollowTargetValid",
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

// Line 4186: range 000000000ED27B16-000000000ED27B57
void __cdecl data::ByFollowTargetValidFactory::ByFollowTargetValidFactory(data::ByFollowTargetValidFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByFollowTargetValidFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByFollowTargetValidFactory = v2;
};

// Line 4194: range 000000000ED27E60-000000000ED27EEB
void __cdecl data::ByWidgetExCDReady::ByWidgetExCDReady(data::ByWidgetExCDReady *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByWidgetExCDReady + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_id, v1);
  }
  this->item_id = 0;
};

// Line 4194: range 000000000ED283EC-000000000ED284B9
void __cdecl data::ByWidgetExCDReady::ByWidgetExCDReady(
        data::ByWidgetExCDReady *const this,
        const data::ByWidgetExCDReady *a2)
{
  int (**v2)(...); // rdx
  uint32_t item_id; // ecx
  char v4; // al

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByWidgetExCDReady + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->item_id);
  }
  item_id = a2->item_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->item_id, a2);
  }
  this->item_id = item_id;
};

// Line 4201: range 000000000EDACA7E-000000000EDACAA8
void __cdecl data::ByWidgetExCDReady::~ByWidgetExCDReady(data::ByWidgetExCDReady *const this)
{
  data::ByWidgetExCDReady::~ByWidgetExCDReady(this);
  operator delete(this, 0x28uLL);
};

// Line 4201: range 000000000EDACA30-000000000EDACA7D
void __cdecl data::ByWidgetExCDReady::~ByWidgetExCDReady(data::ByWidgetExCDReady *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByWidgetExCDReady + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 4206: range 000000000E6AB02E-000000000E6AB03E
const char *__cdecl data::ByWidgetExCDReady::getTypeName(const data::ByWidgetExCDReady *const this)
{
  return "ByWidgetExCDReady";
};

// Line 4207: range 000000000E6AB040-000000000E6AB1DC
int32_t __cdecl data::ByWidgetExCDReady::getHashNum(const data::ByWidgetExCDReady *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByWidgetExCDReady::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByWidgetExCDReady",
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

// Line 4223: range 000000000ED28702-000000000ED28743
void __cdecl data::ByWidgetExCDReadyFactory::ByWidgetExCDReadyFactory(data::ByWidgetExCDReadyFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByWidgetExCDReadyFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByWidgetExCDReadyFactory = v2;
};

// Line 4231: range 000000000ED28A4C-000000000ED28A99
void __cdecl data::ByHaveMoveInput::ByHaveMoveInput(data::ByHaveMoveInput *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByHaveMoveInput + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 4231: range 000000000ED28F2A-000000000ED28F82
void __cdecl data::ByHaveMoveInput::ByHaveMoveInput(data::ByHaveMoveInput *const this, const data::ByHaveMoveInput *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByHaveMoveInput + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 4237: range 000000000EDACA04-000000000EDACA2E
void __cdecl data::ByHaveMoveInput::~ByHaveMoveInput(data::ByHaveMoveInput *const this)
{
  data::ByHaveMoveInput::~ByHaveMoveInput(this);
  operator delete(this, 0x20uLL);
};

// Line 4237: range 000000000EDAC9B6-000000000EDACA03
void __cdecl data::ByHaveMoveInput::~ByHaveMoveInput(data::ByHaveMoveInput *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHaveMoveInput + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 4242: range 000000000E6AB1DE-000000000E6AB1EE
const char *__cdecl data::ByHaveMoveInput::getTypeName(const data::ByHaveMoveInput *const this)
{
  return "ByHaveMoveInput";
};

// Line 4243: range 000000000E6AB1F0-000000000E6AB38C
int32_t __cdecl data::ByHaveMoveInput::getHashNum(const data::ByHaveMoveInput *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByHaveMoveInput::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByHaveMoveInput",
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

// Line 4259: range 000000000ED291CC-000000000ED2920D
void __cdecl data::ByHaveMoveInputFactory::ByHaveMoveInputFactory(data::ByHaveMoveInputFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHaveMoveInputFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByHaveMoveInputFactory = v2;
};

// Line 4267: range 000000000ED29516-000000000ED295EF
void __cdecl data::ByTargetSkillPoint::ByTargetSkillPoint(data::ByTargetSkillPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetSkillPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->skill_id, v1);
  }
  this->skill_id = 0;
  data::DynamicFloat::DynamicFloat(&this->value);
  if ( *(_BYTE *)(((unsigned __int64)&this->compare_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->compare_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->compare_type, v1);
  }
  this->compare_type = Equal_2;
};

// Line 4267: range 000000000ED29A14-000000000ED29B94
void __cdecl data::ByTargetSkillPoint::ByTargetSkillPoint(
        data::ByTargetSkillPoint *const this,
        const data::ByTargetSkillPoint *a2)
{
  int (**v2)(...); // rdx
  uint32_t skill_id; // ecx
  char v4; // al
  data::DynamicFloat *p_value; // rsi
  data::RelationType compare_type; // ecx
  char v7; // al
  const data::ByTargetSkillPoint *v8; // [rsp+0h] [rbp-20h]

  v8 = a2;
  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetSkillPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->skill_id);
  }
  skill_id = a2->skill_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->skill_id, a2);
  }
  this->skill_id = skill_id;
  p_value = &v8->value;
  data::DynamicFloat::DynamicFloat(&this->value, &v8->value);
  if ( *(_BYTE *)(((unsigned __int64)&v8->compare_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->compare_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v8->compare_type);
  }
  compare_type = v8->compare_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->compare_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_value) = v7 != 0;
    __asan_report_store4(&this->compare_type, p_value);
  }
  this->compare_type = compare_type;
};

// Line 4276: range 000000000EDAC92C-000000000EDAC989
void __cdecl data::ByTargetSkillPoint::~ByTargetSkillPoint(data::ByTargetSkillPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetSkillPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicFloat::~DynamicFloat(&this->value);
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 4276: range 000000000EDAC98A-000000000EDAC9B4
void __cdecl data::ByTargetSkillPoint::~ByTargetSkillPoint(data::ByTargetSkillPoint *const this)
{
  data::ByTargetSkillPoint::~ByTargetSkillPoint(this);
  operator delete(this, 0x50uLL);
};

// Line 4281: range 000000000E6AB38E-000000000E6AB39E
const char *__cdecl data::ByTargetSkillPoint::getTypeName(const data::ByTargetSkillPoint *const this)
{
  return "ByTargetSkillPoint";
};

// Line 4282: range 000000000E6AB3A0-000000000E6AB53C
int32_t __cdecl data::ByTargetSkillPoint::getHashNum(const data::ByTargetSkillPoint *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByTargetSkillPoint::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByTargetSkillPoint",
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

// Line 4298: range 000000000ED29E7E-000000000ED29EBF
void __cdecl data::ByTargetSkillPointFactory::ByTargetSkillPointFactory(data::ByTargetSkillPointFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetSkillPointFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByTargetSkillPointFactory = v2;
};

// Line 4306: range 000000000ED2A1C8-000000000ED2A215
void __cdecl data::ByDungeonSettled::ByDungeonSettled(data::ByDungeonSettled *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByDungeonSettled + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 4306: range 000000000ED2A6A6-000000000ED2A6FE
void __cdecl data::ByDungeonSettled::ByDungeonSettled(
        data::ByDungeonSettled *const this,
        const data::ByDungeonSettled *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByDungeonSettled + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 4312: range 000000000EDAC900-000000000EDAC92A
void __cdecl data::ByDungeonSettled::~ByDungeonSettled(data::ByDungeonSettled *const this)
{
  data::ByDungeonSettled::~ByDungeonSettled(this);
  operator delete(this, 0x20uLL);
};

// Line 4312: range 000000000EDAC8B2-000000000EDAC8FF
void __cdecl data::ByDungeonSettled::~ByDungeonSettled(data::ByDungeonSettled *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByDungeonSettled + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 4317: range 000000000E6AB53E-000000000E6AB54E
const char *__cdecl data::ByDungeonSettled::getTypeName(const data::ByDungeonSettled *const this)
{
  return "ByDungeonSettled";
};

// Line 4318: range 000000000E6AB550-000000000E6AB6EC
int32_t __cdecl data::ByDungeonSettled::getHashNum(const data::ByDungeonSettled *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByDungeonSettled::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByDungeonSettled",
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

// Line 4334: range 000000000ED2A948-000000000ED2A989
void __cdecl data::ByDungeonSettledFactory::ByDungeonSettledFactory(data::ByDungeonSettledFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByDungeonSettledFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByDungeonSettledFactory = v2;
};

// Line 4342: range 000000000ED2AC92-000000000ED2ACDF
void __cdecl data::BySceneLoaded::BySceneLoaded(data::BySceneLoaded *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::BySceneLoaded + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 4342: range 000000000ED2B170-000000000ED2B1C8
void __cdecl data::BySceneLoaded::BySceneLoaded(data::BySceneLoaded *const this, const data::BySceneLoaded *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::BySceneLoaded + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 4348: range 000000000EDAC886-000000000EDAC8B0
void __cdecl data::BySceneLoaded::~BySceneLoaded(data::BySceneLoaded *const this)
{
  data::BySceneLoaded::~BySceneLoaded(this);
  operator delete(this, 0x20uLL);
};

// Line 4348: range 000000000EDAC838-000000000EDAC885
void __cdecl data::BySceneLoaded::~BySceneLoaded(data::BySceneLoaded *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BySceneLoaded + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 4353: range 000000000E6AB6EE-000000000E6AB6FE
const char *__cdecl data::BySceneLoaded::getTypeName(const data::BySceneLoaded *const this)
{
  return "BySceneLoaded";
};

// Line 4354: range 000000000E6AB700-000000000E6AB89C
int32_t __cdecl data::BySceneLoaded::getHashNum(const data::BySceneLoaded *const this)
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
  *(_QWORD *)(v1 + 16) = data::BySceneLoaded::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "BySceneLoaded",
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

// Line 4370: range 000000000ED2B412-000000000ED2B453
void __cdecl data::BySceneLoadedFactory::BySceneLoadedFactory(data::BySceneLoadedFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BySceneLoadedFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BySceneLoadedFactory = v2;
};

// Line 4378: range 000000000ED2B75C-000000000ED2B835
void __cdecl data::ByRaycast::ByRaycast(data::ByRaycast *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByRaycast + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->raycast_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->raycast_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->raycast_type, v1);
  }
  this->raycast_type = DownToGroundAndWaterOnlyInAir;
  data::DynamicFloat::DynamicFloat(&this->value);
  if ( *(_BYTE *)(((unsigned __int64)&this->compare_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->compare_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->compare_type, v1);
  }
  this->compare_type = Equal_2;
};

// Line 4378: range 000000000ED2BC5A-000000000ED2BDDA
void __cdecl data::ByRaycast::ByRaycast(data::ByRaycast *const this, const data::ByRaycast *a2)
{
  int (**v2)(...); // rdx
  data::RaycastType raycast_type; // ecx
  char v4; // al
  data::DynamicFloat *p_value; // rsi
  data::RelationType compare_type; // ecx
  char v7; // al
  const data::ByRaycast *v8; // [rsp+0h] [rbp-20h]

  v8 = a2;
  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByRaycast + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->raycast_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->raycast_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->raycast_type);
  }
  raycast_type = a2->raycast_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->raycast_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->raycast_type, a2);
  }
  this->raycast_type = raycast_type;
  p_value = &v8->value;
  data::DynamicFloat::DynamicFloat(&this->value, &v8->value);
  if ( *(_BYTE *)(((unsigned __int64)&v8->compare_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->compare_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v8->compare_type);
  }
  compare_type = v8->compare_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->compare_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_value) = v7 != 0;
    __asan_report_store4(&this->compare_type, p_value);
  }
  this->compare_type = compare_type;
};

// Line 4387: range 000000000EDAC80C-000000000EDAC836
void __cdecl data::ByRaycast::~ByRaycast(data::ByRaycast *const this)
{
  data::ByRaycast::~ByRaycast(this);
  operator delete(this, 0x50uLL);
};

// Line 4387: range 000000000EDAC7AE-000000000EDAC80B
void __cdecl data::ByRaycast::~ByRaycast(data::ByRaycast *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByRaycast + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::DynamicFloat::~DynamicFloat(&this->value);
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 4392: range 000000000E6AB89E-000000000E6AB8AE
const char *__cdecl data::ByRaycast::getTypeName(const data::ByRaycast *const this)
{
  return "ByRaycast";
};

// Line 4393: range 000000000E6AB8B0-000000000E6ABA4C
int32_t __cdecl data::ByRaycast::getHashNum(const data::ByRaycast *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByRaycast::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByRaycast",
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

// Line 4409: range 000000000ED2C0C4-000000000ED2C105
void __cdecl data::ByRaycastFactory::ByRaycastFactory(data::ByRaycastFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByRaycastFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByRaycastFactory = v2;
};

// Line 4417: range 000000000ED2C40E-000000000ED2C49B
void __cdecl data::ByTrampolineType::ByTrampolineType(data::ByTrampolineType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate((data::ConfigAbilityPredicate *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ByTrampolineType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  v3 = ((_BYTE)this + 29) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_excited_state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_excited_state >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_excited_state, v3, v4);
  this->is_excited_state = 1;
};

// Line 4417: range 000000000ED2C99C-000000000ED2CA74
void __cdecl data::ByTrampolineType::ByTrampolineType(
        data::ByTrampolineType *const this,
        const data::ByTrampolineType *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_excited_state; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(
    (data::ConfigAbilityPredicate *const)this,
    (const data::ConfigAbilityPredicate *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ByTrampolineType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  v3 = ((_BYTE)a2 + 29) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->is_excited_state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->is_excited_state >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->is_excited_state, v3, v4);
  is_excited_state = a2->is_excited_state;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_excited_state >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 29) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_excited_state, v3, v7);
  this->is_excited_state = is_excited_state;
};

// Line 4424: range 000000000EDAC734-000000000EDAC781
void __cdecl data::ByTrampolineType::~ByTrampolineType(data::ByTrampolineType *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTrampolineType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate((data::ConfigAbilityPredicate *const)this);
};

// Line 4424: range 000000000EDAC782-000000000EDAC7AC
void __cdecl data::ByTrampolineType::~ByTrampolineType(data::ByTrampolineType *const this)
{
  data::ByTrampolineType::~ByTrampolineType(this);
  operator delete(this, 0x20uLL);
};

// Line 4429: range 000000000E6ABA4E-000000000E6ABA5E
const char *__cdecl data::ByTrampolineType::getTypeName(const data::ByTrampolineType *const this)
{
  return "ByTrampolineType";
};

// Line 4430: range 000000000E6ABA60-000000000E6ABBFC
int32_t __cdecl data::ByTrampolineType::getHashNum(const data::ByTrampolineType *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByTrampolineType::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByTrampolineType",
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

// Line 4446: range 000000000ED2CCBE-000000000ED2CCFF
void __cdecl data::ByTrampolineTypeFactory::ByTrampolineTypeFactory(data::ByTrampolineTypeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTrampolineTypeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByTrampolineTypeFactory = v2;
};

// Line 4454: range 000000000ED2D008-000000000ED2D055
void __cdecl data::ByIsInReconnect::ByIsInReconnect(data::ByIsInReconnect *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByIsInReconnect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 4454: range 000000000ED2D4E6-000000000ED2D53E
void __cdecl data::ByIsInReconnect::ByIsInReconnect(data::ByIsInReconnect *const this, const data::ByIsInReconnect *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByIsInReconnect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 4460: range 000000000EDAC6BA-000000000EDAC707
void __cdecl data::ByIsInReconnect::~ByIsInReconnect(data::ByIsInReconnect *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByIsInReconnect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 4460: range 000000000EDAC708-000000000EDAC732
void __cdecl data::ByIsInReconnect::~ByIsInReconnect(data::ByIsInReconnect *const this)
{
  data::ByIsInReconnect::~ByIsInReconnect(this);
  operator delete(this, 0x20uLL);
};

// Line 4465: range 000000000E6ABBFE-000000000E6ABC0E
const char *__cdecl data::ByIsInReconnect::getTypeName(const data::ByIsInReconnect *const this)
{
  return "ByIsInReconnect";
};

// Line 4466: range 000000000E6ABC10-000000000E6ABDAC
int32_t __cdecl data::ByIsInReconnect::getHashNum(const data::ByIsInReconnect *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByIsInReconnect::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByIsInReconnect",
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

// Line 4482: range 000000000ED2D788-000000000ED2D7C9
void __cdecl data::ByIsInReconnectFactory::ByIsInReconnectFactory(data::ByIsInReconnectFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByIsInReconnectFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByIsInReconnectFactory = v2;
};

// Line 4490: range 000000000ED2DAD2-000000000ED2DB5D
void __cdecl data::ByInputDevice::ByInputDevice(data::ByInputDevice *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this);
  v2 = (int (**)(...))(&`vtable for'data::ByInputDevice + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->input_device_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->input_device_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->input_device_type, v1);
  }
  this->input_device_type = TouchScreen;
};

// Line 4490: range 000000000ED2E05E-000000000ED2E12B
void __cdecl data::ByInputDevice::ByInputDevice(data::ByInputDevice *const this, const data::ByInputDevice *a2)
{
  int (**v2)(...); // rdx
  data::InputDeviceType input_device_type; // ecx
  char v4; // al

  data::ConfigAbilityPredicate::ConfigAbilityPredicate(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ByInputDevice + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->input_device_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->input_device_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->input_device_type);
  }
  input_device_type = a2->input_device_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->input_device_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->input_device_type, a2);
  }
  this->input_device_type = input_device_type;
};

// Line 4497: range 000000000EDAC68E-000000000EDAC6B8
void __cdecl data::ByInputDevice::~ByInputDevice(data::ByInputDevice *const this)
{
  data::ByInputDevice::~ByInputDevice(this);
  operator delete(this, 0x28uLL);
};

// Line 4497: range 000000000EDAC640-000000000EDAC68D
void __cdecl data::ByInputDevice::~ByInputDevice(data::ByInputDevice *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByInputDevice + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::ConfigAbilityPredicate::~ConfigAbilityPredicate(this);
};

// Line 4502: range 000000000E6ABDAE-000000000E6ABDBE
const char *__cdecl data::ByInputDevice::getTypeName(const data::ByInputDevice *const this)
{
  return "ByInputDevice";
};

// Line 4503: range 000000000E6ABDC0-000000000E6ABF5C
int32_t __cdecl data::ByInputDevice::getHashNum(const data::ByInputDevice *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByInputDevice::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByInputDevice",
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

// Line 4519: range 000000000ED2E374-000000000ED2E3B5
void __cdecl data::ByInputDeviceFactory::ByInputDeviceFactory(data::ByInputDeviceFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByInputDeviceFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByInputDeviceFactory = v2;
};

// Line 4527: range 000000000ED2E6BE-000000000ED2E751
void __cdecl data::ByHitLevel::ByHitLevel(data::ByHitLevel *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::RelationalOperationPredicate::RelationalOperationPredicate((data::RelationalOperationPredicate *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ByHitLevel + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->hit_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hit_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hit_level, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->hit_level = Mute;
};

// Line 4527: range 000000000ED2EB26-000000000ED2EC03
void __cdecl data::ByHitLevel::ByHitLevel(data::ByHitLevel *const this, const data::ByHitLevel *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::HitLevel hit_level; // ecx
  char v5; // dl

  data::RelationalOperationPredicate::RelationalOperationPredicate(
    (data::RelationalOperationPredicate *const)this,
    (const data::RelationalOperationPredicate *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ByHitLevel + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->hit_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->hit_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->hit_level);
  }
  hit_level = a2->hit_level;
  v5 = *(_BYTE *)(((unsigned __int64)&this->hit_level >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->hit_level, v3);
  }
  this->hit_level = hit_level;
};

// Line 4534: range 000000000EDAC5C6-000000000EDAC613
void __cdecl data::ByHitLevel::~ByHitLevel(data::ByHitLevel *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHitLevel + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  data::RelationalOperationPredicate::~RelationalOperationPredicate((data::RelationalOperationPredicate *const)this);
};

// Line 4534: range 000000000EDAC614-000000000EDAC63E
void __cdecl data::ByHitLevel::~ByHitLevel(data::ByHitLevel *const this)
{
  data::ByHitLevel::~ByHitLevel(this);
  operator delete(this, 0x28uLL);
};

// Line 4539: range 000000000E6ABF5E-000000000E6ABF6E
const char *__cdecl data::ByHitLevel::getTypeName(const data::ByHitLevel *const this)
{
  return "ByHitLevel";
};

// Line 4540: range 000000000E6ABF70-000000000E6AC10C
int32_t __cdecl data::ByHitLevel::getHashNum(const data::ByHitLevel *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByHitLevel::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByHitLevel",
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

// Line 4556: range 000000000ED2EE4C-000000000ED2EE8D
void __cdecl data::ByHitLevelFactory::ByHitLevelFactory(data::ByHitLevelFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByHitLevelFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByHitLevelFactory = v2;
};

// Line 4564: range 000000000ED2F196-000000000ED2F284
void __cdecl data::ByTargetPosToGlobalPosDistance::ByTargetPosToGlobalPosDistance(
        data::ByTargetPosToGlobalPosDistance *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::RelationalOperationPredicate::RelationalOperationPredicate((data::RelationalOperationPredicate *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetPosToGlobalPosDistance + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->compare_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->compare_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->compare_type, v3);
  }
  this->compare_type = XZ;
  data::DynamicFloat::DynamicFloat(&this->value);
  std::string::basic_string(&this->position_key);
  if ( *(char *)(((unsigned __int64)&this->key_from_target >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->key_from_target, v3, &this->key_from_target);
  this->key_from_target = 0;
};

// Line 4564: range 000000000ED2F630-000000000ED2F7F1
void __cdecl data::ByTargetPosToGlobalPosDistance::ByTargetPosToGlobalPosDistance(
        data::ByTargetPosToGlobalPosDistance *const this,
        const data::ByTargetPosToGlobalPosDistance *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::TargetPosToSelfPosType compare_type; // ecx
  char v5; // dl
  std::string *p_position_key; // rsi
  bool key_from_target; // cl
  char v8; // al

  data::RelationalOperationPredicate::RelationalOperationPredicate(
    (data::RelationalOperationPredicate *const)this,
    (const data::RelationalOperationPredicate *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ByTargetPosToGlobalPosDistance + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->compare_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->compare_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->compare_type);
  }
  compare_type = a2->compare_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->compare_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->compare_type, v3);
  }
  this->compare_type = compare_type;
  data::DynamicFloat::DynamicFloat(&this->value, &a2->value);
  p_position_key = &a2->position_key;
  std::string::basic_string(&this->position_key, &a2->position_key);
  if ( *(char *)(((unsigned __int64)&a2->key_from_target >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->key_from_target, p_position_key, &a2->key_from_target);
  key_from_target = a2->key_from_target;
  v8 = *(_BYTE *)(((unsigned __int64)&this->key_from_target >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(p_position_key) = v8 != 0;
    __asan_report_store1(&this->key_from_target, p_position_key, &this->key_from_target);
  }
  this->key_from_target = key_from_target;
};

// Line 4574: range 000000000EDAC59A-000000000EDAC5C4
void __cdecl data::ByTargetPosToGlobalPosDistance::~ByTargetPosToGlobalPosDistance(
        data::ByTargetPosToGlobalPosDistance *const this)
{
  data::ByTargetPosToGlobalPosDistance::~ByTargetPosToGlobalPosDistance(this);
  operator delete(this, 0x70uLL);
};

// Line 4574: range 000000000EDAC52C-000000000EDAC599
void __cdecl data::ByTargetPosToGlobalPosDistance::~ByTargetPosToGlobalPosDistance(
        data::ByTargetPosToGlobalPosDistance *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetPosToGlobalPosDistance + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::string::~string(&this->position_key);
  data::DynamicFloat::~DynamicFloat(&this->value);
  data::RelationalOperationPredicate::~RelationalOperationPredicate((data::RelationalOperationPredicate *const)this);
};

// Line 4579: range 000000000E6AC10E-000000000E6AC11E
const char *__cdecl data::ByTargetPosToGlobalPosDistance::getTypeName(
        const data::ByTargetPosToGlobalPosDistance *const this)
{
  return "ByTargetPosToGlobalPosDistance";
};

// Line 4580: range 000000000E6AC120-000000000E6AC2BC
int32_t __cdecl data::ByTargetPosToGlobalPosDistance::getHashNum(
        const data::ByTargetPosToGlobalPosDistance *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByTargetPosToGlobalPosDistance::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByTargetPosToGlobalPosDistance",
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

// Line 4596: range 000000000ED2FADA-000000000ED2FB1B
void __cdecl data::ByTargetPosToGlobalPosDistanceFactory::ByTargetPosToGlobalPosDistanceFactory(
        data::ByTargetPosToGlobalPosDistanceFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByTargetPosToGlobalPosDistanceFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByTargetPosToGlobalPosDistanceFactory = v2;
};

// Line 4604: range 000000000ED2FE24-000000000ED2FF62
void __cdecl data::ByGlobalPosToGlobalPosDistance::ByGlobalPosToGlobalPosDistance(
        data::ByGlobalPosToGlobalPosDistance *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::RelationalOperationPredicate::RelationalOperationPredicate((data::RelationalOperationPredicate *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ByGlobalPosToGlobalPosDistance + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->compare_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->compare_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->compare_type, v3);
  }
  this->compare_type = XZ;
  data::DynamicFloat::DynamicFloat(&this->value);
  std::string::basic_string(&this->position_key1);
  if ( *(char *)(((unsigned __int64)&this->key1_from_target >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->key1_from_target, v3, &this->key1_from_target);
  this->key1_from_target = 0;
  std::string::basic_string(&this->position_key2);
  if ( *(char *)(((unsigned __int64)&this->key2_from_target >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->key2_from_target, v3, &this->key2_from_target);
  this->key2_from_target = 0;
};

// Line 4604: range 000000000ED30320-000000000ED30591
void __cdecl data::ByGlobalPosToGlobalPosDistance::ByGlobalPosToGlobalPosDistance(
        data::ByGlobalPosToGlobalPosDistance *const this,
        const data::ByGlobalPosToGlobalPosDistance *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::TargetPosToSelfPosType compare_type; // ecx
  char v5; // dl
  std::string *p_position_key1; // rsi
  bool key1_from_target; // cl
  char v8; // al
  std::string *p_position_key2; // rsi
  bool key2_from_target; // cl
  char v11; // al

  data::RelationalOperationPredicate::RelationalOperationPredicate(
    (data::RelationalOperationPredicate *const)this,
    (const data::RelationalOperationPredicate *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ByGlobalPosToGlobalPosDistance + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigAbilityPredicate = v2;
  v3 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->compare_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->compare_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->compare_type);
  }
  compare_type = a2->compare_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->compare_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->compare_type, v3);
  }
  this->compare_type = compare_type;
  data::DynamicFloat::DynamicFloat(&this->value, &a2->value);
  p_position_key1 = &a2->position_key1;
  std::string::basic_string(&this->position_key1, &a2->position_key1);
  if ( *(char *)(((unsigned __int64)&a2->key1_from_target >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->key1_from_target, p_position_key1, &a2->key1_from_target);
  key1_from_target = a2->key1_from_target;
  v8 = *(_BYTE *)(((unsigned __int64)&this->key1_from_target >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(p_position_key1) = v8 != 0;
    __asan_report_store1(&this->key1_from_target, p_position_key1, &this->key1_from_target);
  }
  this->key1_from_target = key1_from_target;
  p_position_key2 = &a2->position_key2;
  std::string::basic_string(&this->position_key2, &a2->position_key2);
  if ( *(char *)(((unsigned __int64)&a2->key2_from_target >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->key2_from_target, p_position_key2, &a2->key2_from_target);
  key2_from_target = a2->key2_from_target;
  v11 = *(_BYTE *)(((unsigned __int64)&this->key2_from_target >> 3) + 0x7FFF8000);
  if ( v11 < 0 )
  {
    LOBYTE(p_position_key2) = v11 != 0;
    __asan_report_store1(&this->key2_from_target, p_position_key2, &this->key2_from_target);
  }
  this->key2_from_target = key2_from_target;
};

// Line 4616: range 000000000EDAC482-000000000EDAC4FF
void __cdecl data::ByGlobalPosToGlobalPosDistance::~ByGlobalPosToGlobalPosDistance(
        data::ByGlobalPosToGlobalPosDistance *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByGlobalPosToGlobalPosDistance + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityPredicate = v2;
  std::string::~string(&this->position_key2);
  std::string::~string(&this->position_key1);
  data::DynamicFloat::~DynamicFloat(&this->value);
  data::RelationalOperationPredicate::~RelationalOperationPredicate((data::RelationalOperationPredicate *const)this);
};

// Line 4616: range 000000000EDAC500-000000000EDAC52A
void __cdecl data::ByGlobalPosToGlobalPosDistance::~ByGlobalPosToGlobalPosDistance(
        data::ByGlobalPosToGlobalPosDistance *const this)
{
  data::ByGlobalPosToGlobalPosDistance::~ByGlobalPosToGlobalPosDistance(this);
  operator delete(this, 0x98uLL);
};

// Line 4621: range 000000000E6AC2BE-000000000E6AC2CE
const char *__cdecl data::ByGlobalPosToGlobalPosDistance::getTypeName(
        const data::ByGlobalPosToGlobalPosDistance *const this)
{
  return "ByGlobalPosToGlobalPosDistance";
};

// Line 4622: range 000000000E6AC2D0-000000000E6AC46C
int32_t __cdecl data::ByGlobalPosToGlobalPosDistance::getHashNum(
        const data::ByGlobalPosToGlobalPosDistance *const this)
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
  *(_QWORD *)(v1 + 16) = data::ByGlobalPosToGlobalPosDistance::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ByGlobalPosToGlobalPosDistance",
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

// Line 4638: range 000000000ED3087A-000000000ED308BB
void __cdecl data::ByGlobalPosToGlobalPosDistanceFactory::ByGlobalPosToGlobalPosDistanceFactory(
        data::ByGlobalPosToGlobalPosDistanceFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ByGlobalPosToGlobalPosDistanceFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ByGlobalPosToGlobalPosDistanceFactory = v2;
};
