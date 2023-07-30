// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/ability/ability_comp.h

// Line 30: range 00000000131E7924-00000000131E793E
void __cdecl RefreshAbilityGuard::RefreshAbilityGuard(RefreshAbilityGuard *const this)
{
  std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature>>,std::allocator<std::weak_ptr<Creature>>>::set(&this->creature_set_);
};

// Line 43: range 00000000139A357C-00000000139A35A1
void __cdecl DynamicActorValue<std::any>::DynamicActorValue(
        DynamicActorValue<std::any> *const this,
        const DynamicActorValue<std::any> *a2)
{
  std::any::any(&this->value_, &a2->value_);
};

// Line 43: range 00000000133F5EFC-00000000133F5F16
void __cdecl DynamicActorValue<std::any>::~DynamicActorValue(DynamicActorValue<std::any> *const this)
{
  std::any::~any(&this->value_);
};

// Line 49: range 000000001325C616-000000001325C63E
std::any __cdecl DynamicActorValue<std::any>::getValue(const DynamicActorValue<std::any> *const this)
{
  const std::any *v1; // rsi
  std::any result; // rax

  std::any::any(&this->value_, v1);
  result._M_manager = (void (*)(std::any::_Op, const std::any *, std::any::_Arg *))this;
  return result;
};

// Line 51: range 0000000013270F10-0000000013270F34
void __cdecl DynamicActorValue<std::any>::setValue(DynamicActorValue<std::any> *const this, std::any *p_value)
{
  std::any::operator=(&this->value_, p_value);
};

// Line 59: range 0000000013847EE4-0000000013847FB7
void __cdecl ElementDurabilityInfo::ElementDurabilityInfo(ElementDurabilityInfo *const this)
{
  std::shared_ptr<ActorModifier>::shared_ptr(&this->modifier_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->reduce_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reduce_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reduce_ratio);
  }
  this->reduce_ratio = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->remaining_durability >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->remaining_durability >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->remaining_durability);
  }
  this->remaining_durability = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_tick_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_tick_time_ms_);
  this->last_tick_time_ms_ = 0LL;
};

