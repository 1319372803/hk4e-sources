// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/ability/actor_modifier.h

// Line 21: range 0000000013C419C4-0000000013C41EA1
void __cdecl ActorModifier::ActorModifier(ActorModifier *const this)
{
  int (**v1)(...); // rdx
  int (**v2)(...); // rdx

  BaseActorActionContext::BaseActorActionContext(this);
  std::enable_shared_from_this<ActorModifier>::enable_shared_from_this(&this->std::enable_shared_from_this<ActorModifier>);
  common::milog::DescribalBase::DescribalBase(&this->common::milog::DescribalBase);
  v1 = (int (**)(...))(&`vtable for'ActorModifier + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActorActionContext = v1;
  v2 = (int (**)(...))(&`vtable for'ActorModifier + 6);
  if ( *(_BYTE *)(((unsigned __int64)&this->common::milog::DescribalBase >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->common::milog::DescribalBase);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->modifier_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->modifier_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->modifier_id_);
  }
  this->modifier_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_mute_remote_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 108) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_mute_remote_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_mute_remote_);
  }
  this->is_mute_remote_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->attached_modifier_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->attached_modifier_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->attached_modifier_id_);
  }
  this->attached_modifier_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->attached_modifier_owner_entity_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->attached_modifier_owner_entity_id_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->attached_modifier_owner_entity_id_);
  }
  this->attached_modifier_owner_entity_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_attached_serverbuff_modifier_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->is_attached_serverbuff_modifier_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->is_attached_serverbuff_modifier_);
  }
  this->is_attached_serverbuff_modifier_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->apply_entity_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->apply_entity_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->apply_entity_id_);
  }
  this->apply_entity_id_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_attached_parent_ability >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_attached_parent_ability);
  this->is_attached_parent_ability = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->sbuff_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sbuff_uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->sbuff_uid_);
  }
  this->sbuff_uid_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_serverbuff_modifier >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_serverbuff_modifier);
  this->is_serverbuff_modifier = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->modifier_name_hash_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->modifier_name_hash_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->modifier_name_hash_);
  }
  this->modifier_name_hash_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->attach_name_hash_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->attach_name_hash_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->attach_name_hash_);
  }
  this->attach_name_hash_ = 0;
  std::weak_ptr<ActorAbility>::weak_ptr(&this->parent_ability_wtr_);
  std::weak_ptr<Creature>::weak_ptr(&this->owner_wtr_);
  std::shared_ptr<data::ConfigAbilityModifier>::shared_ptr(&this->config_modifier_ptr_);
  std::shared_ptr<ConfigAbilityImpl>::shared_ptr(&this->config_parent_ability_impl_ptr_);
  std::map<std::string,int>::map(&this->pile_idx_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->parent_owner_idx_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->parent_owner_idx_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->parent_owner_idx_);
  }
  this->parent_owner_idx_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->start_time_ms_);
  this->start_time_ms_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->exist_duration_ms_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->exist_duration_ms_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->exist_duration_ms_);
  }
  this->exist_duration_ms_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_durability_is_zero_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_durability_is_zero_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_durability_is_zero_);
  }
  this->is_durability_is_zero_ = 0;
};

// Line 21: range 0000000013D8A528-0000000013D8A617
void __cdecl ActorModifier::~ActorModifier(ActorModifier *const this)
{
  int (**v1)(...); // rdx
  int (**v2)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActorModifier + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActorActionContext = v1;
  v2 = (int (**)(...))(&`vtable for'ActorModifier + 6);
  if ( *(_BYTE *)(((unsigned __int64)&this->common::milog::DescribalBase >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->common::milog::DescribalBase);
  this->_vptr_DescribalBase = v2;
  std::map<std::string,int>::~map(&this->pile_idx_map_);
  std::shared_ptr<ConfigAbilityImpl>::~shared_ptr(&this->config_parent_ability_impl_ptr_);
  std::shared_ptr<data::ConfigAbilityModifier>::~shared_ptr(&this->config_modifier_ptr_);
  std::weak_ptr<Creature>::~weak_ptr(&this->owner_wtr_);
  std::weak_ptr<ActorAbility>::~weak_ptr(&this->parent_ability_wtr_);
  std::enable_shared_from_this<ActorModifier>::~enable_shared_from_this(&this->std::enable_shared_from_this<ActorModifier>);
  BaseActorActionContext::~BaseActorActionContext(this);
};

// Line 24: range 00000000130C9C91-00000000130C9C95
std::string *__fastcall `non-virtual thunk to'ActorModifier::getDesc[abi:cxx11](std::string *a1, __int64 a2)
{
  return ActorModifier::getDesc[abi:cxx11](a1, (const ActorModifier *const)(a2 - 96));
};

// Line 39: range 00000000131CD506-00000000131CD557
CreaturePtr __cdecl ActorModifier::getOwner(const ActorModifier *const this)
{
  CreaturePtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::weak_ptr<Creature>::lock((const std::weak_ptr<Creature> *const)this);
  result._M_ptr = (std::__shared_ptr<Creature,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 50: range 00000000131CD6A0-00000000131CD6CF
ConfigAbilityImplPtr __cdecl ActorModifier::getParentConfig(const ActorModifier *const this)
{
  __int64 v1; // rsi
  ConfigAbilityImplPtr result; // rax

  std::shared_ptr<ConfigAbilityImpl>::shared_ptr(
    (std::shared_ptr<ConfigAbilityImpl> *const)this,
    (const std::shared_ptr<ConfigAbilityImpl> *)(v1 + 200));
  result._M_ptr = (std::__shared_ptr<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 53: range 00000000131CD6EE-00000000131CD73F
ActorAbilityPtr __cdecl ActorModifier::getParentAbility(const ActorModifier *const this)
{
  ActorAbilityPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::weak_ptr<ActorAbility>::lock((const std::weak_ptr<ActorAbility> *const)this);
  result._M_ptr = (std::__shared_ptr<ActorAbility,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 53: range 00000000131CD6D0-00000000131CD6ED
const std::string *__cdecl ActorModifier::getName[abi:cxx11](const ActorModifier *const this)
{
  return &ActorModifier::getConfigRef(this)->modifier_name;
};

// Line 77: range 00000000131CD740-00000000131CD787
uint32_t __cdecl ActorModifier::getModifierId(const ActorModifier *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->modifier_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->modifier_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->modifier_id_);
  }
  return this->modifier_id_;
};

// Line 77: range 0000000013843036-0000000013843084
void __cdecl ActorModifier::setModifierId(ActorModifier *const this, uint32_t modifier_id__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->modifier_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->modifier_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->modifier_id_);
  }
  this->modifier_id_ = modifier_id__out;
};

// Line 78: range 0000000013843086-00000000138430DC
void __cdecl ActorModifier::setIsMuteRemote(ActorModifier *const this, bool is_mute_remote__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_mute_remote_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 108) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_mute_remote_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_mute_remote_);
  }
  this->is_mute_remote_ = is_mute_remote__out;
};

// Line 79: range 00000000138430DE-000000001384312C
void __cdecl ActorModifier::setAttachedModifierId(ActorModifier *const this, uint32_t attached_modifier_id__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->attached_modifier_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->attached_modifier_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->attached_modifier_id_);
  }
  this->attached_modifier_id_ = attached_modifier_id__out;
};

