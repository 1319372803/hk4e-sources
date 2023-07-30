// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/ability/config_impl/config_ability_predicate_impl.cpp

// Line 25: range 00000000155945D1-000000001559466C
bool __cdecl RelationalOperate(data::RelationalOperator logic, float value, float config_value)
{
  bool result; // al

  switch ( logic )
  {
    case Greater_2:
      result = value > config_value;
      break;
    case GreaterOrEqual_0:
      result = value >= config_value;
      break;
    case Equal_1:
      result = std::fabs(value - config_value) < 0.00000011920929;
      break;
    case Lesser:
      result = config_value > value;
      break;
    case LesserOrEqual:
      result = config_value >= value;
      break;
    default:
      result = 0;
      break;
  }
  return result;
};

// Line 46: range 000000001559466E-00000000155947DD
bool __cdecl ByHitElementImpl::check(ByHitElementImpl *const this, PredicateParam *param)
{
  AttackResult *attack_result_ptr; // rdx
  data::ElementType element_type; // ecx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&param->attack_result_ptr >> 3) + 0x7FFF8000) )
    __asan_report_load8(&param->attack_result_ptr);
  if ( param->attack_result_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&param->attack_result_ptr >> 3) + 0x7FFF8000) )
      __asan_report_load8(&param->attack_result_ptr);
    attack_result_ptr = param->attack_result_ptr;
    if ( *(_BYTE *)(((unsigned __int64)&attack_result_ptr->element_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)attack_result_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result_ptr->element_type >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(&attack_result_ptr->element_type);
    }
    element_type = attack_result_ptr->element_type;
    if ( *(_BYTE *)(((unsigned __int64)&this->element >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->element >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->element);
    }
    return element_type == this->element;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_predicate_impl.cpp",
      "check",
      49);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v5,
      (const char (*)[26])"attack_result_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v5);
    return 0;
  }
};

// Line 60: range 00000000155947DE-0000000015594CFF
bool __cdecl ByTargetHPRatioImpl::check(ByTargetHPRatioImpl *const this, PredicateParam *param)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool v6; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  __m128i v9; // xmm0
  ActorAbility *v10; // r14
  data::RelationalOperator logic; // eax
  common::milog::MiLogStream *v12; // rcx
  bool result; // al
  int val; // [rsp+1Ch] [rbp-E4h] BYREF
  float hp_ratio; // [rsp+20h] [rbp-E0h]
  float cur_hp; // [rsp+24h] [rbp-DCh]
  float max_hp; // [rsp+28h] [rbp-D8h]
  float config_hp_ratio; // [rsp+2Ch] [rbp-D4h]
  std::shared_ptr<Creature> p_global_value_source_ptr; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<DieCreatureRecord> p_record_ptr; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+50h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 13 target_ptr:61 64 16 14 ability_ptr:67";
  *(_QWORD *)(v3 + 16) = ByTargetHPRatioImpl::check;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  std::shared_ptr<Creature>::shared_ptr((std::shared_ptr<Creature> *const)(v3 + 32), &param->target_ptr);
  if ( std::operator==<Creature>((const std::shared_ptr<Creature> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_predicate_impl.cpp",
      "check",
      64);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v21, (const char (*)[19])"target_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v21);
    v6 = 0;
    goto LABEL_25;
  }
  std::shared_ptr<ActorAbility>::shared_ptr((std::shared_ptr<ActorAbility> *const)(v3 + 64), &param->ability_ptr);
  if ( std::operator==<ActorAbility>((const std::shared_ptr<ActorAbility> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_predicate_impl.cpp",
      "check",
      70);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v21, (const char (*)[20])"ability_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v21);
    v6 = 0;
  }
  else
  {
    v7 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    *(float *)v2.m128i_i32 = Creature::getCurHp(v7);
    cur_hp = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
    v8 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    *(float *)v2.m128i_i32 = Creature::getMaxHp(v8);
    max_hp = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
    hp_ratio = 0.0;
    v9 = (__m128i)LODWORD(max_hp);
    if ( max_hp > 0.00000011920929 )
    {
      v9 = (__m128i)LODWORD(cur_hp);
      hp_ratio = cur_hp / max_hp;
    }
    v10 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    std::shared_ptr<DieCreatureRecord>::shared_ptr(&p_record_ptr, 0LL);
    std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, 0LL);
    *(float *)v9.m128i_i32 = ActorAbility::evaluate(v10, &this->hpratio, &p_global_value_source_ptr, &p_record_ptr);
    config_hp_ratio = COERCE_FLOAT(_mm_cvtsi128_si32(v9));
    std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
    std::shared_ptr<DieCreatureRecord>::~shared_ptr(&p_record_ptr);
    if ( *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->logic);
    }
    logic = this->logic;
    if ( logic == LesserOrEqual )
    {
      v6 = config_hp_ratio >= hp_ratio;
      goto LABEL_24;
    }
    if ( logic > LesserOrEqual )
      goto LABEL_21;
    if ( logic == Lesser )
    {
      v6 = config_hp_ratio > hp_ratio;
      goto LABEL_24;
    }
    if ( logic == Greater_2 )
    {
      v6 = hp_ratio > config_hp_ratio;
      goto LABEL_24;
    }
    if ( logic != GreaterOrEqual_0 )
    {
LABEL_21:
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/config_impl/config_ability_predicate_impl.cpp",
        "check",
        90);
      v12 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              &v21,
              (const char (*)[20])"invalid logic type:");
      if ( *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->logic);
      }
      val = this->logic;
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v6 = 0;
      goto LABEL_24;
    }
    v6 = hp_ratio >= config_hp_ratio;
  }
LABEL_24:
  std::shared_ptr<ActorAbility>::~shared_ptr((std::shared_ptr<ActorAbility> *const)(v3 + 64));
LABEL_25:
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v3 + 32));
  result = v6;
  if ( v22 == (char *)v3 )
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

