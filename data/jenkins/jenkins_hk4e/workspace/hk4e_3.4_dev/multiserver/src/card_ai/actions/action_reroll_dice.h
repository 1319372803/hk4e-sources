// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/actions/action_reroll_dice.h

// Line 26: range 000000000D950D38-000000000D950D98
void __cdecl ZN2BT16ActionRerollDiceCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
        BT::ActionRerollDice *const this,
        const std::string *a2,
        const BT::NodeConfigure *a3)
{
  int (**v3)(...); // rdx

  ZN2BT14ActionNodeBaseCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    this,
    a2,
    a3);
  v3 = (int (**)(...))(&`vtable for'BT::ActionRerollDice + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v3;
};

// Line 27: range 000000000E0BFD94-000000000E0BFDE1
void __cdecl BT::ActionRerollDice::~ActionRerollDice(BT::ActionRerollDice *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BT::ActionRerollDice + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v1;
  BT::ActionNodeBase::~ActionNodeBase(this);
};

// Line 27: range 000000000E0BFDE2-000000000E0BFE0C
void __cdecl BT::ActionRerollDice::~ActionRerollDice(BT::ActionRerollDice *const this)
{
  BT::ActionRerollDice::~ActionRerollDice(this);
  operator delete(this, 0x88uLL);
};
