// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/conditions/condition_phase_check.h

// Line 26: range 000000000D9505E4-000000000D950644
void __cdecl ZN2BT23ConditionCheckPhaseBaseCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
        BT::ConditionCheckPhaseBase *const this,
        const std::string *a2,
        const BT::NodeConfigure *a3)
{
  int (**v3)(...); // rdx

  ZN2BT13ConditionNodeCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    this,
    a2,
    a3);
  v3 = (int (**)(...))(&`vtable for'BT::ConditionCheckPhaseBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v3;
};

// Line 27: range 000000000E0BF8A4-000000000E0BF8CE
void __cdecl BT::ConditionCheckPhaseBase::~ConditionCheckPhaseBase(BT::ConditionCheckPhaseBase *const this)
{
  BT::ConditionCheckPhaseBase::~ConditionCheckPhaseBase(this);
  operator delete(this, 0x88uLL);
};

// Line 27: range 000000000E0BF856-000000000E0BF8A3
void __cdecl BT::ConditionCheckPhaseBase::~ConditionCheckPhaseBase(BT::ConditionCheckPhaseBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BT::ConditionCheckPhaseBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v1;
  BT::ConditionNode::~ConditionNode(this);
};

// Line 31: range 000000000DF38244-000000000DF38252
BT::BlackboardInnerPhaseType __cdecl BT::ConditionCheckPhaseBase::getCurPhase(BT::ConditionCheckPhaseBase *const this)
{
  return 0;
};

// Line 39: range 000000000D950646-000000000D9506A6
void __cdecl ZN2BT27ConditionCheckIsRerollPhaseCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
        BT::ConditionCheckIsRerollPhase *const this,
        const std::string *a2,
        const BT::NodeConfigure *a3)
{
  int (**v3)(...); // rdx

  ZN2BT23ConditionCheckPhaseBaseCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    this,
    a2,
    a3);
  v3 = (int (**)(...))(&`vtable for'BT::ConditionCheckIsRerollPhase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v3;
};

// Line 40: range 000000000E0BFA3E-000000000E0BFA8B
void __cdecl BT::ConditionCheckIsRerollPhase::~ConditionCheckIsRerollPhase(BT::ConditionCheckIsRerollPhase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BT::ConditionCheckIsRerollPhase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v1;
  BT::ConditionCheckPhaseBase::~ConditionCheckPhaseBase(this);
};

// Line 40: range 000000000E0BFA8C-000000000E0BFAB6
void __cdecl BT::ConditionCheckIsRerollPhase::~ConditionCheckIsRerollPhase(BT::ConditionCheckIsRerollPhase *const this)
{
  BT::ConditionCheckIsRerollPhase::~ConditionCheckIsRerollPhase(this);
  operator delete(this, 0x88uLL);
};

// Line 49: range 000000000D950744-000000000D9507A4
void __cdecl ZN2BT27ConditionCheckIsActionPhaseCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
        BT::ConditionCheckIsActionPhase *const this,
        const std::string *a2,
        const BT::NodeConfigure *a3)
{
  int (**v3)(...); // rdx

  ZN2BT23ConditionCheckPhaseBaseCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    this,
    a2,
    a3);
  v3 = (int (**)(...))(&`vtable for'BT::ConditionCheckIsActionPhase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v3;
};

// Line 50: range 000000000E0BFA12-000000000E0BFA3C
void __cdecl BT::ConditionCheckIsActionPhase::~ConditionCheckIsActionPhase(BT::ConditionCheckIsActionPhase *const this)
{
  BT::ConditionCheckIsActionPhase::~ConditionCheckIsActionPhase(this);
  operator delete(this, 0x88uLL);
};

// Line 50: range 000000000E0BF9C4-000000000E0BFA11
void __cdecl BT::ConditionCheckIsActionPhase::~ConditionCheckIsActionPhase(BT::ConditionCheckIsActionPhase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BT::ConditionCheckIsActionPhase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v1;
  BT::ConditionCheckPhaseBase::~ConditionCheckPhaseBase(this);
};

// Line 59: range 000000000D950842-000000000D9508A2
void __cdecl ZN2BT43ConditionCheckIsSelectOnstageCharacterPhaseCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
        BT::ConditionCheckIsSelectOnstageCharacterPhase *const this,
        const std::string *a2,
        const BT::NodeConfigure *a3)
{
  int (**v3)(...); // rdx

  ZN2BT23ConditionCheckPhaseBaseCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    this,
    a2,
    a3);
  v3 = (int (**)(...))(&`vtable for'BT::ConditionCheckIsSelectOnstageCharacterPhase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v3;
};

// Line 60: range 000000000E0BF94A-000000000E0BF997
void __cdecl BT::ConditionCheckIsSelectOnstageCharacterPhase::~ConditionCheckIsSelectOnstageCharacterPhase(
        BT::ConditionCheckIsSelectOnstageCharacterPhase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BT::ConditionCheckIsSelectOnstageCharacterPhase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v1;
  BT::ConditionCheckPhaseBase::~ConditionCheckPhaseBase(this);
};

// Line 60: range 000000000E0BF998-000000000E0BF9C2
void __cdecl BT::ConditionCheckIsSelectOnstageCharacterPhase::~ConditionCheckIsSelectOnstageCharacterPhase(
        BT::ConditionCheckIsSelectOnstageCharacterPhase *const this)
{
  BT::ConditionCheckIsSelectOnstageCharacterPhase::~ConditionCheckIsSelectOnstageCharacterPhase(this);
  operator delete(this, 0x88uLL);
};

// Line 69: range 000000000D950940-000000000D9509A0
void __cdecl ZN2BT25ConditionCheckIsDrawPhaseCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
        BT::ConditionCheckIsDrawPhase *const this,
        const std::string *a2,
        const BT::NodeConfigure *a3)
{
  int (**v3)(...); // rdx

  ZN2BT23ConditionCheckPhaseBaseCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    this,
    a2,
    a3);
  v3 = (int (**)(...))(&`vtable for'BT::ConditionCheckIsDrawPhase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v3;
};

// Line 70: range 000000000E0BF91E-000000000E0BF948
void __cdecl BT::ConditionCheckIsDrawPhase::~ConditionCheckIsDrawPhase(BT::ConditionCheckIsDrawPhase *const this)
{
  BT::ConditionCheckIsDrawPhase::~ConditionCheckIsDrawPhase(this);
  operator delete(this, 0x88uLL);
};

// Line 70: range 000000000E0BF8D0-000000000E0BF91D
void __cdecl BT::ConditionCheckIsDrawPhase::~ConditionCheckIsDrawPhase(BT::ConditionCheckIsDrawPhase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BT::ConditionCheckIsDrawPhase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v1;
  BT::ConditionCheckPhaseBase::~ConditionCheckPhaseBase(this);
};