// Line 59: range 000000001394746E-00000000139475ED
void __cdecl ElementDurabilityInfo::ElementDurabilityInfo(ElementDurabilityInfo *const this, ElementDurabilityInfo *a2)
{
  float reduce_ratio; // xmm0_4
  float remaining_durability; // xmm0_4
  uint64_t last_tick_time_ms; // rdx

  std::shared_ptr<ActorModifier>::shared_ptr(&this->modifier_ptr, &a2->modifier_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->reduce_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->reduce_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->reduce_ratio);
  }
  reduce_ratio = a2->reduce_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&this->reduce_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reduce_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reduce_ratio);
  }
  this->reduce_ratio = reduce_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&a2->remaining_durability >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->remaining_durability >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->remaining_durability);
  }
  remaining_durability = a2->remaining_durability;
  if ( *(_BYTE *)(((unsigned __int64)&this->remaining_durability >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->remaining_durability >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->remaining_durability);
  }
  this->remaining_durability = remaining_durability;
  if ( *(_BYTE *)(((unsigned __int64)&a2->last_tick_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->last_tick_time_ms_);
  last_tick_time_ms = a2->last_tick_time_ms_;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_tick_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_tick_time_ms_);
  this->last_tick_time_ms_ = last_tick_time_ms;
};

// Line 59: range 0000000013847FB8-0000000013847FD2
void __cdecl ElementDurabilityInfo::~ElementDurabilityInfo(ElementDurabilityInfo *const this)
{
  std::shared_ptr<ActorModifier>::~shared_ptr(&this->modifier_ptr);
};

// Line 80: range 0000000014839A66-0000000014839C4B
void __cdecl AbilityComp::~AbilityComp(AbilityComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AbilityComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_CreatureCompBase = v1;
  std::map<MixinRegisterFuncType,unsigned int>::~map(&this->mixin_register_func_count_map_);
  std::unordered_map<unsigned long,std::weak_ptr<BaseAbilityMixin>>::~unordered_map(&this->after_being_hit_mixin_wtr_map_);
  std::vector<unsigned int>::~vector(&this->initial_ability_name_vec_);
  std::unordered_map<std::string,unsigned int>::~unordered_map(&this->shield_ability_name_map_);
  std::unordered_set<unsigned int>::~unordered_set(&this->ability_name_hash_set_);
  std::vector<ElementDurabilityInfo>::~vector(&this->modifier_durability_vec_);
  std::set<std::shared_ptr<data::AttachElementTypeResistance>>::~set(&this->element_type_resistance_set_);
  std::set<std::shared_ptr<data::ConfigBuffDebuffResistance>>::~set(&this->resistance_buff_debuff_set_);
  std::unordered_map<data::ElementType,std::vector<std::shared_ptr<ActorModifier>>>::~unordered_map(&this->element_modifier_map_);
  std::unordered_map<data::AbilityState,unsigned int>::~unordered_map(&this->state_first_source_entity_id_map_);
  std::unordered_map<data::AbilityState,std::pair<std::weak_ptr<Player>,unsigned long>>::~unordered_map(&this->state_start_player_time_ms_map_);
  std::unordered_map<data::AbilityState,unsigned int>::~unordered_map(&this->state_count_map_);
  std::unordered_map<std::string,DynamicActorValue<std::any>>::~unordered_map(&this->server_dynamic_value_map_);
  std::unordered_map<std::string,DynamicActorValue<std::any>>::~unordered_map(&this->dynamic_value_map_);
  std::unordered_map<std::string,PileValue>::~unordered_map(&this->property_map_);
  std::vector<std::shared_ptr<ActorModifier>>::~vector(&this->applied_server_modifier_vec_);
  std::vector<std::shared_ptr<ActorModifier>>::~vector(&this->applied_modifier_vec_);
  std::map<unsigned int,std::shared_ptr<ActorAbility>>::~map(&this->applied_ability_map_);
  std::vector<data::ConfigEntityAbilityEntry>::~vector(&this->ability_entry_vec_);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::list<std::weak_ptr<BaseTalentMixin>>>>::~unordered_map(&this->target_ability_special_map_);
  std::unordered_map<unsigned long,unsigned int>::~unordered_map(&this->target_ability_name_map_);
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::~unordered_map(&this->target_ability_id_map_);
  std::list<unsigned int>::~list(&this->target_ability_id_list_);
  CreatureCompBase::~CreatureCompBase(this);
};

// Line 80: range 0000000014839C4C-0000000014839C76
void __cdecl AbilityComp::~AbilityComp(AbilityComp *const this)
{
  AbilityComp::~AbilityComp(this);
  operator delete(this, 0x468uLL);
};

// Line 83: range 0000000014612ECA-0000000014613389
void __cdecl ZN11AbilityCompCI216CreatureCompBaseER8Creature(AbilityComp *const this, Creature *a2)
{
  int (**v2)(...); // rdx

  CreatureCompBase::CreatureCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'AbilityComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_CreatureCompBase = v2;
  if ( *(char *)(((unsigned __int64)&this->is_init_finish_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_init_finish_);
  this->is_init_finish_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_client_inited_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_client_inited_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_client_inited_);
  }
  this->is_client_inited_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_guarded_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 18) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_guarded_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_guarded_);
  }
  this->is_guarded_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_need_refresh_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 19) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_need_refresh_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_need_refresh_);
  }
  this->is_need_refresh_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_killed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_killed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_killed_);
  }
  this->is_killed_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_muted_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 21) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_muted_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_muted_);
  }
  this->is_muted_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_immune_debuff_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 22) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_immune_debuff_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_immune_debuff_);
  }
  this->is_immune_debuff_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_ability_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_ability_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_ability_id_);
  }
  this->last_ability_id_ = 0;
  std::list<unsigned int>::list(&this->target_ability_id_list_);
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::unordered_map(&this->target_ability_id_map_);
  std::unordered_map<unsigned long,unsigned int>::unordered_map(&this->target_ability_name_map_);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::list<std::weak_ptr<BaseTalentMixin>>>>::unordered_map(&this->target_ability_special_map_);
  std::vector<data::ConfigEntityAbilityEntry>::vector(&this->ability_entry_vec_);
  std::map<unsigned int,std::shared_ptr<ActorAbility>>::map(&this->applied_ability_map_);
  std::vector<std::shared_ptr<ActorModifier>>::vector(&this->applied_modifier_vec_);
  std::vector<std::shared_ptr<ActorModifier>>::vector(&this->applied_server_modifier_vec_);
  std::unordered_map<std::string,PileValue>::unordered_map(&this->property_map_);
  std::unordered_map<std::string,DynamicActorValue<std::any>>::unordered_map(&this->dynamic_value_map_);
  std::unordered_map<std::string,DynamicActorValue<std::any>>::unordered_map(&this->server_dynamic_value_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->ability_state_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->ability_state_);
  this->ability_state_ = 0LL;
  std::unordered_map<data::AbilityState,unsigned int>::unordered_map(&this->state_count_map_);
  std::unordered_map<data::AbilityState,std::pair<std::weak_ptr<Player>,unsigned long>>::unordered_map(&this->state_start_player_time_ms_map_);
  std::unordered_map<data::AbilityState,unsigned int>::unordered_map(&this->state_first_source_entity_id_map_);
  std::unordered_map<data::ElementType,std::vector<std::shared_ptr<ActorModifier>>>::unordered_map(&this->element_modifier_map_);
  std::set<std::shared_ptr<data::ConfigBuffDebuffResistance>>::set(&this->resistance_buff_debuff_set_);
  std::set<std::shared_ptr<data::AttachElementTypeResistance>>::set(&this->element_type_resistance_set_);
  std::vector<ElementDurabilityInfo>::vector(&this->modifier_durability_vec_);
  std::unordered_set<unsigned int>::unordered_set(&this->ability_name_hash_set_);
  std::unordered_map<std::string,unsigned int>::unordered_map(&this->shield_ability_name_map_);
  std::vector<unsigned int>::vector(&this->initial_ability_name_vec_);
  std::pair<int,int>::pair<int,int,true>(&this->initial_ability_hash_pair_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_dash_modifier_applied_player_time_ms_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_dash_modifier_applied_player_time_ms_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_dash_modifier_applied_player_time_ms_);
  }
  this->last_dash_modifier_applied_player_time_ms_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dash_modifier_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dash_modifier_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dash_modifier_count_);
  }
  this->dash_modifier_count_ = 0;
  std::unordered_map<unsigned long,std::weak_ptr<BaseAbilityMixin>>::unordered_map(&this->after_being_hit_mixin_wtr_map_);
  std::map<MixinRegisterFuncType,unsigned int>::map(&this->mixin_register_func_count_map_);
};

