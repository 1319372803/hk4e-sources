// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Ability/ConfigAbilityTask.h

// Line 20: range 0000000012705A6E-0000000012705B3D
void __cdecl data::BaseAbilityLogic::BaseAbilityLogic(data::BaseAbilityLogic *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  std::enable_shared_from_this<data::BaseAbilityLogic>::enable_shared_from_this(&this->std::enable_shared_from_this<data::BaseAbilityLogic>);
  v2 = (int (**)(...))(&`vtable for'data::BaseAbilityLogic + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseAbilityLogic = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->local_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->local_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->local_id, v1);
  }
  this->local_id = -1;
  v3 = ((_BYTE)this + 28) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 20: range 000000001270615A-00000000127062AF
void __cdecl data::BaseAbilityLogic::BaseAbilityLogic(
        data::BaseAbilityLogic *const this,
        const data::BaseAbilityLogic *a2)
{
  std::enable_shared_from_this<data::BaseAbilityLogic> *v2; // rsi
  int (**v3)(...); // rdx
  int32_t local_id; // ecx
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool is_json_loaded; // cl
  char v9; // dl
  __int64 v10; // rdx

  v2 = &a2->std::enable_shared_from_this<data::BaseAbilityLogic>;
  std::enable_shared_from_this<data::BaseAbilityLogic>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::BaseAbilityLogic>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::BaseAbilityLogic + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_BaseAbilityLogic = v3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->local_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->local_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->local_id);
  }
  local_id = a2->local_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->local_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store4(&this->local_id, v2);
  }
  this->local_id = local_id;
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

// Line 27: range 0000000012705B90-0000000012705BBA
void __cdecl data::BaseAbilityLogic::~BaseAbilityLogic(data::BaseAbilityLogic *const this)
{
  data::BaseAbilityLogic::~BaseAbilityLogic(this);
  operator delete(this, 0x20uLL);
};

// Line 27: range 0000000012705B3E-0000000012705B8F
void __cdecl data::BaseAbilityLogic::~BaseAbilityLogic(data::BaseAbilityLogic *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BaseAbilityLogic + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseAbilityLogic = v2;
  std::enable_shared_from_this<data::BaseAbilityLogic>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::BaseAbilityLogic>);
};

// Line 48: range 0000000012705BBC-0000000012705CD1
void __cdecl data::ConfigAbilityTask::ConfigAbilityTask(data::ConfigAbilityTask *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::BaseAbilityLogic::BaseAbilityLogic((data::BaseAbilityLogic *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAbilityTask + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseAbilityLogic = v2;
  v3 = ((_BYTE)this + 29) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_async >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_async >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_async, v3, v4);
  this->is_async = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->duration, v3);
  }
  this->duration = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->delay >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->delay >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->delay, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->delay = 0.0;
};

// Line 48: range 00000000127062B0-0000000012706488
void __cdecl data::ConfigAbilityTask::ConfigAbilityTask(
        data::ConfigAbilityTask *const this,
        const data::ConfigAbilityTask *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_async; // cl
  char v6; // dl
  __int64 v7; // rdx
  float duration; // xmm0_4
  float delay; // xmm0_4

  data::BaseAbilityLogic::BaseAbilityLogic((data::BaseAbilityLogic *const)this, (const data::BaseAbilityLogic *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAbilityTask + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BaseAbilityLogic = v2;
  v3 = ((_BYTE)a2 + 29) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->is_async >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->is_async >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->is_async, v3, v4);
  is_async = a2->is_async;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_async >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 29) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_async, v3, v7);
  this->is_async = is_async;
  if ( *(_BYTE *)(((unsigned __int64)&a2->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->duration);
  }
  duration = a2->duration;
  if ( *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->duration, v3);
  }
  this->duration = duration;
  if ( *(_BYTE *)(((unsigned __int64)&a2->delay >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->delay >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->delay);
  }
  delay = a2->delay;
  if ( *(_BYTE *)(((unsigned __int64)&this->delay >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->delay >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->delay, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->delay = delay;
};

// Line 57: range 0000000012706720-000000001270674A
void __cdecl data::ConfigAbilityTask::~ConfigAbilityTask(data::ConfigAbilityTask *const this)
{
  data::ConfigAbilityTask::~ConfigAbilityTask(this);
  operator delete(this, 0x28uLL);
};

// Line 57: range 00000000127066D2-000000001270671F
void __cdecl data::ConfigAbilityTask::~ConfigAbilityTask(data::ConfigAbilityTask *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAbilityTask + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseAbilityLogic = v2;
  data::BaseAbilityLogic::~BaseAbilityLogic((data::BaseAbilityLogic *const)this);
};

// Line 62: range 000000001215E2E2-000000001215E2F2
const char *__cdecl data::ConfigAbilityTask::getTypeName(const data::ConfigAbilityTask *const this)
{
  return "ConfigAbilityTask";
};

// Line 63: range 000000001215E2F4-000000001215E490
int32_t __cdecl data::ConfigAbilityTask::getHashNum(const data::ConfigAbilityTask *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAbilityTask::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAbilityTask",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 82: range 000000001270674C-00000000127067D7
void __cdecl data::ConfigDummyAbilityTask::ConfigDummyAbilityTask(data::ConfigDummyAbilityTask *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityTask::ConfigAbilityTask(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDummyAbilityTask + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseAbilityLogic = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->dummy_number >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dummy_number >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dummy_number, v1);
  }
  this->dummy_number = 0;
};

// Line 82: range 0000000012706BB2-0000000012706C7F
void __cdecl data::ConfigDummyAbilityTask::ConfigDummyAbilityTask(
        data::ConfigDummyAbilityTask *const this,
        const data::ConfigDummyAbilityTask *a2)
{
  int (**v2)(...); // rdx
  int32_t dummy_number; // ecx
  char v4; // al

  data::ConfigAbilityTask::ConfigAbilityTask(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDummyAbilityTask + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BaseAbilityLogic = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->dummy_number >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->dummy_number >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->dummy_number);
  }
  dummy_number = a2->dummy_number;
  v4 = *(_BYTE *)(((unsigned __int64)&this->dummy_number >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->dummy_number, a2);
  }
  this->dummy_number = dummy_number;
};

// Line 89: range 000000001274D524-000000001274D54E
void __cdecl data::ConfigDummyAbilityTask::~ConfigDummyAbilityTask(data::ConfigDummyAbilityTask *const this)
{
  data::ConfigDummyAbilityTask::~ConfigDummyAbilityTask(this);
  operator delete(this, 0x30uLL);
};

// Line 89: range 000000001274D4D6-000000001274D523
void __cdecl data::ConfigDummyAbilityTask::~ConfigDummyAbilityTask(data::ConfigDummyAbilityTask *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDummyAbilityTask + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseAbilityLogic = v2;
  data::ConfigAbilityTask::~ConfigAbilityTask(this);
};

// Line 94: range 000000001215E492-000000001215E4A2
const char *__cdecl data::ConfigDummyAbilityTask::getTypeName(const data::ConfigDummyAbilityTask *const this)
{
  return "ConfigDummyAbilityTask";
};

// Line 95: range 000000001215E4A4-000000001215E640
int32_t __cdecl data::ConfigDummyAbilityTask::getHashNum(const data::ConfigDummyAbilityTask *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigDummyAbilityTask::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigDummyAbilityTask",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 111: range 0000000012706EC8-0000000012706F09
void __cdecl data::ConfigDummyAbilityTaskFactory::ConfigDummyAbilityTaskFactory(
        data::ConfigDummyAbilityTaskFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDummyAbilityTaskFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDummyAbilityTaskFactory = v2;
};

// Line 173: range 000000001216158C-0000000012161731
void __cdecl data::ConfigMassiveElementTriggerAction::ConfigMassiveElementTriggerAction(
        data::ConfigMassiveElementTriggerAction *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->trigger_type = TriggerAntiFire;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->stack_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stack_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stack_type, v2);
  }
  this->stack_type = Refresh;
  if ( *(_BYTE *)(((unsigned __int64)&this->reduce_durability >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reduce_durability >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reduce_durability, v2);
  }
  this->reduce_durability = 0.0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->duration, v3);
  }
  this->duration = 0.0;
  std::string::basic_string(&this->attack_id);
  std::string::basic_string(&this->action_id);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_flush);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_pre_update);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_detach);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v3, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 173: range 0000000012637692-0000000012637A01
void __cdecl data::ConfigMassiveElementTriggerAction::ConfigMassiveElementTriggerAction(
        data::ConfigMassiveElementTriggerAction *const this,
        const data::ConfigMassiveElementTriggerAction *a2)
{
  data::MassiveElementTriggerType trigger_type; // ecx
  char v3; // al
  __int64 v4; // rsi
  data::ModifierStacking stack_type; // ecx
  char v6; // dl
  float reduce_durability; // xmm0_4
  float duration; // xmm0_4
  data::ConfigAbilityActionArray *p_on_detach; // rsi
  bool is_json_loaded; // cl
  char v11; // al
  const data::ConfigMassiveElementTriggerAction *v12; // [rsp+0h] [rbp-20h]

  v12 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  trigger_type = a2->trigger_type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->trigger_type = trigger_type;
  v4 = (((_BYTE)v12 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v12->stack_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v12 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v12->stack_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v12->stack_type);
  }
  stack_type = v12->stack_type;
  v6 = *(_BYTE *)(((unsigned __int64)&this->stack_type >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
    __asan_report_store4(&this->stack_type, v4);
  this->stack_type = stack_type;
  if ( *(_BYTE *)(((unsigned __int64)&v12->reduce_durability >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v12->reduce_durability >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v12->reduce_durability);
  }
  reduce_durability = v12->reduce_durability;
  if ( *(_BYTE *)(((unsigned __int64)&this->reduce_durability >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reduce_durability >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reduce_durability, v4);
  }
  this->reduce_durability = reduce_durability;
  if ( *(_BYTE *)(((unsigned __int64)&v12->duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v12 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v12->duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v12->duration);
  }
  duration = v12->duration;
  if ( *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->duration, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->duration = duration;
  std::string::basic_string(&this->attack_id, &v12->attack_id);
  std::string::basic_string(&this->action_id, &v12->action_id);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_flush, &v12->on_flush);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_pre_update, &v12->on_pre_update);
  p_on_detach = &v12->on_detach;
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_detach, &v12->on_detach);
  if ( *(char *)(((unsigned __int64)&v12->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v12->is_json_loaded, p_on_detach, &v12->is_json_loaded);
  is_json_loaded = v12->is_json_loaded;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v11 < 0 )
  {
    LOBYTE(p_on_detach) = v11 != 0;
    __asan_report_store1(&this->is_json_loaded, p_on_detach, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 173: range 0000000012347D04-000000001234800D
void __cdecl data::ConfigMassiveElementTriggerAction::ConfigMassiveElementTriggerAction(
        data::ConfigMassiveElementTriggerAction *const this,
        data::ConfigMassiveElementTriggerAction *a2)
{
  data::MassiveElementTriggerType trigger_type; // ecx
  char v3; // al
  __int64 v4; // rsi
  data::ModifierStacking stack_type; // ecx
  char v6; // dl
  float reduce_durability; // xmm0_4
  float duration; // xmm0_4
  data::ConfigAbilityActionArray *p_on_detach; // rsi
  bool is_json_loaded; // cl
  char v11; // al
  data::ConfigMassiveElementTriggerAction *v12; // [rsp+0h] [rbp-10h]

  v12 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  trigger_type = a2->trigger_type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->trigger_type = trigger_type;
  v4 = (((_BYTE)v12 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v12->stack_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v12 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v12->stack_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v12->stack_type);
  }
  stack_type = v12->stack_type;
  v6 = *(_BYTE *)(((unsigned __int64)&this->stack_type >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
    __asan_report_store4(&this->stack_type, v4);
  this->stack_type = stack_type;
  if ( *(_BYTE *)(((unsigned __int64)&v12->reduce_durability >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v12->reduce_durability >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v12->reduce_durability);
  }
  reduce_durability = v12->reduce_durability;
  if ( *(_BYTE *)(((unsigned __int64)&this->reduce_durability >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reduce_durability >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reduce_durability, v4);
  }
  this->reduce_durability = reduce_durability;
  if ( *(_BYTE *)(((unsigned __int64)&v12->duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v12 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v12->duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v12->duration);
  }
  duration = v12->duration;
  if ( *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->duration, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->duration = duration;
  std::string::basic_string(&this->attack_id, &v12->attack_id);
  std::string::basic_string(&this->action_id, &v12->action_id);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_flush, &v12->on_flush);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_pre_update, &v12->on_pre_update);
  p_on_detach = &v12->on_detach;
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_detach, &v12->on_detach);
  if ( *(char *)(((unsigned __int64)&v12->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v12->is_json_loaded, p_on_detach, &v12->is_json_loaded);
  is_json_loaded = v12->is_json_loaded;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v11 < 0 )
  {
    LOBYTE(p_on_detach) = v11 != 0;
    __asan_report_store1(&this->is_json_loaded, p_on_detach, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 173: range 0000000012161732-0000000012161790
void __cdecl data::ConfigMassiveElementTriggerAction::~ConfigMassiveElementTriggerAction(
        data::ConfigMassiveElementTriggerAction *const this)
{
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::~vector(&this->on_detach);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::~vector(&this->on_pre_update);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::~vector(&this->on_flush);
  std::string::~string(&this->action_id);
  std::string::~string(&this->attack_id);
};

// Line 209: range 00000000127073E2-000000001270744F
void __cdecl data::ConfigTriggerMassiveElementTask::ConfigTriggerMassiveElementTask(
        data::ConfigTriggerMassiveElementTask *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigAbilityTask::ConfigAbilityTask(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigTriggerMassiveElementTask + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseAbilityLogic = v2;
  std::vector<data::ConfigMassiveEntityElement>::vector(&this->entity_elements);
  std::vector<data::ConfigMassiveElementTriggerAction>::vector(&this->element_trigger_actions);
};

// Line 209: range 000000001270780A-00000000127078D0
void __cdecl data::ConfigTriggerMassiveElementTask::ConfigTriggerMassiveElementTask(
        data::ConfigTriggerMassiveElementTask *const this,
        const data::ConfigTriggerMassiveElementTask *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAbilityTask::ConfigAbilityTask(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigTriggerMassiveElementTask + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BaseAbilityLogic = v2;
  std::vector<data::ConfigMassiveEntityElement>::vector(&this->entity_elements, &a2->entity_elements);
  std::vector<data::ConfigMassiveElementTriggerAction>::vector(
    &this->element_trigger_actions,
    &a2->element_trigger_actions);
};

// Line 217: range 000000001274D43C-000000001274D4A9
void __cdecl data::ConfigTriggerMassiveElementTask::~ConfigTriggerMassiveElementTask(
        data::ConfigTriggerMassiveElementTask *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigTriggerMassiveElementTask + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseAbilityLogic = v2;
  std::vector<data::ConfigMassiveElementTriggerAction>::~vector(&this->element_trigger_actions);
  std::vector<data::ConfigMassiveEntityElement>::~vector(&this->entity_elements);
  data::ConfigAbilityTask::~ConfigAbilityTask(this);
};

// Line 217: range 000000001274D4AA-000000001274D4D4
void __cdecl data::ConfigTriggerMassiveElementTask::~ConfigTriggerMassiveElementTask(
        data::ConfigTriggerMassiveElementTask *const this)
{
  data::ConfigTriggerMassiveElementTask::~ConfigTriggerMassiveElementTask(this);
  operator delete(this, 0x58uLL);
};

// Line 222: range 000000001215E642-000000001215E652
const char *__cdecl data::ConfigTriggerMassiveElementTask::getTypeName(
        const data::ConfigTriggerMassiveElementTask *const this)
{
  return "ConfigTriggerMassiveElementTask";
};

// Line 223: range 000000001215E654-000000001215E7F0
int32_t __cdecl data::ConfigTriggerMassiveElementTask::getHashNum(
        const data::ConfigTriggerMassiveElementTask *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigTriggerMassiveElementTask::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigTriggerMassiveElementTask",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 239: range 0000000012707BBA-0000000012707BFB
void __cdecl data::ConfigTriggerMassiveElementTaskFactory::ConfigTriggerMassiveElementTaskFactory(
        data::ConfigTriggerMassiveElementTaskFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigTriggerMassiveElementTaskFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigTriggerMassiveElementTaskFactory = v2;
};

// Line 296: range 000000001216251C-00000000121626C4
void __cdecl data::ConfigTile::ConfigTile(data::ConfigTile *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi

  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->camp_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->camp_id, v1);
  }
  this->camp_id = 0;
  v2 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->special_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->special_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->special_type, v2);
  }
  this->special_type = None_72;
  if ( *(_BYTE *)(((unsigned __int64)&this->fixed_y >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fixed_y >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fixed_y, v2);
  }
  this->fixed_y = 0.0;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->pool_size >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pool_size >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->pool_size, v3);
  }
  this->pool_size = 0;
  std::vector<data::ConfigTileElement>::vector(&this->initial_elements);
  data::ConfigMassiveElementTriggerAction::ConfigMassiveElementTriggerAction(&this->basic_action);
  std::string::basic_string(&this->field_map_material);
  std::string::basic_string(&this->effect_material);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v3, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 296: range 000000001234A0FC-000000001234A40E
void __cdecl data::ConfigTile::ConfigTile(data::ConfigTile *const this, data::ConfigTile *a2)
{
  uint32_t camp_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  data::TileSpecialType special_type; // ecx
  char v6; // dl
  float fixed_y; // xmm0_4
  __int64 v8; // rsi
  int32_t pool_size; // ecx
  char v10; // dl
  std::string *p_effect_material; // rsi
  bool is_json_loaded; // cl
  char v13; // al
  data::ConfigTile *v14; // [rsp+0h] [rbp-10h]

  v14 = a2;
  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&v14->camp_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->camp_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->camp_id);
  }
  camp_id = a2->camp_id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->camp_id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->camp_id, a2);
  }
  this->camp_id = camp_id;
  v4 = (((_BYTE)v14 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v14->special_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->special_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->special_type);
  }
  special_type = v14->special_type;
  v6 = *(_BYTE *)(((unsigned __int64)&this->special_type >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  if ( v6 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v6 )
    __asan_report_store4(&this->special_type, v4);
  this->special_type = special_type;
  if ( *(_BYTE *)(((unsigned __int64)&v14->fixed_y >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->fixed_y >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v14->fixed_y);
  }
  fixed_y = v14->fixed_y;
  if ( *(_BYTE *)(((unsigned __int64)&this->fixed_y >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fixed_y >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fixed_y, v4);
  }
  this->fixed_y = fixed_y;
  v8 = (((_BYTE)v14 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v14->pool_size >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->pool_size >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->pool_size);
  }
  pool_size = v14->pool_size;
  v10 = *(_BYTE *)(((unsigned __int64)&this->pool_size >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->pool_size, v8);
  }
  this->pool_size = pool_size;
  std::vector<data::ConfigTileElement>::vector(&this->initial_elements, &v14->initial_elements);
  data::ConfigMassiveElementTriggerAction::ConfigMassiveElementTriggerAction(&this->basic_action, &v14->basic_action);
  std::string::basic_string(&this->field_map_material, &v14->field_map_material);
  p_effect_material = &v14->effect_material;
  std::string::basic_string(&this->effect_material, &v14->effect_material);
  if ( *(char *)(((unsigned __int64)&v14->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v14->is_json_loaded, p_effect_material, &v14->is_json_loaded);
  is_json_loaded = v14->is_json_loaded;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v13 < 0 )
  {
    LOBYTE(p_effect_material) = v13 != 0;
    __asan_report_store1(&this->is_json_loaded, p_effect_material, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 296: range 00000000121626C6-0000000012162724
void __cdecl data::ConfigTile::~ConfigTile(data::ConfigTile *const this)
{
  std::string::~string(&this->effect_material);
  std::string::~string(&this->field_map_material);
  data::ConfigMassiveElementTriggerAction::~ConfigMassiveElementTriggerAction(&this->basic_action);
  std::vector<data::ConfigTileElement>::~vector(&this->initial_elements);
  std::string::~string(this);
};
