// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/actions/action_gen_character_attack_plan.h

// Line 28: range 000000000D950E36-000000000D950E96
void __cdecl ZN2BT22ActionGenCharacterPlanCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
        BT::ActionGenCharacterPlan *const this,
        const std::string *a2,
        const BT::NodeConfigure *a3)
{
  int (**v3)(...); // rdx

  ZN2BT14ActionNodeBaseCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    this,
    a2,
    a3);
  v3 = (int (**)(...))(&`vtable for'BT::ActionGenCharacterPlan + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v3;
};

// Line 29: range 000000000E0C0008-000000000E0C0055
void __cdecl BT::ActionGenCharacterPlan::~ActionGenCharacterPlan(BT::ActionGenCharacterPlan *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BT::ActionGenCharacterPlan + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v1;
  BT::ActionNodeBase::~ActionNodeBase(this);
};

// Line 29: range 000000000E0C0056-000000000E0C0080
void __cdecl BT::ActionGenCharacterPlan::~ActionGenCharacterPlan(BT::ActionGenCharacterPlan *const this)
{
  BT::ActionGenCharacterPlan::~ActionGenCharacterPlan(this);
  operator delete(this, 0x88uLL);
};
