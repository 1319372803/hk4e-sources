// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigCoop.h

// Line 99: range 0000000013C1589C-0000000013C1592E
void __cdecl data::CoopCond::CoopCond(data::CoopCond *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->type = COOP_COND_NONE_0;
  std::vector<int>::vector(&this->param);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 99: range 00000000141EA940-00000000141EAA4E
void __cdecl data::CoopCond::CoopCond(data::CoopCond *const this, const data::CoopCond *a2)
{
  data::CoopCondType type; // ecx
  char v3; // al
  data::Int32List *p_param; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  const data::CoopCond *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  type = a2->type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->type = type;
  p_param = &v7->param;
  std::vector<int>::vector(&this->param, &v7->param);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_param, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_param) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_param, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 99: range 0000000013E69252-0000000013E69360
void __cdecl data::CoopCond::CoopCond(data::CoopCond *const this, data::CoopCond *a2)
{
  data::CoopCondType type; // ecx
  char v3; // al
  data::Int32List *p_param; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  data::CoopCond *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  type = a2->type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->type = type;
  p_param = &v7->param;
  std::vector<int>::vector(&this->param, &v7->param);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_param, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_param) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_param, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 99: range 0000000013C15930-0000000013C1594E
void __cdecl data::CoopCond::~CoopCond(data::CoopCond *const this)
{
  std::vector<int>::~vector(&this->param);
};

// Line 128: range 0000000013C15950-0000000013C159E2
void __cdecl data::ConfigCoopAction::ConfigCoopAction(data::ConfigCoopAction *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->action_type = COOP_ACTION_NONE;
  std::vector<int>::vector(&this->param);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 128: range 00000000141EC5E0-00000000141EC6EE
void __cdecl data::ConfigCoopAction::ConfigCoopAction(
        data::ConfigCoopAction *const this,
        const data::ConfigCoopAction *a2)
{
  data::CoopActionType action_type; // ecx
  char v3; // al
  data::Int32List *p_param; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  const data::ConfigCoopAction *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  action_type = a2->action_type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->action_type = action_type;
  p_param = &v7->param;
  std::vector<int>::vector(&this->param, &v7->param);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_param, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_param) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_param, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 128: range 0000000013E69AA8-0000000013E69BB6
void __cdecl data::ConfigCoopAction::ConfigCoopAction(data::ConfigCoopAction *const this, data::ConfigCoopAction *a2)
{
  data::CoopActionType action_type; // ecx
  char v3; // al
  data::Int32List *p_param; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  data::ConfigCoopAction *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  action_type = a2->action_type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->action_type = action_type;
  p_param = &v7->param;
  std::vector<int>::vector(&this->param, &v7->param);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_param, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_param) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_param, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 128: range 0000000013C159E4-0000000013C15A02
void __cdecl data::ConfigCoopAction::~ConfigCoopAction(data::ConfigCoopAction *const this)
{
  std::vector<int>::~vector(&this->param);
};

// Line 157: range 0000000013C16014-0000000013C160A6
void __cdecl data::CoopCondGroup::CoopCondGroup(data::CoopCondGroup *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->cond_comb_type = LOGIC_NONE;
  std::vector<data::CoopCond>::vector(&this->coop_cond_list);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 157: range 0000000013D84C82-0000000013D84D90
void __cdecl data::CoopCondGroup::CoopCondGroup(data::CoopCondGroup *const this, const data::CoopCondGroup *a2)
{
  data::LogicType cond_comb_type; // ecx
  char v3; // al
  data::CoopCondList *p_coop_cond_list; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  const data::CoopCondGroup *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  cond_comb_type = a2->cond_comb_type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->cond_comb_type = cond_comb_type;
  p_coop_cond_list = &v7->coop_cond_list;
  std::vector<data::CoopCond>::vector(&this->coop_cond_list, &v7->coop_cond_list);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_coop_cond_list, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_coop_cond_list) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_coop_cond_list, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 157: range 0000000013E6C61A-0000000013E6C728
void __cdecl data::CoopCondGroup::CoopCondGroup(data::CoopCondGroup *const this, data::CoopCondGroup *a2)
{
  data::LogicType cond_comb_type; // ecx
  char v3; // al
  data::CoopCondList *p_coop_cond_list; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  data::CoopCondGroup *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  cond_comb_type = a2->cond_comb_type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->cond_comb_type = cond_comb_type;
  p_coop_cond_list = &v7->coop_cond_list;
  std::vector<data::CoopCond>::vector(&this->coop_cond_list, &v7->coop_cond_list);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_coop_cond_list, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_coop_cond_list) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_coop_cond_list, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 157: range 0000000013C160A8-0000000013C160C6
void __cdecl data::CoopCondGroup::~CoopCondGroup(data::CoopCondGroup *const this)
{
  std::vector<data::CoopCond>::~vector(&this->coop_cond_list);
};

// Line 181: range 000000001428016E-000000001428028E
void __cdecl data::ConfigCoopBaseNode::ConfigCoopBaseNode(data::ConfigCoopBaseNode *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  std::enable_shared_from_this<data::ConfigCoopBaseNode>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigCoopBaseNode>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCoopBaseNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCoopBaseNode = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->coop_node_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->coop_node_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->coop_node_id, v1);
  }
  this->coop_node_id = 0;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->coop_node_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coop_node_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->coop_node_type, v3);
  }
  this->coop_node_type = COOP_NODE_NONE;
  std::vector<unsigned int>::vector(&this->next_node_array);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v3, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 181: range 0000000014280748-000000001428095A
