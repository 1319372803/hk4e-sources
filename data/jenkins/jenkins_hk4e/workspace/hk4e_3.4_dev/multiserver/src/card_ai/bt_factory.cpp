// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/bt_factory.cpp

// Line 21: range 000000000D7D12C6-000000000D7D1F89
void __cdecl BT::BehaviorTreeFactory::BehaviorTreeFactory(BT::BehaviorTreeFactory *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-31h] BYREF
  std::string node_name; // [rsp+20h] [rbp-30h] BYREF

  std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::unordered_map(&this->node_register_umap_);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&node_name, "Sequence", &__a);
  BT::BehaviorTreeFactory::registerNode<BT::SequenceNode>(this, &node_name);
  std::string::~string(&node_name);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&node_name, "Selector", &__a);
  BT::BehaviorTreeFactory::registerNode<BT::SelectorNode>(this, &node_name);
  std::string::~string(&node_name);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&node_name, "Switch", &__a);
  BT::BehaviorTreeFactory::registerNode<BT::SwitchNode>(this, &node_name);
  std::string::~string(&node_name);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&node_name, "ForceSuccess", &__a);
  BT::BehaviorTreeFactory::registerNode<BT::ForceSuccessNode>(this, &node_name);
  std::string::~string(&node_name);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&node_name, "Subtree", &__a);
  BT::BehaviorTreeFactory::registerNode<BT::SubtreeNode>(this, &node_name);
  std::string::~string(&node_name);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&node_name, "AssignInt32", &__a);
  BT::BehaviorTreeFactory::registerNode<BT::AssignNode<int>>(this, &node_name);
  std::string::~string(&node_name);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&node_name, "AssignDouble", &__a);
  BT::BehaviorTreeFactory::registerNode<BT::AssignNode<double>>(this, &node_name);
  std::string::~string(&node_name);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&node_name, "AssignStr", &__a);
  BT::BehaviorTreeFactory::registerNode<BT::AssignNode<std::string>>(this, &node_name);
  std::string::~string(&node_name);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&node_name, "AssignInt32Vec", &__a);
  BT::BehaviorTreeFactory::registerNode<BT::AssignNode<std::vector<int>>>(this, &node_name);
  std::string::~string(&node_name);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&node_name, "AssignDoubleVec", &__a);
  BT::BehaviorTreeFactory::registerNode<BT::AssignNode<std::vector<double>>>(this, &node_name);
  std::string::~string(&node_name);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&node_name, "ConditionCheckIsRerollPhase", &__a);
  BT::BehaviorTreeFactory::registerNode<BT::ConditionCheckIsRerollPhase>(this, &node_name);
  std::string::~string(&node_name);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&node_name, "ConditionCheckIsActionPhase", &__a);
  BT::BehaviorTreeFactory::registerNode<BT::ConditionCheckIsActionPhase>(this, &node_name);
  std::string::~string(&node_name);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&node_name, "ConditionCheckIsSelectOnstageCharacterPhase", &__a);
  BT::BehaviorTreeFactory::registerNode<BT::ConditionCheckIsSelectOnstageCharacterPhase>(this, &node_name);
  std::string::~string(&node_name);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&node_name, "ConditionCheckIsDrawPhase", &__a);
  BT::BehaviorTreeFactory::registerNode<BT::ConditionCheckIsDrawPhase>(this, &node_name);
  std::string::~string(&node_name);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&node_name, "DoPassNode", &__a);
  BT::BehaviorTreeFactory::registerNode<BT::DoPassNode>(this, &node_name);
  std::string::~string(&node_name);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&node_name, "ActionReserveDiceByRole", &__a);
  BT::BehaviorTreeFactory::registerNode<BT::ActionReserveDiceByRole>(this, &node_name);
  std::string::~string(&node_name);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&node_name, "ActionReserveDiceByHand", &__a);
  BT::BehaviorTreeFactory::registerNode<BT::ActionReserveDiceByHand>(this, &node_name);
  std::string::~string(&node_name);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&node_name, "ActionRerollDice", &__a);
  BT::BehaviorTreeFactory::registerNode<BT::ActionRerollDice>(this, &node_name);
  std::string::~string(&node_name);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&node_name, "ActionGenCharacterPlan", &__a);
  BT::BehaviorTreeFactory::registerNode<BT::ActionGenCharacterPlan>(this, &node_name);
  std::string::~string(&node_name);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&node_name, "ActionSortAndExecPlan", &__a);
  BT::BehaviorTreeFactory::registerNode<BT::ActionSortAndExecPlan>(this, &node_name);
  std::string::~string(&node_name);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&node_name, "ActionGenRebootPlan", &__a);
  BT::BehaviorTreeFactory::registerNode<BT::ActionGenRebootPlan>(this, &node_name);
  std::string::~string(&node_name);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&node_name, "ActionGenChangeToCanAttackCharacter", &__a);
  BT::BehaviorTreeFactory::registerNode<BT::ActionGenChangeToCanAttackCharacter>(this, &node_name);
  std::string::~string(&node_name);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&node_name, "ActionGenPlayCardPlan", &__a);
  BT::BehaviorTreeFactory::registerNode<BT::ActionGenPlayCardPlan>(this, &node_name);
  std::string::~string(&node_name);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&node_name, "ActionGenChangeCharacterPlan", &__a);
  BT::BehaviorTreeFactory::registerNode<BT::ActionGenChangeCharacterPlan>(this, &node_name);
  std::string::~string(&node_name);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&node_name, "ActionReserveHandCardByTag", &__a);
  BT::BehaviorTreeFactory::registerNode<BT::ActionReserveHandCardByTag>(this, &node_name);
  std::string::~string(&node_name);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&node_name, "ActionRedraw", &__a);
  BT::BehaviorTreeFactory::registerNode<BT::ActionRedraw>(this, &node_name);
  std::string::~string(&node_name);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&node_name, "ActionGenCandidateOnstageCharacter", &__a);
  BT::BehaviorTreeFactory::registerNode<BT::ActionGenCandidateOnstageCharacter>(this, &node_name);
  std::string::~string(&node_name);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&node_name, "ActionSelectOnstage", &__a);
  BT::BehaviorTreeFactory::registerNode<BT::ActionSelectOnstage>(this, &node_name);
  std::string::~string(&node_name);
  std::allocator<char>::~allocator(&__a);
};