// Line 97: range 0000000015594D00-0000000015594FD9
bool __cdecl ByNotImpl::check(ByNotImpl *const this, PredicateParam *param)
{
  std::shared_ptr<data::ConfigAbilityPredicate> *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  const std::shared_ptr<data::ConfigAbilityPredicate> *v5; // rax
  int v6; // r14d
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  bool result; // al
  bool v10; // [rsp+Fh] [rbp-C1h]
  std::vector<std::shared_ptr<data::ConfigAbilityPredicate>>::iterator __for_begin; // [rsp+28h] [rbp-A8h] BYREF
  std::vector<std::shared_ptr<data::ConfigAbilityPredicate>>::iterator __for_end; // [rsp+30h] [rbp-A0h] BYREF
  std::vector<std::shared_ptr<data::ConfigAbilityPredicate>> *__for_range; // [rsp+38h] [rbp-98h]
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-90h] BYREF
  char v15[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (std::shared_ptr<data::ConfigAbilityPredicate> *)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (std::shared_ptr<data::ConfigAbilityPredicate> *)v3;
  }
  v2->_M_ptr = (std::__shared_ptr<data::ConfigAbilityPredicate,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v2->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 28 tmp_config_predicate_ptr:103";
  v2[1]._M_ptr = (std::__shared_ptr<data::ConfigAbilityPredicate,(__gnu_cxx::_Lock_policy)2>::element_type *)ByNotImpl::check;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( std::operator==<Creature>(&param->target_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_predicate_impl.cpp",
      "check",
      100);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v14, (const char (*)[19])"target_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v14);
    v10 = 0;
  }
  else
  {
    __for_range = &this->predicates;
    __for_begin._M_current = std::vector<std::shared_ptr<data::ConfigAbilityPredicate>>::begin(&this->predicates)._M_current;
    __for_end._M_current = std::vector<std::shared_ptr<data::ConfigAbilityPredicate>>::end(&this->predicates)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<data::ConfigAbilityPredicate> *,std::vector<std::shared_ptr<data::ConfigAbilityPredicate>>>(
              &__for_begin,
              &__for_end) )
    {
      v5 = __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigAbilityPredicate> *,std::vector<std::shared_ptr<data::ConfigAbilityPredicate>>>::operator*(&__for_begin);
      std::shared_ptr<data::ConfigAbilityPredicate>::shared_ptr(v2 + 2, v5);
      if ( std::operator==<data::ConfigAbilityPredicate>(v2 + 2, 0LL) )
      {
        v6 = 0;
      }
      else
      {
        v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigAbilityPredicate,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigAbilityPredicate,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v2[2]);
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8(v7);
        v8 = *(_QWORD *)v7 + 56LL;
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8(*(_QWORD *)v7 + 56LL);
        if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64, PredicateParam *))v8)(v7, param) )
        {
          v10 = 0;
          v6 = 1;
        }
        else
        {
          v6 = 2;
        }
      }
      std::shared_ptr<data::ConfigAbilityPredicate>::~shared_ptr(v2 + 2);
      if ( v6 && v6 != 2 )
        goto LABEL_21;
      __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigAbilityPredicate> *,std::vector<std::shared_ptr<data::ConfigAbilityPredicate>>>::operator++(&__for_begin);
    }
    v10 = 1;
  }
LABEL_21:
  result = v10;
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v2->_M_ptr = (std::__shared_ptr<data::ConfigAbilityPredicate,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 119: range 0000000015594FDA-000000001559526E
bool __cdecl ByAndImpl::check(ByAndImpl *const this, PredicateParam *param)
{
  std::shared_ptr<data::ConfigAbilityPredicate> *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  const std::shared_ptr<data::ConfigAbilityPredicate> *v5; // rax
  int v6; // r14d
  data::ConfigAbilityPredicate *v7; // rdx
  bool result; // al
  bool v9; // [rsp+Fh] [rbp-C1h]
  std::vector<std::shared_ptr<data::ConfigAbilityPredicate>>::iterator __for_begin; // [rsp+28h] [rbp-A8h] BYREF
  std::vector<std::shared_ptr<data::ConfigAbilityPredicate>>::iterator __for_end; // [rsp+30h] [rbp-A0h] BYREF
  std::vector<std::shared_ptr<data::ConfigAbilityPredicate>> *__for_range; // [rsp+38h] [rbp-98h]
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-90h] BYREF
  char v14[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (std::shared_ptr<data::ConfigAbilityPredicate> *)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (std::shared_ptr<data::ConfigAbilityPredicate> *)v3;
  }
  v2->_M_ptr = (std::__shared_ptr<data::ConfigAbilityPredicate,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v2->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 28 tmp_config_predicate_ptr:125";
  v2[1]._M_ptr = (std::__shared_ptr<data::ConfigAbilityPredicate,(__gnu_cxx::_Lock_policy)2>::element_type *)ByAndImpl::check;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( std::operator==<Creature>(&param->target_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_predicate_impl.cpp",
      "check",
      122);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v13, (const char (*)[19])"target_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v13);
    v9 = 0;
  }
  else
  {
    __for_range = &this->predicates;
    __for_begin._M_current = std::vector<std::shared_ptr<data::ConfigAbilityPredicate>>::begin(&this->predicates)._M_current;
    __for_end._M_current = std::vector<std::shared_ptr<data::ConfigAbilityPredicate>>::end(&this->predicates)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<data::ConfigAbilityPredicate> *,std::vector<std::shared_ptr<data::ConfigAbilityPredicate>>>(
              &__for_begin,
              &__for_end) )
    {
      v5 = __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigAbilityPredicate> *,std::vector<std::shared_ptr<data::ConfigAbilityPredicate>>>::operator*(&__for_begin);
      std::shared_ptr<data::ConfigAbilityPredicate>::shared_ptr(v2 + 2, v5);
      if ( std::operator==<data::ConfigAbilityPredicate>(v2 + 2, 0LL) )
      {
        v6 = 0;
      }
      else
      {
        v7 = std::__shared_ptr_access<data::ConfigAbilityPredicate,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<data::ConfigAbilityPredicate,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v2[2]);
        if ( !AbilityComp::evaluatePredicate(v7, param) )
        {
          v9 = 0;
          v6 = 1;
        }
        else
        {
          v6 = 2;
        }
      }
      std::shared_ptr<data::ConfigAbilityPredicate>::~shared_ptr(v2 + 2);
      if ( v6 && v6 != 2 )
        goto LABEL_17;
      __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigAbilityPredicate> *,std::vector<std::shared_ptr<data::ConfigAbilityPredicate>>>::operator++(&__for_begin);
    }
    v9 = 1;
  }
LABEL_17:
  result = v9;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v2->_M_ptr = (std::__shared_ptr<data::ConfigAbilityPredicate,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 141: range 0000000015595270-00000000155952FE
bool __cdecl ByAttackTagsImpl::check(ByAttackTagsImpl *const this, PredicateParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)&param->attack_result_ptr >> 3) + 0x7FFF8000) )
    __asan_report_load8(&param->attack_result_ptr);
  if ( !param->attack_result_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&param->attack_result_ptr >> 3) + 0x7FFF8000) )
    __asan_report_load8(&param->attack_result_ptr);
  return common::tools::MiscUtils::isContains<std::string>(&this->attack_tags, &param->attack_result_ptr->attack_tag);
};

