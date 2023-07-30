// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/tree_node.h

// Line 55: range 000000000E1D43A4-000000000E1D4421
void __cdecl BT::NodeConfigure::NodeConfigure(BT::NodeConfigure *const this)
{
  std::weak_ptr<BT::Blackboard>::weak_ptr(&this->blackboard_wtr);
  std::vector<std::string>::vector(&this->data_vec);
  std::shared_ptr<BTNodeConfigBase>::shared_ptr(&this->node_config_ptr, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->guid);
  }
  this->guid = 0;
};

// Line 55: range 000000000D839288-000000000D83937B
void __cdecl BT::NodeConfigure::NodeConfigure(BT::NodeConfigure *const this, const BT::NodeConfigure *a2)
{
  uint32_t guid; // ecx

  std::weak_ptr<BT::Blackboard>::weak_ptr(&this->blackboard_wtr, &a2->blackboard_wtr);
  std::vector<std::string>::vector(&this->data_vec, &a2->data_vec);
  std::shared_ptr<BTNodeConfigBase>::shared_ptr(&this->node_config_ptr, &a2->node_config_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->guid);
  }
  guid = a2->guid;
  if ( *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->guid);
  }
  this->guid = guid;
};

// Line 55: range 000000000D82A064-000000000D82A09E
void __cdecl BT::NodeConfigure::~NodeConfigure(BT::NodeConfigure *const this)
{
  std::shared_ptr<BTNodeConfigBase>::~shared_ptr(&this->node_config_ptr);
  std::vector<std::string>::~vector(&this->data_vec);
  std::weak_ptr<BT::Blackboard>::~weak_ptr(&this->blackboard_wtr);
};

// Line 65: range 000000000D829EEC-000000000D829F36
BT::BlackboardPtr __cdecl BT::NodeConfigure::getBlackBoard(const BT::NodeConfigure *const this)
{
  __int64 v1; // rsi
  BT::BlackboardPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = std::weak_ptr<BT::Blackboard>::lock(&this->blackboard_wtr);
  result._M_ptr = (std::__shared_ptr<BT::Blackboard,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 75: range 000000000DF37546-000000000DF37572
BTNodeConfigBasePtr __cdecl BT::NodeConfigure::getNodeConfig(const BT::NodeConfigure *const this)
{
  __int64 v1; // rsi
  BTNodeConfigBasePtr result; // rax

  std::shared_ptr<BTNodeConfigBase>::shared_ptr(
    (std::shared_ptr<BTNodeConfigBase> *const)this,
    (const std::shared_ptr<BTNodeConfigBase> *)(v1 + 40));
  result._M_ptr = (std::__shared_ptr<BTNodeConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 93: range 000000000D82A0A0-000000000D82A111
void __cdecl BT::TreeNode::~TreeNode(BT::TreeNode *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BT::TreeNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v1;
  BT::NodeConfigure::~NodeConfigure(&this->configure_);
  std::string::~string((void *)&this->name_);
  std::enable_shared_from_this<BT::TreeNode>::~enable_shared_from_this(&this->std::enable_shared_from_this<BT::TreeNode>);
};

// Line 93: range 000000000D82A112-000000000D82A13C
void __cdecl BT::TreeNode::~TreeNode(BT::TreeNode *const this)
{
  BT::TreeNode::~TreeNode(this);
  operator delete(this, 0x88uLL);
};

// Line 110: range 000000000D829FE8-000000000D82A014
std::string *__cdecl BT::TreeNode::getName[abi:cxx11](std::string *retstr, const BT::TreeNode *const this)
{
  std::string::basic_string(retstr, &this->name_);
  return retstr;
};

// Line 116: range 000000000DF4A84C-000000000DF4AA37
bool __cdecl BT::TreeNode::getData<BT::BlackboardInnerPhaseType>(
        const BT::TreeNode *const this,
        const std::string *key,
        BT::BlackboardInnerPhaseType *result)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  bool v6; // r15
  std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rcx
  bool v8; // al
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-90h] BYREF
  char v11[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 18 blackboard_ptr:118";
  *(_QWORD *)(v3 + 16) = BT::TreeNode::getData<BT::BlackboardInnerPhaseType>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  BT::TreeNode::getConfig(this);
  BT::NodeConfigure::getBlackBoard((const BT::NodeConfigure *const)(v3 + 32));
  if ( std::operator==<BT::Blackboard>((const std::shared_ptr<BT::Blackboard> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/tree_node.h",
      "getData",
      121);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v10, (const char (*)[23])"blackboard_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v10);
    v6 = 0;
  }
  else
  {
    v7 = std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v6 = BT::Blackboard::get<BT::BlackboardInnerPhaseType>(v7, key, result);
  }
  std::shared_ptr<BT::Blackboard>::~shared_ptr((std::shared_ptr<BT::Blackboard> *const)(v3 + 32));
  v8 = v6;
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v8;
};

// Line 116: range 000000000DF4AE8A-000000000DF4B075
bool __cdecl BT::TreeNode::getData<int>(const BT::TreeNode *const this, const std::string *key, int *result)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  bool v6; // r15
  std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rcx
  bool v8; // al
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-90h] BYREF
  char v11[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 18 blackboard_ptr:118";
  *(_QWORD *)(v3 + 16) = BT::TreeNode::getData<int>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  BT::TreeNode::getConfig(this);
  BT::NodeConfigure::getBlackBoard((const BT::NodeConfigure *const)(v3 + 32));
  if ( std::operator==<BT::Blackboard>((const std::shared_ptr<BT::Blackboard> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/tree_node.h",
      "getData",
      121);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v10, (const char (*)[23])"blackboard_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v10);
    v6 = 0;
  }
  else
  {
    v7 = std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::Blackboard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v6 = BT::Blackboard::get<int>(v7, key, result);
  }
  std::shared_ptr<BT::Blackboard>::~shared_ptr((std::shared_ptr<BT::Blackboard> *const)(v3 + 32));
  v8 = v6;
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v8;
};

// Line 129: range 000000000D829FDC-000000000D829FE6
void __cdecl BT::TreeNode::stop(BT::TreeNode *const this)
{
  ;
};

// Line 144: range 000000000D82A016-000000000D82A027
const BT::NodeConfigure *__cdecl BT::TreeNode::getConfig(const BT::TreeNode *const this)
{
  return &this->configure_;
};