// Line 63: range 000000000D7D1FFE-000000000D7D2321
int32_t __cdecl BT::BehaviorTreeFactory::registerSimpleAction(
        BT::BehaviorTreeFactory *const this,
        const std::string *node_name,
        const BT::SimpleActionNode::TickFunctor *tick_functor)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int32_t v8; // r14d
  const char *v9; // rax
  BT::TreeNodeRegisterInfo *v10; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+2Fh] [rbp-F1h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-F0h] BYREF
  char v15[208]; // [rsp+50h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 96 16 register_info:69";
  *(_QWORD *)(v3 + 16) = BT::BehaviorTreeFactory::registerSimpleAction;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450896) = -202116109;
  if ( std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::count(&this->node_register_umap_, node_name) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/bt_factory.cpp",
      "registerSimpleAction",
      66);
    v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v14, (const char (*)[11])"node name:");
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, node_name);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v7, (const char (*)[15])" register dup!");
    common::milog::MiLogStream::~MiLogStream(&v14);
    v8 = -1;
  }
  else
  {
    std::string::basic_string(v3 + 32, node_name);
    std::function<BT::NodeStatus ()(BT::TreeNode const&)>::function(
      (std::function<BT::NodeStatus(const BT::TreeNode&)> *const)&v14,
      tick_functor);
    std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)>::function<BT::BehaviorTreeFactory::registerSimpleAction(std::string const&,std::function const&<BT::NodeStatus ()(BT::TreeNode const&)>)::{lambda(std::string const&,BT::NodeConfigure const&)#1},void,void>(
      (std::function<std::shared_ptr<BT::TreeNode>(const std::string&,const BT::NodeConfigure&)> *const)(v3 + 64),
      (BT::BehaviorTreeFactory::registerSimpleAction::<lambda(const string&, const BT::NodeConfigure&)> *)&v14);
    BT::BehaviorTreeFactory::registerSimpleAction(std::string const&,std::function<BT::NodeStatus ()(BT::TreeNode const&)> const&)::{lambda(std::string const&,BT::NodeConfigure const&)#1}::~NodeConfigure((BT::BehaviorTreeFactory::registerSimpleAction::<lambda(const string&, const BT::NodeConfigure&)> *const)&v14);
    std::allocator<char>::allocator(&__a);
    v9 = std::type_info::name((const std::type_info *const)&`typeinfo for'BT::SimpleActionNode);
    std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 96), v9, &__a);
    std::allocator<char>::~allocator(&__a);
    v10 = std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::operator[](&this->node_register_umap_, node_name);
    BT::TreeNodeRegisterInfo::operator=(v10, (const BT::TreeNodeRegisterInfo *)(v3 + 32));
    v8 = 0;
    BT::TreeNodeRegisterInfo::~TreeNodeRegisterInfo((BT::TreeNodeRegisterInfo *const)(v3 + 32));
  }
  result = v8;
  if ( v15 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 72: range 000000000D7D1F8A-000000000D7D1FE0
std::unique_ptr<BT::SimpleActionNode> __cdecl BT::BehaviorTreeFactory::registerSimpleAction(std::string const&,std::function<BT::NodeStatus ()(BT::TreeNode const&)> const&)::{lambda(std::string const&,BT::NodeConfigure const&)#1}::operator()(
        const BT::BehaviorTreeFactory::registerSimpleAction::<lambda(const string&, const BT::NodeConfigure&)> *const __closure,
        const std::string *name,
        const BT::NodeConfigure *config)
{
  const BT::NodeConfigure *v3; // rcx
  const BT::NodeConfigure *v4; // r8
  const std::function<BT::NodeStatus(const BT::TreeNode&)> *v5; // r9
  const std::string *v6; // rcx
  const BT::NodeConfigure *configa; // [rsp+0h] [rbp-20h]

  configa = v3;
  v6 = name;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_store8(__closure);
  std::make_unique<BT::SimpleActionNode,std::string const&,BT::NodeConfigure const&,std::function<BT::NodeStatus ()(BT::TreeNode const&)> const&>(
    (const std::string *)__closure,
    config,
    (const std::function<BT::NodeStatus(const BT::TreeNode&)> *)configa,
    v6,
    v4,
    v5);
  return (std::unique_ptr<BT::SimpleActionNode>)__closure;
};

// Line 72: range 000000000D7DD3AE-000000000D7DD3D3
void __cdecl BT::BehaviorTreeFactory::registerSimpleAction(std::string const&,std::function<BT::NodeStatus ()(BT::TreeNode const&)> const&)::{lambda(std::string const&,BT::NodeConfigure const&)#1}::NodeConfigure(
        BT::BehaviorTreeFactory::registerSimpleAction::<lambda(const string&, const BT::NodeConfigure&)> *const this,
        BT::BehaviorTreeFactory::registerSimpleAction::<lambda(const string&, const BT::NodeConfigure&)> *a2)
{
  std::function<BT::NodeStatus ()(BT::TreeNode const&)>::function(
    (std::function<BT::NodeStatus(const BT::TreeNode&)> *const)&this->__tick_functor,
    &a2->__tick_functor);
};

// Line 72: range 000000000D7DD4C0-000000000D7DD4E5
void __cdecl BT::BehaviorTreeFactory::registerSimpleAction(std::string const&,std::function<BT::NodeStatus ()(BT::TreeNode const&)> const&)::{lambda(std::string const&,BT::NodeConfigure const&)#1}::NodeConfigure(
        BT::BehaviorTreeFactory::registerSimpleAction::<lambda(const string&, const BT::NodeConfigure&)> *const this,
        const BT::BehaviorTreeFactory::registerSimpleAction::<lambda(const string&, const BT::NodeConfigure&)> *a2)
{
  std::function<BT::NodeStatus ()(BT::TreeNode const&)>::function(
    (std::function<BT::NodeStatus(const BT::TreeNode&)> *const)&this->__tick_functor,
    &a2->__tick_functor);
};

// Line 72: range 000000000D7D1FE2-000000000D7D1FFC
void __cdecl BT::BehaviorTreeFactory::registerSimpleAction(std::string const&,std::function<BT::NodeStatus ()(BT::TreeNode const&)> const&)::{lambda(std::string const&,BT::NodeConfigure const&)#1}::~NodeConfigure(
        BT::BehaviorTreeFactory::registerSimpleAction::<lambda(const string&, const BT::NodeConfigure&)> *const this)
{
  std::function<BT::NodeStatus ()(BT::TreeNode const&)>::~function((std::function<BT::NodeStatus(const BT::TreeNode&)> *const)&this->__tick_functor);
};

// Line 83: range 000000000D7D2322-000000000D7D25F3
BT::TreeNodePtr __cdecl BT::BehaviorTreeFactory::createNode(
        const BT::BehaviorTreeFactory *const this,
        const std::string *node_name,
        const BT::NodeConfigure *config)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  BT::TreeNodePtr result; // rax
  std::__detail::_Node_const_iterator<std::pair<const std::string,BT::TreeNodeRegisterInfo>,false,true>::pointer v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator_base<std::pair<const std::string,BT::TreeNodeRegisterInfo>,true> __y; // [rsp+28h] [rbp-98h] BYREF
  std::function<std::shared_ptr<BT::TreeNode>(const std::string&,const BT::NodeConfigure&)> v14; // [rsp+30h] [rbp-90h] BYREF
  char v15[96]; // [rsp+60h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 5 it:85";
  *(_QWORD *)(v3 + 16) = BT::BehaviorTreeFactory::createNode;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  std::shared_ptr<BT::TreeNode>::shared_ptr((std::shared_ptr<BT::TreeNode> *const)this, 0LL);
  *(std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::const_iterator *)(v3 + 32) = std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::find(
                                                                                             (const std::unordered_map<std::string,BT::TreeNodeRegisterInfo> *const)node_name,
                                                                                             (const std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::key_type *)config);
  __y._M_cur = std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::end((const std::unordered_map<std::string,BT::TreeNodeRegisterInfo> *const)node_name)._M_cur;
  if ( std::__detail::operator==<std::pair<std::string const,BT::TreeNodeRegisterInfo>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,BT::TreeNodeRegisterInfo>,true> *)(v3 + 32),
         &__y) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v14._M_manager,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/bt_factory.cpp",
      "createNode",
      88);
    v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
           (common::milog::MiLogStream *const)&v14._M_manager,
           (const char (*)[11])"node name:");
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)config);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v7, (const char (*)[15])" not register!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v14._M_manager);
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<std::string const,BT::TreeNodeRegisterInfo>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,BT::TreeNodeRegisterInfo>,false,true> *const)(v3 + 32));
    std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)>::operator()(
      &v14,
      (const std::string *)&v9->second.builder,
      config);
    std::shared_ptr<BT::TreeNode>::operator=(
      (std::shared_ptr<BT::TreeNode> *const)this,
      (std::shared_ptr<BT::TreeNode> *)&v14);
    std::shared_ptr<BT::TreeNode>::~shared_ptr((std::shared_ptr<BT::TreeNode> *const)&v14);
    if ( std::operator==<BT::TreeNode>((const std::shared_ptr<BT::TreeNode> *)this, 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v14._M_manager,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_ai/bt_factory.cpp",
        "createNode",
        94);
      v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
              (common::milog::MiLogStream *const)&v14._M_manager,
              (const char (*)[11])"node name:");
      v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)config);
      common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v11, (const char (*)[16])" create failed!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v14._M_manager);
    }
  }
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<BT::TreeNode,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 102: range 000000000D7D25F4-000000000D7D29E4
BT::TreeNodePtr __cdecl BT::BehaviorTreeFactory::createNodeWithinTree(
        const BT::BehaviorTreeFactory *const this,
        const std::string *node_name,
        const BT::NodeConfigure *config,
        const BT::BehaviorTreePtr *tree_ptr)
{
  const std::__shared_ptr_access<BT::BehaviorTree,(__gnu_cxx::_Lock_policy)2,false,false> *v4; // r8
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r13
  BT::TreeNodePtr result; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  std::__detail::_Node_const_iterator<std::pair<const std::string,BT::TreeNodeRegisterInfo>,false,true>::pointer v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  BT::BehaviorTree *v14; // rax
  const std::__shared_ptr_access<BT::BehaviorTree,(__gnu_cxx::_Lock_policy)2,false,false> *tree_ptra; // [rsp+8h] [rbp-D8h]
  std::__detail::_Node_iterator_base<std::pair<const std::string,BT::TreeNodeRegisterInfo>,true> __y; // [rsp+38h] [rbp-A8h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-A0h] BYREF
  char v19[128]; // [rsp+60h] [rbp-80h] BYREF

  tree_ptra = v4;
  v5 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 8 6 it:108 64 16 12 node_ptr:114";
  *(_QWORD *)(v5 + 16) = BT::BehaviorTreeFactory::createNodeWithinTree;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -202178560;
  if ( std::operator==<BT::BehaviorTree>((const std::shared_ptr<BT::BehaviorTree> *)tree_ptra, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_ai/bt_factory.cpp",
      "createNodeWithinTree",
      105);
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      &v18,
      (const char (*)[41])"createNodeWithinTree tree_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v18);
    std::shared_ptr<BT::TreeNode>::shared_ptr((std::shared_ptr<BT::TreeNode> *const)this, 0LL);
  }
  else
  {
    *(std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::const_iterator *)(v5 + 32) = std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::find(
                                                                                               (const std::unordered_map<std::string,BT::TreeNodeRegisterInfo> *const)node_name,
                                                                                               (const std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::key_type *)config);
    __y._M_cur = std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::end((const std::unordered_map<std::string,BT::TreeNodeRegisterInfo> *const)node_name)._M_cur;
    if ( std::__detail::operator==<std::pair<std::string const,BT::TreeNodeRegisterInfo>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,BT::TreeNodeRegisterInfo>,true> *)(v5 + 32),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_ai/bt_factory.cpp",
        "createNodeWithinTree",
        111);
      v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v18, (const char (*)[11])"node name:");
      v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, (const std::string *)config);
      common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v10, (const char (*)[15])" not register!");
      common::milog::MiLogStream::~MiLogStream(&v18);
      std::shared_ptr<BT::TreeNode>::shared_ptr((std::shared_ptr<BT::TreeNode> *const)this, 0LL);
    }
    else
    {
      v11 = std::__detail::_Node_const_iterator<std::pair<std::string const,BT::TreeNodeRegisterInfo>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,BT::TreeNodeRegisterInfo>,false,true> *const)(v5 + 32));
      std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)>::operator()(
        (const std::function<std::shared_ptr<BT::TreeNode>(const std::string&,const BT::NodeConfigure&)> *const)(v5 + 64),
        (const std::string *)&v11->second.builder,
        config);
      if ( std::operator==<BT::TreeNode>((const std::shared_ptr<BT::TreeNode> *)(v5 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_ai/bt_factory.cpp",
          "createNodeWithinTree",
          117);
        v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v18, (const char (*)[11])"node name:");
        v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)config);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v13, (const char (*)[16])" create failed!");
        common::milog::MiLogStream::~MiLogStream(&v18);
        std::shared_ptr<BT::TreeNode>::shared_ptr((std::shared_ptr<BT::TreeNode> *const)this, 0LL);
      }
      else
      {
        v14 = std::__shared_ptr_access<BT::BehaviorTree,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(tree_ptra);
        BT::BehaviorTree::addNode(v14, (const BT::TreeNodePtr *)(v5 + 64));
        std::shared_ptr<BT::TreeNode>::shared_ptr(
          (std::shared_ptr<BT::TreeNode> *const)this,
          (std::shared_ptr<BT::TreeNode> *)(v5 + 64));
      }
      std::shared_ptr<BT::TreeNode>::~shared_ptr((std::shared_ptr<BT::TreeNode> *const)(v5 + 64));
    }
  }
  if ( v19 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<BT::TreeNode,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 125: range 000000000D7D29E6-000000000D7D2BE9
void __cdecl BT::BehaviorTreeFactory::printAllRegisterInfo(const BT::BehaviorTreeFactory *const this)
{
  common::milog::MiLogStream *v1; // rax
  common::milog::MiLogStream *v2; // rbx
  std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::const_iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::const_iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  char *val; // [rsp+28h] [rbp-58h] BYREF
  const std::unordered_map<std::string,BT::TreeNodeRegisterInfo> *__for_range; // [rsp+30h] [rbp-50h]
  const std::pair<const std::string,BT::TreeNodeRegisterInfo> *v7; // [rsp+38h] [rbp-48h]
  std::tuple_element<0,const std::pair<const std::string,BT::TreeNodeRegisterInfo> >::type *node_name; // [rsp+40h] [rbp-40h]
  std::tuple_element<1,const std::pair<const std::string,BT::TreeNodeRegisterInfo> >::type *register_info; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v10; // [rsp+50h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_ai/bt_factory.cpp",
    "printAllRegisterInfo",
    126);
  common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
    &v10,
    (const char (*)[47])"printAllRegisterInfo--------------------------");
  common::milog::MiLogStream::~MiLogStream(&v10);
  __for_range = &this->node_register_umap_;
  __for_begin._M_cur = std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::begin(&this->node_register_umap_)._M_cur;
  __for_end._M_cur = std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::end(&this->node_register_umap_)._M_cur;
  while ( std::__detail::operator!=<std::pair<std::string const,BT::TreeNodeRegisterInfo>,true>(
            &__for_begin,
            &__for_end) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<std::string const,BT::TreeNodeRegisterInfo>,false,true>::operator*(&__for_begin);
    node_name = std::get<0ul,std::string const,BT::TreeNodeRegisterInfo>(v7);
    register_info = (std::tuple_element<1,const std::pair<const std::string,BT::TreeNodeRegisterInfo> >::type *)std::get<1ul,std::string const,BT::TreeNodeRegisterInfo>(v7);
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_ai/bt_factory.cpp",
      "printAllRegisterInfo",
      129);
    v1 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v10, node_name);
    v2 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v1, (const char (*)[5])"----");
    val = (char *)std::string::c_str(&register_info->type_name);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v2, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v10);
    std::__detail::_Node_const_iterator<std::pair<std::string const,BT::TreeNodeRegisterInfo>,false,true>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_ai/bt_factory.cpp",
    "printAllRegisterInfo",
    131);
  common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
    &v10,
    (const char (*)[47])"printAllRegisterInfo--------------------------");
  common::milog::MiLogStream::~MiLogStream(&v10);
};

// Line 135: range 000000000D7D2BEA-000000000D7D2C24
bool __cdecl BT::BehaviorTreeFactory::isRegisterNode(
        const BT::BehaviorTreeFactory *const this,
        const std::string *node_name)
{
  return std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::count(&this->node_register_umap_, node_name) != 0;
};
