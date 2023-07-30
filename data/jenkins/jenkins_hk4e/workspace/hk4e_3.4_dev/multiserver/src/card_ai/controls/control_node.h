// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/controls/control_node.h

// Line 26: range 000000000D94F8D4-000000000D94F946
void __cdecl ZN2BT11ControlNodeCI2NS_8TreeNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
        BT::ControlNode *const this,
        const std::string *a2,
        const BT::NodeConfigure *a3)
{
  int (**v3)(...); // rdx

  BT::TreeNode::TreeNode(this, a2, a3);
  v3 = (int (**)(...))(&`vtable for'BT::ControlNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v3;
  std::vector<std::weak_ptr<BT::TreeNode>>::vector(&this->children_wtr_vec_);
};

// Line 28: range 000000000E0BF5D0-000000000E0BF62F
void __cdecl BT::ControlNode::~ControlNode(BT::ControlNode *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BT::ControlNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v1;
  std::vector<std::weak_ptr<BT::TreeNode>>::~vector(&this->children_wtr_vec_);
  BT::TreeNode::~TreeNode(this);
};

// Line 28: range 000000000E0BF630-000000000E0BF65A
void __cdecl BT::ControlNode::~ControlNode(BT::ControlNode *const this)
{
  BT::ControlNode::~ControlNode(this);
  operator delete(this, 0xA0uLL);
};

// Line 40: range 000000000DF375A2-000000000DF375B0
BT::NodeType __cdecl BT::ControlNode::type(const BT::ControlNode *const this)
{
  return 3;
};
