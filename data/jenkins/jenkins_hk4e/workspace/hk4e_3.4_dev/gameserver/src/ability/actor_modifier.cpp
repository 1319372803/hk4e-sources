// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/ability/actor_modifier.cpp

// Line 21: range 00000000130C9ABE-00000000130C9C90
std::string *__cdecl ActorModifier::getDesc[abi:cxx11](std::string *retstr, const ActorModifier *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // r14
  const std::string *v6; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // r14
  unsigned int ModifierId; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v10; // rax
  char v12[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 5 ss:22";
  *(_QWORD *)(v2 + 16) = ActorModifier::getDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         "[Modifier:");
  v6 = ActorModifier::getName[abi:cxx11](this);
  v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, v6);
  v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, ",");
  ModifierId = ActorModifier::getModifierId(this);
  v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, ModifierId);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v10, "]");
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    retstr,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 29: range 00000000130C9C9A-00000000130CA13C
int32_t __cdecl ActorModifier::init(
        ActorModifier *const this,
        ActorAbilityPtr *p_parent_ability_ptr,
        ConfigAbilityImplPtr *p_config_impl_ptr,
        Creature *owner,
        data::ConfigAbilityModifier *config_modifier)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  ActorAbilityPtr *AbilityComp; // r14
  const std::__shared_ptr_access<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false> *v9; // rax
  BaseAbilityMixin *v10; // rax
  __int64 NowMs; // rax
  int32_t StringHash; // ecx
  int32_t result; // eax
  int32_t i; // [rsp+3Ch] [rbp-B4h]
  std::vector<std::shared_ptr<data::ConfigAbilityMixin>>::iterator __for_begin; // [rsp+40h] [rbp-B0h] BYREF
  std::vector<std::shared_ptr<data::ConfigAbilityMixin>>::iterator __for_end; // [rsp+48h] [rbp-A8h] BYREF
  std::vector<std::shared_ptr<data::ConfigAbilityMixin>> *__for_range; // [rsp+50h] [rbp-A0h]
  data::ConfigAbilityMixinPtr *config_mixin_ptr; // [rsp+58h] [rbp-98h]
  data::ConfigAbilityMixin v22; // [rsp+60h] [rbp-90h] BYREF
  char v23[112]; // [rsp+80h] [rbp-70h] BYREF

  v5 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 16 12 mixin_ptr:37";
  *(_QWORD *)(v5 + 16) = ActorModifier::init;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  std::weak_ptr<ActorAbility>::operator=<ActorAbility>(&this->parent_ability_wtr_, p_parent_ability_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->parent_owner_idx_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->parent_owner_idx_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->parent_owner_idx_);
  }
  this->parent_owner_idx_ = -1;
  toThisPtr<data::ConfigAbilityModifier>((data::ConfigAbilityModifier *)&v22._M_weak_this._M_refcount);
  std::shared_ptr<data::ConfigAbilityModifier>::operator=(
    &this->config_modifier_ptr_,
    (std::shared_ptr<data::ConfigAbilityModifier> *)&v22._M_weak_this._M_refcount);
  std::shared_ptr<data::ConfigAbilityModifier>::~shared_ptr((std::shared_ptr<data::ConfigAbilityModifier> *const)&v22._M_weak_this._M_refcount);
  std::shared_ptr<ConfigAbilityImpl>::operator=(&this->config_parent_ability_impl_ptr_, p_config_impl_ptr);
  toThisPtr<Creature>((Creature *)&v22._M_weak_this._M_refcount);
  std::weak_ptr<Creature>::operator=<Creature>(
    &this->owner_wtr_,
    (const std::shared_ptr<Creature> *)&v22._M_weak_this._M_refcount);
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)&v22._M_weak_this._M_refcount);
  __for_range = &config_modifier->modifier_mixins;
  __for_begin._M_current = std::vector<std::shared_ptr<data::ConfigAbilityMixin>>::begin(&config_modifier->modifier_mixins)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<data::ConfigAbilityMixin>>::end(&config_modifier->modifier_mixins)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<data::ConfigAbilityMixin> *,std::vector<std::shared_ptr<data::ConfigAbilityMixin>>>(
            &__for_begin,
            &__for_end) )
  {
    config_mixin_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigAbilityMixin> *,std::vector<std::shared_ptr<data::ConfigAbilityMixin>>>::operator*(&__for_begin);
    AbilityComp = (ActorAbilityPtr *)Creature::getAbilityComp(owner);
    std::__shared_ptr_access<data::ConfigAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<data::ConfigAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)config_mixin_ptr);
    std::enable_shared_from_this<ActorModifier>::shared_from_this((std::enable_shared_from_this<ActorModifier> *const)&v22);
    std::shared_ptr<ActorAbility>::shared_ptr(
      (std::shared_ptr<ActorAbility> *const)&v22._M_weak_this._M_refcount,
      p_parent_ability_ptr);
    AbilityComp::createAbilityMixin(
      (AbilityComp *const)(v5 + 32),
      AbilityComp,
      (ActorModifierPtr *)&v22._M_weak_this._M_refcount,
      &v22);
    std::shared_ptr<ActorAbility>::~shared_ptr((std::shared_ptr<ActorAbility> *const)&v22._M_weak_this._M_refcount);
    std::shared_ptr<ActorModifier>::~shared_ptr((std::shared_ptr<ActorModifier> *const)&v22);
    if ( std::operator!=<BaseAbilityMixin>((const std::shared_ptr<BaseAbilityMixin> *)(v5 + 32), 0LL) )
      std::vector<std::shared_ptr<BaseAbilityMixin>>::push_back(
        &this->mixin_vec_,
        (const std::vector<std::shared_ptr<BaseAbilityMixin>>::value_type *)(v5 + 32));
    std::shared_ptr<BaseAbilityMixin>::~shared_ptr((std::shared_ptr<BaseAbilityMixin> *const)(v5 + 32));
    __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigAbilityMixin> *,std::vector<std::shared_ptr<data::ConfigAbilityMixin>>>::operator++(&__for_begin);
  }
  for ( i = 0; i < std::vector<std::shared_ptr<BaseAbilityMixin>>::size(&this->mixin_vec_); ++i )
  {
    v9 = (const std::__shared_ptr_access<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false> *)std::vector<std::shared_ptr<BaseAbilityMixin>>::operator[](&this->mixin_vec_, i);
    v10 = std::__shared_ptr_access<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v9);
    BaseAbilityMixin::setInstId(v10, i);
  }
  NowMs = common::tools::TimeUtils::getNowMs();
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ms_ >> 3) + 0x7FFF8000) )
    NowMs = __asan_report_store8(&this->start_time_ms_);
  this->start_time_ms_ = NowMs;
  StringHash = getStringHash(&config_modifier->modifier_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->modifier_name_hash_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->modifier_name_hash_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->modifier_name_hash_);
  }
  this->modifier_name_hash_ = StringHash;
  result = 0;
  if ( v23 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 50: range 00000000130CA13E-00000000130CA1D1
int32_t __cdecl ActorModifier::onLogin(ActorModifier *const this, uint64_t now_ms)
{
  uint64_t v2; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->exist_duration_ms_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->exist_duration_ms_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->exist_duration_ms_);
  }
  v2 = now_ms - this->exist_duration_ms_;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->start_time_ms_);
  this->start_time_ms_ = v2;
  return 0;
};

