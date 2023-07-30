// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigUIActivityBanner.h

// Line 41: range 00000000118EC2C4-00000000118EC350
void __cdecl data::ContextCondition::ContextCondition(data::ContextCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::ContextCondition>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ContextCondition>);
  v2 = (int (**)(...))(&`vtable for'data::ContextCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextCondition = v2;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 41: range 00000000118EC97A-00000000118ECA50
void __cdecl data::ContextCondition::ContextCondition(
        data::ContextCondition *const this,
        const data::ContextCondition *a2)
{
  std::enable_shared_from_this<data::ContextCondition> *v2; // rsi
  int (**v3)(...); // rdx
  bool is_json_loaded; // cl
  char v5; // al

  v2 = &a2->std::enable_shared_from_this<data::ContextCondition>;
  std::enable_shared_from_this<data::ContextCondition>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ContextCondition>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ContextCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ContextCondition = v3;
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

// Line 48: range 00000000118ED5F2-00000000118ED61C
void __cdecl data::ContextCondition::~ContextCondition(data::ContextCondition *const this)
{
  data::ContextCondition::~ContextCondition(this);
  operator delete(this, 0x20uLL);
};

// Line 48: range 00000000118ED5A0-00000000118ED5F1
void __cdecl data::ContextCondition::~ContextCondition(data::ContextCondition *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextCondition + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextCondition = v2;
  std::enable_shared_from_this<data::ContextCondition>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ContextCondition>);
};

// Line 53: range 00000000116A1664-00000000116A1674
const char *__cdecl data::ContextCondition::getTypeName(const data::ContextCondition *const this)
{
  return "ContextCondition";
};

// Line 54: range 00000000116A1676-00000000116A1812
int32_t __cdecl data::ContextCondition::getHashNum(const data::ContextCondition *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ContextCondition::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ContextCondition",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 73: range 00000000118ECC9A-00000000118ECD26
void __cdecl data::ContextAction::ContextAction(data::ContextAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::ContextAction>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ContextAction>);
  v2 = (int (**)(...))(&`vtable for'data::ContextAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextAction = v2;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 73: range 00000000118ED1F0-00000000118ED2C6
void __cdecl data::ContextAction::ContextAction(data::ContextAction *const this, const data::ContextAction *a2)
{
  std::enable_shared_from_this<data::ContextAction> *v2; // rsi
  int (**v3)(...); // rdx
  bool is_json_loaded; // cl
  char v5; // al

  v2 = &a2->std::enable_shared_from_this<data::ContextAction>;
  std::enable_shared_from_this<data::ContextAction>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ContextAction>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ContextAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ContextAction = v3;
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

// Line 80: range 00000000118F5B02-00000000118F5B53
void __cdecl data::ContextAction::~ContextAction(data::ContextAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextAction = v2;
  std::enable_shared_from_this<data::ContextAction>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ContextAction>);
};

// Line 80: range 00000000118F5B54-00000000118F5B7E
void __cdecl data::ContextAction::~ContextAction(data::ContextAction *const this)
{
  data::ContextAction::~ContextAction(this);
  operator delete(this, 0x20uLL);
};

// Line 85: range 00000000116A1814-00000000116A1824
const char *__cdecl data::ContextAction::getTypeName(const data::ContextAction *const this)
{
  return "ContextAction";
};

// Line 86: range 00000000116A1826-00000000116A19C2
int32_t __cdecl data::ContextAction::getHashNum(const data::ContextAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ContextAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ContextAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 105: range 00000000116A4FDA-00000000116A503F
void __cdecl data::ContextConditionActionGroup::ContextConditionActionGroup(
        data::ContextConditionActionGroup *const this)
{
  __int64 v1; // rsi

  std::string::basic_string(this);
  std::string::basic_string(&this->action_name);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 105: range 0000000011904F8C-0000000011905065
void __cdecl data::ContextConditionActionGroup::ContextConditionActionGroup(
        data::ContextConditionActionGroup *const this,
        const data::ContextConditionActionGroup *a2)
{
  std::string *p_action_name; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::string::basic_string(this, a2);
  p_action_name = &a2->action_name;
  std::string::basic_string(&this->action_name, p_action_name);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_action_name, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_action_name) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_action_name, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 105: range 00000000117597A8-000000001175985E
void __cdecl data::ContextConditionActionGroup::ContextConditionActionGroup(
        data::ContextConditionActionGroup *const this,
        data::ContextConditionActionGroup *a2)
{
  std::string *p_action_name; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::string::basic_string(this, a2);
  p_action_name = &a2->action_name;
  std::string::basic_string(&this->action_name, p_action_name);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_action_name, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_action_name) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_action_name, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 105: range 00000000116A5040-00000000116A506A
void __cdecl data::ContextConditionActionGroup::~ContextConditionActionGroup(
        data::ContextConditionActionGroup *const this)
{
  std::string::~string(&this->action_name);
  std::string::~string(this);
};

// Line 162: range 00000000118ED656-00000000118ED6B3
void __cdecl data::ContextConditionAnd::ContextConditionAnd(data::ContextConditionAnd *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ContextCondition::ContextCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ContextConditionAnd + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextCondition = v2;
  std::vector<std::shared_ptr<data::ContextCondition>>::vector(&this->conditions);
};

// Line 162: range 00000000118EDAA8-00000000118EDB3E
void __cdecl data::ContextConditionAnd::ContextConditionAnd(
        data::ContextConditionAnd *const this,
        const data::ContextConditionAnd *a2)
{
  int (**v2)(...); // rdx

  data::ContextCondition::ContextCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ContextConditionAnd + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ContextCondition = v2;
  std::vector<std::shared_ptr<data::ContextCondition>>::vector(&this->conditions, &a2->conditions);
};

// Line 169: range 00000000119064FA-0000000011906557
void __cdecl data::ContextConditionAnd::~ContextConditionAnd(data::ContextConditionAnd *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextConditionAnd + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextCondition = v2;
  std::vector<std::shared_ptr<data::ContextCondition>>::~vector(&this->conditions);
  data::ContextCondition::~ContextCondition(this);
};

// Line 169: range 0000000011906558-0000000011906582
void __cdecl data::ContextConditionAnd::~ContextConditionAnd(data::ContextConditionAnd *const this)
{
  data::ContextConditionAnd::~ContextConditionAnd(this);
  operator delete(this, 0x38uLL);
};

// Line 174: range 00000000116A19C4-00000000116A19D4
const char *__cdecl data::ContextConditionAnd::getTypeName(const data::ContextConditionAnd *const this)
{
  return "ContextConditionAnd";
};

// Line 175: range 00000000116A19D6-00000000116A1B72
int32_t __cdecl data::ContextConditionAnd::getHashNum(const data::ContextConditionAnd *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ContextConditionAnd::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ContextConditionAnd",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 191: range 00000000118EDE28-00000000118EDE69
void __cdecl data::ContextConditionAndFactory::ContextConditionAndFactory(data::ContextConditionAndFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextConditionAndFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextConditionAndFactory = v2;
};

// Line 199: range 00000000118EE172-00000000118EE1CF
void __cdecl data::ContextConditionOr::ContextConditionOr(data::ContextConditionOr *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ContextCondition::ContextCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ContextConditionOr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextCondition = v2;
  std::vector<std::shared_ptr<data::ContextCondition>>::vector(&this->conditions);
};

// Line 199: range 00000000118EE5C4-00000000118EE65A
void __cdecl data::ContextConditionOr::ContextConditionOr(
        data::ContextConditionOr *const this,
        const data::ContextConditionOr *a2)
{
  int (**v2)(...); // rdx

  data::ContextCondition::ContextCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ContextConditionOr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ContextCondition = v2;
  std::vector<std::shared_ptr<data::ContextCondition>>::vector(&this->conditions, &a2->conditions);
};

// Line 206: range 0000000011906470-00000000119064CD
void __cdecl data::ContextConditionOr::~ContextConditionOr(data::ContextConditionOr *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextConditionOr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextCondition = v2;
  std::vector<std::shared_ptr<data::ContextCondition>>::~vector(&this->conditions);
  data::ContextCondition::~ContextCondition(this);
};

// Line 206: range 00000000119064CE-00000000119064F8
void __cdecl data::ContextConditionOr::~ContextConditionOr(data::ContextConditionOr *const this)
{
  data::ContextConditionOr::~ContextConditionOr(this);
  operator delete(this, 0x38uLL);
};

// Line 211: range 00000000116A1B74-00000000116A1B84
const char *__cdecl data::ContextConditionOr::getTypeName(const data::ContextConditionOr *const this)
{
  return "ContextConditionOr";
};

// Line 212: range 00000000116A1B86-00000000116A1D22
int32_t __cdecl data::ContextConditionOr::getHashNum(const data::ContextConditionOr *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ContextConditionOr::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ContextConditionOr",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 228: range 00000000118EE944-00000000118EE985
void __cdecl data::ContextConditionOrFactory::ContextConditionOrFactory(data::ContextConditionOrFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextConditionOrFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextConditionOrFactory = v2;
};

// Line 236: range 00000000118EEC8E-00000000118EED34
void __cdecl data::ContextConditionNot::ContextConditionNot(data::ContextConditionNot *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ContextCondition::ContextCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ContextConditionNot + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextCondition = v2;
  if ( *(_WORD *)(((unsigned __int64)&this->condition >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ContextCondition>();
};

// Line 236: range 00000000118EF27E-00000000118EF2F1
void __cdecl data::ContextConditionNot::ContextConditionNot(
        data::ContextConditionNot *const this,
        const data::ContextConditionNot *a2)
{
  int (**v2)(...); // rdx

  data::ContextCondition::ContextCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ContextConditionNot + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ContextCondition = v2;
  std::shared_ptr<data::ContextCondition>::shared_ptr(&this->condition, &a2->condition);
};

// Line 243: range 00000000119063E6-0000000011906443
void __cdecl data::ContextConditionNot::~ContextConditionNot(data::ContextConditionNot *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextConditionNot + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextCondition = v2;
  std::shared_ptr<data::ContextCondition>::~shared_ptr(&this->condition);
  data::ContextCondition::~ContextCondition(this);
};

// Line 243: range 0000000011906444-000000001190646E
void __cdecl data::ContextConditionNot::~ContextConditionNot(data::ContextConditionNot *const this)
{
  data::ContextConditionNot::~ContextConditionNot(this);
  operator delete(this, 0x30uLL);
};

// Line 248: range 00000000116A1D60-00000000116A1D70
const char *__cdecl data::ContextConditionNot::getTypeName(const data::ContextConditionNot *const this)
{
  return "ContextConditionNot";
};

// Line 249: range 00000000116A1D72-00000000116A1F0E
int32_t __cdecl data::ContextConditionNot::getHashNum(const data::ContextConditionNot *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ContextConditionNot::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ContextConditionNot",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 265: range 00000000118EF53A-00000000118EF57B
void __cdecl data::ContextConditionNotFactory::ContextConditionNotFactory(data::ContextConditionNotFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextConditionNotFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextConditionNotFactory = v2;
};

// Line 273: range 00000000118EF884-00000000118EF955
void __cdecl data::ContextConditionQuestState::ContextConditionQuestState(data::ContextConditionQuestState *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ContextCondition::ContextCondition((data::ContextCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ContextConditionQuestState + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextCondition = v2;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->quest_id, v3);
  }
  this->quest_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->state, v3);
  }
  this->state = QUEST_STATE_NONE;
};

// Line 273: range 00000000118EFE5A-00000000118EFFAC
void __cdecl data::ContextConditionQuestState::ContextConditionQuestState(
        data::ContextConditionQuestState *const this,
        const data::ContextConditionQuestState *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t quest_id; // ecx
  char v5; // dl
  data::QuestState state; // ecx
  char v7; // al

  data::ContextCondition::ContextCondition((data::ContextCondition *const)this, (const data::ContextCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ContextConditionQuestState + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ContextCondition = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->quest_id);
  }
  quest_id = a2->quest_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->quest_id, v3);
  }
  this->quest_id = quest_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->state);
  }
  state = a2->state;
  v7 = *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->state, v3);
  }
  this->state = state;
};

// Line 281: range 00000000119063BA-00000000119063E4
void __cdecl data::ContextConditionQuestState::~ContextConditionQuestState(
        data::ContextConditionQuestState *const this)
{
  data::ContextConditionQuestState::~ContextConditionQuestState(this);
  operator delete(this, 0x28uLL);
};

// Line 281: range 000000001190636C-00000000119063B9
void __cdecl data::ContextConditionQuestState::~ContextConditionQuestState(
        data::ContextConditionQuestState *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextConditionQuestState + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextCondition = v2;
  data::ContextCondition::~ContextCondition((data::ContextCondition *const)this);
};

// Line 286: range 00000000116A1F10-00000000116A1F20
const char *__cdecl data::ContextConditionQuestState::getTypeName(const data::ContextConditionQuestState *const this)
{
  return "ContextConditionQuestState";
};

// Line 287: range 00000000116A1F22-00000000116A20BE
int32_t __cdecl data::ContextConditionQuestState::getHashNum(const data::ContextConditionQuestState *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ContextConditionQuestState::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ContextConditionQuestState",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 303: range 00000000118F01F6-00000000118F0237
void __cdecl data::ContextConditionQuestStateFactory::ContextConditionQuestStateFactory(
        data::ContextConditionQuestStateFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextConditionQuestStateFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextConditionQuestStateFactory = v2;
};

// Line 311: range 00000000118F0540-00000000118F0611
void __cdecl data::ContextConditionMainQuestState::ContextConditionMainQuestState(
        data::ContextConditionMainQuestState *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ContextCondition::ContextCondition((data::ContextCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ContextConditionMainQuestState + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextCondition = v2;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->main_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->main_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->main_quest_id, v3);
  }
  this->main_quest_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->state, v3);
  }
  this->state = QUEST_STATE_NONE;
};