// Line 86: range 00000000131C797E-00000000131C79A9
void __cdecl AbilityComp::setInitAbilities(
        AbilityComp *const this,
        const data::ConfigEntityAbilityEntryList *ability_entry_vec)
{
  std::vector<data::ConfigEntityAbilityEntry>::operator=(&this->ability_entry_vec_, ability_entry_vec);
};

// Line 87: range 0000000015A19E8C-0000000015A19EB7
void __cdecl AbilityComp::addInitAbility(AbilityComp *const this, const data::ConfigEntityAbilityEntry *ability_entry)
{
  std::vector<data::ConfigEntityAbilityEntry>::push_back(&this->ability_entry_vec_, ability_entry);
};

// Line 122: range 0000000015A19EB8-0000000015A19ECB
const std::vector<unsigned int> *__cdecl AbilityComp::getInitialAbilityNameVec(const AbilityComp *const this)
{
  return &this->initial_ability_name_vec_;
};

// Line 123: range 0000000015A19ECC-0000000015A19EF7
std::pair<unsigned int,unsigned int> __cdecl AbilityComp::getInitialAbilityHashPair(const AbilityComp *const this)
{
  std::pair<unsigned int,unsigned int> v2; // [rsp+18h] [rbp-8h] BYREF

  std::pair<unsigned int,unsigned int>::pair<int,int,true>(&v2, &this->initial_ability_hash_pair_);
  return v2;
};

// Line 484: range 00000000135372A8-00000000135372C2
void __cdecl DynamicActorValue<std::any>::DynamicActorValue(DynamicActorValue<std::any> *const this)
{
  std::any::any(&this->value_);
};

// Line 711: range 00000000131C79AA-00000000131C79F2
bool __cdecl AbilityComp::getIsInitFinish(const AbilityComp *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_init_finish_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_init_finish_);
  return this->is_init_finish_;
};

// Line 712: range 00000000131C79F4-00000000131C7A41
bool __cdecl AbilityComp::getIsClientInited(const AbilityComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_client_inited_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_client_inited_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_client_inited_);
  }
  return this->is_client_inited_;
};

