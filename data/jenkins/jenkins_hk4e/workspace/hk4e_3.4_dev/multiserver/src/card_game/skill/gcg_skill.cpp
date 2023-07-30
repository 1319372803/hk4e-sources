// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/skill/gcg_skill.cpp

// Line 25: range 000000000D7C1EF8-000000000D7C2107
std::string *__cdecl GCGSkill::getName[abi:cxx11](std::string *retstr, const GCGSkill *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 5 ss:26";
  *(_QWORD *)(v2 + 16) = GCGSkill::getName[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
    "[");
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->skill_id_);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
    this->skill_id_);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
    "|");
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
    &this->skill_config_name_);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
    "]");
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
  if ( v6 == (char *)v2 )
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

// Line 38: range 000000000D7C2108-000000000D7C21C8
void __cdecl GCGSkill::foreachEffect(
        GCGSkill *const this,
        GCGSkillResult *skill_result,
        std::function<ForeachPolicy(GCGSkill&,std::shared_ptr<GCGEffectBase>&,GCGSkillResult&)> *p_func)
{
  std::vector<std::shared_ptr<GCGEffectBase>>::iterator __for_begin; // [rsp+20h] [rbp-20h] BYREF
  std::vector<std::shared_ptr<GCGEffectBase>>::iterator __for_end; // [rsp+28h] [rbp-18h] BYREF
  std::vector<std::shared_ptr<GCGEffectBase>> *__for_range; // [rsp+30h] [rbp-10h]
  std::shared_ptr<GCGEffectBase> *effect_ptr; // [rsp+38h] [rbp-8h]

  __for_range = &this->effect_ptr_vec_;
  __for_begin._M_current = std::vector<std::shared_ptr<GCGEffectBase>>::begin(&this->effect_ptr_vec_)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<GCGEffectBase>>::end(&this->effect_ptr_vec_)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<GCGEffectBase> *,std::vector<std::shared_ptr<GCGEffectBase>>>(
            &__for_begin,
            &__for_end) )
  {
    effect_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<GCGEffectBase> *,std::vector<std::shared_ptr<GCGEffectBase>>>::operator*(&__for_begin);
    if ( !std::operator==<GCGEffectBase>(effect_ptr, 0LL)
      && std::function<ForeachPolicy ()(GCGSkill &,std::shared_ptr<GCGEffectBase> &,GCGSkillResult &)>::operator()(
           p_func,
           this,
           effect_ptr,
           skill_result) == FOREACH_BREAK )
    {
      break;
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<GCGEffectBase> *,std::vector<std::shared_ptr<GCGEffectBase>>>::operator++(&__for_begin);
  }
  GCGSkill::refreshActivate(this);
};

// Line 55: range 000000000D7C21CA-000000000D7C233B
void __cdecl GCGSkill::directUseSkill(GCGSkill *const this, const GCGSkillUseParam *param, GCGSkillResult *result)
{
  common::milog::MiLogStream *v3; // rbx
  common::milog::MiLogStream v5; // [rsp+30h] [rbp-50h] BYREF
  std::string val; // [rsp+50h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/skill/gcg_skill.cpp",
    "directUseSkill",
    56);
  v3 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v5, (const char (*)[22])"directUseSkill param:");
  GCGSkillUseParam::getDesc[abi:cxx11](&val, param);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v3, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v5);
  GCGSkill::notifyUseSkill(this, param);
  GCGSkill::doAllEffects(this, param, result, 1);
  if ( *(_BYTE *)(((unsigned __int64)&param->trigger_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&param->trigger_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&param->trigger_type);
  }
  GCGSkill::addUseCount(this, param->trigger_type == GCG_TRIGGER_ON_USE);
  GCGSkill::onSkillEnd(this, param, result);
  GCGSkill::notifyUseSkillEnd(this, param);
};

// Line 67: range 000000000D7C233C-000000000D7C245F
bool __cdecl GCGSkill::checkSkillCondition(const GCGSkill *const this, const GCGSkillUseParam *param)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  bool is_condition_allow; // [rsp+1Bh] [rbp-35h]
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&param->trigger_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&param->trigger_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&param->trigger_type);
  }
  is_condition_allow = GCGSkill::isCanTriggerSkill(this, param->trigger_type, param);
  common::milog::MiLogStream::create(
    &v9,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/skill/gcg_skill.cpp",
    "checkSkillCondition",
    69);
  v2 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v9, (const char (*)[7])"skill:");
  val = GCGSkill::getSkillId(this);
  v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
  v4 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v3, (const char (*)[20])" trigger condition:");
  v5 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v4, (const char (*)[6])" ret:");
  common::milog::MiLogStream::operator<<(v5, is_condition_allow);
  common::milog::MiLogStream::~MiLogStream(&v9);
  return is_condition_allow;
};

// Line 74: range 000000000D7C2460-000000000D7C2884
bool __cdecl GCGSkill::isCanTriggerSkill(
        const GCGSkill *const this,
        GCGTriggerType type,
        const GCGSkillUseParam *param)
{
  bool v3; // r14
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // rbx
  uint32_t SkillId; // eax
  std::__shared_ptr_access<data::ConfigGCGLogicCondition,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  unsigned __int64 v9; // rdx
  int v10; // r15d
  bool result; // al
  std::vector<data::ConfigGCGTrigger>::const_iterator __for_begin; // [rsp+20h] [rbp-110h] BYREF
  std::vector<data::ConfigGCGTrigger>::const_iterator __for_end; // [rsp+28h] [rbp-108h] BYREF
  const std::vector<data::ConfigGCGTrigger> *__for_range; // [rsp+30h] [rbp-100h]
  const data::ConfigGCGTrigger *trigger; // [rsp+38h] [rbp-F8h]
  char v17[240]; // [rsp+40h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 24 14 log_context:99 112 48 11 context:100";
  *(_QWORD *)(v4 + 16) = GCGSkill::isCanTriggerSkill;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862722] = -218959360;
  v6[536862723] = 62194;
  v6[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&param->effect_category_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->effect_category_type >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load4(&param->effect_category_type);
  }
  if ( !GCGSkill::isHasEffect(this, param->effect_category_type) )
  {
    v3 = 0;
  }
  else if ( !GCGSkill::isLimitValid(this) )
  {
    v3 = 0;
  }
  else if ( std::vector<data::ConfigGCGTrigger>::empty(&this->skill_config_.trigger_list) )
  {
    v3 = 1;
  }
  else
  {
    __for_range = &this->skill_config_.trigger_list;
    __for_begin._M_current = std::vector<data::ConfigGCGTrigger>::begin(&this->skill_config_.trigger_list)._M_current;
    __for_end._M_current = std::vector<data::ConfigGCGTrigger>::end(&this->skill_config_.trigger_list)._M_current;
    while ( __gnu_cxx::operator!=<data::ConfigGCGTrigger const*,std::vector<data::ConfigGCGTrigger>>(
              &__for_begin,
              &__for_end) )
    {
      trigger = __gnu_cxx::__normal_iterator<data::ConfigGCGTrigger const*,std::vector<data::ConfigGCGTrigger>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)trigger >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)trigger >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(trigger);
      }
      if ( type == trigger->type )
      {
        if ( std::operator==<data::ConfigGCGLogicCondition>(&trigger->condition, 0LL) )
        {
          v3 = 1;
          goto LABEL_29;
        }
        SkillId = GCGSkill::getSkillId(this);
        LogContext::LogContext((LogContext *const)(v4 + 48), SkillId);
        GCGEffectContext::GCGEffectContext((GCGEffectContext *const)(v4 + 112), param, (const LogContext *)(v4 + 48), 1);
        *(_BYTE *)(v4 + 136) = 1;
        v8 = std::__shared_ptr_access<data::ConfigGCGLogicCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGLogicCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)&trigger->condition);
        if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v8);
        v9 = (unsigned __int64)(v8->_vptr_ConfigGCGCondition + 7);
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v8->_vptr_ConfigGCGCondition + 7);
        if ( (*(int (__fastcall **)(std::__shared_ptr_access<data::ConfigGCGLogicCondition,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, const GCGSkill *const, unsigned __int64))v9)(
               v8,
               this,
               v4 + 112) >= 0 )
        {
          v3 = 1;
          v10 = 1;
        }
        else
        {
          v10 = 0;
        }
        GCGEffectContext::~GCGEffectContext((GCGEffectContext *const)(v4 + 112));
        LogContext::~LogContext((LogContext *const)(v4 + 48));
        if ( v10 )
          goto LABEL_29;
      }
      __gnu_cxx::__normal_iterator<data::ConfigGCGTrigger const*,std::vector<data::ConfigGCGTrigger>>::operator++(&__for_begin);
    }
    v3 = 0;
  }
LABEL_29:
  result = v3;
  if ( v17 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 112: range 000000000D7C2886-000000000D7C29E2
bool __cdecl GCGSkill::isPreCanTriggerSkill(
        const GCGSkill *const this,
        GCGTriggerType type,
        const GCGSkillUseParam *param)
{
  std::vector<data::ConfigGCGTrigger>::const_iterator __for_begin; // [rsp+20h] [rbp-20h] BYREF
  std::vector<data::ConfigGCGTrigger>::const_iterator __for_end; // [rsp+28h] [rbp-18h] BYREF
  const std::vector<data::ConfigGCGTrigger> *__for_range; // [rsp+30h] [rbp-10h]
  const data::ConfigGCGTrigger *trigger; // [rsp+38h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&param->effect_category_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->effect_category_type >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load4(&param->effect_category_type);
  }
  if ( !GCGSkill::isHasEffect(this, param->effect_category_type) )
    return 0;
  if ( !GCGSkill::isLimitValid(this) )
    return 0;
  if ( std::vector<data::ConfigGCGTrigger>::empty(&this->skill_config_.trigger_list) )
    return 1;
  __for_range = &this->skill_config_.trigger_list;
  __for_begin._M_current = std::vector<data::ConfigGCGTrigger>::begin(&this->skill_config_.trigger_list)._M_current;
  __for_end._M_current = std::vector<data::ConfigGCGTrigger>::end(&this->skill_config_.trigger_list)._M_current;
  while ( __gnu_cxx::operator!=<data::ConfigGCGTrigger const*,std::vector<data::ConfigGCGTrigger>>(
            &__for_begin,
            &__for_end) )
  {
    trigger = __gnu_cxx::__normal_iterator<data::ConfigGCGTrigger const*,std::vector<data::ConfigGCGTrigger>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)trigger >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)trigger >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(trigger);
    }
    if ( type == trigger->type )
      return 1;
    __gnu_cxx::__normal_iterator<data::ConfigGCGTrigger const*,std::vector<data::ConfigGCGTrigger>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 139: range 000000000D7C29E4-000000000D7C2A9E
