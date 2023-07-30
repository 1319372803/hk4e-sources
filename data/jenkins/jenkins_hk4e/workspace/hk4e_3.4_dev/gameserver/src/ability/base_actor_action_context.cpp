// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/ability/base_actor_action_context.cpp

// Line 20: range 00000000130CD906-00000000130CDB8C
// local variable allocation has failed, the output may be wrong!
BaseAbilityMixinPtr __cdecl BaseActorActionContext::getMixin(
        BaseActorActionContext *const this,
        int32_t mixin_local_id)
{
  int32_t v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  const std::shared_ptr<BaseAbilityMixin> *v6; // rax
  std::__shared_ptr_access<data::ConfigAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  char v8; // al
  int v9; // r14d
  BaseAbilityMixinPtr result; // rax
  int32_t mixin_local_ida; // [rsp+Ch] [rbp-C4h]
  std::vector<std::shared_ptr<BaseAbilityMixin>>::iterator __for_begin; // [rsp+28h] [rbp-A8h] BYREF
  std::vector<std::shared_ptr<BaseAbilityMixin>>::iterator __for_end; // [rsp+30h] [rbp-A0h] BYREF
  std::vector<std::shared_ptr<BaseAbilityMixin>> *__for_range; // [rsp+38h] [rbp-98h]
  char v15[144]; // [rsp+40h] [rbp-90h] BYREF

  mixin_local_ida = v2;
  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 17 base_mixin_ptr:21 64 16 19 config_mixin_ptr:23";
  *(_QWORD *)(v3 + 16) = BaseActorActionContext::getMixin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  __for_range = (std::vector<std::shared_ptr<BaseAbilityMixin>> *)(*(_QWORD *)&mixin_local_id + 8LL);
  __for_begin._M_current = std::vector<std::shared_ptr<BaseAbilityMixin>>::begin((std::vector<std::shared_ptr<BaseAbilityMixin>> *const)(*(_QWORD *)&mixin_local_id + 8LL))._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<BaseAbilityMixin>>::end((std::vector<std::shared_ptr<BaseAbilityMixin>> *const)(*(_QWORD *)&mixin_local_id + 8LL))._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<BaseAbilityMixin> *,std::vector<std::shared_ptr<BaseAbilityMixin>>>(
            &__for_begin,
            &__for_end) )
  {
    v6 = __gnu_cxx::__normal_iterator<std::shared_ptr<BaseAbilityMixin> *,std::vector<std::shared_ptr<BaseAbilityMixin>>>::operator*(&__for_begin);
    std::shared_ptr<BaseAbilityMixin>::shared_ptr((std::shared_ptr<BaseAbilityMixin> *const)(v3 + 32), v6);
    std::__shared_ptr_access<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    BaseAbilityMixin::getConfig((const BaseAbilityMixin *const)(v3 + 64));
    if ( !std::operator!=<data::ConfigAbilityMixin>((const std::shared_ptr<data::ConfigAbilityMixin> *)(v3 + 64), 0LL) )
      goto LABEL_11;
    v7 = std::__shared_ptr_access<data::ConfigAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v7->local_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v7->local_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v7->local_id);
    }
    if ( mixin_local_ida == v7->local_id )
      v8 = 1;
    else
LABEL_11:
      v8 = 0;
    if ( v8 )
    {
      std::shared_ptr<BaseAbilityMixin>::shared_ptr(
        (std::shared_ptr<BaseAbilityMixin> *const)this,
        (std::shared_ptr<BaseAbilityMixin> *)(v3 + 32));
      v9 = 0;
    }
    else
    {
      v9 = 1;
    }
    std::shared_ptr<data::ConfigAbilityMixin>::~shared_ptr((std::shared_ptr<data::ConfigAbilityMixin> *const)(v3 + 64));
    std::shared_ptr<BaseAbilityMixin>::~shared_ptr((std::shared_ptr<BaseAbilityMixin> *const)(v3 + 32));
    if ( v9 != 1 )
      goto LABEL_18;
    __gnu_cxx::__normal_iterator<std::shared_ptr<BaseAbilityMixin> *,std::vector<std::shared_ptr<BaseAbilityMixin>>>::operator++(&__for_begin);
  }
  std::shared_ptr<BaseAbilityMixin>::shared_ptr((std::shared_ptr<BaseAbilityMixin> *const)this, 0LL);