// Line 311: range 00000000118F0B16-00000000118F0C68
void __cdecl data::ContextConditionMainQuestState::ContextConditionMainQuestState(
        data::ContextConditionMainQuestState *const this,
        const data::ContextConditionMainQuestState *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t main_quest_id; // ecx
  char v5; // dl
  data::QuestState state; // ecx
  char v7; // al

  data::ContextCondition::ContextCondition((data::ContextCondition *const)this, (const data::ContextCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ContextConditionMainQuestState + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ContextCondition = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->main_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->main_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->main_quest_id);
  }
  main_quest_id = a2->main_quest_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->main_quest_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->main_quest_id, v3);
  }
  this->main_quest_id = main_quest_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->state);
  }
  state = a2->state;
  v7 = *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->state, v3);
  }
  this->state = state;
};

// Line 319: range 0000000011906340-000000001190636A
void __cdecl data::ContextConditionMainQuestState::~ContextConditionMainQuestState(
        data::ContextConditionMainQuestState *const this)
{
  data::ContextConditionMainQuestState::~ContextConditionMainQuestState(this);
  operator delete(this, 0x28uLL);
};

// Line 319: range 00000000119062F2-000000001190633F
void __cdecl data::ContextConditionMainQuestState::~ContextConditionMainQuestState(
        data::ContextConditionMainQuestState *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextConditionMainQuestState + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextCondition = v2;
  data::ContextCondition::~ContextCondition((data::ContextCondition *const)this);
};

// Line 324: range 00000000116A20C0-00000000116A20D0
const char *__cdecl data::ContextConditionMainQuestState::getTypeName(
        const data::ContextConditionMainQuestState *const this)
{
  return "ContextConditionMainQuestState";
};

// Line 325: range 00000000116A20D2-00000000116A226E
int32_t __cdecl data::ContextConditionMainQuestState::getHashNum(
        const data::ContextConditionMainQuestState *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ContextConditionMainQuestState::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ContextConditionMainQuestState",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 341: range 00000000118F0EB2-00000000118F0EF3
void __cdecl data::ContextConditionMainQuestStateFactory::ContextConditionMainQuestStateFactory(
        data::ContextConditionMainQuestStateFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextConditionMainQuestStateFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextConditionMainQuestStateFactory = v2;
};

// Line 349: range 00000000118F11FC-00000000118F12CA
void __cdecl data::ContextConditionMainQuestVisible::ContextConditionMainQuestVisible(
        data::ContextConditionMainQuestVisible *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ContextCondition::ContextCondition((data::ContextCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ContextConditionMainQuestVisible + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextCondition = v2;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->main_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->main_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->main_quest_id, v3);
  }
  this->main_quest_id = 0;
  if ( *(char *)(((unsigned __int64)&this->visible >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->visible, v3, &this->visible);
  this->visible = 0;
};

// Line 349: range 00000000118F17C8-00000000118F191B
void __cdecl data::ContextConditionMainQuestVisible::ContextConditionMainQuestVisible(
        data::ContextConditionMainQuestVisible *const this,
        const data::ContextConditionMainQuestVisible *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t main_quest_id; // ecx
  char v5; // dl
  bool visible; // cl
  char v7; // al

  data::ContextCondition::ContextCondition((data::ContextCondition *const)this, (const data::ContextCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ContextConditionMainQuestVisible + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ContextCondition = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->main_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->main_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->main_quest_id);
  }
  main_quest_id = a2->main_quest_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->main_quest_id >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v5 != 0;
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
    __asan_report_store4(&this->main_quest_id, v3);
  this->main_quest_id = main_quest_id;
  if ( *(char *)(((unsigned __int64)&a2->visible >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->visible, v3, &a2->visible);
  visible = a2->visible;
  v7 = *(_BYTE *)(((unsigned __int64)&this->visible >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store1(&this->visible, v3, &this->visible);
  }
  this->visible = visible;
};

// Line 357: range 0000000011906278-00000000119062C5
void __cdecl data::ContextConditionMainQuestVisible::~ContextConditionMainQuestVisible(
        data::ContextConditionMainQuestVisible *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextConditionMainQuestVisible + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextCondition = v2;
  data::ContextCondition::~ContextCondition((data::ContextCondition *const)this);
};

// Line 357: range 00000000119062C6-00000000119062F0
void __cdecl data::ContextConditionMainQuestVisible::~ContextConditionMainQuestVisible(
        data::ContextConditionMainQuestVisible *const this)
{
  data::ContextConditionMainQuestVisible::~ContextConditionMainQuestVisible(this);
  operator delete(this, 0x28uLL);
};

// Line 362: range 00000000116A2270-00000000116A2280
const char *__cdecl data::ContextConditionMainQuestVisible::getTypeName(
        const data::ContextConditionMainQuestVisible *const this)
{
  return "ContextConditionMainQuestVisible";
};

// Line 363: range 00000000116A2282-00000000116A241E
int32_t __cdecl data::ContextConditionMainQuestVisible::getHashNum(
        const data::ContextConditionMainQuestVisible *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ContextConditionMainQuestVisible::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ContextConditionMainQuestVisible",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 379: range 00000000118F1B64-00000000118F1BA5
void __cdecl data::ContextConditionMainQuestVisibleFactory::ContextConditionMainQuestVisibleFactory(
        data::ContextConditionMainQuestVisibleFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextConditionMainQuestVisibleFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextConditionMainQuestVisibleFactory = v2;
};

// Line 387: range 00000000118F1EAE-00000000118F1FBF
void __cdecl data::ContextConditionChapterQuestState::ContextConditionChapterQuestState(
        data::ContextConditionChapterQuestState *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx

  data::ContextCondition::ContextCondition((data::ContextCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ContextConditionChapterQuestState + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextCondition = v2;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->chapter_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->chapter_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->chapter_id, v3);
  }
  this->chapter_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->state, v3);
  }
  this->state = QUEST_STATE_NONE;
  v4 = ((_BYTE)this + 36) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->start_or_end_quest >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->start_or_end_quest >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->start_or_end_quest, v4, v5);
  this->start_or_end_quest = 0;
};

// Line 387: range 00000000118F2394-00000000118F2566
void __cdecl data::ContextConditionChapterQuestState::ContextConditionChapterQuestState(
        data::ContextConditionChapterQuestState *const this,
        const data::ContextConditionChapterQuestState *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t chapter_id; // ecx
  char v5; // dl
  data::QuestState state; // ecx
  char v7; // al
  __int64 v8; // rsi
  __int64 v9; // rdx
  bool start_or_end_quest; // cl
  char v11; // dl
  __int64 v12; // rdx

  data::ContextCondition::ContextCondition((data::ContextCondition *const)this, (const data::ContextCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ContextConditionChapterQuestState + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ContextCondition = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->chapter_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->chapter_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->chapter_id);
  }
  chapter_id = a2->chapter_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->chapter_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->chapter_id, v3);
  }
  this->chapter_id = chapter_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->state);
  }
  state = a2->state;
  v7 = *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->state, v3);
  }
  this->state = state;
  v8 = ((_BYTE)a2 + 36) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&a2->start_or_end_quest >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&a2->start_or_end_quest >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_load1(&a2->start_or_end_quest, v8, v9);
  start_or_end_quest = a2->start_or_end_quest;
  v11 = *(_BYTE *)(((unsigned __int64)&this->start_or_end_quest >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v11 != 0;
  v12 = (v11 != 0) & (unsigned __int8)((((unsigned __int8)this + 36) & 7) >= v11);
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->start_or_end_quest, v8, v12);
  this->start_or_end_quest = start_or_end_quest;
};

