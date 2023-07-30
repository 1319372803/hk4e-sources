// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigBattleFervorFormula.h

// Line 34: range 0000000014274E40-0000000014274ECC
void __cdecl data::ConfigBattleFervorUpdatePredicate::ConfigBattleFervorUpdatePredicate(
        data::ConfigBattleFervorUpdatePredicate *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::ConfigBattleFervorUpdatePredicate>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigBattleFervorUpdatePredicate>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorUpdatePredicate + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBattleFervorUpdatePredicate = v2;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 34: range 0000000014275396-000000001427546C
void __cdecl data::ConfigBattleFervorUpdatePredicate::ConfigBattleFervorUpdatePredicate(
        data::ConfigBattleFervorUpdatePredicate *const this,
        const data::ConfigBattleFervorUpdatePredicate *a2)
{
  std::enable_shared_from_this<data::ConfigBattleFervorUpdatePredicate> *v2; // rsi
  int (**v3)(...); // rdx
  bool is_json_loaded; // cl
  char v5; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigBattleFervorUpdatePredicate>;
  std::enable_shared_from_this<data::ConfigBattleFervorUpdatePredicate>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigBattleFervorUpdatePredicate>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorUpdatePredicate + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigBattleFervorUpdatePredicate = v3;
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

// Line 41: range 0000000014275750-000000001427577A
void __cdecl data::ConfigBattleFervorUpdatePredicate::~ConfigBattleFervorUpdatePredicate(
        data::ConfigBattleFervorUpdatePredicate *const this)
{
  data::ConfigBattleFervorUpdatePredicate::~ConfigBattleFervorUpdatePredicate(this);
  operator delete(this, 0x20uLL);
};

// Line 41: range 00000000142756FE-000000001427574F
void __cdecl data::ConfigBattleFervorUpdatePredicate::~ConfigBattleFervorUpdatePredicate(
        data::ConfigBattleFervorUpdatePredicate *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorUpdatePredicate + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBattleFervorUpdatePredicate = v2;
  std::enable_shared_from_this<data::ConfigBattleFervorUpdatePredicate>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigBattleFervorUpdatePredicate>);
};

// Line 46: range 0000000013BC9B28-0000000013BC9B38
const char *__cdecl data::ConfigBattleFervorUpdatePredicate::getTypeName(
        const data::ConfigBattleFervorUpdatePredicate *const this)
{
  return "ConfigBattleFervorUpdatePredicate";
};

// Line 47: range 0000000013BC9B3A-0000000013BC9CD6
int32_t __cdecl data::ConfigBattleFervorUpdatePredicate::getHashNum(
        const data::ConfigBattleFervorUpdatePredicate *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigBattleFervorUpdatePredicate::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBattleFervorUpdatePredicate",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 73: range 000000001427577C-0000000014275851
void __cdecl data::ConfigBattleFervorUpdatePredicate_FactorRange::ConfigBattleFervorUpdatePredicate_FactorRange(
        data::ConfigBattleFervorUpdatePredicate_FactorRange *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigBattleFervorUpdatePredicate::ConfigBattleFervorUpdatePredicate((data::ConfigBattleFervorUpdatePredicate *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorUpdatePredicate_FactorRange + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBattleFervorUpdatePredicate = v2;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->min, v3);
  }
  this->min = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max, v3);
  }
  this->max = 0.0;
};

// Line 73: range 0000000014275D5E-0000000014275EB6
void __cdecl data::ConfigBattleFervorUpdatePredicate_FactorRange::ConfigBattleFervorUpdatePredicate_FactorRange(
        data::ConfigBattleFervorUpdatePredicate_FactorRange *const this,
        const data::ConfigBattleFervorUpdatePredicate_FactorRange *a2)
{
  int (**v2)(...); // rdx
  float min; // xmm0_4
  __int64 v4; // rsi
  float max; // xmm0_4

  data::ConfigBattleFervorUpdatePredicate::ConfigBattleFervorUpdatePredicate(
    (data::ConfigBattleFervorUpdatePredicate *const)this,
    (const data::ConfigBattleFervorUpdatePredicate *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorUpdatePredicate_FactorRange + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBattleFervorUpdatePredicate = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->min >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->min);
  }
  min = a2->min;
  v4 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->min, v4);
  }
  this->min = min;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->max);
  }
  max = a2->max;
  if ( *(_BYTE *)(((unsigned __int64)&this->max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max, v4);
  }
  this->max = max;
};

// Line 81: range 00000000142A1AE4-00000000142A1B0E
void __cdecl data::ConfigBattleFervorUpdatePredicate_FactorRange::~ConfigBattleFervorUpdatePredicate_FactorRange(
        data::ConfigBattleFervorUpdatePredicate_FactorRange *const this)
{
  data::ConfigBattleFervorUpdatePredicate_FactorRange::~ConfigBattleFervorUpdatePredicate_FactorRange(this);
  operator delete(this, 0x28uLL);
};

// Line 81: range 00000000142A1A96-00000000142A1AE3
void __cdecl data::ConfigBattleFervorUpdatePredicate_FactorRange::~ConfigBattleFervorUpdatePredicate_FactorRange(
        data::ConfigBattleFervorUpdatePredicate_FactorRange *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorUpdatePredicate_FactorRange + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBattleFervorUpdatePredicate = v2;
  data::ConfigBattleFervorUpdatePredicate::~ConfigBattleFervorUpdatePredicate((data::ConfigBattleFervorUpdatePredicate *const)this);
};

