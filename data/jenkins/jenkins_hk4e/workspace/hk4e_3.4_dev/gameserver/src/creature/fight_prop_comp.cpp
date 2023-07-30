// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/creature/fight_prop_comp.cpp

// Line 24: range 000000001796D025-000000001796D103
common::milog::MiLogStream *__cdecl operator<<(
        common::milog::MiLogStream *stream,
        const FightPropValue *fight_prop_value)
{
  __m128i v2; // xmm0
  common::milog::MiLogStream *v3; // rbx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rbx
  int (**vptr_FightPropValue)(...); // rax
  common::milog::MiLogStream *v7; // rax
  float val; // [rsp+18h] [rbp-18h] BYREF
  float v10[5]; // [rsp+1Ch] [rbp-14h] BYREF

  v3 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(stream, (const char (*)[7])"(base:");
  *(float *)v2.m128i_i32 = FightPropValue::getBaseValue(fight_prop_value);
  LODWORD(val) = _mm_cvtsi128_si32(v2);
  v4 = common::milog::MiLogStream::operator<<<float,(float *)0>(v3, &val);
  v5 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v4, (const char (*)[10])",ability:");
  if ( *(_BYTE *)(((unsigned __int64)fight_prop_value >> 3) + 0x7FFF8000) )
    __asan_report_load8(fight_prop_value);
  vptr_FightPropValue = fight_prop_value->_vptr_FightPropValue;
  if ( *(_BYTE *)(((unsigned __int64)fight_prop_value->_vptr_FightPropValue >> 3) + 0x7FFF8000) )
    vptr_FightPropValue = (int (**)(...))__asan_report_load8(fight_prop_value->_vptr_FightPropValue);
  *(double *)v2.m128i_i64 = ((double (__fastcall *)(const FightPropValue *))*vptr_FightPropValue)(fight_prop_value);
  LODWORD(v10[0]) = _mm_cvtsi128_si32(v2);
  v7 = common::milog::MiLogStream::operator<<<float,(float *)0>(v5, v10);
  common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v7, (const char (*)[2])")");
  return stream;
};

// Line 29: range 000000001796D104-000000001796D480
void __cdecl FightPropGuard::~FightPropGuard(FightPropGuard *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  const std::weak_ptr<Creature> *v4; // rax
  Creature *v5; // rax
  FightPropComp *FightPropComp; // rax
  Creature *v7; // rax
  FightPropComp *v8; // rax
  Creature *v9; // rax
  FightPropComp *v10; // rax
  std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature> >,std::allocator<std::weak_ptr<Creature> > >::iterator __for_begin; // [rsp+10h] [rbp-D0h] BYREF
  std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature> >,std::allocator<std::weak_ptr<Creature> > >::iterator __for_end; // [rsp+18h] [rbp-C8h] BYREF
  std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature> >,std::allocator<std::weak_ptr<Creature> > > *__for_range; // [rsp+20h] [rbp-C0h]
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 15 creature_wtr:33 64 16 15 creature_ptr:35";
  *(_QWORD *)(v1 + 16) = FightPropGuard::~FightPropGuard;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  __for_range = &this->creature_set_;
  __for_begin._M_node = std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature>>,std::allocator<std::weak_ptr<Creature>>>::begin(&this->creature_set_)._M_node;
  __for_end._M_node = std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature>>,std::allocator<std::weak_ptr<Creature>>>::end(&this->creature_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v4 = std::_Rb_tree_const_iterator<std::weak_ptr<Creature>>::operator*(&__for_begin);
    std::weak_ptr<Creature>::weak_ptr((std::weak_ptr<Creature> *const)(v1 + 32), v4);
    std::weak_ptr<Creature>::lock((const std::weak_ptr<Creature> *const)(v1 + 64));
    if ( !std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v1 + 64)) )
    {
      v5 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      FightPropComp = Creature::getFightPropComp(v5);
      if ( FightPropComp::getIsGuarded(FightPropComp) )
      {
        v7 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        v8 = Creature::getFightPropComp(v7);
        FightPropComp::flushModifiedProps(v8, 1);
        v9 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        v10 = Creature::getFightPropComp(v9);
        FightPropComp::setIsGuarded(v10, 0);
      }
    }
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v1 + 64));
    std::weak_ptr<Creature>::~weak_ptr((std::weak_ptr<Creature> *const)(v1 + 32));
    std::_Rb_tree_const_iterator<std::weak_ptr<Creature>>::operator++(&__for_begin);
  }
  std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature>>,std::allocator<std::weak_ptr<Creature>>>::~set(&this->creature_set_);
  if ( v14 == (char *)v1 )
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

// Line 55: range 000000001796D482-000000001796D7AB
void __cdecl FightPropGuard::addCreature(FightPropGuard *const this, Creature *creature, bool is_by_ability)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  FightPropComp *FightPropComp; // rax
  FightPropComp *v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  Player *v10; // rax
  PlayerAvatarComp *AvatarComp; // r14
  std::weak_ptr<Creature> __x; // [rsp+20h] [rbp-A0h] BYREF
  char v14[144]; // [rsp+30h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 13 avatar_ptr:62 64 16 13 player_ptr:65";
  *(_QWORD *)(v3 + 16) = FightPropGuard::addCreature;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  FightPropComp = Creature::getFightPropComp(creature);
  if ( !FightPropComp::getIsGuarded(FightPropComp) )
  {
    v7 = Creature::getFightPropComp(creature);
    FightPropComp::setIsGuarded(v7, 1);
    toThisPtr<Creature>((Creature *)(v3 + 64));
    std::weak_ptr<Creature>::weak_ptr<Creature,void>(&__x, (const std::shared_ptr<Creature> *)(v3 + 64));
    std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature>>,std::allocator<std::weak_ptr<Creature>>>::insert(
      &this->creature_set_,
      &__x);
    std::weak_ptr<Creature>::~weak_ptr(&__x);
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v3 + 64));
    if ( !is_by_ability )
    {
      toPtr<Avatar,Creature>((Creature *)(v3 + 32));
      if ( std::operator!=<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 32)) )
      {
        v8 = (unsigned __int64)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          v8 = __asan_report_load8(v8);
        v9 = *(_QWORD *)v8 + 152LL;
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
          v8 = __asan_report_load8(*(_QWORD *)v8 + 152LL);
        (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v9)(v3 + 64, v8);
        if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 64)) )
        {
          v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          AvatarComp = Player::getAvatarComp(v10);
          std::weak_ptr<Avatar>::weak_ptr<Avatar,void>(
            (std::weak_ptr<Avatar> *const)&__x,
            (const std::shared_ptr<Avatar> *)(v3 + 32));
          PlayerAvatarComp::recordAvatarInfoLogs(AvatarComp, (AvatarWtr *)&__x);
          std::weak_ptr<Avatar>::~weak_ptr((std::weak_ptr<Avatar> *const)&__x);
        }
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 32));
    }
  }
  if ( v14 == (char *)v3 )
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
};

// Line 76: range 000000001796D7AC-000000001796D802
void __cdecl FightPropGuard::addCreature(FightPropGuard *const this, CreaturePtr *p_creature_ptr, bool is_by_ability)
{
  Creature *v3; // rcx

  if ( std::operator!=<Creature>(0LL, p_creature_ptr) )
  {
    v3 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_creature_ptr);
    FightPropGuard::addCreature(this, v3, is_by_ability);
  }
};

// Line 84: range 000000001796D804-000000001796D8F8
float __cdecl FightPropValue::getValue(const FightPropValue *const this, bool is_include_ability)
{
  int (**vptr_FightPropValue)(...); // rax
  float base_value; // [rsp+0h] [rbp-10h]

  if ( is_include_ability )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->base_value_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->base_value_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->base_value_);
    }
    base_value = this->base_value_;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    vptr_FightPropValue = this->_vptr_FightPropValue;
    if ( *(_BYTE *)(((unsigned __int64)this->_vptr_FightPropValue >> 3) + 0x7FFF8000) )
      vptr_FightPropValue = (int (**)(...))__asan_report_load8(this->_vptr_FightPropValue);
    return ((float (__fastcall *)(const FightPropValue *const))*vptr_FightPropValue)(this) + base_value;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->base_value_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->base_value_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->base_value_);
    }
    return this->base_value_;
  }
};

// Line 96: range 000000001796D8FA-000000001796DA06
void __cdecl FightPropValue::addFromValue(FightPropValue *const this, const FightPropValue *rhs)
{
  double v2; // xmm0_8
  int (**vptr_FightPropValue)(...); // rax

  *(float *)&v2 = FightPropValue::getBaseValue(rhs);
  if ( *(_BYTE *)(((unsigned __int64)&this->base_value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->base_value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    v2 = __asan_report_load4(&this->base_value_);
  }
  *(float *)&v2 = *(float *)&v2 + this->base_value_;
  this->base_value_ = *(float *)&v2;
  if ( *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) )
    __asan_report_load8(rhs);
  vptr_FightPropValue = rhs->_vptr_FightPropValue;
  if ( *(_BYTE *)(((unsigned __int64)rhs->_vptr_FightPropValue >> 3) + 0x7FFF8000) )
    vptr_FightPropValue = (int (**)(...))__asan_report_load8(rhs->_vptr_FightPropValue);
  (*vptr_FightPropValue)(rhs);
  if ( *(_BYTE *)(((unsigned __int64)&this->ability_value_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ability_value_ >> 3) + 0x7FFF8000) )
  {
    v2 = __asan_report_load4(&this->ability_value_);
  }
  this->ability_value_ = *(float *)&v2 + this->ability_value_;
};

// Line 102: range 000000001796DA08-000000001796DAFF
void __cdecl FightPropValue::assignCalcProp(FightPropValue *const this, const std::function<float(bool)> *calc_prop)
{
  __m128i v2; // xmm0
  float v3; // edx
  double v4; // xmm0_8
  float v5; // xmm0_4

  *(float *)v2.m128i_i32 = std::function<float ()(bool)>::operator()(calc_prop, 0);
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  if ( *(_BYTE *)(((unsigned __int64)&this->base_value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->base_value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->base_value_);
  }
  this->base_value_ = v3;
  *(float *)&v4 = std::function<float ()(bool)>::operator()(calc_prop, 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->base_value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->base_value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    v4 = __asan_report_load4(&this->base_value_);
  }
  v5 = *(float *)&v4 - this->base_value_;
  if ( *(_BYTE *)(((unsigned __int64)&this->ability_value_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ability_value_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ability_value_);
  }
  this->ability_value_ = v5;
};

// Line 108: range 000000001796DB00-000000001796DC95
float __cdecl AbilityClampFightPropValue::getAbilityValue(const AbilityClampFightPropValue *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  float *v3; // rax
  float *v4; // rdx
  const data::AbilityPropExcelConfig *ability_prop_config_ptr; // [rsp+18h] [rbp-28h]
  std::shared_ptr<Config> v6[2]; // [rsp+20h] [rbp-20h] BYREF

  if ( std::operator==<char>(&this->clamp_ability_prop_, byte_261E1600) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->ability_value_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ability_value_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->ability_value_);
    }
    return this->ability_value_;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v6);
    v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v6);
    ability_prop_config_ptr = data::AbilityPropExcelConfigMgrBase::findAbilityPropExcelConfig(
                                &v2->design_config.txt_config_mgr.ability_prop_config_mgr,
                                &this->clamp_ability_prop_);
    std::shared_ptr<Config>::~shared_ptr(v6);
    if ( ability_prop_config_ptr )
    {
      v3 = (float *)std::clamp<float>(
                      &this->ability_value_,
                      &ability_prop_config_ptr->overall_min,
                      &ability_prop_config_ptr->overall_max);
      v4 = v3;
      if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v3);
      }
      return *v4;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->ability_value_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ability_value_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->ability_value_);
      }
      return this->ability_value_;
    }
  }
};

// Line 123: range 000000001796DC96-000000001796DF88
void __cdecl FightPropComp::getFightPropValueList(
        const FightPropComp *const this,
        proto::SceneEntityInfo *entity_info,
        bool is_include_ability)
{
  char v3; // al
  float Value; // xmm0_4
  bool include_ability; // [rsp+2Fh] [rbp-61h]
  std::map<data::FightPropType,AbilityClampFightPropValue>::const_iterator __for_begin; // [rsp+30h] [rbp-60h] BYREF
  std::map<data::FightPropType,AbilityClampFightPropValue>::const_iterator __for_end; // [rsp+38h] [rbp-58h] BYREF
  const std::map<data::FightPropType,AbilityClampFightPropValue> *__for_range; // [rsp+40h] [rbp-50h]
  const std::map<data::FightPropType,float> *__for_range_0; // [rsp+48h] [rbp-48h]
  const std::pair<const data::FightPropType,float> *v11; // [rsp+50h] [rbp-40h]
  std::tuple_element<0,const std::pair<const data::FightPropType,float> >::type *prop_type_0; // [rsp+58h] [rbp-38h]
  std::tuple_element<1,const std::pair<const data::FightPropType,float> >::type *prop_value_0; // [rsp+60h] [rbp-30h]
  proto::FightPropPair *fight_prop_pair_0; // [rsp+68h] [rbp-28h]
  const std::pair<const data::FightPropType,AbilityClampFightPropValue> *v15; // [rsp+70h] [rbp-20h]
  std::tuple_element<0,const std::pair<const data::FightPropType,AbilityClampFightPropValue> >::type *prop_type; // [rsp+78h] [rbp-18h]
  std::tuple_element<1,const std::pair<const data::FightPropType,AbilityClampFightPropValue> >::type *prop_value; // [rsp+80h] [rbp-10h]
  proto::FightPropPair *fight_prop_pair; // [rsp+88h] [rbp-8h]

  __for_range = &this->fight_cal_prop_map_;
  __for_begin._M_node = std::map<data::FightPropType,AbilityClampFightPropValue>::begin(&this->fight_cal_prop_map_)._M_node;
  __for_end._M_node = std::map<data::FightPropType,AbilityClampFightPropValue>::end(&this->fight_cal_prop_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v15 = std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,AbilityClampFightPropValue>>::operator*(&__for_begin);
    prop_type = std::get<0ul,data::FightPropType const,AbilityClampFightPropValue>(v15);
    prop_value = (std::tuple_element<1,const std::pair<const data::FightPropType,AbilityClampFightPropValue> >::type *)std::get<1ul,data::FightPropType const,AbilityClampFightPropValue>(v15);
    if ( *(_BYTE *)(((unsigned __int64)prop_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)prop_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)prop_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(prop_type);
    }
    if ( FightPropComp::isMaxEnergyType(*prop_type) )
      goto LABEL_10;
    if ( *(_BYTE *)(((unsigned __int64)prop_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)prop_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)prop_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(prop_type);
    }
    if ( *prop_type == FIGHT_PROP_MAX_HP || is_include_ability )
LABEL_10:
      v3 = 1;
    else
      v3 = 0;
    include_ability = v3;
    fight_prop_pair = proto::SceneEntityInfo::add_fight_prop_list(entity_info);
    if ( *(_BYTE *)(((unsigned __int64)prop_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)prop_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)prop_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(prop_type);
    }
    proto::FightPropPair::set_prop_type(fight_prop_pair, *prop_type);
    Value = FightPropValue::getValue(prop_value, include_ability);
    proto::FightPropPair::set_prop_value(fight_prop_pair, Value);
    std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,AbilityClampFightPropValue>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->fight_cur_prop_map_;
  __for_begin._M_node = std::map<data::FightPropType,float>::begin(&this->fight_cur_prop_map_)._M_node;
  __for_end._M_node = std::map<data::FightPropType,float>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,float> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,float> >::_Self *)&__for_end) )
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,float>>::operator*((const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,float> > *const)&__for_begin);
    prop_type_0 = std::get<0ul,data::FightPropType const,float>(v11);
    prop_value_0 = (std::tuple_element<1,const std::pair<const data::FightPropType,float> >::type *)std::get<1ul,data::FightPropType const,float>(v11);
    fight_prop_pair_0 = proto::SceneEntityInfo::add_fight_prop_list(entity_info);
    if ( *(_BYTE *)(((unsigned __int64)prop_type_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)prop_type_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)prop_type_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(prop_type_0);
    }
    proto::FightPropPair::set_prop_type(fight_prop_pair_0, *prop_type_0);
    if ( *(_BYTE *)(((unsigned __int64)prop_value_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)prop_value_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)prop_value_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(prop_value_0);
    }
    proto::FightPropPair::set_prop_value(fight_prop_pair_0, *prop_value_0);
    std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,float>>::operator++((std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,float> > *const)&__for_begin);
  }
};

// Line 141: range 000000001796DF8A-000000001796DFAD
float __cdecl FightPropComp::getMaxHp(const FightPropComp *const this)
{
  return FightPropComp::getPropValue(this, FIGHT_PROP_MAX_HP, 1);
};

// Line 146: range 000000001796DFAE-000000001796E0FA
void __cdecl FightPropComp::setCurHp(
        FightPropComp *const this,
        float hp,
        bool is_notify,
        FightPropNtfParamPtr *p_param_ptr)
{
  float *v4; // rax
  float hpa; // [rsp+14h] [rbp-4Ch]
  std::map<data::FightPropType,float>::key_type __k; // [rsp+2Ch] [rbp-34h] BYREF
  float old_hp; // [rsp+30h] [rbp-30h]
  float delta; // [rsp+34h] [rbp-2Ch]
  float *cur_hp; // [rsp+38h] [rbp-28h]
  std::shared_ptr<FightPropNtfParam> v11; // [rsp+40h] [rbp-20h] BYREF

  hpa = hp;
  if ( hp < 0.0099999998 )
    hpa = 0.0;
  __k = FIGHT_PROP_CUR_HP;
  v4 = std::map<data::FightPropType,float>::operator[](&this->fight_cur_prop_map_, &__k);
  cur_hp = v4;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v4);
  }
  old_hp = *cur_hp;
  *cur_hp = hpa;
  if ( is_notify )
  {
    delta = *cur_hp - old_hp;
    if ( std::fabs(delta) > 0.00000011920929 )
      FightPropComp::notifyProp(this, FIGHT_PROP_CUR_HP);
    std::shared_ptr<FightPropNtfParam>::shared_ptr(&v11, p_param_ptr);
    FightPropComp::notifyFightPropChangeReason(this, FIGHT_PROP_CUR_HP, delta, &v11);
    std::shared_ptr<FightPropNtfParam>::~shared_ptr(&v11);
  }
};

// Line 168: range 000000001796E0FC-000000001796E11F
float __cdecl FightPropComp::getCurHp(const FightPropComp *const this)
{
  return FightPropComp::getPropValue(this, FIGHT_PROP_CUR_HP, 1);
};

// Line 173: range 000000001796E120-000000001796E1F6
// local variable allocation has failed, the output may be wrong!
void __cdecl FightPropComp::changeCurHp(
        FightPropComp *const this,
        float delta,
        bool is_notify,
        FightPropNtfParamPtr *p_param_ptr)
{
  __m128i v4; // xmm0
  float cur_hpa; // [rsp+28h] [rbp-28h]
  float cur_hp; // [rsp+28h] [rbp-28h]
  float max_hp; // [rsp+2Ch] [rbp-24h]
  std::shared_ptr<FightPropNtfParam> v10; // [rsp+30h] [rbp-20h] BYREF

  *(float *)v4.m128i_i32 = FightPropComp::getCurHp(this);
  cur_hpa = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
  *(float *)v4.m128i_i32 = FightPropComp::getMaxHp(this);
  max_hp = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
  cur_hp = cur_hpa + delta;
  if ( cur_hp < 0.0 )
    cur_hp = 0.0;
  if ( cur_hp > max_hp )
    cur_hp = max_hp;
  std::shared_ptr<FightPropNtfParam>::shared_ptr(&v10, p_param_ptr);
  FightPropComp::setCurHp(this, cur_hp, is_notify, &v10);
  std::shared_ptr<FightPropNtfParam>::~shared_ptr(&v10);
};

// Line 192: range 000000001796E1F8-000000001796E98E
void __cdecl FightPropComp::setCurEnergy(
        FightPropComp *const this,
        float energy,
        bool is_notify,
        FightPropNtfParamPtr *p_param_ptr)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  Creature *creature; // rsi
  Creature *v8; // rax
  unsigned __int64 v9; // rax
  common::milog::MiLogStream *v10; // rcx
  common::milog::MiLogStream *v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  common::milog::MiLogStream *v14; // r14
  float *v15; // rax
  __m128i v16; // xmm0
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  Player *v19; // rax
  PlayerGmComp *GmComp; // rax
  int v22; // r14d
  std::map<data::FightPropType,float>::mapped_type *v23; // rax
  int *v24; // rdx
  data::ElementType elem_type; // [rsp+30h] [rbp-F0h]
  data::FightPropType max_energy_type; // [rsp+34h] [rbp-ECh]
  float old_energy; // [rsp+38h] [rbp-E8h]
  float delta; // [rsp+3Ch] [rbp-E4h]
  char *val; // [rsp+40h] [rbp-E0h] BYREF
  float *cur_energy; // [rsp+48h] [rbp-D8h]
  common::milog::MiLogStream v34; // [rsp+50h] [rbp-D0h] BYREF
  char v35[176]; // [rsp+70h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 19 cur_energy_type:208 64 16 14 avatar_ptr:200 96 16 14 player_ptr:221";
  *(_QWORD *)(v4 + 16) = FightPropComp::setCurEnergy;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->creature_);
  creature = this->creature_;
  v8 = creature;
  if ( *(_BYTE *)(((unsigned __int64)creature >> 3) + 0x7FFF8000) )
    v8 = (Creature *)__asan_report_load8(this->creature_);
  v9 = *(_QWORD *)v8->baseclass_0 + 24LL;
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    v9 = __asan_report_load8(v9);
  if ( (*(unsigned int (__fastcall **)(Creature *))v9)(creature) == 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->creature_);
    toPtr<Avatar,Creature>((Creature *)(v4 + 64));
    if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v4 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/creature/fight_prop_comp.cpp",
        "setCurEnergy",
        203);
      v11 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v34,
              (const char (*)[29])"dynamic_pointer_cast failed ");
      if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->creature_);
      common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v11, this->creature_);
      common::milog::MiLogStream::~MiLogStream(&v34);
    }
    else
    {
      v12 = (unsigned __int64)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        v12 = __asan_report_load8(v12);
      v13 = *(_QWORD *)v12 + 280LL;
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        v12 = __asan_report_load8(*(_QWORD *)v12 + 280LL);
      elem_type = (*(unsigned int (__fastcall **)(unsigned __int64))v13)(v12);
      *(_DWORD *)(v4 + 48) = FightPropComp::getCurEnergyType(elem_type);
      max_energy_type = FightPropComp::getMaxEnergyType(elem_type);
      if ( *(_DWORD *)(v4 + 48) && max_energy_type )
      {
        v15 = std::map<data::FightPropType,float>::operator[](
                &this->fight_cur_prop_map_,
                (const std::map<data::FightPropType,float>::key_type *)(v4 + 48));
        cur_energy = v15;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v15);
        }
        old_energy = *cur_energy;
        v16 = (__m128i)LODWORD(energy);
        *cur_energy = energy;
        v17 = (unsigned __int64)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          v17 = __asan_report_load8(v17);
        v18 = *(_QWORD *)v17 + 152LL;
        if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
          v17 = __asan_report_load8(*(_QWORD *)v17 + 152LL);
        (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v18)(v4 + 96, v17);
        if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v4 + 96), 0LL) )
        {
          v19 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          GmComp = Player::getGmComp(v19);
          if ( PlayerGmComp::getIsEnergyInfinite(GmComp) )
          {
            *(float *)v16.m128i_i32 = FightPropComp::getPropValue(this, max_energy_type, 1);
            v22 = _mm_cvtsi128_si32(v16);
            v23 = std::map<data::FightPropType,float>::operator[](
                    &this->fight_cur_prop_map_,
                    (const std::map<data::FightPropType,float>::key_type *)(v4 + 48));
            v24 = (int *)v23;
            if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(v23);
            }
            *v24 = v22;
          }
        }
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 96));
        if ( is_notify )
        {
          if ( *(_BYTE *)(((unsigned __int64)cur_energy >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)cur_energy & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cur_energy >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4(cur_energy);
          }
          delta = *cur_energy - old_energy;
          if ( std::fabs(delta) > 0.00000011920929 )
            FightPropComp::notifyProp(this, *(data::FightPropType *)(v4 + 48));
          std::shared_ptr<FightPropNtfParam>::shared_ptr(
            (std::shared_ptr<FightPropNtfParam> *const)(v4 + 96),
            p_param_ptr);
          FightPropComp::notifyFightPropChangeReason(
            this,
            *(data::FightPropType *)(v4 + 48),
            delta,
            (FightPropNtfParamPtr *)(v4 + 96));
          std::shared_ptr<FightPropNtfParam>::~shared_ptr((std::shared_ptr<FightPropNtfParam> *const)(v4 + 96));
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/creature/fight_prop_comp.cpp",
          "setCurEnergy",
          212);
        v14 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                &v34,
                (const char (*)[33])"getEnergyType failed, elem_type:");
        val = (char *)data::enumValToStr(elem_type);
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v14, (const char *const *)&val);
        common::milog::MiLogStream::~MiLogStream(&v34);
      }
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/creature/fight_prop_comp.cpp",
      "setCurEnergy",
      196);
    v10 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            &v34,
            (const char (*)[25])"creature_ is not avatar ");
    if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->creature_);
    common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v10, this->creature_);
    common::milog::MiLogStream::~MiLogStream(&v34);
  }
  if ( v35 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 240: range 000000001796E990-000000001796EE4E
float __cdecl FightPropComp::getCurEnergy(const FightPropComp *const this)
{
  __m128i v1; // xmm0
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  Creature *creature; // rsi
  Creature *v6; // rax
  unsigned __int64 v7; // rax
  common::milog::MiLogStream *v8; // rcx
  float v9; // r14d
  common::milog::MiLogStream *v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  float result; // xmm0_4
  data::ElementType elem_type; // [rsp+18h] [rbp-98h]
  data::FightPropType cur_energy_type; // [rsp+1Ch] [rbp-94h]
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-90h] BYREF
  char v17[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 avatar_ptr:248";
  *(_QWORD *)(v2 + 16) = FightPropComp::getCurEnergy;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->creature_);
  creature = this->creature_;
  v6 = creature;
  if ( *(_BYTE *)(((unsigned __int64)creature >> 3) + 0x7FFF8000) )
    v6 = (Creature *)__asan_report_load8(this->creature_);
  v7 = *(_QWORD *)v6->baseclass_0 + 24LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8(v7);
  if ( (*(unsigned int (__fastcall **)(Creature *))v7)(creature) == 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->creature_);
    toPtr<Avatar,Creature>((Creature *)(v2 + 32));
    if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/creature/fight_prop_comp.cpp",
        "getCurEnergy",
        251);
      v10 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v16,
              (const char (*)[29])"dynamic_pointer_cast failed ");
      if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->creature_);
    }
    else
    {
      v11 = (unsigned __int64)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        v11 = __asan_report_load8(v11);
      v12 = *(_QWORD *)v11 + 280LL;
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        v11 = __asan_report_load8(*(_QWORD *)v11 + 280LL);
      elem_type = (*(unsigned int (__fastcall **)(unsigned __int64))v12)(v11);
      cur_energy_type = FightPropComp::getCurEnergyType(elem_type);
      if ( cur_energy_type )
      {
        *(float *)v1.m128i_i32 = FightPropComp::getPropValue(this, cur_energy_type, 1);
        v9 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
        goto LABEL_29;
      }
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/creature/fight_prop_comp.cpp",
        "getCurEnergy",
        260);
      v10 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v16,
              (const char (*)[26])"cur_energy_type is none, ");
      if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->creature_);
    }
    common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v10, this->creature_);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v9 = 0.0;
