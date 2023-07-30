// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/ability/actor_ability.cpp

// Line 20: range 00000000130C4A85-00000000130C4C9E
int32_t __cdecl anyToScalarValueEntry(const std::any *value, proto::AbilityScalarValueEntry *value_entry)
{
  float v2; // xmm0_4
  int v3; // edx
  unsigned int v4; // edx
  common::milog::MiLogStream *v5; // rbx
  char *val; // [rsp+10h] [rbp-40h] BYREF
  const std::type_info *type; // [rsp+18h] [rbp-38h]
  std::string v9; // [rsp+20h] [rbp-30h] BYREF

  type = std::any::type(value);
  if ( std::type_info::operator==(type, (const std::type_info *)&`typeinfo for'std::string) )
  {
    proto::AbilityScalarValueEntry::set_value_type(value_entry, ABILITY_SCALAR_TYPE_STRING);
    safeAnyCast<std::string>(&v9, value);
    proto::AbilityScalarValueEntry::set_string_value(value_entry, &v9);
    std::string::~string(&v9);
  }
  else if ( std::type_info::operator==(type, (const std::type_info *)&`typeinfo for'float) )
  {
    proto::AbilityScalarValueEntry::set_value_type(value_entry, ABILITY_SCALAR_TYPE_FLOAT);
    v2 = safeAnyCast<float>(value);
    proto::AbilityScalarValueEntry::set_float_value(value_entry, v2);
  }
  else if ( std::type_info::operator==(type, (const std::type_info *)&`typeinfo for'int) )
  {
    proto::AbilityScalarValueEntry::set_value_type(value_entry, ABILITY_SCALAR_TYPE_INT);
    v3 = safeAnyCast<int>(value);
    proto::AbilityScalarValueEntry::set_int_value(value_entry, v3);
  }
  else
  {
    if ( !std::type_info::operator==(type, (const std::type_info *)&`typeinfo for'unsigned int) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v9,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/ability/actor_ability.cpp",
        "anyToScalarValueEntry",
        44);
      v5 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             (common::milog::MiLogStream *const)&v9,
             (const char (*)[18])"unsupported type:");
      val = (char *)std::type_info::name(type);
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v5, (const char *const *)&val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v9);
      return -1;
    }
    proto::AbilityScalarValueEntry::set_value_type(value_entry, ABILITY_SCALAR_TYPE_UINT);
    v4 = safeAnyCast<unsigned int>(value);
    proto::AbilityScalarValueEntry::set_uint_value(value_entry, v4);
  }
  return 0;
};

// Line 51: range 00000000130C4C9F-00000000130C4E5B
int32_t __cdecl anyFromScalarValueEntry(const proto::AbilityScalarValueEntry *value_entry, std::any *value)
{
  __m128i v2; // xmm0
  proto::AbilityScalarType v3; // eax
  const std::string *v4; // rax
  common::milog::MiLogStream *v5; // rbx
  proto::AbilityScalarType val; // [rsp+1Ch] [rbp-34h] BYREF
  std::string __rhs; // [rsp+20h] [rbp-30h] BYREF

  v3 = proto::AbilityScalarValueEntry::value_type(value_entry);
  if ( v3 == ABILITY_SCALAR_TYPE_UINT )
  {
    val = proto::AbilityScalarValueEntry::uint_value(value_entry);
    std::any::operator=<unsigned int>(value, (unsigned int *)&val);
  }
  else
  {
    if ( v3 > ABILITY_SCALAR_TYPE_UINT )
    {
LABEL_11:
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&__rhs,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/ability/actor_ability.cpp",
        "anyFromScalarValueEntry",
        67);
      v5 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
             (common::milog::MiLogStream *const)&__rhs,
             (const char (*)[24])"unsupported value_type:");
      val = proto::AbilityScalarValueEntry::value_type(value_entry);
      common::milog::MiLogStream::operator<<<proto::AbilityScalarType,(proto::AbilityScalarType*)0>(v5, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__rhs);
      return -1;
    }
    switch ( v3 )
    {
      case ABILITY_SCALAR_TYPE_STRING:
        v4 = proto::AbilityScalarValueEntry::string_value[abi:cxx11](value_entry);
        std::string::basic_string(&__rhs, v4);
        std::any::operator=<std::string>(value, &__rhs);
        std::string::~string(&__rhs);
        break;
      case ABILITY_SCALAR_TYPE_FLOAT:
        *(float *)v2.m128i_i32 = proto::AbilityScalarValueEntry::float_value(value_entry);
        val = _mm_cvtsi128_si32(v2);
        std::any::operator=<float>(value, (float *)&val);
        break;
      case ABILITY_SCALAR_TYPE_INT:
        val = proto::AbilityScalarValueEntry::int_value(value_entry);
        std::any::operator=<int>(value, (int *)&val);
        break;
      default:
        goto LABEL_11;
    }
  }
  return 0;
};

// Line 76: range 00000000130C4E5C-00000000130C5129
int32_t __cdecl abilityStringFromStdString(const std::string *str, proto::AbilityString *ability_string)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rdx
  bool *p_is_ability_use_hash; // rax
  JsonConfigMgr *p_json_config_mgr; // rdx
  common::milog::MiLogStream *v8; // rdx
  int32_t result; // eax
  google::protobuf::uint32 hash; // [rsp+1Ch] [rbp-A4h]
  std::shared_ptr<Config> v11; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-90h] BYREF
  char v13[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 config_ptr:77";
  *(_QWORD *)(v2 + 16) = abilityStringFromStdString;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 32));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  p_is_ability_use_hash = &v5->is_ability_use_hash;
  if ( *(_BYTE *)(((unsigned __int64)p_is_ability_use_hash >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)p_is_ability_use_hash & 7) >= *(_BYTE *)(((unsigned __int64)p_is_ability_use_hash >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load1(p_is_ability_use_hash);
  }
  if ( v5->is_ability_use_hash )
  {
    if ( !(unsigned __int8)std::string::empty(str) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v11);
      p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11)->design_config.json_config_mgr;
      hash = JsonConfigMgr::getAbilityHashFromString(p_json_config_mgr, str);
      std::shared_ptr<Config>::~shared_ptr(&v11);
      if ( hash )
      {
        proto::AbilityString::set_hash(ability_string, hash);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v12,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/ability/actor_ability.cpp",
          "abilityStringFromStdString",
          87);
        v8 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
               &v12,
               (const char (*)[44])"[HASH] getAbilityHashFromString fails, str:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, str);
        common::milog::MiLogStream::~MiLogStream(&v12);
        proto::AbilityString::set_str(ability_string, str);
      }
    }
  }
  else
  {
    proto::AbilityString::set_str(ability_string, str);
  }
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 32));
  result = 0;
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

// Line 101: range 00000000130C512A-00000000130C546F
int32_t __cdecl abilityStringToStdString(const proto::AbilityString *ability_string, std::string *str)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rdx
  bool *p_is_ability_use_hash; // rax
  const std::string *v7; // rax
  const std::string *v9; // rdx
  int32_t v10; // r14d
  JsonConfigMgr *p_json_config_mgr; // r14
  uint32_t v12; // eax
  common::milog::MiLogStream *v13; // r14
  const std::string *v14; // rdx
  int32_t result; // eax
  unsigned int val; // [rsp+10h] [rbp-B0h] BYREF
  const std::string *tmp_str; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<Config> v19; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-90h] BYREF
  char v21[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 config_ptr:102";
  *(_QWORD *)(v2 + 16) = abilityStringToStdString;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 32));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  p_is_ability_use_hash = &v5->is_ability_use_hash;
  if ( *(_BYTE *)(((unsigned __int64)p_is_ability_use_hash >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)p_is_ability_use_hash & 7) >= *(_BYTE *)(((unsigned __int64)p_is_ability_use_hash >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load1(p_is_ability_use_hash);
  }
  if ( v5->is_ability_use_hash )
  {
    if ( !proto::AbilityString::hash(ability_string) )
    {
      v7 = proto::AbilityString::str[abi:cxx11](ability_string);
      if ( (unsigned __int8)std::string::empty(v7) != 1 )
      {
        v9 = proto::AbilityString::str[abi:cxx11](ability_string);
        std::string::operator=(str, v9);
        v10 = 0;
        goto LABEL_18;
      }
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v19);
    p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.json_config_mgr;
    v12 = proto::AbilityString::hash(ability_string);
    tmp_str = JsonConfigMgr::getAbilityStringFromHash[abi:cxx11](p_json_config_mgr, v12);
    std::shared_ptr<Config>::~shared_ptr(&v19);
    if ( (unsigned __int8)std::string::empty(tmp_str) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/ability/actor_ability.cpp",
        "abilityStringToStdString",
        114);
      v13 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
              &v20,
              (const char (*)[45])"[HASH] getAbilityStringFromHash fails, hash:");
      val = proto::AbilityString::hash(ability_string);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v20);
      v10 = -1;
      goto LABEL_18;
    }
    std::string::operator=(str, tmp_str);
  }
  else
  {
    v14 = proto::AbilityString::str[abi:cxx11](ability_string);
    std::string::operator=(str, v14);
  }
  v10 = 0;
LABEL_18:
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 32));
  result = v10;
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

// Line 129: range 00000000130C5470-00000000130C5663
std::string *__cdecl ActorAbility::getDesc[abi:cxx11](std::string *retstr, const ActorAbility *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v6; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // r14
  unsigned int AbilityId; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v9; // rax
  const data::ConfigAbility *config_ability; // [rsp+18h] [rbp-78h]
  char v12[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 6 ss:130";
  *(_QWORD *)(v2 + 16) = ActorAbility::getDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  config_ability = ActorAbility::getConfigRef(this);
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         "[Ability:");
  v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, &config_ability->ability_name);
  v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, ",");
  AbilityId = ActorAbility::getAbilityId(this);
  v9 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, AbilityId);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v9, "]");
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

