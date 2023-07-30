// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/actions/do_pass_node.h

// Line 26: range 000000000D950A3E-000000000D950A9E
void __cdecl ZN2BT10DoPassNodeCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
        BT::DoPassNode *const this,
        const std::string *a2,
        const BT::NodeConfigure *a3)
{
  int (**v3)(...); // rdx

  ZN2BT14ActionNodeBaseCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    this,
    a2,
    a3);
  v3 = (int (**)(...))(&`vtable for'BT::DoPassNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v3;
};

// Line 27: range 000000000E0BFAB8-000000000E0BFB05
void __cdecl BT::DoPassNode::~DoPassNode(BT::DoPassNode *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BT::DoPassNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v1;
  BT::ActionNodeBase::~ActionNodeBase(this);
};

// Line 27: range 000000000E0BFB06-000000000E0BFB30
void __cdecl BT::DoPassNode::~DoPassNode(BT::DoPassNode *const this)
{
  BT::DoPassNode::~DoPassNode(this);
  operator delete(this, 0x88uLL);
};
