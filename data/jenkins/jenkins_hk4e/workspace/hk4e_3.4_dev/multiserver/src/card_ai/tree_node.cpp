// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/tree_node.cpp

// Line 23: range 000000000D7D2C25-000000000D7D2CFE
std::ostream *__cdecl BT::operator<<(std::ostream *os, const BT::NodeStatus *node_status)
{
  BT::NodeStatus v2; // eax

  if ( *(_BYTE *)(((unsigned __int64)node_status >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)node_status & 7) + 3) >= *(_BYTE *)(((unsigned __int64)node_status >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(node_status);
  }
  v2 = *node_status;
  if ( *node_status == FAILURE )
  {
    std::operator<<<std::char_traits<char>>(os, "FAILURE");
    return os;
  }
  if ( v2 > FAILURE )
    goto LABEL_14;
  if ( v2 == SUCCESS )
  {
    std::operator<<<std::char_traits<char>>(os, "SUCCESS");
    return os;
  }
  if ( v2 > SUCCESS )
  {
LABEL_14:
    std::operator<<<std::char_traits<char>>(os, "UNKNOWNSTATUS");
    return os;
  }
  if ( v2 )
  {
    if ( v2 != RUNNING )
      goto LABEL_14;
    std::operator<<<std::char_traits<char>>(os, "RUNNING");
  }
  else
  {
    std::operator<<<std::char_traits<char>>(os, "IDLE");
  }
  return os;
};

// Line 46: range 000000000D7D2CFF-000000000D7D2DF9
std::ostream *__cdecl BT::operator<<(std::ostream *os, const BT::NodeType *node_type)
{
  if ( *(_BYTE *)(((unsigned __int64)node_type >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)node_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)node_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(node_type);
  }
  switch ( *node_type )
  {
    case ACTION_0:
      std::operator<<<std::char_traits<char>>(os, "Action");
      break;
    case CONDITION_0:
      std::operator<<<std::char_traits<char>>(os, "Condtion");
      break;
    case CONTROL:
      std::operator<<<std::char_traits<char>>(os, "Control");
      break;
    case DECORATOR_0:
      std::operator<<<std::char_traits<char>>(os, "Decorator");
      break;
    case SUBTREE_0:
      std::operator<<<std::char_traits<char>>(os, "Subtree");
      break;
    default:
      std::operator<<<std::char_traits<char>>(os, "Undefined");
      break;
  }
  return os;
};

// Line 72: range 000000000D7D2DFA-000000000D7D2F2D
std::ostream *__cdecl BT::operator<<(std::ostream *os, const BT::TreeNode *node)
{
  __int64 v2; // rbx
  uint16_t v3; // ax
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  std::ostream *v7; // rbx
  unsigned int (__fastcall **v8)(const BT::TreeNode *); // rax
  std::ostream *v9; // rax
  BT::NodeType node_type; // [rsp+1Ch] [rbp-34h] BYREF
  std::string v12; // [rsp+20h] [rbp-30h] BYREF

  v2 = std::operator<<<std::char_traits<char>>(os, "[id:");
  v3 = BT::TreeNode::UID(node);
  v4 = std::ostream::operator<<(v2, v3);
  v5 = std::operator<<<std::char_traits<char>>(v4, &off_1BA25C00);
  BT::TreeNode::getName[abi:cxx11](&v12, node);
  v6 = std::operator<<<char>(v5, &v12);
  v7 = (std::ostream *)std::operator<<<std::char_traits<char>>(v6, "|");
  if ( *(_BYTE *)(((unsigned __int64)node >> 3) + 0x7FFF8000) )
    __asan_report_load8(node);
  v8 = (unsigned int (__fastcall **)(const BT::TreeNode *))(node->_vptr_TreeNode + 3);
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    __asan_report_load8(node->_vptr_TreeNode + 3);
  node_type = (*v8)(node);
  v9 = BT::operator<<(v7, &node_type);
  std::operator<<<std::char_traits<char>>(v9, "]");
  std::string::~string(&v12);
  return os;
};

// Line 77: range 000000000D7D2F2E-000000000D7D30A7
void __cdecl BT::TreeNode::TreeNode(BT::TreeNode *const this, const std::string *name, const BT::NodeConfigure *config)
{
  int (**v3)(...); // rdx
  uint32_t guid; // ecx

  std::enable_shared_from_this<BT::TreeNode>::enable_shared_from_this(&this->std::enable_shared_from_this<BT::TreeNode>);
  v3 = (int (**)(...))(&`vtable for'BT::TreeNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v3;
  std::string::basic_string(&this->name_, name);
  if ( *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->status_);
  }
  this->status_ = IDLE;
  BT::NodeConfigure::NodeConfigure(&this->configure_, config);
  if ( *(_BYTE *)(((unsigned __int64)&config->guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config->guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config->guid);
  }
  guid = config->guid;
  if ( *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->guid_);
  }
  this->guid_ = guid;
};

// Line 83: range 000000000D7D30A8-000000000D7D3124
BT::NodeStatus __cdecl BT::TreeNode::executeTick(BT::TreeNode *const this)
{
  __int64 (__fastcall **v1)(BT::TreeNode *const); // rax
  BT::NodeStatus status; // [rsp+1Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v1 = (__int64 (__fastcall **)(BT::TreeNode *const))(this->_vptr_TreeNode + 5);
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8(this->_vptr_TreeNode + 5);
  status = (unsigned int)(*v1)(this);
  BT::TreeNode::setStatus(this, status);
  return status;
};

// Line 90: range 000000000D7D3126-000000000D7D330B
void __cdecl BT::TreeNode::setStatus(BT::TreeNode *const this, BT::NodeStatus new_status)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-80h] BYREF
  char v11[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 prev_status:91";
  *(_QWORD *)(v2 + 16) = BT::TreeNode::setStatus;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->status_);
  }
  *(_DWORD *)(v2 + 32) = this->status_;
  this->status_ = new_status;
  if ( new_status != *(_DWORD *)(v2 + 32) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_ai/tree_node.cpp",
      "setStatus",
      95);
    v5 = common::milog::MiLogStream::operator<<<BT::TreeNode,(BT::TreeNode*)0>(&v10, this);
    v6 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v5, (const char (*)[4])off_1BA25CE0);
    v7 = common::milog::MiLogStream::operator<<<BT::NodeStatus,(BT::NodeStatus*)0>(
           v6,
           (const BT::NodeStatus *)(v2 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v7, (const char (*)[3])"->");
    v9 = common::milog::MiLogStream::operator<<<BT::NodeStatus,(BT::NodeStatus*)0>(v8, &this->status_);
    common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v9, (const char (*)[3])"]]");
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 100: range 000000000D7D330C-000000000D7D3356
uint16_t __cdecl BT::TreeNode::UID(const BT::TreeNode *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->guid_);
  }
  return this->guid_;
};

// Line 105: range 000000000D7D3358-000000000D7D339F
BT::NodeStatus __cdecl BT::TreeNode::status(const BT::TreeNode *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->status_);
  }
  return this->status_;
};

// Line 110: range 000000000D7D33A0-000000000D7D33EC
bool __cdecl BT::TreeNode::isStoped(const BT::TreeNode *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->status_);
  }
  return this->status_ == IDLE;
};
