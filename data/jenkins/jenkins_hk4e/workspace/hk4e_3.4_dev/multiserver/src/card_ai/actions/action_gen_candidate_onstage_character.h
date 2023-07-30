// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/actions/action_gen_candidate_onstage_character.h

// Line 25: range 000000000D951626-000000000D951686
void __cdecl ZN2BT34ActionGenCandidateOnstageCharacterCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
        BT::ActionGenCandidateOnstageCharacter *const this,
        const std::string *a2,
        const BT::NodeConfigure *a3)
{
  int (**v3)(...); // rdx

  ZN2BT14ActionNodeBaseCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    this,
    a2,
    a3);
  v3 = (int (**)(...))(&`vtable for'BT::ActionGenCandidateOnstageCharacter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v3;
};

// Line 26: range 000000000DD83E14-000000000DD83E61
void __cdecl BT::ActionGenCandidateOnstageCharacter::~ActionGenCandidateOnstageCharacter(
        BT::ActionGenCandidateOnstageCharacter *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BT::ActionGenCandidateOnstageCharacter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TreeNode = v1;
  BT::ActionNodeBase::~ActionNodeBase(this);
};

// Line 26: range 000000000DD83E62-000000000DD83E8C
void __cdecl BT::ActionGenCandidateOnstageCharacter::~ActionGenCandidateOnstageCharacter(
        BT::ActionGenCandidateOnstageCharacter *const this)
{
  BT::ActionGenCandidateOnstageCharacter::~ActionGenCandidateOnstageCharacter(this);
  operator delete(this, 0x88uLL);
};