// Line 57: range 00000000130CA1D2-00000000130CA27A
int32_t __cdecl ActorModifier::onDisconnect(ActorModifier *const this)
{
  uint32_t v1; // ecx
  uint64_t now_ms; // [rsp+18h] [rbp-8h]

  now_ms = common::tools::TimeUtils::getNowMs();
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->start_time_ms_);
  if ( now_ms > this->start_time_ms_ )
  {
    v1 = now_ms - this->start_time_ms_;
    if ( *(_BYTE *)(((unsigned __int64)&this->exist_duration_ms_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->exist_duration_ms_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->exist_duration_ms_);
    }
    this->exist_duration_ms_ = v1;
  }
  return 0;
};

// Line 68: range 00000000130CA27C-00000000130CAE55
int32_t __cdecl ActorModifier::toClient(const ActorModifier *const this, proto::AbilityAppliedModifier *proto_modifier)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<ConfigAbilityModifierImpl,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  int32_t *p_config_local_id; // rax
  int (**vptr_BaseActorActionContext)(...); // rax
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t EntityId; // edx
  std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t AbilityId; // edx
  common::milog::MiLogStream *v13; // rdx
  std::string *p_ability_name; // rdx
  std::__shared_ptr_access<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  bool v17; // al
  std::string *p_override_name; // rdx
  __int64 v19; // rax
  float v20; // xmm0_4
  uint32_t v21; // edi
  bool IsAttachedParentAbility; // dl
  int32_t result; // eax
  proto::AbilityString *parent_ability_name; // [rsp+10h] [rbp-110h]
  proto::AbilityString *parent_ability_override; // [rsp+18h] [rbp-108h]
  uint64_t now_ms; // [rsp+20h] [rbp-100h]
  proto::AbilityAttachedModifier *proto_attached_modifier; // [rsp+28h] [rbp-F8h]
  common::milog::MiLogStream v29; // [rsp+30h] [rbp-F0h] BYREF
  char v30[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 16 27 config_modifier_impl_ptr:69 64 16 12 owner_ptr:81 96 16 14 ability_ptr:82 128 16 16 creature_ptr:133";
  *(_QWORD *)(v2 + 16) = ActorModifier::toClient;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  ActorModifier::getConfigImpl((const ActorModifier *const)(v2 + 32));
  if ( std::operator==<ConfigAbilityModifierImpl>((const std::shared_ptr<ConfigAbilityModifierImpl> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/actor_modifier.cpp",
      "toClient",
      72);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v29, (const char (*)[20])"getConfigImpl fails");
    common::milog::MiLogStream::~MiLogStream(&v29);
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<ConfigAbilityModifierImpl,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ConfigAbilityModifierImpl,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    p_config_local_id = &v6->config_local_id;
    if ( *(_BYTE *)(((unsigned __int64)p_config_local_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_config_local_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_config_local_id >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(p_config_local_id);
    }
    proto::AbilityAppliedModifier::set_modifier_local_id(proto_modifier, v6->config_local_id);
    if ( std::operator==<ConfigAbilityImpl>(&this->config_parent_ability_impl_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/actor_modifier.cpp",
        "toClient",
        78);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v29, (const char (*)[20])"getConfigImpl fails");
      common::milog::MiLogStream::~MiLogStream(&v29);
      v5 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      vptr_BaseActorActionContext = this->_vptr_BaseActorActionContext;
      if ( *(_BYTE *)(((unsigned __int64)this->_vptr_BaseActorActionContext >> 3) + 0x7FFF8000) )
        vptr_BaseActorActionContext = (int (**)(...))__asan_report_load8(this->_vptr_BaseActorActionContext);
      (*vptr_BaseActorActionContext)(v2 + 64, this);
      ActorModifier::getParentAbility((const ActorModifier *const)(v2 + 96));
      if ( std::operator!=<ActorAbility>((const std::shared_ptr<ActorAbility> *)(v2 + 96), 0LL) )
      {
        std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        ActorAbility::getCaster((ActorAbility *const)(v2 + 128));
        if ( std::operator==<Creature>((const std::shared_ptr<Creature> *)(v2 + 128), 0LL) )
        {
          proto::AbilityAppliedModifier::set_parent_ability_entity_id(proto_modifier, 0xFFFFFFFF);
        }
        else if ( std::operator!=<Creature,Creature>(
                    (const std::shared_ptr<Creature> *)(v2 + 128),
                    (const std::shared_ptr<Creature> *)(v2 + 64)) )
        {
          v9 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          EntityId = Entity::getEntityId((const Entity *const)v9);
          proto::AbilityAppliedModifier::set_parent_ability_entity_id(proto_modifier, EntityId);
        }
        v11 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        AbilityId = ActorAbility::getAbilityId(v11);
        proto::AbilityAppliedModifier::set_instanced_ability_id(proto_modifier, AbilityId);
        std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 128));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          0x11u,
          "./src/ability/actor_modifier.cpp",
          "toClient",
          99);
        v13 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(&v29, (const char (*)[26])off_24F19F60);
        common::milog::MiLogStream::operator<<<ActorModifier,(ActorModifier*)0>(v13, this);
        common::milog::MiLogStream::~MiLogStream(&v29);
      }
      parent_ability_name = proto::AbilityAppliedModifier::mutable_parent_ability_name(proto_modifier);
      p_ability_name = &std::__shared_ptr_access<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->config_parent_ability_impl_ptr_)->ability_name;
      if ( abilityStringFromStdString(p_ability_name, parent_ability_name) )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          0x13u,
          "./src/ability/actor_modifier.cpp",
          "toClient",
          104);
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          &v29,
          (const char (*)[33])"abilityStringFromStdString fails");
        common::milog::MiLogStream::~MiLogStream(&v29);
        v5 = -1;
      }
      else
      {
        v15 = std::__shared_ptr_access<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->config_parent_ability_impl_ptr_);
        v17 = 0;
        if ( std::operator!=<char>(&v15->override_name, "Default") )
        {
          v16 = std::__shared_ptr_access<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->config_parent_ability_impl_ptr_);
          if ( (unsigned __int8)std::string::empty(&v16->override_name) != 1 )
            v17 = 1;
        }
        if ( v17
          && (parent_ability_override = proto::AbilityAppliedModifier::mutable_parent_ability_override(proto_modifier),
              p_override_name = &std::__shared_ptr_access<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->config_parent_ability_impl_ptr_)->override_name,
              abilityStringFromStdString(p_override_name, parent_ability_override)) )
        {
          common::milog::MiLogStream::create(
            &v29,
            &common::milog::MiLogDefault::default_log_obj_,
            0x13u,
            "./src/ability/actor_modifier.cpp",
            "toClient",
            112);
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            &v29,
            (const char (*)[33])"abilityStringFromStdString fails");
          common::milog::MiLogStream::~MiLogStream(&v29);
          v5 = -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->modifier_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->modifier_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->modifier_id_);
          }
          proto::AbilityAppliedModifier::set_instanced_modifier_id(proto_modifier, this->modifier_id_);
          now_ms = common::tools::TimeUtils::getNowMs();
          if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ms_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->start_time_ms_);
          if ( now_ms > this->start_time_ms_ )
          {
            v19 = now_ms - this->start_time_ms_;
            if ( v19 < 0 )
              v20 = (float)(v19 & 1 | (unsigned int)((unsigned __int64)v19 >> 1))
                  + (float)(v19 & 1 | (unsigned int)((unsigned __int64)v19 >> 1));
            else
              v20 = (float)(int)v19;
            proto::AbilityAppliedModifier::set_exist_duration(proto_modifier, v20 / 1000.0);
          }
          if ( *(_BYTE *)(((unsigned __int64)&this->attached_modifier_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->attached_modifier_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->attached_modifier_id_);
          }
          if ( this->attached_modifier_id_ )
          {
            proto_attached_modifier = proto::AbilityAppliedModifier::mutable_attached_instanced_modifier(proto_modifier);
            if ( *(_BYTE *)(((unsigned __int64)&this->attached_modifier_owner_entity_id_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->attached_modifier_owner_entity_id_ >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4(&this->attached_modifier_owner_entity_id_);
            }
            if ( this->attached_modifier_owner_entity_id_ )
            {
              if ( std::operator==<Creature>((const std::shared_ptr<Creature> *)(v2 + 64), 0LL) )
              {
                proto::AbilityAttachedModifier::set_is_invalid(proto_attached_modifier, 1);
              }
              else
              {
                v21 = (unsigned int)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
                if ( *(_BYTE *)(((unsigned __int64)&this->attached_modifier_owner_entity_id_ >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->attached_modifier_owner_entity_id_ >> 3)
                                                                       + 0x7FFF8000) )
                {
                  v21 = (_DWORD)this + 116;
                  __asan_report_load4(&this->attached_modifier_owner_entity_id_);
                }
                Entity::findEntityInSameScene<Creature>((const Entity *const)(v2 + 128), v21);
                if ( std::operator==<Creature>((const std::shared_ptr<Creature> *)(v2 + 128), 0LL) )
                  proto::AbilityAttachedModifier::set_is_invalid(proto_attached_modifier, 1);
                std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 128));
              }
            }
            if ( *(_BYTE *)(((unsigned __int64)&this->attached_modifier_owner_entity_id_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->attached_modifier_owner_entity_id_ >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4(&this->attached_modifier_owner_entity_id_);
            }
            proto::AbilityAttachedModifier::set_owner_entity_id(
              proto_attached_modifier,
              this->attached_modifier_owner_entity_id_);
            if ( *(_BYTE *)(((unsigned __int64)&this->attached_modifier_id_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->attached_modifier_id_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->attached_modifier_id_);
            }
            proto::AbilityAttachedModifier::set_instanced_modifier_id(
              proto_attached_modifier,
              this->attached_modifier_id_);
            if ( *(_BYTE *)(((unsigned __int64)&this->is_attached_serverbuff_modifier_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->is_attached_serverbuff_modifier_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->is_attached_serverbuff_modifier_);
            }
            proto::AbilityAttachedModifier::set_is_serverbuff_modifier(
              proto_attached_modifier,
              this->is_attached_serverbuff_modifier_ != 0);
            if ( *(_BYTE *)(((unsigned __int64)&this->attach_name_hash_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->attach_name_hash_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->attach_name_hash_);
            }
            proto::AbilityAttachedModifier::set_attach_name_hash(proto_attached_modifier, this->attach_name_hash_);
          }
          if ( *(_BYTE *)(((unsigned __int64)&this->apply_entity_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->apply_entity_id_ >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4(&this->apply_entity_id_);
          }
          proto::AbilityAppliedModifier::set_apply_entity_id(proto_modifier, this->apply_entity_id_);
          IsAttachedParentAbility = ActorModifier::getIsAttachedParentAbility(this);
          proto::AbilityAppliedModifier::set_is_attached_parent_ability(proto_modifier, IsAttachedParentAbility);
          if ( *(_BYTE *)(((unsigned __int64)&this->sbuff_uid_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sbuff_uid_ >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4(&this->sbuff_uid_);
          }
          proto::AbilityAppliedModifier::set_sbuff_uid(proto_modifier, this->sbuff_uid_);
          if ( *(char *)(((unsigned __int64)&this->is_serverbuff_modifier >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&this->is_serverbuff_modifier);
          proto::AbilityAppliedModifier::set_is_serverbuff_modifier(proto_modifier, this->is_serverbuff_modifier);
          v5 = 0;
        }
      }
      std::shared_ptr<ActorAbility>::~shared_ptr((std::shared_ptr<ActorAbility> *const)(v2 + 96));
      std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 64));
    }
  }
  std::shared_ptr<ConfigAbilityModifierImpl>::~shared_ptr((std::shared_ptr<ConfigAbilityModifierImpl> *const)(v2 + 32));
  result = v5;
  if ( v30 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 154: range 00000000130CAE56-00000000130CB0A8
void __cdecl ActorModifier::setParentAbility(ActorModifier *const this, ActorAbilityPtr *p_parent_ability_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const std::shared_ptr<BaseAbilityMixin> *v5; // rax
  BaseAbilityMixin *v6; // r14
  std::vector<std::shared_ptr<BaseAbilityMixin>>::iterator __for_begin; // [rsp+18h] [rbp-98h] BYREF
  std::vector<std::shared_ptr<BaseAbilityMixin>>::iterator __for_end; // [rsp+20h] [rbp-90h] BYREF
  std::vector<std::shared_ptr<BaseAbilityMixin>> *__for_range; // [rsp+28h] [rbp-88h]
  std::shared_ptr<ConfigAbilityImpl> __r; // [rsp+30h] [rbp-80h] BYREF
  char v11[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 18 base_mixin_ptr:160";
  *(_QWORD *)(v2 + 16) = ActorModifier::setParentAbility;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<ActorAbility>::operator=<ActorAbility>(&this->parent_ability_wtr_, p_parent_ability_ptr);
  if ( std::operator!=<ActorAbility>(p_parent_ability_ptr, 0LL) )
  {
    std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_parent_ability_ptr);
    ActorAbility::getConfigImpl((const ActorAbility *const)&__r);
    std::shared_ptr<ConfigAbilityImpl>::operator=(&this->config_parent_ability_impl_ptr_, &__r);
    std::shared_ptr<ConfigAbilityImpl>::~shared_ptr(&__r);
  }
  __for_range = &this->mixin_vec_;
  __for_begin._M_current = std::vector<std::shared_ptr<BaseAbilityMixin>>::begin(&this->mixin_vec_)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<BaseAbilityMixin>>::end(&this->mixin_vec_)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<BaseAbilityMixin> *,std::vector<std::shared_ptr<BaseAbilityMixin>>>(
            &__for_begin,
            &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<std::shared_ptr<BaseAbilityMixin> *,std::vector<std::shared_ptr<BaseAbilityMixin>>>::operator*(&__for_begin);
    std::shared_ptr<BaseAbilityMixin>::shared_ptr((std::shared_ptr<BaseAbilityMixin> *const)(v2 + 32), v5);
    v6 = std::__shared_ptr_access<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    std::shared_ptr<ActorAbility>::shared_ptr((std::shared_ptr<ActorAbility> *const)&__r, p_parent_ability_ptr);
    BaseAbilityMixin::setAbility(v6, (ActorAbilityPtr *)&__r);
    std::shared_ptr<ActorAbility>::~shared_ptr((std::shared_ptr<ActorAbility> *const)&__r);
    std::shared_ptr<BaseAbilityMixin>::~shared_ptr((std::shared_ptr<BaseAbilityMixin> *const)(v2 + 32));
    __gnu_cxx::__normal_iterator<std::shared_ptr<BaseAbilityMixin> *,std::vector<std::shared_ptr<BaseAbilityMixin>>>::operator++(&__for_begin);
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 168: range 00000000130CB0AA-00000000130CB0FB
ConfigAbilityModifierImplPtr __cdecl ActorModifier::getConfigImpl(const ActorModifier *const this)
{
  ConfigAbilityModifierImplPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<ConfigAbilityModifierImpl,data::ConfigAbilityModifier>((const std::shared_ptr<data::ConfigAbilityModifier> *)this);
  result._M_ptr = (std::__shared_ptr<ConfigAbilityModifierImpl,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 173: range 00000000130CB0FC-00000000130CB11D
data::ConfigAbilityModifier *__cdecl ActorModifier::getConfigRef(ActorModifier *const this)
{
  return (data::ConfigAbilityModifier *)ActorModifier::getConfigRef(this);
};

// Line 179: range 00000000130CB11E-00000000130CB259
const data::ConfigAbilityModifier *__cdecl ActorModifier::getConfigRef(const ActorModifier *const this)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( !std::operator==<data::ConfigAbilityModifier>(&this->config_modifier_ptr_, 0LL) )
    return std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->config_modifier_ptr_);
  common::milog::MiLogStream::create(
    &v2,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/ability/actor_modifier.cpp",
    "getConfigRef",
    182);
  common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
    &v2,
    (const char (*)[29])"config_modifier_ptr_ is null");
  common::milog::MiLogStream::~MiLogStream(&v2);
  if ( !(_BYTE)`guard variable for'ActorModifier::getConfigRef(void)::empty_config )
  {
    if ( __cxa_guard_acquire(&`guard variable for'ActorModifier::getConfigRef(void)::empty_config) )
    {
      data::ConfigAbilityModifier::ConfigAbilityModifier(&ActorModifier::getConfigRef(void)const::empty_config);
      __cxa_guard_release(&`guard variable for'ActorModifier::getConfigRef(void)::empty_config);
      __cxa_atexit(
        (void (__fastcall *)(void *))data::ConfigAbilityModifier::~ConfigAbilityModifier,
        &ActorModifier::getConfigRef(void)const::empty_config,
        &_dso_handle);
    }
  }
  return &ActorModifier::getConfigRef(void)const::empty_config;
};

// Line 191: range 00000000130CB25A-00000000130CB539
int32_t __cdecl ActorModifier::attach(ActorModifier *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int (**vptr_BaseActorActionContext)(...); // rax
  Creature *v5; // rax
  AbilityComp *AbilityComp; // rcx
  ActorAbility *v7; // rdx
  int32_t v8; // esi
  int32_t result; // eax
  data::ConfigAbilityModifier *config_modifier; // [rsp+18h] [rbp-78h]
  char v11[112]; // [rsp+20h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 22 parent_ability_ptr:202";
  *(_QWORD *)(v1 + 16) = ActorModifier::attach;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  ActorModifier::addProperties(this);
  config_modifier = ActorModifier::getConfigRef(this);
  if ( *(_BYTE *)(((unsigned __int64)&config_modifier->state >> 3) + 0x7FFF8000) )
    __asan_report_load8(&config_modifier->state);
  if ( config_modifier->state )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    vptr_BaseActorActionContext = this->_vptr_BaseActorActionContext;
    if ( *(_BYTE *)(((unsigned __int64)this->_vptr_BaseActorActionContext >> 3) + 0x7FFF8000) )
      vptr_BaseActorActionContext = (int (**)(...))__asan_report_load8(this->_vptr_BaseActorActionContext);
    (*vptr_BaseActorActionContext)(v1 + 32, this);
    if ( std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v1 + 32), 0LL) )
    {
      v5 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      AbilityComp = Creature::getAbilityComp(v5);
      if ( *(_BYTE *)(((unsigned __int64)&config_modifier->state >> 3) + 0x7FFF8000) )
        __asan_report_load8(&config_modifier->state);
      AbilityComp::addAbilityState(AbilityComp, config_modifier->state, this);
    }
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v1 + 32));
  }
  ActorModifier::getParentAbility((const ActorModifier *const)(v1 + 32));
  if ( std::operator!=<ActorAbility>((const std::shared_ptr<ActorAbility> *)(v1 + 32), 0LL) )
  {
    v7 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    v8 = ActorAbility::addModifier(v7, this);
    if ( *(_BYTE *)(((unsigned __int64)&this->parent_owner_idx_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->parent_owner_idx_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->parent_owner_idx_);
    }
    this->parent_owner_idx_ = v8;
  }
  std::shared_ptr<ActorAbility>::~shared_ptr((std::shared_ptr<ActorAbility> *const)(v1 + 32));
  result = 0;
  if ( v11 == (char *)v1 )
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

// Line 212: range 00000000130CB53A-00000000130CB8B1
int32_t __cdecl ActorModifier::detach(ActorModifier *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int (**vptr_BaseActorActionContext)(...); // rax
  Creature *v5; // rax
  AbilityComp *AbilityComp; // rcx
  ActorAbility *v7; // rcx
  int32_t v8; // r14d
  int32_t result; // eax
  data::ConfigAbilityModifier *config_modifier; // [rsp+18h] [rbp-98h]
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 22 parent_ability_ptr:224";
  *(_QWORD *)(v1 + 16) = ActorModifier::detach;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  ActorModifier::delProperties(this);
  config_modifier = ActorModifier::getConfigRef(this);
  if ( *(_BYTE *)(((unsigned __int64)&config_modifier->state >> 3) + 0x7FFF8000) )
    __asan_report_load8(&config_modifier->state);
  if ( config_modifier->state )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    vptr_BaseActorActionContext = this->_vptr_BaseActorActionContext;
    if ( *(_BYTE *)(((unsigned __int64)this->_vptr_BaseActorActionContext >> 3) + 0x7FFF8000) )
      vptr_BaseActorActionContext = (int (**)(...))__asan_report_load8(this->_vptr_BaseActorActionContext);
    (*vptr_BaseActorActionContext)(v1 + 32, this);
    if ( std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v1 + 32), 0LL) )
    {
      v5 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      AbilityComp = Creature::getAbilityComp(v5);
      if ( *(_BYTE *)(((unsigned __int64)&config_modifier->state >> 3) + 0x7FFF8000) )
        __asan_report_load8(&config_modifier->state);
      AbilityComp::removeAbilityState(AbilityComp, config_modifier->state, this);
    }
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v1 + 32));
  }
  BaseActorActionContext::detachFromOwner(this);
  ActorModifier::getParentAbility((const ActorModifier *const)(v1 + 32));
  if ( !std::operator!=<ActorAbility>((const std::shared_ptr<ActorAbility> *)(v1 + 32), 0LL) )
    goto LABEL_21;
  v7 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->parent_owner_idx_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->parent_owner_idx_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->parent_owner_idx_);
  }
  if ( (unsigned int)ActorAbility::delModifier(v7, this->parent_owner_idx_) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/actor_modifier.cpp",
      "detach",
      229);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v11, (const char (*)[18])"delModifier fails");
    common::milog::MiLogStream::~MiLogStream(&v11);
    v8 = -1;
  }
  else
  {
LABEL_21:
    v8 = 0;
  }
  std::shared_ptr<ActorAbility>::~shared_ptr((std::shared_ptr<ActorAbility> *const)(v1 + 32));
  result = v8;
  if ( v12 == (char *)v1 )
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

// Line 238: range 00000000130CB8B2-00000000130CC0DA
int32_t __cdecl ActorModifier::addProperties(ActorModifier *const this)
{
  __m128 v1; // xmm0
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  int (**vptr_BaseActorActionContext)(...); // rax
  std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  Creature *v8; // rax
  ActorAbility *v9; // r14
  std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  bool *p_is_limited_properties; // rax
  int v12; // r14d
  std::map<std::string,int>::mapped_type *v13; // rax
  _DWORD *v14; // rdx
  GameserverService *v15; // rax
  GameserverService *v16; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  const std::string *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  char v32; // al
  Creature *v33; // rax
  int32_t result; // eax
  bool is_max_hp_changed; // [rsp+17h] [rbp-129h]
  std::unordered_map<std::string,data::DynamicFloat>::iterator __for_begin; // [rsp+18h] [rbp-128h] BYREF
  std::unordered_map<std::string,data::DynamicFloat>::iterator __for_end; // [rsp+20h] [rbp-120h] BYREF
  AbilityComp *ability_comp; // [rsp+28h] [rbp-118h]
  std::unordered_map<std::string,data::DynamicFloat> *__for_range; // [rsp+30h] [rbp-110h]
  std::pair<const std::string,data::DynamicFloat> *p; // [rsp+38h] [rbp-108h]
  const std::string *key; // [rsp+40h] [rbp-100h]
  data::DynamicFloat *dynamic_val; // [rsp+48h] [rbp-F8h]
  std::shared_ptr<Creature> p_global_value_source_ptr; // [rsp+50h] [rbp-F0h] BYREF
  std::shared_ptr<DieCreatureRecord> p_record_ptr; // [rsp+60h] [rbp-E0h] BYREF
  common::milog::MiLogStream v45; // [rsp+70h] [rbp-D0h] BYREF
  char v46[176]; // [rsp+90h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 9 value:266 48 4 12 pile_idx:267 64 16 22 parent_ability_ptr:244 96 16 13 owner_ptr:250";
  *(_QWORD *)(v2 + 16) = ActorModifier::addProperties;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  if ( std::operator==<data::ConfigAbilityModifier>(&this->config_modifier_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/actor_modifier.cpp",
      "addProperties",
      241);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v45,
      (const char (*)[29])"config_modifier_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v45);
    v5 = -1;
  }
  else
  {
    ActorModifier::getParentAbility((const ActorModifier *const)(v2 + 64));
    if ( std::operator==<ActorAbility>((const std::shared_ptr<ActorAbility> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/actor_modifier.cpp",
        "addProperties",
        247);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        &v45,
        (const char (*)[27])"parent_ability_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v45);
      v5 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      vptr_BaseActorActionContext = this->_vptr_BaseActorActionContext;
      if ( *(_BYTE *)(((unsigned __int64)this->_vptr_BaseActorActionContext >> 3) + 0x7FFF8000) )
        vptr_BaseActorActionContext = (int (**)(...))__asan_report_load8(this->_vptr_BaseActorActionContext);
      (*vptr_BaseActorActionContext)(v2 + 96, this);
      if ( std::operator==<Creature>((const std::shared_ptr<Creature> *)(v2 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v45,
          &common::milog::MiLogDefault::default_log_obj_,
          0x13u,
          "./src/ability/actor_modifier.cpp",
          "addProperties",
          253);
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v45, (const char (*)[18])"owner_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v45);
        v5 = -1;
      }
      else
      {
        v7 = std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->config_modifier_ptr_);
        if ( std::unordered_map<std::string,data::DynamicFloat>::empty(&v7->properties) )
        {
          v5 = 0;
        }
        else
        {
          is_max_hp_changed = 0;
          v8 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          ability_comp = Creature::getAbilityComp(v8);
          __for_range = &std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->config_modifier_ptr_)->properties;
          __for_begin._M_cur = std::unordered_map<std::string,data::DynamicFloat>::begin(__for_range)._M_cur;
          __for_end._M_cur = std::unordered_map<std::string,data::DynamicFloat>::end(__for_range)._M_cur;
          while ( std::__detail::operator!=<std::pair<std::string const,data::DynamicFloat>,true>(
                    &__for_begin,
                    &__for_end) )
          {
            p = std::__detail::_Node_iterator<std::pair<std::string const,data::DynamicFloat>,false,true>::operator*(&__for_begin);
            key = &p->first;
            dynamic_val = &p->second;
            v9 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            std::shared_ptr<DieCreatureRecord>::shared_ptr(&p_record_ptr, 0LL);
            std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, 0LL);
            v1.m128_f32[0] = ActorAbility::evaluate(v9, dynamic_val, &p_global_value_source_ptr, &p_record_ptr);
            *(_DWORD *)(v2 + 32) = _mm_cvtsi128_si32((__m128i)v1);
            std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
            std::shared_ptr<DieCreatureRecord>::~shared_ptr(&p_record_ptr);
            v10 = std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->config_modifier_ptr_);
            p_is_limited_properties = &v10->is_limited_properties;
            if ( *(_BYTE *)(((unsigned __int64)p_is_limited_properties >> 3) + 0x7FFF8000) != 0
              && ((unsigned __int8)p_is_limited_properties & 7) >= *(_BYTE *)(((unsigned __int64)p_is_limited_properties >> 3)
                                                                            + 0x7FFF8000) )
            {
              __asan_report_load1(p_is_limited_properties);
            }
            v1 = (__m128)_mm_cvtsi32_si128(*(_DWORD *)(v2 + 32));
            *(_DWORD *)(v2 + 48) = AbilityComp::addProperty(ability_comp, key, v1, v10->is_limited_properties);
            v12 = *(_DWORD *)(v2 + 48);
            v13 = std::map<std::string,int>::operator[](&this->pile_idx_map_, key);
            v14 = v13;
            if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(v13);
            }
            *v14 = v12;
            v15 = ServiceBox::findService<GameserverService>();
            if ( std::operator==<char>(key, &v15->ability_data_mgr.ACTOR_MAX_HP_RATIO)
              || (v16 = ServiceBox::findService<GameserverService>(),
                  std::operator==<char>(key, &v16->ability_data_mgr.ACTOR_MAX_HP_DELTA)) )
            {
              is_max_hp_changed = 1;
            }
            common::milog::MiLogStream::create(
              &v45,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/ability/actor_modifier.cpp",
              "addProperties",
              273);
            v18 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                    &v45,
                    (const char (*)[30])"[MOD_PROP] add property, key:");
            v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, key);
            v20 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v19, (const char (*)[9])", value:");
            v21 = common::milog::MiLogStream::operator<<<float,(float *)0>(v20, (const float *)(v2 + 32));
            v22 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v21, (const char (*)[7])", idx:");
            v23 = common::milog::MiLogStream::operator<<<int,(int *)0>(v22, (const int *)(v2 + 48));
            v24 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v23, (const char (*)[11])", ability:");
            v25 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            v26 = ActorAbility::getName[abi:cxx11](v25);
            v27 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v24, v26);
            v28 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v27, (const char (*)[9])", owner:");
            v29 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v28, v29);
            common::milog::MiLogStream::~MiLogStream(&v45);
            std::__detail::_Node_iterator<std::pair<std::string const,data::DynamicFloat>,false,true>::operator++(&__for_begin);
          }
          if ( !AbilityComp::getIsInitFinish(ability_comp) )
            goto LABEL_37;
          v30 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
            v30 = __asan_report_load8(v30);
          v31 = *(_QWORD *)v30 + 24LL;
          if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
            v30 = __asan_report_load8(*(_QWORD *)v30 + 24LL);
          if ( (*(unsigned int (__fastcall **)(unsigned __int64))v31)(v30) != 1 && is_max_hp_changed )
            v32 = 1;
          else
LABEL_37:
            v32 = 0;
          if ( v32 )
          {
            v33 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            Creature::setCurHpFull(v33, 1);
          }
          v5 = 0;
        }
      }
      std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 96));
    }
    std::shared_ptr<ActorAbility>::~shared_ptr((std::shared_ptr<ActorAbility> *const)(v2 + 64));
  }
  result = v5;
  if ( v46 == (char *)v2 )
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
  return result;
};

// Line 285: range 00000000130CC0DC-00000000130CC673
int32_t __cdecl ActorModifier::delProperties(ActorModifier *const this)
{
  __m128i v1; // xmm0
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  int (**vptr_BaseActorActionContext)(...); // rax
  std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  Creature *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::_Rb_tree_iterator<std::pair<const std::string,int> >::pointer v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int32_t result; // eax
  std::unordered_map<std::string,data::DynamicFloat>::iterator __for_begin; // [rsp+18h] [rbp-128h] BYREF
  std::unordered_map<std::string,data::DynamicFloat>::iterator __for_end; // [rsp+20h] [rbp-120h] BYREF
  std::_Rb_tree_iterator<std::pair<const std::string,int> >::_Self __y; // [rsp+28h] [rbp-118h] BYREF
  AbilityComp *ability_comp; // [rsp+30h] [rbp-110h]
  std::unordered_map<std::string,data::DynamicFloat> *__for_range; // [rsp+38h] [rbp-108h]
  std::pair<const std::string,data::DynamicFloat> *p; // [rsp+40h] [rbp-100h]
  const std::string *prop_key; // [rsp+48h] [rbp-F8h]
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-F0h] BYREF
  common::milog::MiLogStream v23; // [rsp+70h] [rbp-D0h] BYREF
  char v24[176]; // [rsp+90h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 pile_idx:311 64 8 6 it:305 96 16 13 owner_ptr:291";
  *(_QWORD *)(v2 + 16) = ActorModifier::delProperties;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  if ( std::operator==<data::ConfigAbilityModifier>(&this->config_modifier_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/actor_modifier.cpp",
      "delProperties",
      288);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v23,
      (const char (*)[29])"config_modifier_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v23);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    vptr_BaseActorActionContext = this->_vptr_BaseActorActionContext;
    if ( *(_BYTE *)(((unsigned __int64)this->_vptr_BaseActorActionContext >> 3) + 0x7FFF8000) )
      vptr_BaseActorActionContext = (int (**)(...))__asan_report_load8(this->_vptr_BaseActorActionContext);
    (*vptr_BaseActorActionContext)(v2 + 96, this);
    if ( std::operator==<Creature>((const std::shared_ptr<Creature> *)(v2 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/actor_modifier.cpp",
        "delProperties",
        294);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v23, (const char (*)[18])"owner_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v23);
      v5 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->config_modifier_ptr_);
      if ( std::unordered_map<std::string,data::DynamicFloat>::empty(&v7->properties) )
      {
        v5 = 0;
      }
      else
      {
        v8 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        ability_comp = Creature::getAbilityComp(v8);
        __for_range = &std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->config_modifier_ptr_)->properties;
        __for_begin._M_cur = std::unordered_map<std::string,data::DynamicFloat>::begin(__for_range)._M_cur;
        __for_end._M_cur = std::unordered_map<std::string,data::DynamicFloat>::end(__for_range)._M_cur;
        while ( std::__detail::operator!=<std::pair<std::string const,data::DynamicFloat>,true>(
                  &__for_begin,
                  &__for_end) )
        {
          p = std::__detail::_Node_iterator<std::pair<std::string const,data::DynamicFloat>,false,true>::operator*(&__for_begin);
          prop_key = &p->first;
          *(std::map<std::string,int>::iterator *)(v2 + 64) = std::map<std::string,int>::find(
                                                                &this->pile_idx_map_,
                                                                &p->first);
          __y._M_node = std::map<std::string,int>::end(&this->pile_idx_map_)._M_node;
          if ( std::operator==(
                 (const std::_Rb_tree_iterator<std::pair<const std::string,int> >::_Self *)(v2 + 64),
                 &__y) )
          {
            common::milog::MiLogStream::create(
              &v22,
              &common::milog::MiLogDefault::default_log_obj_,
              0x13u,
              "./src/ability/actor_modifier.cpp",
              "delProperties",
              308);
            v9 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v22, (const char (*)[21])off_24F1A420);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, prop_key);
            common::milog::MiLogStream::~MiLogStream(&v22);
          }
          else
          {
            v10 = std::_Rb_tree_iterator<std::pair<std::string const,int>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,int> > *const)(v2 + 64));
            if ( *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) <= 3 )
            {
              *(double *)v1.m128i_i64 = __asan_report_load4(&v10->second);
            }
            *(_DWORD *)(v2 + 48) = v10->second;
            AbilityComp::delProperty(ability_comp, prop_key, *(_DWORD *)(v2 + 48), v1);
            common::milog::MiLogStream::create(
              &v23,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/ability/actor_modifier.cpp",
              "delProperties",
              313);
            v11 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                    &v23,
                    (const char (*)[30])"[MOD_PROP] del property, key:");
            v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, prop_key);
            v13 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])", idx:");
            common::milog::MiLogStream::operator<<<int,(int *)0>(v13, (const int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v23);
          }
          std::__detail::_Node_iterator<std::pair<std::string const,data::DynamicFloat>,false,true>::operator++(&__for_begin);
        }
        v5 = 0;
      }
    }
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 96));
  }
  result = v5;
  if ( v24 == (char *)v2 )
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
  return result;
};

// Line 319: range 00000000130CC674-00000000130CC6CF
void __cdecl ActorModifier::setDurablityIsZero(ActorModifier *const this, bool is_zero)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_durability_is_zero_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_durability_is_zero_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_durability_is_zero_);
  }
  this->is_durability_is_zero_ = is_zero;
};
