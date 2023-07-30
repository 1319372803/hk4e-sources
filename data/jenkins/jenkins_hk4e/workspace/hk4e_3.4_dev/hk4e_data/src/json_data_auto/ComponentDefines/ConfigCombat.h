// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/ConfigCombat.h

// Line 60: range 000000000E6C6640-000000000E6C6A16
void __cdecl data::ConfigAttackProperty::ConfigAttackProperty(data::ConfigAttackProperty *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx

  data::DynamicFloat::DynamicFloat(&this->damage_percentage);
  data::DynamicFloat::DynamicFloat(&this->damage_percentage_ratio, 0.0);
  if ( *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->element_type, v1);
  }
  this->element_type = None_0;
  v2 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->element_rank >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->element_rank >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->element_rank, v2);
  }
  this->element_rank = 1.0;
  data::DynamicFloat::DynamicFloat(&this->element_durability, 100.0);
  if ( *(char *)(((unsigned __int64)&this->override_by_weapon >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->override_by_weapon, v2, &this->override_by_weapon);
  this->override_by_weapon = 0;
  v3 = ((_BYTE)this + 105) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->ignore_attacker_property >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->ignore_attacker_property >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->ignore_attacker_property, v3, v4);
  this->ignore_attacker_property = 0;
  v5 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->strike_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->strike_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->strike_type, v5);
  }
  this->strike_type = None_1;
  if ( *(_BYTE *)(((unsigned __int64)&this->en_break >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->en_break >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->en_break, v5);
  }
  this->en_break = 30.0;
  v6 = (((_BYTE)this + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->en_head_break >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->en_head_break >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->en_head_break, v6);
  }
  this->en_head_break = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->attack_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->attack_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->attack_type, v6);
  }
  this->attack_type = Default_1;
  data::DynamicFloat::DynamicFloat(&this->damage_extra);
  data::DynamicFloat::DynamicFloat(&this->bonus_critical);
  data::DynamicFloat::DynamicFloat(&this->bonus_critical_hurt);
  if ( *(char *)(((unsigned __int64)&this->ignore_level_diff >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->ignore_level_diff, v6, &this->ignore_level_diff);
  this->ignore_level_diff = 0;
  v7 = ((_BYTE)this - 31) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->true_damage >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->true_damage >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->true_damage, v7, v8);
  this->true_damage = 0;
  v9 = ((_BYTE)this - 30) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->ignore_modify_damage >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->ignore_modify_damage >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->ignore_modify_damage, v9, v10);
  this->ignore_modify_damage = 0;
  v11 = ((_BYTE)this - 29) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->is_json_loaded, v11, v12);
  this->is_json_loaded = 0;
};