LABEL_18:
  if ( v15 == (char *)v3 )
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
  result._M_ptr = (std::__shared_ptr<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 33: range 00000000130CDB8E-00000000130CDBB8
int32_t __cdecl BaseActorActionContext::detachFromOwner(BaseActorActionContext *const this)
{
  BaseActorActionContext::detachBuffDebuffResistance(this);
  BaseActorActionContext::detachElementTypeResistance(this);
  return 0;
};

// Line 41: range 00000000130CDBBA-00000000130CDC86
void __cdecl BaseActorActionContext::attachBuffDebuffResistance(
        BaseActorActionContext *const this,
        Creature *target,
        ConfigBuffDebuffResistancePtr *p_resistance_ptr)
{
  std::shared_ptr<Creature> *v3; // rcx
  std::shared_ptr<data::ConfigBuffDebuffResistance> *v4; // r8
  AbilityComp *AbilityComp; // rbx
  std::shared_ptr<Creature> v7; // [rsp+20h] [rbp-20h] BYREF

  toThisPtr<Creature>((Creature *)&v7);
  std::vector<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::ConfigBuffDebuffResistance>>>::emplace_back<std::shared_ptr<Creature>,std::shared_ptr<data::ConfigBuffDebuffResistance>&>(
    &this->attached_resistance_buff_debuff_vec_,
    &v7,
    p_resistance_ptr,
    v3,
    v4);
  std::shared_ptr<Creature>::~shared_ptr(&v7);
  AbilityComp = Creature::getAbilityComp(target);
  std::shared_ptr<data::ConfigBuffDebuffResistance>::shared_ptr(
    (std::shared_ptr<data::ConfigBuffDebuffResistance> *const)&v7,
    p_resistance_ptr);
  AbilityComp::addBuffDebuffResistance(AbilityComp, (ConfigBuffDebuffResistancePtr *)&v7);
  std::shared_ptr<data::ConfigBuffDebuffResistance>::~shared_ptr((std::shared_ptr<data::ConfigBuffDebuffResistance> *const)&v7);
};

// Line 46: range 00000000130CDC88-00000000130CDF65
void __cdecl BaseActorActionContext::detachBuffDebuffResistance(BaseActorActionContext *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  const std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::ConfigBuffDebuffResistance> > *v4; // rax
  Creature *v5; // rax
  AbilityComp *AbilityComp; // r14
  std::vector<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::ConfigBuffDebuffResistance> >>::iterator __for_begin; // [rsp+18h] [rbp-108h] BYREF
  std::vector<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::ConfigBuffDebuffResistance> >>::iterator __for_end; // [rsp+20h] [rbp-100h] BYREF
  std::vector<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::ConfigBuffDebuffResistance> >> *__for_range; // [rsp+28h] [rbp-F8h]
  std::tuple_element<0,std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::ConfigBuffDebuffResistance> > >::type *creature_wtr; // [rsp+30h] [rbp-F0h]
  std::tuple_element<1,std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::ConfigBuffDebuffResistance> > >::type *resistance_ptr; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<data::ConfigBuffDebuffResistance> p_resistance_ptr; // [rsp+40h] [rbp-E0h] BYREF
  std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::ConfigBuffDebuffResistance> > __in; // [rsp+50h] [rbp-D0h] BYREF
  char v14[176]; // [rsp+70h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 15 creature_ptr:52 64 24 38 attached_resistance_buff_debuff_vec:47";
  *(_QWORD *)(v1 + 16) = BaseActorActionContext::detachBuffDebuffResistance;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  std::vector<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::ConfigBuffDebuffResistance>>>::vector((std::vector<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::ConfigBuffDebuffResistance> >> *const)(v1 + 64));
  std::swap<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::ConfigBuffDebuffResistance>>>(
    (std::vector<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::ConfigBuffDebuffResistance> >> *)(v1 + 64),
    &this->attached_resistance_buff_debuff_vec_);
  std::vector<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::ConfigBuffDebuffResistance>>>::clear(&this->attached_resistance_buff_debuff_vec_);
  __for_range = (std::vector<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::ConfigBuffDebuffResistance> >> *)(v1 + 64);
  __for_begin._M_current = std::vector<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::ConfigBuffDebuffResistance>>>::begin((std::vector<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::ConfigBuffDebuffResistance> >> *const)(v1 + 64))._M_current;
  __for_end._M_current = std::vector<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::ConfigBuffDebuffResistance>>>::end((std::vector<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::ConfigBuffDebuffResistance> >> *const)(v1 + 64))._M_current;
  while ( __gnu_cxx::operator!=<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::ConfigBuffDebuffResistance>> *,std::vector<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::ConfigBuffDebuffResistance>>>>(
            &__for_begin,
            &__for_end) )
  {
    v4 = __gnu_cxx::__normal_iterator<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::ConfigBuffDebuffResistance>> *,std::vector<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::ConfigBuffDebuffResistance>>>>::operator*(&__for_begin);
    std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::ConfigBuffDebuffResistance>>::pair(&__in, v4);
    creature_wtr = std::get<0ul,std::weak_ptr<Creature>,std::shared_ptr<data::ConfigBuffDebuffResistance>>(&__in);
    resistance_ptr = std::get<1ul,std::weak_ptr<Creature>,std::shared_ptr<data::ConfigBuffDebuffResistance>>(&__in);
    std::weak_ptr<Creature>::lock((const std::weak_ptr<Creature> *const)(v1 + 32));
    if ( std::operator!=<Creature>(0LL, (const std::shared_ptr<Creature> *)(v1 + 32)) )
    {
      v5 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      AbilityComp = Creature::getAbilityComp(v5);
      std::shared_ptr<data::ConfigBuffDebuffResistance>::shared_ptr(&p_resistance_ptr, resistance_ptr);
      AbilityComp::removeBuffDebuffResistance(AbilityComp, &p_resistance_ptr);
      std::shared_ptr<data::ConfigBuffDebuffResistance>::~shared_ptr(&p_resistance_ptr);
    }
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v1 + 32));
    std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::ConfigBuffDebuffResistance>>::~pair(&__in);
    __gnu_cxx::__normal_iterator<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::ConfigBuffDebuffResistance>> *,std::vector<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::ConfigBuffDebuffResistance>>>>::operator++(&__for_begin);
  }
  std::vector<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::ConfigBuffDebuffResistance>>>::~vector((std::vector<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::ConfigBuffDebuffResistance> >> *const)(v1 + 64));
  if ( v14 == (char *)v1 )
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
};