// Line 150: range 0000000015595300-0000000015595826
bool __cdecl ByCompareWithTargetImpl::check(ByCompareWithTargetImpl *const this, PredicateParam *param)
{
  std::shared_ptr<Creature> *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r14
  bool v5; // r13
  Creature *v6; // rax
  FightPropComp *FightPropComp; // rax
  Creature *v8; // rax
  FightPropComp *v9; // rax
  float v10; // xmm0_4
  Creature *v11; // rax
  FightPropComp *v12; // rax
  Creature *v13; // rax
  FightPropComp *v14; // rax
  float v15; // xmm0_4
  bool result; // al
  double CurHp; // [rsp+8h] [rbp-C8h]
  double v18; // [rsp+8h] [rbp-C8h]
  float self_value; // [rsp+28h] [rbp-A8h]
  float target_value; // [rsp+2Ch] [rbp-A4h]
  std::shared_ptr<Creature> __r; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-90h] BYREF
  char v23[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (std::shared_ptr<Creature> *)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (std::shared_ptr<Creature> *)v3;
  }
  v2->_M_ptr = (std::__shared_ptr<Creature,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v2->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 12 self_ptr:151";
  v2[1]._M_ptr = (std::__shared_ptr<Creature,(__gnu_cxx::_Lock_policy)2>::element_type *)ByCompareWithTargetImpl::check;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::shared_ptr<Creature>::shared_ptr(v2 + 2, 0LL);
  if ( std::operator!=<Creature>(&param->source_ptr, 0LL) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->use_owner >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->use_owner >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->use_owner);
    }
    if ( this->use_owner )
    {
      std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->source_ptr);
      Creature::getOwner((const Creature *const)&__r);
    }
    else
    {
      std::shared_ptr<Creature>::shared_ptr(&__r, &param->source_ptr);
    }
    std::shared_ptr<Creature>::operator=(v2 + 2, &__r);
    std::shared_ptr<Creature>::~shared_ptr(&__r);
  }
  if ( std::operator==<Creature>(v2 + 2, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_predicate_impl.cpp",
      "check",
      158);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v22, (const char (*)[17])"self_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v22);
    v5 = 0;
  }
  else if ( std::operator==<Creature>(&param->target_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_predicate_impl.cpp",
      "check",
      163);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v22, (const char (*)[19])"target_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v22);
    v5 = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->property >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->property >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->property);
    }
    if ( this->property )
    {
      v5 = 0;
    }
    else
    {
      v6 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v2[2]);
      FightPropComp = Creature::getFightPropComp(v6);
      CurHp = FightPropComp::getCurHp(FightPropComp);
      v8 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v2[2]);
      v9 = Creature::getFightPropComp(v8);
      v10 = CurHp / (FightPropComp::getMaxHp(v9) + 0.0000001);
      self_value = v10;
      v11 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->target_ptr);
      v12 = Creature::getFightPropComp(v11);
      v18 = FightPropComp::getCurHp(v12);
      v13 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->target_ptr);
      v14 = Creature::getFightPropComp(v13);
      v15 = v18 / (FightPropComp::getMaxHp(v14) + 0.0000001);
      target_value = v15;
      if ( *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->logic);
      }
      switch ( this->logic )
      {
        case Greater_2:
          v5 = self_value > target_value;
          break;
        case GreaterOrEqual_0:
          v5 = self_value >= target_value;
          break;
        case Equal_1:
          v5 = self_value == target_value;
          break;
        case Lesser:
          v5 = target_value > self_value;
          break;
        case LesserOrEqual:
          v5 = target_value >= self_value;
          break;
        default:
          v5 = 0;
          break;
      }
    }
  }
  std::shared_ptr<Creature>::~shared_ptr(v2 + 2);
  result = v5;
  if ( v23 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v2->_M_ptr = (std::__shared_ptr<Creature,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 192: range 0000000015595828-0000000015595B01
bool __cdecl ByAnyImpl::check(ByAnyImpl *const this, PredicateParam *param)
{
  std::shared_ptr<data::ConfigAbilityPredicate> *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  const std::shared_ptr<data::ConfigAbilityPredicate> *v5; // rax
  int v6; // r14d
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  bool result; // al
  bool v10; // [rsp+Fh] [rbp-C1h]
  std::vector<std::shared_ptr<data::ConfigAbilityPredicate>>::iterator __for_begin; // [rsp+28h] [rbp-A8h] BYREF
  std::vector<std::shared_ptr<data::ConfigAbilityPredicate>>::iterator __for_end; // [rsp+30h] [rbp-A0h] BYREF
  std::vector<std::shared_ptr<data::ConfigAbilityPredicate>> *__for_range; // [rsp+38h] [rbp-98h]
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-90h] BYREF
  char v15[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (std::shared_ptr<data::ConfigAbilityPredicate> *)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (std::shared_ptr<data::ConfigAbilityPredicate> *)v3;
  }
  v2->_M_ptr = (std::__shared_ptr<data::ConfigAbilityPredicate,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v2->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 28 tmp_config_predicate_ptr:198";
  v2[1]._M_ptr = (std::__shared_ptr<data::ConfigAbilityPredicate,(__gnu_cxx::_Lock_policy)2>::element_type *)ByAnyImpl::check;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( std::operator==<Creature>(&param->target_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_predicate_impl.cpp",
      "check",
      195);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v14, (const char (*)[19])"target_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v14);
    v10 = 0;
  }
  else
  {
    __for_range = &this->predicates;
    __for_begin._M_current = std::vector<std::shared_ptr<data::ConfigAbilityPredicate>>::begin(&this->predicates)._M_current;
    __for_end._M_current = std::vector<std::shared_ptr<data::ConfigAbilityPredicate>>::end(&this->predicates)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<data::ConfigAbilityPredicate> *,std::vector<std::shared_ptr<data::ConfigAbilityPredicate>>>(
              &__for_begin,
              &__for_end) )
    {
      v5 = __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigAbilityPredicate> *,std::vector<std::shared_ptr<data::ConfigAbilityPredicate>>>::operator*(&__for_begin);
      std::shared_ptr<data::ConfigAbilityPredicate>::shared_ptr(v2 + 2, v5);
      if ( std::operator==<data::ConfigAbilityPredicate>(v2 + 2, 0LL) )
      {
        v6 = 0;
      }
      else
      {
        v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigAbilityPredicate,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigAbilityPredicate,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v2[2]);
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8(v7);
        v8 = *(_QWORD *)v7 + 56LL;
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8(*(_QWORD *)v7 + 56LL);
        if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64, PredicateParam *))v8)(v7, param) )
        {
          v10 = 1;
          v6 = 1;
        }
        else
        {
          v6 = 2;
        }
      }
      std::shared_ptr<data::ConfigAbilityPredicate>::~shared_ptr(v2 + 2);
      if ( v6 && v6 != 2 )
        goto LABEL_21;
      __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigAbilityPredicate> *,std::vector<std::shared_ptr<data::ConfigAbilityPredicate>>>::operator++(&__for_begin);
    }
    v10 = 0;
  }
LABEL_21:
  result = v10;
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v2->_M_ptr = (std::__shared_ptr<data::ConfigAbilityPredicate,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 215: range 0000000015595B02-0000000015595C9E
bool __cdecl ByEntityTypesImpl::check(ByEntityTypesImpl *const this, PredicateParam *param)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  data::EntityType value; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->target_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_predicate_impl.cpp",
      "check",
      218);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v6, (const char (*)[19])"target_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v6);
    return 0;
  }
  else
  {
    v3 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->target_ptr);
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      v3 = __asan_report_load8(v3);
    v4 = *(_QWORD *)v3 + 32LL;
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v3 = __asan_report_load8(*(_QWORD *)v3 + 32LL);
    value = (*(unsigned int (__fastcall **)(unsigned __int64))v4)(v3);
    if ( common::tools::MiscUtils::isContains<data::EntityType>(&this->entity_types, &value) )
    {
      if ( *(char *)(((unsigned __int64)&this->reject >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->reject);
      return !this->reject;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->reject >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->reject);
      return this->reject;
    }
  }
};

// Line 231: range 0000000015595CA0-0000000015595DA6
bool __cdecl ByHasAbilityStateImpl::check(ByHasAbilityStateImpl *const this, PredicateParam *param)
{
  Creature *v3; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->target_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_predicate_impl.cpp",
      "check",
      234);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"target_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v5);
    return 0;
  }
  else
  {
    v3 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->target_ptr);
    AbilityComp = Creature::getAbilityComp(v3);
    if ( *(_BYTE *)(((unsigned __int64)&this->ability_state >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->ability_state);
    return AbilityComp::containsState(AbilityComp, this->ability_state);
  }
};

