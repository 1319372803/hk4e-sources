// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/leaf_node.h

// Line 25: range 000000000D82A13E-000000000D82A19E
void __cdecl BT::LeafNode::LeafNode(BT::LeafNode *const this, const std::string *name, const BT::NodeConfigure *config)
{
  int (**v3)(...); // rdx

  BT::TreeNode::TreeNode(this, name, config);
  v3 = (int (**)(...))(&`vtable for'BT::LeafNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v3;
};

// Line 29: range 000000000D94FF36-000000000D94FF83
void __cdecl BT::LeafNode::~LeafNode(BT::LeafNode *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BT::LeafNode + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v1;
  BT::TreeNode::~TreeNode(this);
};

// Line 29: range 000000000D94FF84-000000000D94FFAE
void __cdecl BT::LeafNode::~LeafNode(BT::LeafNode *const this)
{
  BT::LeafNode::~LeafNode(this);
  operator delete(this, 0x88uLL);
};
