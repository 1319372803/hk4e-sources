// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/actions/action_sort_and_exec_plan.h

// Line 28: range 000000000D950F34-000000000D950F94
void __cdecl ZN2BT21ActionSortAndExecPlanCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
        BT::ActionSortAndExecPlan *const this,
        const std::string *a2,
        const BT::NodeConfigure *a3)
{
  int (**v3)(...); // rdx

  ZN2BT14ActionNodeBaseCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    this,
    a2,
    a3);
  v3 = (int (**)(...))(&`vtable for'BT::ActionSortAndExecPlan + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v3;
};

// Line 29: range 000000000E0BFB32-000000000E0BFB7F
void __cdecl BT::ActionSortAndExecPlan::~ActionSortAndExecPlan(BT::ActionSortAndExecPlan *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BT::ActionSortAndExecPlan + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v1;
  BT::ActionNodeBase::~ActionNodeBase(this);
};

// Line 29: range 000000000E0BFB80-000000000E0BFBAA
void __cdecl BT::ActionSortAndExecPlan::~ActionSortAndExecPlan(BT::ActionSortAndExecPlan *const this)
{
  BT::ActionSortAndExecPlan::~ActionSortAndExecPlan(this);
  operator delete(this, 0x88uLL);
};