// Line 245: range 0000000015595DA8-0000000015595EC0
bool __cdecl ByHasElementImpl::check(ByHasElementImpl *const this, PredicateParam *param)
{
  Creature *v3; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->target_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_predicate_impl.cpp",
      "check",
      248);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"target_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v5);
    return 0;
  }
  else
  {
    v3 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->target_ptr);
    AbilityComp = Creature::getAbilityComp(v3);
    if ( *(_BYTE *)(((unsigned __int64)&this->element >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->element >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->element);
    }
    return (unsigned __int8)AbilityComp::hasElementTypeModifiers(AbilityComp, this->element, 1) != 0;
  }
};

// Line 259: range 00000000155961D8-000000001559654C
// local variable allocation has failed, the output may be wrong!
bool __cdecl ByHasShieldImpl::check(ByHasShieldImpl *const this, PredicateParam *param)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  bool v6; // al
  bool v7; // al
  bool v8; // al
  Creature *v9; // rax
  AbilityComp *AbilityComp; // r14
  int v11; // ecx
  char *v12; // rdx OVERLAPPED
  unsigned int v13; // esi OVERLAPPED
  int __f; // [rsp+0h] [rbp-C0h]
  bool check_elite; // [rsp+2Dh] [rbp-93h]
  bool check_element; // [rsp+2Eh] [rbp-92h]
  bool check_global; // [rsp+2Fh] [rbp-91h]
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 10 result:268";
  *(_QWORD *)(v2 + 16) = ByHasShieldImpl::check;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  if ( std::operator==<Creature>(&param->target_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_predicate_impl.cpp",
      "check",
      262);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v18, (const char (*)[19])"target_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->type);
    }
    v6 = this->type == EliteShield || this->type == All_5;
    check_elite = v6;
    if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->type);
    }
    v7 = this->type == ElementShield || this->type == All_5;
    check_element = v7;
    if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->type);
    }
    v8 = this->type == GlobalShield || this->type == All_5;
    check_global = v8;
    *(_BYTE *)(v2 + 32) = 0;
    v9 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->target_ptr);
    AbilityComp = Creature::getAbilityComp(v9);
    LOBYTE(__f) = check_elite;
    v11 = __f;
    BYTE1(v11) = check_element;
    v12 = (char *)(v2 + 32);
    v13 = v11 & 0xFF00FFFF | (check_global << 16);
    std::function<ForeachPolicy ()(BaseAbilityMixin &)>::function<ByHasShieldImpl::check(PredicateParam &)::{lambda(BaseAbilityMixin &)#1},void,void>(
      (std::function<ForeachPolicy(BaseAbilityMixin&)> *const)&v18,
      *(ByHasShieldImpl::check::<lambda(BaseAbilityMixin&)> *)(&v12 - 1));
    AbilityComp::foreachMixin(AbilityComp, (std::function<ForeachPolicy(BaseAbilityMixin&)> *)&v18);
    std::function<ForeachPolicy ()(BaseAbilityMixin &)>::~function((std::function<ForeachPolicy(BaseAbilityMixin&)> *const)&v18);
    result = *(_BYTE *)(v2 + 32);
  }
  if ( v19 == (char *)v2 )
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

// Line 269: range 0000000015595EC2-00000000155961D7
ForeachPolicy __cdecl ByHasShieldImpl::check(PredicateParam &)::{lambda(BaseAbilityMixin &)#1}::operator()(
        const ByHasShieldImpl::check::<lambda(BaseAbilityMixin&)> *const __closure,
        BaseAbilityMixin *mixin)
{
  bool v2; // bl
  bool *v3; // rdx
  bool v4; // bl
  bool *v5; // rdx
  bool v6; // bl
  bool *v7; // rdx
  std::shared_ptr<data::ConfigAbilityMixin> v9; // [rsp+10h] [rbp-30h] BYREF
  std::shared_ptr<data::ConfigAbilityMixin> __r; // [rsp+20h] [rbp-20h] BYREF

  if ( *(char *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(__closure);
  if ( __closure->__check_elite )
  {
    BaseAbilityMixin::getConfig((const BaseAbilityMixin *const)&v9);
    std::dynamic_pointer_cast<data::EliteShieldMixin,data::ConfigAbilityMixin>(&__r);
    v2 = std::operator!=<data::EliteShieldMixin>(0LL, (const std::shared_ptr<data::EliteShieldMixin> *)&__r);
    std::shared_ptr<data::EliteShieldMixin>::~shared_ptr((std::shared_ptr<data::EliteShieldMixin> *const)&__r);
    std::shared_ptr<data::ConfigAbilityMixin>::~shared_ptr(&v9);
    if ( v2 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__result >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__result);
      v3 = __closure->__result;
      if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
        && ((__int64)__closure->__result & 7) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(__closure->__result);
      }
      *v3 = 1;
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__check_element >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)__closure + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&__closure->__check_element >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load1(&__closure->__check_element);
  }
  if ( __closure->__check_element )
  {
    BaseAbilityMixin::getConfig((const BaseAbilityMixin *const)&v9);
    std::dynamic_pointer_cast<data::ElementShieldMixin,data::ConfigAbilityMixin>(&__r);
    v4 = std::operator!=<data::ElementShieldMixin>(0LL, (const std::shared_ptr<data::ElementShieldMixin> *)&__r);
    std::shared_ptr<data::ElementShieldMixin>::~shared_ptr((std::shared_ptr<data::ElementShieldMixin> *const)&__r);
    std::shared_ptr<data::ConfigAbilityMixin>::~shared_ptr(&v9);
    if ( v4 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__result >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__result);
      v5 = __closure->__result;
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && ((__int64)__closure->__result & 7) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(__closure->__result);
      }
      *v5 = 1;
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__check_global >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)__closure + 2) & 7) >= *(_BYTE *)(((unsigned __int64)&__closure->__check_global >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load1(&__closure->__check_global);
  }
  if ( __closure->__check_global )
  {
    BaseAbilityMixin::getConfig((const BaseAbilityMixin *const)&v9);
    std::dynamic_pointer_cast<data::GlobalSubShieldMixin,data::ConfigAbilityMixin>(&__r);
    v6 = std::operator!=<data::GlobalSubShieldMixin>(0LL, (const std::shared_ptr<data::GlobalSubShieldMixin> *)&__r);
    std::shared_ptr<data::GlobalSubShieldMixin>::~shared_ptr((std::shared_ptr<data::GlobalSubShieldMixin> *const)&__r);
    std::shared_ptr<data::ConfigAbilityMixin>::~shared_ptr(&v9);
    if ( v6 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__result >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__result);
      v7 = __closure->__result;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && ((__int64)__closure->__result & 7) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(__closure->__result);
      }
      *v7 = 1;
    }
  }
  return 0;
};