// Line 80: range 000000001384312E-0000000013843184
void __cdecl ActorModifier::setAttachedModifierOwnerEntityId(
        ActorModifier *const this,
        uint32_t attached_modifier_owner_entity_id__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->attached_modifier_owner_entity_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->attached_modifier_owner_entity_id_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->attached_modifier_owner_entity_id_);
  }
  this->attached_modifier_owner_entity_id_ = attached_modifier_owner_entity_id__out;
};

// Line 81: range 0000000013843186-00000000138431D4
void __cdecl ActorModifier::setIsAttachedServerBuffModifier(
        ActorModifier *const this,
        uint32_t is_attached_serverbuff_modifier__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_attached_serverbuff_modifier_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->is_attached_serverbuff_modifier_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->is_attached_serverbuff_modifier_);
  }
  this->is_attached_serverbuff_modifier_ = is_attached_serverbuff_modifier__out;
};

// Line 82: range 00000000131CD7D8-00000000131CD823
bool __cdecl ActorModifier::getIsAttachedParentAbility(const ActorModifier *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_attached_parent_ability >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_attached_parent_ability);
  return this->is_attached_parent_ability;
};

// Line 82: range 00000000131CD788-00000000131CD7D7
uint32_t __cdecl ActorModifier::getApplyEntityId(const ActorModifier *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->apply_entity_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->apply_entity_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->apply_entity_id_);
  }
  return this->apply_entity_id_;
};

// Line 82: range 00000000138431D6-000000001384322C
void __cdecl ActorModifier::setApplyEntityId(ActorModifier *const this, uint32_t apply_entity_id__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->apply_entity_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->apply_entity_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->apply_entity_id_);
  }
  this->apply_entity_id_ = apply_entity_id__out;
};

// Line 83: range 000000001384322E-0000000013843282
void __cdecl ActorModifier::setIsAttachedParentAbility(ActorModifier *const this, bool is_attached_parent_ability_out)
{
  if ( *(char *)(((unsigned __int64)&this->is_attached_parent_ability >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_attached_parent_ability);
  this->is_attached_parent_ability = is_attached_parent_ability_out;
};

// Line 84: range 0000000013843284-00000000138432D8
uint32_t __cdecl ActorModifier::getSbuffUid(const ActorModifier *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->sbuff_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sbuff_uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->sbuff_uid_);
  }
  return this->sbuff_uid_;
};

// Line 84: range 00000000138432DA-0000000013843335
void __cdecl ActorModifier::setSbuffUid(ActorModifier *const this, uint32_t sbuff_uid__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->sbuff_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sbuff_uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->sbuff_uid_);
  }
  this->sbuff_uid_ = sbuff_uid__out;
};

// Line 85: range 00000000131CD824-00000000131CD871
bool __cdecl ActorModifier::getIsServerBuffModifier(const ActorModifier *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_serverbuff_modifier >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_serverbuff_modifier);
  return this->is_serverbuff_modifier;
};

// Line 85: range 0000000013843336-000000001384338C
void __cdecl ActorModifier::setIsServerBuffModifier(ActorModifier *const this, bool is_serverbuff_modifier_out)
{
  if ( *(char *)(((unsigned __int64)&this->is_serverbuff_modifier >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_serverbuff_modifier);
  this->is_serverbuff_modifier = is_serverbuff_modifier_out;
};

// Line 86: range 00000000131CD872-00000000131CD8C6
int32_t __cdecl ActorModifier::getModifierNameHash(const ActorModifier *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->modifier_name_hash_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->modifier_name_hash_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->modifier_name_hash_);
  }
  return this->modifier_name_hash_;
};

// Line 87: range 000000001384338E-00000000138433E1
void __cdecl ActorModifier::setAttachNameHash(ActorModifier *const this, int32_t attach_name_hash__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->attach_name_hash_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->attach_name_hash_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->attach_name_hash_);
  }
  this->attach_name_hash_ = attach_name_hash__out;
};

// Line 144: range 0000000013842FE2-0000000013843034
bool __cdecl ActorModifier::getDurablityIsZero(const ActorModifier *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_durability_is_zero_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_durability_is_zero_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_durability_is_zero_);
  }
  return this->is_durability_is_zero_;
};
