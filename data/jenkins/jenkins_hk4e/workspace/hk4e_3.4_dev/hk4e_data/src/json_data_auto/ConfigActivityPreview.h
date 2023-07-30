// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigActivityPreview.h

// Line 27: range 000000001426AC8A-000000001426AD16
void __cdecl data::ConfigPreQuestSkipBase::ConfigPreQuestSkipBase(data::ConfigPreQuestSkipBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::ConfigPreQuestSkipBase>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigPreQuestSkipBase>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPreQuestSkipBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPreQuestSkipBase = v2;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 27: range 000000001426B1E0-000000001426B2B6
void __cdecl data::ConfigPreQuestSkipBase::ConfigPreQuestSkipBase(
        data::ConfigPreQuestSkipBase *const this,
        const data::ConfigPreQuestSkipBase *a2)
{
  std::enable_shared_from_this<data::ConfigPreQuestSkipBase> *v2; // rsi
  int (**v3)(...); // rdx
  bool is_json_loaded; // cl
  char v5; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigPreQuestSkipBase>;
  std::enable_shared_from_this<data::ConfigPreQuestSkipBase>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigPreQuestSkipBase>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigPreQuestSkipBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigPreQuestSkipBase = v3;
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

// Line 34: range 00000000142729F6-0000000014272A47
void __cdecl data::ConfigPreQuestSkipBase::~ConfigPreQuestSkipBase(data::ConfigPreQuestSkipBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPreQuestSkipBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPreQuestSkipBase = v2;
  std::enable_shared_from_this<data::ConfigPreQuestSkipBase>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigPreQuestSkipBase>);
};

// Line 34: range 0000000014272A48-0000000014272A72
void __cdecl data::ConfigPreQuestSkipBase::~ConfigPreQuestSkipBase(data::ConfigPreQuestSkipBase *const this)
{
  data::ConfigPreQuestSkipBase::~ConfigPreQuestSkipBase(this);
  operator delete(this, 0x20uLL);
};

// Line 39: range 0000000013C0AD98-0000000013C0ADA8
const char *__cdecl data::ConfigPreQuestSkipBase::getTypeName(const data::ConfigPreQuestSkipBase *const this)
{
  return "ConfigPreQuestSkipBase";
};

// Line 40: range 0000000013C0ADAA-0000000013C0AF46
int32_t __cdecl data::ConfigPreQuestSkipBase::getHashNum(const data::ConfigPreQuestSkipBase *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigPreQuestSkipBase::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigPreQuestSkipBase",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 66: range 000000001426B548-000000001426B5D4
void __cdecl data::ConfigPreQuestPredicateBase::ConfigPreQuestPredicateBase(
        data::ConfigPreQuestPredicateBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::ConfigPreQuestPredicateBase>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigPreQuestPredicateBase>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPreQuestPredicateBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPreQuestPredicateBase = v2;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 66: range 000000001426BA9E-000000001426BB74
void __cdecl data::ConfigPreQuestPredicateBase::ConfigPreQuestPredicateBase(
        data::ConfigPreQuestPredicateBase *const this,
        const data::ConfigPreQuestPredicateBase *a2)
{
  std::enable_shared_from_this<data::ConfigPreQuestPredicateBase> *v2; // rsi
  int (**v3)(...); // rdx
  bool is_json_loaded; // cl
  char v5; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigPreQuestPredicateBase>;
  std::enable_shared_from_this<data::ConfigPreQuestPredicateBase>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigPreQuestPredicateBase>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigPreQuestPredicateBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigPreQuestPredicateBase = v3;
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

// Line 73: range 0000000014273514-000000001427353E
void __cdecl data::ConfigPreQuestPredicateBase::~ConfigPreQuestPredicateBase(
        data::ConfigPreQuestPredicateBase *const this)
{
  data::ConfigPreQuestPredicateBase::~ConfigPreQuestPredicateBase(this);
  operator delete(this, 0x20uLL);
};

// Line 73: range 00000000142734C2-0000000014273513
void __cdecl data::ConfigPreQuestPredicateBase::~ConfigPreQuestPredicateBase(
        data::ConfigPreQuestPredicateBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPreQuestPredicateBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPreQuestPredicateBase = v2;
  std::enable_shared_from_this<data::ConfigPreQuestPredicateBase>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigPreQuestPredicateBase>);
};

// Line 78: range 0000000013C0AF48-0000000013C0AF58
const char *__cdecl data::ConfigPreQuestPredicateBase::getTypeName(const data::ConfigPreQuestPredicateBase *const this)
{
  return "ConfigPreQuestPredicateBase";
};

// Line 79: range 0000000013C0AF5A-0000000013C0B0F6
int32_t __cdecl data::ConfigPreQuestPredicateBase::getHashNum(const data::ConfigPreQuestPredicateBase *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigPreQuestPredicateBase::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigPreQuestPredicateBase",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 98: range 000000001426BDF6-000000001426BED5
void __cdecl data::ConfigPreQuestActionBase::ConfigPreQuestActionBase(data::ConfigPreQuestActionBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  std::enable_shared_from_this<data::ConfigPreQuestActionBase>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigPreQuestActionBase>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPreQuestActionBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPreQuestActionBase = v2;
  std::vector<std::shared_ptr<data::ConfigPreQuestPredicateBase>>::vector(&this->predicates);
  if ( *(_BYTE *)(((unsigned __int64)&this->logic_combine >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->logic_combine >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->logic_combine, v1);
  }
  this->logic_combine = LOGIC_AND;
  v3 = ((_BYTE)this + 52) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 98: range 000000001426C422-000000001426C5B9
void __cdecl data::ConfigPreQuestActionBase::ConfigPreQuestActionBase(
        data::ConfigPreQuestActionBase *const this,
        const data::ConfigPreQuestActionBase *a2)
{
  std::enable_shared_from_this<data::ConfigPreQuestActionBase> *v2; // rsi
  int (**v3)(...); // rdx
  data::ConfigPreQuestPredicateList *p_predicates; // rsi
  data::LogicType logic_combine; // ecx
  char v6; // al
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool is_json_loaded; // cl
  char v10; // dl
  __int64 v11; // rdx

  v2 = &a2->std::enable_shared_from_this<data::ConfigPreQuestActionBase>;
  std::enable_shared_from_this<data::ConfigPreQuestActionBase>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigPreQuestActionBase>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigPreQuestActionBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigPreQuestActionBase = v3;
  p_predicates = &a2->predicates;
  std::vector<std::shared_ptr<data::ConfigPreQuestPredicateBase>>::vector(&this->predicates, &a2->predicates);
  if ( *(_BYTE *)(((unsigned __int64)&a2->logic_combine >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->logic_combine >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->logic_combine);
  }
  logic_combine = a2->logic_combine;
  v6 = *(_BYTE *)(((unsigned __int64)&this->logic_combine >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_predicates) = v6 != 0;
    __asan_report_store4(&this->logic_combine, p_predicates);
  }
  this->logic_combine = logic_combine;
  v7 = ((_BYTE)a2 + 52) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&a2->is_json_loaded, v7, v8);
  is_json_loaded = a2->is_json_loaded;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this + 52) & 7) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->is_json_loaded, v7, v11);
  this->is_json_loaded = is_json_loaded;
};

// Line 107: range 000000001426C8A2-000000001426C903
void __cdecl data::ConfigPreQuestActionBase::~ConfigPreQuestActionBase(data::ConfigPreQuestActionBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPreQuestActionBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPreQuestActionBase = v2;
  std::vector<std::shared_ptr<data::ConfigPreQuestPredicateBase>>::~vector(&this->predicates);
  std::enable_shared_from_this<data::ConfigPreQuestActionBase>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigPreQuestActionBase>);
};

// Line 107: range 000000001426C904-000000001426C92E
void __cdecl data::ConfigPreQuestActionBase::~ConfigPreQuestActionBase(data::ConfigPreQuestActionBase *const this)
{
  data::ConfigPreQuestActionBase::~ConfigPreQuestActionBase(this);
  operator delete(this, 0x38uLL);
};

// Line 112: range 0000000013C0B0F8-0000000013C0B108
const char *__cdecl data::ConfigPreQuestActionBase::getTypeName(const data::ConfigPreQuestActionBase *const this)
{
  return "ConfigPreQuestActionBase";
};

// Line 113: range 0000000013C0B10A-0000000013C0B2A6
int32_t __cdecl data::ConfigPreQuestActionBase::getHashNum(const data::ConfigPreQuestActionBase *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigPreQuestActionBase::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigPreQuestActionBase",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 132: range 000000001426C930-000000001426C9BD
void __cdecl data::ConfigPreQuestBehaviourBase::ConfigPreQuestBehaviourBase(
        data::ConfigPreQuestBehaviourBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigPreQuestActionBase::ConfigPreQuestActionBase((data::ConfigPreQuestActionBase *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPreQuestBehaviourBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPreQuestActionBase = v2;
  v3 = ((_BYTE)this + 53) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->disable_goto_quest_online >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->disable_goto_quest_online >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->disable_goto_quest_online, v3, v4);
  this->disable_goto_quest_online = 1;
};

// Line 132: range 000000001426CDB2-000000001426CE8A
void __cdecl data::ConfigPreQuestBehaviourBase::ConfigPreQuestBehaviourBase(
        data::ConfigPreQuestBehaviourBase *const this,
        const data::ConfigPreQuestBehaviourBase *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool disable_goto_quest_online; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigPreQuestActionBase::ConfigPreQuestActionBase(
    (data::ConfigPreQuestActionBase *const)this,
    (const data::ConfigPreQuestActionBase *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPreQuestBehaviourBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigPreQuestActionBase = v2;
  v3 = ((_BYTE)a2 + 53) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->disable_goto_quest_online >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->disable_goto_quest_online >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->disable_goto_quest_online, v3, v4);
  disable_goto_quest_online = a2->disable_goto_quest_online;
  v6 = *(_BYTE *)(((unsigned __int64)&this->disable_goto_quest_online >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 53) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->disable_goto_quest_online, v3, v7);
  this->disable_goto_quest_online = disable_goto_quest_online;
};

// Line 139: range 000000001426FAFE-000000001426FB4B
void __cdecl data::ConfigPreQuestBehaviourBase::~ConfigPreQuestBehaviourBase(
        data::ConfigPreQuestBehaviourBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPreQuestBehaviourBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPreQuestActionBase = v2;
  data::ConfigPreQuestActionBase::~ConfigPreQuestActionBase((data::ConfigPreQuestActionBase *const)this);
};

// Line 139: range 000000001426FB4C-000000001426FB76
void __cdecl data::ConfigPreQuestBehaviourBase::~ConfigPreQuestBehaviourBase(
        data::ConfigPreQuestBehaviourBase *const this)
{
  data::ConfigPreQuestBehaviourBase::~ConfigPreQuestBehaviourBase(this);
  operator delete(this, 0x38uLL);
};

// Line 144: range 0000000013C0B2A8-0000000013C0B2B8
const char *__cdecl data::ConfigPreQuestBehaviourBase::getTypeName(const data::ConfigPreQuestBehaviourBase *const this)
{
  return "ConfigPreQuestBehaviourBase";
};

// Line 145: range 0000000013C0B2BA-0000000013C0B456
int32_t __cdecl data::ConfigPreQuestBehaviourBase::getHashNum(const data::ConfigPreQuestBehaviourBase *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigPreQuestBehaviourBase::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigPreQuestBehaviourBase",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 164: range 000000001426D174-000000001426D1C1
void __cdecl data::ConfigPreQuestDisplayBase::ConfigPreQuestDisplayBase(data::ConfigPreQuestDisplayBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigPreQuestActionBase::ConfigPreQuestActionBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPreQuestDisplayBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPreQuestActionBase = v2;
};

// Line 164: range 000000001426D5B6-000000001426D60E
void __cdecl data::ConfigPreQuestDisplayBase::ConfigPreQuestDisplayBase(
        data::ConfigPreQuestDisplayBase *const this,
        const data::ConfigPreQuestDisplayBase *a2)
{
  int (**v2)(...); // rdx

  data::ConfigPreQuestActionBase::ConfigPreQuestActionBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPreQuestDisplayBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigPreQuestActionBase = v2;
};

// Line 170: range 000000001426D9A4-000000001426D9F1
void __cdecl data::ConfigPreQuestDisplayBase::~ConfigPreQuestDisplayBase(data::ConfigPreQuestDisplayBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPreQuestDisplayBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPreQuestActionBase = v2;
  data::ConfigPreQuestActionBase::~ConfigPreQuestActionBase(this);
};

// Line 170: range 000000001426D9F2-000000001426DA1C
void __cdecl data::ConfigPreQuestDisplayBase::~ConfigPreQuestDisplayBase(data::ConfigPreQuestDisplayBase *const this)
{
  data::ConfigPreQuestDisplayBase::~ConfigPreQuestDisplayBase(this);
  operator delete(this, 0x38uLL);
};

// Line 175: range 0000000013C0B458-0000000013C0B468
const char *__cdecl data::ConfigPreQuestDisplayBase::getTypeName(const data::ConfigPreQuestDisplayBase *const this)
{
  return "ConfigPreQuestDisplayBase";
};

// Line 176: range 0000000013C0B46A-0000000013C0B606
int32_t __cdecl data::ConfigPreQuestDisplayBase::getHashNum(const data::ConfigPreQuestDisplayBase *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigPreQuestDisplayBase::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigPreQuestDisplayBase",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 209: range 0000000013C0CCBC-0000000013C0CE11
void __cdecl data::ConfigPreQuest::ConfigPreQuest(data::ConfigPreQuest *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->quest_id = 0;
  v2 = ((_BYTE)this + 4) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_main_quest_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_main_quest_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_main_quest_id, v2, v3);
  this->is_main_quest_id = 1;
  std::vector<std::shared_ptr<data::ConfigPreQuestSkipBase>>::vector(&this->skip_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->skip_logic_combine >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skip_logic_combine >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->skip_logic_combine, v2);
  }
  this->skip_logic_combine = LOGIC_OR;
  std::vector<std::shared_ptr<data::ConfigPreQuestBehaviourBase>>::vector(&this->untake_behaviour);
  std::vector<std::shared_ptr<data::ConfigPreQuestDisplayBase>>::vector(&this->untake_display);
  std::vector<std::shared_ptr<data::ConfigPreQuestBehaviourBase>>::vector(&this->take_behaviour);
  std::vector<std::shared_ptr<data::ConfigPreQuestDisplayBase>>::vector(&this->take_display);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 209: range 0000000013E51FD4-0000000013E5224D
void __cdecl data::ConfigPreQuest::ConfigPreQuest(data::ConfigPreQuest *const this, data::ConfigPreQuest *a2)
{
  uint32_t quest_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool is_main_quest_id; // cl
  char v7; // dl
  __int64 v8; // rdx
  data::ConfigPreQuestSkipList *p_skip_list; // rsi
  data::LogicType skip_logic_combine; // ecx
  char v11; // al
  data::ConfigPreQuestDisplayList *p_take_display; // rsi
  bool is_json_loaded; // cl
  char v14; // al
  data::ConfigPreQuest *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  quest_id = a2->quest_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->quest_id = quest_id;
  v4 = ((_BYTE)v15 + 4) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&v15->is_main_quest_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&v15->is_main_quest_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&v15->is_main_quest_id, v4, v5);
  is_main_quest_id = v15->is_main_quest_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_main_quest_id >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 4) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_main_quest_id, v4, v8);
  this->is_main_quest_id = is_main_quest_id;
  p_skip_list = &v15->skip_list;
  std::vector<std::shared_ptr<data::ConfigPreQuestSkipBase>>::vector(&this->skip_list, &v15->skip_list);
  if ( *(_BYTE *)(((unsigned __int64)&v15->skip_logic_combine >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->skip_logic_combine >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->skip_logic_combine);
  }
  skip_logic_combine = v15->skip_logic_combine;
  v11 = *(_BYTE *)(((unsigned __int64)&this->skip_logic_combine >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(p_skip_list) = v11 != 0;
    __asan_report_store4(&this->skip_logic_combine, p_skip_list);
  }
  this->skip_logic_combine = skip_logic_combine;
  std::vector<std::shared_ptr<data::ConfigPreQuestBehaviourBase>>::vector(
    &this->untake_behaviour,
    &v15->untake_behaviour);
  std::vector<std::shared_ptr<data::ConfigPreQuestDisplayBase>>::vector(&this->untake_display, &v15->untake_display);
  std::vector<std::shared_ptr<data::ConfigPreQuestBehaviourBase>>::vector(&this->take_behaviour, &v15->take_behaviour);
  p_take_display = &v15->take_display;
  std::vector<std::shared_ptr<data::ConfigPreQuestDisplayBase>>::vector(&this->take_display, &v15->take_display);
  if ( *(char *)(((unsigned __int64)&v15->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v15->is_json_loaded, p_take_display, &v15->is_json_loaded);
  is_json_loaded = v15->is_json_loaded;
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v14 < 0 )
  {
    LOBYTE(p_take_display) = v14 != 0;
    __asan_report_store1(&this->is_json_loaded, p_take_display, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 209: range 0000000013C0CE12-0000000013C0CE70
void __cdecl data::ConfigPreQuest::~ConfigPreQuest(data::ConfigPreQuest *const this)
{
  std::vector<std::shared_ptr<data::ConfigPreQuestDisplayBase>>::~vector(&this->take_display);
  std::vector<std::shared_ptr<data::ConfigPreQuestBehaviourBase>>::~vector(&this->take_behaviour);
  std::vector<std::shared_ptr<data::ConfigPreQuestDisplayBase>>::~vector(&this->untake_display);
  std::vector<std::shared_ptr<data::ConfigPreQuestBehaviourBase>>::~vector(&this->untake_behaviour);
  std::vector<std::shared_ptr<data::ConfigPreQuestSkipBase>>::~vector(&this->skip_list);
};

// Line 294: range 000000001426DA1E-000000001426DA7B
void __cdecl data::ConfigRedBannerLock::ConfigRedBannerLock(data::ConfigRedBannerLock *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigPreQuestDisplayBase::ConfigPreQuestDisplayBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigRedBannerLock + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPreQuestActionBase = v2;
  std::string::basic_string(&this->override_text);
};

// Line 294: range 000000001426DE36-000000001426DECC
void __cdecl data::ConfigRedBannerLock::ConfigRedBannerLock(
        data::ConfigRedBannerLock *const this,
        const data::ConfigRedBannerLock *a2)
{
  int (**v2)(...); // rdx

  data::ConfigPreQuestDisplayBase::ConfigPreQuestDisplayBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigRedBannerLock + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigPreQuestActionBase = v2;
  std::string::basic_string(&this->override_text, &a2->override_text);
};

// Line 301: range 00000000142A1F30-00000000142A1F8D
void __cdecl data::ConfigRedBannerLock::~ConfigRedBannerLock(data::ConfigRedBannerLock *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigRedBannerLock + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPreQuestActionBase = v2;
  std::string::~string(&this->override_text);
  data::ConfigPreQuestDisplayBase::~ConfigPreQuestDisplayBase(this);
};

// Line 301: range 00000000142A1F8E-00000000142A1FB8
void __cdecl data::ConfigRedBannerLock::~ConfigRedBannerLock(data::ConfigRedBannerLock *const this)
{
  data::ConfigRedBannerLock::~ConfigRedBannerLock(this);
  operator delete(this, 0x58uLL);
};

// Line 306: range 0000000013C0B608-0000000013C0B618
const char *__cdecl data::ConfigRedBannerLock::getTypeName(const data::ConfigRedBannerLock *const this)
{
  return "ConfigRedBannerLock";
};

// Line 307: range 0000000013C0B61A-0000000013C0B7B6
int32_t __cdecl data::ConfigRedBannerLock::getHashNum(const data::ConfigRedBannerLock *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigRedBannerLock::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigRedBannerLock",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 323: range 000000001426E1B6-000000001426E1F7
void __cdecl data::ConfigRedBannerLockFactory::ConfigRedBannerLockFactory(data::ConfigRedBannerLockFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigRedBannerLockFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigRedBannerLockFactory = v2;
};

// Line 331: range 000000001426E500-000000001426E56D
void __cdecl data::ConfigYellowBannerWithButton::ConfigYellowBannerWithButton(
        data::ConfigYellowBannerWithButton *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigPreQuestDisplayBase::ConfigPreQuestDisplayBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigYellowBannerWithButton + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPreQuestActionBase = v2;
  std::string::basic_string(&this->override_banner_text);
  std::string::basic_string(&this->override_button_text);
};

// Line 331: range 000000001426E922-000000001426E9E8
void __cdecl data::ConfigYellowBannerWithButton::ConfigYellowBannerWithButton(
        data::ConfigYellowBannerWithButton *const this,
        const data::ConfigYellowBannerWithButton *a2)
{
  int (**v2)(...); // rdx

  data::ConfigPreQuestDisplayBase::ConfigPreQuestDisplayBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigYellowBannerWithButton + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigPreQuestActionBase = v2;
  std::string::basic_string(&this->override_banner_text, &a2->override_banner_text);
  std::string::basic_string(&this->override_button_text, &a2->override_button_text);
};

// Line 339: range 00000000142A1F04-00000000142A1F2E
void __cdecl data::ConfigYellowBannerWithButton::~ConfigYellowBannerWithButton(
        data::ConfigYellowBannerWithButton *const this)
{
  data::ConfigYellowBannerWithButton::~ConfigYellowBannerWithButton(this);
  operator delete(this, 0x78uLL);
};

// Line 339: range 00000000142A1E96-00000000142A1F03
void __cdecl data::ConfigYellowBannerWithButton::~ConfigYellowBannerWithButton(
        data::ConfigYellowBannerWithButton *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigYellowBannerWithButton + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPreQuestActionBase = v2;
  std::string::~string(&this->override_button_text);
  std::string::~string(&this->override_banner_text);
  data::ConfigPreQuestDisplayBase::~ConfigPreQuestDisplayBase(this);
};

// Line 344: range 0000000013C0B7B8-0000000013C0B7C8
const char *__cdecl data::ConfigYellowBannerWithButton::getTypeName(
        const data::ConfigYellowBannerWithButton *const this)
{
  return "ConfigYellowBannerWithButton";
};

// Line 345: range 0000000013C0B7CA-0000000013C0B966
int32_t __cdecl data::ConfigYellowBannerWithButton::getHashNum(const data::ConfigYellowBannerWithButton *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigYellowBannerWithButton::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigYellowBannerWithButton",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 361: range 000000001426ECD2-000000001426ED13
void __cdecl data::ConfigYellowBannerWithButtonFactory::ConfigYellowBannerWithButtonFactory(
        data::ConfigYellowBannerWithButtonFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigYellowBannerWithButtonFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigYellowBannerWithButtonFactory = v2;
};

// Line 369: range 000000001426F01C-000000001426F079
void __cdecl data::ConfigGotoQuestButton::ConfigGotoQuestButton(data::ConfigGotoQuestButton *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigPreQuestDisplayBase::ConfigPreQuestDisplayBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGotoQuestButton + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPreQuestActionBase = v2;
  std::string::basic_string(&this->override_text);
};

// Line 369: range 000000001426F434-000000001426F4CA
void __cdecl data::ConfigGotoQuestButton::ConfigGotoQuestButton(
        data::ConfigGotoQuestButton *const this,
        const data::ConfigGotoQuestButton *a2)
{
  int (**v2)(...); // rdx

  data::ConfigPreQuestDisplayBase::ConfigPreQuestDisplayBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGotoQuestButton + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigPreQuestActionBase = v2;
  std::string::basic_string(&this->override_text, &a2->override_text);
};

// Line 376: range 00000000142A1E6A-00000000142A1E94
void __cdecl data::ConfigGotoQuestButton::~ConfigGotoQuestButton(data::ConfigGotoQuestButton *const this)
{
  data::ConfigGotoQuestButton::~ConfigGotoQuestButton(this);
  operator delete(this, 0x58uLL);
};

// Line 376: range 00000000142A1E0C-00000000142A1E69
void __cdecl data::ConfigGotoQuestButton::~ConfigGotoQuestButton(data::ConfigGotoQuestButton *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGotoQuestButton + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPreQuestActionBase = v2;
  std::string::~string(&this->override_text);
  data::ConfigPreQuestDisplayBase::~ConfigPreQuestDisplayBase(this);
};

// Line 381: range 0000000013C0B968-0000000013C0B978
const char *__cdecl data::ConfigGotoQuestButton::getTypeName(const data::ConfigGotoQuestButton *const this)
{
  return "ConfigGotoQuestButton";
};

// Line 382: range 0000000013C0B97A-0000000013C0BB16
int32_t __cdecl data::ConfigGotoQuestButton::getHashNum(const data::ConfigGotoQuestButton *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigGotoQuestButton::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGotoQuestButton",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 398: range 000000001426F7B4-000000001426F7F5
void __cdecl data::ConfigGotoQuestButtonFactory::ConfigGotoQuestButtonFactory(
        data::ConfigGotoQuestButtonFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGotoQuestButtonFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGotoQuestButtonFactory = v2;
};

// Line 406: range 000000001426FB78-000000001426FCA4
void __cdecl data::ConfigShowBlackTip::ConfigShowBlackTip(data::ConfigShowBlackTip *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigPreQuestBehaviourBase::ConfigPreQuestBehaviourBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigShowBlackTip + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPreQuestActionBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->player_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->player_level, v1);
  }
  this->player_level = 0;
  v3 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->tip_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->tip_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->tip_quest_id, v3);
  }
  this->tip_quest_id = 0;
  if ( *(char *)(((unsigned __int64)&this->is_main_quest_id >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_main_quest_id, v3, &this->is_main_quest_id);
  this->is_main_quest_id = 0;
  std::string::basic_string(&this->override_to_finish_text);
  std::string::basic_string(&this->override_text);
};

// Line 406: range 0000000014270060-0000000014270296
void __cdecl data::ConfigShowBlackTip::ConfigShowBlackTip(
        data::ConfigShowBlackTip *const this,
        const data::ConfigShowBlackTip *a2)
{
  int (**v2)(...); // rdx
  uint32_t player_level; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t tip_quest_id; // ecx
  char v7; // dl
  bool is_main_quest_id; // cl
  char v9; // al
  const data::ConfigShowBlackTip *v10; // [rsp+0h] [rbp-20h]

  v10 = a2;
  data::ConfigPreQuestBehaviourBase::ConfigPreQuestBehaviourBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigShowBlackTip + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigPreQuestActionBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->player_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->player_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->player_level);
  }
  player_level = a2->player_level;
  v4 = *(_BYTE *)(((unsigned __int64)&this->player_level >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->player_level, a2);
  }
  this->player_level = player_level;
  v5 = (((_BYTE)v10 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->tip_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->tip_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->tip_quest_id);
  }
  tip_quest_id = v10->tip_quest_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->tip_quest_id >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  if ( v7 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v7 )
    __asan_report_store4(&this->tip_quest_id, v5);
  this->tip_quest_id = tip_quest_id;
  if ( *(char *)(((unsigned __int64)&v10->is_main_quest_id >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v10->is_main_quest_id, v5, &v10->is_main_quest_id);
  is_main_quest_id = v10->is_main_quest_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_main_quest_id >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store1(&this->is_main_quest_id, v5, &this->is_main_quest_id);
  }
  this->is_main_quest_id = is_main_quest_id;
  std::string::basic_string(&this->override_to_finish_text, &v10->override_to_finish_text);
  std::string::basic_string(&this->override_text, &v10->override_text);
};

// Line 417: range 00000000142A1DE0-00000000142A1E0A
void __cdecl data::ConfigShowBlackTip::~ConfigShowBlackTip(data::ConfigShowBlackTip *const this)
{
  data::ConfigShowBlackTip::~ConfigShowBlackTip(this);
  operator delete(this, 0x88uLL);
};

// Line 417: range 00000000142A1D72-00000000142A1DDF
void __cdecl data::ConfigShowBlackTip::~ConfigShowBlackTip(data::ConfigShowBlackTip *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigShowBlackTip + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPreQuestActionBase = v2;
  std::string::~string(&this->override_text);
  std::string::~string(&this->override_to_finish_text);
  data::ConfigPreQuestBehaviourBase::~ConfigPreQuestBehaviourBase(this);
};

// Line 422: range 0000000013C0BB18-0000000013C0BB28
const char *__cdecl data::ConfigShowBlackTip::getTypeName(const data::ConfigShowBlackTip *const this)
{
  return "ConfigShowBlackTip";
};

// Line 423: range 0000000013C0BB2A-0000000013C0BCC6
int32_t __cdecl data::ConfigShowBlackTip::getHashNum(const data::ConfigShowBlackTip *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigShowBlackTip::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigShowBlackTip",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 439: range 0000000014270580-00000000142705C1
void __cdecl data::ConfigShowBlackTipFactory::ConfigShowBlackTipFactory(data::ConfigShowBlackTipFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigShowBlackTipFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigShowBlackTipFactory = v2;
};

// Line 447: range 00000000142708CA-0000000014270917
void __cdecl data::ConfigGotoQuestPage::ConfigGotoQuestPage(data::ConfigGotoQuestPage *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigPreQuestBehaviourBase::ConfigPreQuestBehaviourBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGotoQuestPage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPreQuestActionBase = v2;
};

// Line 447: range 0000000014270D0C-0000000014270D64
void __cdecl data::ConfigGotoQuestPage::ConfigGotoQuestPage(
        data::ConfigGotoQuestPage *const this,
        const data::ConfigGotoQuestPage *a2)
{
  int (**v2)(...); // rdx

  data::ConfigPreQuestBehaviourBase::ConfigPreQuestBehaviourBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGotoQuestPage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigPreQuestActionBase = v2;
};

// Line 453: range 00000000142A1CF8-00000000142A1D45
void __cdecl data::ConfigGotoQuestPage::~ConfigGotoQuestPage(data::ConfigGotoQuestPage *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGotoQuestPage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPreQuestActionBase = v2;
  data::ConfigPreQuestBehaviourBase::~ConfigPreQuestBehaviourBase(this);
};

// Line 453: range 00000000142A1D46-00000000142A1D70
void __cdecl data::ConfigGotoQuestPage::~ConfigGotoQuestPage(data::ConfigGotoQuestPage *const this)
{
  data::ConfigGotoQuestPage::~ConfigGotoQuestPage(this);
  operator delete(this, 0x38uLL);
};

// Line 458: range 0000000013C0BCC8-0000000013C0BCD8
const char *__cdecl data::ConfigGotoQuestPage::getTypeName(const data::ConfigGotoQuestPage *const this)
{
  return "ConfigGotoQuestPage";
};

// Line 459: range 0000000013C0BCDA-0000000013C0BE76
int32_t __cdecl data::ConfigGotoQuestPage::getHashNum(const data::ConfigGotoQuestPage *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigGotoQuestPage::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGotoQuestPage",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 475: range 000000001427104E-000000001427108F
void __cdecl data::ConfigGotoQuestPageFactory::ConfigGotoQuestPageFactory(data::ConfigGotoQuestPageFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGotoQuestPageFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGotoQuestPageFactory = v2;
};

// Line 483: range 0000000014271398-00000000142713E5
void __cdecl data::ConfigGotoPersonalLinePage::ConfigGotoPersonalLinePage(data::ConfigGotoPersonalLinePage *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigPreQuestBehaviourBase::ConfigPreQuestBehaviourBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGotoPersonalLinePage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPreQuestActionBase = v2;
};

// Line 483: range 00000000142717DA-0000000014271832
void __cdecl data::ConfigGotoPersonalLinePage::ConfigGotoPersonalLinePage(
        data::ConfigGotoPersonalLinePage *const this,
        const data::ConfigGotoPersonalLinePage *a2)
{
  int (**v2)(...); // rdx

  data::ConfigPreQuestBehaviourBase::ConfigPreQuestBehaviourBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGotoPersonalLinePage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigPreQuestActionBase = v2;
};

// Line 489: range 00000000142A1C7E-00000000142A1CCB
void __cdecl data::ConfigGotoPersonalLinePage::~ConfigGotoPersonalLinePage(
        data::ConfigGotoPersonalLinePage *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGotoPersonalLinePage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPreQuestActionBase = v2;
  data::ConfigPreQuestBehaviourBase::~ConfigPreQuestBehaviourBase(this);
};

// Line 489: range 00000000142A1CCC-00000000142A1CF6
void __cdecl data::ConfigGotoPersonalLinePage::~ConfigGotoPersonalLinePage(
        data::ConfigGotoPersonalLinePage *const this)
{
  data::ConfigGotoPersonalLinePage::~ConfigGotoPersonalLinePage(this);
  operator delete(this, 0x38uLL);
};

// Line 494: range 0000000013C0BE78-0000000013C0BE88
const char *__cdecl data::ConfigGotoPersonalLinePage::getTypeName(const data::ConfigGotoPersonalLinePage *const this)
{
  return "ConfigGotoPersonalLinePage";
};

// Line 495: range 0000000013C0BE8A-0000000013C0C026
int32_t __cdecl data::ConfigGotoPersonalLinePage::getHashNum(const data::ConfigGotoPersonalLinePage *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigGotoPersonalLinePage::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGotoPersonalLinePage",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 511: range 0000000014271B1C-0000000014271B5D
void __cdecl data::ConfigGotoPersonalLinePageFactory::ConfigGotoPersonalLinePageFactory(
        data::ConfigGotoPersonalLinePageFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGotoPersonalLinePageFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGotoPersonalLinePageFactory = v2;
};

// Line 519: range 0000000014271E66-0000000014271EF1
void __cdecl data::ConfigGotoQuestAcceptionMarkPage::ConfigGotoQuestAcceptionMarkPage(
        data::ConfigGotoQuestAcceptionMarkPage *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigPreQuestBehaviourBase::ConfigPreQuestBehaviourBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGotoQuestAcceptionMarkPage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPreQuestActionBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_acception_mark_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quest_acception_mark_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->quest_acception_mark_id, v1);
  }
  this->quest_acception_mark_id = 0;
};

// Line 519: range 00000000142722F6-00000000142723C3
void __cdecl data::ConfigGotoQuestAcceptionMarkPage::ConfigGotoQuestAcceptionMarkPage(
        data::ConfigGotoQuestAcceptionMarkPage *const this,
        const data::ConfigGotoQuestAcceptionMarkPage *a2)
{
  int (**v2)(...); // rdx
  uint32_t quest_acception_mark_id; // ecx
  char v4; // al

  data::ConfigPreQuestBehaviourBase::ConfigPreQuestBehaviourBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGotoQuestAcceptionMarkPage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigPreQuestActionBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->quest_acception_mark_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->quest_acception_mark_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->quest_acception_mark_id);
  }
  quest_acception_mark_id = a2->quest_acception_mark_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->quest_acception_mark_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->quest_acception_mark_id, a2);
  }
  this->quest_acception_mark_id = quest_acception_mark_id;
};

// Line 526: range 00000000142A1C52-00000000142A1C7C
void __cdecl data::ConfigGotoQuestAcceptionMarkPage::~ConfigGotoQuestAcceptionMarkPage(
        data::ConfigGotoQuestAcceptionMarkPage *const this)
{
  data::ConfigGotoQuestAcceptionMarkPage::~ConfigGotoQuestAcceptionMarkPage(this);
  operator delete(this, 0x40uLL);
};

// Line 526: range 00000000142A1C04-00000000142A1C51
void __cdecl data::ConfigGotoQuestAcceptionMarkPage::~ConfigGotoQuestAcceptionMarkPage(
        data::ConfigGotoQuestAcceptionMarkPage *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGotoQuestAcceptionMarkPage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPreQuestActionBase = v2;
  data::ConfigPreQuestBehaviourBase::~ConfigPreQuestBehaviourBase(this);
};

// Line 531: range 0000000013C0C028-0000000013C0C038
const char *__cdecl data::ConfigGotoQuestAcceptionMarkPage::getTypeName(
        const data::ConfigGotoQuestAcceptionMarkPage *const this)
{
  return "ConfigGotoQuestAcceptionMarkPage";
};

// Line 532: range 0000000013C0C03A-0000000013C0C1D6
int32_t __cdecl data::ConfigGotoQuestAcceptionMarkPage::getHashNum(
        const data::ConfigGotoQuestAcceptionMarkPage *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigGotoQuestAcceptionMarkPage::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGotoQuestAcceptionMarkPage",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 548: range 00000000142726AC-00000000142726ED
void __cdecl data::ConfigGotoQuestAcceptionMarkPageFactory::ConfigGotoQuestAcceptionMarkPageFactory(
        data::ConfigGotoQuestAcceptionMarkPageFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGotoQuestAcceptionMarkPageFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGotoQuestAcceptionMarkPageFactory = v2;
};

// Line 556: range 0000000014272A74-0000000014272AC1
void __cdecl data::ConfigSkipByQuickOpen::ConfigSkipByQuickOpen(data::ConfigSkipByQuickOpen *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigPreQuestSkipBase::ConfigPreQuestSkipBase(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSkipByQuickOpen + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPreQuestSkipBase = v2;
};

// Line 556: range 0000000014272ED6-0000000014272F2E
void __cdecl data::ConfigSkipByQuickOpen::ConfigSkipByQuickOpen(
        data::ConfigSkipByQuickOpen *const this,
        const data::ConfigSkipByQuickOpen *a2)
{
  int (**v2)(...); // rdx

  data::ConfigPreQuestSkipBase::ConfigPreQuestSkipBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSkipByQuickOpen + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigPreQuestSkipBase = v2;
};

// Line 562: range 00000000142A1BD8-00000000142A1C02
void __cdecl data::ConfigSkipByQuickOpen::~ConfigSkipByQuickOpen(data::ConfigSkipByQuickOpen *const this)
{
  data::ConfigSkipByQuickOpen::~ConfigSkipByQuickOpen(this);
  operator delete(this, 0x20uLL);
};

// Line 562: range 00000000142A1B8A-00000000142A1BD7
void __cdecl data::ConfigSkipByQuickOpen::~ConfigSkipByQuickOpen(data::ConfigSkipByQuickOpen *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSkipByQuickOpen + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPreQuestSkipBase = v2;
  data::ConfigPreQuestSkipBase::~ConfigPreQuestSkipBase(this);
};

// Line 567: range 0000000013C0C1D8-0000000013C0C1E8
const char *__cdecl data::ConfigSkipByQuickOpen::getTypeName(const data::ConfigSkipByQuickOpen *const this)
{
  return "ConfigSkipByQuickOpen";
};

// Line 568: range 0000000013C0C1EA-0000000013C0C386
int32_t __cdecl data::ConfigSkipByQuickOpen::getHashNum(const data::ConfigSkipByQuickOpen *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigSkipByQuickOpen::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigSkipByQuickOpen",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 584: range 0000000014273178-00000000142731B9
void __cdecl data::ConfigSkipByQuickOpenFactory::ConfigSkipByQuickOpenFactory(
        data::ConfigSkipByQuickOpenFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSkipByQuickOpenFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigSkipByQuickOpenFactory = v2;
};

// Line 592: range 0000000014273540-00000000142735D3
void __cdecl data::ConfigPredicateByPlayerLevel::ConfigPredicateByPlayerLevel(
        data::ConfigPredicateByPlayerLevel *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigPreQuestPredicateBase::ConfigPreQuestPredicateBase((data::ConfigPreQuestPredicateBase *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPredicateByPlayerLevel + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPreQuestPredicateBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->player_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->player_level, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->player_level = 0;
};

// Line 592: range 0000000014273A68-0000000014273B45
void __cdecl data::ConfigPredicateByPlayerLevel::ConfigPredicateByPlayerLevel(
        data::ConfigPredicateByPlayerLevel *const this,
        const data::ConfigPredicateByPlayerLevel *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t player_level; // ecx
  char v5; // dl

  data::ConfigPreQuestPredicateBase::ConfigPreQuestPredicateBase(
    (data::ConfigPreQuestPredicateBase *const)this,
    (const data::ConfigPreQuestPredicateBase *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPredicateByPlayerLevel + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigPreQuestPredicateBase = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->player_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->player_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->player_level);
  }
  player_level = a2->player_level;
  v5 = *(_BYTE *)(((unsigned __int64)&this->player_level >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->player_level, v3);
  }
  this->player_level = player_level;
};

// Line 599: range 00000000142A1B5E-00000000142A1B88
void __cdecl data::ConfigPredicateByPlayerLevel::~ConfigPredicateByPlayerLevel(
        data::ConfigPredicateByPlayerLevel *const this)
{
  data::ConfigPredicateByPlayerLevel::~ConfigPredicateByPlayerLevel(this);
  operator delete(this, 0x20uLL);
};

// Line 599: range 00000000142A1B10-00000000142A1B5D
void __cdecl data::ConfigPredicateByPlayerLevel::~ConfigPredicateByPlayerLevel(
        data::ConfigPredicateByPlayerLevel *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPredicateByPlayerLevel + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPreQuestPredicateBase = v2;
  data::ConfigPreQuestPredicateBase::~ConfigPreQuestPredicateBase((data::ConfigPreQuestPredicateBase *const)this);
};

// Line 604: range 0000000013C0C388-0000000013C0C398
const char *__cdecl data::ConfigPredicateByPlayerLevel::getTypeName(
        const data::ConfigPredicateByPlayerLevel *const this)
{
  return "ConfigPredicateByPlayerLevel";
};

// Line 605: range 0000000013C0C39A-0000000013C0C536
int32_t __cdecl data::ConfigPredicateByPlayerLevel::getHashNum(const data::ConfigPredicateByPlayerLevel *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigPredicateByPlayerLevel::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigPredicateByPlayerLevel",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 621: range 0000000014273D8E-0000000014273DCF
void __cdecl data::ConfigPredicateByPlayerLevelFactory::ConfigPredicateByPlayerLevelFactory(
        data::ConfigPredicateByPlayerLevelFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPredicateByPlayerLevelFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPredicateByPlayerLevelFactory = v2;
};
