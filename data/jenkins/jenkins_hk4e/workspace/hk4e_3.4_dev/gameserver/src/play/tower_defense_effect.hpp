// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/play/tower_defense_effect.hpp

// Line 37: range 000000001635C22C-000000001635C256
void __cdecl EffectServerGlobalValue::~EffectServerGlobalValue(EffectServerGlobalValue *const this)
{
  EffectServerGlobalValue::~EffectServerGlobalValue(this);
  operator delete(this, 0x90uLL);
};

// Line 37: range 000000001635C1BE-000000001635C22B
void __cdecl EffectServerGlobalValue::~EffectServerGlobalValue(EffectServerGlobalValue *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'EffectServerGlobalValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::set<unsigned int>::~set(&this->gadget_set);
  std::string::~string(&this->key);
  CardEffectBase::~CardEffectBase(this);
};

// Line 43: range 00000000162366F8-00000000162367B0
void __cdecl EffectServerGlobalValue::EffectServerGlobalValue(EffectServerGlobalValue *const this, CardInfo *card_info)
{
  int (**v2)(...); // rdx

  CardEffectBase::CardEffectBase(this, card_info);
  v2 = (int (**)(...))(&`vtable for'EffectServerGlobalValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v2;
  std::string::basic_string(&this->key);
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value);
  }
  this->value = 0.0;
  std::set<unsigned int>::set(&this->gadget_set);
};

// Line 46: range 000000001635C134-000000001635C191
void __cdecl EffectModifyBuildCost::~EffectModifyBuildCost(EffectModifyBuildCost *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'EffectModifyBuildCost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::set<unsigned int>::~set(&this->gadget_set);
  CardEffectBase::~CardEffectBase(this);
};

// Line 46: range 000000001635C192-000000001635C1BC
void __cdecl EffectModifyBuildCost::~EffectModifyBuildCost(EffectModifyBuildCost *const this)
{
  EffectModifyBuildCost::~EffectModifyBuildCost(this);
  operator delete(this, 0x70uLL);
};

// Line 51: range 00000000162367B2-000000001623684C
void __cdecl EffectModifyBuildCost::EffectModifyBuildCost(EffectModifyBuildCost *const this, CardInfo *card_info)
{
  int (**v2)(...); // rdx

  CardEffectBase::CardEffectBase(this, card_info);
  v2 = (int (**)(...))(&`vtable for'EffectModifyBuildCost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->factor >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->factor);
  this->factor = 0.0;
  std::set<unsigned int>::set(&this->gadget_set);
};

// Line 54: range 000000001635C0AA-000000001635C107
void __cdecl EffectModifyRefund::~EffectModifyRefund(EffectModifyRefund *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'EffectModifyRefund + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::set<unsigned int>::~set(&this->gadget_set);
  CardEffectBase::~CardEffectBase(this);
};

// Line 54: range 000000001635C108-000000001635C132
void __cdecl EffectModifyRefund::~EffectModifyRefund(EffectModifyRefund *const this)
{
  EffectModifyRefund::~EffectModifyRefund(this);
  operator delete(this, 0x70uLL);
};

// Line 59: range 000000001623684E-00000000162368E8
void __cdecl EffectModifyRefund::EffectModifyRefund(EffectModifyRefund *const this, CardInfo *card_info)
{
  int (**v2)(...); // rdx

  CardEffectBase::CardEffectBase(this, card_info);
  v2 = (int (**)(...))(&`vtable for'EffectModifyRefund + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->factor >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->factor);
  this->factor = 0.0;
  std::set<unsigned int>::set(&this->gadget_set);
};

// Line 62: range 000000001635C030-000000001635C07D
void __cdecl EffectModifyKillPoints::~EffectModifyKillPoints(EffectModifyKillPoints *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'EffectModifyKillPoints + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  CardEffectBase::~CardEffectBase(this);
};

// Line 62: range 000000001635C07E-000000001635C0A8
void __cdecl EffectModifyKillPoints::~EffectModifyKillPoints(EffectModifyKillPoints *const this)
{
  EffectModifyKillPoints::~EffectModifyKillPoints(this);
  operator delete(this, 0x48uLL);
};

// Line 67: range 00000000162368EA-00000000162369A6
void __cdecl EffectModifyKillPoints::EffectModifyKillPoints(EffectModifyKillPoints *const this, CardInfo *card_info)
{
  int (**v2)(...); // rdx

  CardEffectBase::CardEffectBase(this, card_info);
  v2 = (int (**)(...))(&`vtable for'EffectModifyKillPoints + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->factor >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->factor);
  this->factor = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->delta >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->delta);
  this->delta = 0.0;
};

// Line 70: range 000000001635C004-000000001635C02E
void __cdecl EffectAddGearNum::~EffectAddGearNum(EffectAddGearNum *const this)
{
  EffectAddGearNum::~EffectAddGearNum(this);
  operator delete(this, 0x40uLL);
};

// Line 70: range 000000001635BFB6-000000001635C003
void __cdecl EffectAddGearNum::~EffectAddGearNum(EffectAddGearNum *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'EffectAddGearNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  CardEffectBase::~CardEffectBase(this);
};

// Line 74: range 00000000162369A8-0000000016236A32
void __cdecl EffectAddGearNum::EffectAddGearNum(EffectAddGearNum *const this, CardInfo *card_info)
{
  int (**v2)(...); // rdx

  CardEffectBase::CardEffectBase(this, card_info);
  v2 = (int (**)(...))(&`vtable for'EffectAddGearNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->delta >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->delta);
  this->delta = 0.0;
};

// Line 78: range 000000001635BF3C-000000001635BF89
void __cdecl EffectGrantPoints::~EffectGrantPoints(EffectGrantPoints *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'EffectGrantPoints + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  CardEffectBase::~CardEffectBase(this);
};

// Line 78: range 000000001635BF8A-000000001635BFB4
void __cdecl EffectGrantPoints::~EffectGrantPoints(EffectGrantPoints *const this)
{
  EffectGrantPoints::~EffectGrantPoints(this);
  operator delete(this, 0x40uLL);
};

// Line 82: range 0000000016236A34-0000000016236ACA
void __cdecl EffectGrantPoints::EffectGrantPoints(EffectGrantPoints *const this, CardInfo *card_info)
{
  int (**v2)(...); // rdx

  CardEffectBase::CardEffectBase(this, card_info);
  v2 = (int (**)(...))(&`vtable for'EffectGrantPoints + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->points >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->points >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->points);
  }
  this->points = 0;
};

// Line 88: range 000000001635BF10-000000001635BF3A
void __cdecl EffectKillGears::~EffectKillGears(EffectKillGears *const this)
{
  EffectKillGears::~EffectKillGears(this);
  operator delete(this, 0x40uLL);
};

// Line 88: range 000000001635BEC2-000000001635BF0F
void __cdecl EffectKillGears::~EffectKillGears(EffectKillGears *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'EffectKillGears + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  CardEffectBase::~CardEffectBase(this);
};

// Line 92: range 0000000016236ACC-0000000016236B62
void __cdecl EffectKillGears::EffectKillGears(EffectKillGears *const this, CardInfo *card_info)
{
  int (**v2)(...); // rdx

  CardEffectBase::CardEffectBase(this, card_info);
  v2 = (int (**)(...))(&`vtable for'EffectKillGears + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->kill_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->kill_num);
  }
  this->kill_num = 0;
};

// Line 98: range 000000001635BE96-000000001635BEC0
void __cdecl EffectRandomRemove::~EffectRandomRemove(EffectRandomRemove *const this)
{
  EffectRandomRemove::~EffectRandomRemove(this);
  operator delete(this, 0x40uLL);
};

// Line 98: range 000000001635BE48-000000001635BE95
void __cdecl EffectRandomRemove::~EffectRandomRemove(EffectRandomRemove *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'EffectRandomRemove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  CardEffectBase::~CardEffectBase(this);
};

// Line 103: range 0000000016236B64-0000000016236C40
void __cdecl EffectRandomRemove::EffectRandomRemove(EffectRandomRemove *const this, CardInfo *card_info)
{
  int (**v2)(...); // rdx

  CardEffectBase::CardEffectBase(this, card_info);
  v2 = (int (**)(...))(&`vtable for'EffectRandomRemove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->num);
  }
  this->num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_type);
  }
  this->card_type = 0;
};

