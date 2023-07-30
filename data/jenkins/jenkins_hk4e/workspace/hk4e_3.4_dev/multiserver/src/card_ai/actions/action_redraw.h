// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/actions/action_redraw.h

// Line 24: range 000000000D951528-000000000D951588
void __cdecl ZN2BT12ActionRedrawCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
        BT::ActionRedraw *const this,
        const std::string *a2,
        const BT::NodeConfigure *a3)
{
  int (**v3)(...); // rdx

  ZN2BT14ActionNodeBaseCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    this,
    a2,
    a3);
  v3 = (int (**)(...))(&`vtable for'BT::ActionRedraw + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v3;
};

// Line 25: range 000000000E0BFE0E-000000000E0BFE5B
void __cdecl BT::ActionRedraw::~ActionRedraw(BT::ActionRedraw *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BT::ActionRedraw + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v1;
  BT::ActionNodeBase::~ActionNodeBase(this);
};

// Line 25: range 000000000E0BFE5C-000000000E0BFE86
void __cdecl BT::ActionRedraw::~ActionRedraw(BT::ActionRedraw *const this)
{
  BT::ActionRedraw::~ActionRedraw(this);
  operator delete(this, 0x88uLL);
};
