// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/ability/actor_ability.h

// Line 32: range 0000000013C413FA-0000000013C416E0
void __cdecl ActorAbility::ActorAbility(ActorAbility *const this)
{
  int (**v1)(...); // rdx
  int (**v2)(...); // rdx

  BaseActorActionContext::BaseActorActionContext(this);
  std::enable_shared_from_this<ActorAbility>::enable_shared_from_this(&this->std::enable_shared_from_this<ActorAbility>);
  common::milog::DescribalBase::DescribalBase(&this->common::milog::DescribalBase);
  v1 = (int (**)(...))(&`vtable for'ActorAbility + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActorActionContext = v1;
  v2 = (int (**)(...))(&`vtable for'ActorAbility + 6);
  if ( *(_BYTE *)(((unsigned __int64)&this->common::milog::DescribalBase >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->common::milog::DescribalBase);
  this->_vptr_DescribalBase = v2;
  std::weak_ptr<Creature>::weak_ptr(&this->caster_wtr_);
  std::shared_ptr<data::ConfigAbility>::shared_ptr(&this->config_ability_ptr_);
  std::map<int,std::any>::map(&this->server_override_map_);
  std::map<int,std::any>::map(&this->override_map_);
  std::vector<std::shared_ptr<ActorModifier>>::vector(&this->owned_modifier_vec_);
  if ( *(_BYTE *)(((unsigned __int64)&this->ability_name_hash_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ability_name_hash_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ability_name_hash_);
  }
  this->ability_name_hash_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->override_name_hash_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->override_name_hash_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->override_name_hash_);
  }
  this->override_name_hash_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->ability_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ability_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ability_id_);
  }
  this->ability_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->argument_special_value_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->argument_special_value_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->argument_special_value_);
  }
  this->argument_special_value_ = 0.0;
  if ( *(char *)(((unsigned __int64)&this->argument_received_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->argument_received_);
  this->argument_received_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->elem_strength_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->elem_strength_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->elem_strength_);
  }
  this->elem_strength_ = 0.0;
  if ( *(char *)(((unsigned __int64)&this->is_level_element_ability_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_level_element_ability_);
  this->is_level_element_ability_ = 0;
};

// Line 32: range 0000000013D8A646-0000000013D8A731
void __cdecl ActorAbility::~ActorAbility(ActorAbility *const this)
{
  int (**v1)(...); // rdx
  int (**v2)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActorAbility + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActorActionContext = v1;
  v2 = (int (**)(...))(&`vtable for'ActorAbility + 6);
  if ( *(_BYTE *)(((unsigned __int64)&this->common::milog::DescribalBase >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->common::milog::DescribalBase);
  this->_vptr_DescribalBase = v2;
  std::vector<std::shared_ptr<ActorModifier>>::~vector(&this->owned_modifier_vec_);
  std::map<int,std::any>::~map(&this->override_map_);
  std::map<int,std::any>::~map(&this->server_override_map_);
  std::shared_ptr<data::ConfigAbility>::~shared_ptr(&this->config_ability_ptr_);
  std::weak_ptr<Creature>::~weak_ptr(&this->caster_wtr_);
  std::enable_shared_from_this<ActorAbility>::~enable_shared_from_this(&this->std::enable_shared_from_this<ActorAbility>);
  BaseActorActionContext::~BaseActorActionContext(this);
};

// Line 35: range 00000000130C5664-00000000130C5668
std::string *__fastcall `non-virtual thunk to'ActorAbility::getDesc[abi:cxx11](std::string *a1, __int64 a2)
{
  return ActorAbility::getDesc[abi:cxx11](a1, (const ActorAbility *const)(a2 - 96));
};

// Line 44: range 00000000131CD3AC-00000000131CD3FA
CreaturePtr __cdecl ActorAbility::getCaster(ActorAbility *const this)
{
  CreaturePtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::weak_ptr<Creature>::lock((const std::weak_ptr<Creature> *const)this);
  result._M_ptr = (std::__shared_ptr<Creature,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 47: range 00000000131CD3FC-00000000131CD44A
CreaturePtr __cdecl ActorAbility::getOwner(const ActorAbility *const this)
{
  CreaturePtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::weak_ptr<Creature>::lock((const std::weak_ptr<Creature> *const)this);
  result._M_ptr = (std::__shared_ptr<Creature,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 59: range 00000000131CD44C-00000000131CD469
const std::string *__cdecl ActorAbility::getName[abi:cxx11](const ActorAbility *const this)
{
  return &ActorAbility::getConfigRef(this)->ability_name;
};

// Line 59: range 00000000131CD46A-00000000131CD4B6
int32_t __cdecl ActorAbility::getAbilityNameHash(const ActorAbility *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ability_name_hash_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ability_name_hash_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->ability_name_hash_);
  }
  return this->ability_name_hash_;
};

// Line 62: range 0000000013842D82-0000000013842D95
std::vector<std::shared_ptr<ActorModifier>> *__cdecl ActorAbility::getOwnedModifiers(ActorAbility *const this)
{
  return &this->owned_modifier_vec_;
};

// Line 94: range 0000000013842D96-0000000013842DA9
const std::map<int,std::any> *__cdecl ActorAbility::getOverrideMap(const ActorAbility *const this)
{
  return &this->override_map_;
};

// Line 97: range 0000000013842DAA-0000000013842DCC
bool __cdecl ActorAbility::hasOverride(const ActorAbility *const this)
{
  return !std::map<int,std::any>::empty(&this->override_map_);
};

// Line 129: range 0000000013842D54-0000000013842D80
data::ConfigAbilityPtr __cdecl ActorAbility::getConfig(const ActorAbility *const this)
{
  __int64 v1; // rsi
  data::ConfigAbilityPtr result; // rax

  std::shared_ptr<data::ConfigAbility>::shared_ptr(
    (std::shared_ptr<data::ConfigAbility> *const)this,
    (const std::shared_ptr<data::ConfigAbility> *)(v1 + 120));
  result._M_ptr = (std::__shared_ptr<data::ConfigAbility,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 139: range 0000000013842DCE-0000000013842E22
int32_t __cdecl ActorAbility::getOverrideNameHash(const ActorAbility *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->override_name_hash_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->override_name_hash_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->override_name_hash_);
  }
  return this->override_name_hash_;
};

// Line 140: range 00000000131CD4B8-00000000131CD504
uint32_t __cdecl ActorAbility::getAbilityId(const ActorAbility *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ability_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ability_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->ability_id_);
  }
  return this->ability_id_;
};

// Line 140: range 0000000013842E24-0000000013842E77
void __cdecl ActorAbility::setAbilityId(ActorAbility *const this, uint32_t ability_id__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ability_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ability_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ability_id_);
  }
  this->ability_id_ = ability_id__out;
};

// Line 141: range 0000000013842E78-0000000013842ED9
void __cdecl ActorAbility::setArgumentSpecialValue(ActorAbility *const this, float argument_special_value__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->argument_special_value_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->argument_special_value_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->argument_special_value_);
  }
  this->argument_special_value_ = argument_special_value__out;
};

// Line 142: range 0000000013842EDA-0000000013842F30
void __cdecl ActorAbility::setArgumentReceived(ActorAbility *const this, bool argument_received__out)
{
  if ( *(char *)(((unsigned __int64)&this->argument_received_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->argument_received_);
  this->argument_received_ = argument_received__out;
};

// Line 143: range 0000000013842F32-0000000013842F93
void __cdecl ActorAbility::setElemStrength(ActorAbility *const this, float elem_strength__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->elem_strength_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->elem_strength_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->elem_strength_);
  }
  this->elem_strength_ = elem_strength__out;
};

// Line 144: range 0000000013842F94-0000000013842FE1
bool __cdecl ActorAbility::getIsLevelElementAbility(const ActorAbility *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_level_element_ability_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_level_element_ability_);
  return this->is_level_element_ability_;
};