LABEL_29:
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 32));
    goto LABEL_30;
  }
  common::milog::MiLogStream::create(
    &v16,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/creature/fight_prop_comp.cpp",
    "getCurEnergy",
    244);
  v8 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
         &v16,
         (const char (*)[25])"creature_ is not avatar ");
  if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->creature_);
  common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v8, this->creature_);
  common::milog::MiLogStream::~MiLogStream(&v16);
  v9 = 0.0;
LABEL_30:
  result = v9;
  if ( v17 == (char *)v2 )
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

// Line 268: range 000000001796EE50-000000001796EF21
float __cdecl FightPropComp::getMaxEnergy(const FightPropComp *const this)
{
  __m128i v1; // xmm0
  Creature *creature; // rdx
  Creature *v3; // rax
  unsigned __int64 v4; // rax
  data::ElementType elem_type; // [rsp+18h] [rbp-8h]
  data::FightPropType max_energy_type; // [rsp+1Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->creature_);
  creature = this->creature_;
  v3 = creature;
  if ( *(_BYTE *)(((unsigned __int64)creature >> 3) + 0x7FFF8000) )
    v3 = (Creature *)__asan_report_load8(this->creature_);
  v4 = *(_QWORD *)v3->baseclass_0 + 280LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(v4);
  elem_type = (*(unsigned int (__fastcall **)(Creature *))v4)(creature);
  max_energy_type = FightPropComp::getMaxEnergyType(elem_type);
  if ( max_energy_type == FIGHT_PROP_NONE )
    return 0.0;
  *(float *)v1.m128i_i32 = FightPropComp::getPropValue(this, max_energy_type, 1);
  return COERCE_FLOAT(_mm_cvtsi128_si32(v1));
};

// Line 281: range 000000001796EF22-000000001796F97E
float __fastcall FightPropComp::getPropValue(
        const FightPropComp *const this,
        data::FightPropType type,
        bool is_include_ability,
        __m128i a4)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,float> >::pointer v7; // rdx
  float *p_second; // rax
  int second_low; // eax
  std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> >::pointer v10; // rax
  std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> >::pointer v11; // rax
  float *v12; // rax
  int *v13; // rdx
  float *v14; // rax
  float *v15; // rdx
  __m128i v16; // xmm0
  AbilityComp *AbilityComp; // rbx
  GameserverService *v18; // rax
  float v19; // eax
  float *v20; // rax
  float *v21; // rdx
  __m128i v22; // xmm0
  AbilityComp *v23; // rbx
  GameserverService *v24; // rax
  float v25; // eax
  __m128i v26; // xmm0
  std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> >::pointer v27; // rax
  __m128i v28; // xmm0
  std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> >::pointer v29; // rax
  __m128i v30; // xmm0
  std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> >::pointer v31; // rax
  common::milog::MiLogStream *v32; // rcx
  __m128i v33; // xmm0
  std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> >::pointer v34; // rax
  float *v35; // rax
  int *v36; // rdx
  std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> >::pointer v37; // rax
  float result; // xmm0_4
  float v39; // [rsp+Ch] [rbp-104h]
  float v40; // [rsp+Ch] [rbp-104h]
  float __b; // [rsp+28h] [rbp-E8h] BYREF
  float react_critical; // [rsp+2Ch] [rbp-E4h]
  float react_critical_hurt; // [rsp+30h] [rbp-E0h]
  float base_react_critical_hurt; // [rsp+34h] [rbp-DCh]
  float add_percent_0; // [rsp+38h] [rbp-D8h]
  float buff_defense_delta; // [rsp+3Ch] [rbp-D4h]
  float add_percent; // [rsp+40h] [rbp-D0h]
  float buff_attack_delta; // [rsp+44h] [rbp-CCh]
  std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,float> >::_Self __y; // [rsp+48h] [rbp-C8h] BYREF
  common::milog::MiLogStream v51; // [rsp+50h] [rbp-C0h] BYREF
  char v52[160]; // [rsp+70h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 15 total_value:293 64 4 30 base_value_fight_prop_type:294 80 4 8 type:280 96 8 8 iter:361";
  *(_QWORD *)(v4 + 16) = FightPropComp::getPropValue;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -202116352;
  *(_DWORD *)(v4 + 80) = type;
  if ( FightPropComp::isCurPropType(*(data::FightPropType *)(v4 + 80)) )
  {
    *(std::map<data::FightPropType,float>::const_iterator *)(v4 + 96) = std::map<data::FightPropType,float>::find(
                                                                          &this->fight_cur_prop_map_,
                                                                          (const std::map<data::FightPropType,float>::key_type *)(v4 + 80));
    __y._M_node = std::map<data::FightPropType,float>::end(&this->fight_cur_prop_map_)._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,float> >::_Self *)(v4 + 96),
           &__y) )
    {
      v7 = std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,float>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,float> > *const)(v4 + 96));
      p_second = &v7->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      second_low = SLODWORD(v7->second);
      goto LABEL_61;
    }
LABEL_60:
    *(float *)&second_low = 0.0;
    goto LABEL_61;
  }
  if ( FightPropComp::isExtendBaseValuePropType(*(data::FightPropType *)(v4 + 80)) )
  {
    *(_DWORD *)(v4 + 48) = 0;
    *(_DWORD *)(v4 + 64) = FightPropComp::getBaseValuePropType(*(data::FightPropType *)(v4 + 80));
    *(std::map<data::FightPropType,AbilityClampFightPropValue>::const_iterator *)(v4 + 96) = std::map<data::FightPropType,AbilityClampFightPropValue>::find(
                                                                                               &this->fight_cal_prop_map_,
                                                                                               (const std::map<data::FightPropType,AbilityClampFightPropValue>::key_type *)(v4 + 64));
    __y._M_node = std::map<data::FightPropType,AbilityClampFightPropValue>::end(&this->fight_cal_prop_map_)._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> >::_Self *)(v4 + 96),
           (const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> >::_Self *)&__y) )
    {
      v10 = std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,AbilityClampFightPropValue>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> > *const)(v4 + 96));
      *(float *)(v4 + 48) = FightPropValue::getBaseValue(&v10->second) + *(float *)(v4 + 48);
    }
    if ( is_include_ability )
    {
      *(std::map<data::FightPropType,AbilityClampFightPropValue>::const_iterator *)(v4 + 96) = std::map<data::FightPropType,AbilityClampFightPropValue>::find(
                                                                                                 &this->fight_cal_prop_map_,
                                                                                                 (const std::map<data::FightPropType,AbilityClampFightPropValue>::key_type *)(v4 + 80));
      __y._M_node = std::map<data::FightPropType,AbilityClampFightPropValue>::end(&this->fight_cal_prop_map_)._M_node;
      if ( std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> >::_Self *)(v4 + 96),
             (const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> >::_Self *)&__y) )
      {
        v11 = std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,AbilityClampFightPropValue>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> > *const)(v4 + 96));
        *(float *)(v4 + 48) = AbilityClampFightPropValue::getAbilityValue(&v11->second) + *(float *)(v4 + 48);
      }
    }
    if ( *(_DWORD *)(v4 + 80) == 3006 )
    {
      __b = 0.0;
      v12 = (float *)std::max<float>((const float *)(v4 + 48), &__b);
      v13 = (int *)v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      second_low = *v13;
    }
    else
    {
      second_low = *(int *)(v4 + 48);
    }
  }
  else
  {
    switch ( *(_DWORD *)(v4 + 80) )
    {
      case 0xBB8:
        __b = FightPropComp::getPropValue(this, FIGHT_PROP_ATTACK_PERCENT, 1) + 1.0;
        *(_DWORD *)(v4 + 64) = 0;
        v14 = (float *)std::max<float>((const float *)(v4 + 64), &__b);
        v15 = v14;
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v14);
        }
        v16 = (__m128i)*(unsigned int *)v15;
        add_percent = *v15;
        if ( is_include_ability )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->creature_);
          AbilityComp = Creature::getAbilityComp(this->creature_);
          v18 = ServiceBox::findService<GameserverService>();
          *(float *)v16.m128i_i32 = AbilityComp::getProperty(AbilityComp, &v18->ability_data_mgr.ACTOR_ATTACK_DELTA);
          v19 = COERCE_FLOAT(_mm_cvtsi128_si32(v16));
        }
        else
        {
          v19 = 0.0;
        }
        buff_attack_delta = v19;
        *(float *)v16.m128i_i32 = FightPropComp::getPropValue(this, FIGHT_PROP_BASE_ATTACK, is_include_ability);
        v39 = *(float *)v16.m128i_i32 * add_percent;
        *(float *)v16.m128i_i32 = FightPropComp::getPropValue(this, FIGHT_PROP_ATTACK, 0);
        *(float *)v16.m128i_i32 = (float)(*(float *)v16.m128i_i32 + v39) + buff_attack_delta;
        *(float *)&second_low = COERCE_FLOAT(_mm_cvtsi128_si32(v16));
        break;
      case 0xBB9:
        __b = FightPropComp::getPropValue(this, FIGHT_PROP_DEFENSE_PERCENT, 1) + 1.0;
        *(_DWORD *)(v4 + 64) = 0;
        v20 = (float *)std::max<float>((const float *)(v4 + 64), &__b);
        v21 = v20;
        if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v20);
        }
        v22 = (__m128i)*(unsigned int *)v21;
        add_percent_0 = *v21;
        if ( is_include_ability )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->creature_);
          v23 = Creature::getAbilityComp(this->creature_);
          v24 = ServiceBox::findService<GameserverService>();
          *(float *)v22.m128i_i32 = AbilityComp::getProperty(v23, &v24->ability_data_mgr.ACTOR_DEFENCE_DELTA);
          v25 = COERCE_FLOAT(_mm_cvtsi128_si32(v22));
        }
        else
        {
          v25 = 0.0;
        }
        buff_defense_delta = v25;
        *(float *)v22.m128i_i32 = FightPropComp::getPropValue(this, FIGHT_PROP_BASE_DEFENSE, is_include_ability);
        v40 = *(float *)v22.m128i_i32 * add_percent_0;
        *(float *)v22.m128i_i32 = FightPropComp::getPropValue(this, FIGHT_PROP_DEFENSE, 0);
        *(float *)v22.m128i_i32 = (float)(*(float *)v22.m128i_i32 + v40) + buff_defense_delta;
        *(float *)&second_low = COERCE_FLOAT(_mm_cvtsi128_si32(v22));
        break;
      case 0xBD1:
        v26 = 0LL;
        react_critical = 0.0;
        *(std::map<data::FightPropType,AbilityClampFightPropValue>::const_iterator *)(v4 + 96) = std::map<data::FightPropType,AbilityClampFightPropValue>::find(
                                                                                                   &this->fight_cal_prop_map_,
                                                                                                   (const std::map<data::FightPropType,AbilityClampFightPropValue>::key_type *)(v4 + 80));
        __y._M_node = std::map<data::FightPropType,AbilityClampFightPropValue>::end(&this->fight_cal_prop_map_)._M_node;
        if ( std::operator!=(
               (const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> >::_Self *)(v4 + 96),
               (const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> >::_Self *)&__y) )
        {
          v27 = std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,AbilityClampFightPropValue>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> > *const)(v4 + 96));
          *(float *)v26.m128i_i32 = FightPropValue::getValue(&v27->second, is_include_ability);
          react_critical = COERCE_FLOAT(_mm_cvtsi128_si32(v26));
        }
        *(float *)v26.m128i_i32 = FightPropComp::getPropValue(this, FIGHT_PROP_BASE_ELEM_REACT_CRITICAL, 0)
                                + react_critical;
        *(float *)&second_low = COERCE_FLOAT(_mm_cvtsi128_si32(v26));
        break;
      case 0xBD2:
        v28 = 0LL;
        react_critical_hurt = 0.0;
        *(std::map<data::FightPropType,AbilityClampFightPropValue>::const_iterator *)(v4 + 96) = std::map<data::FightPropType,AbilityClampFightPropValue>::find(
                                                                                                   &this->fight_cal_prop_map_,
                                                                                                   (const std::map<data::FightPropType,AbilityClampFightPropValue>::key_type *)(v4 + 80));
        __y._M_node = std::map<data::FightPropType,AbilityClampFightPropValue>::end(&this->fight_cal_prop_map_)._M_node;
        if ( std::operator!=(
               (const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> >::_Self *)(v4 + 96),
               (const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> >::_Self *)&__y) )
        {
          v29 = std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,AbilityClampFightPropValue>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> > *const)(v4 + 96));
          *(float *)v28.m128i_i32 = FightPropValue::getValue(&v29->second, is_include_ability);
          react_critical_hurt = COERCE_FLOAT(_mm_cvtsi128_si32(v28));
        }
        *(float *)v28.m128i_i32 = FightPropComp::getPropValue(this, FIGHT_PROP_BASE_ELEM_REACT_CRITICAL_HURT, 0)
                                + react_critical_hurt;
        *(float *)&second_low = COERCE_FLOAT(_mm_cvtsi128_si32(v28));
        break;
      case 0xBE6:
        v30 = (__m128i)0x3F800000u;
        base_react_critical_hurt = 1.0;
        *(std::map<data::FightPropType,AbilityClampFightPropValue>::const_iterator *)(v4 + 96) = std::map<data::FightPropType,AbilityClampFightPropValue>::find(
                                                                                                   &this->fight_cal_prop_map_,
                                                                                                   (const std::map<data::FightPropType,AbilityClampFightPropValue>::key_type *)(v4 + 80));
        __y._M_node = std::map<data::FightPropType,AbilityClampFightPropValue>::end(&this->fight_cal_prop_map_)._M_node;
        if ( std::operator!=(
               (const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> >::_Self *)(v4 + 96),
               (const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> >::_Self *)&__y) )
        {
          v31 = std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,AbilityClampFightPropValue>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> > *const)(v4 + 96));
          *(float *)v30.m128i_i32 = FightPropValue::getValue(&v31->second, is_include_ability);
          base_react_critical_hurt = COERCE_FLOAT(_mm_cvtsi128_si32(v30));
        }
        if ( base_react_critical_hurt == 0.0 )
        {
          common::milog::MiLogStream::create(
            &v51,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/creature/fight_prop_comp.cpp",
            "getPropValue",
            355);
          v32 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                  &v51,
                  (const char (*)[48])"base_react_critical_hurt cannot be 0, creature:");
          if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->creature_);
          common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v32, this->creature_);
          common::milog::MiLogStream::~MiLogStream(&v51);
        }
        *(float *)&second_low = base_react_critical_hurt;
        break;
      default:
        *(std::map<data::FightPropType,AbilityClampFightPropValue>::const_iterator *)(v4 + 96) = std::map<data::FightPropType,AbilityClampFightPropValue>::find(
                                                                                                   &this->fight_cal_prop_map_,
                                                                                                   (const std::map<data::FightPropType,AbilityClampFightPropValue>::key_type *)(v4 + 80));
        __y._M_node = std::map<data::FightPropType,AbilityClampFightPropValue>::end(&this->fight_cal_prop_map_)._M_node;
        if ( !std::operator!=(
                (const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> >::_Self *)(v4 + 96),
                (const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> >::_Self *)&__y) )
          goto LABEL_60;
        if ( *(_DWORD *)(v4 + 80) == 28 )
        {
          v33 = 0LL;
          __b = 0.0;
          v34 = std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,AbilityClampFightPropValue>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> > *const)(v4 + 96));
          *(float *)v33.m128i_i32 = FightPropValue::getValue(&v34->second, is_include_ability);
          *(_DWORD *)(v4 + 64) = _mm_cvtsi128_si32(v33);
          v35 = (float *)std::max<float>((const float *)(v4 + 64), &__b);
          v36 = (int *)v35;
          if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v35);
          }
          second_low = *v36;
        }
        else
        {
          v37 = std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,AbilityClampFightPropValue>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> > *const)(v4 + 96));
          *(float *)a4.m128i_i32 = FightPropValue::getValue(&v37->second, is_include_ability);
          *(float *)&second_low = COERCE_FLOAT(_mm_cvtsi128_si32(a4));
        }
        break;
    }
  }
LABEL_61:
  result = *(float *)&second_low;
  if ( v52 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 373: range 000000001796F980-000000001796FC09
void __cdecl FightPropComp::getFightPropDebugStr(const FightPropComp *const this, std::ostringstream *os)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx
  float v9; // xmm0_4
  __int64 v10; // rax
  std::map<data::FightPropType,float>::const_iterator __for_begin; // [rsp+10h] [rbp-60h] BYREF
  std::map<data::FightPropType,float>::const_iterator __for_end; // [rsp+18h] [rbp-58h] BYREF
  const std::map<data::FightPropType,float> *__for_range; // [rsp+20h] [rbp-50h]
  const std::map<data::FightPropType,AbilityClampFightPropValue> *__for_range_0; // [rsp+28h] [rbp-48h]
  const std::pair<const data::FightPropType,AbilityClampFightPropValue> *v15; // [rsp+30h] [rbp-40h]
  std::tuple_element<0,const std::pair<const data::FightPropType,AbilityClampFightPropValue> >::type *key_0; // [rsp+38h] [rbp-38h]
  std::tuple_element<1,const std::pair<const data::FightPropType,AbilityClampFightPropValue> >::type *value_0; // [rsp+40h] [rbp-30h]
  const std::pair<const data::FightPropType,float> *v18; // [rsp+48h] [rbp-28h]
  std::tuple_element<0,const std::pair<const data::FightPropType,float> >::type *key; // [rsp+50h] [rbp-20h]
  std::tuple_element<1,const std::pair<const data::FightPropType,float> >::type *value; // [rsp+58h] [rbp-18h]

  __for_range = &this->fight_cur_prop_map_;
  __for_begin._M_node = std::map<data::FightPropType,float>::begin(&this->fight_cur_prop_map_)._M_node;
  __for_end._M_node = std::map<data::FightPropType,float>::end(&this->fight_cur_prop_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v18 = std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,float>>::operator*(&__for_begin);
    key = std::get<0ul,data::FightPropType const,float>(v18);
    value = (std::tuple_element<1,const std::pair<const data::FightPropType,float> >::type *)std::get<1ul,data::FightPropType const,float>(v18);
    v2 = std::operator<<<std::char_traits<char>>(os, "fight cur prop, key:");
    if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(key);
    }
    v3 = std::ostream::operator<<(v2, *(unsigned int *)key);
    v4 = std::operator<<<std::char_traits<char>>(v3, ", value:");
    if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(value);
    }
    v5 = std::ostream::operator<<(v4, *value);
    std::operator<<<std::char_traits<char>>(v5, "\n");
    std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,float>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->fight_cal_prop_map_;
  __for_begin._M_node = std::map<data::FightPropType,AbilityClampFightPropValue>::begin(&this->fight_cal_prop_map_)._M_node;
  __for_end._M_node = std::map<data::FightPropType,AbilityClampFightPropValue>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> >::_Self *)&__for_end) )
  {
    v15 = std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,AbilityClampFightPropValue>>::operator*((const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> > *const)&__for_begin);
    key_0 = std::get<0ul,data::FightPropType const,AbilityClampFightPropValue>(v15);
    value_0 = (std::tuple_element<1,const std::pair<const data::FightPropType,AbilityClampFightPropValue> >::type *)std::get<1ul,data::FightPropType const,AbilityClampFightPropValue>(v15);
    v6 = std::operator<<<std::char_traits<char>>(os, "fight cal prop, key:");
    if ( *(_BYTE *)(((unsigned __int64)key_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)key_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(key_0);
    }
    v7 = std::ostream::operator<<(v6, *(unsigned int *)key_0);
    v8 = std::operator<<<std::char_traits<char>>(v7, ", value:");
    v9 = FightPropValue::getValue(value_0, 1);
    v10 = std::ostream::operator<<(v8, v9);
    std::operator<<<std::char_traits<char>>(v10, "\n");
    std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,AbilityClampFightPropValue>>::operator++((std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> > *const)&__for_begin);
  }
};

// Line 386: range 000000001796FC0A-000000001796FD4E
__int64 __fastcall FightPropComp::forceSetCurPropValue(
        FightPropComp *const this,
        data::FightPropType type,
        float base_value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 result; // rax
  std::map<data::FightPropType,float>::mapped_type *v7; // rax
  float *v8; // rdx
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 8 type:385";
  *(_QWORD *)(v3 + 16) = FightPropComp::forceSetCurPropValue;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = type;
  if ( !FightPropComp::isCurPropType(*(data::FightPropType *)(v3 + 32)) )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v7 = std::map<data::FightPropType,float>::operator[](
           &this->fight_cur_prop_map_,
           (const std::map<data::FightPropType,float>::key_type *)(v3 + 32));
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v7);
    }
    *v8 = base_value;
    result = 0LL;
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
  return result;
};

// Line 396: range 000000001796FD50-000000001796FEA3
const AbilityClampFightPropValue *__fastcall FightPropComp::findCalPropValue(
        const FightPropComp *const this,
        data::FightPropType type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const AbilityClampFightPropValue *result; // rax
  std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 8 type:395 64 8 8 iter:397";
  *(_QWORD *)(v2 + 16) = FightPropComp::findCalPropValue;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = type;
  *(std::map<data::FightPropType,AbilityClampFightPropValue>::const_iterator *)(v2 + 64) = std::map<data::FightPropType,AbilityClampFightPropValue>::find(
                                                                                             &this->fight_cal_prop_map_,
                                                                                             (const std::map<data::FightPropType,AbilityClampFightPropValue>::key_type *)(v2 + 48));
  __y._M_node = std::map<data::FightPropType,AbilityClampFightPropValue>::end(&this->fight_cal_prop_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = &std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,AbilityClampFightPropValue>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> > *const)(v2 + 64))->second;
  }
  else
  {
    result = 0LL;
  }
  if ( v7 == (char *)v2 )
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

