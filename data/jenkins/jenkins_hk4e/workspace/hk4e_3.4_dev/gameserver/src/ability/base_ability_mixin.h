// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/ability/base_ability_mixin.h

// Line 28: range 0000000013614056-00000000136140E7
void __cdecl BaseAbilityMixin::~BaseAbilityMixin(BaseAbilityMixin *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BaseAbilityMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v1;
  std::shared_ptr<data::ConfigAbilityMixin>::~shared_ptr(&this->config_mixin_ptr_);
  std::weak_ptr<ActorModifier>::~weak_ptr(&this->modifier_wtr_);
  std::weak_ptr<ActorAbility>::~weak_ptr(&this->ability_wtr_);
  std::weak_ptr<Creature>::~weak_ptr(&this->actor_wtr_);
  std::enable_shared_from_this<BaseAbilityMixin>::~enable_shared_from_this(&this->std::enable_shared_from_this<BaseAbilityMixin>);
};

// Line 28: range 00000000136140E8-0000000013614112
void __cdecl BaseAbilityMixin::~BaseAbilityMixin(BaseAbilityMixin *const this)
{
  BaseAbilityMixin::~BaseAbilityMixin(this);
  operator delete(this, 0x60uLL);
};

// Line 30: range 00000000131CCC50-00000000131CCC5A
void __cdecl BaseAbilityMixin::init(BaseAbilityMixin *const this)
{
  ;
};

// Line 31: range 00000000131CCC5C-00000000131CCC66
void __cdecl BaseAbilityMixin::onAdded(BaseAbilityMixin *const this)
{
  ;
};

// Line 32: range 00000000131CCC68-00000000131CCC72
void __cdecl BaseAbilityMixin::onRemoved(BaseAbilityMixin *const this)
{
  ;
};

// Line 33: range 00000000131CCC74-00000000131CCC82
void __cdecl BaseAbilityMixin::onBeingHit(BaseAbilityMixin *const this, AttackResult *attack_result)
{
  ;
};

// Line 34: range 00000000131CCC84-00000000131CCC92
void __cdecl BaseAbilityMixin::onHittingOther(BaseAbilityMixin *const this, AttackResult *attack_result)
{
  ;
};

// Line 35: range 00000000131CCC94-00000000131CCCA2
void __cdecl BaseAbilityMixin::onBeHittingOther(BaseAbilityMixin *const this, AttackResult *attack_result)
{
  ;
};

// Line 36: range 00000000131CCCA4-00000000131CCCB2
void __cdecl BaseAbilityMixin::onKill(BaseAbilityMixin *const this, const ChangeHpContext *context)
{
  ;
};

// Line 37: range 00000000131CCCB4-00000000131CCCC2
void __cdecl BaseAbilityMixin::onAfterBeingHit(BaseAbilityMixin *const this, AttackResult *attack_result)
{
  ;
};

// Line 38: range 00000000131CCCC4-00000000131CCCD2
bool __cdecl BaseAbilityMixin::isNeedRecover(const BaseAbilityMixin *const this)
{
  return 0;
};

// Line 40: range 0000000013842BB2-0000000013842C00
CreaturePtr __cdecl BaseAbilityMixin::getActor(const BaseAbilityMixin *const this)
{
  CreaturePtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::weak_ptr<Creature>::lock((const std::weak_ptr<Creature> *const)this);
  result._M_ptr = (std::__shared_ptr<Creature,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 43: range 00000000131CCD10-00000000131CCD5E
ActorAbilityPtr __cdecl BaseAbilityMixin::getAbility(const BaseAbilityMixin *const this)
{
  ActorAbilityPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::weak_ptr<ActorAbility>::lock((const std::weak_ptr<ActorAbility> *const)this);
  result._M_ptr = (std::__shared_ptr<ActorAbility,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 45: range 00000000131CCD9C-00000000131CCDEA
ActorModifierPtr __cdecl BaseAbilityMixin::getModifier(const BaseAbilityMixin *const this)
{
  ActorModifierPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::weak_ptr<ActorModifier>::lock((const std::weak_ptr<ActorModifier> *const)this);
  result._M_ptr = (std::__shared_ptr<ActorModifier,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 53: range 00000000131CCEBE-00000000131CCED0
void __cdecl BaseAbilityMixin::handleMixinInvokeEntry(
        BaseAbilityMixin *const this,
        const proto::AbilityInvokeEntry *entry,
        Player *from_player)
{
  ;
};

// Line 55: range 00000000131CCED2-00000000131CCEE0
void __cdecl BaseAbilityMixin::fillRecoverInfo(
        const BaseAbilityMixin *const this,
        proto::AbilityMixinRecoverInfo *info)
{
  ;
};

// Line 60: range 00000000131CCEE2-00000000131CCF30
void __cdecl BaseAbilityMixin::setInstId(BaseAbilityMixin *const this, int32_t inst_id__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->inst_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->inst_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->inst_id_);
  }
  this->inst_id_ = inst_id__out;
};

// Line 129: range 00000000131CCE90-00000000131CCEBC
data::ConfigAbilityMixinPtr __cdecl BaseAbilityMixin::getConfig(const BaseAbilityMixin *const this)
{
  const std::shared_ptr<data::ConfigAbilityMixin> *v1; // rsi
  data::ConfigAbilityMixinPtr result; // rax

  std::shared_ptr<data::ConfigAbilityMixin>::shared_ptr((std::shared_ptr<data::ConfigAbilityMixin> *const)this, v1 + 5);
  result._M_ptr = (std::__shared_ptr<data::ConfigAbilityMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};
