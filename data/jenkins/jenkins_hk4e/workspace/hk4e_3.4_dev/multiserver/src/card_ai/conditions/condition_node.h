// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/conditions/condition_node.h

// Line 25: range 000000000D950582-000000000D9505E2
void __cdecl ZN2BT13ConditionNodeCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
        BT::ConditionNode *const this,
        const std::string *a2,
        const BT::NodeConfigure *a3)
{
  int (**v3)(...); // rdx

  BT::LeafNode::LeafNode(this, a2, a3);
  v3 = (int (**)(...))(&`vtable for'BT::ConditionNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v3;
};

// Line 27: range 000000000DF3875A-000000000DF387A7
void __cdecl BT::ConditionNode::~ConditionNode(BT::ConditionNode *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BT::ConditionNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v1;
  BT::LeafNode::~LeafNode(this);
};

// Line 27: range 000000000DF387A8-000000000DF387D2
void __cdecl BT::ConditionNode::~ConditionNode(BT::ConditionNode *const this)
{
  BT::ConditionNode::~ConditionNode(this);
  operator delete(this, 0x88uLL);
};

// Line 29: range 000000000D82A2B4-000000000D82A2C2
BT::NodeType __cdecl BT::ConditionNode::type(const BT::ConditionNode *const this)
{
  return 2;
};

// Line 34: range 000000000D82A2C4-000000000D82A2E3
void __cdecl BT::ConditionNode::stop(BT::ConditionNode *const this)
{
  BT::TreeNode::setStatus(this, IDLE);
};

// Line 48: range 000000000E0BF7CA-000000000E0BF829
void __cdecl BT::SimpleConditionNode::~SimpleConditionNode(BT::SimpleConditionNode *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BT::SimpleConditionNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v1;
  std::function<BT::NodeStatus ()(BT::TreeNode &)>::~function(&this->tick_functor_);
  BT::ConditionNode::~ConditionNode(this);
};

// Line 48: range 000000000E0BF82A-000000000E0BF854
void __cdecl BT::SimpleConditionNode::~SimpleConditionNode(BT::SimpleConditionNode *const this)
{
  BT::SimpleConditionNode::~SimpleConditionNode(this);
  operator delete(this, 0xA8uLL);
};
