// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/decorators/decorator_node.cpp

// Line 20: range 000000000DE8AF82-000000000DE8AFAE
void __cdecl BT::DecoratorNode::setChild(BT::DecoratorNode *const this, const BT::TreeNodePtr *child_ptr)
{
  std::weak_ptr<BT::TreeNode>::operator=<BT::TreeNode>(&this->child_node_wtr_, child_ptr);
};

// Line 25: range 000000000DE8AFB0-000000000DE8B02A
BT::TreeNodePtr __cdecl BT::DecoratorNode::getChild(BT::DecoratorNode *const this)
{
  __int64 v1; // rsi
  BT::TreeNodePtr result; // rax

  if ( std::__weak_ptr<BT::TreeNode,(__gnu_cxx::_Lock_policy)2>::expired((const std::__weak_ptr<BT::TreeNode,(__gnu_cxx::_Lock_policy)2> *const)(v1 + 136)) )
  {
    std::shared_ptr<BT::TreeNode>::shared_ptr((std::shared_ptr<BT::TreeNode> *const)this, 0LL);
  }
  else
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, v1);
    result = std::weak_ptr<BT::TreeNode>::lock((const std::weak_ptr<BT::TreeNode> *const)this);
  }
  result._M_ptr = this;
  return result;
};

// Line 30: range 000000000DE8B02C-000000000DE8B0A6
BT::TreeNodePtr __cdecl BT::DecoratorNode::getChild(const BT::DecoratorNode *const this)
{
  __int64 v1; // rsi
  BT::TreeNodePtr result; // rax

  if ( std::__weak_ptr<BT::TreeNode,(__gnu_cxx::_Lock_policy)2>::expired((const std::__weak_ptr<BT::TreeNode,(__gnu_cxx::_Lock_policy)2> *const)(v1 + 136)) )
  {
    std::shared_ptr<BT::TreeNode>::shared_ptr((std::shared_ptr<BT::TreeNode> *const)this, 0LL);
  }
  else
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, v1);
    result = std::weak_ptr<BT::TreeNode>::lock((const std::weak_ptr<BT::TreeNode> *const)this);
  }
  result._M_ptr = &this->BT::TreeNode;
  return result;
};

// Line 36: range 000000000DE8B0A8-000000000DE8B0D3
void __cdecl BT::DecoratorNode::stop(BT::DecoratorNode *const this)
{
  BT::DecoratorNode::stopChild(this);
  BT::TreeNode::setStatus(this, IDLE);
};

// Line 42: range 000000000DE8B0D4-000000000DE8B313
void __cdecl BT::DecoratorNode::stopChild(BT::DecoratorNode *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  unsigned __int64 v5; // rdx
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-B0h] BYREF
  std::string val; // [rsp+30h] [rbp-90h] BYREF
  char v10[112]; // [rsp+50h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 17 child_node_ptr:43";
  *(_QWORD *)(v1 + 16) = BT::DecoratorNode::stopChild;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  BT::DecoratorNode::getChild((BT::DecoratorNode *const)(v1 + 32));
  if ( std::operator!=<BT::TreeNode>((const std::shared_ptr<BT::TreeNode> *)(v1 + 32), 0LL) )
  {
    v4 = std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v4);
    v5 = (unsigned __int64)(v4->_vptr_TreeNode + 2);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v4->_vptr_TreeNode + 2);
    (*(void (__fastcall **)(std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v5)(v4);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/decorators/decorator_node.cpp",
      "stopChild",
      50);
    v6 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v8, (const char (*)[20])"DecoratorNode name:");
    BT::TreeNode::getName[abi:cxx11](&val, this);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      v7,
      (const char (*)[27])" child_node_ptr is nullptr");
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  std::shared_ptr<BT::TreeNode>::~shared_ptr((std::shared_ptr<BT::TreeNode> *const)(v1 + 32));
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 55: range 000000000DE8B314-000000000DE8B563
BT::NodeStatus __cdecl BT::DecoratorNode::executeTick(BT::DecoratorNode *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  common::milog::MiLogStream *v4; // r14
  common::milog::MiLogStream *v5; // rax
  BT::NodeStatus v6; // r14d
  std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  BT::TreeNode *v8; // rax
  BT::NodeStatus result; // eax
  BT::NodeStatus status; // [rsp+18h] [rbp-B8h]
  BT::NodeStatus child_status; // [rsp+1Ch] [rbp-B4h]
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-B0h] BYREF
  std::string val; // [rsp+40h] [rbp-90h] BYREF
  char v14[112]; // [rsp+60h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 17 child_node_ptr:57";
  *(_QWORD *)(v1 + 16) = BT::DecoratorNode::executeTick;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  status = BT::TreeNode::executeTick(this);
  BT::DecoratorNode::getChild((BT::DecoratorNode *const)(v1 + 32));
  if ( std::operator==<BT::TreeNode>((const std::shared_ptr<BT::TreeNode> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/decorators/decorator_node.cpp",
      "executeTick",
      60);
    v4 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           &v12,
           (const char (*)[20])"DecoratorNode name:");
    BT::TreeNode::getName[abi:cxx11](&val, this);
    v5 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, &val);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      v5,
      (const char (*)[27])" child_node_ptr is nullptr");
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v6 = FAILURE;
  }
  else
  {
    v7 = std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    child_status = BT::TreeNode::status(v7);
    if ( child_status == SUCCESS || child_status == FAILURE )
    {
      v8 = std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BT::TreeNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      BT::TreeNode::setStatus(v8, IDLE);
    }
    v6 = status;
  }
  std::shared_ptr<BT::TreeNode>::~shared_ptr((std::shared_ptr<BT::TreeNode> *const)(v1 + 32));
  result = v6;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
