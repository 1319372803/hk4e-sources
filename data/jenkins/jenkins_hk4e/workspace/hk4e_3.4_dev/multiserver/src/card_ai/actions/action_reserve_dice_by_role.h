// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/actions/action_reserve_dice_by_role.h

// Line 27: range 000000000D950B3C-000000000D950B9C
void __cdecl ZN2BT23ActionReserveDiceByRoleCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
        BT::ActionReserveDiceByRole *const this,
        const std::string *a2,
        const BT::NodeConfigure *a3)
{
  int (**v3)(...); // rdx

  ZN2BT14ActionNodeBaseCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    this,
    a2,
    a3);
  v3 = (int (**)(...))(&`vtable for'BT::ActionReserveDiceByRole + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v3;
};

// Line 28: range 000000000E0BFCA0-000000000E0BFCED
void __cdecl BT::ActionReserveDiceByRole::~ActionReserveDiceByRole(BT::ActionReserveDiceByRole *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BT::ActionReserveDiceByRole + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v1;
  BT::ActionNodeBase::~ActionNodeBase(this);
};

// Line 28: range 000000000E0BFCEE-000000000E0BFD18
void __cdecl BT::ActionReserveDiceByRole::~ActionReserveDiceByRole(BT::ActionReserveDiceByRole *const this)
{
  BT::ActionReserveDiceByRole::~ActionReserveDiceByRole(this);
  operator delete(this, 0x88uLL);
};