// Line 406: range 000000001796FEA4-00000000179703A0
void __cdecl FightPropComp::notifyDiffProp(const FightPropComp *const this, FightPropValueMap *diff_prop_map)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t EntityId; // eax
  Creature *creature; // rsi
  Creature *v7; // rax
  unsigned __int64 v8; // rax
  int v9; // r14d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint64_t Guid; // rax
  Entity *v12; // rax
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  Entity *v14; // rax
  google::protobuf::Map<unsigned int,float> *entity_diff_fight_prop_map; // [rsp+10h] [rbp-1E0h]
  google::protobuf::Map<unsigned int,float> *avatar_diff_fight_prop_map; // [rsp+18h] [rbp-1D8h]
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-1D0h] BYREF
  char v18[432]; // [rsp+40h] [rbp-1B0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 16 16 creature_ptr:412 80 16 14 avatar_ptr:415 112 96 17 entity_notify:408 240 104 17 avatar_notify:421";
  *(_QWORD *)(v2 + 16) = FightPropComp::notifyDiffProp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862726] = -219021312;
  v4[536862727] = 62194;
  v4[536862730] = -218103808;
  v4[536862731] = -202116109;
  proto::EntityFightPropUpdateNotify::EntityFightPropUpdateNotify((proto::EntityFightPropUpdateNotify *const)(v2 + 112));
  if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->creature_);
  EntityId = Entity::getEntityId((const Entity *const)this->creature_);
  proto::EntityFightPropUpdateNotify::set_entity_id((proto::EntityFightPropUpdateNotify *const)(v2 + 112), EntityId);
  entity_diff_fight_prop_map = proto::EntityFightPropUpdateNotify::mutable_fight_prop_map((proto::EntityFightPropUpdateNotify *const)(v2 + 112));
  google::protobuf::Map<unsigned int,float>::swap(entity_diff_fight_prop_map, diff_prop_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->creature_);
  toThisPtr<Creature>((Creature *)(v2 + 48));
  creature = this->creature_;
  v7 = creature;
  if ( *(_BYTE *)(((unsigned __int64)creature >> 3) + 0x7FFF8000) )
    v7 = (Creature *)__asan_report_load8(this->creature_);
  v8 = *(_QWORD *)v7->baseclass_0 + 24LL;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8(v8);
  if ( (*(unsigned int (__fastcall **)(Creature *))v8)(creature) != 1 )
    goto LABEL_17;
  std::dynamic_pointer_cast<Avatar,Creature>((const std::shared_ptr<Creature> *)(v2 + 80));
  if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 80), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/creature/fight_prop_comp.cpp",
      "notifyDiffProp",
      418);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v17, (const char (*)[24])"convert to avatar fails");
    common::milog::MiLogStream::~MiLogStream(&v17);
    v9 = 0;
  }
  else
  {
    proto::AvatarFightPropUpdateNotify::AvatarFightPropUpdateNotify((proto::AvatarFightPropUpdateNotify *const)(v2 + 240));
    v10 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
    Guid = Avatar::getGuid(v10);
    proto::AvatarFightPropUpdateNotify::set_avatar_guid((proto::AvatarFightPropUpdateNotify *const)(v2 + 240), Guid);
    avatar_diff_fight_prop_map = proto::AvatarFightPropUpdateNotify::mutable_fight_prop_map((proto::AvatarFightPropUpdateNotify *const)(v2 + 240));
    google::protobuf::Map<unsigned int,float>::operator=(avatar_diff_fight_prop_map, entity_diff_fight_prop_map);
    v12 = (Entity *)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
    Entity::notifySelf<proto::AvatarFightPropUpdateNotify>(v12, (proto::AvatarFightPropUpdateNotify *)(v2 + 240));
    proto::AvatarFightPropUpdateNotify::~AvatarFightPropUpdateNotify((proto::AvatarFightPropUpdateNotify *const)(v2 + 240));
    v9 = 1;
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 80));
  if ( v9 == 1 )
  {
LABEL_17:
    v13 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    if ( Entity::isOnScene((const Entity *const)v13) )
    {
      v14 = (Entity *)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      Entity::notifyViewingPlayers<proto::EntityFightPropUpdateNotify>(
        v14,
        (proto::EntityFightPropUpdateNotify *)(v2 + 112),
        0);
    }
  }
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 48));
  proto::EntityFightPropUpdateNotify::~EntityFightPropUpdateNotify((proto::EntityFightPropUpdateNotify *const)(v2 + 112));
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 436: range 00000000179703A2-000000001797089C
void __cdecl FightPropComp::notifyAllProp(const FightPropComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  uint32_t EntityId; // eax
  Creature *creature; // rsi
  Creature *v6; // rax
  unsigned __int64 v7; // rax
  int v8; // r14d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint64_t Guid; // rax
  Entity *v11; // rax
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  Entity *v13; // rax
  google::protobuf::Map<unsigned int,float> *entity_fight_prop_map; // [rsp+10h] [rbp-1E0h]
  google::protobuf::Map<unsigned int,float> *avatar_fight_prop_map; // [rsp+18h] [rbp-1D8h]
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-1D0h] BYREF
  char v17[432]; // [rsp+40h] [rbp-1B0h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(384LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 16 16 creature_ptr:442 80 16 14 avatar_ptr:445 112 96 17 entity_notify:438 240 104 17 avatar_notify:451";
  *(_QWORD *)(v1 + 16) = FightPropComp::notifyAllProp;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862723] = 62194;
  v3[536862726] = -219021312;
  v3[536862727] = 62194;
  v3[536862730] = -218103808;
  v3[536862731] = -202116109;
  proto::EntityFightPropNotify::EntityFightPropNotify((proto::EntityFightPropNotify *const)(v1 + 112));
  if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->creature_);
  EntityId = Entity::getEntityId((const Entity *const)this->creature_);
  proto::EntityFightPropNotify::set_entity_id((proto::EntityFightPropNotify *const)(v1 + 112), EntityId);
  entity_fight_prop_map = proto::EntityFightPropNotify::mutable_fight_prop_map((proto::EntityFightPropNotify *const)(v1 + 112));
  FightPropComp::getFightPropValueMap<google::protobuf::Map<unsigned int,float>>(this, entity_fight_prop_map, 0);
  if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->creature_);
  toThisPtr<Creature>((Creature *)(v1 + 48));
  creature = this->creature_;
  v6 = creature;
  if ( *(_BYTE *)(((unsigned __int64)creature >> 3) + 0x7FFF8000) )
    v6 = (Creature *)__asan_report_load8(this->creature_);
  v7 = *(_QWORD *)v6->baseclass_0 + 24LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8(v7);
  if ( (*(unsigned int (__fastcall **)(Creature *))v7)(creature) != 1 )
    goto LABEL_17;
  std::dynamic_pointer_cast<Avatar,Creature>((const std::shared_ptr<Creature> *)(v1 + 80));
  if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v1 + 80), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/creature/fight_prop_comp.cpp",
      "notifyAllProp",
      448);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v16, (const char (*)[24])"convert to avatar fails");
    common::milog::MiLogStream::~MiLogStream(&v16);
    v8 = 0;
  }
  else
  {
    proto::AvatarFightPropNotify::AvatarFightPropNotify((proto::AvatarFightPropNotify *const)(v1 + 240));
    v9 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
    Guid = Avatar::getGuid(v9);
    proto::AvatarFightPropNotify::set_avatar_guid((proto::AvatarFightPropNotify *const)(v1 + 240), Guid);
    avatar_fight_prop_map = proto::AvatarFightPropNotify::mutable_fight_prop_map((proto::AvatarFightPropNotify *const)(v1 + 240));
    google::protobuf::Map<unsigned int,float>::operator=(avatar_fight_prop_map, entity_fight_prop_map);
    v11 = (Entity *)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
    Entity::notifySelf<proto::AvatarFightPropNotify>(v11, (proto::AvatarFightPropNotify *)(v1 + 240));
    proto::AvatarFightPropNotify::~AvatarFightPropNotify((proto::AvatarFightPropNotify *const)(v1 + 240));
    v8 = 1;
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v1 + 80));
  if ( v8 == 1 )
  {
LABEL_17:
    v12 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
    if ( Entity::isOnScene((const Entity *const)v12) )
    {
      v13 = (Entity *)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
      Entity::notifyViewingPlayers<proto::EntityFightPropNotify>(v13, (proto::EntityFightPropNotify *)(v1 + 112), 0);
    }
  }
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v1 + 48));
  proto::EntityFightPropNotify::~EntityFightPropNotify((proto::EntityFightPropNotify *const)(v1 + 112));
  if ( v17 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 465: range 000000001797089E-0000000017971E2D
void __cdecl FightPropComp::refreshCalProp(
        FightPropComp *const this,
        const std::vector<std::map<data::FightPropType,float>> *prop_map_vec,
        const FightPropMap *ability_prop_map)
{
  __m128i v3; // xmm0
  unsigned __int64 v4; // r14
  __int64 v5; // rax
  _DWORD *v6; // r13
  __m128i v7; // xmm0
  FightPropValue *v8; // rdi
  FightPropValue *v9; // rdi
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rsi
  unsigned __int64 v11; // rcx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rsi
  unsigned __int64 v13; // rcx
  Player *v14; // rax
  PlayerGmComp *GmComp; // rax
  AbilityClampFightPropValue *CalPropValue; // rbx
  FightPropComp **v17; // r8
  const std::_Placeholder<1> *v18; // r9
  AbilityClampFightPropValue *v19; // rbx
  FightPropComp **v20; // r8
  const std::_Placeholder<1> *v21; // r9
  AbilityClampFightPropValue *v22; // rbx
  FightPropComp **v23; // r8
  const std::_Placeholder<1> *v24; // r9
  AbilityClampFightPropValue *v25; // rbx
  FightPropComp **v26; // r8
  const std::_Placeholder<1> *v27; // r9
  AbilityClampFightPropValue *v28; // rbx
  FightPropComp **v29; // r8
  const std::_Placeholder<1> *v30; // r9
  float MaxHp; // xmm0_4
  float *v32; // rax
  float *v33; // rdx
  Creature *creature; // rsi
  Creature *v35; // rax
  unsigned __int64 v36; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  __int64 v39; // rbx
  const char *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rbx
  const char *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rbx
  float BaseValue; // xmm0_4
  __int64 v49; // rax
  __int64 v50; // rbx
  int (**vptr_FightPropValue)(...); // rax
  float v52; // xmm0_4
  __int64 v53; // rax
  __int64 v54; // rbx
  float Value; // xmm0_4
  __int64 v56; // rax
  common::milog::MiLogStream *v57; // rbx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rbx
  __m128i v61; // [rsp+0h] [rbp-4C0h] BYREF
  __m128i v62; // [rsp+10h] [rbp-4B0h] BYREF
  __m128i v63; // [rsp+20h] [rbp-4A0h] BYREF
  __m128i v64; // [rsp+30h] [rbp-490h] BYREF
  __m128i v65; // [rsp+40h] [rbp-480h] BYREF
  const FightPropMap *ability_prop_mapa; // [rsp+58h] [rbp-468h]
  const std::vector<std::map<data::FightPropType,float>> *prop_map_veca; // [rsp+60h] [rbp-460h]
  FightPropComp *thisa; // [rsp+68h] [rbp-458h]
  float __a; // [rsp+7Ch] [rbp-444h] BYREF
  float old_hp_ratio; // [rsp+80h] [rbp-440h]
  data::ElementType elem_type; // [rsp+84h] [rbp-43Ch]
  float max_energy; // [rsp+88h] [rbp-438h]
  float cur_energy; // [rsp+8Ch] [rbp-434h]
  std::vector<std::map<data::FightPropType,float>>::const_iterator __for_begin; // [rsp+90h] [rbp-430h] BYREF
  std::vector<std::map<data::FightPropType,float>>::const_iterator __for_end; // [rsp+98h] [rbp-428h] BYREF
  std::map<data::FightPropType,float>::const_iterator __for_begin_0; // [rsp+A0h] [rbp-420h] BYREF
  std::map<data::FightPropType,float>::const_iterator __for_end_0; // [rsp+A8h] [rbp-418h] BYREF
  const std::vector<std::map<data::FightPropType,float>> *__for_range; // [rsp+B0h] [rbp-410h]
  const std::map<data::FightPropType,float> *__for_range_1; // [rsp+B8h] [rbp-408h]
  std::map<data::FightPropType,float> *__for_range_2; // [rsp+C0h] [rbp-400h]
  std::map<data::FightPropType,AbilityClampFightPropValue> *__for_range_3; // [rsp+C8h] [rbp-3F8h]
  const std::pair<const data::FightPropType,AbilityClampFightPropValue> *v82; // [rsp+D0h] [rbp-3F0h]
  std::tuple_element<0,const std::pair<const data::FightPropType,AbilityClampFightPropValue> >::type *k_0; // [rsp+D8h] [rbp-3E8h]
  std::tuple_element<1,const std::pair<const data::FightPropType,AbilityClampFightPropValue> >::type *v_0; // [rsp+E0h] [rbp-3E0h]
  const std::pair<const data::FightPropType,float> *v85; // [rsp+E8h] [rbp-3D8h]
  std::tuple_element<0,const std::pair<const data::FightPropType,float> >::type *k; // [rsp+F0h] [rbp-3D0h]
  std::tuple_element<1,const std::pair<const data::FightPropType,float> >::type *v; // [rsp+F8h] [rbp-3C8h]
  const std::pair<const data::FightPropType,float> *v88; // [rsp+100h] [rbp-3C0h]
  std::tuple_element<0,const std::pair<const data::FightPropType,float> >::type *prop_type_0; // [rsp+108h] [rbp-3B8h]
  std::tuple_element<1,const std::pair<const data::FightPropType,float> >::type *prop_value_0; // [rsp+110h] [rbp-3B0h]
  AbilityClampFightPropValue *fight_prop_value_0; // [rsp+118h] [rbp-3A8h]
  const std::map<data::FightPropType,float> *prop_map; // [rsp+120h] [rbp-3A0h]
  const std::map<data::FightPropType,float> *__for_range_0; // [rsp+128h] [rbp-398h]
  const std::pair<const data::FightPropType,float> *v94; // [rsp+130h] [rbp-390h]
  std::tuple_element<0,const std::pair<const data::FightPropType,float> >::type *prop_type; // [rsp+138h] [rbp-388h]
  std::tuple_element<1,const std::pair<const data::FightPropType,float> >::type *prop_value; // [rsp+140h] [rbp-380h]
  AbilityClampFightPropValue *fight_prop_value; // [rsp+148h] [rbp-378h]
  std::_Bind_helper<false,float (FightPropComp::*)(bool) const,FightPropComp*,const std::_Placeholder<1>&>::type p___f; // [rsp+150h] [rbp-370h] BYREF
  common::milog::MiLogStream v99; // [rsp+170h] [rbp-350h] BYREF
  std::function<float(bool)> calc_prop; // [rsp+190h] [rbp-330h] BYREF
  char v101[784]; // [rsp+1B0h] [rbp-310h] BYREF

  thisa = this;
  prop_map_veca = prop_map_vec;
  ability_prop_mapa = ability_prop_map;
  v4 = (unsigned __int64)v101;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(736LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 48 4 19 max_energy_type:497 64 16 28 element_mastery_prop_val:470 96 16 14 avatar_ptr:493 128 "
                        "16 14 player_ptr:499 160 16 14 avatar_ptr:561 192 48 21 modified_prop_set:471 272 392 6 ss:564";
  *(_QWORD *)(v4 + 16) = FightPropComp::refreshCalProp;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862727] = -219021312;
  v6[536862728] = 62194;
  v6[536862740] = -218103808;
  v6[536862741] = -202116109;
  v6[536862742] = -202116109;
  *(float *)v3.m128i_i32 = FightPropComp::calcCurHpRatio(thisa);
  old_hp_ratio = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  std::map<data::FightPropType,AbilityClampFightPropValue>::clear(&thisa->fight_cal_prop_map_);
  *(_QWORD *)(v4 + 64) = &`vtable for'FightPropValue + 2;
  *(_DWORD *)(v4 + 72) = 0;
  v7 = 0LL;
  *(_DWORD *)(v4 + 76) = 0;
  std::set<data::FightPropType>::set((std::set<data::FightPropType> *const)(v4 + 192));
  __for_range = prop_map_veca;
  __for_begin._M_current = std::vector<std::map<data::FightPropType,float>>::begin(prop_map_veca)._M_current;
  __for_end._M_current = std::vector<std::map<data::FightPropType,float>>::end(prop_map_veca)._M_current;
  while ( __gnu_cxx::operator!=<std::map<data::FightPropType,float> const*,std::vector<std::map<data::FightPropType,float>>>(
            &__for_begin,
            &__for_end) )
  {
    prop_map = __gnu_cxx::__normal_iterator<std::map<data::FightPropType,float> const*,std::vector<std::map<data::FightPropType,float>>>::operator*(&__for_begin);
    __for_range_0 = prop_map;
    __for_begin_0._M_node = std::map<data::FightPropType,float>::begin(prop_map)._M_node;
    __for_end_0._M_node = std::map<data::FightPropType,float>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      v94 = std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,float>>::operator*(&__for_begin_0);
      prop_type = std::get<0ul,data::FightPropType const,float>(v94);
      prop_value = (std::tuple_element<1,const std::pair<const data::FightPropType,float> >::type *)std::get<1ul,data::FightPropType const,float>(v94);
      if ( *(_BYTE *)(((unsigned __int64)prop_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)prop_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)prop_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(prop_type);
      }
      fight_prop_value = FightPropComp::getOrCreateCalPropValue(thisa, *prop_type);
      v8 = fight_prop_value;
      if ( *(_BYTE *)(((unsigned __int64)prop_value >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)prop_value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)prop_value >> 3) + 0x7FFF8000) )
      {
        v8 = (FightPropValue *)prop_value;
        __asan_report_load4(prop_value);
      }
      v7 = _mm_cvtsi32_si128(*(_DWORD *)prop_value);
      FightPropValue::addBaseValue(v8, *(float *)v7.m128i_i32);
      std::set<data::FightPropType>::insert((std::set<data::FightPropType> *const)(v4 + 192), prop_type);
      if ( *(_BYTE *)(((unsigned __int64)prop_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)prop_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)prop_type >> 3) + 0x7FFF8000) )
      {
        *(double *)v7.m128i_i64 = __asan_report_load4(prop_type);
      }
      if ( *prop_type == FIGHT_PROP_ELEMENT_MASTERY )
      {
        if ( *(_BYTE *)(((unsigned __int64)prop_value >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)prop_value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)prop_value >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(prop_value);
        }
        v7 = _mm_cvtsi32_si128(*(_DWORD *)prop_value);
        FightPropValue::addBaseValue((FightPropValue *const)(v4 + 64), *(float *)v7.m128i_i32);
      }
      std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,float>>::operator++(&__for_begin_0);
    }
    __gnu_cxx::__normal_iterator<std::map<data::FightPropType,float> const*,std::vector<std::map<data::FightPropType,float>>>::operator++(&__for_begin);
  }
  __for_range_1 = ability_prop_mapa;
  __for_begin_0._M_node = std::map<data::FightPropType,float>::begin(ability_prop_mapa)._M_node;
  __for_end_0._M_node = std::map<data::FightPropType,float>::end(__for_range_1)._M_node;
  while ( std::operator!=(&__for_begin_0, &__for_end_0) )
  {
    v88 = std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,float>>::operator*(&__for_begin_0);
    prop_type_0 = std::get<0ul,data::FightPropType const,float>(v88);
    prop_value_0 = (std::tuple_element<1,const std::pair<const data::FightPropType,float> >::type *)std::get<1ul,data::FightPropType const,float>(v88);
    if ( *(_BYTE *)(((unsigned __int64)prop_type_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)prop_type_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)prop_type_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(prop_type_0);
    }
    fight_prop_value_0 = FightPropComp::getOrCreateCalPropValue(thisa, *prop_type_0);
    v9 = fight_prop_value_0;
    if ( *(_BYTE *)(((unsigned __int64)prop_value_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)prop_value_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)prop_value_0 >> 3) + 0x7FFF8000) )
    {
      v9 = (FightPropValue *)prop_value_0;
      __asan_report_load4(prop_value_0);
    }
    v7 = _mm_cvtsi32_si128(*(_DWORD *)prop_value_0);
    FightPropValue::addAbilityValue(v9, *(float *)v7.m128i_i32);
    std::set<data::FightPropType>::insert((std::set<data::FightPropType> *const)(v4 + 192), prop_type_0);
    if ( *(_BYTE *)(((unsigned __int64)prop_type_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)prop_type_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)prop_type_0 >> 3) + 0x7FFF8000) )
    {
      *(double *)v7.m128i_i64 = __asan_report_load4(prop_type_0);
    }
    if ( *prop_type_0 == FIGHT_PROP_ELEMENT_MASTERY )
    {
      if ( *(_BYTE *)(((unsigned __int64)prop_value_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)prop_value_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)prop_value_0 >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(prop_value_0);
      }
      v7 = _mm_cvtsi32_si128(*(_DWORD *)prop_value_0);
      FightPropValue::addAbilityValue((FightPropValue *const)(v4 + 64), *(float *)v7.m128i_i32);
    }
    std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,float>>::operator++(&__for_begin_0);
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->creature_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->creature_);
  toPtr<Avatar,Creature>((Creature *)(v4 + 96));
  if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v4 + 96), 0LL) )
  {
    v10 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v10);
    v11 = *(_QWORD *)v10->baseclass_0 + 280LL;
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      __asan_report_load8(*(_QWORD *)v10->baseclass_0 + 280LL);
    elem_type = (*(unsigned int (__fastcall **)(std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v11)(v10);
    *(_DWORD *)(v4 + 48) = FightPropComp::getMaxEnergyType(elem_type);
    *(float *)v7.m128i_i32 = FightPropComp::getPropValue(thisa, *(data::FightPropType *)(v4 + 48), 1, v7);
    max_energy = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
    v12 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v13 = *(_QWORD *)v12->baseclass_0 + 152LL;
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8(*(_QWORD *)v12->baseclass_0 + 152LL);
    (*(void (__fastcall **)(unsigned __int64))v13)(v4 + 128);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v4 + 128), 0LL) )
    {
      v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
      GmComp = Player::getGmComp(v14);
      if ( PlayerGmComp::getIsEnergyInfinite(GmComp)
        || std::set<data::FightPropType>::count(
             (const std::set<data::FightPropType> *const)(v4 + 192),
             (const std::set<data::FightPropType>::key_type *)(v4 + 48))
        && (*(float *)v7.m128i_i32 = FightPropComp::getCurEnergy(thisa),
            cur_energy = COERCE_FLOAT(_mm_cvtsi128_si32(v7)),
            cur_energy > max_energy) )
      {
        std::shared_ptr<FightPropNtfParam>::shared_ptr((std::shared_ptr<FightPropNtfParam> *const)(v4 + 160), 0LL);
        FightPropComp::setCurEnergy(thisa, max_energy, 0, (FightPropNtfParamPtr *)(v4 + 160));
        std::shared_ptr<FightPropNtfParam>::~shared_ptr((std::shared_ptr<FightPropNtfParam> *const)(v4 + 160));
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 128));
  }
  CalPropValue = FightPropComp::getOrCreateCalPropValue(thisa, FIGHT_PROP_MAX_HP);
  __for_end_0._M_node = (std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,float> >::_Base_ptr)thisa;
  v61.m128i_i64[0] = (__int64)FightPropComp::calcMaxHp;
  v61.m128i_i64[1] = 0LL;
  *(__m128i *)(v4 + 160) = _mm_load_si128(&v61);
  std::bind<float (FightPropComp::*)(bool)const,FightPropComp*,std::_Placeholder<1> const&>(
    &p___f,
    (float (**)(const FightPropComp *, bool))(v4 + 160),
    (FightPropComp **)&__for_end_0,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v17,
    v18);
  std::function<float ()(bool)>::function<std::_Bind<float (FightPropComp::*)(bool)const ()(FightPropComp*,std::_Placeholder<1>)>,void,void>(
    &calc_prop,
    &p___f);
  FightPropValue::assignCalcProp(CalPropValue, &calc_prop);
  std::function<float ()(bool)>::~function(&calc_prop);
  v19 = FightPropComp::getOrCreateCalPropValue(thisa, FIGHT_PROP_CUR_ATTACK);
  __for_end_0._M_node = (std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,float> >::_Base_ptr)thisa;
  v62.m128i_i64[0] = (__int64)FightPropComp::calcCurAttack;
  v62.m128i_i64[1] = 0LL;
  *(__m128i *)(v4 + 160) = _mm_load_si128(&v62);
  std::bind<float (FightPropComp::*)(bool)const,FightPropComp*,std::_Placeholder<1> const&>(
    &p___f,
    (float (**)(const FightPropComp *, bool))(v4 + 160),
    (FightPropComp **)&__for_end_0,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v20,
    v21);
  std::function<float ()(bool)>::function<std::_Bind<float (FightPropComp::*)(bool)const ()(FightPropComp*,std::_Placeholder<1>)>,void,void>(
    &calc_prop,
    &p___f);
  FightPropValue::assignCalcProp(v19, &calc_prop);
  std::function<float ()(bool)>::~function(&calc_prop);
  v22 = FightPropComp::getOrCreateCalPropValue(thisa, FIGHT_PROP_CUR_DEFENSE);
  __for_end_0._M_node = (std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,float> >::_Base_ptr)thisa;
  v63.m128i_i64[0] = (__int64)FightPropComp::calcCurDefense;
  v63.m128i_i64[1] = 0LL;
  *(__m128i *)(v4 + 160) = _mm_load_si128(&v63);
  std::bind<float (FightPropComp::*)(bool)const,FightPropComp*,std::_Placeholder<1> const&>(
    &p___f,
    (float (**)(const FightPropComp *, bool))(v4 + 160),
    (FightPropComp **)&__for_end_0,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v23,
    v24);
  std::function<float ()(bool)>::function<std::_Bind<float (FightPropComp::*)(bool)const ()(FightPropComp*,std::_Placeholder<1>)>,void,void>(
    &calc_prop,
    &p___f);
  FightPropValue::assignCalcProp(v22, &calc_prop);
  std::function<float ()(bool)>::~function(&calc_prop);
  v25 = FightPropComp::getOrCreateCalPropValue(thisa, FIGHT_PROP_CUR_SPEED);
  __for_end_0._M_node = (std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,float> >::_Base_ptr)thisa;
  v64.m128i_i64[0] = (__int64)FightPropComp::calcCurSpeed;
  v64.m128i_i64[1] = 0LL;
  *(__m128i *)(v4 + 160) = _mm_load_si128(&v64);
  std::bind<float (FightPropComp::*)(bool)const,FightPropComp*,std::_Placeholder<1> const&>(
    &p___f,
    (float (**)(const FightPropComp *, bool))(v4 + 160),
    (FightPropComp **)&__for_end_0,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v26,
    v27);
  std::function<float ()(bool)>::function<std::_Bind<float (FightPropComp::*)(bool)const ()(FightPropComp*,std::_Placeholder<1>)>,void,void>(
    &calc_prop,
    &p___f);
  FightPropValue::assignCalcProp(v25, &calc_prop);
  std::function<float ()(bool)>::~function(&calc_prop);
  v28 = FightPropComp::getOrCreateCalPropValue(thisa, FIGHT_PROP_CHARGE_EFFICIENCY);
  __for_end_0._M_node = (std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,float> >::_Base_ptr)thisa;
  v65.m128i_i64[0] = (__int64)FightPropComp::calcChargeEfficiency;
  v65.m128i_i64[1] = 0LL;
  *(__m128i *)(v4 + 160) = _mm_load_si128(&v65);
  std::bind<float (FightPropComp::*)(bool)const,FightPropComp*,std::_Placeholder<1> const&>(
    &p___f,
    (float (**)(const FightPropComp *, bool))(v4 + 160),
    (FightPropComp **)&__for_end_0,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v29,
    v30);
  std::function<float ()(bool)>::function<std::_Bind<float (FightPropComp::*)(bool)const ()(FightPropComp*,std::_Placeholder<1>)>,void,void>(
    &calc_prop,
    &p___f);
  FightPropValue::assignCalcProp(v28, &calc_prop);
  std::function<float ()(bool)>::~function(&calc_prop);
  if ( old_hp_ratio != 0.0 )
  {
    std::shared_ptr<FightPropNtfParam>::shared_ptr((std::shared_ptr<FightPropNtfParam> *const)(v4 + 160), 0LL);
    MaxHp = FightPropComp::getMaxHp(thisa);
    *(float *)(v4 + 48) = MaxHp * old_hp_ratio;
    __a = 1.0;
    v32 = (float *)std::max<float>(&__a, (const float *)(v4 + 48));
    v33 = v32;
    if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v32);
    }
    FightPropComp::setCurHp(thisa, *v33, 0, (FightPropNtfParamPtr *)(v4 + 160));
    std::shared_ptr<FightPropNtfParam>::~shared_ptr((std::shared_ptr<FightPropNtfParam> *const)(v4 + 160));
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->creature_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->creature_);
  creature = thisa->creature_;
  v35 = creature;
  if ( *(_BYTE *)(((unsigned __int64)creature >> 3) + 0x7FFF8000) )
    v35 = (Creature *)__asan_report_load8(thisa->creature_);
  v36 = *(_QWORD *)v35->baseclass_0 + 24LL;
  if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
    v36 = __asan_report_load8(v36);
  if ( (*(unsigned int (__fastcall **)(Creature *))v36)(creature) == 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&thisa->creature_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->creature_);
    toPtr<Avatar,Creature>((Creature *)(v4 + 160));
    if ( std::operator!=<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v4 + 160)) )
    {
      v37 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
      if ( !Avatar::isInited(v37) )
      {
        std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v4 + 272);
        std::operator<<<std::char_traits<char>>(v4 + 288, "fight_cur_prop_map_:\n");
        __for_range_2 = &thisa->fight_cur_prop_map_;
        __for_begin_0._M_node = std::map<data::FightPropType,float>::begin(&thisa->fight_cur_prop_map_)._M_node;
        __for_end_0._M_node = std::map<data::FightPropType,float>::end(__for_range_2)._M_node;
        while ( std::operator!=(
                  (const std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >::_Self *)&__for_begin_0,
                  (const std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> >::_Self *)&__for_end_0) )
        {
          v85 = std::_Rb_tree_iterator<std::pair<data::FightPropType const,float>>::operator*((const std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> > *const)&__for_begin_0);
          k = std::get<0ul,data::FightPropType const,float>(v85);
          v = (std::tuple_element<1,const std::pair<const data::FightPropType,float> >::type *)std::get<1ul,data::FightPropType const,float>(v85);
          v39 = std::operator<<<std::char_traits<char>>(v4 + 288, "\tfight_prop_type:");
          if ( *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)k & 7) + 3) >= *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(k);
          }
          v40 = data::enumValToStr(*k);
          v41 = std::operator<<<std::char_traits<char>>(v39, v40);
          v42 = std::operator<<<std::char_traits<char>>(v41, " value:");
          if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v);
          }
          v43 = std::ostream::operator<<(v42, *v);
          std::operator<<<std::char_traits<char>>(v43, "\n");
          std::_Rb_tree_iterator<std::pair<data::FightPropType const,float>>::operator++((std::_Rb_tree_iterator<std::pair<const data::FightPropType,float> > *const)&__for_begin_0);
        }
        std::operator<<<std::char_traits<char>>(v4 + 288, "fight_cal_prop_map_:\n");
        __for_range_3 = &thisa->fight_cal_prop_map_;
        __for_begin_0._M_node = std::map<data::FightPropType,AbilityClampFightPropValue>::begin(&thisa->fight_cal_prop_map_)._M_node;
        __for_end_0._M_node = std::map<data::FightPropType,AbilityClampFightPropValue>::end(__for_range_3)._M_node;
        while ( std::operator!=(
                  (const std::_Rb_tree_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> >::_Self *)&__for_begin_0,
                  (const std::_Rb_tree_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> >::_Self *)&__for_end_0) )
        {
          v82 = std::_Rb_tree_iterator<std::pair<data::FightPropType const,AbilityClampFightPropValue>>::operator*((const std::_Rb_tree_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> > *const)&__for_begin_0);
          k_0 = std::get<0ul,data::FightPropType const,AbilityClampFightPropValue>(v82);
          v_0 = (std::tuple_element<1,const std::pair<const data::FightPropType,AbilityClampFightPropValue> >::type *)std::get<1ul,data::FightPropType const,AbilityClampFightPropValue>(v82);
          v44 = std::operator<<<std::char_traits<char>>(v4 + 288, "\tfight_prop_type:");
          if ( *(_BYTE *)(((unsigned __int64)k_0 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)k_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)k_0 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(k_0);
          }
          v45 = data::enumValToStr(*k_0);
          v46 = std::operator<<<std::char_traits<char>>(v44, v45);
          v47 = std::operator<<<std::char_traits<char>>(v46, " base_value:");
          BaseValue = FightPropValue::getBaseValue(v_0);
          v49 = std::ostream::operator<<(v47, BaseValue);
          v50 = std::operator<<<std::char_traits<char>>(v49, " ability_value:");
          if ( *(_BYTE *)(((unsigned __int64)v_0 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v_0);
          vptr_FightPropValue = v_0->_vptr_FightPropValue;
          if ( *(_BYTE *)(((unsigned __int64)v_0->_vptr_FightPropValue >> 3) + 0x7FFF8000) )
            vptr_FightPropValue = (int (**)(...))__asan_report_load8(v_0->_vptr_FightPropValue);
          v52 = ((float (__fastcall *)(std::tuple_element<1,const std::pair<const data::FightPropType,AbilityClampFightPropValue> >::type *))*vptr_FightPropValue)(v_0);
          v53 = std::ostream::operator<<(v50, v52);
          v54 = std::operator<<<std::char_traits<char>>(v53, " total_value:");
          Value = FightPropValue::getValue(v_0, 1);
          v56 = std::ostream::operator<<(v54, Value);
          std::operator<<<std::char_traits<char>>(v56, "\n");
          std::_Rb_tree_iterator<std::pair<data::FightPropType const,AbilityClampFightPropValue>>::operator++((std::_Rb_tree_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> > *const)&__for_begin_0);
        }
        common::milog::MiLogStream::create(
          &v99,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/creature/fight_prop_comp.cpp",
          "refreshCalProp",
          576);
        v57 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v99, (const char (*)[8])"avatar:");
        v58 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
        v59 = common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v57, v58);
        v60 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v59, (const char (*)[2])"\n");
        std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(&calc_prop, v4 + 272);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v60, (const std::string *)&calc_prop);
        std::string::~string(&calc_prop);
        common::milog::MiLogStream::~MiLogStream(&v99);
        std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v4 + 272);
      }
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 160));
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 96));
  std::set<data::FightPropType>::~set((std::set<data::FightPropType> *const)(v4 + 192));
  if ( v101 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8050) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8058) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8058) = -168430091;
  }
};

// Line 583: range 0000000017971E2E-0000000017971F64
const std::set<data::FightPropType> *__cdecl FightPropComp::getAllCurPropType()
{
  std::less<data::FightPropType> __comp; // [rsp+Eh] [rbp-42h] BYREF
  std::allocator<data::FightPropType> __a; // [rsp+Fh] [rbp-41h] BYREF
  std::initializer_list<data::FightPropType> __l; // [rsp+10h] [rbp-40h] BYREF
  int v4; // [rsp+20h] [rbp-30h]
  int v5; // [rsp+24h] [rbp-2Ch]
  int v6; // [rsp+28h] [rbp-28h]
  int v7; // [rsp+2Ch] [rbp-24h]

  if ( !(_BYTE)`guard variable for'FightPropComp::getAllCurPropType(void)::all_cur_prop_type_set
    && __cxa_guard_acquire(&`guard variable for'FightPropComp::getAllCurPropType(void)::all_cur_prop_type_set) )
  {
    __l._M_array = (std::initializer_list<data::FightPropType>::iterator)0x3E9000003E8LL;
    __l._M_len = 0x3EB000003EALL;
    v4 = 1004;
    v5 = 1005;
    v6 = 1006;
    v7 = 1010;
    std::allocator<data::FightPropType>::allocator(&__a);
    std::set<data::FightPropType>::set(
      &FightPropComp::getAllCurPropType(void)::all_cur_prop_type_set,
      (std::initializer_list<data::FightPropType>)__PAIR128__(8LL, &__l),
      &__comp,
      &__a);
    __cxa_guard_release(&`guard variable for'FightPropComp::getAllCurPropType(void)::all_cur_prop_type_set);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::set<data::FightPropType>::~set,
      &FightPropComp::getAllCurPropType(void)::all_cur_prop_type_set,
      &_dso_handle);
    std::allocator<data::FightPropType>::~allocator(&__a);
  }
  return &FightPropComp::getAllCurPropType(void)::all_cur_prop_type_set;
};