// Line 108: range 000000001635BE1C-000000001635BE46
void __cdecl EffectPointsOnRoundEnd::~EffectPointsOnRoundEnd(EffectPointsOnRoundEnd *const this)
{
  EffectPointsOnRoundEnd::~EffectPointsOnRoundEnd(this);
  operator delete(this, 0x40uLL);
};

// Line 108: range 000000001635BDCE-000000001635BE1B
void __cdecl EffectPointsOnRoundEnd::~EffectPointsOnRoundEnd(EffectPointsOnRoundEnd *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'EffectPointsOnRoundEnd + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  CardEffectBase::~CardEffectBase(this);
};

// Line 112: range 0000000016236C42-0000000016236CCC
void __cdecl EffectPointsOnRoundEnd::EffectPointsOnRoundEnd(EffectPointsOnRoundEnd *const this, CardInfo *card_info)
{
  int (**v2)(...); // rdx

  CardEffectBase::CardEffectBase(this, card_info);
  v2 = (int (**)(...))(&`vtable for'EffectPointsOnRoundEnd + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->points >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->points);
  this->points = 0.0;
};

// Line 115: range 000000001635BDA2-000000001635BDCC
void __cdecl EffectPickCardLTEServerGlobalValue::~EffectPickCardLTEServerGlobalValue(
        EffectPickCardLTEServerGlobalValue *const this)
{
  EffectPickCardLTEServerGlobalValue::~EffectPickCardLTEServerGlobalValue(this);
  operator delete(this, 0x70uLL);
};

// Line 115: range 000000001635BD44-000000001635BDA1
void __cdecl EffectPickCardLTEServerGlobalValue::~EffectPickCardLTEServerGlobalValue(
        EffectPickCardLTEServerGlobalValue *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'EffectPickCardLTEServerGlobalValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::string::~string(&this->key);
  CardEffectBase::~CardEffectBase(this);
};

// Line 117: range 0000000016236CCE-0000000016236DE6
void __cdecl EffectPickCardLTEServerGlobalValue::EffectPickCardLTEServerGlobalValue(
        EffectPickCardLTEServerGlobalValue *const this,
        CardInfo *card_info)
{
  int (**v2)(...); // rdx

  CardEffectBase::CardEffectBase(this, card_info);
  v2 = (int (**)(...))(&`vtable for'EffectPickCardLTEServerGlobalValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_num);
  }
  this->max_num = 0;
  std::string::basic_string(&this->key);
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value);
  }
  this->value = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_stack >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_stack);
  this->last_stack = 0.0;
};

