// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/actions/action_reserve_dice_by_hand.h

// Line 30: range 000000000D950C3A-000000000D950C9A
void __cdecl ZN2BT23ActionReserveDiceByHandCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
        BT::ActionReserveDiceByHand *const this,
        const std::string *a2,
        const BT::NodeConfigure *a3)
{
  int (**v3)(...); // rdx

  ZN2BT14ActionNodeBaseCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    this,
    a2,
    a3);
  v3 = (int (**)(...))(&`vtable for'BT::ActionReserveDiceByHand + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v3;
};

// Line 31: range 000000000E0BFD1A-000000000E0BFD67
void __cdecl BT::ActionReserveDiceByHand::~ActionReserveDiceByHand(BT::ActionReserveDiceByHand *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BT::ActionReserveDiceByHand + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v1;
  BT::ActionNodeBase::~ActionNodeBase(this);
};

// Line 31: range 000000000E0BFD68-000000000E0BFD92
void __cdecl BT::ActionReserveDiceByHand::~ActionReserveDiceByHand(BT::ActionReserveDiceByHand *const this)
{
  BT::ActionReserveDiceByHand::~ActionReserveDiceByHand(this);
  operator delete(this, 0x88uLL);
};