// Line 396: range 00000000119061FE-000000001190624B
void __cdecl data::ContextConditionChapterQuestState::~ContextConditionChapterQuestState(
        data::ContextConditionChapterQuestState *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextConditionChapterQuestState + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextCondition = v2;
  data::ContextCondition::~ContextCondition((data::ContextCondition *const)this);
};

// Line 396: range 000000001190624C-0000000011906276
void __cdecl data::ContextConditionChapterQuestState::~ContextConditionChapterQuestState(
        data::ContextConditionChapterQuestState *const this)
{
  data::ContextConditionChapterQuestState::~ContextConditionChapterQuestState(this);
  operator delete(this, 0x28uLL);
};

// Line 401: range 00000000116A2420-00000000116A2430
const char *__cdecl data::ContextConditionChapterQuestState::getTypeName(
        const data::ContextConditionChapterQuestState *const this)
{
  return "ContextConditionChapterQuestState";
};

// Line 402: range 00000000116A2432-00000000116A25CE
int32_t __cdecl data::ContextConditionChapterQuestState::getHashNum(
        const data::ContextConditionChapterQuestState *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ContextConditionChapterQuestState::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ContextConditionChapterQuestState",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 418: range 00000000118F27B0-00000000118F27F1
void __cdecl data::ContextConditionChapterQuestStateFactory::ContextConditionChapterQuestStateFactory(
        data::ContextConditionChapterQuestStateFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextConditionChapterQuestStateFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextConditionChapterQuestStateFactory = v2;
};

// Line 426: range 00000000118F2AFA-00000000118F2BC8
void __cdecl data::ContextConditionChapterQuestVisible::ContextConditionChapterQuestVisible(
        data::ContextConditionChapterQuestVisible *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ContextCondition::ContextCondition((data::ContextCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ContextConditionChapterQuestVisible + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextCondition = v2;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->chapter_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->chapter_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->chapter_id, v3);
  }
  this->chapter_id = 0;
  if ( *(char *)(((unsigned __int64)&this->visible >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->visible, v3, &this->visible);
  this->visible = 0;
};

// Line 426: range 00000000118F30C6-00000000118F3219
void __cdecl data::ContextConditionChapterQuestVisible::ContextConditionChapterQuestVisible(
        data::ContextConditionChapterQuestVisible *const this,
        const data::ContextConditionChapterQuestVisible *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t chapter_id; // ecx
  char v5; // dl
  bool visible; // cl
  char v7; // al

  data::ContextCondition::ContextCondition((data::ContextCondition *const)this, (const data::ContextCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ContextConditionChapterQuestVisible + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ContextCondition = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->chapter_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->chapter_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->chapter_id);
  }
  chapter_id = a2->chapter_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->chapter_id >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v5 != 0;
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
    __asan_report_store4(&this->chapter_id, v3);
  this->chapter_id = chapter_id;
  if ( *(char *)(((unsigned __int64)&a2->visible >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->visible, v3, &a2->visible);
  visible = a2->visible;
  v7 = *(_BYTE *)(((unsigned __int64)&this->visible >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store1(&this->visible, v3, &this->visible);
  }
  this->visible = visible;
};

// Line 434: range 0000000011906184-00000000119061D1
void __cdecl data::ContextConditionChapterQuestVisible::~ContextConditionChapterQuestVisible(
        data::ContextConditionChapterQuestVisible *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextConditionChapterQuestVisible + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextCondition = v2;
  data::ContextCondition::~ContextCondition((data::ContextCondition *const)this);
};

// Line 434: range 00000000119061D2-00000000119061FC
void __cdecl data::ContextConditionChapterQuestVisible::~ContextConditionChapterQuestVisible(
        data::ContextConditionChapterQuestVisible *const this)
{
  data::ContextConditionChapterQuestVisible::~ContextConditionChapterQuestVisible(this);
  operator delete(this, 0x28uLL);
};

// Line 439: range 00000000116A25D0-00000000116A25E0
const char *__cdecl data::ContextConditionChapterQuestVisible::getTypeName(
        const data::ContextConditionChapterQuestVisible *const this)
{
  return "ContextConditionChapterQuestVisible";
};

// Line 440: range 00000000116A25E2-00000000116A277E
int32_t __cdecl data::ContextConditionChapterQuestVisible::getHashNum(
        const data::ContextConditionChapterQuestVisible *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ContextConditionChapterQuestVisible::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ContextConditionChapterQuestVisible",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 456: range 00000000118F3462-00000000118F34A3
void __cdecl data::ContextConditionChapterQuestVisibleFactory::ContextConditionChapterQuestVisibleFactory(
        data::ContextConditionChapterQuestVisibleFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextConditionChapterQuestVisibleFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextConditionChapterQuestVisibleFactory = v2;
};

// Line 464: range 00000000118F37AC-00000000118F387D
void __cdecl data::ContextConditionQuestGlobalVar::ContextConditionQuestGlobalVar(
        data::ContextConditionQuestGlobalVar *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ContextCondition::ContextCondition((data::ContextCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ContextConditionQuestGlobalVar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextCondition = v2;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_global_var_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->quest_global_var_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->quest_global_var_id, v3);
  }
  this->quest_global_var_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, v3);
  }
  this->value = 0;
};

// Line 464: range 00000000118F3D82-00000000118F3ED4
void __cdecl data::ContextConditionQuestGlobalVar::ContextConditionQuestGlobalVar(
        data::ContextConditionQuestGlobalVar *const this,
        const data::ContextConditionQuestGlobalVar *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t quest_global_var_id; // ecx
  char v5; // dl
  int32_t value; // ecx
  char v7; // al

  data::ContextCondition::ContextCondition((data::ContextCondition *const)this, (const data::ContextCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ContextConditionQuestGlobalVar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ContextCondition = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->quest_global_var_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->quest_global_var_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->quest_global_var_id);
  }
  quest_global_var_id = a2->quest_global_var_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->quest_global_var_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->quest_global_var_id, v3);
  }
  this->quest_global_var_id = quest_global_var_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  v7 = *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->value, v3);
  }
  this->value = value;
};

// Line 472: range 000000001190610A-0000000011906157
void __cdecl data::ContextConditionQuestGlobalVar::~ContextConditionQuestGlobalVar(
        data::ContextConditionQuestGlobalVar *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextConditionQuestGlobalVar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextCondition = v2;
  data::ContextCondition::~ContextCondition((data::ContextCondition *const)this);
};

// Line 472: range 0000000011906158-0000000011906182
void __cdecl data::ContextConditionQuestGlobalVar::~ContextConditionQuestGlobalVar(
        data::ContextConditionQuestGlobalVar *const this)
{
  data::ContextConditionQuestGlobalVar::~ContextConditionQuestGlobalVar(this);
  operator delete(this, 0x28uLL);
};

// Line 477: range 00000000116A2780-00000000116A2790
const char *__cdecl data::ContextConditionQuestGlobalVar::getTypeName(
        const data::ContextConditionQuestGlobalVar *const this)
{
  return "ContextConditionQuestGlobalVar";
};

// Line 478: range 00000000116A2792-00000000116A292E
int32_t __cdecl data::ContextConditionQuestGlobalVar::getHashNum(
        const data::ContextConditionQuestGlobalVar *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ContextConditionQuestGlobalVar::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ContextConditionQuestGlobalVar",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 494: range 00000000118F411E-00000000118F415F
void __cdecl data::ContextConditionQuestGlobalVarFactory::ContextConditionQuestGlobalVarFactory(
        data::ContextConditionQuestGlobalVarFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextConditionQuestGlobalVarFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextConditionQuestGlobalVarFactory = v2;
};

// Line 502: range 00000000118F4468-00000000118F4579
void __cdecl data::ContextConditionAreaUnlocked::ContextConditionAreaUnlocked(
        data::ContextConditionAreaUnlocked *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx

  data::ContextCondition::ContextCondition((data::ContextCondition *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ContextConditionAreaUnlocked + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextCondition = v2;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->area_id, v3);
  }
  this->area_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id, v3);
  }
  this->scene_id = 0;
  v4 = ((_BYTE)this + 36) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_unlocked >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_unlocked >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_unlocked, v4, v5);
  this->is_unlocked = 0;
};

