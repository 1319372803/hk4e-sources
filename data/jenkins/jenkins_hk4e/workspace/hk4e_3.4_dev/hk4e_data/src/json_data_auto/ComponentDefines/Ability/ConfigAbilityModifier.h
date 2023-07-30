// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.h

// Line 72: range 000000001270288A-000000001270296D
void __cdecl data::ConfigModifierStackingOption::ConfigModifierStackingOption(
        data::ConfigModifierStackingOption *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->unique_modifier_condition >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->unique_modifier_condition >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->unique_modifier_condition, v1);
  }
  this->unique_modifier_condition = Greater_2;
  data::DynamicFloat::DynamicFloat(&this->max_modifier_num_for_multiple_type);
  if ( *(char *)(((unsigned __int64)&this->enable_mixed_unique >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->enable_mixed_unique, v1, &this->enable_mixed_unique);
  this->enable_mixed_unique = 0;
  v2 = ((_BYTE)this + 73) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_json_loaded, v2, v3);
  this->is_json_loaded = 0;
};

// Line 72: range 000000000F7CA25C-000000000F7CA42A
void __cdecl data::ConfigModifierStackingOption::ConfigModifierStackingOption(
        data::ConfigModifierStackingOption *const this,
        const data::ConfigModifierStackingOption *a2)
{
  data::UniqueModifierCond unique_modifier_condition; // ecx
  char v3; // al
  data::DynamicFloat *p_max_modifier_num_for_multiple_type; // rsi
  bool enable_mixed_unique; // cl
  char v6; // al
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool is_json_loaded; // cl
  char v10; // dl
  __int64 v11; // rdx
  const data::ConfigModifierStackingOption *v12; // [rsp+0h] [rbp-20h]

  v12 = a2;
  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&v12->unique_modifier_condition >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v12->unique_modifier_condition >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->unique_modifier_condition);
  }
  unique_modifier_condition = a2->unique_modifier_condition;
  v3 = *(_BYTE *)(((unsigned __int64)&this->unique_modifier_condition >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->unique_modifier_condition, a2);
  }
  this->unique_modifier_condition = unique_modifier_condition;
  p_max_modifier_num_for_multiple_type = &v12->max_modifier_num_for_multiple_type;
  data::DynamicFloat::DynamicFloat(&this->max_modifier_num_for_multiple_type, &v12->max_modifier_num_for_multiple_type);
  if ( *(char *)(((unsigned __int64)&v12->enable_mixed_unique >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v12->enable_mixed_unique, p_max_modifier_num_for_multiple_type, &v12->enable_mixed_unique);
  enable_mixed_unique = v12->enable_mixed_unique;
  v6 = *(_BYTE *)(((unsigned __int64)&this->enable_mixed_unique >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_max_modifier_num_for_multiple_type) = v6 != 0;
    __asan_report_store1(&this->enable_mixed_unique, p_max_modifier_num_for_multiple_type, &this->enable_mixed_unique);
  }
  this->enable_mixed_unique = enable_mixed_unique;
  v7 = ((_BYTE)v12 + 73) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&v12->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&v12->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&v12->is_json_loaded, v7, v8);
  is_json_loaded = v12->is_json_loaded;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this + 73) & 7) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->is_json_loaded, v7, v11);
  this->is_json_loaded = is_json_loaded;
};

// Line 72: range 000000000F7CA42C-000000000F7CA456
void __cdecl data::ConfigModifierStackingOption::~ConfigModifierStackingOption(
        data::ConfigModifierStackingOption *const this)
{
  data::DynamicFloat::~DynamicFloat(&this->max_modifier_num_for_multiple_type);
  std::string::~string(this);
};