// Line 599: range 0000000017971F66-0000000017972036
bool __fastcall FightPropComp::isCurPropType(data::FightPropType type)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  const std::set<data::FightPropType> *AllCurPropType; // rax
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 8 type:598";
  *(_QWORD *)(v1 + 16) = FightPropComp::isCurPropType;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(_DWORD *)(v1 + 32) = type;
  AllCurPropType = FightPropComp::getAllCurPropType();
  result = common::tools::MiscUtils::isContains<std::set<data::FightPropType> const,data::FightPropType>(
             AllCurPropType,
             (const data::FightPropType *)(v1 + 32));
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 604: range 0000000017972038-0000000017972301
const std::unordered_map<data::FightPropType,data::FightPropType> *__cdecl FightPropComp::getExtendBaseValuePropTypeMap()
{
  std::unordered_map<data::FightPropType,data::FightPropType>::hasher __hf; // [rsp+Dh] [rbp-E3h] BYREF
  std::unordered_map<data::FightPropType,data::FightPropType>::key_equal __eql; // [rsp+Eh] [rbp-E2h] BYREF
  std::allocator<std::pair<const data::FightPropType,data::FightPropType> > __a; // [rsp+Fh] [rbp-E1h] BYREF
  std::initializer_list<std::pair<const data::FightPropType,data::FightPropType> > __l; // [rsp+10h] [rbp-E0h] BYREF
  int v5; // [rsp+20h] [rbp-D0h]
  int v6; // [rsp+24h] [rbp-CCh]
  int v7; // [rsp+28h] [rbp-C8h]
  int v8; // [rsp+2Ch] [rbp-C4h]
  int v9; // [rsp+30h] [rbp-C0h]
  int v10; // [rsp+34h] [rbp-BCh]
  int v11; // [rsp+38h] [rbp-B8h]
  int v12; // [rsp+3Ch] [rbp-B4h]
  int v13; // [rsp+40h] [rbp-B0h]
  int v14; // [rsp+44h] [rbp-ACh]
  int v15; // [rsp+48h] [rbp-A8h]
  int v16; // [rsp+4Ch] [rbp-A4h]
  int v17; // [rsp+50h] [rbp-A0h]
  int v18; // [rsp+54h] [rbp-9Ch]
  int v19; // [rsp+58h] [rbp-98h]
  int v20; // [rsp+5Ch] [rbp-94h]
  int v21; // [rsp+60h] [rbp-90h]
  int v22; // [rsp+64h] [rbp-8Ch]
  int v23; // [rsp+68h] [rbp-88h]
  int v24; // [rsp+6Ch] [rbp-84h]
  int v25; // [rsp+70h] [rbp-80h]
  int v26; // [rsp+74h] [rbp-7Ch]
  int v27; // [rsp+78h] [rbp-78h]
  int v28; // [rsp+7Ch] [rbp-74h]
  int v29; // [rsp+80h] [rbp-70h]
  int v30; // [rsp+84h] [rbp-6Ch]
  int v31; // [rsp+88h] [rbp-68h]
  int v32; // [rsp+8Ch] [rbp-64h]
  int v33; // [rsp+90h] [rbp-60h]
  int v34; // [rsp+94h] [rbp-5Ch]
  int v35; // [rsp+98h] [rbp-58h]
  int v36; // [rsp+9Ch] [rbp-54h]
  int v37; // [rsp+A0h] [rbp-50h]
  int v38; // [rsp+A4h] [rbp-4Ch]
  int v39; // [rsp+A8h] [rbp-48h]
  int v40; // [rsp+ACh] [rbp-44h]
  int v41; // [rsp+B0h] [rbp-40h]
  int v42; // [rsp+B4h] [rbp-3Ch]
  int v43; // [rsp+B8h] [rbp-38h]
  int v44; // [rsp+BCh] [rbp-34h]
  int v45; // [rsp+C0h] [rbp-30h]
  int v46; // [rsp+C4h] [rbp-2Ch]

  if ( !(_BYTE)`guard variable for'FightPropComp::getExtendBaseValuePropTypeMap(void)::extend_base_value_prop_type_map
    && __cxa_guard_acquire(&`guard variable for'FightPropComp::getExtendBaseValuePropTypeMap(void)::extend_base_value_prop_type_map) )
  {
    __l._M_array = (std::initializer_list<std::pair<const data::FightPropType,data::FightPropType> >::iterator)0x1400000BBALL;
    __l._M_len = 0x1500000BBBLL;
    v5 = 3004;
    v6 = 22;
    v7 = 3005;
    v8 = 23;
    v9 = 3006;
    v10 = 28;
    v11 = 3007;
    v12 = 29;
    v13 = 3024;
    v14 = 30;
    v15 = 3008;
    v16 = 40;
    v17 = 3009;
    v18 = 41;
    v19 = 3010;
    v20 = 42;
    v21 = 3011;
    v22 = 43;
    v23 = 3012;
    v24 = 44;
    v25 = 3013;
    v26 = 45;
    v27 = 3014;
    v28 = 46;
    v29 = 3015;
    v30 = 50;
    v31 = 3016;
    v32 = 51;
    v33 = 3017;
    v34 = 52;
    v35 = 3018;
    v36 = 53;
    v37 = 3019;
    v38 = 54;
    v39 = 3020;
    v40 = 55;
    v41 = 3021;
    v42 = 56;
    v43 = 3022;
    v44 = 80;
    v45 = 3023;
    v46 = 81;
    std::allocator<std::pair<data::FightPropType const,data::FightPropType>>::allocator(&__a);
    std::unordered_map<data::FightPropType,data::FightPropType>::unordered_map(
      (std::unordered_map<data::FightPropType,data::FightPropType> *const)&FightPropComp::getExtendBaseValuePropTypeMap(void)::extend_base_value_prop_type_map,
      (std::initializer_list<std::pair<const data::FightPropType,data::FightPropType> >)__PAIR128__(23LL, &__l),
      0LL,
      &__hf,
      &__eql,
      &__a);
    __cxa_guard_release(&`guard variable for'FightPropComp::getExtendBaseValuePropTypeMap(void)::extend_base_value_prop_type_map);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<data::FightPropType,data::FightPropType>::~unordered_map,
      (void *)&FightPropComp::getExtendBaseValuePropTypeMap(void)::extend_base_value_prop_type_map,
      &_dso_handle);
    std::allocator<std::pair<data::FightPropType const,data::FightPropType>>::~allocator(&__a);
  }
  return &FightPropComp::getExtendBaseValuePropTypeMap(void)::extend_base_value_prop_type_map;
};

// Line 636: range 0000000017972302-00000000179723D2
bool __fastcall FightPropComp::isExtendBaseValuePropType(data::FightPropType type)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  const std::unordered_map<data::FightPropType,data::FightPropType> *ExtendBaseValuePropTypeMap; // rax
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 8 type:635";
  *(_QWORD *)(v1 + 16) = FightPropComp::isExtendBaseValuePropType;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(_DWORD *)(v1 + 32) = type;
  ExtendBaseValuePropTypeMap = FightPropComp::getExtendBaseValuePropTypeMap();
  result = common::tools::MiscUtils::isContains<std::unordered_map<data::FightPropType,data::FightPropType> const,data::FightPropType>(
             ExtendBaseValuePropTypeMap,
             (const data::FightPropType *)(v1 + 32));
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 641: range 00000000179723D4-00000000179724AF
data::FightPropType __fastcall FightPropComp::getBaseValuePropType(data::FightPropType type)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::unordered_map<data::FightPropType,data::FightPropType>::mapped_type v4; // r14d
  const std::unordered_map<data::FightPropType,data::FightPropType> *ExtendBaseValuePropTypeMap; // rax
  data::FightPropType result; // eax
  char v7[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 8 type:640";
  *(_QWORD *)(v1 + 16) = FightPropComp::getBaseValuePropType;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(_DWORD *)(v1 + 32) = type;
  v4 = *(_DWORD *)(v1 + 32);
  ExtendBaseValuePropTypeMap = FightPropComp::getExtendBaseValuePropTypeMap();
  result = common::tools::MiscUtils::findMapWithDefaultValue<std::unordered_map<data::FightPropType,data::FightPropType>>(
             ExtendBaseValuePropTypeMap,
             (const std::unordered_map<data::FightPropType,data::FightPropType>::key_type *)(v1 + 32),
             v4);
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 646: range 00000000179724B0-0000000017972502
bool __cdecl FightPropComp::shouldNotify(const FightPropComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->creature_);
  return Entity::isOnScene((const Entity *const)this->creature_);
};

// Line 657: range 0000000017972504-000000001797259D
void __cdecl FightPropComp::notifyProp(const FightPropComp *const this, data::FightPropType type)
{
  FightPropComp::notifyPropInternal(this, type);
  switch ( type )
  {
    case FIGHT_PROP_BASE_HP:
    case FIGHT_PROP_HP:
    case FIGHT_PROP_HP_PERCENT:
    case FIGHT_PROP_HP_MP_PERCENT:
      FightPropComp::notifyPropInternal(this, FIGHT_PROP_MAX_HP);
      break;
    case FIGHT_PROP_BASE_ATTACK:
    case FIGHT_PROP_ATTACK:
    case FIGHT_PROP_ATTACK_PERCENT:
    case FIGHT_PROP_ATTACK_MP_PERCENT:
      FightPropComp::notifyPropInternal(this, FIGHT_PROP_CUR_ATTACK);
      break;
    case FIGHT_PROP_BASE_DEFENSE:
    case FIGHT_PROP_DEFENSE:
    case FIGHT_PROP_DEFENSE_PERCENT:
      FightPropComp::notifyPropInternal(this, FIGHT_PROP_CUR_DEFENSE);
      break;
    case FIGHT_PROP_BASE_SPEED:
    case FIGHT_PROP_SPEED_PERCENT:
      FightPropComp::notifyPropInternal(this, FIGHT_PROP_CUR_SPEED);
      break;
    default:
      return;
  }
};

// Line 689: range 000000001797259E-00000000179728FB
void __cdecl FightPropComp::notifyPropInternal(const FightPropComp *const this, data::FightPropType type)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t EntityId; // eax
  float *v8; // rax
  float *v9; // rdx
  Entity *v10; // rax
  float v11; // [rsp+0h] [rbp-100h]
  google::protobuf::Map<unsigned int,float>::key_type key; // [rsp+10h] [rbp-F0h] BYREF
  float value; // [rsp+14h] [rbp-ECh]
  google::protobuf::Map<unsigned int,float> *fight_prop_map; // [rsp+18h] [rbp-E8h]
  char v15[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 14 avatar_ptr:690 64 96 10 notify:698";
  *(_QWORD *)(v3 + 16) = FightPropComp::notifyPropInternal;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->creature_);
  toPtr<Avatar,Creature>((Creature *)(v3 + 32));
  if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 32), 0LL) )
  {
    FightPropComp::notifyEntityFightProp(this, type);
  }
  else
  {
    v6 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( Entity::isOnScene((const Entity *const)v6) )
    {
      proto::EntityFightPropUpdateNotify::EntityFightPropUpdateNotify((proto::EntityFightPropUpdateNotify *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->creature_);
      EntityId = Entity::getEntityId((const Entity *const)this->creature_);
      proto::EntityFightPropUpdateNotify::set_entity_id((proto::EntityFightPropUpdateNotify *const)(v3 + 64), EntityId);
      fight_prop_map = proto::EntityFightPropUpdateNotify::mutable_fight_prop_map((proto::EntityFightPropUpdateNotify *const)(v3 + 64));
      *(float *)v2.m128i_i32 = FightPropComp::getPropValue(this, type, 1, v2);
      LODWORD(value) = _mm_cvtsi128_si32(v2);
      v11 = value;
      key = type;
      v8 = google::protobuf::Map<unsigned int,float>::operator[](fight_prop_map, &key);
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v8);
      }
      *v9 = v11;
      v10 = (Entity *)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      Entity::notifySelf<proto::EntityFightPropUpdateNotify>(v10, (proto::EntityFightPropUpdateNotify *)(v3 + 64));
      FightPropComp::notifyEntityFightProp(this, type);
      proto::EntityFightPropUpdateNotify::~EntityFightPropUpdateNotify((proto::EntityFightPropUpdateNotify *const)(v3 + 64));
    }
    else
    {
      FightPropComp::notifyAvatarFightProp(this, type);
      FightPropComp::notifyEntityFightProp(this, type);
    }
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 32));
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 714: range 00000000179728FC-0000000017972D5B
void __cdecl FightPropComp::notifyAvatarFightProp(const FightPropComp *const this, data::FightPropType type)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // rbx
  Creature *creature; // rsi
  Creature *v7; // rax
  unsigned __int64 v8; // rax
  common::milog::MiLogStream *v9; // rcx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint64_t Guid; // rax
  float *v12; // rax
  float *v13; // rdx
  Entity *v14; // rax
  float v15; // [rsp+0h] [rbp-160h]
  google::protobuf::Map<unsigned int,float>::key_type key; // [rsp+1Ch] [rbp-144h] BYREF
  proto::ProtEntityType entity_type; // [rsp+20h] [rbp-140h]
  float value; // [rsp+24h] [rbp-13Ch]
  google::protobuf::Map<unsigned int,float> *fight_prop_map; // [rsp+28h] [rbp-138h]
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-130h] BYREF
  char v22[272]; // [rsp+50h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 16 14 avatar_ptr:721 80 104 10 notify:728";
  *(_QWORD *)(v3 + 16) = FightPropComp::notifyAvatarFightProp;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->creature_);
  creature = this->creature_;
  v7 = creature;
  if ( *(_BYTE *)(((unsigned __int64)creature >> 3) + 0x7FFF8000) )
    v7 = (Creature *)__asan_report_load8(this->creature_);
  v8 = *(_QWORD *)v7->baseclass_0 + 24LL;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8(v8);
  entity_type = (*(unsigned int (__fastcall **)(Creature *))v8)(creature);
  if ( entity_type == PROT_ENTITY_AVATAR )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->creature_);
    toPtr<Avatar,Creature>((Creature *)(v3 + 48));
    if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 48), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/creature/fight_prop_comp.cpp",
        "notifyAvatarFightProp",
        724);
      v9 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v21,
             (const char (*)[29])"dynamic_pointer_cast failed ");
      if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->creature_);
      common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v9, this->creature_);
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
    else
    {
      proto::AvatarFightPropUpdateNotify::AvatarFightPropUpdateNotify((proto::AvatarFightPropUpdateNotify *const)(v3 + 80));
      v10 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
      Guid = Avatar::getGuid(v10);
      proto::AvatarFightPropUpdateNotify::set_avatar_guid((proto::AvatarFightPropUpdateNotify *const)(v3 + 80), Guid);
      fight_prop_map = proto::AvatarFightPropUpdateNotify::mutable_fight_prop_map((proto::AvatarFightPropUpdateNotify *const)(v3 + 80));
      *(float *)v2.m128i_i32 = FightPropComp::getPropValue(this, type, 1, v2);
      LODWORD(value) = _mm_cvtsi128_si32(v2);
      v15 = value;
      key = type;
      v12 = google::protobuf::Map<unsigned int,float>::operator[](fight_prop_map, &key);
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v12);
      }
      *v13 = v15;
      v14 = (Entity *)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
      Entity::notifySelf<proto::AvatarFightPropUpdateNotify>(v14, (proto::AvatarFightPropUpdateNotify *)(v3 + 80));
      proto::AvatarFightPropUpdateNotify::~AvatarFightPropUpdateNotify((proto::AvatarFightPropUpdateNotify *const)(v3 + 80));
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 48));
  }
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8014) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 738: range 0000000017972D5C-00000000179730CC
void __cdecl FightPropComp::notifyEntityFightProp(
        const FightPropComp *const this,
        const std::vector<data::FightPropType> *fight_prop_vec)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  uint32_t EntityId; // eax
  data::FightPropType *v8; // rax
  data::FightPropType *v9; // rdx
  float *v10; // rax
  float *v11; // rdx
  float v12; // [rsp+Ch] [rbp-104h]
  google::protobuf::Map<unsigned int,float>::key_type key; // [rsp+24h] [rbp-ECh] BYREF
  data::FightPropType type; // [rsp+28h] [rbp-E8h]
  float value; // [rsp+2Ch] [rbp-E4h]
  std::vector<data::FightPropType>::const_iterator __for_begin; // [rsp+30h] [rbp-E0h] BYREF
  std::vector<data::FightPropType>::const_iterator __for_end; // [rsp+38h] [rbp-D8h] BYREF
  google::protobuf::Map<unsigned int,float> *fight_prop_map; // [rsp+40h] [rbp-D0h]
  const std::vector<data::FightPropType> *__for_range; // [rsp+48h] [rbp-C8h]
  char v20[192]; // [rsp+50h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 96 10 notify:745";
  *(_QWORD *)(v3 + 16) = FightPropComp::notifyEntityFightProp;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450896) = -202116109;
  if ( FightPropComp::shouldNotify(this) && !std::vector<data::FightPropType>::empty(fight_prop_vec) )
  {
    proto::EntityFightPropUpdateNotify::EntityFightPropUpdateNotify((proto::EntityFightPropUpdateNotify *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->creature_);
    EntityId = Entity::getEntityId((const Entity *const)this->creature_);
    proto::EntityFightPropUpdateNotify::set_entity_id((proto::EntityFightPropUpdateNotify *const)(v3 + 32), EntityId);
    fight_prop_map = proto::EntityFightPropUpdateNotify::mutable_fight_prop_map((proto::EntityFightPropUpdateNotify *const)(v3 + 32));
    __for_range = fight_prop_vec;
    __for_begin._M_current = std::vector<data::FightPropType>::begin(fight_prop_vec)._M_current;
    __for_end._M_current = std::vector<data::FightPropType>::end(fight_prop_vec)._M_current;
    while ( __gnu_cxx::operator!=<data::FightPropType const*,std::vector<data::FightPropType>>(&__for_begin, &__for_end) )
    {
      v8 = (data::FightPropType *)__gnu_cxx::__normal_iterator<data::FightPropType const*,std::vector<data::FightPropType>>::operator*(&__for_begin);
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        *(double *)v2.m128i_i64 = __asan_report_load4(v8);
      }
      type = *v9;
      *(float *)v2.m128i_i32 = FightPropComp::getPropValue(this, type, 1, v2);
      LODWORD(value) = _mm_cvtsi128_si32(v2);
      v12 = value;
      key = type;
      v10 = google::protobuf::Map<unsigned int,float>::operator[](fight_prop_map, &key);
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v10);
      }
      *v11 = v12;
      __gnu_cxx::__normal_iterator<data::FightPropType const*,std::vector<data::FightPropType>>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->creature_);
    Entity::notifyViewingPlayers<proto::EntityFightPropUpdateNotify>(
      (Entity *const)this->creature_,
      (proto::EntityFightPropUpdateNotify *)(v3 + 32),
      0);
    proto::EntityFightPropUpdateNotify::~EntityFightPropUpdateNotify((proto::EntityFightPropUpdateNotify *const)(v3 + 32));
  }
  if ( v20 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 757: range 00000000179730CE-000000001797335A
void __cdecl FightPropComp::notifyEntityFightProp(const FightPropComp *const this, data::FightPropType type)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  uint32_t EntityId; // eax
  float *v7; // rax
  float *v8; // rdx
  float v9; // [rsp+0h] [rbp-E0h]
  google::protobuf::Map<unsigned int,float>::key_type key; // [rsp+10h] [rbp-D0h] BYREF
  float value; // [rsp+14h] [rbp-CCh]
  google::protobuf::Map<unsigned int,float> *fight_prop_map; // [rsp+18h] [rbp-C8h]
  char v13[192]; // [rsp+20h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 96 10 notify:764";
  *(_QWORD *)(v3 + 16) = FightPropComp::notifyEntityFightProp;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450896) = -202116109;
  if ( FightPropComp::shouldNotify(this) )
  {
    proto::EntityFightPropUpdateNotify::EntityFightPropUpdateNotify((proto::EntityFightPropUpdateNotify *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->creature_);
    EntityId = Entity::getEntityId((const Entity *const)this->creature_);
    proto::EntityFightPropUpdateNotify::set_entity_id((proto::EntityFightPropUpdateNotify *const)(v3 + 32), EntityId);
    fight_prop_map = proto::EntityFightPropUpdateNotify::mutable_fight_prop_map((proto::EntityFightPropUpdateNotify *const)(v3 + 32));
    *(float *)v2.m128i_i32 = FightPropComp::getPropValue(this, type, 1, v2);
    LODWORD(value) = _mm_cvtsi128_si32(v2);
    v9 = value;
    key = type;
    v7 = google::protobuf::Map<unsigned int,float>::operator[](fight_prop_map, &key);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v7);
    }
    *v8 = v9;
    if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->creature_);
    Entity::notifyViewingPlayers<proto::EntityFightPropUpdateNotify>(
      (Entity *const)this->creature_,
      (proto::EntityFightPropUpdateNotify *)(v3 + 32),
      0);
    proto::EntityFightPropUpdateNotify::~EntityFightPropUpdateNotify((proto::EntityFightPropUpdateNotify *const)(v3 + 32));
  }
  if ( v13 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 774: range 000000001797335C-00000000179737B4
void __cdecl FightPropComp::notifyFightPropChangeReason(
        FightPropComp *const this,
        data::FightPropType type,
        float delta,
        FightPropNtfParamPtr *p_param_ptr)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  std::__shared_ptr_access<FightPropNtfParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t EntityId; // eax
  std::__shared_ptr_access<FightPropNtfParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v11; // rax
  google::protobuf::uint32 *v12; // rdx
  std::__shared_ptr_access<FightPropNtfParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rdx
  proto::ChangHpReason *p_change_hp_reason; // rax
  std::__shared_ptr_access<FightPropNtfParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-B8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-B0h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-A8h]
  char v21[160]; // [rsp+40h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 64 10 notify:785";
  *(_QWORD *)(v4 + 16) = FightPropComp::notifyFightPropChangeReason;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450892) = -202116109;
  if ( !std::operator==<FightPropNtfParam>(p_param_ptr, 0LL) )
  {
    v7 = std::__shared_ptr_access<FightPropNtfParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FightPropNtfParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_param_ptr);
    if ( *(char *)(((unsigned __int64)&v7->only_notify_on_change >> 3) + 0x7FFF8000) < 0 )
      v7 = (std::__shared_ptr_access<FightPropNtfParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v7->only_notify_on_change);
    if ( !v7->only_notify_on_change || std::fabs(delta) > 0.00000011920929 )
    {
      proto::EntityFightPropChangeReasonNotify::EntityFightPropChangeReasonNotify((proto::EntityFightPropChangeReasonNotify *const)(v4 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->creature_);
      EntityId = Entity::getEntityId((const Entity *const)this->creature_);
      proto::EntityFightPropChangeReasonNotify::set_entity_id(
        (proto::EntityFightPropChangeReasonNotify *const)(v4 + 32),
        EntityId);
      proto::EntityFightPropChangeReasonNotify::set_prop_type(
        (proto::EntityFightPropChangeReasonNotify *const)(v4 + 32),
        type);
      proto::EntityFightPropChangeReasonNotify::set_prop_delta(
        (proto::EntityFightPropChangeReasonNotify *const)(v4 + 32),
        delta);
      v10 = std::__shared_ptr_access<FightPropNtfParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FightPropNtfParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_param_ptr);
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(v10);
      }
      proto::EntityFightPropChangeReasonNotify::set_reason(
        (proto::EntityFightPropChangeReasonNotify *const)(v4 + 32),
        v10->reason);
      __for_range = &std::__shared_ptr_access<FightPropNtfParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FightPropNtfParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_param_ptr)->param_vec;
      __for_begin._M_current = std::vector<unsigned int>::begin(__for_range)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v11 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
        v12 = v11;
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v11);
        }
        proto::EntityFightPropChangeReasonNotify::add_param_list(
          (proto::EntityFightPropChangeReasonNotify *const)(v4 + 32),
          *v12);
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      v13 = std::__shared_ptr_access<FightPropNtfParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FightPropNtfParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_param_ptr);
      p_change_hp_reason = &v13->change_hp_reason;
      if ( *(_BYTE *)(((unsigned __int64)p_change_hp_reason >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_change_hp_reason & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_change_hp_reason >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(p_change_hp_reason);
      }
      proto::EntityFightPropChangeReasonNotify::set_change_hp_reason(
        (proto::EntityFightPropChangeReasonNotify *const)(v4 + 32),
        v13->change_hp_reason);
      v15 = std::__shared_ptr_access<FightPropNtfParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FightPropNtfParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_param_ptr);
      if ( *(_BYTE *)(((unsigned __int64)&v15->change_energy_reson >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v15->change_energy_reson >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v15->change_energy_reson);
      }
      proto::EntityFightPropChangeReasonNotify::set_change_energy_reson(
        (proto::EntityFightPropChangeReasonNotify *const)(v4 + 32),
        v15->change_energy_reson);
      if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->creature_);
      Entity::notifyViewingPlayersAndSelf<proto::EntityFightPropChangeReasonNotify>(
        (Entity *const)this->creature_,
        (proto::EntityFightPropChangeReasonNotify *)(v4 + 32));
      proto::EntityFightPropChangeReasonNotify::~EntityFightPropChangeReasonNotify((proto::EntityFightPropChangeReasonNotify *const)(v4 + 32));
    }
  }
  if ( v21 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 802: range 00000000179737B6-0000000017973B9D
float __cdecl FightPropComp::getMaxElementAddHurt(const FightPropComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  __m128i v4; // xmm0
  const float *v5; // rax
  unsigned int *v6; // rdx
  __m128i v7; // xmm0
  const float *v8; // rax
  unsigned int *v9; // rdx
  __m128i v10; // xmm0
  const float *v11; // rax
  unsigned int *v12; // rdx
  __m128i v13; // xmm0
  const float *v14; // rax
  unsigned int *v15; // rdx
  __m128i v16; // xmm0
  const float *v17; // rax
  unsigned int *v18; // rdx
  __m128i v19; // xmm0
  const float *v20; // rax
  unsigned int *v21; // rdx
  __m128i v22; // xmm0
  const float *v23; // rax
  _DWORD *v24; // rdx
  float result; // xmm0_4
  float __b; // [rsp+1Ch] [rbp-64h] BYREF
  char v27[96]; // [rsp+20h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 24 max_element_add_hurt:803";
  *(_QWORD *)(v1 + 16) = FightPropComp::getMaxElementAddHurt;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  v4 = 0LL;
  *(_DWORD *)(v1 + 32) = 0;
  *(float *)v4.m128i_i32 = FightPropComp::getPropValue(this, FIGHT_PROP_FIRE_ADD_HURT, 1, (__m128i)0LL);
  LODWORD(__b) = _mm_cvtsi128_si32(v4);
  v5 = std::max<float>((const float *)(v1 + 32), &__b);
  v6 = (unsigned int *)v5;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v5);
  }
  v7 = (__m128i)*v6;
  *(_DWORD *)(v1 + 32) = v7.m128i_i32[0];
  *(float *)v7.m128i_i32 = FightPropComp::getPropValue(this, FIGHT_PROP_ELEC_ADD_HURT, 1, v7);
  LODWORD(__b) = _mm_cvtsi128_si32(v7);
  v8 = std::max<float>((const float *)(v1 + 32), &__b);
  v9 = (unsigned int *)v8;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v8);
  }
  v10 = (__m128i)*v9;
  *(_DWORD *)(v1 + 32) = v10.m128i_i32[0];
  *(float *)v10.m128i_i32 = FightPropComp::getPropValue(this, FIGHT_PROP_WATER_ADD_HURT, 1, v10);
  LODWORD(__b) = _mm_cvtsi128_si32(v10);
  v11 = std::max<float>((const float *)(v1 + 32), &__b);
  v12 = (unsigned int *)v11;
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v11);
  }
  v13 = (__m128i)*v12;
  *(_DWORD *)(v1 + 32) = v13.m128i_i32[0];
  *(float *)v13.m128i_i32 = FightPropComp::getPropValue(this, FIGHT_PROP_GRASS_ADD_HURT, 1, v13);
  LODWORD(__b) = _mm_cvtsi128_si32(v13);
  v14 = std::max<float>((const float *)(v1 + 32), &__b);
  v15 = (unsigned int *)v14;
  if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v14);
  }
  v16 = (__m128i)*v15;
  *(_DWORD *)(v1 + 32) = v16.m128i_i32[0];
  *(float *)v16.m128i_i32 = FightPropComp::getPropValue(this, FIGHT_PROP_WIND_ADD_HURT, 1, v16);
  LODWORD(__b) = _mm_cvtsi128_si32(v16);
  v17 = std::max<float>((const float *)(v1 + 32), &__b);
  v18 = (unsigned int *)v17;
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v17);
  }
  v19 = (__m128i)*v18;
  *(_DWORD *)(v1 + 32) = v19.m128i_i32[0];
  *(float *)v19.m128i_i32 = FightPropComp::getPropValue(this, FIGHT_PROP_ROCK_ADD_HURT, 1, v19);
  LODWORD(__b) = _mm_cvtsi128_si32(v19);
  v20 = std::max<float>((const float *)(v1 + 32), &__b);
  v21 = (unsigned int *)v20;
  if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v20);
  }
  v22 = (__m128i)*v21;
  *(_DWORD *)(v1 + 32) = v22.m128i_i32[0];
  *(float *)v22.m128i_i32 = FightPropComp::getPropValue(this, FIGHT_PROP_ICE_ADD_HURT, 1, v22);
  LODWORD(__b) = _mm_cvtsi128_si32(v22);
  v23 = std::max<float>((const float *)(v1 + 32), &__b);
  v24 = v23;
  if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v23);
  }
  *(_DWORD *)(v1 + 32) = *v24;
  result = *(float *)(v1 + 32);
  if ( v27 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 816: range 0000000017973B9E-0000000017973F85
float __cdecl FightPropComp::getMaxElementSubHurt(const FightPropComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  __m128i v4; // xmm0
  const float *v5; // rax
  unsigned int *v6; // rdx
  __m128i v7; // xmm0
  const float *v8; // rax
  unsigned int *v9; // rdx
  __m128i v10; // xmm0
  const float *v11; // rax
  unsigned int *v12; // rdx
  __m128i v13; // xmm0
  const float *v14; // rax
  unsigned int *v15; // rdx
  __m128i v16; // xmm0
  const float *v17; // rax
  unsigned int *v18; // rdx
  __m128i v19; // xmm0
  const float *v20; // rax
  unsigned int *v21; // rdx
  __m128i v22; // xmm0
  const float *v23; // rax
  _DWORD *v24; // rdx
  float result; // xmm0_4
  float __b; // [rsp+1Ch] [rbp-64h] BYREF
  char v27[96]; // [rsp+20h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 24 max_element_sub_hurt:817";
  *(_QWORD *)(v1 + 16) = FightPropComp::getMaxElementSubHurt;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  v4 = 0LL;
  *(_DWORD *)(v1 + 32) = 0;
  *(float *)v4.m128i_i32 = FightPropComp::getPropValue(this, FIGHT_PROP_FIRE_SUB_HURT, 1, (__m128i)0LL);
  LODWORD(__b) = _mm_cvtsi128_si32(v4);
  v5 = std::max<float>((const float *)(v1 + 32), &__b);
  v6 = (unsigned int *)v5;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v5);
  }
  v7 = (__m128i)*v6;
  *(_DWORD *)(v1 + 32) = v7.m128i_i32[0];
  *(float *)v7.m128i_i32 = FightPropComp::getPropValue(this, FIGHT_PROP_ELEC_SUB_HURT, 1, v7);
  LODWORD(__b) = _mm_cvtsi128_si32(v7);
  v8 = std::max<float>((const float *)(v1 + 32), &__b);
  v9 = (unsigned int *)v8;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v8);
  }
  v10 = (__m128i)*v9;
  *(_DWORD *)(v1 + 32) = v10.m128i_i32[0];
  *(float *)v10.m128i_i32 = FightPropComp::getPropValue(this, FIGHT_PROP_WATER_SUB_HURT, 1, v10);
  LODWORD(__b) = _mm_cvtsi128_si32(v10);
  v11 = std::max<float>((const float *)(v1 + 32), &__b);
  v12 = (unsigned int *)v11;
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v11);
  }
  v13 = (__m128i)*v12;
  *(_DWORD *)(v1 + 32) = v13.m128i_i32[0];
  *(float *)v13.m128i_i32 = FightPropComp::getPropValue(this, FIGHT_PROP_GRASS_SUB_HURT, 1, v13);
  LODWORD(__b) = _mm_cvtsi128_si32(v13);
  v14 = std::max<float>((const float *)(v1 + 32), &__b);
  v15 = (unsigned int *)v14;
  if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v14);
  }
  v16 = (__m128i)*v15;
  *(_DWORD *)(v1 + 32) = v16.m128i_i32[0];
  *(float *)v16.m128i_i32 = FightPropComp::getPropValue(this, FIGHT_PROP_WIND_SUB_HURT, 1, v16);
  LODWORD(__b) = _mm_cvtsi128_si32(v16);
  v17 = std::max<float>((const float *)(v1 + 32), &__b);
  v18 = (unsigned int *)v17;
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v17);
  }
  v19 = (__m128i)*v18;
  *(_DWORD *)(v1 + 32) = v19.m128i_i32[0];
  *(float *)v19.m128i_i32 = FightPropComp::getPropValue(this, FIGHT_PROP_ROCK_SUB_HURT, 1, v19);
  LODWORD(__b) = _mm_cvtsi128_si32(v19);
  v20 = std::max<float>((const float *)(v1 + 32), &__b);
  v21 = (unsigned int *)v20;
  if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v20);
  }
  v22 = (__m128i)*v21;
  *(_DWORD *)(v1 + 32) = v22.m128i_i32[0];
  *(float *)v22.m128i_i32 = FightPropComp::getPropValue(this, FIGHT_PROP_ICE_SUB_HURT, 1, v22);
  LODWORD(__b) = _mm_cvtsi128_si32(v22);
  v23 = std::max<float>((const float *)(v1 + 32), &__b);
  v24 = v23;
  if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v23);
  }
  *(_DWORD *)(v1 + 32) = *v24;
  result = *(float *)(v1 + 32);
  if ( v27 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 829: range 0000000017973F86-00000000179741D8
float __cdecl FightPropComp::getElementReactionAddHurt(
        const FightPropComp *const this,
        data::ElementReactionType element_reaction_type)
{
  const std::string *p_ACTOR_ELEM_REACT_SWIRL_FIRE_DELTA; // rdx
  float result; // xmm0_4
  const std::string *p_ACTOR_ELEM_REACT_SWIRL_ICE_DELTA; // rdx
  const std::string *p_ACTOR_ELEM_REACT_SWIRL_WATER_DELTA; // rdx
  const std::string *p_ACTOR_ELEM_REACT_SWIRL_ELECTRIC_DELTA; // rdx
  const std::string *p_ACTOR_ELEM_REACT_SCONDUCT_DELTA; // rdx
  const std::string *p_ACTOR_ELEM_REACT_STEAM_DELTA; // rdx
  const std::string *p_ACTOR_ELEM_REACT_MELT_DELTA; // rdx
  const std::string *p_ACTOR_ELEM_REACT_ELECTRIC_DELTA; // rdx
  const std::string *p_ACTOR_ELEM_REACT_BURN_DELTA; // rdx
  const std::string *p_ACTOR_ELEM_REACT_FREEZE_DELTA; // rdx
  const std::string *p_ACTOR_ELEM_REACT_EXPLODE_DELTA; // rdx
  const std::string *p_ACTOR_ELEM_REACT_FROZENBROKEN_DELTA; // rdx
  const std::string *p_ACTOR_ELEM_REACT_OVERDOSE_ELECTRIC_DELTA; // rdx
  const std::string *p_ACTOR_ELEM_REACT_OVERDOSE_GRASS_DELTA; // rdx
  const std::string *p_ACTOR_ELEM_REACT_OVERGROW_DELTA; // rdx
  const std::string *p_ACTOR_ELEM_REACT_OVERGROW_FIRE_DELTA; // rdx
  const std::string *p_ACTOR_ELEM_REACT_OVERGROW_ELECTRIC_DELTA; // rdx

  switch ( element_reaction_type )
  {
    case Explode:
      p_ACTOR_ELEM_REACT_EXPLODE_DELTA = &ServiceBox::findService<GameserverService>()->ability_data_mgr.ACTOR_ELEM_REACT_EXPLODE_DELTA;
      result = FightPropComp::getElementReactionAddHurt(this, p_ACTOR_ELEM_REACT_EXPLODE_DELTA);
      break;
    case Stream:
      p_ACTOR_ELEM_REACT_STEAM_DELTA = &ServiceBox::findService<GameserverService>()->ability_data_mgr.ACTOR_ELEM_REACT_STEAM_DELTA;
      result = FightPropComp::getElementReactionAddHurt(this, p_ACTOR_ELEM_REACT_STEAM_DELTA);
      break;
    case Burning:
      p_ACTOR_ELEM_REACT_BURN_DELTA = &ServiceBox::findService<GameserverService>()->ability_data_mgr.ACTOR_ELEM_REACT_BURN_DELTA;
      result = FightPropComp::getElementReactionAddHurt(this, p_ACTOR_ELEM_REACT_BURN_DELTA);
      break;
    case Overgrow:
      p_ACTOR_ELEM_REACT_OVERGROW_DELTA = &ServiceBox::findService<GameserverService>()->ability_data_mgr.ACTOR_ELEM_REACT_OVERGROW_DELTA;
      result = FightPropComp::getElementReactionAddHurt(this, p_ACTOR_ELEM_REACT_OVERGROW_DELTA);
      break;
    case Melt:
      p_ACTOR_ELEM_REACT_MELT_DELTA = &ServiceBox::findService<GameserverService>()->ability_data_mgr.ACTOR_ELEM_REACT_MELT_DELTA;
      result = FightPropComp::getElementReactionAddHurt(this, p_ACTOR_ELEM_REACT_MELT_DELTA);
      break;
    case Freeze:
      p_ACTOR_ELEM_REACT_FREEZE_DELTA = &ServiceBox::findService<GameserverService>()->ability_data_mgr.ACTOR_ELEM_REACT_FREEZE_DELTA;
      result = FightPropComp::getElementReactionAddHurt(this, p_ACTOR_ELEM_REACT_FREEZE_DELTA);
      break;
    case Shock:
      p_ACTOR_ELEM_REACT_ELECTRIC_DELTA = &ServiceBox::findService<GameserverService>()->ability_data_mgr.ACTOR_ELEM_REACT_ELECTRIC_DELTA;
      result = FightPropComp::getElementReactionAddHurt(this, p_ACTOR_ELEM_REACT_ELECTRIC_DELTA);
      break;
    case Superconductor:
      p_ACTOR_ELEM_REACT_SCONDUCT_DELTA = &ServiceBox::findService<GameserverService>()->ability_data_mgr.ACTOR_ELEM_REACT_SCONDUCT_DELTA;
      result = FightPropComp::getElementReactionAddHurt(this, p_ACTOR_ELEM_REACT_SCONDUCT_DELTA);
      break;
    case SwirlFire:
      p_ACTOR_ELEM_REACT_SWIRL_FIRE_DELTA = &ServiceBox::findService<GameserverService>()->ability_data_mgr.ACTOR_ELEM_REACT_SWIRL_FIRE_DELTA;
      result = FightPropComp::getElementReactionAddHurt(this, p_ACTOR_ELEM_REACT_SWIRL_FIRE_DELTA);
      break;
    case SwirlWater:
      p_ACTOR_ELEM_REACT_SWIRL_WATER_DELTA = &ServiceBox::findService<GameserverService>()->ability_data_mgr.ACTOR_ELEM_REACT_SWIRL_WATER_DELTA;
      result = FightPropComp::getElementReactionAddHurt(this, p_ACTOR_ELEM_REACT_SWIRL_WATER_DELTA);
      break;
    case SwirlElectric:
      p_ACTOR_ELEM_REACT_SWIRL_ELECTRIC_DELTA = &ServiceBox::findService<GameserverService>()->ability_data_mgr.ACTOR_ELEM_REACT_SWIRL_ELECTRIC_DELTA;
      result = FightPropComp::getElementReactionAddHurt(this, p_ACTOR_ELEM_REACT_SWIRL_ELECTRIC_DELTA);
      break;
    case SwirlIce:
      p_ACTOR_ELEM_REACT_SWIRL_ICE_DELTA = &ServiceBox::findService<GameserverService>()->ability_data_mgr.ACTOR_ELEM_REACT_SWIRL_ICE_DELTA;
      result = FightPropComp::getElementReactionAddHurt(this, p_ACTOR_ELEM_REACT_SWIRL_ICE_DELTA);
      break;
    case FrozenBroken:
      p_ACTOR_ELEM_REACT_FROZENBROKEN_DELTA = &ServiceBox::findService<GameserverService>()->ability_data_mgr.ACTOR_ELEM_REACT_FROZENBROKEN_DELTA;
      result = FightPropComp::getElementReactionAddHurt(this, p_ACTOR_ELEM_REACT_FROZENBROKEN_DELTA);
      break;
    case OverdoseElectric:
      p_ACTOR_ELEM_REACT_OVERDOSE_ELECTRIC_DELTA = &ServiceBox::findService<GameserverService>()->ability_data_mgr.ACTOR_ELEM_REACT_OVERDOSE_ELECTRIC_DELTA;
      result = FightPropComp::getElementReactionAddHurt(this, p_ACTOR_ELEM_REACT_OVERDOSE_ELECTRIC_DELTA);
      break;
    case OverdoseGrass:
      p_ACTOR_ELEM_REACT_OVERDOSE_GRASS_DELTA = &ServiceBox::findService<GameserverService>()->ability_data_mgr.ACTOR_ELEM_REACT_OVERDOSE_GRASS_DELTA;
      result = FightPropComp::getElementReactionAddHurt(this, p_ACTOR_ELEM_REACT_OVERDOSE_GRASS_DELTA);
      break;
    case OvergrowMushroomFire:
      p_ACTOR_ELEM_REACT_OVERGROW_FIRE_DELTA = &ServiceBox::findService<GameserverService>()->ability_data_mgr.ACTOR_ELEM_REACT_OVERGROW_FIRE_DELTA;
      result = FightPropComp::getElementReactionAddHurt(this, p_ACTOR_ELEM_REACT_OVERGROW_FIRE_DELTA);
      break;
    case OvergrowMushroomElectric:
      p_ACTOR_ELEM_REACT_OVERGROW_ELECTRIC_DELTA = &ServiceBox::findService<GameserverService>()->ability_data_mgr.ACTOR_ELEM_REACT_OVERGROW_ELECTRIC_DELTA;
      result = FightPropComp::getElementReactionAddHurt(this, p_ACTOR_ELEM_REACT_OVERGROW_ELECTRIC_DELTA);
      break;
    default:
      result = 0.0;
      break;
  }
  return result;
};

// Line 873: range 00000000179741DA-00000000179743A0
float __cdecl FightPropComp::getElementReactionAddHurt(const FightPropComp *const this, const std::string *prop_key)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__detail::_Node_const_iterator<std::pair<const std::string,float>,false,true>::pointer v5; // rax
  AbilityComp *AbilityComp; // rdx
  float result; // xmm0_4
  float value; // [rsp+14h] [rbp-6Ch]
  std::__detail::_Node_iterator_base<std::pair<const std::string,float>,true> __y; // [rsp+18h] [rbp-68h] BYREF
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 iter:875";
  *(_QWORD *)(v2 + 16) = FightPropComp::getElementReactionAddHurt;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  value = 0.0;
  *(std::unordered_map<std::string,float>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,float>::find(
                                                                          &this->elem_react_add_hurt_base_map_,
                                                                          prop_key);
  __y._M_cur = std::unordered_map<std::string,float>::end(&this->elem_react_add_hurt_base_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<std::string const,float>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,float>,true> *)(v2 + 32),
         &__y) )
  {
    v5 = std::__detail::_Node_const_iterator<std::pair<std::string const,float>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,float>,false,true> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v5->second >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v5->second >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v5->second);
    }
    value = v5->second + 0.0;
  }
  if ( FightPropComp::getIsUseAbilityProperty(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->creature_);
    AbilityComp = Creature::getAbilityComp(this->creature_);
    value = AbilityComp::getProperty(AbilityComp, prop_key) + value;
  }
  result = value;
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

// Line 888: range 00000000179743A2-0000000017974440
void __cdecl FightPropComp::setElementReactionAddHurt(
        FightPropComp *const this,
        const std::string *prop_key,
        float value)
{
  std::unordered_map<std::string,float>::mapped_type *v3; // rax
  float *v4; // rdx

  if ( std::fabs(value) >= 0.00000011920929 )
  {
    v3 = std::unordered_map<std::string,float>::operator[](&this->elem_react_add_hurt_base_map_, prop_key);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v3);
    }
    *v4 = value;
  }
};

// Line 897: range 0000000017974442-000000001797447F
float __cdecl FightPropComp::getElementAddHurtDelta(const FightPropComp *const this)
{
  __m128i v1; // xmm0

  *(float *)v1.m128i_i32 = FightPropComp::getPropValue(this, FIGHT_PROP_ELEMENT_MASTERY, 1, v1);
  return FightPropComp::calcElemMasteryAddHurt(this, COERCE_FLOAT(_mm_cvtsi128_si32(v1)));
};

// Line 903: range 0000000017974480-00000000179744BD
float __cdecl FightPropComp::getElementReactionAddHurtDelta(const FightPropComp *const this)
{
  __m128i v1; // xmm0

  *(float *)v1.m128i_i32 = FightPropComp::getPropValue(this, FIGHT_PROP_ELEMENT_MASTERY, 1, v1);
  return FightPropComp::calcElemMasteryReactionAddHurt(this, COERCE_FLOAT(_mm_cvtsi128_si32(v1)));
};

// Line 909: range 00000000179744BE-0000000017974519
float __cdecl FightPropComp::getElementReactOvergrowVariationDelta(const FightPropComp *const this)
{
  __m128i v1; // xmm0
  const std::string *p_ACTOR_ELEM_REACT_OVERGROW_VARIATION_DELTA; // rdx
  const std::string *p_ACTOR_ELEM_REACT_OVERGROW_VARIATION_EXTRA_DELTA; // rdx
  float elem_react_overgrow_variation_delta; // [rsp+18h] [rbp-8h]

  p_ACTOR_ELEM_REACT_OVERGROW_VARIATION_DELTA = &ServiceBox::findService<GameserverService>()->ability_data_mgr.ACTOR_ELEM_REACT_OVERGROW_VARIATION_DELTA;
  *(float *)v1.m128i_i32 = FightPropComp::getElementReactionAddHurt(this, p_ACTOR_ELEM_REACT_OVERGROW_VARIATION_DELTA);
  elem_react_overgrow_variation_delta = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  p_ACTOR_ELEM_REACT_OVERGROW_VARIATION_EXTRA_DELTA = &ServiceBox::findService<GameserverService>()->ability_data_mgr.ACTOR_ELEM_REACT_OVERGROW_VARIATION_EXTRA_DELTA;
  *(float *)v1.m128i_i32 = FightPropComp::getElementReactionAddHurt(
                             this,
                             p_ACTOR_ELEM_REACT_OVERGROW_VARIATION_EXTRA_DELTA);
  return elem_react_overgrow_variation_delta + COERCE_FLOAT(_mm_cvtsi128_si32(v1));
};

// Line 916: range 000000001797451A-0000000017974557
float __cdecl FightPropComp::getCrystalShieldHpDelta(const FightPropComp *const this)
{
  __m128i v1; // xmm0

  *(float *)v1.m128i_i32 = FightPropComp::getPropValue(this, FIGHT_PROP_ELEMENT_MASTERY, 1, v1);
  return FightPropComp::calcCrystalShieldHpDelta(this, COERCE_FLOAT(_mm_cvtsi128_si32(v1)));
};

// Line 921: range 0000000017974558-00000000179747CB
float __cdecl FightPropComp::getElementReactionOverdoseAddHurtDelta(const FightPropComp *const this)
{
  __m128i v1; // xmm0
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::array<float,2>::value_type *v6; // rax
  float *v7; // rdx
  std::array<float,2>::value_type *v8; // rax
  float *v9; // rdx
  __m128i v10; // xmm0
  float *v11; // rax
  float *v12; // rdx
  float result; // xmm0_4
  float __b; // [rsp+14h] [rbp-8Ch] BYREF
  float elem_mastery; // [rsp+18h] [rbp-88h]
  float param1; // [rsp+1Ch] [rbp-84h]
  float param2; // [rsp+20h] [rbp-80h]
  float denominator; // [rsp+24h] [rbp-7Ch]
  const std::array<float,2> *element_mastery_overdose_params; // [rsp+28h] [rbp-78h]
  std::shared_ptr<Config> v20; // [rsp+30h] [rbp-70h] BYREF
  char v21[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 10 result:929";
  *(_QWORD *)(v2 + 16) = FightPropComp::getElementReactionOverdoseAddHurtDelta;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(float *)v1.m128i_i32 = FightPropComp::getPropValue(this, FIGHT_PROP_ELEMENT_MASTERY, 1, v1);
  elem_mastery = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
  element_mastery_overdose_params = ConstValueExcelConfigMgr::getElementMasteryOverdoseParams(&v5->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v20);
  v6 = (std::array<float,2>::value_type *)std::array<float,2ul>::operator[](element_mastery_overdose_params, 0LL);
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v6);
  }
  param1 = *v7;
  v8 = (std::array<float,2>::value_type *)std::array<float,2ul>::operator[](element_mastery_overdose_params, 1uLL);
  v9 = v8;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v8);
  }
  param2 = *v9;
  v10 = (__m128i)LODWORD(param2);
  *(float *)v10.m128i_i32 = std::fabs(param2 + elem_mastery);
  denominator = COERCE_FLOAT(_mm_cvtsi128_si32(v10));
  if ( denominator <= 0.00000011920929 )
  {
    result = 0.0;
  }
  else
  {
    *(float *)(v2 + 32) = (float)(param1 * elem_mastery) / denominator;
    __b = 0.0;
    v11 = (float *)std::max<float>((const float *)(v2 + 32), &__b);
    v12 = v11;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v11);
    }
    result = *v12;
  }
  if ( v21 == (char *)v2 )
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

// Line 936: range 00000000179747CC-0000000017974833
data::FightPropType __cdecl FightPropComp::getCurEnergyType(data::ElementType elem_type)
{
  data::FightPropType result; // eax

  switch ( elem_type )
  {
    case Fire:
      result = FIGHT_PROP_CUR_FIRE_ENERGY;
      break;
    case Water:
      result = FIGHT_PROP_CUR_WATER_ENERGY;
      break;
    case Grass:
      result = FIGHT_PROP_CUR_GRASS_ENERGY;
      break;
    case Electric:
      result = FIGHT_PROP_CUR_ELEC_ENERGY;
      break;
    case Ice:
      result = FIGHT_PROP_CUR_ICE_ENERGY;
      break;
    case Wind:
      result = FIGHT_PROP_CUR_WIND_ENERGY;
      break;
    case Rock:
      result = FIGHT_PROP_CUR_ROCK_ENERGY;
      break;
    default:
      result = FIGHT_PROP_NONE;
      break;
  }
  return result;
};

// Line 959: range 0000000017974834-000000001797489B
data::FightPropType __cdecl FightPropComp::getMaxEnergyType(data::ElementType elem_type)
{
  data::FightPropType result; // eax

  switch ( elem_type )
  {
    case Fire:
      result = FIGHT_PROP_MAX_FIRE_ENERGY;
      break;
    case Water:
      result = FIGHT_PROP_MAX_WATER_ENERGY;
      break;
    case Grass:
      result = FIGHT_PROP_MAX_GRASS_ENERGY;
      break;
    case Electric:
      result = FIGHT_PROP_MAX_ELEC_ENERGY;
      break;
    case Ice:
      result = FIGHT_PROP_MAX_ICE_ENERGY;
      break;
    case Wind:
      result = FIGHT_PROP_MAX_WIND_ENERGY;
      break;
    case Rock:
      result = FIGHT_PROP_MAX_ROCK_ENERGY;
      break;
    default:
      result = FIGHT_PROP_NONE;
      break;
  }
  return result;
};

// Line 982: range 000000001797489C-00000000179748BC
bool __cdecl FightPropComp::isMaxEnergyType(data::FightPropType fight_prop_type)
{
  return (unsigned int)(fight_prop_type - 70) <= 6;
};

// Line 1001: range 00000000179748BE-0000000017974976
float __cdecl FightPropComp::calcCurHpRatio(const FightPropComp *const this)
{
  __m128i v1; // xmm0
  float *v3; // rax
  float *v4; // rdx
  float __a; // [rsp+14h] [rbp-Ch] BYREF
  float __b; // [rsp+18h] [rbp-8h] BYREF
  float max_hp; // [rsp+1Ch] [rbp-4h]

  *(float *)v1.m128i_i32 = FightPropComp::getMaxHp(this);
  max_hp = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  if ( std::fabs(max_hp) <= 0.00000011920929 )
    return 0.0;
  __b = FightPropComp::getCurHp(this) / max_hp;
  __a = 1.0;
  v3 = (float *)std::min<float>(&__a, &__b);
  v4 = v3;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v3);
  }
  return *v4;
};

// Line 1012: range 0000000017974978-0000000017974DF5
void __fastcall FightPropComp::modifyProp(
        FightPropComp *const this,
        data::FightPropType fight_prop_type,
        float delta_prop_value,
        bool is_by_ability)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rcx
  __m128i v8; // xmm0
  common::milog::MiLogStream *v9; // rcx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  float v19; // [rsp+2Ch] [rbp-104h] BYREF
  char *val; // [rsp+30h] [rbp-100h] BYREF
  FightPropValue *fight_prop_value; // [rsp+38h] [rbp-F8h]
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-F0h] BYREF
  char v23[208]; // [rsp+60h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 20 fight_prop_type:1011 64 4 21 delta_prop_value:1011 80 48 21 fight_prop_guard:1013";
  *(_QWORD *)(v4 + 16) = FightPropComp::modifyProp;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = 61956;
  v6[536862724] = -202116109;
  *(_DWORD *)(v4 + 48) = fight_prop_type;
  *(float *)(v4 + 64) = delta_prop_value;
  FightPropGuard::FightPropGuard((FightPropGuard *const)(v4 + 80));
  if ( *(_BYTE *)(((unsigned __int64)&this->is_guarded_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_guarded_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_guarded_);
  }
  if ( !this->is_guarded_ )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/creature/fight_prop_comp.cpp",
      "modifyProp",
      1016);
    v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v22, (const char (*)[10])"creature:");
    if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->creature_);
    common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v7, this->creature_);
    common::milog::MiLogStream::~MiLogStream(&v22);
    if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->creature_);
    FightPropGuard::addCreature((FightPropGuard *const)(v4 + 80), this->creature_, 0);
  }
  fight_prop_value = std::unordered_map<data::FightPropType,FightPropValue>::operator[](
                       &this->modified_fight_prop_map_,
                       (const std::unordered_map<data::FightPropType,FightPropValue>::key_type *)(v4 + 48));
  v8 = _mm_cvtsi32_si128(*(_DWORD *)(v4 + 64));
  if ( is_by_ability )
    FightPropValue::addAbilityValue(fight_prop_value, *(float *)v8.m128i_i32);
  else
    FightPropValue::addBaseValue(fight_prop_value, *(float *)v8.m128i_i32);
  common::milog::MiLogStream::create(
    &v22,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/creature/fight_prop_comp.cpp",
    "modifyProp",
    1030);
  v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v22, (const char (*)[10])"creature:");
  if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->creature_);
  v10 = common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v9, this->creature_);
  v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])" prop_type:");
  val = (char *)data::enumValToStr((data::FightPropType)*(_DWORD *)(v4 + 48));
  v12 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)&val);
  v13 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v12, (const char (*)[8])" delta:");
  v14 = common::milog::MiLogStream::operator<<<float,(float *)0>(v13, (const float *)(v4 + 64));
  v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v14, (const char (*)[16])" is_by_ability:");
  v16 = common::milog::MiLogStream::operator<<(v15, is_by_ability);
  v17 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v16, (const char (*)[12])" cur value:");
  *(float *)v8.m128i_i32 = FightPropValue::getValue(fight_prop_value, 1);
  LODWORD(v19) = _mm_cvtsi128_si32(v8);
  common::milog::MiLogStream::operator<<<float,(float *)0>(v17, &v19);
  common::milog::MiLogStream::~MiLogStream(&v22);
  FightPropGuard::~FightPropGuard((FightPropGuard *const)(v4 + 80));
  if ( v23 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1036: range 0000000017974DF6-0000000017975234
void __cdecl FightPropComp::modifyProps(
        FightPropComp *const this,
        const FightPropMap *modified_fight_prop_map,
        bool is_by_ability)
{
  FightPropGuard *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rcx
  std::pair<const data::FightPropType,float> *v7; // rax
  std::pair<const data::FightPropType,float> *v8; // rdx
  std::tuple_element<1,std::pair<const data::FightPropType,float> >::type *v9; // rax
  char v10; // di
  float v11; // esi
  std::map<data::FightPropType,float>::const_iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  std::map<data::FightPropType,float>::const_iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  const std::map<data::FightPropType,float> *__for_range; // [rsp+30h] [rbp-E0h]
  std::tuple_element<0,std::pair<const data::FightPropType,float> >::type *fight_prop_type; // [rsp+38h] [rbp-D8h]
  std::tuple_element<1,std::pair<const data::FightPropType,float> >::type *delta_prop_value; // [rsp+40h] [rbp-D0h]
  std::pair<const data::FightPropType,float> __in; // [rsp+48h] [rbp-C8h] BYREF
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-C0h] BYREF
  char v21[160]; // [rsp+70h] [rbp-A0h] BYREF

  v3 = (FightPropGuard *)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = (FightPropGuard *)v4;
  }
  *(_QWORD *)v3->creature_set_._M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v3->creature_set_._M_t._M_impl._M_header._M_color = "1 48 48 21 fight_prop_guard:1037";
  v3->creature_set_._M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)FightPropComp::modifyProps;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -202116109;
  FightPropGuard::FightPropGuard(v3 + 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_guarded_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_guarded_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_guarded_);
  }
  if ( !this->is_guarded_ )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/creature/fight_prop_comp.cpp",
      "modifyProps",
      1040);
    v6 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v20, (const char (*)[10])"creature:");
    if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->creature_);
    common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v6, this->creature_);
    common::milog::MiLogStream::~MiLogStream(&v20);
    if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->creature_);
    FightPropGuard::addCreature(v3 + 1, this->creature_, 0);
  }
  __for_range = modified_fight_prop_map;
  __for_begin._M_node = std::map<data::FightPropType,float>::begin(modified_fight_prop_map)._M_node;
  __for_end._M_node = std::map<data::FightPropType,float>::end(modified_fight_prop_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = (std::pair<const data::FightPropType,float> *)std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,float>>::operator*(&__for_begin);
    v8 = v7;
    if ( ((unsigned __int8)v7 & 7) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v7->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v7 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v7->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v7, 8LL);
    }
    __in = *v8;
    fight_prop_type = std::get<0ul,data::FightPropType const,float>(&__in);
    v9 = std::get<1ul,data::FightPropType const,float>(&__in);
    delta_prop_value = v9;
    v10 = is_by_ability;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      v10 = (char)v9;
      __asan_report_load4(v9);
    }
    v11 = *delta_prop_value;
    if ( *(_BYTE *)(((unsigned __int64)fight_prop_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)fight_prop_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)fight_prop_type >> 3)
                                                                        + 0x7FFF8000) )
    {
      v10 = (char)fight_prop_type;
      __asan_report_load4(fight_prop_type);
    }
    FightPropComp::modifyProp(this, *fight_prop_type, v11, v10);
    std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,float>>::operator++(&__for_begin);
  }
  FightPropGuard::~FightPropGuard(v3 + 1);
  if ( v21 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3->creature_set_._M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1051: range 0000000017975236-000000001797567B
void __cdecl FightPropComp::reduceProps(
        FightPropComp *const this,
        const FightPropMap *modified_fight_prop_map,
        bool is_by_ability)
{
  FightPropGuard *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rcx
  std::pair<const data::FightPropType,float> *v7; // rax
  std::pair<const data::FightPropType,float> *v8; // rdx
  std::tuple_element<1,std::pair<const data::FightPropType,float> >::type *v9; // rax
  double v10; // xmm0_8
  std::map<data::FightPropType,float>::const_iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  std::map<data::FightPropType,float>::const_iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  const std::map<data::FightPropType,float> *__for_range; // [rsp+30h] [rbp-E0h]
  std::tuple_element<0,std::pair<const data::FightPropType,float> >::type *fight_prop_type; // [rsp+38h] [rbp-D8h]
  std::tuple_element<1,std::pair<const data::FightPropType,float> >::type *delta_prop_value; // [rsp+40h] [rbp-D0h]
  std::pair<const data::FightPropType,float> __in; // [rsp+48h] [rbp-C8h] BYREF
  common::milog::MiLogStream v18; // [rsp+50h] [rbp-C0h] BYREF
  char v19[160]; // [rsp+70h] [rbp-A0h] BYREF

  v3 = (FightPropGuard *)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = (FightPropGuard *)v4;
  }
  *(_QWORD *)v3->creature_set_._M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v3->creature_set_._M_t._M_impl._M_header._M_color = "1 48 48 21 fight_prop_guard:1052";
  v3->creature_set_._M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)FightPropComp::reduceProps;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -202116109;
  FightPropGuard::FightPropGuard(v3 + 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_guarded_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_guarded_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_guarded_);
  }
  if ( !this->is_guarded_ )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/creature/fight_prop_comp.cpp",
      "reduceProps",
      1055);
    v6 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v18, (const char (*)[10])"creature:");
    if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->creature_);
    common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v6, this->creature_);
    common::milog::MiLogStream::~MiLogStream(&v18);
    if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->creature_);
    FightPropGuard::addCreature(v3 + 1, this->creature_, 0);
  }
  __for_range = modified_fight_prop_map;
  __for_begin._M_node = std::map<data::FightPropType,float>::begin(modified_fight_prop_map)._M_node;
  __for_end._M_node = std::map<data::FightPropType,float>::end(modified_fight_prop_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = (std::pair<const data::FightPropType,float> *)std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,float>>::operator*(&__for_begin);
    v8 = v7;
    if ( ((unsigned __int8)v7 & 7) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v7->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v7 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v7->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v7, 8LL);
    }
    __in = *v8;
    fight_prop_type = std::get<0ul,data::FightPropType const,float>(&__in);
    v9 = std::get<1ul,data::FightPropType const,float>(&__in);
    delta_prop_value = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    *(float *)&v10 = -*delta_prop_value;
    if ( *(_BYTE *)(((unsigned __int64)fight_prop_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)fight_prop_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)fight_prop_type >> 3)
                                                                        + 0x7FFF8000) )
    {
      v10 = __asan_report_load4(fight_prop_type);
    }
    FightPropComp::modifyProp(this, *fight_prop_type, *(float *)&v10, is_by_ability);
    std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,float>>::operator++(&__for_begin);
  }
  FightPropGuard::~FightPropGuard(v3 + 1);
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3->creature_set_._M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1066: range 000000001797567C-00000000179757D6
float __cdecl FightPropComp::calcMaxHp(const FightPropComp *const this, bool is_include_ability)
{
  __m128i v2; // xmm0
  float *v3; // rax
  float *v4; // rdx
  float *v5; // rax
  float *v6; // rdx
  __m128i v7; // xmm0
  float v9; // [rsp+0h] [rbp-20h]
  float __a; // [rsp+10h] [rbp-10h] BYREF
  float __b; // [rsp+14h] [rbp-Ch] BYREF
  float add_percent; // [rsp+18h] [rbp-8h]
  float add_mp_percent; // [rsp+1Ch] [rbp-4h]

  __b = FightPropComp::getPropValue(this, FIGHT_PROP_HP_PERCENT, is_include_ability, v2) + 1.0;
  __a = 0.0;
  v3 = (float *)std::max<float>(&__a, &__b);
  v4 = v3;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v3);
  }
  add_percent = *v4;
  __b = FightPropComp::getPropValue(this, FIGHT_PROP_HP_MP_PERCENT, is_include_ability, (__m128i)LODWORD(add_percent))
      + 1.0;
  __a = 0.0;
  v5 = (float *)std::max<float>(&__a, &__b);
  v6 = v5;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v5);
  }
  add_mp_percent = *v6;
  v7 = (__m128i)LODWORD(add_mp_percent);
  *(float *)v7.m128i_i32 = FightPropComp::getPropValue(
                             this,
                             FIGHT_PROP_BASE_HP,
                             is_include_ability,
                             (__m128i)LODWORD(add_mp_percent));
  *(float *)v7.m128i_i32 = *(float *)v7.m128i_i32 * add_percent;
  v9 = *(float *)v7.m128i_i32;
  *(float *)v7.m128i_i32 = FightPropComp::getPropValue(this, FIGHT_PROP_HP, is_include_ability, v7);
  return (float)(*(float *)v7.m128i_i32 + v9) * add_mp_percent;
};

// Line 1073: range 00000000179757D8-0000000017975932
float __cdecl FightPropComp::calcCurAttack(const FightPropComp *const this, bool is_include_ability)
{
  __m128i v2; // xmm0
  float *v3; // rax
  float *v4; // rdx
  float *v5; // rax
  float *v6; // rdx
  __m128i v7; // xmm0
  float v9; // [rsp+0h] [rbp-20h]
  float __a; // [rsp+10h] [rbp-10h] BYREF
  float __b; // [rsp+14h] [rbp-Ch] BYREF
  float add_percent; // [rsp+18h] [rbp-8h]
  float add_mp_percent; // [rsp+1Ch] [rbp-4h]

  __b = FightPropComp::getPropValue(this, FIGHT_PROP_ATTACK_PERCENT, is_include_ability, v2) + 1.0;
  __a = 0.0;
  v3 = (float *)std::max<float>(&__a, &__b);
  v4 = v3;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v3);
  }
  add_percent = *v4;
  __b = FightPropComp::getPropValue(
          this,
          FIGHT_PROP_ATTACK_MP_PERCENT,
          is_include_ability,
          (__m128i)LODWORD(add_percent))
      + 1.0;
  __a = 0.0;
  v5 = (float *)std::max<float>(&__a, &__b);
  v6 = v5;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v5);
  }
  add_mp_percent = *v6;
  v7 = (__m128i)LODWORD(add_mp_percent);
  *(float *)v7.m128i_i32 = FightPropComp::getPropValue(
                             this,
                             FIGHT_PROP_BASE_ATTACK,
                             is_include_ability,
                             (__m128i)LODWORD(add_mp_percent));
  *(float *)v7.m128i_i32 = *(float *)v7.m128i_i32 * add_percent;
  v9 = *(float *)v7.m128i_i32;
  *(float *)v7.m128i_i32 = FightPropComp::getPropValue(this, FIGHT_PROP_ATTACK, is_include_ability, v7);
  return (float)(*(float *)v7.m128i_i32 + v9) * add_mp_percent;
};

// Line 1080: range 0000000017975934-0000000017975A04
float __cdecl FightPropComp::calcCurDefense(const FightPropComp *const this, bool is_include_ability)
{
  __m128i v2; // xmm0
  float *v3; // rax
  float *v4; // rdx
  __m128i v5; // xmm0
  float __a; // [rsp+14h] [rbp-Ch] BYREF
  float __b; // [rsp+18h] [rbp-8h] BYREF
  float add_percent; // [rsp+1Ch] [rbp-4h]

  __b = FightPropComp::getPropValue(this, FIGHT_PROP_DEFENSE_PERCENT, is_include_ability, v2) + 1.0;
  __a = 0.0;
  v3 = (float *)std::max<float>(&__a, &__b);
  v4 = v3;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v3);
  }
  add_percent = *v4;
  v5 = (__m128i)LODWORD(add_percent);
  *(float *)v5.m128i_i32 = FightPropComp::getPropValue(
                             this,
                             FIGHT_PROP_BASE_DEFENSE,
                             is_include_ability,
                             (__m128i)LODWORD(add_percent));
  *(float *)v5.m128i_i32 = *(float *)v5.m128i_i32 * add_percent;
  return FightPropComp::getPropValue(this, FIGHT_PROP_DEFENSE, is_include_ability, v5) + *(float *)v5.m128i_i32;
};

// Line 1086: range 0000000017975A06-0000000017975AC6
float __cdecl FightPropComp::calcCurSpeed(const FightPropComp *const this, bool is_include_ability)
{
  __m128i v2; // xmm0
  float *v3; // rax
  float *v4; // rdx
  float PropValue; // xmm0_4
  float __a; // [rsp+14h] [rbp-Ch] BYREF
  float __b; // [rsp+18h] [rbp-8h] BYREF
  float add_percent; // [rsp+1Ch] [rbp-4h]

  __b = (float)(FightPropComp::getPropValue(this, FIGHT_PROP_SPEED_PERCENT, is_include_ability, v2) / 100.0) + 1.0;
  __a = 0.0;
  v3 = (float *)std::max<float>(&__a, &__b);
  v4 = v3;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v3);
  }
  add_percent = *v4;
  PropValue = FightPropComp::getPropValue(
                this,
                FIGHT_PROP_BASE_SPEED,
                is_include_ability,
                (__m128i)LODWORD(add_percent));
  return PropValue * add_percent;
};

// Line 1092: range 0000000017975AC8-0000000017975C52
float __cdecl FightPropComp::calcChargeEfficiency(const FightPropComp *const this, bool is_include_ability)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  float result; // xmm0_4
  std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> >::pointer v7; // rax
  float *v8; // rax
  float *v9; // rdx
  float __a; // [rsp+10h] [rbp-70h] BYREF
  std::map<data::FightPropType,AbilityClampFightPropValue>::key_type __x; // [rsp+14h] [rbp-6Ch] BYREF
  std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> >::_Self __y; // [rsp+18h] [rbp-68h] BYREF
  char v13[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 9 iter:1093";
  *(_QWORD *)(v3 + 16) = FightPropComp::calcChargeEfficiency;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  __x = FIGHT_PROP_CHARGE_EFFICIENCY;
  *(std::map<data::FightPropType,AbilityClampFightPropValue>::const_iterator *)(v3 + 32) = std::map<data::FightPropType,AbilityClampFightPropValue>::find(
                                                                                             &this->fight_cal_prop_map_,
                                                                                             &__x);
  __y._M_node = std::map<data::FightPropType,AbilityClampFightPropValue>::end(&this->fight_cal_prop_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> >::_Self *)(v3 + 32),
         &__y) )
  {
    result = 0.0;
  }
  else
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,AbilityClampFightPropValue>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> > *const)(v3 + 32));
    *(float *)v2.m128i_i32 = FightPropValue::getValue(&v7->second, is_include_ability);
    __x = _mm_cvtsi128_si32(v2);
    __a = 0.0;
    v8 = (float *)std::max<float>(&__a, (const float *)&__x);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    result = *v9;
  }
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1103: range 0000000017975C54-0000000017975FCD
void __fastcall FightPropComp::internalModifyAffectProp(
        FightPropComp *const this,
        data::FightPropType fight_prop_type,
        FightPropValueMap *diff_prop_map,
        bool is_include_ability,
        __m128i a5)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  int v8; // eax
  common::milog::MiLogStream *v9; // rax
  AbilityClampFightPropValue *v10; // r14
  FightPropComp **v11; // r8
  const std::_Placeholder<1> *v12; // r9
  int v13; // r14d
  float *v14; // rax
  int *v15; // rdx
  google::protobuf::Map<unsigned int,float>::key_type key; // [rsp+2Ch] [rbp-E4h] BYREF
  FightPropComp *v19; // [rsp+30h] [rbp-E0h] BYREF
  AbilityClampFightPropValue *fight_prop_value; // [rsp+38h] [rbp-D8h]
  std::_Bind_helper<false,float (FightPropComp::*&)(bool) const,FightPropComp*,const std::_Placeholder<1>&>::type p___f; // [rsp+40h] [rbp-D0h] BYREF
  common::milog::MiLogStream v22; // [rsp+60h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+80h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 20 fight_prop_type:1102 64 16 19 calc_prop_func:1104";
  *(_QWORD *)(v5 + 16) = FightPropComp::internalModifyAffectProp;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202178560;
  *(_DWORD *)(v5 + 48) = fight_prop_type;
  *(_QWORD *)(v5 + 64) = 0LL;
  *(_QWORD *)(v5 + 72) = 0LL;
  v8 = *(_DWORD *)(v5 + 48);
  if ( v8 == 2003 )
  {
    *(_QWORD *)(v5 + 64) = FightPropComp::calcCurSpeed;
    *(_QWORD *)(v5 + 72) = 0LL;
  }
  else if ( v8 <= 2003 )
  {
    switch ( v8 )
    {
      case 2002:
        *(_QWORD *)(v5 + 64) = FightPropComp::calcCurDefense;
        *(_QWORD *)(v5 + 72) = 0LL;
        break;
      case 2001:
        *(_QWORD *)(v5 + 64) = FightPropComp::calcCurAttack;
        *(_QWORD *)(v5 + 72) = 0LL;
        break;
      case 23:
        *(_QWORD *)(v5 + 64) = FightPropComp::calcChargeEfficiency;
        *(_QWORD *)(v5 + 72) = 0LL;
        break;
      case 2000:
        *(_QWORD *)(v5 + 64) = FightPropComp::calcMaxHp;
        *(_QWORD *)(v5 + 72) = 0LL;
        break;
    }
  }
  if ( *(_QWORD *)(v5 + 64) )
  {
    fight_prop_value = FightPropComp::getOrCreateCalPropValue(this, (data::FightPropType)*(_DWORD *)(v5 + 48));
    v10 = fight_prop_value;
    v19 = this;
    std::bind<float (FightPropComp::*&)(bool)const,FightPropComp*,std::_Placeholder<1> const&>(
      &p___f,
      (float (**)(const FightPropComp *, bool))(v5 + 64),
      &v19,
      (const std::_Placeholder<1> *)&std::placeholders::_1,
      v11,
      v12);
    std::function<float ()(bool)>::function<std::_Bind<float (FightPropComp::*)(bool)const ()(FightPropComp*,std::_Placeholder<1>)>,void,void>(
      (std::function<float(bool)> *const)&v22,
      &p___f);
    FightPropValue::assignCalcProp(v10, (const std::function<float(bool)> *)&v22);
    std::function<float ()(bool)>::~function((std::function<float(bool)> *const)&v22);
    *(float *)a5.m128i_i32 = FightPropValue::getValue(fight_prop_value, is_include_ability);
    v13 = _mm_cvtsi128_si32(a5);
    key = *(_DWORD *)(v5 + 48);
    v14 = google::protobuf::Map<unsigned int,float>::operator[](diff_prop_map, &key);
    v15 = (int *)v14;
    if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v14);
    }
    *v15 = v13;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/creature/fight_prop_comp.cpp",
      "internalModifyAffectProp",
      1127);
    v9 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v22,
           (const char (*)[35])"no method to calc fight_prop_type:");
    common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
      v9,
      (const data::FightPropType *)(v5 + 48));
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  if ( v23 == (char *)v5 )
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
};

// Line 1137: range 0000000017975FCE-0000000017976226
float __cdecl FightPropComp::calcElemMasteryAddHurt(const FightPropComp *const this, float elem_mastery)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::array<float,6>::value_type *v6; // rax
  float *v7; // rdx
  std::array<float,6>::value_type *v8; // rax
  float *v9; // rdx
  __m128i v10; // xmm0
  float *v11; // rax
  float *v12; // rdx
  float result; // xmm0_4
  float __b; // [rsp+18h] [rbp-88h] BYREF
  float param1; // [rsp+1Ch] [rbp-84h]
  float param2; // [rsp+20h] [rbp-80h]
  float denominator; // [rsp+24h] [rbp-7Ch]
  const std::array<float,6> *element_mastery_params; // [rsp+28h] [rbp-78h]
  std::shared_ptr<Config> v20; // [rsp+30h] [rbp-70h] BYREF
  char v21[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 result:1144";
  *(_QWORD *)(v2 + 16) = FightPropComp::calcElemMasteryAddHurt;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
  element_mastery_params = ConstValueExcelConfigMgr::getElementMasteryParams(&v5->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v20);
  v6 = (std::array<float,6>::value_type *)std::array<float,6ul>::operator[](element_mastery_params, 2uLL);
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v6);
  }
  param1 = *v7;
  v8 = (std::array<float,6>::value_type *)std::array<float,6ul>::operator[](element_mastery_params, 3uLL);
  v9 = v8;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v8);
  }
  param2 = *v9;
  v10 = (__m128i)LODWORD(param2);
  *(float *)v10.m128i_i32 = std::fabs(param2 + elem_mastery);
  denominator = COERCE_FLOAT(_mm_cvtsi128_si32(v10));
  if ( denominator <= 0.00000011920929 )
  {
    result = 0.0;
  }
  else
  {
    *(float *)(v2 + 32) = (float)(param1 * elem_mastery) / denominator;
    __b = 0.0;
    v11 = (float *)std::max<float>((const float *)(v2 + 32), &__b);
    v12 = v11;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v11);
    }
    result = *v12;
  }
  if ( v21 == (char *)v2 )
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

// Line 1152: range 0000000017976228-0000000017976480
float __cdecl FightPropComp::calcElemMasteryReactionAddHurt(const FightPropComp *const this, float elem_mastery)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::array<float,6>::value_type *v6; // rax
  float *v7; // rdx
  std::array<float,6>::value_type *v8; // rax
  float *v9; // rdx
  __m128i v10; // xmm0
  float *v11; // rax
  float *v12; // rdx
  float result; // xmm0_4
  float __b; // [rsp+18h] [rbp-88h] BYREF
  float param1; // [rsp+1Ch] [rbp-84h]
  float param2; // [rsp+20h] [rbp-80h]
  float denominator; // [rsp+24h] [rbp-7Ch]
  const std::array<float,6> *element_mastery_params; // [rsp+28h] [rbp-78h]
  std::shared_ptr<Config> v20; // [rsp+30h] [rbp-70h] BYREF
  char v21[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 result:1159";
  *(_QWORD *)(v2 + 16) = FightPropComp::calcElemMasteryReactionAddHurt;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
  element_mastery_params = ConstValueExcelConfigMgr::getElementMasteryParams(&v5->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v20);
  v6 = (std::array<float,6>::value_type *)std::array<float,6ul>::operator[](element_mastery_params, 0LL);
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v6);
  }
  param1 = *v7;
  v8 = (std::array<float,6>::value_type *)std::array<float,6ul>::operator[](element_mastery_params, 1uLL);
  v9 = v8;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v8);
  }
  param2 = *v9;
  v10 = (__m128i)LODWORD(param2);
  *(float *)v10.m128i_i32 = std::fabs(param2 + elem_mastery);
  denominator = COERCE_FLOAT(_mm_cvtsi128_si32(v10));
  if ( denominator <= 0.00000011920929 )
  {
    result = 0.0;
  }
  else
  {
    *(float *)(v2 + 32) = (float)(param1 * elem_mastery) / denominator;
    __b = 0.0;
    v11 = (float *)std::max<float>((const float *)(v2 + 32), &__b);
    v12 = v11;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v11);
    }
    result = *v12;
  }
  if ( v21 == (char *)v2 )
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

// Line 1166: range 0000000017976482-00000000179766DA
float __cdecl FightPropComp::calcCrystalShieldHpDelta(const FightPropComp *const this, float elem_mastery)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::array<float,6>::value_type *v6; // rax
  float *v7; // rdx
  std::array<float,6>::value_type *v8; // rax
  float *v9; // rdx
  __m128i v10; // xmm0
  float *v11; // rax
  float *v12; // rdx
  float result; // xmm0_4
  float __b; // [rsp+18h] [rbp-88h] BYREF
  float param1; // [rsp+1Ch] [rbp-84h]
  float param2; // [rsp+20h] [rbp-80h]
  float denominator; // [rsp+24h] [rbp-7Ch]
  const std::array<float,6> *element_mastery_params; // [rsp+28h] [rbp-78h]
  std::shared_ptr<Config> v20; // [rsp+30h] [rbp-70h] BYREF
  char v21[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 result:1173";
  *(_QWORD *)(v2 + 16) = FightPropComp::calcCrystalShieldHpDelta;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
  element_mastery_params = ConstValueExcelConfigMgr::getElementMasteryParams(&v5->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v20);
  v6 = (std::array<float,6>::value_type *)std::array<float,6ul>::operator[](element_mastery_params, 4uLL);
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v6);
  }
  param1 = *v7;
  v8 = (std::array<float,6>::value_type *)std::array<float,6ul>::operator[](element_mastery_params, 5uLL);
  v9 = v8;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v8);
  }
  param2 = *v9;
  v10 = (__m128i)LODWORD(param2);
  *(float *)v10.m128i_i32 = std::fabs(param2 + elem_mastery);
  denominator = COERCE_FLOAT(_mm_cvtsi128_si32(v10));
  if ( denominator <= 0.00000011920929 )
  {
    result = 0.0;
  }
  else
  {
    *(float *)(v2 + 32) = (float)(param1 * elem_mastery) / denominator;
    __b = 0.0;
    v11 = (float *)std::max<float>((const float *)(v2 + 32), &__b);
    v12 = v11;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v11);
    }
    result = *v12;
  }
  if ( v21 == (char *)v2 )
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

// Line 1182: range 00000000179766DC-00000000179768CB
void __cdecl FightPropComp::internalModifyProp(
        FightPropComp *const this,
        data::FightPropType fight_prop_type,
        const FightPropValue *delta_fight_prop_value,
        FightPropValueMap *diff_prop_map,
        bool is_include_ability)
{
  __m128i v5; // xmm0
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  float *v9; // rax
  float *v10; // rdx
  float v11; // [rsp+Ch] [rbp-74h]
  google::protobuf::Map<unsigned int,float>::key_type key; // [rsp+34h] [rbp-4Ch] BYREF
  float old_value; // [rsp+38h] [rbp-48h]
  float cur_value; // [rsp+3Ch] [rbp-44h]
  char *val; // [rsp+40h] [rbp-40h] BYREF
  AbilityClampFightPropValue *fight_prop_value; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-30h] BYREF

  if ( FightPropComp::isCurPropType(fight_prop_type) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/creature/fight_prop_comp.cpp",
      "internalModifyProp",
      1185);
    v6 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v20, (const char (*)[17])"fight_prop_type:");
    val = (char *)data::enumValToStr(fight_prop_type);
    v7 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v6, (const char *const *)&val);
    v8 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v7, (const char (*)[28])off_26252B60);
    if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->creature_);
    common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v8, this->creature_);
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  else
  {
    fight_prop_value = FightPropComp::getOrCreateCalPropValue(this, fight_prop_type);
    *(float *)v5.m128i_i32 = FightPropValue::getValue(fight_prop_value, is_include_ability);
    old_value = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
    FightPropValue::addFromValue(fight_prop_value, delta_fight_prop_value);
    *(float *)v5.m128i_i32 = FightPropValue::getValue(fight_prop_value, is_include_ability);
    cur_value = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
    if ( std::fabs(old_value - cur_value) > 0.00000011920929 )
    {
      v11 = cur_value;
      key = fight_prop_type;
      v9 = google::protobuf::Map<unsigned int,float>::operator[](diff_prop_map, &key);
      v10 = v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v9);
      }
      *v10 = v11;
    }
  }
};

// Line 1200: range 00000000179768CC-0000000017976BFE
void __fastcall FightPropComp::internalUpdateProp(
        FightPropComp *const this,
        data::FightPropType fight_prop_type,
        float new_value,
        FightPropValueMap *diff_prop_map)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  float *v10; // rax
  float *v11; // rax
  float *v12; // rdx
  google::protobuf::Map<unsigned int,float>::key_type key; // [rsp+2Ch] [rbp-A4h] BYREF
  char *val; // [rsp+30h] [rbp-A0h] BYREF
  float *prop_value; // [rsp+38h] [rbp-98h]
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-90h] BYREF
  char v19[112]; // [rsp+60h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 20 fight_prop_type:1199";
  *(_QWORD *)(v4 + 16) = FightPropComp::internalUpdateProp;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = fight_prop_type;
  if ( !FightPropComp::isCurPropType(*(data::FightPropType *)(v4 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/creature/fight_prop_comp.cpp",
      "internalUpdateProp",
      1203);
    v7 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v18, (const char (*)[17])"fight_prop_type:");
    val = (char *)data::enumValToStr((data::FightPropType)*(_DWORD *)(v4 + 32));
    v8 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    v9 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v8, (const char (*)[28])off_26252C00);
    if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->creature_);
    common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v9, this->creature_);
    common::milog::MiLogStream::~MiLogStream(&v18);
  }
  else
  {
    v10 = std::map<data::FightPropType,float>::operator[](
            &this->fight_cur_prop_map_,
            (const std::map<data::FightPropType,float>::key_type *)(v4 + 32));
    prop_value = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v10);
    }
    if ( std::fabs(*prop_value - new_value) > 0.00000011920929 )
    {
      if ( *(_BYTE *)(((unsigned __int64)prop_value >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)prop_value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)prop_value >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(prop_value);
      }
      *prop_value = new_value;
      key = *(_DWORD *)(v4 + 32);
      v11 = google::protobuf::Map<unsigned int,float>::operator[](diff_prop_map, &key);
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v11);
      }
      *v12 = new_value;
    }
  }
  if ( v19 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1216: range 0000000017977490-0000000017978DE4
void __cdecl FightPropComp::flushModifiedProps(FightPropComp *const this, bool is_notify)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __m128i v5; // xmm0
  std::__detail::_Node_iterator<std::pair<const data::FightPropType,FightPropValue>,false,false>::pointer v6; // rax
  Creature *creature; // rdx
  Creature *v8; // rax
  unsigned __int64 v9; // rax
  float *v10; // rax
  float *v11; // rdx
  __gnu_cxx::__normal_iterator<data::FightPropType*,std::vector<data::FightPropType> >::reference v12; // rax
  data::FightPropType *v13; // rdx
  float MaxHp; // xmm0_4
  float *v15; // rax
  float *v16; // rdx
  int v17; // r15d
  float *v18; // rax
  int *v19; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  Player *v23; // rax
  PlayerGmComp *GmComp; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  common::milog::MiLogStream *v28; // rcx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // r15
  Creature *v31; // rsi
  Creature *v32; // rax
  unsigned __int64 v33; // rax
  common::milog::MiLogStream *v34; // rcx
  data::FightPropType *v35; // rax
  data::FightPropType *v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  common::milog::MiLogStream *v40; // rcx
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // r15
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  data::FightPropType *v45; // rax
  data::FightPropType *v46; // rdx
  common::milog::MiLogStream *v47; // rcx
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // r15
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  float v52; // [rsp+0h] [rbp-610h]
  bool is_max_hp_changed; // [rsp+1Eh] [rbp-5F2h]
  bool is_element_mastery_changed; // [rsp+1Fh] [rbp-5F1h]
  float __a; // [rsp+20h] [rbp-5F0h] BYREF
  std::unordered_map<data::FightPropType,FightPropValue>::key_type __x; // [rsp+24h] [rbp-5ECh] BYREF
  float old_hp_ratio; // [rsp+28h] [rbp-5E8h]
  float cur_hp; // [rsp+2Ch] [rbp-5E4h]
  float old_elem_add_hurt; // [rsp+30h] [rbp-5E0h]
  data::ElementType elem_type_0; // [rsp+34h] [rbp-5DCh]
  data::FightPropType max_energy_type_0; // [rsp+38h] [rbp-5D8h]
  float max_energy_0; // [rsp+3Ch] [rbp-5D4h]
  data::FightPropType k_0; // [rsp+40h] [rbp-5D0h]
  data::FightPropType k; // [rsp+44h] [rbp-5CCh]
  float a; // [rsp+48h] [rbp-5C8h]
  float b; // [rsp+4Ch] [rbp-5C4h]
  data::FightPropType fight_prop_type_0; // [rsp+50h] [rbp-5C0h]
  data::ElementType elem_type; // [rsp+54h] [rbp-5BCh]
  data::FightPropType max_energy_type; // [rsp+58h] [rbp-5B8h]
  data::FightPropType cur_energy_type; // [rsp+5Ch] [rbp-5B4h]
  float max_energy; // [rsp+60h] [rbp-5B0h]
  float cur_energy; // [rsp+64h] [rbp-5ACh]
  std::set<data::FightPropType>::iterator __for_begin; // [rsp+68h] [rbp-5A8h] BYREF
  std::set<data::FightPropType>::iterator __for_end_0; // [rsp+70h] [rbp-5A0h] BYREF
  std::unordered_map<data::FightPropType,FightPropValue>::iterator __for_end; // [rsp+78h] [rbp-598h] BYREF
  std::unordered_map<data::FightPropType,FightPropValue> *__for_range; // [rsp+80h] [rbp-590h]
  std::vector<data::FightPropType> *__for_range_0; // [rsp+88h] [rbp-588h]
  AbilityClampFightPropValue *elem_mastery; // [rsp+90h] [rbp-580h]
  std::set<data::FightPropType> *__for_range_1; // [rsp+98h] [rbp-578h]
  std::set<data::FightPropType> *__for_range_2; // [rsp+A0h] [rbp-570h]
  const std::pair<const data::FightPropType,FightPropValue> *v81; // [rsp+A8h] [rbp-568h]
  std::tuple_element<0,const std::pair<const data::FightPropType,FightPropValue> >::type *fight_prop_type; // [rsp+B0h] [rbp-560h]
  std::tuple_element<1,const std::pair<const data::FightPropType,FightPropValue> >::type *delta_fight_prop_value; // [rsp+B8h] [rbp-558h]
  std::shared_ptr<FightPropNtfParam> p_param_ptr; // [rsp+C0h] [rbp-550h] BYREF
  common::milog::MiLogStream v85; // [rsp+D0h] [rbp-540h] BYREF
  std::set<data::FightPropType> v86; // [rsp+F0h] [rbp-520h] BYREF
  AbilityClampFightPropValue v87; // [rsp+120h] [rbp-4F0h] BYREF
  std::set<data::FightPropType> v88; // [rsp+150h] [rbp-4C0h] BYREF
  char v89[1168]; // [rsp+180h] [rbp-490h] BYREF

  v2 = (unsigned __int64)v89;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1120LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "16 48 1 15 merge_keys:1386 64 1 16 check_value:1393 80 1 14 get_value:1406 96 1 20 get_clamp_val"
                        "ue:1411 112 8 9 iter:1234 144 8 13 cmp_prop:1397 176 16 10 timer:1225 208 16 26 delta_element_ma"
                        "stery:1233 240 16 15 avatar_ptr:1365 272 16 15 player_ptr:1368 304 24 20 affect_prop_vec:1228 36"
                        "8 24 18 diff_prop_map:1242 432 32 6 s:1438 496 48 28 temp_fight_cur_prop_map:1223 576 48 28 temp"
                        "_fight_cal_prop_map:1224 656 392 7 ss:1429";
  *(_QWORD *)(v2 + 16) = FightPropComp::flushModifiedProps;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = 61953;
  v4[536862723] = -234881024;
  v4[536862724] = 62194;
  v4[536862724] = -234881024;
  v4[536862725] = 62194;
  v4[536862726] = 62194;
  v4[536862727] = 62194;
  v4[536862728] = 62194;
  v4[536862729] = 62194;
  v4[536862730] = -218959360;
  v4[536862731] = 62194;
  v4[536862732] = -218959360;
  v4[536862733] = 62194;
  v4[536862734] = -219021312;
  v4[536862735] = 62194;
  v4[536862737] = -218959118;
  v4[536862739] = -219021312;
  v4[536862740] = 62194;
  v4[536862752] = -218103808;
  v4[536862753] = -202116109;
  v4[536862754] = -202116109;
  if ( !std::unordered_map<data::FightPropType,FightPropValue>::empty(&this->modified_fight_prop_map_) )
  {
    std::map<data::FightPropType,float>::map(
      (std::map<data::FightPropType,float> *const)(v2 + 496),
      &this->fight_cur_prop_map_);
    std::map<data::FightPropType,AbilityClampFightPropValue>::map(
      (std::map<data::FightPropType,AbilityClampFightPropValue> *const)(v2 + 576),
      &this->fight_cal_prop_map_);
    common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 176));
    std::vector<data::FightPropType>::vector((std::vector<data::FightPropType> *const)(v2 + 304));
    std::vector<data::FightPropType>::reserve((std::vector<data::FightPropType> *const)(v2 + 304), 4uLL);
    is_max_hp_changed = 0;
    is_element_mastery_changed = 0;
    *(_QWORD *)(v2 + 208) = &`vtable for'FightPropValue + 2;
    *(_DWORD *)(v2 + 216) = 0;
    v5 = 0LL;
    *(_DWORD *)(v2 + 220) = 0;
    __x = FIGHT_PROP_ELEMENT_MASTERY;
    *(std::unordered_map<data::FightPropType,FightPropValue>::iterator *)(v2 + 112) = std::unordered_map<data::FightPropType,FightPropValue>::find(
                                                                                        &this->modified_fight_prop_map_,
                                                                                        &__x);
    __for_end._M_cur = std::unordered_map<data::FightPropType,FightPropValue>::end(&this->modified_fight_prop_map_)._M_cur;
    if ( std::__detail::operator!=<std::pair<data::FightPropType const,FightPropValue>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<const data::FightPropType,FightPropValue>,false> *)(v2 + 112),
           &__for_end) )
    {
      is_element_mastery_changed = 1;
      v6 = std::__detail::_Node_iterator<std::pair<data::FightPropType const,FightPropValue>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<const data::FightPropType,FightPropValue>,false,false> *const)(v2 + 112));
      FightPropValue::operator=((FightPropValue *const)(v2 + 208), &v6->second);
      std::unordered_map<data::FightPropType,FightPropValue>::erase(
        &this->modified_fight_prop_map_,
        *(std::unordered_map<data::FightPropType,FightPropValue>::iterator *)(v2 + 112));
    }
    google::protobuf::Map<unsigned int,float>::Map((google::protobuf::Map<unsigned int,float> *const)(v2 + 368));
    __for_range = &this->modified_fight_prop_map_;
    __for_end_0._M_node = (std::_Rb_tree_const_iterator<data::FightPropType>::_Base_ptr)std::unordered_map<data::FightPropType,FightPropValue>::begin(&this->modified_fight_prop_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<data::FightPropType,FightPropValue>::end(__for_range)._M_cur;
    while ( std::__detail::operator!=<std::pair<data::FightPropType const,FightPropValue>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<const data::FightPropType,FightPropValue>,false> *)&__for_end_0,
              &__for_end) )
    {
      v81 = std::__detail::_Node_iterator<std::pair<data::FightPropType const,FightPropValue>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<const data::FightPropType,FightPropValue>,false,false> *const)&__for_end_0);
      fight_prop_type = std::get<0ul,data::FightPropType const,FightPropValue>(v81);
      delta_fight_prop_value = (std::tuple_element<1,const std::pair<const data::FightPropType,FightPropValue> >::type *)std::get<1ul,data::FightPropType const,FightPropValue>(v81);
      if ( *(_BYTE *)(((unsigned __int64)fight_prop_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)fight_prop_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)fight_prop_type >> 3)
                                                                          + 0x7FFF8000) )
      {
        *(double *)v5.m128i_i64 = __asan_report_load4(fight_prop_type);
      }
      FightPropComp::internalModifyProp(
        this,
        *fight_prop_type,
        delta_fight_prop_value,
        (FightPropValueMap *)(v2 + 368),
        0);
      if ( *(_BYTE *)(((unsigned __int64)fight_prop_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)fight_prop_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)fight_prop_type >> 3)
                                                                          + 0x7FFF8000) )
      {
        *(double *)v5.m128i_i64 = __asan_report_load4(fight_prop_type);
      }
      switch ( *fight_prop_type )
      {
        case FIGHT_PROP_BASE_HP:
        case FIGHT_PROP_HP:
        case FIGHT_PROP_HP_PERCENT:
        case FIGHT_PROP_HP_MP_PERCENT:
          is_max_hp_changed = 1;
          break;
        case FIGHT_PROP_BASE_ATTACK:
        case FIGHT_PROP_ATTACK:
        case FIGHT_PROP_ATTACK_PERCENT:
        case FIGHT_PROP_ATTACK_MP_PERCENT:
          __x = FIGHT_PROP_CUR_ATTACK;
          if ( !common::tools::MiscUtils::isContains<data::FightPropType>(
                  (std::vector<data::FightPropType> *)(v2 + 304),
                  &__x) )
          {
            __x = FIGHT_PROP_CUR_ATTACK;
            std::vector<data::FightPropType>::push_back((std::vector<data::FightPropType> *const)(v2 + 304), &__x);
          }
          break;
        case FIGHT_PROP_BASE_DEFENSE:
        case FIGHT_PROP_DEFENSE:
        case FIGHT_PROP_DEFENSE_PERCENT:
          __x = FIGHT_PROP_CUR_DEFENSE;
          if ( !common::tools::MiscUtils::isContains<data::FightPropType>(
                  (std::vector<data::FightPropType> *)(v2 + 304),
                  &__x) )
          {
            __x = FIGHT_PROP_CUR_DEFENSE;
            std::vector<data::FightPropType>::push_back((std::vector<data::FightPropType> *const)(v2 + 304), &__x);
          }
          break;
        case FIGHT_PROP_BASE_SPEED:
        case FIGHT_PROP_SPEED_PERCENT:
          __x = FIGHT_PROP_CUR_SPEED;
          if ( !common::tools::MiscUtils::isContains<data::FightPropType>(
                  (std::vector<data::FightPropType> *)(v2 + 304),
                  &__x) )
          {
            __x = FIGHT_PROP_CUR_SPEED;
            std::vector<data::FightPropType>::push_back((std::vector<data::FightPropType> *const)(v2 + 304), &__x);
          }
          break;
        case FIGHT_PROP_CHARGE_EFFICIENCY:
          if ( *(_BYTE *)(((unsigned __int64)fight_prop_type >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)fight_prop_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)fight_prop_type >> 3)
                                                                              + 0x7FFF8000) )
          {
            *(double *)v5.m128i_i64 = __asan_report_load4(fight_prop_type);
          }
          FightPropComp::internalModifyAffectProp(this, *fight_prop_type, (FightPropValueMap *)(v2 + 368), 0, v5);
          break;
        default:
          if ( *(_BYTE *)(((unsigned __int64)fight_prop_type >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)fight_prop_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)fight_prop_type >> 3)
                                                                              + 0x7FFF8000) )
          {
            *(double *)v5.m128i_i64 = __asan_report_load4(fight_prop_type);
          }
          if ( FightPropComp::isMaxEnergyType(*fight_prop_type) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->creature_);
            creature = this->creature_;
            v8 = creature;
            if ( *(_BYTE *)(((unsigned __int64)creature >> 3) + 0x7FFF8000) )
              v8 = (Creature *)__asan_report_load8(this->creature_);
            v9 = *(_QWORD *)v8->baseclass_0 + 280LL;
            if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
              v9 = __asan_report_load8(v9);
            elem_type = (*(unsigned int (__fastcall **)(Creature *))v9)(creature);
            if ( elem_type )
            {
              max_energy_type = FightPropComp::getMaxEnergyType(elem_type);
              if ( *(_BYTE *)(((unsigned __int64)fight_prop_type >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)fight_prop_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)fight_prop_type >> 3)
                                                                                  + 0x7FFF8000) )
              {
                *(double *)v5.m128i_i64 = __asan_report_load4(fight_prop_type);
              }
              if ( max_energy_type == *fight_prop_type )
              {
                *(float *)&cur_energy_type = COERCE_FLOAT(FightPropComp::getCurEnergyType(elem_type));
                *(float *)v5.m128i_i32 = FightPropComp::getPropValue(this, max_energy_type, 1, v5);
                max_energy = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
                *(float *)v5.m128i_i32 = FightPropComp::getPropValue(this, cur_energy_type, 1, v5);
                cur_energy = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
                v5 = (__m128i)LODWORD(cur_energy);
                if ( cur_energy <= max_energy )
                {
                  v52 = cur_energy;
                  __x = cur_energy_type;
                  v10 = google::protobuf::Map<unsigned int,float>::operator[](
                          (google::protobuf::Map<unsigned int,float> *const)(v2 + 368),
                          (const google::protobuf::Map<unsigned int,float>::key_type *)&__x);
                  v11 = v10;
                  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store4(v10);
                  }
                  *v11 = v52;
                }
                else
                {
                  v5 = _mm_cvtsi32_si128(LODWORD(max_energy));
                  FightPropComp::internalUpdateProp(
                    this,
                    cur_energy_type,
                    *(float *)v5.m128i_i32,
                    (FightPropValueMap *)(v2 + 368));
                }
              }
            }
          }
          break;
      }
      std::__detail::_Node_iterator<std::pair<data::FightPropType const,FightPropValue>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<const data::FightPropType,FightPropValue>,false,false> *const)&__for_end_0);
    }
    __for_range_0 = (std::vector<data::FightPropType> *)(v2 + 304);
    __for_end_0._M_node = (std::_Rb_tree_const_iterator<data::FightPropType>::_Base_ptr)std::vector<data::FightPropType>::begin((std::vector<data::FightPropType> *const)(v2 + 304))._M_current;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<const data::FightPropType,FightPropValue>,false>::__node_type *)std::vector<data::FightPropType>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<data::FightPropType *,std::vector<data::FightPropType>>(
              (const __gnu_cxx::__normal_iterator<data::FightPropType*,std::vector<data::FightPropType> > *)&__for_end_0,
              (const __gnu_cxx::__normal_iterator<data::FightPropType*,std::vector<data::FightPropType> > *)&__for_end) )
    {
      v12 = __gnu_cxx::__normal_iterator<data::FightPropType *,std::vector<data::FightPropType>>::operator*((const __gnu_cxx::__normal_iterator<data::FightPropType*,std::vector<data::FightPropType> > *const)&__for_end_0);
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        *(double *)v5.m128i_i64 = __asan_report_load4(v12);
      }
      fight_prop_type_0 = *v13;
      FightPropComp::internalModifyAffectProp(this, fight_prop_type_0, (FightPropValueMap *)(v2 + 368), 0, v5);
      __gnu_cxx::__normal_iterator<data::FightPropType *,std::vector<data::FightPropType>>::operator++((__gnu_cxx::__normal_iterator<data::FightPropType*,std::vector<data::FightPropType> > *const)&__for_end_0);
    }
    if ( is_max_hp_changed )
    {
      *(float *)v5.m128i_i32 = FightPropComp::calcCurHpRatio(this);
      old_hp_ratio = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
      FightPropComp::internalModifyAffectProp(this, FIGHT_PROP_MAX_HP, (FightPropValueMap *)(v2 + 368), 1, v5);
      v5 = (__m128i)LODWORD(old_hp_ratio);
      if ( old_hp_ratio > 0.00000011920929 )
      {
        MaxHp = FightPropComp::getMaxHp(this);
        *(float *)&__x = MaxHp * old_hp_ratio;
        __a = 1.0;
        v15 = (float *)std::max<float>(&__a, (const float *)&__x);
        v16 = v15;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v15);
        }
        cur_hp = *v16;
        v5 = _mm_cvtsi32_si128(LODWORD(cur_hp));
        FightPropComp::internalUpdateProp(
          this,
          FIGHT_PROP_CUR_HP,
          *(float *)v5.m128i_i32,
          (FightPropValueMap *)(v2 + 368));
      }
    }
    if ( is_element_mastery_changed )
    {
      elem_mastery = FightPropComp::getOrCreateCalPropValue(this, FIGHT_PROP_ELEMENT_MASTERY);
      *(float *)v5.m128i_i32 = FightPropValue::getValue(elem_mastery, 1);
      *(float *)v5.m128i_i32 = FightPropComp::calcElemMasteryAddHurt(this, *(float *)v5.m128i_i32);
      LODWORD(old_elem_add_hurt) = _mm_cvtsi128_si32(v5);
      FightPropValue::addFromValue(elem_mastery, (const FightPropValue *)(v2 + 208));
      *(float *)v5.m128i_i32 = FightPropValue::getValue(elem_mastery, 0);
      v17 = _mm_cvtsi128_si32(v5);
      __x = FIGHT_PROP_ELEMENT_MASTERY;
      v18 = google::protobuf::Map<unsigned int,float>::operator[](
              (google::protobuf::Map<unsigned int,float> *const)(v2 + 368),
              (const google::protobuf::Map<unsigned int,float>::key_type *)&__x);
      v19 = (int *)v18;
      if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v18);
      }
      *v19 = v17;
    }
    if ( !google::protobuf::Map<unsigned int,float>::empty((const google::protobuf::Map<unsigned int,float> *const)(v2 + 368))
      && is_notify )
    {
      FightPropComp::notifyDiffProp(this, (FightPropValueMap *)(v2 + 368));
    }
    std::unordered_map<data::FightPropType,FightPropValue>::clear(&this->modified_fight_prop_map_);
    if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->creature_);
    toPtr<Avatar,Creature>((Creature *)(v2 + 240));
    if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 240), 0LL) )
    {
      v21 = (unsigned __int64)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 240));
      if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
        v21 = __asan_report_load8(v21);
      v22 = *(_QWORD *)v21 + 152LL;
      if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
        v21 = __asan_report_load8(*(_QWORD *)v21 + 152LL);
      (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v22)(v2 + 272, v21);
      if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 272), 0LL) )
      {
        v23 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 272));
        GmComp = Player::getGmComp(v23);
        if ( PlayerGmComp::getIsEnergyInfinite(GmComp) )
        {
          v26 = (unsigned __int64)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 240));
          if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
            v26 = __asan_report_load8(v26);
          v27 = *(_QWORD *)v26 + 280LL;
          if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
            v26 = __asan_report_load8(*(_QWORD *)v26 + 280LL);
          elem_type_0 = (*(unsigned int (__fastcall **)(unsigned __int64))v27)(v26);
          max_energy_type_0 = FightPropComp::getMaxEnergyType(elem_type_0);
          *(float *)v5.m128i_i32 = FightPropComp::getPropValue(this, max_energy_type_0, 1, v5);
          LODWORD(max_energy_0) = _mm_cvtsi128_si32(v5);
          std::shared_ptr<FightPropNtfParam>::shared_ptr(&p_param_ptr, 0LL);
          v5 = _mm_cvtsi32_si128(LODWORD(max_energy_0));
          FightPropComp::setCurEnergy(this, *(float *)v5.m128i_i32, 1, &p_param_ptr);
          std::shared_ptr<FightPropNtfParam>::~shared_ptr(&p_param_ptr);
        }
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 272));
    }
    common::milog::MiLogStream::create(
      &v85,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/creature/fight_prop_comp.cpp",
      "flushModifiedProps",
      1379);
    v28 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v85, (const char (*)[10])"creature:");
    if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->creature_);
    v29 = common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v28, this->creature_);
    v30 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v29, (const char (*)[7])" time:");
    *(float *)&__x = COERCE_FLOAT(common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 176)));
    common::milog::MiLogStream::operator<<<int,(int *)0>(v30, (const int *)&__x);
    common::milog::MiLogStream::~MiLogStream(&v85);
    if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->creature_);
    v31 = this->creature_;
    v32 = v31;
    if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
      v32 = (Creature *)__asan_report_load8(this->creature_);
    v33 = *(_QWORD *)v32->baseclass_0 + 24LL;
    if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
      v33 = __asan_report_load8(v33);
    if ( (*(unsigned int (__fastcall **)(Creature *))v33)(v31) == 1 )
    {
      *(_QWORD *)(v2 + 144) = v2 + 64;
      std::map<data::FightPropType,float>::swap(
        &this->fight_cur_prop_map_,
        (std::map<data::FightPropType,float> *)(v2 + 496));
      std::map<data::FightPropType,AbilityClampFightPropValue>::swap(
        &this->fight_cal_prop_map_,
        (std::map<data::FightPropType,AbilityClampFightPropValue> *)(v2 + 576));
      if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->creature_);
      if ( Creature::calcProp(this->creature_) )
      {
        common::milog::MiLogStream::create(
          &v85,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/creature/fight_prop_comp.cpp",
          "flushModifiedProps",
          1422);
        v34 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v85,
                (const char (*)[25])"calcProp fail. creature:");
        if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->creature_);
        common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v34, this->creature_);
        common::milog::MiLogStream::~MiLogStream(&v85);
      }
      else
      {
        FightPropComp::flushModifiedProps::_lambda_const_auto_25___const_auto_26___::operator()_std::map_data::FightPropType_float__std::map_data::FightPropType_float___(
          &v88,
          (const FightPropComp::flushModifiedProps::<lambda(const auto:25&, const auto:26&)> *const)(v2 + 48),
          (const std::map<data::FightPropType,float> *)(v2 + 496),
          &this->fight_cur_prop_map_);
        __for_range_1 = &v88;
        __for_begin._M_node = std::set<data::FightPropType>::begin(&v88)._M_node;
        __for_end_0._M_node = std::set<data::FightPropType>::end(__for_range_1)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end_0) )
        {
          v35 = (data::FightPropType *)std::_Rb_tree_const_iterator<data::FightPropType>::operator*(&__for_begin);
          v36 = v35;
          if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
          {
            *(double *)v5.m128i_i64 = __asan_report_load4(v35);
          }
          k = *v36;
          *(float *)v5.m128i_i32 = FightPropComp::flushModifiedProps::_lambda_const_auto_27___data::FightPropType__::operator()_std::map_data::FightPropType_float___(
                                     (const FightPropComp::flushModifiedProps::<lambda(const auto:27&, data::FightPropType)> *const)(v2 + 80),
                                     (const std::map<data::FightPropType,float> *)(v2 + 496),
                                     k);
          LODWORD(a) = _mm_cvtsi128_si32(v5);
          *(float *)v5.m128i_i32 = FightPropComp::flushModifiedProps::_lambda_const_auto_27___data::FightPropType__::operator()_std::map_data::FightPropType_float___(
                                     (const FightPropComp::flushModifiedProps::<lambda(const auto:27&, data::FightPropType)> *const)(v2 + 80),
                                     &this->fight_cur_prop_map_,
                                     k);
          LODWORD(b) = _mm_cvtsi128_si32(v5);
          std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v2 + 656);
          v5 = _mm_cvtsi32_si128(LODWORD(a));
          if ( FightPropComp::flushModifiedProps(bool)::{lambda(float,float)#2}::operator()(
                 (const FightPropComp::flushModifiedProps::<lambda(float, float)> *const)(v2 + 64),
                 *(float *)v5.m128i_i32,
                 b) )
          {
            v37 = std::operator<<<std::char_traits<char>>(v2 + 672, "lhs:");
            v38 = std::ostream::operator<<(v37, a);
            v39 = std::operator<<<std::char_traits<char>>(v38, " rhs:");
            v5 = _mm_cvtsi32_si128(LODWORD(b));
            std::ostream::operator<<(v39, *(float *)v5.m128i_i32);
          }
          std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(v2 + 432, v2 + 656);
          if ( (unsigned __int8)std::string::empty(v2 + 432) != 1 )
          {
            common::milog::MiLogStream::create(
              &v85,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/creature/fight_prop_comp.cpp",
              "flushModifiedProps",
              1434);
            v40 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v85, (const char (*)[10])"creature:");
            if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->creature_);
            v41 = common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v40, this->creature_);
            v42 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v41,
                    (const char (*)[18])" fight_prop_type:");
            __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<const data::FightPropType,FightPropValue>,false>::__node_type *)data::enumValToStr(k);
            v43 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                    v42,
                    (const char *const *)&__for_end);
            v44 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v43, (const char (*)[2])" ");
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v44, (const std::string *)(v2 + 432));
            common::milog::MiLogStream::~MiLogStream(&v85);
          }
          std::string::~string((void *)(v2 + 432));
          std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v2 + 656);
          std::_Rb_tree_const_iterator<data::FightPropType>::operator++(&__for_begin);
        }
        std::set<data::FightPropType>::~set(&v88);
        FightPropComp::flushModifiedProps::_lambda_const_auto_25___const_auto_26___::operator()_std::map_data::FightPropType_AbilityClampFightPropValue__std::map_data::FightPropType_AbilityClampFightPropValue___(
          &v86,
          (const FightPropComp::flushModifiedProps::<lambda(const auto:25&, const auto:26&)> *const)(v2 + 48),
          (const std::map<data::FightPropType,AbilityClampFightPropValue> *)(v2 + 576),
          &this->fight_cal_prop_map_);
        __for_range_2 = &v86;
        __for_begin._M_node = std::set<data::FightPropType>::begin(&v86)._M_node;
        __for_end_0._M_node = std::set<data::FightPropType>::end(__for_range_2)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end_0) )
        {
          v45 = (data::FightPropType *)std::_Rb_tree_const_iterator<data::FightPropType>::operator*(&__for_begin);
          v46 = v45;
          if ( *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v45 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v45);
          }
          k_0 = *v46;
          FightPropComp::flushModifiedProps::_lambda_const_auto_28___data::FightPropType__::operator()_std::map_data::FightPropType_AbilityClampFightPropValue___(
            (AbilityClampFightPropValue *)&v88,
            (const FightPropComp::flushModifiedProps::<lambda(const auto:28&, data::FightPropType)> *const)(v2 + 96),
            &this->fight_cal_prop_map_,
            k_0);
          FightPropComp::flushModifiedProps::_lambda_const_auto_28___data::FightPropType__::operator()_std::map_data::FightPropType_AbilityClampFightPropValue___(
            &v87,
            (const FightPropComp::flushModifiedProps::<lambda(const auto:28&, data::FightPropType)> *const)(v2 + 96),
            (const std::map<data::FightPropType,AbilityClampFightPropValue> *)(v2 + 576),
            k_0);
          FightPropComp::flushModifiedProps(bool)::{lambda(FightPropValue const&,FightPropValue const&)#3}::operator()(
            (std::string *)(v2 + 432),
            (const FightPropComp::flushModifiedProps::<lambda(const FightPropValue&, const FightPropValue&)> *const)(v2 + 144),
            &v87,
            (const FightPropValue *)&v88);
          AbilityClampFightPropValue::~AbilityClampFightPropValue(&v87);
          AbilityClampFightPropValue::~AbilityClampFightPropValue((AbilityClampFightPropValue *const)&v88);
          if ( (unsigned __int8)std::string::empty(v2 + 432) != 1 )
          {
            common::milog::MiLogStream::create(
              &v85,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/creature/fight_prop_comp.cpp",
              "flushModifiedProps",
              1440);
            v47 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v85, (const char (*)[10])"creature:");
            if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->creature_);
            v48 = common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v47, this->creature_);
            v49 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v48,
                    (const char (*)[18])" fight_prop_type:");
            __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<const data::FightPropType,FightPropValue>,false>::__node_type *)data::enumValToStr(k_0);
            v50 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                    v49,
                    (const char *const *)&__for_end);
            v51 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v50, (const char (*)[2])" ");
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v51, (const std::string *)(v2 + 432));
            common::milog::MiLogStream::~MiLogStream(&v85);
          }
          std::string::~string((void *)(v2 + 432));
          std::_Rb_tree_const_iterator<data::FightPropType>::operator++(&__for_begin);
        }
        std::set<data::FightPropType>::~set(&v86);
      }
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 240));
    google::protobuf::Map<unsigned int,float>::~Map((google::protobuf::Map<unsigned int,float> *const)(v2 + 368));
    std::vector<data::FightPropType>::~vector((std::vector<data::FightPropType> *const)(v2 + 304));
    common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 176));
    std::map<data::FightPropType,AbilityClampFightPropValue>::~map((std::map<data::FightPropType,AbilityClampFightPropValue> *const)(v2 + 576));
    std::map<data::FightPropType,float>::~map((std::map<data::FightPropType,float> *const)(v2 + 496));
  }
  if ( v89 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8080) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8088) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1120LL, v89);
  }
};