// Line 86: range 0000000013BC9CD8-0000000013BC9CE8
const char *__cdecl data::ConfigBattleFervorUpdatePredicate_FactorRange::getTypeName(
        const data::ConfigBattleFervorUpdatePredicate_FactorRange *const this)
{
  return "ConfigBattleFervorUpdatePredicate_FactorRange";
};

// Line 87: range 0000000013BC9CEA-0000000013BC9E86
int32_t __cdecl data::ConfigBattleFervorUpdatePredicate_FactorRange::getHashNum(
        const data::ConfigBattleFervorUpdatePredicate_FactorRange *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigBattleFervorUpdatePredicate_FactorRange::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBattleFervorUpdatePredicate_FactorRange",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 103: range 0000000014276100-0000000014276141
void __cdecl data::ConfigBattleFervorUpdatePredicate_FactorRangeFactory::ConfigBattleFervorUpdatePredicate_FactorRangeFactory(
        data::ConfigBattleFervorUpdatePredicate_FactorRangeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorUpdatePredicate_FactorRangeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBattleFervorUpdatePredicate_FactorRangeFactory = v2;
};

// Line 111: range 000000001427644A-00000000142764D7
void __cdecl data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle(
        data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigBattleFervorUpdatePredicate::ConfigBattleFervorUpdatePredicate((data::ConfigBattleFervorUpdatePredicate *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBattleFervorUpdatePredicate = v2;
  v3 = ((_BYTE)this + 25) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_update_in_battle >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_update_in_battle >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_update_in_battle, v3, v4);
  this->is_update_in_battle = 1;
};

// Line 111: range 0000000014276960-0000000014276A38
void __cdecl data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle(
        data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle *const this,
        const data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_update_in_battle; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigBattleFervorUpdatePredicate::ConfigBattleFervorUpdatePredicate(
    (data::ConfigBattleFervorUpdatePredicate *const)this,
    (const data::ConfigBattleFervorUpdatePredicate *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBattleFervorUpdatePredicate = v2;
  v3 = ((_BYTE)a2 + 25) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->is_update_in_battle >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->is_update_in_battle >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->is_update_in_battle, v3, v4);
  is_update_in_battle = a2->is_update_in_battle;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_update_in_battle >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 25) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_update_in_battle, v3, v7);
  this->is_update_in_battle = is_update_in_battle;
};

// Line 118: range 00000000142A1A1C-00000000142A1A69
void __cdecl data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle::~ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle(
        data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBattleFervorUpdatePredicate = v2;
  data::ConfigBattleFervorUpdatePredicate::~ConfigBattleFervorUpdatePredicate((data::ConfigBattleFervorUpdatePredicate *const)this);
};

// Line 118: range 00000000142A1A6A-00000000142A1A94
void __cdecl data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle::~ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle(
        data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle *const this)
{
  data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle::~ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle(this);
  operator delete(this, 0x20uLL);
};

// Line 123: range 0000000013BC9E88-0000000013BC9E98
const char *__cdecl data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle::getTypeName(
        const data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle *const this)
{
  return "ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle";
};

// Line 124: range 0000000013BC9E9A-0000000013BCA036
int32_t __cdecl data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle::getHashNum(
        const data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 140: range 0000000014276C82-0000000014276CC3
void __cdecl data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattleFactory::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattleFactory(
        data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattleFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattleFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBattleFervorUpdatePredicate_LocalAvatarInBattleFactory = v2;
};

// Line 148: range 0000000014277004-00000000142770E5
void __cdecl data::ConfigBattleFervorUpdateTrigger::ConfigBattleFervorUpdateTrigger(
        data::ConfigBattleFervorUpdateTrigger *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  std::enable_shared_from_this<data::ConfigBattleFervorUpdateTrigger>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigBattleFervorUpdateTrigger>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorUpdateTrigger + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBattleFervorUpdateTrigger = v2;
  std::vector<std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>>::vector(&this->predicates);
  if ( *(_BYTE *)(((unsigned __int64)&this->delta_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->delta_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->delta_value, v1);
  }
  this->delta_value = 0.0;
  v3 = ((_BYTE)this + 52) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 148: range 000000001427758E-0000000014277728
void __cdecl data::ConfigBattleFervorUpdateTrigger::ConfigBattleFervorUpdateTrigger(
        data::ConfigBattleFervorUpdateTrigger *const this,
        const data::ConfigBattleFervorUpdateTrigger *a2)
{
  std::enable_shared_from_this<data::ConfigBattleFervorUpdateTrigger> *v2; // rsi
  int (**v3)(...); // rdx
  float delta_value; // xmm0_4
  __int64 v5; // rsi
  __int64 v6; // rdx
  bool is_json_loaded; // cl
  char v8; // dl
  __int64 v9; // rdx

  v2 = &a2->std::enable_shared_from_this<data::ConfigBattleFervorUpdateTrigger>;
  std::enable_shared_from_this<data::ConfigBattleFervorUpdateTrigger>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigBattleFervorUpdateTrigger>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorUpdateTrigger + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigBattleFervorUpdateTrigger = v3;
  std::vector<std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>>::vector(&this->predicates, &a2->predicates);
  if ( *(_BYTE *)(((unsigned __int64)&a2->delta_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->delta_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->delta_value);
  }
  delta_value = a2->delta_value;
  if ( *(_BYTE *)(((unsigned __int64)&this->delta_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->delta_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->delta_value, &a2->predicates);
  }
  this->delta_value = delta_value;
  v5 = ((_BYTE)a2 + 52) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&a2->is_json_loaded, v5, v6);
  is_json_loaded = a2->is_json_loaded;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((((unsigned __int8)this + 52) & 7) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_json_loaded, v5, v9);
  this->is_json_loaded = is_json_loaded;
};

// Line 157: range 0000000014277A5A-0000000014277ABB
void __cdecl data::ConfigBattleFervorUpdateTrigger::~ConfigBattleFervorUpdateTrigger(
        data::ConfigBattleFervorUpdateTrigger *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorUpdateTrigger + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBattleFervorUpdateTrigger = v2;
  std::vector<std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>>::~vector(&this->predicates);
  std::enable_shared_from_this<data::ConfigBattleFervorUpdateTrigger>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigBattleFervorUpdateTrigger>);
};

// Line 157: range 0000000014277ABC-0000000014277AE6
void __cdecl data::ConfigBattleFervorUpdateTrigger::~ConfigBattleFervorUpdateTrigger(
        data::ConfigBattleFervorUpdateTrigger *const this)
{
  data::ConfigBattleFervorUpdateTrigger::~ConfigBattleFervorUpdateTrigger(this);
  operator delete(this, 0x38uLL);
};

// Line 162: range 0000000013BCA038-0000000013BCA048
const char *__cdecl data::ConfigBattleFervorUpdateTrigger::getTypeName(
        const data::ConfigBattleFervorUpdateTrigger *const this)
{
  return "ConfigBattleFervorUpdateTrigger";
};

// Line 163: range 0000000013BCA04A-0000000013BCA1E6
int32_t __cdecl data::ConfigBattleFervorUpdateTrigger::getHashNum(
        const data::ConfigBattleFervorUpdateTrigger *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigBattleFervorUpdateTrigger::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBattleFervorUpdateTrigger",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 189: range 0000000014277AE8-0000000014277B35
void __cdecl data::ConfigBattleFervorUpateTrigger_ByTick::ConfigBattleFervorUpateTrigger_ByTick(
        data::ConfigBattleFervorUpateTrigger_ByTick *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBattleFervorUpdateTrigger::ConfigBattleFervorUpdateTrigger(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorUpateTrigger_ByTick + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBattleFervorUpdateTrigger = v2;
};

// Line 189: range 0000000014277F2A-0000000014277F82
void __cdecl data::ConfigBattleFervorUpateTrigger_ByTick::ConfigBattleFervorUpateTrigger_ByTick(
        data::ConfigBattleFervorUpateTrigger_ByTick *const this,
        const data::ConfigBattleFervorUpateTrigger_ByTick *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBattleFervorUpdateTrigger::ConfigBattleFervorUpdateTrigger(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorUpateTrigger_ByTick + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBattleFervorUpdateTrigger = v2;
};

// Line 195: range 00000000142A19F0-00000000142A1A1A
void __cdecl data::ConfigBattleFervorUpateTrigger_ByTick::~ConfigBattleFervorUpateTrigger_ByTick(
        data::ConfigBattleFervorUpateTrigger_ByTick *const this)
{
  data::ConfigBattleFervorUpateTrigger_ByTick::~ConfigBattleFervorUpateTrigger_ByTick(this);
  operator delete(this, 0x38uLL);
};

// Line 195: range 00000000142A19A2-00000000142A19EF
void __cdecl data::ConfigBattleFervorUpateTrigger_ByTick::~ConfigBattleFervorUpateTrigger_ByTick(
        data::ConfigBattleFervorUpateTrigger_ByTick *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorUpateTrigger_ByTick + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBattleFervorUpdateTrigger = v2;
  data::ConfigBattleFervorUpdateTrigger::~ConfigBattleFervorUpdateTrigger(this);
};

// Line 200: range 0000000013BCA1E8-0000000013BCA1F8
const char *__cdecl data::ConfigBattleFervorUpateTrigger_ByTick::getTypeName(
        const data::ConfigBattleFervorUpateTrigger_ByTick *const this)
{
  return "ConfigBattleFervorUpateTrigger_ByTick";
};

// Line 201: range 0000000013BCA1FA-0000000013BCA396
int32_t __cdecl data::ConfigBattleFervorUpateTrigger_ByTick::getHashNum(
        const data::ConfigBattleFervorUpateTrigger_ByTick *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigBattleFervorUpateTrigger_ByTick::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBattleFervorUpateTrigger_ByTick",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 217: range 000000001427826C-00000000142782AD
void __cdecl data::ConfigBattleFervorUpateTrigger_ByTickFactory::ConfigBattleFervorUpateTrigger_ByTickFactory(
        data::ConfigBattleFervorUpateTrigger_ByTickFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorUpateTrigger_ByTickFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBattleFervorUpateTrigger_ByTickFactory = v2;
};

// Line 225: range 00000000142785B6-0000000014278691
void __cdecl data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged::ConfigBattleFervorUpdateTrigger_ByStateIDChanged(
        data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBattleFervorUpdateTrigger::ConfigBattleFervorUpdateTrigger(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBattleFervorUpdateTrigger = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = 0;
  std::vector<std::string>::vector(&this->state_ids);
  if ( *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cd, v1);
  }
  this->cd = 0.0;
};

// Line 225: range 0000000014278A46-0000000014278BC9
void __cdecl data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged::ConfigBattleFervorUpdateTrigger_ByStateIDChanged(
        data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged *const this,
        const data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged *a2)
{
  int (**v2)(...); // rdx
  data::BattleFervorStateIDTriggerType type; // ecx
  char v4; // al
  float cd; // xmm0_4
  const data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged *v6; // [rsp+0h] [rbp-20h]

  v6 = a2;
  data::ConfigBattleFervorUpdateTrigger::ConfigBattleFervorUpdateTrigger(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBattleFervorUpdateTrigger = v2;
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
  std::vector<std::string>::vector(&this->state_ids, &v6->state_ids);
  if ( *(_BYTE *)(((unsigned __int64)&v6->cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v6->cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v6->cd);
  }
  cd = v6->cd;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cd, &v6->state_ids);
  }
  this->cd = cd;
};

// Line 234: range 00000000142A1976-00000000142A19A0
void __cdecl data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged::~ConfigBattleFervorUpdateTrigger_ByStateIDChanged(
        data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged *const this)
{
  data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged::~ConfigBattleFervorUpdateTrigger_ByStateIDChanged(this);
  operator delete(this, 0x60uLL);
};

// Line 234: range 00000000142A1918-00000000142A1975
void __cdecl data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged::~ConfigBattleFervorUpdateTrigger_ByStateIDChanged(
        data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBattleFervorUpdateTrigger = v2;
  std::vector<std::string>::~vector(&this->state_ids);
  data::ConfigBattleFervorUpdateTrigger::~ConfigBattleFervorUpdateTrigger(this);
};

// Line 239: range 0000000013BCA398-0000000013BCA3A8
const char *__cdecl data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged::getTypeName(
        const data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged *const this)
{
  return "ConfigBattleFervorUpdateTrigger_ByStateIDChanged";
};

// Line 240: range 0000000013BCA3AA-0000000013BCA546
int32_t __cdecl data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged::getHashNum(
        const data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBattleFervorUpdateTrigger_ByStateIDChanged",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 256: range 0000000014278EB2-0000000014278EF3
void __cdecl data::ConfigBattleFervorUpdateTrigger_ByStateIDChangedFactory::ConfigBattleFervorUpdateTrigger_ByStateIDChangedFactory(
        data::ConfigBattleFervorUpdateTrigger_ByStateIDChangedFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorUpdateTrigger_ByStateIDChangedFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBattleFervorUpdateTrigger_ByStateIDChangedFactory = v2;
};

// Line 264: range 00000000142791FC-0000000014279299
void __cdecl data::ConfigBattleFervorUpdateTrigger_ByAttackTag::ConfigBattleFervorUpdateTrigger_ByAttackTag(
        data::ConfigBattleFervorUpdateTrigger_ByAttackTag *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBattleFervorUpdateTrigger::ConfigBattleFervorUpdateTrigger(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorUpdateTrigger_ByAttackTag + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBattleFervorUpdateTrigger = v2;
  std::vector<std::string>::vector(&this->attack_tags);
  if ( *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cd, v1);
  }
  this->cd = 0.0;
};

// Line 264: range 0000000014279654-0000000014279762
void __cdecl data::ConfigBattleFervorUpdateTrigger_ByAttackTag::ConfigBattleFervorUpdateTrigger_ByAttackTag(
        data::ConfigBattleFervorUpdateTrigger_ByAttackTag *const this,
        const data::ConfigBattleFervorUpdateTrigger_ByAttackTag *a2)
{
  int (**v2)(...); // rdx
  float cd; // xmm0_4

  data::ConfigBattleFervorUpdateTrigger::ConfigBattleFervorUpdateTrigger(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorUpdateTrigger_ByAttackTag + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBattleFervorUpdateTrigger = v2;
  std::vector<std::string>::vector(&this->attack_tags, &a2->attack_tags);
  if ( *(_BYTE *)(((unsigned __int64)&a2->cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cd);
  }
  cd = a2->cd;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cd, &a2->attack_tags);
  }
  this->cd = cd;
};

// Line 272: range 00000000142A188E-00000000142A18EB
void __cdecl data::ConfigBattleFervorUpdateTrigger_ByAttackTag::~ConfigBattleFervorUpdateTrigger_ByAttackTag(
        data::ConfigBattleFervorUpdateTrigger_ByAttackTag *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorUpdateTrigger_ByAttackTag + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBattleFervorUpdateTrigger = v2;
  std::vector<std::string>::~vector(&this->attack_tags);
  data::ConfigBattleFervorUpdateTrigger::~ConfigBattleFervorUpdateTrigger(this);
};

// Line 272: range 00000000142A18EC-00000000142A1916
void __cdecl data::ConfigBattleFervorUpdateTrigger_ByAttackTag::~ConfigBattleFervorUpdateTrigger_ByAttackTag(
        data::ConfigBattleFervorUpdateTrigger_ByAttackTag *const this)
{
  data::ConfigBattleFervorUpdateTrigger_ByAttackTag::~ConfigBattleFervorUpdateTrigger_ByAttackTag(this);
  operator delete(this, 0x58uLL);
};

// Line 277: range 0000000013BCA548-0000000013BCA558
const char *__cdecl data::ConfigBattleFervorUpdateTrigger_ByAttackTag::getTypeName(
        const data::ConfigBattleFervorUpdateTrigger_ByAttackTag *const this)
{
  return "ConfigBattleFervorUpdateTrigger_ByAttackTag";
};

// Line 278: range 0000000013BCA55A-0000000013BCA6F6
int32_t __cdecl data::ConfigBattleFervorUpdateTrigger_ByAttackTag::getHashNum(
        const data::ConfigBattleFervorUpdateTrigger_ByAttackTag *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigBattleFervorUpdateTrigger_ByAttackTag::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBattleFervorUpdateTrigger_ByAttackTag",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 294: range 0000000014279A4C-0000000014279A8D
void __cdecl data::ConfigBattleFervorUpdateTrigger_ByAttackTagFactory::ConfigBattleFervorUpdateTrigger_ByAttackTagFactory(
        data::ConfigBattleFervorUpdateTrigger_ByAttackTagFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorUpdateTrigger_ByAttackTagFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBattleFervorUpdateTrigger_ByAttackTagFactory = v2;
};

// Line 302: range 0000000014279D96-0000000014279E23
void __cdecl data::ConfigBattleFervorUpdateTrigger_ByElementArt::ConfigBattleFervorUpdateTrigger_ByElementArt(
        data::ConfigBattleFervorUpdateTrigger_ByElementArt *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBattleFervorUpdateTrigger::ConfigBattleFervorUpdateTrigger(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorUpdateTrigger_ByElementArt + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBattleFervorUpdateTrigger = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cd, v1);
  }
  this->cd = 0.0;
};

// Line 302: range 000000001427A228-000000001427A2F8
void __cdecl data::ConfigBattleFervorUpdateTrigger_ByElementArt::ConfigBattleFervorUpdateTrigger_ByElementArt(
        data::ConfigBattleFervorUpdateTrigger_ByElementArt *const this,
        const data::ConfigBattleFervorUpdateTrigger_ByElementArt *a2)
{
  int (**v2)(...); // rdx
  float cd; // xmm0_4

  data::ConfigBattleFervorUpdateTrigger::ConfigBattleFervorUpdateTrigger(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorUpdateTrigger_ByElementArt + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBattleFervorUpdateTrigger = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cd);
  }
  cd = a2->cd;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cd, a2);
  }
  this->cd = cd;
};

// Line 309: range 00000000142A1814-00000000142A1861
void __cdecl data::ConfigBattleFervorUpdateTrigger_ByElementArt::~ConfigBattleFervorUpdateTrigger_ByElementArt(
        data::ConfigBattleFervorUpdateTrigger_ByElementArt *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorUpdateTrigger_ByElementArt + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBattleFervorUpdateTrigger = v2;
  data::ConfigBattleFervorUpdateTrigger::~ConfigBattleFervorUpdateTrigger(this);
};

// Line 309: range 00000000142A1862-00000000142A188C
void __cdecl data::ConfigBattleFervorUpdateTrigger_ByElementArt::~ConfigBattleFervorUpdateTrigger_ByElementArt(
        data::ConfigBattleFervorUpdateTrigger_ByElementArt *const this)
{
  data::ConfigBattleFervorUpdateTrigger_ByElementArt::~ConfigBattleFervorUpdateTrigger_ByElementArt(this);
  operator delete(this, 0x40uLL);
};

// Line 314: range 0000000013BCA6F8-0000000013BCA708
const char *__cdecl data::ConfigBattleFervorUpdateTrigger_ByElementArt::getTypeName(
        const data::ConfigBattleFervorUpdateTrigger_ByElementArt *const this)
{
  return "ConfigBattleFervorUpdateTrigger_ByElementArt";
};

// Line 315: range 0000000013BCA70A-0000000013BCA8A6
int32_t __cdecl data::ConfigBattleFervorUpdateTrigger_ByElementArt::getHashNum(
        const data::ConfigBattleFervorUpdateTrigger_ByElementArt *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigBattleFervorUpdateTrigger_ByElementArt::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBattleFervorUpdateTrigger_ByElementArt",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 331: range 000000001427A5E2-000000001427A623
void __cdecl data::ConfigBattleFervorUpdateTrigger_ByElementArtFactory::ConfigBattleFervorUpdateTrigger_ByElementArtFactory(
        data::ConfigBattleFervorUpdateTrigger_ByElementArtFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorUpdateTrigger_ByElementArtFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBattleFervorUpdateTrigger_ByElementArtFactory = v2;
};

// Line 339: range 000000001427A92C-000000001427A9B9
void __cdecl data::ConfigBattleFervorUpdateTrigger_ByElementBurst::ConfigBattleFervorUpdateTrigger_ByElementBurst(
        data::ConfigBattleFervorUpdateTrigger_ByElementBurst *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBattleFervorUpdateTrigger::ConfigBattleFervorUpdateTrigger(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorUpdateTrigger_ByElementBurst + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBattleFervorUpdateTrigger = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cd, v1);
  }
  this->cd = 0.0;
};

// Line 339: range 000000001427ADBE-000000001427AE8E
void __cdecl data::ConfigBattleFervorUpdateTrigger_ByElementBurst::ConfigBattleFervorUpdateTrigger_ByElementBurst(
        data::ConfigBattleFervorUpdateTrigger_ByElementBurst *const this,
        const data::ConfigBattleFervorUpdateTrigger_ByElementBurst *a2)
{
  int (**v2)(...); // rdx
  float cd; // xmm0_4

  data::ConfigBattleFervorUpdateTrigger::ConfigBattleFervorUpdateTrigger(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorUpdateTrigger_ByElementBurst + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBattleFervorUpdateTrigger = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cd);
  }
  cd = a2->cd;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cd, a2);
  }
  this->cd = cd;
};

// Line 346: range 00000000142A179A-00000000142A17E7
void __cdecl data::ConfigBattleFervorUpdateTrigger_ByElementBurst::~ConfigBattleFervorUpdateTrigger_ByElementBurst(
        data::ConfigBattleFervorUpdateTrigger_ByElementBurst *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorUpdateTrigger_ByElementBurst + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBattleFervorUpdateTrigger = v2;
  data::ConfigBattleFervorUpdateTrigger::~ConfigBattleFervorUpdateTrigger(this);
};

// Line 346: range 00000000142A17E8-00000000142A1812
void __cdecl data::ConfigBattleFervorUpdateTrigger_ByElementBurst::~ConfigBattleFervorUpdateTrigger_ByElementBurst(
        data::ConfigBattleFervorUpdateTrigger_ByElementBurst *const this)
{
  data::ConfigBattleFervorUpdateTrigger_ByElementBurst::~ConfigBattleFervorUpdateTrigger_ByElementBurst(this);
  operator delete(this, 0x40uLL);
};

// Line 351: range 0000000013BCA8A8-0000000013BCA8B8
const char *__cdecl data::ConfigBattleFervorUpdateTrigger_ByElementBurst::getTypeName(
        const data::ConfigBattleFervorUpdateTrigger_ByElementBurst *const this)
{
  return "ConfigBattleFervorUpdateTrigger_ByElementBurst";
};

// Line 352: range 0000000013BCA8BA-0000000013BCAA56
int32_t __cdecl data::ConfigBattleFervorUpdateTrigger_ByElementBurst::getHashNum(
        const data::ConfigBattleFervorUpdateTrigger_ByElementBurst *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigBattleFervorUpdateTrigger_ByElementBurst::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBattleFervorUpdateTrigger_ByElementBurst",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 368: range 000000001427B178-000000001427B1B9
void __cdecl data::ConfigBattleFervorUpdateTrigger_ByElementBurstFactory::ConfigBattleFervorUpdateTrigger_ByElementBurstFactory(
        data::ConfigBattleFervorUpdateTrigger_ByElementBurstFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorUpdateTrigger_ByElementBurstFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBattleFervorUpdateTrigger_ByElementBurstFactory = v2;
};

// Line 376: range 000000001427B4C2-000000001427B54D
void __cdecl data::ConfigBattleFervorUpdateTrigger_ByMonster::ConfigBattleFervorUpdateTrigger_ByMonster(
        data::ConfigBattleFervorUpdateTrigger_ByMonster *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBattleFervorUpdateTrigger::ConfigBattleFervorUpdateTrigger(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorUpdateTrigger_ByMonster + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBattleFervorUpdateTrigger = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->combat_bgmlevel >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->combat_bgmlevel >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->combat_bgmlevel, v1);
  }
  this->combat_bgmlevel = 0;
};

// Line 376: range 000000001427B952-000000001427BA1F
void __cdecl data::ConfigBattleFervorUpdateTrigger_ByMonster::ConfigBattleFervorUpdateTrigger_ByMonster(
        data::ConfigBattleFervorUpdateTrigger_ByMonster *const this,
        const data::ConfigBattleFervorUpdateTrigger_ByMonster *a2)
{
  int (**v2)(...); // rdx
  int32_t combat_bgmlevel; // ecx
  char v4; // al

  data::ConfigBattleFervorUpdateTrigger::ConfigBattleFervorUpdateTrigger(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorUpdateTrigger_ByMonster + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBattleFervorUpdateTrigger = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->combat_bgmlevel >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->combat_bgmlevel >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->combat_bgmlevel);
  }
  combat_bgmlevel = a2->combat_bgmlevel;
  v4 = *(_BYTE *)(((unsigned __int64)&this->combat_bgmlevel >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->combat_bgmlevel, a2);
  }
  this->combat_bgmlevel = combat_bgmlevel;
};

// Line 383: range 00000000142A1720-00000000142A176D
void __cdecl data::ConfigBattleFervorUpdateTrigger_ByMonster::~ConfigBattleFervorUpdateTrigger_ByMonster(
        data::ConfigBattleFervorUpdateTrigger_ByMonster *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorUpdateTrigger_ByMonster + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBattleFervorUpdateTrigger = v2;
  data::ConfigBattleFervorUpdateTrigger::~ConfigBattleFervorUpdateTrigger(this);
};

// Line 383: range 00000000142A176E-00000000142A1798
void __cdecl data::ConfigBattleFervorUpdateTrigger_ByMonster::~ConfigBattleFervorUpdateTrigger_ByMonster(
        data::ConfigBattleFervorUpdateTrigger_ByMonster *const this)
{
  data::ConfigBattleFervorUpdateTrigger_ByMonster::~ConfigBattleFervorUpdateTrigger_ByMonster(this);
  operator delete(this, 0x40uLL);
};

// Line 388: range 0000000013BCAA58-0000000013BCAA68
const char *__cdecl data::ConfigBattleFervorUpdateTrigger_ByMonster::getTypeName(
        const data::ConfigBattleFervorUpdateTrigger_ByMonster *const this)
{
  return "ConfigBattleFervorUpdateTrigger_ByMonster";
};

// Line 389: range 0000000013BCAA6A-0000000013BCAC06
int32_t __cdecl data::ConfigBattleFervorUpdateTrigger_ByMonster::getHashNum(
        const data::ConfigBattleFervorUpdateTrigger_ByMonster *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigBattleFervorUpdateTrigger_ByMonster::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBattleFervorUpdateTrigger_ByMonster",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 405: range 000000001427BD08-000000001427BD49
void __cdecl data::ConfigBattleFervorUpdateTrigger_ByMonsterFactory::ConfigBattleFervorUpdateTrigger_ByMonsterFactory(
        data::ConfigBattleFervorUpdateTrigger_ByMonsterFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorUpdateTrigger_ByMonsterFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBattleFervorUpdateTrigger_ByMonsterFactory = v2;
};

// Line 420: range 000000001427C0A8-000000001427C201
void __cdecl data::ConfigBattleFervorFactor::ConfigBattleFervorFactor(data::ConfigBattleFervorFactor *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx

  std::enable_shared_from_this<data::ConfigBattleFervorFactor>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigBattleFervorFactor>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorFactor + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBattleFervorFactor = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->factor_min_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->factor_min_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->factor_min_value, v1);
  }
  this->factor_min_value = 0.0;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->factor_max_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->factor_max_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->factor_max_value, v3);
  }
  this->factor_max_value = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->factor_init_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->factor_init_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->factor_init_value, v3);
  }
  this->factor_init_value = 0.0;
  v4 = ((_BYTE)this + 36) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_json_loaded, v4, v5);
  this->is_json_loaded = 0;
};