// Line 60: range 00000000130CDF66-00000000130CE032
void __cdecl BaseActorActionContext::attachElementTypeResistance(
        BaseActorActionContext *const this,
        Creature *target,
        data::AttachElementTypeResistancePtr *p_element_type_resistance_ptr)
{
  std::shared_ptr<Creature> *v3; // rcx
  std::shared_ptr<data::AttachElementTypeResistance> *v4; // r8
  AbilityComp *AbilityComp; // rbx
  std::shared_ptr<Creature> v7; // [rsp+20h] [rbp-20h] BYREF

  toThisPtr<Creature>((Creature *)&v7);
  std::vector<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::AttachElementTypeResistance>>>::emplace_back<std::shared_ptr<Creature>,std::shared_ptr<data::AttachElementTypeResistance>&>(
    &this->element_type_resistance_vec_,
    &v7,
    p_element_type_resistance_ptr,
    v3,
    v4);
  std::shared_ptr<Creature>::~shared_ptr(&v7);
  AbilityComp = Creature::getAbilityComp(target);
  std::shared_ptr<data::AttachElementTypeResistance>::shared_ptr(
    (std::shared_ptr<data::AttachElementTypeResistance> *const)&v7,
    p_element_type_resistance_ptr);
  AbilityComp::addElementTypeResistance(AbilityComp, (data::AttachElementTypeResistancePtr *)&v7);
  std::shared_ptr<data::AttachElementTypeResistance>::~shared_ptr((std::shared_ptr<data::AttachElementTypeResistance> *const)&v7);
};