std::unordered_set<data::GCGTriggerType> *__cdecl GCGSkill::getTriggerSet(
        std::unordered_set<data::GCGTriggerType> *retstr,
        const GCGSkill *const this)
{
  std::vector<data::ConfigGCGTrigger>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::vector<data::ConfigGCGTrigger>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::vector<data::ConfigGCGTrigger> *__for_range; // [rsp+20h] [rbp-20h]
  const data::ConfigGCGTrigger *trigger; // [rsp+28h] [rbp-18h]

  std::unordered_set<data::GCGTriggerType>::unordered_set(retstr);
  __for_range = &this->skill_config_.trigger_list;
  __for_begin._M_current = std::vector<data::ConfigGCGTrigger>::begin(&this->skill_config_.trigger_list)._M_current;
  __for_end._M_current = std::vector<data::ConfigGCGTrigger>::end(&this->skill_config_.trigger_list)._M_current;
  while ( __gnu_cxx::operator!=<data::ConfigGCGTrigger const*,std::vector<data::ConfigGCGTrigger>>(
            &__for_begin,
            &__for_end) )
  {
    trigger = __gnu_cxx::__normal_iterator<data::ConfigGCGTrigger const*,std::vector<data::ConfigGCGTrigger>>::operator*(&__for_begin);
    std::unordered_set<data::GCGTriggerType>::insert(retstr, &trigger->type);
    __gnu_cxx::__normal_iterator<data::ConfigGCGTrigger const*,std::vector<data::ConfigGCGTrigger>>::operator++(&__for_begin);
  }
  return retstr;
};

// Line 149: range 000000000D7C2AA0-000000000D7C2B59
bool __cdecl GCGSkill::isHasTrigger(const GCGSkill *const this, GCGTriggerType type)
{
  std::vector<data::ConfigGCGTrigger>::const_iterator __for_begin; // [rsp+10h] [rbp-20h] BYREF
  std::vector<data::ConfigGCGTrigger>::const_iterator __for_end; // [rsp+18h] [rbp-18h] BYREF
  const std::vector<data::ConfigGCGTrigger> *__for_range; // [rsp+20h] [rbp-10h]
  const data::ConfigGCGTrigger *trigger; // [rsp+28h] [rbp-8h]

  __for_range = &this->skill_config_.trigger_list;
  __for_begin._M_current = std::vector<data::ConfigGCGTrigger>::begin(&this->skill_config_.trigger_list)._M_current;
  __for_end._M_current = std::vector<data::ConfigGCGTrigger>::end(&this->skill_config_.trigger_list)._M_current;
  while ( __gnu_cxx::operator!=<data::ConfigGCGTrigger const*,std::vector<data::ConfigGCGTrigger>>(
            &__for_begin,
            &__for_end) )
  {
    trigger = __gnu_cxx::__normal_iterator<data::ConfigGCGTrigger const*,std::vector<data::ConfigGCGTrigger>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)trigger >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)trigger >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(trigger);
    }
    if ( type == trigger->type )
      return 1;
    __gnu_cxx::__normal_iterator<data::ConfigGCGTrigger const*,std::vector<data::ConfigGCGTrigger>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 161: range 000000000D7C2B5A-000000000D7C2BF4
bool __cdecl GCGSkill::isActivelyUse(const GCGSkill *const this)
{
  char v1; // al

  if ( !GCGSkill::isHasTrigger(this, GCG_TRIGGER_ON_USE) || !GCGSkill::isHasEffect(this, ACTIVE_CATEGORY) )
    goto LABEL_7;
  if ( *(char *)(((unsigned __int64)&this->is_hidden_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_hidden_);
  if ( !this->is_hidden_ )
    v1 = 1;
  else
LABEL_7:
    v1 = 0;
  return v1 != 0;
};

// Line 170: range 000000000D7C2BF6-000000000D7C2CF9
bool __fastcall GCGSkill::isHasEffect(const GCGSkill *const this, GCGEffectCategoryType effect_cateory_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  std::__detail::_Node_iterator_base<GCGEffectCategoryType,false> __x; // [rsp+10h] [rbp-70h] BYREF
  std::__detail::_Node_iterator_base<GCGEffectCategoryType,false> __y; // [rsp+18h] [rbp-68h] BYREF
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 23 effect_cateory_type:169";
  *(_QWORD *)(v2 + 16) = GCGSkill::isHasEffect;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = effect_cateory_type;
  __y._M_cur = std::unordered_multiset<GCGEffectCategoryType>::end(&this->effect_category_set_)._M_cur;
  __x._M_cur = std::unordered_multiset<GCGEffectCategoryType>::find(
                 &this->effect_category_set_,
                 (const std::unordered_multiset<GCGEffectCategoryType>::key_type *)(v2 + 32))._M_cur;
  result = std::__detail::operator!=<GCGEffectCategoryType,false>(&__x, &__y);
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

// Line 175: range 000000000D7C2CFA-000000000D7C2DED
void __cdecl GCGSkill::onRoundChange(GCGSkill *const this)
{
  common::milog::MiLogStream *v1; // rbx
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rbx
  unsigned int val; // [rsp+18h] [rbp-38h] BYREF
  int RoundUsedTimes; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  if ( GCGSkill::getRoundUsedTimes(this) > 0 )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/skill/gcg_skill.cpp",
      "onRoundChange",
      178);
    v1 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v6, (const char (*)[11])"skill_id: ");
    val = GCGSkill::getSkillId(this);
    v2 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
    v3 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           v2,
           (const char (*)[22])" before clear count: ");
    RoundUsedTimes = GCGSkill::getRoundUsedTimes(this);
    common::milog::MiLogStream::operator<<<int,(int *)0>(v3, &RoundUsedTimes);
    common::milog::MiLogStream::~MiLogStream(&v6);
    GCGSkill::resetRoundUsedCount(this);
  }
};

// Line 184: range 000000000D7C2DEE-000000000D7C2EB7
void __cdecl GCGSkill::onSkillEnd(GCGSkill *const this, const GCGSkillUseParam *param, const GCGSkillResult *result)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  GCGGameMode::onCardBeingHurt(this->game_mode_, &result->being_hurt_result_vec, &result->die_character_vec);
  if ( !std::vector<unsigned int>::empty(&result->die_character_vec) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    GCGGameMode::onCardDie(this->game_mode_, &result->die_character_vec);
  }
};

// Line 197: range 000000000D7C2EB8-000000000D7C2EF3
void __cdecl GCGSkill::refreshActivate(GCGSkill *const this)
{
  if ( GCGSkill::isActivated(this) )
  {
    GCGSkill::addUseCount(this, 0);
    GCGSkill::setDeactive(this);
  }
};

// Line 206: range 000000000D7C2EF4-000000000D7C2F5C
std::pair<data::GCGDeclaredValueType,unsigned int> __cdecl GCGSkill::getDeclaredValueByKey(
        const GCGSkill *const this,
        const std::string *declared_key)
{
  const GCGConfigMgr *Config; // rdi

  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  Config = GCGGameMode::getConfig(this->game_mode_);
  return GCGConfigMgr::getSkillDeclaredValue(Config, &this->skill_config_name_, declared_key);
};

// Line 212: range 000000000D7C2F5E-000000000D7C31D8
bool __cdecl GCGSkill::isSkillReachTotalLimit(const GCGSkill *const this)
{
  std::tuple_element<1,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *v2; // rax
  unsigned int TotalUsedTimes; // edi
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  int val; // [rsp+10h] [rbp-70h] BYREF
  data::GCGTriggerLimitType type; // [rsp+14h] [rbp-6Ch]
  std::vector<data::ConfigGCGLimit>::const_iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  std::vector<data::ConfigGCGLimit>::const_iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  const std::vector<data::ConfigGCGLimit> *__for_range; // [rsp+28h] [rbp-58h]
  const data::ConfigGCGLimit *limit; // [rsp+30h] [rbp-50h]
  std::tuple_element<0,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *_; // [rsp+38h] [rbp-48h]
  std::tuple_element<1,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *limit_value; // [rsp+40h] [rbp-40h]
  std::pair<data::GCGDeclaredValueType,unsigned int> __in; // [rsp+48h] [rbp-38h] BYREF
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-30h] BYREF

  if ( std::vector<data::ConfigGCGLimit>::empty(&this->skill_config_.limit_list) )
    return 0;
  __for_range = &this->skill_config_.limit_list;
  __for_begin._M_current = std::vector<data::ConfigGCGLimit>::begin(&this->skill_config_.limit_list)._M_current;
  __for_end._M_current = std::vector<data::ConfigGCGLimit>::end(&this->skill_config_.limit_list)._M_current;
  while ( __gnu_cxx::operator!=<data::ConfigGCGLimit const*,std::vector<data::ConfigGCGLimit>>(&__for_begin, &__for_end) )
  {
    limit = __gnu_cxx::__normal_iterator<data::ConfigGCGLimit const*,std::vector<data::ConfigGCGLimit>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)limit >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)limit >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(limit);
    }
    type = limit->type;
    if ( type == WorkTimesToDiscard )
    {
      __in = GCGSkill::getDeclaredValueByKey(this, &limit->declare_value.key);
      _ = std::get<0ul,data::GCGDeclaredValueType,unsigned int>(&__in);
      v2 = std::get<1ul,data::GCGDeclaredValueType,unsigned int>(&__in);
      limit_value = v2;
      if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v2);
      }
      if ( *limit_value )
      {
        TotalUsedTimes = GCGSkill::getTotalUsedTimes(this);
        if ( *(_BYTE *)(((unsigned __int64)limit_value >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)limit_value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)limit_value >> 3)
                                                                        + 0x7FFF8000) )
        {
          TotalUsedTimes = (unsigned int)limit_value;
          __asan_report_load4(limit_value);
        }
        if ( TotalUsedTimes >= *limit_value )
        {
          common::milog::MiLogStream::create(
            &v17,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/skill/gcg_skill.cpp",
            "isSkillReachTotalLimit",
            234);
          v4 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                 &v17,
                 (const char (*)[54])"isSkillReachTotalLimit reach limit total_used_count_:");
          val = GCGSkill::getTotalUsedTimes(this);
          v5 = common::milog::MiLogStream::operator<<<int,(int *)0>(v4, &val);
          v6 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v5, (const char (*)[14])" limit_value:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, limit_value);
          common::milog::MiLogStream::~MiLogStream(&v17);
          return 1;
        }
      }
    }
    __gnu_cxx::__normal_iterator<data::ConfigGCGLimit const*,std::vector<data::ConfigGCGLimit>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 243: range 000000000D7C31DA-000000000D7C33E7
