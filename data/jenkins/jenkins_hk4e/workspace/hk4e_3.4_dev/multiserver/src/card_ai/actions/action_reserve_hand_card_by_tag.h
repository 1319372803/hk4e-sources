// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/actions/action_reserve_hand_card_by_tag.h

// Line 31: range 000000000D95142A-000000000D95148A
void __cdecl ZN2BT26ActionReserveHandCardByTagCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
        BT::ActionReserveHandCardByTag *const this,
        const std::string *a2,
        const BT::NodeConfigure *a3)
{
  int (**v3)(...); // rdx

  ZN2BT14ActionNodeBaseCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    this,
    a2,
    a3);
  v3 = (int (**)(...))(&`vtable for'BT::ActionReserveHandCardByTag + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v3;
};

// Line 32: range 000000000E0BFC26-000000000E0BFC73
void __cdecl BT::ActionReserveHandCardByTag::~ActionReserveHandCardByTag(BT::ActionReserveHandCardByTag *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BT::ActionReserveHandCardByTag + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v1;
  BT::ActionNodeBase::~ActionNodeBase(this);
};

// Line 32: range 000000000E0BFC74-000000000E0BFC9E
void __cdecl BT::ActionReserveHandCardByTag::~ActionReserveHandCardByTag(BT::ActionReserveHandCardByTag *const this)
{
  BT::ActionReserveHandCardByTag::~ActionReserveHandCardByTag(this);
  operator delete(this, 0x88uLL);
};
