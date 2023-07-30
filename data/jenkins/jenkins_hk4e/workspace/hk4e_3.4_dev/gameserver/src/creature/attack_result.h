// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/creature/attack_result.h

// Line 18: range 0000000014F79EEE-0000000014F7ACBA
ModifiedAttackProperty *__cdecl ModifiedAttackProperty::operator=(
        ModifiedAttackProperty *const this,
        const ModifiedAttackProperty *a2)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(a2);
  this->damage_percentage = a2->damage_percentage;
  if ( *(_BYTE *)(((unsigned __int64)&this->damage_percentage_ratio >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->damage_percentage_ratio);
  if ( *(_BYTE *)(((unsigned __int64)&a2->damage_percentage_ratio >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->damage_percentage_ratio);
  this->damage_percentage_ratio = a2->damage_percentage_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&this->damage_extra >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->damage_extra);
  if ( *(_BYTE *)(((unsigned __int64)&a2->damage_extra >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->damage_extra);
  this->damage_extra = a2->damage_extra;
  std::map<unsigned int,float>::operator=(&this->stat_log_damage_extra_map, &a2->stat_log_damage_extra_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->bonus_critical >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->bonus_critical);
  if ( *(_BYTE *)(((unsigned __int64)&a2->bonus_critical >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->bonus_critical);
  this->bonus_critical = a2->bonus_critical;
  if ( *(_BYTE *)(((unsigned __int64)&this->bonus_critical_hurt >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->bonus_critical_hurt);
  if ( *(_BYTE *)(((unsigned __int64)&a2->bonus_critical_hurt >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->bonus_critical_hurt);
  this->bonus_critical_hurt = a2->bonus_critical_hurt;
  if ( *(_BYTE *)(((unsigned __int64)&this->true_damage >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->true_damage >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_store2(&this->true_damage);
  }
  if ( *(_BYTE *)(((unsigned __int64)&a2->true_damage >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->true_damage >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(&a2->true_damage);
  }
  this->true_damage = a2->true_damage;
  if ( (((unsigned __int8)this + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->defense_ignore_ratio >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->defense_ignore_ratio >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->defense_ignore_ratio._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 99) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->defense_ignore_ratio._M_payload._M_engaged
                                                                          + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->defense_ignore_ratio, 8LL);
  }
  if ( (((unsigned __int8)a2 + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->defense_ignore_ratio >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->defense_ignore_ratio >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->defense_ignore_ratio._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 99) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->defense_ignore_ratio._M_payload._M_engaged
                                                                        + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->defense_ignore_ratio, 8LL);
  }
  this->defense_ignore_ratio = a2->defense_ignore_ratio;
  if ( (((unsigned __int8)this + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&this->defense_ignore_delta >> 3)
                                                       + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->defense_ignore_delta >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->defense_ignore_delta._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 107) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->defense_ignore_delta._M_payload._M_engaged
                                                                           + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->defense_ignore_delta, 8LL);
  }
  if ( (((unsigned __int8)a2 + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->defense_ignore_delta >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->defense_ignore_delta >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->defense_ignore_delta._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 107) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->defense_ignore_delta._M_payload._M_engaged
                                                                         + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->defense_ignore_delta, 8LL);
  }
  this->defense_ignore_delta = a2->defense_ignore_delta;
  if ( (((unsigned __int8)this + 108) & 7) >= *(_BYTE *)(((unsigned __int64)&this->physical_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->physical_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->physical_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 115) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->physical_sub_hurt._M_payload._M_engaged
                                                                           + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->physical_sub_hurt, 8LL);
  }
  if ( (((unsigned __int8)a2 + 108) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->physical_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->physical_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->physical_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 115) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->physical_sub_hurt._M_payload._M_engaged
                                                                         + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->physical_sub_hurt, 8LL);
  }
  this->physical_sub_hurt = a2->physical_sub_hurt;
  if ( (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->fire_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->fire_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->fire_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 123) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->fire_sub_hurt._M_payload._M_engaged
                                                                           + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->fire_sub_hurt, 8LL);
  }
  if ( (((unsigned __int8)a2 + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->fire_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->fire_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->fire_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 123) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->fire_sub_hurt._M_payload._M_engaged + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->fire_sub_hurt, 8LL);
  }
  this->fire_sub_hurt = a2->fire_sub_hurt;
  if ( (((unsigned __int8)this + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->grass_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->grass_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->grass_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 125) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->grass_sub_hurt._M_payload._M_engaged
                                                                           + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->grass_sub_hurt, 8LL);
  }
  if ( (((unsigned __int8)a2 + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->grass_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->grass_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->grass_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 125) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->grass_sub_hurt._M_payload._M_engaged + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->grass_sub_hurt, 8LL);
  }
  this->grass_sub_hurt = a2->grass_sub_hurt;
  if ( (((unsigned __int8)this - 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->water_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->water_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->water_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 117) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->water_sub_hurt._M_payload._M_engaged
                                                                           + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->water_sub_hurt, 8LL);
  }
  if ( (((unsigned __int8)a2 - 124) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->water_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->water_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->water_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 117) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->water_sub_hurt._M_payload._M_engaged + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->water_sub_hurt, 8LL);
  }
  this->water_sub_hurt = a2->water_sub_hurt;
  if ( (((unsigned __int8)this - 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->elec_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->elec_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->elec_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 109) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->elec_sub_hurt._M_payload._M_engaged
                                                                           + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->elec_sub_hurt, 8LL);
  }
  if ( (((unsigned __int8)a2 - 116) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->elec_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->elec_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->elec_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 109) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->elec_sub_hurt._M_payload._M_engaged + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->elec_sub_hurt, 8LL);
  }
  this->elec_sub_hurt = a2->elec_sub_hurt;
  if ( (((unsigned __int8)this - 108) & 7) >= *(_BYTE *)(((unsigned __int64)&this->wind_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->wind_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->wind_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 101) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->wind_sub_hurt._M_payload._M_engaged
                                                                           + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->wind_sub_hurt, 8LL);
  }
  if ( (((unsigned __int8)a2 - 108) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->wind_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->wind_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->wind_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 101) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->wind_sub_hurt._M_payload._M_engaged + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->wind_sub_hurt, 8LL);
  }
  this->wind_sub_hurt = a2->wind_sub_hurt;
  if ( (((unsigned __int8)this - 100) & 7) >= *(_BYTE *)(((unsigned __int64)&this->ice_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->ice_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->ice_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 93) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->ice_sub_hurt._M_payload._M_engaged + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->ice_sub_hurt, 8LL);
  }
  if ( (((unsigned __int8)a2 - 100) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->ice_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->ice_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->ice_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 93) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->ice_sub_hurt._M_payload._M_engaged + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->ice_sub_hurt, 8LL);
  }
  this->ice_sub_hurt = a2->ice_sub_hurt;
  if ( (((unsigned __int8)this - 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->rock_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->rock_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->rock_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 85) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->rock_sub_hurt._M_payload._M_engaged
                                                                          + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->rock_sub_hurt, 8LL);
  }
  if ( (((unsigned __int8)a2 - 92) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->rock_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->rock_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->rock_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 85) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->rock_sub_hurt._M_payload._M_engaged + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->rock_sub_hurt, 8LL);
  }
  this->rock_sub_hurt = a2->rock_sub_hurt;
  if ( (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->bonus_element_reaction_critical >> 3)
                                                      + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->bonus_element_reaction_critical >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->bonus_element_reaction_critical._M_payload._M_engaged + 3) >> 3)
                + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 77) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->bonus_element_reaction_critical._M_payload._M_engaged
                                                                          + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->bonus_element_reaction_critical, 8LL);
  }
  if ( (((unsigned __int8)a2 - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->bonus_element_reaction_critical >> 3)
                                                    + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->bonus_element_reaction_critical >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->bonus_element_reaction_critical._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 77) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->bonus_element_reaction_critical._M_payload._M_engaged
                                                                        + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->bonus_element_reaction_critical, 8LL);
  }
  this->bonus_element_reaction_critical = a2->bonus_element_reaction_critical;
  if ( (((unsigned __int8)this - 76) & 7) >= *(_BYTE *)(((unsigned __int64)&this->bonus_element_reaction_critical_hurt >> 3)
                                                      + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->bonus_element_reaction_critical_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->bonus_element_reaction_critical_hurt._M_payload._M_engaged + 3) >> 3)
                + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 69) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->bonus_element_reaction_critical_hurt._M_payload._M_engaged
                                                                          + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->bonus_element_reaction_critical_hurt, 8LL);
  }
  if ( (((unsigned __int8)a2 - 76) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->bonus_element_reaction_critical_hurt >> 3)
                                                    + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->bonus_element_reaction_critical_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->bonus_element_reaction_critical_hurt._M_payload._M_engaged + 3) >> 3)
                + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 69) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->bonus_element_reaction_critical_hurt._M_payload._M_engaged
                                                                        + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->bonus_element_reaction_critical_hurt, 8LL);
  }
  this->bonus_element_reaction_critical_hurt = a2->bonus_element_reaction_critical_hurt;
  return this;
};