bool __cdecl GCGSkill::isLimitValid(const GCGSkill *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  bool v4; // r15
  uint32_t *p_limit_value; // rax
  bool result; // al
  std::vector<GCGLimitsInfo>::iterator __for_begin; // [rsp+10h] [rbp-B0h] BYREF
  std::vector<GCGLimitsInfo>::iterator __for_end; // [rsp+18h] [rbp-A8h] BYREF
  std::vector<GCGLimitsInfo> *__for_range; // [rsp+20h] [rbp-A0h]
  GCGLimitsInfo *limits_info; // [rsp+28h] [rbp-98h]
  char v11[144]; // [rsp+30h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 19 limits_info_vec:250";
  *(_QWORD *)(v1 + 16) = GCGSkill::isLimitValid;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  if ( std::vector<data::ConfigGCGLimit>::empty(&this->skill_config_.limit_list) )
  {
    v4 = 1;
  }
  else
  {
    GCGSkill::getRestSkillLimits((std::vector<GCGLimitsInfo> *)(v1 + 32), this, 0);
    __for_range = (std::vector<GCGLimitsInfo> *)(v1 + 32);
    __for_begin._M_current = std::vector<GCGLimitsInfo>::begin((std::vector<GCGLimitsInfo> *const)(v1 + 32))._M_current;
    __for_end._M_current = std::vector<GCGLimitsInfo>::end((std::vector<GCGLimitsInfo> *const)(v1 + 32))._M_current;
    while ( __gnu_cxx::operator!=<GCGLimitsInfo *,std::vector<GCGLimitsInfo>>(&__for_begin, &__for_end) )
    {
      limits_info = __gnu_cxx::__normal_iterator<GCGLimitsInfo *,std::vector<GCGLimitsInfo>>::operator*(&__for_begin);
      p_limit_value = &limits_info->limit_value;
      if ( *(_BYTE *)(((unsigned __int64)p_limit_value >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_limit_value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_limit_value >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(p_limit_value);
      }
      if ( limits_info->limit_value )
      {
        v4 = 1;
        goto LABEL_14;
      }
      __gnu_cxx::__normal_iterator<GCGLimitsInfo *,std::vector<GCGLimitsInfo>>::operator++(&__for_begin);
    }
    v4 = 0;
LABEL_14:
    std::vector<GCGLimitsInfo>::~vector((std::vector<GCGLimitsInfo> *const)(v1 + 32));
  }
  result = v4;
  if ( v11 == (char *)v1 )
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
  return result;
};

// Line 264: range 000000000D7C33E8-000000000D7C3D0E
std::vector<GCGLimitsInfo> *__cdecl GCGSkill::getRestSkillLimits(
        std::vector<GCGLimitsInfo> *retstr,
        const GCGSkill *const this,
        bool is_has_need_notify)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // r14
  std::tuple_element<1,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *v7; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  unsigned int *v9; // r8
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::tuple_element<1,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  uint32_t RoundUsedTimes; // eax
  int32_t v18; // eax
  uint32_t v19; // eax
  uint32_t TotalUsedTimes; // eax
  int32_t v21; // eax
  uint32_t v22; // eax
  uint32_t v23; // eax
  int32_t v24; // eax
  uint32_t v25; // eax
  common::milog::MiLogStream *v26; // rax
  unsigned int __args_0; // [rsp+24h] [rbp-14Ch] BYREF
  uint32_t limit_value; // [rsp+28h] [rbp-148h]
  data::GCGTriggerLimitType limit_type; // [rsp+2Ch] [rbp-144h]
  std::vector<data::ConfigGCGLimit>::const_iterator __for_begin; // [rsp+30h] [rbp-140h] BYREF
  std::vector<data::ConfigGCGLimit>::const_iterator __for_end; // [rsp+38h] [rbp-138h] BYREF
  const std::vector<data::ConfigGCGLimit> *__for_range; // [rsp+40h] [rbp-130h]
  const data::ConfigGCGLimit *limit; // [rsp+48h] [rbp-128h]
  std::tuple_element<0,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *__0; // [rsp+50h] [rbp-120h]
  std::tuple_element<1,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *tmp_limit_value; // [rsp+58h] [rbp-118h]
  std::tuple_element<0,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *_; // [rsp+60h] [rbp-110h]
  std::tuple_element<1,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *token_type_value; // [rsp+68h] [rbp-108h]
  std::pair<data::GCGDeclaredValueType,unsigned int> __in; // [rsp+70h] [rbp-100h] BYREF
  std::pair<data::GCGDeclaredValueType,unsigned int> DeclaredValueByKey; // [rsp+78h] [rbp-F8h] BYREF
  common::milog::MiLogStream v42; // [rsp+80h] [rbp-F0h] BYREF
  common::milog::MiLogStream v43; // [rsp+A0h] [rbp-D0h] BYREF
  std::string val; // [rsp+C0h] [rbp-B0h] BYREF
  char v45[144]; // [rsp+E0h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 19 rest_limits_num:312 64 16 18 owner_card_ptr:272";
  *(_QWORD *)(v3 + 16) = GCGSkill::getRestSkillLimits;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  std::vector<GCGLimitsInfo>::vector(retstr);
  if ( *(char *)(((unsigned __int64)&this->is_reaction_skill_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_reaction_skill_);
  if ( this->is_reaction_skill_ )
    goto LABEL_53;
  GCGSkill::getOwnerCard((const GCGSkill *const)(v3 + 64));
  if ( !std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v3 + 64), 0LL) )
  {
    __for_range = &this->skill_config_.limit_list;
    __for_begin._M_current = std::vector<data::ConfigGCGLimit>::begin(&this->skill_config_.limit_list)._M_current;
    __for_end._M_current = std::vector<data::ConfigGCGLimit>::end(&this->skill_config_.limit_list)._M_current;
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::ConfigGCGLimit const*,std::vector<data::ConfigGCGLimit>>(
              &__for_begin,
              &__for_end) )
        goto LABEL_52;
      limit = __gnu_cxx::__normal_iterator<data::ConfigGCGLimit const*,std::vector<data::ConfigGCGLimit>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)limit >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)limit >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(limit);
      }
      limit_type = limit->type;
      limit_value = 0;
      if ( !is_has_need_notify )
        goto LABEL_17;
      if ( *(char *)(((unsigned __int64)&limit->is_need_notify >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&limit->is_need_notify);
      if ( limit->is_need_notify )
      {
LABEL_17:
        if ( limit_type == BindToToken )
        {
          __in = GCGSkill::getDeclaredValueByKey(this, &limit->declare_value.key);
          _ = std::get<0ul,data::GCGDeclaredValueType,unsigned int>(&__in);
          v7 = std::get<1ul,data::GCGDeclaredValueType,unsigned int>(&__in);
          token_type_value = v7;
          if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v7);
          }
          if ( *token_type_value )
          {
            v8 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            if ( *(_BYTE *)(((unsigned __int64)token_type_value >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)token_type_value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)token_type_value >> 3)
                                                                                 + 0x7FFF8000) )
            {
              __asan_report_load4(token_type_value);
            }
            limit_value = GCGCard::getToken(v8, (GCGTokenType)*token_type_value);
          }
          else
          {
            common::milog::MiLogStream::create(
              &v42,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/card_game/skill/gcg_skill.cpp",
              "getRestSkillLimits",
              297);
            v10 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    &v42,
                    (const char (*)[18])"token_type_value:");
            v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, token_type_value);
            v12 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v11, (const char (*)[20])off_1BA20EE0);
            GCGSkill::getName[abi:cxx11](&val, this);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, &val);
            std::string::~string(&val);
            common::milog::MiLogStream::~MiLogStream(&v42);
          }
        }
        else
        {
          DeclaredValueByKey = GCGSkill::getDeclaredValueByKey(this, &limit->declare_value.key);
          __0 = std::get<0ul,data::GCGDeclaredValueType,unsigned int>(&DeclaredValueByKey);
          v13 = std::get<1ul,data::GCGDeclaredValueType,unsigned int>(&DeclaredValueByKey);
          tmp_limit_value = v13;
          if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v13);
          }
          if ( *tmp_limit_value )
          {
            if ( *(_BYTE *)(((unsigned __int64)tmp_limit_value >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)tmp_limit_value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)tmp_limit_value >> 3)
                                                                                + 0x7FFF8000) )
            {
              __asan_report_load4(tmp_limit_value);
            }
            limit_value = *tmp_limit_value;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v43,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/card_game/skill/gcg_skill.cpp",
              "getRestSkillLimits",
              305);
            v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    &v43,
                    (const char (*)[13])"skill limit:");
            __args_0 = limit_type;
            v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &__args_0);
            v16 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                    v15,
                    (const char (*)[23])" limit is zero, skill:");
            GCGSkill::getName[abi:cxx11](&val, this);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, &val);
            std::string::~string(&val);
            common::milog::MiLogStream::~MiLogStream(&v43);
          }
        }
        *(_DWORD *)(v3 + 48) = 0;
        if ( limit_type )
        {
          switch ( limit_type )
          {
            case Game:
              TotalUsedTimes = GCGSkill::getTotalUsedTimes(this);
              if ( limit_value <= TotalUsedTimes )
              {
                v22 = 0;
              }
              else
              {
                v21 = GCGSkill::getTotalUsedTimes(this);
                v22 = limit_value - v21;
              }
              *(_DWORD *)(v3 + 48) = v22;
              break;
            case WorkTimesToDiscard:
              v23 = GCGSkill::getTotalUsedTimes(this);
              if ( limit_value <= v23 )
              {
                v25 = 0;
              }
              else
              {
                v24 = GCGSkill::getTotalUsedTimes(this);
                v25 = limit_value - v24;
              }
              *(_DWORD *)(v3 + 48) = v25;
              break;
            case BindToToken:
              *(_DWORD *)(v3 + 48) = limit_value;
              break;
            default:
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&val,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/card_game/skill/gcg_skill.cpp",
                "getRestSkillLimits",
                331);
              v26 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      (common::milog::MiLogStream *const)&val,
                      (const char (*)[22])"unsupport limit_type:");
              __args_0 = limit_type;
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &__args_0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
              goto LABEL_51;
          }
        }
        else
        {
          RoundUsedTimes = GCGSkill::getRoundUsedTimes(this);
          if ( limit_value <= RoundUsedTimes )
          {
            v19 = 0;
          }
          else
          {
            v18 = GCGSkill::getRoundUsedTimes(this);
            v19 = limit_value - v18;
          }
          *(_DWORD *)(v3 + 48) = v19;
        }
        __args_0 = limit_type;
        std::vector<GCGLimitsInfo>::emplace_back<unsigned int,unsigned int &>(
          retstr,
          &__args_0,
          (unsigned int *)(v3 + 48),
          &__args_0,
          v9);
      }
LABEL_51:
      __gnu_cxx::__normal_iterator<data::ConfigGCGLimit const*,std::vector<data::ConfigGCGLimit>>::operator++(&__for_begin);
    }
  }
  common::milog::MiLogStream::create(
    &v43,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/card_game/skill/gcg_skill.cpp",
    "getRestSkillLimits",
    275);
  v6 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
         &v43,
         (const char (*)[26])"owner_card_ptr is nullptr");
  GCGSkill::getName[abi:cxx11](&val, this);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v43);
LABEL_52:
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 64));
LABEL_53:
  if ( v45 == (char *)v3 )
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
  return retstr;
};

