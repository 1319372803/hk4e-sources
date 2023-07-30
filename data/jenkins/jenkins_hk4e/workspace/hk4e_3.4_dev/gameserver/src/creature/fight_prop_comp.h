// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/creature/fight_prop_comp.h

// Line 26: range 0000000013C4288A-0000000013C429A0
void __cdecl FightPropNtfParam::FightPropNtfParam(FightPropNtfParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->reason = PROP_CHANGE_NONE;
  std::vector<unsigned int>::vector(&this->param_vec);
  if ( *(char *)(((unsigned __int64)&this->only_notify_on_change >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->only_notify_on_change);
  this->only_notify_on_change = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->change_hp_reason >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->change_hp_reason >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->change_hp_reason);
  }
  this->change_hp_reason = CHANGE_HP_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->change_energy_reson >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->change_energy_reson >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->change_energy_reson);
  }
  this->change_energy_reson = CHANGE_ENERGY_NONE;
};

// Line 26: range 0000000013D8A464-0000000013D8A482
void __cdecl FightPropNtfParam::~FightPropNtfParam(FightPropNtfParam *const this)
{
  std::vector<unsigned int>::~vector(&this->param_vec);
};

// Line 37: range 0000000017A07436-0000000017A0754B
FightPropValue *__cdecl FightPropValue::operator=(FightPropValue *const this, const FightPropValue *a2)
{
  float base_value; // xmm0_4
  float ability_value; // xmm0_4

  if ( *(_BYTE *)(((unsigned __int64)&a2->base_value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->base_value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->base_value_);
  }
  base_value = a2->base_value_;
  if ( *(_BYTE *)(((unsigned __int64)&this->base_value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->base_value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->base_value_);
  }
  this->base_value_ = base_value;
  if ( *(_BYTE *)(((unsigned __int64)&a2->ability_value_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->ability_value_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->ability_value_);
  }
  ability_value = a2->ability_value_;
  if ( *(_BYTE *)(((unsigned __int64)&this->ability_value_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ability_value_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ability_value_);
  }
  this->ability_value_ = ability_value;
  return this;
};

// Line 37: range 0000000017A0131C-0000000017A013E5
void __cdecl FightPropValue::FightPropValue(FightPropValue *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'FightPropValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_FightPropValue = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->base_value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->base_value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->base_value_);
  }
  this->base_value_ = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->ability_value_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ability_value_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ability_value_);
  }
  this->ability_value_ = 0.0;
};

// Line 37: range 0000000017A07580-0000000017A076C5
void __cdecl FightPropValue::FightPropValue(FightPropValue *const this, const FightPropValue *a2)
{
  int (**v2)(...); // rdx
  float base_value; // xmm0_4
  float ability_value; // xmm0_4

  v2 = (int (**)(...))(&`vtable for'FightPropValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_FightPropValue = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->base_value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->base_value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->base_value_);
  }
  base_value = a2->base_value_;
  if ( *(_BYTE *)(((unsigned __int64)&this->base_value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->base_value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->base_value_);
  }
  this->base_value_ = base_value;
  if ( *(_BYTE *)(((unsigned __int64)&a2->ability_value_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->ability_value_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->ability_value_);
  }
  ability_value = a2->ability_value_;
  if ( *(_BYTE *)(((unsigned __int64)&this->ability_value_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ability_value_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ability_value_);
  }
  this->ability_value_ = ability_value;
};

// Line 40: range 0000000017A011BC-0000000017A01205
float __cdecl FightPropValue::getBaseValue(const FightPropValue *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->base_value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->base_value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->base_value_);
  }
  return this->base_value_;
};

// Line 48: range 0000000017A01206-0000000017A01257
float __cdecl FightPropValue::getAbilityValue(const FightPropValue *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ability_value_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ability_value_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->ability_value_);
  }
  return this->ability_value_;
};

// Line 50: range 0000000017A01258-0000000017A012B4
void __cdecl FightPropValue::addBaseValue(FightPropValue *const this, float base_value_delta)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->base_value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->base_value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->base_value_);
  }
  this->base_value_ = this->base_value_ + base_value_delta;
};

// Line 51: range 0000000017A012B6-0000000017A0131A
void __cdecl FightPropValue::addAbilityValue(FightPropValue *const this, float ability_value_delta)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ability_value_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ability_value_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->ability_value_);
  }
  this->ability_value_ = this->ability_value_ + ability_value_delta;
};

// Line 56: range 0000000017A076C6-0000000017A07739
void __cdecl AbilityClampFightPropValue::AbilityClampFightPropValue(
        AbilityClampFightPropValue *const this,
        const AbilityClampFightPropValue *a2)
{
  int (**v2)(...); // rdx

  FightPropValue::FightPropValue(this, a2);
  v2 = (int (**)(...))(&`vtable for'AbilityClampFightPropValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_FightPropValue = v2;
  std::string::basic_string(&this->clamp_ability_prop_, &a2->clamp_ability_prop_);
};

// Line 56: range 000000001477CC1E-000000001477CC6F
void __cdecl AbilityClampFightPropValue::~AbilityClampFightPropValue(AbilityClampFightPropValue *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AbilityClampFightPropValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_FightPropValue = v1;
  std::string::~string(&this->clamp_ability_prop_);
};

// Line 62: range 0000000017A013E6-0000000017A0144E
void __cdecl AbilityClampFightPropValue::AbilityClampFightPropValue(
        AbilityClampFightPropValue *const this,
        const std::string *clamp_ability_prop)
{
  int (**v2)(...); // rdx

  FightPropValue::FightPropValue(this);
  v2 = (int (**)(...))(&`vtable for'AbilityClampFightPropValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_FightPropValue = v2;
  std::string::basic_string(&this->clamp_ability_prop_, clamp_ability_prop);
};

// Line 68: range 00000000131D9242-00000000131D925C
void __cdecl FightPropGuard::FightPropGuard(FightPropGuard *const this)
{
  std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature>>,std::allocator<std::weak_ptr<Creature>>>::set(&this->creature_set_);
};

// Line 80: range 0000000014839A3A-0000000014839A64
void __cdecl FightPropComp::~FightPropComp(FightPropComp *const this)
{
  FightPropComp::~FightPropComp(this);
  operator delete(this, 0x190uLL);
};

// Line 80: range 0000000014839974-0000000014839A39
void __cdecl FightPropComp::~FightPropComp(FightPropComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'FightPropComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_CreatureCompBase = v1;
  std::unordered_map<std::string,float>::~unordered_map(&this->elem_react_add_hurt_base_map_);
  PileBoolValue::~PileBoolValue(&this->is_lock_heal_hp_);
  PileBoolValue::~PileBoolValue(&this->is_lock_hp_);
  PileBoolValue::~PileBoolValue(&this->is_invincible_);
  std::unordered_map<data::FightPropType,FightPropValue>::~unordered_map(&this->modified_fight_prop_map_);
  std::map<data::FightPropType,AbilityClampFightPropValue>::~map(&this->fight_cal_prop_map_);
  std::map<data::FightPropType,float>::~map(&this->fight_cur_prop_map_);
  CreatureCompBase::~CreatureCompBase(this);
};

// Line 84: range 000000001461373A-0000000014613894
void __cdecl ZN13FightPropCompCI216CreatureCompBaseER8Creature(FightPropComp *const this, Creature *a2)
{
  int (**v2)(...); // rdx

  CreatureCompBase::CreatureCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'FightPropComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_CreatureCompBase = v2;
  if ( *(char *)(((unsigned __int64)&this->is_use_ability_property_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_use_ability_property_);
  this->is_use_ability_property_ = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_guarded_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_guarded_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_guarded_);
  }
  this->is_guarded_ = 0;
  std::map<data::FightPropType,float>::map(&this->fight_cur_prop_map_);
  std::map<data::FightPropType,AbilityClampFightPropValue>::map(&this->fight_cal_prop_map_);
  std::unordered_map<data::FightPropType,FightPropValue>::unordered_map(&this->modified_fight_prop_map_);
  PileBoolValue::PileBoolValue(&this->is_invincible_, OnceTrue);
  PileBoolValue::PileBoolValue(&this->is_lock_hp_, OnceTrue);
  PileBoolValue::PileBoolValue(&this->is_lock_heal_hp_, OnceTrue);
  std::unordered_map<std::string,float>::unordered_map(&this->elem_react_add_hurt_base_map_);
};

// Line 140: range 00000000138415E2-00000000138415F5
PileBoolValue *__cdecl FightPropComp::getIsInvincible(FightPropComp *const this)
{
  return &this->is_invincible_;
};

// Line 140: range 00000000138415F6-0000000013841609
PileBoolValue *__cdecl FightPropComp::getIsLockHp(FightPropComp *const this)
{
  return &this->is_lock_hp_;
};

// Line 143: range 000000001384160A-000000001384161D
PileBoolValue *__cdecl FightPropComp::getIsLockHealHp(FightPropComp *const this)
{
  return &this->is_lock_heal_hp_;
};

// Line 230: range 0000000013213538-0000000013213897
void __cdecl FightPropComp::getFightPropValueMap<google::protobuf::Map<unsigned int,float>>(
        const FightPropComp *const this,
        google::protobuf::Map<unsigned int,float> *prop_map,
        bool is_include_ability)
{
  __m128i v3; // xmm0
  bool v4; // al
  int v5; // ebx
  float *v6; // rax
  int *v7; // rdx
  std::tuple_element<1,const std::pair<const data::FightPropType,float> >::type *v8; // rax
  float *v9; // rax
  _DWORD *v10; // rdx
  int v11; // [rsp+8h] [rbp-88h]
  google::protobuf::Map<unsigned int,float>::key_type key; // [rsp+2Ch] [rbp-64h] BYREF
  std::map<data::FightPropType,AbilityClampFightPropValue>::const_iterator __for_begin; // [rsp+30h] [rbp-60h] BYREF
  std::map<data::FightPropType,AbilityClampFightPropValue>::const_iterator __for_end; // [rsp+38h] [rbp-58h] BYREF
  const std::map<data::FightPropType,AbilityClampFightPropValue> *__for_range; // [rsp+40h] [rbp-50h]
  const std::map<data::FightPropType,float> *__for_range_0; // [rsp+48h] [rbp-48h]
  const std::pair<const data::FightPropType,float> *v18; // [rsp+50h] [rbp-40h]
  std::tuple_element<0,const std::pair<const data::FightPropType,float> >::type *prop_type_0; // [rsp+58h] [rbp-38h]
  std::tuple_element<1,const std::pair<const data::FightPropType,float> >::type *prop_value_0; // [rsp+60h] [rbp-30h]
  const std::pair<const data::FightPropType,AbilityClampFightPropValue> *v21; // [rsp+68h] [rbp-28h]
  std::tuple_element<0,const std::pair<const data::FightPropType,AbilityClampFightPropValue> >::type *prop_type; // [rsp+70h] [rbp-20h]
  std::tuple_element<1,const std::pair<const data::FightPropType,AbilityClampFightPropValue> >::type *prop_value; // [rsp+78h] [rbp-18h]

  __for_range = &this->fight_cal_prop_map_;
  __for_begin._M_node = std::map<data::FightPropType,AbilityClampFightPropValue>::begin(&this->fight_cal_prop_map_)._M_node;
  __for_end._M_node = std::map<data::FightPropType,AbilityClampFightPropValue>::end(&this->fight_cal_prop_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v21 = std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,AbilityClampFightPropValue>>::operator*(&__for_begin);
    prop_type = std::get<0ul,data::FightPropType const,AbilityClampFightPropValue>(v21);
    prop_value = (std::tuple_element<1,const std::pair<const data::FightPropType,AbilityClampFightPropValue> >::type *)std::get<1ul,data::FightPropType const,AbilityClampFightPropValue>(v21);
    if ( *(_BYTE *)(((unsigned __int64)prop_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)prop_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)prop_type >> 3) + 0x7FFF8000) )
    {
      *(double *)v3.m128i_i64 = __asan_report_load4(prop_type);
    }
    if ( FightPropComp::isMaxEnergyType(*prop_type) )
      goto LABEL_10;
    if ( *(_BYTE *)(((unsigned __int64)prop_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)prop_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)prop_type >> 3) + 0x7FFF8000) )
    {
      *(double *)v3.m128i_i64 = __asan_report_load4(prop_type);
    }
    if ( *prop_type == FIGHT_PROP_MAX_HP || is_include_ability )
LABEL_10:
      v4 = 1;
    else
      v4 = 0;
    *(float *)v3.m128i_i32 = FightPropValue::getValue(prop_value, v4);
    v5 = _mm_cvtsi128_si32(v3);
    if ( *(_BYTE *)(((unsigned __int64)prop_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)prop_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)prop_type >> 3) + 0x7FFF8000) )
    {
      *(double *)v3.m128i_i64 = __asan_report_load4(prop_type);
    }
    key = *prop_type;
    v6 = google::protobuf::Map<unsigned int,float>::operator[](prop_map, &key);
    v7 = (int *)v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v6);
    }
    *v7 = v5;
    std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,AbilityClampFightPropValue>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->fight_cur_prop_map_;
  __for_begin._M_node = std::map<data::FightPropType,float>::begin(&this->fight_cur_prop_map_)._M_node;
  __for_end._M_node = std::map<data::FightPropType,float>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,float> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,float> >::_Self *)&__for_end) )
  {
    v18 = std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,float>>::operator*((const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,float> > *const)&__for_begin);
    prop_type_0 = std::get<0ul,data::FightPropType const,float>(v18);
    v8 = (std::tuple_element<1,const std::pair<const data::FightPropType,float> >::type *)std::get<1ul,data::FightPropType const,float>(v18);
    prop_value_0 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    v11 = *(_DWORD *)prop_value_0;
    if ( *(_BYTE *)(((unsigned __int64)prop_type_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)prop_type_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)prop_type_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(prop_type_0);
    }
    key = *prop_type_0;
    v9 = google::protobuf::Map<unsigned int,float>::operator[](prop_map, &key);
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v9);
    }
    *v10 = v11;
    std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,float>>::operator++((std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,float> > *const)&__for_begin);
  }
};

// Line 231: range 0000000014F74792-0000000014F747DA
bool __cdecl FightPropComp::getIsUseAbilityProperty(const FightPropComp *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_use_ability_property_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_use_ability_property_);
  return this->is_use_ability_property_;
};

// Line 232: range 0000000017A01450-0000000017A0149D
bool __cdecl FightPropComp::getIsGuarded(const FightPropComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_guarded_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_guarded_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_guarded_);
  }
  return this->is_guarded_;
};

// Line 232: range 0000000017A0149E-0000000017A014F4
void __cdecl FightPropComp::setIsGuarded(FightPropComp *const this, bool is_guarded__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_guarded_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_guarded_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_guarded_);
  }
  this->is_guarded_ = is_guarded__out;
};

// Line 248: range 00000000176B83B0-00000000176B870F
void __cdecl FightPropComp::getFightPropValueMap<std::map<data::FightPropType,float>>(
        const FightPropComp *const this,
        std::map<data::FightPropType,float> *prop_map,
        bool is_include_ability)
{
  __m128i v3; // xmm0
  bool v4; // al
  int v5; // ebx
  std::map<data::FightPropType,float>::mapped_type *v6; // rax
  int *v7; // rdx
  std::tuple_element<1,const std::pair<const data::FightPropType,float> >::type *v8; // rax
  std::map<data::FightPropType,float>::mapped_type *v9; // rax
  _DWORD *v10; // rdx
  int v11; // [rsp+8h] [rbp-88h]
  std::map<data::FightPropType,float>::key_type __k; // [rsp+2Ch] [rbp-64h] BYREF
  std::map<data::FightPropType,AbilityClampFightPropValue>::const_iterator __for_begin; // [rsp+30h] [rbp-60h] BYREF
  std::map<data::FightPropType,AbilityClampFightPropValue>::const_iterator __for_end; // [rsp+38h] [rbp-58h] BYREF
  const std::map<data::FightPropType,AbilityClampFightPropValue> *__for_range; // [rsp+40h] [rbp-50h]
  const std::map<data::FightPropType,float> *__for_range_0; // [rsp+48h] [rbp-48h]
  const std::pair<const data::FightPropType,float> *v18; // [rsp+50h] [rbp-40h]
  std::tuple_element<0,const std::pair<const data::FightPropType,float> >::type *prop_type_0; // [rsp+58h] [rbp-38h]
  std::tuple_element<1,const std::pair<const data::FightPropType,float> >::type *prop_value_0; // [rsp+60h] [rbp-30h]
  const std::pair<const data::FightPropType,AbilityClampFightPropValue> *v21; // [rsp+68h] [rbp-28h]
  std::tuple_element<0,const std::pair<const data::FightPropType,AbilityClampFightPropValue> >::type *prop_type; // [rsp+70h] [rbp-20h]
  std::tuple_element<1,const std::pair<const data::FightPropType,AbilityClampFightPropValue> >::type *prop_value; // [rsp+78h] [rbp-18h]

  __for_range = &this->fight_cal_prop_map_;
  __for_begin._M_node = std::map<data::FightPropType,AbilityClampFightPropValue>::begin(&this->fight_cal_prop_map_)._M_node;
  __for_end._M_node = std::map<data::FightPropType,AbilityClampFightPropValue>::end(&this->fight_cal_prop_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v21 = std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,AbilityClampFightPropValue>>::operator*(&__for_begin);
    prop_type = std::get<0ul,data::FightPropType const,AbilityClampFightPropValue>(v21);
    prop_value = (std::tuple_element<1,const std::pair<const data::FightPropType,AbilityClampFightPropValue> >::type *)std::get<1ul,data::FightPropType const,AbilityClampFightPropValue>(v21);
    if ( *(_BYTE *)(((unsigned __int64)prop_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)prop_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)prop_type >> 3) + 0x7FFF8000) )
    {
      *(double *)v3.m128i_i64 = __asan_report_load4(prop_type);
    }
    if ( FightPropComp::isMaxEnergyType(*prop_type) )
      goto LABEL_10;
    if ( *(_BYTE *)(((unsigned __int64)prop_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)prop_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)prop_type >> 3) + 0x7FFF8000) )
    {
      *(double *)v3.m128i_i64 = __asan_report_load4(prop_type);
    }
    if ( *prop_type == FIGHT_PROP_MAX_HP || is_include_ability )
LABEL_10:
      v4 = 1;
    else
      v4 = 0;
    *(float *)v3.m128i_i32 = FightPropValue::getValue(prop_value, v4);
    v5 = _mm_cvtsi128_si32(v3);
    if ( *(_BYTE *)(((unsigned __int64)prop_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)prop_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)prop_type >> 3) + 0x7FFF8000) )
    {
      *(double *)v3.m128i_i64 = __asan_report_load4(prop_type);
    }
    __k = *prop_type;
    v6 = std::map<data::FightPropType,float>::operator[](prop_map, &__k);
    v7 = (int *)v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v6);
    }
    *v7 = v5;
    std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,AbilityClampFightPropValue>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->fight_cur_prop_map_;
  __for_begin._M_node = std::map<data::FightPropType,float>::begin(&this->fight_cur_prop_map_)._M_node;
  __for_end._M_node = std::map<data::FightPropType,float>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,float> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,float> >::_Self *)&__for_end) )
  {
    v18 = std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,float>>::operator*((const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,float> > *const)&__for_begin);
    prop_type_0 = std::get<0ul,data::FightPropType const,float>(v18);
    v8 = (std::tuple_element<1,const std::pair<const data::FightPropType,float> >::type *)std::get<1ul,data::FightPropType const,float>(v18);
    prop_value_0 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    v11 = *(_DWORD *)prop_value_0;
    if ( *(_BYTE *)(((unsigned __int64)prop_type_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)prop_type_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)prop_type_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(prop_type_0);
    }
    __k = *prop_type_0;
    v9 = std::map<data::FightPropType,float>::operator[](prop_map, &__k);
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v9);
    }
    *v10 = v11;
    std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,float>>::operator++((std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,float> > *const)&__for_begin);
  }
};

// Line 11330: range 000000001762E77E-000000001762E7CF
void __cdecl FightPropComp::setIsUseAbilityProperty(FightPropComp *const this, bool is_use_ability_property__out)
{
  if ( *(char *)(((unsigned __int64)&this->is_use_ability_property_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_use_ability_property_);
  this->is_use_ability_property_ = is_use_ability_property__out;
};