// Line 60: range 000000000DF48BC2-000000000DF492FC
void __cdecl data::ConfigAttackProperty::ConfigAttackProperty(
        data::ConfigAttackProperty *const this,
        const data::ConfigAttackProperty *a2)
{
  data::DynamicFloat *p_damage_percentage_ratio; // rsi
  data::ElementType element_type; // ecx
  char v4; // al
  float element_rank; // xmm0_4
  data::DynamicFloat *p_element_durability; // rsi
  bool override_by_weapon; // cl
  char v8; // al
  __int64 v9; // rsi
  __int64 v10; // rdx
  bool ignore_attacker_property; // cl
  char v12; // dl
  __int64 v13; // rdx
  __int64 v14; // rsi
  data::StrikeType strike_type; // ecx
  char v16; // dl
  float en_break; // xmm0_4
  float en_head_break; // xmm0_4
  __int64 v19; // rsi
  data::AttackType attack_type; // ecx
  char v21; // al
  data::DynamicFloat *p_bonus_critical_hurt; // rsi
  bool ignore_level_diff; // cl
  char v24; // al
  __int64 v25; // rsi
  __int64 v26; // rdx
  bool true_damage; // cl
  char v28; // dl
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rdx
  bool ignore_modify_damage; // cl
  char v33; // dl
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rdx
  bool is_json_loaded; // cl
  char v38; // dl
  __int64 v39; // rdx

  data::DynamicFloat::DynamicFloat(&this->damage_percentage, &a2->damage_percentage);
  p_damage_percentage_ratio = &a2->damage_percentage_ratio;
  data::DynamicFloat::DynamicFloat(&this->damage_percentage_ratio, p_damage_percentage_ratio);
  if ( *(_BYTE *)(((unsigned __int64)&a2->element_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->element_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->element_type);
  }
  element_type = a2->element_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(p_damage_percentage_ratio) = v4 != 0;
    __asan_report_store4(&this->element_type, p_damage_percentage_ratio);
  }
  this->element_type = element_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->element_rank >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->element_rank >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->element_rank);
  }
  element_rank = a2->element_rank;
  if ( *(_BYTE *)(((unsigned __int64)&this->element_rank >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->element_rank >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->element_rank, (((_BYTE)this + 68) & 7u) + 3);
  }
  this->element_rank = element_rank;
  p_element_durability = &a2->element_durability;
  data::DynamicFloat::DynamicFloat(&this->element_durability, &a2->element_durability);
  if ( *(char *)(((unsigned __int64)&a2->override_by_weapon >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->override_by_weapon, p_element_durability, &a2->override_by_weapon);
  override_by_weapon = a2->override_by_weapon;
  v8 = *(_BYTE *)(((unsigned __int64)&this->override_by_weapon >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(p_element_durability) = v8 != 0;
    __asan_report_store1(&this->override_by_weapon, p_element_durability, &this->override_by_weapon);
  }
  this->override_by_weapon = override_by_weapon;
  v9 = ((_BYTE)a2 + 105) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&a2->ignore_attacker_property >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&a2->ignore_attacker_property >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_load1(&a2->ignore_attacker_property, v9, v10);
  ignore_attacker_property = a2->ignore_attacker_property;
  v12 = *(_BYTE *)(((unsigned __int64)&this->ignore_attacker_property >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((((unsigned __int8)this + 105) & 7) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->ignore_attacker_property, v9, v13);
  this->ignore_attacker_property = ignore_attacker_property;
  v14 = (((_BYTE)a2 + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->strike_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->strike_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->strike_type);
  }
  strike_type = a2->strike_type;
  v16 = *(_BYTE *)(((unsigned __int64)&this->strike_type >> 3) + 0x7FFF8000);
  LOBYTE(v14) = v16 != 0;
  if ( v16 != 0 && (char)((((_BYTE)this + 108) & 7) + 3) >= v16 )
    __asan_report_store4(&this->strike_type, v14);
  this->strike_type = strike_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->en_break >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->en_break >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->en_break);
  }
  en_break = a2->en_break;
  if ( *(_BYTE *)(((unsigned __int64)&this->en_break >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->en_break >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->en_break, v14);
  }
  this->en_break = en_break;
  if ( *(_BYTE *)(((unsigned __int64)&a2->en_head_break >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->en_head_break >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->en_head_break);
  }
  en_head_break = a2->en_head_break;
  v19 = (((_BYTE)this + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->en_head_break >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->en_head_break >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->en_head_break, v19);
  }
  this->en_head_break = en_head_break;
  if ( *(_BYTE *)(((unsigned __int64)&a2->attack_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->attack_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->attack_type);
  }
  attack_type = a2->attack_type;
  v21 = *(_BYTE *)(((unsigned __int64)&this->attack_type >> 3) + 0x7FFF8000);
  if ( v21 != 0 && v21 <= 3 )
  {
    LOBYTE(v19) = v21 != 0;
    __asan_report_store4(&this->attack_type, v19);
  }
  this->attack_type = attack_type;
  data::DynamicFloat::DynamicFloat(&this->damage_extra, &a2->damage_extra);
  data::DynamicFloat::DynamicFloat(&this->bonus_critical, &a2->bonus_critical);
  p_bonus_critical_hurt = &a2->bonus_critical_hurt;
  data::DynamicFloat::DynamicFloat(&this->bonus_critical_hurt, &a2->bonus_critical_hurt);
  if ( *(char *)(((unsigned __int64)&a2->ignore_level_diff >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->ignore_level_diff, p_bonus_critical_hurt, &a2->ignore_level_diff);
  ignore_level_diff = a2->ignore_level_diff;
  v24 = *(_BYTE *)(((unsigned __int64)&this->ignore_level_diff >> 3) + 0x7FFF8000);
  if ( v24 < 0 )
  {
    LOBYTE(p_bonus_critical_hurt) = v24 != 0;
    __asan_report_store1(&this->ignore_level_diff, p_bonus_critical_hurt, &this->ignore_level_diff);
  }
  this->ignore_level_diff = ignore_level_diff;
  v25 = ((_BYTE)a2 - 31) & 7;
  v26 = (*(_BYTE *)(((unsigned __int64)&a2->true_damage >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v25 >= *(_BYTE *)(((unsigned __int64)&a2->true_damage >> 3) + 0x7FFF8000));
  if ( (_BYTE)v26 )
    __asan_report_load1(&a2->true_damage, v25, v26);
  true_damage = a2->true_damage;
  v28 = *(_BYTE *)(((unsigned __int64)&this->true_damage >> 3) + 0x7FFF8000);
  LOBYTE(v25) = v28 != 0;
  v29 = (v28 != 0) & (unsigned __int8)((((unsigned __int8)this - 31) & 7) >= v28);
  if ( (_BYTE)v29 )
    __asan_report_store1(&this->true_damage, v25, v29);
  this->true_damage = true_damage;
  v30 = ((_BYTE)a2 - 30) & 7;
  v31 = (*(_BYTE *)(((unsigned __int64)&a2->ignore_modify_damage >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v30 >= *(_BYTE *)(((unsigned __int64)&a2->ignore_modify_damage >> 3) + 0x7FFF8000));
  if ( (_BYTE)v31 )
    __asan_report_load1(&a2->ignore_modify_damage, v30, v31);
  ignore_modify_damage = a2->ignore_modify_damage;
  v33 = *(_BYTE *)(((unsigned __int64)&this->ignore_modify_damage >> 3) + 0x7FFF8000);
  LOBYTE(v30) = v33 != 0;
  v34 = (v33 != 0) & (unsigned __int8)((((unsigned __int8)this - 30) & 7) >= v33);
  if ( (_BYTE)v34 )
    __asan_report_store1(&this->ignore_modify_damage, v30, v34);
  this->ignore_modify_damage = ignore_modify_damage;
  v35 = ((_BYTE)a2 - 29) & 7;
  v36 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v35 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v36 )
    __asan_report_load1(&a2->is_json_loaded, v35, v36);
  is_json_loaded = a2->is_json_loaded;
  v38 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v35) = v38 != 0;
  v39 = (v38 != 0) & (unsigned __int8)((((unsigned __int8)this - 29) & 7) >= v38);
  if ( (_BYTE)v39 )
    __asan_report_store1(&this->is_json_loaded, v35, v39);
  this->is_json_loaded = is_json_loaded;
};

// Line 60: range 000000000DC10F98-000000000DC11006
void __cdecl data::ConfigAttackProperty::~ConfigAttackProperty(data::ConfigAttackProperty *const this)
{
  data::DynamicFloat::~DynamicFloat(&this->bonus_critical_hurt);
  data::DynamicFloat::~DynamicFloat(&this->bonus_critical);
  data::DynamicFloat::~DynamicFloat(&this->damage_extra);
  data::DynamicFloat::~DynamicFloat(&this->element_durability);
  data::DynamicFloat::~DynamicFloat(&this->damage_percentage_ratio);
  data::DynamicFloat::~DynamicFloat(&this->damage_percentage);
};

// Line 135: range 000000000E6C6A18-000000000E6C6ABA
void __cdecl data::ConfigHitImpulse::ConfigHitImpulse(data::ConfigHitImpulse *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->hit_level = Mute;
  data::DynamicFloat::DynamicFloat(&this->hit_impulse_x);
  data::DynamicFloat::DynamicFloat(&this->hit_impulse_y);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 135: range 000000000DF492FE-000000000DF4944E
void __cdecl data::ConfigHitImpulse::ConfigHitImpulse(
        data::ConfigHitImpulse *const this,
        const data::ConfigHitImpulse *a2)
{
  data::HitLevel hit_level; // ecx
  char v3; // al
  data::DynamicFloat *p_hit_impulse_y; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  const data::ConfigHitImpulse *v7; // [rsp+0h] [rbp-20h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  hit_level = a2->hit_level;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->hit_level = hit_level;
  data::DynamicFloat::DynamicFloat(&this->hit_impulse_x, &v7->hit_impulse_x);
  p_hit_impulse_y = &v7->hit_impulse_y;
  data::DynamicFloat::DynamicFloat(&this->hit_impulse_y, &v7->hit_impulse_y);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_hit_impulse_y, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_hit_impulse_y) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_hit_impulse_y, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 135: range 000000000DC11008-000000000DC11036
void __cdecl data::ConfigHitImpulse::~ConfigHitImpulse(data::ConfigHitImpulse *const this)
{
  data::DynamicFloat::~DynamicFloat(&this->hit_impulse_y);
  data::DynamicFloat::~DynamicFloat(&this->hit_impulse_x);
};

// Line 160: range 000000000E6C6ABC-000000000E6C6E7E
void __cdecl data::ConfigHitPattern::ConfigHitPattern(data::ConfigHitPattern *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  char v13[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigHitPattern::ConfigHitPattern;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116351;
  std::allocator<char>::allocator(v1 + 32);
  std::string::basic_string<std::allocator<char>>(
    &this->on_hit_effect_name,
    "default",
    (const std::allocator<char> *)(v1 + 32));
  std::allocator<char>::~allocator(v1 + 32);
  *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->hit_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hit_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hit_level, "default");
  }
  this->hit_level = Mute;
  data::DynamicFloat::DynamicFloat(&this->hit_impulse_x);
  data::DynamicFloat::DynamicFloat(&this->hit_impulse_y);
  std::string::basic_string(&this->hit_impulse_type);
  data::ConfigHitImpulse::ConfigHitImpulse(&this->override_hit_impulse);
  if ( *(_BYTE *)(((unsigned __int64)&this->retreat_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->retreat_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->retreat_type, "default");
  }
  this->retreat_type = ByAttacker;
  v4 = (((_BYTE)this - 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->hit_halt_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hit_halt_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hit_halt_time, v4);
  }
  this->hit_halt_time = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->hit_halt_time_scale >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hit_halt_time_scale >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hit_halt_time_scale, v4);
  }
  this->hit_halt_time_scale = 0.0;
  v5 = ((_BYTE)this - 28) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->can_be_defence_halt >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->can_be_defence_halt >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->can_be_defence_halt, v5, v6);
  this->can_be_defence_halt = 0;
  v7 = ((_BYTE)this - 27) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->mute_hit_text >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->mute_hit_text >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->mute_hit_text, v7, v8);
  this->mute_hit_text = 0;
  v9 = ((_BYTE)this - 26) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->recurring >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->recurring >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->recurring, v9, v10);
  this->recurring = 0;
  v11 = ((_BYTE)this - 25) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->force_retreat >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->force_retreat >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->force_retreat, v11, v12);
  this->force_retreat = 0;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v11, &this->is_json_loaded);
  this->is_json_loaded = 0;
  if ( v13 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 160: range 000000000DF49450-000000000DF499F8
void __cdecl data::ConfigHitPattern::ConfigHitPattern(
        data::ConfigHitPattern *const this,
        const data::ConfigHitPattern *a2)
{
  data::HitLevel hit_level; // ecx
  char v3; // al
  data::ConfigHitImpulse *p_override_hit_impulse; // rsi
  data::RetreatType retreat_type; // ecx
  char v6; // al
  float hit_halt_time; // xmm0_4
  __int64 v8; // rsi
  float hit_halt_time_scale; // xmm0_4
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool can_be_defence_halt; // cl
  char v13; // dl
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx
  bool mute_hit_text; // cl
  char v18; // dl
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdx
  bool recurring; // cl
  char v23; // dl
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rdx
  bool force_retreat; // cl
  char v28; // dl
  __int64 v29; // rdx
  bool is_json_loaded; // cl
  char v31; // al
  const data::ConfigHitPattern *v32; // [rsp+0h] [rbp-20h]

  v32 = a2;
  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&v32->hit_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v32->hit_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->hit_level);
  }
  hit_level = a2->hit_level;
  v3 = *(_BYTE *)(((unsigned __int64)&this->hit_level >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->hit_level, a2);
  }
  this->hit_level = hit_level;
  data::DynamicFloat::DynamicFloat(&this->hit_impulse_x, &v32->hit_impulse_x);
  data::DynamicFloat::DynamicFloat(&this->hit_impulse_y, &v32->hit_impulse_y);
  std::string::basic_string(&this->hit_impulse_type, &v32->hit_impulse_type);
  p_override_hit_impulse = &v32->override_hit_impulse;
  data::ConfigHitImpulse::ConfigHitImpulse(&this->override_hit_impulse, &v32->override_hit_impulse);
  if ( *(_BYTE *)(((unsigned __int64)&v32->retreat_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v32->retreat_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v32->retreat_type);
  }
  retreat_type = v32->retreat_type;
  v6 = *(_BYTE *)(((unsigned __int64)&this->retreat_type >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_override_hit_impulse) = v6 != 0;
    __asan_report_store4(&this->retreat_type, p_override_hit_impulse);
  }
  this->retreat_type = retreat_type;
  if ( *(_BYTE *)(((unsigned __int64)&v32->hit_halt_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v32 - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v32->hit_halt_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v32->hit_halt_time);
  }
  hit_halt_time = v32->hit_halt_time;
  v8 = (((_BYTE)this - 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->hit_halt_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hit_halt_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hit_halt_time, v8);
  }
  this->hit_halt_time = hit_halt_time;
  if ( *(_BYTE *)(((unsigned __int64)&v32->hit_halt_time_scale >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v32->hit_halt_time_scale >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v32->hit_halt_time_scale);
  }
  hit_halt_time_scale = v32->hit_halt_time_scale;
  if ( *(_BYTE *)(((unsigned __int64)&this->hit_halt_time_scale >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hit_halt_time_scale >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hit_halt_time_scale, v8);
  }
  this->hit_halt_time_scale = hit_halt_time_scale;
  v10 = ((_BYTE)v32 - 28) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&v32->can_be_defence_halt >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&v32->can_be_defence_halt >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&v32->can_be_defence_halt, v10, v11);
  can_be_defence_halt = v32->can_be_defence_halt;
  v13 = *(_BYTE *)(((unsigned __int64)&this->can_be_defence_halt >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this - 28) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->can_be_defence_halt, v10, v14);
  this->can_be_defence_halt = can_be_defence_halt;
  v15 = ((_BYTE)v32 - 27) & 7;
  v16 = (*(_BYTE *)(((unsigned __int64)&v32->mute_hit_text >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&v32->mute_hit_text >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_load1(&v32->mute_hit_text, v15, v16);
  mute_hit_text = v32->mute_hit_text;
  v18 = *(_BYTE *)(((unsigned __int64)&this->mute_hit_text >> 3) + 0x7FFF8000);
  LOBYTE(v15) = v18 != 0;
  v19 = (v18 != 0) & (unsigned __int8)((((unsigned __int8)this - 27) & 7) >= v18);
  if ( (_BYTE)v19 )
    __asan_report_store1(&this->mute_hit_text, v15, v19);
  this->mute_hit_text = mute_hit_text;
  v20 = ((_BYTE)v32 - 26) & 7;
  v21 = (*(_BYTE *)(((unsigned __int64)&v32->recurring >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v20 >= *(_BYTE *)(((unsigned __int64)&v32->recurring >> 3) + 0x7FFF8000));
  if ( (_BYTE)v21 )
    __asan_report_load1(&v32->recurring, v20, v21);
  recurring = v32->recurring;
  v23 = *(_BYTE *)(((unsigned __int64)&this->recurring >> 3) + 0x7FFF8000);
  LOBYTE(v20) = v23 != 0;
  v24 = (v23 != 0) & (unsigned __int8)((((unsigned __int8)this - 26) & 7) >= v23);
  if ( (_BYTE)v24 )
    __asan_report_store1(&this->recurring, v20, v24);
  this->recurring = recurring;
  v25 = ((_BYTE)v32 - 25) & 7;
  v26 = (*(_BYTE *)(((unsigned __int64)&v32->force_retreat >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v25 >= *(_BYTE *)(((unsigned __int64)&v32->force_retreat >> 3) + 0x7FFF8000));
  if ( (_BYTE)v26 )
    __asan_report_load1(&v32->force_retreat, v25, v26);
  force_retreat = v32->force_retreat;
  v28 = *(_BYTE *)(((unsigned __int64)&this->force_retreat >> 3) + 0x7FFF8000);
  LOBYTE(v25) = v28 != 0;
  v29 = (v28 != 0) & (unsigned __int8)((((unsigned __int8)this - 25) & 7) >= v28);
  if ( (_BYTE)v29 )
    __asan_report_store1(&this->force_retreat, v25, v29);
  this->force_retreat = force_retreat;
  if ( *(char *)(((unsigned __int64)&v32->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v32->is_json_loaded, v25, &v32->is_json_loaded);
  is_json_loaded = v32->is_json_loaded;
  v31 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v31 < 0 )
  {
    LOBYTE(v25) = v31 != 0;
    __asan_report_store1(&this->is_json_loaded, v25, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 160: range 000000000DC11038-000000000DC11094
void __cdecl data::ConfigHitPattern::~ConfigHitPattern(data::ConfigHitPattern *const this)
{
  data::ConfigHitImpulse::~ConfigHitImpulse(&this->override_hit_impulse);
  std::string::~string(&this->hit_impulse_type);
  data::DynamicFloat::~DynamicFloat(&this->hit_impulse_y);
  data::DynamicFloat::~DynamicFloat(&this->hit_impulse_x);
  std::string::~string(this);
};

// Line 195: range 000000000E6C71FA-000000000E6C74D5
void __cdecl data::ConfigBulletWane::ConfigBulletWane(data::ConfigBulletWane *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->wane_delay = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->damage_wane_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->damage_wane_interval >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->damage_wane_interval, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->damage_wane_interval = 3.4028235e38;
  if ( *(_BYTE *)(((unsigned __int64)&this->damage_wane_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->damage_wane_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->damage_wane_ratio, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->damage_wane_ratio = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->damage_wane_min_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->damage_wane_min_ratio >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->damage_wane_min_ratio, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->damage_wane_min_ratio = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->element_durability_wane_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->element_durability_wane_interval >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->element_durability_wane_interval, (((_BYTE)this + 16) & 7u) + 3);
  }
  this->element_durability_wane_interval = 3.4028235e38;
  if ( *(_BYTE *)(((unsigned __int64)&this->element_durability_wane_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->element_durability_wane_ratio >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->element_durability_wane_ratio, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->element_durability_wane_ratio = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->element_durability_wane_min_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->element_durability_wane_min_ratio >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->element_durability_wane_min_ratio, (((_BYTE)this + 24) & 7u) + 3);
  }
  this->element_durability_wane_min_ratio = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->hit_level_wane_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hit_level_wane_interval >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hit_level_wane_interval, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->hit_level_wane_interval = 3.4028235e38;
  if ( *(_BYTE *)(((unsigned __int64)&this->hit_level_wane_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hit_level_wane_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hit_level_wane_min, (((_BYTE)this + 32) & 7u) + 3);
  }
  this->hit_level_wane_min = Shake;
  v1 = ((_BYTE)this + 36) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 256: range 000000000E6C74D6-000000000E6C786E
void __cdecl data::ConfigAttackInfo::ConfigAttackInfo(data::ConfigAttackInfo *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __int64 v5; // rsi
  char v6[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigAttackInfo::ConfigAttackInfo;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->attack_id = 0;
  std::string::basic_string(&this->attack_tag);
  std::string::basic_string(&this->attenuation_tag);
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    &this->attenuation_group,
    "default",
    (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->attenuation_redirect >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->attenuation_redirect >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->attenuation_redirect, "default");
  }
  this->attenuation_redirect = OriginOwner;
  data::ConfigAttackProperty::ConfigAttackProperty(&this->attack_property);
  data::ConfigHitPattern::ConfigHitPattern(&this->hit_pattern);
  if ( *(char *)(((unsigned __int64)&this->can_hit_head >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->can_hit_head, "default", &this->can_hit_head);
  this->can_hit_head = 0;
  data::ConfigHitPattern::ConfigHitPattern(&this->hit_head_pattern);
  if ( *(char *)(((unsigned __int64)&this->force_camera_shake >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->force_camera_shake, "default", &this->force_camera_shake);
  this->force_camera_shake = 0;
  data::ConfigCameraShake::ConfigCameraShake(&this->camera_shake);
  data::ConfigBulletWane::ConfigBulletWane(&this->bullet_wane);
  v5 = (((_BYTE)this - 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->can_be_modified_by >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->can_be_modified_by >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->can_be_modified_by, v5);
  }
  this->can_be_modified_by = None_3;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v5, &this->is_json_loaded);
  this->is_json_loaded = 0;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 256: range 000000000DF499FA-000000000DF4A0A0
void __cdecl data::ConfigAttackInfo::ConfigAttackInfo(
        data::ConfigAttackInfo *const this,
        const data::ConfigAttackInfo *a2)
{
  uint32_t attack_id; // ecx
  char v3; // al
  std::string *p_attenuation_group; // rsi
  data::AttenuationRedirect attenuation_redirect; // ecx
  char v6; // al
  data::ConfigHitPattern *p_hit_pattern; // rsi
  bool can_hit_head; // cl
  char v9; // al
  data::ConfigHitPattern *p_hit_head_pattern; // rsi
  bool force_camera_shake; // cl
  char v12; // al
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // rsi
  data::CanBeModifiedBy can_be_modified_by; // ecx
  char v20; // dl
  bool is_json_loaded; // cl
  char v22; // al
  const data::ConfigAttackInfo *v23; // [rsp+0h] [rbp-20h]

  v23 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  attack_id = a2->attack_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->attack_id = attack_id;
  std::string::basic_string(&this->attack_tag, &v23->attack_tag);
  std::string::basic_string(&this->attenuation_tag, &v23->attenuation_tag);
  p_attenuation_group = &v23->attenuation_group;
  std::string::basic_string(&this->attenuation_group, &v23->attenuation_group);
  if ( *(_BYTE *)(((unsigned __int64)&v23->attenuation_redirect >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->attenuation_redirect >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->attenuation_redirect);
  }
  attenuation_redirect = v23->attenuation_redirect;
  v6 = *(_BYTE *)(((unsigned __int64)&this->attenuation_redirect >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_attenuation_group) = v6 != 0;
    __asan_report_store4(&this->attenuation_redirect, p_attenuation_group);
  }
  this->attenuation_redirect = attenuation_redirect;
  data::ConfigAttackProperty::ConfigAttackProperty(&this->attack_property, &v23->attack_property);
  p_hit_pattern = &v23->hit_pattern;
  data::ConfigHitPattern::ConfigHitPattern(&this->hit_pattern, &v23->hit_pattern);
  if ( *(char *)(((unsigned __int64)&v23->can_hit_head >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v23->can_hit_head, p_hit_pattern, &v23->can_hit_head);
  can_hit_head = v23->can_hit_head;
  v9 = *(_BYTE *)(((unsigned __int64)&this->can_hit_head >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(p_hit_pattern) = v9 != 0;
    __asan_report_store1(&this->can_hit_head, p_hit_pattern, &this->can_hit_head);
  }
  this->can_hit_head = can_hit_head;
  p_hit_head_pattern = &v23->hit_head_pattern;
  data::ConfigHitPattern::ConfigHitPattern(&this->hit_head_pattern, &v23->hit_head_pattern);
  if ( *(char *)(((unsigned __int64)&v23->force_camera_shake >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v23->force_camera_shake, p_hit_head_pattern, &v23->force_camera_shake);
  force_camera_shake = v23->force_camera_shake;
  v12 = *(_BYTE *)(((unsigned __int64)&this->force_camera_shake >> 3) + 0x7FFF8000);
  if ( v12 < 0 )
  {
    LOBYTE(p_hit_head_pattern) = v12 != 0;
    __asan_report_store1(&this->force_camera_shake, p_hit_head_pattern, &this->force_camera_shake);
  }
  this->force_camera_shake = force_camera_shake;
  if ( (((unsigned __int8)this + 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->camera_shake >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->camera_shake >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->camera_shake.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 123) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->camera_shake.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->camera_shake, 56LL);
  }
  if ( (((unsigned __int8)v23 + 68) & 7) >= *(_BYTE *)(((unsigned __int64)&v23->camera_shake >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v23->camera_shake >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&v23->camera_shake.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v23 + 123) & 7) >= *(_BYTE *)(((unsigned __int64)(&v23->camera_shake.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load_n(&v23->camera_shake, 56LL);
  }
  v13 = *(_QWORD *)&v23->camera_shake.shake_time;
  *(_QWORD *)&this->camera_shake.shake_type = *(_QWORD *)&v23->camera_shake.shake_type;
  *(_QWORD *)&this->camera_shake.shake_time = v13;
  v14 = *(_QWORD *)&v23->camera_shake.shake_dir.z;
  *(_QWORD *)&this->camera_shake.shake_dir.x = *(_QWORD *)&v23->camera_shake.shake_dir.x;
  *(_QWORD *)&this->camera_shake.shake_dir.z = v14;
  v15 = *(_QWORD *)&v23->camera_shake.extension.cycle_damping;
  *(_QWORD *)&this->camera_shake.extension.infinity = *(_QWORD *)&v23->camera_shake.extension.infinity;
  *(_QWORD *)&this->camera_shake.extension.cycle_damping = v15;
  *(_QWORD *)&this->camera_shake.extension.is_json_loaded = *(_QWORD *)&v23->camera_shake.extension.is_json_loaded;
  if ( (((unsigned __int8)this + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->bullet_wane >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->bullet_wane >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->bullet_wane.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 93) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->bullet_wane.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->bullet_wane, 40LL);
  }
  if ( (((unsigned __int8)v23 + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&v23->bullet_wane >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v23->bullet_wane >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&v23->bullet_wane.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v23 - 93) & 7) >= *(_BYTE *)(((unsigned __int64)(&v23->bullet_wane.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&v23->bullet_wane, 40LL);
  }
  v16 = *(_QWORD *)&v23->bullet_wane.damage_wane_ratio;
  *(_QWORD *)&this->bullet_wane.wane_delay = *(_QWORD *)&v23->bullet_wane.wane_delay;
  *(_QWORD *)&this->bullet_wane.damage_wane_ratio = v16;
  v17 = *(_QWORD *)&v23->bullet_wane.element_durability_wane_min_ratio;
  *(_QWORD *)&this->bullet_wane.element_durability_wane_interval = *(_QWORD *)&v23->bullet_wane.element_durability_wane_interval;
  *(_QWORD *)&this->bullet_wane.element_durability_wane_min_ratio = v17;
  *(_QWORD *)&this->bullet_wane.hit_level_wane_min = *(_QWORD *)&v23->bullet_wane.hit_level_wane_min;
  v18 = (((_BYTE)v23 - 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->can_be_modified_by >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->can_be_modified_by >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->can_be_modified_by);
  }
  can_be_modified_by = v23->can_be_modified_by;
  v20 = *(_BYTE *)(((unsigned __int64)&this->can_be_modified_by >> 3) + 0x7FFF8000);
  LOBYTE(v18) = v20 != 0;
  if ( v20 != 0 && (char)((((_BYTE)this - 92) & 7) + 3) >= v20 )
    __asan_report_store4(&this->can_be_modified_by, v18);
  this->can_be_modified_by = can_be_modified_by;
  if ( *(char *)(((unsigned __int64)&v23->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v23->is_json_loaded, v18, &v23->is_json_loaded);
  is_json_loaded = v23->is_json_loaded;
  v22 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v22 < 0 )
  {
    LOBYTE(v18) = v22 != 0;
    __asan_report_store1(&this->is_json_loaded, v18, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 256: range 000000000DC11096-000000000DC11108
void __cdecl data::ConfigAttackInfo::~ConfigAttackInfo(data::ConfigAttackInfo *const this)
{
  data::ConfigHitPattern::~ConfigHitPattern(&this->hit_head_pattern);
  data::ConfigHitPattern::~ConfigHitPattern(&this->hit_pattern);
  data::ConfigAttackProperty::~ConfigAttackProperty(&this->attack_property);
  std::string::~string(&this->attenuation_group);
  std::string::~string(&this->attenuation_tag);
  std::string::~string(&this->attack_tag);
};

// Line 291: range 000000000E6C7870-000000000E6C791F
void __cdecl data::ConfigAttackEvent::ConfigAttackEvent(data::ConfigAttackEvent *const this)
{
  __int64 v1; // rsi

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBaseAttackPattern>();
  data::ConfigAttackInfo::ConfigAttackInfo(&this->attack_info);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 291: range 000000000DF4A0A2-000000000DF4A185
void __cdecl data::ConfigAttackEvent::ConfigAttackEvent(
        data::ConfigAttackEvent *const this,
        const data::ConfigAttackEvent *a2)
{
  data::ConfigAttackInfo *p_attack_info; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::shared_ptr<data::ConfigBaseAttackPattern>::shared_ptr(&this->attack_pattern, &a2->attack_pattern);
  p_attack_info = &a2->attack_info;
  data::ConfigAttackInfo::ConfigAttackInfo(&this->attack_info, p_attack_info);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_attack_info, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_attack_info) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_attack_info, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 291: range 000000000DC1110A-000000000DC11134
void __cdecl data::ConfigAttackEvent::~ConfigAttackEvent(data::ConfigAttackEvent *const this)
{
  data::ConfigAttackInfo::~ConfigAttackInfo(&this->attack_info);
  std::shared_ptr<data::ConfigBaseAttackPattern>::~shared_ptr(&this->attack_pattern);
};

// Line 329: range 00000000111454DC-0000000011145563
void __cdecl data::ConfigAttackTargetMapEvent::ConfigAttackTargetMapEvent(data::ConfigAttackTargetMapEvent *const this)
{
  __int64 v1; // rsi

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBaseAttackPattern>();
  std::unordered_map<data::TargetType,data::ConfigAttackInfo>::unordered_map(&this->attack_info_map);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 329: range 000000001036C8AC-000000001036C985
void __cdecl data::ConfigAttackTargetMapEvent::ConfigAttackTargetMapEvent(
        data::ConfigAttackTargetMapEvent *const this,
        const data::ConfigAttackTargetMapEvent *a2)
{
  data::ConfigAttackInfoTargetMap *p_attack_info_map; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::shared_ptr<data::ConfigBaseAttackPattern>::shared_ptr(&this->attack_pattern, &a2->attack_pattern);
  p_attack_info_map = &a2->attack_info_map;
  std::unordered_map<data::TargetType,data::ConfigAttackInfo>::unordered_map(&this->attack_info_map, p_attack_info_map);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_attack_info_map, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_attack_info_map) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_attack_info_map, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 329: range 000000001036C986-000000001036C9B0
void __cdecl data::ConfigAttackTargetMapEvent::~ConfigAttackTargetMapEvent(
        data::ConfigAttackTargetMapEvent *const this)
{
  std::unordered_map<data::TargetType,data::ConfigAttackInfo>::~unordered_map(&this->attack_info_map);
  std::shared_ptr<data::ConfigBaseAttackPattern>::~shared_ptr(&this->attack_pattern);
};

// Line 394: range 000000000F7822E4-000000000F782DE3
data::ConfigCombatProperty *__cdecl data::ConfigCombatProperty::operator=(
        data::ConfigCombatProperty *const this,
        const data::ConfigCombatProperty *a2)
{
  data::EndureType endure_type; // ecx
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool use_creator_property; // cl
  char v7; // dl
  __int64 v8; // rdx
  data::CombatPropertyIndexList *p_use_creator_property_partly; // rsi
  bool use_creator_buffed_property; // cl
  char v11; // al
  __int64 v12; // rsi
  __int64 v13; // rdx
  bool use_ability_property; // cl
  char v15; // dl
  __int64 v16; // rdx
  float hp; // xmm0_4
  __int64 v18; // rsi
  float attack; // xmm0_4
  float defense; // xmm0_4
  __int64 v21; // rsi
  int32_t level; // ecx
  char v23; // al
  __int64 v24; // rsi
  data::LevelOption level_option; // ecx
  char v26; // dl
  float weight; // xmm0_4
  float endure_shake; // xmm0_4
  __int64 v29; // rsi
  bool is_invincible; // cl
  char v31; // al
  __int64 v32; // rsi
  __int64 v33; // rdx
  bool is_lock_hp; // cl
  char v35; // dl
  __int64 v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // rdx
  bool is_lock_hpno_heal; // cl
  char v40; // dl
  __int64 v41; // rdx
  __int64 v42; // rsi
  __int64 v43; // rdx
  bool is_no_heal; // cl
  char v45; // dl
  __int64 v46; // rdx
  __int64 v47; // rsi
  __int64 v48; // rdx
  bool is_ghost_to_allied; // cl
  char v50; // dl
  __int64 v51; // rdx
  __int64 v52; // rsi
  __int64 v53; // rdx
  bool is_ghost_to_enemy; // cl
  char v55; // dl
  __int64 v56; // rdx
  __int64 v57; // rsi
  __int64 v58; // rdx
  bool can_trigger_bullet; // cl
  char v60; // dl
  __int64 v61; // rdx
  __int64 v62; // rsi
  __int64 v63; // rdx
  bool deny_element_stick; // cl
  char v65; // dl
  __int64 v66; // rdx
  bool ignore_purge_rate; // cl
  char v68; // al
  __int64 v69; // rsi
  __int64 v70; // rdx
  bool ignore_damage_to_self; // cl
  char v72; // dl
  __int64 v73; // rdx
  __int64 v74; // rsi
  __int64 v75; // rdx
  bool is_json_loaded; // cl
  char v77; // dl
  __int64 v78; // rdx
  const data::ConfigCombatProperty *v80; // [rsp+0h] [rbp-10h]

  v80 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  endure_type = a2->endure_type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->endure_type = endure_type;
  v4 = ((_BYTE)v80 + 4) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&v80->use_creator_property >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&v80->use_creator_property >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&v80->use_creator_property, v4, v5);
  use_creator_property = v80->use_creator_property;
  v7 = *(_BYTE *)(((unsigned __int64)&this->use_creator_property >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 4) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->use_creator_property, v4, v8);
  this->use_creator_property = use_creator_property;
  p_use_creator_property_partly = &v80->use_creator_property_partly;
  std::vector<data::CombatPropertyIndex>::operator=(
    &this->use_creator_property_partly,
    &v80->use_creator_property_partly);
  if ( *(char *)(((unsigned __int64)&v80->use_creator_buffed_property >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(
      &v80->use_creator_buffed_property,
      p_use_creator_property_partly,
      &v80->use_creator_buffed_property);
  use_creator_buffed_property = v80->use_creator_buffed_property;
  v11 = *(_BYTE *)(((unsigned __int64)&this->use_creator_buffed_property >> 3) + 0x7FFF8000);
  if ( v11 < 0 )
  {
    LOBYTE(p_use_creator_property_partly) = v11 != 0;
    __asan_report_store1(
      &this->use_creator_buffed_property,
      p_use_creator_property_partly,
      &this->use_creator_buffed_property);
  }
  this->use_creator_buffed_property = use_creator_buffed_property;
  v12 = ((_BYTE)v80 + 33) & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)&v80->use_ability_property >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&v80->use_ability_property >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_load1(&v80->use_ability_property, v12, v13);
  use_ability_property = v80->use_ability_property;
  v15 = *(_BYTE *)(((unsigned __int64)&this->use_ability_property >> 3) + 0x7FFF8000);
  LOBYTE(v12) = v15 != 0;
  v16 = (v15 != 0) & (unsigned __int8)((((unsigned __int8)this + 33) & 7) >= v15);
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->use_ability_property, v12, v16);
  this->use_ability_property = use_ability_property;
  if ( *(_BYTE *)(((unsigned __int64)&v80->hp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v80 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v80->hp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v80->hp);
  }
  hp = v80->hp;
  v18 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->hp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hp >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hp, v18);
  }
  this->hp = hp;
  if ( *(_BYTE *)(((unsigned __int64)&v80->attack >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v80->attack >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v80->attack);
  }
  attack = v80->attack;
  if ( *(_BYTE *)(((unsigned __int64)&this->attack >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->attack >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->attack, v18);
  }
  this->attack = attack;
  if ( *(_BYTE *)(((unsigned __int64)&v80->defense >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v80 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v80->defense >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v80->defense);
  }
  defense = v80->defense;
  v21 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->defense >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->defense >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->defense, v21);
  }
  this->defense = defense;
  if ( *(_BYTE *)(((unsigned __int64)&v80->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v80->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v80->level);
  }
  level = v80->level;
  v23 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v23 != 0 && v23 <= 3 )
  {
    LOBYTE(v21) = v23 != 0;
    __asan_report_store4(&this->level, v21);
  }
  this->level = level;
  v24 = (((_BYTE)v80 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v80->level_option >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v80 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v80->level_option >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v80->level_option);
  }
  level_option = v80->level_option;
  v26 = *(_BYTE *)(((unsigned __int64)&this->level_option >> 3) + 0x7FFF8000);
  LOBYTE(v24) = v26 != 0;
  if ( v26 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v26 )
    __asan_report_store4(&this->level_option, v24);
  this->level_option = level_option;
  if ( *(_BYTE *)(((unsigned __int64)&v80->weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v80->weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v80->weight);
  }
  weight = v80->weight;
  if ( *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->weight, v24);
  }
  this->weight = weight;
  if ( *(_BYTE *)(((unsigned __int64)&v80->endure_shake >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v80 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v80->endure_shake >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v80->endure_shake);
  }
  endure_shake = v80->endure_shake;
  v29 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->endure_shake >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->endure_shake >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->endure_shake, v29);
  }
  this->endure_shake = endure_shake;
  if ( *(char *)(((unsigned __int64)&v80->is_invincible >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v80->is_invincible, v29, &v80->is_invincible);
  is_invincible = v80->is_invincible;
  v31 = *(_BYTE *)(((unsigned __int64)&this->is_invincible >> 3) + 0x7FFF8000);
  if ( v31 < 0 )
  {
    LOBYTE(v29) = v31 != 0;
    __asan_report_store1(&this->is_invincible, v29, &this->is_invincible);
  }
  this->is_invincible = is_invincible;
  v32 = ((_BYTE)v80 + 65) & 7;
  v33 = (*(_BYTE *)(((unsigned __int64)&v80->is_lock_hp >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v32 >= *(_BYTE *)(((unsigned __int64)&v80->is_lock_hp >> 3) + 0x7FFF8000));
  if ( (_BYTE)v33 )
    __asan_report_load1(&v80->is_lock_hp, v32, v33);
  is_lock_hp = v80->is_lock_hp;
  v35 = *(_BYTE *)(((unsigned __int64)&this->is_lock_hp >> 3) + 0x7FFF8000);
  LOBYTE(v32) = v35 != 0;
  v36 = (v35 != 0) & (unsigned __int8)((((unsigned __int8)this + 65) & 7) >= v35);
  if ( (_BYTE)v36 )
    __asan_report_store1(&this->is_lock_hp, v32, v36);
  this->is_lock_hp = is_lock_hp;
  v37 = ((_BYTE)v80 + 66) & 7;
  v38 = (*(_BYTE *)(((unsigned __int64)&v80->is_lock_hpno_heal >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v37 >= *(_BYTE *)(((unsigned __int64)&v80->is_lock_hpno_heal >> 3) + 0x7FFF8000));
  if ( (_BYTE)v38 )
    __asan_report_load1(&v80->is_lock_hpno_heal, v37, v38);
  is_lock_hpno_heal = v80->is_lock_hpno_heal;
  v40 = *(_BYTE *)(((unsigned __int64)&this->is_lock_hpno_heal >> 3) + 0x7FFF8000);
  LOBYTE(v37) = v40 != 0;
  v41 = (v40 != 0) & (unsigned __int8)((((unsigned __int8)this + 66) & 7) >= v40);
  if ( (_BYTE)v41 )
    __asan_report_store1(&this->is_lock_hpno_heal, v37, v41);
  this->is_lock_hpno_heal = is_lock_hpno_heal;
  v42 = ((_BYTE)v80 + 67) & 7;
  v43 = (*(_BYTE *)(((unsigned __int64)&v80->is_no_heal >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v42 >= *(_BYTE *)(((unsigned __int64)&v80->is_no_heal >> 3) + 0x7FFF8000));
  if ( (_BYTE)v43 )
    __asan_report_load1(&v80->is_no_heal, v42, v43);
  is_no_heal = v80->is_no_heal;
  v45 = *(_BYTE *)(((unsigned __int64)&this->is_no_heal >> 3) + 0x7FFF8000);
  LOBYTE(v42) = v45 != 0;
  v46 = (v45 != 0) & (unsigned __int8)((((unsigned __int8)this + 67) & 7) >= v45);
  if ( (_BYTE)v46 )
    __asan_report_store1(&this->is_no_heal, v42, v46);
  this->is_no_heal = is_no_heal;
  v47 = ((_BYTE)v80 + 68) & 7;
  v48 = (*(_BYTE *)(((unsigned __int64)&v80->is_ghost_to_allied >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v47 >= *(_BYTE *)(((unsigned __int64)&v80->is_ghost_to_allied >> 3) + 0x7FFF8000));
  if ( (_BYTE)v48 )
    __asan_report_load1(&v80->is_ghost_to_allied, v47, v48);
  is_ghost_to_allied = v80->is_ghost_to_allied;
  v50 = *(_BYTE *)(((unsigned __int64)&this->is_ghost_to_allied >> 3) + 0x7FFF8000);
  LOBYTE(v47) = v50 != 0;
  v51 = (v50 != 0) & (unsigned __int8)((((unsigned __int8)this + 68) & 7) >= v50);
  if ( (_BYTE)v51 )
    __asan_report_store1(&this->is_ghost_to_allied, v47, v51);
  this->is_ghost_to_allied = is_ghost_to_allied;
  v52 = ((_BYTE)v80 + 69) & 7;
  v53 = (*(_BYTE *)(((unsigned __int64)&v80->is_ghost_to_enemy >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v52 >= *(_BYTE *)(((unsigned __int64)&v80->is_ghost_to_enemy >> 3) + 0x7FFF8000));
  if ( (_BYTE)v53 )
    __asan_report_load1(&v80->is_ghost_to_enemy, v52, v53);
  is_ghost_to_enemy = v80->is_ghost_to_enemy;
  v55 = *(_BYTE *)(((unsigned __int64)&this->is_ghost_to_enemy >> 3) + 0x7FFF8000);
  LOBYTE(v52) = v55 != 0;
  v56 = (v55 != 0) & (unsigned __int8)((((unsigned __int8)this + 69) & 7) >= v55);
  if ( (_BYTE)v56 )
    __asan_report_store1(&this->is_ghost_to_enemy, v52, v56);
  this->is_ghost_to_enemy = is_ghost_to_enemy;
  v57 = ((_BYTE)v80 + 70) & 7;
  v58 = (*(_BYTE *)(((unsigned __int64)&v80->can_trigger_bullet >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v57 >= *(_BYTE *)(((unsigned __int64)&v80->can_trigger_bullet >> 3) + 0x7FFF8000));
  if ( (_BYTE)v58 )
    __asan_report_load1(&v80->can_trigger_bullet, v57, v58);
  can_trigger_bullet = v80->can_trigger_bullet;
  v60 = *(_BYTE *)(((unsigned __int64)&this->can_trigger_bullet >> 3) + 0x7FFF8000);
  LOBYTE(v57) = v60 != 0;
  v61 = (v60 != 0) & (unsigned __int8)((((unsigned __int8)this + 70) & 7) >= v60);
  if ( (_BYTE)v61 )
    __asan_report_store1(&this->can_trigger_bullet, v57, v61);
  this->can_trigger_bullet = can_trigger_bullet;
  v62 = ((_BYTE)v80 + 71) & 7;
  v63 = (*(_BYTE *)(((unsigned __int64)&v80->deny_element_stick >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v62 >= *(_BYTE *)(((unsigned __int64)&v80->deny_element_stick >> 3) + 0x7FFF8000));
  if ( (_BYTE)v63 )
    __asan_report_load1(&v80->deny_element_stick, v62, v63);
  deny_element_stick = v80->deny_element_stick;
  v65 = *(_BYTE *)(((unsigned __int64)&this->deny_element_stick >> 3) + 0x7FFF8000);
  LOBYTE(v62) = v65 != 0;
  v66 = (v65 != 0) & (unsigned __int8)((((unsigned __int8)this + 71) & 7) >= v65);
  if ( (_BYTE)v66 )
    __asan_report_store1(&this->deny_element_stick, v62, v66);
  this->deny_element_stick = deny_element_stick;
  if ( *(char *)(((unsigned __int64)&v80->ignore_purge_rate >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v80->ignore_purge_rate, v62, &v80->ignore_purge_rate);
  ignore_purge_rate = v80->ignore_purge_rate;
  v68 = *(_BYTE *)(((unsigned __int64)&this->ignore_purge_rate >> 3) + 0x7FFF8000);
  if ( v68 < 0 )
  {
    LOBYTE(v62) = v68 != 0;
    __asan_report_store1(&this->ignore_purge_rate, v62, &this->ignore_purge_rate);
  }
  this->ignore_purge_rate = ignore_purge_rate;
  v69 = ((_BYTE)v80 + 73) & 7;
  v70 = (*(_BYTE *)(((unsigned __int64)&v80->ignore_damage_to_self >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v69 >= *(_BYTE *)(((unsigned __int64)&v80->ignore_damage_to_self >> 3) + 0x7FFF8000));
  if ( (_BYTE)v70 )
    __asan_report_load1(&v80->ignore_damage_to_self, v69, v70);
  ignore_damage_to_self = v80->ignore_damage_to_self;
  v72 = *(_BYTE *)(((unsigned __int64)&this->ignore_damage_to_self >> 3) + 0x7FFF8000);
  LOBYTE(v69) = v72 != 0;
  v73 = (v72 != 0) & (unsigned __int8)((((unsigned __int8)this + 73) & 7) >= v72);
  if ( (_BYTE)v73 )
    __asan_report_store1(&this->ignore_damage_to_self, v69, v73);
  this->ignore_damage_to_self = ignore_damage_to_self;
  v74 = ((_BYTE)v80 + 74) & 7;
  v75 = (*(_BYTE *)(((unsigned __int64)&v80->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v74 >= *(_BYTE *)(((unsigned __int64)&v80->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v75 )
    __asan_report_load1(&v80->is_json_loaded, v74, v75);
  is_json_loaded = v80->is_json_loaded;
  v77 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v74) = v77 != 0;
  v78 = (v77 != 0) & (unsigned __int8)((((unsigned __int8)this + 74) & 7) >= v77);
  if ( (_BYTE)v78 )
    __asan_report_store1(&this->is_json_loaded, v74, v78);
  this->is_json_loaded = is_json_loaded;
  return this;
};

// Line 394: range 000000000D76C754-000000000D76CCFC
void __cdecl data::ConfigCombatProperty::ConfigCombatProperty(data::ConfigCombatProperty *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->endure_type = Default_3;
  v2 = ((_BYTE)this + 4) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->use_creator_property >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->use_creator_property >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->use_creator_property, v2, v3);
  this->use_creator_property = 0;
  std::vector<data::CombatPropertyIndex>::vector(&this->use_creator_property_partly);
  if ( *(char *)(((unsigned __int64)&this->use_creator_buffed_property >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->use_creator_buffed_property, v2, &this->use_creator_buffed_property);
  this->use_creator_buffed_property = 1;
  v4 = ((_BYTE)this + 33) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->use_ability_property >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->use_ability_property >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->use_ability_property, v4, v5);
  this->use_ability_property = 0;
  v6 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->hp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hp >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hp, v6);
  }
  this->hp = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->attack >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->attack >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->attack, v6);
  }
  this->attack = 0.0;
  v7 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->defense >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->defense >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->defense, v7);
  }
  this->defense = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level, v7);
  }
  this->level = 0;
  v8 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_option >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_option >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level_option, v8);
  }
  this->level_option = None_8;
  if ( *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->weight, v8);
  }
  this->weight = 10.0;
  v9 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->endure_shake >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->endure_shake >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->endure_shake, v9);
  }
  this->endure_shake = 0.0;
  if ( *(char *)(((unsigned __int64)&this->is_invincible >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_invincible, v9, &this->is_invincible);
  this->is_invincible = 0;
  v10 = ((_BYTE)this + 65) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&this->is_lock_hp >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&this->is_lock_hp >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->is_lock_hp, v10, v11);
  this->is_lock_hp = 0;
  v12 = ((_BYTE)this + 66) & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)&this->is_lock_hpno_heal >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&this->is_lock_hpno_heal >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->is_lock_hpno_heal, v12, v13);
  this->is_lock_hpno_heal = 0;
  v14 = ((_BYTE)this + 67) & 7;
  v15 = (*(_BYTE *)(((unsigned __int64)&this->is_no_heal >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)&this->is_no_heal >> 3) + 0x7FFF8000));
  if ( (_BYTE)v15 )
    __asan_report_store1(&this->is_no_heal, v14, v15);
  this->is_no_heal = 0;
  v16 = ((_BYTE)this + 68) & 7;
  v17 = (*(_BYTE *)(((unsigned __int64)&this->is_ghost_to_allied >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v16 >= *(_BYTE *)(((unsigned __int64)&this->is_ghost_to_allied >> 3) + 0x7FFF8000));
  if ( (_BYTE)v17 )
    __asan_report_store1(&this->is_ghost_to_allied, v16, v17);
  this->is_ghost_to_allied = 0;
  v18 = ((_BYTE)this + 69) & 7;
  v19 = (*(_BYTE *)(((unsigned __int64)&this->is_ghost_to_enemy >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v18 >= *(_BYTE *)(((unsigned __int64)&this->is_ghost_to_enemy >> 3) + 0x7FFF8000));
  if ( (_BYTE)v19 )
    __asan_report_store1(&this->is_ghost_to_enemy, v18, v19);
  this->is_ghost_to_enemy = 0;
  v20 = ((_BYTE)this + 70) & 7;
  v21 = (*(_BYTE *)(((unsigned __int64)&this->can_trigger_bullet >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v20 >= *(_BYTE *)(((unsigned __int64)&this->can_trigger_bullet >> 3) + 0x7FFF8000));
  if ( (_BYTE)v21 )
    __asan_report_store1(&this->can_trigger_bullet, v20, v21);
  this->can_trigger_bullet = 1;
  v22 = ((_BYTE)this + 71) & 7;
  v23 = (*(_BYTE *)(((unsigned __int64)&this->deny_element_stick >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v22 >= *(_BYTE *)(((unsigned __int64)&this->deny_element_stick >> 3) + 0x7FFF8000));
  if ( (_BYTE)v23 )
    __asan_report_store1(&this->deny_element_stick, v22, v23);
  this->deny_element_stick = 0;
  if ( *(char *)(((unsigned __int64)&this->ignore_purge_rate >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->ignore_purge_rate, v22, &this->ignore_purge_rate);
  this->ignore_purge_rate = 0;
  v24 = ((_BYTE)this + 73) & 7;
  v25 = (*(_BYTE *)(((unsigned __int64)&this->ignore_damage_to_self >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v24 >= *(_BYTE *)(((unsigned __int64)&this->ignore_damage_to_self >> 3) + 0x7FFF8000));
  if ( (_BYTE)v25 )
    __asan_report_store1(&this->ignore_damage_to_self, v24, v25);
  this->ignore_damage_to_self = 0;
  v26 = ((_BYTE)this + 74) & 7;
  v27 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v26 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v27 )
    __asan_report_store1(&this->is_json_loaded, v26, v27);
  this->is_json_loaded = 0;
};

// Line 394: range 000000000DD0EF08-000000000DD0FA04
void __cdecl data::ConfigCombatProperty::ConfigCombatProperty(
        data::ConfigCombatProperty *const this,
        const data::ConfigCombatProperty *a2)
{
  data::EndureType endure_type; // ecx
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool use_creator_property; // cl
  char v7; // dl
  __int64 v8; // rdx
  data::CombatPropertyIndexList *p_use_creator_property_partly; // rsi
  bool use_creator_buffed_property; // cl
  char v11; // al
  __int64 v12; // rsi
  __int64 v13; // rdx
  bool use_ability_property; // cl
  char v15; // dl
  __int64 v16; // rdx
  float hp; // xmm0_4
  __int64 v18; // rsi
  float attack; // xmm0_4
  float defense; // xmm0_4
  __int64 v21; // rsi
  int32_t level; // ecx
  char v23; // al
  __int64 v24; // rsi
  data::LevelOption level_option; // ecx
  char v26; // dl
  float weight; // xmm0_4
  float endure_shake; // xmm0_4
  __int64 v29; // rsi
  bool is_invincible; // cl
  char v31; // al
  __int64 v32; // rsi
  __int64 v33; // rdx
  bool is_lock_hp; // cl
  char v35; // dl
  __int64 v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // rdx
  bool is_lock_hpno_heal; // cl
  char v40; // dl
  __int64 v41; // rdx
  __int64 v42; // rsi
  __int64 v43; // rdx
  bool is_no_heal; // cl
  char v45; // dl
  __int64 v46; // rdx
  __int64 v47; // rsi
  __int64 v48; // rdx
  bool is_ghost_to_allied; // cl
  char v50; // dl
  __int64 v51; // rdx
  __int64 v52; // rsi
  __int64 v53; // rdx
  bool is_ghost_to_enemy; // cl
  char v55; // dl
  __int64 v56; // rdx
  __int64 v57; // rsi
  __int64 v58; // rdx
  bool can_trigger_bullet; // cl
  char v60; // dl
  __int64 v61; // rdx
  __int64 v62; // rsi
  __int64 v63; // rdx
  bool deny_element_stick; // cl
  char v65; // dl
  __int64 v66; // rdx
  bool ignore_purge_rate; // cl
  char v68; // al
  __int64 v69; // rsi
  __int64 v70; // rdx
  bool ignore_damage_to_self; // cl
  char v72; // dl
  __int64 v73; // rdx
  __int64 v74; // rsi
  __int64 v75; // rdx
  bool is_json_loaded; // cl
  char v77; // dl
  __int64 v78; // rdx
  const data::ConfigCombatProperty *v79; // [rsp+0h] [rbp-10h]

  v79 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  endure_type = a2->endure_type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->endure_type = endure_type;
  v4 = ((_BYTE)v79 + 4) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&v79->use_creator_property >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&v79->use_creator_property >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&v79->use_creator_property, v4, v5);
  use_creator_property = v79->use_creator_property;
  v7 = *(_BYTE *)(((unsigned __int64)&this->use_creator_property >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 4) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->use_creator_property, v4, v8);
  this->use_creator_property = use_creator_property;
  p_use_creator_property_partly = &v79->use_creator_property_partly;
  std::vector<data::CombatPropertyIndex>::vector(&this->use_creator_property_partly, &v79->use_creator_property_partly);
  if ( *(char *)(((unsigned __int64)&v79->use_creator_buffed_property >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(
      &v79->use_creator_buffed_property,
      p_use_creator_property_partly,
      &v79->use_creator_buffed_property);
  use_creator_buffed_property = v79->use_creator_buffed_property;
  v11 = *(_BYTE *)(((unsigned __int64)&this->use_creator_buffed_property >> 3) + 0x7FFF8000);
  if ( v11 < 0 )
  {
    LOBYTE(p_use_creator_property_partly) = v11 != 0;
    __asan_report_store1(
      &this->use_creator_buffed_property,
      p_use_creator_property_partly,
      &this->use_creator_buffed_property);
  }
  this->use_creator_buffed_property = use_creator_buffed_property;
  v12 = ((_BYTE)v79 + 33) & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)&v79->use_ability_property >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&v79->use_ability_property >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_load1(&v79->use_ability_property, v12, v13);
  use_ability_property = v79->use_ability_property;
  v15 = *(_BYTE *)(((unsigned __int64)&this->use_ability_property >> 3) + 0x7FFF8000);
  LOBYTE(v12) = v15 != 0;
  v16 = (v15 != 0) & (unsigned __int8)((((unsigned __int8)this + 33) & 7) >= v15);
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->use_ability_property, v12, v16);
  this->use_ability_property = use_ability_property;
  if ( *(_BYTE *)(((unsigned __int64)&v79->hp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v79 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v79->hp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v79->hp);
  }
  hp = v79->hp;
  v18 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->hp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hp >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hp, v18);
  }
  this->hp = hp;
  if ( *(_BYTE *)(((unsigned __int64)&v79->attack >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v79->attack >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v79->attack);
  }
  attack = v79->attack;
  if ( *(_BYTE *)(((unsigned __int64)&this->attack >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->attack >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->attack, v18);
  }
  this->attack = attack;
  if ( *(_BYTE *)(((unsigned __int64)&v79->defense >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v79 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v79->defense >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v79->defense);
  }
  defense = v79->defense;
  v21 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->defense >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->defense >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->defense, v21);
  }
  this->defense = defense;
  if ( *(_BYTE *)(((unsigned __int64)&v79->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v79->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v79->level);
  }
  level = v79->level;
  v23 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v23 != 0 && v23 <= 3 )
  {
    LOBYTE(v21) = v23 != 0;
    __asan_report_store4(&this->level, v21);
  }
  this->level = level;
  v24 = (((_BYTE)v79 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v79->level_option >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v79 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v79->level_option >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v79->level_option);
  }
  level_option = v79->level_option;
  v26 = *(_BYTE *)(((unsigned __int64)&this->level_option >> 3) + 0x7FFF8000);
  LOBYTE(v24) = v26 != 0;
  if ( v26 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v26 )
    __asan_report_store4(&this->level_option, v24);
  this->level_option = level_option;
  if ( *(_BYTE *)(((unsigned __int64)&v79->weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v79->weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v79->weight);
  }
  weight = v79->weight;
  if ( *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->weight, v24);
  }
  this->weight = weight;
  if ( *(_BYTE *)(((unsigned __int64)&v79->endure_shake >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v79 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v79->endure_shake >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v79->endure_shake);
  }
  endure_shake = v79->endure_shake;
  v29 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->endure_shake >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->endure_shake >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->endure_shake, v29);
  }
  this->endure_shake = endure_shake;
  if ( *(char *)(((unsigned __int64)&v79->is_invincible >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v79->is_invincible, v29, &v79->is_invincible);
  is_invincible = v79->is_invincible;
  v31 = *(_BYTE *)(((unsigned __int64)&this->is_invincible >> 3) + 0x7FFF8000);
  if ( v31 < 0 )
  {
    LOBYTE(v29) = v31 != 0;
    __asan_report_store1(&this->is_invincible, v29, &this->is_invincible);
  }
  this->is_invincible = is_invincible;
  v32 = ((_BYTE)v79 + 65) & 7;
  v33 = (*(_BYTE *)(((unsigned __int64)&v79->is_lock_hp >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v32 >= *(_BYTE *)(((unsigned __int64)&v79->is_lock_hp >> 3) + 0x7FFF8000));
  if ( (_BYTE)v33 )
    __asan_report_load1(&v79->is_lock_hp, v32, v33);
  is_lock_hp = v79->is_lock_hp;
  v35 = *(_BYTE *)(((unsigned __int64)&this->is_lock_hp >> 3) + 0x7FFF8000);
  LOBYTE(v32) = v35 != 0;
  v36 = (v35 != 0) & (unsigned __int8)((((unsigned __int8)this + 65) & 7) >= v35);
  if ( (_BYTE)v36 )
    __asan_report_store1(&this->is_lock_hp, v32, v36);
  this->is_lock_hp = is_lock_hp;
  v37 = ((_BYTE)v79 + 66) & 7;
  v38 = (*(_BYTE *)(((unsigned __int64)&v79->is_lock_hpno_heal >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v37 >= *(_BYTE *)(((unsigned __int64)&v79->is_lock_hpno_heal >> 3) + 0x7FFF8000));
  if ( (_BYTE)v38 )
    __asan_report_load1(&v79->is_lock_hpno_heal, v37, v38);
  is_lock_hpno_heal = v79->is_lock_hpno_heal;
  v40 = *(_BYTE *)(((unsigned __int64)&this->is_lock_hpno_heal >> 3) + 0x7FFF8000);
  LOBYTE(v37) = v40 != 0;
  v41 = (v40 != 0) & (unsigned __int8)((((unsigned __int8)this + 66) & 7) >= v40);
  if ( (_BYTE)v41 )
    __asan_report_store1(&this->is_lock_hpno_heal, v37, v41);
  this->is_lock_hpno_heal = is_lock_hpno_heal;
  v42 = ((_BYTE)v79 + 67) & 7;
  v43 = (*(_BYTE *)(((unsigned __int64)&v79->is_no_heal >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v42 >= *(_BYTE *)(((unsigned __int64)&v79->is_no_heal >> 3) + 0x7FFF8000));
  if ( (_BYTE)v43 )
    __asan_report_load1(&v79->is_no_heal, v42, v43);
  is_no_heal = v79->is_no_heal;
  v45 = *(_BYTE *)(((unsigned __int64)&this->is_no_heal >> 3) + 0x7FFF8000);
  LOBYTE(v42) = v45 != 0;
  v46 = (v45 != 0) & (unsigned __int8)((((unsigned __int8)this + 67) & 7) >= v45);
  if ( (_BYTE)v46 )
    __asan_report_store1(&this->is_no_heal, v42, v46);
  this->is_no_heal = is_no_heal;
  v47 = ((_BYTE)v79 + 68) & 7;
  v48 = (*(_BYTE *)(((unsigned __int64)&v79->is_ghost_to_allied >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v47 >= *(_BYTE *)(((unsigned __int64)&v79->is_ghost_to_allied >> 3) + 0x7FFF8000));
  if ( (_BYTE)v48 )
    __asan_report_load1(&v79->is_ghost_to_allied, v47, v48);
  is_ghost_to_allied = v79->is_ghost_to_allied;
  v50 = *(_BYTE *)(((unsigned __int64)&this->is_ghost_to_allied >> 3) + 0x7FFF8000);
  LOBYTE(v47) = v50 != 0;
  v51 = (v50 != 0) & (unsigned __int8)((((unsigned __int8)this + 68) & 7) >= v50);
  if ( (_BYTE)v51 )
    __asan_report_store1(&this->is_ghost_to_allied, v47, v51);
  this->is_ghost_to_allied = is_ghost_to_allied;
  v52 = ((_BYTE)v79 + 69) & 7;
  v53 = (*(_BYTE *)(((unsigned __int64)&v79->is_ghost_to_enemy >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v52 >= *(_BYTE *)(((unsigned __int64)&v79->is_ghost_to_enemy >> 3) + 0x7FFF8000));
  if ( (_BYTE)v53 )
    __asan_report_load1(&v79->is_ghost_to_enemy, v52, v53);
  is_ghost_to_enemy = v79->is_ghost_to_enemy;
  v55 = *(_BYTE *)(((unsigned __int64)&this->is_ghost_to_enemy >> 3) + 0x7FFF8000);
  LOBYTE(v52) = v55 != 0;
  v56 = (v55 != 0) & (unsigned __int8)((((unsigned __int8)this + 69) & 7) >= v55);
  if ( (_BYTE)v56 )
    __asan_report_store1(&this->is_ghost_to_enemy, v52, v56);
  this->is_ghost_to_enemy = is_ghost_to_enemy;
  v57 = ((_BYTE)v79 + 70) & 7;
  v58 = (*(_BYTE *)(((unsigned __int64)&v79->can_trigger_bullet >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v57 >= *(_BYTE *)(((unsigned __int64)&v79->can_trigger_bullet >> 3) + 0x7FFF8000));
  if ( (_BYTE)v58 )
    __asan_report_load1(&v79->can_trigger_bullet, v57, v58);
  can_trigger_bullet = v79->can_trigger_bullet;
  v60 = *(_BYTE *)(((unsigned __int64)&this->can_trigger_bullet >> 3) + 0x7FFF8000);
  LOBYTE(v57) = v60 != 0;
  v61 = (v60 != 0) & (unsigned __int8)((((unsigned __int8)this + 70) & 7) >= v60);
  if ( (_BYTE)v61 )
    __asan_report_store1(&this->can_trigger_bullet, v57, v61);
  this->can_trigger_bullet = can_trigger_bullet;
  v62 = ((_BYTE)v79 + 71) & 7;
  v63 = (*(_BYTE *)(((unsigned __int64)&v79->deny_element_stick >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v62 >= *(_BYTE *)(((unsigned __int64)&v79->deny_element_stick >> 3) + 0x7FFF8000));
  if ( (_BYTE)v63 )
    __asan_report_load1(&v79->deny_element_stick, v62, v63);
  deny_element_stick = v79->deny_element_stick;
  v65 = *(_BYTE *)(((unsigned __int64)&this->deny_element_stick >> 3) + 0x7FFF8000);
  LOBYTE(v62) = v65 != 0;
  v66 = (v65 != 0) & (unsigned __int8)((((unsigned __int8)this + 71) & 7) >= v65);
  if ( (_BYTE)v66 )
    __asan_report_store1(&this->deny_element_stick, v62, v66);
  this->deny_element_stick = deny_element_stick;
  if ( *(char *)(((unsigned __int64)&v79->ignore_purge_rate >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v79->ignore_purge_rate, v62, &v79->ignore_purge_rate);
  ignore_purge_rate = v79->ignore_purge_rate;
  v68 = *(_BYTE *)(((unsigned __int64)&this->ignore_purge_rate >> 3) + 0x7FFF8000);
  if ( v68 < 0 )
  {
    LOBYTE(v62) = v68 != 0;
    __asan_report_store1(&this->ignore_purge_rate, v62, &this->ignore_purge_rate);
  }
  this->ignore_purge_rate = ignore_purge_rate;
  v69 = ((_BYTE)v79 + 73) & 7;
  v70 = (*(_BYTE *)(((unsigned __int64)&v79->ignore_damage_to_self >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v69 >= *(_BYTE *)(((unsigned __int64)&v79->ignore_damage_to_self >> 3) + 0x7FFF8000));
  if ( (_BYTE)v70 )
    __asan_report_load1(&v79->ignore_damage_to_self, v69, v70);
  ignore_damage_to_self = v79->ignore_damage_to_self;
  v72 = *(_BYTE *)(((unsigned __int64)&this->ignore_damage_to_self >> 3) + 0x7FFF8000);
  LOBYTE(v69) = v72 != 0;
  v73 = (v72 != 0) & (unsigned __int8)((((unsigned __int8)this + 73) & 7) >= v72);
  if ( (_BYTE)v73 )
    __asan_report_store1(&this->ignore_damage_to_self, v69, v73);
  this->ignore_damage_to_self = ignore_damage_to_self;
  v74 = ((_BYTE)v79 + 74) & 7;
  v75 = (*(_BYTE *)(((unsigned __int64)&v79->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v74 >= *(_BYTE *)(((unsigned __int64)&v79->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v75 )
    __asan_report_load1(&v79->is_json_loaded, v74, v75);
  is_json_loaded = v79->is_json_loaded;
  v77 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v74) = v77 != 0;
  v78 = (v77 != 0) & (unsigned __int8)((((unsigned __int8)this + 74) & 7) >= v77);
  if ( (_BYTE)v78 )
    __asan_report_store1(&this->is_json_loaded, v74, v78);
  this->is_json_loaded = is_json_loaded;
};

// Line 394: range 000000000D76CCFE-000000000D76CD1C
void __cdecl data::ConfigCombatProperty::~ConfigCombatProperty(data::ConfigCombatProperty *const this)
{
  std::vector<data::CombatPropertyIndex>::~vector(&this->use_creator_property_partly);
};

// Line 438: range 000000000DEC0CB0-000000000DEC0D3C
void __cdecl data::ConfigBeHitBlendShake::ConfigBeHitBlendShake(data::ConfigBeHitBlendShake *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::ConfigBeHitBlendShake>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigBeHitBlendShake>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBeHitBlendShake + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBeHitBlendShake = v2;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 438: range 000000000ED318FE-000000000ED319D4
void __cdecl data::ConfigBeHitBlendShake::ConfigBeHitBlendShake(
        data::ConfigBeHitBlendShake *const this,
        const data::ConfigBeHitBlendShake *a2)
{
  std::enable_shared_from_this<data::ConfigBeHitBlendShake> *v2; // rsi
  int (**v3)(...); // rdx
  bool is_json_loaded; // cl
  char v5; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigBeHitBlendShake>;
  std::enable_shared_from_this<data::ConfigBeHitBlendShake>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigBeHitBlendShake>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigBeHitBlendShake + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigBeHitBlendShake = v3;
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, v2, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 445: range 000000000ED31C70-000000000ED31C9A
void __cdecl data::ConfigBeHitBlendShake::~ConfigBeHitBlendShake(data::ConfigBeHitBlendShake *const this)
{
  data::ConfigBeHitBlendShake::~ConfigBeHitBlendShake(this);
  operator delete(this, 0x20uLL);
};

// Line 445: range 000000000ED31C1E-000000000ED31C6F
void __cdecl data::ConfigBeHitBlendShake::~ConfigBeHitBlendShake(data::ConfigBeHitBlendShake *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBeHitBlendShake + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBeHitBlendShake = v2;
  std::enable_shared_from_this<data::ConfigBeHitBlendShake>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigBeHitBlendShake>);
};

// Line 450: range 000000000E69F16A-000000000E69F17A
const char *__cdecl data::ConfigBeHitBlendShake::getTypeName(const data::ConfigBeHitBlendShake *const this)
{
  return "ConfigBeHitBlendShake";
};

// Line 451: range 000000000E69F17C-000000000E69F318
int32_t __cdecl data::ConfigBeHitBlendShake::getHashNum(const data::ConfigBeHitBlendShake *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigBeHitBlendShake::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBeHitBlendShake",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 470: range 000000000E6C8B5C-000000000E6C8BF0
void __cdecl data::ShakeByAinmator::ShakeByAinmator(data::ShakeByAinmator *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->shake_flag = 0.0;
  std::vector<std::string>::vector(&this->hit_box_names);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 470: range 000000000EBBDC04-000000000EBBDD15
void __cdecl data::ShakeByAinmator::ShakeByAinmator(data::ShakeByAinmator *const this, const data::ShakeByAinmator *a2)
{
  float shake_flag; // xmm0_4
  data::StringList *p_hit_box_names; // rsi
  bool is_json_loaded; // cl
  char v5; // al

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  shake_flag = a2->shake_flag;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, a2);
  }
  this->shake_flag = shake_flag;
  p_hit_box_names = &a2->hit_box_names;
  std::vector<std::string>::vector(&this->hit_box_names, &a2->hit_box_names);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_hit_box_names, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_hit_box_names) = v5 != 0;
    __asan_report_store1(&this->is_json_loaded, p_hit_box_names, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 470: range 000000000E861DEA-000000000E861EFB
void __cdecl data::ShakeByAinmator::ShakeByAinmator(data::ShakeByAinmator *const this, data::ShakeByAinmator *a2)
{
  float shake_flag; // xmm0_4
  data::StringList *p_hit_box_names; // rsi
  bool is_json_loaded; // cl
  char v5; // al

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  shake_flag = a2->shake_flag;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, a2);
  }
  this->shake_flag = shake_flag;
  p_hit_box_names = &a2->hit_box_names;
  std::vector<std::string>::vector(&this->hit_box_names, &a2->hit_box_names);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_hit_box_names, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_hit_box_names) = v5 != 0;
    __asan_report_store1(&this->is_json_loaded, p_hit_box_names, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 470: range 000000000E6C8BF2-000000000E6C8C10
void __cdecl data::ShakeByAinmator::~ShakeByAinmator(data::ShakeByAinmator *const this)
{
  std::vector<std::string>::~vector(&this->hit_box_names);
};

// Line 499: range 000000000ED31CD4-000000000ED31D31
void __cdecl data::ConfigBeHitBlendShakeByAinmator::ConfigBeHitBlendShakeByAinmator(
        data::ConfigBeHitBlendShakeByAinmator *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBeHitBlendShake::ConfigBeHitBlendShake(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBeHitBlendShakeByAinmator + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBeHitBlendShake = v2;
  std::vector<data::ShakeByAinmator>::vector(&this->shake_flag_map);
};

// Line 499: range 000000000ED32126-000000000ED321BC
void __cdecl data::ConfigBeHitBlendShakeByAinmator::ConfigBeHitBlendShakeByAinmator(
        data::ConfigBeHitBlendShakeByAinmator *const this,
        const data::ConfigBeHitBlendShakeByAinmator *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBeHitBlendShake::ConfigBeHitBlendShake(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBeHitBlendShakeByAinmator + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBeHitBlendShake = v2;
  std::vector<data::ShakeByAinmator>::vector(&this->shake_flag_map, &a2->shake_flag_map);
};

// Line 506: range 000000000EDAC3F8-000000000EDAC455
void __cdecl data::ConfigBeHitBlendShakeByAinmator::~ConfigBeHitBlendShakeByAinmator(
        data::ConfigBeHitBlendShakeByAinmator *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBeHitBlendShakeByAinmator + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBeHitBlendShake = v2;
  std::vector<data::ShakeByAinmator>::~vector(&this->shake_flag_map);
  data::ConfigBeHitBlendShake::~ConfigBeHitBlendShake(this);
};

// Line 506: range 000000000EDAC456-000000000EDAC480
void __cdecl data::ConfigBeHitBlendShakeByAinmator::~ConfigBeHitBlendShakeByAinmator(
        data::ConfigBeHitBlendShakeByAinmator *const this)
{
  data::ConfigBeHitBlendShakeByAinmator::~ConfigBeHitBlendShakeByAinmator(this);
  operator delete(this, 0x38uLL);
};

// Line 511: range 000000000E69F31A-000000000E69F32A
const char *__cdecl data::ConfigBeHitBlendShakeByAinmator::getTypeName(
        const data::ConfigBeHitBlendShakeByAinmator *const this)
{
  return "ConfigBeHitBlendShakeByAinmator";
};

// Line 512: range 000000000E69F32C-000000000E69F4C8
int32_t __cdecl data::ConfigBeHitBlendShakeByAinmator::getHashNum(
        const data::ConfigBeHitBlendShakeByAinmator *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigBeHitBlendShakeByAinmator::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBeHitBlendShakeByAinmator",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 528: range 000000000ED324A6-000000000ED324E7
void __cdecl data::ConfigBeHitBlendShakeByAinmatorFactory::ConfigBeHitBlendShakeByAinmatorFactory(
        data::ConfigBeHitBlendShakeByAinmatorFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBeHitBlendShakeByAinmatorFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBeHitBlendShakeByAinmatorFactory = v2;
};

// Line 536: range 000000000F782E90-000000000F7832BF
data::ConfigCombatBeHit *__cdecl data::ConfigCombatBeHit::operator=(
        data::ConfigCombatBeHit *const this,
        const data::ConfigCombatBeHit *a2)
{
  bool hit_auto_redirect; // cl
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool mute_all_hit; // cl
  char v7; // dl
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  bool mute_all_hit_effect; // cl
  char v12; // dl
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
  bool mute_all_hit_text; // cl
  char v17; // dl
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rdx
  bool mute_attacker_hit_halt; // cl
  char v22; // dl
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdx
  bool mute_defence_hit_halt; // cl
  char v27; // dl
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rdx
  bool ignore_min_hit_vy; // cl
  char v32; // dl
  __int64 v33; // rdx
  data::ConfigBeHitBlendShakePtr *p_blend_shake; // rsi
  bool is_json_loaded; // cl
  char v36; // al
  const data::ConfigCombatBeHit *v38; // [rsp+0h] [rbp-10h]

  v38 = a2;
  std::string::operator=(this, a2);
  if ( *(char *)(((unsigned __int64)&a2->hit_auto_redirect >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->hit_auto_redirect, a2, &a2->hit_auto_redirect);
  hit_auto_redirect = a2->hit_auto_redirect;
  v3 = *(_BYTE *)(((unsigned __int64)&this->hit_auto_redirect >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(&this->hit_auto_redirect, a2, &this->hit_auto_redirect);
  }
  this->hit_auto_redirect = hit_auto_redirect;
  v4 = ((_BYTE)v38 + 33) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&v38->mute_all_hit >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&v38->mute_all_hit >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&v38->mute_all_hit, v4, v5);
  mute_all_hit = v38->mute_all_hit;
  v7 = *(_BYTE *)(((unsigned __int64)&this->mute_all_hit >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 33) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->mute_all_hit, v4, v8);
  this->mute_all_hit = mute_all_hit;
  v9 = ((_BYTE)v38 + 34) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&v38->mute_all_hit_effect >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&v38->mute_all_hit_effect >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_load1(&v38->mute_all_hit_effect, v9, v10);
  mute_all_hit_effect = v38->mute_all_hit_effect;
  v12 = *(_BYTE *)(((unsigned __int64)&this->mute_all_hit_effect >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((((unsigned __int8)this + 34) & 7) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->mute_all_hit_effect, v9, v13);
  this->mute_all_hit_effect = mute_all_hit_effect;
  v14 = ((_BYTE)v38 + 35) & 7;
  v15 = (*(_BYTE *)(((unsigned __int64)&v38->mute_all_hit_text >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)&v38->mute_all_hit_text >> 3) + 0x7FFF8000));
  if ( (_BYTE)v15 )
    __asan_report_load1(&v38->mute_all_hit_text, v14, v15);
  mute_all_hit_text = v38->mute_all_hit_text;
  v17 = *(_BYTE *)(((unsigned __int64)&this->mute_all_hit_text >> 3) + 0x7FFF8000);
  LOBYTE(v14) = v17 != 0;
  v18 = (v17 != 0) & (unsigned __int8)((((unsigned __int8)this + 35) & 7) >= v17);
  if ( (_BYTE)v18 )
    __asan_report_store1(&this->mute_all_hit_text, v14, v18);
  this->mute_all_hit_text = mute_all_hit_text;
  v19 = ((_BYTE)v38 + 36) & 7;
  v20 = (*(_BYTE *)(((unsigned __int64)&v38->mute_attacker_hit_halt >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v19 >= *(_BYTE *)(((unsigned __int64)&v38->mute_attacker_hit_halt >> 3) + 0x7FFF8000));
  if ( (_BYTE)v20 )
    __asan_report_load1(&v38->mute_attacker_hit_halt, v19, v20);
  mute_attacker_hit_halt = v38->mute_attacker_hit_halt;
  v22 = *(_BYTE *)(((unsigned __int64)&this->mute_attacker_hit_halt >> 3) + 0x7FFF8000);
  LOBYTE(v19) = v22 != 0;
  v23 = (v22 != 0) & (unsigned __int8)((((unsigned __int8)this + 36) & 7) >= v22);
  if ( (_BYTE)v23 )
    __asan_report_store1(&this->mute_attacker_hit_halt, v19, v23);
  this->mute_attacker_hit_halt = mute_attacker_hit_halt;
  v24 = ((_BYTE)v38 + 37) & 7;
  v25 = (*(_BYTE *)(((unsigned __int64)&v38->mute_defence_hit_halt >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v24 >= *(_BYTE *)(((unsigned __int64)&v38->mute_defence_hit_halt >> 3) + 0x7FFF8000));
  if ( (_BYTE)v25 )
    __asan_report_load1(&v38->mute_defence_hit_halt, v24, v25);
  mute_defence_hit_halt = v38->mute_defence_hit_halt;
  v27 = *(_BYTE *)(((unsigned __int64)&this->mute_defence_hit_halt >> 3) + 0x7FFF8000);
  LOBYTE(v24) = v27 != 0;
  v28 = (v27 != 0) & (unsigned __int8)((((unsigned __int8)this + 37) & 7) >= v27);
  if ( (_BYTE)v28 )
    __asan_report_store1(&this->mute_defence_hit_halt, v24, v28);
  this->mute_defence_hit_halt = mute_defence_hit_halt;
  v29 = ((_BYTE)v38 + 38) & 7;
  v30 = (*(_BYTE *)(((unsigned __int64)&v38->ignore_min_hit_vy >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v29 >= *(_BYTE *)(((unsigned __int64)&v38->ignore_min_hit_vy >> 3) + 0x7FFF8000));
  if ( (_BYTE)v30 )
    __asan_report_load1(&v38->ignore_min_hit_vy, v29, v30);
  ignore_min_hit_vy = v38->ignore_min_hit_vy;
  v32 = *(_BYTE *)(((unsigned __int64)&this->ignore_min_hit_vy >> 3) + 0x7FFF8000);
  LOBYTE(v29) = v32 != 0;
  v33 = (v32 != 0) & (unsigned __int8)((((unsigned __int8)this + 38) & 7) >= v32);
  if ( (_BYTE)v33 )
    __asan_report_store1(&this->ignore_min_hit_vy, v29, v33);
  this->ignore_min_hit_vy = ignore_min_hit_vy;
  p_blend_shake = &v38->blend_shake;
  std::shared_ptr<data::ConfigBeHitBlendShake>::operator=(&this->blend_shake, &v38->blend_shake);
  if ( *(char *)(((unsigned __int64)&v38->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v38->is_json_loaded, p_blend_shake, &v38->is_json_loaded);
  is_json_loaded = v38->is_json_loaded;
  v36 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v36 < 0 )
  {
    LOBYTE(p_blend_shake) = v36 != 0;
    __asan_report_store1(&this->is_json_loaded, p_blend_shake, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
  return this;
};

// Line 536: range 000000000D76CD1E-000000000D76CF87
void __cdecl data::ConfigCombatBeHit::ConfigCombatBeHit(data::ConfigCombatBeHit *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx

  std::string::basic_string(this);
  if ( *(char *)(((unsigned __int64)&this->hit_auto_redirect >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->hit_auto_redirect, v1, &this->hit_auto_redirect);
  this->hit_auto_redirect = 1;
  v2 = ((_BYTE)this + 33) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->mute_all_hit >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->mute_all_hit >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->mute_all_hit, v2, v3);
  this->mute_all_hit = 0;
  v4 = ((_BYTE)this + 34) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->mute_all_hit_effect >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->mute_all_hit_effect >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->mute_all_hit_effect, v4, v5);
  this->mute_all_hit_effect = 0;
  v6 = ((_BYTE)this + 35) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->mute_all_hit_text >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->mute_all_hit_text >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->mute_all_hit_text, v6, v7);
  this->mute_all_hit_text = 0;
  v8 = ((_BYTE)this + 36) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->mute_attacker_hit_halt >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->mute_attacker_hit_halt >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->mute_attacker_hit_halt, v8, v9);
  this->mute_attacker_hit_halt = 0;
  v10 = ((_BYTE)this + 37) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&this->mute_defence_hit_halt >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&this->mute_defence_hit_halt >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->mute_defence_hit_halt, v10, v11);
  this->mute_defence_hit_halt = 0;
  v12 = ((_BYTE)this + 38) & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)&this->ignore_min_hit_vy >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&this->ignore_min_hit_vy >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->ignore_min_hit_vy, v12, v13);
  this->ignore_min_hit_vy = 0;
  if ( *(_WORD *)(((unsigned __int64)&this->blend_shake >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBeHitBlendShake>();
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v12, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 536: range 000000000DD0FAAA-000000000DD0FED6
void __cdecl data::ConfigCombatBeHit::ConfigCombatBeHit(
        data::ConfigCombatBeHit *const this,
        const data::ConfigCombatBeHit *a2)
{
  bool hit_auto_redirect; // cl
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool mute_all_hit; // cl
  char v7; // dl
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  bool mute_all_hit_effect; // cl
  char v12; // dl
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
  bool mute_all_hit_text; // cl
  char v17; // dl
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rdx
  bool mute_attacker_hit_halt; // cl
  char v22; // dl
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdx
  bool mute_defence_hit_halt; // cl
  char v27; // dl
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rdx
  bool ignore_min_hit_vy; // cl
  char v32; // dl
  __int64 v33; // rdx
  data::ConfigBeHitBlendShakePtr *p_blend_shake; // rsi
  bool is_json_loaded; // cl
  char v36; // al
  const data::ConfigCombatBeHit *v37; // [rsp+0h] [rbp-10h]

  v37 = a2;
  std::string::basic_string(this, a2);
  if ( *(char *)(((unsigned __int64)&a2->hit_auto_redirect >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->hit_auto_redirect, a2, &a2->hit_auto_redirect);
  hit_auto_redirect = a2->hit_auto_redirect;
  v3 = *(_BYTE *)(((unsigned __int64)&this->hit_auto_redirect >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(&this->hit_auto_redirect, a2, &this->hit_auto_redirect);
  }
  this->hit_auto_redirect = hit_auto_redirect;
  v4 = ((_BYTE)v37 + 33) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&v37->mute_all_hit >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&v37->mute_all_hit >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&v37->mute_all_hit, v4, v5);
  mute_all_hit = v37->mute_all_hit;
  v7 = *(_BYTE *)(((unsigned __int64)&this->mute_all_hit >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 33) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->mute_all_hit, v4, v8);
  this->mute_all_hit = mute_all_hit;
  v9 = ((_BYTE)v37 + 34) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&v37->mute_all_hit_effect >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&v37->mute_all_hit_effect >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_load1(&v37->mute_all_hit_effect, v9, v10);
  mute_all_hit_effect = v37->mute_all_hit_effect;
  v12 = *(_BYTE *)(((unsigned __int64)&this->mute_all_hit_effect >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((((unsigned __int8)this + 34) & 7) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->mute_all_hit_effect, v9, v13);
  this->mute_all_hit_effect = mute_all_hit_effect;
  v14 = ((_BYTE)v37 + 35) & 7;
  v15 = (*(_BYTE *)(((unsigned __int64)&v37->mute_all_hit_text >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)&v37->mute_all_hit_text >> 3) + 0x7FFF8000));
  if ( (_BYTE)v15 )
    __asan_report_load1(&v37->mute_all_hit_text, v14, v15);
  mute_all_hit_text = v37->mute_all_hit_text;
  v17 = *(_BYTE *)(((unsigned __int64)&this->mute_all_hit_text >> 3) + 0x7FFF8000);
  LOBYTE(v14) = v17 != 0;
  v18 = (v17 != 0) & (unsigned __int8)((((unsigned __int8)this + 35) & 7) >= v17);
  if ( (_BYTE)v18 )
    __asan_report_store1(&this->mute_all_hit_text, v14, v18);
  this->mute_all_hit_text = mute_all_hit_text;
  v19 = ((_BYTE)v37 + 36) & 7;
  v20 = (*(_BYTE *)(((unsigned __int64)&v37->mute_attacker_hit_halt >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v19 >= *(_BYTE *)(((unsigned __int64)&v37->mute_attacker_hit_halt >> 3) + 0x7FFF8000));
  if ( (_BYTE)v20 )
    __asan_report_load1(&v37->mute_attacker_hit_halt, v19, v20);
  mute_attacker_hit_halt = v37->mute_attacker_hit_halt;
  v22 = *(_BYTE *)(((unsigned __int64)&this->mute_attacker_hit_halt >> 3) + 0x7FFF8000);
  LOBYTE(v19) = v22 != 0;
  v23 = (v22 != 0) & (unsigned __int8)((((unsigned __int8)this + 36) & 7) >= v22);
  if ( (_BYTE)v23 )
    __asan_report_store1(&this->mute_attacker_hit_halt, v19, v23);
  this->mute_attacker_hit_halt = mute_attacker_hit_halt;
  v24 = ((_BYTE)v37 + 37) & 7;
  v25 = (*(_BYTE *)(((unsigned __int64)&v37->mute_defence_hit_halt >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v24 >= *(_BYTE *)(((unsigned __int64)&v37->mute_defence_hit_halt >> 3) + 0x7FFF8000));
  if ( (_BYTE)v25 )
    __asan_report_load1(&v37->mute_defence_hit_halt, v24, v25);
  mute_defence_hit_halt = v37->mute_defence_hit_halt;
  v27 = *(_BYTE *)(((unsigned __int64)&this->mute_defence_hit_halt >> 3) + 0x7FFF8000);
  LOBYTE(v24) = v27 != 0;
  v28 = (v27 != 0) & (unsigned __int8)((((unsigned __int8)this + 37) & 7) >= v27);
  if ( (_BYTE)v28 )
    __asan_report_store1(&this->mute_defence_hit_halt, v24, v28);
  this->mute_defence_hit_halt = mute_defence_hit_halt;
  v29 = ((_BYTE)v37 + 38) & 7;
  v30 = (*(_BYTE *)(((unsigned __int64)&v37->ignore_min_hit_vy >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v29 >= *(_BYTE *)(((unsigned __int64)&v37->ignore_min_hit_vy >> 3) + 0x7FFF8000));
  if ( (_BYTE)v30 )
    __asan_report_load1(&v37->ignore_min_hit_vy, v29, v30);
  ignore_min_hit_vy = v37->ignore_min_hit_vy;
  v32 = *(_BYTE *)(((unsigned __int64)&this->ignore_min_hit_vy >> 3) + 0x7FFF8000);
  LOBYTE(v29) = v32 != 0;
  v33 = (v32 != 0) & (unsigned __int8)((((unsigned __int8)this + 38) & 7) >= v32);
  if ( (_BYTE)v33 )
    __asan_report_store1(&this->ignore_min_hit_vy, v29, v33);
  this->ignore_min_hit_vy = ignore_min_hit_vy;
  p_blend_shake = &v37->blend_shake;
  std::shared_ptr<data::ConfigBeHitBlendShake>::shared_ptr(&this->blend_shake, &v37->blend_shake);
  if ( *(char *)(((unsigned __int64)&v37->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v37->is_json_loaded, p_blend_shake, &v37->is_json_loaded);
  is_json_loaded = v37->is_json_loaded;
  v36 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v36 < 0 )
  {
    LOBYTE(p_blend_shake) = v36 != 0;
    __asan_report_store1(&this->is_json_loaded, p_blend_shake, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 536: range 000000000D76CF88-000000000D76CFB2
void __cdecl data::ConfigCombatBeHit::~ConfigCombatBeHit(data::ConfigCombatBeHit *const this)
{
  std::shared_ptr<data::ConfigBeHitBlendShake>::~shared_ptr(&this->blend_shake);
  std::string::~string(this);
};

// Line 567: range 000000000F7832C0-000000000F783671
data::ConfigCombatLock *__cdecl data::ConfigCombatLock::operator=(
        data::ConfigCombatLock *const this,
        const data::ConfigCombatLock *a2)
{
  bool deny_lock_on; // cl
  char v3; // al
  float lock_weight_yaxis_param; // xmm0_4
  __int64 v5; // rsi
  float lock_weight_yaxis_threshold; // xmm0_4
  float override_range; // xmm0_4
  float override_normal_pri; // xmm0_4
  __int64 v9; // rsi
  float override_combat_pri; // xmm0_4
  __int64 v11; // rsi
  __int64 v12; // rdx
  bool is_json_loaded; // cl
  char v14; // dl
  __int64 v15; // rdx
  const data::ConfigCombatLock *v17; // [rsp+0h] [rbp-10h]

  v17 = a2;
  std::string::operator=(this, a2);
  if ( *(char *)(((unsigned __int64)&a2->deny_lock_on >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->deny_lock_on, a2, &a2->deny_lock_on);
  deny_lock_on = a2->deny_lock_on;
  v3 = *(_BYTE *)(((unsigned __int64)&this->deny_lock_on >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(&this->deny_lock_on, a2, &this->deny_lock_on);
  }
  this->deny_lock_on = deny_lock_on;
  if ( *(_BYTE *)(((unsigned __int64)&v17->lock_weight_yaxis_param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v17 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->lock_weight_yaxis_param >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v17->lock_weight_yaxis_param);
  }
  lock_weight_yaxis_param = v17->lock_weight_yaxis_param;
  v5 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->lock_weight_yaxis_param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->lock_weight_yaxis_param >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->lock_weight_yaxis_param, v5);
  }
  this->lock_weight_yaxis_param = lock_weight_yaxis_param;
  if ( *(_BYTE *)(((unsigned __int64)&v17->lock_weight_yaxis_threshold >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->lock_weight_yaxis_threshold >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v17->lock_weight_yaxis_threshold);
  }
  lock_weight_yaxis_threshold = v17->lock_weight_yaxis_threshold;
  if ( *(_BYTE *)(((unsigned __int64)&this->lock_weight_yaxis_threshold >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->lock_weight_yaxis_threshold >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->lock_weight_yaxis_threshold, v5);
  }
  this->lock_weight_yaxis_threshold = lock_weight_yaxis_threshold;
  std::string::operator=(&this->lock_type, &v17->lock_type);
  if ( *(_BYTE *)(((unsigned __int64)&v17->override_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->override_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v17->override_range);
  }
  override_range = v17->override_range;
  if ( *(_BYTE *)(((unsigned __int64)&this->override_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->override_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->override_range, &v17->lock_type);
  }
  this->override_range = override_range;
  if ( *(_BYTE *)(((unsigned __int64)&v17->override_normal_pri >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v17 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->override_normal_pri >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v17->override_normal_pri);
  }
  override_normal_pri = v17->override_normal_pri;
  v9 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->override_normal_pri >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->override_normal_pri >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->override_normal_pri, v9);
  }
  this->override_normal_pri = override_normal_pri;
  if ( *(_BYTE *)(((unsigned __int64)&v17->override_combat_pri >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->override_combat_pri >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v17->override_combat_pri);
  }
  override_combat_pri = v17->override_combat_pri;
  if ( *(_BYTE *)(((unsigned __int64)&this->override_combat_pri >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->override_combat_pri >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->override_combat_pri, v9);
  }
  this->override_combat_pri = override_combat_pri;
  v11 = ((_BYTE)v17 + 92) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&v17->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&v17->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_load1(&v17->is_json_loaded, v11, v12);
  is_json_loaded = v17->is_json_loaded;
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v11) = v14 != 0;
  v15 = (v14 != 0) & (unsigned __int8)((((unsigned __int8)this + 92) & 7) >= v14);
  if ( (_BYTE)v15 )
    __asan_report_store1(&this->is_json_loaded, v11, v15);
  this->is_json_loaded = is_json_loaded;
  return this;
};

// Line 567: range 000000000D76CFB4-000000000D76D3A5
void __cdecl data::ConfigCombatLock::ConfigCombatLock(data::ConfigCombatLock *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rdx
  char v8[144]; // [rsp+10h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 1 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigCombatLock::ConfigCombatLock;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -202116351;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    &this->lock_shape,
    "CircleLockEnemy",
    (const std::allocator<char> *)(v1 + 48));
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( *(char *)(((unsigned __int64)&this->deny_lock_on >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->deny_lock_on, "CircleLockEnemy", &this->deny_lock_on);
  this->deny_lock_on = 0;
  v4 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->lock_weight_yaxis_param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->lock_weight_yaxis_param >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->lock_weight_yaxis_param, v4);
  }
  this->lock_weight_yaxis_param = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->lock_weight_yaxis_threshold >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->lock_weight_yaxis_threshold >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->lock_weight_yaxis_threshold, v4);
  }
  this->lock_weight_yaxis_threshold = 3.0;
  *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v1 + 64);
  std::string::basic_string<std::allocator<char>>(&this->lock_type, "Default", (const std::allocator<char> *)(v1 + 64));
  std::allocator<char>::~allocator(v1 + 64);
  *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->override_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->override_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->override_range, "Default");
  }
  this->override_range = -1.0;
  v5 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->override_normal_pri >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->override_normal_pri >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->override_normal_pri, v5);
  }
  this->override_normal_pri = -1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->override_combat_pri >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->override_combat_pri >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->override_combat_pri, v5);
  }
  this->override_combat_pri = -1.0;
  v6 = ((_BYTE)this + 92) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_json_loaded, v6, v7);
  this->is_json_loaded = 0;
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 567: range 000000000DD0FED8-000000000DD102A9
void __cdecl data::ConfigCombatLock::ConfigCombatLock(
        data::ConfigCombatLock *const this,
        const data::ConfigCombatLock *a2)
{
  bool deny_lock_on; // cl
  char v3; // al
  float lock_weight_yaxis_param; // xmm0_4
  __int64 v5; // rsi
  float lock_weight_yaxis_threshold; // xmm0_4
  float override_range; // xmm0_4
  float override_normal_pri; // xmm0_4
  __int64 v9; // rsi
  float override_combat_pri; // xmm0_4
  __int64 v11; // rsi
  __int64 v12; // rdx
  bool is_json_loaded; // cl
  char v14; // dl
  __int64 v15; // rdx
  const data::ConfigCombatLock *v16; // [rsp+0h] [rbp-20h]

  v16 = a2;
  std::string::basic_string(this, a2);
  if ( *(char *)(((unsigned __int64)&a2->deny_lock_on >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->deny_lock_on, a2, &a2->deny_lock_on);
  deny_lock_on = a2->deny_lock_on;
  v3 = *(_BYTE *)(((unsigned __int64)&this->deny_lock_on >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(&this->deny_lock_on, a2, &this->deny_lock_on);
  }
  this->deny_lock_on = deny_lock_on;
  if ( *(_BYTE *)(((unsigned __int64)&v16->lock_weight_yaxis_param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->lock_weight_yaxis_param >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->lock_weight_yaxis_param);
  }
  lock_weight_yaxis_param = v16->lock_weight_yaxis_param;
  v5 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->lock_weight_yaxis_param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->lock_weight_yaxis_param >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->lock_weight_yaxis_param, v5);
  }
  this->lock_weight_yaxis_param = lock_weight_yaxis_param;
  if ( *(_BYTE *)(((unsigned __int64)&v16->lock_weight_yaxis_threshold >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->lock_weight_yaxis_threshold >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->lock_weight_yaxis_threshold);
  }
  lock_weight_yaxis_threshold = v16->lock_weight_yaxis_threshold;
  if ( *(_BYTE *)(((unsigned __int64)&this->lock_weight_yaxis_threshold >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->lock_weight_yaxis_threshold >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->lock_weight_yaxis_threshold, v5);
  }
  this->lock_weight_yaxis_threshold = lock_weight_yaxis_threshold;
  std::string::basic_string(&this->lock_type, &v16->lock_type);
  if ( *(_BYTE *)(((unsigned __int64)&v16->override_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->override_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->override_range);
  }
  override_range = v16->override_range;
  if ( *(_BYTE *)(((unsigned __int64)&this->override_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->override_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->override_range, &v16->lock_type);
  }
  this->override_range = override_range;
  if ( *(_BYTE *)(((unsigned __int64)&v16->override_normal_pri >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->override_normal_pri >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->override_normal_pri);
  }
  override_normal_pri = v16->override_normal_pri;
  v9 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->override_normal_pri >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->override_normal_pri >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->override_normal_pri, v9);
  }
  this->override_normal_pri = override_normal_pri;
  if ( *(_BYTE *)(((unsigned __int64)&v16->override_combat_pri >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->override_combat_pri >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->override_combat_pri);
  }
  override_combat_pri = v16->override_combat_pri;
  if ( *(_BYTE *)(((unsigned __int64)&this->override_combat_pri >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->override_combat_pri >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->override_combat_pri, v9);
  }
  this->override_combat_pri = override_combat_pri;
  v11 = ((_BYTE)v16 + 92) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&v16->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&v16->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_load1(&v16->is_json_loaded, v11, v12);
  is_json_loaded = v16->is_json_loaded;
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v11) = v14 != 0;
  v15 = (v14 != 0) & (unsigned __int8)((((unsigned __int8)this + 92) & 7) >= v14);
  if ( (_BYTE)v15 )
    __asan_report_store1(&this->is_json_loaded, v11, v15);
  this->is_json_loaded = is_json_loaded;
};

// Line 567: range 000000000D76D3A6-000000000D76D3D0
void __cdecl data::ConfigCombatLock::~ConfigCombatLock(data::ConfigCombatLock *const this)
{
  std::string::~string(&this->lock_type);
  std::string::~string(this);
};

// Line 597: range 000000000F783672-000000000F784271
data::ConfigDie *__cdecl data::ConfigDie::operator=(data::ConfigDie *const this, const data::ConfigDie *a2)
{
  bool has_animator_die; // cl
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool mute_all_shader_die_eff; // cl
  char v7; // dl
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  bool fall_when_air_die; // cl
  char v12; // dl
  __int64 v13; // rdx
  float die_end_time; // xmm0_4
  __int64 v15; // rsi
  float die_force_disappear_time; // xmm0_4
  float die_disappear_effect_delay; // xmm0_4
  __int64 v18; // rsi
  data::E_ShaderData die_shader_data; // ecx
  char v20; // dl
  float die_shader_enable_duration_time; // xmm0_4
  float die_shader_disable_duration_time; // xmm0_4
  __int64 v23; // rsi
  float die_model_fade_delay; // xmm0_4
  __int64 v25; // rsi
  __int64 v26; // rdx
  bool use_rag_doll; // cl
  char v28; // dl
  __int64 v29; // rdx
  float rag_doll_die_end_time_delay; // xmm0_4
  __int64 v31; // rsi
  __int64 v32; // rdx
  bool start_die_end_at_once; // cl
  char v34; // dl
  __int64 v35; // rdx
  __int64 v36; // rsi
  __int64 v37; // rdx
  bool not_send_die_trigger; // cl
  char v39; // dl
  __int64 v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // rdx
  bool ignore_element_die; // cl
  char v44; // dl
  __int64 v45; // rdx
  __int64 v46; // rsi
  __int64 v47; // rdx
  bool mute_hit_box; // cl
  char v49; // dl
  __int64 v50; // rdx
  bool die_deny_lock_on; // cl
  char v52; // al
  __int64 v53; // rsi
  __int64 v54; // rdx
  bool die_is_ghost_to_enemy; // cl
  char v56; // dl
  __int64 v57; // rdx
  __int64 v58; // rsi
  __int64 v59; // rdx
  bool die_ignore_trigger_bullet; // cl
  char v61; // dl
  __int64 v62; // rdx
  __int64 v63; // rsi
  __int64 v64; // rdx
  bool mute_billboard; // cl
  char v66; // dl
  __int64 v67; // rdx
  __int64 v68; // rsi
  __int64 v69; // rdx
  bool mute_push_collider; // cl
  char v71; // dl
  __int64 v72; // rdx
  __int64 v73; // rsi
  __int64 v74; // rdx
  bool drop_weapon_immediately; // cl
  char v76; // dl
  __int64 v77; // rdx
  __int64 v78; // rsi
  __int64 v79; // rdx
  bool mute_hdmesh; // cl
  char v81; // dl
  __int64 v82; // rdx
  __int64 v83; // rsi
  __int64 v84; // rdx
  bool is_json_loaded; // cl
  char v86; // dl
  __int64 v87; // rdx
  const data::ConfigDie *v89; // [rsp+0h] [rbp-10h]

  v89 = a2;
  if ( *(char *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(a2, a2, a2);
  has_animator_die = a2->has_animator_die;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(this, a2, this);
  }
  this->has_animator_die = has_animator_die;
  v4 = ((_BYTE)v89 + 1) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&v89->mute_all_shader_die_eff >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&v89->mute_all_shader_die_eff >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&v89->mute_all_shader_die_eff, v4, v5);
  mute_all_shader_die_eff = v89->mute_all_shader_die_eff;
  v7 = *(_BYTE *)(((unsigned __int64)&this->mute_all_shader_die_eff >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 1) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->mute_all_shader_die_eff, v4, v8);
  this->mute_all_shader_die_eff = mute_all_shader_die_eff;
  v9 = ((_BYTE)v89 + 2) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&v89->fall_when_air_die >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&v89->fall_when_air_die >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_load1(&v89->fall_when_air_die, v9, v10);
  fall_when_air_die = v89->fall_when_air_die;
  v12 = *(_BYTE *)(((unsigned __int64)&this->fall_when_air_die >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((((unsigned __int8)this + 2) & 7) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->fall_when_air_die, v9, v13);
  this->fall_when_air_die = fall_when_air_die;
  if ( *(_BYTE *)(((unsigned __int64)&v89->die_end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v89 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v89->die_end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v89->die_end_time);
  }
  die_end_time = v89->die_end_time;
  v15 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->die_end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->die_end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->die_end_time, v15);
  }
  this->die_end_time = die_end_time;
  if ( *(_BYTE *)(((unsigned __int64)&v89->die_force_disappear_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v89->die_force_disappear_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v89->die_force_disappear_time);
  }
  die_force_disappear_time = v89->die_force_disappear_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->die_force_disappear_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->die_force_disappear_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->die_force_disappear_time, v15);
  }
  this->die_force_disappear_time = die_force_disappear_time;
  std::string::operator=(&this->die_disappear_effect, &v89->die_disappear_effect);
  if ( *(_BYTE *)(((unsigned __int64)&v89->die_disappear_effect_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v89->die_disappear_effect_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v89->die_disappear_effect_delay);
  }
  die_disappear_effect_delay = v89->die_disappear_effect_delay;
  if ( *(_BYTE *)(((unsigned __int64)&this->die_disappear_effect_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->die_disappear_effect_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->die_disappear_effect_delay, &v89->die_disappear_effect);
  }
  this->die_disappear_effect_delay = die_disappear_effect_delay;
  v18 = (((_BYTE)v89 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v89->die_shader_data >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v89 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v89->die_shader_data >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v89->die_shader_data);
  }
  die_shader_data = v89->die_shader_data;
  v20 = *(_BYTE *)(((unsigned __int64)&this->die_shader_data >> 3) + 0x7FFF8000);
  LOBYTE(v18) = v20 != 0;
  if ( v20 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v20 )
    __asan_report_store4(&this->die_shader_data, v18);
  this->die_shader_data = die_shader_data;
  if ( *(_BYTE *)(((unsigned __int64)&v89->die_shader_enable_duration_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v89->die_shader_enable_duration_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v89->die_shader_enable_duration_time);
  }
  die_shader_enable_duration_time = v89->die_shader_enable_duration_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->die_shader_enable_duration_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->die_shader_enable_duration_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->die_shader_enable_duration_time, v18);
  }
  this->die_shader_enable_duration_time = die_shader_enable_duration_time;
  if ( *(_BYTE *)(((unsigned __int64)&v89->die_shader_disable_duration_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v89 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v89->die_shader_disable_duration_time >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v89->die_shader_disable_duration_time);
  }
  die_shader_disable_duration_time = v89->die_shader_disable_duration_time;
  v23 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->die_shader_disable_duration_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->die_shader_disable_duration_time >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->die_shader_disable_duration_time, v23);
  }
  this->die_shader_disable_duration_time = die_shader_disable_duration_time;
  if ( *(_BYTE *)(((unsigned __int64)&v89->die_model_fade_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v89->die_model_fade_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v89->die_model_fade_delay);
  }
  die_model_fade_delay = v89->die_model_fade_delay;
  if ( *(_BYTE *)(((unsigned __int64)&this->die_model_fade_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->die_model_fade_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->die_model_fade_delay, v23);
  }
  this->die_model_fade_delay = die_model_fade_delay;
  v25 = ((_BYTE)v89 + 68) & 7;
  v26 = (*(_BYTE *)(((unsigned __int64)&v89->use_rag_doll >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v25 >= *(_BYTE *)(((unsigned __int64)&v89->use_rag_doll >> 3) + 0x7FFF8000));
  if ( (_BYTE)v26 )
    __asan_report_load1(&v89->use_rag_doll, v25, v26);
  use_rag_doll = v89->use_rag_doll;
  v28 = *(_BYTE *)(((unsigned __int64)&this->use_rag_doll >> 3) + 0x7FFF8000);
  LOBYTE(v25) = v28 != 0;
  v29 = (v28 != 0) & (unsigned __int8)((((unsigned __int8)this + 68) & 7) >= v28);
  if ( (_BYTE)v29 )
    __asan_report_store1(&this->use_rag_doll, v25, v29);
  this->use_rag_doll = use_rag_doll;
  if ( *(_BYTE *)(((unsigned __int64)&v89->rag_doll_die_end_time_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v89->rag_doll_die_end_time_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v89->rag_doll_die_end_time_delay);
  }
  rag_doll_die_end_time_delay = v89->rag_doll_die_end_time_delay;
  if ( *(_BYTE *)(((unsigned __int64)&this->rag_doll_die_end_time_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rag_doll_die_end_time_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rag_doll_die_end_time_delay, v25);
  }
  this->rag_doll_die_end_time_delay = rag_doll_die_end_time_delay;
  v31 = ((_BYTE)v89 + 76) & 7;
  v32 = (*(_BYTE *)(((unsigned __int64)&v89->start_die_end_at_once >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v31 >= *(_BYTE *)(((unsigned __int64)&v89->start_die_end_at_once >> 3) + 0x7FFF8000));
  if ( (_BYTE)v32 )
    __asan_report_load1(&v89->start_die_end_at_once, v31, v32);
  start_die_end_at_once = v89->start_die_end_at_once;
  v34 = *(_BYTE *)(((unsigned __int64)&this->start_die_end_at_once >> 3) + 0x7FFF8000);
  LOBYTE(v31) = v34 != 0;
  v35 = (v34 != 0) & (unsigned __int8)((((unsigned __int8)this + 76) & 7) >= v34);
  if ( (_BYTE)v35 )
    __asan_report_store1(&this->start_die_end_at_once, v31, v35);
  this->start_die_end_at_once = start_die_end_at_once;
  v36 = ((_BYTE)v89 + 77) & 7;
  v37 = (*(_BYTE *)(((unsigned __int64)&v89->not_send_die_trigger >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v36 >= *(_BYTE *)(((unsigned __int64)&v89->not_send_die_trigger >> 3) + 0x7FFF8000));
  if ( (_BYTE)v37 )
    __asan_report_load1(&v89->not_send_die_trigger, v36, v37);
  not_send_die_trigger = v89->not_send_die_trigger;
  v39 = *(_BYTE *)(((unsigned __int64)&this->not_send_die_trigger >> 3) + 0x7FFF8000);
  LOBYTE(v36) = v39 != 0;
  v40 = (v39 != 0) & (unsigned __int8)((((unsigned __int8)this + 77) & 7) >= v39);
  if ( (_BYTE)v40 )
    __asan_report_store1(&this->not_send_die_trigger, v36, v40);
  this->not_send_die_trigger = not_send_die_trigger;
  v41 = ((_BYTE)v89 + 78) & 7;
  v42 = (*(_BYTE *)(((unsigned __int64)&v89->ignore_element_die >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v41 >= *(_BYTE *)(((unsigned __int64)&v89->ignore_element_die >> 3) + 0x7FFF8000));
  if ( (_BYTE)v42 )
    __asan_report_load1(&v89->ignore_element_die, v41, v42);
  ignore_element_die = v89->ignore_element_die;
  v44 = *(_BYTE *)(((unsigned __int64)&this->ignore_element_die >> 3) + 0x7FFF8000);
  LOBYTE(v41) = v44 != 0;
  v45 = (v44 != 0) & (unsigned __int8)((((unsigned __int8)this + 78) & 7) >= v44);
  if ( (_BYTE)v45 )
    __asan_report_store1(&this->ignore_element_die, v41, v45);
  this->ignore_element_die = ignore_element_die;
  v46 = ((_BYTE)v89 + 79) & 7;
  v47 = (*(_BYTE *)(((unsigned __int64)&v89->mute_hit_box >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v46 >= *(_BYTE *)(((unsigned __int64)&v89->mute_hit_box >> 3) + 0x7FFF8000));
  if ( (_BYTE)v47 )
    __asan_report_load1(&v89->mute_hit_box, v46, v47);
  mute_hit_box = v89->mute_hit_box;
  v49 = *(_BYTE *)(((unsigned __int64)&this->mute_hit_box >> 3) + 0x7FFF8000);
  LOBYTE(v46) = v49 != 0;
  v50 = (v49 != 0) & (unsigned __int8)((((unsigned __int8)this + 79) & 7) >= v49);
  if ( (_BYTE)v50 )
    __asan_report_store1(&this->mute_hit_box, v46, v50);
  this->mute_hit_box = mute_hit_box;
  if ( *(char *)(((unsigned __int64)&v89->die_deny_lock_on >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v89->die_deny_lock_on, v46, &v89->die_deny_lock_on);
  die_deny_lock_on = v89->die_deny_lock_on;
  v52 = *(_BYTE *)(((unsigned __int64)&this->die_deny_lock_on >> 3) + 0x7FFF8000);
  if ( v52 < 0 )
  {
    LOBYTE(v46) = v52 != 0;
    __asan_report_store1(&this->die_deny_lock_on, v46, &this->die_deny_lock_on);
  }
  this->die_deny_lock_on = die_deny_lock_on;
  v53 = ((_BYTE)v89 + 81) & 7;
  v54 = (*(_BYTE *)(((unsigned __int64)&v89->die_is_ghost_to_enemy >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v53 >= *(_BYTE *)(((unsigned __int64)&v89->die_is_ghost_to_enemy >> 3) + 0x7FFF8000));
  if ( (_BYTE)v54 )
    __asan_report_load1(&v89->die_is_ghost_to_enemy, v53, v54);
  die_is_ghost_to_enemy = v89->die_is_ghost_to_enemy;
  v56 = *(_BYTE *)(((unsigned __int64)&this->die_is_ghost_to_enemy >> 3) + 0x7FFF8000);
  LOBYTE(v53) = v56 != 0;
  v57 = (v56 != 0) & (unsigned __int8)((((unsigned __int8)this + 81) & 7) >= v56);
  if ( (_BYTE)v57 )
    __asan_report_store1(&this->die_is_ghost_to_enemy, v53, v57);
  this->die_is_ghost_to_enemy = die_is_ghost_to_enemy;
  v58 = ((_BYTE)v89 + 82) & 7;
  v59 = (*(_BYTE *)(((unsigned __int64)&v89->die_ignore_trigger_bullet >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v58 >= *(_BYTE *)(((unsigned __int64)&v89->die_ignore_trigger_bullet >> 3) + 0x7FFF8000));
  if ( (_BYTE)v59 )
    __asan_report_load1(&v89->die_ignore_trigger_bullet, v58, v59);
  die_ignore_trigger_bullet = v89->die_ignore_trigger_bullet;
  v61 = *(_BYTE *)(((unsigned __int64)&this->die_ignore_trigger_bullet >> 3) + 0x7FFF8000);
  LOBYTE(v58) = v61 != 0;
  v62 = (v61 != 0) & (unsigned __int8)((((unsigned __int8)this + 82) & 7) >= v61);
  if ( (_BYTE)v62 )
    __asan_report_store1(&this->die_ignore_trigger_bullet, v58, v62);
  this->die_ignore_trigger_bullet = die_ignore_trigger_bullet;
  v63 = ((_BYTE)v89 + 83) & 7;
  v64 = (*(_BYTE *)(((unsigned __int64)&v89->mute_billboard >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v63 >= *(_BYTE *)(((unsigned __int64)&v89->mute_billboard >> 3) + 0x7FFF8000));
  if ( (_BYTE)v64 )
    __asan_report_load1(&v89->mute_billboard, v63, v64);
  mute_billboard = v89->mute_billboard;
  v66 = *(_BYTE *)(((unsigned __int64)&this->mute_billboard >> 3) + 0x7FFF8000);
  LOBYTE(v63) = v66 != 0;
  v67 = (v66 != 0) & (unsigned __int8)((((unsigned __int8)this + 83) & 7) >= v66);
  if ( (_BYTE)v67 )
    __asan_report_store1(&this->mute_billboard, v63, v67);
  this->mute_billboard = mute_billboard;
  v68 = ((_BYTE)v89 + 84) & 7;
  v69 = (*(_BYTE *)(((unsigned __int64)&v89->mute_push_collider >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v68 >= *(_BYTE *)(((unsigned __int64)&v89->mute_push_collider >> 3) + 0x7FFF8000));
  if ( (_BYTE)v69 )
    __asan_report_load1(&v89->mute_push_collider, v68, v69);
  mute_push_collider = v89->mute_push_collider;
  v71 = *(_BYTE *)(((unsigned __int64)&this->mute_push_collider >> 3) + 0x7FFF8000);
  LOBYTE(v68) = v71 != 0;
  v72 = (v71 != 0) & (unsigned __int8)((((unsigned __int8)this + 84) & 7) >= v71);
  if ( (_BYTE)v72 )
    __asan_report_store1(&this->mute_push_collider, v68, v72);
  this->mute_push_collider = mute_push_collider;
  v73 = ((_BYTE)v89 + 85) & 7;
  v74 = (*(_BYTE *)(((unsigned __int64)&v89->drop_weapon_immediately >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v73 >= *(_BYTE *)(((unsigned __int64)&v89->drop_weapon_immediately >> 3) + 0x7FFF8000));
  if ( (_BYTE)v74 )
    __asan_report_load1(&v89->drop_weapon_immediately, v73, v74);
  drop_weapon_immediately = v89->drop_weapon_immediately;
  v76 = *(_BYTE *)(((unsigned __int64)&this->drop_weapon_immediately >> 3) + 0x7FFF8000);
  LOBYTE(v73) = v76 != 0;
  v77 = (v76 != 0) & (unsigned __int8)((((unsigned __int8)this + 85) & 7) >= v76);
  if ( (_BYTE)v77 )
    __asan_report_store1(&this->drop_weapon_immediately, v73, v77);
  this->drop_weapon_immediately = drop_weapon_immediately;
  v78 = ((_BYTE)v89 + 86) & 7;
  v79 = (*(_BYTE *)(((unsigned __int64)&v89->mute_hdmesh >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v78 >= *(_BYTE *)(((unsigned __int64)&v89->mute_hdmesh >> 3) + 0x7FFF8000));
  if ( (_BYTE)v79 )
    __asan_report_load1(&v89->mute_hdmesh, v78, v79);
  mute_hdmesh = v89->mute_hdmesh;
  v81 = *(_BYTE *)(((unsigned __int64)&this->mute_hdmesh >> 3) + 0x7FFF8000);
  LOBYTE(v78) = v81 != 0;
  v82 = (v81 != 0) & (unsigned __int8)((((unsigned __int8)this + 86) & 7) >= v81);
  if ( (_BYTE)v82 )
    __asan_report_store1(&this->mute_hdmesh, v78, v82);
  this->mute_hdmesh = mute_hdmesh;
  v83 = ((_BYTE)v89 + 87) & 7;
  v84 = (*(_BYTE *)(((unsigned __int64)&v89->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v83 >= *(_BYTE *)(((unsigned __int64)&v89->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v84 )
    __asan_report_load1(&v89->is_json_loaded, v83, v84);
  is_json_loaded = v89->is_json_loaded;
  v86 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v83) = v86 != 0;
  v87 = (v86 != 0) & (unsigned __int8)((((unsigned __int8)this + 87) & 7) >= v86);
  if ( (_BYTE)v87 )
    __asan_report_store1(&this->is_json_loaded, v83, v87);
  this->is_json_loaded = is_json_loaded;
  return this;
};

// Line 597: range 000000000D76D3D2-000000000D76DA03
void __cdecl data::ConfigDie::ConfigDie(data::ConfigDie *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi
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
  __int64 v31; // rsi
  __int64 v32; // rdx

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this, v1, this);
  this->has_animator_die = 0;
  v2 = ((_BYTE)this + 1) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->mute_all_shader_die_eff >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->mute_all_shader_die_eff >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->mute_all_shader_die_eff, v2, v3);
  this->mute_all_shader_die_eff = 0;
  v4 = ((_BYTE)this + 2) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->fall_when_air_die >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->fall_when_air_die >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->fall_when_air_die, v4, v5);
  this->fall_when_air_die = 1;
  v6 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->die_end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->die_end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->die_end_time, v6);
  }
  this->die_end_time = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->die_force_disappear_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->die_force_disappear_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->die_force_disappear_time, v6);
  }
  this->die_force_disappear_time = 0.0099999998;
  std::string::basic_string(&this->die_disappear_effect);
  if ( *(_BYTE *)(((unsigned __int64)&this->die_disappear_effect_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->die_disappear_effect_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->die_disappear_effect_delay, v6);
  }
  this->die_disappear_effect_delay = 0.0;
  v7 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->die_shader_data >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->die_shader_data >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->die_shader_data, v7);
  }
  this->die_shader_data = None_9;
  if ( *(_BYTE *)(((unsigned __int64)&this->die_shader_enable_duration_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->die_shader_enable_duration_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->die_shader_enable_duration_time, v7);
  }
  this->die_shader_enable_duration_time = -1.0;
  v8 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->die_shader_disable_duration_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->die_shader_disable_duration_time >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->die_shader_disable_duration_time, v8);
  }
  this->die_shader_disable_duration_time = -1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->die_model_fade_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->die_model_fade_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->die_model_fade_delay, v8);
  }
  this->die_model_fade_delay = 0.0;
  v9 = ((_BYTE)this + 68) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->use_rag_doll >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->use_rag_doll >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->use_rag_doll, v9, v10);
  this->use_rag_doll = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->rag_doll_die_end_time_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rag_doll_die_end_time_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rag_doll_die_end_time_delay, v9);
  }
  this->rag_doll_die_end_time_delay = 0.0;
  v11 = ((_BYTE)this + 76) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->start_die_end_at_once >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->start_die_end_at_once >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->start_die_end_at_once, v11, v12);
  this->start_die_end_at_once = 0;
  v13 = ((_BYTE)this + 77) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->not_send_die_trigger >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&this->not_send_die_trigger >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->not_send_die_trigger, v13, v14);
  this->not_send_die_trigger = 0;
  v15 = ((_BYTE)this + 78) & 7;
  v16 = (*(_BYTE *)(((unsigned __int64)&this->ignore_element_die >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&this->ignore_element_die >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->ignore_element_die, v15, v16);
  this->ignore_element_die = 0;
  v17 = ((_BYTE)this + 79) & 7;
  v18 = (*(_BYTE *)(((unsigned __int64)&this->mute_hit_box >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v17 >= *(_BYTE *)(((unsigned __int64)&this->mute_hit_box >> 3) + 0x7FFF8000));
  if ( (_BYTE)v18 )
    __asan_report_store1(&this->mute_hit_box, v17, v18);
  this->mute_hit_box = 0;
  if ( *(char *)(((unsigned __int64)&this->die_deny_lock_on >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->die_deny_lock_on, v17, &this->die_deny_lock_on);
  this->die_deny_lock_on = 0;
  v19 = ((_BYTE)this + 81) & 7;
  v20 = (*(_BYTE *)(((unsigned __int64)&this->die_is_ghost_to_enemy >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v19 >= *(_BYTE *)(((unsigned __int64)&this->die_is_ghost_to_enemy >> 3) + 0x7FFF8000));
  if ( (_BYTE)v20 )
    __asan_report_store1(&this->die_is_ghost_to_enemy, v19, v20);
  this->die_is_ghost_to_enemy = 0;
  v21 = ((_BYTE)this + 82) & 7;
  v22 = (*(_BYTE *)(((unsigned __int64)&this->die_ignore_trigger_bullet >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v21 >= *(_BYTE *)(((unsigned __int64)&this->die_ignore_trigger_bullet >> 3) + 0x7FFF8000));
  if ( (_BYTE)v22 )
    __asan_report_store1(&this->die_ignore_trigger_bullet, v21, v22);
  this->die_ignore_trigger_bullet = 0;
  v23 = ((_BYTE)this + 83) & 7;
  v24 = (*(_BYTE *)(((unsigned __int64)&this->mute_billboard >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v23 >= *(_BYTE *)(((unsigned __int64)&this->mute_billboard >> 3) + 0x7FFF8000));
  if ( (_BYTE)v24 )
    __asan_report_store1(&this->mute_billboard, v23, v24);
  this->mute_billboard = 0;
  v25 = ((_BYTE)this + 84) & 7;
  v26 = (*(_BYTE *)(((unsigned __int64)&this->mute_push_collider >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v25 >= *(_BYTE *)(((unsigned __int64)&this->mute_push_collider >> 3) + 0x7FFF8000));
  if ( (_BYTE)v26 )
    __asan_report_store1(&this->mute_push_collider, v25, v26);
  this->mute_push_collider = 0;
  v27 = ((_BYTE)this + 85) & 7;
  v28 = (*(_BYTE *)(((unsigned __int64)&this->drop_weapon_immediately >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v27 >= *(_BYTE *)(((unsigned __int64)&this->drop_weapon_immediately >> 3) + 0x7FFF8000));
  if ( (_BYTE)v28 )
    __asan_report_store1(&this->drop_weapon_immediately, v27, v28);
  this->drop_weapon_immediately = 1;
  v29 = ((_BYTE)this + 86) & 7;
  v30 = (*(_BYTE *)(((unsigned __int64)&this->mute_hdmesh >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v29 >= *(_BYTE *)(((unsigned __int64)&this->mute_hdmesh >> 3) + 0x7FFF8000));
  if ( (_BYTE)v30 )
    __asan_report_store1(&this->mute_hdmesh, v29, v30);
  this->mute_hdmesh = 1;
  v31 = ((_BYTE)this + 87) & 7;
  v32 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v31 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v32 )
    __asan_report_store1(&this->is_json_loaded, v31, v32);
  this->is_json_loaded = 0;
};

// Line 597: range 000000000DD102AA-000000000DD10EA6
void __cdecl data::ConfigDie::ConfigDie(data::ConfigDie *const this, const data::ConfigDie *a2)
{
  bool has_animator_die; // cl
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool mute_all_shader_die_eff; // cl
  char v7; // dl
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  bool fall_when_air_die; // cl
  char v12; // dl
  __int64 v13; // rdx
  float die_end_time; // xmm0_4
  __int64 v15; // rsi
  float die_force_disappear_time; // xmm0_4
  float die_disappear_effect_delay; // xmm0_4
  __int64 v18; // rsi
  data::E_ShaderData die_shader_data; // ecx
  char v20; // dl
  float die_shader_enable_duration_time; // xmm0_4
  float die_shader_disable_duration_time; // xmm0_4
  __int64 v23; // rsi
  float die_model_fade_delay; // xmm0_4
  __int64 v25; // rsi
  __int64 v26; // rdx
  bool use_rag_doll; // cl
  char v28; // dl
  __int64 v29; // rdx
  float rag_doll_die_end_time_delay; // xmm0_4
  __int64 v31; // rsi
  __int64 v32; // rdx
  bool start_die_end_at_once; // cl
  char v34; // dl
  __int64 v35; // rdx
  __int64 v36; // rsi
  __int64 v37; // rdx
  bool not_send_die_trigger; // cl
  char v39; // dl
  __int64 v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // rdx
  bool ignore_element_die; // cl
  char v44; // dl
  __int64 v45; // rdx
  __int64 v46; // rsi
  __int64 v47; // rdx
  bool mute_hit_box; // cl
  char v49; // dl
  __int64 v50; // rdx
  bool die_deny_lock_on; // cl
  char v52; // al
  __int64 v53; // rsi
  __int64 v54; // rdx
  bool die_is_ghost_to_enemy; // cl
  char v56; // dl
  __int64 v57; // rdx
  __int64 v58; // rsi
  __int64 v59; // rdx
  bool die_ignore_trigger_bullet; // cl
  char v61; // dl
  __int64 v62; // rdx
  __int64 v63; // rsi
  __int64 v64; // rdx
  bool mute_billboard; // cl
  char v66; // dl
  __int64 v67; // rdx
  __int64 v68; // rsi
  __int64 v69; // rdx
  bool mute_push_collider; // cl
  char v71; // dl
  __int64 v72; // rdx
  __int64 v73; // rsi
  __int64 v74; // rdx
  bool drop_weapon_immediately; // cl
  char v76; // dl
  __int64 v77; // rdx
  __int64 v78; // rsi
  __int64 v79; // rdx
  bool mute_hdmesh; // cl
  char v81; // dl
  __int64 v82; // rdx
  __int64 v83; // rsi
  __int64 v84; // rdx
  bool is_json_loaded; // cl
  char v86; // dl
  __int64 v87; // rdx
  const data::ConfigDie *v88; // [rsp+0h] [rbp-10h]

  v88 = a2;
  if ( *(char *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(a2, a2, a2);
  has_animator_die = a2->has_animator_die;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(this, a2, this);
  }
  this->has_animator_die = has_animator_die;
  v4 = ((_BYTE)v88 + 1) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&v88->mute_all_shader_die_eff >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&v88->mute_all_shader_die_eff >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&v88->mute_all_shader_die_eff, v4, v5);
  mute_all_shader_die_eff = v88->mute_all_shader_die_eff;
  v7 = *(_BYTE *)(((unsigned __int64)&this->mute_all_shader_die_eff >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 1) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->mute_all_shader_die_eff, v4, v8);
  this->mute_all_shader_die_eff = mute_all_shader_die_eff;
  v9 = ((_BYTE)v88 + 2) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&v88->fall_when_air_die >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&v88->fall_when_air_die >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_load1(&v88->fall_when_air_die, v9, v10);
  fall_when_air_die = v88->fall_when_air_die;
  v12 = *(_BYTE *)(((unsigned __int64)&this->fall_when_air_die >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((((unsigned __int8)this + 2) & 7) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->fall_when_air_die, v9, v13);
  this->fall_when_air_die = fall_when_air_die;
  if ( *(_BYTE *)(((unsigned __int64)&v88->die_end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v88 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v88->die_end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v88->die_end_time);
  }
  die_end_time = v88->die_end_time;
  v15 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->die_end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->die_end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->die_end_time, v15);
  }
  this->die_end_time = die_end_time;
  if ( *(_BYTE *)(((unsigned __int64)&v88->die_force_disappear_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v88->die_force_disappear_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v88->die_force_disappear_time);
  }
  die_force_disappear_time = v88->die_force_disappear_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->die_force_disappear_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->die_force_disappear_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->die_force_disappear_time, v15);
  }
  this->die_force_disappear_time = die_force_disappear_time;
  std::string::basic_string(&this->die_disappear_effect, &v88->die_disappear_effect);
  if ( *(_BYTE *)(((unsigned __int64)&v88->die_disappear_effect_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v88->die_disappear_effect_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v88->die_disappear_effect_delay);
  }
  die_disappear_effect_delay = v88->die_disappear_effect_delay;
  if ( *(_BYTE *)(((unsigned __int64)&this->die_disappear_effect_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->die_disappear_effect_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->die_disappear_effect_delay, &v88->die_disappear_effect);
  }
  this->die_disappear_effect_delay = die_disappear_effect_delay;
  v18 = (((_BYTE)v88 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v88->die_shader_data >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v88 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v88->die_shader_data >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v88->die_shader_data);
  }
  die_shader_data = v88->die_shader_data;
  v20 = *(_BYTE *)(((unsigned __int64)&this->die_shader_data >> 3) + 0x7FFF8000);
  LOBYTE(v18) = v20 != 0;
  if ( v20 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v20 )
    __asan_report_store4(&this->die_shader_data, v18);
  this->die_shader_data = die_shader_data;
  if ( *(_BYTE *)(((unsigned __int64)&v88->die_shader_enable_duration_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v88->die_shader_enable_duration_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v88->die_shader_enable_duration_time);
  }
  die_shader_enable_duration_time = v88->die_shader_enable_duration_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->die_shader_enable_duration_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->die_shader_enable_duration_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->die_shader_enable_duration_time, v18);
  }
  this->die_shader_enable_duration_time = die_shader_enable_duration_time;
  if ( *(_BYTE *)(((unsigned __int64)&v88->die_shader_disable_duration_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v88 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v88->die_shader_disable_duration_time >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v88->die_shader_disable_duration_time);
  }
  die_shader_disable_duration_time = v88->die_shader_disable_duration_time;
  v23 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->die_shader_disable_duration_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->die_shader_disable_duration_time >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->die_shader_disable_duration_time, v23);
  }
  this->die_shader_disable_duration_time = die_shader_disable_duration_time;
  if ( *(_BYTE *)(((unsigned __int64)&v88->die_model_fade_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v88->die_model_fade_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v88->die_model_fade_delay);
  }
  die_model_fade_delay = v88->die_model_fade_delay;
  if ( *(_BYTE *)(((unsigned __int64)&this->die_model_fade_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->die_model_fade_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->die_model_fade_delay, v23);
  }
  this->die_model_fade_delay = die_model_fade_delay;
  v25 = ((_BYTE)v88 + 68) & 7;
  v26 = (*(_BYTE *)(((unsigned __int64)&v88->use_rag_doll >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v25 >= *(_BYTE *)(((unsigned __int64)&v88->use_rag_doll >> 3) + 0x7FFF8000));
  if ( (_BYTE)v26 )
    __asan_report_load1(&v88->use_rag_doll, v25, v26);
  use_rag_doll = v88->use_rag_doll;
  v28 = *(_BYTE *)(((unsigned __int64)&this->use_rag_doll >> 3) + 0x7FFF8000);
  LOBYTE(v25) = v28 != 0;
  v29 = (v28 != 0) & (unsigned __int8)((((unsigned __int8)this + 68) & 7) >= v28);
  if ( (_BYTE)v29 )
    __asan_report_store1(&this->use_rag_doll, v25, v29);
  this->use_rag_doll = use_rag_doll;
  if ( *(_BYTE *)(((unsigned __int64)&v88->rag_doll_die_end_time_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v88->rag_doll_die_end_time_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v88->rag_doll_die_end_time_delay);
  }
  rag_doll_die_end_time_delay = v88->rag_doll_die_end_time_delay;
  if ( *(_BYTE *)(((unsigned __int64)&this->rag_doll_die_end_time_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rag_doll_die_end_time_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rag_doll_die_end_time_delay, v25);
  }
  this->rag_doll_die_end_time_delay = rag_doll_die_end_time_delay;
  v31 = ((_BYTE)v88 + 76) & 7;
  v32 = (*(_BYTE *)(((unsigned __int64)&v88->start_die_end_at_once >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v31 >= *(_BYTE *)(((unsigned __int64)&v88->start_die_end_at_once >> 3) + 0x7FFF8000));
  if ( (_BYTE)v32 )
    __asan_report_load1(&v88->start_die_end_at_once, v31, v32);
  start_die_end_at_once = v88->start_die_end_at_once;
  v34 = *(_BYTE *)(((unsigned __int64)&this->start_die_end_at_once >> 3) + 0x7FFF8000);
  LOBYTE(v31) = v34 != 0;
  v35 = (v34 != 0) & (unsigned __int8)((((unsigned __int8)this + 76) & 7) >= v34);
  if ( (_BYTE)v35 )
    __asan_report_store1(&this->start_die_end_at_once, v31, v35);
  this->start_die_end_at_once = start_die_end_at_once;
  v36 = ((_BYTE)v88 + 77) & 7;
  v37 = (*(_BYTE *)(((unsigned __int64)&v88->not_send_die_trigger >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v36 >= *(_BYTE *)(((unsigned __int64)&v88->not_send_die_trigger >> 3) + 0x7FFF8000));
  if ( (_BYTE)v37 )
    __asan_report_load1(&v88->not_send_die_trigger, v36, v37);
  not_send_die_trigger = v88->not_send_die_trigger;
  v39 = *(_BYTE *)(((unsigned __int64)&this->not_send_die_trigger >> 3) + 0x7FFF8000);
  LOBYTE(v36) = v39 != 0;
  v40 = (v39 != 0) & (unsigned __int8)((((unsigned __int8)this + 77) & 7) >= v39);
  if ( (_BYTE)v40 )
    __asan_report_store1(&this->not_send_die_trigger, v36, v40);
  this->not_send_die_trigger = not_send_die_trigger;
  v41 = ((_BYTE)v88 + 78) & 7;
  v42 = (*(_BYTE *)(((unsigned __int64)&v88->ignore_element_die >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v41 >= *(_BYTE *)(((unsigned __int64)&v88->ignore_element_die >> 3) + 0x7FFF8000));
  if ( (_BYTE)v42 )
    __asan_report_load1(&v88->ignore_element_die, v41, v42);
  ignore_element_die = v88->ignore_element_die;
  v44 = *(_BYTE *)(((unsigned __int64)&this->ignore_element_die >> 3) + 0x7FFF8000);
  LOBYTE(v41) = v44 != 0;
  v45 = (v44 != 0) & (unsigned __int8)((((unsigned __int8)this + 78) & 7) >= v44);
  if ( (_BYTE)v45 )
    __asan_report_store1(&this->ignore_element_die, v41, v45);
  this->ignore_element_die = ignore_element_die;
  v46 = ((_BYTE)v88 + 79) & 7;
  v47 = (*(_BYTE *)(((unsigned __int64)&v88->mute_hit_box >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v46 >= *(_BYTE *)(((unsigned __int64)&v88->mute_hit_box >> 3) + 0x7FFF8000));
  if ( (_BYTE)v47 )
    __asan_report_load1(&v88->mute_hit_box, v46, v47);
  mute_hit_box = v88->mute_hit_box;
  v49 = *(_BYTE *)(((unsigned __int64)&this->mute_hit_box >> 3) + 0x7FFF8000);
  LOBYTE(v46) = v49 != 0;
  v50 = (v49 != 0) & (unsigned __int8)((((unsigned __int8)this + 79) & 7) >= v49);
  if ( (_BYTE)v50 )
    __asan_report_store1(&this->mute_hit_box, v46, v50);
  this->mute_hit_box = mute_hit_box;
  if ( *(char *)(((unsigned __int64)&v88->die_deny_lock_on >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v88->die_deny_lock_on, v46, &v88->die_deny_lock_on);
  die_deny_lock_on = v88->die_deny_lock_on;
  v52 = *(_BYTE *)(((unsigned __int64)&this->die_deny_lock_on >> 3) + 0x7FFF8000);
  if ( v52 < 0 )
  {
    LOBYTE(v46) = v52 != 0;
    __asan_report_store1(&this->die_deny_lock_on, v46, &this->die_deny_lock_on);
  }
  this->die_deny_lock_on = die_deny_lock_on;
  v53 = ((_BYTE)v88 + 81) & 7;
  v54 = (*(_BYTE *)(((unsigned __int64)&v88->die_is_ghost_to_enemy >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v53 >= *(_BYTE *)(((unsigned __int64)&v88->die_is_ghost_to_enemy >> 3) + 0x7FFF8000));
  if ( (_BYTE)v54 )
    __asan_report_load1(&v88->die_is_ghost_to_enemy, v53, v54);
  die_is_ghost_to_enemy = v88->die_is_ghost_to_enemy;
  v56 = *(_BYTE *)(((unsigned __int64)&this->die_is_ghost_to_enemy >> 3) + 0x7FFF8000);
  LOBYTE(v53) = v56 != 0;
  v57 = (v56 != 0) & (unsigned __int8)((((unsigned __int8)this + 81) & 7) >= v56);
  if ( (_BYTE)v57 )
    __asan_report_store1(&this->die_is_ghost_to_enemy, v53, v57);
  this->die_is_ghost_to_enemy = die_is_ghost_to_enemy;
  v58 = ((_BYTE)v88 + 82) & 7;
  v59 = (*(_BYTE *)(((unsigned __int64)&v88->die_ignore_trigger_bullet >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v58 >= *(_BYTE *)(((unsigned __int64)&v88->die_ignore_trigger_bullet >> 3) + 0x7FFF8000));
  if ( (_BYTE)v59 )
    __asan_report_load1(&v88->die_ignore_trigger_bullet, v58, v59);
  die_ignore_trigger_bullet = v88->die_ignore_trigger_bullet;
  v61 = *(_BYTE *)(((unsigned __int64)&this->die_ignore_trigger_bullet >> 3) + 0x7FFF8000);
  LOBYTE(v58) = v61 != 0;
  v62 = (v61 != 0) & (unsigned __int8)((((unsigned __int8)this + 82) & 7) >= v61);
  if ( (_BYTE)v62 )
    __asan_report_store1(&this->die_ignore_trigger_bullet, v58, v62);
  this->die_ignore_trigger_bullet = die_ignore_trigger_bullet;
  v63 = ((_BYTE)v88 + 83) & 7;
  v64 = (*(_BYTE *)(((unsigned __int64)&v88->mute_billboard >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v63 >= *(_BYTE *)(((unsigned __int64)&v88->mute_billboard >> 3) + 0x7FFF8000));
  if ( (_BYTE)v64 )
    __asan_report_load1(&v88->mute_billboard, v63, v64);
  mute_billboard = v88->mute_billboard;
  v66 = *(_BYTE *)(((unsigned __int64)&this->mute_billboard >> 3) + 0x7FFF8000);
  LOBYTE(v63) = v66 != 0;
  v67 = (v66 != 0) & (unsigned __int8)((((unsigned __int8)this + 83) & 7) >= v66);
  if ( (_BYTE)v67 )
    __asan_report_store1(&this->mute_billboard, v63, v67);
  this->mute_billboard = mute_billboard;
  v68 = ((_BYTE)v88 + 84) & 7;
  v69 = (*(_BYTE *)(((unsigned __int64)&v88->mute_push_collider >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v68 >= *(_BYTE *)(((unsigned __int64)&v88->mute_push_collider >> 3) + 0x7FFF8000));
  if ( (_BYTE)v69 )
    __asan_report_load1(&v88->mute_push_collider, v68, v69);
  mute_push_collider = v88->mute_push_collider;
  v71 = *(_BYTE *)(((unsigned __int64)&this->mute_push_collider >> 3) + 0x7FFF8000);
  LOBYTE(v68) = v71 != 0;
  v72 = (v71 != 0) & (unsigned __int8)((((unsigned __int8)this + 84) & 7) >= v71);
  if ( (_BYTE)v72 )
    __asan_report_store1(&this->mute_push_collider, v68, v72);
  this->mute_push_collider = mute_push_collider;
  v73 = ((_BYTE)v88 + 85) & 7;
  v74 = (*(_BYTE *)(((unsigned __int64)&v88->drop_weapon_immediately >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v73 >= *(_BYTE *)(((unsigned __int64)&v88->drop_weapon_immediately >> 3) + 0x7FFF8000));
  if ( (_BYTE)v74 )
    __asan_report_load1(&v88->drop_weapon_immediately, v73, v74);
  drop_weapon_immediately = v88->drop_weapon_immediately;
  v76 = *(_BYTE *)(((unsigned __int64)&this->drop_weapon_immediately >> 3) + 0x7FFF8000);
  LOBYTE(v73) = v76 != 0;
  v77 = (v76 != 0) & (unsigned __int8)((((unsigned __int8)this + 85) & 7) >= v76);
  if ( (_BYTE)v77 )
    __asan_report_store1(&this->drop_weapon_immediately, v73, v77);
  this->drop_weapon_immediately = drop_weapon_immediately;
  v78 = ((_BYTE)v88 + 86) & 7;
  v79 = (*(_BYTE *)(((unsigned __int64)&v88->mute_hdmesh >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v78 >= *(_BYTE *)(((unsigned __int64)&v88->mute_hdmesh >> 3) + 0x7FFF8000));
  if ( (_BYTE)v79 )
    __asan_report_load1(&v88->mute_hdmesh, v78, v79);
  mute_hdmesh = v88->mute_hdmesh;
  v81 = *(_BYTE *)(((unsigned __int64)&this->mute_hdmesh >> 3) + 0x7FFF8000);
  LOBYTE(v78) = v81 != 0;
  v82 = (v81 != 0) & (unsigned __int8)((((unsigned __int8)this + 86) & 7) >= v81);
  if ( (_BYTE)v82 )
    __asan_report_store1(&this->mute_hdmesh, v78, v82);
  this->mute_hdmesh = mute_hdmesh;
  v83 = ((_BYTE)v88 + 87) & 7;
  v84 = (*(_BYTE *)(((unsigned __int64)&v88->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v83 >= *(_BYTE *)(((unsigned __int64)&v88->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v84 )
    __asan_report_load1(&v88->is_json_loaded, v83, v84);
  is_json_loaded = v88->is_json_loaded;
  v86 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v83) = v86 != 0;
  v87 = (v86 != 0) & (unsigned __int8)((((unsigned __int8)this + 87) & 7) >= v86);
  if ( (_BYTE)v87 )
    __asan_report_store1(&this->is_json_loaded, v83, v87);
  this->is_json_loaded = is_json_loaded;
};

// Line 597: range 000000000D76DA04-000000000D76DA22
void __cdecl data::ConfigDie::~ConfigDie(data::ConfigDie *const this)
{
  std::string::~string(&this->die_disappear_effect);
};

// Line 643: range 000000000F940C84-000000000F940F94
data::ConfigSummonTag *__cdecl data::ConfigSummonTag::operator=(
        data::ConfigSummonTag *const this,
        const data::ConfigSummonTag *a2)
{
  uint32_t summon_tag; // ecx
  char v3; // al
  std::string *p_name; // rsi
  int32_t max_num; // ecx
  char v6; // al
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool copy_owner_threat_list; // cl
  char v10; // dl
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx
  bool use_owner_defend_area; // cl
  char v15; // dl
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdx
  bool use_summon_threat_list; // cl
  char v20; // dl
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdx
  bool is_json_loaded; // cl
  char v25; // dl
  __int64 v26; // rdx
  const data::ConfigSummonTag *v28; // [rsp+0h] [rbp-10h]

  v28 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  summon_tag = a2->summon_tag;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->summon_tag = summon_tag;
  p_name = &v28->name;
  std::string::operator=(&this->name, &v28->name);
  if ( *(_BYTE *)(((unsigned __int64)&v28->max_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v28->max_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v28->max_num);
  }
  max_num = v28->max_num;
  v6 = *(_BYTE *)(((unsigned __int64)&this->max_num >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_name) = v6 != 0;
    __asan_report_store4(&this->max_num, p_name);
  }
  this->max_num = max_num;
  v7 = ((_BYTE)v28 + 44) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&v28->copy_owner_threat_list >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&v28->copy_owner_threat_list >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&v28->copy_owner_threat_list, v7, v8);
  copy_owner_threat_list = v28->copy_owner_threat_list;
  v10 = *(_BYTE *)(((unsigned __int64)&this->copy_owner_threat_list >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->copy_owner_threat_list, v7, v11);
  this->copy_owner_threat_list = copy_owner_threat_list;
  v12 = ((_BYTE)v28 + 45) & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)&v28->use_owner_defend_area >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&v28->use_owner_defend_area >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_load1(&v28->use_owner_defend_area, v12, v13);
  use_owner_defend_area = v28->use_owner_defend_area;
  v15 = *(_BYTE *)(((unsigned __int64)&this->use_owner_defend_area >> 3) + 0x7FFF8000);
  LOBYTE(v12) = v15 != 0;
  v16 = (v15 != 0) & (unsigned __int8)((((unsigned __int8)this + 45) & 7) >= v15);
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->use_owner_defend_area, v12, v16);
  this->use_owner_defend_area = use_owner_defend_area;
  v17 = ((_BYTE)v28 + 46) & 7;
  v18 = (*(_BYTE *)(((unsigned __int64)&v28->use_summon_threat_list >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v17 >= *(_BYTE *)(((unsigned __int64)&v28->use_summon_threat_list >> 3) + 0x7FFF8000));
  if ( (_BYTE)v18 )
    __asan_report_load1(&v28->use_summon_threat_list, v17, v18);
  use_summon_threat_list = v28->use_summon_threat_list;
  v20 = *(_BYTE *)(((unsigned __int64)&this->use_summon_threat_list >> 3) + 0x7FFF8000);
  LOBYTE(v17) = v20 != 0;
  v21 = (v20 != 0) & (unsigned __int8)((((unsigned __int8)this + 46) & 7) >= v20);
  if ( (_BYTE)v21 )
    __asan_report_store1(&this->use_summon_threat_list, v17, v21);
  this->use_summon_threat_list = use_summon_threat_list;
  v22 = ((_BYTE)v28 + 47) & 7;
  v23 = (*(_BYTE *)(((unsigned __int64)&v28->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v22 >= *(_BYTE *)(((unsigned __int64)&v28->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v23 )
    __asan_report_load1(&v28->is_json_loaded, v22, v23);
  is_json_loaded = v28->is_json_loaded;
  v25 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v22) = v25 != 0;
  v26 = (v25 != 0) & (unsigned __int8)((((unsigned __int8)this + 47) & 7) >= v25);
  if ( (_BYTE)v26 )
    __asan_report_store1(&this->is_json_loaded, v22, v26);
  this->is_json_loaded = is_json_loaded;
  return this;
};

// Line 643: range 000000000E6C8ECC-000000000E6C9061
void __cdecl data::ConfigSummonTag::ConfigSummonTag(data::ConfigSummonTag *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->summon_tag = 0;
  std::string::basic_string(&this->name);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_num, v1);
  }
  this->max_num = 1;
  v2 = ((_BYTE)this + 44) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->copy_owner_threat_list >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->copy_owner_threat_list >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->copy_owner_threat_list, v2, v3);
  this->copy_owner_threat_list = 0;
  v4 = ((_BYTE)this + 45) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->use_owner_defend_area >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->use_owner_defend_area >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->use_owner_defend_area, v4, v5);
  this->use_owner_defend_area = 0;
  v6 = ((_BYTE)this + 46) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->use_summon_threat_list >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->use_summon_threat_list >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->use_summon_threat_list, v6, v7);
  this->use_summon_threat_list = 0;
  v8 = ((_BYTE)this + 47) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_json_loaded, v8, v9);
  this->is_json_loaded = 0;
};

// Line 643: range 000000000E863C3C-000000000E863F49
void __cdecl data::ConfigSummonTag::ConfigSummonTag(data::ConfigSummonTag *const this, data::ConfigSummonTag *a2)
{
  uint32_t summon_tag; // ecx
  char v3; // al
  std::string *p_name; // rsi
  int32_t max_num; // ecx
  char v6; // al
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool copy_owner_threat_list; // cl
  char v10; // dl
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx
  bool use_owner_defend_area; // cl
  char v15; // dl
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdx
  bool use_summon_threat_list; // cl
  char v20; // dl
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdx
  bool is_json_loaded; // cl
  char v25; // dl
  __int64 v26; // rdx
  data::ConfigSummonTag *v27; // [rsp+0h] [rbp-10h]

  v27 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  summon_tag = a2->summon_tag;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->summon_tag = summon_tag;
  p_name = &v27->name;
  std::string::basic_string(&this->name, &v27->name);
  if ( *(_BYTE *)(((unsigned __int64)&v27->max_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v27->max_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v27->max_num);
  }
  max_num = v27->max_num;
  v6 = *(_BYTE *)(((unsigned __int64)&this->max_num >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_name) = v6 != 0;
    __asan_report_store4(&this->max_num, p_name);
  }
  this->max_num = max_num;
  v7 = ((_BYTE)v27 + 44) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&v27->copy_owner_threat_list >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&v27->copy_owner_threat_list >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&v27->copy_owner_threat_list, v7, v8);
  copy_owner_threat_list = v27->copy_owner_threat_list;
  v10 = *(_BYTE *)(((unsigned __int64)&this->copy_owner_threat_list >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->copy_owner_threat_list, v7, v11);
  this->copy_owner_threat_list = copy_owner_threat_list;
  v12 = ((_BYTE)v27 + 45) & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)&v27->use_owner_defend_area >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&v27->use_owner_defend_area >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_load1(&v27->use_owner_defend_area, v12, v13);
  use_owner_defend_area = v27->use_owner_defend_area;
  v15 = *(_BYTE *)(((unsigned __int64)&this->use_owner_defend_area >> 3) + 0x7FFF8000);
  LOBYTE(v12) = v15 != 0;
  v16 = (v15 != 0) & (unsigned __int8)((((unsigned __int8)this + 45) & 7) >= v15);
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->use_owner_defend_area, v12, v16);
  this->use_owner_defend_area = use_owner_defend_area;
  v17 = ((_BYTE)v27 + 46) & 7;
  v18 = (*(_BYTE *)(((unsigned __int64)&v27->use_summon_threat_list >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v17 >= *(_BYTE *)(((unsigned __int64)&v27->use_summon_threat_list >> 3) + 0x7FFF8000));
  if ( (_BYTE)v18 )
    __asan_report_load1(&v27->use_summon_threat_list, v17, v18);
  use_summon_threat_list = v27->use_summon_threat_list;
  v20 = *(_BYTE *)(((unsigned __int64)&this->use_summon_threat_list >> 3) + 0x7FFF8000);
  LOBYTE(v17) = v20 != 0;
  v21 = (v20 != 0) & (unsigned __int8)((((unsigned __int8)this + 46) & 7) >= v20);
  if ( (_BYTE)v21 )
    __asan_report_store1(&this->use_summon_threat_list, v17, v21);
  this->use_summon_threat_list = use_summon_threat_list;
  v22 = ((_BYTE)v27 + 47) & 7;
  v23 = (*(_BYTE *)(((unsigned __int64)&v27->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v22 >= *(_BYTE *)(((unsigned __int64)&v27->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v23 )
    __asan_report_load1(&v27->is_json_loaded, v22, v23);
  is_json_loaded = v27->is_json_loaded;
  v25 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v22) = v25 != 0;
  v26 = (v25 != 0) & (unsigned __int8)((((unsigned __int8)this + 47) & 7) >= v25);
  if ( (_BYTE)v26 )
    __asan_report_store1(&this->is_json_loaded, v22, v26);
  this->is_json_loaded = is_json_loaded;
};

// Line 643: range 000000000DAF44FC-000000000DAF451A
void __cdecl data::ConfigSummonTag::~ConfigSummonTag(data::ConfigSummonTag *const this)
{
  std::string::~string(&this->name);
};

// Line 676: range 000000000F78429C-000000000F78433A
data::ConfigSummon *__cdecl data::ConfigSummon::operator=(data::ConfigSummon *const this, const data::ConfigSummon *a2)
{
  bool is_json_loaded; // cl
  char v3; // al

  std::vector<data::ConfigSummonTag>::operator=(&this->summon_tags, &a2->summon_tags);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, a2, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v3 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(&this->is_json_loaded, a2, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
  return this;
};

// Line 676: range 000000000D76DC26-000000000D76DC7B
void __cdecl data::ConfigSummon::ConfigSummon(data::ConfigSummon *const this)
{
  __int64 v1; // rsi

  std::vector<data::ConfigSummonTag>::vector(&this->summon_tags);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 676: range 000000000DD10ECE-000000000DD10F69
void __cdecl data::ConfigSummon::ConfigSummon(data::ConfigSummon *const this, const data::ConfigSummon *a2)
{
  bool is_json_loaded; // cl
  char v3; // al

  std::vector<data::ConfigSummonTag>::vector(&this->summon_tags, &a2->summon_tags);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, a2, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v3 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(&this->is_json_loaded, a2, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 676: range 000000000D76DC7C-000000000D76DC96
void __cdecl data::ConfigSummon::~ConfigSummon(data::ConfigSummon *const this)
{
  std::vector<data::ConfigSummonTag>::~vector(&this->summon_tags);
};

// Line 699: range 000000000D76DC98-000000000D76DD69
void __cdecl data::ConfigSimulatePhysics::ConfigSimulatePhysics(data::ConfigSimulatePhysics *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  v1 = (unsigned __int8)this & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(this, v1, v2);
  this->enable = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->radius, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->radius = 0.0;
  v3 = ((_BYTE)this + 8) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 723: range 000000000F78433C-000000000F78457F
data::ConfigCombat *__cdecl data::ConfigCombat::operator=(data::ConfigCombat *const this, const data::ConfigCombat *a2)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  bool is_json_loaded; // cl
  char v5; // dl
  __int64 v6; // rdx

  data::ConfigCombatProperty::operator=(&this->property, &a2->property);
  data::ConfigCombatBeHit::operator=(&this->be_hit, &a2->be_hit);
  data::ConfigCombatLock::operator=(&this->combat_lock, &a2->combat_lock);
  data::ConfigDie::operator=(&this->die, &a2->die);
  std::unordered_map<std::string,data::ConfigAttackEvent>::operator=(&this->anim_events, &a2->anim_events);
  data::ConfigSummon::operator=(&this->summon, &a2->summon);
  if ( *(char *)(((unsigned __int64)&this->simulate_physics >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->simulate_physics.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 85) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->simulate_physics.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->simulate_physics, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->simulate_physics >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&a2->simulate_physics.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 85) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->simulate_physics.is_json_loaded + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->simulate_physics, 12LL);
  }
  this->simulate_physics = a2->simulate_physics;
  v2 = ((_BYTE)a2 - 84) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_load1(&a2->is_json_loaded, v2, v3);
  is_json_loaded = a2->is_json_loaded;
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v2) = v5 != 0;
  v6 = (v5 != 0) & (unsigned __int8)((((unsigned __int8)this - 84) & 7) >= v5);
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_json_loaded, v2, v6);
  this->is_json_loaded = is_json_loaded;
  return this;
};

// Line 723: range 000000000D76DD6A-000000000D76DE6B
void __cdecl data::ConfigCombat::ConfigCombat(data::ConfigCombat *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  data::ConfigCombatProperty::ConfigCombatProperty(&this->property);
  data::ConfigCombatBeHit::ConfigCombatBeHit(&this->be_hit);
  data::ConfigCombatLock::ConfigCombatLock(&this->combat_lock);
  data::ConfigDie::ConfigDie(&this->die);
  std::unordered_map<std::string,data::ConfigAttackEvent>::unordered_map(&this->anim_events);
  data::ConfigSummon::ConfigSummon(&this->summon);
  data::ConfigSimulatePhysics::ConfigSimulatePhysics(&this->simulate_physics);
  v1 = ((_BYTE)this - 84) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 723: range 000000000DD10F6A-000000000DD11227
void __cdecl data::ConfigCombat::ConfigCombat(data::ConfigCombat *const this, const data::ConfigCombat *a2)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  bool is_json_loaded; // cl
  char v5; // dl
  __int64 v6; // rdx

  data::ConfigCombatProperty::ConfigCombatProperty(&this->property, &a2->property);
  data::ConfigCombatBeHit::ConfigCombatBeHit(&this->be_hit, &a2->be_hit);
  data::ConfigCombatLock::ConfigCombatLock(&this->combat_lock, &a2->combat_lock);
  data::ConfigDie::ConfigDie(&this->die, &a2->die);
  std::unordered_map<std::string,data::ConfigAttackEvent>::unordered_map(&this->anim_events, &a2->anim_events);
  data::ConfigSummon::ConfigSummon(&this->summon, &a2->summon);
  if ( *(char *)(((unsigned __int64)&this->simulate_physics >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->simulate_physics.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 85) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->simulate_physics.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->simulate_physics, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->simulate_physics >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&a2->simulate_physics.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 85) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->simulate_physics.is_json_loaded + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->simulate_physics, 12LL);
  }
  this->simulate_physics = a2->simulate_physics;
  v2 = ((_BYTE)a2 - 84) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_load1(&a2->is_json_loaded, v2, v3);
  is_json_loaded = a2->is_json_loaded;
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v2) = v5 != 0;
  v6 = (v5 != 0) & (unsigned __int8)((((unsigned __int8)this - 84) & 7) >= v5);
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_json_loaded, v2, v6);
  this->is_json_loaded = is_json_loaded;
};

// Line 723: range 000000000D76DE6C-000000000D76DEDE
void __cdecl data::ConfigCombat::~ConfigCombat(data::ConfigCombat *const this)
{
  data::ConfigSummon::~ConfigSummon(&this->summon);
  std::unordered_map<std::string,data::ConfigAttackEvent>::~unordered_map(&this->anim_events);
  data::ConfigDie::~ConfigDie(&this->die);
  data::ConfigCombatLock::~ConfigCombatLock(&this->combat_lock);
  data::ConfigCombatBeHit::~ConfigCombatBeHit(&this->be_hit);
  data::ConfigCombatProperty::~ConfigCombatProperty(&this->property);
};

// Line 752: range 000000000ED327F0-000000000ED32D46
void __cdecl data::ConfigSpecialCamera::ConfigSpecialCamera(data::ConfigSpecialCamera *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rdx

  std::enable_shared_from_this<data::ConfigSpecialCamera>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigSpecialCamera>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSpecialCamera + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigSpecialCamera = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->priority, v1);
  }
  this->priority = 0.0;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->enter_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->enter_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->enter_radius, v3);
  }
  this->enter_radius = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->exit_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->exit_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->exit_radius, v3);
  }
  this->exit_radius = 0.0;
  v4 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->height_adjust >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->height_adjust >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->height_adjust, v4);
  }
  this->height_adjust = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fov >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fov >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fov, v4);
  }
  this->fov = 0.0;
  v5 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->zoom >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->zoom >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->zoom, v5);
  }
  this->zoom = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->spherical_y >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->spherical_y >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->spherical_y, v5);
  }
  this->spherical_y = 0.0;
  v6 = ((_BYTE)this + 52) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->lock_spherical_y >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->lock_spherical_y >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->lock_spherical_y, v6, v7);
  this->lock_spherical_y = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->spherical_yup >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->spherical_yup >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->spherical_yup, v6);
  }
  this->spherical_yup = 0.0;
  v8 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->spherical_ydown >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->spherical_ydown >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->spherical_ydown, v8);
  }
  this->spherical_ydown = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->auto_turn_start_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->auto_turn_start_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->auto_turn_start_min, v8);
  }
  this->auto_turn_start_min = 30.0;
  v9 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->auto_turn_start_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->auto_turn_start_max >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->auto_turn_start_max, v9);
  }
  this->auto_turn_start_max = 15.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->auto_turn_end_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->auto_turn_end_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->auto_turn_end_min, v9);
  }
  this->auto_turn_end_min = 90.0;
  v10 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->auto_turn_end_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->auto_turn_end_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->auto_turn_end_max, v10);
  }
  this->auto_turn_end_max = 135.0;
  std::string::basic_string(&this->enter_shape);
  std::string::basic_string(&this->exit_shape);
  data::Vector::Vector(&this->shape_center_offset);
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_priority_in_stack >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sub_priority_in_stack >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sub_priority_in_stack, v10);
  }
  this->sub_priority_in_stack = 10;
  v11 = (((_BYTE)this - 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->in_stack >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->in_stack >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->in_stack, v11);
  }
  this->in_stack = Always;
  if ( *(char *)(((unsigned __int64)&this->adjust_spherical_xat_start >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->adjust_spherical_xat_start, v11, &this->adjust_spherical_xat_start);
  this->adjust_spherical_xat_start = 0;
  v12 = ((_BYTE)this - 87) & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->is_json_loaded, v12, v13);
  this->is_json_loaded = 0;
};

// Line 752: range 000000000ED3316E-000000000ED33BC4
void __cdecl data::ConfigSpecialCamera::ConfigSpecialCamera(
        data::ConfigSpecialCamera *const this,
        const data::ConfigSpecialCamera *a2)
{
  std::enable_shared_from_this<data::ConfigSpecialCamera> *v2; // rsi
  int (**v3)(...); // rdx
  float priority; // xmm0_4
  float enter_radius; // xmm0_4
  __int64 v6; // rsi
  float exit_radius; // xmm0_4
  float height_adjust; // xmm0_4
  __int64 v9; // rsi
  float fov; // xmm0_4
  float zoom; // xmm0_4
  __int64 v12; // rsi
  float spherical_y; // xmm0_4
  __int64 v14; // rsi
  __int64 v15; // rdx
  bool lock_spherical_y; // cl
  char v17; // dl
  __int64 v18; // rdx
  float spherical_yup; // xmm0_4
  float spherical_ydown; // xmm0_4
  __int64 v21; // rsi
  float auto_turn_start_min; // xmm0_4
  float auto_turn_start_max; // xmm0_4
  __int64 v24; // rsi
  float auto_turn_end_min; // xmm0_4
  float auto_turn_end_max; // xmm0_4
  std::string *p_exit_shape; // rsi
  __int64 v28; // rdx
  int32_t sub_priority_in_stack; // ecx
  char v30; // al
  __int64 v31; // rsi
  data::ESpecialCameraPushStackType in_stack; // ecx
  char v33; // dl
  bool adjust_spherical_xat_start; // cl
  char v35; // al
  __int64 v36; // rsi
  __int64 v37; // rdx
  bool is_json_loaded; // cl
  char v39; // dl
  __int64 v40; // rdx

  v2 = &a2->std::enable_shared_from_this<data::ConfigSpecialCamera>;
  std::enable_shared_from_this<data::ConfigSpecialCamera>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigSpecialCamera>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigSpecialCamera + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigSpecialCamera = v3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->priority);
  }
  priority = a2->priority;
  if ( *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->priority, v2);
  }
  this->priority = priority;
  if ( *(_BYTE *)(((unsigned __int64)&a2->enter_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->enter_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->enter_radius);
  }
  enter_radius = a2->enter_radius;
  v6 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->enter_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->enter_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->enter_radius, v6);
  }
  this->enter_radius = enter_radius;
  if ( *(_BYTE *)(((unsigned __int64)&a2->exit_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->exit_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->exit_radius);
  }
  exit_radius = a2->exit_radius;
  if ( *(_BYTE *)(((unsigned __int64)&this->exit_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->exit_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->exit_radius, v6);
  }
  this->exit_radius = exit_radius;
  if ( *(_BYTE *)(((unsigned __int64)&a2->height_adjust >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->height_adjust >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->height_adjust);
  }
  height_adjust = a2->height_adjust;
  v9 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->height_adjust >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->height_adjust >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->height_adjust, v9);
  }
  this->height_adjust = height_adjust;
  if ( *(_BYTE *)(((unsigned __int64)&a2->fov >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->fov >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->fov);
  }
  fov = a2->fov;
  if ( *(_BYTE *)(((unsigned __int64)&this->fov >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fov >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fov, v9);
  }
  this->fov = fov;
  if ( *(_BYTE *)(((unsigned __int64)&a2->zoom >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->zoom >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->zoom);
  }
  zoom = a2->zoom;
  v12 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->zoom >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->zoom >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->zoom, v12);
  }
  this->zoom = zoom;
  if ( *(_BYTE *)(((unsigned __int64)&a2->spherical_y >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->spherical_y >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->spherical_y);
  }
  spherical_y = a2->spherical_y;
  if ( *(_BYTE *)(((unsigned __int64)&this->spherical_y >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->spherical_y >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->spherical_y, v12);
  }
  this->spherical_y = spherical_y;
  v14 = ((_BYTE)a2 + 52) & 7;
  v15 = (*(_BYTE *)(((unsigned __int64)&a2->lock_spherical_y >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)&a2->lock_spherical_y >> 3) + 0x7FFF8000));
  if ( (_BYTE)v15 )
    __asan_report_load1(&a2->lock_spherical_y, v14, v15);
  lock_spherical_y = a2->lock_spherical_y;
  v17 = *(_BYTE *)(((unsigned __int64)&this->lock_spherical_y >> 3) + 0x7FFF8000);
  LOBYTE(v14) = v17 != 0;
  v18 = (v17 != 0) & (unsigned __int8)((((unsigned __int8)this + 52) & 7) >= v17);
  if ( (_BYTE)v18 )
    __asan_report_store1(&this->lock_spherical_y, v14, v18);
  this->lock_spherical_y = lock_spherical_y;
  if ( *(_BYTE *)(((unsigned __int64)&a2->spherical_yup >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->spherical_yup >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->spherical_yup);
  }
  spherical_yup = a2->spherical_yup;
  if ( *(_BYTE *)(((unsigned __int64)&this->spherical_yup >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->spherical_yup >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->spherical_yup, v14);
  }
  this->spherical_yup = spherical_yup;
  if ( *(_BYTE *)(((unsigned __int64)&a2->spherical_ydown >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->spherical_ydown >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->spherical_ydown);
  }
  spherical_ydown = a2->spherical_ydown;
  v21 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->spherical_ydown >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->spherical_ydown >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->spherical_ydown, v21);
  }
  this->spherical_ydown = spherical_ydown;
  if ( *(_BYTE *)(((unsigned __int64)&a2->auto_turn_start_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->auto_turn_start_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->auto_turn_start_min);
  }
  auto_turn_start_min = a2->auto_turn_start_min;
  if ( *(_BYTE *)(((unsigned __int64)&this->auto_turn_start_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->auto_turn_start_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->auto_turn_start_min, v21);
  }
  this->auto_turn_start_min = auto_turn_start_min;
  if ( *(_BYTE *)(((unsigned __int64)&a2->auto_turn_start_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->auto_turn_start_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->auto_turn_start_max);
  }
  auto_turn_start_max = a2->auto_turn_start_max;
  v24 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->auto_turn_start_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->auto_turn_start_max >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->auto_turn_start_max, v24);
  }
  this->auto_turn_start_max = auto_turn_start_max;
  if ( *(_BYTE *)(((unsigned __int64)&a2->auto_turn_end_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->auto_turn_end_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->auto_turn_end_min);
  }
  auto_turn_end_min = a2->auto_turn_end_min;
  if ( *(_BYTE *)(((unsigned __int64)&this->auto_turn_end_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->auto_turn_end_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->auto_turn_end_min, v24);
  }
  this->auto_turn_end_min = auto_turn_end_min;
  if ( *(_BYTE *)(((unsigned __int64)&a2->auto_turn_end_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->auto_turn_end_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->auto_turn_end_max);
  }
  auto_turn_end_max = a2->auto_turn_end_max;
  if ( *(_BYTE *)(((unsigned __int64)&this->auto_turn_end_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->auto_turn_end_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->auto_turn_end_max, (((_BYTE)this + 76) & 7u) + 3);
  }
  this->auto_turn_end_max = auto_turn_end_max;
  std::string::basic_string(&this->enter_shape, &a2->enter_shape);
  p_exit_shape = &a2->exit_shape;
  std::string::basic_string(&this->exit_shape, &a2->exit_shape);
  if ( *(_WORD *)(((unsigned __int64)&this->shape_center_offset >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->shape_center_offset >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->shape_center_offset);
  v28 = *(_QWORD *)&a2->shape_center_offset.z;
  *(_QWORD *)&this->shape_center_offset.x = *(_QWORD *)&a2->shape_center_offset.x;
  *(_QWORD *)&this->shape_center_offset.z = v28;
  if ( *(_BYTE *)(((unsigned __int64)&a2->sub_priority_in_stack >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->sub_priority_in_stack >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->sub_priority_in_stack);
  }
  sub_priority_in_stack = a2->sub_priority_in_stack;
  v30 = *(_BYTE *)(((unsigned __int64)&this->sub_priority_in_stack >> 3) + 0x7FFF8000);
  if ( v30 != 0 && v30 <= 3 )
  {
    LOBYTE(p_exit_shape) = v30 != 0;
    __asan_report_store4(&this->sub_priority_in_stack, p_exit_shape);
  }
  this->sub_priority_in_stack = sub_priority_in_stack;
  v31 = (((_BYTE)a2 - 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->in_stack >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->in_stack >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->in_stack);
  }
  in_stack = a2->in_stack;
  v33 = *(_BYTE *)(((unsigned __int64)&this->in_stack >> 3) + 0x7FFF8000);
  LOBYTE(v31) = v33 != 0;
  if ( v33 != 0 && (char)((((_BYTE)this - 92) & 7) + 3) >= v33 )
    __asan_report_store4(&this->in_stack, v31);
  this->in_stack = in_stack;
  if ( *(char *)(((unsigned __int64)&a2->adjust_spherical_xat_start >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->adjust_spherical_xat_start, v31, &a2->adjust_spherical_xat_start);
  adjust_spherical_xat_start = a2->adjust_spherical_xat_start;
  v35 = *(_BYTE *)(((unsigned __int64)&this->adjust_spherical_xat_start >> 3) + 0x7FFF8000);
  if ( v35 < 0 )
  {
    LOBYTE(v31) = v35 != 0;
    __asan_report_store1(&this->adjust_spherical_xat_start, v31, &this->adjust_spherical_xat_start);
  }
  this->adjust_spherical_xat_start = adjust_spherical_xat_start;
  v36 = ((_BYTE)a2 - 87) & 7;
  v37 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v36 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v37 )
    __asan_report_load1(&a2->is_json_loaded, v36, v37);
  is_json_loaded = a2->is_json_loaded;
  v39 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v36) = v39 != 0;
  v40 = (v39 != 0) & (unsigned __int8)((((unsigned __int8)this - 87) & 7) >= v39);
  if ( (_BYTE)v40 )
    __asan_report_store1(&this->is_json_loaded, v36, v40);
  this->is_json_loaded = is_json_loaded;
};

// Line 779: range 000000000ED33EAE-000000000ED33F1F
void __cdecl data::ConfigSpecialCamera::~ConfigSpecialCamera(data::ConfigSpecialCamera *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSpecialCamera + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigSpecialCamera = v2;
  std::string::~string(&this->exit_shape);
  std::string::~string(&this->enter_shape);
  std::enable_shared_from_this<data::ConfigSpecialCamera>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigSpecialCamera>);
};

// Line 779: range 000000000ED33F20-000000000ED33F4A
void __cdecl data::ConfigSpecialCamera::~ConfigSpecialCamera(data::ConfigSpecialCamera *const this)
{
  data::ConfigSpecialCamera::~ConfigSpecialCamera(this);
  operator delete(this, 0xB0uLL);
};

// Line 784: range 000000000E69F4CA-000000000E69F4DA
const char *__cdecl data::ConfigSpecialCamera::getTypeName(const data::ConfigSpecialCamera *const this)
{
  return "ConfigSpecialCamera";
};

// Line 785: range 000000000E69F4DC-000000000E69F678
int32_t __cdecl data::ConfigSpecialCamera::getHashNum(const data::ConfigSpecialCamera *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigSpecialCamera::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigSpecialCamera",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 804: range 000000000ED33F4C-000000000ED33FAB
void __cdecl data::ConfigContinuesLockCamera::ConfigContinuesLockCamera(data::ConfigContinuesLockCamera *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigSpecialCamera::ConfigSpecialCamera(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigContinuesLockCamera + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigSpecialCamera = v2;
  std::string::basic_string(&this->lock_point);
};

// Line 804: range 000000000ED34360-000000000ED343FB
void __cdecl data::ConfigContinuesLockCamera::ConfigContinuesLockCamera(
        data::ConfigContinuesLockCamera *const this,
        const data::ConfigContinuesLockCamera *a2)
{
  int (**v2)(...); // rdx

  data::ConfigSpecialCamera::ConfigSpecialCamera(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigContinuesLockCamera + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigSpecialCamera = v2;
  std::string::basic_string(&this->lock_point, &a2->lock_point);
};

// Line 811: range 000000000EDAC36C-000000000EDAC3CB
void __cdecl data::ConfigContinuesLockCamera::~ConfigContinuesLockCamera(data::ConfigContinuesLockCamera *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigContinuesLockCamera + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigSpecialCamera = v2;
  std::string::~string(&this->lock_point);
  data::ConfigSpecialCamera::~ConfigSpecialCamera(this);
};

// Line 811: range 000000000EDAC3CC-000000000EDAC3F6
void __cdecl data::ConfigContinuesLockCamera::~ConfigContinuesLockCamera(data::ConfigContinuesLockCamera *const this)
{
  data::ConfigContinuesLockCamera::~ConfigContinuesLockCamera(this);
  operator delete(this, 0xD0uLL);
};

// Line 816: range 000000000E69F67A-000000000E69F68A
const char *__cdecl data::ConfigContinuesLockCamera::getTypeName(const data::ConfigContinuesLockCamera *const this)
{
  return "ConfigContinuesLockCamera";
};

// Line 817: range 000000000E69F68C-000000000E69F828
int32_t __cdecl data::ConfigContinuesLockCamera::getHashNum(const data::ConfigContinuesLockCamera *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigContinuesLockCamera::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigContinuesLockCamera",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 820: range 000000000DF4BCF0-000000000DF4BFFD
void __cdecl data::ConfigSummonTag::ConfigSummonTag(data::ConfigSummonTag *const this, const data::ConfigSummonTag *a2)
{
  uint32_t summon_tag; // ecx
  char v3; // al
  std::string *p_name; // rsi
  int32_t max_num; // ecx
  char v6; // al
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool copy_owner_threat_list; // cl
  char v10; // dl
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx
  bool use_owner_defend_area; // cl
  char v15; // dl
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdx
  bool use_summon_threat_list; // cl
  char v20; // dl
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdx
  bool is_json_loaded; // cl
  char v25; // dl
  __int64 v26; // rdx
  const data::ConfigSummonTag *v27; // [rsp+0h] [rbp-10h]

  v27 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  summon_tag = a2->summon_tag;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->summon_tag = summon_tag;
  p_name = &v27->name;
  std::string::basic_string(&this->name, &v27->name);
  if ( *(_BYTE *)(((unsigned __int64)&v27->max_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v27->max_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v27->max_num);
  }
  max_num = v27->max_num;
  v6 = *(_BYTE *)(((unsigned __int64)&this->max_num >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_name) = v6 != 0;
    __asan_report_store4(&this->max_num, p_name);
  }
  this->max_num = max_num;
  v7 = ((_BYTE)v27 + 44) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&v27->copy_owner_threat_list >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&v27->copy_owner_threat_list >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&v27->copy_owner_threat_list, v7, v8);
  copy_owner_threat_list = v27->copy_owner_threat_list;
  v10 = *(_BYTE *)(((unsigned __int64)&this->copy_owner_threat_list >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->copy_owner_threat_list, v7, v11);
  this->copy_owner_threat_list = copy_owner_threat_list;
  v12 = ((_BYTE)v27 + 45) & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)&v27->use_owner_defend_area >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&v27->use_owner_defend_area >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_load1(&v27->use_owner_defend_area, v12, v13);
  use_owner_defend_area = v27->use_owner_defend_area;
  v15 = *(_BYTE *)(((unsigned __int64)&this->use_owner_defend_area >> 3) + 0x7FFF8000);
  LOBYTE(v12) = v15 != 0;
  v16 = (v15 != 0) & (unsigned __int8)((((unsigned __int8)this + 45) & 7) >= v15);
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->use_owner_defend_area, v12, v16);
  this->use_owner_defend_area = use_owner_defend_area;
  v17 = ((_BYTE)v27 + 46) & 7;
  v18 = (*(_BYTE *)(((unsigned __int64)&v27->use_summon_threat_list >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v17 >= *(_BYTE *)(((unsigned __int64)&v27->use_summon_threat_list >> 3) + 0x7FFF8000));
  if ( (_BYTE)v18 )
    __asan_report_load1(&v27->use_summon_threat_list, v17, v18);
  use_summon_threat_list = v27->use_summon_threat_list;
  v20 = *(_BYTE *)(((unsigned __int64)&this->use_summon_threat_list >> 3) + 0x7FFF8000);
  LOBYTE(v17) = v20 != 0;
  v21 = (v20 != 0) & (unsigned __int8)((((unsigned __int8)this + 46) & 7) >= v20);
  if ( (_BYTE)v21 )
    __asan_report_store1(&this->use_summon_threat_list, v17, v21);
  this->use_summon_threat_list = use_summon_threat_list;
  v22 = ((_BYTE)v27 + 47) & 7;
  v23 = (*(_BYTE *)(((unsigned __int64)&v27->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v22 >= *(_BYTE *)(((unsigned __int64)&v27->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v23 )
    __asan_report_load1(&v27->is_json_loaded, v22, v23);
  is_json_loaded = v27->is_json_loaded;
  v25 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v22) = v25 != 0;
  v26 = (v25 != 0) & (unsigned __int8)((((unsigned __int8)this + 47) & 7) >= v25);
  if ( (_BYTE)v26 )
    __asan_report_store1(&this->is_json_loaded, v22, v26);
  this->is_json_loaded = is_json_loaded;
};

// Line 833: range 000000000ED346E4-000000000ED34725
void __cdecl data::ConfigContinuesLockCameraFactory::ConfigContinuesLockCameraFactory(
        data::ConfigContinuesLockCameraFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigContinuesLockCameraFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigContinuesLockCameraFactory = v2;
};

// Line 841: range 000000000ED34A2E-000000000ED34D86
void __cdecl data::ConfigContinuesLockCameraV2::ConfigContinuesLockCameraV2(
        data::ConfigContinuesLockCameraV2 *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi

  data::ConfigSpecialCamera::ConfigSpecialCamera(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigContinuesLockCameraV2 + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigSpecialCamera = v2;
  std::string::basic_string(&this->lock_point);
  if ( *(_BYTE *)(((unsigned __int64)&this->forward_max_angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->forward_max_angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->forward_max_angle, v1);
  }
  this->forward_max_angle = 30.0;
  v3 = (((_BYTE)this - 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->forward_max_angle_extra >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->forward_max_angle_extra >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->forward_max_angle_extra, v3);
  }
  this->forward_max_angle_extra = 60.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->forward_adjust_min_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->forward_adjust_min_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->forward_adjust_min_speed, v3);
  }
  this->forward_adjust_min_speed = 10.0;
  v4 = (((_BYTE)this - 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->forward_adjust_max_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->forward_adjust_max_speed >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->forward_adjust_max_speed, v4);
  }
  this->forward_adjust_max_speed = 90.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->enemy_weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->enemy_weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->enemy_weight, v4);
  }
  this->enemy_weight = 0.69999999;
  v5 = (((_BYTE)this - 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->zoom_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->zoom_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->zoom_min, v5);
  }
  this->zoom_min = 6.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->zoom_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->zoom_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->zoom_max, v5);
  }
  this->zoom_max = 8.0;
  v6 = (((_BYTE)this - 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->enemy_pos_tolerate_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->enemy_pos_tolerate_range >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->enemy_pos_tolerate_range, v6);
  }
  this->enemy_pos_tolerate_range = 0.25;
  if ( *(char *)(((unsigned __int64)&this->enable_handle_input >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->enable_handle_input, v6, &this->enable_handle_input);
  this->enable_handle_input = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->spring_lerp_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->spring_lerp_interval >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->spring_lerp_interval, (((_BYTE)this - 12) & 7u) + 3);
  }
  this->spring_lerp_interval = 1.0;
};

// Line 841: range 000000000ED3513C-000000000ED35739
void __cdecl data::ConfigContinuesLockCameraV2::ConfigContinuesLockCameraV2(
        data::ConfigContinuesLockCameraV2 *const this,
        const data::ConfigContinuesLockCameraV2 *a2)
{
  int (**v2)(...); // rdx
  float forward_max_angle; // xmm0_4
  float forward_max_angle_extra; // xmm0_4
  __int64 v5; // rsi
  float forward_adjust_min_speed; // xmm0_4
  float forward_adjust_max_speed; // xmm0_4
  __int64 v8; // rsi
  float enemy_weight; // xmm0_4
  float zoom_min; // xmm0_4
  __int64 v11; // rsi
  float zoom_max; // xmm0_4
  float enemy_pos_tolerate_range; // xmm0_4
  __int64 v14; // rsi
  bool enable_handle_input; // cl
  char v16; // al
  float spring_lerp_interval; // xmm0_4

  data::ConfigSpecialCamera::ConfigSpecialCamera(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigContinuesLockCameraV2 + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigSpecialCamera = v2;
  std::string::basic_string(&this->lock_point, &a2->lock_point);
  if ( *(_BYTE *)(((unsigned __int64)&a2->forward_max_angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->forward_max_angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->forward_max_angle);
  }
  forward_max_angle = a2->forward_max_angle;
  if ( *(_BYTE *)(((unsigned __int64)&this->forward_max_angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->forward_max_angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->forward_max_angle, &a2->lock_point);
  }
  this->forward_max_angle = forward_max_angle;
  if ( *(_BYTE *)(((unsigned __int64)&a2->forward_max_angle_extra >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->forward_max_angle_extra >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->forward_max_angle_extra);
  }
  forward_max_angle_extra = a2->forward_max_angle_extra;
  v5 = (((_BYTE)this - 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->forward_max_angle_extra >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->forward_max_angle_extra >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->forward_max_angle_extra, v5);
  }
  this->forward_max_angle_extra = forward_max_angle_extra;
  if ( *(_BYTE *)(((unsigned __int64)&a2->forward_adjust_min_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->forward_adjust_min_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->forward_adjust_min_speed);
  }
  forward_adjust_min_speed = a2->forward_adjust_min_speed;
  if ( *(_BYTE *)(((unsigned __int64)&this->forward_adjust_min_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->forward_adjust_min_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->forward_adjust_min_speed, v5);
  }
  this->forward_adjust_min_speed = forward_adjust_min_speed;
  if ( *(_BYTE *)(((unsigned __int64)&a2->forward_adjust_max_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->forward_adjust_max_speed >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->forward_adjust_max_speed);
  }
  forward_adjust_max_speed = a2->forward_adjust_max_speed;
  v8 = (((_BYTE)this - 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->forward_adjust_max_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->forward_adjust_max_speed >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->forward_adjust_max_speed, v8);
  }
  this->forward_adjust_max_speed = forward_adjust_max_speed;
  if ( *(_BYTE *)(((unsigned __int64)&a2->enemy_weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->enemy_weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->enemy_weight);
  }
  enemy_weight = a2->enemy_weight;
  if ( *(_BYTE *)(((unsigned __int64)&this->enemy_weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->enemy_weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->enemy_weight, v8);
  }
  this->enemy_weight = enemy_weight;
  if ( *(_BYTE *)(((unsigned __int64)&a2->zoom_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->zoom_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->zoom_min);
  }
  zoom_min = a2->zoom_min;
  v11 = (((_BYTE)this - 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->zoom_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->zoom_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->zoom_min, v11);
  }
  this->zoom_min = zoom_min;
  if ( *(_BYTE *)(((unsigned __int64)&a2->zoom_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->zoom_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->zoom_max);
  }
  zoom_max = a2->zoom_max;
  if ( *(_BYTE *)(((unsigned __int64)&this->zoom_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->zoom_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->zoom_max, v11);
  }
  this->zoom_max = zoom_max;
  if ( *(_BYTE *)(((unsigned __int64)&a2->enemy_pos_tolerate_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->enemy_pos_tolerate_range >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->enemy_pos_tolerate_range);
  }
  enemy_pos_tolerate_range = a2->enemy_pos_tolerate_range;
  v14 = (((_BYTE)this - 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->enemy_pos_tolerate_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->enemy_pos_tolerate_range >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->enemy_pos_tolerate_range, v14);
  }
  this->enemy_pos_tolerate_range = enemy_pos_tolerate_range;
  if ( *(char *)(((unsigned __int64)&a2->enable_handle_input >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->enable_handle_input, v14, &a2->enable_handle_input);
  enable_handle_input = a2->enable_handle_input;
  v16 = *(_BYTE *)(((unsigned __int64)&this->enable_handle_input >> 3) + 0x7FFF8000);
  if ( v16 < 0 )
  {
    LOBYTE(v14) = v16 != 0;
    __asan_report_store1(&this->enable_handle_input, v14, &this->enable_handle_input);
  }
  this->enable_handle_input = enable_handle_input;
  if ( *(_BYTE *)(((unsigned __int64)&a2->spring_lerp_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->spring_lerp_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->spring_lerp_interval);
  }
  spring_lerp_interval = a2->spring_lerp_interval;
  if ( *(_BYTE *)(((unsigned __int64)&this->spring_lerp_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->spring_lerp_interval >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->spring_lerp_interval, (((_BYTE)this - 12) & 7u) + 3);
  }
  this->spring_lerp_interval = spring_lerp_interval;
};

// Line 858: range 000000000EDAC340-000000000EDAC36A
void __cdecl data::ConfigContinuesLockCameraV2::~ConfigContinuesLockCameraV2(
        data::ConfigContinuesLockCameraV2 *const this)
{
  data::ConfigContinuesLockCameraV2::~ConfigContinuesLockCameraV2(this);
  operator delete(this, 0xF8uLL);
};

// Line 858: range 000000000EDAC2E0-000000000EDAC33F
void __cdecl data::ConfigContinuesLockCameraV2::~ConfigContinuesLockCameraV2(
        data::ConfigContinuesLockCameraV2 *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigContinuesLockCameraV2 + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigSpecialCamera = v2;
  std::string::~string(&this->lock_point);
  data::ConfigSpecialCamera::~ConfigSpecialCamera(this);
};

// Line 863: range 000000000E69F82A-000000000E69F83A
const char *__cdecl data::ConfigContinuesLockCameraV2::getTypeName(const data::ConfigContinuesLockCameraV2 *const this)
{
  return "ConfigContinuesLockCameraV2";
};

// Line 864: range 000000000E69F83C-000000000E69F9D8
int32_t __cdecl data::ConfigContinuesLockCameraV2::getHashNum(const data::ConfigContinuesLockCameraV2 *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigContinuesLockCameraV2::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigContinuesLockCameraV2",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 880: range 000000000ED35A22-000000000ED35A63
void __cdecl data::ConfigContinuesLockCameraV2Factory::ConfigContinuesLockCameraV2Factory(
        data::ConfigContinuesLockCameraV2Factory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigContinuesLockCameraV2Factory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigContinuesLockCameraV2Factory = v2;
};

// Line 888: range 000000000ED35D6C-000000000ED35E9C
void __cdecl data::ConfigGadgetSpecialCamera::ConfigGadgetSpecialCamera(data::ConfigGadgetSpecialCamera *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigSpecialCamera::ConfigSpecialCamera((data::ConfigSpecialCamera *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetSpecialCamera + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigSpecialCamera = v2;
  v3 = (((_BYTE)this - 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->enter_angle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->enter_angle >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->enter_angle, v3);
  }
  this->enter_angle = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->exit_angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->exit_angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->exit_angle, v3);
  }
  this->exit_angle = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->blend_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->blend_duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->blend_duration, (((_BYTE)this - 76) & 7u) + 3);
  }
  this->blend_duration = 0.5;
};

// Line 888: range 000000000ED3625E-000000000ED3645C
void __cdecl data::ConfigGadgetSpecialCamera::ConfigGadgetSpecialCamera(
        data::ConfigGadgetSpecialCamera *const this,
        const data::ConfigGadgetSpecialCamera *a2)
{
  int (**v2)(...); // rdx
  float enter_angle; // xmm0_4
  __int64 v4; // rsi
  float exit_angle; // xmm0_4
  float blend_duration; // xmm0_4

  data::ConfigSpecialCamera::ConfigSpecialCamera(
    (data::ConfigSpecialCamera *const)this,
    (const data::ConfigSpecialCamera *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetSpecialCamera + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigSpecialCamera = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->enter_angle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->enter_angle >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->enter_angle);
  }
  enter_angle = a2->enter_angle;
  v4 = (((_BYTE)this - 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->enter_angle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->enter_angle >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->enter_angle, v4);
  }
  this->enter_angle = enter_angle;
  if ( *(_BYTE *)(((unsigned __int64)&a2->exit_angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->exit_angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->exit_angle);
  }
  exit_angle = a2->exit_angle;
  if ( *(_BYTE *)(((unsigned __int64)&this->exit_angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->exit_angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->exit_angle, v4);
  }
  this->exit_angle = exit_angle;
  if ( *(_BYTE *)(((unsigned __int64)&a2->blend_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->blend_duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->blend_duration);
  }
  blend_duration = a2->blend_duration;
  if ( *(_BYTE *)(((unsigned __int64)&this->blend_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->blend_duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->blend_duration, (((_BYTE)this - 76) & 7u) + 3);
  }
  this->blend_duration = blend_duration;
};

// Line 897: range 000000000EDAC2B4-000000000EDAC2DE
void __cdecl data::ConfigGadgetSpecialCamera::~ConfigGadgetSpecialCamera(data::ConfigGadgetSpecialCamera *const this)
{
  data::ConfigGadgetSpecialCamera::~ConfigGadgetSpecialCamera(this);
  operator delete(this, 0xB8uLL);
};

// Line 897: range 000000000EDAC266-000000000EDAC2B3
void __cdecl data::ConfigGadgetSpecialCamera::~ConfigGadgetSpecialCamera(data::ConfigGadgetSpecialCamera *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetSpecialCamera + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigSpecialCamera = v2;
  data::ConfigSpecialCamera::~ConfigSpecialCamera((data::ConfigSpecialCamera *const)this);
};

// Line 902: range 000000000E69F9DA-000000000E69F9EA
const char *__cdecl data::ConfigGadgetSpecialCamera::getTypeName(const data::ConfigGadgetSpecialCamera *const this)
{
  return "ConfigGadgetSpecialCamera";
};

// Line 903: range 000000000E69F9EC-000000000E69FB88
int32_t __cdecl data::ConfigGadgetSpecialCamera::getHashNum(const data::ConfigGadgetSpecialCamera *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigGadgetSpecialCamera::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGadgetSpecialCamera",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 919: range 000000000ED36746-000000000ED36787
void __cdecl data::ConfigGadgetSpecialCameraFactory::ConfigGadgetSpecialCameraFactory(
        data::ConfigGadgetSpecialCameraFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetSpecialCameraFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetSpecialCameraFactory = v2;
};

// Line 941: range 000000000ED92950-000000000ED92A78
void __cdecl data::ConfigGadgetCameraBox::ConfigGadgetCameraBox(data::ConfigGadgetCameraBox *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rdx

  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->enter_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->enter_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->enter_radius, v1);
  }
  this->enter_radius = 20.0;
  v2 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->exit_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exit_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->exit_radius, v2);
  }
  this->exit_radius = 25.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->ui_action >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ui_action >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ui_action, v2);
  }
  this->ui_action = None_31;
  v3 = ((_BYTE)this + 44) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 941: range 000000000E82A6B6-000000000E82A8D0
void __cdecl data::ConfigGadgetCameraBox::ConfigGadgetCameraBox(
        data::ConfigGadgetCameraBox *const this,
        const data::ConfigGadgetCameraBox *a2)
{
  float enter_radius; // xmm0_4
  float exit_radius; // xmm0_4
  __int64 v4; // rsi
  data::GadgetCameraBoxUIActionType ui_action; // ecx
  char v6; // al
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool is_json_loaded; // cl
  char v10; // dl
  __int64 v11; // rdx

  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&a2->enter_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->enter_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->enter_radius);
  }
  enter_radius = a2->enter_radius;
  if ( *(_BYTE *)(((unsigned __int64)&this->enter_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->enter_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->enter_radius, a2);
  }
  this->enter_radius = enter_radius;
  if ( *(_BYTE *)(((unsigned __int64)&a2->exit_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->exit_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->exit_radius);
  }
  exit_radius = a2->exit_radius;
  v4 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->exit_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exit_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->exit_radius, v4);
  }
  this->exit_radius = exit_radius;
  if ( *(_BYTE *)(((unsigned __int64)&a2->ui_action >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->ui_action >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->ui_action);
  }
  ui_action = a2->ui_action;
  v6 = *(_BYTE *)(((unsigned __int64)&this->ui_action >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->ui_action, v4);
  }
  this->ui_action = ui_action;
  v7 = ((_BYTE)a2 + 44) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&a2->is_json_loaded, v7, v8);
  is_json_loaded = a2->is_json_loaded;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->is_json_loaded, v7, v11);
  this->is_json_loaded = is_json_loaded;
};

// Line 941: range 000000000E82A8D2-000000000E82A8EC
void __cdecl data::ConfigGadgetCameraBox::~ConfigGadgetCameraBox(data::ConfigGadgetCameraBox *const this)
{
  std::string::~string(this);
};