// Line 341: range 000000000D7C3D10-000000000D7C41CD
void __cdecl GCGSkill::notifySkillLimitsChange(const GCGSkill *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  GCGControllerValue ControllerId; // r14d
  std::__shared_ptr_access<GCGMsgSkillLimitsChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<GCGMsgSkillLimitsChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  GCGSkillLimitsInfo *v10; // rdx
  GCGGameMode *game_mode; // r14
  std::map<unsigned int,std::vector<GCGSkillLimitsInfo>>::mapped_type *skill_limits_info_vec; // [rsp+18h] [rbp-128h]
  std::shared_ptr<GCGMessage> p_msg; // [rsp+20h] [rbp-120h] BYREF
  std::vector<GCGLimitsInfo> __x; // [rsp+30h] [rbp-110h] BYREF
  char v15[240]; // [rsp+50h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 4 13 card_guid:358 64 16 18 owner_card_ptr:347 96 16 11 msg_ptr:366 128 32 21 skill_limits_info:359";
  *(_QWORD *)(v1 + 16) = GCGSkill::notifySkillLimitsChange;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862725] = -202116109;
  if ( *(char *)(((unsigned __int64)&this->is_reaction_skill_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_reaction_skill_);
  if ( !this->is_reaction_skill_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_config_need_limits_notify_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 100) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_config_need_limits_notify_ >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_config_need_limits_notify_);
    }
    if ( this->is_config_need_limits_notify_ )
    {
      std::weak_ptr<GCGCard>::lock((const std::weak_ptr<GCGCard> *const)(v1 + 64));
      if ( !std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v1 + 64), 0LL) )
      {
        v4 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        if ( (unsigned int)GCGCard::getZoneType(v4) > GCG_ZONE_HAND )
        {
          v5 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
          *(_DWORD *)(v1 + 48) = GCGCard::getGuid(v5);
          GCGSkillLimitsInfo::GCGSkillLimitsInfo((GCGSkillLimitsInfo *const)(v1 + 128));
          if ( *(_BYTE *)(((unsigned __int64)&this->skill_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->skill_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->skill_id_);
          }
          *(_DWORD *)(v1 + 128) = this->skill_id_;
          GCGSkill::getRestSkillLimits(&__x, this, 1);
          std::vector<GCGLimitsInfo>::operator=((std::vector<GCGLimitsInfo> *const)(v1 + 136), &__x);
          std::vector<GCGLimitsInfo>::~vector(&__x);
          if ( !std::vector<GCGLimitsInfo>::empty((const std::vector<GCGLimitsInfo> *const)(v1 + 136)) )
          {
            common::tools::perf::make_shared<GCGMsgSkillLimitsChange>();
            v6 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
            ControllerId = GCGCard::getControllerId(v6);
            v8 = std::__shared_ptr_access<GCGMsgSkillLimitsChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgSkillLimitsChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            if ( *(_BYTE *)(((unsigned __int64)&v8->controller_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v8->controller_id >> 3) + 0x7FFF8000) <= 3 )
            {
              v8 = (std::__shared_ptr_access<GCGMsgSkillLimitsChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v8->controller_id);
            }
            v8->controller_id = ControllerId;
            v9 = std::__shared_ptr_access<GCGMsgSkillLimitsChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgSkillLimitsChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            skill_limits_info_vec = std::map<unsigned int,std::vector<GCGSkillLimitsInfo>>::operator[](
                                      &v9->card_skill_limits_map,
                                      (const std::map<unsigned int,std::vector<GCGSkillLimitsInfo>>::key_type *)(v1 + 48));
            v10 = std::move<GCGSkillLimitsInfo &>((GCGSkillLimitsInfo *)(v1 + 128));
            std::vector<GCGSkillLimitsInfo>::emplace_back<GCGSkillLimitsInfo>(skill_limits_info_vec, v10, v10);
            if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->game_mode_);
            game_mode = this->game_mode_;
            std::shared_ptr<GCGMessage>::shared_ptr<GCGMsgSkillLimitsChange,void>(
              &p_msg,
              (const std::shared_ptr<GCGMsgSkillLimitsChange> *)(v1 + 96));
            GCGGameMode::sendMessage(game_mode, &p_msg);
            std::shared_ptr<GCGMessage>::~shared_ptr(&p_msg);
            std::shared_ptr<GCGMsgSkillLimitsChange>::~shared_ptr((std::shared_ptr<GCGMsgSkillLimitsChange> *const)(v1 + 96));
          }
          GCGSkillLimitsInfo::~GCGSkillLimitsInfo((GCGSkillLimitsInfo *const)(v1 + 128));
        }
      }
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v1 + 64));
    }
  }
  if ( v15 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 375: range 000000000D7C41CE-000000000D7C44D4
void __cdecl GCGSkill::addUseCount(GCGSkill *const this, bool is_trigger_on_use)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  GCGSkillRuntimeData *RuntimeData; // rax
  GCGSkillRuntimeData *v6; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  GCGDuel *Duel; // rax
  GCGRoundVarMgr *RoundVarMgr; // rax
  GCGControllerValue cur_controller_id; // [rsp+14h] [rbp-7Ch]
  GCGField *field; // [rsp+18h] [rbp-78h]
  char v13[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 18 owner_card_ptr:388";
  *(_QWORD *)(v2 + 16) = GCGSkill::addUseCount;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  RuntimeData = GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode>::getRuntimeData(&this->GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode>);
  if ( *(_BYTE *)(((unsigned __int64)&RuntimeData->round_used_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)RuntimeData + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&RuntimeData->round_used_count_ >> 3)
                                                              + 0x7FFF8000) )
  {
    RuntimeData = (GCGSkillRuntimeData *)__asan_report_load4(&RuntimeData->round_used_count_);
  }
  ++RuntimeData->round_used_count_;
  v6 = GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode>::getRuntimeData(&this->GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode>);
  if ( *(_BYTE *)(((unsigned __int64)&v6->total_used_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v6->total_used_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    v6 = (GCGSkillRuntimeData *)__asan_report_load4(&v6->total_used_count_);
  }
  ++v6->total_used_count_;
  GCGSkill::updateLimitInfo(this);
  GCGSkill::notifySkillLimitsChange(this);
  if ( is_trigger_on_use )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_add_ai_direct_use_skill_num_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 65) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_add_ai_direct_use_skill_num_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_add_ai_direct_use_skill_num_);
    }
    if ( this->is_add_ai_direct_use_skill_num_ )
    {
      std::weak_ptr<GCGCard>::lock((const std::weak_ptr<GCGCard> *const)(v2 + 32));
      if ( !std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v2 + 32), 0LL) )
      {
        v7 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        if ( GCGCard::getCardType(v7) == GCG_CARD_CHARACTER )
        {
          v8 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          cur_controller_id = GCGCard::getControllerId(v8);
          if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->game_mode_);
          Duel = GCGGameMode::getDuel(this->game_mode_);
          field = GCGDuel::getField(Duel, cur_controller_id);
          RoundVarMgr = GCGField::getRoundVarMgr(field);
          GCGRoundVarMgr::addAIDirectUseSkillTotalNum(RoundVarMgr);
        }
      }
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v2 + 32));
    }
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 408: range 000000000D7C44D6-000000000D7C47AE
void __cdecl GCGSkill::notifyUseSkill(const GCGSkill *const this, const GCGSkillUseParam *param)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t skill_id; // r14d
  std::__shared_ptr_access<GCGMsgUseSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t Guid; // r14d
  std::__shared_ptr_access<GCGMsgUseSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  uint32_t *p_card_guid; // rax
  GCGGameMode *game_mode; // r14
  std::shared_ptr<GCGMessage> p_msg; // [rsp+10h] [rbp-A0h] BYREF
  char v13[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 msg_ptr:409 64 16 12 card_ptr:411";
  *(_QWORD *)(v2 + 16) = GCGSkill::notifyUseSkill;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  common::tools::perf::make_shared<GCGMsgUseSkill>();
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->skill_id_);
  }
  skill_id = this->skill_id_;
  v6 = std::__shared_ptr_access<GCGMsgUseSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgUseSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&v6->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v6->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    v6 = (std::__shared_ptr_access<GCGMsgUseSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v6->skill_id);
  }
  v6->skill_id = skill_id;
  std::weak_ptr<GCGCard>::lock((const std::weak_ptr<GCGCard> *const)(v2 + 64));
  if ( std::operator!=<GCGCard>((const std::shared_ptr<GCGCard> *)(v2 + 64), 0LL) )
  {
    v7 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    Guid = GCGCard::getGuid(v7);
    v9 = std::__shared_ptr_access<GCGMsgUseSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgUseSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    p_card_guid = &v9->card_guid;
    if ( *(_BYTE *)(((unsigned __int64)p_card_guid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_card_guid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_card_guid >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(p_card_guid);
    }
    v9->card_guid = Guid;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  game_mode = this->game_mode_;
  std::shared_ptr<GCGMessage>::shared_ptr<GCGMsgUseSkill,void>(
    &p_msg,
    (const std::shared_ptr<GCGMsgUseSkill> *)(v2 + 32));
  GCGGameMode::sendMessage(game_mode, &p_msg);
  std::shared_ptr<GCGMessage>::~shared_ptr(&p_msg);
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v2 + 64));
  std::shared_ptr<GCGMsgUseSkill>::~shared_ptr((std::shared_ptr<GCGMsgUseSkill> *const)(v2 + 32));
  if ( v13 == (char *)v2 )
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
};

// Line 420: range 000000000D7C47B0-000000000D7C4A88
void __cdecl GCGSkill::notifyUseSkillEnd(const GCGSkill *const this, const GCGSkillUseParam *param)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t skill_id; // r14d
  std::__shared_ptr_access<GCGMsgUseSkillEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t Guid; // r14d
  std::__shared_ptr_access<GCGMsgUseSkillEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  uint32_t *p_card_guid; // rax
  GCGGameMode *game_mode; // r14
  std::shared_ptr<GCGMessage> p_msg; // [rsp+10h] [rbp-A0h] BYREF
  char v13[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 msg_ptr:421 64 16 12 card_ptr:423";
  *(_QWORD *)(v2 + 16) = GCGSkill::notifyUseSkillEnd;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  common::tools::perf::make_shared<GCGMsgUseSkillEnd>();
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->skill_id_);
  }
  skill_id = this->skill_id_;
  v6 = std::__shared_ptr_access<GCGMsgUseSkillEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgUseSkillEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&v6->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v6->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    v6 = (std::__shared_ptr_access<GCGMsgUseSkillEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v6->skill_id);
  }
  v6->skill_id = skill_id;
  std::weak_ptr<GCGCard>::lock((const std::weak_ptr<GCGCard> *const)(v2 + 64));
  if ( std::operator!=<GCGCard>((const std::shared_ptr<GCGCard> *)(v2 + 64), 0LL) )
  {
    v7 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    Guid = GCGCard::getGuid(v7);
    v9 = std::__shared_ptr_access<GCGMsgUseSkillEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgUseSkillEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    p_card_guid = &v9->card_guid;
    if ( *(_BYTE *)(((unsigned __int64)p_card_guid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_card_guid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_card_guid >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(p_card_guid);
    }
    v9->card_guid = Guid;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  game_mode = this->game_mode_;
  std::shared_ptr<GCGMessage>::shared_ptr<GCGMsgUseSkillEnd,void>(
    &p_msg,
    (const std::shared_ptr<GCGMsgUseSkillEnd> *)(v2 + 32));
  GCGGameMode::sendMessage(game_mode, &p_msg);
  std::shared_ptr<GCGMessage>::~shared_ptr(&p_msg);
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v2 + 64));
  std::shared_ptr<GCGMsgUseSkillEnd>::~shared_ptr((std::shared_ptr<GCGMsgUseSkillEnd> *const)(v2 + 32));
  if ( v13 == (char *)v2 )
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
};

// Line 432: range 000000000D7C4A8A-000000000D7C4B30
bool __cdecl GCGSkill::isHasTag(const GCGSkill *const this, data::GCGSkillTagType tag_type)
{
  const GCGConfigMgr *Config; // rax
  const GCGGameExcelConfigMgr *gcg_game_config_mgr; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  Config = GCGGameMode::getConfig(this->game_mode_);
  gcg_game_config_mgr = GCGConfigMgr::getGCGGameExcelConfigMgr(Config);
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->skill_id_);
  }
  return GCGGameExcelConfigMgr::isSkillHasTag(gcg_game_config_mgr, this->skill_id_, tag_type);
};