// Line 127: range 000000001635BCCA-000000001635BD17
void __cdecl EffectModifyCardCost::~EffectModifyCardCost(EffectModifyCardCost *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'EffectModifyCardCost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  CardEffectBase::~CardEffectBase(this);
};

// Line 127: range 000000001635BD18-000000001635BD42
void __cdecl EffectModifyCardCost::~EffectModifyCardCost(EffectModifyCardCost *const this)
{
  EffectModifyCardCost::~EffectModifyCardCost(this);
  operator delete(this, 0x48uLL);
};

// Line 129: range 0000000016236DE8-0000000016236EB0
void __cdecl EffectModifyCardCost::EffectModifyCardCost(EffectModifyCardCost *const this, CardInfo *card_info)
{
  int (**v2)(...); // rdx

  CardEffectBase::CardEffectBase(this, card_info);
  v2 = (int (**)(...))(&`vtable for'EffectModifyCardCost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->factor >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->factor);
  this->factor = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->card_type);
  }
  this->card_type = 0;
};

// Line 136: range 000000001635BC9E-000000001635BCC8
void __cdecl EffectCardTypeCountNoCost::~EffectCardTypeCountNoCost(EffectCardTypeCountNoCost *const this)
{
  EffectCardTypeCountNoCost::~EffectCardTypeCountNoCost(this);
  operator delete(this, 0x48uLL);
};

// Line 136: range 000000001635BC50-000000001635BC9D
void __cdecl EffectCardTypeCountNoCost::~EffectCardTypeCountNoCost(EffectCardTypeCountNoCost *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'EffectCardTypeCountNoCost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  CardEffectBase::~CardEffectBase(this);
};

// Line 138: range 0000000016236EB2-0000000016237012
void __cdecl EffectCardTypeCountNoCost::EffectCardTypeCountNoCost(
        EffectCardTypeCountNoCost *const this,
        CardInfo *card_info)
{
  int (**v2)(...); // rdx

  CardEffectBase::CardEffectBase(this, card_info);
  v2 = (int (**)(...))(&`vtable for'EffectCardTypeCountNoCost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->card_type);
  }
  this->card_type = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->goal >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->goal >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->goal);
  }
  this->goal = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->quality >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quality >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->quality);
  }
  this->quality = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->progress);
  }
  this->progress = 0;
};

