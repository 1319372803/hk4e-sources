// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/decorators/force_success_node.h

// Line 24: range 000000000D94FD3A-000000000D94FD9A
void __cdecl ZN2BT16ForceSuccessNodeCI2NS_8TreeNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
        BT::ForceSuccessNode *const this,
        const std::string *a2,
        const BT::NodeConfigure *a3)
{
  int (**v3)(...); // rdx

  ZN2BT13DecoratorNodeCI2NS_8TreeNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    this,
    a2,
    a3);
  v3 = (int (**)(...))(&`vtable for'BT::ForceSuccessNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v3;
};

// Line 26: range 000000000E0BF556-000000000E0BF5A3
void __cdecl BT::ForceSuccessNode::~ForceSuccessNode(BT::ForceSuccessNode *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BT::ForceSuccessNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v1;
  BT::DecoratorNode::~DecoratorNode(this);
};

// Line 26: range 000000000E0BF5A4-000000000E0BF5CE
void __cdecl BT::ForceSuccessNode::~ForceSuccessNode(BT::ForceSuccessNode *const this)
{
  BT::ForceSuccessNode::~ForceSuccessNode(this);
  operator delete(this, 0x98uLL);
};