// Line 438: range 000000000D7C4B32-000000000D7C4B61
std::map<data::GCGCostType,unsigned int> *__cdecl GCGSkill::getCost(
        std::map<data::GCGCostType,unsigned int> *retstr,
        const GCGSkill *const this)
{
  std::map<data::GCGCostType,unsigned int>::map(retstr, &this->cost_map_);
  return retstr;
};

// Line 444: range 000000000D7C4B62-000000000D7C4C84
uint32_t __cdecl GCGSkill::getCostNum(const GCGSkill *const this)
{
  uint32_t total_cost_num; // [rsp+1Ch] [rbp-34h]
  std::map<data::GCGCostType,unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::map<data::GCGCostType,unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const std::map<data::GCGCostType,unsigned int> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<const data::GCGCostType,unsigned int> *v6; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<const data::GCGCostType,unsigned int> >::type *cost_type; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<const data::GCGCostType,unsigned int> >::type *cost_num; // [rsp+48h] [rbp-8h]

  total_cost_num = 0;
  __for_range = &this->cost_map_;
  __for_begin._M_node = std::map<data::GCGCostType,unsigned int>::begin(&this->cost_map_)._M_node;
  __for_end._M_node = std::map<data::GCGCostType,unsigned int>::end(&this->cost_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<data::GCGCostType const,unsigned int>>::operator*(&__for_begin);
    cost_type = std::get<0ul,data::GCGCostType const,unsigned int>(v6);
    cost_num = (std::tuple_element<1,const std::pair<const data::GCGCostType,unsigned int> >::type *)std::get<1ul,data::GCGCostType const,unsigned int>(v6);
    if ( *(_BYTE *)(((unsigned __int64)cost_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)cost_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cost_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(cost_type);
    }
    if ( *cost_type )
    {
      if ( *(_BYTE *)(((unsigned __int64)cost_num >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)cost_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cost_num >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(cost_num);
      }
      total_cost_num += *cost_num;
    }
    std::_Rb_tree_const_iterator<std::pair<data::GCGCostType const,unsigned int>>::operator++(&__for_begin);
  }
  return total_cost_num;
};

// Line 457: range 000000000D7C4C86-000000000D7C4DD0
void __cdecl GCGSkill::setCost(GCGSkill *const this, const std::vector<data::GCGCost> *cost_vec)
{
  uint32_t *p_count; // rax
  uint32_t count; // ebx
  std::map<data::GCGCostType,unsigned int>::mapped_type *v4; // rax
  uint32_t *v5; // rdx
  std::map<data::GCGCostType,unsigned int>::key_type __x; // [rsp+1Ch] [rbp-34h] BYREF
  std::vector<data::GCGCost>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::vector<data::GCGCost>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const std::vector<data::GCGCost> *__for_range; // [rsp+30h] [rbp-20h]
  const data::GCGCost *cost; // [rsp+38h] [rbp-18h]

  std::map<data::GCGCostType,unsigned int>::clear(&this->cost_map_);
  __for_range = cost_vec;
  __for_begin._M_current = std::vector<data::GCGCost>::begin(cost_vec)._M_current;
  __for_end._M_current = std::vector<data::GCGCost>::end(cost_vec)._M_current;
  while ( __gnu_cxx::operator!=<data::GCGCost const*,std::vector<data::GCGCost>>(&__for_begin, &__for_end) )
  {
    cost = __gnu_cxx::__normal_iterator<data::GCGCost const*,std::vector<data::GCGCost>>::operator*(&__for_begin);
    p_count = &cost->count;
    if ( *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_count);
    }
    count = cost->count;
    v4 = std::map<data::GCGCostType,unsigned int>::operator[](&this->cost_map_, &cost->cost_type);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v4);
    }
    *v5 = count;
    __gnu_cxx::__normal_iterator<data::GCGCost const*,std::vector<data::GCGCost>>::operator++(&__for_begin);
  }
  __x = GCG_COST_INVALID;
  std::map<data::GCGCostType,unsigned int>::erase(&this->cost_map_, &__x);
};

// Line 467: range 000000000D7C4DD2-000000000D7C4DE5
const std::unordered_set<unsigned int> *__cdecl GCGSkill::getConfigAIBlockSet(const GCGSkill *const this)
{
  return &this->config_ai_block_card_id_set_;
};