// Line 713: range 000000001383F95E-000000001383F9B4
void __cdecl AbilityComp::setIsGuarded(AbilityComp *const this, bool is_guarded__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_guarded_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 18) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_guarded_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_guarded_);
  }
  this->is_guarded_ = is_guarded__out;
};

// Line 714: range 00000000131C7A42-00000000131C7A98
void __cdecl AbilityComp::setIsNeedRefresh(AbilityComp *const this, bool is_need_refresh__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_need_refresh_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 19) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_need_refresh_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_need_refresh_);
  }
  this->is_need_refresh_ = is_need_refresh__out;
};

// Line 759: range 000000001383F9B6-000000001383FA0A
uint32_t __cdecl AbilityComp::getLastDashModifierAppliedPlayerTimeMs(const AbilityComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_dash_modifier_applied_player_time_ms_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_dash_modifier_applied_player_time_ms_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_dash_modifier_applied_player_time_ms_);
  }
  return this->last_dash_modifier_applied_player_time_ms_;
};

// Line 760: range 000000001383FA0C-000000001383FA58
uint32_t __cdecl AbilityComp::getDashModifierCount(const AbilityComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->dash_modifier_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dash_modifier_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->dash_modifier_count_);
  }
  return this->dash_modifier_count_;
};

// Line 764: range 000000001383FA5A-000000001383FA84
std::vector<std::shared_ptr<ActorModifier>> *__cdecl AbilityComp::getAppliedModifierVec(
        AbilityComp *const this,
        bool is_server_modifier)
{
  if ( is_server_modifier )
    return &this->applied_server_modifier_vec_;
  else
    return &this->applied_modifier_vec_;
};

// Line 765: range 000000001383FA86-000000001383FAB0
const std::vector<std::shared_ptr<ActorModifier>> *__cdecl AbilityComp::getAppliedModifierVec(
        const AbilityComp *const this,
        bool is_server_modifier)
{
  if ( is_server_modifier )
    return &this->applied_server_modifier_vec_;
  else
    return &this->applied_modifier_vec_;
};