// Line 298: range 000000001559654E-00000000155969E9
bool __cdecl ByHasFeatureTagImpl::check(ByHasFeatureTagImpl *const this, PredicateParam *param)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  TxtConfigMgr *p_txt_config_mgr; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t AvatarId; // eax
  TxtConfigMgr *v9; // r14
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t MonsterId; // eax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v12; // rax
  _DWORD *v13; // rdx
  bool result; // al
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-1B8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-1B0h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-1A8h]
  std::shared_ptr<Config> v18; // [rsp+30h] [rbp-1A0h] BYREF
  std::unordered_set<unsigned int> v19; // [rsp+40h] [rbp-190h] BYREF
  std::unordered_set<unsigned int> v20; // [rsp+80h] [rbp-150h] BYREF
  char v21[272]; // [rsp+C0h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 6 id:316 64 16 14 avatar_ptr:304 96 16 15 monster_ptr:309 128 56 15 feature_set:303";
  *(_QWORD *)(v2 + 16) = ByHasFeatureTagImpl::check;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  if ( std::operator==<Creature>(&param->target_ptr, 0LL) )
  {
    v5 = 0;
  }
  else
  {
    std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v2 + 128));
    std::dynamic_pointer_cast<Avatar,Creature>((const std::shared_ptr<Creature> *)(v2 + 64));
    if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 64), 0LL) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v18);
      p_txt_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.txt_config_mgr;
      v7 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      AvatarId = Avatar::getAvatarId(v7);
      TxtConfigMgr::getAvatarFeatures(&v19, p_txt_config_mgr, AvatarId);
      std::unordered_set<unsigned int>::operator=((std::unordered_set<unsigned int> *const)(v2 + 128), &v19);
      std::unordered_set<unsigned int>::~unordered_set(&v19);
      std::shared_ptr<Config>::~shared_ptr(&v18);
    }
    std::dynamic_pointer_cast<Monster,Creature>((const std::shared_ptr<Creature> *)(v2 + 96));
    if ( std::operator!=<Monster>((const std::shared_ptr<Monster> *)(v2 + 96), 0LL) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v18);
      v9 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.txt_config_mgr;
      v10 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      MonsterId = Monster::getMonsterId(v10);
      TxtConfigMgr::getMonsterFeatures(&v20, v9, MonsterId);
      std::unordered_set<unsigned int>::operator=((std::unordered_set<unsigned int> *const)(v2 + 128), &v20);
      std::unordered_set<unsigned int>::~unordered_set(&v20);
      std::shared_ptr<Config>::~shared_ptr(&v18);
    }
    if ( !std::unordered_set<unsigned int>::empty((const std::unordered_set<unsigned int> *const)(v2 + 128)) )
    {
      __for_range = &this->feature_tag_ids;
      __for_begin._M_current = std::vector<unsigned int>::begin(&this->feature_tag_ids)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(&this->feature_tag_ids)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v12 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
        v13 = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        *(_DWORD *)(v2 + 48) = *v13;
        if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
               (std::unordered_set<unsigned int> *)(v2 + 128),
               (const unsigned int *)(v2 + 48)) )
        {
          v5 = 1;
          goto LABEL_19;
        }
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
      }
    }
    v5 = 0;
LABEL_19:
    std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 96));
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 64));
    std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v2 + 128));
  }
  result = v5;
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 328: range 00000000155969EA-0000000015596B97
bool __cdecl ByTargetIsSelfImpl::check(ByTargetIsSelfImpl *const this, PredicateParam *param)
{
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  uint32_t EntityId; // ebx
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  bool is_target_self; // [rsp+1Fh] [rbp-31h]
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->target_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_predicate_impl.cpp",
      "check",
      331);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v7, (const char (*)[19])"target_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v7);
    return 0;
  }
  else if ( std::operator==<Creature>(&param->source_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_predicate_impl.cpp",
      "check",
      336);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v7, (const char (*)[19])"source_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v7);
    return 0;
  }
  else
  {
    v3 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->target_ptr);
    EntityId = Entity::getEntityId((const Entity *const)v3);
    v5 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->source_ptr);
    is_target_self = EntityId == Entity::getEntityId((const Entity *const)v5);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_self >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 29) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_self >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_self);
    }
    return is_target_self == this->is_self;
  }
};

// Line 344: range 0000000015596B98-000000001559719D
bool __cdecl ByTargetGlobalValueImpl::check(ByTargetGlobalValueImpl *const this, PredicateParam *param)
{
  __m128i v2; // xmm0
  std::shared_ptr<Creature> *v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r14
  bool v6; // r13
  Creature *v7; // rax
  AbilityComp *AbilityComp; // rax
  Creature *v9; // rax
  AbilityComp *v10; // rax
  ActorAbility *v11; // r13
  ActorAbility *v12; // r13
  bool result; // al
  float target_value; // [rsp+14h] [rbp-BCh]
  float config_value; // [rsp+18h] [rbp-B8h]
  float config_max_value; // [rsp+1Ch] [rbp-B4h]
  std::shared_ptr<Creature> p_global_value_source_ptr; // [rsp+20h] [rbp-B0h] BYREF
  std::shared_ptr<Creature> __r; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-90h] BYREF
  char v20[112]; // [rsp+60h] [rbp-70h] BYREF

  v3 = (std::shared_ptr<Creature> *)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = (std::shared_ptr<Creature> *)v4;
  }
  v3->_M_ptr = (std::__shared_ptr<Creature,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v3->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 14 target_ptr:350";
  v3[1]._M_ptr = (std::__shared_ptr<Creature,(__gnu_cxx::_Lock_policy)2>::element_type *)ByTargetGlobalValueImpl::check;
  v5 = (unsigned __int64)v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( std::operator==<ActorAbility>(&param->ability_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_predicate_impl.cpp",
      "check",
      347);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v19, (const char (*)[23])"ability_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v19);
    v6 = 0;
  }
  else
  {
    std::shared_ptr<Creature>::shared_ptr(v3 + 2, &param->target_ptr);
    if ( *(char *)(((unsigned __int64)&this->force_by_caster >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->force_by_caster);
    if ( this->force_by_caster )
    {
      std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)param);
      ActorAbility::getCaster((ActorAbility *const)&__r);
      std::shared_ptr<Creature>::operator=(v3 + 2, &__r);
      std::shared_ptr<Creature>::~shared_ptr(&__r);
    }
    if ( std::operator==<Creature>(v3 + 2, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/config_impl/config_ability_predicate_impl.cpp",
        "check",
        357);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v19, (const char (*)[19])"target_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v19);
      v6 = 0;
    }
    else
    {
      v7 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v3[2]);
      AbilityComp = Creature::getAbilityComp(v7);
      if ( !AbilityComp::hasDynamicValue(AbilityComp, &this->key) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->compare_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->compare_type >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&this->compare_type);
        }
        v6 = this->compare_type == NoneOrEqual;
      }
      else
      {
        v9 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v3[2]);
        v10 = Creature::getAbilityComp(v9);
        *(float *)v2.m128i_i32 = AbilityComp::getDynamicValue<float>(v10, &this->key);
        target_value = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
        v11 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)param);
        std::shared_ptr<DieCreatureRecord>::shared_ptr((std::shared_ptr<DieCreatureRecord> *const)&__r, 0LL);
        std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, 0LL);
        *(float *)v2.m128i_i32 = ActorAbility::evaluate(
                                   v11,
                                   &this->value,
                                   &p_global_value_source_ptr,
                                   (DieCreatureRecordPtr *)&__r);
        config_value = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
        std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
        std::shared_ptr<DieCreatureRecord>::~shared_ptr((std::shared_ptr<DieCreatureRecord> *const)&__r);
        v12 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)param);
        std::shared_ptr<DieCreatureRecord>::shared_ptr((std::shared_ptr<DieCreatureRecord> *const)&__r, 0LL);
        std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, 0LL);
        *(float *)v2.m128i_i32 = ActorAbility::evaluate(
                                   v12,
                                   &this->max_value,
                                   &p_global_value_source_ptr,
                                   (DieCreatureRecordPtr *)&__r);
        config_max_value = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
        std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
        std::shared_ptr<DieCreatureRecord>::~shared_ptr((std::shared_ptr<DieCreatureRecord> *const)&__r);
        if ( *(_BYTE *)(((unsigned __int64)&this->compare_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->compare_type >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&this->compare_type);
        }
        switch ( this->compare_type )
        {
          case Equal_2:
          case NoneOrEqual:
            v6 = std::fabs(target_value - config_value) < 0.00000011920929;
            break;
          case MoreThan:
            v6 = target_value > config_value;
            break;
          case LessAndEqual:
            v6 = target_value <= config_value;
            break;
          case Between:
            v6 = config_max_value > target_value && target_value > config_value;
            break;
          case MoreThanAndEqual:
            v6 = config_value <= target_value;
            break;
          default:
            v6 = 0;
            break;
        }
      }
    }
    std::shared_ptr<Creature>::~shared_ptr(v3 + 2);
  }
  result = v6;
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v3->_M_ptr = (std::__shared_ptr<Creature,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 385: range 000000001559719E-000000001559726F
bool __cdecl ByHitBoxTypeImpl::check(ByHitBoxTypeImpl *const this, PredicateParam *param)
{
  AttackResult *attack_result_ptr; // rax
  uint32_t hit_pos_type; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&param->attack_result_ptr >> 3) + 0x7FFF8000) )
    __asan_report_load8(&param->attack_result_ptr);
  if ( !param->attack_result_ptr )
    return 0;
  attack_result_ptr = param->attack_result_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&attack_result_ptr->hit_pos_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&attack_result_ptr->hit_pos_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&attack_result_ptr->hit_pos_type);
  }
  hit_pos_type = attack_result_ptr->hit_pos_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->hit_box_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hit_box_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->hit_box_type);
  }
  return hit_pos_type == this->hit_box_type;
};

