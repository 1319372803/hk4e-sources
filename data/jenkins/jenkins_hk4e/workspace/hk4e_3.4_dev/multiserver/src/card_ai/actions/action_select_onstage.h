// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/actions/action_select_onstage.h

// Line 25: range 000000000D951724-000000000D951784
void __cdecl ZN2BT19ActionSelectOnstageCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
        BT::ActionSelectOnstage *const this,
        const std::string *a2,
        const BT::NodeConfigure *a3)
{
  int (**v3)(...); // rdx

  ZN2BT14ActionNodeBaseCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    this,
    a2,
    a3);
  v3 = (int (**)(...))(&`vtable for'BT::ActionSelectOnstage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v3;
};

// Line 26: range 000000000E0BFBAC-000000000E0BFBF9
void __cdecl BT::ActionSelectOnstage::~ActionSelectOnstage(BT::ActionSelectOnstage *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BT::ActionSelectOnstage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v1;
  BT::ActionNodeBase::~ActionNodeBase(this);
};

// Line 26: range 000000000E0BFBFA-000000000E0BFC24
void __cdecl BT::ActionSelectOnstage::~ActionSelectOnstage(BT::ActionSelectOnstage *const this)
{
  BT::ActionSelectOnstage::~ActionSelectOnstage(this);
  operator delete(this, 0x88uLL);
};