// Line 1386: range 00000000179E0910-00000000179E0A7C
std::set<data::FightPropType> *__cdecl FightPropComp::flushModifiedProps::_lambda_const_auto_25___const_auto_26___::operator()_std::map_data::FightPropType_AbilityClampFightPropValue__std::map_data::FightPropType_AbilityClampFightPropValue___(
        std::set<data::FightPropType> *retstr,
        const FightPropComp::flushModifiedProps::<lambda(const auto:25&, const auto:26&)> *const __closure,
        const std::map<data::FightPropType,AbilityClampFightPropValue> *lhs,
        const std::map<data::FightPropType,AbilityClampFightPropValue> *rhs)
{
  std::map<data::FightPropType,AbilityClampFightPropValue>::const_iterator __for_begin; // [rsp+20h] [rbp-60h] BYREF
  std::map<data::FightPropType,AbilityClampFightPropValue>::const_iterator __for_end; // [rsp+28h] [rbp-58h] BYREF
  const std::map<data::FightPropType,AbilityClampFightPropValue> *__for_range; // [rsp+30h] [rbp-50h]
  const std::map<data::FightPropType,AbilityClampFightPropValue> *__for_range_0; // [rsp+38h] [rbp-48h]
  const std::pair<const data::FightPropType,AbilityClampFightPropValue> *v11; // [rsp+40h] [rbp-40h]
  std::tuple_element<0,const std::pair<const data::FightPropType,AbilityClampFightPropValue> >::type *k_0; // [rsp+48h] [rbp-38h]
  std::tuple_element<1,const std::pair<const data::FightPropType,AbilityClampFightPropValue> >::type *__0; // [rsp+50h] [rbp-30h]
  const std::pair<const data::FightPropType,AbilityClampFightPropValue> *v14; // [rsp+58h] [rbp-28h]
  std::tuple_element<0,const std::pair<const data::FightPropType,AbilityClampFightPropValue> >::type *k; // [rsp+60h] [rbp-20h]
  std::tuple_element<1,const std::pair<const data::FightPropType,AbilityClampFightPropValue> >::type *_; // [rsp+68h] [rbp-18h]

  std::set<data::FightPropType>::set(retstr);
  __for_range = lhs;
  __for_begin._M_node = std::map<data::FightPropType,AbilityClampFightPropValue>::begin(lhs)._M_node;
  __for_end._M_node = std::map<data::FightPropType,AbilityClampFightPropValue>::end(lhs)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v14 = std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,AbilityClampFightPropValue>>::operator*(&__for_begin);
    k = std::get<0ul,data::FightPropType const,AbilityClampFightPropValue>(v14);
    _ = (std::tuple_element<1,const std::pair<const data::FightPropType,AbilityClampFightPropValue> >::type *)std::get<1ul,data::FightPropType const,AbilityClampFightPropValue>(v14);
    std::set<data::FightPropType>::insert(retstr, k);
    std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,AbilityClampFightPropValue>>::operator++(&__for_begin);
  }
  __for_range_0 = rhs;
  __for_begin._M_node = std::map<data::FightPropType,AbilityClampFightPropValue>::begin(rhs)._M_node;
  __for_end._M_node = std::map<data::FightPropType,AbilityClampFightPropValue>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,AbilityClampFightPropValue>>::operator*(&__for_begin);
    k_0 = std::get<0ul,data::FightPropType const,AbilityClampFightPropValue>(v11);
    __0 = (std::tuple_element<1,const std::pair<const data::FightPropType,AbilityClampFightPropValue> >::type *)std::get<1ul,data::FightPropType const,AbilityClampFightPropValue>(v11);
    std::set<data::FightPropType>::insert(retstr, k_0);
    std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,AbilityClampFightPropValue>>::operator++(&__for_begin);
  }
  return retstr;
};

