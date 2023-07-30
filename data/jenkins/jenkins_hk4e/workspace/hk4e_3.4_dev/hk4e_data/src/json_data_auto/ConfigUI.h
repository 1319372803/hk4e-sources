// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigUI.h

// Line 456: range 00000000118E8FA6-00000000118E9080
void __cdecl data::ConfigBaseInputAction::ConfigBaseInputAction(data::ConfigBaseInputAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::ConfigBaseInputAction>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigBaseInputAction>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBaseInputAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInputAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->value_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value_type, v1);
  }
  this->value_type = ButtonInput;
  std::string::basic_string(&this->description_text_id);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 456: range 00000000118E9550-00000000118E96DD
void __cdecl data::ConfigBaseInputAction::ConfigBaseInputAction(
        data::ConfigBaseInputAction *const this,
        const data::ConfigBaseInputAction *a2)
{
  std::enable_shared_from_this<data::ConfigBaseInputAction> *v2; // rsi
  int (**v3)(...); // rdx
  data::InputValueType value_type; // ecx
  char v5; // al
  std::string *p_description_text_id; // rsi
  bool is_json_loaded; // cl
  char v8; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigBaseInputAction>;
  std::enable_shared_from_this<data::ConfigBaseInputAction>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigBaseInputAction>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigBaseInputAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigBaseInputAction = v3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->value_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->value_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->value_type);
  }
  value_type = a2->value_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->value_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store4(&this->value_type, v2);
  }
  this->value_type = value_type;
  p_description_text_id = &a2->description_text_id;
  std::string::basic_string(&this->description_text_id, &a2->description_text_id);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_description_text_id, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(p_description_text_id) = v8 != 0;
    __asan_report_store1(&this->is_json_loaded, p_description_text_id, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 465: range 00000000118E9CAC-00000000118E9D0D
void __cdecl data::ConfigBaseInputAction::~ConfigBaseInputAction(data::ConfigBaseInputAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBaseInputAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInputAction = v2;
  std::string::~string(&this->description_text_id);
  std::enable_shared_from_this<data::ConfigBaseInputAction>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigBaseInputAction>);
};

// Line 465: range 00000000118E9D0E-00000000118E9D38
void __cdecl data::ConfigBaseInputAction::~ConfigBaseInputAction(data::ConfigBaseInputAction *const this)
{
  data::ConfigBaseInputAction::~ConfigBaseInputAction(this);
  operator delete(this, 0x48uLL);
};

// Line 470: range 0000000011695246-0000000011695256
const char *__cdecl data::ConfigBaseInputAction::getTypeName(const data::ConfigBaseInputAction *const this)
{
  return "ConfigBaseInputAction";
};

