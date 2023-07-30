// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/controls/switch_node.h

// Line 26: range 000000000D94FBC8-000000000D94FC28
void __cdecl ZN2BT10SwitchNodeCI2NS_8TreeNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
        BT::SwitchNode *const this,
        const std::string *a2,
        const BT::NodeConfigure *a3)
{
  int (**v3)(...); // rdx

  ZN2BT11ControlNodeCI2NS_8TreeNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    this,
    a2,
    a3);
  v3 = (int (**)(...))(&`vtable for'BT::SwitchNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v3;
};

// Line 27: range 000000000E0BF65C-000000000E0BF6A9
void __cdecl BT::SwitchNode::~SwitchNode(BT::SwitchNode *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BT::SwitchNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v1;
  BT::ControlNode::~ControlNode(this);
};

// Line 27: range 000000000E0BF6AA-000000000E0BF6D4
void __cdecl BT::SwitchNode::~SwitchNode(BT::SwitchNode *const this)
{
  BT::SwitchNode::~SwitchNode(this);
  operator delete(this, 0xA0uLL);
};