// Line 1386: range 00000000179E07A2-00000000179E090E
std::set<data::FightPropType> *__cdecl FightPropComp::flushModifiedProps::_lambda_const_auto_25___const_auto_26___::operator()_std::map_data::FightPropType_float__std::map_data::FightPropType_float___(
        std::set<data::FightPropType> *retstr,
        const FightPropComp::flushModifiedProps::<lambda(const auto:25&, const auto:26&)> *const __closure,
        const std::map<data::FightPropType,float> *lhs,
        const std::map<data::FightPropType,float> *rhs)
{
  std::map<data::FightPropType,float>::const_iterator __for_begin; // [rsp+20h] [rbp-60h] BYREF
  std::map<data::FightPropType,float>::const_iterator __for_end; // [rsp+28h] [rbp-58h] BYREF
  const std::map<data::FightPropType,float> *__for_range; // [rsp+30h] [rbp-50h]
  const std::map<data::FightPropType,float> *__for_range_0; // [rsp+38h] [rbp-48h]
  const std::pair<const data::FightPropType,float> *v11; // [rsp+40h] [rbp-40h]
  std::tuple_element<0,const std::pair<const data::FightPropType,float> >::type *k_0; // [rsp+48h] [rbp-38h]
  std::tuple_element<1,const std::pair<const data::FightPropType,float> >::type *__0; // [rsp+50h] [rbp-30h]
  const std::pair<const data::FightPropType,float> *v14; // [rsp+58h] [rbp-28h]
  std::tuple_element<0,const std::pair<const data::FightPropType,float> >::type *k; // [rsp+60h] [rbp-20h]
  std::tuple_element<1,const std::pair<const data::FightPropType,float> >::type *_; // [rsp+68h] [rbp-18h]

  std::set<data::FightPropType>::set(retstr);
  __for_range = lhs;
  __for_begin._M_node = std::map<data::FightPropType,float>::begin(lhs)._M_node;
  __for_end._M_node = std::map<data::FightPropType,float>::end(lhs)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v14 = std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,float>>::operator*(&__for_begin);
    k = std::get<0ul,data::FightPropType const,float>(v14);
    _ = (std::tuple_element<1,const std::pair<const data::FightPropType,float> >::type *)std::get<1ul,data::FightPropType const,float>(v14);
    std::set<data::FightPropType>::insert(retstr, k);
    std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,float>>::operator++(&__for_begin);
  }
  __for_range_0 = rhs;
  __for_begin._M_node = std::map<data::FightPropType,float>::begin(rhs)._M_node;
  __for_end._M_node = std::map<data::FightPropType,float>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,float>>::operator*(&__for_begin);
    k_0 = std::get<0ul,data::FightPropType const,float>(v11);
    __0 = (std::tuple_element<1,const std::pair<const data::FightPropType,float> >::type *)std::get<1ul,data::FightPropType const,float>(v11);
    std::set<data::FightPropType>::insert(retstr, k_0);
    std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,float>>::operator++(&__for_begin);
  }
  return retstr;
};