// Line 502: range 00000000118F494E-00000000118F4B20
void __cdecl data::ContextConditionAreaUnlocked::ContextConditionAreaUnlocked(
        data::ContextConditionAreaUnlocked *const this,
        const data::ContextConditionAreaUnlocked *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t area_id; // ecx
  char v5; // dl
  uint32_t scene_id; // ecx
  char v7; // al
  __int64 v8; // rsi
  __int64 v9; // rdx
  bool is_unlocked; // cl
  char v11; // dl
  __int64 v12; // rdx

  data::ContextCondition::ContextCondition((data::ContextCondition *const)this, (const data::ContextCondition *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ContextConditionAreaUnlocked + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ContextCondition = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->area_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->area_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->area_id);
  }
  area_id = a2->area_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->area_id, v3);
  }
  this->area_id = area_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->scene_id);
  }
  scene_id = a2->scene_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->scene_id, v3);
  }
  this->scene_id = scene_id;
  v8 = ((_BYTE)a2 + 36) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&a2->is_unlocked >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&a2->is_unlocked >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_load1(&a2->is_unlocked, v8, v9);
  is_unlocked = a2->is_unlocked;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_unlocked >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v11 != 0;
  v12 = (v11 != 0) & (unsigned __int8)((((unsigned __int8)this + 36) & 7) >= v11);
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->is_unlocked, v8, v12);
  this->is_unlocked = is_unlocked;
};

// Line 511: range 00000000119060DE-0000000011906108
void __cdecl data::ContextConditionAreaUnlocked::~ContextConditionAreaUnlocked(
        data::ContextConditionAreaUnlocked *const this)
{
  data::ContextConditionAreaUnlocked::~ContextConditionAreaUnlocked(this);
  operator delete(this, 0x28uLL);
};

// Line 511: range 0000000011906090-00000000119060DD
void __cdecl data::ContextConditionAreaUnlocked::~ContextConditionAreaUnlocked(
        data::ContextConditionAreaUnlocked *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextConditionAreaUnlocked + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextCondition = v2;
  data::ContextCondition::~ContextCondition((data::ContextCondition *const)this);
};

// Line 516: range 00000000116A2930-00000000116A2940
const char *__cdecl data::ContextConditionAreaUnlocked::getTypeName(
        const data::ContextConditionAreaUnlocked *const this)
{
  return "ContextConditionAreaUnlocked";
};

