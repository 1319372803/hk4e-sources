// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/actions/action_node.h

// Line 26: range 000000000D94FFB0-000000000D950010
void __cdecl ZN2BT14ActionNodeBaseCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
        BT::ActionNodeBase *const this,
        const std::string *a2,
        const BT::NodeConfigure *a3)
{
  int (**v3)(...); // rdx

  BT::LeafNode::LeafNode(this, a2, a3);
  v3 = (int (**)(...))(&`vtable for'BT::ActionNodeBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v3;
};

// Line 27: range 000000000D950012-000000000D95005F
void __cdecl BT::ActionNodeBase::~ActionNodeBase(BT::ActionNodeBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BT::ActionNodeBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v1;
  BT::LeafNode::~LeafNode(this);
};

// Line 27: range 000000000D950060-000000000D95008A
void __cdecl BT::ActionNodeBase::~ActionNodeBase(BT::ActionNodeBase *const this)
{
  BT::ActionNodeBase::~ActionNodeBase(this);
  operator delete(this, 0x88uLL);
};

// Line 29: range 000000000D82A1A0-000000000D82A1AE
BT::NodeType __cdecl BT::ActionNodeBase::type(const BT::ActionNodeBase *const this)
{
  return 1;
};

// Line 34: range 000000000D82A1B0-000000000D82A1CF
void __cdecl BT::ActionNodeBase::stop(BT::ActionNodeBase *const this)
{
  BT::TreeNode::setStatus(this, IDLE);
};

// Line 47: range 000000000E0BFE88-000000000E0BFEE7
void __cdecl BT::SimpleActionNode::~SimpleActionNode(BT::SimpleActionNode *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BT::SimpleActionNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v1;
  std::function<BT::NodeStatus ()(BT::TreeNode const&)>::~function(&this->tick_functor_);
  BT::ActionNodeBase::~ActionNodeBase(this);
};

// Line 47: range 000000000E0BFEE8-000000000E0BFF12
void __cdecl BT::SimpleActionNode::~SimpleActionNode(BT::SimpleActionNode *const this)
{
  BT::SimpleActionNode::~SimpleActionNode(this);
  operator delete(this, 0xA8uLL);
};