// Line 65: range 00000000130CE034-00000000130CE311
void __cdecl BaseActorActionContext::detachElementTypeResistance(BaseActorActionContext *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  const std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::AttachElementTypeResistance> > *v4; // rax
  Creature *v5; // rax
  AbilityComp *AbilityComp; // r14
  std::vector<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::AttachElementTypeResistance> >>::iterator __for_begin; // [rsp+18h] [rbp-108h] BYREF
  std::vector<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::AttachElementTypeResistance> >>::iterator __for_end; // [rsp+20h] [rbp-100h] BYREF
  std::vector<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::AttachElementTypeResistance> >> *__for_range; // [rsp+28h] [rbp-F8h]
  std::tuple_element<0,std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::AttachElementTypeResistance> > >::type *creature_wtr; // [rsp+30h] [rbp-F0h]
  std::tuple_element<1,std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::AttachElementTypeResistance> > >::type *element_type_resistance_ptr; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<data::AttachElementTypeResistance> p_element_type_resistance_ptr; // [rsp+40h] [rbp-E0h] BYREF
  std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::AttachElementTypeResistance> > __in; // [rsp+50h] [rbp-D0h] BYREF
  char v14[176]; // [rsp+70h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 15 creature_ptr:71 64 24 30 element_type_resistance_vec:66";
  *(_QWORD *)(v1 + 16) = BaseActorActionContext::detachElementTypeResistance;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  std::vector<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::AttachElementTypeResistance>>>::vector((std::vector<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::AttachElementTypeResistance> >> *const)(v1 + 64));
  std::swap<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::AttachElementTypeResistance>>>(
    (std::vector<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::AttachElementTypeResistance> >> *)(v1 + 64),
    &this->element_type_resistance_vec_);
  std::vector<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::AttachElementTypeResistance>>>::clear(&this->element_type_resistance_vec_);
  __for_range = (std::vector<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::AttachElementTypeResistance> >> *)(v1 + 64);
  __for_begin._M_current = std::vector<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::AttachElementTypeResistance>>>::begin((std::vector<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::AttachElementTypeResistance> >> *const)(v1 + 64))._M_current;
  __for_end._M_current = std::vector<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::AttachElementTypeResistance>>>::end((std::vector<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::AttachElementTypeResistance> >> *const)(v1 + 64))._M_current;
  while ( __gnu_cxx::operator!=<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::AttachElementTypeResistance>> *,std::vector<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::AttachElementTypeResistance>>>>(
            &__for_begin,
            &__for_end) )
  {
    v4 = __gnu_cxx::__normal_iterator<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::AttachElementTypeResistance>> *,std::vector<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::AttachElementTypeResistance>>>>::operator*(&__for_begin);
    std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::AttachElementTypeResistance>>::pair(&__in, v4);
    creature_wtr = std::get<0ul,std::weak_ptr<Creature>,std::shared_ptr<data::AttachElementTypeResistance>>(&__in);
    element_type_resistance_ptr = std::get<1ul,std::weak_ptr<Creature>,std::shared_ptr<data::AttachElementTypeResistance>>(&__in);
    std::weak_ptr<Creature>::lock((const std::weak_ptr<Creature> *const)(v1 + 32));
    if ( std::operator!=<Creature>(0LL, (const std::shared_ptr<Creature> *)(v1 + 32)) )
    {
      v5 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      AbilityComp = Creature::getAbilityComp(v5);
      std::shared_ptr<data::AttachElementTypeResistance>::shared_ptr(
        &p_element_type_resistance_ptr,
        element_type_resistance_ptr);
      AbilityComp::removeElementTypeResistance(AbilityComp, &p_element_type_resistance_ptr);
      std::shared_ptr<data::AttachElementTypeResistance>::~shared_ptr(&p_element_type_resistance_ptr);
    }
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v1 + 32));
    std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::AttachElementTypeResistance>>::~pair(&__in);
    __gnu_cxx::__normal_iterator<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::AttachElementTypeResistance>> *,std::vector<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::AttachElementTypeResistance>>>>::operator++(&__for_begin);
  }
  std::vector<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::AttachElementTypeResistance>>>::~vector((std::vector<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::AttachElementTypeResistance> >> *const)(v1 + 64));
  if ( v14 == (char *)v1 )
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
};

// Line 80: range 00000000130CE312-00000000130CE3CD
int32_t __cdecl BaseActorActionContext::foreachMixin(
        BaseActorActionContext *const this,
        const std::function<ForeachPolicy(BaseAbilityMixin&)> *func)
{
  BaseAbilityMixin *v2; // rdx
  std::vector<std::shared_ptr<BaseAbilityMixin>>::iterator __for_begin; // [rsp+10h] [rbp-20h] BYREF
  std::vector<std::shared_ptr<BaseAbilityMixin>>::iterator __for_end; // [rsp+18h] [rbp-18h] BYREF
  std::vector<std::shared_ptr<BaseAbilityMixin>> *__for_range; // [rsp+20h] [rbp-10h]
  const BaseAbilityMixinPtr *mixin_ptr; // [rsp+28h] [rbp-8h]

  __for_range = &this->mixin_vec_;
  __for_begin._M_current = std::vector<std::shared_ptr<BaseAbilityMixin>>::begin(&this->mixin_vec_)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<BaseAbilityMixin>>::end(&this->mixin_vec_)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<BaseAbilityMixin> *,std::vector<std::shared_ptr<BaseAbilityMixin>>>(
            &__for_begin,
            &__for_end) )
  {
    mixin_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<BaseAbilityMixin> *,std::vector<std::shared_ptr<BaseAbilityMixin>>>::operator*(&__for_begin);
    if ( !std::operator==<BaseAbilityMixin>(mixin_ptr, 0LL) )
    {
      v2 = std::__shared_ptr_access<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)mixin_ptr);
      if ( std::function<ForeachPolicy ()(BaseAbilityMixin &)>::operator()(func, v2) )
        return 1;
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<BaseAbilityMixin> *,std::vector<std::shared_ptr<BaseAbilityMixin>>>::operator++(&__for_begin);
  }
  return 0;
};