// Line 791: range 00000000138648C4-0000000013864A89
void __fastcall AbilityComp::createOrSetDynamicValue<float>(AbilityComp *const this, std::string *key, float value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  float v6; // xmm0_4
  std::unordered_map<std::string,DynamicActorValue<std::any>>::mapped_type *dynamic_value; // [rsp+28h] [rbp-78h]
  std::any p_value; // [rsp+30h] [rbp-70h] BYREF
  char v9[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 value:791";
  *(_QWORD *)(v3 + 16) = AbilityComp::createOrSetDynamicValue<float>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(float *)(v3 + 32) = value;
  dynamic_value = std::unordered_map<std::string,DynamicActorValue<std::any>>::operator[](
                    &this->dynamic_value_map_,
                    key);
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(&p_value, (float *)(v3 + 32));
  DynamicActorValue<std::any>::setValue(dynamic_value, &p_value);
  std::any::~any(&p_value);
  if ( AbilityComp::isServerGlobalValueKey(this, key) )
  {
    DynamicActorValue<std::any>::getValue((const DynamicActorValue<std::any> *const)&p_value);
    v6 = safeAnyCast<float>(&p_value);
    AbilityComp::triggerServerGlobalValueChangeEvent(this, key, v6);
    std::any::~any(&p_value);
  }
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 791: range 0000000013867DE4-0000000013867FA3
void __fastcall AbilityComp::createOrSetDynamicValue<unsigned int>(
        AbilityComp *const this,
        std::string *key,
        unsigned int value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  float v6; // xmm0_4
  std::unordered_map<std::string,DynamicActorValue<std::any>>::mapped_type *dynamic_value; // [rsp+28h] [rbp-78h]
  std::any p_value; // [rsp+30h] [rbp-70h] BYREF
  char v10[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 value:791";
  *(_QWORD *)(v3 + 16) = AbilityComp::createOrSetDynamicValue<unsigned int>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = value;
  dynamic_value = std::unordered_map<std::string,DynamicActorValue<std::any>>::operator[](
                    &this->dynamic_value_map_,
                    key);
  std::any::any<unsigned int &,unsigned int,std::any::_Manager_internal<unsigned int>,true,true>(
    &p_value,
    (unsigned int *)(v3 + 32));
  DynamicActorValue<std::any>::setValue(dynamic_value, &p_value);
  std::any::~any(&p_value);
  if ( AbilityComp::isServerGlobalValueKey(this, key) )
  {
    DynamicActorValue<std::any>::getValue((const DynamicActorValue<std::any> *const)&p_value);
    v6 = safeAnyCast<float>(&p_value);
    AbilityComp::triggerServerGlobalValueChangeEvent(this, key, v6);
    std::any::~any(&p_value);
  }
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 850: range 00000000138659CC-0000000013865BA5
__int64 __fastcall AbilityComp::setDynamicValue<float>(AbilityComp *const this, const std::string *key, float value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 result; // rax
  std::__detail::_Node_iterator_base<std::pair<const std::string,DynamicActorValue<std::any> >,true> __y; // [rsp+20h] [rbp-A0h] BYREF
  DynamicActorValue<std::any> *dynamic_value; // [rsp+28h] [rbp-98h]
  std::any p_value; // [rsp+30h] [rbp-90h] BYREF
  char v10[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 9 value:850 64 8 6 it:852";
  *(_QWORD *)(v3 + 16) = AbilityComp::setDynamicValue<float>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(float *)(v3 + 48) = value;
  *(std::unordered_map<std::string,DynamicActorValue<std::any>>::iterator *)(v3 + 64) = std::unordered_map<std::string,DynamicActorValue<std::any>>::find(
                                                                                          &this->dynamic_value_map_,
                                                                                          key);
  __y._M_cur = std::unordered_map<std::string,DynamicActorValue<std::any>>::end(&this->dynamic_value_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<std::string const,DynamicActorValue<std::any>>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,DynamicActorValue<std::any> >,true> *)(v3 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    dynamic_value = &std::__detail::_Node_iterator<std::pair<std::string const,DynamicActorValue<std::any>>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,DynamicActorValue<std::any> >,false,true> *const)(v3 + 64))->second;
    std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(&p_value, (float *)(v3 + 48));
    DynamicActorValue<std::any>::setValue(dynamic_value, &p_value);
    std::any::~any(&p_value);
    result = 1LL;
  }
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 864: range 000000001320255E-00000000132026A6
void __fastcall AbilityComp::createOrSetServerDynamicValue<float>(
        AbilityComp *const this,
        const std::string *key,
        float value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::unordered_map<std::string,DynamicActorValue<std::any>>::mapped_type *server_dynamic_value; // [rsp+28h] [rbp-78h]
  std::any p_value; // [rsp+30h] [rbp-70h] BYREF
  char v8[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 value:864";
  *(_QWORD *)(v3 + 16) = AbilityComp::createOrSetServerDynamicValue<float>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(float *)(v3 + 32) = value;
  server_dynamic_value = std::unordered_map<std::string,DynamicActorValue<std::any>>::operator[](
                           &this->server_dynamic_value_map_,
                           key);
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(&p_value, (float *)(v3 + 32));
  DynamicActorValue<std::any>::setValue(server_dynamic_value, &p_value);
  std::any::~any(&p_value);
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1016: range 00000000131F2C00-00000000131F317D
float __cdecl AbilityComp::getDynamicValue<float>(const AbilityComp *const this, const std::string *key)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  __m128i v5; // xmm0
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  float result; // xmm0_4
  GameserverService *v12; // rsi
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  const data::ElementDefine *ElementDefine; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  bool isEndsWith; // r14
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::__detail::_Node_iterator_base<std::pair<const std::string,DynamicActorValue<std::any> >,true> __y; // [rsp+10h] [rbp-E0h] BYREF
  const DynamicActorValue<std::any> *client_dynamic_value; // [rsp+18h] [rbp-D8h]
  const SecurityConfig *security_config; // [rsp+20h] [rbp-D0h]
  const DynamicActorValue<std::any> *server_dynamic_value; // [rsp+28h] [rbp-C8h]
  DynamicActorValue<std::any> v26; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v27; // [rsp+40h] [rbp-B0h] BYREF
  char v28[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 16 client_value:806 48 4 16 server_value:820 64 8 6 it:805";
  *(_QWORD *)(v2 + 16) = AbilityComp::getDynamicValue<float>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116352;
  *(std::unordered_map<std::string,DynamicActorValue<std::any>>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,DynamicActorValue<std::any>>::find(
                                                                                                &this->dynamic_value_map_,
                                                                                                key);
  v5 = 0LL;
  *(_DWORD *)(v2 + 32) = 0;
  __y._M_cur = std::unordered_map<std::string,DynamicActorValue<std::any>>::end(&this->dynamic_value_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<std::string const,DynamicActorValue<std::any>>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,DynamicActorValue<std::any> >,true> *)(v2 + 64),
         &__y) )
  {
    client_dynamic_value = &std::__detail::_Node_const_iterator<std::pair<std::string const,DynamicActorValue<std::any>>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,DynamicActorValue<std::any> >,false,true> *const)(v2 + 64))->second;
    DynamicActorValue<std::any>::getValue(&v26);
    *(float *)v5.m128i_i32 = safeAnyCast<float>(&v26.value_);
    *(_DWORD *)(v2 + 32) = _mm_cvtsi128_si32(v5);
    std::any::~any(&v26.value_);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v26);
  security_config = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->security_config;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v26);
  if ( *(_BYTE *)(((unsigned __int64)&security_config->is_use_server_dynamic_value >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_use_server_dynamic_value >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load1(&security_config->is_use_server_dynamic_value);
  }
  if ( !security_config->is_use_server_dynamic_value )
  {
LABEL_15:
    result = *(float *)(v2 + 32);
    goto LABEL_16;
  }
  *(std::unordered_map<std::string,DynamicActorValue<std::any>>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,DynamicActorValue<std::any>>::find(
                                                                                                &this->server_dynamic_value_map_,
                                                                                                key);
  __y._M_cur = std::unordered_map<std::string,DynamicActorValue<std::any>>::end(&this->server_dynamic_value_map_)._M_cur;
  if ( !std::__detail::operator!=<std::pair<std::string const,DynamicActorValue<std::any>>,true>(
          (const std::__detail::_Node_iterator_base<std::pair<const std::string,DynamicActorValue<std::any> >,true> *)(v2 + 64),
          &__y) )
  {
    v12 = ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v26);
    v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
    ElementDefine = JsonConfigMgr::getElementDefine(&v13->design_config.json_config_mgr);
    v15 = std::string::operator std::string_view(&ElementDefine->SUFFIX_REACTION_DAMAGE, v12);
    isEndsWith = common::tools::StringUtils::isEndsWith(key, (std::string_view)__PAIR128__(v16, v15));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v26);
    if ( isEndsWith )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/ability_comp.h",
        "getDynamicValue",
        841);
      v18 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              &v27,
              (const char (*)[19])"dynamic value key=");
      v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, key);
      v20 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v19, (const char (*)[32])off_24F58AE0);
      common::milog::MiLogStream::operator<<<float,(float *)0>(v20, (const float *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v27);
      result = 0.0;
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  server_dynamic_value = &std::__detail::_Node_const_iterator<std::pair<std::string const,DynamicActorValue<std::any>>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,DynamicActorValue<std::any> >,false,true> *const)(v2 + 64))->second;
  DynamicActorValue<std::any>::getValue(&v26);
  *(float *)v5.m128i_i32 = safeAnyCast<float>(&v26.value_);
  *(_DWORD *)(v2 + 48) = _mm_cvtsi128_si32(v5);
  std::any::~any(&v26.value_);
  if ( std::fabs(*(float *)(v2 + 48) - *(float *)(v2 + 32)) > 0.0099999998 )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/ability_comp.h",
      "getDynamicValue",
      826);
    v6 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v27, (const char (*)[19])"dynamic value key=");
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    v8 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v7, (const char (*)[15])" server_value=");
    v9 = common::milog::MiLogStream::operator<<<float,(float *)0>(v8, (const float *)(v2 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v9, (const char (*)[15])" client_value=");
    common::milog::MiLogStream::operator<<<float,(float *)0>(v10, (const float *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v27);
  }
  result = *(float *)(v2 + 48);
LABEL_16:
  if ( v28 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1044: range 0000000014A07D0C-0000000014A08265
unsigned int __cdecl AbilityComp::getDynamicValue<unsigned int>(const AbilityComp *const this, const std::string *key)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned int result; // eax
  GameserverService *v11; // rsi
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  const data::ElementDefine *ElementDefine; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  bool isEndsWith; // r14
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::__detail::_Node_iterator_base<std::pair<const std::string,DynamicActorValue<std::any> >,true> __y; // [rsp+10h] [rbp-E0h] BYREF
  const DynamicActorValue<std::any> *client_dynamic_value; // [rsp+18h] [rbp-D8h]
  const SecurityConfig *security_config; // [rsp+20h] [rbp-D0h]
  const DynamicActorValue<std::any> *server_dynamic_value; // [rsp+28h] [rbp-C8h]
  DynamicActorValue<std::any> v25; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v26; // [rsp+40h] [rbp-B0h] BYREF
  char v27[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 16 client_value:806 48 4 16 server_value:820 64 8 6 it:805";
  *(_QWORD *)(v2 + 16) = AbilityComp::getDynamicValue<unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116352;
  *(std::unordered_map<std::string,DynamicActorValue<std::any>>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,DynamicActorValue<std::any>>::find(
                                                                                                &this->dynamic_value_map_,
                                                                                                key);
  *(_DWORD *)(v2 + 32) = 0;
  __y._M_cur = std::unordered_map<std::string,DynamicActorValue<std::any>>::end(&this->dynamic_value_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<std::string const,DynamicActorValue<std::any>>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,DynamicActorValue<std::any> >,true> *)(v2 + 64),
         &__y) )
  {
    client_dynamic_value = &std::__detail::_Node_const_iterator<std::pair<std::string const,DynamicActorValue<std::any>>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,DynamicActorValue<std::any> >,false,true> *const)(v2 + 64))->second;
    DynamicActorValue<std::any>::getValue(&v25);
    *(_DWORD *)(v2 + 32) = safeAnyCast<unsigned int>(&v25.value_);
    std::any::~any(&v25.value_);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v25);
  security_config = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25)->security_config;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v25);
  if ( *(_BYTE *)(((unsigned __int64)&security_config->is_use_server_dynamic_value >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_use_server_dynamic_value >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load1(&security_config->is_use_server_dynamic_value);
  }
  if ( !security_config->is_use_server_dynamic_value )
  {
LABEL_15:
    result = *(_DWORD *)(v2 + 32);
    goto LABEL_16;
  }
  *(std::unordered_map<std::string,DynamicActorValue<std::any>>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,DynamicActorValue<std::any>>::find(
                                                                                                &this->server_dynamic_value_map_,
                                                                                                key);
  __y._M_cur = std::unordered_map<std::string,DynamicActorValue<std::any>>::end(&this->server_dynamic_value_map_)._M_cur;
  if ( !std::__detail::operator!=<std::pair<std::string const,DynamicActorValue<std::any>>,true>(
          (const std::__detail::_Node_iterator_base<std::pair<const std::string,DynamicActorValue<std::any> >,true> *)(v2 + 64),
          &__y) )
  {
    v11 = ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v25);
    v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
    ElementDefine = JsonConfigMgr::getElementDefine(&v12->design_config.json_config_mgr);
    v14 = std::string::operator std::string_view(&ElementDefine->SUFFIX_REACTION_DAMAGE, v11);
    isEndsWith = common::tools::StringUtils::isEndsWith(key, (std::string_view)__PAIR128__(v15, v14));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v25);
    if ( isEndsWith )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/ability_comp.h",
        "getDynamicValue",
        841);
      v17 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              &v26,
              (const char (*)[19])"dynamic value key=");
      v18 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, key);
      v19 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v18, (const char (*)[32])off_2552BFE0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v26);
      result = 0;
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  server_dynamic_value = &std::__detail::_Node_const_iterator<std::pair<std::string const,DynamicActorValue<std::any>>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,DynamicActorValue<std::any> >,false,true> *const)(v2 + 64))->second;
  DynamicActorValue<std::any>::getValue(&v25);
  *(_DWORD *)(v2 + 48) = safeAnyCast<unsigned int>(&v25.value_);
  std::any::~any(&v25.value_);
  if ( *(_DWORD *)(v2 + 48) != *(_DWORD *)(v2 + 32) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/ability_comp.h",
      "getDynamicValue",
      833);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v26, (const char (*)[19])"dynamic value key=");
    v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, key);
    v7 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" server_value=");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v8, (const char (*)[15])" client_value=");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v26);
  }
  result = *(_DWORD *)(v2 + 48);
LABEL_16:
  if ( v27 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 3252: range 000000001383F910-000000001383F95D
bool __cdecl AbilityComp::getIsGuarded(const AbilityComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_guarded_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 18) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_guarded_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_guarded_);
  }
  return this->is_guarded_;
};