// Line 472: range 000000000D7C4DE6-000000000D7C53D9
int32_t __cdecl GCGSkill::setConfig(
        GCGSkill *const this,
        const data::GCGSkillExcelConfig *skill_config,
        bool is_reaction)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  uint32_t id; // ecx
  int32_t result; // eax
  uint32_t energy_recharge; // ecx
  bool is_hidden; // cl
  uint32_t block_ai_summon_num; // ecx
  uint32_t block_ai_card_sum_num; // ecx
  bool v12; // si
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v13; // rax
  _DWORD *v14; // rdx
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-98h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-90h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-88h]
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-80h] BYREF
  char v21[96]; // [rsp+60h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 11 card_id:488";
  *(_QWORD *)(v3 + 16) = GCGSkill::setConfig;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&skill_config->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&skill_config->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&skill_config->id);
  }
  id = skill_config->id;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->skill_id_);
  }
  if ( id == this->skill_id_ )
  {
    GCGSkill::setCost(this, &skill_config->cost_list);
    if ( *(_BYTE *)(((unsigned __int64)&skill_config->energy_recharge >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&skill_config->energy_recharge >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&skill_config->energy_recharge);
    }
    energy_recharge = skill_config->energy_recharge;
    if ( *(_BYTE *)(((unsigned __int64)&this->energy_recharge_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->energy_recharge_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->energy_recharge_);
    }
    this->energy_recharge_ = energy_recharge;
    if ( *(char *)(((unsigned __int64)&this->is_reaction_skill_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_reaction_skill_);
    this->is_reaction_skill_ = is_reaction;
    if ( *(char *)(((unsigned __int64)&skill_config->is_hidden >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&skill_config->is_hidden);
    is_hidden = skill_config->is_hidden;
    if ( *(char *)(((unsigned __int64)&this->is_hidden_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_hidden_);
    this->is_hidden_ = is_hidden;
    if ( *(_BYTE *)(((unsigned __int64)&skill_config->block_ai_summon_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)skill_config - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&skill_config->block_ai_summon_num >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4(&skill_config->block_ai_summon_num);
    }
    block_ai_summon_num = skill_config->block_ai_summon_num;
    if ( *(_BYTE *)(((unsigned __int64)&this->config_block_ai_summon_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_block_ai_summon_num_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store4(&this->config_block_ai_summon_num_);
    }
    this->config_block_ai_summon_num_ = block_ai_summon_num;
    if ( *(_BYTE *)(((unsigned __int64)&skill_config->block_ai_card_sum_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&skill_config->block_ai_card_sum_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&skill_config->block_ai_card_sum_num);
    }
    block_ai_card_sum_num = skill_config->block_ai_card_sum_num;
    if ( *(_BYTE *)(((unsigned __int64)&this->config_block_ai_card_sum_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->config_block_ai_card_sum_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->config_block_ai_card_sum_num_);
    }
    this->config_block_ai_card_sum_num_ = block_ai_card_sum_num;
    if ( *(char *)(((unsigned __int64)&skill_config->is_not_add_ai_direct_use_skill_num >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&skill_config->is_not_add_ai_direct_use_skill_num);
    v12 = !skill_config->is_not_add_ai_direct_use_skill_num;
    if ( *(_BYTE *)(((unsigned __int64)&this->is_add_ai_direct_use_skill_num_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 65) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_add_ai_direct_use_skill_num_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_store1(&this->is_add_ai_direct_use_skill_num_);
    }
    this->is_add_ai_direct_use_skill_num_ = v12;
    std::unordered_set<unsigned int>::clear(&this->config_ai_block_card_id_set_);
    __for_range = &skill_config->block_ai_card_list;
    __for_begin._M_current = std::vector<unsigned int>::begin(&skill_config->block_ai_card_list)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&skill_config->block_ai_card_list)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v13 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v14 = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      *(_DWORD *)(v3 + 32) = *v14;
      std::unordered_set<unsigned int>::insert(
        &this->config_ai_block_card_id_set_,
        (const std::unordered_set<unsigned int>::value_type *)(v3 + 32));
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    result = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/skill/gcg_skill.cpp",
      "setConfig",
      476);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v20, (const char (*)[20])"skill id not match.");
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = -1;
  }
  if ( v21 == (char *)v3 )
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

// Line 497: range 000000000D7C5580-000000000D7C5D62
void __cdecl GCGSkill::initAllEffects(GCGSkill *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // r14
  std::__shared_ptr_access<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  unsigned __int64 v9; // rdx
  std::__shared_ptr_access<GCGEffectBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  unsigned __int64 v11; // rdx
  std::tuple_element<1,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *v12; // rax
  std::vector<std::shared_ptr<data::ConfigGCGEffect>>::iterator __for_begin; // [rsp+18h] [rbp-118h] BYREF
  std::vector<std::shared_ptr<data::ConfigGCGEffect>>::iterator __for_end; // [rsp+20h] [rbp-110h] BYREF
  std::vector<std::shared_ptr<data::ConfigGCGEffect>> *__for_range; // [rsp+28h] [rbp-108h]
  std::vector<data::ConfigGCGLimit> *__for_range_0; // [rsp+30h] [rbp-100h]
  const data::ConfigGCGLimit *limit; // [rsp+38h] [rbp-F8h]
  std::tuple_element<0,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *_; // [rsp+40h] [rbp-F0h]
  std::tuple_element<1,std::pair<data::GCGDeclaredValueType,unsigned int> >::type *token_type_value; // [rsp+48h] [rbp-E8h]
  std::shared_ptr<data::ConfigGCGEffect> *config_effect_ptr; // [rsp+50h] [rbp-E0h]
  std::pair<data::GCGDeclaredValueType,unsigned int> __in; // [rsp+58h] [rbp-D8h] BYREF
  common::milog::MiLogStream v22; // [rsp+60h] [rbp-D0h] BYREF
  char v23[176]; // [rsp+80h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 28 refresh_limit_token_func:528 64 8 16 create_param:504 96 16 14 effect_ptr:511";
  *(_QWORD *)(v1 + 16) = GCGSkill::initAllEffects;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202178560;
  if ( !std::vector<std::shared_ptr<GCGEffectBase>>::empty(&this->effect_ptr_vec_) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_skill.cpp",
      "initAllEffects",
      501);
    v4 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v22,
           (const char (*)[36])"effect_ptr_vec_ is not empty, size:");
    __in = (std::pair<data::GCGDeclaredValueType,unsigned int>)std::vector<std::shared_ptr<GCGEffectBase>>::size(&this->effect_ptr_vec_);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v4, (const unsigned __int64 *)&__in);
    common::milog::MiLogStream::~MiLogStream(&v22);
    std::vector<std::shared_ptr<GCGEffectBase>>::clear(&this->effect_ptr_vec_);
  }
  *(_QWORD *)(v1 + 64) = this;
  __for_range = &this->skill_config_.effect_list;
  __for_begin._M_current = std::vector<std::shared_ptr<data::ConfigGCGEffect>>::begin(&this->skill_config_.effect_list)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<data::ConfigGCGEffect>>::end(&this->skill_config_.effect_list)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<data::ConfigGCGEffect> *,std::vector<std::shared_ptr<data::ConfigGCGEffect>>>(
            &__for_begin,
            &__for_end) )
  {
    config_effect_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigGCGEffect> *,std::vector<std::shared_ptr<data::ConfigGCGEffect>>>::operator*(&__for_begin);
    if ( !std::operator==<data::ConfigGCGEffect>(config_effect_ptr, 0LL) )
    {
      v5 = std::__shared_ptr_access<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2,false,false> *const)config_effect_ptr);
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v5);
      v6 = (unsigned __int64)(v5->_vptr_ConfigGCGEffect + 7);
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v5->_vptr_ConfigGCGEffect + 7);
      (*(void (__fastcall **)(unsigned __int64, std::__shared_ptr_access<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, unsigned __int64))v6)(
        v1 + 96,
        v5,
        v1 + 64);
      if ( std::operator==<GCGEffectBase>((const std::shared_ptr<GCGEffectBase> *)(v1 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/skill/gcg_skill.cpp",
          "initAllEffects",
          514);
        v7 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v22, (const char (*)[22])off_1BA212E0);
        v8 = std::__shared_ptr_access<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2,false,false> *const)config_effect_ptr);
        if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v8);
        v9 = (unsigned __int64)(v8->_vptr_ConfigGCGEffect + 4);
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v8->_vptr_ConfigGCGEffect + 4);
        __in = (std::pair<data::GCGDeclaredValueType,unsigned int>)(*(__int64 (__fastcall **)(std::__shared_ptr_access<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v9)(v8);
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&__in);
        common::milog::MiLogStream::~MiLogStream(&v22);
      }
      else
      {
        v10 = std::__shared_ptr_access<GCGEffectBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGEffectBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v10);
        v11 = (unsigned __int64)(v10->_vptr_GCGEffectBase + 2);
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v10->_vptr_GCGEffectBase + 2);
        *(_DWORD *)(v1 + 48) = (*(__int64 (__fastcall **)(std::__shared_ptr_access<GCGEffectBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v11)(v10);
        std::unordered_multiset<GCGEffectCategoryType>::insert(
          &this->effect_category_set_,
          (std::unordered_multiset<GCGEffectCategoryType>::value_type *)(v1 + 48));
        std::vector<std::shared_ptr<GCGEffectBase>>::emplace_back<std::shared_ptr<GCGEffectBase>&>(
          &this->effect_ptr_vec_,
          (std::shared_ptr<GCGEffectBase> *)(v1 + 96),
          (std::shared_ptr<GCGEffectBase> *)&this->effect_ptr_vec_);
      }
      std::shared_ptr<GCGEffectBase>::~shared_ptr((std::shared_ptr<GCGEffectBase> *const)(v1 + 96));
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigGCGEffect> *,std::vector<std::shared_ptr<data::ConfigGCGEffect>>>::operator++(&__for_begin);
  }
  std::vector<std::function<void ()(std::shared_ptr<GCGCard> &,GCGSkill &)>>::clear(&this->refresh_limit_to_token_func_vec_);
  __for_range_0 = &this->skill_config_.limit_list;
  __for_begin._M_current = (std::shared_ptr<data::ConfigGCGEffect> *)std::vector<data::ConfigGCGLimit>::begin(&this->skill_config_.limit_list)._M_current;
  __for_end._M_current = (std::shared_ptr<data::ConfigGCGEffect> *)std::vector<data::ConfigGCGLimit>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<data::ConfigGCGLimit *,std::vector<data::ConfigGCGLimit>>(
            (const __gnu_cxx::__normal_iterator<data::ConfigGCGLimit*,std::vector<data::ConfigGCGLimit> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<data::ConfigGCGLimit*,std::vector<data::ConfigGCGLimit> > *)&__for_end) )
  {
    limit = __gnu_cxx::__normal_iterator<data::ConfigGCGLimit *,std::vector<data::ConfigGCGLimit>>::operator*((const __gnu_cxx::__normal_iterator<data::ConfigGCGLimit*,std::vector<data::ConfigGCGLimit> > *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)limit >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)limit >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(limit);
    }
    if ( limit->type == BindToToken )
    {
      __in = GCGSkill::getDeclaredValueByKey(this, &limit->declare_value.key);
      _ = std::get<0ul,data::GCGDeclaredValueType,unsigned int>(&__in);
      v12 = std::get<1ul,data::GCGDeclaredValueType,unsigned int>(&__in);
      token_type_value = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      *(_DWORD *)(v1 + 48) = *token_type_value;
      std::function<void ()(std::shared_ptr<GCGCard> &,GCGSkill &)>::function<GCGSkill::initAllEffects(void)::{lambda(std::shared_ptr<GCGCard> &,GCGSkill &)#1},void,void>(
        (std::function<void(std::shared_ptr<GCGCard>&,GCGSkill&)> *const)&v22,
        *(GCGSkill::initAllEffects::<lambda(GCGCardPtr&, GCGSkill&)> *)(v1 + 48));
      std::vector<std::function<void ()(std::shared_ptr<GCGCard> &,GCGSkill &)>>::push_back(
        &this->refresh_limit_to_token_func_vec_,
        (std::vector<std::function<void(std::shared_ptr<GCGCard>&,GCGSkill&)>>::value_type *)&v22);
      std::function<void ()(std::shared_ptr<GCGCard> &,GCGSkill &)>::~function((std::function<void(std::shared_ptr<GCGCard>&,GCGSkill&)> *const)&v22);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)limit >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)limit >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(limit);
      }
      if ( limit->type == Round )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->has_round_limit_ >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this - 99) & 7) >= *(_BYTE *)(((unsigned __int64)&this->has_round_limit_ >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_store1(&this->has_round_limit_);
        }
        this->has_round_limit_ = 1;
      }
    }
    if ( *(char *)(((unsigned __int64)&limit->is_need_notify >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&limit->is_need_notify);
    if ( limit->is_need_notify )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->is_config_need_limits_notify_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this - 100) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_config_need_limits_notify_ >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_store1(&this->is_config_need_limits_notify_);
      }
      this->is_config_need_limits_notify_ = 1;
    }
    __gnu_cxx::__normal_iterator<data::ConfigGCGLimit *,std::vector<data::ConfigGCGLimit>>::operator++((__gnu_cxx::__normal_iterator<data::ConfigGCGLimit*,std::vector<data::ConfigGCGLimit> > *const)&__for_begin);
  }
  if ( v23 == (char *)v1 )
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

// Line 528: range 000000000D7C53DA-000000000D7C557F
void __cdecl GCGSkill::initAllEffects(void)::{lambda(std::shared_ptr<GCGCard> &,GCGSkill&)#1}::operator()(
        const GCGSkill::initAllEffects::<lambda(GCGCardPtr&, GCGSkill&)> *const __closure,
        GCGCardPtr *card_ptr,
        GCGSkill *skill)
{
  common::milog::MiLogStream *v3; // rbx
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rcx
  GCGCard *v5; // rdi
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-50h] BYREF
  std::string val; // [rsp+40h] [rbp-30h] BYREF

  if ( std::operator==<GCGCard>(card_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/skill/gcg_skill.cpp",
      "operator()",
      532);
    v3 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v8, (const char (*)[20])"card_ptr is nullptr");
    GCGSkill::getName[abi:cxx11](&val, skill);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v3, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  else
  {
    v4 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(__closure);
    }
    if ( (unsigned int)GCGCard::getToken(v4, __closure->__token_type) )
    {
      v5 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      {
        v5 = (GCGCard *)__closure;
        __asan_report_load4(__closure);
      }
      GCGCard::subToken(v5, __closure->__token_type, 1u, GCG_REASON_EFFECT);
    }
  }
};

// Line 557: range 000000000D7C5D64-000000000D7C5D93
void __cdecl GCGSkill::doAllEffects(GCGSkill *const this, const GCGSkillUseParam *param, GCGSkillResult *result)
{
  GCGSkill::doAllEffects(this, param, result, 0);
};