// Line 148: range 000000001635BBD6-000000001635BC23
void __cdecl EffectModifyCandidateCards::~EffectModifyCandidateCards(EffectModifyCandidateCards *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'EffectModifyCandidateCards + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  CardEffectBase::~CardEffectBase(this);
};

// Line 148: range 000000001635BC24-000000001635BC4E
void __cdecl EffectModifyCandidateCards::~EffectModifyCandidateCards(EffectModifyCandidateCards *const this)
{
  EffectModifyCandidateCards::~EffectModifyCandidateCards(this);
  operator delete(this, 0x40uLL);
};

// Line 150: range 0000000016237014-00000000162370AA
void __cdecl EffectModifyCandidateCards::EffectModifyCandidateCards(
        EffectModifyCandidateCards *const this,
        CardInfo *card_info)
{
  int (**v2)(...); // rdx

  CardEffectBase::CardEffectBase(this, card_info);
  v2 = (int (**)(...))(&`vtable for'EffectModifyCandidateCards + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->delta >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->delta >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->delta);
  }
  this->delta = 0;
};

// Line 156: range 000000001635BBAA-000000001635BBD4
void __cdecl EffectModifyQualityProb::~EffectModifyQualityProb(EffectModifyQualityProb *const this)
{
  EffectModifyQualityProb::~EffectModifyQualityProb(this);
  operator delete(this, 0x68uLL);
};

// Line 156: range 000000001635BB4C-000000001635BBA9
void __cdecl EffectModifyQualityProb::~EffectModifyQualityProb(EffectModifyQualityProb *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'EffectModifyQualityProb + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::map<unsigned int,unsigned int>::~map(&this->mod_weight_map);
  CardEffectBase::~CardEffectBase(this);
};

// Line 158: range 00000000162370AC-0000000016237114
void __cdecl EffectModifyQualityProb::EffectModifyQualityProb(EffectModifyQualityProb *const this, CardInfo *card_info)
{
  int (**v2)(...); // rdx

  CardEffectBase::CardEffectBase(this, card_info);
  v2 = (int (**)(...))(&`vtable for'EffectModifyQualityProb + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v2;
  std::map<unsigned int,unsigned int>::map(&this->mod_weight_map);
};

// Line 164: range 000000001635BB20-000000001635BB4A
void __cdecl EffectFreeCardOnRefresh::~EffectFreeCardOnRefresh(EffectFreeCardOnRefresh *const this)
{
  EffectFreeCardOnRefresh::~EffectFreeCardOnRefresh(this);
  operator delete(this, 0x70uLL);
};

// Line 164: range 000000001635BAC2-000000001635BB1F
void __cdecl EffectFreeCardOnRefresh::~EffectFreeCardOnRefresh(EffectFreeCardOnRefresh *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'EffectFreeCardOnRefresh + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::map<unsigned int,unsigned int>::~map(&this->uid_count_map);
  CardEffectBase::~CardEffectBase(this);
};

// Line 166: range 0000000016237116-00000000162371C0
void __cdecl EffectFreeCardOnRefresh::EffectFreeCardOnRefresh(EffectFreeCardOnRefresh *const this, CardInfo *card_info)
{
  int (**v2)(...); // rdx
  unsigned int v3; // edx

  CardEffectBase::CardEffectBase(this, card_info);
  v2 = (int (**)(...))(&`vtable for'EffectFreeCardOnRefresh + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v2;
  v3 = std::numeric_limits<unsigned int>::max();
  if ( *(_BYTE *)(((unsigned __int64)&this->step >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->step >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->step);
  }
  this->step = v3;
  std::map<unsigned int,unsigned int>::map(&this->uid_count_map);
};

// Line 174: range 000000001635BA96-000000001635BAC0
void __cdecl EffectModifyRefreshCost::~EffectModifyRefreshCost(EffectModifyRefreshCost *const this)
{
  EffectModifyRefreshCost::~EffectModifyRefreshCost(this);
  operator delete(this, 0x40uLL);
};

// Line 174: range 000000001635BA48-000000001635BA95
void __cdecl EffectModifyRefreshCost::~EffectModifyRefreshCost(EffectModifyRefreshCost *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'EffectModifyRefreshCost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  CardEffectBase::~CardEffectBase(this);
};

// Line 176: range 00000000162371C2-000000001623724C
void __cdecl EffectModifyRefreshCost::EffectModifyRefreshCost(EffectModifyRefreshCost *const this, CardInfo *card_info)
{
  int (**v2)(...); // rdx

  CardEffectBase::CardEffectBase(this, card_info);
  v2 = (int (**)(...))(&`vtable for'EffectModifyRefreshCost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->factor >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->factor);
  this->factor = 0.0;
};

// Line 182: range 000000001635BA1C-000000001635BA46
void __cdecl EffectCardsCountStackServerGlobalValue::~EffectCardsCountStackServerGlobalValue(
        EffectCardsCountStackServerGlobalValue *const this)
{
  EffectCardsCountStackServerGlobalValue::~EffectCardsCountStackServerGlobalValue(this);
  operator delete(this, 0x70uLL);
};

// Line 182: range 000000001635B9BE-000000001635BA1B
void __cdecl EffectCardsCountStackServerGlobalValue::~EffectCardsCountStackServerGlobalValue(
        EffectCardsCountStackServerGlobalValue *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'EffectCardsCountStackServerGlobalValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::string::~string(&this->key);
  CardEffectBase::~CardEffectBase(this);
};

// Line 184: range 000000001623724E-00000000162373B0
void __cdecl EffectCardsCountStackServerGlobalValue::EffectCardsCountStackServerGlobalValue(
        EffectCardsCountStackServerGlobalValue *const this,
        CardInfo *card_info)
{
  int (**v2)(...); // rdx
  unsigned int v3; // edx

  CardEffectBase::CardEffectBase(this, card_info);
  v2 = (int (**)(...))(&`vtable for'EffectCardsCountStackServerGlobalValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v2;
  std::string::basic_string(&this->key);
  if ( *(_BYTE *)(((unsigned __int64)&this->stack_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stack_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stack_value);
  }
  this->stack_value = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_stack >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_stack >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_stack);
  }
  this->max_stack = 1;
  v3 = std::numeric_limits<unsigned int>::max();
  if ( *(_BYTE *)(((unsigned __int64)&this->step >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->step >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->step);
  }
  this->step = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_stack >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_stack);
  this->last_stack = 0.0;
};

// Line 196: range 000000001635B992-000000001635B9BC
void __cdecl EffectPointsStackServerGlobalValue::~EffectPointsStackServerGlobalValue(
        EffectPointsStackServerGlobalValue *const this)
{
  EffectPointsStackServerGlobalValue::~EffectPointsStackServerGlobalValue(this);
  operator delete(this, 0x70uLL);
};

// Line 196: range 000000001635B934-000000001635B991
void __cdecl EffectPointsStackServerGlobalValue::~EffectPointsStackServerGlobalValue(
        EffectPointsStackServerGlobalValue *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'EffectPointsStackServerGlobalValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::string::~string(&this->key);
  CardEffectBase::~CardEffectBase(this);
};

// Line 198: range 00000000162373B2-0000000016237514
void __cdecl EffectPointsStackServerGlobalValue::EffectPointsStackServerGlobalValue(
        EffectPointsStackServerGlobalValue *const this,
        CardInfo *card_info)
{
  int (**v2)(...); // rdx
  unsigned int v3; // edx

  CardEffectBase::CardEffectBase(this, card_info);
  v2 = (int (**)(...))(&`vtable for'EffectPointsStackServerGlobalValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v2;
  std::string::basic_string(&this->key);
  v3 = std::numeric_limits<unsigned int>::max();
  if ( *(_BYTE *)(((unsigned __int64)&this->stack_points >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stack_points >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stack_points);
  }
  this->stack_points = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->stack_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stack_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stack_value);
  }
  this->stack_value = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_stack >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_stack >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_stack);
  }
  this->max_stack = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_stack >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_stack);
  this->last_stack = 0.0;
};

