// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/controls/sequence_node.h

// Line 25: range 000000000D94F948-000000000D94F9EB
void __cdecl ZN2BT12SequenceNodeCI2NS_8TreeNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
        BT::SequenceNode *const this,
        const std::string *a2,
        const BT::NodeConfigure *a3)
{
  int (**v3)(...); // rdx

  ZN2BT11ControlNodeCI2NS_8TreeNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    this,
    a2,
    a3);
  v3 = (int (**)(...))(&`vtable for'BT::SequenceNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->current_child_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->current_child_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->current_child_index_);
  }
  this->current_child_index_ = 0;
};

// Line 27: range 000000000E0BF6D6-000000000E0BF723
void __cdecl BT::SequenceNode::~SequenceNode(BT::SequenceNode *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BT::SequenceNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v1;
  BT::ControlNode::~ControlNode(this);
};

// Line 27: range 000000000E0BF724-000000000E0BF74E
void __cdecl BT::SequenceNode::~SequenceNode(BT::SequenceNode *const this)
{
  BT::SequenceNode::~SequenceNode(this);
  operator delete(this, 0xA8uLL);
};