// Line 98: range 0000000012702A28-0000000012702AB1
void __cdecl data::ConfigDummyAbilityOption::ConfigDummyAbilityOption(data::ConfigDummyAbilityOption *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  v1 = (unsigned __int8)this & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(this, v1, v2);
  this->disable_apply_modifier_error = 0;
  v3 = ((_BYTE)this + 1) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 121: range 0000000012702AB2-0000000012703477
void __cdecl data::ConfigAbilityModifier::ConfigAbilityModifier(data::ConfigAbilityModifier *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rdx

  std::enable_shared_from_this<data::ConfigAbilityModifier>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigAbilityModifier>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAbilityModifier + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityModifier = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_scale >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_scale >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_scale, v1);
  }
  this->time_scale = Owner_2;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->stacking >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stacking >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stacking, v3);
  }
  this->stacking = Refresh;
  data::ConfigModifierStackingOption::ConfigModifierStackingOption(&this->stacking_option);
  if ( *(char *)(((unsigned __int64)&this->is_buff >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_buff, v3, &this->is_buff);
  this->is_buff = 0;
  v4 = ((_BYTE)this + 113) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_debuff >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_debuff >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_debuff, v4, v5);
  this->is_debuff = 0;
  std::string::basic_string(&this->modifier_name);
  if ( *(char *)(((unsigned __int64)&this->is_unique >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_unique, v4, &this->is_unique);
  this->is_unique = 0;
  data::DynamicFloat::DynamicFloat(&this->duration);
  if ( *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->element_type, v4);
  }
  this->element_type = None_0;
  data::DynamicFloat::DynamicFloat(&this->element_durability, 100.0);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_element_durability >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_element_durability >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_element_durability, v4);
  }
  this->max_element_durability = -1.0;
  v6 = (((_BYTE)this - 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->purge_increment >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->purge_increment >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->purge_increment, v6);
  }
  this->purge_increment = 0.0;
  if ( *(char *)(((unsigned __int64)&this->is_element_durability_mutable >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_element_durability_mutable, v6, &this->is_element_durability_mutable);
  this->is_element_durability_mutable = 1;
  v7 = ((_BYTE)this - 15) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->force_trigger_burning >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->force_trigger_burning >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->force_trigger_burning, v7, v8);
  this->force_trigger_burning = 0;
  v9 = ((_BYTE)this - 14) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->override_weapon_element >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->override_weapon_element >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->override_weapon_element, v9, v10);
  this->override_weapon_element = 0;
  data::DynamicFloat::DynamicFloat(&this->think_interval);
  std::vector<std::shared_ptr<data::ConfigAbilityMixin>>::vector(&this->modifier_mixins);
  if ( *(char *)(((unsigned __int64)&this->trim_think_interval >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->trim_think_interval, v9, &this->trim_think_interval);
  this->trim_think_interval = 0;
  std::unordered_map<std::string,data::DynamicFloat>::unordered_map(&this->properties);
  if ( *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->state, v9);
  this->state = None_5;
  data::ConfigAbilityStateOption::ConfigAbilityStateOption(&this->state_option);
  v11 = ((_BYTE)this + 121) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->mute_state_display_effect >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->mute_state_display_effect >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->mute_state_display_effect, v11, v12);
  this->mute_state_display_effect = 0;
  v13 = ((_BYTE)this + 122) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->apply_attacker_witch_time_ratio >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&this->apply_attacker_witch_time_ratio >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->apply_attacker_witch_time_ratio, v13, v14);
  this->apply_attacker_witch_time_ratio = 0;
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_added);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_removed);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_being_hit);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_attack_landed);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_hitting_other);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_heal);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_being_healed);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_think_interval);
  if ( *(char *)(((unsigned __int64)&this->on_think_interval_is_fixed_update >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->on_think_interval_is_fixed_update, v13, &this->on_think_interval_is_fixed_update);
  this->on_think_interval_is_fixed_update = 0;
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_kill);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_crash);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_avatar_in);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_avatar_out);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_vehicle_in);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_vehicle_out);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_zone_enter);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_zone_exit);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_reconnect);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_change_authority);
  std::vector<data::EntityType>::vector(&this->forbidden_entities);
  if ( *(char *)(((unsigned __int64)&this->fire_event_when_apply >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->fire_event_when_apply, v13, &this->fire_event_when_apply);
  this->fire_event_when_apply = 0;
  v15 = ((_BYTE)this + 81) & 7;
  v16 = (*(_BYTE *)(((unsigned __int64)&this->is_durability_global >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&this->is_durability_global >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->is_durability_global, v15, v16);
  this->is_durability_global = 0;
  v17 = ((_BYTE)this + 82) & 7;
  v18 = (*(_BYTE *)(((unsigned __int64)&this->tick_think_interval_after_die >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v17 >= *(_BYTE *)(((unsigned __int64)&this->tick_think_interval_after_die >> 3) + 0x7FFF8000));
  if ( (_BYTE)v18 )
    __asan_report_store1(&this->tick_think_interval_after_die, v17, v18);
  this->tick_think_interval_after_die = 0;
  v19 = ((_BYTE)this + 83) & 7;
  v20 = (*(_BYTE *)(((unsigned __int64)&this->think_interval_ignore_time_scale >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v19 >= *(_BYTE *)(((unsigned __int64)&this->think_interval_ignore_time_scale >> 3) + 0x7FFF8000));
  if ( (_BYTE)v20 )
    __asan_report_store1(&this->think_interval_ignore_time_scale, v19, v20);
  this->think_interval_ignore_time_scale = 0;
  v21 = ((_BYTE)this + 84) & 7;
  v22 = (*(_BYTE *)(((unsigned __int64)&this->reduce_durablity_ignore_time_scale >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v21 >= *(_BYTE *)(((unsigned __int64)&this->reduce_durablity_ignore_time_scale >> 3) + 0x7FFF8000));
  if ( (_BYTE)v22 )
    __asan_report_store1(&this->reduce_durablity_ignore_time_scale, v21, v22);
  this->reduce_durablity_ignore_time_scale = 0;
  v23 = ((_BYTE)this + 85) & 7;
  v24 = (*(_BYTE *)(((unsigned __int64)&this->is_limited_properties >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v23 >= *(_BYTE *)(((unsigned __int64)&this->is_limited_properties >> 3) + 0x7FFF8000));
  if ( (_BYTE)v24 )
    __asan_report_store1(&this->is_limited_properties, v23, v24);
  this->is_limited_properties = 0;
  v25 = ((_BYTE)this + 86) & 7;
  v26 = (*(_BYTE *)(((unsigned __int64)&this->force_sync_to_remote >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v25 >= *(_BYTE *)(((unsigned __int64)&this->force_sync_to_remote >> 3) + 0x7FFF8000));
  if ( (_BYTE)v26 )
    __asan_report_store1(&this->force_sync_to_remote, v25, v26);
  this->force_sync_to_remote = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->buff_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->buff_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->buff_id, v25);
  }
  this->buff_id = 0;
  v27 = ((_BYTE)this + 92) & 7;
  v28 = (*(_BYTE *)(((unsigned __int64)&this->retain_when_durability_is_zero >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v27 >= *(_BYTE *)(((unsigned __int64)&this->retain_when_durability_is_zero >> 3) + 0x7FFF8000));
  if ( (_BYTE)v28 )
    __asan_report_store1(&this->retain_when_durability_is_zero, v27, v28);
  this->retain_when_durability_is_zero = 0;
  std::vector<data::ModifierTag>::vector(&this->modifier_tags);
  if ( *(char *)(((unsigned __int64)&this->use_dummy_ability >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->use_dummy_ability, v27, &this->use_dummy_ability);
  this->use_dummy_ability = 0;
  data::ConfigDummyAbilityOption::ConfigDummyAbilityOption(&this->dummy_ability_option);
  v29 = ((_BYTE)this + 123) & 7;
  v30 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v29 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v30 )
    __asan_report_store1(&this->is_json_loaded, v29, v30);
  this->is_json_loaded = 0;
};

// Line 181: range 000000000F7CA47E-000000000F7CBA05
void __cdecl data::ConfigAbilityModifier::ConfigAbilityModifier(
        data::ConfigAbilityModifier *const this,
        const data::ConfigAbilityModifier *a2)
{
  std::enable_shared_from_this<data::ConfigAbilityModifier> *v2; // rsi
  int (**v3)(...); // rdx
  data::ModifierTimeScale time_scale; // ecx
  char v5; // al
  __int64 v6; // rsi
  data::ModifierStacking stacking; // ecx
  char v8; // dl
  data::ConfigModifierStackingOption *p_stacking_option; // rsi
  bool is_buff; // cl
  char v11; // al
  __int64 v12; // rsi
  __int64 v13; // rdx
  bool is_debuff; // cl
  char v15; // dl
  __int64 v16; // rdx
  std::string *p_modifier_name; // rsi
  bool is_unique; // cl
  char v19; // al
  data::DynamicFloat *p_duration; // rsi
  data::ElementType element_type; // ecx
  char v22; // al
  float max_element_durability; // xmm0_4
  float purge_increment; // xmm0_4
  __int64 v25; // rsi
  bool is_element_durability_mutable; // cl
  char v27; // al
  __int64 v28; // rsi
  __int64 v29; // rdx
  bool force_trigger_burning; // cl
  char v31; // dl
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rdx
  bool override_weapon_element; // cl
  char v36; // dl
  __int64 v37; // rdx
  data::ConfigAbilityMixinArray *p_modifier_mixins; // rsi
  bool trim_think_interval; // cl
  char v40; // al
  data::DynamicFloatMap *p_properties; // rsi
  data::AbilityState state; // rdx
  __int64 v43; // rsi
  __int64 v44; // rdx
  bool mute_state_display_effect; // cl
  char v46; // dl
  __int64 v47; // rdx
  __int64 v48; // rsi
  __int64 v49; // rdx
  bool apply_attacker_witch_time_ratio; // cl
  char v51; // dl
  __int64 v52; // rdx
  data::ConfigAbilityActionArray *p_on_think_interval; // rsi
  bool on_think_interval_is_fixed_update; // cl
  char v55; // al
  data::ConfigEntityTypeArray *p_forbidden_entities; // rsi
  bool fire_event_when_apply; // cl
  char v58; // al
  __int64 v59; // rsi
  __int64 v60; // rdx
  bool is_durability_global; // cl
  char v62; // dl
  __int64 v63; // rdx
  __int64 v64; // rsi
  __int64 v65; // rdx
  bool tick_think_interval_after_die; // cl
  char v67; // dl
  __int64 v68; // rdx
  __int64 v69; // rsi
  __int64 v70; // rdx
  bool think_interval_ignore_time_scale; // cl
  char v72; // dl
  __int64 v73; // rdx
  __int64 v74; // rsi
  __int64 v75; // rdx
  bool reduce_durablity_ignore_time_scale; // cl
  char v77; // dl
  __int64 v78; // rdx
  __int64 v79; // rsi
  __int64 v80; // rdx
  bool is_limited_properties; // cl
  char v82; // dl
  __int64 v83; // rdx
  __int64 v84; // rsi
  __int64 v85; // rdx
  bool force_sync_to_remote; // cl
  char v87; // dl
  __int64 v88; // rdx
  int32_t buff_id; // ecx
  char v90; // al
  __int64 v91; // rsi
  __int64 v92; // rdx
  bool retain_when_durability_is_zero; // cl
  char v94; // dl
  __int64 v95; // rdx
  data::ModifierTagArray *p_modifier_tags; // rsi
  bool use_dummy_ability; // cl
  char v98; // al
  __int64 v99; // rsi
  __int64 v100; // rdx
  bool is_json_loaded; // cl
  char v102; // dl
  __int64 v103; // rdx

  v2 = &a2->std::enable_shared_from_this<data::ConfigAbilityModifier>;
  std::enable_shared_from_this<data::ConfigAbilityModifier>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigAbilityModifier>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigAbilityModifier + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigAbilityModifier = v3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->time_scale >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->time_scale >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->time_scale);
  }
  time_scale = a2->time_scale;
  v5 = *(_BYTE *)(((unsigned __int64)&this->time_scale >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store4(&this->time_scale, v2);
  }
  this->time_scale = time_scale;
  v6 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->stacking >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->stacking >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->stacking);
  }
  stacking = a2->stacking;
  v8 = *(_BYTE *)(((unsigned __int64)&this->stacking >> 3) + 0x7FFF8000);
  if ( v8 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v8 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store4(&this->stacking, v6);
  }
  this->stacking = stacking;
  p_stacking_option = &a2->stacking_option;
  data::ConfigModifierStackingOption::ConfigModifierStackingOption(&this->stacking_option, &a2->stacking_option);
  if ( *(char *)(((unsigned __int64)&a2->is_buff >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_buff, p_stacking_option, &a2->is_buff);
  is_buff = a2->is_buff;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_buff >> 3) + 0x7FFF8000);
  if ( v11 < 0 )
  {
    LOBYTE(p_stacking_option) = v11 != 0;
    __asan_report_store1(&this->is_buff, p_stacking_option, &this->is_buff);
  }
  this->is_buff = is_buff;
  v12 = ((_BYTE)a2 + 113) & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)&a2->is_debuff >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&a2->is_debuff >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_load1(&a2->is_debuff, v12, v13);
  is_debuff = a2->is_debuff;
  v15 = *(_BYTE *)(((unsigned __int64)&this->is_debuff >> 3) + 0x7FFF8000);
  LOBYTE(v12) = v15 != 0;
  v16 = (v15 != 0) & (unsigned __int8)((((unsigned __int8)this + 113) & 7) >= v15);
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->is_debuff, v12, v16);
  this->is_debuff = is_debuff;
  p_modifier_name = &a2->modifier_name;
  std::string::basic_string(&this->modifier_name, &a2->modifier_name);
  if ( *(char *)(((unsigned __int64)&a2->is_unique >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_unique, p_modifier_name, &a2->is_unique);
  is_unique = a2->is_unique;
  v19 = *(_BYTE *)(((unsigned __int64)&this->is_unique >> 3) + 0x7FFF8000);
  if ( v19 < 0 )
  {
    LOBYTE(p_modifier_name) = v19 != 0;
    __asan_report_store1(&this->is_unique, p_modifier_name, &this->is_unique);
  }
  this->is_unique = is_unique;
  p_duration = &a2->duration;
  data::DynamicFloat::DynamicFloat(&this->duration, &a2->duration);
  if ( *(_BYTE *)(((unsigned __int64)&a2->element_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->element_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->element_type);
  }
  element_type = a2->element_type;
  v22 = *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000);
  if ( v22 != 0 && v22 <= 3 )
  {
    LOBYTE(p_duration) = v22 != 0;
    __asan_report_store4(&this->element_type, p_duration);
  }
  this->element_type = element_type;
  data::DynamicFloat::DynamicFloat(&this->element_durability, &a2->element_durability);
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_element_durability >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->max_element_durability >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->max_element_durability);
  }
  max_element_durability = a2->max_element_durability;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_element_durability >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_element_durability >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_element_durability, &a2->element_durability);
  }
  this->max_element_durability = max_element_durability;
  if ( *(_BYTE *)(((unsigned __int64)&a2->purge_increment >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->purge_increment >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->purge_increment);
  }
  purge_increment = a2->purge_increment;
  v25 = (((_BYTE)this - 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->purge_increment >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->purge_increment >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->purge_increment, v25);
  }
  this->purge_increment = purge_increment;
  if ( *(char *)(((unsigned __int64)&a2->is_element_durability_mutable >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_element_durability_mutable, v25, &a2->is_element_durability_mutable);
  is_element_durability_mutable = a2->is_element_durability_mutable;
  v27 = *(_BYTE *)(((unsigned __int64)&this->is_element_durability_mutable >> 3) + 0x7FFF8000);
  if ( v27 < 0 )
  {
    LOBYTE(v25) = v27 != 0;
    __asan_report_store1(&this->is_element_durability_mutable, v25, &this->is_element_durability_mutable);
  }
  this->is_element_durability_mutable = is_element_durability_mutable;
  v28 = ((_BYTE)a2 - 15) & 7;
  v29 = (*(_BYTE *)(((unsigned __int64)&a2->force_trigger_burning >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v28 >= *(_BYTE *)(((unsigned __int64)&a2->force_trigger_burning >> 3) + 0x7FFF8000));
  if ( (_BYTE)v29 )
    __asan_report_load1(&a2->force_trigger_burning, v28, v29);
  force_trigger_burning = a2->force_trigger_burning;
  v31 = *(_BYTE *)(((unsigned __int64)&this->force_trigger_burning >> 3) + 0x7FFF8000);
  LOBYTE(v28) = v31 != 0;
  v32 = (v31 != 0) & (unsigned __int8)((((unsigned __int8)this - 15) & 7) >= v31);
  if ( (_BYTE)v32 )
    __asan_report_store1(&this->force_trigger_burning, v28, v32);
  this->force_trigger_burning = force_trigger_burning;
  v33 = ((_BYTE)a2 - 14) & 7;
  v34 = (*(_BYTE *)(((unsigned __int64)&a2->override_weapon_element >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v33 >= *(_BYTE *)(((unsigned __int64)&a2->override_weapon_element >> 3) + 0x7FFF8000));
  if ( (_BYTE)v34 )
    __asan_report_load1(&a2->override_weapon_element, v33, v34);
  override_weapon_element = a2->override_weapon_element;
  v36 = *(_BYTE *)(((unsigned __int64)&this->override_weapon_element >> 3) + 0x7FFF8000);
  LOBYTE(v33) = v36 != 0;
  v37 = (v36 != 0) & (unsigned __int8)((((unsigned __int8)this - 14) & 7) >= v36);
  if ( (_BYTE)v37 )
    __asan_report_store1(&this->override_weapon_element, v33, v37);
  this->override_weapon_element = override_weapon_element;
  data::DynamicFloat::DynamicFloat(&this->think_interval, &a2->think_interval);
  p_modifier_mixins = &a2->modifier_mixins;
  std::vector<std::shared_ptr<data::ConfigAbilityMixin>>::vector(&this->modifier_mixins, &a2->modifier_mixins);
  if ( *(char *)(((unsigned __int64)&a2->trim_think_interval >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->trim_think_interval, p_modifier_mixins, &a2->trim_think_interval);
  trim_think_interval = a2->trim_think_interval;
  v40 = *(_BYTE *)(((unsigned __int64)&this->trim_think_interval >> 3) + 0x7FFF8000);
  if ( v40 < 0 )
  {
    LOBYTE(p_modifier_mixins) = v40 != 0;
    __asan_report_store1(&this->trim_think_interval, p_modifier_mixins, &this->trim_think_interval);
  }
  this->trim_think_interval = trim_think_interval;
  p_properties = &a2->properties;
  std::unordered_map<std::string,data::DynamicFloat>::unordered_map(&this->properties, &a2->properties);
  if ( *(_BYTE *)(((unsigned __int64)&a2->state >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->state);
  state = a2->state;
  if ( *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->state, p_properties);
  this->state = state;
  if ( *(char *)(((unsigned __int64)&this->state_option >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->state_option, p_properties, &this->state_option);
  if ( *(char *)(((unsigned __int64)&a2->state_option >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->state_option, p_properties, &a2->state_option);
  this->state_option.is_json_loaded = a2->state_option.is_json_loaded;
  v43 = ((_BYTE)a2 + 121) & 7;
  v44 = (*(_BYTE *)(((unsigned __int64)&a2->mute_state_display_effect >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v43 >= *(_BYTE *)(((unsigned __int64)&a2->mute_state_display_effect >> 3) + 0x7FFF8000));
  if ( (_BYTE)v44 )
    __asan_report_load1(&a2->mute_state_display_effect, v43, v44);
  mute_state_display_effect = a2->mute_state_display_effect;
  v46 = *(_BYTE *)(((unsigned __int64)&this->mute_state_display_effect >> 3) + 0x7FFF8000);
  LOBYTE(v43) = v46 != 0;
  v47 = (v46 != 0) & (unsigned __int8)((((unsigned __int8)this + 121) & 7) >= v46);
  if ( (_BYTE)v47 )
    __asan_report_store1(&this->mute_state_display_effect, v43, v47);
  this->mute_state_display_effect = mute_state_display_effect;
  v48 = ((_BYTE)a2 + 122) & 7;
  v49 = (*(_BYTE *)(((unsigned __int64)&a2->apply_attacker_witch_time_ratio >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v48 >= *(_BYTE *)(((unsigned __int64)&a2->apply_attacker_witch_time_ratio >> 3) + 0x7FFF8000));
  if ( (_BYTE)v49 )
    __asan_report_load1(&a2->apply_attacker_witch_time_ratio, v48, v49);
  apply_attacker_witch_time_ratio = a2->apply_attacker_witch_time_ratio;
  v51 = *(_BYTE *)(((unsigned __int64)&this->apply_attacker_witch_time_ratio >> 3) + 0x7FFF8000);
  LOBYTE(v48) = v51 != 0;
  v52 = (v51 != 0) & (unsigned __int8)((((unsigned __int8)this + 122) & 7) >= v51);
  if ( (_BYTE)v52 )
    __asan_report_store1(&this->apply_attacker_witch_time_ratio, v48, v52);
  this->apply_attacker_witch_time_ratio = apply_attacker_witch_time_ratio;
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_added, &a2->on_added);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_removed, &a2->on_removed);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_being_hit, &a2->on_being_hit);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_attack_landed, &a2->on_attack_landed);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_hitting_other, &a2->on_hitting_other);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_heal, &a2->on_heal);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_being_healed, &a2->on_being_healed);
  p_on_think_interval = &a2->on_think_interval;
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_think_interval, &a2->on_think_interval);
  if ( *(char *)(((unsigned __int64)&a2->on_think_interval_is_fixed_update >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(
      &a2->on_think_interval_is_fixed_update,
      p_on_think_interval,
      &a2->on_think_interval_is_fixed_update);
  on_think_interval_is_fixed_update = a2->on_think_interval_is_fixed_update;
  v55 = *(_BYTE *)(((unsigned __int64)&this->on_think_interval_is_fixed_update >> 3) + 0x7FFF8000);
  if ( v55 < 0 )
  {
    LOBYTE(p_on_think_interval) = v55 != 0;
    __asan_report_store1(
      &this->on_think_interval_is_fixed_update,
      p_on_think_interval,
      &this->on_think_interval_is_fixed_update);
  }
  this->on_think_interval_is_fixed_update = on_think_interval_is_fixed_update;
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_kill, &a2->on_kill);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_crash, &a2->on_crash);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_avatar_in, &a2->on_avatar_in);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_avatar_out, &a2->on_avatar_out);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_vehicle_in, &a2->on_vehicle_in);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_vehicle_out, &a2->on_vehicle_out);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_zone_enter, &a2->on_zone_enter);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_zone_exit, &a2->on_zone_exit);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_reconnect, &a2->on_reconnect);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(&this->on_change_authority, &a2->on_change_authority);
  p_forbidden_entities = &a2->forbidden_entities;
  std::vector<data::EntityType>::vector(&this->forbidden_entities, &a2->forbidden_entities);
  if ( *(char *)(((unsigned __int64)&a2->fire_event_when_apply >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->fire_event_when_apply, p_forbidden_entities, &a2->fire_event_when_apply);
  fire_event_when_apply = a2->fire_event_when_apply;
  v58 = *(_BYTE *)(((unsigned __int64)&this->fire_event_when_apply >> 3) + 0x7FFF8000);
  if ( v58 < 0 )
  {
    LOBYTE(p_forbidden_entities) = v58 != 0;
    __asan_report_store1(&this->fire_event_when_apply, p_forbidden_entities, &this->fire_event_when_apply);
  }
  this->fire_event_when_apply = fire_event_when_apply;
  v59 = ((_BYTE)a2 + 81) & 7;
  v60 = (*(_BYTE *)(((unsigned __int64)&a2->is_durability_global >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v59 >= *(_BYTE *)(((unsigned __int64)&a2->is_durability_global >> 3) + 0x7FFF8000));
  if ( (_BYTE)v60 )
    __asan_report_load1(&a2->is_durability_global, v59, v60);
  is_durability_global = a2->is_durability_global;
  v62 = *(_BYTE *)(((unsigned __int64)&this->is_durability_global >> 3) + 0x7FFF8000);
  LOBYTE(v59) = v62 != 0;
  v63 = (v62 != 0) & (unsigned __int8)((((unsigned __int8)this + 81) & 7) >= v62);
  if ( (_BYTE)v63 )
    __asan_report_store1(&this->is_durability_global, v59, v63);
  this->is_durability_global = is_durability_global;
  v64 = ((_BYTE)a2 + 82) & 7;
  v65 = (*(_BYTE *)(((unsigned __int64)&a2->tick_think_interval_after_die >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v64 >= *(_BYTE *)(((unsigned __int64)&a2->tick_think_interval_after_die >> 3) + 0x7FFF8000));
  if ( (_BYTE)v65 )
    __asan_report_load1(&a2->tick_think_interval_after_die, v64, v65);
  tick_think_interval_after_die = a2->tick_think_interval_after_die;
  v67 = *(_BYTE *)(((unsigned __int64)&this->tick_think_interval_after_die >> 3) + 0x7FFF8000);
  LOBYTE(v64) = v67 != 0;
  v68 = (v67 != 0) & (unsigned __int8)((((unsigned __int8)this + 82) & 7) >= v67);
  if ( (_BYTE)v68 )
    __asan_report_store1(&this->tick_think_interval_after_die, v64, v68);
  this->tick_think_interval_after_die = tick_think_interval_after_die;
  v69 = ((_BYTE)a2 + 83) & 7;
  v70 = (*(_BYTE *)(((unsigned __int64)&a2->think_interval_ignore_time_scale >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v69 >= *(_BYTE *)(((unsigned __int64)&a2->think_interval_ignore_time_scale >> 3) + 0x7FFF8000));
  if ( (_BYTE)v70 )
    __asan_report_load1(&a2->think_interval_ignore_time_scale, v69, v70);
  think_interval_ignore_time_scale = a2->think_interval_ignore_time_scale;
  v72 = *(_BYTE *)(((unsigned __int64)&this->think_interval_ignore_time_scale >> 3) + 0x7FFF8000);
  LOBYTE(v69) = v72 != 0;
  v73 = (v72 != 0) & (unsigned __int8)((((unsigned __int8)this + 83) & 7) >= v72);
  if ( (_BYTE)v73 )
    __asan_report_store1(&this->think_interval_ignore_time_scale, v69, v73);
  this->think_interval_ignore_time_scale = think_interval_ignore_time_scale;
  v74 = ((_BYTE)a2 + 84) & 7;
  v75 = (*(_BYTE *)(((unsigned __int64)&a2->reduce_durablity_ignore_time_scale >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v74 >= *(_BYTE *)(((unsigned __int64)&a2->reduce_durablity_ignore_time_scale >> 3) + 0x7FFF8000));
  if ( (_BYTE)v75 )
    __asan_report_load1(&a2->reduce_durablity_ignore_time_scale, v74, v75);
  reduce_durablity_ignore_time_scale = a2->reduce_durablity_ignore_time_scale;
  v77 = *(_BYTE *)(((unsigned __int64)&this->reduce_durablity_ignore_time_scale >> 3) + 0x7FFF8000);
  LOBYTE(v74) = v77 != 0;
  v78 = (v77 != 0) & (unsigned __int8)((((unsigned __int8)this + 84) & 7) >= v77);
  if ( (_BYTE)v78 )
    __asan_report_store1(&this->reduce_durablity_ignore_time_scale, v74, v78);
  this->reduce_durablity_ignore_time_scale = reduce_durablity_ignore_time_scale;
  v79 = ((_BYTE)a2 + 85) & 7;
  v80 = (*(_BYTE *)(((unsigned __int64)&a2->is_limited_properties >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v79 >= *(_BYTE *)(((unsigned __int64)&a2->is_limited_properties >> 3) + 0x7FFF8000));
  if ( (_BYTE)v80 )
    __asan_report_load1(&a2->is_limited_properties, v79, v80);
  is_limited_properties = a2->is_limited_properties;
  v82 = *(_BYTE *)(((unsigned __int64)&this->is_limited_properties >> 3) + 0x7FFF8000);
  LOBYTE(v79) = v82 != 0;
  v83 = (v82 != 0) & (unsigned __int8)((((unsigned __int8)this + 85) & 7) >= v82);
  if ( (_BYTE)v83 )
    __asan_report_store1(&this->is_limited_properties, v79, v83);
  this->is_limited_properties = is_limited_properties;
  v84 = ((_BYTE)a2 + 86) & 7;
  v85 = (*(_BYTE *)(((unsigned __int64)&a2->force_sync_to_remote >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v84 >= *(_BYTE *)(((unsigned __int64)&a2->force_sync_to_remote >> 3) + 0x7FFF8000));
  if ( (_BYTE)v85 )
    __asan_report_load1(&a2->force_sync_to_remote, v84, v85);
  force_sync_to_remote = a2->force_sync_to_remote;
  v87 = *(_BYTE *)(((unsigned __int64)&this->force_sync_to_remote >> 3) + 0x7FFF8000);
  LOBYTE(v84) = v87 != 0;
  v88 = (v87 != 0) & (unsigned __int8)((((unsigned __int8)this + 86) & 7) >= v87);
  if ( (_BYTE)v88 )
    __asan_report_store1(&this->force_sync_to_remote, v84, v88);
  this->force_sync_to_remote = force_sync_to_remote;
  if ( *(_BYTE *)(((unsigned __int64)&a2->buff_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->buff_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->buff_id);
  }
  buff_id = a2->buff_id;
  v90 = *(_BYTE *)(((unsigned __int64)&this->buff_id >> 3) + 0x7FFF8000);
  if ( v90 != 0 && v90 <= 3 )
  {
    LOBYTE(v84) = v90 != 0;
    __asan_report_store4(&this->buff_id, v84);
  }
  this->buff_id = buff_id;
  v91 = ((_BYTE)a2 + 92) & 7;
  v92 = (*(_BYTE *)(((unsigned __int64)&a2->retain_when_durability_is_zero >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v91 >= *(_BYTE *)(((unsigned __int64)&a2->retain_when_durability_is_zero >> 3) + 0x7FFF8000));
  if ( (_BYTE)v92 )
    __asan_report_load1(&a2->retain_when_durability_is_zero, v91, v92);
  retain_when_durability_is_zero = a2->retain_when_durability_is_zero;
  v94 = *(_BYTE *)(((unsigned __int64)&this->retain_when_durability_is_zero >> 3) + 0x7FFF8000);
  LOBYTE(v91) = v94 != 0;
  v95 = (v94 != 0) & (unsigned __int8)((((unsigned __int8)this + 92) & 7) >= v94);
  if ( (_BYTE)v95 )
    __asan_report_store1(&this->retain_when_durability_is_zero, v91, v95);
  this->retain_when_durability_is_zero = retain_when_durability_is_zero;
  p_modifier_tags = &a2->modifier_tags;
  std::vector<data::ModifierTag>::vector(&this->modifier_tags, &a2->modifier_tags);
  if ( *(char *)(((unsigned __int64)&a2->use_dummy_ability >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->use_dummy_ability, p_modifier_tags, &a2->use_dummy_ability);
  use_dummy_ability = a2->use_dummy_ability;
  v98 = *(_BYTE *)(((unsigned __int64)&this->use_dummy_ability >> 3) + 0x7FFF8000);
  if ( v98 < 0 )
  {
    LOBYTE(p_modifier_tags) = v98 != 0;
    __asan_report_store1(&this->use_dummy_ability, p_modifier_tags, &this->use_dummy_ability);
  }
  this->use_dummy_ability = use_dummy_ability;
  if ( (((unsigned __int8)this + 121) & 7) >= *(_BYTE *)(((unsigned __int64)&this->dummy_ability_option >> 3)
                                                       + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->dummy_ability_option >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)&this->dummy_ability_option.is_json_loaded >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 122) & 7) >= *(_BYTE *)(((unsigned __int64)&this->dummy_ability_option.is_json_loaded >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->dummy_ability_option, 2LL);
  }
  if ( (((unsigned __int8)a2 + 121) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->dummy_ability_option >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->dummy_ability_option >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)&a2->dummy_ability_option.is_json_loaded >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 122) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->dummy_ability_option.is_json_loaded >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->dummy_ability_option, 2LL);
  }
  this->dummy_ability_option = a2->dummy_ability_option;
  v99 = ((_BYTE)a2 + 123) & 7;
  v100 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v99 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v100 )
    __asan_report_load1(&a2->is_json_loaded, v99, v100);
  is_json_loaded = a2->is_json_loaded;
  v102 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v99) = v102 != 0;
  v103 = (v102 != 0) & (unsigned __int8)((((unsigned __int8)this + 123) & 7) >= v102);
  if ( (_BYTE)v103 )
    __asan_report_store1(&this->is_json_loaded, v99, v103);
  this->is_json_loaded = is_json_loaded;
};

// Line 183: range 000000000F8F95C6-000000000F8F97F9
void __cdecl data::ConfigAbilityModifier::~ConfigAbilityModifier(data::ConfigAbilityModifier *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAbilityModifier + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityModifier = v2;
  std::vector<data::ModifierTag>::~vector(&this->modifier_tags);
  std::vector<data::EntityType>::~vector(&this->forbidden_entities);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::~vector(&this->on_change_authority);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::~vector(&this->on_reconnect);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::~vector(&this->on_zone_exit);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::~vector(&this->on_zone_enter);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::~vector(&this->on_vehicle_out);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::~vector(&this->on_vehicle_in);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::~vector(&this->on_avatar_out);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::~vector(&this->on_avatar_in);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::~vector(&this->on_crash);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::~vector(&this->on_kill);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::~vector(&this->on_think_interval);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::~vector(&this->on_being_healed);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::~vector(&this->on_heal);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::~vector(&this->on_hitting_other);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::~vector(&this->on_attack_landed);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::~vector(&this->on_being_hit);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::~vector(&this->on_removed);
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::~vector(&this->on_added);
  std::unordered_map<std::string,data::DynamicFloat>::~unordered_map(&this->properties);
  std::vector<std::shared_ptr<data::ConfigAbilityMixin>>::~vector(&this->modifier_mixins);
  data::DynamicFloat::~DynamicFloat(&this->think_interval);
  data::DynamicFloat::~DynamicFloat(&this->element_durability);
  data::DynamicFloat::~DynamicFloat(&this->duration);
  std::string::~string(&this->modifier_name);
  data::ConfigModifierStackingOption::~ConfigModifierStackingOption(&this->stacking_option);
  std::enable_shared_from_this<data::ConfigAbilityModifier>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigAbilityModifier>);
};

// Line 183: range 000000000F8F97FA-000000000F8F9824
void __cdecl data::ConfigAbilityModifier::~ConfigAbilityModifier(data::ConfigAbilityModifier *const this)
{
  data::ConfigAbilityModifier::~ConfigAbilityModifier(this);
  operator delete(this, 0x380uLL);
};

// Line 199: range 0000000012705724-0000000012705765
void __cdecl data::ConfigAbilityModifierFactory::ConfigAbilityModifierFactory(
        data::ConfigAbilityModifierFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAbilityModifierFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAbilityModifierFactory = v2;
};
