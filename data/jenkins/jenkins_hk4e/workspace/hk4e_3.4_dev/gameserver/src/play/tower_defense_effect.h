// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/play/tower_defense_effect.h

// Line 34: range 0000000016236456-0000000016236668
void __cdecl CardEffectBase::CardEffectBase(CardEffectBase *const this, CardInfo *card_info)
{
  int (**v2)(...); // rdx

  common::milog::DescribalBase::DescribalBase(this);
  std::enable_shared_from_this<CardEffectBase>::enable_shared_from_this(&this->std::enable_shared_from_this<CardEffectBase>);
  v2 = (int (**)(...))(&`vtable for'CardEffectBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->index);
  }
  this->index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_round >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->begin_round >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->begin_round);
  }
  this->begin_round = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->end_round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->end_round);
  }
  this->end_round = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_expired >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_expired >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_expired);
  }
  this->is_expired = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_info >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->card_info);
  this->card_info = card_info;
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->effect_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->effect_type);
  }
  this->effect_type = CHESS_CARD_EFFECT_DEFAULT;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_instant >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_instant >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_instant);
  }
  this->is_instant = 0;
};

// Line 35: range 000000001623667A-00000000162366CB
void __cdecl CardEffectBase::~CardEffectBase(CardEffectBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'CardEffectBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::enable_shared_from_this<CardEffectBase>::~enable_shared_from_this(&this->std::enable_shared_from_this<CardEffectBase>);
};

// Line 35: range 00000000162366CC-00000000162366F6
void __cdecl CardEffectBase::~CardEffectBase(CardEffectBase *const this)
{
  CardEffectBase::~CardEffectBase(this);
  operator delete(this, 0x38uLL);
};

// Line 45: range 000000001623666A-0000000016236678
void __cdecl CardEffectBase::onAdd(CardEffectBase *const this, Player *player)
{
  ;
};
