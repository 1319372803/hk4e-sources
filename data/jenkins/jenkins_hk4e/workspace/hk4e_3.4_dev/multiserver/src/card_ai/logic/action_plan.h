// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/logic/action_plan.h

// Line 32: range 000000000E2BDC50-000000000E2BDD31
void __cdecl BT::ActionPlanBase::ActionPlanBase(BT::ActionPlanBase *const this)
{
  int (**v1)(...); // rdx

  common::milog::DescribalBase::DescribalBase(this);
  v1 = (int (**)(...))(&`vtable for'BT::ActionPlanBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->origin_order_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->origin_order_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->origin_order_);
  }
  this->origin_order_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->priority_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->priority_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->priority_);
  }
  this->priority_ = 0;
  std::map<proto::GCGDiceSideType,unsigned int>::map(&this->choose_dice_map_);
};

// Line 35: range 000000000E2BDD32-000000000E2BDD83
void __cdecl BT::ActionPlanBase::~ActionPlanBase(BT::ActionPlanBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BT::ActionPlanBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::map<proto::GCGDiceSideType,unsigned int>::~map(&this->choose_dice_map_);
};

// Line 35: range 000000000E2BDD84-000000000E2BDDAE
void __cdecl BT::ActionPlanBase::~ActionPlanBase(BT::ActionPlanBase *const this)
{
  BT::ActionPlanBase::~ActionPlanBase(this);
  operator delete(this, 0x40uLL);
};

// Line 36: range 000000000E1D32B2-000000000E1D32C0
BT::ActionPlanType __cdecl BT::ActionPlanBase::getPlanType(BT::ActionPlanBase *const this)
{
  return 0;
};

// Line 49: range 000000000E2BDDB0-000000000E2BDE81
void __cdecl BT::ActionPlanCurCharacterAttack::ActionPlanCurCharacterAttack(
        BT::ActionPlanCurCharacterAttack *const this)
{
  int (**v1)(...); // rdx

  BT::ActionPlanBase::ActionPlanBase(this);
  v1 = (int (**)(...))(&`vtable for'BT::ActionPlanCurCharacterAttack + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_character_guid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_character_guid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_character_guid_);
  }
  this->cur_character_guid_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skill_id_);
  }
  this->skill_id_ = 0;
};

// Line 49: range 000000000E2D5F7C-000000000E2D5FA6
void __cdecl BT::ActionPlanCurCharacterAttack::~ActionPlanCurCharacterAttack(
        BT::ActionPlanCurCharacterAttack *const this)
{
  BT::ActionPlanCurCharacterAttack::~ActionPlanCurCharacterAttack(this);
  operator delete(this, 0x48uLL);
};

// Line 49: range 000000000E2D5F2E-000000000E2D5F7B
void __cdecl BT::ActionPlanCurCharacterAttack::~ActionPlanCurCharacterAttack(
        BT::ActionPlanCurCharacterAttack *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BT::ActionPlanCurCharacterAttack + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  BT::ActionPlanBase::~ActionPlanBase(this);
};

// Line 53: range 000000000E1D32C2-000000000E1D32D0
BT::ActionPlanType __cdecl BT::ActionPlanCurCharacterAttack::getPlanType(BT::ActionPlanCurCharacterAttack *const this)
{
  return 1;
};

// Line 66: range 000000000E2BE18E-000000000E2BE219
void __cdecl BT::ActionPlanReboot::ActionPlanReboot(BT::ActionPlanReboot *const this)
{
  int (**v1)(...); // rdx

  BT::ActionPlanBase::ActionPlanBase(this);
  v1 = (int (**)(...))(&`vtable for'BT::ActionPlanReboot + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->hand_card_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hand_card_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hand_card_id_);
  }
  this->hand_card_id_ = 0;
};

// Line 66: range 000000000E2D5EB4-000000000E2D5F01
void __cdecl BT::ActionPlanReboot::~ActionPlanReboot(BT::ActionPlanReboot *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BT::ActionPlanReboot + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  BT::ActionPlanBase::~ActionPlanBase(this);
};

// Line 66: range 000000000E2D5F02-000000000E2D5F2C
void __cdecl BT::ActionPlanReboot::~ActionPlanReboot(BT::ActionPlanReboot *const this)
{
  BT::ActionPlanReboot::~ActionPlanReboot(this);
  operator delete(this, 0x48uLL);
};

// Line 70: range 000000000E1D32D2-000000000E1D32E0
BT::ActionPlanType __cdecl BT::ActionPlanReboot::getPlanType(BT::ActionPlanReboot *const this)
{
  return 3;
};

// Line 82: range 000000000E2BE58A-000000000E2BE655
void __cdecl BT::ActionPlanChangeCharacter::ActionPlanChangeCharacter(BT::ActionPlanChangeCharacter *const this)
{
  int (**v1)(...); // rdx

  BT::ActionPlanBase::ActionPlanBase(this);
  v1 = (int (**)(...))(&`vtable for'BT::ActionPlanChangeCharacter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->change_to_character_guid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->change_to_character_guid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->change_to_character_guid_);
  }
  this->change_to_character_guid_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_normal_change_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_normal_change_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_normal_change_);
  }
  this->is_normal_change_ = 0;
};

// Line 82: range 000000000E2D5E3A-000000000E2D5E87
void __cdecl BT::ActionPlanChangeCharacter::~ActionPlanChangeCharacter(BT::ActionPlanChangeCharacter *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BT::ActionPlanChangeCharacter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  BT::ActionPlanBase::~ActionPlanBase(this);
};

// Line 82: range 000000000E2D5E88-000000000E2D5EB2
void __cdecl BT::ActionPlanChangeCharacter::~ActionPlanChangeCharacter(BT::ActionPlanChangeCharacter *const this)
{
  BT::ActionPlanChangeCharacter::~ActionPlanChangeCharacter(this);
  operator delete(this, 0x48uLL);
};

// Line 86: range 000000000E1D32E2-000000000E1D32F0
BT::ActionPlanType __cdecl BT::ActionPlanChangeCharacter::getPlanType(BT::ActionPlanChangeCharacter *const this)
{
  return 4;
};

// Line 99: range 000000000E2BE962-000000000E2BE9FD
void __cdecl BT::ActionPlanPlayCard::ActionPlanPlayCard(BT::ActionPlanPlayCard *const this)
{
  int (**v1)(...); // rdx

  BT::ActionPlanBase::ActionPlanBase(this);
  v1 = (int (**)(...))(&`vtable for'BT::ActionPlanPlayCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->play_card_guid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->play_card_guid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->play_card_guid_);
  }
  this->play_card_guid_ = 0;
  std::vector<unsigned int>::vector(&this->target_param_vec_);
};

// Line 99: range 000000000E2D5E0E-000000000E2D5E38
void __cdecl BT::ActionPlanPlayCard::~ActionPlanPlayCard(BT::ActionPlanPlayCard *const this)
{
  BT::ActionPlanPlayCard::~ActionPlanPlayCard(this);
  operator delete(this, 0x60uLL);
};

// Line 99: range 000000000E2D5DB0-000000000E2D5E0D
void __cdecl BT::ActionPlanPlayCard::~ActionPlanPlayCard(BT::ActionPlanPlayCard *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BT::ActionPlanPlayCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::vector<unsigned int>::~vector(&this->target_param_vec_);
  BT::ActionPlanBase::~ActionPlanBase(this);
};

// Line 103: range 000000000E1D32F2-000000000E1D3300
BT::ActionPlanType __cdecl BT::ActionPlanPlayCard::getPlanType(BT::ActionPlanPlayCard *const this)
{
  return 5;
};