// Line 420: range 000000001427C68A-000000001427C8E2
void __cdecl data::ConfigBattleFervorFactor::ConfigBattleFervorFactor(
        data::ConfigBattleFervorFactor *const this,
        const data::ConfigBattleFervorFactor *a2)
{
  std::enable_shared_from_this<data::ConfigBattleFervorFactor> *v2; // rsi
  int (**v3)(...); // rdx
  float factor_min_value; // xmm0_4
  float factor_max_value; // xmm0_4
  __int64 v6; // rsi
  float factor_init_value; // xmm0_4
  __int64 v8; // rsi
  __int64 v9; // rdx
  bool is_json_loaded; // cl
  char v11; // dl
  __int64 v12; // rdx

  v2 = &a2->std::enable_shared_from_this<data::ConfigBattleFervorFactor>;
  std::enable_shared_from_this<data::ConfigBattleFervorFactor>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigBattleFervorFactor>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorFactor + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigBattleFervorFactor = v3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->factor_min_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->factor_min_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->factor_min_value);
  }
  factor_min_value = a2->factor_min_value;
  if ( *(_BYTE *)(((unsigned __int64)&this->factor_min_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->factor_min_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->factor_min_value, v2);
  }
  this->factor_min_value = factor_min_value;
  if ( *(_BYTE *)(((unsigned __int64)&a2->factor_max_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->factor_max_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->factor_max_value);
  }
  factor_max_value = a2->factor_max_value;
  v6 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->factor_max_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->factor_max_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->factor_max_value, v6);
  }
  this->factor_max_value = factor_max_value;
  if ( *(_BYTE *)(((unsigned __int64)&a2->factor_init_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->factor_init_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->factor_init_value);
  }
  factor_init_value = a2->factor_init_value;
  if ( *(_BYTE *)(((unsigned __int64)&this->factor_init_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->factor_init_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->factor_init_value, v6);
  }
  this->factor_init_value = factor_init_value;
  v8 = ((_BYTE)a2 + 36) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_load1(&a2->is_json_loaded, v8, v9);
  is_json_loaded = a2->is_json_loaded;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v11 != 0;
  v12 = (v11 != 0) & (unsigned __int8)((((unsigned __int8)this + 36) & 7) >= v11);
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->is_json_loaded, v8, v12);
  this->is_json_loaded = is_json_loaded;
};