// Line 517: range 00000000116A2942-00000000116A2ADE
int32_t __cdecl data::ContextConditionAreaUnlocked::getHashNum(const data::ContextConditionAreaUnlocked *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ContextConditionAreaUnlocked::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ContextConditionAreaUnlocked",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 533: range 00000000118F4D6A-00000000118F4DAB
void __cdecl data::ContextConditionAreaUnlockedFactory::ContextConditionAreaUnlockedFactory(
        data::ContextConditionAreaUnlockedFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextConditionAreaUnlockedFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextConditionAreaUnlockedFactory = v2;
};

// Line 541: range 00000000118F50B4-00000000118F5101
void __cdecl data::ContextConditionInMultiPlayerMode::ContextConditionInMultiPlayerMode(
        data::ContextConditionInMultiPlayerMode *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ContextCondition::ContextCondition(this);
  v2 = (int (**)(...))(&`vtable for'data::ContextConditionInMultiPlayerMode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextCondition = v2;
};

// Line 541: range 00000000118F5516-00000000118F556E
void __cdecl data::ContextConditionInMultiPlayerMode::ContextConditionInMultiPlayerMode(
        data::ContextConditionInMultiPlayerMode *const this,
        const data::ContextConditionInMultiPlayerMode *a2)
{
  int (**v2)(...); // rdx

  data::ContextCondition::ContextCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ContextConditionInMultiPlayerMode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ContextCondition = v2;
};

// Line 547: range 0000000011906064-000000001190608E
void __cdecl data::ContextConditionInMultiPlayerMode::~ContextConditionInMultiPlayerMode(
        data::ContextConditionInMultiPlayerMode *const this)
{
  data::ContextConditionInMultiPlayerMode::~ContextConditionInMultiPlayerMode(this);
  operator delete(this, 0x20uLL);
};

// Line 547: range 0000000011906016-0000000011906063
void __cdecl data::ContextConditionInMultiPlayerMode::~ContextConditionInMultiPlayerMode(
        data::ContextConditionInMultiPlayerMode *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextConditionInMultiPlayerMode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextCondition = v2;
  data::ContextCondition::~ContextCondition(this);
};

// Line 552: range 00000000116A2AE0-00000000116A2AF0
const char *__cdecl data::ContextConditionInMultiPlayerMode::getTypeName(
        const data::ContextConditionInMultiPlayerMode *const this)
{
  return "ContextConditionInMultiPlayerMode";
};

// Line 553: range 00000000116A2AF2-00000000116A2C8E
int32_t __cdecl data::ContextConditionInMultiPlayerMode::getHashNum(
        const data::ContextConditionInMultiPlayerMode *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ContextConditionInMultiPlayerMode::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ContextConditionInMultiPlayerMode",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 569: range 00000000118F57B8-00000000118F57F9
void __cdecl data::ContextConditionInMultiPlayerModeFactory::ContextConditionInMultiPlayerModeFactory(
        data::ContextConditionInMultiPlayerModeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextConditionInMultiPlayerModeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextConditionInMultiPlayerModeFactory = v2;
};

// Line 577: range 00000000118F5BB8-00000000118F5C15
void __cdecl data::ContextActionExecuteAll::ContextActionExecuteAll(data::ContextActionExecuteAll *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ContextAction::ContextAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ContextActionExecuteAll + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextAction = v2;
  std::vector<std::shared_ptr<data::ContextAction>>::vector(&this->actions);
};

// Line 577: range 00000000118F600A-00000000118F60A0
void __cdecl data::ContextActionExecuteAll::ContextActionExecuteAll(
        data::ContextActionExecuteAll *const this,
        const data::ContextActionExecuteAll *a2)
{
  int (**v2)(...); // rdx

  data::ContextAction::ContextAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ContextActionExecuteAll + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ContextAction = v2;
  std::vector<std::shared_ptr<data::ContextAction>>::vector(&this->actions, &a2->actions);
};

// Line 584: range 0000000011905FEA-0000000011906014
void __cdecl data::ContextActionExecuteAll::~ContextActionExecuteAll(data::ContextActionExecuteAll *const this)
{
  data::ContextActionExecuteAll::~ContextActionExecuteAll(this);
  operator delete(this, 0x38uLL);
};

// Line 584: range 0000000011905F8C-0000000011905FE9
void __cdecl data::ContextActionExecuteAll::~ContextActionExecuteAll(data::ContextActionExecuteAll *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextActionExecuteAll + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextAction = v2;
  std::vector<std::shared_ptr<data::ContextAction>>::~vector(&this->actions);
  data::ContextAction::~ContextAction(this);
};

// Line 589: range 00000000116A2C90-00000000116A2CA0
const char *__cdecl data::ContextActionExecuteAll::getTypeName(const data::ContextActionExecuteAll *const this)
{
  return "ContextActionExecuteAll";
};

// Line 590: range 00000000116A2CA2-00000000116A2E3E
int32_t __cdecl data::ContextActionExecuteAll::getHashNum(const data::ContextActionExecuteAll *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ContextActionExecuteAll::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ContextActionExecuteAll",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 606: range 00000000118F638A-00000000118F63CB
void __cdecl data::ContextActionExecuteAllFactory::ContextActionExecuteAllFactory(
        data::ContextActionExecuteAllFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextActionExecuteAllFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextActionExecuteAllFactory = v2;
};

// Line 614: range 00000000118F66D4-00000000118F67A2
void __cdecl data::ContextActionSelectMonsterMark::ContextActionSelectMonsterMark(
        data::ContextActionSelectMonsterMark *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ContextAction::ContextAction((data::ContextAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ContextActionSelectMonsterMark + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextAction = v2;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->monster_id, v3);
  }
  this->monster_id = 0;
  if ( *(char *)(((unsigned __int64)&this->need_track >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->need_track, v3, &this->need_track);
  this->need_track = 0;
};

// Line 614: range 00000000118F6CA0-00000000118F6DF3
void __cdecl data::ContextActionSelectMonsterMark::ContextActionSelectMonsterMark(
        data::ContextActionSelectMonsterMark *const this,
        const data::ContextActionSelectMonsterMark *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t monster_id; // ecx
  char v5; // dl
  bool need_track; // cl
  char v7; // al

  data::ContextAction::ContextAction((data::ContextAction *const)this, (const data::ContextAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ContextActionSelectMonsterMark + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ContextAction = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->monster_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->monster_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->monster_id);
  }
  monster_id = a2->monster_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v5 != 0;
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
    __asan_report_store4(&this->monster_id, v3);
  this->monster_id = monster_id;
  if ( *(char *)(((unsigned __int64)&a2->need_track >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->need_track, v3, &a2->need_track);
  need_track = a2->need_track;
  v7 = *(_BYTE *)(((unsigned __int64)&this->need_track >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store1(&this->need_track, v3, &this->need_track);
  }
  this->need_track = need_track;
};

// Line 622: range 0000000011905F60-0000000011905F8A
void __cdecl data::ContextActionSelectMonsterMark::~ContextActionSelectMonsterMark(
        data::ContextActionSelectMonsterMark *const this)
{
  data::ContextActionSelectMonsterMark::~ContextActionSelectMonsterMark(this);
  operator delete(this, 0x28uLL);
};

// Line 622: range 0000000011905F12-0000000011905F5F
void __cdecl data::ContextActionSelectMonsterMark::~ContextActionSelectMonsterMark(
        data::ContextActionSelectMonsterMark *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextActionSelectMonsterMark + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextAction = v2;
  data::ContextAction::~ContextAction((data::ContextAction *const)this);
};

// Line 627: range 00000000116A2E40-00000000116A2E50
const char *__cdecl data::ContextActionSelectMonsterMark::getTypeName(
        const data::ContextActionSelectMonsterMark *const this)
{
  return "ContextActionSelectMonsterMark";
};

// Line 628: range 00000000116A2E52-00000000116A2FEE
int32_t __cdecl data::ContextActionSelectMonsterMark::getHashNum(
        const data::ContextActionSelectMonsterMark *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ContextActionSelectMonsterMark::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ContextActionSelectMonsterMark",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 644: range 00000000118F703C-00000000118F707D
void __cdecl data::ContextActionSelectMonsterMarkFactory::ContextActionSelectMonsterMarkFactory(
        data::ContextActionSelectMonsterMarkFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextActionSelectMonsterMarkFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextActionSelectMonsterMarkFactory = v2;
};

// Line 652: range 00000000118F7386-00000000118F7419
void __cdecl data::ContextActionSelectMainQuest::ContextActionSelectMainQuest(
        data::ContextActionSelectMainQuest *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ContextAction::ContextAction((data::ContextAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ContextActionSelectMainQuest + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->main_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->main_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->main_quest_id, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->main_quest_id = 0;
};

// Line 652: range 00000000118F78AE-00000000118F798B
void __cdecl data::ContextActionSelectMainQuest::ContextActionSelectMainQuest(
        data::ContextActionSelectMainQuest *const this,
        const data::ContextActionSelectMainQuest *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t main_quest_id; // ecx
  char v5; // dl

  data::ContextAction::ContextAction((data::ContextAction *const)this, (const data::ContextAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ContextActionSelectMainQuest + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ContextAction = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->main_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->main_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->main_quest_id);
  }
  main_quest_id = a2->main_quest_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->main_quest_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->main_quest_id, v3);
  }
  this->main_quest_id = main_quest_id;
};

// Line 659: range 0000000011905E98-0000000011905EE5
void __cdecl data::ContextActionSelectMainQuest::~ContextActionSelectMainQuest(
        data::ContextActionSelectMainQuest *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextActionSelectMainQuest + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextAction = v2;
  data::ContextAction::~ContextAction((data::ContextAction *const)this);
};

// Line 659: range 0000000011905EE6-0000000011905F10
void __cdecl data::ContextActionSelectMainQuest::~ContextActionSelectMainQuest(
        data::ContextActionSelectMainQuest *const this)
{
  data::ContextActionSelectMainQuest::~ContextActionSelectMainQuest(this);
  operator delete(this, 0x20uLL);
};

// Line 664: range 00000000116A2FF0-00000000116A3000
const char *__cdecl data::ContextActionSelectMainQuest::getTypeName(
        const data::ContextActionSelectMainQuest *const this)
{
  return "ContextActionSelectMainQuest";
};

// Line 665: range 00000000116A3002-00000000116A319E
int32_t __cdecl data::ContextActionSelectMainQuest::getHashNum(const data::ContextActionSelectMainQuest *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ContextActionSelectMainQuest::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ContextActionSelectMainQuest",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 681: range 00000000118F7BD4-00000000118F7C15
void __cdecl data::ContextActionSelectMainQuestFactory::ContextActionSelectMainQuestFactory(
        data::ContextActionSelectMainQuestFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextActionSelectMainQuestFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextActionSelectMainQuestFactory = v2;
};

// Line 689: range 00000000118F7F1E-00000000118F7FFF
void __cdecl data::ContextActionSelectSceneMark::ContextActionSelectSceneMark(
        data::ContextActionSelectSceneMark *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ContextAction::ContextAction((data::ContextAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ContextActionSelectSceneMark + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextAction = v2;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->icon_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->icon_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->icon_type, v3);
  }
  this->icon_type = Default_13;
  if ( *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->city_id, v3);
  }
  this->city_id = 0;
  std::vector<unsigned int>::vector(&this->scene_ids);
};

// Line 689: range 00000000118F8404-00000000118F8594
void __cdecl data::ContextActionSelectSceneMark::ContextActionSelectSceneMark(
        data::ContextActionSelectSceneMark *const this,
        const data::ContextActionSelectSceneMark *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::MarkIconType icon_type; // ecx
  char v5; // dl
  uint32_t city_id; // ecx
  char v7; // al

  data::ContextAction::ContextAction((data::ContextAction *const)this, (const data::ContextAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ContextActionSelectSceneMark + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ContextAction = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->icon_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->icon_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->icon_type);
  }
  icon_type = a2->icon_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->icon_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->icon_type, v3);
  }
  this->icon_type = icon_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->city_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->city_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->city_id);
  }
  city_id = a2->city_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->city_id, v3);
  }
  this->city_id = city_id;
  std::vector<unsigned int>::vector(&this->scene_ids, &a2->scene_ids);
};

// Line 698: range 0000000011905E6C-0000000011905E96
void __cdecl data::ContextActionSelectSceneMark::~ContextActionSelectSceneMark(
        data::ContextActionSelectSceneMark *const this)
{
  data::ContextActionSelectSceneMark::~ContextActionSelectSceneMark(this);
  operator delete(this, 0x40uLL);
};

// Line 698: range 0000000011905E0E-0000000011905E6B
void __cdecl data::ContextActionSelectSceneMark::~ContextActionSelectSceneMark(
        data::ContextActionSelectSceneMark *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextActionSelectSceneMark + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextAction = v2;
  std::vector<unsigned int>::~vector(&this->scene_ids);
  data::ContextAction::~ContextAction((data::ContextAction *const)this);
};

// Line 703: range 00000000116A31A0-00000000116A31B0
const char *__cdecl data::ContextActionSelectSceneMark::getTypeName(
        const data::ContextActionSelectSceneMark *const this)
{
  return "ContextActionSelectSceneMark";
};

// Line 704: range 00000000116A31B2-00000000116A334E
int32_t __cdecl data::ContextActionSelectSceneMark::getHashNum(const data::ContextActionSelectSceneMark *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ContextActionSelectSceneMark::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ContextActionSelectSceneMark",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 720: range 00000000118F887E-00000000118F88BF
void __cdecl data::ContextActionSelectSceneMarkFactory::ContextActionSelectSceneMarkFactory(
        data::ContextActionSelectSceneMarkFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextActionSelectSceneMarkFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextActionSelectSceneMarkFactory = v2;
};

// Line 728: range 00000000118F8BC8-00000000118F8C99
void __cdecl data::ContextActionSelectTransPoint::ContextActionSelectTransPoint(
        data::ContextActionSelectTransPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ContextAction::ContextAction((data::ContextAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ContextActionSelectTransPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextAction = v2;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->point_id, v3);
  }
  this->point_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id, v3);
  }
  this->scene_id = 0;
};

// Line 728: range 00000000118F919E-00000000118F92F0
void __cdecl data::ContextActionSelectTransPoint::ContextActionSelectTransPoint(
        data::ContextActionSelectTransPoint *const this,
        const data::ContextActionSelectTransPoint *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t point_id; // ecx
  char v5; // dl
  uint32_t scene_id; // ecx
  char v7; // al

  data::ContextAction::ContextAction((data::ContextAction *const)this, (const data::ContextAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ContextActionSelectTransPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ContextAction = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->point_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->point_id);
  }
  point_id = a2->point_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->point_id, v3);
  }
  this->point_id = point_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->scene_id);
  }
  scene_id = a2->scene_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->scene_id, v3);
  }
  this->scene_id = scene_id;
};

// Line 736: range 0000000011905D94-0000000011905DE1
void __cdecl data::ContextActionSelectTransPoint::~ContextActionSelectTransPoint(
        data::ContextActionSelectTransPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextActionSelectTransPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextAction = v2;
  data::ContextAction::~ContextAction((data::ContextAction *const)this);
};

// Line 736: range 0000000011905DE2-0000000011905E0C
void __cdecl data::ContextActionSelectTransPoint::~ContextActionSelectTransPoint(
        data::ContextActionSelectTransPoint *const this)
{
  data::ContextActionSelectTransPoint::~ContextActionSelectTransPoint(this);
  operator delete(this, 0x28uLL);
};

// Line 741: range 00000000116A3350-00000000116A3360
const char *__cdecl data::ContextActionSelectTransPoint::getTypeName(
        const data::ContextActionSelectTransPoint *const this)
{
  return "ContextActionSelectTransPoint";
};

// Line 742: range 00000000116A3362-00000000116A34FE
int32_t __cdecl data::ContextActionSelectTransPoint::getHashNum(const data::ContextActionSelectTransPoint *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ContextActionSelectTransPoint::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ContextActionSelectTransPoint",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 758: range 00000000118F953A-00000000118F957B
void __cdecl data::ContextActionSelectTransPointFactory::ContextActionSelectTransPointFactory(
        data::ContextActionSelectTransPointFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextActionSelectTransPointFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextActionSelectTransPointFactory = v2;
};

// Line 766: range 00000000118F9884-00000000118F9917
void __cdecl data::ContextActionCreateQuestAcceptionMark::ContextActionCreateQuestAcceptionMark(
        data::ContextActionCreateQuestAcceptionMark *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ContextAction::ContextAction((data::ContextAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ContextActionCreateQuestAcceptionMark + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_id, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->config_id = 0;
};

// Line 766: range 00000000118F9DAC-00000000118F9E89
void __cdecl data::ContextActionCreateQuestAcceptionMark::ContextActionCreateQuestAcceptionMark(
        data::ContextActionCreateQuestAcceptionMark *const this,
        const data::ContextActionCreateQuestAcceptionMark *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t config_id; // ecx
  char v5; // dl

  data::ContextAction::ContextAction((data::ContextAction *const)this, (const data::ContextAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ContextActionCreateQuestAcceptionMark + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ContextAction = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->config_id);
  }
  config_id = a2->config_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->config_id, v3);
  }
  this->config_id = config_id;
};

// Line 773: range 0000000011905D68-0000000011905D92
void __cdecl data::ContextActionCreateQuestAcceptionMark::~ContextActionCreateQuestAcceptionMark(
        data::ContextActionCreateQuestAcceptionMark *const this)
{
  data::ContextActionCreateQuestAcceptionMark::~ContextActionCreateQuestAcceptionMark(this);
  operator delete(this, 0x20uLL);
};

// Line 773: range 0000000011905D1A-0000000011905D67
void __cdecl data::ContextActionCreateQuestAcceptionMark::~ContextActionCreateQuestAcceptionMark(
        data::ContextActionCreateQuestAcceptionMark *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextActionCreateQuestAcceptionMark + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextAction = v2;
  data::ContextAction::~ContextAction((data::ContextAction *const)this);
};

// Line 778: range 00000000116A3500-00000000116A3510
const char *__cdecl data::ContextActionCreateQuestAcceptionMark::getTypeName(
        const data::ContextActionCreateQuestAcceptionMark *const this)
{
  return "ContextActionCreateQuestAcceptionMark";
};

// Line 779: range 00000000116A3512-00000000116A36AE
int32_t __cdecl data::ContextActionCreateQuestAcceptionMark::getHashNum(
        const data::ContextActionCreateQuestAcceptionMark *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ContextActionCreateQuestAcceptionMark::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ContextActionCreateQuestAcceptionMark",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 795: range 00000000118FA0D2-00000000118FA113
void __cdecl data::ContextActionCreateQuestAcceptionMarkFactory::ContextActionCreateQuestAcceptionMarkFactory(
        data::ContextActionCreateQuestAcceptionMarkFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextActionCreateQuestAcceptionMarkFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextActionCreateQuestAcceptionMarkFactory = v2;
};

// Line 803: range 00000000118FA41C-00000000118FA4AF
void __cdecl data::ContextActionSelectLegendQuest::ContextActionSelectLegendQuest(
        data::ContextActionSelectLegendQuest *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ContextAction::ContextAction((data::ContextAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ContextActionSelectLegendQuest + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->legend_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->legend_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->legend_quest_id, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->legend_quest_id = 0;
};

// Line 803: range 00000000118FA944-00000000118FAA21
void __cdecl data::ContextActionSelectLegendQuest::ContextActionSelectLegendQuest(
        data::ContextActionSelectLegendQuest *const this,
        const data::ContextActionSelectLegendQuest *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t legend_quest_id; // ecx
  char v5; // dl

  data::ContextAction::ContextAction((data::ContextAction *const)this, (const data::ContextAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ContextActionSelectLegendQuest + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ContextAction = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->legend_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->legend_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->legend_quest_id);
  }
  legend_quest_id = a2->legend_quest_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->legend_quest_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->legend_quest_id, v3);
  }
  this->legend_quest_id = legend_quest_id;
};

// Line 810: range 0000000011905CA0-0000000011905CED
void __cdecl data::ContextActionSelectLegendQuest::~ContextActionSelectLegendQuest(
        data::ContextActionSelectLegendQuest *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextActionSelectLegendQuest + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextAction = v2;
  data::ContextAction::~ContextAction((data::ContextAction *const)this);
};

// Line 810: range 0000000011905CEE-0000000011905D18
void __cdecl data::ContextActionSelectLegendQuest::~ContextActionSelectLegendQuest(
        data::ContextActionSelectLegendQuest *const this)
{
  data::ContextActionSelectLegendQuest::~ContextActionSelectLegendQuest(this);
  operator delete(this, 0x20uLL);
};

// Line 815: range 00000000116A36B0-00000000116A36C0
const char *__cdecl data::ContextActionSelectLegendQuest::getTypeName(
        const data::ContextActionSelectLegendQuest *const this)
{
  return "ContextActionSelectLegendQuest";
};

// Line 816: range 00000000116A36C2-00000000116A385E
int32_t __cdecl data::ContextActionSelectLegendQuest::getHashNum(
        const data::ContextActionSelectLegendQuest *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ContextActionSelectLegendQuest::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ContextActionSelectLegendQuest",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 832: range 00000000118FAC6A-00000000118FACAB
void __cdecl data::ContextActionSelectLegendQuestFactory::ContextActionSelectLegendQuestFactory(
        data::ContextActionSelectLegendQuestFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextActionSelectLegendQuestFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextActionSelectLegendQuestFactory = v2;
};

// Line 840: range 00000000118FAFB4-00000000118FB047
void __cdecl data::ContextActionSelectChapterOngoingMainQuest::ContextActionSelectChapterOngoingMainQuest(
        data::ContextActionSelectChapterOngoingMainQuest *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ContextAction::ContextAction((data::ContextAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ContextActionSelectChapterOngoingMainQuest + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->chapter_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->chapter_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->chapter_id, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->chapter_id = 0;
};

// Line 840: range 00000000118FB4DC-00000000118FB5B9
void __cdecl data::ContextActionSelectChapterOngoingMainQuest::ContextActionSelectChapterOngoingMainQuest(
        data::ContextActionSelectChapterOngoingMainQuest *const this,
        const data::ContextActionSelectChapterOngoingMainQuest *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t chapter_id; // ecx
  char v5; // dl

  data::ContextAction::ContextAction((data::ContextAction *const)this, (const data::ContextAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ContextActionSelectChapterOngoingMainQuest + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ContextAction = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->chapter_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->chapter_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->chapter_id);
  }
  chapter_id = a2->chapter_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->chapter_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->chapter_id, v3);
  }
  this->chapter_id = chapter_id;
};

// Line 847: range 0000000011905C26-0000000011905C73
void __cdecl data::ContextActionSelectChapterOngoingMainQuest::~ContextActionSelectChapterOngoingMainQuest(
        data::ContextActionSelectChapterOngoingMainQuest *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextActionSelectChapterOngoingMainQuest + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextAction = v2;
  data::ContextAction::~ContextAction((data::ContextAction *const)this);
};

// Line 847: range 0000000011905C74-0000000011905C9E
void __cdecl data::ContextActionSelectChapterOngoingMainQuest::~ContextActionSelectChapterOngoingMainQuest(
        data::ContextActionSelectChapterOngoingMainQuest *const this)
{
  data::ContextActionSelectChapterOngoingMainQuest::~ContextActionSelectChapterOngoingMainQuest(this);
  operator delete(this, 0x20uLL);
};

// Line 852: range 00000000116A3860-00000000116A3870
const char *__cdecl data::ContextActionSelectChapterOngoingMainQuest::getTypeName(
        const data::ContextActionSelectChapterOngoingMainQuest *const this)
{
  return "ContextActionSelectChapterOngoingMainQuest";
};

// Line 853: range 00000000116A3872-00000000116A3A0E
int32_t __cdecl data::ContextActionSelectChapterOngoingMainQuest::getHashNum(
        const data::ContextActionSelectChapterOngoingMainQuest *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ContextActionSelectChapterOngoingMainQuest::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ContextActionSelectChapterOngoingMainQuest",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 869: range 00000000118FB802-00000000118FB843
void __cdecl data::ContextActionSelectChapterOngoingMainQuestFactory::ContextActionSelectChapterOngoingMainQuestFactory(
        data::ContextActionSelectChapterOngoingMainQuestFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextActionSelectChapterOngoingMainQuestFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextActionSelectChapterOngoingMainQuestFactory = v2;
};

// Line 877: range 00000000118FBB4C-00000000118FBBEF
void __cdecl data::ContextActionSetText::ContextActionSetText(data::ContextActionSetText *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ContextAction::ContextAction((data::ContextAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ContextActionSetText + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->ui_element >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ui_element >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ui_element, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->ui_element = None_56;
  std::string::basic_string(&this->text_map);
};

// Line 877: range 00000000118FBFF4-00000000118FC10F
void __cdecl data::ContextActionSetText::ContextActionSetText(
        data::ContextActionSetText *const this,
        const data::ContextActionSetText *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::ActivityBannerUIElementType ui_element; // ecx
  char v5; // dl

  data::ContextAction::ContextAction((data::ContextAction *const)this, (const data::ContextAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ContextActionSetText + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ContextAction = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->ui_element >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->ui_element >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->ui_element);
  }
  ui_element = a2->ui_element;
  v5 = *(_BYTE *)(((unsigned __int64)&this->ui_element >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->ui_element, v3);
  }
  this->ui_element = ui_element;
  std::string::basic_string(&this->text_map, &a2->text_map);
};

// Line 885: range 0000000011905B9C-0000000011905BF9
void __cdecl data::ContextActionSetText::~ContextActionSetText(data::ContextActionSetText *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextActionSetText + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextAction = v2;
  std::string::~string(&this->text_map);
  data::ContextAction::~ContextAction((data::ContextAction *const)this);
};

// Line 885: range 0000000011905BFA-0000000011905C24
void __cdecl data::ContextActionSetText::~ContextActionSetText(data::ContextActionSetText *const this)
{
  data::ContextActionSetText::~ContextActionSetText(this);
  operator delete(this, 0x40uLL);
};

// Line 890: range 00000000116A3A10-00000000116A3A20
const char *__cdecl data::ContextActionSetText::getTypeName(const data::ContextActionSetText *const this)
{
  return "ContextActionSetText";
};

// Line 891: range 00000000116A3A22-00000000116A3BBE
int32_t __cdecl data::ContextActionSetText::getHashNum(const data::ContextActionSetText *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ContextActionSetText::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ContextActionSetText",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 907: range 00000000118FC3F8-00000000118FC439
void __cdecl data::ContextActionSetTextFactory::ContextActionSetTextFactory(
        data::ContextActionSetTextFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextActionSetTextFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextActionSetTextFactory = v2;
};

// Line 915: range 00000000118FC742-00000000118FC823
void __cdecl data::ContextActionSetTextWithMainQuestName::ContextActionSetTextWithMainQuestName(
        data::ContextActionSetTextWithMainQuestName *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ContextAction::ContextAction((data::ContextAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ContextActionSetTextWithMainQuestName + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextAction = v2;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->ui_element >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ui_element >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ui_element, v3);
  }
  this->ui_element = None_56;
  std::string::basic_string(&this->text_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->main_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->main_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->main_quest_id, v3);
  }
  this->main_quest_id = 0;
};

// Line 915: range 00000000118FCC3E-00000000118FCDCE
void __cdecl data::ContextActionSetTextWithMainQuestName::ContextActionSetTextWithMainQuestName(
        data::ContextActionSetTextWithMainQuestName *const this,
        const data::ContextActionSetTextWithMainQuestName *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::ActivityBannerUIElementType ui_element; // ecx
  char v5; // dl
  std::string *p_text_map; // rsi
  uint32_t main_quest_id; // ecx
  char v8; // al

  data::ContextAction::ContextAction((data::ContextAction *const)this, (const data::ContextAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ContextActionSetTextWithMainQuestName + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ContextAction = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->ui_element >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->ui_element >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->ui_element);
  }
  ui_element = a2->ui_element;
  v5 = *(_BYTE *)(((unsigned __int64)&this->ui_element >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->ui_element, v3);
  }
  this->ui_element = ui_element;
  p_text_map = &a2->text_map;
  std::string::basic_string(&this->text_map, &a2->text_map);
  if ( *(_BYTE *)(((unsigned __int64)&a2->main_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->main_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->main_quest_id);
  }
  main_quest_id = a2->main_quest_id;
  v8 = *(_BYTE *)(((unsigned __int64)&this->main_quest_id >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(p_text_map) = v8 != 0;
    __asan_report_store4(&this->main_quest_id, p_text_map);
  }
  this->main_quest_id = main_quest_id;
};

// Line 924: range 0000000011905B12-0000000011905B6F
void __cdecl data::ContextActionSetTextWithMainQuestName::~ContextActionSetTextWithMainQuestName(
        data::ContextActionSetTextWithMainQuestName *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextActionSetTextWithMainQuestName + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextAction = v2;
  std::string::~string(&this->text_map);
  data::ContextAction::~ContextAction((data::ContextAction *const)this);
};

// Line 924: range 0000000011905B70-0000000011905B9A
void __cdecl data::ContextActionSetTextWithMainQuestName::~ContextActionSetTextWithMainQuestName(
        data::ContextActionSetTextWithMainQuestName *const this)
{
  data::ContextActionSetTextWithMainQuestName::~ContextActionSetTextWithMainQuestName(this);
  operator delete(this, 0x48uLL);
};

// Line 929: range 00000000116A3BC0-00000000116A3BD0
const char *__cdecl data::ContextActionSetTextWithMainQuestName::getTypeName(
        const data::ContextActionSetTextWithMainQuestName *const this)
{
  return "ContextActionSetTextWithMainQuestName";
};

// Line 930: range 00000000116A3BD2-00000000116A3D6E
int32_t __cdecl data::ContextActionSetTextWithMainQuestName::getHashNum(
        const data::ContextActionSetTextWithMainQuestName *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ContextActionSetTextWithMainQuestName::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ContextActionSetTextWithMainQuestName",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 946: range 00000000118FD0B8-00000000118FD0F9
void __cdecl data::ContextActionSetTextWithMainQuestNameFactory::ContextActionSetTextWithMainQuestNameFactory(
        data::ContextActionSetTextWithMainQuestNameFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextActionSetTextWithMainQuestNameFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextActionSetTextWithMainQuestNameFactory = v2;
};

// Line 954: range 00000000118FD402-00000000118FD510
void __cdecl data::ContextActionSetActive::ContextActionSetActive(data::ContextActionSetActive *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx

  data::ContextAction::ContextAction((data::ContextAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ContextActionSetActive + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextAction = v2;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->ui_element >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ui_element >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ui_element, v3);
  }
  this->ui_element = None_56;
  if ( *(char *)(((unsigned __int64)&this->active >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->active, v3, &this->active);
  this->active = 0;
  v4 = ((_BYTE)this + 33) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->set_parent >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->set_parent >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->set_parent, v4, v5);
  this->set_parent = 0;
};

// Line 954: range 00000000118FD8E6-00000000118FDAB9
void __cdecl data::ContextActionSetActive::ContextActionSetActive(
        data::ContextActionSetActive *const this,
        const data::ContextActionSetActive *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::ActivityBannerUIElementType ui_element; // ecx
  char v5; // dl
  bool active; // cl
  char v7; // al
  __int64 v8; // rsi
  __int64 v9; // rdx
  bool set_parent; // cl
  char v11; // dl
  __int64 v12; // rdx

  data::ContextAction::ContextAction((data::ContextAction *const)this, (const data::ContextAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ContextActionSetActive + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ContextAction = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->ui_element >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->ui_element >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->ui_element);
  }
  ui_element = a2->ui_element;
  v5 = *(_BYTE *)(((unsigned __int64)&this->ui_element >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v5 != 0;
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
    __asan_report_store4(&this->ui_element, v3);
  this->ui_element = ui_element;
  if ( *(char *)(((unsigned __int64)&a2->active >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->active, v3, &a2->active);
  active = a2->active;
  v7 = *(_BYTE *)(((unsigned __int64)&this->active >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store1(&this->active, v3, &this->active);
  }
  this->active = active;
  v8 = ((_BYTE)a2 + 33) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&a2->set_parent >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&a2->set_parent >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_load1(&a2->set_parent, v8, v9);
  set_parent = a2->set_parent;
  v11 = *(_BYTE *)(((unsigned __int64)&this->set_parent >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v11 != 0;
  v12 = (v11 != 0) & (unsigned __int8)((((unsigned __int8)this + 33) & 7) >= v11);
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->set_parent, v8, v12);
  this->set_parent = set_parent;
};

// Line 963: range 0000000011905A98-0000000011905AE5
void __cdecl data::ContextActionSetActive::~ContextActionSetActive(data::ContextActionSetActive *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextActionSetActive + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextAction = v2;
  data::ContextAction::~ContextAction((data::ContextAction *const)this);
};

// Line 963: range 0000000011905AE6-0000000011905B10
void __cdecl data::ContextActionSetActive::~ContextActionSetActive(data::ContextActionSetActive *const this)
{
  data::ContextActionSetActive::~ContextActionSetActive(this);
  operator delete(this, 0x28uLL);
};

// Line 968: range 00000000116A3D70-00000000116A3D80
const char *__cdecl data::ContextActionSetActive::getTypeName(const data::ContextActionSetActive *const this)
{
  return "ContextActionSetActive";
};

// Line 969: range 00000000116A3D82-00000000116A3F1E
int32_t __cdecl data::ContextActionSetActive::getHashNum(const data::ContextActionSetActive *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ContextActionSetActive::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ContextActionSetActive",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 985: range 00000000118FDD02-00000000118FDD43
void __cdecl data::ContextActionSetActiveFactory::ContextActionSetActiveFactory(
        data::ContextActionSetActiveFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextActionSetActiveFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextActionSetActiveFactory = v2;
};

// Line 993: range 00000000118FE04C-00000000118FE12A
void __cdecl data::ContextActionSetAnimatorTrigger::ContextActionSetAnimatorTrigger(
        data::ContextActionSetAnimatorTrigger *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ContextAction::ContextAction((data::ContextAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ContextActionSetAnimatorTrigger + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextAction = v2;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->ui_element >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ui_element >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ui_element, v3);
  }
  this->ui_element = None_56;
  std::string::basic_string(&this->trigger_name);
  if ( *(char *)(((unsigned __int64)&this->set_or_reset >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->set_or_reset, v3, &this->set_or_reset);
  this->set_or_reset = 0;
};

// Line 993: range 00000000118FE546-00000000118FE6D7
void __cdecl data::ContextActionSetAnimatorTrigger::ContextActionSetAnimatorTrigger(
        data::ContextActionSetAnimatorTrigger *const this,
        const data::ContextActionSetAnimatorTrigger *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::ActivityBannerUIElementType ui_element; // ecx
  char v5; // dl
  std::string *p_trigger_name; // rsi
  bool set_or_reset; // cl
  char v8; // al

  data::ContextAction::ContextAction((data::ContextAction *const)this, (const data::ContextAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ContextActionSetAnimatorTrigger + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ContextAction = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->ui_element >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->ui_element >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->ui_element);
  }
  ui_element = a2->ui_element;
  v5 = *(_BYTE *)(((unsigned __int64)&this->ui_element >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->ui_element, v3);
  }
  this->ui_element = ui_element;
  p_trigger_name = &a2->trigger_name;
  std::string::basic_string(&this->trigger_name, &a2->trigger_name);
  if ( *(char *)(((unsigned __int64)&a2->set_or_reset >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->set_or_reset, p_trigger_name, &a2->set_or_reset);
  set_or_reset = a2->set_or_reset;
  v8 = *(_BYTE *)(((unsigned __int64)&this->set_or_reset >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(p_trigger_name) = v8 != 0;
    __asan_report_store1(&this->set_or_reset, p_trigger_name, &this->set_or_reset);
  }
  this->set_or_reset = set_or_reset;
};

// Line 1002: range 0000000011905A0E-0000000011905A6B
void __cdecl data::ContextActionSetAnimatorTrigger::~ContextActionSetAnimatorTrigger(
        data::ContextActionSetAnimatorTrigger *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextActionSetAnimatorTrigger + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextAction = v2;
  std::string::~string(&this->trigger_name);
  data::ContextAction::~ContextAction((data::ContextAction *const)this);
};

// Line 1002: range 0000000011905A6C-0000000011905A96
void __cdecl data::ContextActionSetAnimatorTrigger::~ContextActionSetAnimatorTrigger(
        data::ContextActionSetAnimatorTrigger *const this)
{
  data::ContextActionSetAnimatorTrigger::~ContextActionSetAnimatorTrigger(this);
  operator delete(this, 0x48uLL);
};

// Line 1007: range 00000000116A3F20-00000000116A3F30
const char *__cdecl data::ContextActionSetAnimatorTrigger::getTypeName(
        const data::ContextActionSetAnimatorTrigger *const this)
{
  return "ContextActionSetAnimatorTrigger";
};

// Line 1008: range 00000000116A3F32-00000000116A40CE
int32_t __cdecl data::ContextActionSetAnimatorTrigger::getHashNum(
        const data::ContextActionSetAnimatorTrigger *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ContextActionSetAnimatorTrigger::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ContextActionSetAnimatorTrigger",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1024: range 00000000118FE9C0-00000000118FEA01
void __cdecl data::ContextActionSetAnimatorTriggerFactory::ContextActionSetAnimatorTriggerFactory(
        data::ContextActionSetAnimatorTriggerFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextActionSetAnimatorTriggerFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextActionSetAnimatorTriggerFactory = v2;
};

// Line 1032: range 00000000118FED0A-00000000118FEE31
void __cdecl data::ContextActionReportActivityBuriedPoint::ContextActionReportActivityBuriedPoint(
        data::ContextActionReportActivityBuriedPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ContextAction::ContextAction((data::ContextAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ContextActionReportActivityBuriedPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextAction = v2;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->activity_id, v3);
  }
  this->activity_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->button_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->button_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->button_id, v3);
  }
  this->button_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->schedule_id, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->schedule_id = 0;
  std::string::basic_string(&this->additional_info);
};

// Line 1032: range 00000000118FF24C-00000000118FF461
void __cdecl data::ContextActionReportActivityBuriedPoint::ContextActionReportActivityBuriedPoint(
        data::ContextActionReportActivityBuriedPoint *const this,
        const data::ContextActionReportActivityBuriedPoint *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t activity_id; // ecx
  char v5; // dl
  uint32_t button_id; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t schedule_id; // ecx
  char v10; // dl

  data::ContextAction::ContextAction((data::ContextAction *const)this, (const data::ContextAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ContextActionReportActivityBuriedPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ContextAction = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->activity_id);
  }
  activity_id = a2->activity_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->activity_id, v3);
  }
  this->activity_id = activity_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->button_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->button_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->button_id);
  }
  button_id = a2->button_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->button_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->button_id, v3);
  }
  this->button_id = button_id;
  v8 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->schedule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->schedule_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->schedule_id);
  }
  schedule_id = a2->schedule_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->schedule_id, v8);
  }
  this->schedule_id = schedule_id;
  std::string::basic_string(&this->additional_info, &a2->additional_info);
};

// Line 1042: range 0000000011905984-00000000119059E1
void __cdecl data::ContextActionReportActivityBuriedPoint::~ContextActionReportActivityBuriedPoint(
        data::ContextActionReportActivityBuriedPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextActionReportActivityBuriedPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextAction = v2;
  std::string::~string(&this->additional_info);
  data::ContextAction::~ContextAction((data::ContextAction *const)this);
};

// Line 1042: range 00000000119059E2-0000000011905A0C
void __cdecl data::ContextActionReportActivityBuriedPoint::~ContextActionReportActivityBuriedPoint(
        data::ContextActionReportActivityBuriedPoint *const this)
{
  data::ContextActionReportActivityBuriedPoint::~ContextActionReportActivityBuriedPoint(this);
  operator delete(this, 0x48uLL);
};

// Line 1047: range 00000000116A40D0-00000000116A40E0
const char *__cdecl data::ContextActionReportActivityBuriedPoint::getTypeName(
        const data::ContextActionReportActivityBuriedPoint *const this)
{
  return "ContextActionReportActivityBuriedPoint";
};

// Line 1048: range 00000000116A40E2-00000000116A427E
int32_t __cdecl data::ContextActionReportActivityBuriedPoint::getHashNum(
        const data::ContextActionReportActivityBuriedPoint *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ContextActionReportActivityBuriedPoint::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ContextActionReportActivityBuriedPoint",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1064: range 00000000118FF74A-00000000118FF78B
void __cdecl data::ContextActionReportActivityBuriedPointFactory::ContextActionReportActivityBuriedPointFactory(
        data::ContextActionReportActivityBuriedPointFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextActionReportActivityBuriedPointFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextActionReportActivityBuriedPointFactory = v2;
};

// Line 1072: range 00000000118FFA94-00000000118FFB47
void __cdecl data::ContextActionSetIcon::ContextActionSetIcon(data::ContextActionSetIcon *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ContextAction::ContextAction((data::ContextAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ContextActionSetIcon + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->ui_element >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ui_element >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ui_element, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->ui_element = None_56;
  std::string::basic_string(&this->icon_alias_name);
  std::string::basic_string(&this->icon_full_path);
};

// Line 1072: range 00000000118FFEFC-0000000011900047
void __cdecl data::ContextActionSetIcon::ContextActionSetIcon(
        data::ContextActionSetIcon *const this,
        const data::ContextActionSetIcon *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::ActivityBannerUIElementType ui_element; // ecx
  char v5; // dl

  data::ContextAction::ContextAction((data::ContextAction *const)this, (const data::ContextAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ContextActionSetIcon + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ContextAction = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->ui_element >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->ui_element >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->ui_element);
  }
  ui_element = a2->ui_element;
  v5 = *(_BYTE *)(((unsigned __int64)&this->ui_element >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->ui_element, v3);
  }
  this->ui_element = ui_element;
  std::string::basic_string(&this->icon_alias_name, &a2->icon_alias_name);
  std::string::basic_string(&this->icon_full_path, &a2->icon_full_path);
};

// Line 1081: range 00000000119058EA-0000000011905957
void __cdecl data::ContextActionSetIcon::~ContextActionSetIcon(data::ContextActionSetIcon *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextActionSetIcon + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextAction = v2;
  std::string::~string(&this->icon_full_path);
  std::string::~string(&this->icon_alias_name);
  data::ContextAction::~ContextAction((data::ContextAction *const)this);
};

// Line 1081: range 0000000011905958-0000000011905982
void __cdecl data::ContextActionSetIcon::~ContextActionSetIcon(data::ContextActionSetIcon *const this)
{
  data::ContextActionSetIcon::~ContextActionSetIcon(this);
  operator delete(this, 0x60uLL);
};

// Line 1086: range 00000000116A4280-00000000116A4290
const char *__cdecl data::ContextActionSetIcon::getTypeName(const data::ContextActionSetIcon *const this)
{
  return "ContextActionSetIcon";
};

// Line 1087: range 00000000116A4292-00000000116A442E
int32_t __cdecl data::ContextActionSetIcon::getHashNum(const data::ContextActionSetIcon *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ContextActionSetIcon::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ContextActionSetIcon",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1103: range 0000000011900330-0000000011900371
void __cdecl data::ContextActionSetIconFactory::ContextActionSetIconFactory(
        data::ContextActionSetIconFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextActionSetIconFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextActionSetIconFactory = v2;
};

// Line 1111: range 000000001190067A-00000000119006D7
void __cdecl data::ContextActionShowMessage::ContextActionShowMessage(data::ContextActionShowMessage *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ContextAction::ContextAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ContextActionShowMessage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextAction = v2;
  std::string::basic_string(&this->text_map_id);
};

// Line 1111: range 0000000011900ADC-0000000011900B72
void __cdecl data::ContextActionShowMessage::ContextActionShowMessage(
        data::ContextActionShowMessage *const this,
        const data::ContextActionShowMessage *a2)
{
  int (**v2)(...); // rdx

  data::ContextAction::ContextAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ContextActionShowMessage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ContextAction = v2;
  std::string::basic_string(&this->text_map_id, &a2->text_map_id);
};

// Line 1118: range 0000000011905860-00000000119058BD
void __cdecl data::ContextActionShowMessage::~ContextActionShowMessage(data::ContextActionShowMessage *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextActionShowMessage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextAction = v2;
  std::string::~string(&this->text_map_id);
  data::ContextAction::~ContextAction(this);
};

// Line 1118: range 00000000119058BE-00000000119058E8
void __cdecl data::ContextActionShowMessage::~ContextActionShowMessage(data::ContextActionShowMessage *const this)
{
  data::ContextActionShowMessage::~ContextActionShowMessage(this);
  operator delete(this, 0x40uLL);
};

// Line 1123: range 00000000116A4430-00000000116A4440
const char *__cdecl data::ContextActionShowMessage::getTypeName(const data::ContextActionShowMessage *const this)
{
  return "ContextActionShowMessage";
};

// Line 1124: range 00000000116A4442-00000000116A45DE
int32_t __cdecl data::ContextActionShowMessage::getHashNum(const data::ContextActionShowMessage *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ContextActionShowMessage::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ContextActionShowMessage",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1140: range 0000000011900E5C-0000000011900E9D
void __cdecl data::ContextActionShowMessageFactory::ContextActionShowMessageFactory(
        data::ContextActionShowMessageFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ContextActionShowMessageFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ContextActionShowMessageFactory = v2;
};

// Line 1148: range 00000000116A9B00-00000000116A9B8C
void __cdecl data::ConfigActivityBanner::ConfigActivityBanner(data::ConfigActivityBanner *const this)
{
  __int64 v1; // rsi

  std::unordered_map<std::string,std::shared_ptr<data::ContextCondition>>::unordered_map(&this->condition_defines);
  std::unordered_map<std::string,std::shared_ptr<data::ContextAction>>::unordered_map(&this->action_defines);
  std::vector<data::ContextConditionActionGroup>::vector(&this->update_groups);
  std::vector<data::ContextConditionActionGroup>::vector(&this->click_groups);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 1148: range 000000001189383A-0000000011893982
void __cdecl data::ConfigActivityBanner::ConfigActivityBanner(
        data::ConfigActivityBanner *const this,
        const data::ConfigActivityBanner *a2)
{
  data::ContextConditionActionGroupArray *p_click_groups; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::unordered_map<std::string,std::shared_ptr<data::ContextCondition>>::unordered_map(
    &this->condition_defines,
    &a2->condition_defines);
  std::unordered_map<std::string,std::shared_ptr<data::ContextAction>>::unordered_map(
    &this->action_defines,
    &a2->action_defines);
  std::vector<data::ContextConditionActionGroup>::vector(&this->update_groups, &a2->update_groups);
  p_click_groups = &a2->click_groups;
  std::vector<data::ContextConditionActionGroup>::vector(&this->click_groups, p_click_groups);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_click_groups, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_click_groups) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_click_groups, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 1148: range 00000000116A9B8E-00000000116A9BDA
void __cdecl data::ConfigActivityBanner::~ConfigActivityBanner(data::ConfigActivityBanner *const this)
{
  std::vector<data::ContextConditionActionGroup>::~vector(&this->click_groups);
  std::vector<data::ContextConditionActionGroup>::~vector(&this->update_groups);
  std::unordered_map<std::string,std::shared_ptr<data::ContextAction>>::~unordered_map(&this->action_defines);
  std::unordered_map<std::string,std::shared_ptr<data::ContextCondition>>::~unordered_map(&this->condition_defines);
};
