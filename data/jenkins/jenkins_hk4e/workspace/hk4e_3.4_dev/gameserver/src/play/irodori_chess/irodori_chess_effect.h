// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/play/irodori_chess/irodori_chess_effect.h

// Line 30: range 000000001623A4D8-000000001623A5EE
void __cdecl IrodoriChessEffectBase::IrodoriChessEffectBase(
        IrodoriChessEffectBase *const this,
        IrodoriChessCardInfo *card_info)
{
  int (**v2)(...); // rdx

  common::milog::DescribalBase::DescribalBase(this);
  std::enable_shared_from_this<IrodoriChessEffectBase>::enable_shared_from_this(&this->std::enable_shared_from_this<IrodoriChessEffectBase>);
  v2 = (int (**)(...))(&`vtable for'IrodoriChessEffectBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_info_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->card_info_);
  this->card_info_ = card_info;
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->effect_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->effect_type_);
  }
  this->effect_type_ = IRODORI_CHESS_CARD_EFFECT_DEFAULT;
  if ( *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->index_);
  }
  this->index_ = 0;
};

// Line 31: range 000000001623A5F0-000000001623A641
void __cdecl IrodoriChessEffectBase::~IrodoriChessEffectBase(IrodoriChessEffectBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'IrodoriChessEffectBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::enable_shared_from_this<IrodoriChessEffectBase>::~enable_shared_from_this(&this->std::enable_shared_from_this<IrodoriChessEffectBase>);
};

// Line 31: range 000000001623A642-000000001623A66C
void __cdecl IrodoriChessEffectBase::~IrodoriChessEffectBase(IrodoriChessEffectBase *const this)
{
  IrodoriChessEffectBase::~IrodoriChessEffectBase(this);
  operator delete(this, 0x28uLL);
};