// Line 563: range 000000000D7C5D94-000000000D7C65FC
void __cdecl GCGSkill::doAllEffects(
        GCGSkill *const this,
        const GCGSkillUseParam *param,
        GCGSkillResult *result,
        bool is_direct_use)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  bool v8; // al
  int v9; // r14d
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::__shared_ptr_access<GCGEffectBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  unsigned __int64 v16; // rdx
  int v17; // ecx
  GCGEffectBase *v18; // rdx
  std::__shared_ptr_access<GCGEffectBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  unsigned __int64 v20; // rdx
  std::__shared_ptr_access<GCGEffectBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  unsigned __int64 v22; // rdx
  char v23; // al
  unsigned int val; // [rsp+20h] [rbp-E0h] BYREF
  int32_t effect_ret; // [rsp+24h] [rbp-DCh]
  std::vector<std::shared_ptr<GCGEffectBase>>::iterator __for_begin; // [rsp+28h] [rbp-D8h] BYREF
  std::vector<std::shared_ptr<GCGEffectBase>>::iterator __for_end; // [rsp+30h] [rbp-D0h] BYREF
  std::vector<std::shared_ptr<GCGEffectBase>> *__for_range; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<GCGEffectBase> *effect_ptr; // [rsp+40h] [rbp-C0h]
  GCGSkillInfo *skill_info; // [rsp+48h] [rbp-B8h]
  common::milog::MiLogStream v33; // [rsp+50h] [rbp-B0h] BYREF
  char v34[144]; // [rsp+70h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 16 18 owner_card_ptr:569 64 16 18 owned_card_ptr:573";
  *(_QWORD *)(v4 + 16) = GCGSkill::doAllEffects;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&result->is_ignore_after_effect >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)result + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&result->is_ignore_after_effect >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load1(&result->is_ignore_after_effect);
  }
  if ( !result->is_ignore_after_effect )
  {
    GCGSkill::getOwnerCard((const GCGSkill *const)(v4 + 32));
    __for_range = &this->effect_ptr_vec_;
    __for_begin._M_current = std::vector<std::shared_ptr<GCGEffectBase>>::begin(&this->effect_ptr_vec_)._M_current;
    __for_end._M_current = std::vector<std::shared_ptr<GCGEffectBase>>::end(&this->effect_ptr_vec_)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<GCGEffectBase> *,std::vector<std::shared_ptr<GCGEffectBase>>>(
              &__for_begin,
              &__for_end) )
    {
      effect_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<GCGEffectBase> *,std::vector<std::shared_ptr<GCGEffectBase>>>::operator*(&__for_begin);
      GCGSkill::getOwnerCard((const GCGSkill *const)(v4 + 64));
      v8 = 1;
      if ( !std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v4 + 64)) )
      {
        v7 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        if ( GCGCard::isActivated(v7) )
          v8 = 0;
      }
      if ( v8 && !GCGSkill::isReaction(this) )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/skill/gcg_skill.cpp",
          "doAllEffects",
          578);
        common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
          &v33,
          (const char (*)[44])"doAllEffects end for owned_card is deactive");
        common::milog::MiLogStream::~MiLogStream(&v33);
        v9 = 0;
      }
      else if ( std::operator==<GCGEffectBase>(effect_ptr, 0LL) )
      {
        v9 = 1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&result->effect_seq >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&result->effect_seq >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&result->effect_seq);
        }
        if ( result->effect_seq <= 0x3E7 )
        {
          v15 = std::__shared_ptr_access<GCGEffectBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGEffectBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)effect_ptr);
          if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v15);
          v16 = (unsigned __int64)(v15->_vptr_GCGEffectBase + 2);
          if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v15->_vptr_GCGEffectBase + 2);
          v17 = (*(__int64 (__fastcall **)(std::__shared_ptr_access<GCGEffectBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v16)(v15);
          if ( *(_BYTE *)(((unsigned __int64)&param->effect_category_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)param + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->effect_category_type >> 3)
                                                                  + 0x7FFF8000) )
          {
            __asan_report_load4(&param->effect_category_type);
          }
          if ( v17 == param->effect_category_type )
          {
            v18 = std::__shared_ptr_access<GCGEffectBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGEffectBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)effect_ptr);
            if ( !GCGEffectBase::checkCondition(v18, param) )
            {
              v9 = 1;
            }
            else
            {
              GCGSkill::clearElementReaction(this);
              if ( *(_BYTE *)(((unsigned __int64)&result->effect_seq >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&result->effect_seq >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&result->effect_seq);
              }
              ++result->effect_seq;
              v19 = std::__shared_ptr_access<GCGEffectBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGEffectBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)effect_ptr);
              if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
                __asan_report_load8(v19);
              v20 = (unsigned __int64)(v19->_vptr_GCGEffectBase + 4);
              if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
                __asan_report_load8(v19->_vptr_GCGEffectBase + 4);
              effect_ret = (*(__int64 (__fastcall **)(std::__shared_ptr_access<GCGEffectBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, const GCGSkillUseParam *, GCGSkillResult *))v20)(
                             v19,
                             param,
                             result);
              GCGSkill::doElementReaction(this, result);
              if ( effect_ret >= 0 )
              {
                if ( is_direct_use )
                  goto LABEL_47;
                v21 = std::__shared_ptr_access<GCGEffectBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGEffectBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)effect_ptr);
                if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v21);
                v22 = (unsigned __int64)(v21->_vptr_GCGEffectBase + 3);
                if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v21->_vptr_GCGEffectBase + 3);
                if ( (*(unsigned __int8 (__fastcall **)(std::__shared_ptr_access<GCGEffectBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v22)(v21) != 1 )
                  v23 = 1;
                else
LABEL_47:
                  v23 = 0;
                if ( v23 )
                  GCGSkill::setActivate(this);
                if ( *(_BYTE *)(((unsigned __int64)&result->is_ignore_after_effect >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)result + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&result->is_ignore_after_effect >> 3)
                                                                      + 0x7FFF8000) )
                {
                  __asan_report_load1(&result->is_ignore_after_effect);
                }
                if ( result->is_ignore_after_effect )
                {
                  common::milog::MiLogStream::create(
                    &v33,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/card_game/skill/gcg_skill.cpp",
                    "doAllEffects",
                    621);
                  common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                    &v33,
                    (const char (*)[36])"doAllEffects is_ignore_after_effect");
                  common::milog::MiLogStream::~MiLogStream(&v33);
                  v9 = 0;
                }
                else
                {
                  v9 = 2;
                }
              }
              else
              {
                v9 = 1;
              }
            }
          }
          else
          {
            v9 = 1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/card_game/skill/gcg_skill.cpp",
            "doAllEffects",
            588);
          v10 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  &v33,
                  (const char (*)[39])"do effect count out of num. skill_id: ");
          val = GCGSkill::getSkillId(this);
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
          v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v11,
                  (const char (*)[16])" CategroyType: ");
          v13 = common::milog::MiLogStream::operator<<<GCGEffectCategoryType,(GCGEffectCategoryType*)0>(
                  v12,
                  &param->effect_category_type);
          v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])" max num: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &MAX_ACTION_EFFECT_NUM);
          common::milog::MiLogStream::~MiLogStream(&v33);
          v9 = 0;
        }
      }
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 64));
      if ( !v9 )
        break;
      __gnu_cxx::__normal_iterator<std::shared_ptr<GCGEffectBase> *,std::vector<std::shared_ptr<GCGEffectBase>>>::operator++(&__for_begin);
    }
    if ( GCGSkill::isActivated(this) )
    {
      skill_info = std::vector<GCGSkillInfo>::emplace_back<>(&result->skill_info_vec);
      std::shared_ptr<GCGCard>::operator=(&skill_info->card_ptr, (const std::shared_ptr<GCGCard> *)(v4 + 32));
      std::enable_shared_from_this<GCGSkill>::shared_from_this((std::enable_shared_from_this<GCGSkill> *const)(v4 + 64));
      std::shared_ptr<GCGSkill>::operator=(&skill_info->skill_ptr, (std::shared_ptr<GCGSkill> *)(v4 + 64));
      std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v4 + 64));
      if ( !is_direct_use )
        GCGSkill::refreshActivate(this);
    }
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 32));
  }
  if ( v34 == (char *)v4 )
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
};

// Line 638: range 000000000D7C65FE-000000000D7C6A74
void __cdecl GCGSkill::updateLimitInfo(GCGSkill *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // r14
  uint32_t v5; // r14d
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  signed int Guid; // eax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  unsigned int Id; // [rsp+18h] [rbp-108h] BYREF
  unsigned int v15; // [rsp+1Ch] [rbp-104h] BYREF
  std::vector<std::function<void(std::shared_ptr<GCGCard>&,GCGSkill&)>>::iterator __for_begin; // [rsp+20h] [rbp-100h] BYREF
  std::vector<std::function<void(std::shared_ptr<GCGCard>&,GCGSkill&)>>::iterator __for_end; // [rsp+28h] [rbp-F8h] BYREF
  std::vector<std::function<void(std::shared_ptr<GCGCard>&,GCGSkill&)>> *__for_range; // [rsp+30h] [rbp-F0h]
  std::function<void(std::shared_ptr<GCGCard>&,GCGSkill&)> *func; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<GCGCard> v20; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v21; // [rsp+50h] [rbp-D0h] BYREF
  std::string val; // [rsp+70h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+90h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 18 owned_card_ptr:644 64 16 12 zone_ptr:654";
  *(_QWORD *)(v1 + 16) = GCGSkill::updateLimitInfo;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  if ( !GCGSkill::isReaction(this) )
  {
    GCGSkill::getOwnerCard((const GCGSkill *const)(v1 + 32));
    if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v1 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_game/skill/gcg_skill.cpp",
        "updateLimitInfo",
        648);
      v4 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             &v21,
             (const char (*)[26])"owned_card_ptr is nullptr");
      GCGSkill::getName[abi:cxx11](&val, this);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
    else if ( GCGSkill::isSkillReachTotalLimit(this) )
    {
      std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      GCGCard::getZone((GCGCard *const)(v1 + 64));
      if ( std::operator!=<GCGCardZone>((const std::shared_ptr<GCGCardZone> *)(v1 + 64), 0LL) )
      {
        v5 = (unsigned int)std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        v6 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        Guid = GCGCard::getGuid(v6);
        GCGCardZone::popCard((GCGCardZone *const)&v20, v5, (GCGReason)Guid, 1);
        std::shared_ptr<GCGCard>::~shared_ptr(&v20);
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/skill/gcg_skill.cpp",
          "updateLimitInfo",
          658);
        v8 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
               (common::milog::MiLogStream *const)&val,
               (const char (*)[57])"doAllEffects remove card for reach total limit, card_id:");
        v9 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        Id = GCGCard::getId(v9);
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &Id);
        v11 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])" guid:");
        v12 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        v15 = GCGCard::getGuid(v12);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &v15);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      }
      std::shared_ptr<GCGCardZone>::~shared_ptr((std::shared_ptr<GCGCardZone> *const)(v1 + 64));
    }
    else
    {
      __for_range = &this->refresh_limit_to_token_func_vec_;
      __for_begin._M_current = std::vector<std::function<void ()(std::shared_ptr<GCGCard> &,GCGSkill &)>>::begin(&this->refresh_limit_to_token_func_vec_)._M_current;
      __for_end._M_current = std::vector<std::function<void ()(std::shared_ptr<GCGCard> &,GCGSkill &)>>::end(&this->refresh_limit_to_token_func_vec_)._M_current;
      while ( __gnu_cxx::operator!=<std::function<void ()(std::shared_ptr<GCGCard> &,GCGSkill &)> *,std::vector<std::function<void ()(std::shared_ptr<GCGCard> &,GCGSkill &)>>>(
                &__for_begin,
                &__for_end) )
      {
        func = __gnu_cxx::__normal_iterator<std::function<void ()(std::shared_ptr<GCGCard> &,GCGSkill &)> *,std::vector<std::function<void ()(std::shared_ptr<GCGCard> &,GCGSkill &)>>>::operator*(&__for_begin);
        v13 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        if ( GCGCard::isActivated(v13) )
          std::function<void ()(std::shared_ptr<GCGCard> &,GCGSkill &)>::operator()(
            func,
            (std::shared_ptr<GCGCard> *)(v1 + 32),
            this);
        __gnu_cxx::__normal_iterator<std::function<void ()(std::shared_ptr<GCGCard> &,GCGSkill &)> *,std::vector<std::function<void ()(std::shared_ptr<GCGCard> &,GCGSkill &)>>>::operator++(&__for_begin);
      }
    }
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v1 + 32));
  }
  if ( v23 == (char *)v1 )
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