// Line 430: range 000000001427CBC6-000000001427CBF0
void __cdecl data::ConfigBattleFervorFactor::~ConfigBattleFervorFactor(data::ConfigBattleFervorFactor *const this)
{
  data::ConfigBattleFervorFactor::~ConfigBattleFervorFactor(this);
  operator delete(this, 0x28uLL);
};

// Line 430: range 000000001427CB74-000000001427CBC5
void __cdecl data::ConfigBattleFervorFactor::~ConfigBattleFervorFactor(data::ConfigBattleFervorFactor *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorFactor + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBattleFervorFactor = v2;
  std::enable_shared_from_this<data::ConfigBattleFervorFactor>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigBattleFervorFactor>);
};

// Line 435: range 0000000013BCAC08-0000000013BCAC18
const char *__cdecl data::ConfigBattleFervorFactor::getTypeName(const data::ConfigBattleFervorFactor *const this)
{
  return "ConfigBattleFervorFactor";
};

// Line 436: range 0000000013BCAC1A-0000000013BCADB6
int32_t __cdecl data::ConfigBattleFervorFactor::getHashNum(const data::ConfigBattleFervorFactor *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigBattleFervorFactor::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBattleFervorFactor",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 462: range 000000001427CC2A-000000001427CC87
void __cdecl data::ConfigBattleFervorFactor_ByTrigger::ConfigBattleFervorFactor_ByTrigger(
        data::ConfigBattleFervorFactor_ByTrigger *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBattleFervorFactor::ConfigBattleFervorFactor(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorFactor_ByTrigger + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBattleFervorFactor = v2;
  std::vector<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>>::vector(&this->triggers);
};

// Line 462: range 000000001427D08C-000000001427D122
void __cdecl data::ConfigBattleFervorFactor_ByTrigger::ConfigBattleFervorFactor_ByTrigger(
        data::ConfigBattleFervorFactor_ByTrigger *const this,
        const data::ConfigBattleFervorFactor_ByTrigger *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBattleFervorFactor::ConfigBattleFervorFactor(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorFactor_ByTrigger + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBattleFervorFactor = v2;
  std::vector<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>>::vector(&this->triggers, &a2->triggers);
};

// Line 469: range 00000000142A1696-00000000142A16F3
void __cdecl data::ConfigBattleFervorFactor_ByTrigger::~ConfigBattleFervorFactor_ByTrigger(
        data::ConfigBattleFervorFactor_ByTrigger *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorFactor_ByTrigger + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBattleFervorFactor = v2;
  std::vector<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>>::~vector(&this->triggers);
  data::ConfigBattleFervorFactor::~ConfigBattleFervorFactor(this);
};

// Line 469: range 00000000142A16F4-00000000142A171E
void __cdecl data::ConfigBattleFervorFactor_ByTrigger::~ConfigBattleFervorFactor_ByTrigger(
        data::ConfigBattleFervorFactor_ByTrigger *const this)
{
  data::ConfigBattleFervorFactor_ByTrigger::~ConfigBattleFervorFactor_ByTrigger(this);
  operator delete(this, 0x40uLL);
};

// Line 474: range 0000000013BCADB8-0000000013BCADC8
const char *__cdecl data::ConfigBattleFervorFactor_ByTrigger::getTypeName(
        const data::ConfigBattleFervorFactor_ByTrigger *const this)
{
  return "ConfigBattleFervorFactor_ByTrigger";
};

// Line 475: range 0000000013BCADCA-0000000013BCAF66
int32_t __cdecl data::ConfigBattleFervorFactor_ByTrigger::getHashNum(
        const data::ConfigBattleFervorFactor_ByTrigger *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigBattleFervorFactor_ByTrigger::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBattleFervorFactor_ByTrigger",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 491: range 000000001427D40C-000000001427D44D
void __cdecl data::ConfigBattleFervorFactor_ByTriggerFactory::ConfigBattleFervorFactor_ByTriggerFactory(
        data::ConfigBattleFervorFactor_ByTriggerFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorFactor_ByTriggerFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBattleFervorFactor_ByTriggerFactory = v2;
};

// Line 499: range 000000001427D78E-000000001427D7EB
void __cdecl data::ConfigBattleFervorFactor_ByMonster::ConfigBattleFervorFactor_ByMonster(
        data::ConfigBattleFervorFactor_ByMonster *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBattleFervorFactor::ConfigBattleFervorFactor(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorFactor_ByMonster + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBattleFervorFactor = v2;
  std::vector<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster>>::vector(&this->triggers);
};

// Line 499: range 000000001427DBF0-000000001427DC86
void __cdecl data::ConfigBattleFervorFactor_ByMonster::ConfigBattleFervorFactor_ByMonster(
        data::ConfigBattleFervorFactor_ByMonster *const this,
        const data::ConfigBattleFervorFactor_ByMonster *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBattleFervorFactor::ConfigBattleFervorFactor(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorFactor_ByMonster + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBattleFervorFactor = v2;
  std::vector<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster>>::vector(&this->triggers, &a2->triggers);
};

// Line 506: range 00000000142A160C-00000000142A1669
void __cdecl data::ConfigBattleFervorFactor_ByMonster::~ConfigBattleFervorFactor_ByMonster(
        data::ConfigBattleFervorFactor_ByMonster *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorFactor_ByMonster + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBattleFervorFactor = v2;
  std::vector<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster>>::~vector(&this->triggers);
  data::ConfigBattleFervorFactor::~ConfigBattleFervorFactor(this);
};

// Line 506: range 00000000142A166A-00000000142A1694
void __cdecl data::ConfigBattleFervorFactor_ByMonster::~ConfigBattleFervorFactor_ByMonster(
        data::ConfigBattleFervorFactor_ByMonster *const this)
{
  data::ConfigBattleFervorFactor_ByMonster::~ConfigBattleFervorFactor_ByMonster(this);
  operator delete(this, 0x40uLL);
};

// Line 511: range 0000000013BCAF68-0000000013BCAF78
const char *__cdecl data::ConfigBattleFervorFactor_ByMonster::getTypeName(
        const data::ConfigBattleFervorFactor_ByMonster *const this)
{
  return "ConfigBattleFervorFactor_ByMonster";
};

// Line 512: range 0000000013BCAF7A-0000000013BCB116
int32_t __cdecl data::ConfigBattleFervorFactor_ByMonster::getHashNum(
        const data::ConfigBattleFervorFactor_ByMonster *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigBattleFervorFactor_ByMonster::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBattleFervorFactor_ByMonster",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 528: range 000000001427DF70-000000001427DFB1
void __cdecl data::ConfigBattleFervorFactor_ByMonsterFactory::ConfigBattleFervorFactor_ByMonsterFactory(
        data::ConfigBattleFervorFactor_ByMonsterFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBattleFervorFactor_ByMonsterFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBattleFervorFactor_ByMonsterFactory = v2;
};

// Line 536: range 0000000013C11A0E-0000000013C11AA2
void __cdecl data::ConfigBattleFervorGroup::ConfigBattleFervorGroup(data::ConfigBattleFervorGroup *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->weight = 0.0;
  std::vector<std::shared_ptr<data::ConfigBattleFervorFactor>>::vector(&this->factors);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 536: range 0000000013E62EB2-0000000013E62FC3
void __cdecl data::ConfigBattleFervorGroup::ConfigBattleFervorGroup(
        data::ConfigBattleFervorGroup *const this,
        data::ConfigBattleFervorGroup *a2)
{
  float weight; // xmm0_4
  data::ConfigBattleFervorFactorArray *p_factors; // rsi
  bool is_json_loaded; // cl
  char v5; // al

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  weight = a2->weight;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, a2);
  }
  this->weight = weight;
  p_factors = &a2->factors;
  std::vector<std::shared_ptr<data::ConfigBattleFervorFactor>>::vector(&this->factors, &a2->factors);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_factors, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_factors) = v5 != 0;
    __asan_report_store1(&this->is_json_loaded, p_factors, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 536: range 0000000013C11AA4-0000000013C11AC2
void __cdecl data::ConfigBattleFervorGroup::~ConfigBattleFervorGroup(data::ConfigBattleFervorGroup *const this)
{
  std::vector<std::shared_ptr<data::ConfigBattleFervorFactor>>::~vector(&this->factors);
};