// Line 394: range 0000000015597270-0000000015597459
bool __cdecl ByTargetLayoutAreaImpl::check(ByTargetLayoutAreaImpl *const this, PredicateParam *param)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  bool v5; // r14
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  data::JsonClimateType JsonClimateAreaType; // ecx
  uint32_t area_id; // r14d
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool v10; // al
  bool result; // al
  char v12[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 monster_ptr:395";
  *(_QWORD *)(v2 + 16) = ByTargetLayoutAreaImpl::check;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::dynamic_pointer_cast<Monster,Creature>((const std::shared_ptr<Creature> *)(v2 + 32));
  if ( std::operator==<Monster>((const std::shared_ptr<Monster> *)(v2 + 32), 0LL) )
  {
    v5 = 0;
  }
  else
  {
    v6 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    JsonClimateAreaType = Monster::getJsonClimateAreaType(v6);
    if ( *(_BYTE *)(((unsigned __int64)&this->climate_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->climate_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->climate_type);
    }
    if ( JsonClimateAreaType == this->climate_type )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->area_id);
      }
      v10 = 0;
      if ( this->area_id )
      {
        area_id = this->area_id;
        v9 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        if ( area_id != Monster::getJsonClimateAreaId(v9) )
          v10 = 1;
      }
      v5 = !v10;
    }
    else
    {
      v5 = 0;
    }
  }
  std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 32));
  result = v5;
  if ( v12 == (char *)v2 )
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

// Line 412: range 000000001559745A-000000001559751E
bool __cdecl ByAttackTypeImpl::check(ByAttackTypeImpl *const this, PredicateParam *param)
{
  data::AttackType attack_type; // ebx

  if ( *(_BYTE *)(((unsigned __int64)&param->attack_result_ptr >> 3) + 0x7FFF8000) )
    __asan_report_load8(&param->attack_result_ptr);
  if ( !param->attack_result_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->attack_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->attack_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->attack_type);
  }
  attack_type = this->attack_type;
  if ( *(_BYTE *)(((unsigned __int64)&param->attack_result_ptr >> 3) + 0x7FFF8000) )
    __asan_report_load8(&param->attack_result_ptr);
  return attack_type == AttackResult::getAttackType(param->attack_result_ptr);
};