// Line 18: range 00000000131E24F2-00000000131E263A
void __cdecl ModifiedAttackProperty::ModifiedAttackProperty(ModifiedAttackProperty *const this)
{
  std::optional<float>::optional(&this->damage_percentage);
  std::optional<float>::optional(&this->damage_percentage_ratio);
  std::optional<float>::optional(&this->damage_extra);
  std::map<unsigned int,float>::map(&this->stat_log_damage_extra_map);
  std::optional<float>::optional(&this->bonus_critical);
  std::optional<float>::optional(&this->bonus_critical_hurt);
  std::optional<bool>::optional(&this->true_damage);
  std::optional<float>::optional(&this->defense_ignore_ratio);
  std::optional<float>::optional(&this->defense_ignore_delta);
  std::optional<float>::optional(&this->physical_sub_hurt);
  std::optional<float>::optional(&this->fire_sub_hurt);
  std::optional<float>::optional(&this->grass_sub_hurt);
  std::optional<float>::optional(&this->water_sub_hurt);
  std::optional<float>::optional(&this->elec_sub_hurt);
  std::optional<float>::optional(&this->wind_sub_hurt);
  std::optional<float>::optional(&this->ice_sub_hurt);
  std::optional<float>::optional(&this->rock_sub_hurt);
  std::optional<float>::optional(&this->bonus_element_reaction_critical);
  std::optional<float>::optional(&this->bonus_element_reaction_critical_hurt);
};

// Line 18: range 00000000131E263C-00000000131E265A
void __cdecl ModifiedAttackProperty::~ModifiedAttackProperty(ModifiedAttackProperty *const this)
{
  std::map<unsigned int,float>::~map(&this->stat_log_damage_extra_map);
};

// Line 43: range 00000000131E265C-00000000131E3038
void __cdecl AttackResult::AttackResult(AttackResult *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->client_damage = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->server_damage >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->server_damage >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->server_damage);
  }
  this->server_damage = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->ori_server_damage >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ori_server_damage >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ori_server_damage);
  }
  this->ori_server_damage = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->block_shield_hurt >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->block_shield_hurt >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->block_shield_hurt);
  }
  this->block_shield_hurt = 0.0;
  if ( *(char *)(((unsigned __int64)&this->is_critical >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_critical);
  this->is_critical = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->client_critical_rand >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->client_critical_rand >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->client_critical_rand);
  }
  this->client_critical_rand = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->server_critical_rand >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->server_critical_rand >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->server_critical_rand);
  }
  this->server_critical_rand = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->element_type);
  }
  this->element_type = None_0;
  if ( *(_BYTE *)(((unsigned __int64)&this->hashed_anim_event_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hashed_anim_event_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hashed_anim_event_id);
  }
  this->hashed_anim_event_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->attack_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->attack_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->attack_id);
  }
  this->attack_id = 0;
  std::string::basic_string(&this->anim_event_id);
  std::string::basic_string(&this->attack_tag);
  if ( *(char *)(((unsigned __int64)&this->can_hit_head >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->can_hit_head);
  this->can_hit_head = 0;
  Vector3::Vector3(&this->hit_pos, 0.0, 0.0, 0.0);
  if ( *(_BYTE *)(((unsigned __int64)&this->attackee_hit_force_angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->attackee_hit_force_angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->attackee_hit_force_angle);
  }
  this->attackee_hit_force_angle = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->attackee_hit_entity_angle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->attackee_hit_entity_angle >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->attackee_hit_entity_angle);
  }
  this->attackee_hit_entity_angle = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->hit_pos_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hit_pos_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hit_pos_type);
  }
  this->hit_pos_type = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->damage_on_shield >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->damage_on_shield >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->damage_on_shield);
  }
  this->damage_on_shield = 0.0;
  std::string::basic_string(&this->attenuation_group);
  if ( *(_BYTE *)(((unsigned __int64)&this->attack_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->attack_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->attack_count);
  }
  this->attack_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_stamp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->time_stamp >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->time_stamp);
  }
  this->time_stamp = 0;
  std::optional<unsigned int>::optional(&this->gadget_damage_action_idx_opt);
  data::ConfigAttackProperty::ConfigAttackProperty(&this->server_attacker_property);
  ModifiedAttackProperty::ModifiedAttackProperty(&this->modified_property);
  if ( *(_BYTE *)(((unsigned __int64)&this->bullet_fly_time_ms >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bullet_fly_time_ms >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->bullet_fly_time_ms);
  }
  this->bullet_fly_time_ms = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->bullet_wane_ptr >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->bullet_wane_ptr);
  this->bullet_wane_ptr = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->can_be_modified_by >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->can_be_modified_by >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->can_be_modified_by);
  }
  this->can_be_modified_by = None_3;
  if ( *(_BYTE *)(((unsigned __int64)&this->client_element_amplify_rate >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->client_element_amplify_rate >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->client_element_amplify_rate);
  }
  this->client_element_amplify_rate = 0.0;
  std::shared_ptr<ActorAbility>::shared_ptr(&this->ability_ptr);
  std::shared_ptr<ActorModifier>::shared_ptr(&this->modifier_ptr);
  std::weak_ptr<Creature>::weak_ptr(&this->modifier_owner_wtr);
  if ( *(_BYTE *)(((unsigned __int64)&this->local_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->local_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->local_id);
  }
  this->local_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->predicate_modify_damage >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->predicate_modify_damage >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->predicate_modify_damage);
  }
  this->predicate_modify_damage = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->from_player_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->from_player_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->from_player_uid);
  }
  this->from_player_uid = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->need_clamp_damage >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->need_clamp_damage >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->need_clamp_damage);
  }
  this->need_clamp_damage = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->clamp_damage_min_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->clamp_damage_min_value >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->clamp_damage_min_value);
  }
  this->clamp_damage_min_value = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->clamp_damage_max_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->clamp_damage_max_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->clamp_damage_max_value);
  }
  this->clamp_damage_max_value = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->create_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->create_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->create_count);
  }
  this->create_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_type);
  }
  this->target_type = 0;
  std::map<unsigned int,float>::map(&this->stat_log_damage_extra_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->damage_extra_overdose >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->damage_extra_overdose >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->damage_extra_overdose);
  }
  this->damage_extra_overdose = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->total_damage_extra >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_damage_extra >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->total_damage_extra);
  }
  this->total_damage_extra = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->damage_base >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->damage_base >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->damage_base);
  }
  this->damage_base = 0.0;
  std::weak_ptr<Creature>::weak_ptr(&this->attacker_wtr);
  std::weak_ptr<Creature>::weak_ptr(&this->defenser_wtr);
  std::shared_ptr<DieCreatureRecord>::shared_ptr(&this->die_modifier_owner_record_ptr);
};

