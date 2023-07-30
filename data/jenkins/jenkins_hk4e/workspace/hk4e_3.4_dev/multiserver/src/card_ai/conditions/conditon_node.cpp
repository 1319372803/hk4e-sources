// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/conditions/conditon_node.cpp

// Line 20: range 000000000DE88108-000000000DE88194
void __cdecl BT::SimpleConditionNode::SimpleConditionNode(
        BT::SimpleConditionNode *const this,
        const std::string *name,
        const BT::NodeConfigure *config,
        BT::SimpleConditionNode::TickFunctor *p_tick_functor)
{
  int (**v4)(...); // rdx
  std::function<BT::NodeStatus(BT::TreeNode&)> *v5; // rax

  ZN2BT13ConditionNodeCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    this,
    name,
    config);
  v4 = (int (**)(...))(&`vtable for'BT::SimpleConditionNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v4;
  v5 = std::move<std::function<BT::NodeStatus ()(BT::TreeNode &)> &>(p_tick_functor);
  std::function<BT::NodeStatus ()(BT::TreeNode &)>::function(&this->tick_functor_, v5);
};

// Line 26: range 000000000DE88196-000000000DE88480
BT::NodeStatus __cdecl BT::SimpleConditionNode::tick(BT::SimpleConditionNode *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  BT::NodeStatus result; // eax
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r12
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-B0h] BYREF
  std::string val; // [rsp+30h] [rbp-90h] BYREF
  char v12[112]; // [rsp+50h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 15 child_status:29";
  *(_QWORD *)(v1 + 16) = BT::SimpleConditionNode::tick;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  if ( std::function<BT::NodeStatus ()(BT::TreeNode &)>::operator bool(&this->tick_functor_) )
  {
    *(_DWORD *)(v1 + 32) = std::function<BT::NodeStatus ()(BT::TreeNode &)>::operator()(&this->tick_functor_, this);
    if ( *(_DWORD *)(v1 + 32) == 3 || *(_DWORD *)(v1 + 32) == 2 )
    {
      result = *(_DWORD *)(v1 + 32);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_ai/conditions/conditon_node.cpp",
        "tick",
        36);
      v5 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             &v10,
             (const char (*)[26])"SimpleConditionNode name:");
      BT::TreeNode::getName[abi:cxx11](&val, this);
      v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &val);
      v7 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
             v6,
             (const char (*)[23])" tick_functor_ result:");
      common::milog::MiLogStream::operator<<<BT::NodeStatus,(BT::NodeStatus*)0>(v7, (const BT::NodeStatus *)(v1 + 32));
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v10);
      result = FAILURE;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/conditions/conditon_node.cpp",
      "tick",
      42);
    v8 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v10,
           (const char (*)[26])"SimpleConditionNode name:");
    BT::TreeNode::getName[abi:cxx11](&val, this);
    v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &val);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      v9,
      (const char (*)[28])" tick_functor_ is not valid");
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = FAILURE;
  }
  if ( v12 == (char *)v1 )
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
