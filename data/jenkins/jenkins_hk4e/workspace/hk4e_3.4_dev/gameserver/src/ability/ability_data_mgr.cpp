// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/ability/ability_data_mgr.cpp

// Line 20: range 00000000130C2A64-00000000130C3901
void __cdecl AbilityDataMgr::AbilityDataMgr(AbilityDataMgr *const this)
{
  int (**v1)(...); // rdx

  data::AbilityProperty::AbilityProperty(this);
  v1 = (int (**)(...))(&`vtable for'AbilityDataMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_AbilityProperty = v1;
  std::unordered_map<std::string,std::set<data::FightPropType>>::unordered_map(&this->fight_prop_map_);
  std::unordered_map<data::FightPropType,std::string>::unordered_map(&this->clamp_ability_prop_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->ABILITY_STATE_DEBUFF >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->ABILITY_STATE_DEBUFF);
  this->ABILITY_STATE_DEBUFF = 268500992LL;
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_MAX_HP_RATIO, FIGHT_PROP_HP_PERCENT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_MAX_HP_DELTA, FIGHT_PROP_HP);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_DEFENCE_RATIO, FIGHT_PROP_DEFENSE_PERCENT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_DEFENCE_DELTA, FIGHT_PROP_DEFENSE);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_DEFENCE_DELTA, FIGHT_PROP_NONEXTRA_DEFENSE);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_DEFENCE_EXTRA_DELTA, FIGHT_PROP_DEFENSE);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_ATTACK_RATIO, FIGHT_PROP_ATTACK_PERCENT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_ATTACK_DELTA, FIGHT_PROP_ATTACK);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_ATTACK_DELTA, FIGHT_PROP_NONEXTRA_ATTACK);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_ATTACK_EXTRA_DELTA, FIGHT_PROP_ATTACK);
  AbilityDataMgr::defineAbilityClampFightProp(this, &this->ACTOR_CRITICAL_DELTA, FIGHT_PROP_CRITICAL);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_CRITICAL_DELTA, FIGHT_PROP_NONEXTRA_CRITICAL);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_CRITICAL_EXTRA_DELTA, FIGHT_PROP_CRITICAL);
  AbilityDataMgr::defineAbilityClampFightProp(this, &this->ACTOR_ANTI_CRITICAL_DELTA, FIGHT_PROP_ANTI_CRITICAL);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_ANTI_CRITICAL_DELTA, FIGHT_PROP_NONEXTRA_ANTI_CRITICAL);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_ANTI_CRITICAL_EXTRA_DELTA, FIGHT_PROP_ANTI_CRITICAL);
  AbilityDataMgr::defineAbilityClampFightProp(this, &this->ACTOR_CRITICAL_HURT_DELTA, FIGHT_PROP_CRITICAL_HURT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_CRITICAL_HURT_DELTA, FIGHT_PROP_NONEXTRA_CRITICAL_HURT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_CRITICAL_HURT_EXTRA_DELTA, FIGHT_PROP_CRITICAL_HURT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_HIT_HEAD_DMG_RATIO, FIGHT_PROP_HIT_HEAD_ADD_HURT);
  AbilityDataMgr::defineAbilityClampFightProp(this, &this->ACTOR_CHARGE_EFFICIENCY_DELTA, FIGHT_PROP_CHARGE_EFFICIENCY);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_CHARGE_EFFICIENCY_DELTA, FIGHT_PROP_NONEXTRA_CHARGE_EFFICIENCY);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_CHARGE_EFFICIENCY_EXTRA_DELTA, FIGHT_PROP_CHARGE_EFFICIENCY);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_ADD_HURT_DELTA, FIGHT_PROP_ADD_HURT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_SUB_HURT_DELTA, FIGHT_PROP_SUB_HURT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_HEAL_ADD_DELTA, FIGHT_PROP_HEAL_ADD);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_HEALED_ADD_DELTA, FIGHT_PROP_HEALED_ADD);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_ENERGY_COST_DELTA, (data::FightPropType)-1);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_EFFECT_HIT_DELTA, FIGHT_PROP_EFFECT_HIT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_EFFECT_RESIST_DELTA, FIGHT_PROP_EFFECT_RESIST);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_FREEZE_RESIST_DELTA, FIGHT_PROP_FREEZE_RESIST);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_DIZZY_RESIST_DELTA, FIGHT_PROP_DIZZY_RESIST);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_FREEZE_SHORTEN_DELTA, FIGHT_PROP_FREEZE_SHORTEN);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_DIZZY_SHORTEN_DELTA, FIGHT_PROP_DIZZY_SHORTEN);
  AbilityDataMgr::defineAbilityClampFightProp(this, &this->ACTOR_FIRE_ADD_HURT_DELTA, FIGHT_PROP_FIRE_ADD_HURT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_FIRE_ADD_HURT_DELTA, FIGHT_PROP_NONEXTRA_FIRE_ADD_HURT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_FIRE_ADD_HURT_EXTRA_DELTA, FIGHT_PROP_FIRE_ADD_HURT);
  AbilityDataMgr::defineAbilityClampFightProp(this, &this->ACTOR_ELEC_ADD_HURT_DELTA, FIGHT_PROP_ELEC_ADD_HURT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_ELEC_ADD_HURT_DELTA, FIGHT_PROP_NONEXTRA_ELEC_ADD_HURT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_ELEC_ADD_HURT_EXTRA_DELTA, FIGHT_PROP_ELEC_ADD_HURT);
  AbilityDataMgr::defineAbilityClampFightProp(this, &this->ACTOR_WATER_ADD_HURT_DELTA, FIGHT_PROP_WATER_ADD_HURT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_WATER_ADD_HURT_DELTA, FIGHT_PROP_NONEXTRA_WATER_ADD_HURT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_WATER_ADD_HURT_EXTRA_DELTA, FIGHT_PROP_WATER_ADD_HURT);
  AbilityDataMgr::defineAbilityClampFightProp(this, &this->ACTOR_GRASS_ADD_HURT_DELTA, FIGHT_PROP_GRASS_ADD_HURT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_GRASS_ADD_HURT_DELTA, FIGHT_PROP_NONEXTRA_GRASS_ADD_HURT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_GRASS_ADD_HURT_EXTRA_DELTA, FIGHT_PROP_GRASS_ADD_HURT);
  AbilityDataMgr::defineAbilityClampFightProp(this, &this->ACTOR_WIND_ADD_HURT_DELTA, FIGHT_PROP_WIND_ADD_HURT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_WIND_ADD_HURT_DELTA, FIGHT_PROP_NONEXTRA_WIND_ADD_HURT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_WIND_ADD_HURT_EXTRA_DELTA, FIGHT_PROP_WIND_ADD_HURT);
  AbilityDataMgr::defineAbilityClampFightProp(this, &this->ACTOR_ICE_ADD_HURT_DELTA, FIGHT_PROP_ICE_ADD_HURT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_ICE_ADD_HURT_DELTA, FIGHT_PROP_NONEXTRA_ICE_ADD_HURT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_ICE_ADD_HURT_EXTRA_DELTA, FIGHT_PROP_ICE_ADD_HURT);
  AbilityDataMgr::defineAbilityClampFightProp(this, &this->ACTOR_ROCK_ADD_HURT_DELTA, FIGHT_PROP_ROCK_ADD_HURT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_ROCK_ADD_HURT_DELTA, FIGHT_PROP_NONEXTRA_ROCK_ADD_HURT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_ROCK_ADD_HURT_EXTRA_DELTA, FIGHT_PROP_ROCK_ADD_HURT);
  AbilityDataMgr::defineAbilityClampFightProp(this, &this->ACTOR_FIRE_SUB_HURT_DELTA, FIGHT_PROP_FIRE_SUB_HURT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_FIRE_SUB_HURT_DELTA, FIGHT_PROP_NONEXTRA_FIRE_SUB_HURT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_FIRE_SUB_HURT_EXTRA_DELTA, FIGHT_PROP_FIRE_SUB_HURT);
  AbilityDataMgr::defineAbilityClampFightProp(this, &this->ACTOR_PHYSICAL_ADD_HURT_DELTA, FIGHT_PROP_PHYSICAL_ADD_HURT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_PHYSICAL_ADD_HURT_DELTA, FIGHT_PROP_NONEXTRA_PHYSICAL_ADD_HURT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_PHYSICAL_ADD_HURT_EXTRA_DELTA, FIGHT_PROP_PHYSICAL_ADD_HURT);
  AbilityDataMgr::defineAbilityClampFightProp(this, &this->ACTOR_PHYSICAL_SUB_HURT_DELTA, FIGHT_PROP_PHYSICAL_SUB_HURT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_PHYSICAL_SUB_HURT_DELTA, FIGHT_PROP_NONEXTRA_PHYSICAL_SUB_HURT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_PHYSICAL_SUB_HURT_EXTRA_DELTA, FIGHT_PROP_PHYSICAL_SUB_HURT);
  AbilityDataMgr::defineAbilityClampFightProp(this, &this->ACTOR_ELEC_SUB_HURT_DELTA, FIGHT_PROP_ELEC_SUB_HURT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_ELEC_SUB_HURT_DELTA, FIGHT_PROP_NONEXTRA_ELEC_SUB_HURT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_ELEC_SUB_HURT_EXTRA_DELTA, FIGHT_PROP_ELEC_SUB_HURT);
  AbilityDataMgr::defineAbilityClampFightProp(this, &this->ACTOR_WATER_SUB_HURT_DELTA, FIGHT_PROP_WATER_SUB_HURT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_WATER_SUB_HURT_DELTA, FIGHT_PROP_NONEXTRA_WATER_SUB_HURT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_WATER_SUB_HURT_EXTRA_DELTA, FIGHT_PROP_WATER_SUB_HURT);
  AbilityDataMgr::defineAbilityClampFightProp(this, &this->ACTOR_GRASS_SUB_HURT_DELTA, FIGHT_PROP_GRASS_SUB_HURT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_GRASS_SUB_HURT_DELTA, FIGHT_PROP_NONEXTRA_GRASS_SUB_HURT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_GRASS_SUB_HURT_EXTRA_DELTA, FIGHT_PROP_GRASS_SUB_HURT);
  AbilityDataMgr::defineAbilityClampFightProp(this, &this->ACTOR_WIND_SUB_HURT_DELTA, FIGHT_PROP_WIND_SUB_HURT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_WIND_SUB_HURT_DELTA, FIGHT_PROP_NONEXTRA_WIND_SUB_HURT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_WIND_SUB_HURT_EXTRA_DELTA, FIGHT_PROP_WIND_SUB_HURT);
  AbilityDataMgr::defineAbilityClampFightProp(this, &this->ACTOR_ICE_SUB_HURT_DELTA, FIGHT_PROP_ICE_SUB_HURT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_ICE_SUB_HURT_DELTA, FIGHT_PROP_NONEXTRA_ICE_SUB_HURT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_ICE_SUB_HURT_EXTRA_DELTA, FIGHT_PROP_ICE_SUB_HURT);
  AbilityDataMgr::defineAbilityClampFightProp(this, &this->ACTOR_ROCK_SUB_HURT_DELTA, FIGHT_PROP_ROCK_SUB_HURT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_ROCK_SUB_HURT_DELTA, FIGHT_PROP_NONEXTRA_ROCK_SUB_HURT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_ROCK_SUB_HURT_EXTRA_DELTA, FIGHT_PROP_ROCK_SUB_HURT);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_DEFENCE_IGNORE_RATIO, FIGHT_PROP_DEFENCE_IGNORE_RATIO);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_DEFENCE_IGNORE_DELTA, FIGHT_PROP_DEFENCE_IGNORE_DELTA);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_ELEM_MASTERY_DELTA, FIGHT_PROP_ELEMENT_MASTERY);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_ELEM_MASTERY_DELTA, FIGHT_PROP_NONEXTRA_ELEMENT_MASTERY);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_ELEM_MASTERY_EXTRA_DELTA, FIGHT_PROP_ELEMENT_MASTERY);
  AbilityDataMgr::defineAbilityClampFightProp(this, &this->ACTOR_SKILL_CD_MINUS_RATIO, FIGHT_PROP_SKILL_CD_MINUS_RATIO);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_SKILL_CD_MINUS_RATIO, FIGHT_PROP_NONEXTRA_SKILL_CD_MINUS_RATIO);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_SKILL_CD_MINUS_EXTRA_RATIO, FIGHT_PROP_SKILL_CD_MINUS_RATIO);
  AbilityDataMgr::defineAbilityClampFightProp(
    this,
    &this->ACTOR_SHIELD_COST_MINUS_RATIO,
    FIGHT_PROP_SHIELD_COST_MINUS_RATIO);
  AbilityDataMgr::defineFightProp(
    this,
    &this->ACTOR_SHIELD_COST_MINUS_RATIO,
    FIGHT_PROP_NONEXTRA_SHIELD_COST_MINUS_RATIO);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_SHIELD_COST_MINUS_EXTRA_RATIO, FIGHT_PROP_SHIELD_COST_MINUS_RATIO);
  AbilityDataMgr::defineFightProp(this, &this->ACTOR_ELEM_REACT_CRITICAL_DELTA, FIGHT_PROP_ELEM_REACT_CRITICAL);
  AbilityDataMgr::defineFightProp(
    this,
    &this->ACTOR_ELEM_REACT_CRITICAL_HURT_DELTA,
    FIGHT_PROP_ELEM_REACT_CRITICAL_HURT);
  AbilityDataMgr::defineFightProp(
    this,
    &this->ACTOR_ELEM_REACT_EXPLODE_CRITICAL_DELTA,
    FIGHT_PROP_ELEM_REACT_EXPLODE_CRITICAL);
  AbilityDataMgr::defineFightProp(
    this,
    &this->ACTOR_ELEM_REACT_EXPLODE_CRITICAL_HURT_DELTA,
    FIGHT_PROP_ELEM_REACT_EXPLODE_CRITICAL_HURT);
  AbilityDataMgr::defineFightProp(
    this,
    &this->ACTOR_ELEM_REACT_SWIRL_CRITICAL_DELTA,
    FIGHT_PROP_ELEM_REACT_SWIRL_CRITICAL);
  AbilityDataMgr::defineFightProp(
    this,
    &this->ACTOR_ELEM_REACT_SWIRL_CRITICAL_HURT_DELTA,
    FIGHT_PROP_ELEM_REACT_SWIRL_CRITICAL_HURT);
  AbilityDataMgr::defineFightProp(
    this,
    &this->ACTOR_ELEM_REACT_ELECTRIC_CRITICAL_DELTA,
    FIGHT_PROP_ELEM_REACT_ELECTRIC_CRITICAL);
  AbilityDataMgr::defineFightProp(
    this,
    &this->ACTOR_ELEM_REACT_ELECTRIC_CRITICAL_HURT_DELTA,
    FIGHT_PROP_ELEM_REACT_ELECTRIC_CRITICAL_HURT);
  AbilityDataMgr::defineFightProp(
    this,
    &this->ACTOR_ELEM_REACT_SCONDUCT_CRITICAL_DELTA,
    FIGHT_PROP_ELEM_REACT_SCONDUCT_CRITICAL);
  AbilityDataMgr::defineFightProp(
    this,
    &this->ACTOR_ELEM_REACT_SCONDUCT_CRITICAL_HURT_DELTA,
    FIGHT_PROP_ELEM_REACT_SCONDUCT_CRITICAL_HURT);
  AbilityDataMgr::defineFightProp(
    this,
    &this->ACTOR_ELEM_REACT_BURN_CRITICAL_DELTA,
    FIGHT_PROP_ELEM_REACT_BURN_CRITICAL);
  AbilityDataMgr::defineFightProp(
    this,
    &this->ACTOR_ELEM_REACT_BURN_CRITICAL_HURT_DELTA,
    FIGHT_PROP_ELEM_REACT_BURN_CRITICAL_HURT);
  AbilityDataMgr::defineFightProp(
    this,
    &this->ACTOR_ELEM_REACT_FROZENBROKEN_CRITICAL_DELTA,
    FIGHT_PROP_ELEM_REACT_FROZENBROKEN_CRITICAL);
  AbilityDataMgr::defineFightProp(
    this,
    &this->ACTOR_ELEM_REACT_FROZENBROKEN_CRITICAL_HURT_DELTA,
    FIGHT_PROP_ELEM_REACT_FROZENBROKEN_CRITICAL_HURT);
  AbilityDataMgr::defineFightProp(
    this,
    &this->ACTOR_ELEM_REACT_OVERGROW_CRITICAL_DELTA,
    FIGHT_PROP_ELEM_REACT_OVERGROW_CRITICAL);
  AbilityDataMgr::defineFightProp(
    this,
    &this->ACTOR_ELEM_REACT_OVERGROW_CRITICAL_HURT_DELTA,
    FIGHT_PROP_ELEM_REACT_OVERGROW_CRITICAL_HURT);
  AbilityDataMgr::defineFightProp(
    this,
    &this->ACTOR_ELEM_REACT_OVERGROW_FIRE_CRITICAL_DELTA,
    FIGHT_PROP_ELEM_REACT_OVERGROW_FIRE_CRITICAL);
  AbilityDataMgr::defineFightProp(
    this,
    &this->ACTOR_ELEM_REACT_OVERGROW_FIRE_CRITICAL_HURT_DELTA,
    FIGHT_PROP_ELEM_REACT_OVERGROW_FIRE_CRITICAL_HURT);
  AbilityDataMgr::defineFightProp(
    this,
    &this->ACTOR_ELEM_REACT_OVERGROW_ELECTRIC_CRITICAL_DELTA,
    FIGHT_PROP_ELEM_REACT_OVERGROW_ELECTRIC_CRITICAL);
  AbilityDataMgr::defineFightProp(
    this,
    &this->ACTOR_ELEM_REACT_OVERGROW_ELECTRIC_CRITICAL_HURT_DELTA,
    FIGHT_PROP_ELEM_REACT_OVERGROW_ELECTRIC_CRITICAL_HURT);
};

// Line 170: range 00000000130C3902-00000000130C39F0
void __fastcall AbilityDataMgr::defineFightProp(
        AbilityDataMgr *const this,
        const std::string *prop_key,
        data::FightPropType fight_prop_type)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::set<data::FightPropType> *v6; // rax
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 19 fight_prop_type:169";
  *(_QWORD *)(v3 + 16) = AbilityDataMgr::defineFightProp;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = fight_prop_type;
  v6 = std::unordered_map<std::string,std::set<data::FightPropType>>::operator[](&this->fight_prop_map_, prop_key);
  std::set<data::FightPropType>::insert(v6, (const std::set<data::FightPropType>::value_type *)(v3 + 32));
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

// Line 176: range 00000000130C39F2-00000000130C3B0B
void __fastcall AbilityDataMgr::defineAbilityClampFightProp(
        AbilityDataMgr *const this,
        const std::string *prop_key,
        data::FightPropType fight_prop_type)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::set<data::FightPropType> *v6; // rax
  std::unordered_map<data::FightPropType,std::string>::mapped_type *v7; // rax
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 19 fight_prop_type:175";
  *(_QWORD *)(v3 + 16) = AbilityDataMgr::defineAbilityClampFightProp;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = fight_prop_type;
  v6 = std::unordered_map<std::string,std::set<data::FightPropType>>::operator[](&this->fight_prop_map_, prop_key);
  std::set<data::FightPropType>::insert(v6, (const std::set<data::FightPropType>::value_type *)(v3 + 32));
  v7 = std::unordered_map<data::FightPropType,std::string>::operator[](
         &this->clamp_ability_prop_map_,
         (const std::unordered_map<data::FightPropType,std::string>::key_type *)(v3 + 32));
  std::string::operator=(v7, prop_key);
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

// Line 183: range 00000000130C3B0C-00000000130C3C64
const data::ConfigAbilityPropertyEntry *__cdecl AbilityDataMgr::getProperty(
        const AbilityDataMgr *const this,
        const std::string *prop_key)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  const data::ConfigAbilityPropertyEntry *result; // rax
  std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConfigAbilityPropertyEntry>,true> __y; // [rsp+10h] [rbp-80h] BYREF
  const std::unordered_map<std::string,data::ConfigAbilityPropertyEntry> *property_map; // [rsp+18h] [rbp-78h]
  std::shared_ptr<Config> v9; // [rsp+20h] [rbp-70h] BYREF
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 6 it:185";
  *(_QWORD *)(v2 + 16) = AbilityDataMgr::getProperty;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9);
  property_map = JsonConfigMgr::getPropertyMap[abi:cxx11](&v5->design_config.json_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v9);
  *(std::unordered_map<std::string,data::ConfigAbilityPropertyEntry>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::ConfigAbilityPropertyEntry>::find(
                                                                                                     property_map,
                                                                                                     prop_key);
  __y._M_cur = std::unordered_map<std::string,data::ConfigAbilityPropertyEntry>::end(property_map)._M_cur;
  if ( std::__detail::operator==<std::pair<std::string const,data::ConfigAbilityPropertyEntry>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConfigAbilityPropertyEntry>,true> *)(v2 + 32),
         &__y) )
  {
    result = &AbilityDataMgr::getProperty(std::string const&)const::entry;
  }
  else
  {
    result = &std::__detail::_Node_const_iterator<std::pair<std::string const,data::ConfigAbilityPropertyEntry>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ConfigAbilityPropertyEntry>,false,true> *const)(v2 + 32))->second;
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 196: range 00000000130C3C66-00000000130C3E3E
std::set<data::FightPropType> *__cdecl AbilityDataMgr::getFightPropTypeSet(
        std::set<data::FightPropType> *retstr,
        const AbilityDataMgr *const this,
        const std::string *prop_key)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::set<data::FightPropType> *p_second; // rdx
  std::__detail::_Node_iterator_base<std::pair<const std::string,std::set<data::FightPropType> >,true> __y; // [rsp+28h] [rbp-68h] BYREF
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 6 it:197";
  *(_QWORD *)(v3 + 16) = AbilityDataMgr::getFightPropTypeSet;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(std::unordered_map<std::string,std::set<data::FightPropType>>::const_iterator *)(v3 + 32) = std::unordered_map<std::string,std::set<data::FightPropType>>::find(
                                                                                                  &this->fight_prop_map_,
                                                                                                  prop_key);
  __y._M_cur = std::unordered_map<std::string,std::set<data::FightPropType>>::end(&this->fight_prop_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<std::string const,std::set<data::FightPropType>>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::set<data::FightPropType> >,true> *)(v3 + 32),
         &__y) )
  {
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_M_t._M_impl._M_node_count + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_t._M_impl._M_node_count + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 48LL);
    }
    *(_QWORD *)retstr->_M_t._M_impl.gap0 = 0LL;
    *(_QWORD *)&retstr->_M_t._M_impl._M_header._M_color = 0LL;
    retstr->_M_t._M_impl._M_header._M_parent = 0LL;
    retstr->_M_t._M_impl._M_header._M_left = 0LL;
    retstr->_M_t._M_impl._M_header._M_right = 0LL;
    retstr->_M_t._M_impl._M_node_count = 0LL;
    std::set<data::FightPropType>::set(retstr);
  }
  else
  {
    p_second = &std::__detail::_Node_const_iterator<std::pair<std::string const,std::set<data::FightPropType>>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,std::set<data::FightPropType> >,false,true> *const)(v3 + 32))->second;
    std::set<data::FightPropType>::set(retstr, p_second);
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
  return retstr;
};

// Line 209: range 00000000130C3E40-00000000130C3EC8
bool __cdecl AbilityDataMgr::hasProperty(const AbilityDataMgr *const this, const std::string *prop_key)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  const std::unordered_map<std::string,data::ConfigAbilityPropertyEntry> *v3; // rdx
  bool v4; // bl
  std::shared_ptr<Config> v6[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v6);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v6);
  v3 = JsonConfigMgr::getPropertyMap[abi:cxx11](&v2->design_config.json_config_mgr);
  v4 = common::tools::MiscUtils::isContains<std::unordered_map<std::string,data::ConfigAbilityPropertyEntry> const,std::string>(
         v3,
         prop_key);
  std::shared_ptr<Config>::~shared_ptr(v6);
  return v4;
};

// Line 215: range 00000000130C3ECA-00000000130C409F
std::string *__fastcall AbilityDataMgr::getClampAbilityProp[abi:cxx11](
        std::string *retstr,
        const AbilityDataMgr *const this,
        data::FightPropType fight_prop_type)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__detail::_Node_const_iterator<std::pair<const data::FightPropType,std::string >,false,false>::pointer v6; // rax
  std::allocator<char> __a; // [rsp+27h] [rbp-89h] BYREF
  std::__detail::_Node_iterator_base<std::pair<const data::FightPropType,std::string >,false> __y; // [rsp+28h] [rbp-88h] BYREF
  char v11[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 19 fight_prop_type:214 64 8 6 it:216";
  *(_QWORD *)(v3 + 16) = AbilityDataMgr::getClampAbilityProp[abi:cxx11];
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = fight_prop_type;
  *(std::unordered_map<data::FightPropType,std::string>::const_iterator *)(v3 + 64) = std::unordered_map<data::FightPropType,std::string>::find(
                                                                                        &this->clamp_ability_prop_map_,
                                                                                        (const std::unordered_map<data::FightPropType,std::string>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<data::FightPropType,std::string>::end(&this->clamp_ability_prop_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<data::FightPropType const,std::string>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<const data::FightPropType,std::string >,false> *)(v3 + 64),
         &__y) )
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(retstr, _s, &__a);
    std::allocator<char>::~allocator(&__a);
  }
  else
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<data::FightPropType const,std::string>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<const data::FightPropType,std::string >,false,false> *const)(v3 + 64));
    std::string::basic_string(retstr, &v6->second);
  }
  if ( v11 == (char *)v3 )
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
  return retstr;
};

// Line 226: range 00000000130C40A0-00000000130C416F
bool __cdecl AbilityDataMgr::isModifierDebuff(
        const AbilityDataMgr *const this,
        data::ConfigAbilityModifier *config_modifier)
{
  __int64 state; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&config_modifier->is_debuff >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)config_modifier + 113) & 7) >= *(_BYTE *)(((unsigned __int64)&config_modifier->is_debuff >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_load1(&config_modifier->is_debuff);
  }
  if ( config_modifier->is_debuff )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&config_modifier->state >> 3) + 0x7FFF8000) )
    __asan_report_load8(&config_modifier->state);
  state = (unsigned int)config_modifier->state;
  if ( *(_BYTE *)(((unsigned __int64)&this->ABILITY_STATE_DEBUFF >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ABILITY_STATE_DEBUFF);
  return (state & this->ABILITY_STATE_DEBUFF) != 0;
};

// Line 232: range 00000000130C4170-00000000130C41EC
bool __cdecl AbilityDataMgr::isLevelElementAbility(const AbilityDataMgr *const this, int32_t ability_name_hash)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  bool isGlobalCombatLevelElementAbility; // bl
  std::shared_ptr<Config> v5[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v5);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5);
  isGlobalCombatLevelElementAbility = JsonConfigMgr::isGlobalCombatLevelElementAbility(
                                        &v2->design_config.json_config_mgr,
                                        ability_name_hash);
  std::shared_ptr<Config>::~shared_ptr(v5);
  return isGlobalCombatLevelElementAbility;
};

// Line 237: range 00000000130C41EE-00000000130C4773
std::pair<float,float> __cdecl AbilityDataMgr::tryCostEliteShield(
        const AbilityDataMgr *const this,
        Creature *creature,
        AttackResult *result,
        float shield,
        const std::string *shield_type)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  __m128i v9; // xmm0
  FightPropComp *FightPropComp; // rax
  __gnu_cxx::__alloc_traits<std::allocator<data::ElementType>,data::ElementType>::value_type *v11; // rax
  int *v12; // rdx
  int v13; // ecx
  __gnu_cxx::__alloc_traits<std::allocator<float>,float>::value_type *v14; // rax
  float *v15; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<float>,float>::value_type *v16; // rax
  float *v17; // rdx
  float v18; // xmm0_4
  std::pair<float,float> v19; // xmm0_8
  float shield_damage_ratio; // [rsp+38h] [rbp-D8h]
  float shield_damage_suffer_ratio; // [rsp+3Ch] [rbp-D4h]
  float minus_ratio; // [rsp+40h] [rbp-D0h]
  uint32_t row_idx; // [rsp+44h] [rbp-CCh]
  std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConfigEliteShieldResistance>,true> __y; // [rsp+48h] [rbp-C8h] BYREF
  size_t idx; // [rsp+50h] [rbp-C0h]
  const data::ConfigGlobalCombat *config_global_combat; // [rsp+58h] [rbp-B8h]
  const std::vector<float> *damage_ratio_vec; // [rsp+60h] [rbp-B0h]
  const std::vector<float> *damage_suffer_ratio_vec; // [rsp+68h] [rbp-A8h]
  std::shared_ptr<Config> v32; // [rsp+70h] [rbp-A0h] BYREF
  char v33[144]; // [rsp+80h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 4 16 delta_damage:275 48 4 16 delta_shield:276 64 8 8 iter:258";
  *(_QWORD *)(v5 + 16) = AbilityDataMgr::tryCostEliteShield;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -202116352;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v32);
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
  config_global_combat = JsonConfigMgr::getGlobalCombatConfig(&v8->design_config.json_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v32);
  v9 = (__m128i)0x3F800000u;
  shield_damage_suffer_ratio = 1.0;
  FightPropComp = Creature::getFightPropComp(creature);
  *(float *)v9.m128i_i32 = FightPropComp::getPropValue(FightPropComp, FIGHT_PROP_SHIELD_COST_MINUS_RATIO, 1);
  minus_ratio = COERCE_FLOAT(_mm_cvtsi128_si32(v9));
  if ( (float)(minus_ratio + 1.0) < 0.0 )
    minus_ratio = -0.99900001;
  shield_damage_ratio = (float)(1.0 / (float)(minus_ratio + 1.0)) * 1.0;
  row_idx = -1;
  for ( idx = 0LL; idx < std::vector<data::ElementType>::size(&config_global_combat->elite_shield.row); ++idx )
  {
    v11 = (__gnu_cxx::__alloc_traits<std::allocator<data::ElementType>,data::ElementType>::value_type *)std::vector<data::ElementType>::operator[](&config_global_combat->elite_shield.row, idx);
    v12 = (int *)v11;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v11);
    }
    v13 = *v12;
    if ( *(_BYTE *)(((unsigned __int64)&result->element_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)result + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&result->element_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&result->element_type);
    }
    if ( v13 == result->element_type )
    {
      row_idx = idx;
      break;
    }
  }
  if ( row_idx != -1 )
  {
    *(std::unordered_map<std::string,data::ConfigEliteShieldResistance>::const_iterator *)(v5 + 64) = std::unordered_map<std::string,data::ConfigEliteShieldResistance>::find(&config_global_combat->elite_shield.shield_damage_ratios_map, shield_type);
    __y._M_cur = std::unordered_map<std::string,data::ConfigEliteShieldResistance>::end(&config_global_combat->elite_shield.shield_damage_ratios_map)._M_cur;
    if ( std::__detail::operator!=<std::pair<std::string const,data::ConfigEliteShieldResistance>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConfigEliteShieldResistance>,true> *)(v5 + 64),
           &__y) )
    {
      damage_ratio_vec = &std::__detail::_Node_const_iterator<std::pair<std::string const,data::ConfigEliteShieldResistance>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ConfigEliteShieldResistance>,false,true> *const)(v5 + 64))->second.damage_ratio;
      damage_suffer_ratio_vec = &std::__detail::_Node_const_iterator<std::pair<std::string const,data::ConfigEliteShieldResistance>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ConfigEliteShieldResistance>,false,true> *const)(v5 + 64))->second.damage_suffer_ratio;
      if ( row_idx < std::vector<float>::size(damage_ratio_vec) )
      {
        v14 = (__gnu_cxx::__alloc_traits<std::allocator<float>,float>::value_type *)std::vector<float>::operator[](
                                                                                      damage_ratio_vec,
                                                                                      row_idx);
        v15 = v14;
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v14);
        }
        shield_damage_ratio = *v15 * shield_damage_ratio;
      }
      if ( row_idx < std::vector<float>::size(damage_suffer_ratio_vec) )
      {
        v16 = (__gnu_cxx::__alloc_traits<std::allocator<float>,float>::value_type *)std::vector<float>::operator[](
                                                                                      damage_suffer_ratio_vec,
                                                                                      row_idx);
        v17 = v16;
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v16);
        }
        shield_damage_suffer_ratio = *v17 * 1.0;
      }
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&result->ori_server_damage >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&result->ori_server_damage >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&result->ori_server_damage);
  }
  *(float *)(v5 + 32) = result->ori_server_damage * shield_damage_suffer_ratio;
  *(float *)(v5 + 48) = *(float *)(v5 + 32) * shield_damage_ratio;
  if ( *(float *)(v5 + 48) > shield )
  {
    *(float *)(v5 + 48) = shield;
    if ( std::abs(shield_damage_ratio) <= 0.001 )
      v18 = 0.001;
    else
      v18 = shield_damage_ratio;
    *(float *)(v5 + 32) = shield / v18;
  }
  v19 = std::make_pair<float &,float &>((float *)(v5 + 48), (float *)(v5 + 32));
  if ( v33 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return v19;
};