// Line 43: range 0000000015022F72-00000000150244CD
void __cdecl AttackResult::AttackResult(AttackResult *const this, const AttackResult *a2)
{
  float client_damage; // xmm0_4
  float server_damage; // xmm0_4
  float ori_server_damage; // xmm0_4
  float block_shield_hurt; // xmm0_4
  bool is_critical; // cl
  uint32_t client_critical_rand; // ecx
  uint32_t server_critical_rand; // ecx
  data::ElementType element_type; // ecx
  uint32_t hashed_anim_event_id; // ecx
  uint32_t attack_id; // ecx
  bool can_hit_head; // cl
  float attackee_hit_force_angle; // xmm0_4
  float attackee_hit_entity_angle; // xmm0_4
  uint32_t hit_pos_type; // ecx
  float damage_on_shield; // xmm0_4
  uint32_t attack_count; // ecx
  uint32_t time_stamp; // ecx
  uint32_t bullet_fly_time_ms; // ecx
  const data::ConfigBulletWane *bullet_wane_ptr; // rdx
  data::CanBeModifiedBy can_be_modified_by; // ecx
  float client_element_amplify_rate; // xmm0_4
  int32_t local_id; // ecx
  bool predicate_modify_damage; // cl
  data::ElementReactionType amplify_reaction_type; // ecx
  data::ElementReactionType addhurt_reaction_type; // ecx
  uint32_t from_player_uid; // ecx
  bool need_clamp_damage; // cl
  data::DamageClampType damage_clamp_type; // ecx
  float clamp_damage_min_value; // xmm0_4
  float clamp_damage_max_value; // xmm0_4
  uint32_t create_count; // ecx
  uint32_t target_type; // ecx
  float damage_extra_overdose; // xmm0_4
  float total_damage_extra; // xmm0_4
  float damage_base; // xmm0_4

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  client_damage = a2->client_damage;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->client_damage = client_damage;
  if ( *(_BYTE *)(((unsigned __int64)&a2->server_damage >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->server_damage >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->server_damage);
  }
  server_damage = a2->server_damage;
  if ( *(_BYTE *)(((unsigned __int64)&this->server_damage >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->server_damage >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->server_damage);
  }
  this->server_damage = server_damage;
  if ( *(_BYTE *)(((unsigned __int64)&a2->ori_server_damage >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->ori_server_damage >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->ori_server_damage);
  }
  ori_server_damage = a2->ori_server_damage;
  if ( *(_BYTE *)(((unsigned __int64)&this->ori_server_damage >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ori_server_damage >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ori_server_damage);
  }
  this->ori_server_damage = ori_server_damage;
  if ( *(_BYTE *)(((unsigned __int64)&a2->block_shield_hurt >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->block_shield_hurt >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->block_shield_hurt);
  }
  block_shield_hurt = a2->block_shield_hurt;
  if ( *(_BYTE *)(((unsigned __int64)&this->block_shield_hurt >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->block_shield_hurt >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->block_shield_hurt);
  }
  this->block_shield_hurt = block_shield_hurt;
  if ( *(char *)(((unsigned __int64)&a2->is_critical >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_critical);
  is_critical = a2->is_critical;
  if ( *(char *)(((unsigned __int64)&this->is_critical >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_critical);
  this->is_critical = is_critical;
  if ( *(_BYTE *)(((unsigned __int64)&a2->client_critical_rand >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->client_critical_rand >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->client_critical_rand);
  }
  client_critical_rand = a2->client_critical_rand;
  if ( *(_BYTE *)(((unsigned __int64)&this->client_critical_rand >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->client_critical_rand >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->client_critical_rand);
  }
  this->client_critical_rand = client_critical_rand;
  if ( *(_BYTE *)(((unsigned __int64)&a2->server_critical_rand >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->server_critical_rand >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->server_critical_rand);
  }
  server_critical_rand = a2->server_critical_rand;
  if ( *(_BYTE *)(((unsigned __int64)&this->server_critical_rand >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->server_critical_rand >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->server_critical_rand);
  }
  this->server_critical_rand = server_critical_rand;
  if ( *(_BYTE *)(((unsigned __int64)&a2->element_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->element_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->element_type);
  }
  element_type = a2->element_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->element_type);
  }
  this->element_type = element_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->hashed_anim_event_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->hashed_anim_event_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->hashed_anim_event_id);
  }
  hashed_anim_event_id = a2->hashed_anim_event_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->hashed_anim_event_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hashed_anim_event_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hashed_anim_event_id);
  }
  this->hashed_anim_event_id = hashed_anim_event_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->attack_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->attack_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->attack_id);
  }
  attack_id = a2->attack_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->attack_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->attack_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->attack_id);
  }
  this->attack_id = attack_id;
  std::string::basic_string(&this->anim_event_id, &a2->anim_event_id);
  std::string::basic_string(&this->attack_tag, &a2->attack_tag);
  if ( *(char *)(((unsigned __int64)&a2->can_hit_head >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->can_hit_head);
  can_hit_head = a2->can_hit_head;
  if ( *(char *)(((unsigned __int64)&this->can_hit_head >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->can_hit_head);
  this->can_hit_head = can_hit_head;
  if ( (((unsigned __int8)this + 108) & 7) >= *(_BYTE *)(((unsigned __int64)&this->hit_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->hit_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->hit_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 119) & 7) >= *(_BYTE *)((((unsigned __int64)&this->hit_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->hit_pos, 12LL);
  }
  if ( (((unsigned __int8)a2 + 108) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->hit_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->hit_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&a2->hit_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 119) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->hit_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->hit_pos, 12LL);
  }
  this->hit_pos = a2->hit_pos;
  if ( *(_BYTE *)(((unsigned __int64)&a2->attackee_hit_force_angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->attackee_hit_force_angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->attackee_hit_force_angle);
  }
  attackee_hit_force_angle = a2->attackee_hit_force_angle;
  if ( *(_BYTE *)(((unsigned __int64)&this->attackee_hit_force_angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->attackee_hit_force_angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->attackee_hit_force_angle);
  }
  this->attackee_hit_force_angle = attackee_hit_force_angle;
  if ( *(_BYTE *)(((unsigned __int64)&a2->attackee_hit_entity_angle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->attackee_hit_entity_angle >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->attackee_hit_entity_angle);
  }
  attackee_hit_entity_angle = a2->attackee_hit_entity_angle;
  if ( *(_BYTE *)(((unsigned __int64)&this->attackee_hit_entity_angle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->attackee_hit_entity_angle >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->attackee_hit_entity_angle);
  }
  this->attackee_hit_entity_angle = attackee_hit_entity_angle;
  if ( *(_BYTE *)(((unsigned __int64)&a2->hit_pos_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->hit_pos_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->hit_pos_type);
  }
  hit_pos_type = a2->hit_pos_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->hit_pos_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hit_pos_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hit_pos_type);
  }
  this->hit_pos_type = hit_pos_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->damage_on_shield >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->damage_on_shield >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->damage_on_shield);
  }
  damage_on_shield = a2->damage_on_shield;
  if ( *(_BYTE *)(((unsigned __int64)&this->damage_on_shield >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->damage_on_shield >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->damage_on_shield);
  }
  this->damage_on_shield = damage_on_shield;
  std::string::basic_string(&this->attenuation_group, &a2->attenuation_group);
  if ( *(_BYTE *)(((unsigned __int64)&a2->attack_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->attack_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->attack_count);
  }
  attack_count = a2->attack_count;
  if ( *(_BYTE *)(((unsigned __int64)&this->attack_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->attack_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->attack_count);
  }
  this->attack_count = attack_count;
  if ( *(_BYTE *)(((unsigned __int64)&a2->time_stamp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->time_stamp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->time_stamp);
  }
  time_stamp = a2->time_stamp;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_stamp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->time_stamp >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->time_stamp);
  }
  this->time_stamp = time_stamp;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_damage_action_idx_opt >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->gadget_damage_action_idx_opt);
  if ( *(_BYTE *)(((unsigned __int64)&a2->gadget_damage_action_idx_opt >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->gadget_damage_action_idx_opt);
  this->gadget_damage_action_idx_opt = a2->gadget_damage_action_idx_opt;
  data::ConfigAttackProperty::ConfigAttackProperty(&this->server_attacker_property, &a2->server_attacker_property);
  ModifiedAttackProperty::ModifiedAttackProperty(&this->modified_property, &a2->modified_property);
  if ( *(_BYTE *)(((unsigned __int64)&a2->bullet_fly_time_ms >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->bullet_fly_time_ms >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->bullet_fly_time_ms);
  }
  bullet_fly_time_ms = a2->bullet_fly_time_ms;
  if ( *(_BYTE *)(((unsigned __int64)&this->bullet_fly_time_ms >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bullet_fly_time_ms >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->bullet_fly_time_ms);
  }
  this->bullet_fly_time_ms = bullet_fly_time_ms;
  if ( *(_BYTE *)(((unsigned __int64)&a2->bullet_wane_ptr >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->bullet_wane_ptr);
  bullet_wane_ptr = a2->bullet_wane_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&this->bullet_wane_ptr >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->bullet_wane_ptr);
  this->bullet_wane_ptr = bullet_wane_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&a2->can_be_modified_by >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->can_be_modified_by >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->can_be_modified_by);
  }
  can_be_modified_by = a2->can_be_modified_by;
  if ( *(_BYTE *)(((unsigned __int64)&this->can_be_modified_by >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->can_be_modified_by >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->can_be_modified_by);
  }
  this->can_be_modified_by = can_be_modified_by;
  if ( *(_BYTE *)(((unsigned __int64)&a2->client_element_amplify_rate >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->client_element_amplify_rate >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->client_element_amplify_rate);
  }
  client_element_amplify_rate = a2->client_element_amplify_rate;
  if ( *(_BYTE *)(((unsigned __int64)&this->client_element_amplify_rate >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->client_element_amplify_rate >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->client_element_amplify_rate);
  }
  this->client_element_amplify_rate = client_element_amplify_rate;
  std::shared_ptr<ActorAbility>::shared_ptr(&this->ability_ptr, &a2->ability_ptr);
  std::shared_ptr<ActorModifier>::shared_ptr(&this->modifier_ptr, &a2->modifier_ptr);
  std::weak_ptr<Creature>::weak_ptr(&this->modifier_owner_wtr, &a2->modifier_owner_wtr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->local_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->local_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->local_id);
  }
  local_id = a2->local_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->local_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->local_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->local_id);
  }
  this->local_id = local_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->predicate_modify_damage >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->predicate_modify_damage >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->predicate_modify_damage);
  }
  predicate_modify_damage = a2->predicate_modify_damage;
  if ( *(_BYTE *)(((unsigned __int64)&this->predicate_modify_damage >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->predicate_modify_damage >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->predicate_modify_damage);
  }
  this->predicate_modify_damage = predicate_modify_damage;
  if ( *(_BYTE *)(((unsigned __int64)&a2->amplify_reaction_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->amplify_reaction_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->amplify_reaction_type);
  }
  amplify_reaction_type = a2->amplify_reaction_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->amplify_reaction_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->amplify_reaction_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->amplify_reaction_type);
  }
  this->amplify_reaction_type = amplify_reaction_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->addhurt_reaction_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->addhurt_reaction_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->addhurt_reaction_type);
  }
  addhurt_reaction_type = a2->addhurt_reaction_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->addhurt_reaction_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->addhurt_reaction_type >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->addhurt_reaction_type);
  }
  this->addhurt_reaction_type = addhurt_reaction_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->from_player_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->from_player_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->from_player_uid);
  }
  from_player_uid = a2->from_player_uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->from_player_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->from_player_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->from_player_uid);
  }
  this->from_player_uid = from_player_uid;
  if ( *(_BYTE *)(((unsigned __int64)&a2->need_clamp_damage >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 68) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->need_clamp_damage >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->need_clamp_damage);
  }
  need_clamp_damage = a2->need_clamp_damage;
  if ( *(_BYTE *)(((unsigned __int64)&this->need_clamp_damage >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->need_clamp_damage >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->need_clamp_damage);
  }
  this->need_clamp_damage = need_clamp_damage;
  if ( *(_BYTE *)(((unsigned __int64)&a2->damage_clamp_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->damage_clamp_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->damage_clamp_type);
  }
  damage_clamp_type = a2->damage_clamp_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->damage_clamp_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->damage_clamp_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->damage_clamp_type);
  }
  this->damage_clamp_type = damage_clamp_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->clamp_damage_min_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->clamp_damage_min_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->clamp_damage_min_value);
  }
  clamp_damage_min_value = a2->clamp_damage_min_value;
  if ( *(_BYTE *)(((unsigned __int64)&this->clamp_damage_min_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->clamp_damage_min_value >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->clamp_damage_min_value);
  }
  this->clamp_damage_min_value = clamp_damage_min_value;
  if ( *(_BYTE *)(((unsigned __int64)&a2->clamp_damage_max_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->clamp_damage_max_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->clamp_damage_max_value);
  }
  clamp_damage_max_value = a2->clamp_damage_max_value;
  if ( *(_BYTE *)(((unsigned __int64)&this->clamp_damage_max_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->clamp_damage_max_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->clamp_damage_max_value);
  }
  this->clamp_damage_max_value = clamp_damage_max_value;
  if ( *(_BYTE *)(((unsigned __int64)&a2->create_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->create_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->create_count);
  }
  create_count = a2->create_count;
  if ( *(_BYTE *)(((unsigned __int64)&this->create_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->create_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->create_count);
  }
  this->create_count = create_count;
  if ( *(_BYTE *)(((unsigned __int64)&a2->target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->target_type);
  }
  target_type = a2->target_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_type);
  }
  this->target_type = target_type;
  std::map<unsigned int,float>::map(&this->stat_log_damage_extra_map, &a2->stat_log_damage_extra_map);
  if ( *(_BYTE *)(((unsigned __int64)&a2->damage_extra_overdose >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->damage_extra_overdose >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->damage_extra_overdose);
  }
  damage_extra_overdose = a2->damage_extra_overdose;
  if ( *(_BYTE *)(((unsigned __int64)&this->damage_extra_overdose >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->damage_extra_overdose >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->damage_extra_overdose);
  }
  this->damage_extra_overdose = damage_extra_overdose;
  if ( *(_BYTE *)(((unsigned __int64)&a2->total_damage_extra >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->total_damage_extra >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->total_damage_extra);
  }
  total_damage_extra = a2->total_damage_extra;
  if ( *(_BYTE *)(((unsigned __int64)&this->total_damage_extra >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_damage_extra >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->total_damage_extra);
  }
  this->total_damage_extra = total_damage_extra;
  if ( *(_BYTE *)(((unsigned __int64)&a2->damage_base >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->damage_base >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->damage_base);
  }
  damage_base = a2->damage_base;
  if ( *(_BYTE *)(((unsigned __int64)&this->damage_base >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->damage_base >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->damage_base);
  }
  this->damage_base = damage_base;
  std::weak_ptr<Creature>::weak_ptr(&this->attacker_wtr, &a2->attacker_wtr);
  std::weak_ptr<Creature>::weak_ptr(&this->defenser_wtr, &a2->defenser_wtr);
  std::shared_ptr<DieCreatureRecord>::shared_ptr(
    &this->die_modifier_owner_record_ptr,
    &a2->die_modifier_owner_record_ptr);
};

// Line 43: range 00000000131E303A-00000000131E311C
void __cdecl AttackResult::~AttackResult(AttackResult *const this)
{
  std::shared_ptr<DieCreatureRecord>::~shared_ptr(&this->die_modifier_owner_record_ptr);
  std::weak_ptr<Creature>::~weak_ptr(&this->defenser_wtr);
  std::weak_ptr<Creature>::~weak_ptr(&this->attacker_wtr);
  std::map<unsigned int,float>::~map(&this->stat_log_damage_extra_map);
  std::weak_ptr<Creature>::~weak_ptr(&this->modifier_owner_wtr);
  std::shared_ptr<ActorModifier>::~shared_ptr(&this->modifier_ptr);
  std::shared_ptr<ActorAbility>::~shared_ptr(&this->ability_ptr);
  ModifiedAttackProperty::~ModifiedAttackProperty(&this->modified_property);
  data::ConfigAttackProperty::~ConfigAttackProperty(&this->server_attacker_property);
  std::string::~string(&this->attenuation_group);
  std::string::~string(&this->attack_tag);
  std::string::~string(&this->anim_event_id);
};

// Line 72: range 00000000172090E0-0000000017209134
data::StrikeType __cdecl AttackResult::getStrikeType(const AttackResult *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->server_attacker_property.strike_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->server_attacker_property.strike_type >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->server_attacker_property.strike_type);
  }
  return this->server_attacker_property.strike_type;
};

// Line 73: range 000000001384161E-000000001384166A
data::AttackType __cdecl AttackResult::getAttackType(const AttackResult *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->server_attacker_property.attack_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->server_attacker_property.attack_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->server_attacker_property.attack_type);
  }
  return this->server_attacker_property.attack_type;
};

// Line 74: range 000000001384166C-00000000138416BD
CreaturePtr __cdecl AttackResult::getDefenser(const AttackResult *const this)
{
  CreaturePtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::weak_ptr<Creature>::lock((const std::weak_ptr<Creature> *const)this);
  result._M_ptr = (std::__shared_ptr<Creature,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 75: range 00000000138416BE-000000001384170F
CreaturePtr __cdecl AttackResult::getAttacker(const AttackResult *const this)
{
  CreaturePtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::weak_ptr<Creature>::lock((const std::weak_ptr<Creature> *const)this);
  result._M_ptr = (std::__shared_ptr<Creature,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 205: range 0000000014F7ACE2-0000000014F7BAAB
void __cdecl ModifiedAttackProperty::ModifiedAttackProperty(
        ModifiedAttackProperty *const this,
        const ModifiedAttackProperty *a2)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(a2);
  this->damage_percentage = a2->damage_percentage;
  if ( *(_BYTE *)(((unsigned __int64)&this->damage_percentage_ratio >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->damage_percentage_ratio);
  if ( *(_BYTE *)(((unsigned __int64)&a2->damage_percentage_ratio >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->damage_percentage_ratio);
  this->damage_percentage_ratio = a2->damage_percentage_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&this->damage_extra >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->damage_extra);
  if ( *(_BYTE *)(((unsigned __int64)&a2->damage_extra >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->damage_extra);
  this->damage_extra = a2->damage_extra;
  std::map<unsigned int,float>::map(&this->stat_log_damage_extra_map, &a2->stat_log_damage_extra_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->bonus_critical >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->bonus_critical);
  if ( *(_BYTE *)(((unsigned __int64)&a2->bonus_critical >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->bonus_critical);
  this->bonus_critical = a2->bonus_critical;
  if ( *(_BYTE *)(((unsigned __int64)&this->bonus_critical_hurt >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->bonus_critical_hurt);
  if ( *(_BYTE *)(((unsigned __int64)&a2->bonus_critical_hurt >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->bonus_critical_hurt);
  this->bonus_critical_hurt = a2->bonus_critical_hurt;
  if ( *(_BYTE *)(((unsigned __int64)&this->true_damage >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->true_damage >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_store2(&this->true_damage);
  }
  if ( *(_BYTE *)(((unsigned __int64)&a2->true_damage >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->true_damage >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(&a2->true_damage);
  }
  this->true_damage = a2->true_damage;
  if ( (((unsigned __int8)this + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->defense_ignore_ratio >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->defense_ignore_ratio >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->defense_ignore_ratio._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 99) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->defense_ignore_ratio._M_payload._M_engaged
                                                                          + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->defense_ignore_ratio, 8LL);
  }
  if ( (((unsigned __int8)a2 + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->defense_ignore_ratio >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->defense_ignore_ratio >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->defense_ignore_ratio._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 99) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->defense_ignore_ratio._M_payload._M_engaged
                                                                        + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->defense_ignore_ratio, 8LL);
  }
  this->defense_ignore_ratio = a2->defense_ignore_ratio;
  if ( (((unsigned __int8)this + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&this->defense_ignore_delta >> 3)
                                                       + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->defense_ignore_delta >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->defense_ignore_delta._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 107) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->defense_ignore_delta._M_payload._M_engaged
                                                                           + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->defense_ignore_delta, 8LL);
  }
  if ( (((unsigned __int8)a2 + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->defense_ignore_delta >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->defense_ignore_delta >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->defense_ignore_delta._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 107) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->defense_ignore_delta._M_payload._M_engaged
                                                                         + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->defense_ignore_delta, 8LL);
  }
  this->defense_ignore_delta = a2->defense_ignore_delta;
  if ( (((unsigned __int8)this + 108) & 7) >= *(_BYTE *)(((unsigned __int64)&this->physical_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->physical_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->physical_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 115) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->physical_sub_hurt._M_payload._M_engaged
                                                                           + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->physical_sub_hurt, 8LL);
  }
  if ( (((unsigned __int8)a2 + 108) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->physical_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->physical_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->physical_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 115) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->physical_sub_hurt._M_payload._M_engaged
                                                                         + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->physical_sub_hurt, 8LL);
  }
  this->physical_sub_hurt = a2->physical_sub_hurt;
  if ( (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->fire_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->fire_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->fire_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 123) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->fire_sub_hurt._M_payload._M_engaged
                                                                           + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->fire_sub_hurt, 8LL);
  }
  if ( (((unsigned __int8)a2 + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->fire_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->fire_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->fire_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 123) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->fire_sub_hurt._M_payload._M_engaged + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->fire_sub_hurt, 8LL);
  }
  this->fire_sub_hurt = a2->fire_sub_hurt;
  if ( (((unsigned __int8)this + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->grass_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->grass_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->grass_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 125) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->grass_sub_hurt._M_payload._M_engaged
                                                                           + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->grass_sub_hurt, 8LL);
  }
  if ( (((unsigned __int8)a2 + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->grass_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->grass_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->grass_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 125) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->grass_sub_hurt._M_payload._M_engaged + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->grass_sub_hurt, 8LL);
  }
  this->grass_sub_hurt = a2->grass_sub_hurt;
  if ( (((unsigned __int8)this - 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->water_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->water_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->water_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 117) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->water_sub_hurt._M_payload._M_engaged
                                                                           + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->water_sub_hurt, 8LL);
  }
  if ( (((unsigned __int8)a2 - 124) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->water_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->water_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->water_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 117) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->water_sub_hurt._M_payload._M_engaged + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->water_sub_hurt, 8LL);
  }
  this->water_sub_hurt = a2->water_sub_hurt;
  if ( (((unsigned __int8)this - 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->elec_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->elec_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->elec_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 109) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->elec_sub_hurt._M_payload._M_engaged
                                                                           + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->elec_sub_hurt, 8LL);
  }
  if ( (((unsigned __int8)a2 - 116) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->elec_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->elec_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->elec_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 109) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->elec_sub_hurt._M_payload._M_engaged + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->elec_sub_hurt, 8LL);
  }
  this->elec_sub_hurt = a2->elec_sub_hurt;
  if ( (((unsigned __int8)this - 108) & 7) >= *(_BYTE *)(((unsigned __int64)&this->wind_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->wind_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->wind_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 101) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->wind_sub_hurt._M_payload._M_engaged
                                                                           + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->wind_sub_hurt, 8LL);
  }
  if ( (((unsigned __int8)a2 - 108) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->wind_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->wind_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->wind_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 101) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->wind_sub_hurt._M_payload._M_engaged + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->wind_sub_hurt, 8LL);
  }
  this->wind_sub_hurt = a2->wind_sub_hurt;
  if ( (((unsigned __int8)this - 100) & 7) >= *(_BYTE *)(((unsigned __int64)&this->ice_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->ice_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->ice_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 93) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->ice_sub_hurt._M_payload._M_engaged + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->ice_sub_hurt, 8LL);
  }
  if ( (((unsigned __int8)a2 - 100) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->ice_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->ice_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->ice_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 93) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->ice_sub_hurt._M_payload._M_engaged + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->ice_sub_hurt, 8LL);
  }
  this->ice_sub_hurt = a2->ice_sub_hurt;
  if ( (((unsigned __int8)this - 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->rock_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->rock_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->rock_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 85) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->rock_sub_hurt._M_payload._M_engaged
                                                                          + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->rock_sub_hurt, 8LL);
  }
  if ( (((unsigned __int8)a2 - 92) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->rock_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->rock_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->rock_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 85) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->rock_sub_hurt._M_payload._M_engaged + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->rock_sub_hurt, 8LL);
  }
  this->rock_sub_hurt = a2->rock_sub_hurt;
  if ( (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->bonus_element_reaction_critical >> 3)
                                                      + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->bonus_element_reaction_critical >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->bonus_element_reaction_critical._M_payload._M_engaged + 3) >> 3)
                + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 77) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->bonus_element_reaction_critical._M_payload._M_engaged
                                                                          + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->bonus_element_reaction_critical, 8LL);
  }
  if ( (((unsigned __int8)a2 - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->bonus_element_reaction_critical >> 3)
                                                    + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->bonus_element_reaction_critical >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->bonus_element_reaction_critical._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 77) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->bonus_element_reaction_critical._M_payload._M_engaged
                                                                        + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->bonus_element_reaction_critical, 8LL);
  }
  this->bonus_element_reaction_critical = a2->bonus_element_reaction_critical;
  if ( (((unsigned __int8)this - 76) & 7) >= *(_BYTE *)(((unsigned __int64)&this->bonus_element_reaction_critical_hurt >> 3)
                                                      + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->bonus_element_reaction_critical_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->bonus_element_reaction_critical_hurt._M_payload._M_engaged + 3) >> 3)
                + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 69) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->bonus_element_reaction_critical_hurt._M_payload._M_engaged
                                                                          + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->bonus_element_reaction_critical_hurt, 8LL);
  }
  if ( (((unsigned __int8)a2 - 76) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->bonus_element_reaction_critical_hurt >> 3)
                                                    + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->bonus_element_reaction_critical_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->bonus_element_reaction_critical_hurt._M_payload._M_engaged + 3) >> 3)
                + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 69) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->bonus_element_reaction_critical_hurt._M_payload._M_engaged
                                                                        + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->bonus_element_reaction_critical_hurt, 8LL);
  }
  this->bonus_element_reaction_critical_hurt = a2->bonus_element_reaction_critical_hurt;
};

// Line 213: range 00000000133D49D2-00000000133D579B
void __cdecl ModifiedAttackProperty::ModifiedAttackProperty(
        ModifiedAttackProperty *const this,
        ModifiedAttackProperty *a2)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(a2);
  this->damage_percentage = a2->damage_percentage;
  if ( *(_BYTE *)(((unsigned __int64)&this->damage_percentage_ratio >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->damage_percentage_ratio);
  if ( *(_BYTE *)(((unsigned __int64)&a2->damage_percentage_ratio >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->damage_percentage_ratio);
  this->damage_percentage_ratio = a2->damage_percentage_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&this->damage_extra >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->damage_extra);
  if ( *(_BYTE *)(((unsigned __int64)&a2->damage_extra >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->damage_extra);
  this->damage_extra = a2->damage_extra;
  std::map<unsigned int,float>::map(&this->stat_log_damage_extra_map, &a2->stat_log_damage_extra_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->bonus_critical >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->bonus_critical);
  if ( *(_BYTE *)(((unsigned __int64)&a2->bonus_critical >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->bonus_critical);
  this->bonus_critical = a2->bonus_critical;
  if ( *(_BYTE *)(((unsigned __int64)&this->bonus_critical_hurt >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->bonus_critical_hurt);
  if ( *(_BYTE *)(((unsigned __int64)&a2->bonus_critical_hurt >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->bonus_critical_hurt);
  this->bonus_critical_hurt = a2->bonus_critical_hurt;
  if ( *(_BYTE *)(((unsigned __int64)&this->true_damage >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->true_damage >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_store2(&this->true_damage);
  }
  if ( *(_BYTE *)(((unsigned __int64)&a2->true_damage >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->true_damage >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(&a2->true_damage);
  }
  this->true_damage = a2->true_damage;
  if ( (((unsigned __int8)this + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->defense_ignore_ratio >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->defense_ignore_ratio >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->defense_ignore_ratio._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 99) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->defense_ignore_ratio._M_payload._M_engaged
                                                                          + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->defense_ignore_ratio, 8LL);
  }
  if ( (((unsigned __int8)a2 + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->defense_ignore_ratio >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->defense_ignore_ratio >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->defense_ignore_ratio._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 99) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->defense_ignore_ratio._M_payload._M_engaged
                                                                        + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->defense_ignore_ratio, 8LL);
  }
  this->defense_ignore_ratio = a2->defense_ignore_ratio;
  if ( (((unsigned __int8)this + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&this->defense_ignore_delta >> 3)
                                                       + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->defense_ignore_delta >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->defense_ignore_delta._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 107) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->defense_ignore_delta._M_payload._M_engaged
                                                                           + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->defense_ignore_delta, 8LL);
  }
  if ( (((unsigned __int8)a2 + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->defense_ignore_delta >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->defense_ignore_delta >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->defense_ignore_delta._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 107) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->defense_ignore_delta._M_payload._M_engaged
                                                                         + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->defense_ignore_delta, 8LL);
  }
  this->defense_ignore_delta = a2->defense_ignore_delta;
  if ( (((unsigned __int8)this + 108) & 7) >= *(_BYTE *)(((unsigned __int64)&this->physical_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->physical_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->physical_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 115) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->physical_sub_hurt._M_payload._M_engaged
                                                                           + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->physical_sub_hurt, 8LL);
  }
  if ( (((unsigned __int8)a2 + 108) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->physical_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->physical_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->physical_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 115) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->physical_sub_hurt._M_payload._M_engaged
                                                                         + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->physical_sub_hurt, 8LL);
  }
  this->physical_sub_hurt = a2->physical_sub_hurt;
  if ( (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->fire_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->fire_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->fire_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 123) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->fire_sub_hurt._M_payload._M_engaged
                                                                           + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->fire_sub_hurt, 8LL);
  }
  if ( (((unsigned __int8)a2 + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->fire_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->fire_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->fire_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 123) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->fire_sub_hurt._M_payload._M_engaged + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->fire_sub_hurt, 8LL);
  }
  this->fire_sub_hurt = a2->fire_sub_hurt;
  if ( (((unsigned __int8)this + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->grass_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->grass_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->grass_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 125) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->grass_sub_hurt._M_payload._M_engaged
                                                                           + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->grass_sub_hurt, 8LL);
  }
  if ( (((unsigned __int8)a2 + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->grass_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->grass_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->grass_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 125) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->grass_sub_hurt._M_payload._M_engaged + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->grass_sub_hurt, 8LL);
  }
  this->grass_sub_hurt = a2->grass_sub_hurt;
  if ( (((unsigned __int8)this - 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->water_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->water_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->water_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 117) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->water_sub_hurt._M_payload._M_engaged
                                                                           + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->water_sub_hurt, 8LL);
  }
  if ( (((unsigned __int8)a2 - 124) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->water_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->water_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->water_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 117) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->water_sub_hurt._M_payload._M_engaged + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->water_sub_hurt, 8LL);
  }
  this->water_sub_hurt = a2->water_sub_hurt;
  if ( (((unsigned __int8)this - 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->elec_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->elec_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->elec_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 109) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->elec_sub_hurt._M_payload._M_engaged
                                                                           + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->elec_sub_hurt, 8LL);
  }
  if ( (((unsigned __int8)a2 - 116) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->elec_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->elec_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->elec_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 109) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->elec_sub_hurt._M_payload._M_engaged + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->elec_sub_hurt, 8LL);
  }
  this->elec_sub_hurt = a2->elec_sub_hurt;
  if ( (((unsigned __int8)this - 108) & 7) >= *(_BYTE *)(((unsigned __int64)&this->wind_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->wind_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->wind_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 101) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->wind_sub_hurt._M_payload._M_engaged
                                                                           + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->wind_sub_hurt, 8LL);
  }
  if ( (((unsigned __int8)a2 - 108) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->wind_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->wind_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->wind_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 101) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->wind_sub_hurt._M_payload._M_engaged + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->wind_sub_hurt, 8LL);
  }
  this->wind_sub_hurt = a2->wind_sub_hurt;
  if ( (((unsigned __int8)this - 100) & 7) >= *(_BYTE *)(((unsigned __int64)&this->ice_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->ice_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->ice_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 93) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->ice_sub_hurt._M_payload._M_engaged + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->ice_sub_hurt, 8LL);
  }
  if ( (((unsigned __int8)a2 - 100) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->ice_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->ice_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->ice_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 93) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->ice_sub_hurt._M_payload._M_engaged + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->ice_sub_hurt, 8LL);
  }
  this->ice_sub_hurt = a2->ice_sub_hurt;
  if ( (((unsigned __int8)this - 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->rock_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->rock_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->rock_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 85) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->rock_sub_hurt._M_payload._M_engaged
                                                                          + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->rock_sub_hurt, 8LL);
  }
  if ( (((unsigned __int8)a2 - 92) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->rock_sub_hurt >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->rock_sub_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->rock_sub_hurt._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 85) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->rock_sub_hurt._M_payload._M_engaged + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->rock_sub_hurt, 8LL);
  }
  this->rock_sub_hurt = a2->rock_sub_hurt;
  if ( (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->bonus_element_reaction_critical >> 3)
                                                      + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->bonus_element_reaction_critical >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->bonus_element_reaction_critical._M_payload._M_engaged + 3) >> 3)
                + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 77) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->bonus_element_reaction_critical._M_payload._M_engaged
                                                                          + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->bonus_element_reaction_critical, 8LL);
  }
  if ( (((unsigned __int8)a2 - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->bonus_element_reaction_critical >> 3)
                                                    + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->bonus_element_reaction_critical >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->bonus_element_reaction_critical._M_payload._M_engaged + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 77) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->bonus_element_reaction_critical._M_payload._M_engaged
                                                                        + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->bonus_element_reaction_critical, 8LL);
  }
  this->bonus_element_reaction_critical = a2->bonus_element_reaction_critical;
  if ( (((unsigned __int8)this - 76) & 7) >= *(_BYTE *)(((unsigned __int64)&this->bonus_element_reaction_critical_hurt >> 3)
                                                      + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->bonus_element_reaction_critical_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->bonus_element_reaction_critical_hurt._M_payload._M_engaged + 3) >> 3)
                + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 69) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->bonus_element_reaction_critical_hurt._M_payload._M_engaged
                                                                          + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->bonus_element_reaction_critical_hurt, 8LL);
  }
  if ( (((unsigned __int8)a2 - 76) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->bonus_element_reaction_critical_hurt >> 3)
                                                    + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->bonus_element_reaction_critical_hurt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->bonus_element_reaction_critical_hurt._M_payload._M_engaged + 3) >> 3)
                + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 69) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->bonus_element_reaction_critical_hurt._M_payload._M_engaged
                                                                        + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->bonus_element_reaction_critical_hurt, 8LL);
  }
  this->bonus_element_reaction_critical_hurt = a2->bonus_element_reaction_critical_hurt;
};

// Line 557: range 00000000133D57C2-00000000133D6C63
void __cdecl AttackResult::AttackResult(AttackResult *const this, AttackResult *a2)
{
  float client_damage; // xmm0_4
  float server_damage; // xmm0_4
  float ori_server_damage; // xmm0_4
  double v5; // xmm0_8
  bool is_critical; // cl
  uint32_t client_critical_rand; // ecx
  uint32_t server_critical_rand; // ecx
  data::ElementType element_type; // ecx
  uint32_t hashed_anim_event_id; // ecx
  uint32_t attack_id; // ecx
  bool can_hit_head; // cl
  float attackee_hit_force_angle; // xmm0_4
  float attackee_hit_entity_angle; // xmm0_4
  uint32_t hit_pos_type; // ecx
  double v16; // xmm0_8
  uint32_t attack_count; // ecx
  uint32_t time_stamp; // ecx
  uint32_t bullet_fly_time_ms; // ecx
  const data::ConfigBulletWane *bullet_wane_ptr; // rdx
  data::CanBeModifiedBy can_be_modified_by; // ecx
  float client_element_amplify_rate; // xmm0_4
  int32_t local_id; // ecx
  bool predicate_modify_damage; // cl
  data::ElementReactionType amplify_reaction_type; // ecx
  data::ElementReactionType addhurt_reaction_type; // ecx
  uint32_t from_player_uid; // ecx
  bool need_clamp_damage; // cl
  data::DamageClampType damage_clamp_type; // ecx
  float clamp_damage_min_value; // xmm0_4
  float clamp_damage_max_value; // xmm0_4
  uint32_t create_count; // ecx
  uint32_t target_type; // ecx
  float damage_extra_overdose; // xmm0_4
  float total_damage_extra; // xmm0_4
  float damage_base; // xmm0_4

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  client_damage = a2->client_damage;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->client_damage = client_damage;
  if ( *(_BYTE *)(((unsigned __int64)&a2->server_damage >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->server_damage >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->server_damage);
  }
  server_damage = a2->server_damage;
  if ( *(_BYTE *)(((unsigned __int64)&this->server_damage >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->server_damage >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->server_damage);
  }
  this->server_damage = server_damage;
  if ( *(_BYTE *)(((unsigned __int64)&a2->ori_server_damage >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->ori_server_damage >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->ori_server_damage);
  }
  ori_server_damage = a2->ori_server_damage;
  if ( *(_BYTE *)(((unsigned __int64)&this->ori_server_damage >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ori_server_damage >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ori_server_damage);
  }
  this->ori_server_damage = ori_server_damage;
  if ( *(_BYTE *)(((unsigned __int64)&a2->block_shield_hurt >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->block_shield_hurt >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->block_shield_hurt);
  }
  *(_QWORD *)&v5 = LODWORD(a2->block_shield_hurt);
  if ( *(_BYTE *)(((unsigned __int64)&this->block_shield_hurt >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->block_shield_hurt >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->block_shield_hurt);
  }
  this->block_shield_hurt = *(float *)&v5;
  if ( *(char *)(((unsigned __int64)&a2->is_critical >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_critical);
  is_critical = a2->is_critical;
  if ( *(char *)(((unsigned __int64)&this->is_critical >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_critical);
  this->is_critical = is_critical;
  if ( *(_BYTE *)(((unsigned __int64)&a2->client_critical_rand >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->client_critical_rand >> 3) + 0x7FFF8000) )
  {
    v5 = __asan_report_load4(&a2->client_critical_rand);
  }
  client_critical_rand = a2->client_critical_rand;
  if ( *(_BYTE *)(((unsigned __int64)&this->client_critical_rand >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->client_critical_rand >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->client_critical_rand);
  }
  this->client_critical_rand = client_critical_rand;
  if ( *(_BYTE *)(((unsigned __int64)&a2->server_critical_rand >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->server_critical_rand >> 3) + 0x7FFF8000) <= 3 )
  {
    v5 = __asan_report_load4(&a2->server_critical_rand);
  }
  server_critical_rand = a2->server_critical_rand;
  if ( *(_BYTE *)(((unsigned __int64)&this->server_critical_rand >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->server_critical_rand >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->server_critical_rand);
  }
  this->server_critical_rand = server_critical_rand;
  if ( *(_BYTE *)(((unsigned __int64)&a2->element_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->element_type >> 3) + 0x7FFF8000) )
  {
    v5 = __asan_report_load4(&a2->element_type);
  }
  element_type = a2->element_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->element_type);
  }
  this->element_type = element_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->hashed_anim_event_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->hashed_anim_event_id >> 3) + 0x7FFF8000) <= 3 )
  {
    v5 = __asan_report_load4(&a2->hashed_anim_event_id);
  }
  hashed_anim_event_id = a2->hashed_anim_event_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->hashed_anim_event_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hashed_anim_event_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hashed_anim_event_id);
  }
  this->hashed_anim_event_id = hashed_anim_event_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->attack_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->attack_id >> 3) + 0x7FFF8000) )
  {
    v5 = __asan_report_load4(&a2->attack_id);
  }
  attack_id = a2->attack_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->attack_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->attack_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->attack_id);
  }
  this->attack_id = attack_id;
  std::string::basic_string(&this->anim_event_id, &a2->anim_event_id, v5);
  std::string::basic_string(&this->attack_tag, &a2->attack_tag, v5);
  if ( *(char *)(((unsigned __int64)&a2->can_hit_head >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->can_hit_head);
  can_hit_head = a2->can_hit_head;
  if ( *(char *)(((unsigned __int64)&this->can_hit_head >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->can_hit_head);
  this->can_hit_head = can_hit_head;
  if ( (((unsigned __int8)this + 108) & 7) >= *(_BYTE *)(((unsigned __int64)&this->hit_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->hit_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->hit_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 119) & 7) >= *(_BYTE *)((((unsigned __int64)&this->hit_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->hit_pos, 12LL);
  }
  if ( (((unsigned __int8)a2 + 108) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->hit_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->hit_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&a2->hit_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 119) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->hit_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->hit_pos, 12LL);
  }
  this->hit_pos = a2->hit_pos;
  if ( *(_BYTE *)(((unsigned __int64)&a2->attackee_hit_force_angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->attackee_hit_force_angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->attackee_hit_force_angle);
  }
  attackee_hit_force_angle = a2->attackee_hit_force_angle;
  if ( *(_BYTE *)(((unsigned __int64)&this->attackee_hit_force_angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->attackee_hit_force_angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->attackee_hit_force_angle);
  }
  this->attackee_hit_force_angle = attackee_hit_force_angle;
  if ( *(_BYTE *)(((unsigned __int64)&a2->attackee_hit_entity_angle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->attackee_hit_entity_angle >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->attackee_hit_entity_angle);
  }
  attackee_hit_entity_angle = a2->attackee_hit_entity_angle;
  if ( *(_BYTE *)(((unsigned __int64)&this->attackee_hit_entity_angle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->attackee_hit_entity_angle >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->attackee_hit_entity_angle);
  }
  this->attackee_hit_entity_angle = attackee_hit_entity_angle;
  if ( *(_BYTE *)(((unsigned __int64)&a2->hit_pos_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->hit_pos_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->hit_pos_type);
  }
  hit_pos_type = a2->hit_pos_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->hit_pos_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hit_pos_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hit_pos_type);
  }
  this->hit_pos_type = hit_pos_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->damage_on_shield >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->damage_on_shield >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->damage_on_shield);
  }
  *(_QWORD *)&v16 = LODWORD(a2->damage_on_shield);
  if ( *(_BYTE *)(((unsigned __int64)&this->damage_on_shield >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->damage_on_shield >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->damage_on_shield);
  }
  this->damage_on_shield = *(float *)&v16;
  std::string::basic_string(&this->attenuation_group, &a2->attenuation_group, v16);
  if ( *(_BYTE *)(((unsigned __int64)&a2->attack_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->attack_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->attack_count);
  }
  attack_count = a2->attack_count;
  if ( *(_BYTE *)(((unsigned __int64)&this->attack_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->attack_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->attack_count);
  }
  this->attack_count = attack_count;
  if ( *(_BYTE *)(((unsigned __int64)&a2->time_stamp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->time_stamp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->time_stamp);
  }
  time_stamp = a2->time_stamp;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_stamp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->time_stamp >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->time_stamp);
  }
  this->time_stamp = time_stamp;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_damage_action_idx_opt >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->gadget_damage_action_idx_opt);
  if ( *(_BYTE *)(((unsigned __int64)&a2->gadget_damage_action_idx_opt >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->gadget_damage_action_idx_opt);
  this->gadget_damage_action_idx_opt = a2->gadget_damage_action_idx_opt;
  data::ConfigAttackProperty::ConfigAttackProperty(&this->server_attacker_property, &a2->server_attacker_property);
  ModifiedAttackProperty::ModifiedAttackProperty(&this->modified_property, &a2->modified_property);
  if ( *(_BYTE *)(((unsigned __int64)&a2->bullet_fly_time_ms >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->bullet_fly_time_ms >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->bullet_fly_time_ms);
  }
  bullet_fly_time_ms = a2->bullet_fly_time_ms;
  if ( *(_BYTE *)(((unsigned __int64)&this->bullet_fly_time_ms >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bullet_fly_time_ms >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->bullet_fly_time_ms);
  }
  this->bullet_fly_time_ms = bullet_fly_time_ms;
  if ( *(_BYTE *)(((unsigned __int64)&a2->bullet_wane_ptr >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->bullet_wane_ptr);
  bullet_wane_ptr = a2->bullet_wane_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&this->bullet_wane_ptr >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->bullet_wane_ptr);
  this->bullet_wane_ptr = bullet_wane_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&a2->can_be_modified_by >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->can_be_modified_by >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->can_be_modified_by);
  }
  can_be_modified_by = a2->can_be_modified_by;
  if ( *(_BYTE *)(((unsigned __int64)&this->can_be_modified_by >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->can_be_modified_by >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->can_be_modified_by);
  }
  this->can_be_modified_by = can_be_modified_by;
  if ( *(_BYTE *)(((unsigned __int64)&a2->client_element_amplify_rate >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->client_element_amplify_rate >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->client_element_amplify_rate);
  }
  client_element_amplify_rate = a2->client_element_amplify_rate;
  if ( *(_BYTE *)(((unsigned __int64)&this->client_element_amplify_rate >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->client_element_amplify_rate >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->client_element_amplify_rate);
  }
  this->client_element_amplify_rate = client_element_amplify_rate;
  std::shared_ptr<ActorAbility>::shared_ptr(&this->ability_ptr, &a2->ability_ptr);
  std::shared_ptr<ActorModifier>::shared_ptr(&this->modifier_ptr, &a2->modifier_ptr);
  std::weak_ptr<Creature>::weak_ptr(&this->modifier_owner_wtr, &a2->modifier_owner_wtr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->local_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->local_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->local_id);
  }
  local_id = a2->local_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->local_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->local_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->local_id);
  }
  this->local_id = local_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->predicate_modify_damage >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->predicate_modify_damage >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->predicate_modify_damage);
  }
  predicate_modify_damage = a2->predicate_modify_damage;
  if ( *(_BYTE *)(((unsigned __int64)&this->predicate_modify_damage >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->predicate_modify_damage >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->predicate_modify_damage);
  }
  this->predicate_modify_damage = predicate_modify_damage;
  if ( *(_BYTE *)(((unsigned __int64)&a2->amplify_reaction_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->amplify_reaction_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->amplify_reaction_type);
  }
  amplify_reaction_type = a2->amplify_reaction_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->amplify_reaction_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->amplify_reaction_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->amplify_reaction_type);
  }
  this->amplify_reaction_type = amplify_reaction_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->addhurt_reaction_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->addhurt_reaction_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->addhurt_reaction_type);
  }
  addhurt_reaction_type = a2->addhurt_reaction_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->addhurt_reaction_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->addhurt_reaction_type >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->addhurt_reaction_type);
  }
  this->addhurt_reaction_type = addhurt_reaction_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->from_player_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->from_player_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->from_player_uid);
  }
  from_player_uid = a2->from_player_uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->from_player_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->from_player_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->from_player_uid);
  }
  this->from_player_uid = from_player_uid;
  if ( *(_BYTE *)(((unsigned __int64)&a2->need_clamp_damage >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 68) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->need_clamp_damage >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->need_clamp_damage);
  }
  need_clamp_damage = a2->need_clamp_damage;
  if ( *(_BYTE *)(((unsigned __int64)&this->need_clamp_damage >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->need_clamp_damage >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->need_clamp_damage);
  }
  this->need_clamp_damage = need_clamp_damage;
  if ( *(_BYTE *)(((unsigned __int64)&a2->damage_clamp_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->damage_clamp_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->damage_clamp_type);
  }
  damage_clamp_type = a2->damage_clamp_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->damage_clamp_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->damage_clamp_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->damage_clamp_type);
  }
  this->damage_clamp_type = damage_clamp_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->clamp_damage_min_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->clamp_damage_min_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->clamp_damage_min_value);
  }
  clamp_damage_min_value = a2->clamp_damage_min_value;
  if ( *(_BYTE *)(((unsigned __int64)&this->clamp_damage_min_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->clamp_damage_min_value >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->clamp_damage_min_value);
  }
  this->clamp_damage_min_value = clamp_damage_min_value;
  if ( *(_BYTE *)(((unsigned __int64)&a2->clamp_damage_max_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->clamp_damage_max_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->clamp_damage_max_value);
  }
  clamp_damage_max_value = a2->clamp_damage_max_value;
  if ( *(_BYTE *)(((unsigned __int64)&this->clamp_damage_max_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->clamp_damage_max_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->clamp_damage_max_value);
  }
  this->clamp_damage_max_value = clamp_damage_max_value;
  if ( *(_BYTE *)(((unsigned __int64)&a2->create_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->create_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->create_count);
  }
  create_count = a2->create_count;
  if ( *(_BYTE *)(((unsigned __int64)&this->create_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->create_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->create_count);
  }
  this->create_count = create_count;
  if ( *(_BYTE *)(((unsigned __int64)&a2->target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->target_type);
  }
  target_type = a2->target_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_type);
  }
  this->target_type = target_type;
  std::map<unsigned int,float>::map(&this->stat_log_damage_extra_map, &a2->stat_log_damage_extra_map);
  if ( *(_BYTE *)(((unsigned __int64)&a2->damage_extra_overdose >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->damage_extra_overdose >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->damage_extra_overdose);
  }
  damage_extra_overdose = a2->damage_extra_overdose;
  if ( *(_BYTE *)(((unsigned __int64)&this->damage_extra_overdose >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->damage_extra_overdose >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->damage_extra_overdose);
  }
  this->damage_extra_overdose = damage_extra_overdose;
  if ( *(_BYTE *)(((unsigned __int64)&a2->total_damage_extra >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->total_damage_extra >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->total_damage_extra);
  }
  total_damage_extra = a2->total_damage_extra;
  if ( *(_BYTE *)(((unsigned __int64)&this->total_damage_extra >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_damage_extra >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->total_damage_extra);
  }
  this->total_damage_extra = total_damage_extra;
  if ( *(_BYTE *)(((unsigned __int64)&a2->damage_base >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->damage_base >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->damage_base);
  }
  damage_base = a2->damage_base;
  if ( *(_BYTE *)(((unsigned __int64)&this->damage_base >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->damage_base >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->damage_base);
  }
  this->damage_base = damage_base;
  std::weak_ptr<Creature>::weak_ptr(&this->attacker_wtr, &a2->attacker_wtr);
  std::weak_ptr<Creature>::weak_ptr(&this->defenser_wtr, &a2->defenser_wtr);
  std::shared_ptr<DieCreatureRecord>::shared_ptr(
    &this->die_modifier_owner_record_ptr,
    &a2->die_modifier_owner_record_ptr);
};