// Line 676: range 000000000D7C6A76-000000000D7C6AC8
int32_t __cdecl GCGSkill::getTotalUsedTimes(const GCGSkill *const this)
{
  const GCGSkillRuntimeData *RuntimeData; // rax

  RuntimeData = GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode>::getRuntimeData(&this->GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode>);
  if ( *(_BYTE *)(((unsigned __int64)&RuntimeData->total_used_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&RuntimeData->total_used_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    RuntimeData = (const GCGSkillRuntimeData *)__asan_report_load4(&RuntimeData->total_used_count_);
  }
  return RuntimeData->total_used_count_;
};

// Line 681: range 000000000D7C6ACA-000000000D7C6B25
int32_t __cdecl GCGSkill::getRoundUsedTimes(const GCGSkill *const this)
{
  const GCGSkillRuntimeData *RuntimeData; // rdx
  uint32_t *p_round_used_count; // rax

  RuntimeData = GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode>::getRuntimeData(&this->GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode>);
  p_round_used_count = &RuntimeData->round_used_count_;
  if ( *(_BYTE *)(((unsigned __int64)p_round_used_count >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_round_used_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_round_used_count >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(p_round_used_count);
  }
  return RuntimeData->round_used_count_;
};

// Line 686: range 000000000D7C6B26-000000000D7C6BDB
void __cdecl GCGSkill::resetRoundUsedCount(GCGSkill *const this)
{
  GCGSkillRuntimeData *RuntimeData; // rdx
  uint32_t *p_round_used_count; // rax

  RuntimeData = GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode>::getRuntimeData(&this->GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode>);
  p_round_used_count = &RuntimeData->round_used_count_;
  if ( *(_BYTE *)(((unsigned __int64)p_round_used_count >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_round_used_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_round_used_count >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(p_round_used_count);
  }
  RuntimeData->round_used_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->has_round_limit_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 99) & 7) >= *(_BYTE *)(((unsigned __int64)&this->has_round_limit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->has_round_limit_);
  }
  if ( this->has_round_limit_ )
    GCGSkill::notifySkillLimitsChange(this);
};

// Line 698: range 000000000D7C6BDC-000000000D7C6C91
void __cdecl GCGSkill::reset(GCGSkill *const this)
{
  GCGSkillRuntimeData *RuntimeData; // rax
  GCGSkillRuntimeData *v2; // rdx
  uint32_t *p_round_used_count; // rax

  RuntimeData = GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode>::getRuntimeData(&this->GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode>);
  if ( *(_BYTE *)(((unsigned __int64)&RuntimeData->total_used_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&RuntimeData->total_used_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    RuntimeData = (GCGSkillRuntimeData *)__asan_report_store4(&RuntimeData->total_used_count_);
  }
  RuntimeData->total_used_count_ = 0;
  v2 = GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode>::getRuntimeData(&this->GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode>);
  p_round_used_count = &v2->round_used_count_;
  if ( *(_BYTE *)(((unsigned __int64)p_round_used_count >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_round_used_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_round_used_count >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(p_round_used_count);
  }
  v2->round_used_count_ = 0;
  GCGSkill::notifySkillLimitsChange(this);
};

// Line 705: range 000000000D7C6C92-000000000D7C6CE3
void __cdecl GCGSkill::setActivate(GCGSkill *const this)
{
  unsigned __int64 RuntimeData; // rax

  RuntimeData = (unsigned __int64)GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode>::getRuntimeData(&this->GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode>);
  if ( *(char *)((RuntimeData >> 3) + 0x7FFF8000) < 0 )
    RuntimeData = __asan_report_store1(RuntimeData);
  *(_BYTE *)RuntimeData = 1;
};

// Line 710: range 000000000D7C6CE4-000000000D7C6D35
void __cdecl GCGSkill::setDeactive(GCGSkill *const this)
{
  unsigned __int64 RuntimeData; // rax

  RuntimeData = (unsigned __int64)GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode>::getRuntimeData(&this->GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode>);
  if ( *(char *)((RuntimeData >> 3) + 0x7FFF8000) < 0 )
    RuntimeData = __asan_report_store1(RuntimeData);
  *(_BYTE *)RuntimeData = 0;
};

// Line 715: range 000000000D7C6D36-000000000D7C6D86
bool __cdecl GCGSkill::isActivated(const GCGSkill *const this)
{
  unsigned __int64 RuntimeData; // rax

  RuntimeData = (unsigned __int64)GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode>::getRuntimeData(&this->GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode>);
  if ( *(char *)((RuntimeData >> 3) + 0x7FFF8000) < 0 )
    RuntimeData = __asan_report_load1(RuntimeData);
  return *(_BYTE *)RuntimeData;
};

// Line 720: range 000000000D7C6D88-000000000D7C6DEE
GCGCardPtr __cdecl GCGSkill::getThisCard(const GCGSkill *const this, const GCGSkillUseParam *skill_param)
{
  GCGGameMode *GameMode; // rax
  GCGSkillLogic *SkillLogic; // rsi
  GCGCardPtr result; // rax

  GameMode = GCGSkill::getGameMode((const GCGSkill *const)skill_param);
  SkillLogic = GCGGameMode::getSkillLogic(GameMode);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, SkillLogic);
  result = GCGSkillLogic::getSkillThisCard((const GCGSkillLogic *const)this, (const GCGSkill *)SkillLogic, skill_param);
  result._M_ptr = (std::__shared_ptr<GCGCard,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 725: range 000000000D7C6DF0-000000000D7C6E98
void __cdecl GCGSkill::onElementReaction(
        GCGSkill *const this,
        GCGSkillPtr *p_skill_ptr,
        GCGSkillUseParamPtr *p_skill_param_ptr)
{
  std::deque<ElementReactionParam> *p_reaction_deque; // rbx
  std::shared_ptr<GCGSkill> *v4; // rax
  std::shared_ptr<GCGSkillUseParam> *v5; // rax
  std::deque<ElementReactionParam>::value_type v7; // [rsp+20h] [rbp-30h] BYREF

  p_reaction_deque = &GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode>::getRuntimeData(&this->GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode>)->reaction_deque_;
  v4 = std::move<std::shared_ptr<GCGSkill> &>(p_skill_ptr);
  std::shared_ptr<GCGSkill>::shared_ptr(&v7.skill_ptr, v4);
  v5 = std::move<std::shared_ptr<GCGSkillUseParam> &>(p_skill_param_ptr);
  std::shared_ptr<GCGSkillUseParam>::shared_ptr(&v7.skill_param_ptr, v5);
  std::deque<ElementReactionParam>::push_back(p_reaction_deque, &v7);
  ElementReactionParam::~ElementReactionParam(&v7);
};

// Line 730: range 000000000D7C6E9A-000000000D7C747D
void __cdecl GCGSkill::doElementReaction(GCGSkill *const this, GCGSkillResult *result)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t v7; // r14d
  std::__shared_ptr_access<GCGMsgReactionBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t Guid; // r14d
  std::__shared_ptr_access<GCGMsgReactionBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rdx
  uint32_t *p_card_guid; // rax
  GCGGameMode *game_mode; // r14
  GCGSkill *v14; // r14
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rcx
  uint32_t v16; // r14d
  std::__shared_ptr_access<GCGMsgReactionEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  GCGGameMode *v18; // r14
  common::milog::MiLogStream *v19; // r14
  uint32_t v20; // eax
  common::milog::MiLogStream *v21; // rbx
  unsigned int val; // [rsp+14h] [rbp-CCh] BYREF
  uint32_t count; // [rsp+18h] [rbp-C8h]
  uint32_t skill_id; // [rsp+1Ch] [rbp-C4h]
  unsigned __int64 v25; // [rsp+20h] [rbp-C0h] BYREF
  std::deque<ElementReactionParam> *reaction_deque; // [rsp+28h] [rbp-B8h]
  ElementReactionParam *element_raction; // [rsp+30h] [rbp-B0h]
  const std::shared_ptr<GCGCard> *target_card_ptr; // [rsp+38h] [rbp-A8h]
  std::shared_ptr<GCGMessage> p_msg; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v30; // [rsp+50h] [rbp-90h] BYREF
  char v31[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 11 msg_ptr:750";
  *(_QWORD *)(v2 + 16) = GCGSkill::doElementReaction;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  count = 0;
  reaction_deque = &GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode>::getRuntimeData(&this->GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode>)->reaction_deque_;
  while ( !std::deque<ElementReactionParam>::empty(reaction_deque) )
  {
    element_raction = std::deque<ElementReactionParam>::front(reaction_deque);
    if ( std::operator!=<GCGSkill>(&element_raction->skill_ptr, 0LL)
      && std::operator!=<GCGSkillUseParam>(&element_raction->skill_param_ptr, 0LL) )
    {
      v6 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)element_raction);
      skill_id = GCGSkill::getSkillId(v6);
      common::tools::perf::make_shared<GCGMsgReactionBegin>();
      v7 = skill_id;
      v8 = std::__shared_ptr_access<GCGMsgReactionBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgReactionBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v8->skill_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v8->skill_id >> 3) + 0x7FFF8000) <= 3 )
      {
        v8 = (std::__shared_ptr_access<GCGMsgReactionBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v8->skill_id);
      }
      v8->skill_id = v7;
      target_card_ptr = &std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)&element_raction->skill_param_ptr)->target_card_ptr;
      if ( std::operator!=<GCGCard>(target_card_ptr, 0LL) )
      {
        v9 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)target_card_ptr);
        Guid = GCGCard::getGuid(v9);
      }
      else
      {
        Guid = 0;
      }
      v11 = std::__shared_ptr_access<GCGMsgReactionBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgReactionBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      p_card_guid = &v11->card_guid;
      if ( *(_BYTE *)(((unsigned __int64)p_card_guid >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_card_guid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_card_guid >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(p_card_guid);
      }
      v11->card_guid = Guid;
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      game_mode = this->game_mode_;
      std::shared_ptr<GCGMessage>::shared_ptr<GCGMsgReactionBegin,void>(
        &p_msg,
        (const std::shared_ptr<GCGMsgReactionBegin> *)(v2 + 32));
      GCGGameMode::sendMessage(game_mode, &p_msg);
      std::shared_ptr<GCGMessage>::~shared_ptr(&p_msg);
      std::shared_ptr<GCGMsgReactionBegin>::~shared_ptr((std::shared_ptr<GCGMsgReactionBegin> *const)(v2 + 32));
      v14 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)element_raction);
      v15 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)&element_raction->skill_param_ptr);
      GCGSkill::doAllEffects(v14, v15, result);
      common::tools::perf::make_shared<GCGMsgReactionEnd>();
      v16 = skill_id;
      v17 = std::__shared_ptr_access<GCGMsgReactionEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgReactionEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v17->skill_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v17->skill_id >> 3) + 0x7FFF8000) <= 3 )
      {
        v17 = (std::__shared_ptr_access<GCGMsgReactionEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v17->skill_id);
      }
      v17->skill_id = v16;
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      v18 = this->game_mode_;
      std::shared_ptr<GCGMessage>::shared_ptr<GCGMsgReactionEnd,void>(
        &p_msg,
        (const std::shared_ptr<GCGMsgReactionEnd> *)(v2 + 32));
      GCGGameMode::sendMessage(v18, &p_msg);
      std::shared_ptr<GCGMessage>::~shared_ptr(&p_msg);
      std::shared_ptr<GCGMsgReactionEnd>::~shared_ptr((std::shared_ptr<GCGMsgReactionEnd> *const)(v2 + 32));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_skill.cpp",
        "doElementReaction",
        758);
      v19 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v30,
              (const char (*)[40])"element_reaction info error. skill_id: ");
      val = GCGSkill::getSkillId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
      common::milog::MiLogStream::~MiLogStream(&v30);
    }
    std::deque<ElementReactionParam>::pop_front(reaction_deque);
    v20 = count++;
    if ( v20 > 0x13 )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_skill.cpp",
        "doElementReaction",
        764);
      v21 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v30,
              (const char (*)[46])"doElementReaction too many loop count. size: ");
      v25 = std::deque<ElementReactionParam>::size(reaction_deque);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v21, &v25);
      common::milog::MiLogStream::~MiLogStream(&v30);
      break;
    }
  }
  std::deque<ElementReactionParam>::clear(reaction_deque);
  if ( v31 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 772: range 000000000D7C747E-000000000D7C74A8
void __cdecl GCGSkill::clearElementReaction(GCGSkill *const this)
{
  GCGSkillRuntimeData *RuntimeData; // rax

  RuntimeData = GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode>::getRuntimeData(&this->GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode>);
  std::deque<ElementReactionParam>::clear(&RuntimeData->reaction_deque_);
};
