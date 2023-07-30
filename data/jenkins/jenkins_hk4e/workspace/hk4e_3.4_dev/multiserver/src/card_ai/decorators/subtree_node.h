// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/decorators/subtree_node.h

// Line 25: range 000000000D94FE38-000000000D94FE98
void __cdecl ZN2BT11SubtreeNodeCI2NS_8TreeNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
        BT::SubtreeNode *const this,
        const std::string *a2,
        const BT::NodeConfigure *a3)
{
  int (**v3)(...); // rdx

  ZN2BT13DecoratorNodeCI2NS_8TreeNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    this,
    a2,
    a3);
  v3 = (int (**)(...))(&`vtable for'BT::SubtreeNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v3;
};

// Line 27: range 000000000E2D5FA8-000000000E2D5FF5
void __cdecl BT::SubtreeNode::~SubtreeNode(BT::SubtreeNode *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BT::SubtreeNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v1;
  BT::DecoratorNode::~DecoratorNode(this);
};

// Line 27: range 000000000E2D5FF6-000000000E2D6020
void __cdecl BT::SubtreeNode::~SubtreeNode(BT::SubtreeNode *const this)
{
  BT::SubtreeNode::~SubtreeNode(this);
  operator delete(this, 0x98uLL);
};

// Line 230: range 000000000E1D32A2-000000000E1D32B0
BT::NodeType __cdecl BT::SubtreeNode::type(const BT::SubtreeNode *const this)
{
  return 5;
};