// Line 138: range 00000000130C566E-00000000130C5B9E
int32_t __cdecl ActorAbility::init(
        ActorAbility *const this,
        Creature *caster,
        data::ConfigAbility *config_ability,
        uint32_t override_name_hash,
        const std::map<int,std::any> *override_map)
{
  unsigned __int64 p_M_refcount; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  const std::string *v8; // rax
  int32_t StringHash; // edx
  int32_t v10; // ecx
  ActorAbilityPtr *AbilityComp; // r14
  const std::__shared_ptr_access<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false> *v12; // rax
  BaseAbilityMixin *v13; // rax
  AbilityDataMgr *p_ability_data_mgr; // rcx
  bool isLevelElementAbility; // dl
  int32_t result; // eax
  int32_t i; // [rsp+3Ch] [rbp-B4h]
  std::vector<std::shared_ptr<data::ConfigAbilityMixin>>::iterator __for_begin; // [rsp+40h] [rbp-B0h] BYREF
  std::vector<std::shared_ptr<data::ConfigAbilityMixin>>::iterator __for_end; // [rsp+48h] [rbp-A8h] BYREF
  std::vector<std::shared_ptr<data::ConfigAbilityMixin>> *__for_range; // [rsp+50h] [rbp-A0h]
  data::ConfigAbilityMixinPtr *config_mixin_ptr; // [rsp+58h] [rbp-98h]
  std::enable_shared_from_this<ActorAbility> v25; // [rsp+60h] [rbp-90h] BYREF
  data::ConfigAbilityMixin __r[4]; // [rsp+70h] [rbp-80h] BYREF

  p_M_refcount = (unsigned __int64)&__r[0]._M_weak_this._M_refcount;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      p_M_refcount = v6;
  }
  *(_QWORD *)p_M_refcount = 1102416563LL;
  *(_QWORD *)(p_M_refcount + 8) = "1 32 16 13 mixin_ptr:149";
  *(_QWORD *)(p_M_refcount + 16) = ActorAbility::init;
  v7 = p_M_refcount >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  toThisPtr<Creature>((Creature *)__r);
  std::weak_ptr<Creature>::operator=<Creature>(&this->caster_wtr_, (const std::shared_ptr<Creature> *)__r);
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)__r);
  toThisPtr<data::ConfigAbility>((data::ConfigAbility *)__r);
  std::shared_ptr<data::ConfigAbility>::operator=(
    &this->config_ability_ptr_,
    (std::shared_ptr<data::ConfigAbility> *)__r);
  std::shared_ptr<data::ConfigAbility>::~shared_ptr((std::shared_ptr<data::ConfigAbility> *const)__r);
  std::map<int,std::any>::operator=(&this->override_map_, override_map);
  std::map<int,std::any>::clear(&this->server_override_map_);
  std::vector<std::shared_ptr<ActorModifier>>::clear(&this->owned_modifier_vec_);
  v8 = ActorAbility::getName[abi:cxx11](this);
  StringHash = getStringHash(v8);
  if ( *(_BYTE *)(((unsigned __int64)&this->ability_name_hash_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ability_name_hash_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ability_name_hash_);
  }
  this->ability_name_hash_ = StringHash;
  v10 = override_name_hash;
  if ( *(_BYTE *)(((unsigned __int64)&this->override_name_hash_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->override_name_hash_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->override_name_hash_);
  }
  this->override_name_hash_ = v10;
  std::vector<std::shared_ptr<BaseAbilityMixin>>::clear(&this->mixin_vec_);
  __for_range = &config_ability->ability_mixins;
  __for_begin._M_current = std::vector<std::shared_ptr<data::ConfigAbilityMixin>>::begin(&config_ability->ability_mixins)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<data::ConfigAbilityMixin>>::end(&config_ability->ability_mixins)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<data::ConfigAbilityMixin> *,std::vector<std::shared_ptr<data::ConfigAbilityMixin>>>(
            &__for_begin,
            &__for_end) )
  {
    config_mixin_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigAbilityMixin> *,std::vector<std::shared_ptr<data::ConfigAbilityMixin>>>::operator*(&__for_begin);
    AbilityComp = (ActorAbilityPtr *)Creature::getAbilityComp(caster);
    std::__shared_ptr_access<data::ConfigAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<data::ConfigAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)config_mixin_ptr);
    std::shared_ptr<ActorModifier>::shared_ptr((std::shared_ptr<ActorModifier> *const)__r, 0LL);
    std::enable_shared_from_this<ActorAbility>::shared_from_this(&v25);
    AbilityComp::createAbilityMixin((AbilityComp *const)(p_M_refcount + 32), AbilityComp, (ActorModifierPtr *)&v25, __r);
    std::shared_ptr<ActorAbility>::~shared_ptr((std::shared_ptr<ActorAbility> *const)&v25);
    std::shared_ptr<ActorModifier>::~shared_ptr((std::shared_ptr<ActorModifier> *const)__r);
    if ( std::operator!=<BaseAbilityMixin>((const std::shared_ptr<BaseAbilityMixin> *)(p_M_refcount + 32), 0LL) )
      std::vector<std::shared_ptr<BaseAbilityMixin>>::push_back(
        &this->mixin_vec_,
        (const std::vector<std::shared_ptr<BaseAbilityMixin>>::value_type *)(p_M_refcount + 32));
    std::shared_ptr<BaseAbilityMixin>::~shared_ptr((std::shared_ptr<BaseAbilityMixin> *const)(p_M_refcount + 32));
    __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigAbilityMixin> *,std::vector<std::shared_ptr<data::ConfigAbilityMixin>>>::operator++(&__for_begin);
  }
  for ( i = 0; i < std::vector<std::shared_ptr<BaseAbilityMixin>>::size(&this->mixin_vec_); ++i )
  {
    v12 = (const std::__shared_ptr_access<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false> *)std::vector<std::shared_ptr<BaseAbilityMixin>>::operator[](&this->mixin_vec_, i);
    v13 = std::__shared_ptr_access<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v12);
    BaseAbilityMixin::setInstId(v13, i);
  }
  ActorAbility::refreshServerTalentOverrideMap(this);
  p_ability_data_mgr = &ServiceBox::findService<GameserverService>()->ability_data_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->ability_name_hash_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ability_name_hash_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->ability_name_hash_);
  }
  isLevelElementAbility = AbilityDataMgr::isLevelElementAbility(p_ability_data_mgr, this->ability_name_hash_);
  if ( *(char *)(((unsigned __int64)&this->is_level_element_ability_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_level_element_ability_);
  this->is_level_element_ability_ = isLevelElementAbility;
  result = 0;
  if ( &__r[0]._M_weak_this._M_refcount == (std::__weak_count<(__gnu_cxx::_Lock_policy)2> *)p_M_refcount )
  {
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_refcount = 1172321806LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 164: range 00000000130C5BA0-00000000130C65EC
int32_t __cdecl ActorAbility::toClient(const ActorAbility *const this, proto::AbilityAppliedAbility *proto_ability)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  JsonConfigMgr *p_json_config_mgr; // rcx
  common::milog::MiLogStream *v14; // rax
  JsonConfigMgr *v15; // rcx
  common::milog::MiLogStream *v16; // rax
  int32_t result; // eax
  std::set<unsigned int>::value_type __x; // [rsp+14h] [rbp-19Ch] BYREF
  std::map<int,std::any>::const_iterator __for_begin; // [rsp+18h] [rbp-198h] BYREF
  std::map<int,std::any>::const_iterator __for_end; // [rsp+20h] [rbp-190h] BYREF
  proto::AbilityString *ability_name; // [rsp+28h] [rbp-188h]
  proto::AbilityString *ability_override; // [rsp+30h] [rbp-180h]
  const SecurityConfig *security_config; // [rsp+38h] [rbp-178h]
  const std::map<int,std::any> *__for_range; // [rsp+40h] [rbp-170h]
  const std::pair<int const,std::any> *v25; // [rsp+48h] [rbp-168h]
  std::tuple_element<0,const std::pair<int const,std::any> >::type *key; // [rsp+50h] [rbp-160h]
  std::tuple_element<1,const std::pair<int const,std::any> >::type *value; // [rsp+58h] [rbp-158h]
  proto::AbilityScalarValueEntry *override_entry; // [rsp+60h] [rbp-150h]
  proto::AbilityString *proto_key; // [rsp+68h] [rbp-148h]
  const std::string *key_str; // [rsp+70h] [rbp-140h]
  const std::map<int,std::any> *__for_range_0; // [rsp+78h] [rbp-138h]
  const std::pair<int const,std::any> *v32; // [rsp+80h] [rbp-130h]
  std::tuple_element<0,const std::pair<int const,std::any> >::type *key_0; // [rsp+88h] [rbp-128h]
  std::tuple_element<1,const std::pair<int const,std::any> >::type *value_0; // [rsp+90h] [rbp-120h]
  proto::AbilityScalarValueEntry *override_entry_0; // [rsp+98h] [rbp-118h]
  proto::AbilityString *proto_key_0; // [rsp+A0h] [rbp-110h]
  const std::string *key_str_0; // [rsp+A8h] [rbp-108h]
  std::shared_ptr<Config> v38; // [rsp+B0h] [rbp-100h] BYREF
  common::milog::MiLogStream v39; // [rsp+C0h] [rbp-F0h] BYREF
  char v40[208]; // [rsp+E0h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 16 27 config_ability_impl_ptr:165 80 48 16 override_set:188";
  *(_QWORD *)(v2 + 16) = ActorAbility::toClient;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  ActorAbility::getConfigImpl((const ActorAbility *const)(v2 + 48));
  if ( std::operator==<ConfigAbilityImpl>((const std::shared_ptr<ConfigAbilityImpl> *)(v2 + 48), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/actor_ability.cpp",
      "toClient",
      168);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v39,
      (const char (*)[32])"config_ability_impl_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v39);
    v5 = -1;
  }
  else
  {
    ability_name = proto::AbilityAppliedAbility::mutable_ability_name(proto_ability);
    v6 = std::__shared_ptr_access<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    if ( abilityStringFromStdString(&v6->ability_name, ability_name) )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/actor_ability.cpp",
        "toClient",
        174);
      v7 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
             &v39,
             (const char (*)[48])"abilityStringFromStdString fails, ability_name:");
      v8 = std::__shared_ptr_access<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &v8->ability_name);
      common::milog::MiLogStream::~MiLogStream(&v39);
      v5 = -1;
    }
    else
    {
      v9 = std::__shared_ptr_access<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      if ( std::operator!=<char>(&v9->override_name, "Default")
        && (ability_override = proto::AbilityAppliedAbility::mutable_ability_override(proto_ability),
            v10 = std::__shared_ptr_access<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48)),
            abilityStringFromStdString(&v10->override_name, ability_override)) )
      {
        common::milog::MiLogStream::create(
          &v39,
          &common::milog::MiLogDefault::default_log_obj_,
          0x13u,
          "./src/ability/actor_ability.cpp",
          "toClient",
          182);
        v11 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v39,
                (const char (*)[49])"abilityStringFromStdString fails, override_name:");
        v12 = std::__shared_ptr_access<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &v12->override_name);
        common::milog::MiLogStream::~MiLogStream(&v39);
        v5 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->ability_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->ability_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->ability_id_);
        }
        proto::AbilityAppliedAbility::set_instanced_ability_id(proto_ability, this->ability_id_);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v38);
        security_config = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v38)->security_config;
        std::shared_ptr<Config>::~shared_ptr(&v38);
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 80));
        if ( *(_BYTE *)(((unsigned __int64)&security_config->is_use_server_override_map >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)security_config + 51) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_use_server_override_map >> 3)
                                                                       + 0x7FFF8000) )
        {
          __asan_report_load1(&security_config->is_use_server_override_map);
        }
        if ( security_config->is_use_server_override_map )
        {
          __for_range = &this->server_override_map_;
          __for_begin._M_node = std::map<int,std::any>::begin(&this->server_override_map_)._M_node;
          __for_end._M_node = std::map<int,std::any>::end(&this->server_override_map_)._M_node;
          while ( std::operator!=(&__for_begin, &__for_end) )
          {
            v25 = std::_Rb_tree_const_iterator<std::pair<int const,std::any>>::operator*(&__for_begin);
            key = std::get<0ul,int const,std::any>(v25);
            value = (std::tuple_element<1,const std::pair<int const,std::any> >::type *)std::get<1ul,int const,std::any>(v25);
            override_entry = proto::AbilityAppliedAbility::add_override_map(proto_ability);
            proto_key = proto::AbilityScalarValueEntry::mutable_key(override_entry);
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v38);
            p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v38)->design_config.json_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(key);
            }
            key_str = JsonConfigMgr::getAbilityStringFromHash[abi:cxx11](p_json_config_mgr, *key);
            std::shared_ptr<Config>::~shared_ptr(&v38);
            if ( abilityStringFromStdString(key_str, proto_key) )
            {
              common::milog::MiLogStream::create(
                &v39,
                &common::milog::MiLogDefault::default_log_obj_,
                0x13u,
                "./src/ability/actor_ability.cpp",
                "toClient",
                198);
              v14 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                      &v39,
                      (const char (*)[39])"abilityStringFromStdString fails, key:");
              common::milog::MiLogStream::operator<<<int,(int *)0>(v14, key);
              common::milog::MiLogStream::~MiLogStream(&v39);
              v5 = -1;
              goto LABEL_37;
            }
            anyToScalarValueEntry(value, override_entry);
            if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(key);
            }
            __x = *key;
            std::set<unsigned int>::insert((std::set<unsigned int> *const)(v2 + 80), &__x);
            std::_Rb_tree_const_iterator<std::pair<int const,std::any>>::operator++(&__for_begin);
          }
        }
        __for_range_0 = &this->override_map_;
        __for_begin._M_node = std::map<int,std::any>::begin(&this->override_map_)._M_node;
        __for_end._M_node = std::map<int,std::any>::end(__for_range_0)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          v32 = std::_Rb_tree_const_iterator<std::pair<int const,std::any>>::operator*(&__for_begin);
          key_0 = std::get<0ul,int const,std::any>(v32);
          value_0 = (std::tuple_element<1,const std::pair<int const,std::any> >::type *)std::get<1ul,int const,std::any>(v32);
          if ( *(_BYTE *)(((unsigned __int64)key_0 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)key_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key_0 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(key_0);
          }
          __x = *key_0;
          if ( !std::set<unsigned int>::count((const std::set<unsigned int> *const)(v2 + 80), &__x) )
          {
            override_entry_0 = proto::AbilityAppliedAbility::add_override_map(proto_ability);
            proto_key_0 = proto::AbilityScalarValueEntry::mutable_key(override_entry_0);
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v38);
            v15 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v38)->design_config.json_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)key_0 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)key_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key_0 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(key_0);
            }
            key_str_0 = JsonConfigMgr::getAbilityStringFromHash[abi:cxx11](v15, *key_0);
            std::shared_ptr<Config>::~shared_ptr(&v38);
            if ( abilityStringFromStdString(key_str_0, proto_key_0) )
            {
              common::milog::MiLogStream::create(
                &v39,
                &common::milog::MiLogDefault::default_log_obj_,
                0x13u,
                "./src/ability/actor_ability.cpp",
                "toClient",
                216);
              v16 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                      &v39,
                      (const char (*)[39])"abilityStringFromStdString fails, key:");
              common::milog::MiLogStream::operator<<<int,(int *)0>(v16, key_0);
              common::milog::MiLogStream::~MiLogStream(&v39);
              v5 = -1;
              goto LABEL_37;
            }
            anyToScalarValueEntry(value_0, override_entry_0);
          }
          std::_Rb_tree_const_iterator<std::pair<int const,std::any>>::operator++(&__for_begin);
        }
        v5 = 0;
