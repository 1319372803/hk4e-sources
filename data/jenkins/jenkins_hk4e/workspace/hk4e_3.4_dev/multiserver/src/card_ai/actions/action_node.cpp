// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/actions/action_node.cpp

// Line 19: range 000000000DE7FF7E-000000000DE8000A
void __cdecl BT::SimpleActionNode::SimpleActionNode(
        BT::SimpleActionNode *const this,
        const std::string *name,
        const BT::NodeConfigure *config,
        BT::SimpleActionNode::TickFunctor *p_tick_functor)
{
  int (**v4)(...); // rdx
  std::function<BT::NodeStatus(const BT::TreeNode&)> *v5; // rax

  ZN2BT14ActionNodeBaseCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    this,
    name,
    config);
  v4 = (int (**)(...))(&`vtable for'BT::SimpleActionNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v4;
  v5 = std::move<std::function<BT::NodeStatus ()(BT::TreeNode const&)> &>(p_tick_functor);
  std::function<BT::NodeStatus ()(BT::TreeNode const&)>::function(&this->tick_functor_, v5);
};

// Line 26: range 000000000DE8000C-000000000DE80128
BT::NodeStatus __cdecl BT::SimpleActionNode::tick(BT::SimpleActionNode *const this)
{
  common::milog::MiLogStream *v1; // rbx
  BT::NodeStatus status; // [rsp+1Ch] [rbp-54h]
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-50h] BYREF
  std::string val; // [rsp+40h] [rbp-30h] BYREF

  if ( BT::TreeNode::status(this) == IDLE )
    BT::TreeNode::setStatus(this, RUNNING);
  status = std::function<BT::NodeStatus ()(BT::TreeNode const&)>::operator()(&this->tick_functor_, this);
  if ( status != RUNNING )
    return status;
  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/card_ai/actions/action_node.cpp",
    "tick",
    38);
  v1 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
         &v4,
         (const char (*)[51])"Must nerver return running! SimpleActionNode name:");
  BT::TreeNode::getName[abi:cxx11](&val, this);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v1, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v4);
  return 3;
};