// Line 471: range 0000000011695258-00000000116953F4
int32_t __cdecl data::ConfigBaseInputAction::getHashNum(const data::ConfigBaseInputAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigBaseInputAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBaseInputAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 511: range 00000000118E9D3A-00000000118E9E51
void __cdecl data::ConfigCompoundInputAction::ConfigCompoundInputAction(data::ConfigCompoundInputAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigBaseInputAction::ConfigBaseInputAction((data::ConfigBaseInputAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCompoundInputAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInputAction = v2;
  v3 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->action1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->action1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->action1, v3);
  }
  this->action1 = MoveForward;
  if ( *(_BYTE *)(((unsigned __int64)&this->action2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->action2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->action2, v3);
  }
  this->action2 = MoveForward;
  if ( *(_BYTE *)(((unsigned __int64)&this->compound_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->compound_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->compound_type, (((_BYTE)this + 76) & 7u) + 3);
  }
  this->compound_type = TwoAxis;
};

// Line 511: range 00000000118EA276-00000000118EA44D
void __cdecl data::ConfigCompoundInputAction::ConfigCompoundInputAction(
        data::ConfigCompoundInputAction *const this,
        const data::ConfigCompoundInputAction *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::InputActionType action1; // ecx
  char v5; // dl
  data::InputActionType action2; // ecx
  char v7; // al
  __int64 v8; // rsi
  data::ActionCompoundType compound_type; // ecx
  char v10; // dl

  data::ConfigBaseInputAction::ConfigBaseInputAction(
    (data::ConfigBaseInputAction *const)this,
    (const data::ConfigBaseInputAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCompoundInputAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInputAction = v2;
  v3 = (((_BYTE)a2 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->action1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->action1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->action1);
  }
  action1 = a2->action1;
  v5 = *(_BYTE *)(((unsigned __int64)&this->action1 >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->action1, v3);
  }
  this->action1 = action1;
  if ( *(_BYTE *)(((unsigned __int64)&a2->action2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->action2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->action2);
  }
  action2 = a2->action2;
  v7 = *(_BYTE *)(((unsigned __int64)&this->action2 >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->action2, v3);
  }
  this->action2 = action2;
  v8 = (((_BYTE)a2 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->compound_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->compound_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->compound_type);
  }
  compound_type = a2->compound_type;
  v10 = *(_BYTE *)(((unsigned __int64)&this->compound_type >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->compound_type, v8);
  }
  this->compound_type = compound_type;
};

// Line 520: range 0000000011906584-00000000119065D1
void __cdecl data::ConfigCompoundInputAction::~ConfigCompoundInputAction(data::ConfigCompoundInputAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCompoundInputAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInputAction = v2;
  data::ConfigBaseInputAction::~ConfigBaseInputAction((data::ConfigBaseInputAction *const)this);
};

// Line 520: range 00000000119065D2-00000000119065FC
void __cdecl data::ConfigCompoundInputAction::~ConfigCompoundInputAction(data::ConfigCompoundInputAction *const this)
{
  data::ConfigCompoundInputAction::~ConfigCompoundInputAction(this);
  operator delete(this, 0x50uLL);
};

// Line 525: range 00000000116953F6-0000000011695406
const char *__cdecl data::ConfigCompoundInputAction::getTypeName(const data::ConfigCompoundInputAction *const this)
{
  return "ConfigCompoundInputAction";
};

// Line 526: range 0000000011695408-00000000116955A4
int32_t __cdecl data::ConfigCompoundInputAction::getHashNum(const data::ConfigCompoundInputAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigCompoundInputAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigCompoundInputAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 542: range 00000000118EA736-00000000118EA777
void __cdecl data::ConfigCompoundInputActionFactory::ConfigCompoundInputActionFactory(
        data::ConfigCompoundInputActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCompoundInputActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCompoundInputActionFactory = v2;
};

// Line 834: range 00000000116A0152-00000000116A01C7
void __cdecl data::DeviceAction::DeviceAction(data::DeviceAction *const this)
{
  __int64 v1; // rsi

  std::string::basic_string(this);
  std::string::basic_string(&this->keyboard_mouse);
  std::string::basic_string(&this->joypad);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 834: range 000000001187CD6C-000000001187CE75
void __cdecl data::DeviceAction::DeviceAction(data::DeviceAction *const this, const data::DeviceAction *a2)
{
  std::string *p_joypad; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::string::basic_string(this, a2);
  std::string::basic_string(&this->keyboard_mouse, &a2->keyboard_mouse);
  p_joypad = &a2->joypad;
  std::string::basic_string(&this->joypad, p_joypad);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_joypad, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_joypad) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_joypad, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 834: range 00000000116A01C8-00000000116A0202
void __cdecl data::DeviceAction::~DeviceAction(data::DeviceAction *const this)
{
  std::string::~string(&this->joypad);
  std::string::~string(&this->keyboard_mouse);
  std::string::~string(this);
};

// Line 866: range 00000000116A0594-00000000116A0679
void __cdecl data::ConfigBaseContext::ConfigBaseContext(data::ConfigBaseContext *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx

  std::unordered_map<std::string,std::vector<data::InputActionEvent>>::unordered_map(&this->action_groups);
  std::unordered_map<int,data::DeviceAction>::unordered_map(&this->state_actions);
  if ( *(char *)(((unsigned __int64)&this->enable_input_penetrate >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->enable_input_penetrate, v1, &this->enable_input_penetrate);
  this->enable_input_penetrate = 0;
  v2 = ((_BYTE)this + 113) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->enable_joypad_virtual_cursor >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->enable_joypad_virtual_cursor >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->enable_joypad_virtual_cursor, v2, v3);
  this->enable_joypad_virtual_cursor = 1;
  v4 = ((_BYTE)this + 114) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_json_loaded, v4, v5);
  this->is_json_loaded = 0;
};

// Line 866: range 000000001187D166-000000001187D33F
void __cdecl data::ConfigBaseContext::ConfigBaseContext(
        data::ConfigBaseContext *const this,
        const data::ConfigBaseContext *a2)
{
  data::StateActionMap *p_state_actions; // rsi
  bool enable_input_penetrate; // cl
  char v4; // al
  __int64 v5; // rsi
  __int64 v6; // rdx
  bool enable_joypad_virtual_cursor; // cl
  char v8; // dl
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool is_json_loaded; // cl
  char v13; // dl
  __int64 v14; // rdx

  std::unordered_map<std::string,std::vector<data::InputActionEvent>>::unordered_map(
    &this->action_groups,
    &a2->action_groups);
  p_state_actions = &a2->state_actions;
  std::unordered_map<int,data::DeviceAction>::unordered_map(&this->state_actions, p_state_actions);
  if ( *(char *)(((unsigned __int64)&a2->enable_input_penetrate >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->enable_input_penetrate, p_state_actions, &a2->enable_input_penetrate);
  enable_input_penetrate = a2->enable_input_penetrate;
  v4 = *(_BYTE *)(((unsigned __int64)&this->enable_input_penetrate >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_state_actions) = v4 != 0;
    __asan_report_store1(&this->enable_input_penetrate, p_state_actions, &this->enable_input_penetrate);
  }
  this->enable_input_penetrate = enable_input_penetrate;
  v5 = ((_BYTE)a2 + 113) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&a2->enable_joypad_virtual_cursor >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&a2->enable_joypad_virtual_cursor >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&a2->enable_joypad_virtual_cursor, v5, v6);
  enable_joypad_virtual_cursor = a2->enable_joypad_virtual_cursor;
  v8 = *(_BYTE *)(((unsigned __int64)&this->enable_joypad_virtual_cursor >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((((unsigned __int8)this + 113) & 7) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->enable_joypad_virtual_cursor, v5, v9);
  this->enable_joypad_virtual_cursor = enable_joypad_virtual_cursor;
  v10 = ((_BYTE)a2 + 114) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&a2->is_json_loaded, v10, v11);
  is_json_loaded = a2->is_json_loaded;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this + 114) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_json_loaded, v10, v14);
  this->is_json_loaded = is_json_loaded;
};

// Line 866: range 00000000116A067A-00000000116A06A4
void __cdecl data::ConfigBaseContext::~ConfigBaseContext(data::ConfigBaseContext *const this)
{
  std::unordered_map<int,data::DeviceAction>::~unordered_map(&this->state_actions);
  std::unordered_map<std::string,std::vector<data::InputActionEvent>>::~unordered_map(&this->action_groups);
};

// Line 1111: range 00000000116A159E-00000000116A1603
void __cdecl data::ConfigMainPageDisableInfo::ConfigMainPageDisableInfo(data::ConfigMainPageDisableInfo *const this)
{
  __int64 v1; // rsi

  std::vector<data::MainPageUIDisableType>::vector(&this->ui_disable_list);
  std::vector<data::InputEventType>::vector(&this->enabled_input_event_list);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 1111: range 000000001187D9FE-000000001187DAD7
void __cdecl data::ConfigMainPageDisableInfo::ConfigMainPageDisableInfo(
        data::ConfigMainPageDisableInfo *const this,
        const data::ConfigMainPageDisableInfo *a2)
{
  data::InputEventList *p_enabled_input_event_list; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::vector<data::MainPageUIDisableType>::vector(&this->ui_disable_list, &a2->ui_disable_list);
  p_enabled_input_event_list = &a2->enabled_input_event_list;
  std::vector<data::InputEventType>::vector(&this->enabled_input_event_list, p_enabled_input_event_list);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_enabled_input_event_list, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_enabled_input_event_list) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_enabled_input_event_list, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 1111: range 00000000116A1604-00000000116A162E
void __cdecl data::ConfigMainPageDisableInfo::~ConfigMainPageDisableInfo(data::ConfigMainPageDisableInfo *const this)
{
  std::vector<data::InputEventType>::~vector(&this->enabled_input_event_list);
  std::vector<data::MainPageUIDisableType>::~vector(&this->ui_disable_list);
};