// Line 421: range 0000000015597520-0000000015597915
bool __cdecl ByTargetForwardAndSelfPositionImpl::check(
        ByTargetForwardAndSelfPositionImpl *const this,
        PredicateParam *param)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  bool result; // al
  ActorAbility *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  double v11; // xmm0_8
  AttackResult *attack_result_ptr; // rdx
  float attackee_hit_entity_angle; // edx
  std::shared_ptr<Creature> p_global_value_source_ptr; // [rsp+10h] [rbp-B0h] BYREF
  std::shared_ptr<DieCreatureRecord> p_record_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-90h] BYREF
  char v17[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 16 config_value:431";
  *(_QWORD *)(v3 + 16) = ByTargetForwardAndSelfPositionImpl::check;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&param->attack_result_ptr >> 3) + 0x7FFF8000) )
    __asan_report_load8(&param->attack_result_ptr);
  if ( param->attack_result_ptr )
  {
    if ( std::operator==<ActorAbility>(0LL, &param->ability_ptr) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/config_impl/config_ability_predicate_impl.cpp",
        "check",
        428);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
        &v16,
        (const char (*)[23])"ability_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v16);
      result = 0;
    }
    else
    {
      v7 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)param);
      std::shared_ptr<DieCreatureRecord>::shared_ptr(&p_record_ptr, 0LL);
      std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, 0LL);
      *(float *)v2.m128i_i32 = ActorAbility::evaluate(v7, &this->value, &p_global_value_source_ptr, &p_record_ptr);
      *(_DWORD *)(v3 + 32) = _mm_cvtsi128_si32(v2);
      std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
      std::shared_ptr<DieCreatureRecord>::~shared_ptr(&p_record_ptr);
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/ability/config_impl/config_ability_predicate_impl.cpp",
        "check",
        433);
      v8 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
             &v16,
             (const char (*)[46])"ByTargetForwardAndSelfPosition config_value: ");
      v9 = common::milog::MiLogStream::operator<<<float,(float *)0>(v8, (const float *)(v3 + 32));
      v10 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" client_report: ");
      if ( *(_BYTE *)(((unsigned __int64)&param->attack_result_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8(&param->attack_result_ptr);
      common::milog::MiLogStream::operator<<<float,(float *)0>(
        v10,
        &param->attack_result_ptr->attackee_hit_entity_angle);
      common::milog::MiLogStream::~MiLogStream(&v16);
      LODWORD(v11) = *(_DWORD *)(v3 + 32);
      if ( *(_BYTE *)(((unsigned __int64)&param->attack_result_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8(&param->attack_result_ptr);
      attack_result_ptr = param->attack_result_ptr;
      if ( *(_BYTE *)(((unsigned __int64)&attack_result_ptr->attackee_hit_entity_angle >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)attack_result_ptr + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result_ptr->attackee_hit_entity_angle >> 3)
                                                                          + 0x7FFF8000) )
      {
        v11 = __asan_report_load4(&attack_result_ptr->attackee_hit_entity_angle);
      }
      attackee_hit_entity_angle = attack_result_ptr->attackee_hit_entity_angle;
      if ( *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->logic >> 3) + 0x7FFF8000) <= 3 )
      {
        v11 = __asan_report_load4(&this->logic);
      }
      result = RelationalOperate(this->logic, attackee_hit_entity_angle, *(float *)&v11);
    }
  }
  else
  {
    result = 0;
  }
  if ( v17 == (char *)v3 )
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

// Line 439: range 0000000015597D8C-0000000015598310
bool __cdecl ByUnlockTalentParamImpl::check(ByUnlockTalentParamImpl *const this, PredicateParam *param)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  const std::string *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  bool result; // al
  ByUnlockTalentParamImpl::check::<lambda(BaseTalent&)> v13; // [rsp-20h] [rbp-190h]
  TalentComp *talent_comp; // [rsp+18h] [rbp-158h]
  std::shared_ptr<Creature> v15; // [rsp+20h] [rbp-150h] BYREF
  std::shared_ptr<Creature> __r; // [rsp+30h] [rbp-140h] BYREF
  ByUnlockTalentParamImpl::check::<lambda(BaseTalent&)> __f; // [rsp+40h] [rbp-130h]
  common::milog::MiLogStream v18; // [rsp+60h] [rbp-110h] BYREF
  char v19[240]; // [rsp+80h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 1 11 is_meet:463 64 16 16 creature_ptr:445 96 16 14 avatar_ptr:451 128 32 16 ability_name:462";
  *(_QWORD *)(v2 + 16) = ByUnlockTalentParamImpl::check;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -202116109;
  if ( std::operator==<ActorAbility>(0LL, &param->ability_ptr) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_predicate_impl.cpp",
      "check",
      442);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v18, (const char (*)[23])"ability_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = 0;
  }
  else
  {
    std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)param);
    ActorAbility::getCaster((ActorAbility *const)(v2 + 64));
    if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/config_impl/config_ability_predicate_impl.cpp",
        "check",
        448);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v18, (const char (*)[18])"caster is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v18);
      v5 = 0;
    }
    else
    {
      std::dynamic_pointer_cast<Avatar,Creature>((const std::shared_ptr<Creature> *)(v2 + 96));
      if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 96))
        && (std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64)),
            Creature::findTopOwnerOrSelf((Creature *const)&v15),
            std::dynamic_pointer_cast<Avatar,Creature>(&__r),
            std::shared_ptr<Avatar>::operator=(
              (std::shared_ptr<Avatar> *const)(v2 + 96),
              (std::shared_ptr<Avatar> *)&__r),
            std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)&__r),
            std::shared_ptr<Creature>::~shared_ptr(&v15),
            std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 96))) )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          0x13u,
          "./src/ability/config_impl/config_ability_predicate_impl.cpp",
          "check",
          457);
        common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
          &v18,
          (const char (*)[25])"cast to AvatarPtr failed");
        common::milog::MiLogStream::~MiLogStream(&v18);
        v5 = 0;
      }
      else
      {
        v6 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        talent_comp = Avatar::getTalentComp(v6);
        v7 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)param);
        v8 = ActorAbility::getName[abi:cxx11](v7);
        std::string::basic_string(v2 + 128, v8);
        *(_BYTE *)(v2 + 48) = 0;
        __f.__is_meet = (bool *)(v2 + 48);
        __f.__ability_name = (std::string *)(v2 + 128);
        __f.__this = this;
        v13.__this = this;
        v13.__ability_name = (std::string *)(v2 + 128);
        v13.__is_meet = (bool *)(v2 + 48);
        std::function<ForeachPolicy ()(BaseTalent &)>::function<ByUnlockTalentParamImpl::check(PredicateParam &)::{lambda(BaseTalent &)#1},void,void>(
          (std::function<ForeachPolicy(BaseTalent&)> *const)&v18,
          v13);
        TalentComp::foreachTalent(talent_comp, (const std::function<ForeachPolicy(BaseTalent&)> *)&v18);
        std::function<ForeachPolicy ()(BaseTalent &)>::~function((std::function<ForeachPolicy(BaseTalent&)> *const)&v18);
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/ability/config_impl/config_ability_predicate_impl.cpp",
          "check",
          496);
        v9 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
               &v18,
               (const char (*)[24])"ByUnlockTalentParam is ");
        v10 = common::milog::MiLogStream::operator<<(v9, *(_BYTE *)(v2 + 48));
        v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])" param_str=");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &this->talent_param);
        common::milog::MiLogStream::~MiLogStream(&v18);
        v5 = *(_BYTE *)(v2 + 48);
        std::string::~string((void *)(v2 + 128));
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 96));
    }
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 64));
  }
  result = v5;
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 464: range 0000000015597916-0000000015597D8A
ForeachPolicy __cdecl ByUnlockTalentParamImpl::check(PredicateParam &)::{lambda(BaseTalent &)#1}::operator()(
        const ByUnlockTalentParamImpl::check::<lambda(BaseTalent&)> *const __closure,
        BaseTalent *base_talent)
{
  unsigned __int64 p_M_refcount; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  ForeachPolicy result; // eax
  const std::shared_ptr<BaseTalentMixin> *v6; // rax
  int v7; // r14d
  int v8; // r14d
  std::string *ability_name; // r14
  std::__shared_ptr_access<data::UnlockTalentParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::string *p_talent_param; // r14
  std::__shared_ptr_access<data::UnlockTalentParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  char v13; // al
  bool *is_meet; // rdx
  int v15; // r14d
  bool *v16; // rdx
  std::vector<std::shared_ptr<BaseTalentMixin>>::const_iterator __for_begin; // [rsp+10h] [rbp-E0h] BYREF
  std::vector<std::shared_ptr<BaseTalentMixin>>::const_iterator __for_end; // [rsp+18h] [rbp-D8h] BYREF
  const std::vector<std::shared_ptr<BaseTalentMixin>> *mixin_ptr_vec; // [rsp+20h] [rbp-D0h]
  const std::vector<std::shared_ptr<BaseTalentMixin>> *__for_range; // [rsp+28h] [rbp-C8h]
  BaseTalentMixin v21; // [rsp+30h] [rbp-C0h] BYREF

  p_M_refcount = (unsigned __int64)&v21._M_weak_this._M_refcount;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      p_M_refcount = v3;
  }
  *(_QWORD *)p_M_refcount = 1102416563LL;
  *(_QWORD *)(p_M_refcount + 8) = "3 32 16 13 mixin_ptr:471 64 16 20 unlock_mixin_ptr:473 96 16 14 config_ptr:478";
  *(_QWORD *)(p_M_refcount + 16) = ByUnlockTalentParamImpl::check(PredicateParam &)::{lambda(BaseTalent &)#1}::operator();
  v4 = (_DWORD *)(p_M_refcount >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  if ( !BaseTalent::getIsEnabled(base_talent) )
  {
    result = FOREACH_CONTINUE;
  }
  else
  {
    mixin_ptr_vec = BaseTalent::getMixinVec(base_talent);
    __for_range = mixin_ptr_vec;
    __for_begin._M_current = std::vector<std::shared_ptr<BaseTalentMixin>>::begin(mixin_ptr_vec)._M_current;
    __for_end._M_current = std::vector<std::shared_ptr<BaseTalentMixin>>::end(mixin_ptr_vec)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<BaseTalentMixin> const*,std::vector<std::shared_ptr<BaseTalentMixin>>>(
              &__for_begin,
              &__for_end) )
    {
      v6 = __gnu_cxx::__normal_iterator<std::shared_ptr<BaseTalentMixin> const*,std::vector<std::shared_ptr<BaseTalentMixin>>>::operator*(&__for_begin);
      std::shared_ptr<BaseTalentMixin>::shared_ptr((std::shared_ptr<BaseTalentMixin> *const)(p_M_refcount + 32), v6);
      std::dynamic_pointer_cast<TalentUnlockTalentParamMixin,BaseTalentMixin>((const std::shared_ptr<BaseTalentMixin> *)(p_M_refcount + 64));
      if ( std::operator==<TalentUnlockTalentParamMixin>(
             0LL,
             (const std::shared_ptr<TalentUnlockTalentParamMixin> *)(p_M_refcount + 64)) )
      {
        v7 = 0;
      }
      else
      {
        std::__shared_ptr_access<TalentUnlockTalentParamMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TalentUnlockTalentParamMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 64));
        BaseTalentMixin::getConfig(&v21);
        std::dynamic_pointer_cast<data::UnlockTalentParam,data::ConfigTalentMixin>((const std::shared_ptr<data::ConfigTalentMixin> *)(p_M_refcount + 96));
        std::shared_ptr<data::ConfigTalentMixin>::~shared_ptr((std::shared_ptr<data::ConfigTalentMixin> *const)&v21);
        if ( std::operator==<data::UnlockTalentParam>(
               0LL,
               (const std::shared_ptr<data::UnlockTalentParam> *)(p_M_refcount + 96)) )
        {
          v8 = 0;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&__closure->__ability_name >> 3) + 0x7FFF8000) )
            __asan_report_load8(&__closure->__ability_name);
          ability_name = __closure->__ability_name;
          v10 = std::__shared_ptr_access<data::UnlockTalentParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::UnlockTalentParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 96));
          if ( !std::operator==<char>(&v10->ability_name, ability_name) )
            goto LABEL_19;
          if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
            __asan_report_load8(&__closure->__this);
          p_talent_param = &__closure->__this->talent_param;
          v12 = std::__shared_ptr_access<data::UnlockTalentParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::UnlockTalentParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 96));
          if ( std::operator==<char>(&v12->talent_param, p_talent_param) )
            v13 = 1;
          else
