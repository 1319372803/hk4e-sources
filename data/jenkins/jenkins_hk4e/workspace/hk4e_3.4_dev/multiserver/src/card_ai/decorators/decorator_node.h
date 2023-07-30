// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/decorators/decorator_node.h

// Line 31: range 000000000D94FCC6-000000000D94FD38
void __cdecl ZN2BT13DecoratorNodeCI2NS_8TreeNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
        BT::DecoratorNode *const this,
        const std::string *a2,
        const BT::NodeConfigure *a3)
{
  int (**v3)(...); // rdx

  BT::TreeNode::TreeNode(this, a2, a3);
  v3 = (int (**)(...))(&`vtable for'BT::DecoratorNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v3;
  std::weak_ptr<BT::TreeNode>::weak_ptr(&this->child_node_wtr_);
};

// Line 32: range 000000000E0BF4CA-000000000E0BF529
void __cdecl BT::DecoratorNode::~DecoratorNode(BT::DecoratorNode *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BT::DecoratorNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v1;
  std::weak_ptr<BT::TreeNode>::~weak_ptr(&this->child_node_wtr_);
  BT::TreeNode::~TreeNode(this);
};

// Line 32: range 000000000E0BF52A-000000000E0BF554
void __cdecl BT::DecoratorNode::~DecoratorNode(BT::DecoratorNode *const this)
{
  BT::DecoratorNode::~DecoratorNode(this);
  operator delete(this, 0x98uLL);
};

// Line 38: range 000000000DF375B2-000000000DF375C0
BT::NodeType __cdecl BT::DecoratorNode::type(const BT::DecoratorNode *const this)
{
  return 4;
};
