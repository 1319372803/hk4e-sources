// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/ability/base_ability_mixin.cpp

// Line 19: range 00000000130CC6D0-00000000130CC92A
void __cdecl BaseAbilityMixin::BaseAbilityMixin(
        BaseAbilityMixin *const this,
        data::ConfigAbilityMixinPtr *p_config_mixin_ptr,
        MixinParam *param)
{
  int (**v3)(...); // rdx
  unsigned __int64 v4; // rax
  void (__fastcall **v5)(std::shared_ptr<Creature> *, unsigned __int64); // rdx
  std::shared_ptr<Creature> __r; // [rsp+20h] [rbp-20h] BYREF

  std::enable_shared_from_this<BaseAbilityMixin>::enable_shared_from_this(&this->std::enable_shared_from_this<BaseAbilityMixin>);
  v3 = (int (**)(...))(&`vtable for'BaseAbilityMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->inst_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->inst_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->inst_id_);
  }
  this->inst_id_ = 0;
  std::weak_ptr<Creature>::weak_ptr(&this->actor_wtr_);
  std::weak_ptr<ActorAbility>::weak_ptr<ActorAbility,void>(&this->ability_wtr_, &param->ability_ptr);
  std::weak_ptr<ActorModifier>::weak_ptr<ActorModifier,void>(&this->modifier_wtr_, &param->modifier_ptr);
  std::shared_ptr<data::ConfigAbilityMixin>::shared_ptr(&this->config_mixin_ptr_, p_config_mixin_ptr);
  if ( std::operator!=<ActorModifier>(&param->modifier_ptr, 0LL) )
  {
    v4 = (unsigned __int64)std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->modifier_ptr);
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(v4);
    v5 = *(void (__fastcall ***)(std::shared_ptr<Creature> *, unsigned __int64))v4;
    if ( *(_BYTE *)((*(_QWORD *)v4 >> 3) + 0x7FFF8000LL) )
      v4 = __asan_report_load8(*(_QWORD *)v4);
    (*v5)(&__r, v4);
    std::weak_ptr<Creature>::operator=<Creature>(&this->actor_wtr_, &__r);
    std::shared_ptr<Creature>::~shared_ptr(&__r);
  }
  else if ( std::operator!=<ActorAbility>(&param->ability_ptr, 0LL) )
  {
    std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)param);
    ActorAbility::getCaster((ActorAbility *const)&__r);
    std::weak_ptr<Creature>::operator=<Creature>(&this->actor_wtr_, &__r);
    std::shared_ptr<Creature>::~shared_ptr(&__r);
  }
};

// Line 28: range 00000000130CC92C-00000000130CC955
void __cdecl BaseAbilityMixin::setAbility(BaseAbilityMixin *const this, ActorAbilityPtr *p_ability_ptr)
{
  std::weak_ptr<ActorAbility>::operator=<ActorAbility>(&this->ability_wtr_, p_ability_ptr);
};

// Line 33: range 00000000130CC956-00000000130CCC10
std::string *__cdecl BaseAbilityMixin::getAbilityName[abi:cxx11](
        std::string *retstr,
        const BaseAbilityMixin *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  ActorAbility *v5; // rax
  std::string *p_ability_name; // rdx
  std::string *v7; // rdx
  int v8; // r14d
  _BOOL4 v9; // r14d
  std::allocator<char> __a; // [rsp+1Fh] [rbp-B1h] BYREF
  char v12[176]; // [rsp+20h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 14 ability_ptr:34 64 16 15 modifier_ptr:41 96 16 13 config_ptr:44";
  *(_QWORD *)(v2 + 16) = BaseAbilityMixin::getAbilityName[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  BaseAbilityMixin::getAbility((const BaseAbilityMixin *const)(v2 + 32));
  if ( std::operator!=<ActorAbility>((const std::shared_ptr<ActorAbility> *)(v2 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    p_ability_name = &ActorAbility::getConfigRef(v5)->ability_name;
    std::string::basic_string(retstr, p_ability_name);
  }
  else
  {
    BaseAbilityMixin::getModifier((const BaseAbilityMixin *const)(v2 + 64));
    v9 = 1;
    if ( std::operator!=<ActorModifier>((const std::shared_ptr<ActorModifier> *)(v2 + 64), 0LL) )
    {
      std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      ActorModifier::getParentConfig((const ActorModifier *const)(v2 + 96));
      if ( std::operator!=<ConfigAbilityImpl>((const std::shared_ptr<ConfigAbilityImpl> *)(v2 + 96), 0LL) )
      {
        v7 = &std::__shared_ptr_access<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96))->ability_name;
        std::string::basic_string(retstr, v7);
        v8 = 0;
      }
      else
      {
        v8 = 1;
      }
      std::shared_ptr<ConfigAbilityImpl>::~shared_ptr((std::shared_ptr<ConfigAbilityImpl> *const)(v2 + 96));
      if ( v8 != 1 )
        v9 = 0;
    }
    std::shared_ptr<ActorModifier>::~shared_ptr((std::shared_ptr<ActorModifier> *const)(v2 + 64));
    if ( v9 )
    {
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(retstr, _s, &__a);
      std::allocator<char>::~allocator(&__a);
    }
  }
  std::shared_ptr<ActorAbility>::~shared_ptr((std::shared_ptr<ActorAbility> *const)(v2 + 32));
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 55: range 00000000130CCC12-00000000130CD38D
std::string *__cdecl BaseAbilityMixin::getDesc[abi:cxx11](std::string *retstr, const BaseAbilityMixin *const this)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  void (__fastcall **v6)(__int64, unsigned __int64); // rdx
  unsigned __int64 v7; // rax
  void (__fastcall **v8)(std::shared_ptr<Creature> *, unsigned __int64); // rdx
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r15
  char v12; // r14
  std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  const std::string *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  char v18; // r15
  unsigned __int64 v19; // rax
  void (__fastcall **v20)(std::string *, unsigned __int64); // rdx
  __int64 v21; // rax
  __int64 v23; // [rsp+8h] [rbp-328h]
  std::allocator<char> __a; // [rsp+2Eh] [rbp-302h] BYREF
  std::allocator<char> v25; // [rsp+2Fh] [rbp-301h] BYREF
  std::shared_ptr<Creature> __r; // [rsp+30h] [rbp-300h] BYREF
  std::string v27; // [rsp+40h] [rbp-2F0h] BYREF
  std::string v28; // [rsp+60h] [rbp-2D0h] BYREF
  std::string v29; // [rsp+80h] [rbp-2B0h] BYREF
  char v30[656]; // [rsp+A0h] [rbp-290h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 16 15 modifier_ptr:57 80 16 15 creature_ptr:58 112 16 14 ability_ptr:65 144 392 5 ss:56";
  *(_QWORD *)(v2 + 16) = BaseAbilityMixin::getDesc[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862736] = -218103808;
  v4[536862737] = -202116109;
  v4[536862738] = -202116109;
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v2 + 144);
  BaseAbilityMixin::getModifier((const BaseAbilityMixin *const)(v2 + 48));
  *(_QWORD *)(v2 + 80) = 0LL;
  *(_QWORD *)(v2 + 88) = 0LL;
  if ( std::operator!=<ActorModifier>(0LL, (const std::shared_ptr<ActorModifier> *)(v2 + 48)) )
  {
    v5 = (unsigned __int64)std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8(v5);
    v6 = *(void (__fastcall ***)(__int64, unsigned __int64))v5;
    if ( *(_BYTE *)((*(_QWORD *)v5 >> 3) + 0x7FFF8000LL) )
      v5 = __asan_report_load8(*(_QWORD *)v5);
    (*v6)(v2 + 112, v5);
    std::shared_ptr<Creature>::operator=(
      (std::shared_ptr<Creature> *const)(v2 + 80),
      (std::shared_ptr<Creature> *)(v2 + 112));
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 112));
  }
  else
  {
    BaseAbilityMixin::getAbility((const BaseAbilityMixin *const)(v2 + 112));
    if ( std::operator!=<ActorAbility>((const std::shared_ptr<ActorAbility> *)(v2 + 112), 0LL) )
    {
      v7 = (unsigned __int64)std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        v7 = __asan_report_load8(v7);
      v8 = *(void (__fastcall ***)(std::shared_ptr<Creature> *, unsigned __int64))v7;
      if ( *(_BYTE *)((*(_QWORD *)v7 >> 3) + 0x7FFF8000LL) )
        v7 = __asan_report_load8(*(_QWORD *)v7);
      (*v8)(&__r, v7);
      std::shared_ptr<Creature>::operator=((std::shared_ptr<Creature> *const)(v2 + 80), &__r);
      std::shared_ptr<Creature>::~shared_ptr(&__r);
    }
    std::shared_ptr<ActorAbility>::~shared_ptr((std::shared_ptr<ActorAbility> *const)(v2 + 112));
  }
  v9 = std::operator<<<std::char_traits<char>>(v2 + 160, "mixin:[ability:");
  BaseAbilityMixin::getAbilityName[abi:cxx11](&v27, this);
  v10 = std::operator<<<char>(v9, &v27);
  v11 = std::operator<<<std::char_traits<char>>(v10, ",modifier:");
  v12 = 0;
  if ( std::operator==<ActorModifier>(0LL, (const std::shared_ptr<ActorModifier> *)(v2 + 48)) )
  {
    std::allocator<char>::allocator(&__a);
    v12 = 1;
    std::string::basic_string<std::allocator<char>>(&v28, "null", &__a);
  }
  else
  {
    v13 = std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    v14 = ActorModifier::getName[abi:cxx11](v13);
    std::string::basic_string(&v28, v14);
  }
  v15 = std::operator<<<char>(v11, &v28);
  v16 = std::operator<<<std::char_traits<char>>(v15, ",inst_id:");
  if ( *(_BYTE *)(((unsigned __int64)&this->inst_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->inst_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->inst_id_);
  }
  v17 = std::ostream::operator<<(v16, (unsigned int)this->inst_id_);
  v23 = std::operator<<<std::char_traits<char>>(v17, ",owner:");
  v18 = 0;
  if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 80)) )
  {
    std::allocator<char>::allocator(&v25);
    v18 = 1;
    std::string::basic_string<std::allocator<char>>(&v29, "null", &v25);
  }
  else
  {
    v19 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
    if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
      v19 = __asan_report_load8(v19);
    v20 = *(void (__fastcall ***)(std::string *, unsigned __int64))v19;
    if ( *(_BYTE *)((*(_QWORD *)v19 >> 3) + 0x7FFF8000LL) )
      v19 = __asan_report_load8(*(_QWORD *)v19);
    (*v20)(&v29, v19);
  }
  v21 = std::operator<<<char>(v23, &v29);
  std::operator<<<std::char_traits<char>>(v21, "]");
  std::string::~string(&v29);
  if ( v18 )
    std::allocator<char>::~allocator(&v25);
  std::string::~string(&v28);
  if ( v12 )
    std::allocator<char>::~allocator(&__a);
  std::string::~string(&v27);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(retstr, v2 + 144);
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 80));
  std::shared_ptr<ActorModifier>::~shared_ptr((std::shared_ptr<ActorModifier> *const)(v2 + 48));
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v2 + 144);
  if ( v30 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = 0;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = -168430091;
  }
  return retstr;
};

// Line 81: range 00000000130CD38E-00000000130CD62A
void __cdecl BaseAbilityMixin::fillCommonRecoverInfo(
        const BaseAbilityMixin *const this,
        proto::AbilityMixinRecoverInfo *info)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t ModifierId; // edx
  std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  bool IsServerBuffModifier; // dl
  std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t AbilityId; // edx
  std::__shared_ptr_access<data::ConfigAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  char v12[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 15 modifier_ptr:82 64 16 14 ability_ptr:83 96 16 19 config_mixin_ptr:93";
  *(_QWORD *)(v2 + 16) = BaseAbilityMixin::fillCommonRecoverInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  BaseAbilityMixin::getModifier((const BaseAbilityMixin *const)(v2 + 32));
  BaseAbilityMixin::getAbility((const BaseAbilityMixin *const)(v2 + 64));
  if ( std::operator!=<ActorModifier>(0LL, (const std::shared_ptr<ActorModifier> *)(v2 + 32)) )
  {
    v5 = std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    ModifierId = ActorModifier::getModifierId(v5);
    proto::AbilityMixinRecoverInfo::set_instanced_modifier_id(info, ModifierId);
    v7 = std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    IsServerBuffModifier = ActorModifier::getIsServerBuffModifier(v7);
    proto::AbilityMixinRecoverInfo::set_is_serverbuff_modifier(info, IsServerBuffModifier);
  }
  else if ( std::operator!=<ActorAbility>(0LL, (const std::shared_ptr<ActorAbility> *)(v2 + 64)) )
  {
    v9 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    AbilityId = ActorAbility::getAbilityId(v9);
    proto::AbilityMixinRecoverInfo::set_instanced_ability_id(info, AbilityId);
  }
  BaseAbilityMixin::getConfig((const BaseAbilityMixin *const)(v2 + 96));
  if ( std::operator!=<data::ConfigAbilityMixin>((const std::shared_ptr<data::ConfigAbilityMixin> *)(v2 + 96), 0LL) )
  {
    v11 = std::__shared_ptr_access<data::ConfigAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&v11->local_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v11->local_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v11->local_id);
    }
    proto::AbilityMixinRecoverInfo::set_local_id(info, v11->local_id);
  }
  std::shared_ptr<data::ConfigAbilityMixin>::~shared_ptr((std::shared_ptr<data::ConfigAbilityMixin> *const)(v2 + 96));
  std::shared_ptr<ActorAbility>::~shared_ptr((std::shared_ptr<ActorAbility> *const)(v2 + 64));
  std::shared_ptr<ActorModifier>::~shared_ptr((std::shared_ptr<ActorModifier> *const)(v2 + 32));
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 101: range 00000000130CD62C-00000000130CD904
data::AbilityFilterIndex __cdecl BaseAbilityMixin::getAbilityFilterIndex(const BaseAbilityMixin *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  int (**v4)(...); // rdx
  std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  int32_t AbilityNameHash; // edx
  std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  int32_t ModifierNameHash; // ecx
  data::AbilityFilterIndex v9; // rax
  char v10[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 15 ability_ptr:103 64 16 16 modifier_ptr:108";
  *(_QWORD *)(v1 + 16) = BaseAbilityMixin::getAbilityFilterIndex;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  v4 = (int (**)(...))(&`vtable for'data::AbilityFilterIndex + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->std::enable_shared_from_this<BaseAbilityMixin> >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->std::enable_shared_from_this<BaseAbilityMixin> >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->std::enable_shared_from_this<BaseAbilityMixin>);
  }
  LODWORD(this->_M_weak_this._M_ptr) = 0;
  if ( *(_BYTE *)((((unsigned __int64)&this->_M_weak_this._M_ptr + 4) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)&this->_M_weak_this._M_ptr + 4) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4((char *)&this->_M_weak_this._M_ptr + 4);
  }
  HIDWORD(this->_M_weak_this._M_ptr) = 0;
  BaseAbilityMixin::getAbility((const BaseAbilityMixin *const)(v1 + 32));
  if ( std::operator!=<ActorAbility>(0LL, (const std::shared_ptr<ActorAbility> *)(v1 + 32)) )
  {
    v5 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    AbilityNameHash = ActorAbility::getAbilityNameHash(v5);
    if ( *(_BYTE *)(((unsigned __int64)&this->std::enable_shared_from_this<BaseAbilityMixin> >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->std::enable_shared_from_this<BaseAbilityMixin> >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->std::enable_shared_from_this<BaseAbilityMixin>);
    }
    LODWORD(this->_M_weak_this._M_ptr) = AbilityNameHash;
  }
  BaseAbilityMixin::getModifier((const BaseAbilityMixin *const)(v1 + 64));
  if ( std::operator!=<ActorModifier>(0LL, (const std::shared_ptr<ActorModifier> *)(v1 + 64)) )
  {
    v7 = std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    ModifierNameHash = ActorModifier::getModifierNameHash(v7);
    if ( *(_BYTE *)((((unsigned __int64)&this->_M_weak_this._M_ptr + 4) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)&this->_M_weak_this._M_ptr + 4) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store4((char *)&this->_M_weak_this._M_ptr + 4);
    }
    HIDWORD(this->_M_weak_this._M_ptr) = ModifierNameHash;
  }
  std::shared_ptr<ActorModifier>::~shared_ptr((std::shared_ptr<ActorModifier> *const)(v1 + 64));
  std::shared_ptr<ActorAbility>::~shared_ptr((std::shared_ptr<ActorAbility> *const)(v1 + 32));
  if ( v10 == (char *)v1 )
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
  v9._vptr_AbilityFilterIndex = (int (**)(...))this;
  return v9;
};
