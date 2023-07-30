// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/skill/gcg_effect.h

// Line 19: range 000000000E2D335A-000000000E2D33A7
void __cdecl GCGExecEffectDamage::~GCGExecEffectDamage(GCGExecEffectDamage *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGExecEffectDamage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 19: range 000000000E2D33A8-000000000E2D33D2
void __cdecl GCGExecEffectDamage::~GCGExecEffectDamage(GCGExecEffectDamage *const this)
{
  GCGExecEffectDamage::~GCGExecEffectDamage(this);
  operator delete(this, 0x38uLL);
};

// Line 22: range 000000000DD23C8A-000000000DD23CEA
void __cdecl ZN19GCGExecEffectDamageCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGExecEffectDamage *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGExecEffectDamage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 25: range 000000000E1D8556-000000000E1D8564
GCGEffectCategoryType __cdecl GCGExecEffectDamage::getCategroyType(GCGExecEffectDamage *const this)
{
  return 0;
};

// Line 29: range 000000000E2D332E-000000000E2D3358
void __cdecl GCGExecEffectCreateCard::~GCGExecEffectCreateCard(GCGExecEffectCreateCard *const this)
{
  GCGExecEffectCreateCard::~GCGExecEffectCreateCard(this);
  operator delete(this, 0x38uLL);
};

// Line 29: range 000000000E2D32E0-000000000E2D332D
void __cdecl GCGExecEffectCreateCard::~GCGExecEffectCreateCard(GCGExecEffectCreateCard *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGExecEffectCreateCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 32: range 000000000DD23FDA-000000000DD2403A
void __cdecl ZN23GCGExecEffectCreateCardCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGExecEffectCreateCard *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGExecEffectCreateCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 34: range 000000000E1D8566-000000000E1D8574
GCGEffectCategoryType __cdecl GCGExecEffectCreateCard::getCategroyType(GCGExecEffectCreateCard *const this)
{
  return 0;
};

// Line 38: range 000000000E2D32B4-000000000E2D32DE
void __cdecl GCGExecEffectCreateModifyCard::~GCGExecEffectCreateModifyCard(GCGExecEffectCreateModifyCard *const this)
{
  GCGExecEffectCreateModifyCard::~GCGExecEffectCreateModifyCard(this);
  operator delete(this, 0x38uLL);
};

// Line 38: range 000000000E2D3266-000000000E2D32B3
void __cdecl GCGExecEffectCreateModifyCard::~GCGExecEffectCreateModifyCard(GCGExecEffectCreateModifyCard *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGExecEffectCreateModifyCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 41: range 000000000DD2432A-000000000DD2438A
void __cdecl ZN29GCGExecEffectCreateModifyCardCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGExecEffectCreateModifyCard *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGExecEffectCreateModifyCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 43: range 000000000E1D8576-000000000E1D8584
GCGEffectCategoryType __cdecl GCGExecEffectCreateModifyCard::getCategroyType(GCGExecEffectCreateModifyCard *const this)
{
  return 0;
};

// Line 47: range 000000000E2D31EC-000000000E2D3239
void __cdecl GCGExecEffectGenDice::~GCGExecEffectGenDice(GCGExecEffectGenDice *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGExecEffectGenDice + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 47: range 000000000E2D323A-000000000E2D3264
void __cdecl GCGExecEffectGenDice::~GCGExecEffectGenDice(GCGExecEffectGenDice *const this)
{
  GCGExecEffectGenDice::~GCGExecEffectGenDice(this);
  operator delete(this, 0x38uLL);
};

// Line 50: range 000000000DD2467A-000000000DD246DA
void __cdecl ZN20GCGExecEffectGenDiceCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGExecEffectGenDice *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGExecEffectGenDice + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 52: range 000000000E1D8586-000000000E1D8594
GCGEffectCategoryType __cdecl GCGExecEffectGenDice::getCategroyType(GCGExecEffectGenDice *const this)
{
  return 0;
};

// Line 56: range 000000000E2D31C0-000000000E2D31EA
void __cdecl GCGExecEffectChangeCardVar::~GCGExecEffectChangeCardVar(GCGExecEffectChangeCardVar *const this)
{
  GCGExecEffectChangeCardVar::~GCGExecEffectChangeCardVar(this);
  operator delete(this, 0x38uLL);
};

// Line 56: range 000000000E2D3172-000000000E2D31BF
void __cdecl GCGExecEffectChangeCardVar::~GCGExecEffectChangeCardVar(GCGExecEffectChangeCardVar *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGExecEffectChangeCardVar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 59: range 000000000DD249CA-000000000DD24A2A
void __cdecl ZN26GCGExecEffectChangeCardVarCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGExecEffectChangeCardVar *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGExecEffectChangeCardVar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 61: range 000000000E1D8596-000000000E1D85A4
GCGEffectCategoryType __cdecl GCGExecEffectChangeCardVar::getCategroyType(GCGExecEffectChangeCardVar *const this)
{
  return 0;
};

// Line 64: range 000000000E2D3146-000000000E2D3170
void __cdecl GCGExecEffectDamageRevise::~GCGExecEffectDamageRevise(GCGExecEffectDamageRevise *const this)
{
  GCGExecEffectDamageRevise::~GCGExecEffectDamageRevise(this);
  operator delete(this, 0x38uLL);
};

// Line 64: range 000000000E2D30F8-000000000E2D3145
void __cdecl GCGExecEffectDamageRevise::~GCGExecEffectDamageRevise(GCGExecEffectDamageRevise *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGExecEffectDamageRevise + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 67: range 000000000DD24D1A-000000000DD24D7A
void __cdecl ZN25GCGExecEffectDamageReviseCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGExecEffectDamageRevise *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGExecEffectDamageRevise + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 69: range 000000000E1D85A6-000000000E1D85B4
GCGEffectCategoryType __cdecl GCGExecEffectDamageRevise::getCategroyType(GCGExecEffectDamageRevise *const this)
{
  return 1;
};

// Line 73: range 000000000E2D2112-000000000E2D213C
void __cdecl GCGEffectFixRerollDiceToSpecialType::~GCGEffectFixRerollDiceToSpecialType(
        GCGEffectFixRerollDiceToSpecialType *const this)
{
  GCGEffectFixRerollDiceToSpecialType::~GCGEffectFixRerollDiceToSpecialType(this);
  operator delete(this, 0x38uLL);
};

// Line 73: range 000000000E2D20C4-000000000E2D2111
void __cdecl GCGEffectFixRerollDiceToSpecialType::~GCGEffectFixRerollDiceToSpecialType(
        GCGEffectFixRerollDiceToSpecialType *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGEffectFixRerollDiceToSpecialType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 76: range 000000000DD2506A-000000000DD250CA
void __cdecl ZN35GCGEffectFixRerollDiceToSpecialTypeCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGEffectFixRerollDiceToSpecialType *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGEffectFixRerollDiceToSpecialType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 78: range 000000000E1D85B6-000000000E1D85C4
GCGEffectCategoryType __cdecl GCGEffectFixRerollDiceToSpecialType::getCategroyType(
        GCGEffectFixRerollDiceToSpecialType *const this)
{
  return 5;
};

// Line 84: range 000000000E2D307E-000000000E2D30CB
void __cdecl GCGEffectSkillUseCostRevise::~GCGEffectSkillUseCostRevise(GCGEffectSkillUseCostRevise *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGEffectSkillUseCostRevise + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 84: range 000000000E2D30CC-000000000E2D30F6
void __cdecl GCGEffectSkillUseCostRevise::~GCGEffectSkillUseCostRevise(GCGEffectSkillUseCostRevise *const this)
{
  GCGEffectSkillUseCostRevise::~GCGEffectSkillUseCostRevise(this);
  operator delete(this, 0x38uLL);
};

// Line 87: range 000000000DD2782A-000000000DD2788A
void __cdecl ZN27GCGEffectSkillUseCostReviseCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGEffectSkillUseCostRevise *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGEffectSkillUseCostRevise + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 88: range 000000000E1D85C6-000000000E1D85D4
GCGEffectCategoryType __cdecl GCGEffectSkillUseCostRevise::getCategroyType(GCGEffectSkillUseCostRevise *const this)
{
  return 8;
};

// Line 90: range 000000000E1D85D6-000000000E1D85E4
bool __cdecl GCGEffectSkillUseCostRevise::isPreviewEffect(const GCGEffectSkillUseCostRevise *const this)
{
  return 1;
};

// Line 95: range 000000000E2D3004-000000000E2D3051
void __cdecl GCGEffectPlayCardCostRevise::~GCGEffectPlayCardCostRevise(GCGEffectPlayCardCostRevise *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGEffectPlayCardCostRevise + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 95: range 000000000E2D3052-000000000E2D307C
void __cdecl GCGEffectPlayCardCostRevise::~GCGEffectPlayCardCostRevise(GCGEffectPlayCardCostRevise *const this)
{
  GCGEffectPlayCardCostRevise::~GCGEffectPlayCardCostRevise(this);
  operator delete(this, 0x38uLL);
};

// Line 98: range 000000000DD27B7A-000000000DD27BDA
void __cdecl ZN27GCGEffectPlayCardCostReviseCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGEffectPlayCardCostRevise *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGEffectPlayCardCostRevise + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 99: range 000000000E1D85E6-000000000E1D85F4
GCGEffectCategoryType __cdecl GCGEffectPlayCardCostRevise::getCategroyType(GCGEffectPlayCardCostRevise *const this)
{
  return 9;
};

// Line 101: range 000000000E1D85F6-000000000E1D8604
bool __cdecl GCGEffectPlayCardCostRevise::isPreviewEffect(const GCGEffectPlayCardCostRevise *const this)
{
  return 1;
};

// Line 105: range 000000000E2D2F8A-000000000E2D2FD7
void __cdecl GCGEffectPayByCardTag::~GCGEffectPayByCardTag(GCGEffectPayByCardTag *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGEffectPayByCardTag + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 105: range 000000000E2D2FD8-000000000E2D3002
void __cdecl GCGEffectPayByCardTag::~GCGEffectPayByCardTag(GCGEffectPayByCardTag *const this)
{
  GCGEffectPayByCardTag::~GCGEffectPayByCardTag(this);
  operator delete(this, 0x38uLL);
};

// Line 108: range 000000000DD2A33A-000000000DD2A39A
void __cdecl ZN21GCGEffectPayByCardTagCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGEffectPayByCardTag *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGEffectPayByCardTag + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 109: range 000000000E1D8606-000000000E1D8614
GCGEffectCategoryType __cdecl GCGEffectPayByCardTag::getCategroyType(GCGEffectPayByCardTag *const this)
{
  return 15;
};

// Line 111: range 000000000E1D8616-000000000E1D8624
bool __cdecl GCGEffectPayByCardTag::isPreviewEffect(const GCGEffectPayByCardTag *const this)
{
  return 1;
};

// Line 115: range 000000000E2D2F5E-000000000E2D2F88
void __cdecl GCGExecEffectCharge::~GCGExecEffectCharge(GCGExecEffectCharge *const this)
{
  GCGExecEffectCharge::~GCGExecEffectCharge(this);
  operator delete(this, 0x38uLL);
};

// Line 115: range 000000000E2D2F10-000000000E2D2F5D
void __cdecl GCGExecEffectCharge::~GCGExecEffectCharge(GCGExecEffectCharge *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGExecEffectCharge + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 118: range 000000000DD253BA-000000000DD2541A
void __cdecl ZN19GCGExecEffectChargeCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGExecEffectCharge *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGExecEffectCharge + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 120: range 000000000E1D8626-000000000E1D8634
GCGEffectCategoryType __cdecl GCGExecEffectCharge::getCategroyType(GCGExecEffectCharge *const this)
{
  return 0;
};

// Line 124: range 000000000E2D2EE4-000000000E2D2F0E
void __cdecl GCGExecEffectChangeOnstageCharater::~GCGExecEffectChangeOnstageCharater(
        GCGExecEffectChangeOnstageCharater *const this)
{
  GCGExecEffectChangeOnstageCharater::~GCGExecEffectChangeOnstageCharater(this);
  operator delete(this, 0x38uLL);
};

// Line 124: range 000000000E2D2E96-000000000E2D2EE3
void __cdecl GCGExecEffectChangeOnstageCharater::~GCGExecEffectChangeOnstageCharater(
        GCGExecEffectChangeOnstageCharater *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGExecEffectChangeOnstageCharater + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 127: range 000000000DD2570A-000000000DD2576A
void __cdecl ZN34GCGExecEffectChangeOnstageCharaterCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGExecEffectChangeOnstageCharater *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGExecEffectChangeOnstageCharater + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 129: range 000000000E1D8636-000000000E1D8644
GCGEffectCategoryType __cdecl GCGExecEffectChangeOnstageCharater::getCategroyType(
        GCGExecEffectChangeOnstageCharater *const this)
{
  return 0;
};

// Line 133: range 000000000E2D2E6A-000000000E2D2E94
void __cdecl GCGExecEffectDraw::~GCGExecEffectDraw(GCGExecEffectDraw *const this)
{
  GCGExecEffectDraw::~GCGExecEffectDraw(this);
  operator delete(this, 0x38uLL);
};

// Line 133: range 000000000E2D2E1C-000000000E2D2E69
void __cdecl GCGExecEffectDraw::~GCGExecEffectDraw(GCGExecEffectDraw *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGExecEffectDraw + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 136: range 000000000DD25A5A-000000000DD25ABA
void __cdecl ZN17GCGExecEffectDrawCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGExecEffectDraw *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGExecEffectDraw + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 138: range 000000000E1D8646-000000000E1D8654
GCGEffectCategoryType __cdecl GCGExecEffectDraw::getCategroyType(GCGExecEffectDraw *const this)
{
  return 0;
};

// Line 142: range 000000000E2D2DF0-000000000E2D2E1A
void __cdecl GCGEffectAttachPhysicDamageToElement::~GCGEffectAttachPhysicDamageToElement(
        GCGEffectAttachPhysicDamageToElement *const this)
{
  GCGEffectAttachPhysicDamageToElement::~GCGEffectAttachPhysicDamageToElement(this);
  operator delete(this, 0x38uLL);
};

// Line 142: range 000000000E2D2DA2-000000000E2D2DEF
void __cdecl GCGEffectAttachPhysicDamageToElement::~GCGEffectAttachPhysicDamageToElement(
        GCGEffectAttachPhysicDamageToElement *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGEffectAttachPhysicDamageToElement + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 145: range 000000000DD25DAA-000000000DD25E0A
void __cdecl ZN36GCGEffectAttachPhysicDamageToElementCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGEffectAttachPhysicDamageToElement *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGEffectAttachPhysicDamageToElement + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 147: range 000000000E1D8656-000000000E1D8664
GCGEffectCategoryType __cdecl GCGEffectAttachPhysicDamageToElement::getCategroyType(
        GCGEffectAttachPhysicDamageToElement *const this)
{
  return 3;
};

// Line 151: range 000000000E2D2D28-000000000E2D2D75
void __cdecl GCGEffectAddShield::~GCGEffectAddShield(GCGEffectAddShield *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGEffectAddShield + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 151: range 000000000E2D2D76-000000000E2D2DA0
void __cdecl GCGEffectAddShield::~GCGEffectAddShield(GCGEffectAddShield *const this)
{
  GCGEffectAddShield::~GCGEffectAddShield(this);
  operator delete(this, 0x38uLL);
};

// Line 154: range 000000000DD260FA-000000000DD2615A
void __cdecl ZN18GCGEffectAddShieldCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGEffectAddShield *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGEffectAddShield + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 157: range 000000000E1D8666-000000000E1D8674
GCGEffectCategoryType __cdecl GCGEffectAddShield::getCategroyType(GCGEffectAddShield *const this)
{
  return 4;
};

// Line 161: range 000000000E2D2CAE-000000000E2D2CFB
void __cdecl GCGExecEffectDamageMultiple::~GCGExecEffectDamageMultiple(GCGExecEffectDamageMultiple *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGExecEffectDamageMultiple + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 161: range 000000000E2D2CFC-000000000E2D2D26
void __cdecl GCGExecEffectDamageMultiple::~GCGExecEffectDamageMultiple(GCGExecEffectDamageMultiple *const this)
{
  GCGExecEffectDamageMultiple::~GCGExecEffectDamageMultiple(this);
  operator delete(this, 0x38uLL);
};

// Line 164: range 000000000DD2644A-000000000DD264AA
void __cdecl ZN27GCGExecEffectDamageMultipleCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGExecEffectDamageMultiple *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGExecEffectDamageMultiple + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 166: range 000000000E1D8676-000000000E1D8684
GCGEffectCategoryType __cdecl GCGExecEffectDamageMultiple::getCategroyType(GCGExecEffectDamageMultiple *const this)
{
  return 2;
};

// Line 170: range 000000000E2D2C34-000000000E2D2C81
void __cdecl GCGEffectBeingHitDamageReduceToHalf::~GCGEffectBeingHitDamageReduceToHalf(
        GCGEffectBeingHitDamageReduceToHalf *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGEffectBeingHitDamageReduceToHalf + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 170: range 000000000E2D2C82-000000000E2D2CAC
void __cdecl GCGEffectBeingHitDamageReduceToHalf::~GCGEffectBeingHitDamageReduceToHalf(
        GCGEffectBeingHitDamageReduceToHalf *const this)
{
  GCGEffectBeingHitDamageReduceToHalf::~GCGEffectBeingHitDamageReduceToHalf(this);
  operator delete(this, 0x38uLL);
};

// Line 173: range 000000000DD2679A-000000000DD267FA
void __cdecl ZN35GCGEffectBeingHitDamageReduceToHalfCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGEffectBeingHitDamageReduceToHalf *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGEffectBeingHitDamageReduceToHalf + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 175: range 000000000E1D8686-000000000E1D8694
GCGEffectCategoryType __cdecl GCGEffectBeingHitDamageReduceToHalf::getCategroyType(
        GCGEffectBeingHitDamageReduceToHalf *const this)
{
  return 12;
};

// Line 179: range 000000000E2D2BBA-000000000E2D2C07
void __cdecl GCGEffectChangeCharacterSetQuick::~GCGEffectChangeCharacterSetQuick(
        GCGEffectChangeCharacterSetQuick *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGEffectChangeCharacterSetQuick + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 179: range 000000000E2D2C08-000000000E2D2C32
void __cdecl GCGEffectChangeCharacterSetQuick::~GCGEffectChangeCharacterSetQuick(
        GCGEffectChangeCharacterSetQuick *const this)
{
  GCGEffectChangeCharacterSetQuick::~GCGEffectChangeCharacterSetQuick(this);
  operator delete(this, 0x38uLL);
};

// Line 182: range 000000000DD26AEA-000000000DD26B4A
void __cdecl ZN32GCGEffectChangeCharacterSetQuickCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGEffectChangeCharacterSetQuick *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGEffectChangeCharacterSetQuick + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 184: range 000000000E1D8696-000000000E1D86A4
GCGEffectCategoryType __cdecl GCGEffectChangeCharacterSetQuick::getCategroyType(
        GCGEffectChangeCharacterSetQuick *const this)
{
  return 6;
};

// Line 188: range 000000000E2D2B40-000000000E2D2B8D
void __cdecl GCGExecEffectHeal::~GCGExecEffectHeal(GCGExecEffectHeal *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGExecEffectHeal + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 188: range 000000000E2D2B8E-000000000E2D2BB8
void __cdecl GCGExecEffectHeal::~GCGExecEffectHeal(GCGExecEffectHeal *const this)
{
  GCGExecEffectHeal::~GCGExecEffectHeal(this);
  operator delete(this, 0x38uLL);
};

// Line 191: range 000000000DD26E3A-000000000DD26E9A
void __cdecl ZN17GCGExecEffectHealCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGExecEffectHeal *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGExecEffectHeal + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 193: range 000000000E1D86A6-000000000E1D86B4
GCGEffectCategoryType __cdecl GCGExecEffectHeal::getCategroyType(GCGExecEffectHeal *const this)
{
  return 0;
};

// Line 197: range 000000000E2D2B14-000000000E2D2B3E
void __cdecl GCGEffectRerollReviseCost::~GCGEffectRerollReviseCost(GCGEffectRerollReviseCost *const this)
{
  GCGEffectRerollReviseCost::~GCGEffectRerollReviseCost(this);
  operator delete(this, 0x38uLL);
};

// Line 197: range 000000000E2D2AC6-000000000E2D2B13
void __cdecl GCGEffectRerollReviseCost::~GCGEffectRerollReviseCost(GCGEffectRerollReviseCost *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGEffectRerollReviseCost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 200: range 000000000DD2718A-000000000DD271EA
void __cdecl ZN25GCGEffectRerollReviseCostCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGEffectRerollReviseCost *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGEffectRerollReviseCost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 202: range 000000000E1D86B6-000000000E1D86C4
GCGEffectCategoryType __cdecl GCGEffectRerollReviseCost::getCategroyType(GCGEffectRerollReviseCost *const this)
{
  return 7;
};

// Line 206: range 000000000E2D2A4C-000000000E2D2A99
void __cdecl GCGExecEffectRandomCreateCard::~GCGExecEffectRandomCreateCard(GCGExecEffectRandomCreateCard *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGExecEffectRandomCreateCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 206: range 000000000E2D2A9A-000000000E2D2AC4
void __cdecl GCGExecEffectRandomCreateCard::~GCGExecEffectRandomCreateCard(GCGExecEffectRandomCreateCard *const this)
{
  GCGExecEffectRandomCreateCard::~GCGExecEffectRandomCreateCard(this);
  operator delete(this, 0x38uLL);
};

// Line 209: range 000000000DD274DA-000000000DD2753A
void __cdecl ZN29GCGExecEffectRandomCreateCardCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGExecEffectRandomCreateCard *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGExecEffectRandomCreateCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 211: range 000000000E1D86C6-000000000E1D86D4
GCGEffectCategoryType __cdecl GCGExecEffectRandomCreateCard::getCategroyType(GCGExecEffectRandomCreateCard *const this)
{
  return 0;
};

// Line 215: range 000000000E2D29D2-000000000E2D2A1F
void __cdecl GCGEffectChangeCharacterReviseCost::~GCGEffectChangeCharacterReviseCost(
        GCGEffectChangeCharacterReviseCost *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGEffectChangeCharacterReviseCost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 215: range 000000000E2D2A20-000000000E2D2A4A
void __cdecl GCGEffectChangeCharacterReviseCost::~GCGEffectChangeCharacterReviseCost(
        GCGEffectChangeCharacterReviseCost *const this)
{
  GCGEffectChangeCharacterReviseCost::~GCGEffectChangeCharacterReviseCost(this);
  operator delete(this, 0x38uLL);
};

// Line 218: range 000000000DD27ECA-000000000DD27F2A
void __cdecl ZN34GCGEffectChangeCharacterReviseCostCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGEffectChangeCharacterReviseCost *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGEffectChangeCharacterReviseCost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 220: range 000000000E1D86D6-000000000E1D86E4
GCGEffectCategoryType __cdecl GCGEffectChangeCharacterReviseCost::getCategroyType(
        GCGEffectChangeCharacterReviseCost *const this)
{
  return 10;
};

// Line 221: range 000000000E1D86E6-000000000E1D86F4
bool __cdecl GCGEffectChangeCharacterReviseCost::isPreviewEffect(const GCGEffectChangeCharacterReviseCost *const this)
{
  return 1;
};

// Line 225: range 000000000E2D2958-000000000E2D29A5
void __cdecl GCGEffectChangeCharacterIncreCost::~GCGEffectChangeCharacterIncreCost(
        GCGEffectChangeCharacterIncreCost *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGEffectChangeCharacterIncreCost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 225: range 000000000E2D29A6-000000000E2D29D0
void __cdecl GCGEffectChangeCharacterIncreCost::~GCGEffectChangeCharacterIncreCost(
        GCGEffectChangeCharacterIncreCost *const this)
{
  GCGEffectChangeCharacterIncreCost::~GCGEffectChangeCharacterIncreCost(this);
  operator delete(this, 0x38uLL);
};

// Line 228: range 000000000DD2821A-000000000DD2827A
void __cdecl ZN33GCGEffectChangeCharacterIncreCostCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGEffectChangeCharacterIncreCost *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGEffectChangeCharacterIncreCost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 230: range 000000000E1D86F6-000000000E1D8704
GCGEffectCategoryType __cdecl GCGEffectChangeCharacterIncreCost::getCategroyType(
        GCGEffectChangeCharacterIncreCost *const this)
{
  return 17;
};

// Line 231: range 000000000E1D8706-000000000E1D8714
bool __cdecl GCGEffectChangeCharacterIncreCost::isPreviewEffect(const GCGEffectChangeCharacterIncreCost *const this)
{
  return 1;
};

// Line 235: range 000000000E2D292C-000000000E2D2956
void __cdecl GCGEffectOpponentChangeCharacterIncreCost::~GCGEffectOpponentChangeCharacterIncreCost(
        GCGEffectOpponentChangeCharacterIncreCost *const this)
{
  GCGEffectOpponentChangeCharacterIncreCost::~GCGEffectOpponentChangeCharacterIncreCost(this);
  operator delete(this, 0x38uLL);
};

// Line 235: range 000000000E2D28DE-000000000E2D292B
void __cdecl GCGEffectOpponentChangeCharacterIncreCost::~GCGEffectOpponentChangeCharacterIncreCost(
        GCGEffectOpponentChangeCharacterIncreCost *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGEffectOpponentChangeCharacterIncreCost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 238: range 000000000DD2856A-000000000DD285CA
void __cdecl ZN41GCGEffectOpponentChangeCharacterIncreCostCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGEffectOpponentChangeCharacterIncreCost *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGEffectOpponentChangeCharacterIncreCost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 240: range 000000000E1D8716-000000000E1D8724
GCGEffectCategoryType __cdecl GCGEffectOpponentChangeCharacterIncreCost::getCategroyType(
        GCGEffectOpponentChangeCharacterIncreCost *const this)
{
  return 18;
};

// Line 241: range 000000000E1D8726-000000000E1D8734
bool __cdecl GCGEffectOpponentChangeCharacterIncreCost::isPreviewEffect(
        const GCGEffectOpponentChangeCharacterIncreCost *const this)
{
  return 1;
};

// Line 245: range 000000000E2D2864-000000000E2D28B1
void __cdecl GCGExecEffectChangeCardShowTokenVar::~GCGExecEffectChangeCardShowTokenVar(
        GCGExecEffectChangeCardShowTokenVar *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGExecEffectChangeCardShowTokenVar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 245: range 000000000E2D28B2-000000000E2D28DC
void __cdecl GCGExecEffectChangeCardShowTokenVar::~GCGExecEffectChangeCardShowTokenVar(
        GCGExecEffectChangeCardShowTokenVar *const this)
{
  GCGExecEffectChangeCardShowTokenVar::~GCGExecEffectChangeCardShowTokenVar(this);
  operator delete(this, 0x38uLL);
};

// Line 248: range 000000000DD288BA-000000000DD2891A
void __cdecl ZN35GCGExecEffectChangeCardShowTokenVarCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGExecEffectChangeCardShowTokenVar *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGExecEffectChangeCardShowTokenVar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 250: range 000000000E1D8736-000000000E1D8744
GCGEffectCategoryType __cdecl GCGExecEffectChangeCardShowTokenVar::getCategroyType(
        GCGExecEffectChangeCardShowTokenVar *const this)
{
  return 0;
};

// Line 253: range 000000000E2D2838-000000000E2D2862
void __cdecl GCGExecEffectOnStageCharacterUseSkill::~GCGExecEffectOnStageCharacterUseSkill(
        GCGExecEffectOnStageCharacterUseSkill *const this)
{
  GCGExecEffectOnStageCharacterUseSkill::~GCGExecEffectOnStageCharacterUseSkill(this);
  operator delete(this, 0x38uLL);
};

// Line 253: range 000000000E2D27EA-000000000E2D2837
void __cdecl GCGExecEffectOnStageCharacterUseSkill::~GCGExecEffectOnStageCharacterUseSkill(
        GCGExecEffectOnStageCharacterUseSkill *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGExecEffectOnStageCharacterUseSkill + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 256: range 000000000DD28C0A-000000000DD28C6A
void __cdecl ZN37GCGExecEffectOnStageCharacterUseSkillCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGExecEffectOnStageCharacterUseSkill *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGExecEffectOnStageCharacterUseSkill + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 258: range 000000000E1D8746-000000000E1D8754
GCGEffectCategoryType __cdecl GCGExecEffectOnStageCharacterUseSkill::getCategroyType(
        GCGExecEffectOnStageCharacterUseSkill *const this)
{
  return 0;
};

// Line 261: range 000000000E2D27BE-000000000E2D27E8
void __cdecl GCGEffectBeingHitDamageRevise::~GCGEffectBeingHitDamageRevise(GCGEffectBeingHitDamageRevise *const this)
{
  GCGEffectBeingHitDamageRevise::~GCGEffectBeingHitDamageRevise(this);
  operator delete(this, 0x38uLL);
};

// Line 261: range 000000000E2D2770-000000000E2D27BD
void __cdecl GCGEffectBeingHitDamageRevise::~GCGEffectBeingHitDamageRevise(GCGEffectBeingHitDamageRevise *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGEffectBeingHitDamageRevise + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 264: range 000000000DD28F5A-000000000DD28FBA
void __cdecl ZN29GCGEffectBeingHitDamageReviseCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGEffectBeingHitDamageRevise *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGEffectBeingHitDamageRevise + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 266: range 000000000E1D8756-000000000E1D8764
GCGEffectCategoryType __cdecl GCGEffectBeingHitDamageRevise::getCategroyType(GCGEffectBeingHitDamageRevise *const this)
{
  return 11;
};

// Line 270: range 000000000E2D26F6-000000000E2D2743
void __cdecl GCGExecEffectDestroyCard::~GCGExecEffectDestroyCard(GCGExecEffectDestroyCard *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGExecEffectDestroyCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 270: range 000000000E2D2744-000000000E2D276E
void __cdecl GCGExecEffectDestroyCard::~GCGExecEffectDestroyCard(GCGExecEffectDestroyCard *const this)
{
  GCGExecEffectDestroyCard::~GCGExecEffectDestroyCard(this);
  operator delete(this, 0x38uLL);
};

// Line 273: range 000000000DD292AA-000000000DD2930A
void __cdecl ZN24GCGExecEffectDestroyCardCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGExecEffectDestroyCard *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGExecEffectDestroyCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 275: range 000000000E1D8766-000000000E1D8774
GCGEffectCategoryType __cdecl GCGExecEffectDestroyCard::getCategroyType(GCGExecEffectDestroyCard *const this)
{
  return 0;
};

// Line 279: range 000000000E2D267C-000000000E2D26C9
void __cdecl GCGExecEffectDestroyModifyCard::~GCGExecEffectDestroyModifyCard(
        GCGExecEffectDestroyModifyCard *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGExecEffectDestroyModifyCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 279: range 000000000E2D26CA-000000000E2D26F4
void __cdecl GCGExecEffectDestroyModifyCard::~GCGExecEffectDestroyModifyCard(
        GCGExecEffectDestroyModifyCard *const this)
{
  GCGExecEffectDestroyModifyCard::~GCGExecEffectDestroyModifyCard(this);
  operator delete(this, 0x38uLL);
};

// Line 282: range 000000000DD295FA-000000000DD2965A
void __cdecl ZN30GCGExecEffectDestroyModifyCardCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGExecEffectDestroyModifyCard *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGExecEffectDestroyModifyCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 284: range 000000000E1D8776-000000000E1D8784
GCGEffectCategoryType __cdecl GCGExecEffectDestroyModifyCard::getCategroyType(
        GCGExecEffectDestroyModifyCard *const this)
{
  return 0;
};

// Line 288: range 000000000E2D2602-000000000E2D264F
void __cdecl GCGExecEffectTransferEnergy::~GCGExecEffectTransferEnergy(GCGExecEffectTransferEnergy *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGExecEffectTransferEnergy + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 288: range 000000000E2D2650-000000000E2D267A
void __cdecl GCGExecEffectTransferEnergy::~GCGExecEffectTransferEnergy(GCGExecEffectTransferEnergy *const this)
{
  GCGExecEffectTransferEnergy::~GCGExecEffectTransferEnergy(this);
  operator delete(this, 0x38uLL);
};

// Line 291: range 000000000DD2994A-000000000DD299AA
void __cdecl ZN27GCGExecEffectTransferEnergyCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGExecEffectTransferEnergy *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGExecEffectTransferEnergy + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 293: range 000000000E1D8786-000000000E1D8794
GCGEffectCategoryType __cdecl GCGExecEffectTransferEnergy::getCategroyType(GCGExecEffectTransferEnergy *const this)
{
  return 0;
};

// Line 297: range 000000000E2D25D6-000000000E2D2600
void __cdecl GCGExecEffectRandomGenDice::~GCGExecEffectRandomGenDice(GCGExecEffectRandomGenDice *const this)
{
  GCGExecEffectRandomGenDice::~GCGExecEffectRandomGenDice(this);
  operator delete(this, 0x38uLL);
};

// Line 297: range 000000000E2D2588-000000000E2D25D5
void __cdecl GCGExecEffectRandomGenDice::~GCGExecEffectRandomGenDice(GCGExecEffectRandomGenDice *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGExecEffectRandomGenDice + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 300: range 000000000DD29C9A-000000000DD29CFA
void __cdecl ZN26GCGExecEffectRandomGenDiceCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGExecEffectRandomGenDice *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGExecEffectRandomGenDice + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 302: range 000000000E1D8796-000000000E1D87A4
GCGEffectCategoryType __cdecl GCGExecEffectRandomGenDice::getCategroyType(GCGExecEffectRandomGenDice *const this)
{
  return 0;
};

// Line 306: range 000000000E2D255C-000000000E2D2586
void __cdecl GCGExecEffectSearchCard::~GCGExecEffectSearchCard(GCGExecEffectSearchCard *const this)
{
  GCGExecEffectSearchCard::~GCGExecEffectSearchCard(this);
  operator delete(this, 0x38uLL);
};

// Line 306: range 000000000E2D250E-000000000E2D255B
void __cdecl GCGExecEffectSearchCard::~GCGExecEffectSearchCard(GCGExecEffectSearchCard *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGExecEffectSearchCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 309: range 000000000DD29FEA-000000000DD2A04A
void __cdecl ZN23GCGExecEffectSearchCardCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGExecEffectSearchCard *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGExecEffectSearchCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 311: range 000000000E1D87A6-000000000E1D87B4
GCGEffectCategoryType __cdecl GCGExecEffectSearchCard::getCategroyType(GCGExecEffectSearchCard *const this)
{
  return 0;
};

// Line 315: range 000000000E2D24E2-000000000E2D250C
void __cdecl GCGExecEffectAttachElement::~GCGExecEffectAttachElement(GCGExecEffectAttachElement *const this)
{
  GCGExecEffectAttachElement::~GCGExecEffectAttachElement(this);
  operator delete(this, 0x38uLL);
};

// Line 315: range 000000000E2D2494-000000000E2D24E1
void __cdecl GCGExecEffectAttachElement::~GCGExecEffectAttachElement(GCGExecEffectAttachElement *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGExecEffectAttachElement + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 318: range 000000000DD2A68A-000000000DD2A6EA
void __cdecl ZN26GCGExecEffectAttachElementCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGExecEffectAttachElement *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGExecEffectAttachElement + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 320: range 000000000E1D87B6-000000000E1D87C4
GCGEffectCategoryType __cdecl GCGExecEffectAttachElement::getCategroyType(GCGExecEffectAttachElement *const this)
{
  return 0;
};

// Line 324: range 000000000E2D2468-000000000E2D2492
void __cdecl GCGEffectReplaceReactionElementByCardVar::~GCGEffectReplaceReactionElementByCardVar(
        GCGEffectReplaceReactionElementByCardVar *const this)
{
  GCGEffectReplaceReactionElementByCardVar::~GCGEffectReplaceReactionElementByCardVar(this);
  operator delete(this, 0x38uLL);
};

// Line 324: range 000000000E2D241A-000000000E2D2467
void __cdecl GCGEffectReplaceReactionElementByCardVar::~GCGEffectReplaceReactionElementByCardVar(
        GCGEffectReplaceReactionElementByCardVar *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGEffectReplaceReactionElementByCardVar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 327: range 000000000DD2A9DA-000000000DD2AA3A
void __cdecl ZN40GCGEffectReplaceReactionElementByCardVarCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGEffectReplaceReactionElementByCardVar *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGEffectReplaceReactionElementByCardVar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 329: range 000000000E1D87C6-000000000E1D87D4
GCGEffectCategoryType __cdecl GCGEffectReplaceReactionElementByCardVar::getCategroyType(
        GCGEffectReplaceReactionElementByCardVar *const this)
{
  return 13;
};

// Line 333: range 000000000E2D23EE-000000000E2D2418
void __cdecl GCGExecEffectTransferModifyCard::~GCGExecEffectTransferModifyCard(
        GCGExecEffectTransferModifyCard *const this)
{
  GCGExecEffectTransferModifyCard::~GCGExecEffectTransferModifyCard(this);
  operator delete(this, 0x38uLL);
};

// Line 333: range 000000000E2D23A0-000000000E2D23ED
void __cdecl GCGExecEffectTransferModifyCard::~GCGExecEffectTransferModifyCard(
        GCGExecEffectTransferModifyCard *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGExecEffectTransferModifyCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 336: range 000000000DD2AD2A-000000000DD2AD8A
void __cdecl ZN31GCGExecEffectTransferModifyCardCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGExecEffectTransferModifyCard *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGExecEffectTransferModifyCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 338: range 000000000E1D87D6-000000000E1D87E4
GCGEffectCategoryType __cdecl GCGExecEffectTransferModifyCard::getCategroyType(
        GCGExecEffectTransferModifyCard *const this)
{
  return 0;
};

// Line 342: range 000000000E2D2374-000000000E2D239E
void __cdecl GCGExecEffectReroll::~GCGExecEffectReroll(GCGExecEffectReroll *const this)
{
  GCGExecEffectReroll::~GCGExecEffectReroll(this);
  operator delete(this, 0x38uLL);
};

// Line 342: range 000000000E2D2326-000000000E2D2373
void __cdecl GCGExecEffectReroll::~GCGExecEffectReroll(GCGExecEffectReroll *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGExecEffectReroll + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 345: range 000000000DD2B07A-000000000DD2B0DA
void __cdecl ZN19GCGExecEffectRerollCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGExecEffectReroll *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGExecEffectReroll + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 347: range 000000000E1D87E6-000000000E1D87F4
GCGEffectCategoryType __cdecl GCGExecEffectReroll::getCategroyType(GCGExecEffectReroll *const this)
{
  return 0;
};

// Line 351: range 000000000E2D22FA-000000000E2D2324
void __cdecl GCGExecEffectSetDamageElement::~GCGExecEffectSetDamageElement(GCGExecEffectSetDamageElement *const this)
{
  GCGExecEffectSetDamageElement::~GCGExecEffectSetDamageElement(this);
  operator delete(this, 0x38uLL);
};

// Line 351: range 000000000E2D22AC-000000000E2D22F9
void __cdecl GCGExecEffectSetDamageElement::~GCGExecEffectSetDamageElement(GCGExecEffectSetDamageElement *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGExecEffectSetDamageElement + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 354: range 000000000DD2B3CA-000000000DD2B42A
void __cdecl ZN29GCGExecEffectSetDamageElementCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGExecEffectSetDamageElement *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGExecEffectSetDamageElement + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 356: range 000000000E1D87F6-000000000E1D8804
GCGEffectCategoryType __cdecl GCGExecEffectSetDamageElement::getCategroyType(GCGExecEffectSetDamageElement *const this)
{
  return 0;
};

// Line 360: range 000000000E2D2232-000000000E2D227F
void __cdecl GCGExecEffectAbsorbUnusedDice::~GCGExecEffectAbsorbUnusedDice(GCGExecEffectAbsorbUnusedDice *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGExecEffectAbsorbUnusedDice + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 360: range 000000000E2D2280-000000000E2D22AA
void __cdecl GCGExecEffectAbsorbUnusedDice::~GCGExecEffectAbsorbUnusedDice(GCGExecEffectAbsorbUnusedDice *const this)
{
  GCGExecEffectAbsorbUnusedDice::~GCGExecEffectAbsorbUnusedDice(this);
  operator delete(this, 0x38uLL);
};

// Line 363: range 000000000DD2B71A-000000000DD2B77A
void __cdecl ZN29GCGExecEffectAbsorbUnusedDiceCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGExecEffectAbsorbUnusedDice *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGExecEffectAbsorbUnusedDice + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 365: range 000000000E1D8806-000000000E1D8814
GCGEffectCategoryType __cdecl GCGExecEffectAbsorbUnusedDice::getCategroyType(GCGExecEffectAbsorbUnusedDice *const this)
{
  return 0;
};

// Line 369: range 000000000E2D2206-000000000E2D2230
void __cdecl GCGEffectModifiedCharacterAssignUseSkill::~GCGEffectModifiedCharacterAssignUseSkill(
        GCGEffectModifiedCharacterAssignUseSkill *const this)
{
  GCGEffectModifiedCharacterAssignUseSkill::~GCGEffectModifiedCharacterAssignUseSkill(this);
  operator delete(this, 0x38uLL);
};

// Line 369: range 000000000E2D21B8-000000000E2D2205
void __cdecl GCGEffectModifiedCharacterAssignUseSkill::~GCGEffectModifiedCharacterAssignUseSkill(
        GCGEffectModifiedCharacterAssignUseSkill *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGEffectModifiedCharacterAssignUseSkill + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 372: range 000000000DD2BA6A-000000000DD2BACA
void __cdecl ZN40GCGEffectModifiedCharacterAssignUseSkillCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGEffectModifiedCharacterAssignUseSkill *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGEffectModifiedCharacterAssignUseSkill + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 374: range 000000000E1D8816-000000000E1D8824
GCGEffectCategoryType __cdecl GCGEffectModifiedCharacterAssignUseSkill::getCategroyType(
        GCGEffectModifiedCharacterAssignUseSkill *const this)
{
  return 14;
};

// Line 378: range 000000000E2D218C-000000000E2D21B6
void __cdecl GCGEffectFixRerollDice::~GCGEffectFixRerollDice(GCGEffectFixRerollDice *const this)
{
  GCGEffectFixRerollDice::~GCGEffectFixRerollDice(this);
  operator delete(this, 0x38uLL);
};

// Line 378: range 000000000E2D213E-000000000E2D218B
void __cdecl GCGEffectFixRerollDice::~GCGEffectFixRerollDice(GCGEffectFixRerollDice *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGEffectFixRerollDice + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectFixRerollDiceToSpecialType::~GCGEffectFixRerollDiceToSpecialType(this);
};

// Line 381: range 000000000DD2BDBA-000000000DD2BE1A
void __cdecl ZN22GCGEffectFixRerollDiceCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGEffectFixRerollDice *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  ZN35GCGEffectFixRerollDiceToSpecialTypeCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
    this,
    p_,
    a3);
  v3 = (int (**)(...))(&`vtable for'GCGEffectFixRerollDice + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 383: range 000000000E1D8826-000000000E1D8834
GCGEffectCategoryType __cdecl GCGEffectFixRerollDice::getCategroyType(GCGEffectFixRerollDice *const this)
{
  return 16;
};

// Line 387: range 000000000E2D2098-000000000E2D20C2
void __cdecl GCGExecEffectReviveCharacter::~GCGExecEffectReviveCharacter(GCGExecEffectReviveCharacter *const this)
{
  GCGExecEffectReviveCharacter::~GCGExecEffectReviveCharacter(this);
  operator delete(this, 0x38uLL);
};

// Line 387: range 000000000E2D204A-000000000E2D2097
void __cdecl GCGExecEffectReviveCharacter::~GCGExecEffectReviveCharacter(GCGExecEffectReviveCharacter *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGExecEffectReviveCharacter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 390: range 000000000DD2C10A-000000000DD2C16A
void __cdecl ZN28GCGExecEffectReviveCharacterCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGExecEffectReviveCharacter *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGExecEffectReviveCharacter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 392: range 000000000E1D8836-000000000E1D8844
GCGEffectCategoryType __cdecl GCGExecEffectReviveCharacter::getCategroyType(GCGExecEffectReviveCharacter *const this)
{
  return 0;
};

// Line 396: range 000000000E2D1FD0-000000000E2D201D
void __cdecl GCGExecEffectAdvanceProcessWaitingCharacter::~GCGExecEffectAdvanceProcessWaitingCharacter(
        GCGExecEffectAdvanceProcessWaitingCharacter *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGExecEffectAdvanceProcessWaitingCharacter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 396: range 000000000E2D201E-000000000E2D2048
void __cdecl GCGExecEffectAdvanceProcessWaitingCharacter::~GCGExecEffectAdvanceProcessWaitingCharacter(
        GCGExecEffectAdvanceProcessWaitingCharacter *const this)
{
  GCGExecEffectAdvanceProcessWaitingCharacter::~GCGExecEffectAdvanceProcessWaitingCharacter(this);
  operator delete(this, 0x38uLL);
};

// Line 399: range 000000000DD2C45A-000000000DD2C4BA
void __cdecl ZN43GCGExecEffectAdvanceProcessWaitingCharacterCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGExecEffectAdvanceProcessWaitingCharacter *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGExecEffectAdvanceProcessWaitingCharacter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 401: range 000000000E1D8846-000000000E1D8854
GCGEffectCategoryType __cdecl GCGExecEffectAdvanceProcessWaitingCharacter::getCategroyType(
        GCGExecEffectAdvanceProcessWaitingCharacter *const this)
{
  return 0;
};

// Line 405: range 000000000E2D1F56-000000000E2D1FA3
void __cdecl GCGExecEffectFinishDuel::~GCGExecEffectFinishDuel(GCGExecEffectFinishDuel *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGExecEffectFinishDuel + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  GCGEffectBase::~GCGEffectBase(this);
};

// Line 405: range 000000000E2D1FA4-000000000E2D1FCE
void __cdecl GCGExecEffectFinishDuel::~GCGExecEffectFinishDuel(GCGExecEffectFinishDuel *const this)
{
  GCGExecEffectFinishDuel::~GCGExecEffectFinishDuel(this);
  operator delete(this, 0x38uLL);
};

// Line 408: range 000000000DD2C7AA-000000000DD2C80A
void __cdecl ZN23GCGExecEffectFinishDuelCI213GCGEffectBaseESt10shared_ptrIN4data15ConfigGCGEffectEER14GCGEffectParam(
        GCGExecEffectFinishDuel *const this,
        data::ConfigGCGEffectPtr *p_,
        GCGEffectParam *a3)
{
  int (**v3)(...); // rdx

  GCGEffectBase::GCGEffectBase(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'GCGExecEffectFinishDuel + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
};

// Line 410: range 000000000E1D8856-000000000E1D8864
GCGEffectCategoryType __cdecl GCGExecEffectFinishDuel::getCategroyType(GCGExecEffectFinishDuel *const this)
{
  return 0;
};