LABEL_19:
            v13 = 0;
          if ( v13 )
          {
            if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
              __asan_report_load8(__closure);
            is_meet = __closure->__is_meet;
            if ( *(_BYTE *)(((unsigned __int64)__closure->__is_meet >> 3) + 0x7FFF8000) != 0
              && ((__int64)__closure->__is_meet & 7) >= *(_BYTE *)(((unsigned __int64)__closure->__is_meet >> 3)
                                                                 + 0x7FFF8000) )
            {
              __asan_report_store1(__closure->__is_meet);
            }
            *is_meet = 1;
            v8 = 1;
          }
          else
          {
            v8 = 2;
          }
        }
        std::shared_ptr<data::UnlockTalentParam>::~shared_ptr((std::shared_ptr<data::UnlockTalentParam> *const)(p_M_refcount + 96));
        if ( v8 )
          v7 = v8 == 2 ? 2 : 1;
        else
          v7 = 0;
      }
      std::shared_ptr<TalentUnlockTalentParamMixin>::~shared_ptr((std::shared_ptr<TalentUnlockTalentParamMixin> *const)(p_M_refcount + 64));
      if ( v7 )
        v15 = v7 == 2 ? 2 : 1;
      else
        v15 = 0;
      std::shared_ptr<BaseTalentMixin>::~shared_ptr((std::shared_ptr<BaseTalentMixin> *const)(p_M_refcount + 32));
      if ( v15 )
      {
        if ( v15 != 2 )
          break;
      }
      __gnu_cxx::__normal_iterator<std::shared_ptr<BaseTalentMixin> const*,std::vector<std::shared_ptr<BaseTalentMixin>>>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    v16 = __closure->__is_meet;
    if ( *(_BYTE *)(((unsigned __int64)__closure->__is_meet >> 3) + 0x7FFF8000) != 0
      && ((__int64)__closure->__is_meet & 7) >= *(_BYTE *)(((unsigned __int64)__closure->__is_meet >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(__closure->__is_meet);
    }
    result = *v16;
  }
  if ( &v21._M_weak_this._M_refcount == (std::__weak_count<(__gnu_cxx::_Lock_policy)2> *)p_M_refcount )
  {
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_refcount = 1172321806LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 502: range 0000000015598312-00000000155983D6
bool __cdecl ByElementReactionTypeImpl::check(ByElementReactionTypeImpl *const this, PredicateParam *param)
{
  data::ElementReactionType reaction_type; // ebx

  if ( *(_BYTE *)(((unsigned __int64)&param->attack_result_ptr >> 3) + 0x7FFF8000) )
    __asan_report_load8(&param->attack_result_ptr);
  if ( !param->attack_result_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reaction_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reaction_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->reaction_type);
  }
  reaction_type = this->reaction_type;
  if ( *(_BYTE *)(((unsigned __int64)&param->attack_result_ptr >> 3) + 0x7FFF8000) )
    __asan_report_load8(&param->attack_result_ptr);
  return reaction_type == AttackResult::getElementReactionTypeByAttackTag(param->attack_result_ptr);
};

// Line 511: range 00000000155983D8-0000000015598732
bool __cdecl ByTargetIsCasterImpl::check(ByTargetIsCasterImpl *const this, PredicateParam *param)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool v5; // r14
  _BOOL4 is_caster; // r15d
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t EntityId; // r14d
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool result; // al
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 caster_ptr:517";
  *(_QWORD *)(v2 + 16) = ByTargetIsCasterImpl::check;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( std::operator==<ActorAbility>(0LL, &param->ability_ptr) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_predicate_impl.cpp",
      "check",
      514);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v11, (const char (*)[20])"ability_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v11);
    v5 = 0;
  }
  else
  {
    std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)param);
    ActorAbility::getCaster((ActorAbility *const)(v2 + 32));
    if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/config_impl/config_ability_predicate_impl.cpp",
        "check",
        520);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v11, (const char (*)[19])"caster_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v5 = 0;
    }
    else if ( std::operator==<Creature>(0LL, &param->target_ptr) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/config_impl/config_ability_predicate_impl.cpp",
        "check",
        526);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v11, (const char (*)[20])"abiltiy_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v5 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->is_caster >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 29) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_caster >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_caster);
      }
      is_caster = this->is_caster;
      v7 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      EntityId = Entity::getEntityId((const Entity *const)v7);
      v9 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->target_ptr);
      v5 = is_caster == (EntityId == Entity::getEntityId((const Entity *const)v9));
    }
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 32));
  }
  result = v5;
  if ( v12 == (char *)v2 )
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