// Line 1393: range 0000000017976C00-0000000017976C35
bool __cdecl FightPropComp::flushModifiedProps(bool)::{lambda(float,float)#2}::operator()(
        const FightPropComp::flushModifiedProps::<lambda(float, float)> *const __closure,
        float a,
        float b)
{
  return std::fabs(a - b) > 0.1;
};

// Line 1397: range 0000000017976C36-000000001797710C
std::string *__cdecl FightPropComp::flushModifiedProps(bool)::{lambda(FightPropValue const&,FightPropValue const&)#3}::operator()(
        std::string *retstr,
        const FightPropComp::flushModifiedProps::<lambda(const FightPropValue&, const FightPropValue&)> *const __closure,
        const FightPropValue *lhs,
        const FightPropValue *rhs)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // rbx
  FightPropComp::flushModifiedProps::<lambda(float, float)> *check_value; // r14
  float BaseValue; // xmm0_4
  __int64 v9; // r14
  float v10; // xmm0_4
  __int64 v11; // rax
  __int64 v12; // r14
  float v13; // xmm0_4
  FightPropComp::flushModifiedProps::<lambda(float, float)> *v14; // r14
  int (**vptr_FightPropValue)(...); // rax
  int (**v16)(...); // rax
  float v17; // xmm0_4
  __int64 v18; // r14
  int (**v19)(...); // rax
  float v20; // xmm0_4
  __int64 v21; // rax
  __int64 v22; // r14
  int (**v23)(...); // rax
  float v24; // xmm0_4
  float ba; // [rsp+Ch] [rbp-254h]
  float b; // [rsp+Ch] [rbp-254h]
  char v30[560]; // [rsp+30h] [rbp-230h] BYREF

  v4 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(512LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 48 392 7 ss:1399";
  *(_QWORD *)(v4 + 16) = FightPropComp::flushModifiedProps(bool)::{lambda(FightPropValue const&,FightPropValue const&)#3}::operator();
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862733] = -218103808;
  v6[536862734] = -202116109;
  v6[536862735] = -202116109;
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v4 + 48);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  check_value = __closure->__check_value;
  ba = FightPropValue::getBaseValue(rhs);
  BaseValue = FightPropValue::getBaseValue(lhs);
  if ( FightPropComp::flushModifiedProps(bool)::{lambda(float,float)#2}::operator()(check_value, BaseValue, ba) )
  {
    v9 = std::operator<<<std::char_traits<char>>(v4 + 64, &off_26252C60);
    v10 = FightPropValue::getBaseValue(lhs);
    v11 = std::ostream::operator<<(v9, v10);
    v12 = std::operator<<<std::char_traits<char>>(v11, " rhs.base_value:");
    v13 = FightPropValue::getBaseValue(rhs);
    std::ostream::operator<<(v12, v13);
  }
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  v14 = __closure->__check_value;
  if ( *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) )
    __asan_report_load8(rhs);
  vptr_FightPropValue = rhs->_vptr_FightPropValue;
  if ( *(_BYTE *)(((unsigned __int64)rhs->_vptr_FightPropValue >> 3) + 0x7FFF8000) )
    vptr_FightPropValue = (int (**)(...))__asan_report_load8(rhs->_vptr_FightPropValue);
  b = ((float (__fastcall *)(const FightPropValue *))*vptr_FightPropValue)(rhs);
  if ( *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) )
    __asan_report_load8(lhs);
  v16 = lhs->_vptr_FightPropValue;
  if ( *(_BYTE *)(((unsigned __int64)lhs->_vptr_FightPropValue >> 3) + 0x7FFF8000) )
    v16 = (int (**)(...))__asan_report_load8(lhs->_vptr_FightPropValue);
  v17 = ((float (__fastcall *)(const FightPropValue *))*v16)(lhs);
  if ( FightPropComp::flushModifiedProps(bool)::{lambda(float,float)#2}::operator()(v14, v17, b) )
  {
    v18 = std::operator<<<std::char_traits<char>>(v4 + 64, &off_26252CE0);
    if ( *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) )
      __asan_report_load8(lhs);
    v19 = lhs->_vptr_FightPropValue;
    if ( *(_BYTE *)(((unsigned __int64)lhs->_vptr_FightPropValue >> 3) + 0x7FFF8000) )
      v19 = (int (**)(...))__asan_report_load8(lhs->_vptr_FightPropValue);
    v20 = ((float (__fastcall *)(const FightPropValue *))*v19)(lhs);
    v21 = std::ostream::operator<<(v18, v20);
    v22 = std::operator<<<std::char_traits<char>>(v21, " rhs.ability_value:");
    if ( *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) )
      __asan_report_load8(rhs);
    v23 = rhs->_vptr_FightPropValue;
    if ( *(_BYTE *)(((unsigned __int64)rhs->_vptr_FightPropValue >> 3) + 0x7FFF8000) )
      v23 = (int (**)(...))__asan_report_load8(rhs->_vptr_FightPropValue);
    v24 = ((float (__fastcall *)(const FightPropValue *))*v23)(rhs);
    std::ostream::operator<<(v22, v24);
  }
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(retstr, v4 + 48);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v4 + 48);
  if ( v30 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF803C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 1406: range 000000001797710E-00000000179772A1
float __fastcall FightPropComp::flushModifiedProps::_lambda_const_auto_27___data::FightPropType__::operator()_std::map_data::FightPropType_float___(
        const FightPropComp::flushModifiedProps::<lambda(const auto:27&, data::FightPropType)> *const __closure,
        const std::map<data::FightPropType,float> *mp,
        data::FightPropType k)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  float result; // xmm0_4
  std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,float> >::pointer v7; // rdx
  float *p_second; // rax
  std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,float> >::_Self __y; // [rsp+28h] [rbp-88h] BYREF
  char v11[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 6 k:1406 64 8 7 it:1408";
  *(_QWORD *)(v3 + 16) = FightPropComp::flushModifiedProps::_lambda_const_auto_27___data::FightPropType__::operator()_std::map_data::FightPropType_float___;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = k;
  *(std::map<data::FightPropType,float>::const_iterator *)(v3 + 64) = std::map<data::FightPropType,float>::find(
                                                                        mp,
                                                                        (const std::map<data::FightPropType,float>::key_type *)(v3 + 48));
  __y._M_node = std::map<data::FightPropType,float>::end(mp)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,float> >::_Self *)(v3 + 64),
         &__y) )
  {
    result = 0.0;
  }
  else
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,float>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,float> > *const)(v3 + 64));
    p_second = &v7->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v7->second;
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
  return result;
};

