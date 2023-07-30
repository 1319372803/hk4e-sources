// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigWidgetAction.h

// Line 20: range 0000000012729EDC-0000000012729F68
void __cdecl data::ConfigWidgetAction::ConfigWidgetAction(data::ConfigWidgetAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::ConfigWidgetAction>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigWidgetAction>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetAction = v2;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 20: range 000000001272DD54-000000001272DE2A
void __cdecl data::ConfigWidgetAction::ConfigWidgetAction(
        data::ConfigWidgetAction *const this,
        const data::ConfigWidgetAction *a2)
{
  std::enable_shared_from_this<data::ConfigWidgetAction> *v2; // rsi
  int (**v3)(...); // rdx
  bool is_json_loaded; // cl
  char v5; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigWidgetAction>;
  std::enable_shared_from_this<data::ConfigWidgetAction>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigWidgetAction>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigWidgetAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigWidgetAction = v3;
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

// Line 27: range 0000000012729F6A-0000000012729FBB
void __cdecl data::ConfigWidgetAction::~ConfigWidgetAction(data::ConfigWidgetAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetAction = v2;
  std::enable_shared_from_this<data::ConfigWidgetAction>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigWidgetAction>);
};

// Line 27: range 0000000012729FBC-0000000012729FE6
void __cdecl data::ConfigWidgetAction::~ConfigWidgetAction(data::ConfigWidgetAction *const this)
{
  data::ConfigWidgetAction::~ConfigWidgetAction(this);
  operator delete(this, 0x20uLL);
};

// Line 32: range 00000000121809D4-00000000121809E4
const char *__cdecl data::ConfigWidgetAction::getTypeName(const data::ConfigWidgetAction *const this)
{
  return "ConfigWidgetAction";
};

// Line 33: range 00000000121809E6-0000000012180B82
int32_t __cdecl data::ConfigWidgetAction::getHashNum(const data::ConfigWidgetAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 52: range 0000000012729FE8-000000001272A045
void __cdecl data::ConfigWidgetAction_PrintDebug::ConfigWidgetAction_PrintDebug(
        data::ConfigWidgetAction_PrintDebug *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigWidgetAction::ConfigWidgetAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAction_PrintDebug + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetAction = v2;
  std::string::basic_string(&this->message);
};

// Line 52: range 000000001272E074-000000001272E10A
void __cdecl data::ConfigWidgetAction_PrintDebug::ConfigWidgetAction_PrintDebug(
        data::ConfigWidgetAction_PrintDebug *const this,
        const data::ConfigWidgetAction_PrintDebug *a2)
{
  int (**v2)(...); // rdx

  data::ConfigWidgetAction::ConfigWidgetAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAction_PrintDebug + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigWidgetAction = v2;
  std::string::basic_string(&this->message, &a2->message);
};

// Line 59: range 000000001274C4C2-000000001274C51F
void __cdecl data::ConfigWidgetAction_PrintDebug::~ConfigWidgetAction_PrintDebug(
        data::ConfigWidgetAction_PrintDebug *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAction_PrintDebug + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetAction = v2;
  std::string::~string(&this->message);
  data::ConfigWidgetAction::~ConfigWidgetAction(this);
};

// Line 59: range 000000001274C520-000000001274C54A
void __cdecl data::ConfigWidgetAction_PrintDebug::~ConfigWidgetAction_PrintDebug(
        data::ConfigWidgetAction_PrintDebug *const this)
{
  data::ConfigWidgetAction_PrintDebug::~ConfigWidgetAction_PrintDebug(this);
  operator delete(this, 0x40uLL);
};

// Line 64: range 0000000012180B84-0000000012180B94
const char *__cdecl data::ConfigWidgetAction_PrintDebug::getTypeName(
        const data::ConfigWidgetAction_PrintDebug *const this)
{
  return "ConfigWidgetAction_PrintDebug";
};

// Line 65: range 0000000012180B96-0000000012180D32
int32_t __cdecl data::ConfigWidgetAction_PrintDebug::getHashNum(const data::ConfigWidgetAction_PrintDebug *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetAction_PrintDebug::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetAction_PrintDebug",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 81: range 000000001272E3F4-000000001272E435
void __cdecl data::ConfigWidgetAction_PrintDebugFactory::ConfigWidgetAction_PrintDebugFactory(
        data::ConfigWidgetAction_PrintDebugFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAction_PrintDebugFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetAction_PrintDebugFactory = v2;
};

// Line 83: range 0000000012180D70-0000000012180DB3
data::ConfigWidgetAction_PrintDebugPtr __cdecl data::ConfigWidgetAction_PrintDebugFactory::create(
        data::ConfigWidgetAction_PrintDebugFactory *const this)
{
  data::ConfigWidgetAction_PrintDebugPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigWidgetAction_PrintDebug>();
  result._M_ptr = (std::__shared_ptr<data::ConfigWidgetAction_PrintDebug,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 92: range 000000001272A44A-000000001272A4DD
void __cdecl data::ConfigWidgetAction_CreateLocalGadget::ConfigWidgetAction_CreateLocalGadget(
        data::ConfigWidgetAction_CreateLocalGadget *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigWidgetAction::ConfigWidgetAction((data::ConfigWidgetAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAction_CreateLocalGadget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gadget_id, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->gadget_id = 0;
};

// Line 92: range 000000001272E73E-000000001272E81B
void __cdecl data::ConfigWidgetAction_CreateLocalGadget::ConfigWidgetAction_CreateLocalGadget(
        data::ConfigWidgetAction_CreateLocalGadget *const this,
        const data::ConfigWidgetAction_CreateLocalGadget *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t gadget_id; // ecx
  char v5; // dl

  data::ConfigWidgetAction::ConfigWidgetAction(
    (data::ConfigWidgetAction *const)this,
    (const data::ConfigWidgetAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAction_CreateLocalGadget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigWidgetAction = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->gadget_id);
  }
  gadget_id = a2->gadget_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->gadget_id, v3);
  }
  this->gadget_id = gadget_id;
};

// Line 99: range 000000001274C496-000000001274C4C0
void __cdecl data::ConfigWidgetAction_CreateLocalGadget::~ConfigWidgetAction_CreateLocalGadget(
        data::ConfigWidgetAction_CreateLocalGadget *const this)
{
  data::ConfigWidgetAction_CreateLocalGadget::~ConfigWidgetAction_CreateLocalGadget(this);
  operator delete(this, 0x20uLL);
};

// Line 99: range 000000001274C448-000000001274C495
void __cdecl data::ConfigWidgetAction_CreateLocalGadget::~ConfigWidgetAction_CreateLocalGadget(
        data::ConfigWidgetAction_CreateLocalGadget *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAction_CreateLocalGadget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetAction = v2;
  data::ConfigWidgetAction::~ConfigWidgetAction((data::ConfigWidgetAction *const)this);
};

// Line 104: range 0000000012180DB4-0000000012180DC4
const char *__cdecl data::ConfigWidgetAction_CreateLocalGadget::getTypeName(
        const data::ConfigWidgetAction_CreateLocalGadget *const this)
{
  return "ConfigWidgetAction_CreateLocalGadget";
};

// Line 105: range 0000000012180DC6-0000000012180F62
int32_t __cdecl data::ConfigWidgetAction_CreateLocalGadget::getHashNum(
        const data::ConfigWidgetAction_CreateLocalGadget *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetAction_CreateLocalGadget::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetAction_CreateLocalGadget",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 121: range 000000001272EA64-000000001272EAA5
void __cdecl data::ConfigWidgetAction_CreateLocalGadgetFactory::ConfigWidgetAction_CreateLocalGadgetFactory(
        data::ConfigWidgetAction_CreateLocalGadgetFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAction_CreateLocalGadgetFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetAction_CreateLocalGadgetFactory = v2;
};

// Line 123: range 0000000012180FA0-0000000012180FE3
data::ConfigWidgetAction_CreateLocalGadgetPtr __cdecl data::ConfigWidgetAction_CreateLocalGadgetFactory::create(
        data::ConfigWidgetAction_CreateLocalGadgetFactory *const this)
{
  data::ConfigWidgetAction_CreateLocalGadgetPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigWidgetAction_CreateLocalGadget>();
  result._M_ptr = (std::__shared_ptr<data::ConfigWidgetAction_CreateLocalGadget,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 132: range 000000001272A972-000000001272AA05
void __cdecl data::ConfigWidgetAction_CreateSeverGadget::ConfigWidgetAction_CreateSeverGadget(
        data::ConfigWidgetAction_CreateSeverGadget *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigWidgetAction::ConfigWidgetAction((data::ConfigWidgetAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAction_CreateSeverGadget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gadget_id, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->gadget_id = 0;
};

// Line 132: range 000000001272EDAE-000000001272EE8B
void __cdecl data::ConfigWidgetAction_CreateSeverGadget::ConfigWidgetAction_CreateSeverGadget(
        data::ConfigWidgetAction_CreateSeverGadget *const this,
        const data::ConfigWidgetAction_CreateSeverGadget *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t gadget_id; // ecx
  char v5; // dl

  data::ConfigWidgetAction::ConfigWidgetAction(
    (data::ConfigWidgetAction *const)this,
    (const data::ConfigWidgetAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAction_CreateSeverGadget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigWidgetAction = v2;
  v3 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->gadget_id);
  }
  gadget_id = a2->gadget_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->gadget_id, v3);
  }
  this->gadget_id = gadget_id;
};

// Line 139: range 000000001274C41C-000000001274C446
void __cdecl data::ConfigWidgetAction_CreateSeverGadget::~ConfigWidgetAction_CreateSeverGadget(
        data::ConfigWidgetAction_CreateSeverGadget *const this)
{
  data::ConfigWidgetAction_CreateSeverGadget::~ConfigWidgetAction_CreateSeverGadget(this);
  operator delete(this, 0x20uLL);
};

// Line 139: range 000000001274C3CE-000000001274C41B
void __cdecl data::ConfigWidgetAction_CreateSeverGadget::~ConfigWidgetAction_CreateSeverGadget(
        data::ConfigWidgetAction_CreateSeverGadget *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAction_CreateSeverGadget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetAction = v2;
  data::ConfigWidgetAction::~ConfigWidgetAction((data::ConfigWidgetAction *const)this);
};

// Line 144: range 0000000012180FE4-0000000012180FF4
const char *__cdecl data::ConfigWidgetAction_CreateSeverGadget::getTypeName(
        const data::ConfigWidgetAction_CreateSeverGadget *const this)
{
  return "ConfigWidgetAction_CreateSeverGadget";
};

// Line 145: range 0000000012180FF6-0000000012181192
int32_t __cdecl data::ConfigWidgetAction_CreateSeverGadget::getHashNum(
        const data::ConfigWidgetAction_CreateSeverGadget *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetAction_CreateSeverGadget::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetAction_CreateSeverGadget",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 161: range 000000001272F0D4-000000001272F115
void __cdecl data::ConfigWidgetAction_CreateSeverGadgetFactory::ConfigWidgetAction_CreateSeverGadgetFactory(
        data::ConfigWidgetAction_CreateSeverGadgetFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAction_CreateSeverGadgetFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetAction_CreateSeverGadgetFactory = v2;
};

// Line 163: range 00000000121811D0-0000000012181213
data::ConfigWidgetAction_CreateSeverGadgetPtr __cdecl data::ConfigWidgetAction_CreateSeverGadgetFactory::create(
        data::ConfigWidgetAction_CreateSeverGadgetFactory *const this)
{
  data::ConfigWidgetAction_CreateSeverGadgetPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigWidgetAction_CreateSeverGadget>();
  result._M_ptr = (std::__shared_ptr<data::ConfigWidgetAction_CreateSeverGadget,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 172: range 000000001272AE9A-000000001272AEF7
void __cdecl data::ConfigWidgetAction_AddAbilityGroup::ConfigWidgetAction_AddAbilityGroup(
        data::ConfigWidgetAction_AddAbilityGroup *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigWidgetAction::ConfigWidgetAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAction_AddAbilityGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetAction = v2;
  std::string::basic_string(&this->ability_group_name);
};

// Line 172: range 000000001272F41E-000000001272F4B4
void __cdecl data::ConfigWidgetAction_AddAbilityGroup::ConfigWidgetAction_AddAbilityGroup(
        data::ConfigWidgetAction_AddAbilityGroup *const this,
        const data::ConfigWidgetAction_AddAbilityGroup *a2)
{
  int (**v2)(...); // rdx

  data::ConfigWidgetAction::ConfigWidgetAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAction_AddAbilityGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigWidgetAction = v2;
  std::string::basic_string(&this->ability_group_name, &a2->ability_group_name);
};

// Line 179: range 000000001274C3A2-000000001274C3CC
void __cdecl data::ConfigWidgetAction_AddAbilityGroup::~ConfigWidgetAction_AddAbilityGroup(
        data::ConfigWidgetAction_AddAbilityGroup *const this)
{
  data::ConfigWidgetAction_AddAbilityGroup::~ConfigWidgetAction_AddAbilityGroup(this);
  operator delete(this, 0x40uLL);
};

// Line 179: range 000000001274C344-000000001274C3A1
void __cdecl data::ConfigWidgetAction_AddAbilityGroup::~ConfigWidgetAction_AddAbilityGroup(
        data::ConfigWidgetAction_AddAbilityGroup *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAction_AddAbilityGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetAction = v2;
  std::string::~string(&this->ability_group_name);
  data::ConfigWidgetAction::~ConfigWidgetAction(this);
};

// Line 184: range 0000000012181214-0000000012181224
const char *__cdecl data::ConfigWidgetAction_AddAbilityGroup::getTypeName(
        const data::ConfigWidgetAction_AddAbilityGroup *const this)
{
  return "ConfigWidgetAction_AddAbilityGroup";
};

// Line 185: range 0000000012181226-00000000121813C2
int32_t __cdecl data::ConfigWidgetAction_AddAbilityGroup::getHashNum(
        const data::ConfigWidgetAction_AddAbilityGroup *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetAction_AddAbilityGroup::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetAction_AddAbilityGroup",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 201: range 000000001272F79E-000000001272F7DF
void __cdecl data::ConfigWidgetAction_AddAbilityGroupFactory::ConfigWidgetAction_AddAbilityGroupFactory(
        data::ConfigWidgetAction_AddAbilityGroupFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAction_AddAbilityGroupFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetAction_AddAbilityGroupFactory = v2;
};

// Line 203: range 0000000012181400-0000000012181443
data::ConfigWidgetAction_AddAbilityGroupPtr __cdecl data::ConfigWidgetAction_AddAbilityGroupFactory::create(
        data::ConfigWidgetAction_AddAbilityGroupFactory *const this)
{
  data::ConfigWidgetAction_AddAbilityGroupPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigWidgetAction_AddAbilityGroup>();
  result._M_ptr = (std::__shared_ptr<data::ConfigWidgetAction_AddAbilityGroup,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 212: range 000000001272B2FC-000000001272B399
void __cdecl data::ConfigWidgetAction_AddDynamicValue::ConfigWidgetAction_AddDynamicValue(
        data::ConfigWidgetAction_AddDynamicValue *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigWidgetAction::ConfigWidgetAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAction_AddDynamicValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetAction = v2;
  std::string::basic_string(&this->key);
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, v1);
  }
  this->value = 0.0;
};

// Line 212: range 000000001272FAE8-000000001272FBF6
void __cdecl data::ConfigWidgetAction_AddDynamicValue::ConfigWidgetAction_AddDynamicValue(
        data::ConfigWidgetAction_AddDynamicValue *const this,
        const data::ConfigWidgetAction_AddDynamicValue *a2)
{
  int (**v2)(...); // rdx
  float value; // xmm0_4

  data::ConfigWidgetAction::ConfigWidgetAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAction_AddDynamicValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigWidgetAction = v2;
  std::string::basic_string(&this->key, &a2->key);
  if ( *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, &a2->key);
  }
  this->value = value;
};

// Line 220: range 000000001274C2BA-000000001274C317
void __cdecl data::ConfigWidgetAction_AddDynamicValue::~ConfigWidgetAction_AddDynamicValue(
        data::ConfigWidgetAction_AddDynamicValue *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAction_AddDynamicValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetAction = v2;
  std::string::~string(&this->key);
  data::ConfigWidgetAction::~ConfigWidgetAction(this);
};

// Line 220: range 000000001274C318-000000001274C342
void __cdecl data::ConfigWidgetAction_AddDynamicValue::~ConfigWidgetAction_AddDynamicValue(
        data::ConfigWidgetAction_AddDynamicValue *const this)
{
  data::ConfigWidgetAction_AddDynamicValue::~ConfigWidgetAction_AddDynamicValue(this);
  operator delete(this, 0x48uLL);
};

// Line 225: range 0000000012181444-0000000012181454
const char *__cdecl data::ConfigWidgetAction_AddDynamicValue::getTypeName(
        const data::ConfigWidgetAction_AddDynamicValue *const this)
{
  return "ConfigWidgetAction_AddDynamicValue";
};

// Line 226: range 0000000012181456-00000000121815F2
int32_t __cdecl data::ConfigWidgetAction_AddDynamicValue::getHashNum(
        const data::ConfigWidgetAction_AddDynamicValue *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetAction_AddDynamicValue::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetAction_AddDynamicValue",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 242: range 000000001272FEE0-000000001272FF21
void __cdecl data::ConfigWidgetAction_AddDynamicValueFactory::ConfigWidgetAction_AddDynamicValueFactory(
        data::ConfigWidgetAction_AddDynamicValueFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAction_AddDynamicValueFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetAction_AddDynamicValueFactory = v2;
};

// Line 244: range 0000000012181630-0000000012181673
data::ConfigWidgetAction_AddDynamicValuePtr __cdecl data::ConfigWidgetAction_AddDynamicValueFactory::create(
        data::ConfigWidgetAction_AddDynamicValueFactory *const this)
{
  data::ConfigWidgetAction_AddDynamicValuePtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigWidgetAction_AddDynamicValue>();
  result._M_ptr = (std::__shared_ptr<data::ConfigWidgetAction_AddDynamicValue,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 253: range 000000001272B7B4-000000001272B811
void __cdecl data::ConfigWidgetAction_RemoveDynamicValue::ConfigWidgetAction_RemoveDynamicValue(
        data::ConfigWidgetAction_RemoveDynamicValue *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigWidgetAction::ConfigWidgetAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAction_RemoveDynamicValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetAction = v2;
  std::string::basic_string(&this->key);
};

// Line 253: range 000000001273022A-00000000127302C0
void __cdecl data::ConfigWidgetAction_RemoveDynamicValue::ConfigWidgetAction_RemoveDynamicValue(
        data::ConfigWidgetAction_RemoveDynamicValue *const this,
        const data::ConfigWidgetAction_RemoveDynamicValue *a2)
{
  int (**v2)(...); // rdx

  data::ConfigWidgetAction::ConfigWidgetAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAction_RemoveDynamicValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigWidgetAction = v2;
  std::string::basic_string(&this->key, &a2->key);
};

// Line 260: range 000000001274C28E-000000001274C2B8
void __cdecl data::ConfigWidgetAction_RemoveDynamicValue::~ConfigWidgetAction_RemoveDynamicValue(
        data::ConfigWidgetAction_RemoveDynamicValue *const this)
{
  data::ConfigWidgetAction_RemoveDynamicValue::~ConfigWidgetAction_RemoveDynamicValue(this);
  operator delete(this, 0x40uLL);
};

// Line 260: range 000000001274C230-000000001274C28D
void __cdecl data::ConfigWidgetAction_RemoveDynamicValue::~ConfigWidgetAction_RemoveDynamicValue(
        data::ConfigWidgetAction_RemoveDynamicValue *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAction_RemoveDynamicValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetAction = v2;
  std::string::~string(&this->key);
  data::ConfigWidgetAction::~ConfigWidgetAction(this);
};

// Line 265: range 0000000012181674-0000000012181684
const char *__cdecl data::ConfigWidgetAction_RemoveDynamicValue::getTypeName(
        const data::ConfigWidgetAction_RemoveDynamicValue *const this)
{
  return "ConfigWidgetAction_RemoveDynamicValue";
};

// Line 266: range 0000000012181686-0000000012181822
int32_t __cdecl data::ConfigWidgetAction_RemoveDynamicValue::getHashNum(
        const data::ConfigWidgetAction_RemoveDynamicValue *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetAction_RemoveDynamicValue::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetAction_RemoveDynamicValue",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 282: range 00000000127305AA-00000000127305EB
void __cdecl data::ConfigWidgetAction_RemoveDynamicValueFactory::ConfigWidgetAction_RemoveDynamicValueFactory(
        data::ConfigWidgetAction_RemoveDynamicValueFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAction_RemoveDynamicValueFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetAction_RemoveDynamicValueFactory = v2;
};

// Line 284: range 0000000012181860-00000000121818A3
data::ConfigWidgetAction_RemoveDynamicValuePtr __cdecl data::ConfigWidgetAction_RemoveDynamicValueFactory::create(
        data::ConfigWidgetAction_RemoveDynamicValueFactory *const this)
{
  data::ConfigWidgetAction_RemoveDynamicValuePtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigWidgetAction_RemoveDynamicValue>();
  result._M_ptr = (std::__shared_ptr<data::ConfigWidgetAction_RemoveDynamicValue,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 293: range 000000001272BC16-000000001272BCC3
void __cdecl data::ConfigWidgetAction_TakePhoto::ConfigWidgetAction_TakePhoto(
        data::ConfigWidgetAction_TakePhoto *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigWidgetAction::ConfigWidgetAction((data::ConfigWidgetAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAction_TakePhoto + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetAction = v2;
  v3 = ((_BYTE)this + 25) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->has_camera_effect >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->has_camera_effect >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->has_camera_effect, v3, v4);
  this->has_camera_effect = 0;
  std::string::basic_string(&this->camera_screen_effect);
  std::string::basic_string(&this->main_camera_effect);
};

// Line 293: range 00000000127308F4-0000000012730A3A
void __cdecl data::ConfigWidgetAction_TakePhoto::ConfigWidgetAction_TakePhoto(
        data::ConfigWidgetAction_TakePhoto *const this,
        const data::ConfigWidgetAction_TakePhoto *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool has_camera_effect; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigWidgetAction::ConfigWidgetAction(
    (data::ConfigWidgetAction *const)this,
    (const data::ConfigWidgetAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAction_TakePhoto + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigWidgetAction = v2;
  v3 = ((_BYTE)a2 + 25) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->has_camera_effect >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->has_camera_effect >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->has_camera_effect, v3, v4);
  has_camera_effect = a2->has_camera_effect;
  v6 = *(_BYTE *)(((unsigned __int64)&this->has_camera_effect >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 25) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->has_camera_effect, v3, v7);
  this->has_camera_effect = has_camera_effect;
  std::string::basic_string(&this->camera_screen_effect, &a2->camera_screen_effect);
  std::string::basic_string(&this->main_camera_effect, &a2->main_camera_effect);
};

// Line 302: range 000000001274C204-000000001274C22E
void __cdecl data::ConfigWidgetAction_TakePhoto::~ConfigWidgetAction_TakePhoto(
        data::ConfigWidgetAction_TakePhoto *const this)
{
  data::ConfigWidgetAction_TakePhoto::~ConfigWidgetAction_TakePhoto(this);
  operator delete(this, 0x60uLL);
};

// Line 302: range 000000001274C196-000000001274C203
void __cdecl data::ConfigWidgetAction_TakePhoto::~ConfigWidgetAction_TakePhoto(
        data::ConfigWidgetAction_TakePhoto *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAction_TakePhoto + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetAction = v2;
  std::string::~string(&this->main_camera_effect);
  std::string::~string(&this->camera_screen_effect);
  data::ConfigWidgetAction::~ConfigWidgetAction((data::ConfigWidgetAction *const)this);
};

// Line 307: range 00000000121818A4-00000000121818B4
const char *__cdecl data::ConfigWidgetAction_TakePhoto::getTypeName(
        const data::ConfigWidgetAction_TakePhoto *const this)
{
  return "ConfigWidgetAction_TakePhoto";
};

// Line 308: range 00000000121818B6-0000000012181A52
int32_t __cdecl data::ConfigWidgetAction_TakePhoto::getHashNum(const data::ConfigWidgetAction_TakePhoto *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetAction_TakePhoto::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetAction_TakePhoto",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 324: range 0000000012730D24-0000000012730D65
void __cdecl data::ConfigWidgetAction_TakePhotoFactory::ConfigWidgetAction_TakePhotoFactory(
        data::ConfigWidgetAction_TakePhotoFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetAction_TakePhotoFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetAction_TakePhotoFactory = v2;
};

// Line 326: range 0000000012181A90-0000000012181AD3
data::ConfigWidgetAction_TakePhotoPtr __cdecl data::ConfigWidgetAction_TakePhotoFactory::create(
        data::ConfigWidgetAction_TakePhotoFactory *const this)
{
  data::ConfigWidgetAction_TakePhotoPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigWidgetAction_TakePhoto>();
  result._M_ptr = (std::__shared_ptr<data::ConfigWidgetAction_TakePhoto,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 342: range 000000001272C078-000000001272C104
void __cdecl data::ConfigWidgetPredict::ConfigWidgetPredict(data::ConfigWidgetPredict *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::ConfigWidgetPredict>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigWidgetPredict>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetPredict + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetPredict = v2;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 342: range 000000001273157E-0000000012731654
void __cdecl data::ConfigWidgetPredict::ConfigWidgetPredict(
        data::ConfigWidgetPredict *const this,
        const data::ConfigWidgetPredict *a2)
{
  std::enable_shared_from_this<data::ConfigWidgetPredict> *v2; // rsi
  int (**v3)(...); // rdx
  bool is_json_loaded; // cl
  char v5; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigWidgetPredict>;
  std::enable_shared_from_this<data::ConfigWidgetPredict>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigWidgetPredict>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigWidgetPredict + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigWidgetPredict = v3;
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

// Line 349: range 000000001272C158-000000001272C182
void __cdecl data::ConfigWidgetPredict::~ConfigWidgetPredict(data::ConfigWidgetPredict *const this)
{
  data::ConfigWidgetPredict::~ConfigWidgetPredict(this);
  operator delete(this, 0x20uLL);
};

// Line 349: range 000000001272C106-000000001272C157
void __cdecl data::ConfigWidgetPredict::~ConfigWidgetPredict(data::ConfigWidgetPredict *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetPredict + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetPredict = v2;
  std::enable_shared_from_this<data::ConfigWidgetPredict>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigWidgetPredict>);
};

// Line 354: range 0000000012181AD4-0000000012181AE4
const char *__cdecl data::ConfigWidgetPredict::getTypeName(const data::ConfigWidgetPredict *const this)
{
  return "ConfigWidgetPredict";
};

// Line 355: range 0000000012181AE6-0000000012181C82
int32_t __cdecl data::ConfigWidgetPredict::getHashNum(const data::ConfigWidgetPredict *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetPredict::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetPredict",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 374: range 000000001272C184-000000001272C2D9
void __cdecl data::ConfigWidgetPredict_CollisionDetect::ConfigWidgetPredict_CollisionDetect(
        data::ConfigWidgetPredict_CollisionDetect *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx

  data::ConfigWidgetPredict::ConfigWidgetPredict((data::ConfigWidgetPredict *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetPredict_CollisionDetect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetPredict = v2;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->widget_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->widget_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->widget_distance, v3);
  }
  this->widget_distance = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->widget_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->widget_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->widget_radius, v3);
  }
  this->widget_radius = 0.0;
  v4 = ((_BYTE)this + 36) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->include_water >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->include_water >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->include_water, v4, v5);
  this->include_water = 0;
  v6 = ((_BYTE)this + 37) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->include_npc >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->include_npc >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->include_npc, v6, v7);
  this->include_npc = 0;
};

// Line 374: range 000000001273189E-0000000012731AF6
void __cdecl data::ConfigWidgetPredict_CollisionDetect::ConfigWidgetPredict_CollisionDetect(
        data::ConfigWidgetPredict_CollisionDetect *const this,
        const data::ConfigWidgetPredict_CollisionDetect *a2)
{
  int (**v2)(...); // rdx
  float widget_distance; // xmm0_4
  __int64 v4; // rsi
  float widget_radius; // xmm0_4
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool include_water; // cl
  char v9; // dl
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  bool include_npc; // cl
  char v14; // dl
  __int64 v15; // rdx

  data::ConfigWidgetPredict::ConfigWidgetPredict(
    (data::ConfigWidgetPredict *const)this,
    (const data::ConfigWidgetPredict *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetPredict_CollisionDetect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigWidgetPredict = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->widget_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->widget_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->widget_distance);
  }
  widget_distance = a2->widget_distance;
  v4 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->widget_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->widget_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->widget_distance, v4);
  }
  this->widget_distance = widget_distance;
  if ( *(_BYTE *)(((unsigned __int64)&a2->widget_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->widget_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->widget_radius);
  }
  widget_radius = a2->widget_radius;
  if ( *(_BYTE *)(((unsigned __int64)&this->widget_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->widget_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->widget_radius, v4);
  }
  this->widget_radius = widget_radius;
  v6 = ((_BYTE)a2 + 36) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&a2->include_water >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&a2->include_water >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_load1(&a2->include_water, v6, v7);
  include_water = a2->include_water;
  v9 = *(_BYTE *)(((unsigned __int64)&this->include_water >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((((unsigned __int8)this + 36) & 7) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->include_water, v6, v10);
  this->include_water = include_water;
  v11 = ((_BYTE)a2 + 37) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&a2->include_npc >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&a2->include_npc >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_load1(&a2->include_npc, v11, v12);
  include_npc = a2->include_npc;
  v14 = *(_BYTE *)(((unsigned __int64)&this->include_npc >> 3) + 0x7FFF8000);
  LOBYTE(v11) = v14 != 0;
  v15 = (v14 != 0) & (unsigned __int8)((((unsigned __int8)this + 37) & 7) >= v14);
  if ( (_BYTE)v15 )
    __asan_report_store1(&this->include_npc, v11, v15);
  this->include_npc = include_npc;
};

// Line 384: range 000000001274C16A-000000001274C194
void __cdecl data::ConfigWidgetPredict_CollisionDetect::~ConfigWidgetPredict_CollisionDetect(
        data::ConfigWidgetPredict_CollisionDetect *const this)
{
  data::ConfigWidgetPredict_CollisionDetect::~ConfigWidgetPredict_CollisionDetect(this);
  operator delete(this, 0x28uLL);
};

// Line 384: range 000000001274C11C-000000001274C169
void __cdecl data::ConfigWidgetPredict_CollisionDetect::~ConfigWidgetPredict_CollisionDetect(
        data::ConfigWidgetPredict_CollisionDetect *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetPredict_CollisionDetect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetPredict = v2;
  data::ConfigWidgetPredict::~ConfigWidgetPredict((data::ConfigWidgetPredict *const)this);
};

// Line 389: range 0000000012181C84-0000000012181C94
const char *__cdecl data::ConfigWidgetPredict_CollisionDetect::getTypeName(
        const data::ConfigWidgetPredict_CollisionDetect *const this)
{
  return "ConfigWidgetPredict_CollisionDetect";
};

// Line 390: range 0000000012181C96-0000000012181E32
int32_t __cdecl data::ConfigWidgetPredict_CollisionDetect::getHashNum(
        const data::ConfigWidgetPredict_CollisionDetect *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetPredict_CollisionDetect::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetPredict_CollisionDetect",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 406: range 0000000012731D40-0000000012731D81
void __cdecl data::ConfigWidgetPredict_CollisionDetectFactory::ConfigWidgetPredict_CollisionDetectFactory(
        data::ConfigWidgetPredict_CollisionDetectFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetPredict_CollisionDetectFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetPredict_CollisionDetectFactory = v2;
};

// Line 408: range 0000000012181E70-0000000012181EB3
data::ConfigWidgetPredict_CollisionDetectPtr __cdecl data::ConfigWidgetPredict_CollisionDetectFactory::create(
        data::ConfigWidgetPredict_CollisionDetectFactory *const this)
{
  data::ConfigWidgetPredict_CollisionDetectPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigWidgetPredict_CollisionDetect>();
  result._M_ptr = (std::__shared_ptr<data::ConfigWidgetPredict_CollisionDetect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 417: range 000000001272C6AE-000000001272C70B
void __cdecl data::ConfigWidgetPredict_HasDynamicValue::ConfigWidgetPredict_HasDynamicValue(
        data::ConfigWidgetPredict_HasDynamicValue *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigWidgetPredict::ConfigWidgetPredict(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetPredict_HasDynamicValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetPredict = v2;
  std::string::basic_string(&this->key);
};

// Line 417: range 000000001273208A-0000000012732120
void __cdecl data::ConfigWidgetPredict_HasDynamicValue::ConfigWidgetPredict_HasDynamicValue(
        data::ConfigWidgetPredict_HasDynamicValue *const this,
        const data::ConfigWidgetPredict_HasDynamicValue *a2)
{
  int (**v2)(...); // rdx

  data::ConfigWidgetPredict::ConfigWidgetPredict(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetPredict_HasDynamicValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigWidgetPredict = v2;
  std::string::basic_string(&this->key, &a2->key);
};

// Line 424: range 000000001274C092-000000001274C0EF
void __cdecl data::ConfigWidgetPredict_HasDynamicValue::~ConfigWidgetPredict_HasDynamicValue(
        data::ConfigWidgetPredict_HasDynamicValue *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetPredict_HasDynamicValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetPredict = v2;
  std::string::~string(&this->key);
  data::ConfigWidgetPredict::~ConfigWidgetPredict(this);
};

// Line 424: range 000000001274C0F0-000000001274C11A
void __cdecl data::ConfigWidgetPredict_HasDynamicValue::~ConfigWidgetPredict_HasDynamicValue(
        data::ConfigWidgetPredict_HasDynamicValue *const this)
{
  data::ConfigWidgetPredict_HasDynamicValue::~ConfigWidgetPredict_HasDynamicValue(this);
  operator delete(this, 0x40uLL);
};

// Line 429: range 0000000012181EB4-0000000012181EC4
const char *__cdecl data::ConfigWidgetPredict_HasDynamicValue::getTypeName(
        const data::ConfigWidgetPredict_HasDynamicValue *const this)
{
  return "ConfigWidgetPredict_HasDynamicValue";
};

// Line 430: range 0000000012181EC6-0000000012182062
int32_t __cdecl data::ConfigWidgetPredict_HasDynamicValue::getHashNum(
        const data::ConfigWidgetPredict_HasDynamicValue *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetPredict_HasDynamicValue::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetPredict_HasDynamicValue",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 446: range 000000001273240A-000000001273244B
void __cdecl data::ConfigWidgetPredict_HasDynamicValueFactory::ConfigWidgetPredict_HasDynamicValueFactory(
        data::ConfigWidgetPredict_HasDynamicValueFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetPredict_HasDynamicValueFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetPredict_HasDynamicValueFactory = v2;
};

// Line 448: range 00000000121820A0-00000000121820E3
data::ConfigWidgetPredict_HasDynamicValuePtr __cdecl data::ConfigWidgetPredict_HasDynamicValueFactory::create(
        data::ConfigWidgetPredict_HasDynamicValueFactory *const this)
{
  data::ConfigWidgetPredict_HasDynamicValuePtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigWidgetPredict_HasDynamicValue>();
  result._M_ptr = (std::__shared_ptr<data::ConfigWidgetPredict_HasDynamicValue,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 457: range 000000001272CB10-000000001272CBAD
void __cdecl data::ConfigWidgetPredict_CheckEqualDynamicValue::ConfigWidgetPredict_CheckEqualDynamicValue(
        data::ConfigWidgetPredict_CheckEqualDynamicValue *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigWidgetPredict::ConfigWidgetPredict(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetPredict_CheckEqualDynamicValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetPredict = v2;
  std::string::basic_string(&this->key);
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, v1);
  }
  this->value = 0.0;
};

// Line 457: range 0000000012732754-0000000012732862
void __cdecl data::ConfigWidgetPredict_CheckEqualDynamicValue::ConfigWidgetPredict_CheckEqualDynamicValue(
        data::ConfigWidgetPredict_CheckEqualDynamicValue *const this,
        const data::ConfigWidgetPredict_CheckEqualDynamicValue *a2)
{
  int (**v2)(...); // rdx
  float value; // xmm0_4

  data::ConfigWidgetPredict::ConfigWidgetPredict(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetPredict_CheckEqualDynamicValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigWidgetPredict = v2;
  std::string::basic_string(&this->key, &a2->key);
  if ( *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, &a2->key);
  }
  this->value = value;
};

// Line 465: range 000000001274C008-000000001274C065
void __cdecl data::ConfigWidgetPredict_CheckEqualDynamicValue::~ConfigWidgetPredict_CheckEqualDynamicValue(
        data::ConfigWidgetPredict_CheckEqualDynamicValue *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetPredict_CheckEqualDynamicValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetPredict = v2;
  std::string::~string(&this->key);
  data::ConfigWidgetPredict::~ConfigWidgetPredict(this);
};

// Line 465: range 000000001274C066-000000001274C090
void __cdecl data::ConfigWidgetPredict_CheckEqualDynamicValue::~ConfigWidgetPredict_CheckEqualDynamicValue(
        data::ConfigWidgetPredict_CheckEqualDynamicValue *const this)
{
  data::ConfigWidgetPredict_CheckEqualDynamicValue::~ConfigWidgetPredict_CheckEqualDynamicValue(this);
  operator delete(this, 0x48uLL);
};

// Line 470: range 00000000121820E4-00000000121820F4
const char *__cdecl data::ConfigWidgetPredict_CheckEqualDynamicValue::getTypeName(
        const data::ConfigWidgetPredict_CheckEqualDynamicValue *const this)
{
  return "ConfigWidgetPredict_CheckEqualDynamicValue";
};

// Line 471: range 00000000121820F6-0000000012182292
int32_t __cdecl data::ConfigWidgetPredict_CheckEqualDynamicValue::getHashNum(
        const data::ConfigWidgetPredict_CheckEqualDynamicValue *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetPredict_CheckEqualDynamicValue::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetPredict_CheckEqualDynamicValue",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 487: range 0000000012732B4C-0000000012732B8D
void __cdecl data::ConfigWidgetPredict_CheckEqualDynamicValueFactory::ConfigWidgetPredict_CheckEqualDynamicValueFactory(
        data::ConfigWidgetPredict_CheckEqualDynamicValueFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetPredict_CheckEqualDynamicValueFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetPredict_CheckEqualDynamicValueFactory = v2;
};

// Line 489: range 00000000121822D0-0000000012182313
data::ConfigWidgetPredict_CheckEqualDynamicValuePtr __cdecl data::ConfigWidgetPredict_CheckEqualDynamicValueFactory::create(
        data::ConfigWidgetPredict_CheckEqualDynamicValueFactory *const this)
{
  data::ConfigWidgetPredict_CheckEqualDynamicValuePtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigWidgetPredict_CheckEqualDynamicValue>();
  result._M_ptr = (std::__shared_ptr<data::ConfigWidgetPredict_CheckEqualDynamicValue,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 498: range 000000001272CFC8-000000001272D015
void __cdecl data::ConfigWidgetPredict_CheckCurrentEquip::ConfigWidgetPredict_CheckCurrentEquip(
        data::ConfigWidgetPredict_CheckCurrentEquip *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigWidgetPredict::ConfigWidgetPredict(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetPredict_CheckCurrentEquip + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetPredict = v2;
};

// Line 498: range 0000000012732E96-0000000012732EEE
void __cdecl data::ConfigWidgetPredict_CheckCurrentEquip::ConfigWidgetPredict_CheckCurrentEquip(
        data::ConfigWidgetPredict_CheckCurrentEquip *const this,
        const data::ConfigWidgetPredict_CheckCurrentEquip *a2)
{
  int (**v2)(...); // rdx

  data::ConfigWidgetPredict::ConfigWidgetPredict(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetPredict_CheckCurrentEquip + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigWidgetPredict = v2;
};

// Line 504: range 000000001274BFDC-000000001274C006
void __cdecl data::ConfigWidgetPredict_CheckCurrentEquip::~ConfigWidgetPredict_CheckCurrentEquip(
        data::ConfigWidgetPredict_CheckCurrentEquip *const this)
{
  data::ConfigWidgetPredict_CheckCurrentEquip::~ConfigWidgetPredict_CheckCurrentEquip(this);
  operator delete(this, 0x20uLL);
};

// Line 504: range 000000001274BF8E-000000001274BFDB
void __cdecl data::ConfigWidgetPredict_CheckCurrentEquip::~ConfigWidgetPredict_CheckCurrentEquip(
        data::ConfigWidgetPredict_CheckCurrentEquip *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetPredict_CheckCurrentEquip + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetPredict = v2;
  data::ConfigWidgetPredict::~ConfigWidgetPredict(this);
};

// Line 509: range 0000000012182314-0000000012182324
const char *__cdecl data::ConfigWidgetPredict_CheckCurrentEquip::getTypeName(
        const data::ConfigWidgetPredict_CheckCurrentEquip *const this)
{
  return "ConfigWidgetPredict_CheckCurrentEquip";
};

// Line 510: range 0000000012182326-00000000121824C2
int32_t __cdecl data::ConfigWidgetPredict_CheckCurrentEquip::getHashNum(
        const data::ConfigWidgetPredict_CheckCurrentEquip *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetPredict_CheckCurrentEquip::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetPredict_CheckCurrentEquip",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 526: range 0000000012733138-0000000012733179
void __cdecl data::ConfigWidgetPredict_CheckCurrentEquipFactory::ConfigWidgetPredict_CheckCurrentEquipFactory(
        data::ConfigWidgetPredict_CheckCurrentEquipFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetPredict_CheckCurrentEquipFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetPredict_CheckCurrentEquipFactory = v2;
};

// Line 528: range 0000000012182500-0000000012182543
data::ConfigWidgetPredict_CheckCurrentEquipPtr __cdecl data::ConfigWidgetPredict_CheckCurrentEquipFactory::create(
        data::ConfigWidgetPredict_CheckCurrentEquipFactory *const this)
{
  data::ConfigWidgetPredict_CheckCurrentEquipPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigWidgetPredict_CheckCurrentEquip>();
  result._M_ptr = (std::__shared_ptr<data::ConfigWidgetPredict_CheckCurrentEquip,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 537: range 000000001272D42A-000000001272D477
void __cdecl data::ConfigWidgetPredict_AlwaysPass::ConfigWidgetPredict_AlwaysPass(
        data::ConfigWidgetPredict_AlwaysPass *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigWidgetPredict::ConfigWidgetPredict(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetPredict_AlwaysPass + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetPredict = v2;
};

// Line 537: range 0000000012733482-00000000127334DA
void __cdecl data::ConfigWidgetPredict_AlwaysPass::ConfigWidgetPredict_AlwaysPass(
        data::ConfigWidgetPredict_AlwaysPass *const this,
        const data::ConfigWidgetPredict_AlwaysPass *a2)
{
  int (**v2)(...); // rdx

  data::ConfigWidgetPredict::ConfigWidgetPredict(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetPredict_AlwaysPass + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigWidgetPredict = v2;
};

// Line 543: range 000000001274BF62-000000001274BF8C
void __cdecl data::ConfigWidgetPredict_AlwaysPass::~ConfigWidgetPredict_AlwaysPass(
        data::ConfigWidgetPredict_AlwaysPass *const this)
{
  data::ConfigWidgetPredict_AlwaysPass::~ConfigWidgetPredict_AlwaysPass(this);
  operator delete(this, 0x20uLL);
};

// Line 543: range 000000001274BF14-000000001274BF61
void __cdecl data::ConfigWidgetPredict_AlwaysPass::~ConfigWidgetPredict_AlwaysPass(
        data::ConfigWidgetPredict_AlwaysPass *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetPredict_AlwaysPass + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetPredict = v2;
  data::ConfigWidgetPredict::~ConfigWidgetPredict(this);
};

// Line 548: range 0000000012182544-0000000012182554
const char *__cdecl data::ConfigWidgetPredict_AlwaysPass::getTypeName(
        const data::ConfigWidgetPredict_AlwaysPass *const this)
{
  return "ConfigWidgetPredict_AlwaysPass";
};

// Line 549: range 0000000012182556-00000000121826F2
int32_t __cdecl data::ConfigWidgetPredict_AlwaysPass::getHashNum(
        const data::ConfigWidgetPredict_AlwaysPass *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigWidgetPredict_AlwaysPass::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWidgetPredict_AlwaysPass",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 565: range 0000000012733724-0000000012733765
void __cdecl data::ConfigWidgetPredict_AlwaysPassFactory::ConfigWidgetPredict_AlwaysPassFactory(
        data::ConfigWidgetPredict_AlwaysPassFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWidgetPredict_AlwaysPassFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWidgetPredict_AlwaysPassFactory = v2;
};

// Line 567: range 0000000012182730-0000000012182773
data::ConfigWidgetPredict_AlwaysPassPtr __cdecl data::ConfigWidgetPredict_AlwaysPassFactory::create(
        data::ConfigWidgetPredict_AlwaysPassFactory *const this)
{
  data::ConfigWidgetPredict_AlwaysPassPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigWidgetPredict_AlwaysPass>();
  result._M_ptr = (std::__shared_ptr<data::ConfigWidgetPredict_AlwaysPass,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};