// Line 210: range 000000001635B8AA-000000001635B907
void __cdecl EffectCardTypeStackServerGlobalValue::~EffectCardTypeStackServerGlobalValue(
        EffectCardTypeStackServerGlobalValue *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'EffectCardTypeStackServerGlobalValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::string::~string(&this->key);
  CardEffectBase::~CardEffectBase(this);
};

// Line 210: range 000000001635B908-000000001635B932
void __cdecl EffectCardTypeStackServerGlobalValue::~EffectCardTypeStackServerGlobalValue(
        EffectCardTypeStackServerGlobalValue *const this)
{
  EffectCardTypeStackServerGlobalValue::~EffectCardTypeStackServerGlobalValue(this);
  operator delete(this, 0x70uLL);
};

// Line 212: range 0000000016237516-00000000162376BA
void __cdecl EffectCardTypeStackServerGlobalValue::EffectCardTypeStackServerGlobalValue(
        EffectCardTypeStackServerGlobalValue *const this,
        CardInfo *card_info)
{
  int (**v2)(...); // rdx

  CardEffectBase::CardEffectBase(this, card_info);
  v2 = (int (**)(...))(&`vtable for'EffectCardTypeStackServerGlobalValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v2;
  std::string::basic_string(&this->key);
  if ( *(_BYTE *)(((unsigned __int64)&this->stack_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stack_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stack_value);
  }
  this->stack_value = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_type);
  }
  this->card_type = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_stack >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_stack >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_stack);
  }
  this->max_stack = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->count);
  }
  this->count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_stack >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_stack);
  this->last_stack = 0.0;
};

// Line 225: range 000000001635B830-000000001635B87D
void __cdecl EffectCardTypeForceCurse::~EffectCardTypeForceCurse(EffectCardTypeForceCurse *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'EffectCardTypeForceCurse + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  CardEffectBase::~CardEffectBase(this);
};

// Line 225: range 000000001635B87E-000000001635B8A8
void __cdecl EffectCardTypeForceCurse::~EffectCardTypeForceCurse(EffectCardTypeForceCurse *const this)
{
  EffectCardTypeForceCurse::~EffectCardTypeForceCurse(this);
  operator delete(this, 0x40uLL);
};

// Line 227: range 00000000162376BC-0000000016237798
void __cdecl EffectCardTypeForceCurse::EffectCardTypeForceCurse(
        EffectCardTypeForceCurse *const this,
        CardInfo *card_info)
{
  int (**v2)(...); // rdx

  CardEffectBase::CardEffectBase(this, card_info);
  v2 = (int (**)(...))(&`vtable for'EffectCardTypeForceCurse + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->card_type);
  }
  this->card_type = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->count);
  }
  this->count = 0;
};