// Line 1411: range 00000000179772A2-000000001797748F
AbilityClampFightPropValue *__fastcall FightPropComp::flushModifiedProps::_lambda_const_auto_28___data::FightPropType__::operator()_std::map_data::FightPropType_AbilityClampFightPropValue___(
        AbilityClampFightPropValue *retstr,
        const FightPropComp::flushModifiedProps::<lambda(const auto:28&, data::FightPropType)> *const __closure,
        const std::map<data::FightPropType,AbilityClampFightPropValue> *mp,
        data::FightPropType k)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  GameserverService *v7; // rax
  std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> >::pointer v8; // rax
  std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> >::_Self __y; // [rsp+20h] [rbp-B0h] BYREF
  const std::string *clamp_ability_prop; // [rsp+28h] [rbp-A8h]
  std::string v14; // [rsp+30h] [rbp-A0h] BYREF
  char v15[128]; // [rsp+50h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 k:1411 64 8 7 it:1414";
  *(_QWORD *)(v4 + 16) = FightPropComp::flushModifiedProps::_lambda_const_auto_28___data::FightPropType__::operator()_std::map_data::FightPropType_AbilityClampFightPropValue___;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116352;
  *(_DWORD *)(v4 + 48) = k;
  v7 = ServiceBox::findService<GameserverService>();
  AbilityDataMgr::getClampAbilityProp[abi:cxx11](&v14, &v7->ability_data_mgr, *(data::FightPropType *)(v4 + 48));
  clamp_ability_prop = &v14;
  *(std::map<data::FightPropType,AbilityClampFightPropValue>::const_iterator *)(v4 + 64) = std::map<data::FightPropType,AbilityClampFightPropValue>::find(
                                                                                             mp,
                                                                                             (const std::map<data::FightPropType,AbilityClampFightPropValue>::key_type *)(v4 + 48));
  __y._M_node = std::map<data::FightPropType,AbilityClampFightPropValue>::end(mp)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> >::_Self *)(v4 + 64),
         &__y) )
  {
    AbilityClampFightPropValue::AbilityClampFightPropValue(retstr, clamp_ability_prop);
  }
  else
  {
    v8 = std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,AbilityClampFightPropValue>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> > *const)(v4 + 64));
    AbilityClampFightPropValue::AbilityClampFightPropValue(retstr, &v8->second);
  }
  std::string::~string(&v14);
  if ( v15 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 1446: range 0000000017978DE6-0000000017978F4B
AbilityClampFightPropValue *__fastcall FightPropComp::getOrCreateCalPropValue(
        FightPropComp *const this,
        data::FightPropType type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  GameserverService *v5; // rax
  const std::string *v6; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> >,bool> v7; // rax
  AbilityClampFightPropValue *p_second; // r13
  AbilityClampFightPropValue *result; // rax
  std::_Rb_tree_iterator<std::pair<const data::FightPropType,AbilityClampFightPropValue> > v10; // [rsp+20h] [rbp-90h] BYREF
  __int64 v11; // [rsp+28h] [rbp-88h]
  std::string v12; // [rsp+30h] [rbp-80h] BYREF
  char v13[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 type:1445";
  *(_QWORD *)(v2 + 16) = FightPropComp::getOrCreateCalPropValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = type;
  v5 = ServiceBox::findService<GameserverService>();
  AbilityDataMgr::getClampAbilityProp[abi:cxx11](&v12, &v5->ability_data_mgr, *(data::FightPropType *)(v2 + 32));
  v7 = std::map<data::FightPropType,AbilityClampFightPropValue>::emplace<data::FightPropType&,std::string const&>(
         &this->fight_cal_prop_map_,
         (data::FightPropType *)(v2 + 32),
         &v12,
         (data::FightPropType *)&this->fight_cal_prop_map_,
         v6);
  v10._M_node = v7.first._M_node;
  v11 = *(_QWORD *)&v7.second;
  p_second = &std::_Rb_tree_iterator<std::pair<data::FightPropType const,AbilityClampFightPropValue>>::operator->(&v10)->second;
  std::string::~string(&v12);
  result = p_second;
  if ( v13 == (char *)v2 )
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