void __cdecl data::ConfigCoopBaseNode::ConfigCoopBaseNode(
        data::ConfigCoopBaseNode *const this,
        const data::ConfigCoopBaseNode *a2)
{
  std::enable_shared_from_this<data::ConfigCoopBaseNode> *v2; // rsi
  int (**v3)(...); // rdx
  uint32_t coop_node_id; // ecx
  char v5; // al
  __int64 v6; // rsi
  data::CoopNodeType coop_node_type; // ecx
  char v8; // dl
  data::UInt32Array *p_next_node_array; // rsi
  bool is_json_loaded; // cl
  char v11; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigCoopBaseNode>;
  std::enable_shared_from_this<data::ConfigCoopBaseNode>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigCoopBaseNode>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigCoopBaseNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigCoopBaseNode = v3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->coop_node_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->coop_node_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->coop_node_id);
  }
  coop_node_id = a2->coop_node_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->coop_node_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store4(&this->coop_node_id, v2);
  }
  this->coop_node_id = coop_node_id;
  v6 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->coop_node_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->coop_node_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->coop_node_type);
  }
  coop_node_type = a2->coop_node_type;
  v8 = *(_BYTE *)(((unsigned __int64)&this->coop_node_type >> 3) + 0x7FFF8000);
  if ( v8 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v8 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store4(&this->coop_node_type, v6);
  }
  this->coop_node_type = coop_node_type;
  p_next_node_array = &a2->next_node_array;
  std::vector<unsigned int>::vector(&this->next_node_array, &a2->next_node_array);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_next_node_array, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v11 < 0 )
  {
    LOBYTE(p_next_node_array) = v11 != 0;
    __asan_report_store1(&this->is_json_loaded, p_next_node_array, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 191: range 0000000014280CA6-0000000014280CD0
void __cdecl data::ConfigCoopBaseNode::~ConfigCoopBaseNode(data::ConfigCoopBaseNode *const this)
{
  data::ConfigCoopBaseNode::~ConfigCoopBaseNode(this);
  operator delete(this, 0x40uLL);
};

// Line 191: range 0000000014280C44-0000000014280CA5
void __cdecl data::ConfigCoopBaseNode::~ConfigCoopBaseNode(data::ConfigCoopBaseNode *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCoopBaseNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCoopBaseNode = v2;
  std::vector<unsigned int>::~vector(&this->next_node_array);
  std::enable_shared_from_this<data::ConfigCoopBaseNode>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigCoopBaseNode>);
};

// Line 196: range 0000000013BCC920-0000000013BCC930
const char *__cdecl data::ConfigCoopBaseNode::getTypeName(const data::ConfigCoopBaseNode *const this)
{
  return "ConfigCoopBaseNode";
};

// Line 197: range 0000000013BCC932-0000000013BCCACE
int32_t __cdecl data::ConfigCoopBaseNode::getHashNum(const data::ConfigCoopBaseNode *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigCoopBaseNode::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigCoopBaseNode",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 216: range 0000000014280CD2-0000000014280D65
void __cdecl data::ConfigCoopTalkNode::ConfigCoopTalkNode(data::ConfigCoopTalkNode *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigCoopBaseNode::ConfigCoopBaseNode((data::ConfigCoopBaseNode *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCoopTalkNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCoopBaseNode = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->talk_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->talk_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->talk_id, (((_BYTE)this + 60) & 7u) + 3);
  }
  this->talk_id = 0;
};

// Line 216: range 000000001428116A-0000000014281247
void __cdecl data::ConfigCoopTalkNode::ConfigCoopTalkNode(
        data::ConfigCoopTalkNode *const this,
        const data::ConfigCoopTalkNode *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t talk_id; // ecx
  char v5; // dl

  data::ConfigCoopBaseNode::ConfigCoopBaseNode(
    (data::ConfigCoopBaseNode *const)this,
    (const data::ConfigCoopBaseNode *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCoopTalkNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigCoopBaseNode = v2;
  v3 = (((_BYTE)a2 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->talk_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->talk_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->talk_id);
  }
  talk_id = a2->talk_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->talk_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->talk_id, v3);
  }
  this->talk_id = talk_id;
};

// Line 223: range 00000000142A1566-00000000142A1590
void __cdecl data::ConfigCoopTalkNode::~ConfigCoopTalkNode(data::ConfigCoopTalkNode *const this)
{
  data::ConfigCoopTalkNode::~ConfigCoopTalkNode(this);
  operator delete(this, 0x40uLL);
};

// Line 223: range 00000000142A1518-00000000142A1565
void __cdecl data::ConfigCoopTalkNode::~ConfigCoopTalkNode(data::ConfigCoopTalkNode *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCoopTalkNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCoopBaseNode = v2;
  data::ConfigCoopBaseNode::~ConfigCoopBaseNode((data::ConfigCoopBaseNode *const)this);
};

// Line 228: range 0000000013BCCAD0-0000000013BCCAE0
const char *__cdecl data::ConfigCoopTalkNode::getTypeName(const data::ConfigCoopTalkNode *const this)
{
  return "ConfigCoopTalkNode";
};

// Line 229: range 0000000013BCCAE2-0000000013BCCC7E
int32_t __cdecl data::ConfigCoopTalkNode::getHashNum(const data::ConfigCoopTalkNode *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigCoopTalkNode::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigCoopTalkNode",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 245: range 0000000014281530-0000000014281571
void __cdecl data::ConfigCoopTalkNodeFactory::ConfigCoopTalkNodeFactory(data::ConfigCoopTalkNodeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCoopTalkNodeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCoopTalkNodeFactory = v2;
};

// Line 253: range 000000001428187A-00000000142818D7
void __cdecl data::ConfigCoopCondNode::ConfigCoopCondNode(data::ConfigCoopCondNode *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigCoopBaseNode::ConfigCoopBaseNode(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCoopCondNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCoopBaseNode = v2;
  data::CoopCondGroup::CoopCondGroup(&this->coop_cond_grp);
};

// Line 253: range 0000000014281C8C-0000000014281D22
void __cdecl data::ConfigCoopCondNode::ConfigCoopCondNode(
        data::ConfigCoopCondNode *const this,
        const data::ConfigCoopCondNode *a2)
{
  int (**v2)(...); // rdx

  data::ConfigCoopBaseNode::ConfigCoopBaseNode(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCoopCondNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigCoopBaseNode = v2;
  data::CoopCondGroup::CoopCondGroup(&this->coop_cond_grp, &a2->coop_cond_grp);
};

// Line 260: range 00000000142A148E-00000000142A14EB
void __cdecl data::ConfigCoopCondNode::~ConfigCoopCondNode(data::ConfigCoopCondNode *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCoopCondNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCoopBaseNode = v2;
  data::CoopCondGroup::~CoopCondGroup(&this->coop_cond_grp);
  data::ConfigCoopBaseNode::~ConfigCoopBaseNode(this);
};

// Line 260: range 00000000142A14EC-00000000142A1516
void __cdecl data::ConfigCoopCondNode::~ConfigCoopCondNode(data::ConfigCoopCondNode *const this)
{
  data::ConfigCoopCondNode::~ConfigCoopCondNode(this);
  operator delete(this, 0x68uLL);
};

// Line 265: range 0000000013BCCC80-0000000013BCCC90
const char *__cdecl data::ConfigCoopCondNode::getTypeName(const data::ConfigCoopCondNode *const this)
{
  return "ConfigCoopCondNode";
};

// Line 266: range 0000000013BCCC92-0000000013BCCE2E
int32_t __cdecl data::ConfigCoopCondNode::getHashNum(const data::ConfigCoopCondNode *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigCoopCondNode::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigCoopCondNode",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 282: range 000000001428200C-000000001428204D
void __cdecl data::ConfigCoopCondNodeFactory::ConfigCoopCondNodeFactory(data::ConfigCoopCondNodeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCoopCondNodeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCoopCondNodeFactory = v2;
};

// Line 290: range 0000000013C160C8-0000000013C1616A
void __cdecl data::CoopSelectNodeContent::CoopSelectNodeContent(data::CoopSelectNodeContent *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->dialog_id = 0;
  data::CoopCondGroup::CoopCondGroup(&this->show_cond);
  data::CoopCondGroup::CoopCondGroup(&this->enable_cond);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 290: range 00000000141EB79A-00000000141EB8EA
void __cdecl data::CoopSelectNodeContent::CoopSelectNodeContent(
        data::CoopSelectNodeContent *const this,
        const data::CoopSelectNodeContent *a2)
{
  uint32_t dialog_id; // ecx
  char v3; // al
  data::CoopCondGroup *p_enable_cond; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  const data::CoopSelectNodeContent *v7; // [rsp+0h] [rbp-20h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  dialog_id = a2->dialog_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->dialog_id = dialog_id;
  data::CoopCondGroup::CoopCondGroup(&this->show_cond, &v7->show_cond);
  p_enable_cond = &v7->enable_cond;
  data::CoopCondGroup::CoopCondGroup(&this->enable_cond, &v7->enable_cond);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_enable_cond, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_enable_cond) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_enable_cond, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 290: range 0000000013E6C72A-0000000013E6C853
void __cdecl data::CoopSelectNodeContent::CoopSelectNodeContent(
        data::CoopSelectNodeContent *const this,
        data::CoopSelectNodeContent *a2)
{
  uint32_t dialog_id; // ecx
  char v3; // al
  data::CoopCondGroup *p_enable_cond; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  data::CoopSelectNodeContent *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  dialog_id = a2->dialog_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->dialog_id = dialog_id;
  data::CoopCondGroup::CoopCondGroup(&this->show_cond, &v7->show_cond);
  p_enable_cond = &v7->enable_cond;
  data::CoopCondGroup::CoopCondGroup(&this->enable_cond, &v7->enable_cond);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_enable_cond, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_enable_cond) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_enable_cond, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 290: range 0000000013C1616C-0000000013C1619A
void __cdecl data::CoopSelectNodeContent::~CoopSelectNodeContent(data::CoopSelectNodeContent *const this)
{
  data::CoopCondGroup::~CoopCondGroup(&this->enable_cond);
  data::CoopCondGroup::~CoopCondGroup(&this->show_cond);
};

// Line 320: range 000000001428238E-0000000014282426
void __cdecl data::ConfigCoopSelectNode::ConfigCoopSelectNode(data::ConfigCoopSelectNode *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigCoopBaseNode::ConfigCoopBaseNode(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCoopSelectNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCoopBaseNode = v2;
  std::vector<data::CoopSelectNodeContent>::vector(&this->select_list);
  if ( *(char *)(((unsigned __int64)&this->delay_move_next >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->delay_move_next, v1, &this->delay_move_next);
  this->delay_move_next = 0;
};

// Line 320: range 00000000142827DC-00000000142828E8
void __cdecl data::ConfigCoopSelectNode::ConfigCoopSelectNode(
        data::ConfigCoopSelectNode *const this,
        const data::ConfigCoopSelectNode *a2)
{
  int (**v2)(...); // rdx
  data::CoopSelectNodeContentList *p_select_list; // rsi
  bool delay_move_next; // cl
  char v5; // al

  data::ConfigCoopBaseNode::ConfigCoopBaseNode(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCoopSelectNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigCoopBaseNode = v2;
  p_select_list = &a2->select_list;
  std::vector<data::CoopSelectNodeContent>::vector(&this->select_list, &a2->select_list);
  if ( *(char *)(((unsigned __int64)&a2->delay_move_next >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->delay_move_next, p_select_list, &a2->delay_move_next);
  delay_move_next = a2->delay_move_next;
  v5 = *(_BYTE *)(((unsigned __int64)&this->delay_move_next >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_select_list) = v5 != 0;
    __asan_report_store1(&this->delay_move_next, p_select_list, &this->delay_move_next);
  }
  this->delay_move_next = delay_move_next;
};

// Line 328: range 00000000142A1404-00000000142A1461
void __cdecl data::ConfigCoopSelectNode::~ConfigCoopSelectNode(data::ConfigCoopSelectNode *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCoopSelectNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCoopBaseNode = v2;
  std::vector<data::CoopSelectNodeContent>::~vector(&this->select_list);
  data::ConfigCoopBaseNode::~ConfigCoopBaseNode(this);
};

// Line 328: range 00000000142A1462-00000000142A148C
void __cdecl data::ConfigCoopSelectNode::~ConfigCoopSelectNode(data::ConfigCoopSelectNode *const this)
{
  data::ConfigCoopSelectNode::~ConfigCoopSelectNode(this);
  operator delete(this, 0x60uLL);
};

// Line 333: range 0000000013BCCE30-0000000013BCCE40
const char *__cdecl data::ConfigCoopSelectNode::getTypeName(const data::ConfigCoopSelectNode *const this)
{
  return "ConfigCoopSelectNode";
};

// Line 334: range 0000000013BCCE42-0000000013BCCFDE
int32_t __cdecl data::ConfigCoopSelectNode::getHashNum(const data::ConfigCoopSelectNode *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigCoopSelectNode::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigCoopSelectNode",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 350: range 0000000014282BD2-0000000014282C13
void __cdecl data::ConfigCoopSelectNodeFactory::ConfigCoopSelectNodeFactory(
        data::ConfigCoopSelectNodeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCoopSelectNodeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCoopSelectNodeFactory = v2;
};

// Line 358: range 0000000014282F54-0000000014282FB1
void __cdecl data::ConfigCoopActionNode::ConfigCoopActionNode(data::ConfigCoopActionNode *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigCoopBaseNode::ConfigCoopBaseNode(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCoopActionNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCoopBaseNode = v2;
  std::vector<data::ConfigCoopAction>::vector(&this->action_list);
};

// Line 358: range 000000001428336C-0000000014283402
void __cdecl data::ConfigCoopActionNode::ConfigCoopActionNode(
        data::ConfigCoopActionNode *const this,
        const data::ConfigCoopActionNode *a2)
{
  int (**v2)(...); // rdx

  data::ConfigCoopBaseNode::ConfigCoopBaseNode(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCoopActionNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigCoopBaseNode = v2;
  std::vector<data::ConfigCoopAction>::vector(&this->action_list, &a2->action_list);
};

// Line 365: range 00000000142A137A-00000000142A13D7
void __cdecl data::ConfigCoopActionNode::~ConfigCoopActionNode(data::ConfigCoopActionNode *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCoopActionNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCoopBaseNode = v2;
  std::vector<data::ConfigCoopAction>::~vector(&this->action_list);
  data::ConfigCoopBaseNode::~ConfigCoopBaseNode(this);
};

// Line 365: range 00000000142A13D8-00000000142A1402
void __cdecl data::ConfigCoopActionNode::~ConfigCoopActionNode(data::ConfigCoopActionNode *const this)
{
  data::ConfigCoopActionNode::~ConfigCoopActionNode(this);
  operator delete(this, 0x58uLL);
};

// Line 370: range 0000000013BCCFE0-0000000013BCCFF0
const char *__cdecl data::ConfigCoopActionNode::getTypeName(const data::ConfigCoopActionNode *const this)
{
  return "ConfigCoopActionNode";
};

// Line 371: range 0000000013BCCFF2-0000000013BCD18E
int32_t __cdecl data::ConfigCoopActionNode::getHashNum(const data::ConfigCoopActionNode *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigCoopActionNode::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigCoopActionNode",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 387: range 00000000142836EC-000000001428372D
void __cdecl data::ConfigCoopActionNodeFactory::ConfigCoopActionNodeFactory(
        data::ConfigCoopActionNodeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCoopActionNodeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCoopActionNodeFactory = v2;
};

// Line 395: range 0000000014283A36-0000000014283AC9
void __cdecl data::ConfigCoopEndNode::ConfigCoopEndNode(data::ConfigCoopEndNode *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigCoopBaseNode::ConfigCoopBaseNode((data::ConfigCoopBaseNode *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCoopEndNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCoopBaseNode = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->save_point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->save_point_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->save_point_id, (((_BYTE)this + 60) & 7u) + 3);
  }
  this->save_point_id = 0;
};

// Line 395: range 0000000014283ECE-0000000014283FAB
void __cdecl data::ConfigCoopEndNode::ConfigCoopEndNode(
        data::ConfigCoopEndNode *const this,
        const data::ConfigCoopEndNode *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t save_point_id; // ecx
  char v5; // dl

  data::ConfigCoopBaseNode::ConfigCoopBaseNode(
    (data::ConfigCoopBaseNode *const)this,
    (const data::ConfigCoopBaseNode *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCoopEndNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigCoopBaseNode = v2;
  v3 = (((_BYTE)a2 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->save_point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->save_point_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->save_point_id);
  }
  save_point_id = a2->save_point_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->save_point_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->save_point_id, v3);
  }
  this->save_point_id = save_point_id;
};

// Line 402: range 00000000142A1300-00000000142A134D
void __cdecl data::ConfigCoopEndNode::~ConfigCoopEndNode(data::ConfigCoopEndNode *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCoopEndNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCoopBaseNode = v2;
  data::ConfigCoopBaseNode::~ConfigCoopBaseNode((data::ConfigCoopBaseNode *const)this);
};

// Line 402: range 00000000142A134E-00000000142A1378
void __cdecl data::ConfigCoopEndNode::~ConfigCoopEndNode(data::ConfigCoopEndNode *const this)
{
  data::ConfigCoopEndNode::~ConfigCoopEndNode(this);
  operator delete(this, 0x40uLL);
};

// Line 407: range 0000000013BCD190-0000000013BCD1A0
const char *__cdecl data::ConfigCoopEndNode::getTypeName(const data::ConfigCoopEndNode *const this)
{
  return "ConfigCoopEndNode";
};

// Line 408: range 0000000013BCD1A2-0000000013BCD33E
int32_t __cdecl data::ConfigCoopEndNode::getHashNum(const data::ConfigCoopEndNode *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigCoopEndNode::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigCoopEndNode",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 424: range 0000000014284294-00000000142842D5
void __cdecl data::ConfigCoopEndNodeFactory::ConfigCoopEndNodeFactory(data::ConfigCoopEndNodeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCoopEndNodeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCoopEndNodeFactory = v2;
};

// Line 470: range 0000000013C16B8C-0000000013C16CA2
void __cdecl data::ConfigCoopInteractionGroup::ConfigCoopInteractionGroup(data::ConfigCoopInteractionGroup *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->id = 0;
  std::unordered_map<unsigned int,std::shared_ptr<data::ConfigCoopBaseNode>>::unordered_map(&this->coop_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->start_node_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_node_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_node_id, v1);
  }
  this->start_node_id = 0;
  v2 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->fail_node_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fail_node_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fail_node_id, v2);
  }
  this->fail_node_id = 0;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 470: range 00000000141EE1D6-00000000141EE3DE
void __cdecl data::ConfigCoopInteractionGroup::ConfigCoopInteractionGroup(
        data::ConfigCoopInteractionGroup *const this,
        const data::ConfigCoopInteractionGroup *a2)
{
  uint32_t id; // ecx
  char v3; // al
  data::CoopGroupMap *p_coop_map; // rsi
  uint32_t start_node_id; // ecx
  char v6; // al
  __int64 v7; // rsi
  uint32_t fail_node_id; // ecx
  char v9; // dl
  bool is_json_loaded; // cl
  char v11; // al
  const data::ConfigCoopInteractionGroup *v12; // [rsp+0h] [rbp-10h]

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
  p_coop_map = &v12->coop_map;
  std::unordered_map<unsigned int,std::shared_ptr<data::ConfigCoopBaseNode>>::unordered_map(
    &this->coop_map,
    &v12->coop_map);
  if ( *(_BYTE *)(((unsigned __int64)&v12->start_node_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v12->start_node_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v12->start_node_id);
  }
  start_node_id = v12->start_node_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->start_node_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_coop_map) = v6 != 0;
    __asan_report_store4(&this->start_node_id, p_coop_map);
  }
  this->start_node_id = start_node_id;
  v7 = (((_BYTE)v12 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v12->fail_node_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v12 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v12->fail_node_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v12->fail_node_id);
  }
  fail_node_id = v12->fail_node_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->fail_node_id >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v9 != 0;
  if ( v9 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v9 )
    __asan_report_store4(&this->fail_node_id, v7);
  this->fail_node_id = fail_node_id;
  if ( *(char *)(((unsigned __int64)&v12->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v12->is_json_loaded, v7, &v12->is_json_loaded);
  is_json_loaded = v12->is_json_loaded;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v11 < 0 )
  {
    LOBYTE(v7) = v11 != 0;
    __asan_report_store1(&this->is_json_loaded, v7, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 470: range 000000000F98C31A-000000000F98C338
void __cdecl data::ConfigCoopInteractionGroup::~ConfigCoopInteractionGroup(
        data::ConfigCoopInteractionGroup *const this)
{
  std::unordered_map<unsigned int,std::shared_ptr<data::ConfigCoopBaseNode>>::~unordered_map(&this->coop_map);
};

// Line 597: range 000000000F7884DA-000000000F7886D0
void __cdecl data::ConfigMainCoopGroup::ConfigMainCoopGroup(data::ConfigMainCoopGroup *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  std::unordered_map<unsigned int,data::ConfigCoopInteractionGroup>::unordered_map(&this->coop_interaction_map);
  std::unordered_map<unsigned int,data::CoopSubStartPoint>::unordered_map(&this->sub_start_point_map);
  std::unordered_map<unsigned int,data::CoopSavePoint>::unordered_map(&this->save_point_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->confidence_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->confidence_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->confidence_value, v1);
  }
  this->confidence_value = 0;
  v2 = (((_BYTE)this - 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_confidence_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_confidence_value >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_confidence_value, v2);
  }
  this->max_confidence_value = 0;
  std::unordered_map<data::CoopTemperamentType,data::CoopTemperament>::unordered_map(&this->temperament_map);
  if ( *(char *)(((unsigned __int64)&this->use_confidence >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->use_confidence, v2, &this->use_confidence);
  this->use_confidence = 1;
  v3 = ((_BYTE)this - 23) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->use_temperament >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->use_temperament >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->use_temperament, v3, v4);
  this->use_temperament = 1;
  std::unordered_map<unsigned int,data::CoopTempValue>::unordered_map(&this->coop_temp_value_map);
  if ( *(char *)(((unsigned __int64)&this->close_auto_fail >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->close_auto_fail, v3, &this->close_auto_fail);
  this->close_auto_fail = 0;
  v5 = ((_BYTE)this + 41) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_json_loaded, v5, v6);
  this->is_json_loaded = 0;
};

// Line 597: range 000000000F7886D2-000000000F788730
void __cdecl data::ConfigMainCoopGroup::~ConfigMainCoopGroup(data::ConfigMainCoopGroup *const this)
{
  std::unordered_map<unsigned int,data::CoopTempValue>::~unordered_map(&this->coop_temp_value_map);
  std::unordered_map<data::CoopTemperamentType,data::CoopTemperament>::~unordered_map(&this->temperament_map);
  std::unordered_map<unsigned int,data::CoopSavePoint>::~unordered_map(&this->save_point_map);
  std::unordered_map<unsigned int,data::CoopSubStartPoint>::~unordered_map(&this->sub_start_point_map);
  std::unordered_map<unsigned int,data::ConfigCoopInteractionGroup>::~unordered_map(&this->coop_interaction_map);
};
