// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/actions/action_gen_play_card_plan.h

// Line 28: range 000000000D95122E-000000000D95128E
void __cdecl ZN2BT21ActionGenPlayCardPlanCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
        BT::ActionGenPlayCardPlan *const this,
        const std::string *a2,
        const BT::NodeConfigure *a3)
{
  int (**v3)(...); // rdx

  ZN2BT14ActionNodeBaseCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    this,
    a2,
    a3);
  v3 = (int (**)(...))(&`vtable for'BT::ActionGenPlayCardPlan + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v3;
};

// Line 29: range 000000000E0BFF8E-000000000E0BFFDB
void __cdecl BT::ActionGenPlayCardPlan::~ActionGenPlayCardPlan(BT::ActionGenPlayCardPlan *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BT::ActionGenPlayCardPlan + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v1;
  BT::ActionNodeBase::~ActionNodeBase(this);
};

// Line 29: range 000000000E0BFFDC-000000000E0C0006
void __cdecl BT::ActionGenPlayCardPlan::~ActionGenPlayCardPlan(BT::ActionGenPlayCardPlan *const this)
{
  BT::ActionGenPlayCardPlan::~ActionGenPlayCardPlan(this);
  operator delete(this, 0x88uLL);
};