LABEL_37:
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 80));
      }
    }
  }
  std::shared_ptr<ConfigAbilityImpl>::~shared_ptr((std::shared_ptr<ConfigAbilityImpl> *const)(v2 + 48));
  result = v5;
  if ( v40 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
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

// Line 226: range 00000000130C65EE-00000000130C663C
ConfigAbilityImplPtr __cdecl ActorAbility::getConfigImpl(const ActorAbility *const this)
{
  ConfigAbilityImplPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<ConfigAbilityImpl,data::ConfigAbility>((const std::shared_ptr<data::ConfigAbility> *)this);
  result._M_ptr = (std::__shared_ptr<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 231: range 00000000130C663E-00000000130C665F
data::ConfigAbility *__cdecl ActorAbility::getConfigRef(ActorAbility *const this)
{
  return (data::ConfigAbility *)ActorAbility::getConfigRef(this);
};

// Line 237: range 00000000130C6660-00000000130C6797
const data::ConfigAbility *__cdecl ActorAbility::getConfigRef(const ActorAbility *const this)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( !std::operator==<data::ConfigAbility>(&this->config_ability_ptr_, 0LL) )
    return std::__shared_ptr_access<data::ConfigAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<data::ConfigAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->config_ability_ptr_);
  common::milog::MiLogStream::create(
    &v2,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/ability/actor_ability.cpp",
    "getConfigRef",
    240);
  common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
    &v2,
    (const char (*)[28])"config_ability_ptr_ is null");
  common::milog::MiLogStream::~MiLogStream(&v2);
  if ( !(_BYTE)`guard variable for'ActorAbility::getConfigRef(void)::empty_config )
  {
    if ( __cxa_guard_acquire(&`guard variable for'ActorAbility::getConfigRef(void)::empty_config) )
    {
      data::ConfigAbility::ConfigAbility(&ActorAbility::getConfigRef(void)const::empty_config);
      __cxa_guard_release(&`guard variable for'ActorAbility::getConfigRef(void)::empty_config);
      __cxa_atexit(
        (void (__fastcall *)(void *))data::ConfigAbility::~ConfigAbility,
        &ActorAbility::getConfigRef(void)const::empty_config,
        &_dso_handle);
    }
  }
  return &ActorAbility::getConfigRef(void)const::empty_config;
};

// Line 249: range 00000000130C6798-00000000130C68F1
uint32_t __cdecl ActorAbility::addModifier(ActorAbility *const this, ActorModifier *modifier)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t result; // eax
  uint32_t index; // [rsp+1Ch] [rbp-84h]
  std::shared_ptr<ActorModifier> p_t; // [rsp+20h] [rbp-80h] BYREF
  char v8[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 16 modifier_ptr:250";
  *(_QWORD *)(v2 + 16) = ActorAbility::addModifier;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  toThisPtr<ActorModifier>((ActorModifier *)(v2 + 32));
  std::shared_ptr<ActorModifier>::shared_ptr(&p_t, (const std::shared_ptr<ActorModifier> *)(v2 + 32));
  index = common::tools::MiscUtils::seekThenAdd<std::shared_ptr<ActorModifier>>(&this->owned_modifier_vec_, &p_t);
  std::shared_ptr<ActorModifier>::~shared_ptr(&p_t);
  std::shared_ptr<ActorModifier>::~shared_ptr((std::shared_ptr<ActorModifier> *const)(v2 + 32));
  result = index;
  if ( v8 == (char *)v2 )
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

// Line 257: range 00000000130C68F2-00000000130C6AD1
__int64 __fastcall ActorAbility::delModifier(ActorAbility *const this, uint32_t idx)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::vector<std::shared_ptr<ActorModifier>>::size_type v5; // r15
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  std::shared_ptr<ActorModifier> *v8; // rax
  std::shared_ptr<ActorModifier> __r; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-90h] BYREF
  char v11[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 idx:256";
  *(_QWORD *)(v2 + 16) = ActorAbility::delModifier;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = idx;
  v5 = *(unsigned int *)(v2 + 32);
  if ( v5 < std::vector<std::shared_ptr<ActorModifier>>::size(&this->owned_modifier_vec_) )
  {
    std::shared_ptr<ActorModifier>::shared_ptr(&__r, 0LL);
    v8 = std::vector<std::shared_ptr<ActorModifier>>::operator[](&this->owned_modifier_vec_, *(unsigned int *)(v2 + 32));
    std::shared_ptr<ActorModifier>::operator=(v8, &__r);
    std::shared_ptr<ActorModifier>::~shared_ptr(&__r);
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/actor_ability.cpp",
      "delModifier",
      260);
    v6 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v10, (const char (*)[13])"invalid idx:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = 0xFFFFFFFFLL;
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
  return result;
};

// Line 269: range 00000000130C6AD2-00000000130C73B2
float __cdecl ActorAbility::evaluateFloatSpecial(
        ActorAbility *const this,
        const std::string *key,
        CreaturePtr *p_global_value_source_ptr,
        DieCreatureRecordPtr *p_record_ptr)
{
  __m128i v4; // xmm0
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r14
  std::_Rb_tree_iterator<std::pair<int const,std::any> >::pointer v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  float v14; // r13d
  std::_Rb_tree_iterator<std::pair<int const,std::any> >::pointer v15; // rax
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  Creature *v21; // rax
  AbilityComp *v22; // rdx
  Creature *v24; // rax
  AbilityComp *AbilityComp; // rdx
  DieCreatureRecord *v26; // rdx
  DieCreatureRecord *v28; // rdx
  std::unordered_map<std::string,data::DynamicArgument>::mapped_type *v29; // rax
  Creature *v30; // rax
  AbilityComp *v31; // rdx
  Creature *v33; // rax
  AbilityComp *v34; // rdx
  char v35; // r13
  char v36; // r15
  const char *v37; // rax
  const char *v38; // rax
  Creature *v39; // rax
  FightPropComp *FightPropComp; // rax
  float result; // xmm0_4
  bool v42; // [rsp+Fh] [rbp-121h]
  std::allocator<char> __a; // [rsp+33h] [rbp-FDh] BYREF
  uint32_t key_hash; // [rsp+34h] [rbp-FCh]
  std::_Rb_tree_iterator<std::pair<int const,std::any> >::_Self __y; // [rsp+38h] [rbp-F8h] BYREF
  const SecurityConfig *security_config; // [rsp+40h] [rbp-F0h]
  data::ConfigAbility *config_ability; // [rsp+48h] [rbp-E8h]
  std::any v50; // [rsp+50h] [rbp-E0h] BYREF
  common::milog::MiLogStream v51; // [rsp+60h] [rbp-D0h] BYREF
  char v52[176]; // [rsp+80h] [rbp-B0h] BYREF

  v5 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 32 4 19 fight_prop_type:318 48 4 16 client_value:278 64 8 6 it:287 96 16 14 caster_ptr:307";
  *(_QWORD *)(v5 + 16) = ActorAbility::evaluateFloatSpecial;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -218959360;
  v7[536862723] = -202178560;
  key_hash = getStringHash(key);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v50);
  security_config = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v50)->security_config;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v50);
  if ( *(_BYTE *)(((unsigned __int64)&security_config->is_use_server_override_map >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config + 51) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_use_server_override_map >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load1(&security_config->is_use_server_override_map);
  }
  if ( security_config->is_use_server_override_map
    && (*(_DWORD *)(v5 + 48) = key_hash,
        *(std::map<int,std::any>::iterator *)(v5 + 64) = std::map<int,std::any>::find(
                                                           &this->server_override_map_,
                                                           (const std::map<int,std::any>::key_type *)(v5 + 48)),
        __y._M_node = std::map<int,std::any>::end(&this->server_override_map_)._M_node,
        std::operator!=((const std::_Rb_tree_iterator<std::pair<int const,std::any> >::_Self *)(v5 + 64), &__y)) )
  {
    v8 = std::_Rb_tree_iterator<std::pair<int const,std::any>>::operator->((const std::_Rb_tree_iterator<std::pair<int const,std::any> > *const)(v5 + 64));
    *(float *)v4.m128i_i32 = safeAnyCast<float>(&v8->second);
    *(_DWORD *)(v5 + 32) = _mm_cvtsi128_si32(v4);
    *(float *)v4.m128i_i32 = ActorAbility::getFloatParam(this, key);
    *(_DWORD *)(v5 + 48) = _mm_cvtsi128_si32(v4);
    if ( std::fabs(*(float *)(v5 + 32) - *(float *)(v5 + 48)) > 0.00000011920929 )
    {
      common::milog::MiLogStream::create(
        &v51,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/actor_ability.cpp",
        "evaluateFloatSpecial",
        281);
      v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v51, (const char (*)[14])"override key=");
      v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, key);
      v11 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v10, (const char (*)[15])" server_value=");
      v12 = common::milog::MiLogStream::operator<<<float,(float *)0>(v11, (const float *)(v5 + 32));
      v13 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v12, (const char (*)[15])" client_value=");
      common::milog::MiLogStream::operator<<<float,(float *)0>(v13, (const float *)(v5 + 48));
      common::milog::MiLogStream::~MiLogStream(&v51);
    }
    v14 = *(float *)(v5 + 32);
  }
  else
  {
    config_ability = ActorAbility::getConfigRef(this);
    *(_DWORD *)(v5 + 48) = key_hash;
    *(std::map<int,std::any>::iterator *)(v5 + 64) = std::map<int,std::any>::find(
                                                       &this->override_map_,
                                                       (const std::map<int,std::any>::key_type *)(v5 + 48));
    __y._M_node = std::map<int,std::any>::end(&this->override_map_)._M_node;
    if ( std::operator!=((const std::_Rb_tree_iterator<std::pair<int const,std::any> >::_Self *)(v5 + 64), &__y) )
    {
      v15 = std::_Rb_tree_iterator<std::pair<int const,std::any>>::operator->((const std::_Rb_tree_iterator<std::pair<int const,std::any> > *const)(v5 + 64));
      *(float *)v4.m128i_i32 = safeAnyCast<float>(&v15->second);
      *(_DWORD *)(v5 + 32) = _mm_cvtsi128_si32(v4);
      *(float *)v4.m128i_i32 = ActorAbility::getServerOverrideOrSpecialParam(this, key);
      *(_DWORD *)(v5 + 48) = _mm_cvtsi128_si32(v4);
      if ( std::fabs(*(float *)(v5 + 32) - *(float *)(v5 + 48)) > 0.00000011920929 )
      {
        common::milog::MiLogStream::create(
          &v51,
          &common::milog::MiLogDefault::default_log_obj_,
          0x13u,
          "./src/ability/actor_ability.cpp",
          "evaluateFloatSpecial",
          294);
        v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v51, (const char (*)[14])"override key=");
        v17 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, key);
        v18 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v17, (const char (*)[15])" server_value=");
        v19 = common::milog::MiLogStream::operator<<<float,(float *)0>(v18, (const float *)(v5 + 48));
        v20 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v19, (const char (*)[15])" client_value=");
        common::milog::MiLogStream::operator<<<float,(float *)0>(v20, (const float *)(v5 + 32));
        common::milog::MiLogStream::~MiLogStream(&v51);
      }
      v14 = *(float *)(v5 + 32);
    }
    else if ( std::operator!=<Creature>(p_global_value_source_ptr, 0LL)
           && (v21 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_global_value_source_ptr),
               v22 = Creature::getAbilityComp(v21),
               AbilityComp::hasDynamicValue(v22, key)) )
    {
      v24 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_global_value_source_ptr);
      AbilityComp = Creature::getAbilityComp(v24);
      *(float *)v4.m128i_i32 = AbilityComp::getDynamicValue<float>(AbilityComp, key);
      v14 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
    }
    else if ( std::operator!=<DieCreatureRecord>(p_record_ptr, 0LL)
           && (v26 = std::__shared_ptr_access<DieCreatureRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DieCreatureRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_record_ptr),
               DieCreatureRecord::hasGlobalValue(v26, key)) )
    {
      v28 = std::__shared_ptr_access<DieCreatureRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DieCreatureRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_record_ptr);
      *(float *)v4.m128i_i32 = DieCreatureRecord::getGlobalValue(v28, key);
      v14 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
    }
    else
    {
      ActorAbility::getCaster((ActorAbility *const)(v5 + 96));
      if ( common::tools::MiscUtils::isContains<std::unordered_map<std::string,data::DynamicArgument>,std::string>(
             &config_ability->ability_specials,
             key) )
      {
        v29 = std::unordered_map<std::string,data::DynamicArgument>::operator[](&config_ability->ability_specials, key);
        *(float *)v4.m128i_i32 = safeAnyCast<float>(&v29->value);
        v14 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
      }
      else if ( std::operator!=<Creature>(0LL, (const std::shared_ptr<Creature> *)(v5 + 96))
             && (v30 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96)),
                 v31 = Creature::getAbilityComp(v30),
                 AbilityComp::hasDynamicValue(v31, key)) )
      {
        v33 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
        v34 = Creature::getAbilityComp(v33);
        *(float *)v4.m128i_i32 = AbilityComp::getDynamicValue<float>(v34, key);
        v14 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
      }
      else
      {
        v35 = 0;
        v36 = 0;
        v42 = 0;
        if ( std::operator!=<Creature>(0LL, (const std::shared_ptr<Creature> *)(v5 + 96)) )
        {
          std::allocator<char>::allocator(&__a);
          v35 = 1;
          v37 = (const char *)std::string::c_str(key);
          std::string::basic_string<std::allocator<char>>((std::string *const)&v51, v37, &__a);
          v36 = 1;
          if ( data::isValidFightPropTypeName((const std::string *)&v51) )
            v42 = 1;
        }
        if ( v36 )
          std::string::~string(&v51);
        if ( v35 )
          std::allocator<char>::~allocator(&__a);
        if ( v42
          && (*(_DWORD *)(v5 + 32) = 0,
              v38 = (const char *)std::string::c_str(key),
              data::enumNameToVal(v38, (data::FightPropType *)(v5 + 32)),
              *(_DWORD *)(v5 + 32)) )
        {
          v39 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
          FightPropComp = Creature::getFightPropComp(v39);
          *(float *)v4.m128i_i32 = FightPropComp::getPropValue(FightPropComp, *(data::FightPropType *)(v5 + 32), 1);
          *(_DWORD *)(v5 + 48) = _mm_cvtsi128_si32(v4);
          std::any::any<float,float,std::any::_Manager_internal<float>,true,true>(&v50, (float *)(v5 + 48));
          *(float *)v4.m128i_i32 = safeAnyCast<float>(&v50);
          v14 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
          std::any::~any(&v50);
        }
        else
        {
          v14 = 0.0;
        }
      }
      std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v5 + 96));
    }
  }
  result = v14;
  if ( v52 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 329: range 00000000130C73B4-00000000130C750B
float __cdecl ActorAbility::getServerOverrideOrSpecialParam(ActorAbility *const this, const std::string *key)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::_Rb_tree_iterator<std::pair<int const,std::any> >::pointer v5; // rax
  float result; // xmm0_4
  std::map<int,std::any>::key_type __x; // [rsp+14h] [rbp-7Ch] BYREF
  std::_Rb_tree_iterator<std::pair<int const,std::any> >::_Self __y; // [rsp+18h] [rbp-78h] BYREF
  char v9[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 iter:330";
  *(_QWORD *)(v2 + 16) = ActorAbility::getServerOverrideOrSpecialParam;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  __x = getStringHash(key);
  *(std::map<int,std::any>::iterator *)(v2 + 32) = std::map<int,std::any>::find(&this->server_override_map_, &__x);
  __y._M_node = std::map<int,std::any>::end(&this->server_override_map_)._M_node;
  if ( std::operator!=((const std::_Rb_tree_iterator<std::pair<int const,std::any> >::_Self *)(v2 + 32), &__y) )
  {
    v5 = std::_Rb_tree_iterator<std::pair<int const,std::any>>::operator->((const std::_Rb_tree_iterator<std::pair<int const,std::any> > *const)(v2 + 32));
    result = safeAnyCast<float>(&v5->second);
  }
  else
  {
    result = ActorAbility::getSpecialFloatParam(this, key);
  }
  if ( v9 == (char *)v2 )
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

// Line 340: range 00000000130C750C-00000000130C7B49
float __cdecl ActorAbility::evaluate(
        ActorAbility *const this,
        DFNodePtr *p_node_ptr,
        CreaturePtr *p_global_value_source_ptr,
        DieCreatureRecordPtr *p_record_ptr)
{
  __m128i v4; // xmm0
  std::shared_ptr<BaseDFNode> *v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r14
  int value_low; // r13d
  std::__shared_ptr_access<FixedDFNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::string *p_key; // rsi
  std::__shared_ptr_access<BinOpDFNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<BinOpDFNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<BinOpDFNode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  int op_type; // eax
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  __m128i v18; // xmm0
  float result; // xmm0_4
  float left_value; // [rsp+28h] [rbp-108h]
  float right_value; // [rsp+2Ch] [rbp-104h]
  std::shared_ptr<BaseDFNode> v24; // [rsp+30h] [rbp-100h] BYREF
  std::shared_ptr<Creature> v25; // [rsp+40h] [rbp-F0h] BYREF
  std::shared_ptr<DieCreatureRecord> v26; // [rsp+50h] [rbp-E0h] BYREF
  common::milog::MiLogStream v27; // [rsp+60h] [rbp-D0h] BYREF
  char v28[176]; // [rsp+80h] [rbp-B0h] BYREF

  v5 = (std::shared_ptr<BaseDFNode> *)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = (std::shared_ptr<BaseDFNode> *)v6;
  }
  v5->_M_ptr = (std::__shared_ptr<BaseDFNode,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v5->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"3 32 16 13 fixed_ptr:345 64 16 15 dynamic"
                                                                               "_ptr:350 96 16 13 binop_ptr:355";
  v5[1]._M_ptr = (std::__shared_ptr<BaseDFNode,(__gnu_cxx::_Lock_policy)2>::element_type *)ActorAbility::evaluate;
  v7 = (_DWORD *)((unsigned __int64)v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219021312;
  v7[536862722] = -219021312;
  v7[536862723] = -202178560;
  if ( std::operator==<BaseDFNode>(p_node_ptr, 0LL) )
  {
    value_low = 0;
    goto LABEL_31;
  }
  std::dynamic_pointer_cast<FixedDFNode,BaseDFNode>(v5 + 2);
  if ( std::operator!=<FixedDFNode>((const std::shared_ptr<FixedDFNode> *)&v5[2], 0LL) )
  {
    v9 = std::__shared_ptr_access<FixedDFNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FixedDFNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[2]);
    if ( *(_BYTE *)(((unsigned __int64)&v9->value >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v9->value >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v9->value);
    }
    value_low = LODWORD(v9->value);
    goto LABEL_30;
  }
  std::dynamic_pointer_cast<DynamicDFNode,BaseDFNode>(v5 + 4);
  if ( !std::operator!=<DynamicDFNode>((const std::shared_ptr<DynamicDFNode> *)&v5[4], 0LL) )
  {
    std::dynamic_pointer_cast<BinOpDFNode,BaseDFNode>(v5 + 6);
    if ( !std::operator!=<BinOpDFNode>((const std::shared_ptr<BinOpDFNode> *)&v5[6], 0LL) )
      goto LABEL_27;
    std::shared_ptr<DieCreatureRecord>::shared_ptr(&v26, p_record_ptr);
    std::shared_ptr<Creature>::shared_ptr(&v25, p_global_value_source_ptr);
    v11 = std::__shared_ptr_access<BinOpDFNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BinOpDFNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[6]);
    std::shared_ptr<BaseDFNode>::shared_ptr(&v24, &v11->left_ptr);
    *(float *)v4.m128i_i32 = ActorAbility::evaluate(this, &v24, &v25, &v26);
    left_value = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
    std::shared_ptr<BaseDFNode>::~shared_ptr(&v24);
    std::shared_ptr<Creature>::~shared_ptr(&v25);
    std::shared_ptr<DieCreatureRecord>::~shared_ptr(&v26);
    std::shared_ptr<DieCreatureRecord>::shared_ptr(&v26, p_record_ptr);
    std::shared_ptr<Creature>::shared_ptr(&v25, p_global_value_source_ptr);
    v12 = std::__shared_ptr_access<BinOpDFNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BinOpDFNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[6]);
    std::shared_ptr<BaseDFNode>::shared_ptr(&v24, &v12->right_ptr);
    *(float *)v4.m128i_i32 = ActorAbility::evaluate(this, &v24, &v25, &v26);
    right_value = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
    std::shared_ptr<BaseDFNode>::~shared_ptr(&v24);
    std::shared_ptr<Creature>::~shared_ptr(&v25);
    std::shared_ptr<DieCreatureRecord>::~shared_ptr(&v26);
    v13 = std::__shared_ptr_access<BinOpDFNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BinOpDFNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[6]);
    if ( *(_BYTE *)(((unsigned __int64)&v13->op_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v13->op_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v13->op_type);
    }
    op_type = v13->op_type;
    if ( op_type == 12 )
    {
      if ( CommonMiscs::isAlmostZero(right_value, 0.000099999997) )
      {
        value_low = LODWORD(left_value);
      }
      else
      {
        v18 = (__m128i)LODWORD(left_value);
        *(float *)v18.m128i_i32 = left_value / right_value;
        value_low = _mm_cvtsi128_si32(v18);
      }
      goto LABEL_28;
    }
    if ( op_type > 12 )
      goto LABEL_27;
    if ( op_type == 11 )
    {
      v17 = (__m128i)LODWORD(left_value);
      *(float *)v17.m128i_i32 = left_value * right_value;
      value_low = _mm_cvtsi128_si32(v17);
    }
    else if ( op_type )
    {
      if ( op_type != 1 )
      {
LABEL_27:
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          0x13u,
          "./src/ability/actor_ability.cpp",
          "evaluate",
          374);
        common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v27, (const char (*)[17])"invalid node_ptr");
        common::milog::MiLogStream::~MiLogStream(&v27);
        value_low = 0;
        goto LABEL_28;
      }
      v16 = (__m128i)LODWORD(left_value);
      *(float *)v16.m128i_i32 = left_value - right_value;
      value_low = _mm_cvtsi128_si32(v16);
    }
    else
    {
      v15 = (__m128i)LODWORD(left_value);
      *(float *)v15.m128i_i32 = left_value + right_value;
      value_low = _mm_cvtsi128_si32(v15);
    }
LABEL_28:
    std::shared_ptr<BinOpDFNode>::~shared_ptr((std::shared_ptr<BinOpDFNode> *const)&v5[6]);
    goto LABEL_29;
  }
  std::shared_ptr<DieCreatureRecord>::shared_ptr(&v26, p_record_ptr);
  std::shared_ptr<Creature>::shared_ptr(&v25, p_global_value_source_ptr);
  p_key = &std::__shared_ptr_access<DynamicDFNode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicDFNode,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5[4])->key;
  *(float *)v4.m128i_i32 = ActorAbility::evaluateFloatSpecial(this, p_key, &v25, &v26);
  value_low = _mm_cvtsi128_si32(v4);
  std::shared_ptr<Creature>::~shared_ptr(&v25);
  std::shared_ptr<DieCreatureRecord>::~shared_ptr(&v26);
LABEL_29:
  std::shared_ptr<DynamicDFNode>::~shared_ptr((std::shared_ptr<DynamicDFNode> *const)&v5[4]);
LABEL_30:
  std::shared_ptr<FixedDFNode>::~shared_ptr((std::shared_ptr<FixedDFNode> *const)&v5[2]);
LABEL_31:
  result = *(float *)&value_low;
  if ( v28 == (char *)v5 )
  {
    *(_QWORD *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)(((unsigned __int64)v5 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    v5->_M_ptr = (std::__shared_ptr<BaseDFNode,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 379: range 00000000130C7B4A-00000000130C7D7E
float __cdecl ActorAbility::evaluate(
        ActorAbility *const this,
        const data::DynamicFloat *dynamic_float,
        CreaturePtr *p_global_value_source_ptr,
        DieCreatureRecordPtr *p_record_ptr)
{
  __m128i v4; // xmm0
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  float fixed_value; // r14d
  float result; // xmm0_4
  std::shared_ptr<BaseDFNode> p_node_ptr; // [rsp+20h] [rbp-A0h] BYREF
  std::shared_ptr<Creature> v13; // [rsp+30h] [rbp-90h] BYREF
  std::shared_ptr<DieCreatureRecord> v14; // [rsp+40h] [rbp-80h] BYREF
  char v15[112]; // [rsp+50h] [rbp-70h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 16 12 node_ptr:380";
  *(_QWORD *)(v5 + 16) = ActorAbility::evaluate;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  tryAnyCast<std::shared_ptr<BaseDFNode>>((const std::any *)(v5 + 32));
  if ( std::operator!=<BaseDFNode>(0LL, (const std::shared_ptr<BaseDFNode> *)(v5 + 32)) )
  {
    std::shared_ptr<DieCreatureRecord>::shared_ptr(&v14, p_record_ptr);
    std::shared_ptr<Creature>::shared_ptr(&v13, p_global_value_source_ptr);
    std::shared_ptr<BaseDFNode>::shared_ptr(&p_node_ptr, (const std::shared_ptr<BaseDFNode> *)(v5 + 32));
    *(float *)v4.m128i_i32 = ActorAbility::evaluate(this, &p_node_ptr, &v13, &v14);
    fixed_value = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
    std::shared_ptr<BaseDFNode>::~shared_ptr(&p_node_ptr);
    std::shared_ptr<Creature>::~shared_ptr(&v13);
    std::shared_ptr<DieCreatureRecord>::~shared_ptr(&v14);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)dynamic_float >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)dynamic_float >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(dynamic_float);
    }
    fixed_value = dynamic_float->fixed_value;
  }
  std::shared_ptr<BaseDFNode>::~shared_ptr((std::shared_ptr<BaseDFNode> *const)(v5 + 32));
  result = fixed_value;
  if ( v15 == (char *)v5 )
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

// Line 390: range 00000000130C7D80-00000000130C80B9
int32_t __cdecl ActorAbility::evaluate(ActorAbility *const this, const data::DynamicInt *dynamic_int)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t result; // eax
  std::_Rb_tree_iterator<std::pair<int const,std::any> >::pointer v6; // rax
  std::unordered_map<std::string,data::DynamicArgument>::mapped_type *v7; // rax
  std::map<int,std::any>::key_type __x; // [rsp+18h] [rbp-98h] BYREF
  uint32_t key_hash; // [rsp+1Ch] [rbp-94h]
  std::_Rb_tree_iterator<std::pair<int const,std::any> >::_Self __y; // [rsp+20h] [rbp-90h] BYREF
  const SecurityConfig *security_config; // [rsp+28h] [rbp-88h]
  data::ConfigAbility *config_ability; // [rsp+30h] [rbp-80h]
  std::any *value; // [rsp+38h] [rbp-78h]
  std::shared_ptr<Config> v14; // [rsp+40h] [rbp-70h] BYREF
  char v15[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 6 it:406";
  *(_QWORD *)(v2 + 16) = ActorAbility::evaluate;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( *(char *)(((unsigned __int64)dynamic_int >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(dynamic_int);
  if ( !dynamic_int->is_dynamic )
  {
    if ( *(_BYTE *)(((unsigned __int64)&dynamic_int->fixed_value >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&dynamic_int->fixed_value >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&dynamic_int->fixed_value);
    }
    result = dynamic_int->fixed_value;
  }
  else
  {
    key_hash = getStringHash(&dynamic_int->dynamic_key);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v14);
    security_config = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->security_config;
    std::shared_ptr<Config>::~shared_ptr(&v14);
    if ( *(_BYTE *)(((unsigned __int64)&security_config->is_use_server_override_map >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)security_config + 51) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_use_server_override_map >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load1(&security_config->is_use_server_override_map);
    }
    if ( security_config->is_use_server_override_map
      && (__x = key_hash,
          *(std::map<int,std::any>::iterator *)(v2 + 32) = std::map<int,std::any>::find(
                                                             &this->server_override_map_,
                                                             &__x),
          __y._M_node = std::map<int,std::any>::end(&this->server_override_map_)._M_node,
          std::operator!=((const std::_Rb_tree_iterator<std::pair<int const,std::any> >::_Self *)(v2 + 32), &__y)) )
    {
      v6 = std::_Rb_tree_iterator<std::pair<int const,std::any>>::operator->((const std::_Rb_tree_iterator<std::pair<int const,std::any> > *const)(v2 + 32));
      result = safeAnyCast<int>(&v6->second);
    }
    else
    {
      __x = key_hash;
      *(std::map<int,std::any>::iterator *)(v2 + 32) = std::map<int,std::any>::find(&this->override_map_, &__x);
      __y._M_node = std::map<int,std::any>::end(&this->override_map_)._M_node;
      if ( std::operator!=((const std::_Rb_tree_iterator<std::pair<int const,std::any> >::_Self *)(v2 + 32), &__y) )
      {
        value = &std::_Rb_tree_iterator<std::pair<int const,std::any>>::operator->((const std::_Rb_tree_iterator<std::pair<int const,std::any> > *const)(v2 + 32))->second;
        result = safeAnyCast<int>(value);
      }
      else
      {
        config_ability = ActorAbility::getConfigRef(this);
        v7 = std::unordered_map<std::string,data::DynamicArgument>::operator[](
               &config_ability->ability_specials,
               &dynamic_int->dynamic_key);
        result = safeAnyCast<int>(&v7->value);
      }
    }
  }
  if ( v15 == (char *)v2 )
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

// Line 419: range 00000000130C80BA-00000000130C8540
std::string *__cdecl ActorAbility::evaluate[abi:cxx11](
        std::string *retstr,
        ActorAbility *const this,
        const data::DynamicString *dynamic_str)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::any *p_second; // rsi
  const std::any *v7; // rdi
  std::map<int,std::any>::key_type __x; // [rsp+28h] [rbp-98h] BYREF
  uint32_t key_hash; // [rsp+2Ch] [rbp-94h]
  std::_Rb_tree_iterator<std::pair<int const,std::any> >::_Self __y; // [rsp+30h] [rbp-90h] BYREF
  const SecurityConfig *security_config; // [rsp+38h] [rbp-88h]
  data::ConfigAbility *config_ability; // [rsp+40h] [rbp-80h]
  std::any *value; // [rsp+48h] [rbp-78h]
  std::shared_ptr<Config> v17; // [rsp+50h] [rbp-70h] BYREF
  char v18[96]; // [rsp+60h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 6 it:435";
  *(_QWORD *)(v3 + 16) = ActorAbility::evaluate[abi:cxx11];
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  if ( *(char *)(((unsigned __int64)dynamic_str >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(dynamic_str);
  if ( !dynamic_str->is_dynamic )
  {
    std::string::basic_string(retstr, &dynamic_str->fixed_value);
  }
  else
  {
    key_hash = getStringHash(&dynamic_str->dynamic_key);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v17);
    security_config = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->security_config;
    std::shared_ptr<Config>::~shared_ptr(&v17);
    if ( *(_BYTE *)(((unsigned __int64)&security_config->is_use_server_override_map >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)security_config + 51) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_use_server_override_map >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load1(&security_config->is_use_server_override_map);
    }
    if ( security_config->is_use_server_override_map
      && (__x = key_hash,
          *(std::map<int,std::any>::iterator *)(v3 + 32) = std::map<int,std::any>::find(
                                                             &this->server_override_map_,
                                                             &__x),
          __y._M_node = std::map<int,std::any>::end(&this->server_override_map_)._M_node,
          std::operator!=((const std::_Rb_tree_iterator<std::pair<int const,std::any> >::_Self *)(v3 + 32), &__y)) )
    {
      p_second = &std::_Rb_tree_iterator<std::pair<int const,std::any>>::operator->((const std::_Rb_tree_iterator<std::pair<int const,std::any> > *const)(v3 + 32))->second;
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity
                                                              + 15) >> 3)
                                                            + 0x7FFF8000) )
      {
        p_second = (std::any *)32;
        __asan_report_store_n(retstr, 32LL);
      }
      safeAnyCast<std::string>(retstr, p_second);
    }
    else
    {
      __x = key_hash;
      *(std::map<int,std::any>::iterator *)(v3 + 32) = std::map<int,std::any>::find(&this->override_map_, &__x);
      __y._M_node = std::map<int,std::any>::end(&this->override_map_)._M_node;
      if ( std::operator!=((const std::_Rb_tree_iterator<std::pair<int const,std::any> >::_Self *)(v3 + 32), &__y) )
      {
        value = &std::_Rb_tree_iterator<std::pair<int const,std::any>>::operator->((const std::_Rb_tree_iterator<std::pair<int const,std::any> > *const)(v3 + 32))->second;
        if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity
                                                                + 15) >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_store_n(retstr, 32LL);
        }
        safeAnyCast<std::string>(retstr, value);
      }
      else
      {
        config_ability = ActorAbility::getConfigRef(this);
        v7 = (const std::any *)std::unordered_map<std::string,data::DynamicArgument>::operator[](
                                 &config_ability->ability_specials,
                                 &dynamic_str->dynamic_key);
        if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity
                                                                + 15) >> 3)
                                                              + 0x7FFF8000) )
        {
          v7 = (const std::any *)retstr;
          __asan_report_store_n(retstr, 32LL);
        }
        safeAnyCast<std::string>(retstr, v7);
      }
    }
  }
  if ( v18 == (char *)v3 )
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

// Line 448: range 00000000130C8542-00000000130C854C
void __cdecl ActorAbility::attach(ActorAbility *const this)
{
  ;
};

// Line 454: range 00000000130C854E-00000000130C8568
void __cdecl ActorAbility::detach(ActorAbility *const this)
{
  BaseActorActionContext::detachFromOwner(this);
};

// Line 460: range 00000000130C856A-00000000130C8BEB
int32_t __cdecl ActorAbility::initOverrideMapByOwnerAvatar(ActorAbility *const this, Avatar *owner_avatar)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  std::tuple_element<2,const std::tuple<std::string,int,float> >::type *v6; // rax
  double v7; // xmm0_8
  const AbilityComp *AbilityComp; // rdi
  uint32_t v9; // r8d
  float *v10; // r8
  float *v11; // r8
  int (**vptr_BaseActorActionContext)(...); // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // r15
  char v18; // r14
  unsigned __int64 v19; // rax
  void (__fastcall **v20)(common::milog::MiLogStream *, unsigned __int64); // rdx
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+27h] [rbp-129h] BYREF
  std::vector<std::tuple<std::string,int,float>>::iterator __for_begin; // [rsp+28h] [rbp-128h] BYREF
  std::vector<std::tuple<std::string,int,float>>::iterator __for_end; // [rsp+30h] [rbp-120h] BYREF
  std::vector<std::tuple<std::string,int,float>> *__for_range; // [rsp+38h] [rbp-118h]
  const std::tuple<std::string,int,float> *v27; // [rsp+40h] [rbp-110h]
  std::tuple_element<0,const std::tuple<std::string,int,float> >::type *ability_special_name; // [rsp+48h] [rbp-108h]
  std::tuple_element<1,const std::tuple<std::string,int,float> >::type *ability_special_name_hash; // [rsp+50h] [rbp-100h]
  std::tuple_element<2,const std::tuple<std::string,int,float> >::type *default_ability_special; // [rsp+58h] [rbp-F8h]
  common::milog::MiLogStream v31; // [rsp+60h] [rbp-F0h] BYREF
  common::milog::MiLogStream v32; // [rsp+80h] [rbp-D0h] BYREF
  char v33[176]; // [rsp+A0h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 new_value:472 64 16 14 config_ptr:461 96 16 13 owner_ptr:481";
  *(_QWORD *)(v2 + 16) = ActorAbility::initOverrideMapByOwnerAvatar;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  ActorAbility::getConfigImpl((const ActorAbility *const)(v2 + 64));
  if ( std::operator==<ConfigAbilityImpl>((const std::shared_ptr<ConfigAbilityImpl> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/actor_ability.cpp",
      "initOverrideMapByOwnerAvatar",
      464);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v32, (const char (*)[19])"config_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v32);
    v5 = -1;
  }
  else
  {
    std::map<int,std::any>::clear(&this->override_map_);
    std::map<int,std::any>::clear(&this->server_override_map_);
    __for_range = &std::__shared_ptr_access<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64))->ability_special_vec;
    __for_begin._M_current = std::vector<std::tuple<std::string,int,float>>::begin(__for_range)._M_current;
    __for_end._M_current = std::vector<std::tuple<std::string,int,float>>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<std::tuple<std::string,int,float> *,std::vector<std::tuple<std::string,int,float>>>(
              &__for_begin,
              &__for_end) )
    {
      v27 = __gnu_cxx::__normal_iterator<std::tuple<std::string,int,float> *,std::vector<std::tuple<std::string,int,float>>>::operator*(&__for_begin);
      ability_special_name = (std::tuple_element<0,const std::tuple<std::string,int,float> >::type *)std::get<0ul,std::string,int,float>(v27);
      ability_special_name_hash = (std::tuple_element<1,const std::tuple<std::string,int,float> >::type *)std::get<1ul,std::string,int,float>(v27);
      v6 = (std::tuple_element<2,const std::tuple<std::string,int,float> >::type *)std::get<2ul,std::string,int,float>(v27);
      default_ability_special = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      *(_QWORD *)&v7 = *(unsigned int *)default_ability_special;
      *(_DWORD *)(v2 + 48) = LODWORD(v7);
      AbilityComp = Creature::getAbilityComp(owner_avatar);
      if ( *(_BYTE *)(((unsigned __int64)ability_special_name_hash >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)ability_special_name_hash & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ability_special_name_hash >> 3)
                                                                                    + 0x7FFF8000) )
      {
        AbilityComp = (const AbilityComp *)ability_special_name_hash;
        v7 = __asan_report_load4(ability_special_name_hash);
      }
      v9 = *ability_special_name_hash;
      if ( *(_BYTE *)(((unsigned __int64)&this->ability_name_hash_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->ability_name_hash_ >> 3) + 0x7FFF8000) <= 3 )
      {
        AbilityComp = (const AbilityComp *)&this->ability_name_hash_;
        v7 = __asan_report_load4(&this->ability_name_hash_);
      }
      if ( !(unsigned int)AbilityComp::getAbilitySpecial(AbilityComp, this->ability_name_hash_, v9, (float *)(v2 + 48)) )
      {
        std::map<int,std::any>::emplace<int const&,float &>(
          &this->override_map_,
          ability_special_name_hash,
          (float *)(v2 + 48),
          (const int *)this->override_map_._M_t._M_impl.gap0,
          v10);
        std::map<int,std::any>::emplace<int const&,float &>(
          &this->server_override_map_,
          ability_special_name_hash,
          (float *)(v2 + 48),
          (const int *)this->server_override_map_._M_t._M_impl.gap0,
          v11);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        vptr_BaseActorActionContext = this->_vptr_BaseActorActionContext;
        if ( *(_BYTE *)(((unsigned __int64)this->_vptr_BaseActorActionContext >> 3) + 0x7FFF8000) )
          vptr_BaseActorActionContext = (int (**)(...))__asan_report_load8(this->_vptr_BaseActorActionContext);
        (*vptr_BaseActorActionContext)(v2 + 96, this, v7);
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          0x11u,
          "./src/ability/actor_ability.cpp",
          "initOverrideMapByOwnerAvatar",
          482);
        v13 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v31,
                (const char (*)[38])"[PROP] override ability_special_name:");
        v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, ability_special_name);
        v15 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v14, (const char (*)[15])off_24F19960);
        v16 = common::milog::MiLogStream::operator<<<float,(float *)0>(v15, (const float *)(v2 + 48));
        v17 = common::milog::MiLogStream::operator<<<ActorAbility,(ActorAbility*)0>(v16, this);
        v18 = 0;
        if ( std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v2 + 96), 0LL) )
        {
          v19 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
            v19 = __asan_report_load8(v19);
          v20 = *(void (__fastcall ***)(common::milog::MiLogStream *, unsigned __int64))v19;
          if ( *(_BYTE *)((*(_QWORD *)v19 >> 3) + 0x7FFF8000LL) )
            v19 = __asan_report_load8(*(_QWORD *)v19);
          (*v20)(&v32, v19);
        }
        else
        {
          std::allocator<char>::allocator(&__a);
          v18 = 1;
          std::string::basic_string<std::allocator<char>>((std::string *const)&v32, _s, &__a);
        }
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, (const std::string *)&v32);
        std::string::~string(&v32);
        if ( v18 )
          std::allocator<char>::~allocator(&__a);
        common::milog::MiLogStream::~MiLogStream(&v31);
        std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 96));
      }
      __gnu_cxx::__normal_iterator<std::tuple<std::string,int,float> *,std::vector<std::tuple<std::string,int,float>>>::operator++(&__for_begin);
    }
    v5 = 0;
  }
  std::shared_ptr<ConfigAbilityImpl>::~shared_ptr((std::shared_ptr<ConfigAbilityImpl> *const)(v2 + 64));
  result = v5;
  if ( v33 == (char *)v2 )
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

// Line 490: range 00000000130C8BEC-00000000130C8C26
int32_t __cdecl ActorAbility::initOverrideMap(ActorAbility *const this, const std::map<int,std::any> *override_map)
{
  std::remove_reference<const std::map<int,std::any>&>::type *v2; // rax

  v2 = std::move<std::map<int,std::any> const&>(override_map);
  std::map<int,std::any>::operator=(&this->override_map_, v2);
  return 0;
};

// Line 497: range 00000000130C8C28-00000000130C8D45
__int64 __fastcall ActorAbility::setFloatParam(ActorAbility *const this, const std::string *key, float param_value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::any *v6; // rax
  __int64 result; // rax
  std::map<int,std::any>::key_type __k; // [rsp+2Ch] [rbp-74h] BYREF
  char v9[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 15 param_value:496";
  *(_QWORD *)(v3 + 16) = ActorAbility::setFloatParam;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(float *)(v3 + 32) = param_value;
  __k = getStringHash(key);
  v6 = std::map<int,std::any>::operator[](&this->override_map_, &__k);
  std::any::operator=<float &>(v6, (float *)(v3 + 32));
  result = 0LL;
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

// Line 504: range 00000000130C8D46-00000000130C8E92
float __cdecl ActorAbility::getFloatParam(ActorAbility *const this, const std::string *key)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  float v6; // eax
  std::_Rb_tree_iterator<std::pair<int const,std::any> >::pointer v7; // rax
  float result; // xmm0_4
  std::map<int,std::any>::key_type __x; // [rsp+14h] [rbp-7Ch] BYREF
  std::_Rb_tree_iterator<std::pair<int const,std::any> >::_Self __y; // [rsp+18h] [rbp-78h] BYREF
  char v11[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 8 iter:505";
  *(_QWORD *)(v3 + 16) = ActorAbility::getFloatParam;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  __x = getStringHash(key);
  *(std::map<int,std::any>::iterator *)(v3 + 32) = std::map<int,std::any>::find(&this->override_map_, &__x);
  __y._M_node = std::map<int,std::any>::end(&this->override_map_)._M_node;
  if ( std::operator==((const std::_Rb_tree_iterator<std::pair<int const,std::any> >::_Self *)(v3 + 32), &__y) )
  {
    v6 = 0.0;
  }
  else
  {
    v7 = std::_Rb_tree_iterator<std::pair<int const,std::any>>::operator->((const std::_Rb_tree_iterator<std::pair<int const,std::any> > *const)(v3 + 32));
    *(float *)v2.m128i_i32 = safeAnyCast<float>(&v7->second);
    v6 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  }
  result = v6;
  if ( v11 == (char *)v3 )
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

// Line 515: range 00000000130C8E94-00000000130C8F65
int32_t __cdecl ActorAbility::clearOverrideParam(ActorAbility *const this, const std::string *key)
{
  common::milog::MiLogStream *v2; // rdx
  std::map<int,std::any>::key_type __x; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  __x = getStringHash(key);
  if ( std::map<int,std::any>::erase(&this->override_map_, &__x) )
    return 0;
  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    0x13u,
    "./src/ability/actor_ability.cpp",
    "clearOverrideParam",
    518);
  v2 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v5, (const char (*)[16])off_24F19A20);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v2, key);
  common::milog::MiLogStream::~MiLogStream(&v5);
  return -1;
};

// Line 526: range 00000000130C8F66-00000000130C9647
int32_t __cdecl ActorAbility::refreshServerTalentOverrideMap(ActorAbility *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v4; // r14d
  std::tuple_element<2,const std::tuple<std::string,int,float> >::type *v5; // rax
  double v6; // xmm0_8
  Creature *v7; // rax
  const AbilityComp *AbilityComp; // rdi
  uint32_t v9; // r8d
  std::any *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  unsigned __int64 v16; // rax
  void (__fastcall **v17)(common::milog::MiLogStream *, unsigned __int64, double); // rdx
  int32_t result; // eax
  std::vector<std::tuple<std::string,int,float>>::iterator __for_begin; // [rsp+18h] [rbp-148h] BYREF
  std::vector<std::tuple<std::string,int,float>>::iterator __for_end; // [rsp+20h] [rbp-140h] BYREF
  std::vector<std::tuple<std::string,int,float>> *__for_range; // [rsp+28h] [rbp-138h]
  const std::tuple<std::string,int,float> *v23; // [rsp+30h] [rbp-130h]
  std::tuple_element<0,const std::tuple<std::string,int,float> >::type *ability_special_name; // [rsp+38h] [rbp-128h]
  std::tuple_element<1,const std::tuple<std::string,int,float> >::type *ability_special_name_hash; // [rsp+40h] [rbp-120h]
  std::tuple_element<2,const std::tuple<std::string,int,float> >::type *default_ability_special; // [rsp+48h] [rbp-118h]
  common::milog::MiLogStream v27; // [rsp+50h] [rbp-110h] BYREF
  common::milog::MiLogStream v28; // [rsp+70h] [rbp-F0h] BYREF
  char v29[208]; // [rsp+90h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 4 13 new_value:548 64 16 16 creature_ptr:527 96 16 13 owner_ptr:533 128 16 14 config_ptr:539";
  *(_QWORD *)(v1 + 16) = ActorAbility::refreshServerTalentOverrideMap;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -202178560;
  ActorAbility::getCaster((ActorAbility *const)(v1 + 64));
  if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v1 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/actor_ability.cpp",
      "refreshServerTalentOverrideMap",
      530);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v28,
      (const char (*)[25])"getCaster return nullptr");
    common::milog::MiLogStream::~MiLogStream(&v28);
    v4 = -1;
  }
  else
  {
    std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    Creature::findTopOwnerOrSelf((Creature *const)(v1 + 96));
    if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v1 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        0x11u,
        "./src/ability/actor_ability.cpp",
        "refreshServerTalentOverrideMap",
        536);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        &v28,
        (const char (*)[33])"getTopOwnerOrSelf return nullptr");
      common::milog::MiLogStream::~MiLogStream(&v28);
      v4 = -1;
    }
    else
    {
      ActorAbility::getConfigImpl((const ActorAbility *const)(v1 + 128));
      if ( std::operator==<ConfigAbilityImpl>(0LL, (const std::shared_ptr<ConfigAbilityImpl> *)(v1 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          0x13u,
          "./src/ability/actor_ability.cpp",
          "refreshServerTalentOverrideMap",
          542);
        common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          &v28,
          (const char (*)[22])"config_ptr is nullptr");
        common::milog::MiLogStream::~MiLogStream(&v28);
        v4 = -1;
      }
      else
      {
        __for_range = &std::__shared_ptr_access<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128))->ability_special_vec;
        __for_begin._M_current = std::vector<std::tuple<std::string,int,float>>::begin(__for_range)._M_current;
        __for_end._M_current = std::vector<std::tuple<std::string,int,float>>::end(__for_range)._M_current;
        while ( __gnu_cxx::operator!=<std::tuple<std::string,int,float> *,std::vector<std::tuple<std::string,int,float>>>(
                  &__for_begin,
                  &__for_end) )
        {
          v23 = __gnu_cxx::__normal_iterator<std::tuple<std::string,int,float> *,std::vector<std::tuple<std::string,int,float>>>::operator*(&__for_begin);
          ability_special_name = (std::tuple_element<0,const std::tuple<std::string,int,float> >::type *)std::get<0ul,std::string,int,float>(v23);
          ability_special_name_hash = (std::tuple_element<1,const std::tuple<std::string,int,float> >::type *)std::get<1ul,std::string,int,float>(v23);
          v5 = (std::tuple_element<2,const std::tuple<std::string,int,float> >::type *)std::get<2ul,std::string,int,float>(v23);
          default_ability_special = v5;
          if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v5);
          }
          *(_QWORD *)&v6 = *(unsigned int *)default_ability_special;
          *(_DWORD *)(v1 + 48) = LODWORD(v6);
          v7 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
          AbilityComp = Creature::getAbilityComp(v7);
          if ( *(_BYTE *)(((unsigned __int64)ability_special_name_hash >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)ability_special_name_hash & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ability_special_name_hash >> 3)
                                                                                        + 0x7FFF8000) )
          {
            AbilityComp = (const AbilityComp *)ability_special_name_hash;
            v6 = __asan_report_load4(ability_special_name_hash);
          }
          v9 = *ability_special_name_hash;
          if ( *(_BYTE *)(((unsigned __int64)&this->ability_name_hash_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->ability_name_hash_ >> 3) + 0x7FFF8000) <= 3 )
          {
            AbilityComp = (const AbilityComp *)&this->ability_name_hash_;
            v6 = __asan_report_load4(&this->ability_name_hash_);
          }
          if ( !(unsigned int)AbilityComp::getAbilitySpecial(
                                AbilityComp,
                                this->ability_name_hash_,
                                v9,
                                (float *)(v1 + 48)) )
          {
            v10 = std::map<int,std::any>::operator[](&this->server_override_map_, ability_special_name_hash);
            std::any::operator=<float &>(v10, (float *)(v1 + 48));
            common::milog::MiLogStream::create(
              &v27,
              &common::milog::MiLogDefault::default_log_obj_,
              0x11u,
              "./src/ability/actor_ability.cpp",
              "refreshServerTalentOverrideMap",
              556);
            v11 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                    &v27,
                    (const char (*)[45])"[SERVER_PROP] override ability_special_name:");
            v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, ability_special_name);
            v13 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v12, (const char (*)[15])off_24F19960);
            v14 = common::milog::MiLogStream::operator<<<float,(float *)0>(v13, (const float *)(v1 + 48));
            v15 = common::milog::MiLogStream::operator<<<ActorAbility,(ActorAbility*)0>(v14, this);
            v16 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
              v16 = __asan_report_load8(v16);
            v17 = *(void (__fastcall ***)(common::milog::MiLogStream *, unsigned __int64, double))v16;
            if ( *(_BYTE *)((*(_QWORD *)v16 >> 3) + 0x7FFF8000LL) )
              v16 = __asan_report_load8(*(_QWORD *)v16);
            (*v17)(&v28, v16, v6);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, (const std::string *)&v28);
            std::string::~string(&v28);
            common::milog::MiLogStream::~MiLogStream(&v27);
          }
          __gnu_cxx::__normal_iterator<std::tuple<std::string,int,float> *,std::vector<std::tuple<std::string,int,float>>>::operator++(&__for_begin);
        }
        v4 = 0;
      }
      std::shared_ptr<ConfigAbilityImpl>::~shared_ptr((std::shared_ptr<ConfigAbilityImpl> *const)(v1 + 128));
    }
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v1 + 96));
  }
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v1 + 64));
  result = v4;
  if ( v29 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 564: range 00000000130C9648-00000000130C983B
void __fastcall ActorAbility::setServerFloatParam(
        ActorAbility *const this,
        const std::string *key,
        __m128i param_value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::any *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r13
  std::map<int,std::any>::key_type __k; // [rsp+2Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-90h] BYREF
  char v12[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 15 param_value:563";
  *(_QWORD *)(v3 + 16) = ActorAbility::setServerFloatParam;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  param_value = (__m128i)param_value.m128i_u32[0];
  *(_DWORD *)(v3 + 32) = param_value.m128i_i32[0];
  __k = getStringHash(key);
  v6 = std::map<int,std::any>::operator[](&this->server_override_map_, &__k);
  std::any::operator=<float &>(v6, (float *)(v3 + 32));
  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    0x11u,
    "./src/ability/actor_ability.cpp",
    "setServerFloatParam",
    567);
  v7 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
         &v11,
         (const char (*)[42])"[SERVER_OVERRIDE] set server float value=");
  v8 = common::milog::MiLogStream::operator<<<float,(float *)0>(v7, (const float *)(v3 + 32));
  v9 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v8, (const char (*)[15])" client value=");
  *(float *)param_value.m128i_i32 = ActorAbility::getFloatParam(this, key);
  __k = _mm_cvtsi128_si32(param_value);
  common::milog::MiLogStream::operator<<<float,(float *)0>(v9, (const float *)&__k);
  common::milog::MiLogStream::~MiLogStream(&v11);
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 573: range 00000000130C983C-00000000130C9902
void __cdecl ActorAbility::clearServerOverrideParam(ActorAbility *const this, const std::string *key)
{
  common::milog::MiLogStream *v2; // rdx
  std::map<int,std::any>::key_type __x; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  __x = getStringHash(key);
  if ( !std::map<int,std::any>::erase(&this->server_override_map_, &__x) )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/actor_ability.cpp",
      "clearServerOverrideParam",
      576);
    v2 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v4, (const char (*)[16])off_24F19A20);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v2, key);
    common::milog::MiLogStream::~MiLogStream(&v4);
  }
};

// Line 582: range 00000000130C9904-00000000130C9A50
float __cdecl ActorAbility::getServerOverrideParam(ActorAbility *const this, const std::string *key)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  float v6; // eax
  std::_Rb_tree_iterator<std::pair<int const,std::any> >::pointer v7; // rax
  float result; // xmm0_4
  std::map<int,std::any>::key_type __x; // [rsp+14h] [rbp-7Ch] BYREF
  std::_Rb_tree_iterator<std::pair<int const,std::any> >::_Self __y; // [rsp+18h] [rbp-78h] BYREF
  char v11[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 8 iter:583";
  *(_QWORD *)(v3 + 16) = ActorAbility::getServerOverrideParam;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  __x = getStringHash(key);
  *(std::map<int,std::any>::iterator *)(v3 + 32) = std::map<int,std::any>::find(&this->server_override_map_, &__x);
  __y._M_node = std::map<int,std::any>::end(&this->server_override_map_)._M_node;
  if ( std::operator==((const std::_Rb_tree_iterator<std::pair<int const,std::any> >::_Self *)(v3 + 32), &__y) )
  {
    v6 = 0.0;
  }
  else
  {
    v7 = std::_Rb_tree_iterator<std::pair<int const,std::any>>::operator->((const std::_Rb_tree_iterator<std::pair<int const,std::any> > *const)(v3 + 32));
    *(float *)v2.m128i_i32 = safeAnyCast<float>(&v7->second);
    v6 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  }
  result = v6;
  if ( v11 == (char *)v3 )
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

// Line 593: range 00000000130C9A52-00000000130C9ABD
float __cdecl ActorAbility::getSpecialFloatParam(ActorAbility *const this, const std::string *key)
{
  __m128i v2; // xmm0
  std::unordered_map<std::string,data::DynamicArgument>::mapped_type *v3; // rax
  data::ConfigAbility *config_ability; // [rsp+18h] [rbp-8h]

  config_ability = ActorAbility::getConfigRef(this);
  if ( !common::tools::MiscUtils::isContains<std::unordered_map<std::string,data::DynamicArgument>,std::string>(
          &config_ability->ability_specials,
          key) )
    return 0.0;
  v3 = std::unordered_map<std::string,data::DynamicArgument>::operator[](&config_ability->ability_specials, key);
  *(float *)v2.m128i_i32 = safeAnyCast<float>(&v3->value);
  return COERCE_FLOAT(_mm_cvtsi128_si32(v2));
};
