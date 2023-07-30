// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/play/irodori_chess/irodori_chess_effect.hpp

// Line 37: range 000000001635B6C2-000000001635B6EC
void __cdecl IrodoriChessEffectAddServerGlobalValue::~IrodoriChessEffectAddServerGlobalValue(
        IrodoriChessEffectAddServerGlobalValue *const this)
{
  IrodoriChessEffectAddServerGlobalValue::~IrodoriChessEffectAddServerGlobalValue(this);
  operator delete(this, 0x80uLL);
};

// Line 37: range 000000001635B654-000000001635B6C1
void __cdecl IrodoriChessEffectAddServerGlobalValue::~IrodoriChessEffectAddServerGlobalValue(
        IrodoriChessEffectAddServerGlobalValue *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'IrodoriChessEffectAddServerGlobalValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::set<unsigned int>::~set(&this->gadget_set_);
  std::string::~string(&this->key_);
  IrodoriChessEffectBase::~IrodoriChessEffectBase(this);
};

// Line 43: range 000000001623A66E-000000001623A726
void __cdecl IrodoriChessEffectAddServerGlobalValue::IrodoriChessEffectAddServerGlobalValue(
        IrodoriChessEffectAddServerGlobalValue *const this,
        IrodoriChessCardInfo *card_info)
{
  int (**v2)(...); // rdx

  IrodoriChessEffectBase::IrodoriChessEffectBase(this, card_info);
  v2 = (int (**)(...))(&`vtable for'IrodoriChessEffectAddServerGlobalValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v2;
  std::string::basic_string(&this->key_);
  if ( *(_BYTE *)(((unsigned __int64)&this->value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value_);
  }
  this->value_ = 0.0;
  std::set<unsigned int>::set(&this->gadget_set_);
};

// Line 46: range 000000001635B5DA-000000001635B627
void __cdecl IrodoriChessEffectModifyRefundByCost::~IrodoriChessEffectModifyRefundByCost(
        IrodoriChessEffectModifyRefundByCost *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'IrodoriChessEffectModifyRefundByCost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  IrodoriChessEffectBase::~IrodoriChessEffectBase(this);
};

// Line 46: range 000000001635B628-000000001635B652
void __cdecl IrodoriChessEffectModifyRefundByCost::~IrodoriChessEffectModifyRefundByCost(
        IrodoriChessEffectModifyRefundByCost *const this)
{
  IrodoriChessEffectModifyRefundByCost::~IrodoriChessEffectModifyRefundByCost(this);
  operator delete(this, 0x30uLL);
};

// Line 50: range 000000001623A728-000000001623A7BE
void __cdecl IrodoriChessEffectModifyRefundByCost::IrodoriChessEffectModifyRefundByCost(
        IrodoriChessEffectModifyRefundByCost *const this,
        IrodoriChessCardInfo *card_info)
{
  int (**v2)(...); // rdx

  IrodoriChessEffectBase::IrodoriChessEffectBase(this, card_info);
  v2 = (int (**)(...))(&`vtable for'IrodoriChessEffectModifyRefundByCost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->factor_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->factor_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->factor_);
  }
  this->factor_ = 0;
};

// Line 53: range 000000001635B550-000000001635B5AD
void __cdecl IrodoriChessEffectAddAbilityGroup::~IrodoriChessEffectAddAbilityGroup(
        IrodoriChessEffectAddAbilityGroup *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'IrodoriChessEffectAddAbilityGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::set<std::string>::~set(&this->ability_group_set_);
  IrodoriChessEffectBase::~IrodoriChessEffectBase(this);
};

// Line 53: range 000000001635B5AE-000000001635B5D8
void __cdecl IrodoriChessEffectAddAbilityGroup::~IrodoriChessEffectAddAbilityGroup(
        IrodoriChessEffectAddAbilityGroup *const this)
{
  IrodoriChessEffectAddAbilityGroup::~IrodoriChessEffectAddAbilityGroup(this);
  operator delete(this, 0x58uLL);
};

// Line 57: range 000000001623A7C0-000000001623A828
void __cdecl IrodoriChessEffectAddAbilityGroup::IrodoriChessEffectAddAbilityGroup(
        IrodoriChessEffectAddAbilityGroup *const this,
        IrodoriChessCardInfo *card_info)
{
  int (**v2)(...); // rdx

  IrodoriChessEffectBase::IrodoriChessEffectBase(this, card_info);
  v2 = (int (**)(...))(&`vtable for'IrodoriChessEffectAddAbilityGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v2;
  std::set<std::string>::set(&this->ability_group_set_);
};

// Line 60: range 000000001635B4D6-000000001635B523
void __cdecl IrodoriChessEffectAddGearNum::~IrodoriChessEffectAddGearNum(IrodoriChessEffectAddGearNum *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'IrodoriChessEffectAddGearNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  IrodoriChessEffectBase::~IrodoriChessEffectBase(this);
};

// Line 60: range 000000001635B524-000000001635B54E
void __cdecl IrodoriChessEffectAddGearNum::~IrodoriChessEffectAddGearNum(IrodoriChessEffectAddGearNum *const this)
{
  IrodoriChessEffectAddGearNum::~IrodoriChessEffectAddGearNum(this);
  operator delete(this, 0x30uLL);
};

// Line 64: range 000000001623A82A-000000001623A8C0
void __cdecl IrodoriChessEffectAddGearNum::IrodoriChessEffectAddGearNum(
        IrodoriChessEffectAddGearNum *const this,
        IrodoriChessCardInfo *card_info)
{
  int (**v2)(...); // rdx

  IrodoriChessEffectBase::IrodoriChessEffectBase(this, card_info);
  v2 = (int (**)(...))(&`vtable for'IrodoriChessEffectAddGearNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->add_value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->add_value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->add_value_);
  }
  this->add_value_ = 0;
};

// Line 67: range 000000001635B4AA-000000001635B4D4
void __cdecl IrodoriChessEffectAddTargetGearNum::~IrodoriChessEffectAddTargetGearNum(
        IrodoriChessEffectAddTargetGearNum *const this)
{
  IrodoriChessEffectAddTargetGearNum::~IrodoriChessEffectAddTargetGearNum(this);
  operator delete(this, 0x60uLL);
};

// Line 67: range 000000001635B44C-000000001635B4A9
void __cdecl IrodoriChessEffectAddTargetGearNum::~IrodoriChessEffectAddTargetGearNum(
        IrodoriChessEffectAddTargetGearNum *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'IrodoriChessEffectAddTargetGearNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::set<unsigned int>::~set(&this->gadget_set_);
  IrodoriChessEffectBase::~IrodoriChessEffectBase(this);
};

// Line 72: range 000000001623A8C2-000000001623A968
void __cdecl IrodoriChessEffectAddTargetGearNum::IrodoriChessEffectAddTargetGearNum(
        IrodoriChessEffectAddTargetGearNum *const this,
        IrodoriChessCardInfo *card_info)
{
  int (**v2)(...); // rdx

  IrodoriChessEffectBase::IrodoriChessEffectBase(this, card_info);
  v2 = (int (**)(...))(&`vtable for'IrodoriChessEffectAddTargetGearNum + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->add_value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->add_value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->add_value_);
  }
  this->add_value_ = 0;
  std::set<unsigned int>::set(&this->gadget_set_);
};
