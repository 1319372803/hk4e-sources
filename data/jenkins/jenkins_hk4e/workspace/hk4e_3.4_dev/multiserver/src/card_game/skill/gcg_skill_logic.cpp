// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/skill/gcg_skill_logic.cpp

// Line 28: range 000000000E2EC304-000000000E2EC76B
int32_t __cdecl GCGSkillLogic::useSkill(GCGSkillLogic *const this, GCGSkillUseParam *param, GCGSkillResult *result)
{
  common::milog::MiLogStream *v3; // rbx
  common::milog::MiLogStream *v5; // rbx
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  common::milog::MiLogStream *v7; // rbx
  GCGSkill *v8; // rcx
  GCGDuel *Duel; // rcx
  GCGField *Field; // rbx
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t SkillId; // r12d
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  uint32_t Guid; // eax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  GCGStatistics *Statistics; // rdi
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-50h] BYREF
  std::string val; // [rsp+40h] [rbp-30h] BYREF

  if ( std::operator==<GCGSkill>(&param->skill_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/skill/gcg_skill_logic.cpp",
      "useSkill",
      31);
    v3 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
           &v18,
           (const char (*)[21])"skill_ptr is nullptr");
    GCGSkillUseParam::getDesc[abi:cxx11](&val, param);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v3, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v18);
    return -1;
  }
  else if ( std::operator==<GCGCard>(&param->source_card_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/skill/gcg_skill_logic.cpp",
      "useSkill",
      36);
    v5 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v18,
           (const char (*)[27])"source_card_ptr is nullptr");
    GCGSkillUseParam::getDesc[abi:cxx11](&val, param);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v18);
    return -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&param->trigger_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&param->trigger_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&param->trigger_type);
    }
    param->trigger_type = GCG_TRIGGER_ON_USE;
    v6 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)param);
    if ( !GCGSkill::checkSkillCondition(v6, param) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_skill_logic.cpp",
        "useSkill",
        42);
      v7 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
             &v18,
             (const char (*)[37])"skill check checkSkillCondition fail");
      GCGSkillUseParam::getDesc[abi:cxx11](&val, param);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v18);
      return -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)param);
      GCGSkill::directUseSkill(v8, param, result);
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      Duel = GCGGameMode::getDuel(this->game_mode_);
      if ( *(_BYTE *)(((unsigned __int64)&param->controller_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&param->controller_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&param->controller_id);
      }
      Field = GCGDuel::getField(Duel, param->controller_id);
      v11 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)param);
      SkillId = GCGSkill::getSkillId(v11);
      v13 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->source_card_ptr);
      Guid = GCGCard::getGuid(v13);
      GCGField::onUseSkill(Field, Guid, SkillId);
      v15 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)param);
      if ( GCGSkill::isHasTag(v15, GCG_SKILL_TAG_Q) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->game_mode_);
        Statistics = GCGGameMode::getStatistics(this->game_mode_);
        if ( *(_BYTE *)(((unsigned __int64)&param->controller_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&param->controller_id >> 3) + 0x7FFF8000) <= 3 )
        {
          Statistics = (GCGStatistics *)&param->controller_id;
          __asan_report_load4(&param->controller_id);
        }
        GCGStatistics::reportStatisticSpecifyDataUint(Statistics, param->controller_id, SKILL_TAG_Q_TIMES, 1u, 1);
      }
      return 0;
    }
  }
};

// Line 56: range 000000000E2EC76C-000000000E2ECC0F
int32_t __cdecl GCGSkillLogic::useCardSkill(
        GCGSkillLogic *const this,
        GCGCard *card,
        GCGSkillPtr *p_skill_ptr,
        GCGSkillResult *result)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // rbx
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool v10; // r14
  common::milog::MiLogStream *v11; // r13
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // r13
  int32_t v14; // eax
  std::shared_ptr<GCGSkill> __a; // [rsp+20h] [rbp-1C0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-1B0h] BYREF
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-190h] BYREF
  std::string val; // [rsp+70h] [rbp-170h] BYREF
  char v21[336]; // [rsp+90h] [rbp-150h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 48 168 14 skill_param:67";
  *(_QWORD *)(v4 + 16) = GCGSkillLogic::useCardSkill;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862726] = -218103808;
  v6[536862727] = -202116109;
  v6[536862728] = -202116109;
  if ( std::operator==<GCGSkill>(p_skill_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/skill/gcg_skill_logic.cpp",
      "useCardSkill",
      59);
    v7 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
           &v19,
           (const char (*)[21])"card getSkill fail. ");
    GCGCard::getDesc[abi:cxx11](&val, card);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v8 = -1;
  }
  else
  {
    v9 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_skill_ptr);
    GCGSkill::getSkillId(v9);
    GCGCard::getSkill((GCGCard *const)&__a, (uint32_t)card);
    v10 = std::operator!=<GCGSkill,GCGSkill>(&__a, p_skill_ptr);
    std::shared_ptr<GCGSkill>::~shared_ptr(&__a);
    if ( v10 )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_skill_logic.cpp",
        "useCardSkill",
        64);
      v11 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v18,
              (const char (*)[33])"card getSkill not match. skill: ");
      v12 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_skill_ptr);
      GCGSkill::getName[abi:cxx11]((std::string *)&v19, v12);
      v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, (const std::string *)&v19);
      GCGCard::getDesc[abi:cxx11](&val, card);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, &val);
      std::string::~string(&val);
      std::string::~string(&v19);
      common::milog::MiLogStream::~MiLogStream(&v18);
      v8 = -1;
    }
    else
    {
      GCGSkillUseParam::GCGSkillUseParam((GCGSkillUseParam *const)(v4 + 48));
      std::enable_shared_from_this<GCGCard>::shared_from_this((std::enable_shared_from_this<GCGCard> *const)&__a);
      std::shared_ptr<GCGCard>::operator=((std::shared_ptr<GCGCard> *const)(v4 + 72), (std::shared_ptr<GCGCard> *)&__a);
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)&__a);
      std::shared_ptr<GCGSkill>::operator=((std::shared_ptr<GCGSkill> *const)(v4 + 48), p_skill_ptr);
      *(_DWORD *)(v4 + 160) = GCGCard::getControllerId(card);
      GCGSkillUseParam::setEffectCategroyType((GCGSkillUseParam *const)(v4 + 48), ACTIVE_CATEGORY);
      v8 = GCGSkillLogic::useSkill(this, (GCGSkillUseParam *)(v4 + 48), result);
      GCGSkillUseParam::~GCGSkillUseParam((GCGSkillUseParam *const)(v4 + 48));
    }
  }
  v14 = v8;
  if ( v21 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = -168430091;
  }
  return v14;
};

// Line 76: range 000000000E2ECD24-000000000E2ED13A
int32_t __cdecl GCGSkillLogic::useCardAllSkill(
        GCGSkillLogic *const this,
        GCGCard *card,
        const std::vector<unsigned int> *target_param_vec)
{
  unsigned __int64 p_M_left; // r13
  __int64 v4; // rax
  _DWORD *v5; // rbx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v6; // rax
  int *v7; // rdx
  int32_t result; // eax
  GCGCardMgr *card_guid; // [rsp+10h] [rbp-350h]
  std::enable_shared_from_this<GCGCard> v11; // [rsp+30h] [rbp-330h] BYREF
  GCGCardMgr v12; // [rsp+40h] [rbp-320h] BYREF

  p_M_left = (unsigned __int64)&v12.normal_data_.card_map_._M_t._M_impl._M_header._M_left;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(704LL);
    if ( v4 )
      p_M_left = v4;
  }
  *(_QWORD *)p_M_left = 1102416563LL;
  *(_QWORD *)(p_M_left + 8) = "2 32 168 14 skill_param:78 272 368 15 skill_result:90";
  *(_QWORD *)(p_M_left + 16) = GCGSkillLogic::useCardAllSkill;
  v5 = (_DWORD *)(p_M_left >> 3);
  v5[536862720] = -235802127;
  v5[536862726] = -218959360;
  v5[536862727] = -218959118;
  v5[536862728] = 62194;
  v5[536862740] = -202116109;
  v5[536862741] = -202116109;
  GCGSkillUseParam::GCGSkillUseParam((GCGSkillUseParam *const)(p_M_left + 32));
  std::enable_shared_from_this<GCGCard>::shared_from_this(&v11);
  std::shared_ptr<GCGCard>::operator=(
    (std::shared_ptr<GCGCard> *const)(p_M_left + 56),
    (std::shared_ptr<GCGCard> *)&v11);
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)&v11);
  *(_DWORD *)(p_M_left + 48) = 25;
  *(_DWORD *)(p_M_left + 144) = GCGCard::getControllerId(card);
  GCGSkillUseParam::setEffectCategroyType((GCGSkillUseParam *const)(p_M_left + 32), ACTIVE_CATEGORY);
  std::vector<unsigned int>::operator=((std::vector<unsigned int> *const)(p_M_left + 120), target_param_vec);
  if ( !std::vector<unsigned int>::empty(target_param_vec) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    card_guid = GCGGameMode::getCardMgr(this->game_mode_);
    v6 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                               target_param_vec,
                                                                                               0LL);
    v7 = (int *)v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    GCGCardMgr::findCard(&v12, card_guid, *v7);
    std::shared_ptr<GCGCard>::operator=(
      (std::shared_ptr<GCGCard> *const)(p_M_left + 72),
      (std::shared_ptr<GCGCard> *)&v12);
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)&v12);
  }
  GCGSkillUseParam::setTriggerWindowParam(
    (GCGSkillUseParam *const)(p_M_left + 32),
    (const GCGSkillUseParam *)(p_M_left + 32));
  GCGSkillResult::GCGSkillResult((GCGSkillResult *const)(p_M_left + 272));
  std::function<ForeachPolicy ()(GCGSkill &)>::function<GCGSkillLogic::useCardAllSkill(GCGCard &,std::vector<unsigned int> const&)::{lambda(GCGSkill &)#1},void,void>(
    (std::function<ForeachPolicy(GCGSkill&)> *const)&v12.normal_data_,
    (GCGSkillLogic::useCardAllSkill::<lambda(GCGSkill&)>)__PAIR128__(p_M_left + 272, p_M_left + 32));
  GCGCard::foreachSkill(card, (std::function<ForeachPolicy(GCGSkill&)> *)&v12.normal_data_);
  std::function<ForeachPolicy ()(GCGSkill &)>::~function((std::function<ForeachPolicy(GCGSkill&)> *const)&v12.normal_data_);
  GCGSkillResult::~GCGSkillResult((GCGSkillResult *const)(p_M_left + 272));
  GCGSkillUseParam::~GCGSkillUseParam((GCGSkillUseParam *const)(p_M_left + 32));
  result = 0;
  if ( &v12.normal_data_.card_map_._M_t._M_impl._M_header._M_left == (std::_Rb_tree_node_base::_Base_ptr *)p_M_left )
  {
    *(_DWORD *)((p_M_left >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((p_M_left >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((p_M_left >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((p_M_left >> 3) + 0x7FFF8050) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_left = 1172321806LL;
    *(_QWORD *)((p_M_left >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_left >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_left >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_left >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_left >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_left >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_left >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_left >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_left >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_left >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_left >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 93: range 000000000E2ECC10-000000000E2ECD22
ForeachPolicy __cdecl GCGSkillLogic::useCardAllSkill(GCGCard &,std::vector<unsigned int> const&)::{lambda(GCGSkill &)#1}::operator()(
        const GCGSkillLogic::useCardAllSkill::<lambda(GCGSkill&)> *const __closure,
        GCGSkill *skill)
{
  GCGSkillResult *skill_result; // rdx
  std::enable_shared_from_this<GCGSkill> v4; // [rsp+10h] [rbp-10h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  if ( GCGSkill::checkSkillCondition(skill, __closure->__skill_param) )
  {
    std::enable_shared_from_this<GCGSkill>::shared_from_this(&v4);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    std::shared_ptr<GCGSkill>::operator=(&__closure->__skill_param->skill_ptr, (std::shared_ptr<GCGSkill> *)&v4);
    std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)&v4);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__skill_result >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__skill_result);
    skill_result = __closure->__skill_result;
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    GCGSkill::directUseSkill(skill, __closure->__skill_param, skill_result);
  }
  return 0;
};

// Line 115: range 000000000E2ED13C-000000000E2ED5A6
int32_t __cdecl GCGSkillLogic::trigger(
        GCGSkillLogic *const this,
        GCGPhaseBasePtr *p_phase_ptr,
        GCGTriggerType trigger_type,
        GCGSkillUseParamPtr *p_trigger_windows_param_ptr)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  int32_t v7; // r14d
  GCGDuel *Duel; // rax
  signed int ActionMgr; // eax
  std::__shared_ptr_access<GCGActionTrigger,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  GCGSkillUseParamPtr *v11; // rdx
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  void (__fastcall *v15)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<GCGActionBase> *); // r15
  int32_t result; // eax
  std::shared_ptr<GCGActionBase> v19; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-90h] BYREF
  char v21[112]; // [rsp+70h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 14 action_ptr:127";
  *(_QWORD *)(v4 + 16) = GCGSkillLogic::trigger;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  if ( std::operator==<GCGPhaseBase>(p_phase_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/skill/gcg_skill_logic.cpp",
      "trigger",
      118);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v20, (const char (*)[22])"phase_ptr is nullptr.");
    common::milog::MiLogStream::~MiLogStream(&v20);
    v7 = -1;
  }
  else if ( trigger_type )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    Duel = GCGGameMode::getDuel(this->game_mode_);
    GCGDuel::getCurControllerId(Duel);
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    ActionMgr = (unsigned int)GCGGameMode::getActionMgr(this->game_mode_);
    GCGActionMgr::createAction<GCGActionTrigger>((GCGActionMgr *const)(v4 + 32), (GCGControllerValue)ActionMgr);
    if ( std::operator==<GCGActionTrigger>((const std::shared_ptr<GCGActionTrigger> *)(v4 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_skill_logic.cpp",
        "trigger",
        130);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v20, (const char (*)[19])"createAction fail.");
      common::milog::MiLogStream::~MiLogStream(&v20);
      v7 = -1;
    }
    else
    {
      v10 = std::__shared_ptr_access<GCGActionTrigger,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionTrigger,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v10->trigger_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v10->trigger_type >> 3) + 0x7FFF8000) <= 3 )
      {
        v10 = (std::__shared_ptr_access<GCGActionTrigger,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v10->trigger_type);
      }
      v10->trigger_type = trigger_type;
      v11 = &std::__shared_ptr_access<GCGActionTrigger,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionTrigger,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32))->trigger_windows_param_ptr;
      std::shared_ptr<GCGSkillUseParam>::operator=(v11, p_trigger_windows_param_ptr);
      v12 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_phase_ptr);
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v12);
      v14 = (unsigned __int64)(v13->_vptr_GCGPhaseBase + 5);
      if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v13->_vptr_GCGPhaseBase + 5);
      v15 = *(void (__fastcall **)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<GCGActionBase> *))v14;
      std::shared_ptr<GCGActionBase>::shared_ptr<GCGActionTrigger,void>(
        &v19,
        (const std::shared_ptr<GCGActionTrigger> *)(v4 + 32));
      v15(v13, &v19);
      std::shared_ptr<GCGActionBase>::~shared_ptr(&v19);
      v7 = 0;
    }
    std::shared_ptr<GCGActionTrigger>::~shared_ptr((std::shared_ptr<GCGActionTrigger> *const)(v4 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/skill/gcg_skill_logic.cpp",
      "trigger",
      123);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v20,
      (const char (*)[25])"trigger_type is invalid.");
    common::milog::MiLogStream::~MiLogStream(&v20);
    v7 = -1;
  }
  result = v7;
  if ( v21 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 140: range 000000000E2ED5A8-000000000E2EDAD7
void __cdecl GCGSkillLogic::doHealHp(
        GCGSkillLogic *const this,
        const GCGSkillUseParam *param,
        EffectHealHpParam *effect_heal_param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::milog::MiLogStream *v6; // r12
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // r12
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  const unsigned int *v11; // rax
  _DWORD *v12; // rdx
  GCGCard *v13; // rax
  GCGCard *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r12
  unsigned int __b; // [rsp+2Ch] [rbp-D4h] BYREF
  uint32_t cur_hp; // [rsp+30h] [rbp-D0h]
  uint32_t max_hp; // [rsp+34h] [rbp-CCh]
  const std::shared_ptr<GCGCard> *target_card_ptr; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<GCGCard> p_source_card_ptr; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-B0h] BYREF
  std::string val; // [rsp+70h] [rbp-90h] BYREF
  char v25[112]; // [rsp+90h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 21 final_heal_amount:153";
  *(_QWORD *)(v3 + 16) = GCGSkillLogic::doHealHp;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  target_card_ptr = &effect_heal_param->heal_target_card_ptr;
  if ( std::operator==<GCGCard>(&effect_heal_param->heal_target_card_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/skill/gcg_skill_logic.cpp",
      "doHealHp",
      144);
    v6 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v23,
           (const char (*)[23])"target card is nullptr");
    GCGSkillUseParam::getDesc[abi:cxx11](&val, param);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
  else
  {
    v7 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)target_card_ptr);
    if ( !GCGCard::isAlive(v7) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_skill_logic.cpp",
        "doHealHp",
        150);
      v8 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
             &v23,
             (const char (*)[25])"target card is not alive");
      GCGSkillUseParam::getDesc[abi:cxx11](&val, param);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)effect_heal_param >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)effect_heal_param >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(effect_heal_param);
      }
      *(_DWORD *)(v3 + 32) = effect_heal_param->heal_amount;
      v9 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)target_card_ptr);
      cur_hp = GCGCard::getToken(v9, GCG_TOKEN_HP);
      v10 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)target_card_ptr);
      max_hp = GCGCard::getToken(v10, GCG_TOKEN_MAX_HP);
      if ( cur_hp < max_hp )
      {
        __b = max_hp - cur_hp;
        v11 = std::min<unsigned int>((const unsigned int *)(v3 + 32), &__b);
        v12 = v11;
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v11);
        }
        *(_DWORD *)(v3 + 32) = *v12;
      }
      else
      {
        *(_DWORD *)(v3 + 32) = 0;
      }
      v13 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)target_card_ptr);
      GCGCard::addToken(v13, GCG_TOKEN_HP, *(_DWORD *)(v3 + 32), GCG_REASON_EFFECT_HEAL);
      v14 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)target_card_ptr);
      std::shared_ptr<GCGCard>::shared_ptr(&p_source_card_ptr, &effect_heal_param->heal_src_card_ptr);
      GCGCard::onAfterBeingHeal(v14, *(_DWORD *)(v3 + 32), &p_source_card_ptr, GCG_REASON_EFFECT);
      std::shared_ptr<GCGCard>::~shared_ptr(&p_source_card_ptr);
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/skill/gcg_skill_logic.cpp",
        "doHealHp",
        167);
      v15 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v23,
              (const char (*)[28])"doHealHp final_heal_amount:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 32));
      GCGSkillUseParam::getDesc[abi:cxx11](&val, param);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
  }
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 171: range 000000000E2EDAD8-000000000E2EFF05
void __cdecl GCGSkillLogic::doDamage(
        GCGSkillLogic *const this,
        const GCGEffectBase *effect,
        const GCGSkillUseParam *param,
        GCGDamageParam *damage,
        GCGSkillResult *result)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  GCGEffectElementType element_type; // r14d
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  uint32_t Guid; // eax
  common::milog::MiLogStream *v15; // r14
  GCGEffectElementType ElementRevise; // ecx
  GCGEffectElementType v17; // r14d
  signed int v18; // eax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  uint32_t SkillId; // eax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  uint32_t v22; // r14d
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  GCGControllerValue ControllerId; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v25; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v26; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v27; // rax
  GCGSkill *v28; // rdx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v29; // rax
  int v30; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v31; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v32; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v33; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v34; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v35; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v36; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v37; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v38; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v39; // rax
  int v40; // eax
  common::milog::MiLogStream *v41; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v42; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v43; // rax
  GCGEffectElementType v44; // r14d
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  uint32_t v46; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v47; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v48; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v49; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v50; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v51; // rax
  int32_t v52; // ecx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v53; // rax
  common::milog::MiLogStream *v54; // rcx
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // r14
  common::milog::MiLogStream *v57; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // rax
  GCGCard *v59; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v60; // rax
  GCGBeingHurtResult *v61; // rax
  GCGBeingHurtResult *v62; // rdx
  int32_t v63; // r14d
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v64; // rax
  uint32_t v65; // eax
  uint32_t *v66; // rax
  uint32_t *v67; // rdx
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v68; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v69; // rax
  uint32_t v70; // r14d
  std::__shared_ptr_access<GCGMsgSkillResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v71; // rax
  uint32_t v72; // r14d
  std::__shared_ptr_access<GCGMsgSkillResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v73; // rdx
  uint32_t *p_damage; // rax
  GCGEffectElementType v75; // r14d
  std::__shared_ptr_access<GCGMsgSkillResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v76; // rax
  std::__shared_ptr_access<GCGMsgSkillResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v77; // rdx
  uint32_t *p_last_hp; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v79; // rax
  uint32_t v80; // r14d
  std::__shared_ptr_access<GCGMsgSkillResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v81; // rax
  std::__shared_ptr_access<GCGMsgSkillResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v82; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v83; // rax
  uint32_t v84; // ecx
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v85; // rax
  uint32_t v86; // ecx
  uint32_t v87; // r14d
  std::__shared_ptr_access<GCGMsgSkillResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v88; // rax
  uint32_t from_result_seq; // r14d
  std::__shared_ptr_access<GCGMsgSkillResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v90; // rdx
  uint32_t *p_from_result_seq; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v92; // rax
  uint32_t v93; // r14d
  std::__shared_ptr_access<GCGMsgSkillResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v94; // rdx
  uint32_t *p_src_card_guid; // rax
  GCGGameMode *game_mode; // r14
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v97; // rax
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v99; // rax
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v100; // rax
  uint32_t result_seq; // r14d
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v102; // rax
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v103; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v104; // rax
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v105; // rax
  common::milog::MiLogStream *v106; // r14
  GCGSkill *v107; // r14
  std::shared_ptr<GCGSkillUseParam> *v108; // rax
  std::shared_ptr<GCGSkill> *v109; // rax
  common::milog::MiLogStream *v110; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v111; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v112; // rax
  bool is_alive_before_do_damage; // [rsp+3Bh] [rbp-435h]
  int damage_fix; // [rsp+3Ch] [rbp-434h]
  uint32_t shield_half_reduce_damage; // [rsp+40h] [rbp-430h]
  unsigned int damage_multiple_times; // [rsp+44h] [rbp-42Ch]
  GCGControllerValue cur_controller_id; // [rsp+48h] [rbp-428h]
  GCGControllerValue target_controller_id; // [rsp+4Ch] [rbp-424h]
  int32_t revise_damage_fix; // [rsp+50h] [rbp-420h]
  int32_t being_hit_revise_damage_fix; // [rsp+54h] [rbp-41Ch]
  int32_t reaction_revise_damage_fix; // [rsp+58h] [rbp-418h]
  int32_t before_half_reduce_damage; // [rsp+5Ch] [rbp-414h]
  int32_t half_revise; // [rsp+60h] [rbp-410h]
  int before_damage; // [rsp+64h] [rbp-40Ch]
  uint32_t final_hp; // [rsp+6Ch] [rbp-404h]
  std::vector<GCGSkillInfo>::iterator __for_begin; // [rsp+70h] [rbp-400h] BYREF
  std::vector<GCGSkillInfo>::iterator __for_end; // [rsp+78h] [rbp-3F8h] BYREF
  GCGDuel *duel; // [rsp+80h] [rbp-3F0h]
  GCGField *field; // [rsp+88h] [rbp-3E8h]
  GCGStatistics *statistic_mgr; // [rsp+90h] [rbp-3E0h]
  GCGSkillInfo *skill_info; // [rsp+98h] [rbp-3D8h]
  GCGSkillPreviewContext *preview_ctx; // [rsp+A0h] [rbp-3D0h]
  std::vector<GCGSkillInfo> *__for_range; // [rsp+A8h] [rbp-3C8h]
  GCGCardPtr *p_card_ptr; // [rsp+B0h] [rbp-3C0h]
  GCGMsgSkillResult::SkillDetailMsg *damage_detail_msg; // [rsp+B8h] [rbp-3B8h]
  std::vector<unsigned int> p_param_list; // [rsp+C0h] [rbp-3B0h] BYREF
  common::milog::MiLogStream v140; // [rsp+E0h] [rbp-390h] BYREF
  common::milog::MiLogStream v141; // [rsp+100h] [rbp-370h] BYREF
  std::string val; // [rsp+120h] [rbp-350h] BYREF
  char v143[816]; // [rsp+140h] [rbp-330h] BYREF

  v5 = (unsigned __int64)v143;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_4(768LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "15 32 4 16 final_damage:195 48 4 10 cur_hp:322 64 4 31 damage_reduce_to_half_times:277 80 16 17 "
                        "cur_skill_ptr:172 112 16 26 damage_source_card_ptr:178 144 16 26 damage_target_card_ptr:179 176 "
                        "16 30 element_reaction_skill_ptr:194 208 16 16 union_log_ss:213 240 16 22 reaction_param_ptr:404"
                        " 272 16 29 reaction_source_skill_ptr:410 304 16 7 msg:370 336 16 18 owner_card_ptr:381 368 24 18"
                        " skill_info_vec:196 432 56 21 being_hurt_result:339 528 168 19 cur_skill_param:205";
  *(_QWORD *)(v5 + 16) = GCGSkillLogic::doDamage;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = 61956;
  v7[536862723] = 62194;
  v7[536862724] = 62194;
  v7[536862725] = 62194;
  v7[536862726] = 62194;
  v7[536862727] = 62194;
  v7[536862728] = 62194;
  v7[536862729] = 62194;
  v7[536862730] = 62194;
  v7[536862731] = 62194;
  v7[536862732] = -218959360;
  v7[536862733] = 62194;
  v7[536862735] = -218959360;
  v7[536862736] = 62194;
  v7[536862741] = -218103808;
  v7[536862742] = -202116109;
  v7[536862743] = -202116109;
  GCGEffectBase::getSkill((const GCGEffectBase *const)(v5 + 80));
  if ( std::operator==<GCGSkill>((const std::shared_ptr<GCGSkill> *)(v5 + 80), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v141,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/skill/gcg_skill_logic.cpp",
      "doDamage",
      175);
    v8 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v141,
           (const char (*)[23])"effect getSkill fail. ");
    GCGSkillUseParam::getDesc[abi:cxx11](&val, param);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v141);
  }
  else
  {
    std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)(v5 + 112), &damage->damage_src_card_ptr);
    std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)(v5 + 144), &damage->damage_target_card_ptr);
    if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v5 + 144), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v141,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_skill_logic.cpp",
        "doDamage",
        182);
      v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             &v141,
             (const char (*)[34])"damage_target_card_ptr is nullptr");
      GCGSkillUseParam::getDesc[abi:cxx11](&val, param);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v141);
    }
    else if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v5 + 112), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v141,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_skill_logic.cpp",
        "doDamage",
        187);
      v10 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              &v141,
              (const char (*)[34])"damage_source_card_ptr is nullptr");
      GCGSkillUseParam::getDesc[abi:cxx11](&val, param);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v141);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&param->controller_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&param->controller_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&param->controller_id);
      }
      cur_controller_id = param->controller_id;
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      duel = GCGGameMode::getDuel(this->game_mode_);
      field = GCGDuel::getField(duel, cur_controller_id);
      std::shared_ptr<GCGSkill>::shared_ptr((std::shared_ptr<GCGSkill> *const)(v5 + 176), 0LL);
      if ( *(_BYTE *)(((unsigned __int64)damage >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)damage >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(damage);
      }
      *(_DWORD *)(v5 + 32) = damage->value;
      std::vector<GCGSkillInfo>::vector((std::vector<GCGSkillInfo> *const)(v5 + 368));
      v11 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 144));
      target_controller_id = GCGCard::getControllerId(v11);
      if ( *(char *)(((unsigned __int64)&param->is_ignore_damage >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&param->is_ignore_damage);
      if ( param->is_ignore_damage )
      {
        if ( *(_BYTE *)(((unsigned __int64)&damage->element_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)damage + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&damage->element_type >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&damage->element_type);
        }
        element_type = damage->element_type;
        v13 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 144));
        Guid = GCGCard::getGuid(v13);
        GCGDuel::recordDamageElementType(duel, Guid, element_type);
        common::milog::MiLogStream::create(
          &v141,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/skill/gcg_skill_logic.cpp",
          "doDamage",
          204);
        v15 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                &v141,
                (const char (*)[23])"doDamage ignore damage");
        GCGSkillUseParam::getDesc[abi:cxx11](&val, param);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v141);
        GCGSkillUseParam::GCGSkillUseParam((GCGSkillUseParam *const)(v5 + 528));
        if ( *(_BYTE *)(((unsigned __int64)&damage->element_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)damage + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&damage->element_type >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&damage->element_type);
        }
        *(_DWORD *)(v5 + 668) = damage->element_type;
        std::shared_ptr<GCGCard>::operator=(
          (std::shared_ptr<GCGCard> *const)(v5 + 552),
          (const std::shared_ptr<GCGCard> *)(v5 + 112));
        std::shared_ptr<GCGCard>::operator=(
          (std::shared_ptr<GCGCard> *const)(v5 + 568),
          (const std::shared_ptr<GCGCard> *)(v5 + 144));
        *(_DWORD *)(v5 + 640) = cur_controller_id;
        GCGSkillLogic::doAttachElementAndAllEffect(this, effect, (const GCGSkillUseParam *)(v5 + 528), result);
        GCGSkillUseParam::~GCGSkillUseParam((GCGSkillUseParam *const)(v5 + 528));
      }
      else
      {
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v5 + 208));
        if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->game_mode_);
        statistic_mgr = GCGGameMode::getStatistics(this->game_mode_);
        shield_half_reduce_damage = 0;
        if ( *(char *)(((unsigned __int64)&damage->is_real_damage >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&damage->is_real_damage);
        if ( !damage->is_real_damage )
        {
          if ( *(_BYTE *)(((unsigned __int64)&damage->element_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)damage + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&damage->element_type >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4(&damage->element_type);
          }
          if ( damage->element_type == GCG_ELEMENT_PHYSIC )
          {
            ElementRevise = GCGSkillLogic::getElementRevise(
                              this,
                              param,
                              damage->element_type,
                              (std::vector<GCGSkillInfo> *)(v5 + 368));
            if ( *(_BYTE *)(((unsigned __int64)&damage->element_type >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)damage + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&damage->element_type >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_store4(&damage->element_type);
            }
            damage->element_type = ElementRevise;
          }
          if ( *(_BYTE *)(((unsigned __int64)&damage->element_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)damage + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&damage->element_type >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4(&damage->element_type);
          }
          v17 = damage->element_type;
          v18 = (unsigned int)std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 144));
          GCGSkillLogic::attachElement(
            (GCGSkillLogic *const)(v5 + 304),
            (GCGCard *)this,
            (GCGEffectElementType)v18,
            (const GCGSkillUseParam *)(unsigned int)v17);
          std::shared_ptr<GCGSkill>::operator=(
            (std::shared_ptr<GCGSkill> *const)(v5 + 176),
            (std::shared_ptr<GCGSkill> *)(v5 + 304));
          std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v5 + 304));
          if ( std::operator!=<GCGSkill>(0LL, (const std::shared_ptr<GCGSkill> *)(v5 + 176)) )
          {
            v19 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 176));
            SkillId = GCGSkill::getSkillId(v19);
            GCGDuel::recordReaction(duel, SkillId);
            GCGStatistics::reportStatisticSpecifyDataUint(
              statistic_mgr,
              cur_controller_id,
              ELEMENT_REACTION_TIMES,
              1u,
              1);
            memset(&p_param_list, 0, sizeof(p_param_list));
            std::vector<unsigned int>::vector(&p_param_list);
            v21 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 176));
            v22 = GCGSkill::getSkillId(v21);
            v23 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 144));
            ControllerId = GCGCard::getControllerId(v23);
            GCGStatistics::reportStatisticOperationData(
              statistic_mgr,
              GCG_OPERATION_TYPE_REACTION,
              ControllerId,
              v22,
              &p_param_list);
            std::vector<unsigned int>::~vector(&p_param_list);
          }
          v25 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                  (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v5 + 208),
                  "[REVISE base_damage:");
          common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v25, *(_DWORD *)(v5 + 32));
          revise_damage_fix = GCGSkillLogic::getDamageRevise(
                                this,
                                param,
                                damage,
                                (std::vector<GCGSkillInfo> *)(v5 + 368));
          if ( revise_damage_fix )
          {
            v26 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v5 + 208),
                    " revise_damage_fix:");
            common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v26, revise_damage_fix);
          }
          being_hit_revise_damage_fix = GCGSkillLogic::getBeingHitDamageRevise(
                                          this,
                                          param,
                                          damage,
                                          (std::vector<GCGSkillInfo> *)(v5 + 368));
          damage_fix = being_hit_revise_damage_fix + revise_damage_fix;
          if ( being_hit_revise_damage_fix )
          {
            v27 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v5 + 208),
                    " being_hit_revise_damage_fix:");
            common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v27, being_hit_revise_damage_fix);
          }
          if ( std::operator!=<GCGSkill>(0LL, (const std::shared_ptr<GCGSkill> *)(v5 + 176)) )
          {
            v28 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 176));
            reaction_revise_damage_fix = GCGSkillLogic::getSkillDamageRevise(this, param, v28);
            damage_fix += reaction_revise_damage_fix;
            if ( reaction_revise_damage_fix )
            {
              v29 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                      (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v5 + 208),
                      " reaction_revise_damage_fix:");
              common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v29, reaction_revise_damage_fix);
            }
            skill_info = std::vector<GCGSkillInfo>::emplace_back<>((std::vector<GCGSkillInfo> *const)(v5 + 368));
            std::shared_ptr<GCGSkill>::operator=(&skill_info->skill_ptr, (const std::shared_ptr<GCGSkill> *)(v5 + 176));
          }
          damage_multiple_times = GCGSkillLogic::getDamageMultipleRevise(
                                    this,
                                    param,
                                    damage,
                                    (std::vector<GCGSkillInfo> *)(v5 + 368));
          if ( !damage_multiple_times )
            damage_multiple_times = 1;
          v30 = SAFE_ADD<int,int>(*(_DWORD *)(v5 + 32), damage_fix);
          *(_DWORD *)(v5 + 32) = SAFE_MULTIPLY<int,unsigned int>(v30, damage_multiple_times);
          v31 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                  (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v5 + 208),
                  " multiple:");
          v32 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v31, damage_multiple_times);
          v33 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v32, " damage_fix:");
          v34 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v33, damage_fix);
          v35 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v34, off_1BD92740);
          v36 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v35, *(_DWORD *)(v5 + 32));
          common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v36, "]");
          before_half_reduce_damage = *(_DWORD *)(v5 + 32);
          *(_DWORD *)(v5 + 64) = GCGSkillLogic::getBeingHitDamageReduceToHalf(
                                   this,
                                   param,
                                   damage,
                                   (std::vector<GCGSkillInfo> *)(v5 + 368));
          if ( *(_DWORD *)(v5 + 64) )
          {
            v37 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v5 + 208),
                    "[REDUCE base_damage:");
            v38 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v37, *(_DWORD *)(v5 + 32));
            v39 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v38, " half times:");
            common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v39, *(_DWORD *)(v5 + 64));
            if ( *(_DWORD *)(v5 + 64) <= 0x1Eu )
            {
              half_revise = 1 << *(_DWORD *)(v5 + 64);
              if ( half_revise )
              {
                if ( *(_DWORD *)(v5 + 32) % half_revise )
                  v40 = *(_DWORD *)(v5 + 32) / half_revise + 1;
                else
                  v40 = *(_DWORD *)(v5 + 32) / half_revise;
                *(_DWORD *)(v5 + 32) = v40;
              }
              else
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&val,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/card_game/skill/gcg_skill_logic.cpp",
                  "doDamage",
                  297);
                v41 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                        (common::milog::MiLogStream *const)&val,
                        (const char (*)[50])"half_revise is zero, damage_reduce_to_half_times:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v41,
                  (const unsigned int *)(v5 + 64));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
              }
            }
            else
            {
              *(_DWORD *)(v5 + 32) = *(_DWORD *)(v5 + 32) > 0;
            }
            if ( before_half_reduce_damage > *(_DWORD *)(v5 + 32) )
              shield_half_reduce_damage = before_half_reduce_damage - *(_DWORD *)(v5 + 32);
            v42 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v5 + 208),
                    off_1BD92740);
            v43 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v42, *(_DWORD *)(v5 + 32));
            common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v43, "]");
          }
        }
        if ( *(_BYTE *)(((unsigned __int64)&damage->element_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)damage + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&damage->element_type >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&damage->element_type);
        }
        v44 = damage->element_type;
        v45 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 144));
        v46 = GCGCard::getGuid(v45);
        GCGDuel::recordDamageElementType(duel, v46, v44);
        if ( *(int *)(v5 + 32) < 0 )
          *(_DWORD *)(v5 + 32) = 0;
        if ( *(char *)(((unsigned __int64)&damage->is_real_damage >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&damage->is_real_damage);
        if ( !damage->is_real_damage )
        {
          before_damage = *(_DWORD *)(v5 + 32);
          GCGSkillLogic::tryDuductionByShield(
            this,
            param,
            damage,
            (int32_t *)(v5 + 32),
            (std::vector<GCGSkillInfo> *)(v5 + 368));
          if ( before_damage != *(_DWORD *)(v5 + 32) )
          {
            v47 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v5 + 208),
                    "[SHIELD base_damage:");
            v48 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v47, before_damage);
            v49 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v48, off_1BD92740);
            v50 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v49, *(_DWORD *)(v5 + 32));
            common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v50, "]");
          }
        }
        v51 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 144));
        *(_DWORD *)(v5 + 48) = GCGCard::getToken(v51, GCG_TOKEN_HP);
        if ( *(int *)(v5 + 32) < 0 )
          *(_DWORD *)(v5 + 32) = 0;
        v52 = *(_DWORD *)(v5 + 32);
        if ( *(_BYTE *)(((unsigned __int64)&result->final_damage >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&result->final_damage >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&result->final_damage);
        }
        result->final_damage = v52;
        v53 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v5 + 208),
                " final damage:");
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v53, *(_DWORD *)(v5 + 32));
        common::milog::MiLogStream::create(
          &v140,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/skill/gcg_skill_logic.cpp",
          "doDamage",
          331);
        v54 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                &v140,
                (const char (*)[15])"doDamage real:");
        if ( *(char *)(((unsigned __int64)&damage->is_real_damage >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&damage->is_real_damage);
        v55 = common::milog::MiLogStream::operator<<(v54, damage->is_real_damage);
        v56 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v55, (const char (*)[9])" effect:");
        GCGEffectBase::getDesc[abi:cxx11]((std::string *)&v141, effect);
        v57 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v56, (const std::string *)&v141);
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
          &val,
          (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v5 + 208));
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v57, &val);
        std::string::~string(&val);
        std::string::~string(&v141);
        common::milog::MiLogStream::~MiLogStream(&v140);
        v58 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 144));
        is_alive_before_do_damage = GCGCard::isAlive(v58);
        v59 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 144));
        GCGCard::subToken(v59, GCG_TOKEN_HP, *(_DWORD *)(v5 + 32), GCG_REASON_EFFECT_DAMAGE);
        GCGBeingHurtResult::GCGBeingHurtResult((GCGBeingHurtResult *const)(v5 + 432));
        std::shared_ptr<GCGSkill>::operator=(
          (std::shared_ptr<GCGSkill> *const)(v5 + 432),
          (const std::shared_ptr<GCGSkill> *)(v5 + 80));
        std::shared_ptr<GCGCard>::operator=(
          (std::shared_ptr<GCGCard> *const)(v5 + 448),
          (const std::shared_ptr<GCGCard> *)(v5 + 112));
        std::shared_ptr<GCGCard>::operator=(
          (std::shared_ptr<GCGCard> *const)(v5 + 464),
          (const std::shared_ptr<GCGCard> *)(v5 + 144));
        v60 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 144));
        *(_DWORD *)(v5 + 480) = GCGCard::getGuid(v60);
        v61 = std::move<GCGBeingHurtResult &>((GCGBeingHurtResult *)(v5 + 432));
        std::vector<GCGBeingHurtResult>::emplace_back<GCGBeingHurtResult>(&result->being_hurt_result_vec, v61, v62);
        if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->game_mode_);
        if ( GCGGameMode::isDuringSnapshot(this->game_mode_) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->game_mode_);
          preview_ctx = GCGGameMode::getSkillPreviewContext(this->game_mode_);
          v63 = *(_DWORD *)(v5 + 32);
          v64 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 144));
          v65 = GCGCard::getGuid(v64);
          GCGSkillPreviewContext::recordCharacterHpChange(preview_ctx, v65, 1, v63);
        }
        GCGStatistics::reportStatisticSpecifyDataUint(
          statistic_mgr,
          target_controller_id,
          SHIELD_REDUCE_SUM,
          shield_half_reduce_damage,
          1);
        v66 = (uint32_t *)std::min<int>((const int *)(v5 + 32), (const int *)(v5 + 48));
        v67 = v66;
        if ( *(_BYTE *)(((unsigned __int64)v66 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v66 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v66 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v66);
        }
        GCGStatistics::reportStatisticSpecifyDataUint(statistic_mgr, target_controller_id, BEING_DAMAGE_SUM, *v67, 1);
        if ( *(_DWORD *)(v5 + 32) > *(_DWORD *)(v5 + 48) )
          GCGStatistics::reportStatisticSpecifyDataUint(
            statistic_mgr,
            target_controller_id,
            BEING_DAMAGE_OVERFLOW_SUM,
            *(_DWORD *)(v5 + 32) - *(_DWORD *)(v5 + 48),
            1);
        v68 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 144));
        final_hp = GCGCard::getToken(v68, GCG_TOKEN_HP);
        std::vector<GCGSkillInfo>::clear(&damage->damage_detail_vec);
        std::vector<GCGSkillInfo>::swap(&damage->damage_detail_vec, (std::vector<GCGSkillInfo> *)(v5 + 368));
        common::tools::perf::make_shared<GCGMsgSkillResult>();
        v69 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 80));
        v70 = GCGSkill::getSkillId(v69);
        v71 = std::__shared_ptr_access<GCGMsgSkillResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgSkillResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 304));
        if ( *(_BYTE *)(((unsigned __int64)&v71->skill_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v71->skill_id >> 3) + 0x7FFF8000) <= 3 )
        {
          v71 = (std::__shared_ptr_access<GCGMsgSkillResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v71->skill_id);
        }
        v71->skill_id = v70;
        v72 = *(_DWORD *)(v5 + 32);
        v73 = std::__shared_ptr_access<GCGMsgSkillResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgSkillResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 304));
        p_damage = &v73->damage;
        if ( *(_BYTE *)(((unsigned __int64)p_damage >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_damage & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_damage >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(p_damage);
        }
        v73->damage = v72;
        if ( *(_BYTE *)(((unsigned __int64)&damage->element_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)damage + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&damage->element_type >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&damage->element_type);
        }
        v75 = damage->element_type;
        v76 = std::__shared_ptr_access<GCGMsgSkillResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgSkillResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 304));
        if ( *(_BYTE *)(((unsigned __int64)&v76->effect_element >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v76->effect_element >> 3) + 0x7FFF8000) <= 3 )
        {
          v76 = (std::__shared_ptr_access<GCGMsgSkillResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v76->effect_element);
        }
        v76->effect_element = v75;
        v77 = std::__shared_ptr_access<GCGMsgSkillResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgSkillResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 304));
        p_last_hp = &v77->last_hp;
        if ( *(_BYTE *)(((unsigned __int64)p_last_hp >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_last_hp & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_last_hp >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(p_last_hp);
        }
        v77->last_hp = final_hp;
        v79 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 144));
        v80 = GCGCard::getGuid(v79);
        v81 = std::__shared_ptr_access<GCGMsgSkillResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgSkillResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 304));
        if ( *(_BYTE *)(((unsigned __int64)&v81->target_card_guid >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v81->target_card_guid >> 3) + 0x7FFF8000) <= 3 )
        {
          v81 = (std::__shared_ptr_access<GCGMsgSkillResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v81->target_card_guid);
        }
        v81->target_card_guid = v80;
        __for_range = &damage->damage_detail_vec;
        __for_begin._M_current = std::vector<GCGSkillInfo>::begin(&damage->damage_detail_vec)._M_current;
        __for_end._M_current = std::vector<GCGSkillInfo>::end(&damage->damage_detail_vec)._M_current;
        while ( __gnu_cxx::operator!=<GCGSkillInfo *,std::vector<GCGSkillInfo>>(&__for_begin, &__for_end) )
        {
          p_card_ptr = (GCGCardPtr *)__gnu_cxx::__normal_iterator<GCGSkillInfo *,std::vector<GCGSkillInfo>>::operator*(&__for_begin);
          if ( std::operator!=<GCGSkill>((const std::shared_ptr<GCGSkill> *)&p_card_ptr[1], 0LL) )
          {
            v82 = std::__shared_ptr_access<GCGMsgSkillResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgSkillResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 304));
            damage_detail_msg = std::vector<GCGMsgSkillResult::SkillDetailMsg>::emplace_back<>(&v82->skill_detail_vec);
            std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)&p_card_ptr[1]);
            GCGSkill::getOwnerCard((const GCGSkill *const)(v5 + 336));
            if ( std::operator!=<GCGCard>((const std::shared_ptr<GCGCard> *)(v5 + 336), 0LL) )
            {
              v83 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 336));
              v84 = GCGCard::getGuid(v83);
              if ( *(_BYTE *)(((unsigned __int64)damage_detail_msg >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)damage_detail_msg & 7) + 3) >= *(_BYTE *)(((unsigned __int64)damage_detail_msg >> 3)
                                                                                    + 0x7FFF8000) )
              {
                __asan_report_store4(damage_detail_msg);
              }
              damage_detail_msg->card_guid = v84;
            }
            v85 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)&p_card_ptr[1]);
            v86 = GCGSkill::getSkillId(v85);
            if ( *(_BYTE *)(((unsigned __int64)&damage_detail_msg->skill_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)damage_detail_msg + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&damage_detail_msg->skill_id >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_store4(&damage_detail_msg->skill_id);
            }
            damage_detail_msg->skill_id = v86;
            std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v5 + 336));
          }
          __gnu_cxx::__normal_iterator<GCGSkillInfo *,std::vector<GCGSkillInfo>>::operator++(&__for_begin);
        }
        if ( *(_BYTE *)(((unsigned __int64)&result->result_seq >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)result + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&result->result_seq >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&result->result_seq);
        }
        v87 = ++result->result_seq;
        v88 = std::__shared_ptr_access<GCGMsgSkillResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgSkillResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 304));
        if ( *(_BYTE *)(((unsigned __int64)&v88->result_seq >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v88->result_seq >> 3) + 0x7FFF8000) <= 3 )
        {
          v88 = (std::__shared_ptr_access<GCGMsgSkillResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v88->result_seq);
        }
        v88->result_seq = v87;
        if ( *(_BYTE *)(((unsigned __int64)&param->from_result_seq >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&param->from_result_seq >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&param->from_result_seq);
        }
        from_result_seq = param->from_result_seq;
        v90 = std::__shared_ptr_access<GCGMsgSkillResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgSkillResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 304));
        p_from_result_seq = &v90->from_result_seq;
        if ( *(_BYTE *)(((unsigned __int64)p_from_result_seq >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_from_result_seq & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_from_result_seq >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_store4(p_from_result_seq);
        }
        v90->from_result_seq = from_result_seq;
        if ( std::operator!=<GCGCard>((const std::shared_ptr<GCGCard> *)(v5 + 112), 0LL) )
        {
          v92 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 112));
          v93 = GCGCard::getGuid(v92);
          v94 = std::__shared_ptr_access<GCGMsgSkillResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgSkillResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 304));
          p_src_card_guid = &v94->src_card_guid;
          if ( *(_BYTE *)(((unsigned __int64)p_src_card_guid >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_src_card_guid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_src_card_guid >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_store4(p_src_card_guid);
          }
          v94->src_card_guid = v93;
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->game_mode_);
        game_mode = this->game_mode_;
        std::shared_ptr<GCGMessage>::shared_ptr<GCGMsgSkillResult,void>(
          (std::shared_ptr<GCGMessage> *const)(v5 + 336),
          (const std::shared_ptr<GCGMsgSkillResult> *)(v5 + 304));
        GCGGameMode::sendMessage(game_mode, (GCGMessagePtr *)(v5 + 336));
        std::shared_ptr<GCGMessage>::~shared_ptr((std::shared_ptr<GCGMessage> *const)(v5 + 336));
        GCGStatistics::reportStatisticSpecifyDataUintVec(
          statistic_mgr,
          cur_controller_id,
          ONE_HIT_DAMAGE_VEC,
          *(_DWORD *)(v5 + 32));
        std::shared_ptr<GCGMsgSkillResult>::~shared_ptr((std::shared_ptr<GCGMsgSkillResult> *const)(v5 + 304));
        if ( *(char *)(((unsigned __int64)&damage->is_real_damage >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&damage->is_real_damage);
        if ( !damage->is_real_damage && std::operator!=<GCGSkill>((const std::shared_ptr<GCGSkill> *)(v5 + 176), 0LL) )
        {
          v97 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 176));
          if ( GCGSkill::isHasEffect(v97, ACTIVE_CATEGORY) )
          {
            common::tools::perf::make_shared<GCGSkillUseParam>();
            v99 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 240));
            std::shared_ptr<GCGCard>::operator=(&v99->source_card_ptr, (const std::shared_ptr<GCGCard> *)(v5 + 112));
            v100 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 240));
            std::shared_ptr<GCGCard>::operator=(&v100->target_card_ptr, (const std::shared_ptr<GCGCard> *)(v5 + 144));
            if ( *(_BYTE *)(((unsigned __int64)&result->result_seq >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)result + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&result->result_seq >> 3)
                                                                    + 0x7FFF8000) )
            {
              __asan_report_load4(&result->result_seq);
            }
            result_seq = result->result_seq;
            v102 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 240));
            if ( *(_BYTE *)(((unsigned __int64)&v102->from_result_seq >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v102->from_result_seq >> 3) + 0x7FFF8000) <= 3 )
            {
              v102 = (std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v102->from_result_seq);
            }
            v102->from_result_seq = result_seq;
            common::tools::perf::make_shared<GCGSkillUseParam,GCGSkillUseParam const&>(
              (const GCGSkillUseParam *)(v5 + 336),
              param);
            v103 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 240));
            std::shared_ptr<GCGSkillUseParam>::operator=(
              &v103->trigger_window_param_ptr,
              (std::shared_ptr<GCGSkillUseParam> *)(v5 + 336));
            std::shared_ptr<GCGSkillUseParam>::~shared_ptr((std::shared_ptr<GCGSkillUseParam> *const)(v5 + 336));
            *(_QWORD *)(v5 + 272) = 0LL;
            *(_QWORD *)(v5 + 280) = 0LL;
            v104 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 80));
            if ( GCGSkill::isReaction(v104) )
            {
              std::weak_ptr<GCGSkill>::lock((const std::weak_ptr<GCGSkill> *const)(v5 + 336));
              std::shared_ptr<GCGSkill>::operator=(
                (std::shared_ptr<GCGSkill> *const)(v5 + 272),
                (std::shared_ptr<GCGSkill> *)(v5 + 336));
              std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v5 + 336));
            }
            else
            {
              std::shared_ptr<GCGSkill>::operator=(
                (std::shared_ptr<GCGSkill> *const)(v5 + 272),
                (const std::shared_ptr<GCGSkill> *)(v5 + 80));
            }
            v105 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 240));
            std::weak_ptr<GCGSkill>::operator=<GCGSkill>(
              &v105->reaction_source_skill_wtr,
              (const std::shared_ptr<GCGSkill> *)(v5 + 272));
            if ( std::operator==<GCGSkill>((const std::shared_ptr<GCGSkill> *)(v5 + 272), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v141,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/card_game/skill/gcg_skill_logic.cpp",
                "doDamage",
                424);
              v106 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                       &v141,
                       (const char (*)[39])"reaction_source_skill_ptr is nullptr. ");
              GCGSkillUseParam::getDesc[abi:cxx11](&val, param);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v106, &val);
              std::string::~string(&val);
              common::milog::MiLogStream::~MiLogStream(&v141);
            }
            else
            {
              v107 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 272));
              v108 = std::move<std::shared_ptr<GCGSkillUseParam> &>((std::shared_ptr<GCGSkillUseParam> *)(v5 + 240));
              std::shared_ptr<GCGSkillUseParam>::shared_ptr((std::shared_ptr<GCGSkillUseParam> *const)(v5 + 336), v108);
              v109 = std::move<std::shared_ptr<GCGSkill> &>((std::shared_ptr<GCGSkill> *)(v5 + 176));
              std::shared_ptr<GCGSkill>::shared_ptr((std::shared_ptr<GCGSkill> *const)(v5 + 304), v109);
              GCGSkill::onElementReaction(v107, (GCGSkillPtr *)(v5 + 304), (GCGSkillUseParamPtr *)(v5 + 336));
              std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v5 + 304));
              std::shared_ptr<GCGSkillUseParam>::~shared_ptr((std::shared_ptr<GCGSkillUseParam> *const)(v5 + 336));
            }
            std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v5 + 272));
            std::shared_ptr<GCGSkillUseParam>::~shared_ptr((std::shared_ptr<GCGSkillUseParam> *const)(v5 + 240));
          }
        }
        if ( *(_DWORD *)(v5 + 32) )
        {
          if ( !final_hp && is_alive_before_do_damage )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&val,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/card_game/skill/gcg_skill_logic.cpp",
              "doDamage",
              435);
            v110 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                     (common::milog::MiLogStream *const)&val,
                     (const char (*)[29])"target card is killed, guid:");
            v111 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 144));
            *(_DWORD *)(v5 + 64) = GCGCard::getGuid(v111);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v110,
              (const unsigned int *)(v5 + 64));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
            v112 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 144));
            *(_DWORD *)(v5 + 64) = GCGCard::getGuid(v112);
            std::vector<unsigned int>::push_back(
              &result->die_character_vec,
              (std::vector<unsigned int>::value_type *)(v5 + 64));
            if ( target_controller_id != cur_controller_id )
              GCGDuel::addControllerIdKillCount(duel, cur_controller_id, 1u);
          }
        }
        GCGBeingHurtResult::~GCGBeingHurtResult((GCGBeingHurtResult *const)(v5 + 432));
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v5 + 208));
      }
      std::vector<GCGSkillInfo>::~vector((std::vector<GCGSkillInfo> *const)(v5 + 368));
      std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v5 + 176));
    }
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v5 + 144));
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v5 + 112));
  }
  std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v5 + 80));
  if ( v143 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8054) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF805C) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 447: range 000000000E2EFF06-000000000E2F0E8B
void __cdecl GCGSkillLogic::doAttachElementAndAllEffect(
        GCGSkillLogic *const this,
        const GCGEffectBase *effect,
        const GCGSkillUseParam *param,
        GCGSkillResult *result)
{
  unsigned __int64 p_M_refcount; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // r14
  GCGEffectElementType damage_element_type; // r14d
  signed int v11; // eax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t SkillId; // edx
  GCGStatistics *Statistics; // rdi
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  uint32_t v16; // r14d
  std::__shared_ptr_access<GCGMsgNoDamageSkillResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  GCGEffectElementType v18; // r14d
  std::__shared_ptr_access<GCGMsgNoDamageSkillResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rdx
  GCGEffectElementType *p_effect_element; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  uint32_t Guid; // r14d
  std::__shared_ptr_access<GCGMsgNoDamageSkillResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::__shared_ptr_access<GCGMsgNoDamageSkillResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  uint32_t v26; // ecx
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  uint32_t v28; // ecx
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  uint32_t v30; // r14d
  std::__shared_ptr_access<GCGMsgNoDamageSkillResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rdx
  uint32_t *p_src_card_guid; // rax
  uint32_t v33; // r14d
  std::__shared_ptr_access<GCGMsgNoDamageSkillResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  uint32_t from_result_seq; // r14d
  std::__shared_ptr_access<GCGMsgNoDamageSkillResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rdx
  uint32_t *p_from_result_seq; // rax
  GCGGameMode *game_mode; // r14
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  uint32_t result_seq; // r14d
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rax
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  common::milog::MiLogStream *v48; // r14
  GCGSkill *v49; // r14
  std::shared_ptr<GCGSkillUseParam> *v50; // rax
  std::shared_ptr<GCGSkill> *v51; // rax
  GCGDuel *duel; // [rsp+20h] [rbp-1C0h]
  std::vector<GCGMsgNoDamageSkillResult::SkillDetailMsg>::reference damage_detail_msg; // [rsp+28h] [rbp-1B8h]
  std::shared_ptr<GCGSkill> p_skill_ptr; // [rsp+30h] [rbp-1B0h] BYREF
  GCGSkillUseParam p_msg[2]; // [rsp+40h] [rbp-1A0h] BYREF

  p_M_refcount = (unsigned __int64)&p_msg[0].die_card_owner_ptr._M_refcount;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      p_M_refcount = v5;
  }
  *(_QWORD *)p_M_refcount = 1102416563LL;
  *(_QWORD *)(p_M_refcount + 8) = "8 32 16 17 cur_skill_ptr:448 64 16 19 source_card_ptr:454 96 16 19 target_card_ptr:455"
                                  " 128 16 30 element_reaction_skill_ptr:467 160 16 7 msg:476 192 16 18 owner_card_ptr:48"
                                  "1 224 16 22 reaction_param_ptr:495 256 16 29 reaction_source_skill_ptr:502";
  *(_QWORD *)(p_M_refcount + 16) = GCGSkillLogic::doAttachElementAndAllEffect;
  v6 = (_DWORD *)(p_M_refcount >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862726] = -219021312;
  v6[536862727] = -219021312;
  v6[536862728] = -202178560;
  GCGEffectBase::getSkill((const GCGEffectBase *const)(p_M_refcount + 32));
  if ( std::operator==<GCGSkill>(0LL, (const std::shared_ptr<GCGSkill> *)(p_M_refcount + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&p_msg[0].trigger_type,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/skill/gcg_skill_logic.cpp",
      "doAttachElementAndAllEffect",
      451);
    v7 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           (common::milog::MiLogStream *const)&p_msg[0].trigger_type,
           (const char (*)[23])"effect getSkill fail. ");
    GCGSkillUseParam::getDesc[abi:cxx11]((std::string *)&p_msg[0].target_card_ptr._M_refcount, param);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
      v7,
      (const std::string *)&p_msg[0].target_card_ptr._M_refcount);
    std::string::~string(&p_msg[0].target_card_ptr._M_refcount);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_msg[0].trigger_type);
  }
  else
  {
    std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)(p_M_refcount + 64), &param->source_card_ptr);
    std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)(p_M_refcount + 96), &param->target_card_ptr);
    if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(p_M_refcount + 64)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&p_msg[0].trigger_type,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_skill_logic.cpp",
        "doAttachElementAndAllEffect",
        458);
      v8 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)&p_msg[0].trigger_type,
             (const char (*)[27])"source_card_ptr is nullptr");
      GCGSkillUseParam::getDesc[abi:cxx11]((std::string *)&p_msg[0].target_card_ptr._M_refcount, param);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
        v8,
        (const std::string *)&p_msg[0].target_card_ptr._M_refcount);
      std::string::~string(&p_msg[0].target_card_ptr._M_refcount);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_msg[0].trigger_type);
    }
    else if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(p_M_refcount + 96)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&p_msg[0].trigger_type,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_skill_logic.cpp",
        "doAttachElementAndAllEffect",
        463);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)&p_msg[0].trigger_type,
             (const char (*)[27])"target_card_ptr is nullptr");
      GCGSkillUseParam::getDesc[abi:cxx11]((std::string *)&p_msg[0].target_card_ptr._M_refcount, param);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
        v9,
        (const std::string *)&p_msg[0].target_card_ptr._M_refcount);
      std::string::~string(&p_msg[0].target_card_ptr._M_refcount);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_msg[0].trigger_type);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&param->damage_element_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)param - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->damage_element_type >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&param->damage_element_type);
      }
      damage_element_type = param->damage_element_type;
      v11 = (unsigned int)std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 96));
      GCGSkillLogic::attachElement(
        (GCGSkillLogic *const)(p_M_refcount + 128),
        (GCGCard *)this,
        (GCGEffectElementType)v11,
        (const GCGSkillUseParam *)(unsigned int)damage_element_type);
      if ( std::operator!=<GCGSkill>(0LL, (const std::shared_ptr<GCGSkill> *)(p_M_refcount + 128)) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->game_mode_);
        duel = GCGGameMode::getDuel(this->game_mode_);
        v12 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
        SkillId = GCGSkill::getSkillId(v12);
        GCGDuel::recordReaction(duel, SkillId);
        if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->game_mode_);
        Statistics = GCGGameMode::getStatistics(this->game_mode_);
        if ( *(_BYTE *)(((unsigned __int64)&param->controller_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&param->controller_id >> 3) + 0x7FFF8000) <= 3 )
        {
          Statistics = (GCGStatistics *)&param->controller_id;
          __asan_report_load4(&param->controller_id);
        }
        GCGStatistics::reportStatisticSpecifyDataUint(Statistics, param->controller_id, ELEMENT_REACTION_TIMES, 1u, 1);
        common::tools::perf::make_shared<GCGMsgNoDamageSkillResult>();
        v15 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 32));
        v16 = GCGSkill::getSkillId(v15);
        v17 = std::__shared_ptr_access<GCGMsgNoDamageSkillResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgNoDamageSkillResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 160));
        if ( *(_BYTE *)(((unsigned __int64)&v17->skill_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v17->skill_id >> 3) + 0x7FFF8000) <= 3 )
        {
          v17 = (std::__shared_ptr_access<GCGMsgNoDamageSkillResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v17->skill_id);
        }
        v17->skill_id = v16;
        if ( *(_BYTE *)(((unsigned __int64)&param->damage_element_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)param - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->damage_element_type >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&param->damage_element_type);
        }
        v18 = param->damage_element_type;
        v19 = std::__shared_ptr_access<GCGMsgNoDamageSkillResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgNoDamageSkillResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 160));
        p_effect_element = &v19->effect_element;
        if ( *(_BYTE *)(((unsigned __int64)p_effect_element >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_effect_element & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_effect_element >> 3)
                                                                             + 0x7FFF8000) )
        {
          __asan_report_store4(p_effect_element);
        }
        v19->effect_element = v18;
        v21 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 96));
        Guid = GCGCard::getGuid(v21);
        v23 = std::__shared_ptr_access<GCGMsgNoDamageSkillResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgNoDamageSkillResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 160));
        if ( *(_BYTE *)(((unsigned __int64)&v23->target_card_guid >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v23->target_card_guid >> 3) + 0x7FFF8000) <= 3 )
        {
          v23 = (std::__shared_ptr_access<GCGMsgNoDamageSkillResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v23->target_card_guid);
        }
        v23->target_card_guid = Guid;
        v24 = std::__shared_ptr_access<GCGMsgNoDamageSkillResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgNoDamageSkillResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 160));
        damage_detail_msg = std::vector<GCGMsgNoDamageSkillResult::SkillDetailMsg>::emplace_back<>(&v24->skill_detail_vec);
        std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
        GCGSkill::getOwnerCard((const GCGSkill *const)(p_M_refcount + 192));
        if ( std::operator!=<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(p_M_refcount + 192)) )
        {
          v25 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 192));
          v26 = GCGCard::getGuid(v25);
          if ( *(_BYTE *)(((unsigned __int64)damage_detail_msg >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)damage_detail_msg & 7) + 3) >= *(_BYTE *)(((unsigned __int64)damage_detail_msg >> 3)
                                                                                + 0x7FFF8000) )
          {
            __asan_report_store4(damage_detail_msg);
          }
          damage_detail_msg->card_guid = v26;
        }
        v27 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
        v28 = GCGSkill::getSkillId(v27);
        if ( *(_BYTE *)(((unsigned __int64)&damage_detail_msg->skill_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)damage_detail_msg + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&damage_detail_msg->skill_id >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_store4(&damage_detail_msg->skill_id);
        }
        damage_detail_msg->skill_id = v28;
        v29 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 64));
        v30 = GCGCard::getGuid(v29);
        v31 = std::__shared_ptr_access<GCGMsgNoDamageSkillResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgNoDamageSkillResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 160));
        p_src_card_guid = &v31->src_card_guid;
        if ( *(_BYTE *)(((unsigned __int64)p_src_card_guid >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_src_card_guid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_src_card_guid >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_store4(p_src_card_guid);
        }
        v31->src_card_guid = v30;
        if ( *(_BYTE *)(((unsigned __int64)&result->result_seq >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)result + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&result->result_seq >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&result->result_seq);
        }
        v33 = ++result->result_seq;
        v34 = std::__shared_ptr_access<GCGMsgNoDamageSkillResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgNoDamageSkillResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 160));
        if ( *(_BYTE *)(((unsigned __int64)&v34->result_seq >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v34->result_seq >> 3) + 0x7FFF8000) <= 3 )
        {
          v34 = (std::__shared_ptr_access<GCGMsgNoDamageSkillResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v34->result_seq);
        }
        v34->result_seq = v33;
        if ( *(_BYTE *)(((unsigned __int64)&param->from_result_seq >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&param->from_result_seq >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&param->from_result_seq);
        }
        from_result_seq = param->from_result_seq;
        v36 = std::__shared_ptr_access<GCGMsgNoDamageSkillResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgNoDamageSkillResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 160));
        p_from_result_seq = &v36->from_result_seq;
        if ( *(_BYTE *)(((unsigned __int64)p_from_result_seq >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_from_result_seq & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_from_result_seq >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_store4(p_from_result_seq);
        }
        v36->from_result_seq = from_result_seq;
        if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->game_mode_);
        game_mode = this->game_mode_;
        std::shared_ptr<GCGMessage>::shared_ptr<GCGMsgNoDamageSkillResult,void>(
          (std::shared_ptr<GCGMessage> *const)p_msg,
          (const std::shared_ptr<GCGMsgNoDamageSkillResult> *)(p_M_refcount + 160));
        GCGGameMode::sendMessage(game_mode, (GCGMessagePtr *)p_msg);
        std::shared_ptr<GCGMessage>::~shared_ptr((std::shared_ptr<GCGMessage> *const)p_msg);
        v39 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
        if ( GCGSkill::isHasEffect(v39, ACTIVE_CATEGORY) )
        {
          common::tools::perf::make_shared<GCGSkillUseParam>();
          v40 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 224));
          std::shared_ptr<GCGCard>::operator=(
            &v40->source_card_ptr,
            (const std::shared_ptr<GCGCard> *)(p_M_refcount + 64));
          v41 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 224));
          std::shared_ptr<GCGCard>::operator=(
            &v41->target_card_ptr,
            (const std::shared_ptr<GCGCard> *)(p_M_refcount + 96));
          if ( *(_BYTE *)(((unsigned __int64)&result->result_seq >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)result + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&result->result_seq >> 3)
                                                                  + 0x7FFF8000) )
          {
            __asan_report_load4(&result->result_seq);
          }
          result_seq = result->result_seq;
          v43 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 224));
          if ( *(_BYTE *)(((unsigned __int64)&v43->from_result_seq >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v43->from_result_seq >> 3) + 0x7FFF8000) <= 3 )
          {
            v43 = (std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v43->from_result_seq);
          }
          v43->from_result_seq = result_seq;
          v44 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 224));
          if ( *(char *)(((unsigned __int64)&v44->is_ignore_damage >> 3) + 0x7FFF8000) < 0 )
            v44 = (std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store1(&v44->is_ignore_damage);
          v44->is_ignore_damage = 1;
          common::tools::perf::make_shared<GCGSkillUseParam,GCGSkillUseParam const&>(p_msg, param);
          v45 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 224));
          std::shared_ptr<GCGSkillUseParam>::operator=(
            &v45->trigger_window_param_ptr,
            (std::shared_ptr<GCGSkillUseParam> *)p_msg);
          std::shared_ptr<GCGSkillUseParam>::~shared_ptr((std::shared_ptr<GCGSkillUseParam> *const)p_msg);
          *(_QWORD *)(p_M_refcount + 256) = 0LL;
          *(_QWORD *)(p_M_refcount + 264) = 0LL;
          v46 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 32));
          if ( GCGSkill::isReaction(v46) )
          {
            std::weak_ptr<GCGSkill>::lock((const std::weak_ptr<GCGSkill> *const)p_msg);
            std::shared_ptr<GCGSkill>::operator=(
              (std::shared_ptr<GCGSkill> *const)(p_M_refcount + 256),
              &p_msg[0].skill_ptr);
            std::shared_ptr<GCGSkill>::~shared_ptr(&p_msg[0].skill_ptr);
          }
          else
          {
            std::shared_ptr<GCGSkill>::operator=(
              (std::shared_ptr<GCGSkill> *const)(p_M_refcount + 256),
              (const std::shared_ptr<GCGSkill> *)(p_M_refcount + 32));
          }
          v47 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 224));
          std::weak_ptr<GCGSkill>::operator=<GCGSkill>(
            &v47->reaction_source_skill_wtr,
            (const std::shared_ptr<GCGSkill> *)(p_M_refcount + 256));
          if ( std::operator==<GCGSkill>((const std::shared_ptr<GCGSkill> *)(p_M_refcount + 256), 0LL) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&p_msg[0].trigger_type,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/card_game/skill/gcg_skill_logic.cpp",
              "doAttachElementAndAllEffect",
              516);
            v48 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    (common::milog::MiLogStream *const)&p_msg[0].trigger_type,
                    (const char (*)[39])"reaction_source_skill_ptr is nullptr. ");
            GCGSkillUseParam::getDesc[abi:cxx11]((std::string *)&p_msg[0].target_card_ptr._M_refcount, param);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
              v48,
              (const std::string *)&p_msg[0].target_card_ptr._M_refcount);
            std::string::~string(&p_msg[0].target_card_ptr._M_refcount);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_msg[0].trigger_type);
          }
          else
          {
            v49 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 256));
            v50 = std::move<std::shared_ptr<GCGSkillUseParam> &>((std::shared_ptr<GCGSkillUseParam> *)(p_M_refcount + 224));
            std::shared_ptr<GCGSkillUseParam>::shared_ptr((std::shared_ptr<GCGSkillUseParam> *const)p_msg, v50);
            v51 = std::move<std::shared_ptr<GCGSkill> &>((std::shared_ptr<GCGSkill> *)(p_M_refcount + 128));
            std::shared_ptr<GCGSkill>::shared_ptr(&p_skill_ptr, v51);
            GCGSkill::onElementReaction(v49, &p_skill_ptr, (GCGSkillUseParamPtr *)p_msg);
            std::shared_ptr<GCGSkill>::~shared_ptr(&p_skill_ptr);
            std::shared_ptr<GCGSkillUseParam>::~shared_ptr((std::shared_ptr<GCGSkillUseParam> *const)p_msg);
          }
          std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(p_M_refcount + 256));
          std::shared_ptr<GCGSkillUseParam>::~shared_ptr((std::shared_ptr<GCGSkillUseParam> *const)(p_M_refcount + 224));
        }
        std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(p_M_refcount + 192));
        std::shared_ptr<GCGMsgNoDamageSkillResult>::~shared_ptr((std::shared_ptr<GCGMsgNoDamageSkillResult> *const)(p_M_refcount + 160));
      }
      std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(p_M_refcount + 128));
    }
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(p_M_refcount + 96));
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(p_M_refcount + 64));
  }
  std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(p_M_refcount + 32));
  if ( &p_msg[0].die_card_owner_ptr._M_refcount == (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)p_M_refcount )
  {
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((p_M_refcount >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)p_M_refcount = 1172321806LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_M_refcount >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 528: range 000000000E2F0E8C-000000000E2F1795
void __cdecl GCGSkillLogic::tryDuductionByShield(
        GCGSkillLogic *const this,
        const GCGSkillUseParam *trigger_window_param,
        GCGDamageParam *damage,
        int32_t *real_damage,
        std::vector<GCGSkillInfo> *skill_info_vec)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rbx
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  GCGDuel *Duel; // rcx
  common::milog::MiLogStream *v11; // r14
  GCGDuel *v12; // rax
  common::milog::MiLogStream *v13; // rax
  GCGSkillInfo *M_current; // r15
  GCGSkillInfo *v15; // r14
  int32_t v16; // edi
  GCGStatistics *Statistics; // rax
  uint32_t cur_shield_dmage; // [rsp+38h] [rbp-398h]
  int32_t before_shield_damage; // [rsp+3Ch] [rbp-394h]
  __gnu_cxx::__normal_iterator<GCGSkillInfo*,std::vector<GCGSkillInfo> > __i; // [rsp+40h] [rbp-390h] BYREF
  __gnu_cxx::__normal_iterator<const GCGSkillInfo*,std::vector<GCGSkillInfo> > __position; // [rsp+48h] [rbp-388h] BYREF
  const std::shared_ptr<GCGCard> *target_card_ptr; // [rsp+50h] [rbp-380h]
  GCGField *being_attacked_field; // [rsp+58h] [rbp-378h]
  common::milog::MiLogStream v28; // [rsp+60h] [rbp-370h] BYREF
  std::string val; // [rsp+80h] [rbp-350h] BYREF
  char v30[816]; // [rsp+A0h] [rbp-330h] BYREF

  v5 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_4(768LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 4 32 being_attacked_controller_id:535 64 16 37 being_attacked_field_onstage_card:542 96 168"
                        " 15 skill_param:548 336 368 16 skill_result:558";
  *(_QWORD *)(v5 + 16) = GCGSkillLogic::tryDuductionByShield;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -219021312;
  v7[536862728] = -218959360;
  v7[536862729] = -218959118;
  v7[536862730] = 62194;
  v7[536862742] = -202116109;
  v7[536862743] = -202116109;
  target_card_ptr = &trigger_window_param->target_card_ptr;
  if ( std::operator==<GCGCard>(&trigger_window_param->target_card_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_skill_logic.cpp",
      "tryDuductionByShield",
      532);
    v8 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
           &v28,
           (const char (*)[71])"tryDuductionByShield target_card_ptr is nullptr, trigger_window_param:");
    GCGSkillUseParam::getDesc[abi:cxx11](&val, trigger_window_param);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v28);
  }
  else
  {
    v9 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)target_card_ptr);
    *(_DWORD *)(v5 + 48) = GCGCard::getControllerId(v9);
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    Duel = GCGGameMode::getDuel(this->game_mode_);
    if ( *(_BYTE *)(((unsigned __int64)&trigger_window_param->controller_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&trigger_window_param->controller_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&trigger_window_param->controller_id);
    }
    if ( (unsigned int)GCGDuel::getOtherControllerId(Duel, trigger_window_param->controller_id) != *(_DWORD *)(v5 + 48) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/skill/gcg_skill_logic.cpp",
        "tryDuductionByShield",
        539);
      v11 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              &v28,
              (const char (*)[34])"self attack self duduction shield");
      GCGSkillUseParam::getDesc[abi:cxx11](&val, trigger_window_param);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v28);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    v12 = GCGGameMode::getDuel(this->game_mode_);
    being_attacked_field = GCGDuel::getField(v12, (GCGControllerValue)*(_DWORD *)(v5 + 48));
    GCGField::getCharacterZone(being_attacked_field);
    GCGCharacterZone::getOnStageCard((GCGCharacterZone *const)(v5 + 64));
    if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v5 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_skill_logic.cpp",
        "tryDuductionByShield",
        545);
      v13 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              (common::milog::MiLogStream *const)&val,
              (const char (*)[25])"getOnStageCard fail. c: ");
      common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
        v13,
        (const proto::GCGControllerValue *)(v5 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    }
    else
    {
      GCGSkillUseParam::GCGSkillUseParam((GCGSkillUseParam *const)(v5 + 96));
      *(_DWORD *)(v5 + 112) = 1;
      *(_DWORD *)(v5 + 208) = *(_DWORD *)(v5 + 48);
      if ( *(_BYTE *)(((unsigned __int64)&damage->element_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)damage + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&damage->element_type >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&damage->element_type);
      }
      *(_DWORD *)(v5 + 236) = damage->element_type;
      GCGSkillUseParam::setEffectCategroyType((GCGSkillUseParam *const)(v5 + 96), PASSIVE_CATEGORY_DUDUTION_SHIELD);
      GCGSkillUseParam::setTriggerWindowParam((GCGSkillUseParam *const)(v5 + 96), trigger_window_param);
      if ( *(_BYTE *)(((unsigned __int64)real_damage >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)real_damage & 7) + 3) >= *(_BYTE *)(((unsigned __int64)real_damage >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(real_damage);
      }
      before_shield_damage = *real_damage;
      GCGSkillResult::GCGSkillResult((GCGSkillResult *const)(v5 + 336));
      if ( *(_BYTE *)(((unsigned __int64)real_damage >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)real_damage & 7) + 3) >= *(_BYTE *)(((unsigned __int64)real_damage >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(real_damage);
      }
      *(_DWORD *)(v5 + 416) = *real_damage;
      GCGSkillLogic::doCurControllerAllCardEffects(
        this,
        *(GCGControllerValue *)(v5 + 48),
        (const GCGSkillUseParam *)(v5 + 96),
        (GCGSkillResult *)(v5 + 336));
      M_current = std::vector<GCGSkillInfo>::end((std::vector<GCGSkillInfo> *const)(v5 + 336))._M_current;
      v15 = std::vector<GCGSkillInfo>::begin((std::vector<GCGSkillInfo> *const)(v5 + 336))._M_current;
      __i._M_current = std::vector<GCGSkillInfo>::end(skill_info_vec)._M_current;
      __gnu_cxx::__normal_iterator<GCGSkillInfo const*,std::vector<GCGSkillInfo>>::__normal_iterator<GCGSkillInfo*>(
        &__position,
        &__i);
      std::vector<GCGSkillInfo>::insert<__gnu_cxx::__normal_iterator<GCGSkillInfo*,std::vector<GCGSkillInfo>>,void>(
        skill_info_vec,
        __position,
        (__gnu_cxx::__normal_iterator<GCGSkillInfo*,std::vector<GCGSkillInfo> >)v15,
        (__gnu_cxx::__normal_iterator<GCGSkillInfo*,std::vector<GCGSkillInfo> >)M_current);
      v16 = *(_DWORD *)(v5 + 416);
      if ( *(_BYTE *)(((unsigned __int64)real_damage >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)real_damage & 7) + 3) >= *(_BYTE *)(((unsigned __int64)real_damage >> 3) + 0x7FFF8000) )
      {
        v16 = (int)real_damage;
        __asan_report_store4(real_damage);
      }
      *real_damage = v16;
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      if ( !GCGGameMode::isDuringSnapshot(this->game_mode_) )
      {
        cur_shield_dmage = 0;
        if ( *(_BYTE *)(((unsigned __int64)real_damage >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)real_damage & 7) + 3) >= *(_BYTE *)(((unsigned __int64)real_damage >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(real_damage);
        }
        if ( before_shield_damage > *real_damage )
          cur_shield_dmage = before_shield_damage - *real_damage;
        if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->game_mode_);
        Statistics = GCGGameMode::getStatistics(this->game_mode_);
        GCGStatistics::reportStatisticSpecifyDataUint(
          Statistics,
          *(GCGControllerValue *)(v5 + 48),
          SHIELD_REDUCE_SUM,
          cur_shield_dmage,
          1);
      }
      GCGSkillResult::~GCGSkillResult((GCGSkillResult *const)(v5 + 336));
      GCGSkillUseParam::~GCGSkillUseParam((GCGSkillUseParam *const)(v5 + 96));
    }
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v5 + 64));
  }
  if ( v30 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8058) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 578: range 000000000E2F1796-000000000E2F1B2A
GCGEffectElementType __cdecl GCGSkillLogic::getElementRevise(
        GCGSkillLogic *const this,
        const GCGSkillUseParam *trigger_window_param,
        GCGEffectElementType source_element_type,
        std::vector<GCGSkillInfo> *skill_info_vec)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // rbx
  data::GCGEffectElementType *v7; // rax
  GCGEffectElementType *v8; // rdx
  GCGSkillInfo *M_current; // r15
  GCGSkillInfo *v10; // r14
  GCGEffectElementType result; // eax
  GCGEffectElementType element_revise; // [rsp+3Ch] [rbp-304h]
  __gnu_cxx::__normal_iterator<GCGSkillInfo*,std::vector<GCGSkillInfo> > __i; // [rsp+40h] [rbp-300h] BYREF
  __gnu_cxx::__normal_iterator<const GCGSkillInfo*,std::vector<GCGSkillInfo> > __position; // [rsp+48h] [rbp-2F8h] BYREF
  char v17[752]; // [rsp+50h] [rbp-2F0h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(704LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 168 15 skill_param:581 272 368 16 skill_result:580";
  *(_QWORD *)(v4 + 16) = GCGSkillLogic::getElementRevise;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862726] = -218959360;
  v6[536862727] = -218959118;
  v6[536862728] = 62194;
  v6[536862740] = -202116109;
  v6[536862741] = -202116109;
  element_revise = source_element_type;
  GCGSkillResult::GCGSkillResult((GCGSkillResult *const)(v4 + 272));
  GCGSkillUseParam::GCGSkillUseParam((GCGSkillUseParam *const)(v4 + 32));
  *(_DWORD *)(v4 + 48) = 1;
  if ( *(_BYTE *)(((unsigned __int64)&trigger_window_param->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&trigger_window_param->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&trigger_window_param->controller_id);
  }
  *(_DWORD *)(v4 + 144) = trigger_window_param->controller_id;
  GCGSkillUseParam::setEffectCategroyType((GCGSkillUseParam *const)(v4 + 32), PASSIVE_CATEFORY_ATTACH_DAMAGE_ELEMENT);
  GCGSkillUseParam::setTriggerWindowParam((GCGSkillUseParam *const)(v4 + 32), trigger_window_param);
  GCGSkillLogic::doCurControllerAllCardEffects(
    this,
    *(GCGControllerValue *)(v4 + 144),
    (const GCGSkillUseParam *)(v4 + 32),
    (GCGSkillResult *)(v4 + 272));
  if ( std::optional<data::GCGEffectElementType>::has_value((const std::optional<data::GCGEffectElementType> *const)(v4 + 344)) )
  {
    v7 = std::optional<data::GCGEffectElementType>::value((std::optional<data::GCGEffectElementType> *const)(v4 + 344));
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    element_revise = *v8;
  }
  M_current = std::vector<GCGSkillInfo>::end((std::vector<GCGSkillInfo> *const)(v4 + 272))._M_current;
  v10 = std::vector<GCGSkillInfo>::begin((std::vector<GCGSkillInfo> *const)(v4 + 272))._M_current;
  __i._M_current = std::vector<GCGSkillInfo>::end(skill_info_vec)._M_current;
  __gnu_cxx::__normal_iterator<GCGSkillInfo const*,std::vector<GCGSkillInfo>>::__normal_iterator<GCGSkillInfo*>(
    &__position,
    &__i);
  std::vector<GCGSkillInfo>::insert<__gnu_cxx::__normal_iterator<GCGSkillInfo*,std::vector<GCGSkillInfo>>,void>(
    skill_info_vec,
    __position,
    (__gnu_cxx::__normal_iterator<GCGSkillInfo*,std::vector<GCGSkillInfo> >)v10,
    (__gnu_cxx::__normal_iterator<GCGSkillInfo*,std::vector<GCGSkillInfo> >)M_current);
  GCGSkillUseParam::~GCGSkillUseParam((GCGSkillUseParam *const)(v4 + 32));
  GCGSkillResult::~GCGSkillResult((GCGSkillResult *const)(v4 + 272));
  result = element_revise;
  if ( v17 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8050) = 0LL;
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
  }
  return result;
};

// Line 598: range 000000000E2F1B2C-000000000E2F1F72
uint32_t __cdecl GCGSkillLogic::getDamageMultipleRevise(
        GCGSkillLogic *const this,
        const GCGSkillUseParam *trigger_window_param,
        GCGDamageParam *damage,
        std::vector<GCGSkillInfo> *skill_info_vec)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  GCGSkillInfo *M_current; // r15
  GCGSkillInfo *v10; // r14
  uint32_t result; // eax
  int __u; // [rsp+3Ch] [rbp-364h] BYREF
  __gnu_cxx::__normal_iterator<GCGSkillInfo*,std::vector<GCGSkillInfo> > __i; // [rsp+40h] [rbp-360h] BYREF
  __gnu_cxx::__normal_iterator<const GCGSkillInfo*,std::vector<GCGSkillInfo> > __position; // [rsp+48h] [rbp-358h] BYREF
  common::milog::MiLogStream v16; // [rsp+50h] [rbp-350h] BYREF
  std::string val; // [rsp+70h] [rbp-330h] BYREF
  char v18[784]; // [rsp+90h] [rbp-310h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(736LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 25 damage_multiple_times:599 64 168 15 skill_param:601 304 368 16 skill_result:600";
  *(_QWORD *)(v4 + 16) = GCGSkillLogic::getDamageMultipleRevise;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862727] = -218959360;
  v6[536862728] = -218959118;
  v6[536862729] = 62194;
  v6[536862741] = -202116109;
  v6[536862742] = -202116109;
  *(_DWORD *)(v4 + 48) = 0;
  GCGSkillResult::GCGSkillResult((GCGSkillResult *const)(v4 + 304));
  GCGSkillUseParam::GCGSkillUseParam((GCGSkillUseParam *const)(v4 + 64));
  *(_DWORD *)(v4 + 80) = 1;
  if ( *(_BYTE *)(((unsigned __int64)&trigger_window_param->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&trigger_window_param->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&trigger_window_param->controller_id);
  }
  *(_DWORD *)(v4 + 176) = trigger_window_param->controller_id;
  GCGSkillUseParam::setEffectCategroyType((GCGSkillUseParam *const)(v4 + 64), PASSIVE_CATEGORY_DAMAGE_MULTIPLE_REVISE);
  GCGSkillUseParam::setTriggerWindowParam((GCGSkillUseParam *const)(v4 + 64), trigger_window_param);
  GCGSkillLogic::doCurControllerAllCardEffects(
    this,
    *(GCGControllerValue *)(v4 + 176),
    (const GCGSkillUseParam *)(v4 + 64),
    (GCGSkillResult *)(v4 + 304));
  __u = 0;
  *(_DWORD *)(v4 + 48) = std::optional<unsigned int>::value_or<int>(
                           (const std::optional<unsigned int> *const)(v4 + 388),
                           &__u);
  common::milog::MiLogStream::create(
    &v16,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/skill/gcg_skill_logic.cpp",
    "getDamageMultipleRevise",
    609);
  v7 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
         &v16,
         (const char (*)[32])"getDamageMultipleRevise result:");
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
  GCGSkillUseParam::getDesc[abi:cxx11](&val, (const GCGSkillUseParam *const)(v4 + 64));
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v16);
  M_current = std::vector<GCGSkillInfo>::end((std::vector<GCGSkillInfo> *const)(v4 + 304))._M_current;
  v10 = std::vector<GCGSkillInfo>::begin((std::vector<GCGSkillInfo> *const)(v4 + 304))._M_current;
  __i._M_current = std::vector<GCGSkillInfo>::end(skill_info_vec)._M_current;
  __gnu_cxx::__normal_iterator<GCGSkillInfo const*,std::vector<GCGSkillInfo>>::__normal_iterator<GCGSkillInfo*>(
    &__position,
    &__i);
  std::vector<GCGSkillInfo>::insert<__gnu_cxx::__normal_iterator<GCGSkillInfo*,std::vector<GCGSkillInfo>>,void>(
    skill_info_vec,
    __position,
    (__gnu_cxx::__normal_iterator<GCGSkillInfo*,std::vector<GCGSkillInfo> >)v10,
    (__gnu_cxx::__normal_iterator<GCGSkillInfo*,std::vector<GCGSkillInfo> >)M_current);
  LODWORD(v10) = *(_DWORD *)(v4 + 48);
  GCGSkillUseParam::~GCGSkillUseParam((GCGSkillUseParam *const)(v4 + 64));
  GCGSkillResult::~GCGSkillResult((GCGSkillResult *const)(v4 + 304));
  result = (unsigned int)v10;
  if ( v18 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8054) = 0LL;
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
  return result;
};

// Line 616: range 000000000E2F1F74-000000000E2F241A
int32_t __cdecl GCGSkillLogic::getDamageRevise(
        GCGSkillLogic *const this,
        const GCGSkillUseParam *trigger_window_param,
        GCGDamageParam *damage,
        std::vector<GCGSkillInfo> *skill_info_vec)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  int32_t v9; // r14d
  GCGSkillInfo *M_current; // r15
  GCGSkillInfo *v11; // r14
  int32_t result; // eax
  GCGControllerValue controller_id; // [rsp+3Ch] [rbp-364h]
  __gnu_cxx::__normal_iterator<GCGSkillInfo*,std::vector<GCGSkillInfo> > __i; // [rsp+40h] [rbp-360h] BYREF
  __gnu_cxx::__normal_iterator<const GCGSkillInfo*,std::vector<GCGSkillInfo> > __position; // [rsp+48h] [rbp-358h] BYREF
  common::milog::MiLogStream v18; // [rsp+50h] [rbp-350h] BYREF
  std::string val; // [rsp+70h] [rbp-330h] BYREF
  char v20[784]; // [rsp+90h] [rbp-310h] BYREF

  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(736LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 14 damage_fix:617 64 168 15 skill_param:619 304 368 16 child_result:626";
  *(_QWORD *)(v4 + 16) = GCGSkillLogic::getDamageRevise;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862727] = -218959360;
  v6[536862728] = -218959118;
  v6[536862729] = 62194;
  v6[536862741] = -202116109;
  v6[536862742] = -202116109;
  *(_DWORD *)(v4 + 48) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&trigger_window_param->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&trigger_window_param->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&trigger_window_param->controller_id);
  }
  controller_id = trigger_window_param->controller_id;
  GCGSkillUseParam::GCGSkillUseParam((GCGSkillUseParam *const)(v4 + 64));
  *(_DWORD *)(v4 + 80) = 1;
  *(_DWORD *)(v4 + 176) = controller_id;
  if ( *(_BYTE *)(((unsigned __int64)&damage->element_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)damage + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&damage->element_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&damage->element_type);
  }
  *(_DWORD *)(v4 + 204) = damage->element_type;
  GCGSkillUseParam::setEffectCategroyType((GCGSkillUseParam *const)(v4 + 64), PASSIVE_CATEGORY_DAMAGE_REVISE);
  GCGSkillUseParam::setTriggerWindowParam((GCGSkillUseParam *const)(v4 + 64), trigger_window_param);
  GCGSkillResult::GCGSkillResult((GCGSkillResult *const)(v4 + 304));
  GCGSkillLogic::doCurControllerAllCardEffects(
    this,
    controller_id,
    (const GCGSkillUseParam *)(v4 + 64),
    (GCGSkillResult *)(v4 + 304));
  if ( TraitSkillResult<(GCGEffectCategoryType)1,int>::getSkillResult(
         (const GCGSkillResult *)(v4 + 304),
         (int32_t *)(v4 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/skill/gcg_skill_logic.cpp",
      "getDamageRevise",
      630);
    v7 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v18,
           (const char (*)[36])"getDamageRevise failed, damage_fix:");
    v8 = common::milog::MiLogStream::operator<<<int,(int *)0>(v7, (const int *)(v4 + 48));
    GCGSkillUseParam::getDesc[abi:cxx11](&val, (const GCGSkillUseParam *const)(v4 + 64));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v9 = 0;
  }
  else
  {
    M_current = std::vector<GCGSkillInfo>::end((std::vector<GCGSkillInfo> *const)(v4 + 304))._M_current;
    v11 = std::vector<GCGSkillInfo>::begin((std::vector<GCGSkillInfo> *const)(v4 + 304))._M_current;
    __i._M_current = std::vector<GCGSkillInfo>::end(skill_info_vec)._M_current;
    __gnu_cxx::__normal_iterator<GCGSkillInfo const*,std::vector<GCGSkillInfo>>::__normal_iterator<GCGSkillInfo*>(
      &__position,
      &__i);
    std::vector<GCGSkillInfo>::insert<__gnu_cxx::__normal_iterator<GCGSkillInfo*,std::vector<GCGSkillInfo>>,void>(
      skill_info_vec,
      __position,
      (__gnu_cxx::__normal_iterator<GCGSkillInfo*,std::vector<GCGSkillInfo> >)v11,
      (__gnu_cxx::__normal_iterator<GCGSkillInfo*,std::vector<GCGSkillInfo> >)M_current);
    v9 = *(_DWORD *)(v4 + 48);
  }
  GCGSkillResult::~GCGSkillResult((GCGSkillResult *const)(v4 + 304));
  GCGSkillUseParam::~GCGSkillUseParam((GCGSkillUseParam *const)(v4 + 64));
  result = v9;
  if ( v20 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8054) = 0LL;
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
  return result;
};

// Line 640: range 000000000E2F241C-000000000E2F2BF9
int32_t __cdecl GCGSkillLogic::getBeingHitDamageRevise(
        GCGSkillLogic *const this,
        const GCGSkillUseParam *trigger_window_param,
        GCGDamageParam *damage,
        std::vector<GCGSkillInfo> *skill_info_vec)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rbx
  int32_t v8; // r14d
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  GCGDuel *Duel; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rbx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  GCGSkillInfo *M_current; // r15
  GCGSkillInfo *v19; // r14
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<GCGSkillInfo*,std::vector<GCGSkillInfo> > __i; // [rsp+38h] [rbp-368h] BYREF
  __gnu_cxx::__normal_iterator<const GCGSkillInfo*,std::vector<GCGSkillInfo> > __position; // [rsp+40h] [rbp-360h] BYREF
  const std::shared_ptr<GCGCard> *target_card_ptr; // [rsp+48h] [rbp-358h]
  common::milog::MiLogStream v26; // [rsp+50h] [rbp-350h] BYREF
  std::string val; // [rsp+70h] [rbp-330h] BYREF
  char v28[784]; // [rsp+90h] [rbp-310h] BYREF

  v4 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(736LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 32 being_attacked_controller_id:647 48 4 14 damage_fix:654 64 168 15 skill_param:655 304 "
                        "368 16 child_result:662";
  *(_QWORD *)(v4 + 16) = GCGSkillLogic::getBeingHitDamageRevise;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862727] = -218959360;
  v6[536862728] = -218959118;
  v6[536862729] = 62194;
  v6[536862741] = -202116109;
  v6[536862742] = -202116109;
  target_card_ptr = &trigger_window_param->target_card_ptr;
  if ( std::operator==<GCGCard>(&trigger_window_param->target_card_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_skill_logic.cpp",
      "getBeingHitDamageRevise",
      644);
    v7 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
           &v26,
           (const char (*)[74])"getBeingHitDamageRevise target_card_ptr is nullptr, trigger_window_param:");
    GCGSkillUseParam::getDesc[abi:cxx11](&val, trigger_window_param);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v26);
    v8 = 0;
  }
  else
  {
    v9 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)target_card_ptr);
    *(_DWORD *)(v4 + 32) = GCGCard::getControllerId(v9);
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    Duel = GCGGameMode::getDuel(this->game_mode_);
    if ( *(_BYTE *)(((unsigned __int64)&trigger_window_param->controller_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&trigger_window_param->controller_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&trigger_window_param->controller_id);
    }
    if ( (unsigned int)GCGDuel::getOtherControllerId(Duel, trigger_window_param->controller_id) == *(_DWORD *)(v4 + 32) )
    {
      *(_DWORD *)(v4 + 48) = 0;
      GCGSkillUseParam::GCGSkillUseParam((GCGSkillUseParam *const)(v4 + 64));
      *(_DWORD *)(v4 + 80) = 1;
      *(_DWORD *)(v4 + 176) = *(_DWORD *)(v4 + 32);
      if ( *(_BYTE *)(((unsigned __int64)&damage->element_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)damage + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&damage->element_type >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&damage->element_type);
      }
      *(_DWORD *)(v4 + 204) = damage->element_type;
      GCGSkillUseParam::setEffectCategroyType(
        (GCGSkillUseParam *const)(v4 + 64),
        PASSIVE_CATEGORY_BEING_HIT_DAMAGE_REVISE);
      GCGSkillUseParam::setTriggerWindowParam((GCGSkillUseParam *const)(v4 + 64), trigger_window_param);
      GCGSkillResult::GCGSkillResult((GCGSkillResult *const)(v4 + 304));
      GCGSkillLogic::doCurControllerAllCardEffects(
        this,
        *(GCGControllerValue *)(v4 + 32),
        (const GCGSkillUseParam *)(v4 + 64),
        (GCGSkillResult *)(v4 + 304));
      if ( TraitSkillResult<(GCGEffectCategoryType)11,int>::getSkillResult(
             (const GCGSkillResult *)(v4 + 304),
             (int32_t *)(v4 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/skill/gcg_skill_logic.cpp",
          "getBeingHitDamageRevise",
          667);
        v14 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                &v26,
                (const char (*)[44])"getBeingHitDamageRevise failed, damage_fix:");
        v15 = common::milog::MiLogStream::operator<<<int,(int *)0>(v14, (const int *)(v4 + 48));
        GCGSkillUseParam::getDesc[abi:cxx11](&val, (const GCGSkillUseParam *const)(v4 + 64));
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v26);
        v8 = 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/skill/gcg_skill_logic.cpp",
          "getBeingHitDamageRevise",
          670);
        v16 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v26,
                (const char (*)[32])"getBeingHitDamageRevise result:");
        v17 = common::milog::MiLogStream::operator<<<int,(int *)0>(v16, (const int *)(v4 + 48));
        GCGSkillUseParam::getDesc[abi:cxx11](&val, (const GCGSkillUseParam *const)(v4 + 64));
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v26);
        M_current = std::vector<GCGSkillInfo>::end((std::vector<GCGSkillInfo> *const)(v4 + 304))._M_current;
        v19 = std::vector<GCGSkillInfo>::begin((std::vector<GCGSkillInfo> *const)(v4 + 304))._M_current;
        __i._M_current = std::vector<GCGSkillInfo>::end(skill_info_vec)._M_current;
        __gnu_cxx::__normal_iterator<GCGSkillInfo const*,std::vector<GCGSkillInfo>>::__normal_iterator<GCGSkillInfo*>(
          &__position,
          &__i);
        std::vector<GCGSkillInfo>::insert<__gnu_cxx::__normal_iterator<GCGSkillInfo*,std::vector<GCGSkillInfo>>,void>(
          skill_info_vec,
          __position,
          (__gnu_cxx::__normal_iterator<GCGSkillInfo*,std::vector<GCGSkillInfo> >)v19,
          (__gnu_cxx::__normal_iterator<GCGSkillInfo*,std::vector<GCGSkillInfo> >)M_current);
        v8 = *(_DWORD *)(v4 + 48);
      }
      GCGSkillResult::~GCGSkillResult((GCGSkillResult *const)(v4 + 304));
      GCGSkillUseParam::~GCGSkillUseParam((GCGSkillUseParam *const)(v4 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/skill/gcg_skill_logic.cpp",
        "getBeingHitDamageRevise",
        651);
      v11 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v26,
              (const char (*)[30])"being_attacked_controller_id:");
      v12 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
              v11,
              (const proto::GCGControllerValue *)(v4 + 32));
      v13 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v12, (const char (*)[37])off_1BD93120);
      GCGSkillUseParam::getDesc[abi:cxx11](&val, trigger_window_param);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v26);
      v8 = 0;
    }
  }
  result = v8;
  if ( v28 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8054) = 0LL;
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
  return result;
};

// Line 676: range 000000000E2F2BFA-000000000E2F30A2
int32_t __cdecl GCGSkillLogic::getSkillDamageRevise(
        GCGSkillLogic *const this,
        const GCGSkillUseParam *trigger_window_param,
        GCGSkill *skill)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  int32_t result; // eax
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-350h] BYREF
  std::string val; // [rsp+40h] [rbp-330h] BYREF
  char v15[784]; // [rsp+60h] [rbp-310h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(736LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 14 damage_fix:677 64 168 15 skill_param:680 304 368 16 skill_result:679";
  *(_QWORD *)(v3 + 16) = GCGSkillLogic::getSkillDamageRevise;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862727] = -218959360;
  v5[536862728] = -218959118;
  v5[536862729] = 62194;
  v5[536862741] = -202116109;
  v5[536862742] = -202116109;
  *(_DWORD *)(v3 + 48) = 0;
  GCGSkillResult::GCGSkillResult((GCGSkillResult *const)(v3 + 304));
  GCGSkillUseParam::GCGSkillUseParam((GCGSkillUseParam *const)(v3 + 64));
  *(_DWORD *)(v3 + 80) = 1;
  if ( *(_BYTE *)(((unsigned __int64)&trigger_window_param->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&trigger_window_param->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&trigger_window_param->controller_id);
  }
  *(_DWORD *)(v3 + 176) = trigger_window_param->controller_id;
  GCGSkillUseParam::setEffectCategroyType((GCGSkillUseParam *const)(v3 + 64), PASSIVE_CATEGORY_DAMAGE_REVISE);
  GCGSkillUseParam::setTriggerWindowParam((GCGSkillUseParam *const)(v3 + 64), trigger_window_param);
  GCGSkill::doAllEffects(skill, (const GCGSkillUseParam *)(v3 + 64), (GCGSkillResult *)(v3 + 304));
  if ( TraitSkillResult<(GCGEffectCategoryType)1,int>::getSkillResult(
         (const GCGSkillResult *)(v3 + 304),
         (int32_t *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/skill/gcg_skill_logic.cpp",
      "getSkillDamageRevise",
      689);
    v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v13,
           (const char (*)[41])"getSkillDamageRevise failed, damage_fix:");
    v7 = common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v3 + 48));
    GCGSkillUseParam::getDesc[abi:cxx11](&val, (const GCGSkillUseParam *const)(v3 + 64));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = 0;
  }
  else
  {
    if ( *(int *)(v3 + 48) > 0 )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/skill/gcg_skill_logic.cpp",
        "getSkillDamageRevise",
        694);
      v9 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v13,
             (const char (*)[29])"getSkillDamageRevise result:");
      v10 = common::milog::MiLogStream::operator<<<int,(int *)0>(v9, (const int *)(v3 + 48));
      GCGSkillUseParam::getDesc[abi:cxx11](&val, (const GCGSkillUseParam *const)(v3 + 64));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
    v8 = *(_DWORD *)(v3 + 48);
  }
  GCGSkillUseParam::~GCGSkillUseParam((GCGSkillUseParam *const)(v3 + 64));
  GCGSkillResult::~GCGSkillResult((GCGSkillResult *const)(v3 + 304));
  result = v8;
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8054) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8058) = -168430091;
  }
  return result;
};

// Line 700: range 000000000E2F30A4-000000000E2F387C
int32_t __cdecl GCGSkillLogic::getBeingHitDamageReduceToHalf(
        GCGSkillLogic *const this,
        const GCGSkillUseParam *trigger_window_param,
        GCGDamageParam *damage,
        std::vector<GCGSkillInfo> *skill_info_vec)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rbx
  int32_t v8; // r14d
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  GCGDuel *Duel; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rbx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  GCGSkillInfo *M_current; // r15
  GCGSkillInfo *v19; // r14
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<GCGSkillInfo*,std::vector<GCGSkillInfo> > __i; // [rsp+38h] [rbp-368h] BYREF
  __gnu_cxx::__normal_iterator<const GCGSkillInfo*,std::vector<GCGSkillInfo> > __position; // [rsp+40h] [rbp-360h] BYREF
  const std::shared_ptr<GCGCard> *target_card_ptr; // [rsp+48h] [rbp-358h]
  common::milog::MiLogStream v26; // [rsp+50h] [rbp-350h] BYREF
  std::string val; // [rsp+70h] [rbp-330h] BYREF
  char v28[784]; // [rsp+90h] [rbp-310h] BYREF

  v4 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(736LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 32 being_attacked_controller_id:707 48 4 31 damage_reduce_to_half_times:714 64 168 15 ski"
                        "ll_param:716 304 368 16 skill_result:715";
  *(_QWORD *)(v4 + 16) = GCGSkillLogic::getBeingHitDamageReduceToHalf;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862727] = -218959360;
  v6[536862728] = -218959118;
  v6[536862729] = 62194;
  v6[536862741] = -202116109;
  v6[536862742] = -202116109;
  target_card_ptr = &trigger_window_param->target_card_ptr;
  if ( std::operator==<GCGCard>(0LL, &trigger_window_param->target_card_ptr) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_skill_logic.cpp",
      "getBeingHitDamageReduceToHalf",
      704);
    v7 = common::milog::MiLogStream::operator<<<char [80],(char *[80])0>(
           &v26,
           (const char (*)[80])"getBeingHitDamageReduceToHalf target_card_ptr is nullptr, trigger_window_param:");
    GCGSkillUseParam::getDesc[abi:cxx11](&val, trigger_window_param);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v26);
    v8 = 0;
  }
  else
  {
    v9 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)target_card_ptr);
    *(_DWORD *)(v4 + 32) = GCGCard::getControllerId(v9);
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    Duel = GCGGameMode::getDuel(this->game_mode_);
    if ( *(_BYTE *)(((unsigned __int64)&trigger_window_param->controller_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&trigger_window_param->controller_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&trigger_window_param->controller_id);
    }
    if ( (unsigned int)GCGDuel::getOtherControllerId(Duel, trigger_window_param->controller_id) == *(_DWORD *)(v4 + 32) )
    {
      *(_DWORD *)(v4 + 48) = 0;
      GCGSkillResult::GCGSkillResult((GCGSkillResult *const)(v4 + 304));
      GCGSkillUseParam::GCGSkillUseParam((GCGSkillUseParam *const)(v4 + 64));
      *(_DWORD *)(v4 + 80) = 1;
      *(_DWORD *)(v4 + 176) = *(_DWORD *)(v4 + 32);
      if ( *(_BYTE *)(((unsigned __int64)&damage->element_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)damage + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&damage->element_type >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&damage->element_type);
      }
      *(_DWORD *)(v4 + 204) = damage->element_type;
      GCGSkillUseParam::setEffectCategroyType(
        (GCGSkillUseParam *const)(v4 + 64),
        PASSIVE_CATEGORY_DAMAGE_REDUCE_TO_HALF_REVISE);
      GCGSkillUseParam::setTriggerWindowParam((GCGSkillUseParam *const)(v4 + 64), trigger_window_param);
      GCGSkillLogic::doCurControllerAllCardEffects(
        this,
        *(GCGControllerValue *)(v4 + 176),
        (const GCGSkillUseParam *)(v4 + 64),
        (GCGSkillResult *)(v4 + 304));
      if ( TraitSkillResult<(GCGEffectCategoryType)12,int>::getSkillResult(
             (const GCGSkillResult *)(v4 + 304),
             (int32_t *)(v4 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/skill/gcg_skill_logic.cpp",
          "getBeingHitDamageReduceToHalf",
          726);
        v14 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
                &v26,
                (const char (*)[67])"getBeingHitDamageReduceToHalf failed, damage_reduce_to_half_times:");
        v15 = common::milog::MiLogStream::operator<<<int,(int *)0>(v14, (const int *)(v4 + 48));
        GCGSkillUseParam::getDesc[abi:cxx11](&val, (const GCGSkillUseParam *const)(v4 + 64));
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v26);
        v8 = 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/skill/gcg_skill_logic.cpp",
          "getBeingHitDamageReduceToHalf",
          729);
        v16 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v26,
                (const char (*)[38])"getBeingHitDamageReduceToHalf result:");
        v17 = common::milog::MiLogStream::operator<<<int,(int *)0>(v16, (const int *)(v4 + 48));
        GCGSkillUseParam::getDesc[abi:cxx11](&val, (const GCGSkillUseParam *const)(v4 + 64));
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v26);
        M_current = std::vector<GCGSkillInfo>::end((std::vector<GCGSkillInfo> *const)(v4 + 304))._M_current;
        v19 = std::vector<GCGSkillInfo>::begin((std::vector<GCGSkillInfo> *const)(v4 + 304))._M_current;
        __i._M_current = std::vector<GCGSkillInfo>::end(skill_info_vec)._M_current;
        __gnu_cxx::__normal_iterator<GCGSkillInfo const*,std::vector<GCGSkillInfo>>::__normal_iterator<GCGSkillInfo*>(
          &__position,
          &__i);
        std::vector<GCGSkillInfo>::insert<__gnu_cxx::__normal_iterator<GCGSkillInfo*,std::vector<GCGSkillInfo>>,void>(
          skill_info_vec,
          __position,
          (__gnu_cxx::__normal_iterator<GCGSkillInfo*,std::vector<GCGSkillInfo> >)v19,
          (__gnu_cxx::__normal_iterator<GCGSkillInfo*,std::vector<GCGSkillInfo> >)M_current);
        v8 = *(_DWORD *)(v4 + 48);
      }
      GCGSkillUseParam::~GCGSkillUseParam((GCGSkillUseParam *const)(v4 + 64));
      GCGSkillResult::~GCGSkillResult((GCGSkillResult *const)(v4 + 304));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/skill/gcg_skill_logic.cpp",
        "getBeingHitDamageReduceToHalf",
        711);
      v11 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v26,
              (const char (*)[30])"being_attacked_controller_id:");
      v12 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
              v11,
              (const proto::GCGControllerValue *)(v4 + 32));
      v13 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v12, (const char (*)[37])off_1BD93120);
      GCGSkillUseParam::getDesc[abi:cxx11](&val, trigger_window_param);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v26);
      v8 = 0;
    }
  }
  result = v8;
  if ( v28 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8054) = 0LL;
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
  return result;
};

// Line 736: range 000000000E2F387E-000000000E2F3A8B
std::map<data::GCGCostType,unsigned int> *__cdecl GCGSkillLogic::getReviseSkillCostPreview(
        std::map<data::GCGCostType,unsigned int> *retstr,
        GCGSkillLogic *const this,
        GCGSkill *skill)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // rbx
  char v8[512]; // [rsp+20h] [rbp-200h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(480LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 368 10 result:737";
  *(_QWORD *)(v3 + 16) = GCGSkillLogic::getReviseSkillCostPreview;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862733] = -202116109;
  v5[536862734] = -202116109;
  GCGSkillResult::GCGSkillResult((GCGSkillResult *const)(v3 + 48));
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_M_t._M_impl._M_node_count + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_t._M_impl._M_node_count + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 48LL);
  }
  GCGSkillLogic::getReviseSkillCost(retstr, this, skill, (GCGSkillResult *)(v3 + 48));
  GCGSkillResult::~GCGSkillResult((GCGSkillResult *const)(v3 + 48));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = -168430091;
  }
  return retstr;
};

// Line 743: range 000000000E2F3A8C-000000000E2F3F15
std::map<data::GCGCostType,unsigned int> *__cdecl GCGSkillLogic::getReviseSkillCost(
        std::map<data::GCGCostType,unsigned int> *retstr,
        GCGSkillLogic *const this,
        GCGSkill *skill,
        GCGSkillResult *result)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::map<data::GCGCostType,unsigned int>::mapped_type *v7; // rax
  int *v8; // rdx
  int v9; // eax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  GCGSkillLogic *SkillLogic; // rax
  int v12; // r14d
  std::map<data::GCGCostType,unsigned int>::mapped_type *v13; // rax
  _DWORD *v14; // rdx
  std::map<data::GCGCostType,unsigned int>::key_type __x; // [rsp+28h] [rbp-188h] BYREF
  std::map<data::GCGCostType,unsigned int>::key_type __k; // [rsp+2Ch] [rbp-184h] BYREF
  std::enable_shared_from_this<GCGSkill> v20; // [rsp+30h] [rbp-180h] BYREF
  char v21[368]; // [rsp+40h] [rbp-170h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(320LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 15 cost_energy:750 48 16 12 card_ptr:745 80 168 15 skill_param:753";
  *(_QWORD *)(v4 + 16) = GCGSkillLogic::getReviseSkillCost;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862722] = 62194;
  v6[536862727] = -218103808;
  v6[536862728] = -202116109;
  v6[536862729] = -202116109;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_M_t._M_impl._M_node_count + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_t._M_impl._M_node_count + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 48LL);
  }
  GCGSkill::getCost(retstr, skill);
  GCGSkill::getOwnerCard((const GCGSkill *const)(v4 + 48));
  if ( !std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v4 + 48), 0LL) )
  {
    __x = GCG_COST_ENERGY;
    if ( std::map<data::GCGCostType,unsigned int>::count(retstr, &__x) )
    {
      __k = GCG_COST_ENERGY;
      v7 = std::map<data::GCGCostType,unsigned int>::operator[](retstr, &__k);
      v8 = (int *)v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      v9 = *v8;
    }
    else
    {
      v9 = 0;
    }
    *(_DWORD *)(v4 + 32) = v9;
    GCGSkillUseParam::GCGSkillUseParam((GCGSkillUseParam *const)(v4 + 80));
    std::shared_ptr<GCGCard>::operator=(
      (std::shared_ptr<GCGCard> *const)(v4 + 104),
      (const std::shared_ptr<GCGCard> *)(v4 + 48));
    std::enable_shared_from_this<GCGSkill>::shared_from_this(&v20);
    std::shared_ptr<GCGSkill>::operator=((std::shared_ptr<GCGSkill> *const)(v4 + 80), (std::shared_ptr<GCGSkill> *)&v20);
    std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)&v20);
    v10 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
    *(_DWORD *)(v4 + 192) = GCGCard::getControllerId(v10);
    *(_DWORD *)(v4 + 96) = 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    SkillLogic = GCGGameMode::getSkillLogic(this->game_mode_);
    GCGSkillLogic::calcReviseSkillCost(
      SkillLogic,
      (const GCGSkillUseParam *)(v4 + 80),
      retstr,
      (uint32_t *)(v4 + 32),
      result);
    if ( *(_DWORD *)(v4 + 32) )
    {
      v12 = *(_DWORD *)(v4 + 32);
      __k = GCG_COST_ENERGY;
      v13 = std::map<data::GCGCostType,unsigned int>::operator[](retstr, &__k);
      v14 = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v13);
      }
      *v14 = v12;
    }
    GCGSkillUseParam::~GCGSkillUseParam((GCGSkillUseParam *const)(v4 + 80));
  }
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 48));
  if ( v21 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 768: range 000000000E2F3F16-000000000E2F4134
std::map<data::GCGCostType,unsigned int> *__cdecl GCGSkillLogic::getRevisePlayCardCostPreview(
        std::map<data::GCGCostType,unsigned int> *retstr,
        GCGSkillLogic *const this,
        GCGCard *card,
        const std::vector<unsigned int> *target_param_vec)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // rbx
  char v10[512]; // [rsp+20h] [rbp-200h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(480LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 48 368 16 skill_result:769";
  *(_QWORD *)(v4 + 16) = GCGSkillLogic::getRevisePlayCardCostPreview;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862733] = -202116109;
  v6[536862734] = -202116109;
  GCGSkillResult::GCGSkillResult((GCGSkillResult *const)(v4 + 48));
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_M_t._M_impl._M_node_count + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_t._M_impl._M_node_count + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 48LL);
  }
  GCGSkillLogic::getRevisePlayCardCost(retstr, this, card, target_param_vec, (GCGSkillResult *)(v4 + 48));
  GCGSkillResult::~GCGSkillResult((GCGSkillResult *const)(v4 + 48));
  if ( v10 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8034) = 0LL;
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
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = -168430091;
  }
  return retstr;
};

// Line 774: range 000000000E2F4136-000000000E2F46B4
std::map<data::GCGCostType,unsigned int> *__cdecl GCGSkillLogic::getRevisePlayCardCost(
        std::map<data::GCGCostType,unsigned int> *retstr,
        GCGSkillLogic *const this,
        GCGCard *card,
        const std::vector<unsigned int> *target_param_vec,
        GCGSkillResult *skill_result)
{
  unsigned __int64 p_normal_data; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  std::map<data::GCGCostType,unsigned int>::mapped_type *v8; // rax
  int *v9; // rdx
  int v10; // eax
  GCGCardMgr *CardMgr; // r14
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v12; // rax
  int *v13; // rdx
  GCGSkillLogic *SkillLogic; // rax
  int v15; // r14d
  std::map<data::GCGCostType,unsigned int>::mapped_type *v16; // rax
  _DWORD *v17; // rdx
  std::map<data::GCGCostType,unsigned int>::key_type __x; // [rsp+38h] [rbp-178h] BYREF
  std::map<data::GCGCostType,unsigned int>::key_type __k; // [rsp+3Ch] [rbp-174h] BYREF
  std::enable_shared_from_this<GCGCard> v24; // [rsp+40h] [rbp-170h] BYREF
  GCGCardMgr __r; // [rsp+50h] [rbp-160h] BYREF

  p_normal_data = (unsigned __int64)&__r.normal_data_;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(288LL);
    if ( v6 )
      p_normal_data = v6;
  }
  *(_QWORD *)p_normal_data = 1102416563LL;
  *(_QWORD *)(p_normal_data + 8) = "2 32 4 15 cost_energy:776 48 168 15 skill_param:778";
  *(_QWORD *)(p_normal_data + 16) = GCGSkillLogic::getRevisePlayCardCost;
  v7 = (_DWORD *)(p_normal_data >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61956;
  v7[536862726] = -218103808;
  v7[536862727] = -202116109;
  v7[536862728] = -202116109;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_M_t._M_impl._M_node_count + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_t._M_impl._M_node_count + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 48LL);
  }
  GCGCard::getCost(retstr, card);
  __x = GCG_COST_ENERGY;
  if ( std::map<data::GCGCostType,unsigned int>::count(retstr, &__x) )
  {
    __k = GCG_COST_ENERGY;
    v8 = std::map<data::GCGCostType,unsigned int>::operator[](retstr, &__k);
    v9 = (int *)v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    v10 = *v9;
  }
  else
  {
    v10 = 0;
  }
  *(_DWORD *)(p_normal_data + 32) = v10;
  GCGSkillUseParam::GCGSkillUseParam((GCGSkillUseParam *const)(p_normal_data + 48));
  std::enable_shared_from_this<GCGCard>::shared_from_this(&v24);
  std::shared_ptr<GCGCard>::operator=(
    (std::shared_ptr<GCGCard> *const)(p_normal_data + 72),
    (std::shared_ptr<GCGCard> *)&v24);
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)&v24);
  std::shared_ptr<GCGSkill>::shared_ptr((std::shared_ptr<GCGSkill> *const)&__r, 0LL);
  std::shared_ptr<GCGSkill>::operator=(
    (std::shared_ptr<GCGSkill> *const)(p_normal_data + 48),
    (std::shared_ptr<GCGSkill> *)&__r);
  std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)&__r);
  *(_DWORD *)(p_normal_data + 64) = 1;
  std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)&__r, 0LL);
  std::shared_ptr<GCGCard>::operator=(
    (std::shared_ptr<GCGCard> *const)(p_normal_data + 88),
    (std::shared_ptr<GCGCard> *)&__r);
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)&__r);
  *(_DWORD *)(p_normal_data + 160) = GCGCard::getControllerId(card);
  if ( std::vector<unsigned int>::size(target_param_vec) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    CardMgr = GCGGameMode::getCardMgr(this->game_mode_);
    v12 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                target_param_vec,
                                                                                                0LL);
    v13 = (int *)v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v12);
    }
    GCGCardMgr::findCard(&__r, CardMgr, *v13);
    std::shared_ptr<GCGCard>::operator=(
      (std::shared_ptr<GCGCard> *const)(p_normal_data + 88),
      (std::shared_ptr<GCGCard> *)&__r);
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)&__r);
  }
  std::vector<unsigned int>::operator=((std::vector<unsigned int> *const)(p_normal_data + 136), target_param_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  SkillLogic = GCGGameMode::getSkillLogic(this->game_mode_);
  GCGSkillLogic::calcRevisePlayCardCost(
    SkillLogic,
    (const GCGSkillUseParam *)(p_normal_data + 48),
    retstr,
    (uint32_t *)(p_normal_data + 32),
    skill_result);
  if ( *(_DWORD *)(p_normal_data + 32) )
  {
    v15 = *(_DWORD *)(p_normal_data + 32);
    __k = GCG_COST_ENERGY;
    v16 = std::map<data::GCGCostType,unsigned int>::operator[](retstr, &__k);
    v17 = v16;
    if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v16);
    }
    *v17 = v15;
  }
  GCGSkillUseParam::~GCGSkillUseParam((GCGSkillUseParam *const)(p_normal_data + 48));
  if ( &__r.normal_data_ == (GCGCardMgrRuntimeData *)p_normal_data )
  {
    *(_QWORD *)((p_normal_data >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_normal_data >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((p_normal_data >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)p_normal_data = 1172321806LL;
    *(_QWORD *)((p_normal_data >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_normal_data >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_normal_data >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_normal_data >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_normal_data >> 3) + 0x7FFF8020) = -168430091;
  }
  return retstr;
};

// Line 800: range 000000000E2F46B6-000000000E2F48E0
uint32_t __cdecl GCGSkillLogic::getReviseOnStageChangeCostPreview(
        GCGSkillLogic *const this,
        GCGControllerValue controller_id,
        GCGCardPtr *p_card_ptr,
        GCGCardPtr *p_target_card_ptr)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // rbx
  uint32_t v7; // r14d
  uint32_t result; // eax
  std::shared_ptr<GCGCard> v11; // [rsp+20h] [rbp-230h] BYREF
  std::shared_ptr<GCGCard> v12; // [rsp+30h] [rbp-220h] BYREF
  char v13[528]; // [rsp+40h] [rbp-210h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(480LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 48 368 10 result:801";
  *(_QWORD *)(v4 + 16) = GCGSkillLogic::getReviseOnStageChangeCostPreview;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862733] = -202116109;
  v6[536862734] = -202116109;
  GCGSkillResult::GCGSkillResult((GCGSkillResult *const)(v4 + 48));
  std::shared_ptr<GCGCard>::shared_ptr(&v12, p_target_card_ptr);
  std::shared_ptr<GCGCard>::shared_ptr(&v11, p_card_ptr);
  v7 = GCGSkillLogic::getReviseOnStageChangeCost(this, controller_id, &v11, &v12, (GCGSkillResult *)(v4 + 48), 1);
  std::shared_ptr<GCGCard>::~shared_ptr(&v11);
  std::shared_ptr<GCGCard>::~shared_ptr(&v12);
  GCGSkillResult::~GCGSkillResult((GCGSkillResult *const)(v4 + 48));
  result = v7;
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8034) = 0LL;
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
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 806: range 000000000E2F48E2-000000000E2F4BF3
uint32_t __cdecl GCGSkillLogic::getReviseOnStageChangeCost(
        GCGSkillLogic *const this,
        GCGControllerValue controller_id,
        GCGCardPtr *p_card_ptr,
        GCGCardPtr *p_target_card_ptr,
        GCGSkillResult *skill_result,
        bool is_preview)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // rbx
  GCGSkillLogic *SkillLogic; // rax
  GCGSkillLogic *v10; // rax
  uint32_t select_onstage_cost_revise_result; // r14d
  uint32_t result; // eax
  std::shared_ptr<GCGSkill> __r; // [rsp+30h] [rbp-160h] BYREF
  char v18[336]; // [rsp+40h] [rbp-150h] BYREF

  v6 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_3(288LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 48 168 24 trigger_window_param:808";
  *(_QWORD *)(v6 + 16) = GCGSkillLogic::getReviseOnStageChangeCost;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = 61937;
  v8[536862726] = -218103808;
  v8[536862727] = -202116109;
  v8[536862728] = -202116109;
  GCGSkillUseParam::GCGSkillUseParam((GCGSkillUseParam *const)(v6 + 48));
  *(_DWORD *)(v6 + 64) = 1;
  std::shared_ptr<GCGCard>::operator=((std::shared_ptr<GCGCard> *const)(v6 + 72), p_card_ptr);
  std::shared_ptr<GCGSkill>::shared_ptr(&__r, 0LL);
  std::shared_ptr<GCGSkill>::operator=((std::shared_ptr<GCGSkill> *const)(v6 + 48), &__r);
  std::shared_ptr<GCGSkill>::~shared_ptr(&__r);
  *(_DWORD *)(v6 + 160) = controller_id;
  std::shared_ptr<GCGCard>::operator=((std::shared_ptr<GCGCard> *const)(v6 + 88), p_target_card_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  SkillLogic = GCGGameMode::getSkillLogic(this->game_mode_);
  GCGSkillLogic::calcIncreaseSelectOnstageCost(SkillLogic, (const GCGSkillUseParam *)(v6 + 48), skill_result);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  v10 = GCGGameMode::getSkillLogic(this->game_mode_);
  GCGSkillLogic::calcReviseSelectOnstageCost(v10, (const GCGSkillUseParam *)(v6 + 48), skill_result, is_preview);
  if ( *(_BYTE *)(((unsigned __int64)&skill_result->select_onstage_result.select_onstage_cost_revise_result >> 3)
                + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&skill_result->select_onstage_result.select_onstage_cost_revise_result >> 3)
                + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&skill_result->select_onstage_result.select_onstage_cost_revise_result);
  }
  select_onstage_cost_revise_result = skill_result->select_onstage_result.select_onstage_cost_revise_result;
  GCGSkillUseParam::~GCGSkillUseParam((GCGSkillUseParam *const)(v6 + 48));
  result = select_onstage_cost_revise_result;
  if ( v18 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 823: range 000000000E2F4BF4-000000000E2F4C20
int32_t __cdecl GCGSkillLogic::getRollFixedSideResult(
        GCGSkillLogic *const this,
        GCGControllerValue controller_id,
        std::vector<proto::GCGDiceSideType> *fix_dice_vec_result)
{
  return GCGSkillLogic::getFixedDiceSideResult(this, controller_id, fix_dice_vec_result, PASSIVE_CATEGORY_FIX_DICE);
};

// Line 829: range 000000000E2F4C22-000000000E2F4C4E
int32_t __cdecl GCGSkillLogic::getRerollFixedSideResult(
        GCGSkillLogic *const this,
        GCGControllerValue controller_id,
        std::vector<proto::GCGDiceSideType> *fix_dice_vec_result)
{
  return GCGSkillLogic::getFixedDiceSideResult(
           this,
           controller_id,
           fix_dice_vec_result,
           PASSIVE_CATEGORY_FIX_REROLL_DICE);
};

// Line 835: range 000000000E2F4C50-000000000E2F4F79
int32_t __cdecl GCGSkillLogic::getFixedDiceSideResult(
        GCGSkillLogic *const this,
        GCGControllerValue controller_id,
        std::vector<proto::GCGDiceSideType> *fix_dice_vec_result,
        GCGEffectCategoryType effect_category_type)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // rbx
  int32_t result; // eax
  std::shared_ptr<GCGCard> __r; // [rsp+20h] [rbp-300h] BYREF
  char v11[752]; // [rsp+30h] [rbp-2F0h] BYREF

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(704LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 168 15 skill_param:837 272 368 16 skill_result:845";
  *(_QWORD *)(v4 + 16) = GCGSkillLogic::getFixedDiceSideResult;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862726] = -218959360;
  v6[536862727] = -218959118;
  v6[536862728] = 62194;
  v6[536862740] = -202116109;
  v6[536862741] = -202116109;
  GCGSkillUseParam::GCGSkillUseParam((GCGSkillUseParam *const)(v4 + 32));
  std::shared_ptr<GCGCard>::shared_ptr(&__r, 0LL);
  std::shared_ptr<GCGCard>::operator=((std::shared_ptr<GCGCard> *const)(v4 + 56), &__r);
  std::shared_ptr<GCGCard>::~shared_ptr(&__r);
  std::shared_ptr<GCGSkill>::shared_ptr((std::shared_ptr<GCGSkill> *const)&__r, 0LL);
  std::shared_ptr<GCGSkill>::operator=((std::shared_ptr<GCGSkill> *const)(v4 + 32), (std::shared_ptr<GCGSkill> *)&__r);
  std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)&__r);
  std::shared_ptr<GCGCard>::shared_ptr(&__r, 0LL);
  std::shared_ptr<GCGCard>::operator=((std::shared_ptr<GCGCard> *const)(v4 + 72), &__r);
  std::shared_ptr<GCGCard>::~shared_ptr(&__r);
  *(_DWORD *)(v4 + 48) = 1;
  *(_DWORD *)(v4 + 144) = controller_id;
  GCGSkillUseParam::setEffectCategroyType((GCGSkillUseParam *const)(v4 + 32), effect_category_type);
  GCGSkillResult::GCGSkillResult((GCGSkillResult *const)(v4 + 272));
  GCGSkillLogic::doCurControllerAllCardEffects(
    this,
    controller_id,
    (const GCGSkillUseParam *)(v4 + 32),
    (GCGSkillResult *)(v4 + 272));
  std::vector<proto::GCGDiceSideType>::operator=(
    fix_dice_vec_result,
    (const std::vector<proto::GCGDiceSideType> *)(v4 + 320));
  GCGSkillResult::~GCGSkillResult((GCGSkillResult *const)(v4 + 272));
  GCGSkillUseParam::~GCGSkillUseParam((GCGSkillUseParam *const)(v4 + 32));
  result = 0;
  if ( v11 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8050) = 0LL;
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
  }
  return result;
};

// Line 852: range 000000000E2F4F7A-000000000E2F5195
void __fastcall GCGSkillLogic::initElementReactionSkill(
        GCGSkillLogic *const this,
        GCGEffectElementType element1,
        GCGEffectElementType element2,
        GCGSkillPtr *p_skill_ptr)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::map<data::GCGEffectElementType,std::shared_ptr<GCGSkill>> *v7; // rax
  std::shared_ptr<GCGSkill> *v8; // rax
  std::map<data::GCGEffectElementType,std::shared_ptr<GCGSkill>> *v9; // rax
  std::shared_ptr<GCGSkill> *v10; // rax
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-A0h] BYREF
  char v14[128]; // [rsp+40h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 12 element1:851 64 4 12 element2:851";
  *(_QWORD *)(v4 + 16) = GCGSkillLogic::initElementReactionSkill;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 48) = element1;
  *(_DWORD *)(v4 + 64) = element2;
  if ( std::operator==<GCGSkill>(p_skill_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/skill/gcg_skill_logic.cpp",
      "initElementReactionSkill",
      855);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v13, (const char (*)[22])"skill_ptr is nullptr.");
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  else
  {
    v7 = std::map<data::GCGEffectElementType,std::map<data::GCGEffectElementType,std::shared_ptr<GCGSkill>>>::operator[](
           &this->element_reaction_skill_map,
           (const std::map<data::GCGEffectElementType,std::map<data::GCGEffectElementType,std::shared_ptr<GCGSkill>>>::key_type *)(v4 + 48));
    v8 = std::map<data::GCGEffectElementType,std::shared_ptr<GCGSkill>>::operator[](
           v7,
           (const std::map<data::GCGEffectElementType,std::shared_ptr<GCGSkill>>::key_type *)(v4 + 64));
    std::shared_ptr<GCGSkill>::operator=(v8, p_skill_ptr);
    v9 = std::map<data::GCGEffectElementType,std::map<data::GCGEffectElementType,std::shared_ptr<GCGSkill>>>::operator[](
           &this->element_reaction_skill_map,
           (const std::map<data::GCGEffectElementType,std::map<data::GCGEffectElementType,std::shared_ptr<GCGSkill>>>::key_type *)(v4 + 64));
    v10 = std::map<data::GCGEffectElementType,std::shared_ptr<GCGSkill>>::operator[](
            v9,
            (const std::map<data::GCGEffectElementType,std::shared_ptr<GCGSkill>>::key_type *)(v4 + 48));
    std::shared_ptr<GCGSkill>::operator=(v10, p_skill_ptr);
  }
  if ( v14 == (char *)v4 )
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

// Line 863: range 000000000E2F5196-000000000E2F5D75
GCGSkillLogic *__fastcall GCGSkillLogic::attachElement(
        GCGSkillLogic *const this,
        GCGSkillLogic *card,
        GCGCard *element,
        const GCGSkillUseParam *param,
        const GCGSkillUseParam *a5)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rax
  data::GCGTokenType *v9; // rax
  GCGTokenType *v10; // rdx
  data::GCGTokenType *v11; // rax
  data::GCGTokenType *v12; // rdx
  std::nullopt_t v13; // si
  common::milog::MiLogStream *v14; // rax
  data::GCGEffectElementType *v15; // rax
  _DWORD *v16; // rdx
  int v17; // r14d
  GCGControllerValue ControllerId; // eax
  std::map<data::GCGTokenType,unsigned int> *TokenMap; // r14
  uint32_t Guid; // eax
  uint32_t v21; // eax
  GCGGameMode *game_mode; // rdi
  uint32_t v23; // eax
  std::map<data::GCGTokenType,unsigned int> *v24; // rbx
  uint32_t v25; // eax
  uint32_t v26; // eax
  int v29; // [rsp+14h] [rbp-45Ch]
  unsigned int val; // [rsp+3Ch] [rbp-434h] BYREF
  GCGTokenType element_token; // [rsp+40h] [rbp-430h]
  data::GCGTokenType token_type; // [rsp+44h] [rbp-42Ch]
  uint32_t token_value; // [rsp+48h] [rbp-428h]
  data::GCGEffectElementType cur_cost_element_type; // [rsp+4Ch] [rbp-424h]
  std::set<data::GCGTokenType>::iterator __for_begin; // [rsp+50h] [rbp-420h] BYREF
  std::set<data::GCGTokenType>::iterator __for_end; // [rsp+58h] [rbp-418h] BYREF
  GCGSkillPreviewContext *preview_ctx; // [rsp+60h] [rbp-410h]
  const std::set<data::GCGTokenType> *__for_range; // [rsp+68h] [rbp-408h]
  const std::set<data::GCGEffectElementType> *non_attach_effect_set; // [rsp+70h] [rbp-400h]
  std::optional<data::GCGEffectElementType> M_node; // [rsp+78h] [rbp-3F8h] BYREF
  common::milog::MiLogStream v44; // [rsp+80h] [rbp-3F0h] BYREF
  char v45[976]; // [rsp+A0h] [rbp-3D0h] BYREF

  v29 = (int)param;
  v5 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_4(928LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "8 32 4 15 src_element:897 48 4 11 element:862 64 8 21 element_token_opt:869 96 8 19 src_element_"
                        "opt:891 128 16 13 skill_ptr:898 160 64 19 challenge_param:923 256 168 15 child_param:906 496 368"
                        " 16 skill_result:910";
  *(_QWORD *)(v5 + 16) = GCGSkillLogic::attachElement;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -219021312;
  v7[536862727] = -218959118;
  v7[536862733] = -218959360;
  v7[536862734] = -218959118;
  v7[536862735] = 62194;
  v7[536862747] = -202116109;
  v7[536862748] = -202116109;
  *(_DWORD *)(v5 + 48) = v29;
  if ( *(_DWORD *)(v5 + 48) )
  {
    *(_QWORD *)(v5 + 64) = GCGUtils::elementCover<data::GCGTokenType,data::GCGEffectElementType>(
                             (data::GCGEffectElementType)*(_DWORD *)(v5 + 48),
                             (std::nullopt_t)card);
    if ( !std::optional<data::GCGTokenType>::has_value((const std::optional<data::GCGTokenType> *const)(v5 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_skill_logic.cpp",
        "attachElement",
        872);
      v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v44,
             (const char (*)[42])"elementCover fail. GCGEffectElementType: ");
      val = *(_DWORD *)(v5 + 48);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v44);
      std::shared_ptr<GCGSkill>::shared_ptr((std::shared_ptr<GCGSkill> *const)this, 0LL);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&card->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&card->game_mode_);
      preview_ctx = GCGGameMode::getSkillPreviewContext(card->game_mode_);
      v9 = std::optional<data::GCGTokenType>::value((std::optional<data::GCGTokenType> *const)(v5 + 64));
      v10 = v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      element_token = *v10;
      if ( !(_BYTE)`guard variable for'GCGSkillLogic::attachElement(GCGCard &,data::GCGEffectElementType,GCGSkillUseParam const&)::token_set
        && __cxa_guard_acquire(&`guard variable for'GCGSkillLogic::attachElement(GCGCard &,data::GCGEffectElementType,GCGSkillUseParam const&)::token_set) )
      {
        GCGUtils::getElementSet<data::GCGTokenType>((std::set<data::GCGTokenType> *)&GCGSkillLogic::attachElement(GCGCard &,data::GCGEffectElementType,GCGSkillUseParam const&)::token_set);
        __cxa_guard_release(&`guard variable for'GCGSkillLogic::attachElement(GCGCard &,data::GCGEffectElementType,GCGSkillUseParam const&)::token_set);
        __cxa_atexit(
          (void (__fastcall *)(void *))std::set<data::GCGTokenType>::~set,
          (void *)&GCGSkillLogic::attachElement(GCGCard &,data::GCGEffectElementType,GCGSkillUseParam const&)::token_set,
          &_dso_handle);
      }
      __for_range = &GCGSkillLogic::attachElement(GCGCard &,data::GCGEffectElementType,GCGSkillUseParam const&)::token_set;
      __for_begin._M_node = std::set<data::GCGTokenType>::begin(&GCGSkillLogic::attachElement(GCGCard &,data::GCGEffectElementType,GCGSkillUseParam const&)::token_set)._M_node;
      __for_end._M_node = std::set<data::GCGTokenType>::end(&GCGSkillLogic::attachElement(GCGCard &,data::GCGEffectElementType,GCGSkillUseParam const&)::token_set)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v11 = (data::GCGTokenType *)std::_Rb_tree_const_iterator<data::GCGTokenType>::operator*(&__for_begin);
        v12 = v11;
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v11);
        }
        token_type = *v12;
        v13.gap0[0] = token_type;
        token_value = GCGCard::getToken(element, token_type);
        if ( token_value && token_type != element_token )
        {
          *(_QWORD *)(v5 + 96) = GCGUtils::elementCover<data::GCGEffectElementType,data::GCGTokenType>(token_type, v13);
          if ( !std::optional<data::GCGEffectElementType>::has_value((const std::optional<data::GCGEffectElementType> *const)(v5 + 96)) )
          {
            common::milog::MiLogStream::create(
              &v44,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/card_game/skill/gcg_skill_logic.cpp",
              "attachElement",
              894);
            v14 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                    &v44,
                    (const char (*)[34])"elementCover fail. GCGTokenType: ");
            val = token_type;
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
            common::milog::MiLogStream::~MiLogStream(&v44);
          }
          else
          {
            v15 = std::optional<data::GCGEffectElementType>::value((std::optional<data::GCGEffectElementType> *const)(v5 + 96));
            v16 = v15;
            if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v15);
            }
            *(_DWORD *)(v5 + 32) = *v16;
            GCGSkillLogic::findElementReactionSkill(
              (const GCGSkillLogic *const)(v5 + 128),
              (GCGEffectElementType)card,
              *(GCGEffectElementType *)(v5 + 32));
            if ( std::operator==<GCGSkill>((const std::shared_ptr<GCGSkill> *)(v5 + 128), 0LL) )
            {
              v17 = 0;
            }
            else
            {
              GCGSkillUseParam::GCGSkillUseParam((GCGSkillUseParam *const)(v5 + 256), a5);
              *(_DWORD *)(v5 + 272) = 1;
              GCGSkillUseParam::setEffectCategroyType(
                (GCGSkillUseParam *const)(v5 + 256),
                PASSIVE_CATEGORY_COST_ELEMENT);
              GCGSkillUseParam::setTriggerWindowParam((GCGSkillUseParam *const)(v5 + 256), a5);
              GCGSkillResult::GCGSkillResult((GCGSkillResult *const)(v5 + 496));
              std::optional<data::GCGEffectElementType>::optional<data::GCGEffectElementType&,true>(
                &M_node,
                (data::GCGEffectElementType *)(v5 + 32));
              *(std::optional<data::GCGEffectElementType> *)(v5 + 688) = M_node;
              ControllerId = GCGCard::getControllerId(element);
              GCGSkillLogic::doCurControllerAllCardEffects(
                card,
                ControllerId,
                (const GCGSkillUseParam *)(v5 + 256),
                (GCGSkillResult *)(v5 + 496));
              val = 0;
              cur_cost_element_type = std::optional<data::GCGEffectElementType>::value_or<data::GCGEffectElementType>(
                                        (const std::optional<data::GCGEffectElementType> *const)(v5 + 688),
                                        (data::GCGEffectElementType *)&val);
              if ( *(_BYTE *)(((unsigned __int64)&card->game_mode_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&card->game_mode_);
              if ( GCGGameMode::isDuringSnapshot(card->game_mode_) )
              {
                TokenMap = GCGCard::getTokenMap(element);
                Guid = GCGCard::getGuid(element);
                GCGSkillPreviewContext::refreshPreviewInitReactionState(preview_ctx, Guid, TokenMap);
                v21 = GCGCard::getGuid(element);
                GCGSkillPreviewContext::recordPreviewReaction(preview_ctx, v21, token_type, element_token, 1);
              }
              else
              {
                GCGChallengeUpdateParam::GCGChallengeUpdateParam((GCGChallengeUpdateParam *const)(v5 + 160));
                *(_DWORD *)(v5 + 160) = *(_DWORD *)(v5 + 32);
                *(_DWORD *)(v5 + 164) = *(_DWORD *)(v5 + 48);
                if ( *(_BYTE *)(((unsigned __int64)&card->game_mode_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&card->game_mode_);
                game_mode = card->game_mode_;
                if ( *(_BYTE *)(((unsigned __int64)&a5->controller_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&a5->controller_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  game_mode = (GCGGameMode *)&a5->controller_id;
                  __asan_report_load4(&a5->controller_id);
                }
                GCGGameMode::updatePlayerControllerChallengeByType(
                  game_mode,
                  a5->controller_id,
                  GCG_CHALLENGE_REACTION_WITH_TARGET_ELEMENT_TIMES,
                  (const GCGChallengeUpdateParam *)(v5 + 160));
                GCGChallengeUpdateParam::~GCGChallengeUpdateParam((GCGChallengeUpdateParam *const)(v5 + 160));
              }
              if ( cur_cost_element_type == *(_DWORD *)(v5 + 32) )
              {
                GCGCard::setToken(element, token_type, 0, GCG_REASON_EFFECT);
              }
              else
              {
                if ( *(_BYTE *)(((unsigned __int64)&card->game_mode_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&card->game_mode_);
                if ( GCGGameMode::isDuringSnapshot(card->game_mode_) )
                {
                  v23 = GCGCard::getGuid(element);
                  GCGSkillPreviewContext::recordPreviewReaction(preview_ctx, v23, GCG_TOKEN_NONE, token_type, 0);
                }
              }
              std::shared_ptr<GCGSkill>::shared_ptr(
                (std::shared_ptr<GCGSkill> *const)this,
                (std::shared_ptr<GCGSkill> *)(v5 + 128));
              GCGSkillResult::~GCGSkillResult((GCGSkillResult *const)(v5 + 496));
              GCGSkillUseParam::~GCGSkillUseParam((GCGSkillUseParam *const)(v5 + 256));
              v17 = 1;
            }
            std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v5 + 128));
            if ( v17 )
              goto LABEL_55;
          }
        }
        std::_Rb_tree_const_iterator<data::GCGTokenType>::operator++(&__for_begin);
      }
      if ( *(_BYTE *)(((unsigned __int64)&card->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&card->game_mode_);
      non_attach_effect_set = &GCGGameMode::rule(card->game_mode_)->non_attach_effect_set;
      M_node = (std::optional<data::GCGEffectElementType>)std::set<data::GCGEffectElementType>::end(non_attach_effect_set)._M_node;
      *(std::set<data::GCGEffectElementType>::const_iterator *)(v5 + 96) = std::set<data::GCGEffectElementType>::find(
                                                                             non_attach_effect_set,
                                                                             (const std::set<data::GCGEffectElementType>::key_type *)(v5 + 48));
      if ( std::operator==(
             (const std::_Rb_tree_const_iterator<data::GCGEffectElementType>::_Self *)(v5 + 96),
             (const std::_Rb_tree_const_iterator<data::GCGEffectElementType>::_Self *)&M_node) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&card->game_mode_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&card->game_mode_);
        if ( GCGGameMode::isDuringSnapshot(card->game_mode_) && !(unsigned int)GCGCard::getToken(element, element_token) )
        {
          v24 = GCGCard::getTokenMap(element);
          v25 = GCGCard::getGuid(element);
          GCGSkillPreviewContext::refreshPreviewInitReactionState(preview_ctx, v25, v24);
          v26 = GCGCard::getGuid(element);
          GCGSkillPreviewContext::recordPreviewReaction(preview_ctx, v26, GCG_TOKEN_NONE, element_token, 0);
        }
        GCGCard::setToken(element, element_token, 1u, GCG_REASON_EFFECT);
      }
      std::shared_ptr<GCGSkill>::shared_ptr((std::shared_ptr<GCGSkill> *const)this, 0LL);
    }
  }
  else
  {
    std::shared_ptr<GCGSkill>::shared_ptr((std::shared_ptr<GCGSkill> *const)this, 0LL);
  }
LABEL_55:
  if ( v45 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF801C) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF803C) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF806C) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8070) = -168430091;
  }
  return this;
};

// Line 964: range 000000000E2F5D76-000000000E2F5E16
void __cdecl GCGSkillLogic::doAllControllerAllCardEffects(
        GCGSkillLogic *const this,
        const GCGSkillUseParam *param,
        GCGSkillResult *result)
{
  GCGControllerValue controller_id; // [rsp+20h] [rbp-10h]
  GCGControllerValue opponent_controller_id; // [rsp+24h] [rbp-Ch]
  GCGDuel *duel; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  duel = GCGGameMode::getDuel(this->game_mode_);
  controller_id = GCGDuel::getCurControllerId(duel);
  opponent_controller_id = (unsigned int)GCGDuel::getOtherControllerId(duel, controller_id);
  GCGSkillLogic::doCurControllerAllCardEffects(this, controller_id, param, result);
  GCGSkillLogic::doCurControllerAllCardEffects(this, opponent_controller_id, param, result);
};

// Line 973: range 000000000E2F5E18-000000000E2F605B
const GCGSkillLogic *__fastcall GCGSkillLogic::findElementReactionSkill(
        const GCGSkillLogic *const this,
        __int64 element1,
        GCGEffectElementType element2,
        int a4)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectElementType,std::map<data::GCGEffectElementType,std::shared_ptr<GCGSkill>> > >::pointer v7; // rax
  std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectElementType,std::map<data::GCGEffectElementType,std::shared_ptr<GCGSkill>> > >::pointer v8; // rax
  std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectElementType,std::shared_ptr<GCGSkill> > >::pointer v9; // rax
  std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectElementType,std::map<data::GCGEffectElementType,std::shared_ptr<GCGSkill>> > >::_Self __y; // [rsp+28h] [rbp-A8h] BYREF
  char v14[160]; // [rsp+30h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 12 element1:972 48 4 12 element2:972 64 8 9 iter1:978 96 8 9 iter2:983";
  *(_QWORD *)(v4 + 16) = GCGSkillLogic::findElementReactionSkill;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218959360;
  v6[536862723] = -202116352;
  *(_DWORD *)(v4 + 32) = element2;
  *(_DWORD *)(v4 + 48) = a4;
  if ( *(_DWORD *)(v4 + 32) == *(_DWORD *)(v4 + 48) )
  {
    std::shared_ptr<GCGSkill>::shared_ptr((std::shared_ptr<GCGSkill> *const)this, 0LL);
  }
  else
  {
    *(std::map<data::GCGEffectElementType,std::map<data::GCGEffectElementType,std::shared_ptr<GCGSkill>>>::const_iterator *)(v4 + 64) = std::map<data::GCGEffectElementType,std::map<data::GCGEffectElementType,std::shared_ptr<GCGSkill>>>::find((const std::map<data::GCGEffectElementType,std::map<data::GCGEffectElementType,std::shared_ptr<GCGSkill>>> *const)(element1 + 40), (const std::map<data::GCGEffectElementType,std::map<data::GCGEffectElementType,std::shared_ptr<GCGSkill>>>::key_type *)(v4 + 32));
    __y._M_node = std::map<data::GCGEffectElementType,std::map<data::GCGEffectElementType,std::shared_ptr<GCGSkill>>>::end((const std::map<data::GCGEffectElementType,std::map<data::GCGEffectElementType,std::shared_ptr<GCGSkill>>> *const)(element1 + 40))._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectElementType,std::map<data::GCGEffectElementType,std::shared_ptr<GCGSkill>> > >::_Self *)(v4 + 64),
           &__y)
      || (v7 = std::_Rb_tree_const_iterator<std::pair<data::GCGEffectElementType const,std::map<data::GCGEffectElementType,std::shared_ptr<GCGSkill>>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectElementType,std::map<data::GCGEffectElementType,std::shared_ptr<GCGSkill>> > > *const)(v4 + 64)),
          *(std::map<data::GCGEffectElementType,std::shared_ptr<GCGSkill>>::const_iterator *)(v4 + 96) = std::map<data::GCGEffectElementType,std::shared_ptr<GCGSkill>>::find(&v7->second, (const std::map<data::GCGEffectElementType,std::shared_ptr<GCGSkill>>::key_type *)(v4 + 48)),
          v8 = std::_Rb_tree_const_iterator<std::pair<data::GCGEffectElementType const,std::map<data::GCGEffectElementType,std::shared_ptr<GCGSkill>>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectElementType,std::map<data::GCGEffectElementType,std::shared_ptr<GCGSkill>> > > *const)(v4 + 64)),
          __y._M_node = std::map<data::GCGEffectElementType,std::shared_ptr<GCGSkill>>::end(&v8->second)._M_node,
          std::operator==(
            (const std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectElementType,std::shared_ptr<GCGSkill> > >::_Self *)(v4 + 96),
            (const std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectElementType,std::shared_ptr<GCGSkill> > >::_Self *)&__y)) )
    {
      std::shared_ptr<GCGSkill>::shared_ptr((std::shared_ptr<GCGSkill> *const)this, 0LL);
    }
    else
    {
      v9 = std::_Rb_tree_const_iterator<std::pair<data::GCGEffectElementType const,std::shared_ptr<GCGSkill>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::GCGEffectElementType,std::shared_ptr<GCGSkill> > > *const)(v4 + 96));
      std::shared_ptr<GCGSkill>::shared_ptr((std::shared_ptr<GCGSkill> *const)this, &v9->second);
    }
  }
  if ( v14 == (char *)v4 )
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
  return this;
};

// Line 992: range 000000000E2F605C-000000000E2F62D3
int32_t __cdecl GCGSkillLogic::getControllerVecByCampType(
        GCGSkillLogic *const this,
        GCGControllerValue controller_id,
        data::GCGEffectCampType camp_type,
        std::vector<proto::GCGControllerValue> *controller_vec)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  GCGDuel *Duel; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  int val; // [rsp+2Ch] [rbp-A4h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-A0h] BYREF
  char v14[128]; // [rsp+50h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 21 cur_controller_id:993 64 4 23 enemy_controller_id:994";
  *(_QWORD *)(v4 + 16) = GCGSkillLogic::getControllerVecByCampType;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 48) = controller_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  Duel = GCGGameMode::getDuel(this->game_mode_);
  *(_DWORD *)(v4 + 64) = GCGDuel::getOtherControllerId(Duel, (GCGControllerValue)*(_DWORD *)(v4 + 48));
  if ( camp_type == CAMP_ENEMY )
  {
    std::vector<proto::GCGControllerValue>::push_back(
      controller_vec,
      (const std::vector<proto::GCGControllerValue>::value_type *)(v4 + 64));
  }
  else
  {
    if ( camp_type > CAMP_ENEMY )
      goto LABEL_13;
    if ( camp_type == CAMP_BOTH )
    {
      std::vector<proto::GCGControllerValue>::push_back(
        controller_vec,
        (const std::vector<proto::GCGControllerValue>::value_type *)(v4 + 48));
      std::vector<proto::GCGControllerValue>::push_back(
        controller_vec,
        (const std::vector<proto::GCGControllerValue>::value_type *)(v4 + 64));
      goto LABEL_14;
    }
    if ( camp_type != CAMP_FRIENDLY )
    {
LABEL_13:
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_game/skill/gcg_skill_logic.cpp",
        "getControllerVecByCampType",
        1015);
      v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
             &v13,
             (const char (*)[37])"changeCardVar unsupported camp_type:");
      val = camp_type;
      common::milog::MiLogStream::operator<<<int,(int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v13);
      result = -1;
      goto LABEL_15;
    }
    std::vector<proto::GCGControllerValue>::push_back(
      controller_vec,
      (const std::vector<proto::GCGControllerValue>::value_type *)(v4 + 48));
  }
LABEL_14:
  result = 0;
LABEL_15:
  if ( v14 == (char *)v4 )
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
  return result;
};

// Line 1026: range 000000000E2F6A46-000000000E2F8382
int32_t __cdecl GCGSkillLogic::getTargetCardVecByControllerId(
        GCGSkillLogic *const this,
        const GCGSkillUseParam *skill_param,
        GCGCardPtr *p_this_card_ptr,
        GCGControllerValue controller_id,
        data::GCGChooseTargetCharaterType target_charater_type,
        std::vector<unsigned int> *card_guid_vec)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  GCGDuel *Duel; // rax
  GCGCharacterZone *v10; // rbx
  GCGCharacterZone *v11; // rbx
  GCGCharacterZone *v12; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  GCGCharacterZone *CharacterZone; // rax
  common::milog::MiLogStream *v15; // rbx
  GCGCharacterZone *v16; // rax
  GCGCharacterZone *v17; // r14
  GCGCharacterZone *v18; // r14
  common::milog::MiLogStream *v19; // rbx
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v22; // rbx
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  common::milog::MiLogStream *v24; // rbx
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  common::milog::MiLogStream *v27; // rbx
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  common::milog::MiLogStream *v29; // rbx
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  GCGCharacterZone *v31; // r14
  common::milog::MiLogStream *v32; // rax
  const std::vector<unsigned int>::value_type *v33; // rax
  const std::vector<unsigned int>::value_type *v35; // rax
  common::milog::MiLogStream *v36; // rbx
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  GCGCharacterZone *v38; // r14
  GCGCharacterZone *v39; // rbx
  common::milog::MiLogStream *v40; // rbx
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  common::milog::MiLogStream *v44; // rbx
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  common::milog::MiLogStream *v48; // rbx
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rax
  common::milog::MiLogStream *v50; // rbx
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v51; // rax
  common::milog::MiLogStream *v52; // rax
  int32_t result; // eax
  GCGCharacterZone *v54; // [rsp+10h] [rbp-1F0h]
  int32_t ret; // [rsp+58h] [rbp-1A8h]
  uint32_t exclude_guid_0; // [rsp+5Ch] [rbp-1A4h]
  uint32_t exclude_guid; // [rsp+60h] [rbp-1A0h]
  uint32_t target_guid; // [rsp+64h] [rbp-19Ch]
  uint32_t max_size; // [rsp+68h] [rbp-198h]
  unsigned int left_index; // [rsp+6Ch] [rbp-194h]
  unsigned int right_index; // [rsp+70h] [rbp-190h]
  unsigned int cur_onstage_character_guid; // [rsp+74h] [rbp-18Ch]
  std::vector<std::shared_ptr<GCGCard>>::iterator __for_begin; // [rsp+78h] [rbp-188h] BYREF
  std::vector<std::shared_ptr<GCGCard>>::iterator __for_end; // [rsp+80h] [rbp-180h] BYREF
  GCGField *field; // [rsp+88h] [rbp-178h]
  std::shared_ptr<GCGCard> *target_card_ptr; // [rsp+90h] [rbp-170h]
  std::shared_ptr<GCGCard> *source_card_ptr; // [rsp+98h] [rbp-168h]
  std::vector<std::shared_ptr<GCGCard>> *__for_range; // [rsp+A0h] [rbp-160h]
  std::shared_ptr<GCGCard> *neighbour_card_ptr; // [rsp+A8h] [rbp-158h]
  common::milog::MiLogStream v74; // [rsp+B0h] [rbp-150h] BYREF
  std::function<ForeachPolicy(GCGCard&)> p_func; // [rsp+D0h] [rbp-130h] BYREF
  char v76[272]; // [rsp+F0h] [rbp-110h] BYREF
  GCGSkillLogic::getTargetCardVecByControllerId::<lambda(GCGCard&)>_3 v77; // 0:esi.4,8:rdx.8
  GCGSkillLogic::getTargetCardVecByControllerId::<lambda(GCGCard&)>_3 v78; // 0:esi.4,8:rdx.8

  v6 = (unsigned __int64)v76;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(224LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "5 32 4 25 choose_hurt_max_guid:1111 48 4 22 onstage_card_guid:1068 64 16 19 owner_card_ptr:1271 "
                        "96 24 18 temp_guid_vec:1182 160 24 23 neighbour_card_vec:1051";
  *(_QWORD *)(v6 + 16) = GCGSkillLogic::getTargetCardVecByControllerId;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556924;
  v8[536862722] = -219021312;
  v8[536862723] = -234881024;
  v8[536862724] = -218959118;
  v8[536862725] = -218103808;
  v8[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  Duel = GCGGameMode::getDuel(this->game_mode_);
  field = GCGDuel::getField(Duel, controller_id);
  ret = 0;
  switch ( target_charater_type )
  {
    case CHARACTER_ONSTAGE:
      CharacterZone = GCGField::getCharacterZone(field);
      *(_DWORD *)(v6 + 48) = GCGCharacterZone::getOnStageCardGuid(CharacterZone);
      if ( *(_DWORD *)(v6 + 48) )
      {
        std::vector<unsigned int>::push_back(card_guid_vec, (const std::vector<unsigned int>::value_type *)(v6 + 48));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v74,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/skill/gcg_skill_logic.cpp",
          "getTargetCardVecByControllerId",
          1071);
        v15 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v74,
                (const char (*)[34])"onstage_card_guid is zero, param:");
        GCGSkillUseParam::getDesc[abi:cxx11]((std::string *)&p_func, skill_param);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, (const std::string *)&p_func);
        std::string::~string(&p_func);
        common::milog::MiLogStream::~MiLogStream(&v74);
        ret = -1;
      }
      break;
    case CHARACTER_NEAR_BACKSTAGE:
      v12 = GCGField::getCharacterZone(field);
      GCGCharacterZone::getOnstageNeighbourCardVec((std::vector<std::shared_ptr<GCGCard>> *)(v6 + 160), v12);
      if ( !std::vector<std::shared_ptr<GCGCard>>::empty((const std::vector<std::shared_ptr<GCGCard>> *const)(v6 + 160)) )
      {
        __for_range = (std::vector<std::shared_ptr<GCGCard>> *)(v6 + 160);
        __for_begin._M_current = std::vector<std::shared_ptr<GCGCard>>::begin((std::vector<std::shared_ptr<GCGCard>> *const)(v6 + 160))._M_current;
        __for_end._M_current = std::vector<std::shared_ptr<GCGCard>>::end((std::vector<std::shared_ptr<GCGCard>> *const)(v6 + 160))._M_current;
        while ( __gnu_cxx::operator!=<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>(
                  &__for_begin,
                  &__for_end) )
        {
          neighbour_card_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>::operator*(&__for_begin);
          if ( !std::operator==<GCGCard>(neighbour_card_ptr, 0LL) )
          {
            v13 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)neighbour_card_ptr);
            *(_DWORD *)(v6 + 48) = GCGCard::getGuid(v13);
            std::vector<unsigned int>::push_back(card_guid_vec, (std::vector<unsigned int>::value_type *)(v6 + 48));
          }
          __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>::operator++(&__for_begin);
        }
      }
      std::vector<std::shared_ptr<GCGCard>>::~vector((std::vector<std::shared_ptr<GCGCard>> *const)(v6 + 160));
      break;
    case CHARACTER_ALL_BACKSTAGE:
      v11 = GCGField::getCharacterZone(field);
      std::function<ForeachPolicy ()(GCGCard &)>::function<GCGSkillLogic::getTargetCardVecByControllerId(GCGSkillUseParam const&,std::shared_ptr<GCGCard>,proto::GCGControllerValue,data::GCGChooseTargetCharaterType,std::vector<unsigned int> &)::{lambda(GCGCard &)#2},void,void>(
        &p_func,
        (GCGSkillLogic::getTargetCardVecByControllerId::<lambda(GCGCard&)>)card_guid_vec);
      GCGCharacterZone::foreachAliveBackStageCharater(v11, &p_func);
      std::function<ForeachPolicy ()(GCGCard &)>::~function(&p_func);
      break;
    case CHARACTER_ALL:
      v10 = GCGField::getCharacterZone(field);
      std::function<ForeachPolicy ()(GCGCard &)>::function<GCGSkillLogic::getTargetCardVecByControllerId(GCGSkillUseParam const&,std::shared_ptr<GCGCard>,proto::GCGControllerValue,data::GCGChooseTargetCharaterType,std::vector<unsigned int> &)::{lambda(GCGCard &)#1},void,void>(
        &p_func,
        (GCGSkillLogic::getTargetCardVecByControllerId::<lambda(GCGCard&)>)card_guid_vec);
      GCGCharacterZone::foreachAliveCharacter(v10, &p_func);
      std::function<ForeachPolicy ()(GCGCard &)>::~function(&p_func);
      break;
    case CHARACTER_BACKSTAGE_HURT_MAX:
      v16 = GCGField::getCharacterZone(field);
      cur_onstage_character_guid = GCGCharacterZone::getOnStageCardGuid(v16);
      *(_DWORD *)(v6 + 32) = 0;
      *(_DWORD *)(v6 + 48) = 0;
      v17 = GCGField::getCharacterZone(field);
      *(_QWORD *)(v6 + 96) = v6 + 32;
      *(_QWORD *)(v6 + 104) = v6 + 48;
      *(_DWORD *)(v6 + 112) = cur_onstage_character_guid;
      std::function<ForeachPolicy ()(GCGCard &)>::function<GCGSkillLogic::getTargetCardVecByControllerId(GCGSkillUseParam const&,std::shared_ptr<GCGCard>,proto::GCGControllerValue,data::GCGChooseTargetCharaterType,std::vector<unsigned int> &)::{lambda(GCGCard &)#3},void,void>(
        &p_func,
        *(GCGSkillLogic::getTargetCardVecByControllerId::<lambda(GCGCard&)>_0 *)(v6 + 96));
      GCGCharacterZone::foreachAliveCharacter(v17, &p_func);
      std::function<ForeachPolicy ()(GCGCard &)>::~function(&p_func);
      if ( *(_DWORD *)(v6 + 32) )
        goto LABEL_20;
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&p_func,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_game/skill/gcg_skill_logic.cpp",
        "getTargetCardVecByControllerId",
        1103);
      common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
        (common::milog::MiLogStream *const)&p_func,
        (const char (*)[64])"getTargetCardVecByControllerId choose_hurt_max_guid is not find");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
      ret = -1;
      break;
    case CHARACTER_HURT_MAX:
      *(_DWORD *)(v6 + 32) = 0;
      *(_DWORD *)(v6 + 48) = 0;
      v18 = GCGField::getCharacterZone(field);
      std::function<ForeachPolicy ()(GCGCard &)>::function<GCGSkillLogic::getTargetCardVecByControllerId(GCGSkillUseParam const&,std::shared_ptr<GCGCard>,proto::GCGControllerValue,data::GCGChooseTargetCharaterType,std::vector<unsigned int> &)::{lambda(GCGCard &)#4},void,void>(
        &p_func,
        (GCGSkillLogic::getTargetCardVecByControllerId::<lambda(GCGCard&)>_1)__PAIR128__(v6 + 48, v6 + 32));
      GCGCharacterZone::foreachAliveCharacter(v18, &p_func);
      std::function<ForeachPolicy ()(GCGCard &)>::~function(&p_func);
      if ( *(_DWORD *)(v6 + 32) )
      {
LABEL_20:
        std::vector<unsigned int>::push_back(card_guid_vec, (const std::vector<unsigned int>::value_type *)(v6 + 32));
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&p_func,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/skill/gcg_skill_logic.cpp",
          "getTargetCardVecByControllerId",
          1129);
        common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
          (common::milog::MiLogStream *const)&p_func,
          (const char (*)[64])"getTargetCardVecByControllerId choose_hurt_max_guid is not find");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
        ret = -1;
      }
      break;
    case CHARACTER_TRIGGER_SOURCE_CHARACTER:
      if ( std::operator==<GCGSkillUseParam>(&skill_param->trigger_window_param_ptr, 0LL) )
      {
        common::milog::MiLogStream::create(
          &v74,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/skill/gcg_skill_logic.cpp",
          "getTargetCardVecByControllerId",
          1139);
        v19 = common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(
                &v74,
                (const char (*)[75])"getTargetCardVecByControllerId trigger_window_param_ptr is nullptr, param:");
        GCGSkillUseParam::getDesc[abi:cxx11]((std::string *)&p_func, skill_param);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, (const std::string *)&p_func);
        std::string::~string(&p_func);
        common::milog::MiLogStream::~MiLogStream(&v74);
        ret = -1;
      }
      else
      {
        source_card_ptr = &std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)&skill_param->trigger_window_param_ptr)->source_card_ptr;
        if ( std::operator==<GCGCard>(source_card_ptr, 0LL)
          || (v20 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)source_card_ptr),
              GCGCard::getCardType(v20) != GCG_CARD_CHARACTER) )
        {
          common::milog::MiLogStream::create(
            &v74,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/card_game/skill/gcg_skill_logic.cpp",
            "getTargetCardVecByControllerId",
            1146);
          v22 = common::milog::MiLogStream::operator<<<char [89],(char *[89])0>(
                  &v74,
                  (const char (*)[89])"getTargetCardVecByControllerId source_card_ptr is nullptr or not character, skill_param:");
          GCGSkillUseParam::getDesc[abi:cxx11]((std::string *)&p_func, skill_param);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, (const std::string *)&p_func);
          std::string::~string(&p_func);
          common::milog::MiLogStream::~MiLogStream(&v74);
          ret = -1;
        }
        else
        {
          v23 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)source_card_ptr);
          *(_DWORD *)(v6 + 48) = GCGCard::getGuid(v23);
          std::vector<unsigned int>::push_back(card_guid_vec, (std::vector<unsigned int>::value_type *)(v6 + 48));
        }
      }
      break;
    case CHARACTER_TRIGGER_TARGET_CHARACTER:
    case CHARACTER_CONFIG_CHOOSE:
      if ( std::operator==<GCGSkillUseParam>(&skill_param->trigger_window_param_ptr, 0LL) )
      {
        common::milog::MiLogStream::create(
          &v74,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/skill/gcg_skill_logic.cpp",
          "getTargetCardVecByControllerId",
          1158);
        v24 = common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(
                &v74,
                (const char (*)[75])"getTargetCardVecByControllerId trigger_window_param_ptr is nullptr, param:");
        GCGSkillUseParam::getDesc[abi:cxx11]((std::string *)&p_func, skill_param);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v24, (const std::string *)&p_func);
        std::string::~string(&p_func);
        common::milog::MiLogStream::~MiLogStream(&v74);
        ret = -1;
      }
      else
      {
        target_card_ptr = &std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)&skill_param->trigger_window_param_ptr)->target_card_ptr;
        if ( std::operator==<GCGCard>(target_card_ptr, 0LL)
          || (v25 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)target_card_ptr),
              GCGCard::getCardType(v25) != GCG_CARD_CHARACTER) )
        {
          common::milog::MiLogStream::create(
            &v74,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/card_game/skill/gcg_skill_logic.cpp",
            "getTargetCardVecByControllerId",
            1165);
          v27 = common::milog::MiLogStream::operator<<<char [89],(char *[89])0>(
                  &v74,
                  (const char (*)[89])"getTargetCardVecByControllerId target_card_ptr is nullptr or not character, skill_param:");
          GCGSkillUseParam::getDesc[abi:cxx11]((std::string *)&p_func, skill_param);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v27, (const std::string *)&p_func);
          std::string::~string(&p_func);
          common::milog::MiLogStream::~MiLogStream(&v74);
          ret = -1;
        }
        else
        {
          v28 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)target_card_ptr);
          *(_DWORD *)(v6 + 48) = GCGCard::getGuid(v28);
          std::vector<unsigned int>::push_back(card_guid_vec, (std::vector<unsigned int>::value_type *)(v6 + 48));
        }
      }
      break;
    case CHARACTER_TARGET_NEAR:
      if ( std::operator==<GCGCard>(&skill_param->target_card_ptr, 0LL) )
      {
        common::milog::MiLogStream::create(
          &v74,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/skill/gcg_skill_logic.cpp",
          "getTargetCardVecByControllerId",
          1176);
        v29 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                &v74,
                (const char (*)[66])"getTargetCardVecByControllerId target_card_ptr is nullptr, param:");
        GCGSkillUseParam::getDesc[abi:cxx11]((std::string *)&p_func, skill_param);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v29, (const std::string *)&p_func);
        std::string::~string(&p_func);
        common::milog::MiLogStream::~MiLogStream(&v74);
        ret = -1;
      }
      else
      {
        v30 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)&skill_param->target_card_ptr);
        target_guid = GCGCard::getGuid(v30);
        *(_DWORD *)(v6 + 48) = 0;
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v6 + 96));
        v31 = GCGField::getCharacterZone(field);
        *(_DWORD *)(v6 + 160) = target_guid;
        *(_QWORD *)(v6 + 168) = v6 + 48;
        *(_QWORD *)(v6 + 176) = v6 + 96;
        std::function<ForeachPolicy ()(GCGCard &)>::function<GCGSkillLogic::getTargetCardVecByControllerId(GCGSkillUseParam const&,std::shared_ptr<GCGCard>,proto::GCGControllerValue,data::GCGChooseTargetCharaterType,std::vector<unsigned int> &)::{lambda(GCGCard &)#5},void,void>(
          &p_func,
          *(GCGSkillLogic::getTargetCardVecByControllerId::<lambda(GCGCard&)>_2 *)(v6 + 160));
        GCGCardZone::foreachCard(v31, &p_func);
        std::function<ForeachPolicy ()(GCGCard &)>::~function(&p_func);
        max_size = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v6 + 96));
        if ( max_size > 1 )
        {
          left_index = (*(_DWORD *)(v6 + 48) + max_size - 1) % max_size;
          right_index = (*(_DWORD *)(v6 + 48) + max_size + 1) % max_size;
          if ( left_index < std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v6 + 96)) )
          {
            v33 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v6 + 96), left_index);
            std::vector<unsigned int>::push_back(card_guid_vec, v33);
          }
          if ( right_index != left_index
            && right_index < std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v6 + 96)) )
          {
            v35 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v6 + 96), right_index);
            std::vector<unsigned int>::push_back(card_guid_vec, v35);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&p_func,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/skill/gcg_skill_logic.cpp",
            "getTargetCardVecByControllerId",
            1199);
          v32 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                  (common::milog::MiLogStream *const)&p_func,
                  (const char (*)[52])"getTargetCardVecByControllerId near. only one card.");
          common::milog::MiLogStream::operator<<<unsigned int>(v32, (const std::vector<unsigned int> *)(v6 + 96));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v6 + 96));
      }
      break;
    case CHARACTER_TARGET_OTHERS:
      if ( std::operator==<GCGCard>(&skill_param->target_card_ptr, 0LL) )
      {
        common::milog::MiLogStream::create(
          &v74,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/skill/gcg_skill_logic.cpp",
          "getTargetCardVecByControllerId",
          1219);
        v36 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                &v74,
                (const char (*)[66])"getTargetCardVecByControllerId target_card_ptr is nullptr, param:");
        GCGSkillUseParam::getDesc[abi:cxx11]((std::string *)&p_func, skill_param);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v36, (const std::string *)&p_func);
        std::string::~string(&p_func);
        common::milog::MiLogStream::~MiLogStream(&v74);
        ret = -1;
      }
      else
      {
        v37 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)&skill_param->target_card_ptr);
        exclude_guid = GCGCard::getGuid(v37);
        v38 = GCGField::getCharacterZone(field);
        v77.__card_guid_vec = card_guid_vec;
        v77.__exclude_guid = exclude_guid;
        std::function<ForeachPolicy ()(GCGCard &)>::function<GCGSkillLogic::getTargetCardVecByControllerId(GCGSkillUseParam const&,std::shared_ptr<GCGCard>,proto::GCGControllerValue,data::GCGChooseTargetCharaterType,std::vector<unsigned int> &)::{lambda(GCGCard &)#6},void,void>(
          &p_func,
          v77);
        GCGCharacterZone::foreachAliveCharacter(v38, &p_func);
        std::function<ForeachPolicy ()(GCGCard &)>::~function(&p_func);
      }
      break;
    case CHARACTER_ALL_NOT_CHARGED:
      v39 = GCGField::getCharacterZone(field);
      std::function<ForeachPolicy ()(GCGCard &)>::function<GCGSkillLogic::getTargetCardVecByControllerId(GCGSkillUseParam const&,std::shared_ptr<GCGCard>,proto::GCGControllerValue,data::GCGChooseTargetCharaterType,std::vector<unsigned int> &)::{lambda(GCGCard &)#7},void,void>(
        &p_func,
        (GCGSkillLogic::getTargetCardVecByControllerId::<lambda(GCGCard&)>)card_guid_vec);
      GCGCharacterZone::foreachAliveCharacter(v39, &p_func);
      std::function<ForeachPolicy ()(GCGCard &)>::~function(&p_func);
      break;
    case CHARACTER_MODIFIED:
      if ( std::operator==<GCGCard>(0LL, p_this_card_ptr) )
      {
        common::milog::MiLogStream::create(
          &v74,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/skill/gcg_skill_logic.cpp",
          "getTargetCardVecByControllerId",
          1250);
        v40 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                &v74,
                (const char (*)[64])"getTargetCardVecByControllerId this_card_ptr is nullptr, param:");
        GCGSkillUseParam::getDesc[abi:cxx11]((std::string *)&p_func, skill_param);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v40, (const std::string *)&p_func);
        std::string::~string(&p_func);
        common::milog::MiLogStream::~MiLogStream(&v74);
        ret = -1;
      }
      else
      {
        std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_this_card_ptr);
        GCGCard::getOwnerCard((GCGCard *const)(v6 + 64));
        if ( std::operator!=<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v6 + 64)) )
        {
          v41 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
          if ( GCGCard::getCardType(v41) == GCG_CARD_CHARACTER )
          {
            v43 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
            *(_DWORD *)(v6 + 48) = GCGCard::getGuid(v43);
            std::vector<unsigned int>::push_back(card_guid_vec, (std::vector<unsigned int>::value_type *)(v6 + 48));
          }
        }
        std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v6 + 64));
      }
      break;
    case CHARACTER_THIS_CARD:
      if ( std::operator==<GCGCard>(0LL, p_this_card_ptr) )
      {
        common::milog::MiLogStream::create(
          &v74,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/skill/gcg_skill_logic.cpp",
          "getTargetCardVecByControllerId",
          1290);
        v48 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                &v74,
                (const char (*)[64])"getTargetCardVecByControllerId this_card_ptr is nullptr, param:");
        GCGSkillUseParam::getDesc[abi:cxx11]((std::string *)&p_func, skill_param);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v48, (const std::string *)&p_func);
        std::string::~string(&p_func);
        common::milog::MiLogStream::~MiLogStream(&v74);
        ret = -1;
      }
      else
      {
        v49 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_this_card_ptr);
        if ( GCGCard::getCardType(v49) == GCG_CARD_CHARACTER )
        {
          v51 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_this_card_ptr);
          *(_DWORD *)(v6 + 48) = GCGCard::getGuid(v51);
          std::vector<unsigned int>::push_back(card_guid_vec, (std::vector<unsigned int>::value_type *)(v6 + 48));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v74,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/card_game/skill/gcg_skill_logic.cpp",
            "getTargetCardVecByControllerId",
            1296);
          v50 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
                  &v74,
                  (const char (*)[70])"getTargetCardVecByControllerId this_card_ptr is not character, param:");
          GCGSkillUseParam::getDesc[abi:cxx11]((std::string *)&p_func, skill_param);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v50, (const std::string *)&p_func);
          std::string::~string(&p_func);
          common::milog::MiLogStream::~MiLogStream(&v74);
          ret = -1;
        }
      }
      break;
    case CHARACTER_MODIFIED_OTHERS:
      if ( std::operator==<GCGCard>(0LL, p_this_card_ptr) )
      {
        common::milog::MiLogStream::create(
          &v74,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/skill/gcg_skill_logic.cpp",
          "getTargetCardVecByControllerId",
          1266);
        v44 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                &v74,
                (const char (*)[64])"getTargetCardVecByControllerId this_card_ptr is nullptr, param:");
        GCGSkillUseParam::getDesc[abi:cxx11]((std::string *)&p_func, skill_param);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v44, (const std::string *)&p_func);
        std::string::~string(&p_func);
        common::milog::MiLogStream::~MiLogStream(&v74);
        ret = -1;
      }
      else
      {
        std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_this_card_ptr);
        GCGCard::getOwnerCard((GCGCard *const)(v6 + 64));
        if ( std::operator!=<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v6 + 64)) )
        {
          v45 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
          if ( GCGCard::isAlive(v45) )
          {
            v47 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
            exclude_guid_0 = GCGCard::getGuid(v47);
            v54 = GCGField::getCharacterZone(field);
            v78.__card_guid_vec = card_guid_vec;
            v78.__exclude_guid = exclude_guid_0;
            std::function<ForeachPolicy ()(GCGCard &)>::function<GCGSkillLogic::getTargetCardVecByControllerId(GCGSkillUseParam const&,std::shared_ptr<GCGCard>,proto::GCGControllerValue,data::GCGChooseTargetCharaterType,std::vector<unsigned int> &)::{lambda(GCGCard &)#8},void,void>(
              &p_func,
              v78);
            GCGCharacterZone::foreachAliveCharacter(v54, &p_func);
            std::function<ForeachPolicy ()(GCGCard &)>::~function(&p_func);
          }
        }
        std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v6 + 64));
      }
      break;
    default:
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&p_func,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_skill_logic.cpp",
        "getTargetCardVecByControllerId",
        1305);
      v52 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              (common::milog::MiLogStream *const)&p_func,
              (const char (*)[50])"getTargetCardVecByControllerId not support param:");
      *(_DWORD *)(v6 + 48) = target_charater_type;
      common::milog::MiLogStream::operator<<<int,(int *)0>(v52, (const int *)(v6 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
      ret = -1;
      break;
  }
  result = ret;
  if ( v76 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 1033: range 000000000E2F62D4-000000000E2F6336
ForeachPolicy __cdecl GCGSkillLogic::getTargetCardVecByControllerId(GCGSkillUseParam const&,std::shared_ptr<GCGCard>,proto::GCGControllerValue,data::GCGChooseTargetCharaterType,std::vector<unsigned int> &)::{lambda(GCGCard&)#1}::operator()(
        const GCGSkillLogic::getTargetCardVecByControllerId::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  std::vector<unsigned int> *card_guid_vec; // rbx
  std::vector<unsigned int>::value_type __x[5]; // [rsp+1Ch] [rbp-14h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  card_guid_vec = __closure->__card_guid_vec;
  __x[0] = GCGCard::getGuid(card);
  std::vector<unsigned int>::push_back(card_guid_vec, __x);
  return 0;
};

// Line 1042: range 000000000E2F6338-000000000E2F639A
ForeachPolicy __cdecl GCGSkillLogic::getTargetCardVecByControllerId(GCGSkillUseParam const&,std::shared_ptr<GCGCard>,proto::GCGControllerValue,data::GCGChooseTargetCharaterType,std::vector<unsigned int> &)::{lambda(GCGCard&)#2}::operator()(
        const GCGSkillLogic::getTargetCardVecByControllerId::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  std::vector<unsigned int> *card_guid_vec; // rbx
  std::vector<unsigned int>::value_type __x[5]; // [rsp+1Ch] [rbp-14h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  card_guid_vec = __closure->__card_guid_vec;
  __x[0] = GCGCard::getGuid(card);
  std::vector<unsigned int>::push_back(card_guid_vec, __x);
  return 0;
};

// Line 1083: range 000000000E2F639C-000000000E2F6545
ForeachPolicy __cdecl GCGSkillLogic::getTargetCardVecByControllerId(GCGSkillUseParam const&,std::shared_ptr<GCGCard>,proto::GCGControllerValue,data::GCGChooseTargetCharaterType,std::vector<unsigned int> &)::{lambda(GCGCard&)#3}::operator()(
        const GCGSkillLogic::getTargetCardVecByControllerId::<lambda(GCGCard&)>_0 *const __closure,
        GCGCard *card)
{
  uint32_t Guid; // ecx
  int32_t *choose_hurt_max_num; // rdx
  int32_t *v5; // rdx
  uint32_t *choose_hurt_max_guid; // rbx
  uint32_t v7; // ecx
  int32_t cur_hurt_num; // [rsp+1Ch] [rbp-14h]

  Guid = GCGCard::getGuid(card);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__cur_onstage_character_guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__cur_onstage_character_guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&__closure->__cur_onstage_character_guid);
  }
  if ( Guid == __closure->__cur_onstage_character_guid )
    return 0;
  cur_hurt_num = GCGCard::getHurtNum(card);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__choose_hurt_max_num >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__choose_hurt_max_num);
  choose_hurt_max_num = __closure->__choose_hurt_max_num;
  if ( *(_BYTE *)(((unsigned __int64)choose_hurt_max_num >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)choose_hurt_max_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)choose_hurt_max_num >> 3)
                                                                          + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__choose_hurt_max_num);
  }
  if ( cur_hurt_num > *choose_hurt_max_num )
  {
    v5 = __closure->__choose_hurt_max_num;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(__closure->__choose_hurt_max_num);
    }
    *v5 = cur_hurt_num;
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    choose_hurt_max_guid = __closure->__choose_hurt_max_guid;
    v7 = GCGCard::getGuid(card);
    if ( *(_BYTE *)(((unsigned __int64)choose_hurt_max_guid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)choose_hurt_max_guid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)choose_hurt_max_guid >> 3)
                                                                             + 0x7FFF8000) )
    {
      __asan_report_store4(choose_hurt_max_guid);
    }
    *choose_hurt_max_guid = v7;
  }
  return 0;
};

// Line 1113: range 000000000E2F6546-000000000E2F6693
ForeachPolicy __cdecl GCGSkillLogic::getTargetCardVecByControllerId(GCGSkillUseParam const&,std::shared_ptr<GCGCard>,proto::GCGControllerValue,data::GCGChooseTargetCharaterType,std::vector<unsigned int> &)::{lambda(GCGCard&)#4}::operator()(
        const GCGSkillLogic::getTargetCardVecByControllerId::<lambda(GCGCard&)>_1 *const __closure,
        GCGCard *card)
{
  int32_t *choose_hurt_max_num; // rdx
  int32_t *v3; // rdx
  uint32_t *choose_hurt_max_guid; // rbx
  uint32_t Guid; // ecx
  int32_t cur_hurt_num; // [rsp+1Ch] [rbp-14h]

  cur_hurt_num = GCGCard::getHurtNum(card);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__choose_hurt_max_num >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__choose_hurt_max_num);
  choose_hurt_max_num = __closure->__choose_hurt_max_num;
  if ( *(_BYTE *)(((unsigned __int64)choose_hurt_max_num >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)choose_hurt_max_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)choose_hurt_max_num >> 3)
                                                                          + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__choose_hurt_max_num);
  }
  if ( cur_hurt_num > *choose_hurt_max_num )
  {
    v3 = __closure->__choose_hurt_max_num;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(__closure->__choose_hurt_max_num);
    }
    *v3 = cur_hurt_num;
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    choose_hurt_max_guid = __closure->__choose_hurt_max_guid;
    Guid = GCGCard::getGuid(card);
    if ( *(_BYTE *)(((unsigned __int64)choose_hurt_max_guid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)choose_hurt_max_guid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)choose_hurt_max_guid >> 3)
                                                                             + 0x7FFF8000) )
    {
      __asan_report_store4(choose_hurt_max_guid);
    }
    *choose_hurt_max_guid = Guid;
  }
  return 0;
};

// Line 1183: range 000000000E2F6694-000000000E2F6863
ForeachPolicy __cdecl GCGSkillLogic::getTargetCardVecByControllerId(GCGSkillUseParam const&,std::shared_ptr<GCGCard>,proto::GCGControllerValue,data::GCGChooseTargetCharaterType,std::vector<unsigned int> &)::{lambda(GCGCard&)#5}::operator()(
        const GCGSkillLogic::getTargetCardVecByControllerId::<lambda(GCGCard&)>_2 *const __closure,
        GCGCard *card)
{
  uint32_t Guid; // ecx
  char v3; // al
  std::vector<unsigned int> *temp_guid_vec; // rbx
  uint32_t v6; // ecx
  int v7; // ecx
  uint32_t *target_index; // rdx
  uint32_t v9; // esi
  std::vector<unsigned int>::value_type __x[5]; // [rsp+1Ch] [rbp-14h] BYREF

  if ( GCGCard::isAlive(card) )
    goto LABEL_6;
  Guid = GCGCard::getGuid(card);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(__closure);
  }
  if ( Guid == __closure->__target_guid )
LABEL_6:
    v3 = 0;
  else
    v3 = 1;
  if ( v3 )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__temp_guid_vec >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__temp_guid_vec);
  temp_guid_vec = __closure->__temp_guid_vec;
  __x[0] = GCGCard::getGuid(card);
  std::vector<unsigned int>::push_back(temp_guid_vec, __x);
  v6 = GCGCard::getGuid(card);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(__closure);
  }
  if ( v6 == __closure->__target_guid )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__temp_guid_vec >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__temp_guid_vec);
    v7 = std::vector<unsigned int>::size(__closure->__temp_guid_vec);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__target_index >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__target_index);
    target_index = __closure->__target_index;
    v9 = v7 - 1;
    if ( *(_BYTE *)(((unsigned __int64)target_index >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)target_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)target_index >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(__closure->__target_index);
    }
    *target_index = v9;
  }
  return 0;
};

// Line 1224: range 000000000E2F6864-000000000E2F6918
ForeachPolicy __cdecl GCGSkillLogic::getTargetCardVecByControllerId(GCGSkillUseParam const&,std::shared_ptr<GCGCard>,proto::GCGControllerValue,data::GCGChooseTargetCharaterType,std::vector<unsigned int> &)::{lambda(GCGCard&)#6}::operator()(
        const GCGSkillLogic::getTargetCardVecByControllerId::<lambda(GCGCard&)>_3 *const __closure,
        GCGCard *card)
{
  uint32_t Guid; // ecx
  std::vector<unsigned int> *card_guid_vec; // rbx
  std::vector<unsigned int>::value_type __x[5]; // [rsp+1Ch] [rbp-14h] BYREF

  Guid = GCGCard::getGuid(card);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(__closure);
  }
  if ( Guid != __closure->__exclude_guid )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__card_guid_vec >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__card_guid_vec);
    card_guid_vec = __closure->__card_guid_vec;
    __x[0] = GCGCard::getGuid(card);
    std::vector<unsigned int>::push_back(card_guid_vec, __x);
  }
  return 0;
};

// Line 1236: range 000000000E2F691A-000000000E2F698F
ForeachPolicy __cdecl GCGSkillLogic::getTargetCardVecByControllerId(GCGSkillUseParam const&,std::shared_ptr<GCGCard>,proto::GCGControllerValue,data::GCGChooseTargetCharaterType,std::vector<unsigned int> &)::{lambda(GCGCard&)#7}::operator()(
        const GCGSkillLogic::getTargetCardVecByControllerId::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  std::vector<unsigned int> *card_guid_vec; // rbx
  std::vector<unsigned int>::value_type __x[5]; // [rsp+1Ch] [rbp-14h] BYREF

  if ( !GCGCard::isEnergyFull(card) )
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    card_guid_vec = __closure->__card_guid_vec;
    __x[0] = GCGCard::getGuid(card);
    std::vector<unsigned int>::push_back(card_guid_vec, __x);
  }
  return 0;
};

// Line 1275: range 000000000E2F6990-000000000E2F6A44
ForeachPolicy __cdecl GCGSkillLogic::getTargetCardVecByControllerId(GCGSkillUseParam const&,std::shared_ptr<GCGCard>,proto::GCGControllerValue,data::GCGChooseTargetCharaterType,std::vector<unsigned int> &)::{lambda(GCGCard&)#8}::operator()(
        const GCGSkillLogic::getTargetCardVecByControllerId::<lambda(GCGCard&)>_3 *const __closure,
        GCGCard *card)
{
  uint32_t Guid; // ecx
  std::vector<unsigned int> *card_guid_vec; // rbx
  std::vector<unsigned int>::value_type __x[5]; // [rsp+1Ch] [rbp-14h] BYREF

  Guid = GCGCard::getGuid(card);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(__closure);
  }
  if ( Guid != __closure->__exclude_guid )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__card_guid_vec >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__card_guid_vec);
    card_guid_vec = __closure->__card_guid_vec;
    __x[0] = GCGCard::getGuid(card);
    std::vector<unsigned int>::push_back(card_guid_vec, __x);
  }
  return 0;
};

// Line 1314: range 000000000E2F8384-000000000E2F8628
int32_t __cdecl GCGSkillLogic::getTargetCardVec(
        GCGSkillLogic *const this,
        const GCGSkillUseParam *skill_param,
        GCGCardPtr *p_this_card_ptr,
        data::GCGEffectCampType camp_type,
        data::GCGChooseTargetCharaterType target_charater_type,
        GCGControllerValue cur_controller_id,
        std::vector<unsigned int> *card_guid_vec)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  _DWORD *v9; // r12
  int32_t v10; // r14d
  __gnu_cxx::__normal_iterator<proto::GCGControllerValue*,std::vector<proto::GCGControllerValue> >::reference v11; // rax
  proto::GCGControllerValue *v12; // rdx
  int32_t result; // eax
  proto::GCGControllerValue controller_id; // [rsp+34h] [rbp-BCh]
  std::vector<proto::GCGControllerValue>::iterator __for_begin; // [rsp+38h] [rbp-B8h] BYREF
  std::vector<proto::GCGControllerValue>::iterator __for_end; // [rsp+40h] [rbp-B0h] BYREF
  std::vector<proto::GCGControllerValue> *__for_range; // [rsp+48h] [rbp-A8h]
  std::shared_ptr<GCGCard> v22; // [rsp+50h] [rbp-A0h] BYREF
  char v23[144]; // [rsp+60h] [rbp-90h] BYREF

  v7 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(96LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 24 31 alternative_controller_vec:1315";
  *(_QWORD *)(v7 + 16) = GCGSkillLogic::getTargetCardVec;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -218103808;
  v9[536862722] = -202116109;
  std::vector<proto::GCGControllerValue>::vector((std::vector<proto::GCGControllerValue> *const)(v7 + 32));
  if ( GCGSkillLogic::getControllerVecByCampType(
         this,
         cur_controller_id,
         camp_type,
         (std::vector<proto::GCGControllerValue> *)(v7 + 32)) )
  {
    v10 = -1;
  }
  else
  {
    __for_range = (std::vector<proto::GCGControllerValue> *)(v7 + 32);
    __for_begin._M_current = std::vector<proto::GCGControllerValue>::begin((std::vector<proto::GCGControllerValue> *const)(v7 + 32))._M_current;
    __for_end._M_current = std::vector<proto::GCGControllerValue>::end((std::vector<proto::GCGControllerValue> *const)(v7 + 32))._M_current;
    while ( __gnu_cxx::operator!=<proto::GCGControllerValue *,std::vector<proto::GCGControllerValue>>(
              &__for_begin,
              &__for_end) )
    {
      v11 = __gnu_cxx::__normal_iterator<proto::GCGControllerValue *,std::vector<proto::GCGControllerValue>>::operator*(&__for_begin);
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      controller_id = *v12;
      std::shared_ptr<GCGCard>::shared_ptr(&v22, p_this_card_ptr);
      GCGSkillLogic::getTargetCardVecByControllerId(
        this,
        skill_param,
        &v22,
        controller_id,
        target_charater_type,
        card_guid_vec);
      std::shared_ptr<GCGCard>::~shared_ptr(&v22);
      __gnu_cxx::__normal_iterator<proto::GCGControllerValue *,std::vector<proto::GCGControllerValue>>::operator++(&__for_begin);
    }
    v10 = 0;
  }
  std::vector<proto::GCGControllerValue>::~vector((std::vector<proto::GCGControllerValue> *const)(v7 + 32));
  result = v10;
  if ( v23 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1330: range 000000000E2F862A-000000000E2F98EC
int32_t __cdecl GCGSkillLogic::addDice(
        GCGSkillLogic *const this,
        GCGControllerValue controller_id,
        data::GCGEffectCampType camp_type,
        GCGCardPtr *p_this_card_ptr,
        data::GCGEffectDiceType effect_dice_type,
        uint32_t dice_num)
{
  int32_t v6; // r14d
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  common::milog::MiLogStream *v10; // rax
  __gnu_cxx::__normal_iterator<proto::GCGControllerValue*,std::vector<proto::GCGControllerValue> >::reference v11; // rax
  proto::GCGControllerValue *v12; // rdx
  GCGDuel *Duel; // rax
  int v14; // r15d
  GCGCard *v15; // rax
  common::milog::MiLogStream *v16; // rax
  proto::GCGDiceSideType *v17; // rax
  GCGDiceSideType *v18; // rdx
  _BOOL4 v19; // r15d
  GCGCard *v20; // rax
  common::milog::MiLogStream *v21; // rax
  proto::GCGDiceSideType *v22; // rax
  GCGDiceSideType *v23; // rdx
  __gnu_cxx::__normal_iterator<proto::GCGDiceSideType*,std::vector<proto::GCGDiceSideType> >::reference v24; // rax
  _DWORD *v25; // rdx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  int v28; // r15d
  std::vector<proto::GCGDiceSideType>::reference v29; // rax
  GCGDiceSideType *v30; // rdx
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  int v33; // r15d
  GCGCard *v34; // rax
  common::milog::MiLogStream *v35; // rax
  proto::GCGDiceSideType *v36; // rax
  GCGDiceSideType *v37; // rdx
  GCGDuel *v38; // rax
  int v39; // r15d
  GCGCard *v40; // rax
  common::milog::MiLogStream *v41; // rax
  proto::GCGDiceSideType *v42; // rax
  GCGDiceSideType *v43; // rdx
  GCGDiceZone *DiceZone; // rax
  int32_t result; // eax
  GCGDiceSideType dice_type; // [rsp+38h] [rbp-238h]
  uint32_t side_index; // [rsp+3Ch] [rbp-234h]
  proto::GCGControllerValue controller_id_0; // [rsp+40h] [rbp-230h]
  data::GCGEffectElementType element_type_2; // [rsp+44h] [rbp-22Ch]
  data::GCGEffectElementType element_type_1; // [rsp+48h] [rbp-228h]
  data::GCGEffectElementType element_type_0; // [rsp+4Ch] [rbp-224h]
  GCGDiceSideType cur_onstage_side_type; // [rsp+50h] [rbp-220h]
  data::GCGEffectElementType element_type; // [rsp+5Ch] [rbp-214h]
  std::vector<proto::GCGControllerValue>::iterator __for_begin; // [rsp+60h] [rbp-210h] BYREF
  std::vector<proto::GCGControllerValue>::iterator __for_end; // [rsp+68h] [rbp-208h] BYREF
  std::vector<proto::GCGDiceSideType>::iterator __for_begin_0; // [rsp+70h] [rbp-200h] BYREF
  std::vector<proto::GCGDiceSideType>::iterator __for_end_0; // [rsp+78h] [rbp-1F8h] BYREF
  std::vector<proto::GCGControllerValue> *__for_range; // [rsp+80h] [rbp-1F0h]
  GCGField *field; // [rsp+88h] [rbp-1E8h]
  GCGField *field_0; // [rsp+90h] [rbp-1E0h]
  std::vector<proto::GCGDiceSideType> *__for_range_0; // [rsp+98h] [rbp-1D8h]
  common::milog::MiLogStream v66; // [rsp+A0h] [rbp-1D0h] BYREF
  char v67[432]; // [rsp+C0h] [rbp-1B0h] BYREF

  v7 = (unsigned __int64)v67;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_3(384LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "7 48 4 26 alternative_side_type:1429 64 8 23 side_dice_type_opt:1482 96 16 13 card_ptr:1475 128 "
                        "24 31 alternative_controller_vec:1331 192 24 25 alternative_side_vec:1426 256 24 15 result_vec:1"
                        "436 320 24 20 result_uint_vec:1439";
  *(_QWORD *)(v7 + 16) = GCGSkillLogic::addDice;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234556943;
  v9[536862722] = -218959360;
  v9[536862723] = -219021312;
  v9[536862724] = -234881024;
  v9[536862725] = -218959118;
  v9[536862726] = -234881024;
  v9[536862727] = -218959118;
  v9[536862728] = -234881024;
  v9[536862729] = -218959118;
  v9[536862730] = -218103808;
  v9[536862731] = -202116109;
  std::vector<proto::GCGControllerValue>::vector((std::vector<proto::GCGControllerValue> *const)(v7 + 128));
  if ( GCGSkillLogic::getControllerVecByCampType(
         this,
         controller_id,
         camp_type,
         (std::vector<proto::GCGControllerValue> *)(v7 + 128)) )
  {
    common::milog::MiLogStream::create(
      &v66,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_skill_logic.cpp",
      "addDice",
      1334);
    v10 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            &v66,
            (const char (*)[33])"addDice camp_type is not valid, ");
    *(_DWORD *)(v7 + 48) = camp_type;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v7 + 48));
    common::milog::MiLogStream::~MiLogStream(&v66);
    v6 = -1;
  }
  else
  {
    dice_type = GCG_DICE_SIDE_INVALID;
    switch ( effect_dice_type )
    {
      case EFFECT_DICE_ANY:
        dice_type = GCG_DICE_SIDE_PAIMON;
        break;
      case EFFECT_DICE_CRYO:
        dice_type = GCG_DICE_SIDE_CRYO;
        break;
      case EFFECT_DICE_HYDRO:
        dice_type = GCG_DICE_SIDE_HYDRO;
        break;
      case EFFECT_DICE_PYRO:
        dice_type = GCG_DICE_SIDE_PYRO;
        break;
      case EFFECT_DICE_ELECTRO:
        dice_type = GCG_DICE_SIDE_ELECTRO;
        break;
      case EFFECT_DICE_GEO:
        dice_type = GCG_DICE_SIDE_GEO;
        break;
      case EFFECT_DICE_DENDRO:
        dice_type = GCG_DICE_SIDE_DENDRO;
        break;
      case EFFECT_DICE_ANEMO:
        dice_type = GCG_DICE_SIDE_ANEMO;
        break;
      default:
        break;
    }
    __for_range = (std::vector<proto::GCGControllerValue> *)(v7 + 128);
    __for_begin._M_current = std::vector<proto::GCGControllerValue>::begin((std::vector<proto::GCGControllerValue> *const)(v7 + 128))._M_current;
    __for_end._M_current = std::vector<proto::GCGControllerValue>::end((std::vector<proto::GCGControllerValue> *const)(v7 + 128))._M_current;
    while ( __gnu_cxx::operator!=<proto::GCGControllerValue *,std::vector<proto::GCGControllerValue>>(
              &__for_begin,
              &__for_end) )
    {
      v11 = __gnu_cxx::__normal_iterator<proto::GCGControllerValue *,std::vector<proto::GCGControllerValue>>::operator*(&__for_begin);
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      controller_id_0 = *v12;
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      Duel = GCGGameMode::getDuel(this->game_mode_);
      field = GCGDuel::getField(Duel, controller_id_0);
      switch ( effect_dice_type )
      {
        case EFFECT_DICE_SAME_ONSTAGE:
          GCGField::getCharacterZone(field);
          GCGCharacterZone::getOnStageCard((GCGCharacterZone *const)(v7 + 96));
          if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v7 + 96), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v66,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/card_game/skill/gcg_skill_logic.cpp",
              "addDice",
              1396);
            common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v66,
              (const char (*)[36])"addDice onstage_card_ptr is nullptr");
            common::milog::MiLogStream::~MiLogStream(&v66);
            v6 = -1;
            v14 = 0;
          }
          else
          {
            v15 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 96));
            element_type = GCGCard::getElementType(v15);
            *(_QWORD *)(v7 + 64) = GCGUtils::elementCover<proto::GCGDiceSideType,data::GCGEffectElementType>(
                                     element_type,
                                     0);
            if ( !std::optional<proto::GCGDiceSideType>::has_value((const std::optional<proto::GCGDiceSideType> *const)(v7 + 64)) )
            {
              common::milog::MiLogStream::create(
                &v66,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/card_game/skill/gcg_skill_logic.cpp",
                "addDice",
                1403);
              v16 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                      &v66,
                      (const char (*)[51])"elementCover fail. GCGEffectDiceType element_type:");
              *(_DWORD *)(v7 + 48) = element_type;
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v7 + 48));
              common::milog::MiLogStream::~MiLogStream(&v66);
              v6 = -1;
              v14 = 0;
            }
            else
            {
              v17 = std::optional<proto::GCGDiceSideType>::value((std::optional<proto::GCGDiceSideType> *const)(v7 + 64));
              v18 = v17;
              if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v17);
              }
              dice_type = *v18;
              v14 = 1;
            }
          }
          std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v7 + 96));
          if ( v14 != 1 )
            goto LABEL_89;
          break;
        case EFFECT_DICE_DIFF_ONSTAGE:
          GCGField::getCharacterZone(field);
          GCGCharacterZone::getOnStageCard((GCGCharacterZone *const)(v7 + 96));
          if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v7 + 96), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v66,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/card_game/skill/gcg_skill_logic.cpp",
              "addDice",
              1413);
            common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v66,
              (const char (*)[36])"addDice onstage_card_ptr is nullptr");
            common::milog::MiLogStream::~MiLogStream(&v66);
            v6 = -1;
            v19 = 0;
          }
          else
          {
            v20 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 96));
            element_type_0 = GCGCard::getElementType(v20);
            *(_QWORD *)(v7 + 64) = GCGUtils::elementCover<proto::GCGDiceSideType,data::GCGEffectElementType>(
                                     element_type_0,
                                     0);
            if ( !std::optional<proto::GCGDiceSideType>::has_value((const std::optional<proto::GCGDiceSideType> *const)(v7 + 64)) )
            {
              common::milog::MiLogStream::create(
                &v66,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/card_game/skill/gcg_skill_logic.cpp",
                "addDice",
                1420);
              v21 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                      &v66,
                      (const char (*)[59])"addDice elementCover fail. GCGEffectDiceType element_type:");
              *(_DWORD *)(v7 + 48) = element_type_0;
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                (const unsigned int *)(v7 + 48));
              common::milog::MiLogStream::~MiLogStream(&v66);
              v6 = -1;
              v19 = 0;
            }
            else
            {
              v22 = std::optional<proto::GCGDiceSideType>::value((std::optional<proto::GCGDiceSideType> *const)(v7 + 64));
              v23 = v22;
              if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v22);
              }
              cur_onstage_side_type = *v23;
              std::vector<proto::GCGDiceSideType>::vector((std::vector<proto::GCGDiceSideType> *const)(v7 + 192));
              for ( side_index = 0; side_index <= 7; ++side_index )
              {
                *(_DWORD *)(v7 + 48) = side_index + 1;
                if ( cur_onstage_side_type != *(_DWORD *)(v7 + 48) )
                  std::vector<proto::GCGDiceSideType>::push_back(
                    (std::vector<proto::GCGDiceSideType> *const)(v7 + 192),
                    (const std::vector<proto::GCGDiceSideType>::value_type *)(v7 + 48));
              }
              std::vector<proto::GCGDiceSideType>::vector((std::vector<proto::GCGDiceSideType> *const)(v7 + 256));
              if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->game_mode_);
              GCGUtils::randomSelect<proto::GCGDiceSideType,GCGGameMode>(
                (const std::vector<proto::GCGDiceSideType> *)(v7 + 192),
                (std::vector<proto::GCGDiceSideType> *)(v7 + 256),
                1u,
                this->game_mode_);
              std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v7 + 320));
              __for_range_0 = (std::vector<proto::GCGDiceSideType> *)(v7 + 256);
              __for_begin_0._M_current = std::vector<proto::GCGDiceSideType>::begin((std::vector<proto::GCGDiceSideType> *const)(v7 + 256))._M_current;
              __for_end_0._M_current = std::vector<proto::GCGDiceSideType>::end(__for_range_0)._M_current;
              while ( __gnu_cxx::operator!=<proto::GCGDiceSideType *,std::vector<proto::GCGDiceSideType>>(
                        &__for_begin_0,
                        &__for_end_0) )
              {
                v24 = __gnu_cxx::__normal_iterator<proto::GCGDiceSideType *,std::vector<proto::GCGDiceSideType>>::operator*(&__for_begin_0);
                v25 = v24;
                if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v24);
                }
                *(_DWORD *)(v7 + 48) = *v25;
                std::vector<unsigned int>::push_back(
                  (std::vector<unsigned int> *const)(v7 + 320),
                  (std::vector<unsigned int>::value_type *)(v7 + 48));
                __gnu_cxx::__normal_iterator<proto::GCGDiceSideType *,std::vector<proto::GCGDiceSideType>>::operator++(&__for_begin_0);
              }
              common::milog::MiLogStream::create(
                &v66,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/card_game/skill/gcg_skill_logic.cpp",
                "addDice",
                1441);
              v26 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      &v66,
                      (const char (*)[22])"[RANDOM] result_vec: ");
              common::milog::MiLogStream::operator<<<unsigned int>(v26, (const std::vector<unsigned int> *)(v7 + 320));
              common::milog::MiLogStream::~MiLogStream(&v66);
              std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v7 + 320));
              if ( std::vector<proto::GCGDiceSideType>::size((const std::vector<proto::GCGDiceSideType> *const)(v7 + 256)) == 1 )
              {
                v29 = std::vector<proto::GCGDiceSideType>::operator[](
                        (std::vector<proto::GCGDiceSideType> *const)(v7 + 256),
                        0LL);
                v30 = v29;
                if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v29);
                }
                dice_type = *v30;
                v28 = 1;
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v66,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/card_game/skill/gcg_skill_logic.cpp",
                  "addDice",
                  1445);
                v27 = common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(
                        &v66,
                        (const char (*)[78])"addDice gen random side type diff with onstage failed, cur_onstage_side_type:");
                *(_DWORD *)(v7 + 48) = cur_onstage_side_type;
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v27,
                  (const unsigned int *)(v7 + 48));
                common::milog::MiLogStream::~MiLogStream(&v66);
                v6 = -1;
                v28 = 0;
              }
              std::vector<proto::GCGDiceSideType>::~vector((std::vector<proto::GCGDiceSideType> *const)(v7 + 256));
              std::vector<proto::GCGDiceSideType>::~vector((std::vector<proto::GCGDiceSideType> *const)(v7 + 192));
              v19 = v28 == 1;
            }
          }
          std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v7 + 96));
          if ( !v19 )
            goto LABEL_89;
          break;
        case EFFECT_DICE_SAME_MODIFIED:
          if ( std::operator==<GCGCard>(0LL, p_this_card_ptr) )
          {
            common::milog::MiLogStream::create(
              &v66,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/card_game/skill/gcg_skill_logic.cpp",
              "addDice",
              1454);
            common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v66,
              (const char (*)[33])"addDice this_card_ptr is nullptr");
            common::milog::MiLogStream::~MiLogStream(&v66);
            v6 = -1;
            goto LABEL_89;
          }
          std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_this_card_ptr);
          GCGCard::getOwnerCard((GCGCard *const)(v7 + 96));
          if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v7 + 96))
            || (v31 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 96)),
                !GCGCard::isAlive(v31)) )
          {
            common::milog::MiLogStream::create(
              &v66,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/card_game/skill/gcg_skill_logic.cpp",
              "addDice",
              1460);
            common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              &v66,
              (const char (*)[47])"addDice owner_card_ptr is nullptr or not alive");
            common::milog::MiLogStream::~MiLogStream(&v66);
            v6 = -1;
            v33 = 0;
          }
          else
          {
            v34 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 96));
            element_type_1 = GCGCard::getElementType(v34);
            *(_QWORD *)(v7 + 64) = GCGUtils::elementCover<proto::GCGDiceSideType,data::GCGEffectElementType>(
                                     element_type_1,
                                     (std::nullopt_t)(v7 + 96));
            if ( !std::optional<proto::GCGDiceSideType>::has_value((const std::optional<proto::GCGDiceSideType> *const)(v7 + 64)) )
            {
              common::milog::MiLogStream::create(
                &v66,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/card_game/skill/gcg_skill_logic.cpp",
                "addDice",
                1467);
              v35 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                      &v66,
                      (const char (*)[51])"elementCover fail. GCGEffectDiceType element_type:");
              *(_DWORD *)(v7 + 48) = element_type_1;
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v35,
                (const unsigned int *)(v7 + 48));
              common::milog::MiLogStream::~MiLogStream(&v66);
              v6 = -1;
              v33 = 0;
            }
            else
            {
              v36 = std::optional<proto::GCGDiceSideType>::value((std::optional<proto::GCGDiceSideType> *const)(v7 + 64));
              v37 = v36;
              if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v36 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v36);
              }
              dice_type = *v37;
              v33 = 1;
            }
          }
          std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v7 + 96));
          if ( v33 != 1 )
            goto LABEL_89;
          break;
        case EFFECT_DICE_NEXT_BACKSTAGE_CHARACTER:
          if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->game_mode_);
          v38 = GCGGameMode::getDuel(this->game_mode_);
          field_0 = GCGDuel::getField(v38, controller_id_0);
          GCGField::getCharacterZone(field_0);
          GCGCharacterZone::getNextBackStageCard((GCGCharacterZone *const)(v7 + 96));
          if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v7 + 96)) )
          {
            common::milog::MiLogStream::create(
              &v66,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/card_game/skill/gcg_skill_logic.cpp",
              "addDice",
              1478);
            common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v66,
              (const char (*)[26])"NextBackStageCard is null");
            common::milog::MiLogStream::~MiLogStream(&v66);
            v6 = -1;
            v39 = 0;
          }
          else
          {
            v40 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 96));
            element_type_2 = GCGCard::getElementType(v40);
            *(_QWORD *)(v7 + 64) = GCGUtils::elementCover<proto::GCGDiceSideType,data::GCGEffectElementType>(
                                     element_type_2,
                                     (std::nullopt_t)(v7 + 96));
            if ( !std::optional<proto::GCGDiceSideType>::has_value((const std::optional<proto::GCGDiceSideType> *const)(v7 + 64)) )
            {
              common::milog::MiLogStream::create(
                &v66,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/card_game/skill/gcg_skill_logic.cpp",
                "addDice",
                1485);
              v41 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                      &v66,
                      (const char (*)[51])"elementCover fail. GCGEffectDiceType element_type:");
              *(_DWORD *)(v7 + 48) = element_type_2;
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v41,
                (const unsigned int *)(v7 + 48));
              common::milog::MiLogStream::~MiLogStream(&v66);
              v6 = -1;
              v39 = 0;
            }
            else
            {
              v42 = std::optional<proto::GCGDiceSideType>::value((std::optional<proto::GCGDiceSideType> *const)(v7 + 64));
              v43 = v42;
              if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v42 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v42);
              }
              dice_type = *v43;
              v39 = 1;
            }
          }
          std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v7 + 96));
          if ( v39 != 1 )
            goto LABEL_89;
          break;
      }
      if ( dice_type == GCG_DICE_SIDE_INVALID )
      {
        common::milog::MiLogStream::create(
          &v66,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/skill/gcg_skill_logic.cpp",
          "addDice",
          1492);
        common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v66, (const char (*)[14])off_1BD944C0);
        common::milog::MiLogStream::~MiLogStream(&v66);
        break;
      }
      DiceZone = GCGField::getDiceZone(field);
      GCGDiceZone::addDice(DiceZone, dice_type, dice_num, GCG_REASON_EFFECT);
      __gnu_cxx::__normal_iterator<proto::GCGControllerValue *,std::vector<proto::GCGControllerValue>>::operator++(&__for_begin);
    }
    v6 = 0;
  }
LABEL_89:
  std::vector<proto::GCGControllerValue>::~vector((std::vector<proto::GCGControllerValue> *const)(v7 + 128));
  result = v6;
  if ( v67 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8028) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1502: range 000000000E2F9A0E-000000000E2F9AC3
int32_t __cdecl GCGSkillLogic::getPlayerCardGuidVecByCardType(
        const GCGSkillLogic *const this,
        GCGField *field,
        GCGCardType card_type,
        GCGTagType tag_type,
        std::vector<unsigned int> *card_guid_vec)
{
  unsigned __int64 v5; // rcx
  std::function<ForeachPolicy(const GCGCard&)> p_func; // [rsp+30h] [rbp-30h] BYREF
  GCGSkillLogic::getPlayerCardGuidVecByCardType::<lambda(const GCGCard&)> v9; // 0:rsi.8,8:rdx.8

  v5 = (unsigned int)card_type | ((unsigned __int64)(unsigned int)tag_type << 32);
  v9.__card_guid_vec = card_guid_vec;
  *(_QWORD *)&v9.__card_type = v5;
  std::function<ForeachPolicy ()(GCGCard const&)>::function<GCGSkillLogic::getPlayerCardGuidVecByCardType(GCGField &,data::GCGCardType,data::GCGTagType,std::vector<unsigned int> &)::{lambda(GCGCard const&)#1},void,void>(
    &p_func,
    v9);
  GCGField::foreachStageCard(field, &p_func);
  std::function<ForeachPolicy ()(GCGCard const&)>::~function(&p_func);
  return 0;
};

// Line 1505: range 000000000E2F98EE-000000000E2F9A0C
ForeachPolicy __cdecl GCGSkillLogic::getPlayerCardGuidVecByCardType(GCGField &,data::GCGCardType,data::GCGTagType,std::vector<unsigned int> &)const::{lambda(GCGCard const&)#1}::operator()(
        const GCGSkillLogic::getPlayerCardGuidVecByCardType::<lambda(const GCGCard&)> *const __closure,
        const GCGCard *card)
{
  GCGCardType CardType; // ecx
  char v3; // al
  std::vector<unsigned int> *card_guid_vec; // rbx
  std::vector<unsigned int>::value_type __x[5]; // [rsp+1Ch] [rbp-14h] BYREF

  CardType = GCGCard::getCardType(card);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(__closure);
  }
  if ( CardType != __closure->__card_type )
    goto LABEL_9;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__tag_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)__closure + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__closure->__tag_type >> 3)
                                                            + 0x7FFF8000) )
  {
    __asan_report_load4(&__closure->__tag_type);
  }
  if ( __closure->__tag_type == GCG_TAG_NONE || GCGCard::isHasTag(card, __closure->__tag_type) )
    v3 = 1;
  else
LABEL_9:
    v3 = 0;
  if ( v3 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__card_guid_vec >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__card_guid_vec);
    card_guid_vec = __closure->__card_guid_vec;
    __x[0] = GCGCard::getGuid(card);
    std::vector<unsigned int>::push_back(card_guid_vec, __x);
  }
  return 0;
};

// Line 1517: range 000000000E2F9AC4-000000000E2FB265
__int64 __fastcall GCGSkillLogic::changeCardVarHandler(
        GCGSkillLogic *const this,
        GCGControllerValue cur_controller_id,
        unsigned __int64 change_var_param,
        const GCGSkillUseParam *param)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  unsigned int v10; // r14d
  __gnu_cxx::__normal_iterator<proto::GCGControllerValue*,std::vector<proto::GCGControllerValue> >::reference v11; // rax
  proto::GCGControllerValue *v12; // rdx
  GCGDuel *Duel; // rax
  GCGTagType v14; // ecx
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v15; // rax
  _DWORD *v16; // rdx
  GCGCardMgr *CardMgr; // rax
  common::milog::MiLogStream *v18; // rax
  bool v19; // r15
  GCGTokenType v20; // r14d
  bool v21; // r15
  GCGTokenType v22; // r14d
  bool v23; // r15
  GCGTokenType v24; // r14d
  std::vector<unsigned int>::reference v25; // rax
  _DWORD *v26; // rdx
  GCGCardMgr *v27; // rax
  common::milog::MiLogStream *v28; // rax
  bool v29; // r15
  GCGTokenType v30; // r14d
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v31; // rax
  _DWORD *v32; // rdx
  GCGCardMgr *v33; // rax
  common::milog::MiLogStream *v34; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  __int64 result; // rax
  data::GCGValueOperatorType type; // [rsp+Ch] [rbp-1C4h]
  data::GCGValueOperatorType typea; // [rsp+Ch] [rbp-1C4h]
  data::GCGValueOperatorType typeb; // [rsp+Ch] [rbp-1C4h]
  data::GCGValueOperatorType typec; // [rsp+Ch] [rbp-1C4h]
  uint32_t value; // [rsp+20h] [rbp-1B0h]
  uint32_t valuea; // [rsp+20h] [rbp-1B0h]
  uint32_t valueb; // [rsp+20h] [rbp-1B0h]
  uint32_t valuec; // [rsp+20h] [rbp-1B0h]
  int32_t ret; // [rsp+3Ch] [rbp-194h]
  uint32_t least_show_token_value; // [rsp+40h] [rbp-190h]
  GCGTokenType show_token_type; // [rsp+44h] [rbp-18Ch]
  uint32_t show_token_value; // [rsp+48h] [rbp-188h]
  proto::GCGControllerValue controller_id; // [rsp+4Ch] [rbp-184h]
  std::vector<proto::GCGControllerValue>::iterator __for_begin; // [rsp+50h] [rbp-180h] BYREF
  std::vector<proto::GCGControllerValue>::iterator __for_end; // [rsp+58h] [rbp-178h] BYREF
  std::vector<proto::GCGControllerValue> *__for_range; // [rsp+60h] [rbp-170h]
  std::vector<unsigned int> *__for_range_1; // [rsp+68h] [rbp-168h]
  std::vector<unsigned int> *__for_range_0; // [rsp+70h] [rbp-160h]
  GCGField *field; // [rsp+78h] [rbp-158h]
  common::milog::MiLogStream v59; // [rsp+80h] [rbp-150h] BYREF
  char v60[304]; // [rsp+A0h] [rbp-130h] BYREF

  v4 = (unsigned __int64)v60;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 32 4 21 target_card_guid:1593 48 4 22 cur_controller_id:1516 64 16 13 card_ptr:1591 96 16 20 t"
                        "arget_card_ptr:1595 128 24 31 alternative_controller_vec:1518 192 24 32 filter_alternative_guid_vec:1524";
  *(_QWORD *)(v4 + 16) = GCGSkillLogic::changeCardVarHandler;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862724] = -234881024;
  v6[536862725] = -218959118;
  v6[536862726] = -218103808;
  v6[536862727] = -202116109;
  *(_DWORD *)(v4 + 48) = cur_controller_id;
  std::vector<proto::GCGControllerValue>::vector((std::vector<proto::GCGControllerValue> *const)(v4 + 128));
  if ( *(_BYTE *)((change_var_param >> 3) + 0x7FFF8000) != 0
    && (char)((change_var_param & 7) + 3) >= *(_BYTE *)((change_var_param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(change_var_param);
  }
  if ( !GCGSkillLogic::getControllerVecByCampType(
          this,
          *(GCGControllerValue *)(v4 + 48),
          *(data::GCGEffectCampType *)change_var_param,
          (std::vector<proto::GCGControllerValue> *)(v4 + 128)) )
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 192));
    __for_range = (std::vector<proto::GCGControllerValue> *)(v4 + 128);
    __for_begin._M_current = std::vector<proto::GCGControllerValue>::begin((std::vector<proto::GCGControllerValue> *const)(v4 + 128))._M_current;
    __for_end._M_current = std::vector<proto::GCGControllerValue>::end((std::vector<proto::GCGControllerValue> *const)(v4 + 128))._M_current;
    while ( __gnu_cxx::operator!=<proto::GCGControllerValue *,std::vector<proto::GCGControllerValue>>(
              &__for_begin,
              &__for_end) )
    {
      v11 = __gnu_cxx::__normal_iterator<proto::GCGControllerValue *,std::vector<proto::GCGControllerValue>>::operator*(&__for_begin);
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      controller_id = *v12;
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      Duel = GCGGameMode::getDuel(this->game_mode_);
      field = GCGDuel::getField(Duel, controller_id);
      if ( *(_BYTE *)(((change_var_param + 12) >> 3) + 0x7FFF8000) != 0
        && (char)(((change_var_param + 12) & 7) + 3) >= *(_BYTE *)(((change_var_param + 12) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(change_var_param + 12);
      }
      v14 = *(_DWORD *)(change_var_param + 12);
      if ( *(_BYTE *)(((change_var_param + 4) >> 3) + 0x7FFF8000) != 0
        && (char)(((change_var_param + 4) & 7) + 3) >= *(_BYTE *)(((change_var_param + 4) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(change_var_param + 4);
      }
      GCGSkillLogic::getPlayerCardGuidVecByCardType(
        this,
        field,
        *(GCGCardType *)(change_var_param + 4),
        v14,
        (std::vector<unsigned int> *)(v4 + 192));
      __gnu_cxx::__normal_iterator<proto::GCGControllerValue *,std::vector<proto::GCGControllerValue>>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((change_var_param + 8) >> 3) + 0x7FFF8000) != 0
      && (char)(((change_var_param + 8) & 7) + 3) >= *(_BYTE *)(((change_var_param + 8) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(change_var_param + 8);
    }
    if ( !*(_DWORD *)(change_var_param + 8) )
    {
      if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v4 + 192)) )
      {
        common::milog::MiLogStream::create(
          &v59,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/skill/gcg_skill_logic.cpp",
          "changeCardVarHandler",
          1535);
        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
          &v59,
          (const char (*)[38])"filter_alternative_guid_vec is empty!");
        common::milog::MiLogStream::~MiLogStream(&v59);
        v10 = 0;
      }
      else
      {
        ret = 0;
        __for_range_0 = (std::vector<unsigned int> *)(v4 + 192);
        __for_begin._M_current = (proto::GCGControllerValue *)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v4 + 192))._M_current;
        __for_end._M_current = (proto::GCGControllerValue *)std::vector<unsigned int>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
        {
          v15 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
          v16 = v15;
          if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v15);
          }
          *(_DWORD *)(v4 + 32) = *v16;
          if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->game_mode_);
          CardMgr = GCGGameMode::getCardMgr(this->game_mode_);
          GCGCardMgr::findCard((GCGCardMgr *const)(v4 + 64), CardMgr, *(_DWORD *)(v4 + 32));
          if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v4 + 64), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v59,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/card_game/skill/gcg_skill_logic.cpp",
              "changeCardVarHandler",
              1544);
            v18 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                    &v59,
                    (const char (*)[20])off_1BD94740);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v4 + 32));
            common::milog::MiLogStream::~MiLogStream(&v59);
          }
          else
          {
            if ( *(_BYTE *)(((change_var_param + 28) >> 3) + 0x7FFF8000) != 0
              && (char)(((change_var_param + 28) & 7) + 3) >= *(_BYTE *)(((change_var_param + 28) >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(change_var_param + 28);
            }
            value = *(_DWORD *)(change_var_param + 28);
            if ( *(_BYTE *)(((change_var_param + 24) >> 3) + 0x7FFF8000) != 0
              && (char)(((change_var_param + 24) & 7) + 3) >= *(_BYTE *)(((change_var_param + 24) >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(change_var_param + 24);
            }
            type = *(_DWORD *)(change_var_param + 24);
            if ( *(_BYTE *)(((change_var_param + 20) >> 3) + 0x7FFF8000) != 0
              && (char)((change_var_param + 20) & 7) >= *(_BYTE *)(((change_var_param + 20) >> 3) + 0x7FFF8000) )
            {
              __asan_report_load1(change_var_param + 20);
            }
            v19 = *(_BYTE *)(change_var_param + 20);
            if ( *(_BYTE *)(((change_var_param + 16) >> 3) + 0x7FFF8000) != 0
              && (char)(((change_var_param + 16) & 7) + 3) >= *(_BYTE *)(((change_var_param + 16) >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(change_var_param + 16);
            }
            v20 = *(_DWORD *)(change_var_param + 16);
            std::shared_ptr<GCGCard>::shared_ptr(
              (std::shared_ptr<GCGCard> *const)(v4 + 96),
              (const std::shared_ptr<GCGCard> *)(v4 + 64));
            LOBYTE(v20) = GCGSkillLogic::changeCardVar(this, (GCGCardPtr *)(v4 + 96), v20, v19, type, value) != 0;
            std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 96));
            if ( (_BYTE)v20 )
              ret = -1;
          }
          std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 64));
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
        }
        v10 = ret;
      }
      goto LABEL_122;
    }
    if ( *(_BYTE *)(((change_var_param + 8) >> 3) + 0x7FFF8000) != 0
      && (char)(((change_var_param + 8) & 7) + 3) >= *(_BYTE *)(((change_var_param + 8) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(change_var_param + 8);
    }
    if ( *(_DWORD *)(change_var_param + 8) == 1 )
    {
      if ( std::operator==<GCGCard>(&param->target_card_ptr, 0LL) )
      {
        common::milog::MiLogStream::create(
          &v59,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/skill/gcg_skill_logic.cpp",
          "changeCardVarHandler",
          1559);
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          &v59,
          (const char (*)[27])"target_card_ptr is nullptr");
        common::milog::MiLogStream::~MiLogStream(&v59);
        v10 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((change_var_param + 28) >> 3) + 0x7FFF8000) != 0
          && (char)(((change_var_param + 28) & 7) + 3) >= *(_BYTE *)(((change_var_param + 28) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(change_var_param + 28);
        }
        valuea = *(_DWORD *)(change_var_param + 28);
        if ( *(_BYTE *)(((change_var_param + 24) >> 3) + 0x7FFF8000) != 0
          && (char)(((change_var_param + 24) & 7) + 3) >= *(_BYTE *)(((change_var_param + 24) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(change_var_param + 24);
        }
        typea = *(_DWORD *)(change_var_param + 24);
        if ( *(_BYTE *)(((change_var_param + 20) >> 3) + 0x7FFF8000) != 0
          && (char)((change_var_param + 20) & 7) >= *(_BYTE *)(((change_var_param + 20) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(change_var_param + 20);
        }
        v21 = *(_BYTE *)(change_var_param + 20);
        if ( *(_BYTE *)(((change_var_param + 16) >> 3) + 0x7FFF8000) != 0
          && (char)(((change_var_param + 16) & 7) + 3) >= *(_BYTE *)(((change_var_param + 16) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(change_var_param + 16);
        }
        v22 = *(_DWORD *)(change_var_param + 16);
        std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 96), &param->target_card_ptr);
        v10 = GCGSkillLogic::changeCardVar(this, (GCGCardPtr *)(v4 + 96), v22, v21, typea, valuea);
        std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 96));
      }
      goto LABEL_122;
    }
    if ( *(_BYTE *)(((change_var_param + 8) >> 3) + 0x7FFF8000) != 0
      && (char)(((change_var_param + 8) & 7) + 3) >= *(_BYTE *)(((change_var_param + 8) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(change_var_param + 8);
    }
    if ( *(_DWORD *)(change_var_param + 8) == 2 )
    {
      if ( std::operator==<GCGCard>(&param->source_card_ptr, 0LL) )
      {
        common::milog::MiLogStream::create(
          &v59,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/skill/gcg_skill_logic.cpp",
          "changeCardVarHandler",
          1568);
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          &v59,
          (const char (*)[27])"source_card_ptr is nullptr");
        common::milog::MiLogStream::~MiLogStream(&v59);
        v10 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((change_var_param + 28) >> 3) + 0x7FFF8000) != 0
          && (char)(((change_var_param + 28) & 7) + 3) >= *(_BYTE *)(((change_var_param + 28) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(change_var_param + 28);
        }
        valueb = *(_DWORD *)(change_var_param + 28);
        if ( *(_BYTE *)(((change_var_param + 24) >> 3) + 0x7FFF8000) != 0
          && (char)(((change_var_param + 24) & 7) + 3) >= *(_BYTE *)(((change_var_param + 24) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(change_var_param + 24);
        }
        typeb = *(_DWORD *)(change_var_param + 24);
        if ( *(_BYTE *)(((change_var_param + 20) >> 3) + 0x7FFF8000) != 0
          && (char)((change_var_param + 20) & 7) >= *(_BYTE *)(((change_var_param + 20) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(change_var_param + 20);
        }
        v23 = *(_BYTE *)(change_var_param + 20);
        if ( *(_BYTE *)(((change_var_param + 16) >> 3) + 0x7FFF8000) != 0
          && (char)(((change_var_param + 16) & 7) + 3) >= *(_BYTE *)(((change_var_param + 16) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(change_var_param + 16);
        }
        v24 = *(_DWORD *)(change_var_param + 16);
        std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 96), &param->source_card_ptr);
        v10 = GCGSkillLogic::changeCardVar(this, (GCGCardPtr *)(v4 + 96), v24, v23, typeb, valueb);
        std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 96));
      }
      goto LABEL_122;
    }
    if ( *(_BYTE *)(((change_var_param + 8) >> 3) + 0x7FFF8000) != 0
      && (char)(((change_var_param + 8) & 7) + 3) >= *(_BYTE *)(((change_var_param + 8) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(change_var_param + 8);
    }
    if ( *(_DWORD *)(change_var_param + 8) == 3 )
    {
      if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v4 + 192)) )
      {
        common::milog::MiLogStream::create(
          &v59,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/skill/gcg_skill_logic.cpp",
          "changeCardVarHandler",
          1577);
        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
          &v59,
          (const char (*)[38])"filter_alternative_guid_vec is empty!");
        common::milog::MiLogStream::~MiLogStream(&v59);
        v10 = -1;
LABEL_122:
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 192));
        goto LABEL_123;
      }
      v25 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v4 + 192), 0LL);
      v26 = v25;
      if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v25);
      }
      *(_DWORD *)(v4 + 32) = *v26;
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      v27 = GCGGameMode::getCardMgr(this->game_mode_);
      GCGCardMgr::findCard((GCGCardMgr *const)(v4 + 64), v27, *(_DWORD *)(v4 + 32));
      if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v4 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v59,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/skill/gcg_skill_logic.cpp",
          "changeCardVarHandler",
          1584);
        v28 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v59, (const char (*)[20])off_1BD94740);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v4 + 32));
        common::milog::MiLogStream::~MiLogStream(&v59);
        v10 = -1;
LABEL_94:
        std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 64));
        goto LABEL_122;
      }
      if ( *(_BYTE *)(((change_var_param + 28) >> 3) + 0x7FFF8000) != 0
        && (char)(((change_var_param + 28) & 7) + 3) >= *(_BYTE *)(((change_var_param + 28) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(change_var_param + 28);
      }
      valuec = *(_DWORD *)(change_var_param + 28);
      if ( *(_BYTE *)(((change_var_param + 24) >> 3) + 0x7FFF8000) != 0
        && (char)(((change_var_param + 24) & 7) + 3) >= *(_BYTE *)(((change_var_param + 24) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(change_var_param + 24);
      }
      typec = *(_DWORD *)(change_var_param + 24);
      if ( *(_BYTE *)(((change_var_param + 20) >> 3) + 0x7FFF8000) != 0
        && (char)((change_var_param + 20) & 7) >= *(_BYTE *)(((change_var_param + 20) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(change_var_param + 20);
      }
      v29 = *(_BYTE *)(change_var_param + 20);
      if ( *(_BYTE *)(((change_var_param + 16) >> 3) + 0x7FFF8000) != 0
        && (char)(((change_var_param + 16) & 7) + 3) >= *(_BYTE *)(((change_var_param + 16) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(change_var_param + 16);
      }
    }
    else
    {
      if ( *(_BYTE *)(((change_var_param + 8) >> 3) + 0x7FFF8000) != 0
        && (char)(((change_var_param + 8) & 7) + 3) >= *(_BYTE *)(((change_var_param + 8) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(change_var_param + 8);
      }
      if ( *(_DWORD *)(change_var_param + 8) != 4 )
      {
        v10 = 0;
        goto LABEL_122;
      }
      std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 64), 0LL);
      least_show_token_value = -1;
      __for_range_1 = (std::vector<unsigned int> *)(v4 + 192);
      __for_begin._M_current = (proto::GCGControllerValue *)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v4 + 192))._M_current;
      __for_end._M_current = (proto::GCGControllerValue *)std::vector<unsigned int>::end(__for_range_1)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
      {
        v31 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
        v32 = v31;
        if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v31);
        }
        *(_DWORD *)(v4 + 32) = *v32;
        if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->game_mode_);
        v33 = GCGGameMode::getCardMgr(this->game_mode_);
        GCGCardMgr::findCard((GCGCardMgr *const)(v4 + 96), v33, *(_DWORD *)(v4 + 32));
        if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v4 + 96), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v59,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/card_game/skill/gcg_skill_logic.cpp",
            "changeCardVarHandler",
            1598);
          v34 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v59, (const char (*)[20])off_1BD94740);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, (const unsigned int *)(v4 + 32));
          common::milog::MiLogStream::~MiLogStream(&v59);
        }
        else
        {
          v35 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          show_token_type = GCGCard::getShowTokenType(v35);
          if ( show_token_type )
          {
            v36 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
            show_token_value = GCGCard::getToken(v36, show_token_type);
            if ( show_token_value < least_show_token_value )
            {
              least_show_token_value = show_token_value;
              std::shared_ptr<GCGCard>::operator=(
                (std::shared_ptr<GCGCard> *const)(v4 + 64),
                (const std::shared_ptr<GCGCard> *)(v4 + 96));
            }
          }
        }
        std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 96));
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
      }
      if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v4 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v59,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/skill/gcg_skill_logic.cpp",
          "changeCardVarHandler",
          1615);
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v59, (const char (*)[20])off_1BD94780);
        common::milog::MiLogStream::~MiLogStream(&v59);
        v10 = 0;
        goto LABEL_94;
      }
      if ( *(_BYTE *)(((change_var_param + 28) >> 3) + 0x7FFF8000) != 0
        && (char)(((change_var_param + 28) & 7) + 3) >= *(_BYTE *)(((change_var_param + 28) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(change_var_param + 28);
      }
      valuec = *(_DWORD *)(change_var_param + 28);
      if ( *(_BYTE *)(((change_var_param + 24) >> 3) + 0x7FFF8000) != 0
        && (char)(((change_var_param + 24) & 7) + 3) >= *(_BYTE *)(((change_var_param + 24) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(change_var_param + 24);
      }
      typec = *(_DWORD *)(change_var_param + 24);
      if ( *(_BYTE *)(((change_var_param + 20) >> 3) + 0x7FFF8000) != 0
        && (char)((change_var_param + 20) & 7) >= *(_BYTE *)(((change_var_param + 20) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(change_var_param + 20);
      }
      v29 = *(_BYTE *)(change_var_param + 20);
      if ( *(_BYTE *)(((change_var_param + 16) >> 3) + 0x7FFF8000) != 0
        && (char)(((change_var_param + 16) & 7) + 3) >= *(_BYTE *)(((change_var_param + 16) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(change_var_param + 16);
      }
    }
    v30 = *(_DWORD *)(change_var_param + 16);
    std::shared_ptr<GCGCard>::shared_ptr(
      (std::shared_ptr<GCGCard> *const)(v4 + 96),
      (const std::shared_ptr<GCGCard> *)(v4 + 64));
    v10 = GCGSkillLogic::changeCardVar(this, (GCGCardPtr *)(v4 + 96), v30, v29, typec, valuec);
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 96));
    goto LABEL_94;
  }
  common::milog::MiLogStream::create(
    &v59,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/card_game/skill/gcg_skill_logic.cpp",
    "changeCardVarHandler",
    1521);
  v7 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
         &v59,
         (const char (*)[38])"camp_type is not valid controller_id:");
  v8 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
         v7,
         (const proto::GCGControllerValue *)(v4 + 48));
  v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])" camp_type:");
  if ( *(_BYTE *)((change_var_param >> 3) + 0x7FFF8000) != 0
    && (char)((change_var_param & 7) + 3) >= *(_BYTE *)((change_var_param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(change_var_param);
  }
  *(_DWORD *)(v4 + 32) = *(_DWORD *)change_var_param;
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 32));
  common::milog::MiLogStream::~MiLogStream(&v59);
  v10 = -1;
LABEL_123:
  std::vector<proto::GCGControllerValue>::~vector((std::vector<proto::GCGControllerValue> *const)(v4 + 128));
  result = v10;
  if ( v60 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1624: range 000000000E2FB266-000000000E2FB5B3
int32_t __cdecl GCGSkillLogic::changeCardVar(
        GCGSkillLogic *const this,
        GCGCardPtr *p_card_ptr,
        GCGTokenType token_type,
        bool is_modify_to_show_token,
        data::GCGValueOperatorType type,
        uint32_t value)
{
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rbx
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rbx
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  GCGCard *v16; // rax
  GCGCard *v17; // rax
  GCGCard *v18; // rax
  common::milog::MiLogStream *v19; // rax
  int val; // [rsp+28h] [rbp-58h] BYREF
  GCGTokenType show_token_type; // [rsp+2Ch] [rbp-54h]
  common::milog::MiLogStream v26; // [rsp+30h] [rbp-50h] BYREF
  std::string v27; // [rsp+50h] [rbp-30h] BYREF

  if ( std::operator==<GCGCard>(p_card_ptr, 0LL) )
    return -1;
  if ( is_modify_to_show_token )
  {
    v7 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_card_ptr);
    show_token_type = GCGCard::getShowTokenType(v7);
    if ( show_token_type == GCG_TOKEN_NONE )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_skill_logic.cpp",
        "changeCardVar",
        1634);
      v8 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
             &v26,
             (const char (*)[56])"GCGCardExcelConfig token_type is not valid, token_type:");
      val = 0;
      v9 = common::milog::MiLogStream::operator<<<int,(int *)0>(v8, &val);
      v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])",card:");
      v11 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_card_ptr);
      GCGCard::getDesc[abi:cxx11](&v27, v11);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &v27);
      std::string::~string(&v27);
      common::milog::MiLogStream::~MiLogStream(&v26);
      return -1;
    }
    token_type = show_token_type;
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/skill/gcg_skill_logic.cpp",
      "changeCardVar",
      1639);
    v12 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            &v26,
            (const char (*)[31])"changeCardVar show_token_type:");
    val = show_token_type;
    v13 = common::milog::MiLogStream::operator<<<int,(int *)0>(v12, &val);
    v14 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])",card:");
    v15 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_card_ptr);
    GCGCard::getDesc[abi:cxx11](&v27, v15);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, &v27);
    std::string::~string(&v27);
    common::milog::MiLogStream::~MiLogStream(&v26);
  }
  if ( type == OPEATER_MINUS )
  {
    v18 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_card_ptr);
    GCGCard::subToken(v18, token_type, value, GCG_REASON_EFFECT);
  }
  else
  {
    if ( type > OPEATER_MINUS )
    {
LABEL_15:
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v27,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_skill_logic.cpp",
        "changeCardVar",
        1660);
      v19 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              (common::milog::MiLogStream *const)&v27,
              (const char (*)[37])"unsuppert GCGValueOperatorType type:");
      val = type;
      common::milog::MiLogStream::operator<<<int,(int *)0>(v19, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v27);
      return -1;
    }
    if ( type )
    {
      if ( type != OPEATER_ASSIGN )
        goto LABEL_15;
      v17 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_card_ptr);
      GCGCard::setToken(v17, token_type, value, GCG_REASON_EFFECT);
    }
    else
    {
      v16 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_card_ptr);
      GCGCard::addToken(v16, token_type, value, GCG_REASON_EFFECT);
    }
  }
  return 0;
};

// Line 1669: range 000000000E2FB5B4-000000000E2FBC65
__int64 __fastcall GCGSkillLogic::changeEnergy(
        GCGSkillLogic *const this,
        const std::vector<unsigned int> *card_guid_vec,
        signed int operator_type,
        uint32_t energy_num)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v7; // rax
  _DWORD *v8; // rdx
  GCGCardMgr *CardMgr; // rax
  common::milog::MiLogStream *v10; // rax
  GCGCard *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  GCGCard *v19; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  uint32_t *v21; // rax
  uint32_t *v22; // rdx
  GCGCard *v23; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  GCGCard *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+24h] [rbp-DCh] BYREF
  unsigned int __a; // [rsp+28h] [rbp-D8h] BYREF
  uint32_t final_energy_0; // [rsp+2Ch] [rbp-D4h]
  uint32_t cur_energy; // [rsp+30h] [rbp-D0h]
  uint32_t final_energy; // [rsp+34h] [rbp-CCh]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+38h] [rbp-C8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+40h] [rbp-C0h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-B8h]
  common::milog::MiLogStream v41; // [rsp+50h] [rbp-B0h] BYREF
  char v42[144]; // [rsp+70h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 14 card_guid:1670 48 4 15 energy_num:1668 64 16 20 target_card_ptr:1672";
  *(_QWORD *)(v4 + 16) = GCGSkillLogic::changeEnergy;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202178560;
  *(_DWORD *)(v4 + 48) = energy_num;
  __for_range = card_guid_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(card_guid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(card_guid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v7 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    *(_DWORD *)(v4 + 32) = *v8;
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    CardMgr = GCGGameMode::getCardMgr(this->game_mode_);
    GCGCardMgr::findCard((GCGCardMgr *const)(v4 + 64), CardMgr, *(_DWORD *)(v4 + 32));
    if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v4 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_game/skill/gcg_skill_logic.cpp",
        "changeEnergy",
        1675);
      v10 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v41, (const char (*)[20])off_1BD94740);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 32));
      common::milog::MiLogStream::~MiLogStream(&v41);
      goto LABEL_27;
    }
    if ( operator_type == 2 )
    {
      final_energy_0 = 0;
      v24 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      cur_energy = GCGCard::getCurEnergy(v24);
      if ( cur_energy > *(_DWORD *)(v4 + 48) )
        final_energy_0 = cur_energy - *(_DWORD *)(v4 + 48);
      v25 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      GCGCard::setEnergy(v25, final_energy_0, GCG_REASON_EFFECT);
    }
    else
    {
      if ( operator_type > 2 )
        goto LABEL_26;
      if ( operator_type )
      {
        if ( operator_type != 1 )
        {
LABEL_26:
          common::milog::MiLogStream::create(
            &v41,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/card_game/skill/gcg_skill_logic.cpp",
            "changeEnergy",
            1710);
          v26 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                  &v41,
                  (const char (*)[23])"invalid operator_type:");
          __a = operator_type;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &__a);
          common::milog::MiLogStream::~MiLogStream(&v41);
          goto LABEL_27;
        }
        v20 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        __a = GCGCard::getMaxEnergy(v20);
        v21 = (uint32_t *)std::min<unsigned int>(&__a, (const unsigned int *)(v4 + 48));
        v22 = v21;
        if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v21);
        }
        final_energy = *v22;
        v23 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        GCGCard::setEnergy(v23, final_energy, GCG_REASON_EFFECT);
      }
      else
      {
        v11 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        if ( GCGCard::isEnergyFull(v11) )
        {
          common::milog::MiLogStream::create(
            &v41,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/skill/gcg_skill_logic.cpp",
            "changeEnergy",
            1684);
          v12 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  &v41,
                  (const char (*)[35])"addEnergy energy is full, card_id:");
          v13 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          val = GCGCard::getId(v13);
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
          v15 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v14, (const char (*)[12])" card_guid:");
          v16 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          __a = GCGCard::getGuid(v16);
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &__a);
          v18 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v17, (const char (*)[13])" energy_num:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v4 + 48));
          common::milog::MiLogStream::~MiLogStream(&v41);
        }
        else
        {
          v19 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          GCGCard::addEnergy(v19, *(_DWORD *)(v4 + 48), GCG_REASON_EFFECT);
        }
      }
    }
LABEL_27:
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 64));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v41,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/skill/gcg_skill_logic.cpp",
    "changeEnergy",
    1715);
  v27 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
          &v41,
          (const char (*)[24])"changeEnergy guid size:");
  __for_end._M_current = (const unsigned int *)std::vector<unsigned int>::size(card_guid_vec);
  v28 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v27,
          (const unsigned __int64 *)&__for_end);
  v29 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v28, (const char (*)[13])" energy_num:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v4 + 48));
  common::milog::MiLogStream::~MiLogStream(&v41);
  result = 0LL;
  if ( v42 == (char *)v4 )
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
  return result;
};

// Line 1721: range 000000000E2FBC66-000000000E2FC1F2
__int64 __fastcall GCGSkillLogic::transferEnergy(
        GCGSkillLogic *const this,
        const std::vector<unsigned int> *source_card_guid_vec,
        const std::vector<unsigned int> *target_card_guid_vec,
        uint32_t sub_energy_num)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v7; // rax
  _DWORD *v8; // rdx
  GCGCardMgr *CardMgr; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  const unsigned int *v12; // rax
  _DWORD *v13; // rdx
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  GCGCard *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+20h] [rbp-F0h] BYREF
  unsigned int __b; // [rsp+24h] [rbp-ECh] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-E8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-E0h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v33; // [rsp+40h] [rbp-D0h] BYREF
  char v34[176]; // [rsp+60h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 4 15 energy_num:1722 48 4 14 card_guid:1723 64 4 26 actual_sub_energy_num:1731 80 4 19 sub_"
                        "energy_num:1720 96 16 20 target_card_ptr:1725";
  *(_QWORD *)(v4 + 16) = GCGSkillLogic::transferEnergy;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -234556924;
  v6[536862723] = -202178560;
  *(_DWORD *)(v4 + 80) = sub_energy_num;
  *(_DWORD *)(v4 + 32) = 0;
  __for_range = source_card_guid_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(source_card_guid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(source_card_guid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v7 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    *(_DWORD *)(v4 + 48) = *v8;
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    CardMgr = GCGGameMode::getCardMgr(this->game_mode_);
    GCGCardMgr::findCard((GCGCardMgr *const)(v4 + 96), CardMgr, *(_DWORD *)(v4 + 48));
    if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v4 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_game/skill/gcg_skill_logic.cpp",
        "transferEnergy",
        1728);
      v10 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v33, (const char (*)[20])off_1BD94740);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v33);
    }
    else
    {
      v11 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      __b = GCGCard::getCurEnergy(v11);
      v12 = std::min<unsigned int>((const unsigned int *)(v4 + 80), &__b);
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      *(_DWORD *)(v4 + 64) = *v13;
      if ( *(_DWORD *)(v4 + 64) )
      {
        v21 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        GCGCard::subEnergy(v21, *(_DWORD *)(v4 + 64), GCG_REASON_EFFECT);
        *(_DWORD *)(v4 + 32) += *(_DWORD *)(v4 + 64);
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/skill/gcg_skill_logic.cpp",
          "transferEnergy",
          1740);
        v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                &v33,
                (const char (*)[16])"subEnergy guid:");
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v22,
                (const unsigned int *)(v4 + 48));
        v24 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v23,
                (const char (*)[17])" sub_energy_num:");
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v24,
                (const unsigned int *)(v4 + 64));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/skill/gcg_skill_logic.cpp",
          "transferEnergy",
          1734);
        v14 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v33,
                (const char (*)[32])"subEnergy energy is 0, card_id:");
        v15 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        val = GCGCard::getId(v15);
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
        v17 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v16, (const char (*)[12])" card_guid:");
        v18 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        __b = GCGCard::getGuid(v18);
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &__b);
      }
      v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v19, (const char (*)[13])" energy_num:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v4 + 32));
      common::milog::MiLogStream::~MiLogStream(&v33);
    }
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 96));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  GCGSkillLogic::changeEnergy(this, target_card_guid_vec, 0, *(_DWORD *)(v4 + 32));
  result = 0LL;
  if ( v34 == (char *)v4 )
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

// Line 1747: range 000000000E2FC560-000000000E2FDF14
__int64 __fastcall GCGSkillLogic::changeOnStageCharater(
        GCGSkillLogic *const this,
        const GCGEffectBase *effect,
        GCGControllerValue controller_id,
        data::GCGEffectSelectNextOnstageType select_type,
        const GCGSkillUseParam *skill_param)
{
  unsigned int v5; // r14d
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  GCGDuel *Duel; // rax
  GCGCharacterZone *CharacterZone; // rax
  GCGCharacterZone *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  GCGCharacterZone *v20; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  common::milog::MiLogStream *v32; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  GCGDuel *v37; // rax
  GCGDuel *v38; // rax
  GCGCharacterZone *v39; // rax
  GCGCharacterZone *v40; // rax
  common::milog::MiLogStream *v41; // r14
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // r14
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  common::milog::MiLogStream *v48; // r14
  _BOOL4 v49; // r15d
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v51; // rax
  common::milog::MiLogStream *v53; // r14
  int v54; // r15d
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  GCGCharacterZone *v61; // rax
  common::milog::MiLogStream *v62; // rax
  GCGCardMgr *CardMgr; // rax
  GCGCardMgr *v64; // rax
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v65; // rax
  GCGControllerValue v66; // r14d
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v67; // rax
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v68; // rax
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v69; // rax
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v70; // rax
  GCGTriggerType trigger_type; // r14d
  __int64 result; // rax
  uint32_t skill_id; // [rsp+58h] [rbp-218h]
  GCGControllerValue opponent_controller_id; // [rsp+5Ch] [rbp-214h]
  uint32_t opponent_order_index; // [rsp+60h] [rbp-210h]
  int after_change_onstage_character_guid; // [rsp+64h] [rbp-20Ch]
  GCGField *field; // [rsp+68h] [rbp-208h]
  GCGField *opponent_field; // [rsp+70h] [rbp-200h]
  GCGCardPtr *target_card_ptr; // [rsp+78h] [rbp-1F8h]
  common::milog::MiLogStream v83; // [rsp+80h] [rbp-1F0h] BYREF
  std::function<ForeachPolicy(GCGCard&)> p_func; // [rsp+A0h] [rbp-1D0h] BYREF
  char v85[432]; // [rsp+C0h] [rbp-1B0h] BYREF
  GCGSkillLogic::changeOnStageCharater::<lambda(GCGCard&)> v86; // 0:rsi.8,8:edx.4
  GCGSkillLogic::changeOnStageCharater::<lambda(GCGCard&)>_0 v87; // 0:rsi.8,8:edx.4

  v6 = (unsigned __int64)v85;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_3(384LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "11 48 4 31 cur_onstage_character_guid:1755 64 4 31 alive_charater_before_guid:1768 80 4 18 contr"
                        "oller_id:1746 96 16 14 skill_ptr:1748 128 16 20 source_card_ptr:1885 160 16 20 target_card_ptr:1"
                        "891 192 16 30 trigger_windows_param_ptr:1898 224 16 18 cur_phase_ptr:1908 256 16 13 card_ptr:185"
                        "1 288 16 19 card_owner_ptr:1857 320 24 26 change_character_func:1757";
  *(_QWORD *)(v6 + 16) = GCGSkillLogic::changeOnStageCharater;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -234556924;
  v8[536862723] = -219021312;
  v8[536862724] = -219021312;
  v8[536862725] = -219021312;
  v8[536862726] = -219021312;
  v8[536862727] = -219021312;
  v8[536862728] = -219021312;
  v8[536862729] = -219021312;
  v8[536862730] = -218103808;
  v8[536862731] = -202116109;
  *(_DWORD *)(v6 + 80) = controller_id;
  GCGEffectBase::getSkill((const GCGEffectBase *const)(v6 + 96));
  skill_id = 0;
  if ( std::operator!=<GCGSkill>((const std::shared_ptr<GCGSkill> *)(v6 + 96), 0LL) )
  {
    v9 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 96));
    skill_id = GCGSkill::getSkillId(v9);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  Duel = GCGGameMode::getDuel(this->game_mode_);
  field = GCGDuel::getField(Duel, (GCGControllerValue)*(_DWORD *)(v6 + 80));
  CharacterZone = GCGField::getCharacterZone(field);
  *(_DWORD *)(v6 + 48) = GCGCharacterZone::getOnStageCardGuid(CharacterZone);
  *(_QWORD *)(v6 + 320) = field;
  *(_DWORD *)(v6 + 328) = *(_DWORD *)(v6 + 48);
  *(_DWORD *)(v6 + 332) = skill_id;
  *(_QWORD *)(v6 + 336) = this;
  switch ( select_type )
  {
    case SELECT_ONSTAGE_BEFORE:
      *(_DWORD *)(v6 + 64) = 0;
      v12 = GCGField::getCharacterZone(field);
      v86.__cur_onstage_character_guid = *(_DWORD *)(v6 + 48);
      v86.__alive_charater_before_guid = (uint32_t *)(v6 + 64);
      std::function<ForeachPolicy ()(GCGCard &)>::function<GCGSkillLogic::changeOnStageCharater(GCGEffectBase const&,proto::GCGControllerValue,data::GCGEffectSelectNextOnstageType,GCGSkillUseParam const&)::{lambda(GCGCard &)#2},void,void>(
        &p_func,
        v86);
      GCGCharacterZone::foreachAliveCharacterBackward(v12, &p_func);
      std::function<ForeachPolicy ()(GCGCard &)>::~function(&p_func);
      if ( !*(_DWORD *)(v6 + 64) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&p_func,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/skill/gcg_skill_logic.cpp",
          "changeOnStageCharater",
          1780);
        v13 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                (common::milog::MiLogStream *const)&p_func,
                (const char (*)[37])"changeOnStageCharater controller_id:");
        v14 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
                v13,
                (const proto::GCGControllerValue *)(v6 + 80));
        v15 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v14,
                (const char (*)[17])" cur_stage_guid:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v6 + 48));
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          v16,
          (const char (*)[33])" not find valid character before");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
        v5 = 0;
        goto LABEL_83;
      }
      GCGSkillLogic::changeOnStageCharater(GCGEffectBase const&,proto::GCGControllerValue,data::GCGEffectSelectNextOnstageType,GCGSkillUseParam const&)::{lambda(unsigned int)#1}::operator()(
        (const GCGSkillLogic::changeOnStageCharater::<lambda(uint32_t)> *const)(v6 + 320),
        *(_DWORD *)(v6 + 64));
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&p_func,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/skill/gcg_skill_logic.cpp",
        "changeOnStageCharater",
        1785);
      v17 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              (common::milog::MiLogStream *const)&p_func,
              (const char (*)[35])"changeOnStageCharater before guid:");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v6 + 48));
      v19 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v18, (const char (*)[13])" after guid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v6 + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
LABEL_56:
      v61 = GCGField::getCharacterZone(field);
      after_change_onstage_character_guid = GCGCharacterZone::getOnStageCardGuid(v61);
      if ( after_change_onstage_character_guid == *(_DWORD *)(v6 + 48) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&p_func,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/skill/gcg_skill_logic.cpp",
          "changeOnStageCharater",
          1882);
        v62 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                (common::milog::MiLogStream *const)&p_func,
                (const char (*)[60])"changeOnStageCharateronstage not change onstage card, guid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v62, (const unsigned int *)(v6 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
        v5 = 0;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->game_mode_);
        CardMgr = GCGGameMode::getCardMgr(this->game_mode_);
        GCGCardMgr::findCard((GCGCardMgr *const)(v6 + 128), CardMgr, *(_DWORD *)(v6 + 48));
        if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v6 + 128)) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&p_func,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/card_game/skill/gcg_skill_logic.cpp",
            "changeOnStageCharater",
            1888);
          common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            (common::milog::MiLogStream *const)&p_func,
            (const char (*)[27])"source_card_ptr is nullptr");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
          v5 = -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->game_mode_);
          v64 = GCGGameMode::getCardMgr(this->game_mode_);
          GCGCardMgr::findCard((GCGCardMgr *const)(v6 + 160), v64, after_change_onstage_character_guid);
          if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v6 + 160)) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&p_func,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/card_game/skill/gcg_skill_logic.cpp",
              "changeOnStageCharater",
              1894);
            common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)&p_func,
              (const char (*)[27])"target_card_ptr is nullptr");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
            v5 = -1;
          }
          else
          {
            common::tools::perf::make_shared<GCGSkillUseParam>();
            if ( std::operator==<GCGSkillUseParam>(0LL, (const std::shared_ptr<GCGSkillUseParam> *)(v6 + 192)) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&p_func,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/card_game/skill/gcg_skill_logic.cpp",
                "changeOnStageCharater",
                1901);
              common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                (common::milog::MiLogStream *const)&p_func,
                (const char (*)[37])"trigger_windows_param_ptr is nullptr");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
              v5 = -1;
            }
            else
            {
              v65 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 192));
              if ( *(_BYTE *)(((unsigned __int64)&v65->trigger_type >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v65->trigger_type >> 3) + 0x7FFF8000) <= 3 )
              {
                v65 = (std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v65->trigger_type);
              }
              v65->trigger_type = GCG_TRIGGER_ACTION_CHANGE_CHARACTER_POST;
              v66 = *(_DWORD *)(v6 + 80);
              v67 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 192));
              if ( *(_BYTE *)(((unsigned __int64)&v67->controller_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v67->controller_id >> 3) + 0x7FFF8000) <= 3 )
              {
                v67 = (std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v67->controller_id);
              }
              v67->controller_id = v66;
              v68 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 192));
              std::shared_ptr<GCGCard>::operator=(&v68->source_card_ptr, (const std::shared_ptr<GCGCard> *)(v6 + 128));
              v69 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 192));
              std::shared_ptr<GCGCard>::operator=(&v69->target_card_ptr, (const std::shared_ptr<GCGCard> *)(v6 + 160));
              if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->game_mode_);
              GCGGameMode::getPhaseMgr(this->game_mode_);
              GCGPhaseMgr::getCurPhase((GCGPhaseMgr *const)(v6 + 224));
              if ( std::operator==<GCGPhaseBase>(0LL, (const std::shared_ptr<GCGPhaseBase> *)(v6 + 224)) )
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&p_func,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/card_game/skill/gcg_skill_logic.cpp",
                  "changeOnStageCharater",
                  1911);
                common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  (common::milog::MiLogStream *const)&p_func,
                  (const char (*)[26])"cur_phase_ptr is nullptr.");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
                v5 = -1;
              }
              else
              {
                std::shared_ptr<GCGSkillUseParam>::shared_ptr(
                  (std::shared_ptr<GCGSkillUseParam> *const)(v6 + 288),
                  (const std::shared_ptr<GCGSkillUseParam> *)(v6 + 192));
                v70 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 192));
                if ( *(_BYTE *)(((unsigned __int64)&v70->trigger_type >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&v70->trigger_type >> 3) + 0x7FFF8000) <= 3 )
                {
                  v70 = (std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v70->trigger_type);
                }
                trigger_type = v70->trigger_type;
                std::shared_ptr<GCGPhaseBase>::shared_ptr(
                  (std::shared_ptr<GCGPhaseBase> *const)(v6 + 256),
                  (const std::shared_ptr<GCGPhaseBase> *)(v6 + 224));
                GCGSkillLogic::trigger(
                  this,
                  (GCGPhaseBasePtr *)(v6 + 256),
                  trigger_type,
                  (GCGSkillUseParamPtr *)(v6 + 288));
                std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v6 + 256));
                std::shared_ptr<GCGSkillUseParam>::~shared_ptr((std::shared_ptr<GCGSkillUseParam> *const)(v6 + 288));
                v5 = 0;
              }
              std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v6 + 224));
            }
            std::shared_ptr<GCGSkillUseParam>::~shared_ptr((std::shared_ptr<GCGSkillUseParam> *const)(v6 + 192));
          }
          std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v6 + 160));
        }
        std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v6 + 128));
      }
      goto LABEL_83;
    case SELECT_ONSTAGE_NEXT:
      *(_DWORD *)(v6 + 64) = 0;
      v20 = GCGField::getCharacterZone(field);
      v87.__cur_onstage_character_guid = *(_DWORD *)(v6 + 48);
      v87.__alive_character_after_guid = (uint32_t *)(v6 + 64);
      std::function<ForeachPolicy ()(GCGCard &)>::function<GCGSkillLogic::changeOnStageCharater(GCGEffectBase const&,proto::GCGControllerValue,data::GCGEffectSelectNextOnstageType,GCGSkillUseParam const&)::{lambda(GCGCard &)#3},void,void>(
        &p_func,
        v87);
      GCGCharacterZone::foreachAliveCharacter(v20, &p_func);
      std::function<ForeachPolicy ()(GCGCard &)>::~function(&p_func);
      if ( !*(_DWORD *)(v6 + 64) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&p_func,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/skill/gcg_skill_logic.cpp",
          "changeOnStageCharater",
          1801);
        v21 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                (common::milog::MiLogStream *const)&p_func,
                (const char (*)[37])"changeOnStageCharater controller_id:");
        v22 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
                v21,
                (const proto::GCGControllerValue *)(v6 + 80));
        v23 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v22,
                (const char (*)[17])" cur_stage_guid:");
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v23,
                (const unsigned int *)(v6 + 48));
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          v24,
          (const char (*)[32])" not find valid character after");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
        v5 = 0;
        goto LABEL_83;
      }
      GCGSkillLogic::changeOnStageCharater(GCGEffectBase const&,proto::GCGControllerValue,data::GCGEffectSelectNextOnstageType,GCGSkillUseParam const&)::{lambda(unsigned int)#1}::operator()(
        (const GCGSkillLogic::changeOnStageCharater::<lambda(uint32_t)> *const)(v6 + 320),
        *(_DWORD *)(v6 + 64));
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&p_func,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/skill/gcg_skill_logic.cpp",
        "changeOnStageCharater",
        1806);
      v25 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              (common::milog::MiLogStream *const)&p_func,
              (const char (*)[35])"changeOnStageCharater before guid:");
      v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v6 + 48));
      v27 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v26, (const char (*)[13])" after guid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v6 + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
      goto LABEL_56;
    case SELECT_ONSTAGE_CONFIG_CHOOSE:
      if ( std::operator==<GCGSkillUseParam>(0LL, &skill_param->trigger_window_param_ptr) )
      {
        common::milog::MiLogStream::create(
          &v83,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/skill/gcg_skill_logic.cpp",
          "changeOnStageCharater",
          1812);
        v28 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                &v83,
                (const char (*)[66])"changeOnStageCharater trigger_window_param_ptr is nullptr, param:");
        GCGSkillUseParam::getDesc[abi:cxx11]((std::string *)&p_func, skill_param);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v28, (const std::string *)&p_func);
        std::string::~string(&p_func);
        common::milog::MiLogStream::~MiLogStream(&v83);
        v5 = -1;
        goto LABEL_83;
      }
      target_card_ptr = &std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)&skill_param->trigger_window_param_ptr)->target_card_ptr;
      if ( std::operator==<GCGCard>(target_card_ptr, 0LL)
        || (v29 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)target_card_ptr),
            GCGCard::getCardType(v29) != GCG_CARD_CHARACTER)
        || (v30 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)target_card_ptr),
            !GCGCard::isAlive(v30)) )
      {
        common::milog::MiLogStream::create(
          &v83,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/skill/gcg_skill_logic.cpp",
          "changeOnStageCharater",
          1818);
        v32 = common::milog::MiLogStream::operator<<<char [91],(char *[91])0>(
                &v83,
                (const char (*)[91])"changeOnStageCharater trigger source card is nullptr or not character or not alive, param:");
        GCGSkillUseParam::getDesc[abi:cxx11]((std::string *)&p_func, skill_param);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v32, (const std::string *)&p_func);
        std::string::~string(&p_func);
        common::milog::MiLogStream::~MiLogStream(&v83);
        v5 = -1;
        goto LABEL_83;
      }
      v33 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)target_card_ptr);
      *(_DWORD *)(v6 + 64) = GCGCard::getGuid(v33);
      GCGSkillLogic::changeOnStageCharater(GCGEffectBase const&,proto::GCGControllerValue,data::GCGEffectSelectNextOnstageType,GCGSkillUseParam const&)::{lambda(unsigned int)#1}::operator()(
        (const GCGSkillLogic::changeOnStageCharater::<lambda(uint32_t)> *const)(v6 + 320),
        *(_DWORD *)(v6 + 64));
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&p_func,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/skill/gcg_skill_logic.cpp",
        "changeOnStageCharater",
        1823);
      v34 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              (common::milog::MiLogStream *const)&p_func,
              (const char (*)[35])"changeOnStageCharater before guid:");
      v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, (const unsigned int *)(v6 + 48));
      v36 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v35, (const char (*)[13])" after guid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, (const unsigned int *)(v6 + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
      goto LABEL_56;
    case SELECT_CAMP_ENEMY_ONSTAGE_IDX:
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      v37 = GCGGameMode::getDuel(this->game_mode_);
      opponent_controller_id = (unsigned int)GCGDuel::getOtherControllerId(
                                               v37,
                                               (GCGControllerValue)*(_DWORD *)(v6 + 80));
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      v38 = GCGGameMode::getDuel(this->game_mode_);
      opponent_field = GCGDuel::getField(v38, opponent_controller_id);
      v39 = GCGField::getCharacterZone(opponent_field);
      opponent_order_index = GCGCharacterZone::getOnStageOrderIndex(v39);
      *(_DWORD *)(v6 + 64) = 0;
      v40 = GCGField::getCharacterZone(field);
      if ( GCGCharacterZone::getFirstAliveCardGuidByOrderIndexReverse(v40, opponent_order_index, (uint32_t *)(v6 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v83,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/skill/gcg_skill_logic.cpp",
          "changeOnStageCharater",
          1833);
        v41 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v83,
                (const char (*)[35])"changeOnStageCharater fail, param:");
        GCGSkillUseParam::getDesc[abi:cxx11]((std::string *)&p_func, skill_param);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v41, (const std::string *)&p_func);
        std::string::~string(&p_func);
        common::milog::MiLogStream::~MiLogStream(&v83);
        v5 = -1;
        goto LABEL_83;
      }
      if ( *(_DWORD *)(v6 + 48) == *(_DWORD *)(v6 + 64) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&p_func,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/skill/gcg_skill_logic.cpp",
          "changeOnStageCharater",
          1838);
        v42 = common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(
                (common::milog::MiLogStream *const)&p_func,
                (const char (*)[75])"changeOnStageCharater not change onstage card, alive_character_after_guid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, (const unsigned int *)(v6 + 64));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
        v5 = 0;
        goto LABEL_83;
      }
      GCGSkillLogic::changeOnStageCharater(GCGEffectBase const&,proto::GCGControllerValue,data::GCGEffectSelectNextOnstageType,GCGSkillUseParam const&)::{lambda(unsigned int)#1}::operator()(
        (const GCGSkillLogic::changeOnStageCharater::<lambda(uint32_t)> *const)(v6 + 320),
        *(_DWORD *)(v6 + 64));
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&p_func,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/skill/gcg_skill_logic.cpp",
        "changeOnStageCharater",
        1842);
      v43 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              (common::milog::MiLogStream *const)&p_func,
              (const char (*)[35])"changeOnStageCharater before guid:");
      v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, (const unsigned int *)(v6 + 48));
      v45 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v44, (const char (*)[13])" after guid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, (const unsigned int *)(v6 + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
      goto LABEL_56;
  }
  if ( select_type != SELECT_ONSTAGE_MODIFIED )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&p_func,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/skill/gcg_skill_logic.cpp",
      "changeOnStageCharater",
      1874);
    v60 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            (common::milog::MiLogStream *const)&p_func,
            (const char (*)[25])off_1BD953A0);
    *(_DWORD *)(v6 + 64) = select_type;
    common::milog::MiLogStream::operator<<<int,(int *)0>(v60, (const int *)(v6 + 64));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
    v5 = -1;
    goto LABEL_83;
  }
  if ( std::operator==<GCGSkill>(0LL, (const std::shared_ptr<GCGSkill> *)(v6 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v83,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/skill/gcg_skill_logic.cpp",
      "changeOnStageCharater",
      1848);
    v46 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
            &v83,
            (const char (*)[55])"changeOnStageCharater failed for skill_ptr is nullptr ");
    GCGEffectBase::getDesc[abi:cxx11]((std::string *)&p_func, effect);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v46, (const std::string *)&p_func);
    std::string::~string(&p_func);
    common::milog::MiLogStream::~MiLogStream(&v83);
    v5 = -1;
    goto LABEL_83;
  }
  v47 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 96));
  GCGSkill::getThisCard((const GCGSkill *const)(v6 + 256), (const GCGSkillUseParam *)v47);
  if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v6 + 256)) )
  {
    common::milog::MiLogStream::create(
      &v83,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/skill/gcg_skill_logic.cpp",
      "changeOnStageCharater",
      1854);
    v48 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
            &v83,
            (const char (*)[54])"changeOnStageCharater getThisCard null, skill, param:");
    GCGSkillUseParam::getDesc[abi:cxx11]((std::string *)&p_func, skill_param);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v48, (const std::string *)&p_func);
    std::string::~string(&p_func);
    common::milog::MiLogStream::~MiLogStream(&v83);
    v5 = -1;
    v49 = 0;
  }
  else
  {
    std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 256));
    GCGCard::getOwnerCard((GCGCard *const)(v6 + 288));
    if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v6 + 288))
      || (v50 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 288)),
          GCGCard::getCardType(v50) != GCG_CARD_CHARACTER)
      || (v51 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 288)),
          !GCGCard::isAlive(v51)) )
    {
      common::milog::MiLogStream::create(
        &v83,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_game/skill/gcg_skill_logic.cpp",
        "changeOnStageCharater",
        1860);
      v53 = common::milog::MiLogStream::operator<<<char [91],(char *[91])0>(
              &v83,
              (const char (*)[91])"changeOnStageCharater trigger source card is nullptr or not character or not alive, param:");
      GCGSkillUseParam::getDesc[abi:cxx11]((std::string *)&p_func, skill_param);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v53, (const std::string *)&p_func);
      std::string::~string(&p_func);
      common::milog::MiLogStream::~MiLogStream(&v83);
      v5 = -1;
      v54 = 0;
    }
    else
    {
      v55 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 288));
      *(_DWORD *)(v6 + 64) = GCGCard::getGuid(v55);
      if ( *(_DWORD *)(v6 + 48) == *(_DWORD *)(v6 + 64) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&p_func,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/skill/gcg_skill_logic.cpp",
          "changeOnStageCharater",
          1866);
        v56 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
                (common::milog::MiLogStream *const)&p_func,
                (const char (*)[70])"changeOnStageCharater not change onstage card, target_character_guid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v56, (const unsigned int *)(v6 + 64));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
        v5 = 0;
        v54 = 0;
      }
      else
      {
        GCGSkillLogic::changeOnStageCharater(GCGEffectBase const&,proto::GCGControllerValue,data::GCGEffectSelectNextOnstageType,GCGSkillUseParam const&)::{lambda(unsigned int)#1}::operator()(
          (const GCGSkillLogic::changeOnStageCharater::<lambda(uint32_t)> *const)(v6 + 320),
          *(_DWORD *)(v6 + 64));
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&p_func,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/skill/gcg_skill_logic.cpp",
          "changeOnStageCharater",
          1870);
        v57 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                (common::milog::MiLogStream *const)&p_func,
                (const char (*)[35])"changeOnStageCharater before guid:");
        v58 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v57,
                (const unsigned int *)(v6 + 48));
        v59 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v58, (const char (*)[13])" after guid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v59, (const unsigned int *)(v6 + 64));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
        v54 = 1;
      }
    }
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v6 + 288));
    v49 = v54 == 1;
  }
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v6 + 256));
  if ( v49 )
    goto LABEL_56;
LABEL_83:
  std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v6 + 96));
  result = v5;
  if ( v85 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8028) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1757: range 000000000E2FC1F4-000000000E2FC393
void __cdecl GCGSkillLogic::changeOnStageCharater(GCGEffectBase const&,proto::GCGControllerValue,data::GCGEffectSelectNextOnstageType,GCGSkillUseParam const&)::{lambda(unsigned int)#1}::operator()(
        const GCGSkillLogic::changeOnStageCharater::<lambda(uint32_t)> *const __closure,
        uint32_t target_guid)
{
  GCGSkillLogic *this; // rax
  GCGSkillLogic *v3; // rax
  unsigned int *v4; // r8
  GCGCharacterZone *CharacterZone; // rcx
  GCGSkillPreviewContext *preview_ctx; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__this);
  this = __closure->__this;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  if ( GCGGameMode::isDuringSnapshot(this->game_mode_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__this);
    v3 = __closure->__this;
    if ( *(_BYTE *)(((unsigned __int64)&v3->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&v3->game_mode_);
    preview_ctx = GCGGameMode::getSkillPreviewContext(v3->game_mode_);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__cur_onstage_character_guid >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&__closure->__cur_onstage_character_guid >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&__closure->__cur_onstage_character_guid);
    }
    GCGSkillPreviewContext::recordPreviewOnstageCharacterChangeInfo(
      preview_ctx,
      __closure->__cur_onstage_character_guid,
      target_guid,
      __closure->__cur_onstage_character_guid,
      v4);
  }
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  CharacterZone = GCGField::getCharacterZone(__closure->__field);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__skill_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)__closure + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__closure->__skill_id >> 3)
                                                             + 0x7FFF8000) )
  {
    __asan_report_load4(&__closure->__skill_id);
  }
  GCGCharacterZone::setOnStageBySkill(CharacterZone, target_guid, __closure->__skill_id);
};

// Line 1769: range 000000000E2FC394-000000000E2FC478
ForeachPolicy __cdecl GCGSkillLogic::changeOnStageCharater(GCGEffectBase const&,proto::GCGControllerValue,data::GCGEffectSelectNextOnstageType,GCGSkillUseParam const&)::{lambda(GCGCard &)#2}::operator()(
        const GCGSkillLogic::changeOnStageCharater::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  uint32_t Guid; // ecx
  uint32_t *alive_charater_before_guid; // rbx
  uint32_t v5; // ecx

  Guid = GCGCard::getGuid(card);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__cur_onstage_character_guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__cur_onstage_character_guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&__closure->__cur_onstage_character_guid);
  }
  if ( Guid == __closure->__cur_onstage_character_guid )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  alive_charater_before_guid = __closure->__alive_charater_before_guid;
  v5 = GCGCard::getGuid(card);
  if ( *(_BYTE *)(((unsigned __int64)alive_charater_before_guid >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)alive_charater_before_guid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)alive_charater_before_guid >> 3)
                                                                                 + 0x7FFF8000) )
  {
    __asan_report_store4(alive_charater_before_guid);
  }
  *alive_charater_before_guid = v5;
  return 1;
};

// Line 1790: range 000000000E2FC47A-000000000E2FC55E
ForeachPolicy __cdecl GCGSkillLogic::changeOnStageCharater(GCGEffectBase const&,proto::GCGControllerValue,data::GCGEffectSelectNextOnstageType,GCGSkillUseParam const&)::{lambda(GCGCard &)#3}::operator()(
        const GCGSkillLogic::changeOnStageCharater::<lambda(GCGCard&)>_0 *const __closure,
        GCGCard *card)
{
  uint32_t Guid; // ecx
  uint32_t *alive_character_after_guid; // rbx
  uint32_t v5; // ecx

  Guid = GCGCard::getGuid(card);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__cur_onstage_character_guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__cur_onstage_character_guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&__closure->__cur_onstage_character_guid);
  }
  if ( Guid == __closure->__cur_onstage_character_guid )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  alive_character_after_guid = __closure->__alive_character_after_guid;
  v5 = GCGCard::getGuid(card);
  if ( *(_BYTE *)(((unsigned __int64)alive_character_after_guid >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)alive_character_after_guid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)alive_character_after_guid >> 3)
                                                                                 + 0x7FFF8000) )
  {
    __asan_report_store4(alive_character_after_guid);
  }
  *alive_character_after_guid = v5;
  return 1;
};

// Line 1921: range 000000000E2FE2E8-000000000E2FE7F0
void __cdecl GCGSkillLogic::reviseTagReplacePay(
        GCGSkillLogic *const this,
        std::map<data::GCGCostType,unsigned int> *input_output_cost_map,
        GCGSkillResult *skill_result)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::tuple_element<1,std::pair<const data::GCGCostType,unsigned int> >::type *v6; // rax
  std::map<data::GCGEffectCostType,std::vector<GCGSkillPreviewCostPayInfo>>::key_type __k; // [rsp+28h] [rbp-138h] BYREF
  uint32_t need_cost_num; // [rsp+2Ch] [rbp-134h]
  std::map<data::GCGCostType,unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-130h] BYREF
  std::map<data::GCGCostType,unsigned int>::iterator __for_end; // [rsp+38h] [rbp-128h] BYREF
  std::vector<GCGSkillPreviewCostPayInfo> *pay_info_vec; // [rsp+40h] [rbp-120h]
  std::map<data::GCGCostType,unsigned int> *__for_range; // [rsp+48h] [rbp-118h]
  std::vector<std::function<int()>> *delay_func_vec; // [rsp+50h] [rbp-110h]
  std::vector<GCGSkillPreviewCostPayInfo> *__for_range_0; // [rsp+58h] [rbp-108h]
  GCGSkillPreviewCostPayInfo *pay_info; // [rsp+60h] [rbp-100h]
  std::pair<const data::GCGCostType,unsigned int> *__in; // [rsp+68h] [rbp-F8h]
  std::tuple_element<0,std::pair<const data::GCGCostType,unsigned int> >::type *_; // [rsp+70h] [rbp-F0h]
  std::tuple_element<1,std::pair<const data::GCGCostType,unsigned int> >::type *cost_num; // [rsp+78h] [rbp-E8h]
  GCGSkillLogic::reviseTagReplacePay::<lambda()> p___f; // [rsp+80h] [rbp-E0h] BYREF
  std::function<int()> __x; // [rsp+A0h] [rbp-C0h] BYREF
  char v22[160]; // [rsp+C0h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 14 skill_ptr:1956 64 32 13 pay_func:1941";
  *(_QWORD *)(v3 + 16) = GCGSkillLogic::reviseTagReplacePay;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862723] = -202116109;
  __k = GCG_COST_DICE_PAIMON_0;
  pay_info_vec = std::map<data::GCGEffectCostType,std::vector<GCGSkillPreviewCostPayInfo>>::operator[](
                   &skill_result->pay_card_replace_pay_preview_map,
                   &__k);
  need_cost_num = 0;
  __for_range = input_output_cost_map;
  __for_begin._M_node = std::map<data::GCGCostType,unsigned int>::begin(input_output_cost_map)._M_node;
  __for_end._M_node = std::map<data::GCGCostType,unsigned int>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<data::GCGCostType const,unsigned int>>::operator*(&__for_begin);
    _ = std::get<0ul,data::GCGCostType const,unsigned int>(__in);
    v6 = std::get<1ul,data::GCGCostType const,unsigned int>(__in);
    cost_num = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    need_cost_num += *cost_num;
    std::_Rb_tree_iterator<std::pair<data::GCGCostType const,unsigned int>>::operator++(&__for_begin);
  }
  if ( need_cost_num )
  {
    delay_func_vec = &skill_result->cur_real_task_effect_delay_func_vec;
    __for_range_0 = pay_info_vec;
    __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<const data::GCGCostType,unsigned int> >::_Base_ptr)std::vector<GCGSkillPreviewCostPayInfo>::begin(pay_info_vec)._M_current;
    __for_end._M_node = (std::_Rb_tree_iterator<std::pair<const data::GCGCostType,unsigned int> >::_Base_ptr)std::vector<GCGSkillPreviewCostPayInfo>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<GCGSkillPreviewCostPayInfo *,std::vector<GCGSkillPreviewCostPayInfo>>(
              (const __gnu_cxx::__normal_iterator<GCGSkillPreviewCostPayInfo*,std::vector<GCGSkillPreviewCostPayInfo> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<GCGSkillPreviewCostPayInfo*,std::vector<GCGSkillPreviewCostPayInfo> > *)&__for_end) )
    {
      pay_info = __gnu_cxx::__normal_iterator<GCGSkillPreviewCostPayInfo *,std::vector<GCGSkillPreviewCostPayInfo>>::operator*((const __gnu_cxx::__normal_iterator<GCGSkillPreviewCostPayInfo*,std::vector<GCGSkillPreviewCostPayInfo> > *const)&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)&pay_info->token_num >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&pay_info->token_num >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&pay_info->token_num);
      }
      if ( need_cost_num <= pay_info->token_num )
      {
        *(_DWORD *)(v3 + 64) = need_cost_num;
        std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 72), &pay_info->cost_card_ptr);
        if ( *(_BYTE *)(((unsigned __int64)&pay_info->token_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&pay_info->token_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&pay_info->token_type);
        }
        *(_DWORD *)(v3 + 88) = pay_info->token_type;
        std::weak_ptr<GCGSkill>::lock((const std::weak_ptr<GCGSkill> *const)(v3 + 32));
        if ( std::operator!=<GCGSkill>(0LL, (const std::shared_ptr<GCGSkill> *)(v3 + 32)) )
          std::vector<std::shared_ptr<GCGSkill>>::push_back(
            &skill_result->cur_real_take_effect_skill_ptr_vec,
            (const std::vector<std::shared_ptr<GCGSkill>>::value_type *)(v3 + 32));
        GCGSkillLogic::reviseTagReplacePay(std::map<data::GCGCostType,unsigned int> &,GCGSkillResult &)::{lambda(void)#1}::GCGSkillResult(
          &p___f,
          (const GCGSkillLogic::reviseTagReplacePay::<lambda()> *)(v3 + 64));
        std::function<int ()(void)>::function<GCGSkillLogic::reviseTagReplacePay(std::map<data::GCGCostType,unsigned int> &,GCGSkillResult &)::{lambda(void)#1},void,void>(
          &__x,
          &p___f);
        std::vector<std::function<int ()(void)>>::push_back(delay_func_vec, &__x);
        std::function<int ()(void)>::~function(&__x);
        GCGSkillLogic::reviseTagReplacePay(std::map<data::GCGCostType,unsigned int> &,GCGSkillResult &)::{lambda(void)#1}::~GCGSkillResult(&p___f);
        if ( *(_BYTE *)(((unsigned __int64)&pay_info->token_num >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&pay_info->token_num >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&pay_info->token_num);
        }
        pay_info->token_num -= need_cost_num;
        std::map<data::GCGCostType,unsigned int>::clear(input_output_cost_map);
        std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v3 + 32));
        GCGSkillLogic::reviseTagReplacePay(std::map<data::GCGCostType,unsigned int> &,GCGSkillResult &)::{lambda(void)#1}::~GCGSkillResult((GCGSkillLogic::reviseTagReplacePay::<lambda()> *const)(v3 + 64));
        break;
      }
      __gnu_cxx::__normal_iterator<GCGSkillPreviewCostPayInfo *,std::vector<GCGSkillPreviewCostPayInfo>>::operator++((__gnu_cxx::__normal_iterator<GCGSkillPreviewCostPayInfo*,std::vector<GCGSkillPreviewCostPayInfo> > *const)&__for_begin);
    }
  }
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1941: range 000000000E2FDF16-000000000E2FE1B9
int32_t __cdecl GCGSkillLogic::reviseTagReplacePay(std::map<data::GCGCostType,unsigned int> &,GCGSkillResult &)::{lambda(void)#1}::operator()(
        const GCGSkillLogic::reviseTagReplacePay::<lambda()> *const __closure)
{
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rcx
  GCGCard *p_token_type; // rdi
  unsigned int pay_num; // edx
  common::milog::MiLogStream *v5; // rbx
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  unsigned int token_type; // [rsp+18h] [rbp-58h] BYREF
  unsigned int cur_token_num; // [rsp+1Ch] [rbp-54h]
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-50h] BYREF
  std::string val; // [rsp+40h] [rbp-30h] BYREF

  if ( std::operator==<GCGCard>(0LL, &__closure->__card_ptr) )
    return -1;
  v2 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__closure->__card_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__token_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__token_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&__closure->__token_type);
  }
  cur_token_num = GCGCard::getToken(v2, __closure->__token_type);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(__closure);
  }
  if ( cur_token_num < __closure->__pay_num )
    return -1;
  p_token_type = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__closure->__card_ptr);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    p_token_type = (GCGCard *)__closure;
    __asan_report_load4(__closure);
  }
  pay_num = __closure->__pay_num;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__token_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__token_type >> 3) + 0x7FFF8000) <= 3 )
  {
    p_token_type = (GCGCard *)&__closure->__token_type;
    __asan_report_load4(&__closure->__token_type);
  }
  GCGCard::subToken(p_token_type, __closure->__token_type, pay_num, GCG_REASON_EFFECT);
  common::milog::MiLogStream::create(
    &v14,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/skill/gcg_skill_logic.cpp",
    "operator()",
    1953);
  v5 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v14, (const char (*)[17])"ReplacePay card:");
  v6 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__closure->__card_ptr);
  GCGCard::getDesc[abi:cxx11](&val, v6);
  v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &val);
  v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])", token_type:");
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__token_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__token_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&__closure->__token_type);
  }
  token_type = __closure->__token_type;
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &token_type);
  v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])", pay_num:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &__closure->__pay_num);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v14);
  return 0;
};

// Line 1941: range 000000000E340EC8-000000000E340FD5
void __cdecl GCGSkillLogic::reviseTagReplacePay(std::map<data::GCGCostType,unsigned int> &,GCGSkillResult &)::{lambda(void)#1}::GCGSkillResult(
        GCGSkillLogic::reviseTagReplacePay::<lambda()> *const this,
        GCGSkillLogic::reviseTagReplacePay::<lambda()> *a2)
{
  unsigned int pay_num; // ecx
  data::GCGTokenType token_type; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  pay_num = a2->__pay_num;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->__pay_num = pay_num;
  std::shared_ptr<GCGCard>::shared_ptr(&this->__card_ptr, &a2->__card_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__token_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->__token_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->__token_type);
  }
  token_type = a2->__token_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->__token_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->__token_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->__token_type);
  }
  this->__token_type = token_type;
};

// Line 1941: range 000000000E2FE1DA-000000000E2FE2E7
void __cdecl GCGSkillLogic::reviseTagReplacePay(std::map<data::GCGCostType,unsigned int> &,GCGSkillResult &)::{lambda(void)#1}::GCGSkillResult(
        GCGSkillLogic::reviseTagReplacePay::<lambda()> *const this,
        const GCGSkillLogic::reviseTagReplacePay::<lambda()> *a2)
{
  unsigned int pay_num; // ecx
  data::GCGTokenType token_type; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  pay_num = a2->__pay_num;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->__pay_num = pay_num;
  std::shared_ptr<GCGCard>::shared_ptr(&this->__card_ptr, &a2->__card_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__token_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->__token_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->__token_type);
  }
  token_type = a2->__token_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->__token_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->__token_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->__token_type);
  }
  this->__token_type = token_type;
};

// Line 1941: range 000000000E2FE1BA-000000000E2FE1D8
void __cdecl GCGSkillLogic::reviseTagReplacePay(std::map<data::GCGCostType,unsigned int> &,GCGSkillResult &)::{lambda(void)#1}::~GCGSkillResult(
        GCGSkillLogic::reviseTagReplacePay::<lambda()> *const this)
{
  std::shared_ptr<GCGCard>::~shared_ptr(&this->__card_ptr);
};

// Line 1977: range 000000000E2FE84E-000000000E2FEE72
void __fastcall GCGSkillLogic::updateSpecialCostTypeRevise(
        GCGSkillLogic *const this,
        std::map<data::GCGCostType,unsigned int> *input_output_cost_map,
        GCGCostType cost_type,
        GCGEffectCostType effect_cost_type,
        GCGSkillResult *skill_result)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  std::map<data::GCGCostType,unsigned int>::mapped_type *v8; // rax
  _DWORD *v9; // rdx
  std::map<data::GCGCostType,unsigned int>::mapped_type *v11; // rax
  uint32_t *v12; // rdx
  std::map<data::GCGCostType,unsigned int>::mapped_type *v13; // rax
  _DWORD *v14; // rdx
  int v15; // r14d
  unsigned __int64 v16; // rax
  int v17; // esi
  GCGSkillPreviewUseInfo *M_current; // r14
  std::vector<GCGSkillPreviewUseInfo>::iterator v19; // rax
  GCGSkillLogic::updateSpecialCostTypeRevise::<lambda(const GCGSkillPreviewUseInfo&)> v20; // dl
  uint32_t need_cost_num; // [rsp+24h] [rbp-ECh]
  __gnu_cxx::__normal_iterator<GCGSkillPreviewUseInfo*,std::vector<GCGSkillPreviewUseInfo> > v26; // [rsp+28h] [rbp-E8h] BYREF
  __gnu_cxx::__normal_iterator<GCGSkillPreviewUseInfo*,std::vector<GCGSkillPreviewUseInfo> > __i; // [rsp+30h] [rbp-E0h] BYREF
  std::vector<GCGSkillPreviewUseInfo>::iterator __for_begin; // [rsp+38h] [rbp-D8h] BYREF
  std::vector<GCGSkillPreviewUseInfo>::iterator __for_end; // [rsp+40h] [rbp-D0h] BYREF
  std::vector<GCGSkillPreviewUseInfo> *reduce_skill_info_vec; // [rsp+48h] [rbp-C8h]
  std::vector<GCGSkillPreviewUseInfo> *__for_range; // [rsp+50h] [rbp-C0h]
  GCGSkillPreviewUseInfo *skill_info; // [rsp+58h] [rbp-B8h]
  char v33[176]; // [rsp+60h] [rbp-B0h] BYREF

  v5 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 1 12 rm_func:2021 64 4 14 cost_type:1976 80 4 21 effect_cost_type:1976 96 16 14 skill_ptr:1997";
  *(_QWORD *)(v5 + 16) = GCGSkillLogic::updateSpecialCostTypeRevise;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -234556924;
  v7[536862723] = -202178560;
  *(_DWORD *)(v5 + 64) = cost_type;
  *(_DWORD *)(v5 + 80) = effect_cost_type;
  if ( std::map<data::GCGCostType,unsigned int>::count(
         input_output_cost_map,
         (const std::map<data::GCGCostType,unsigned int>::key_type *)(v5 + 64))
    && std::map<data::GCGEffectCostType,std::vector<GCGSkillPreviewUseInfo>>::count(
         &skill_result->dice_cost_revise_preview_skills_map,
         (const std::map<data::GCGEffectCostType,std::vector<GCGSkillPreviewUseInfo>>::key_type *)(v5 + 80)) )
  {
    reduce_skill_info_vec = std::map<data::GCGEffectCostType,std::vector<GCGSkillPreviewUseInfo>>::operator[](
                              &skill_result->dice_cost_revise_preview_skills_map,
                              (const std::map<data::GCGEffectCostType,std::vector<GCGSkillPreviewUseInfo>>::key_type *)(v5 + 80));
    v8 = std::map<data::GCGCostType,unsigned int>::operator[](
           input_output_cost_map,
           (const std::map<data::GCGCostType,unsigned int>::key_type *)(v5 + 64));
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    if ( *v9 && !std::vector<GCGSkillPreviewUseInfo>::empty(reduce_skill_info_vec) )
    {
      __for_range = reduce_skill_info_vec;
      __for_begin._M_current = std::vector<GCGSkillPreviewUseInfo>::begin(reduce_skill_info_vec)._M_current;
      __for_end._M_current = std::vector<GCGSkillPreviewUseInfo>::end(reduce_skill_info_vec)._M_current;
      while ( __gnu_cxx::operator!=<GCGSkillPreviewUseInfo *,std::vector<GCGSkillPreviewUseInfo>>(
                &__for_begin,
                &__for_end) )
      {
        skill_info = __gnu_cxx::__normal_iterator<GCGSkillPreviewUseInfo *,std::vector<GCGSkillPreviewUseInfo>>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)&skill_info->cost_num >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&skill_info->cost_num >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&skill_info->cost_num);
        }
        if ( skill_info->cost_num )
        {
          std::weak_ptr<GCGSkill>::lock((const std::weak_ptr<GCGSkill> *const)(v5 + 96));
          if ( std::operator!=<GCGSkill>((const std::shared_ptr<GCGSkill> *)(v5 + 96), 0LL) )
            std::vector<std::shared_ptr<GCGSkill>>::push_back(
              &skill_result->cur_real_take_effect_skill_ptr_vec,
              (const std::vector<std::shared_ptr<GCGSkill>>::value_type *)(v5 + 96));
          v11 = std::map<data::GCGCostType,unsigned int>::operator[](
                  input_output_cost_map,
                  (const std::map<data::GCGCostType,unsigned int>::key_type *)(v5 + 64));
          v12 = v11;
          if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v11);
          }
          need_cost_num = *v12;
          if ( *(_BYTE *)(((unsigned __int64)&skill_info->cost_num >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&skill_info->cost_num >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&skill_info->cost_num);
          }
          if ( need_cost_num > skill_info->cost_num )
          {
            v16 = (unsigned __int64)std::map<data::GCGCostType,unsigned int>::operator[](
                                      input_output_cost_map,
                                      (const std::map<data::GCGCostType,unsigned int>::key_type *)(v5 + 64));
            if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) != 0
              && (char)((v16 & 7) + 3) >= *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
            {
              v16 = __asan_report_load4(v16);
            }
            v17 = *(_DWORD *)v16;
            if ( *(_BYTE *)(((unsigned __int64)&skill_info->cost_num >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&skill_info->cost_num >> 3) + 0x7FFF8000) <= 3 )
            {
              v16 = __asan_report_load4(&skill_info->cost_num);
            }
            *(_DWORD *)v16 = v17 - skill_info->cost_num;
            skill_info->cost_num = 0;
            v15 = 1;
          }
          else
          {
            skill_info->cost_num -= need_cost_num;
            v13 = std::map<data::GCGCostType,unsigned int>::operator[](
                    input_output_cost_map,
                    (const std::map<data::GCGCostType,unsigned int>::key_type *)(v5 + 64));
            v14 = v13;
            if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(v13);
            }
            *v14 = 0;
            std::map<data::GCGCostType,unsigned int>::erase(
              input_output_cost_map,
              (const std::map<data::GCGCostType,unsigned int>::key_type *)(v5 + 64));
            v15 = 0;
          }
          std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v5 + 96));
          if ( v15 != 1 )
            break;
        }
        __gnu_cxx::__normal_iterator<GCGSkillPreviewUseInfo *,std::vector<GCGSkillPreviewUseInfo>>::operator++(&__for_begin);
      }
      __i._M_current = std::vector<GCGSkillPreviewUseInfo>::end(reduce_skill_info_vec)._M_current;
      __gnu_cxx::__normal_iterator<GCGSkillPreviewUseInfo const*,std::vector<GCGSkillPreviewUseInfo>>::__normal_iterator<GCGSkillPreviewUseInfo*>(
        (__gnu_cxx::__normal_iterator<const GCGSkillPreviewUseInfo*,std::vector<GCGSkillPreviewUseInfo> > *const)&__for_end,
        &__i);
      M_current = std::vector<GCGSkillPreviewUseInfo>::end(reduce_skill_info_vec)._M_current;
      v19._M_current = std::vector<GCGSkillPreviewUseInfo>::begin(reduce_skill_info_vec)._M_current;
      v26._M_current = std::remove_if<__gnu_cxx::__normal_iterator<GCGSkillPreviewUseInfo *,std::vector<GCGSkillPreviewUseInfo>>,GCGSkillLogic::updateSpecialCostTypeRevise(std::map<data::GCGCostType,unsigned int> &,data::GCGCostType,data::GCGEffectCostType,GCGSkillResult &)::{lambda(GCGSkillPreviewUseInfo const&)#1}>(
                         v19,
                         (__gnu_cxx::__normal_iterator<GCGSkillPreviewUseInfo*,std::vector<GCGSkillPreviewUseInfo> >)M_current,
                         v20)._M_current;
      __gnu_cxx::__normal_iterator<GCGSkillPreviewUseInfo const*,std::vector<GCGSkillPreviewUseInfo>>::__normal_iterator<GCGSkillPreviewUseInfo*>(
        (__gnu_cxx::__normal_iterator<const GCGSkillPreviewUseInfo*,std::vector<GCGSkillPreviewUseInfo> > *const)&__for_begin,
        &v26);
      std::vector<GCGSkillPreviewUseInfo>::erase(
        reduce_skill_info_vec,
        (std::vector<GCGSkillPreviewUseInfo>::const_iterator)__for_begin._M_current,
        (std::vector<GCGSkillPreviewUseInfo>::const_iterator)__for_end._M_current);
      if ( std::vector<GCGSkillPreviewUseInfo>::empty(reduce_skill_info_vec) )
        std::map<data::GCGEffectCostType,std::vector<GCGSkillPreviewUseInfo>>::erase(
          &skill_result->dice_cost_revise_preview_skills_map,
          (const std::map<data::GCGEffectCostType,std::vector<GCGSkillPreviewUseInfo>>::key_type *)(v5 + 80));
    }
  }
  if ( v33 == (char *)v5 )
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
};

// Line 2021: range 000000000E2FE7F2-000000000E2FE84D
bool __cdecl GCGSkillLogic::updateSpecialCostTypeRevise(std::map<data::GCGCostType,unsigned int> &,data::GCGCostType,data::GCGEffectCostType,GCGSkillResult &)::{lambda(GCGSkillPreviewUseInfo const&)#1}::operator()(
        const GCGSkillLogic::updateSpecialCostTypeRevise::<lambda(const GCGSkillPreviewUseInfo&)> *const __closure,
        const GCGSkillPreviewUseInfo *skill_preview_use_info)
{
  if ( *(_BYTE *)(((unsigned __int64)&skill_preview_use_info->cost_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&skill_preview_use_info->cost_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&skill_preview_use_info->cost_num);
  }
  return skill_preview_use_info->cost_num == 0;
};

// Line 2042: range 000000000E2FEE74-000000000E2FF43B
std::string *__cdecl GCGSkillLogic::getCurrentDiceReduceCostSnapshot[abi:cxx11](
        std::string *retstr,
        GCGSkillLogic *const this,
        const std::map<data::GCGCostType,unsigned int> *input_output_cost_map,
        const GCGSkillResult *skill_result)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v9; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v10; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v11; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v12; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v13; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v14; // rax
  std::map<data::GCGEffectCostType,std::vector<GCGSkillPreviewUseInfo>>::const_iterator __for_begin_0; // [rsp+20h] [rbp-D0h] BYREF
  std::map<data::GCGEffectCostType,std::vector<GCGSkillPreviewUseInfo>>::const_iterator __for_end_0; // [rsp+28h] [rbp-C8h] BYREF
  std::map<data::GCGCostType,unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-C0h] BYREF
  std::map<data::GCGCostType,unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-B8h] BYREF
  const std::map<data::GCGCostType,unsigned int> *__for_range; // [rsp+40h] [rbp-B0h]
  const std::map<data::GCGEffectCostType,std::vector<GCGSkillPreviewUseInfo>> *__for_range_0; // [rsp+48h] [rbp-A8h]
  const std::pair<const data::GCGEffectCostType,std::vector<GCGSkillPreviewUseInfo> > *v24; // [rsp+50h] [rbp-A0h]
  std::tuple_element<0,const std::pair<const data::GCGEffectCostType,std::vector<GCGSkillPreviewUseInfo> > >::type *effect_cost_type; // [rsp+58h] [rbp-98h]
  std::tuple_element<1,const std::pair<const data::GCGEffectCostType,std::vector<GCGSkillPreviewUseInfo> > >::type *skill_use_info_vec; // [rsp+60h] [rbp-90h]
  const std::vector<GCGSkillPreviewUseInfo> *__for_range_1; // [rsp+68h] [rbp-88h]
  const GCGSkillPreviewUseInfo *skill_use_info; // [rsp+70h] [rbp-80h]
  const std::pair<const data::GCGCostType,unsigned int> *v29; // [rsp+78h] [rbp-78h]
  std::tuple_element<0,const std::pair<const data::GCGCostType,unsigned int> >::type *cost_type; // [rsp+80h] [rbp-70h]
  std::tuple_element<1,const std::pair<const data::GCGCostType,unsigned int> >::type *cost_num; // [rsp+88h] [rbp-68h]
  char v32[96]; // [rsp+90h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 26 reduce_cost_detail_ss:2043";
  *(_QWORD *)(v4 + 16) = GCGSkillLogic::getCurrentDiceReduceCostSnapshot[abi:cxx11];
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 32));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 32),
    "COST");
  __for_range = input_output_cost_map;
  __for_begin._M_node = std::map<data::GCGCostType,unsigned int>::begin(input_output_cost_map)._M_node;
  __for_end._M_node = std::map<data::GCGCostType,unsigned int>::end(input_output_cost_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v29 = std::_Rb_tree_const_iterator<std::pair<data::GCGCostType const,unsigned int>>::operator*(&__for_begin);
    cost_type = std::get<0ul,data::GCGCostType const,unsigned int>(v29);
    cost_num = (std::tuple_element<1,const std::pair<const data::GCGCostType,unsigned int> >::type *)std::get<1ul,data::GCGCostType const,unsigned int>(v29);
    v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
           (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 32),
           "[");
    if ( *(_BYTE *)(((unsigned __int64)cost_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)cost_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cost_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(cost_type);
    }
    v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, *cost_type);
    v9 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, ":");
    if ( *(_BYTE *)(((unsigned __int64)cost_num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)cost_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cost_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(cost_num);
    }
    v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v9, *cost_num);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v10, "]");
    std::_Rb_tree_const_iterator<std::pair<data::GCGCostType const,unsigned int>>::operator++(&__for_begin);
  }
  if ( std::map<data::GCGCostType,unsigned int>::empty(input_output_cost_map) )
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
      (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 32),
      "[]");
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 32),
    "REDUCE");
  __for_range_0 = &skill_result->dice_cost_revise_preview_skills_map;
  __for_begin_0._M_node = std::map<data::GCGEffectCostType,std::vector<GCGSkillPreviewUseInfo>>::begin(&skill_result->dice_cost_revise_preview_skills_map)._M_node;
  __for_end_0._M_node = std::map<data::GCGEffectCostType,std::vector<GCGSkillPreviewUseInfo>>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin_0, &__for_end_0) )
  {
    v24 = std::_Rb_tree_const_iterator<std::pair<data::GCGEffectCostType const,std::vector<GCGSkillPreviewUseInfo>>>::operator*(&__for_begin_0);
    effect_cost_type = std::get<0ul,data::GCGEffectCostType const,std::vector<GCGSkillPreviewUseInfo>>(v24);
    skill_use_info_vec = (std::tuple_element<1,const std::pair<const data::GCGEffectCostType,std::vector<GCGSkillPreviewUseInfo> > >::type *)std::get<1ul,data::GCGEffectCostType const,std::vector<GCGSkillPreviewUseInfo>>(v24);
    if ( *(_BYTE *)(((unsigned __int64)effect_cost_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)effect_cost_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)effect_cost_type >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(effect_cost_type);
    }
    if ( *effect_cost_type != GCG_COST_ENERGY_0 )
    {
      __for_range_1 = skill_use_info_vec;
      __for_begin._M_node = (std::_Rb_tree_const_iterator<std::pair<const data::GCGCostType,unsigned int> >::_Base_ptr)std::vector<GCGSkillPreviewUseInfo>::begin(skill_use_info_vec)._M_current;
      __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<const data::GCGCostType,unsigned int> >::_Base_ptr)std::vector<GCGSkillPreviewUseInfo>::end(__for_range_1)._M_current;
      while ( __gnu_cxx::operator!=<GCGSkillPreviewUseInfo const*,std::vector<GCGSkillPreviewUseInfo>>(
                (const __gnu_cxx::__normal_iterator<const GCGSkillPreviewUseInfo*,std::vector<GCGSkillPreviewUseInfo> > *)&__for_begin,
                (const __gnu_cxx::__normal_iterator<const GCGSkillPreviewUseInfo*,std::vector<GCGSkillPreviewUseInfo> > *)&__for_end) )
      {
        skill_use_info = __gnu_cxx::__normal_iterator<GCGSkillPreviewUseInfo const*,std::vector<GCGSkillPreviewUseInfo>>::operator*((const __gnu_cxx::__normal_iterator<const GCGSkillPreviewUseInfo*,std::vector<GCGSkillPreviewUseInfo> > *const)&__for_begin);
        v11 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 32),
                "[");
        if ( *(_BYTE *)(((unsigned __int64)effect_cost_type >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)effect_cost_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)effect_cost_type >> 3)
                                                                             + 0x7FFF8000) )
        {
          __asan_report_load4(effect_cost_type);
        }
        v12 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v11, *effect_cost_type);
        v13 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v12, ":");
        if ( *(_BYTE *)(((unsigned __int64)&skill_use_info->cost_num >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&skill_use_info->cost_num >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&skill_use_info->cost_num);
        }
        v14 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v13, skill_use_info->cost_num);
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v14, "]");
        __gnu_cxx::__normal_iterator<GCGSkillPreviewUseInfo const*,std::vector<GCGSkillPreviewUseInfo>>::operator++((__gnu_cxx::__normal_iterator<const GCGSkillPreviewUseInfo*,std::vector<GCGSkillPreviewUseInfo> > *const)&__for_begin);
      }
    }
    std::_Rb_tree_const_iterator<std::pair<data::GCGEffectCostType const,std::vector<GCGSkillPreviewUseInfo>>>::operator++(&__for_begin_0);
  }
  if ( std::map<data::GCGEffectCostType,std::vector<GCGSkillPreviewUseInfo>>::empty(&skill_result->dice_cost_revise_preview_skills_map) )
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
      (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 32),
      "[]");
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    retstr,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 32));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 32));
  if ( v32 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 2086: range 000000000E2FF43C-000000000E2FFC56
void __cdecl GCGSkillLogic::reviseDiceCost(
        GCGSkillLogic *const this,
        std::map<data::GCGCostType,unsigned int> *input_output_cost_map,
        GCGSkillResult *skill_result)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // rbx
  std::tuple_element<1,std::pair<const data::GCGCostType,std::pair<data::GCGEffectCostType,proto::GCGDiceSideType> > >::type *v7; // rax
  data::GCGEffectCostType first; // ecx
  data::GCGEffectCostType *v9; // rax
  data::GCGEffectCostType *v10; // rdx
  __gnu_cxx::__normal_iterator<data::GCGCostType*,std::vector<data::GCGCostType> >::reference v11; // rax
  data::GCGCostType *v12; // rdx
  std::initializer_list<std::pair<const data::GCGCostType,std::pair<data::GCGEffectCostType,proto::GCGDiceSideType> > > __l; // [rsp+10h] [rbp-200h]
  std::less<data::GCGCostType> __comp; // [rsp+42h] [rbp-1CEh] BYREF
  std::allocator<std::pair<const data::GCGCostType,std::pair<data::GCGEffectCostType,proto::GCGDiceSideType> > > __a; // [rsp+43h] [rbp-1CDh] BYREF
  std::map<data::GCGCostType,unsigned int>::key_type __x; // [rsp+44h] [rbp-1CCh] BYREF
  data::GCGEffectCostType effect_cost_type; // [rsp+48h] [rbp-1C8h]
  data::GCGCostType cost_type; // [rsp+4Ch] [rbp-1C4h]
  std::map<data::GCGCostType,std::pair<data::GCGEffectCostType,proto::GCGDiceSideType>>::iterator __for_begin; // [rsp+50h] [rbp-1C0h] BYREF
  std::map<data::GCGCostType,std::pair<data::GCGEffectCostType,proto::GCGDiceSideType>>::iterator __for_end; // [rsp+58h] [rbp-1B8h] BYREF
  std::map<data::GCGCostType,std::pair<data::GCGEffectCostType,proto::GCGDiceSideType>> *__for_range; // [rsp+60h] [rbp-1B0h]
  std::set<data::GCGEffectCostType> *__for_range_0; // [rsp+68h] [rbp-1A8h]
  std::vector<data::GCGCostType> *__for_range_1; // [rsp+70h] [rbp-1A0h]
  std::pair<const data::GCGCostType,std::pair<data::GCGEffectCostType,proto::GCGDiceSideType> > *__in; // [rsp+78h] [rbp-198h]
  std::tuple_element<0,std::pair<const data::GCGCostType,std::pair<data::GCGEffectCostType,proto::GCGDiceSideType> > >::type *cur_cost_type; // [rsp+80h] [rbp-190h]
  std::tuple_element<1,std::pair<const data::GCGCostType,std::pair<data::GCGEffectCostType,proto::GCGDiceSideType> > >::type *effect_to_dice_pair; // [rsp+88h] [rbp-188h]
  std::initializer_list<data::GCGCostType> v28; // [rsp+90h] [rbp-180h] BYREF
  int v29; // [rsp+A0h] [rbp-170h]
  int v30; // [rsp+A4h] [rbp-16Ch]
  int v31; // [rsp+A8h] [rbp-168h]
  int v32; // [rsp+ACh] [rbp-164h]
  int v33; // [rsp+B0h] [rbp-160h]
  int v34; // [rsp+B4h] [rbp-15Ch]
  int v35[24]; // [rsp+C0h] [rbp-150h] BYREF
  char v36[240]; // [rsp+120h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 24 19 cost_order_vec:2124 112 48 20 effect_cost_set:2103";
  *(_QWORD *)(v3 + 16) = GCGSkillLogic::reviseDiceCost;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -218959360;
  v5[536862723] = 62194;
  v5[536862725] = -202116109;
  if ( !(_BYTE)`guard variable for'GCGSkillLogic::reviseDiceCost(std::map<data::GCGCostType,unsigned int> &,GCGSkillResult &)::cost_to_effect_map
    && __cxa_guard_acquire(&`guard variable for'GCGSkillLogic::reviseDiceCost(std::map<data::GCGCostType,unsigned int> &,GCGSkillResult &)::cost_to_effect_map) )
  {
    v35[0] = 11;
    v35[1] = 11;
    v35[2] = 1;
    v35[3] = 12;
    v35[4] = 12;
    v35[5] = 2;
    v35[6] = 13;
    v35[7] = 13;
    v35[8] = 3;
    v35[9] = 14;
    v35[10] = 14;
    v35[11] = 4;
    v35[12] = 15;
    v35[13] = 15;
    v35[14] = 5;
    v35[15] = 16;
    v35[16] = 16;
    v35[17] = 6;
    v35[18] = 17;
    v35[19] = 17;
    v35[20] = 7;
    __l._M_array = (std::initializer_list<std::pair<const data::GCGCostType,std::pair<data::GCGEffectCostType,proto::GCGDiceSideType> > >::iterator)v35;
    __l._M_len = 7LL;
    std::allocator<std::pair<data::GCGCostType const,std::pair<data::GCGEffectCostType,proto::GCGDiceSideType>>>::allocator(&__a);
    std::map<data::GCGCostType,std::pair<data::GCGEffectCostType,proto::GCGDiceSideType>>::map(
      &GCGSkillLogic::reviseDiceCost(std::map<data::GCGCostType,unsigned int> &,GCGSkillResult &)::cost_to_effect_map,
      __l,
      &__comp,
      &__a);
    __cxa_guard_release(&`guard variable for'GCGSkillLogic::reviseDiceCost(std::map<data::GCGCostType,unsigned int> &,GCGSkillResult &)::cost_to_effect_map);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::GCGCostType,std::pair<data::GCGEffectCostType,proto::GCGDiceSideType>>::~map,
      &GCGSkillLogic::reviseDiceCost(std::map<data::GCGCostType,unsigned int> &,GCGSkillResult &)::cost_to_effect_map,
      &_dso_handle);
    std::allocator<std::pair<data::GCGCostType const,std::pair<data::GCGEffectCostType,proto::GCGDiceSideType>>>::~allocator(&__a);
  }
  if ( !std::map<data::GCGCostType,unsigned int>::empty(input_output_cost_map)
    || !std::map<data::GCGEffectCostType,std::vector<GCGSkillPreviewUseInfo>>::empty(&skill_result->dice_cost_revise_preview_skills_map) )
  {
    GCGUtils::getElementSet<data::GCGEffectCostType>((std::set<data::GCGEffectCostType> *)(v3 + 112));
    GCGSkillLogic::updateSpecialCostTypeRevise(
      this,
      input_output_cost_map,
      GCG_COST_DICE_VOID,
      GCG_COST_DICE_VOID_0,
      skill_result);
    __for_range = &GCGSkillLogic::reviseDiceCost(std::map<data::GCGCostType,unsigned int> &,GCGSkillResult &)::cost_to_effect_map;
    __for_begin._M_node = std::map<data::GCGCostType,std::pair<data::GCGEffectCostType,proto::GCGDiceSideType>>::begin(&GCGSkillLogic::reviseDiceCost(std::map<data::GCGCostType,unsigned int> &,GCGSkillResult &)::cost_to_effect_map)._M_node;
    __for_end._M_node = std::map<data::GCGCostType,std::pair<data::GCGEffectCostType,proto::GCGDiceSideType>>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<data::GCGCostType const,std::pair<data::GCGEffectCostType,proto::GCGDiceSideType>>>::operator*(&__for_begin);
      cur_cost_type = std::get<0ul,data::GCGCostType const,std::pair<data::GCGEffectCostType,proto::GCGDiceSideType>>(__in);
      v7 = std::get<1ul,data::GCGCostType const,std::pair<data::GCGEffectCostType,proto::GCGDiceSideType>>(__in);
      effect_to_dice_pair = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      first = effect_to_dice_pair->first;
      if ( *(_BYTE *)(((unsigned __int64)cur_cost_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)cur_cost_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cur_cost_type >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(cur_cost_type);
      }
      GCGSkillLogic::updateSpecialCostTypeRevise(this, input_output_cost_map, *cur_cost_type, first, skill_result);
      std::_Rb_tree_iterator<std::pair<data::GCGCostType const,std::pair<data::GCGEffectCostType,proto::GCGDiceSideType>>>::operator++(&__for_begin);
    }
    __x = GCG_COST_DICE_VOID;
    if ( std::map<data::GCGCostType,unsigned int>::count(input_output_cost_map, &__x) )
    {
      __for_range_0 = (std::set<data::GCGEffectCostType> *)(v3 + 112);
      __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<const data::GCGCostType,std::pair<data::GCGEffectCostType,proto::GCGDiceSideType> > >::_Base_ptr)std::set<data::GCGEffectCostType>::begin((const std::set<data::GCGEffectCostType> *const)(v3 + 112))._M_node;
      __for_end._M_node = (std::_Rb_tree_iterator<std::pair<const data::GCGCostType,std::pair<data::GCGEffectCostType,proto::GCGDiceSideType> > >::_Base_ptr)std::set<data::GCGEffectCostType>::end(__for_range_0)._M_node;
      while ( std::operator!=(
                (const std::_Rb_tree_const_iterator<data::GCGEffectCostType>::_Self *)&__for_begin,
                (const std::_Rb_tree_const_iterator<data::GCGEffectCostType>::_Self *)&__for_end) )
      {
        v9 = (data::GCGEffectCostType *)std::_Rb_tree_const_iterator<data::GCGEffectCostType>::operator*((const std::_Rb_tree_const_iterator<data::GCGEffectCostType> *const)&__for_begin);
        v10 = v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v9);
        }
        effect_cost_type = *v10;
        GCGSkillLogic::updateSpecialCostTypeRevise(
          this,
          input_output_cost_map,
          GCG_COST_DICE_VOID,
          effect_cost_type,
          skill_result);
        std::_Rb_tree_const_iterator<data::GCGEffectCostType>::operator++((std::_Rb_tree_const_iterator<data::GCGEffectCostType> *const)&__for_begin);
      }
    }
    v28._M_array = (std::initializer_list<data::GCGCostType>::iterator)0x300000005LL;
    v28._M_len = 0xC0000000BLL;
    v29 = 13;
    v30 = 14;
    v31 = 15;
    v32 = 16;
    v33 = 17;
    v34 = 10;
    std::allocator<data::GCGCostType>::allocator((std::allocator<data::GCGCostType> *const)&__a);
    std::vector<data::GCGCostType>::vector(
      (std::vector<data::GCGCostType> *const)(v3 + 48),
      (std::initializer_list<data::GCGCostType>)__PAIR128__(10LL, &v28),
      (const std::vector<data::GCGCostType>::allocator_type *)&__a);
    std::allocator<data::GCGCostType>::~allocator((std::allocator<data::GCGCostType> *const)&__a);
    __for_range_1 = (std::vector<data::GCGCostType> *)(v3 + 48);
    __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<const data::GCGCostType,std::pair<data::GCGEffectCostType,proto::GCGDiceSideType> > >::_Base_ptr)std::vector<data::GCGCostType>::begin((std::vector<data::GCGCostType> *const)(v3 + 48))._M_current;
    __for_end._M_node = (std::_Rb_tree_iterator<std::pair<const data::GCGCostType,std::pair<data::GCGEffectCostType,proto::GCGDiceSideType> > >::_Base_ptr)std::vector<data::GCGCostType>::end(__for_range_1)._M_current;
    while ( __gnu_cxx::operator!=<data::GCGCostType *,std::vector<data::GCGCostType>>(
              (const __gnu_cxx::__normal_iterator<data::GCGCostType*,std::vector<data::GCGCostType> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<data::GCGCostType*,std::vector<data::GCGCostType> > *)&__for_end) )
    {
      v11 = __gnu_cxx::__normal_iterator<data::GCGCostType *,std::vector<data::GCGCostType>>::operator*((const __gnu_cxx::__normal_iterator<data::GCGCostType*,std::vector<data::GCGCostType> > *const)&__for_begin);
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      cost_type = *v12;
      GCGSkillLogic::updateSpecialCostTypeRevise(
        this,
        input_output_cost_map,
        cost_type,
        GCG_COST_DICE_PAIMON_0,
        skill_result);
      __gnu_cxx::__normal_iterator<data::GCGCostType *,std::vector<data::GCGCostType>>::operator++((__gnu_cxx::__normal_iterator<data::GCGCostType*,std::vector<data::GCGCostType> > *const)&__for_begin);
    }
    std::vector<data::GCGCostType>::~vector((std::vector<data::GCGCostType> *const)(v3 + 48));
    std::set<data::GCGEffectCostType>::~set((std::set<data::GCGEffectCostType> *const)(v3 + 112));
  }
  if ( v36 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 2139: range 000000000E2FFC58-000000000E30018C
void __cdecl GCGSkillLogic::reviseEnergyCost(
        GCGSkillLogic *const this,
        uint32_t *cost_energy,
        GCGSkillResult *skill_result)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  char v6; // al
  uint32_t v7; // ecx
  int v8; // r14d
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  std::map<data::GCGEffectCostType,std::vector<GCGSkillPreviewUseInfo>>::key_type __x; // [rsp+24h] [rbp-DCh] BYREF
  std::vector<GCGSkillPreviewUseInfo>::iterator __for_begin; // [rsp+28h] [rbp-D8h] BYREF
  std::vector<GCGSkillPreviewUseInfo>::iterator __for_end; // [rsp+30h] [rbp-D0h] BYREF
  std::vector<GCGSkillPreviewUseInfo> *energy_revise_skill_info_vec; // [rsp+38h] [rbp-C8h]
  std::vector<GCGSkillPreviewUseInfo> *__for_range; // [rsp+40h] [rbp-C0h]
  GCGSkillPreviewUseInfo *skill_info; // [rsp+48h] [rbp-B8h]
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 20 old_cost_energy:2141 64 16 14 skill_ptr:2152";
  *(_QWORD *)(v3 + 16) = GCGSkillLogic::reviseEnergyCost;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)cost_energy >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)cost_energy & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cost_energy >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(cost_energy);
  }
  *(_DWORD *)(v3 + 48) = *cost_energy;
  __x = GCG_COST_ENERGY_0;
  if ( !std::map<data::GCGEffectCostType,std::vector<GCGSkillPreviewUseInfo>>::count(
          &skill_result->dice_cost_revise_preview_skills_map,
          &__x) )
    goto LABEL_11;
  if ( *(_BYTE *)(((unsigned __int64)cost_energy >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)cost_energy & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cost_energy >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(cost_energy);
  }
  if ( *cost_energy )
    v6 = 1;
  else
LABEL_11:
    v6 = 0;
  if ( v6 )
  {
    __x = GCG_COST_ENERGY_0;
    energy_revise_skill_info_vec = std::map<data::GCGEffectCostType,std::vector<GCGSkillPreviewUseInfo>>::operator[](
                                     &skill_result->dice_cost_revise_preview_skills_map,
                                     &__x);
    __for_range = energy_revise_skill_info_vec;
    __for_begin._M_current = std::vector<GCGSkillPreviewUseInfo>::begin(energy_revise_skill_info_vec)._M_current;
    __for_end._M_current = std::vector<GCGSkillPreviewUseInfo>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<GCGSkillPreviewUseInfo *,std::vector<GCGSkillPreviewUseInfo>>(
              &__for_begin,
              &__for_end) )
    {
      skill_info = __gnu_cxx::__normal_iterator<GCGSkillPreviewUseInfo *,std::vector<GCGSkillPreviewUseInfo>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)&skill_info->cost_num >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&skill_info->cost_num >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&skill_info->cost_num);
      }
      if ( skill_info->cost_num )
      {
        std::weak_ptr<GCGSkill>::lock((const std::weak_ptr<GCGSkill> *const)(v3 + 64));
        if ( std::operator!=<GCGSkill>((const std::shared_ptr<GCGSkill> *)(v3 + 64), 0LL) )
          std::vector<std::shared_ptr<GCGSkill>>::push_back(
            &skill_result->cur_real_take_effect_skill_ptr_vec,
            (const std::vector<std::shared_ptr<GCGSkill>>::value_type *)(v3 + 64));
        if ( *(_BYTE *)(((unsigned __int64)cost_energy >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)cost_energy & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cost_energy >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(cost_energy);
        }
        v7 = *cost_energy;
        if ( *(_BYTE *)(((unsigned __int64)&skill_info->cost_num >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&skill_info->cost_num >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&skill_info->cost_num);
        }
        if ( v7 <= skill_info->cost_num )
        {
          if ( *(_BYTE *)(((unsigned __int64)cost_energy >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)cost_energy & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cost_energy >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_store4(cost_energy);
          }
          *cost_energy = 0;
          v8 = 0;
        }
        else
        {
          *cost_energy -= skill_info->cost_num;
          v8 = 1;
        }
        std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v3 + 64));
        if ( v8 != 1 )
          break;
      }
      __gnu_cxx::__normal_iterator<GCGSkillPreviewUseInfo *,std::vector<GCGSkillPreviewUseInfo>>::operator++(&__for_begin);
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)cost_energy >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)cost_energy & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cost_energy >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(cost_energy);
  }
  if ( *cost_energy != *(_DWORD *)(v3 + 48) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/skill/gcg_skill_logic.cpp",
      "reviseEnergyCost",
      2171);
    v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v19,
           (const char (*)[34])"reviseEnergyCost old_cost_energy:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
    v11 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v10, (const char (*)[15])", cost_energy:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, cost_energy);
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
  if ( v20 == (char *)v3 )
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

// Line 2177: range 000000000E30018E-000000000E30056D
int32_t __cdecl GCGSkillLogic::calcReviseSkillCost(
        GCGSkillLogic *const this,
        const GCGSkillUseParam *param,
        std::map<data::GCGCostType,unsigned int> *input_output_cost_map,
        uint32_t *cost_energy,
        GCGSkillResult *skill_result)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // rbx
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  int32_t result; // eax
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-190h] BYREF
  std::string val; // [rsp+50h] [rbp-170h] BYREF
  char v17[336]; // [rsp+70h] [rbp-150h] BYREF

  v5 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(288LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 48 168 16 child_param:2179";
  *(_QWORD *)(v5 + 16) = GCGSkillLogic::calcReviseSkillCost;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61937;
  v7[536862726] = -218103808;
  v7[536862727] = -202116109;
  v7[536862728] = -202116109;
  GCGSkillUseParam::GCGSkillUseParam((GCGSkillUseParam *const)(v5 + 48), param);
  GCGSkillUseParam::setEffectCategroyType((GCGSkillUseParam *const)(v5 + 48), PASSIVE_CATEGORY_SKILL_USE_COST_REVISE);
  GCGSkillUseParam::setTriggerWindowParam((GCGSkillUseParam *const)(v5 + 48), param);
  GCGSkillLogic::doCurControllerAllCardEffects(
    this,
    *(GCGControllerValue *)(v5 + 160),
    (const GCGSkillUseParam *)(v5 + 48),
    skill_result);
  if ( std::map<data::GCGEffectCostType,std::vector<GCGSkillPreviewUseInfo>>::empty(&skill_result->dice_cost_revise_preview_skills_map) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/skill/gcg_skill_logic.cpp",
      "calcReviseSkillCost",
      2185);
    v8 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
           &v15,
           (const char (*)[69])"calcReviseSkillCost dice_cost_revise_preview_skills_map empty param:");
  }
  else
  {
    GCGSkillLogic::reviseEnergyCost(this, cost_energy, skill_result);
    GCGSkillLogic::reviseDiceCost(this, input_output_cost_map, skill_result);
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/skill/gcg_skill_logic.cpp",
      "calcReviseSkillCost",
      2190);
    v9 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v15,
           (const char (*)[33])"calcReviseSkillCost cost_energy:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, cost_energy);
    v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])" param:");
  }
  GCGSkillUseParam::getDesc[abi:cxx11](&val, (const GCGSkillUseParam *const)(v5 + 48));
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v15);
  GCGSkillUseParam::~GCGSkillUseParam((GCGSkillUseParam *const)(v5 + 48));
  result = 0;
  if ( v17 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 2195: range 000000000E30056E-000000000E300905
int32_t __cdecl GCGSkillLogic::calcRevisePlayCardCost(
        GCGSkillLogic *const this,
        const GCGSkillUseParam *param,
        std::map<data::GCGCostType,unsigned int> *input_output_cost_map,
        uint32_t *cost_energy,
        GCGSkillResult *skill_result)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // rbx
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  int32_t result; // eax
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-190h] BYREF
  std::string val; // [rsp+50h] [rbp-170h] BYREF
  char v17[336]; // [rsp+70h] [rbp-150h] BYREF

  v5 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(288LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 48 168 16 child_param:2197";
  *(_QWORD *)(v5 + 16) = GCGSkillLogic::calcRevisePlayCardCost;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61937;
  v7[536862726] = -218103808;
  v7[536862727] = -202116109;
  v7[536862728] = -202116109;
  GCGSkillUseParam::GCGSkillUseParam((GCGSkillUseParam *const)(v5 + 48), param);
  GCGSkillUseParam::setEffectCategroyType((GCGSkillUseParam *const)(v5 + 48), PASSIVE_CATEGORY_PLAY_CARD_COST_REVISE);
  GCGSkillUseParam::setTriggerWindowParam((GCGSkillUseParam *const)(v5 + 48), param);
  GCGSkillLogic::doCurControllerAllCardEffects(
    this,
    *(GCGControllerValue *)(v5 + 160),
    (const GCGSkillUseParam *)(v5 + 48),
    skill_result);
  if ( !std::map<data::GCGEffectCostType,std::vector<GCGSkillPreviewUseInfo>>::empty(&skill_result->dice_cost_revise_preview_skills_map) )
  {
    GCGSkillLogic::reviseEnergyCost(this, cost_energy, skill_result);
    GCGSkillLogic::reviseDiceCost(this, input_output_cost_map, skill_result);
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/skill/gcg_skill_logic.cpp",
      "calcRevisePlayCardCost",
      2205);
    v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v15,
           (const char (*)[36])"calcRevisePlayCardCost cost_energy:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, cost_energy);
    v10 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])" param:");
    GCGSkillUseParam::getDesc[abi:cxx11](&val, (const GCGSkillUseParam *const)(v5 + 48));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  GCGSkillUseParam::setEffectCategroyType((GCGSkillUseParam *const)(v5 + 48), PASSIVE_CATEGORY_PLAY_CARD_COST_REPLACE);
  GCGSkillLogic::doCurControllerAllCardEffects(
    this,
    *(GCGControllerValue *)(v5 + 160),
    (const GCGSkillUseParam *)(v5 + 48),
    skill_result);
  if ( !std::map<data::GCGEffectCostType,std::vector<GCGSkillPreviewCostPayInfo>>::empty(&skill_result->pay_card_replace_pay_preview_map) )
    GCGSkillLogic::reviseTagReplacePay(this, input_output_cost_map, skill_result);
  GCGSkillUseParam::~GCGSkillUseParam((GCGSkillUseParam *const)(v5 + 48));
  result = 0;
  if ( v17 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 2219: range 000000000E300906-000000000E300E45
int32_t __cdecl GCGSkillLogic::calcIncreaseSelectOnstageCost(
        GCGSkillLogic *const this,
        const GCGSkillUseParam *param,
        GCGSkillResult *skill_result)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  GCGDuel *Duel; // rax
  GCGControllerValue OtherControllerId; // esi
  uint32_t *p_increase_num; // rax
  uint32_t v9; // ecx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  int32_t result; // eax
  std::vector<GCGSkillPreviewUseInfo>::iterator __for_begin; // [rsp+30h] [rbp-2B0h] BYREF
  std::vector<GCGSkillPreviewUseInfo>::iterator __for_end; // [rsp+38h] [rbp-2A8h] BYREF
  std::vector<GCGSkillPreviewUseInfo> *__for_range; // [rsp+40h] [rbp-2A0h]
  GCGSkillPreviewUseInfo *skill_info; // [rsp+48h] [rbp-298h]
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-290h] BYREF
  std::string val; // [rsp+70h] [rbp-270h] BYREF
  char v21[592]; // [rsp+90h] [rbp-250h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(544LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 21 acc_increase_num:2236 64 168 16 child_param:2221 304 168 25 opponent_child_param:2228";
  *(_QWORD *)(v3 + 16) = GCGSkillLogic::calcIncreaseSelectOnstageCost;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862727] = -218959360;
  v5[536862728] = -218959118;
  v5[536862729] = 62194;
  v5[536862734] = -218103808;
  v5[536862735] = -202116109;
  v5[536862736] = -202116109;
  GCGSkillUseParam::GCGSkillUseParam((GCGSkillUseParam *const)(v3 + 64), param);
  GCGSkillUseParam::setEffectCategroyType(
    (GCGSkillUseParam *const)(v3 + 64),
    PASSIVE_CATEGORY_CHANGE_CHARACTER_INCRE_COST);
  GCGSkillUseParam::setTriggerWindowParam((GCGSkillUseParam *const)(v3 + 64), param);
  GCGSkillLogic::doCurControllerAllCardEffects(
    this,
    *(GCGControllerValue *)(v3 + 176),
    (const GCGSkillUseParam *)(v3 + 64),
    skill_result);
  GCGSkillUseParam::GCGSkillUseParam((GCGSkillUseParam *const)(v3 + 304), param);
  GCGSkillUseParam::setEffectCategroyType(
    (GCGSkillUseParam *const)(v3 + 304),
    PASSIVE_CATEGORY_OPPONENT_CHANGE_CHARACTER_COST_REVISE);
  GCGSkillUseParam::setTriggerWindowParam((GCGSkillUseParam *const)(v3 + 304), param);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  Duel = GCGGameMode::getDuel(this->game_mode_);
  OtherControllerId = (unsigned int)GCGDuel::getOtherControllerId(Duel, (GCGControllerValue)*(_DWORD *)(v3 + 176));
  GCGSkillLogic::doCurControllerAllCardEffects(
    this,
    OtherControllerId,
    (const GCGSkillUseParam *)(v3 + 304),
    skill_result);
  *(_DWORD *)(v3 + 48) = 0;
  __for_range = &skill_result->select_onstage_result.select_onstage_cost_preview_skill_vec;
  __for_begin._M_current = std::vector<GCGSkillPreviewUseInfo>::begin(&skill_result->select_onstage_result.select_onstage_cost_preview_skill_vec)._M_current;
  __for_end._M_current = std::vector<GCGSkillPreviewUseInfo>::end(&skill_result->select_onstage_result.select_onstage_cost_preview_skill_vec)._M_current;
  while ( __gnu_cxx::operator!=<GCGSkillPreviewUseInfo *,std::vector<GCGSkillPreviewUseInfo>>(&__for_begin, &__for_end) )
  {
    skill_info = __gnu_cxx::__normal_iterator<GCGSkillPreviewUseInfo *,std::vector<GCGSkillPreviewUseInfo>>::operator*(&__for_begin);
    p_increase_num = &skill_info->increase_num;
    if ( *(_BYTE *)(((unsigned __int64)p_increase_num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_increase_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_increase_num >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(p_increase_num);
    }
    *(_DWORD *)(v3 + 48) += skill_info->increase_num;
    __gnu_cxx::__normal_iterator<GCGSkillPreviewUseInfo *,std::vector<GCGSkillPreviewUseInfo>>::operator++(&__for_begin);
  }
  v9 = *(_DWORD *)(v3 + 48);
  if ( *(_BYTE *)(((unsigned __int64)&skill_result->select_onstage_result.select_onstage_increase_cost_result >> 3)
                + 0x7FFF8000) != 0
    && (char)((((_BYTE)skill_result - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&skill_result->select_onstage_result.select_onstage_increase_cost_result >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_store4(&skill_result->select_onstage_result.select_onstage_increase_cost_result);
  }
  skill_result->select_onstage_result.select_onstage_increase_cost_result = v9;
  common::milog::MiLogStream::create(
    &v19,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/skill/gcg_skill_logic.cpp",
    "calcIncreaseSelectOnstageCost",
    2242);
  v10 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
          &v19,
          (const char (*)[48])"calcIncreaseSelectOnstageCost acc_increase_num:");
  v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
  v12 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])",param:");
  GCGSkillUseParam::getDesc[abi:cxx11](&val, (const GCGSkillUseParam *const)(v3 + 64));
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v19);
  GCGSkillUseParam::~GCGSkillUseParam((GCGSkillUseParam *const)(v3 + 304));
  GCGSkillUseParam::~GCGSkillUseParam((GCGSkillUseParam *const)(v3 + 64));
  result = 0;
  if ( v21 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 2248: range 000000000E300E46-000000000E30143E
int32_t __cdecl GCGSkillLogic::calcReviseSelectOnstageCost(
        GCGSkillLogic *const this,
        const GCGSkillUseParam *param,
        GCGSkillResult *skill_result,
        bool is_preview)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  const GCGRule *v7; // rax
  _BOOL4 v8; // r14d
  uint32_t v9; // eax
  uint32_t v10; // ecx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  uint32_t acc_revise_num; // [rsp+28h] [rbp-1F8h]
  uint32_t acc_rule_need_cost; // [rsp+2Ch] [rbp-1F4h]
  std::vector<GCGSkillPreviewUseInfo>::iterator __for_begin; // [rsp+30h] [rbp-1F0h] BYREF
  std::vector<GCGSkillPreviewUseInfo>::iterator __for_end; // [rsp+38h] [rbp-1E8h] BYREF
  std::vector<GCGSkillPreviewUseInfo> *__for_range; // [rsp+40h] [rbp-1E0h]
  GCGSkillPreviewUseInfo *skill_info; // [rsp+48h] [rbp-1D8h]
  common::milog::MiLogStream v25; // [rsp+50h] [rbp-1D0h] BYREF
  std::string val; // [rsp+70h] [rbp-1B0h] BYREF
  char v27[400]; // [rsp+90h] [rbp-190h] BYREF

  v4 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(352LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 21 acc_increase_num:2256 64 4 37 final_revise_onstage_change_cost:2278 80 16 14 skill_ptr"
                        ":2267 112 168 16 child_param:2250";
  *(_QWORD *)(v4 + 16) = GCGSkillLogic::calcReviseSelectOnstageCost;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = 61956;
  v6[536862723] = 62194;
  v6[536862728] = -218103808;
  v6[536862729] = -202116109;
  v6[536862730] = -202116109;
  GCGSkillUseParam::GCGSkillUseParam((GCGSkillUseParam *const)(v4 + 112), param);
  GCGSkillUseParam::setEffectCategroyType(
    (GCGSkillUseParam *const)(v4 + 112),
    PASSIVE_CATEGORY_CHANGE_CHARACTER_COST_REVISE);
  GCGSkillUseParam::setTriggerWindowParam((GCGSkillUseParam *const)(v4 + 112), param);
  GCGSkillLogic::doCurControllerAllCardEffects(
    this,
    *(GCGControllerValue *)(v4 + 224),
    (const GCGSkillUseParam *)(v4 + 112),
    skill_result);
  if ( *(_BYTE *)(((unsigned __int64)&skill_result->select_onstage_result.select_onstage_increase_cost_result >> 3)
                + 0x7FFF8000) != 0
    && (char)((((_BYTE)skill_result - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&skill_result->select_onstage_result.select_onstage_increase_cost_result >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load4(&skill_result->select_onstage_result.select_onstage_increase_cost_result);
  }
  *(_DWORD *)(v4 + 48) = skill_result->select_onstage_result.select_onstage_increase_cost_result;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  v7 = GCGGameMode::rule(this->game_mode_);
  if ( *(_BYTE *)(((unsigned __int64)&v7->on_stage_change_cost_dice >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v7->on_stage_change_cost_dice >> 3) + 0x7FFF8000) <= 3 )
  {
    v7 = (const GCGRule *)__asan_report_load4(&v7->on_stage_change_cost_dice);
  }
  acc_rule_need_cost = v7->on_stage_change_cost_dice;
  acc_revise_num = 0;
  __for_range = &skill_result->select_onstage_result.select_onstage_cost_preview_skill_vec;
  __for_begin._M_current = std::vector<GCGSkillPreviewUseInfo>::begin(&skill_result->select_onstage_result.select_onstage_cost_preview_skill_vec)._M_current;
  __for_end._M_current = std::vector<GCGSkillPreviewUseInfo>::end(&skill_result->select_onstage_result.select_onstage_cost_preview_skill_vec)._M_current;
  while ( __gnu_cxx::operator!=<GCGSkillPreviewUseInfo *,std::vector<GCGSkillPreviewUseInfo>>(&__for_begin, &__for_end) )
  {
    skill_info = __gnu_cxx::__normal_iterator<GCGSkillPreviewUseInfo *,std::vector<GCGSkillPreviewUseInfo>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)&skill_info->cost_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&skill_info->cost_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&skill_info->cost_num);
    }
    acc_revise_num += skill_info->cost_num;
    if ( !is_preview )
    {
      std::weak_ptr<GCGSkill>::lock((const std::weak_ptr<GCGSkill> *const)(v4 + 80));
      if ( std::operator!=<GCGSkill>((const std::shared_ptr<GCGSkill> *)(v4 + 80), 0LL) )
        std::vector<std::shared_ptr<GCGSkill>>::push_back(
          &skill_result->cur_real_take_effect_skill_ptr_vec,
          (const std::vector<std::shared_ptr<GCGSkill>>::value_type *)(v4 + 80));
      v8 = acc_revise_num < *(_DWORD *)(v4 + 48) + acc_rule_need_cost;
      std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v4 + 80));
      if ( !v8 )
        break;
    }
    __gnu_cxx::__normal_iterator<GCGSkillPreviewUseInfo *,std::vector<GCGSkillPreviewUseInfo>>::operator++(&__for_begin);
  }
  if ( acc_revise_num >= *(_DWORD *)(v4 + 48) + acc_rule_need_cost )
    v9 = 0;
  else
    v9 = *(_DWORD *)(v4 + 48) + acc_rule_need_cost - acc_revise_num;
  *(_DWORD *)(v4 + 64) = v9;
  v10 = *(_DWORD *)(v4 + 64);
  if ( *(_BYTE *)(((unsigned __int64)&skill_result->select_onstage_result.select_onstage_cost_revise_result >> 3)
                + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&skill_result->select_onstage_result.select_onstage_cost_revise_result >> 3)
                + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&skill_result->select_onstage_result.select_onstage_cost_revise_result);
  }
  skill_result->select_onstage_result.select_onstage_cost_revise_result = v10;
  common::milog::MiLogStream::create(
    &v25,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/skill/gcg_skill_logic.cpp",
    "calcReviseSelectOnstageCost",
    2280);
  v11 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
          &v25,
          (const char (*)[62])"calcReviseSelectOnstageCost final_revise_onstage_change_cost:");
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 64));
  v13 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
          v12,
          (const char (*)[38])" select_onstage_increase_cost_result:");
  v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 48));
  v15 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v14, (const char (*)[8])",param:");
  GCGSkillUseParam::getDesc[abi:cxx11](&val, (const GCGSkillUseParam *const)(v4 + 112));
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v25);
  GCGSkillUseParam::~GCGSkillUseParam((GCGSkillUseParam *const)(v4 + 112));
  result = 0;
  if ( v27 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 2286: range 000000000E301440-000000000E3016C2
bool __cdecl GCGSkillLogic::canChangeCharacterBeQuickAction(GCGSkillLogic *const this, const GCGSkillUseParam *param)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  bool v5; // r14
  bool result; // al
  bool __u; // [rsp+1Eh] [rbp-2F2h] BYREF
  bool is_quick_action; // [rsp+1Fh] [rbp-2F1h]
  char v9[752]; // [rsp+20h] [rbp-2F0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(704LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 168 16 child_param:2289 272 368 17 skill_result:2294";
  *(_QWORD *)(v2 + 16) = GCGSkillLogic::canChangeCharacterBeQuickAction;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862726] = -218959360;
  v4[536862727] = -218959118;
  v4[536862728] = 62194;
  v4[536862740] = -202116109;
  v4[536862741] = -202116109;
  is_quick_action = 0;
  GCGSkillUseParam::GCGSkillUseParam((GCGSkillUseParam *const)(v2 + 32), param);
  GCGSkillUseParam::setEffectCategroyType(
    (GCGSkillUseParam *const)(v2 + 32),
    PASSIVE_CATEGORY_CHANGE_CHARACTER_QUICK_REVISE);
  GCGSkillUseParam::setTriggerWindowParam((GCGSkillUseParam *const)(v2 + 32), param);
  GCGSkillResult::GCGSkillResult((GCGSkillResult *const)(v2 + 272));
  GCGSkillLogic::doCurControllerAllCardEffects(
    this,
    *(GCGControllerValue *)(v2 + 144),
    (const GCGSkillUseParam *)(v2 + 32),
    (GCGSkillResult *)(v2 + 272));
  __u = 0;
  is_quick_action = std::optional<bool>::value_or<bool>((const std::optional<bool> *const)(v2 + 312), &__u);
  v5 = is_quick_action;
  GCGSkillResult::~GCGSkillResult((GCGSkillResult *const)(v2 + 272));
  GCGSkillUseParam::~GCGSkillUseParam((GCGSkillUseParam *const)(v2 + 32));
  result = v5;
  if ( v9 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0LL;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2303: range 000000000E3016C4-000000000E3019F8
int32_t __cdecl GCGSkillLogic::getRerollReviseTimes(GCGSkillLogic *const this, GCGControllerValue controller_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  int32_t v5; // r14d
  int32_t result; // eax
  int __u; // [rsp+18h] [rbp-308h] BYREF
  int32_t reroll_revise_times; // [rsp+1Ch] [rbp-304h]
  std::shared_ptr<GCGCard> __r; // [rsp+20h] [rbp-300h] BYREF
  char v10[752]; // [rsp+30h] [rbp-2F0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(704LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 168 16 skill_param:2305 272 368 17 skill_result:2315";
  *(_QWORD *)(v2 + 16) = GCGSkillLogic::getRerollReviseTimes;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862726] = -218959360;
  v4[536862727] = -218959118;
  v4[536862728] = 62194;
  v4[536862740] = -202116109;
  v4[536862741] = -202116109;
  GCGSkillUseParam::GCGSkillUseParam((GCGSkillUseParam *const)(v2 + 32));
  std::shared_ptr<GCGCard>::shared_ptr(&__r, 0LL);
  std::shared_ptr<GCGCard>::operator=((std::shared_ptr<GCGCard> *const)(v2 + 56), &__r);
  std::shared_ptr<GCGCard>::~shared_ptr(&__r);
  std::shared_ptr<GCGCard>::shared_ptr(&__r, 0LL);
  std::shared_ptr<GCGCard>::operator=((std::shared_ptr<GCGCard> *const)(v2 + 72), &__r);
  std::shared_ptr<GCGCard>::~shared_ptr(&__r);
  std::shared_ptr<GCGSkill>::shared_ptr((std::shared_ptr<GCGSkill> *const)&__r, 0LL);
  std::shared_ptr<GCGSkill>::operator=((std::shared_ptr<GCGSkill> *const)(v2 + 32), (std::shared_ptr<GCGSkill> *)&__r);
  std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)&__r);
  *(_DWORD *)(v2 + 48) = 1;
  *(_DWORD *)(v2 + 144) = controller_id;
  GCGSkillUseParam::setEffectCategroyType((GCGSkillUseParam *const)(v2 + 32), PASSIVE_CATEGORY_REROLL_TIMES_REVISE);
  reroll_revise_times = 0;
  GCGSkillResult::GCGSkillResult((GCGSkillResult *const)(v2 + 272));
  GCGSkillLogic::doCurControllerAllCardEffects(
    this,
    controller_id,
    (const GCGSkillUseParam *)(v2 + 32),
    (GCGSkillResult *)(v2 + 272));
  __u = 0;
  reroll_revise_times = std::optional<int>::value_or<int>((const std::optional<int> *const)(v2 + 304), &__u);
  v5 = reroll_revise_times;
  GCGSkillResult::~GCGSkillResult((GCGSkillResult *const)(v2 + 272));
  GCGSkillUseParam::~GCGSkillUseParam((GCGSkillUseParam *const)(v2 + 32));
  result = v5;
  if ( v10 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0LL;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2324: range 000000000E301CAA-000000000E301FD4
void __cdecl GCGSkillLogic::doCurControllerAllCardEffects(
        GCGSkillLogic *const this,
        GCGControllerValue controller_id,
        const GCGSkillUseParam *param,
        GCGSkillResult *skill_result)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  char v7; // al
  std::function<void(GCGCard&)> p_func; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v11; // [rsp+40h] [rbp-C0h] BYREF
  char v12[160]; // [rsp+60h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 21 zone_filter_func:2349 64 24 26 do_skill_on_card_func:2331";
  *(_QWORD *)(v4 + 16) = GCGSkillLogic::doCurControllerAllCardEffects;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218103808;
  v6[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  if ( !GCGGameMode::isDuringSnapshot(this->game_mode_) )
    goto LABEL_11;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  if ( GCGGameMode::isNeedBreakForSpecialAsk(this->game_mode_) )
    v7 = 1;
  else
LABEL_11:
    v7 = 0;
  if ( v7 )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/skill/gcg_skill_logic.cpp",
      "doCurControllerAllCardEffects",
      2328);
    common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
      &v11,
      (const char (*)[70])"doCurControllerAllCardEffects all terminate for onstage character die");
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
  else
  {
    *(_QWORD *)(v4 + 64) = param;
    *(_QWORD *)(v4 + 72) = skill_result;
    *(_QWORD *)(v4 + 80) = this;
    if ( *(_BYTE *)(((unsigned __int64)&param->effect_category_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->effect_category_type >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&param->effect_category_type);
    }
    *(_DWORD *)(v4 + 48) = param->effect_category_type;
    std::function<bool ()(GCGCardZone &)>::function<GCGSkillLogic::doCurControllerAllCardEffects(proto::GCGControllerValue,GCGSkillUseParam const&,GCGSkillResult &)::{lambda(GCGCardZone &)#2},void,void>(
      (std::function<bool(GCGCardZone&)> *const)&v11,
      *(GCGSkillLogic::doCurControllerAllCardEffects::<lambda(GCGCardZone&)> *)(v4 + 48));
    std::function<void ()(GCGCard &)>::function<GCGSkillLogic::doCurControllerAllCardEffects(proto::GCGControllerValue,GCGSkillUseParam const&,GCGSkillResult &)::{lambda(GCGCard &)#1},void,void>(
      &p_func,
      *(GCGSkillLogic::doCurControllerAllCardEffects::<lambda(GCGCard&)> *)(v4 + 64));
    GCGSkillLogic::foreachCardOnControllerId(this, controller_id, &p_func, (std::function<bool(GCGCardZone&)> *)&v11);
    std::function<void ()(GCGCard &)>::~function(&p_func);
    std::function<bool ()(GCGCardZone &)>::~function((std::function<bool(GCGCardZone&)> *const)&v11);
  }
  if ( v12 == (char *)v4 )
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

// Line 2331: range 000000000E3019FA-000000000E301C38
ForeachPolicy __cdecl GCGSkillLogic::doCurControllerAllCardEffects(proto::GCGControllerValue,GCGSkillUseParam const&,GCGSkillResult &)::{lambda(GCGCard &)#1}::operator()(
        const GCGSkillLogic::doCurControllerAllCardEffects::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  const GCGSkillUseParam *param; // rdx
  char v3; // cl
  GCGSkillResult *skill_result; // rdx
  GCGSkillLogic *this; // rax
  GCGSkillLogic *v7; // rax
  char v8; // al
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  param = __closure->__param;
  v3 = *(_BYTE *)(((unsigned __int64)&__closure->__param->effect_category_type >> 3) + 0x7FFF8000);
  if ( v3 != 0 && (char)(((LOBYTE(__closure->__param) + 116) & 7) + 3) >= v3 )
    __asan_report_load4(&__closure->__param->effect_category_type);
  if ( !GCGCard::isHasEffect(card, param->effect_category_type) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__skill_result >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__skill_result);
  skill_result = __closure->__skill_result;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  GCGCard::doAllSkills(card, __closure->__param, skill_result);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__this);
  this = __closure->__this;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  if ( !GCGGameMode::isDuringSnapshot(this->game_mode_) )
    goto LABEL_22;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__this);
  v7 = __closure->__this;
  if ( *(_BYTE *)(((unsigned __int64)&v7->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&v7->game_mode_);
  if ( GCGGameMode::isNeedBreakForSpecialAsk(v7->game_mode_) )
    v8 = 1;
  else
LABEL_22:
    v8 = 0;
  if ( !v8 )
    return 0;
  common::milog::MiLogStream::create(
    &v9,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/skill/gcg_skill_logic.cpp",
    "operator()",
    2343);
  common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
    &v9,
    (const char (*)[73])"doCurControllerAllCardEffects medium terminate for onstage character die");
  common::milog::MiLogStream::~MiLogStream(&v9);
  return 1;
};

// Line 2349: range 000000000E301C3A-000000000E301CA9
bool __cdecl GCGSkillLogic::doCurControllerAllCardEffects(proto::GCGControllerValue,GCGSkillUseParam const&,GCGSkillResult &)::{lambda(GCGCardZone &)#2}::operator()(
        const GCGSkillLogic::doCurControllerAllCardEffects::<lambda(GCGCardZone&)> *const __closure,
        GCGCardZone *zone)
{
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  return GCGCardZone::isHasEffect(zone, __closure->__category_type);
};

// Line 2361: range 000000000E302052-000000000E302375
void __cdecl GCGSkillLogic::doCurControllerOnStageAllModifyCardEffects(
        GCGSkillLogic *const this,
        GCGControllerValue controller_id,
        const GCGSkillUseParam *param,
        GCGSkillResult *skill_result)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r15
  GCGDuel *Duel; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  GCGCard *v9; // rax
  GCGModifyZone *ModifyZone; // [rsp+8h] [rbp-C8h]
  GCGField *cur_field; // [rsp+30h] [rbp-A0h]
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-90h] BYREF
  char v15[112]; // [rsp+60h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 13 card_ptr:2364";
  *(_QWORD *)(v4 + 16) = GCGSkillLogic::doCurControllerOnStageAllModifyCardEffects;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  Duel = GCGGameMode::getDuel(this->game_mode_);
  cur_field = GCGDuel::getField(Duel, controller_id);
  GCGField::getCharacterZone(cur_field);
  GCGCharacterZone::getOnStageCard((GCGCharacterZone *const)(v4 + 32));
  if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v4 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/skill/gcg_skill_logic.cpp",
      "doCurControllerOnStageAllModifyCardEffects",
      2367);
    common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(
      &v14,
      (const char (*)[72])"doCurControllerOnStageAllModifyCardEffects onstage character is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  else
  {
    v8 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    if ( !GCGCard::isAlive(v8) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_skill_logic.cpp",
        "doCurControllerOnStageAllModifyCardEffects",
        2372);
      common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
        &v14,
        (const char (*)[68])"doCurControllerOnStageAllModifyCardEffects onstage character is die");
      common::milog::MiLogStream::~MiLogStream(&v14);
    }
    else
    {
      v9 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      ModifyZone = GCGCard::getModifyZone(v9);
      std::function<ForeachPolicy ()(GCGCard &)>::function<GCGSkillLogic::doCurControllerOnStageAllModifyCardEffects(proto::GCGControllerValue,GCGSkillUseParam const&,GCGSkillResult &)::{lambda(GCGCard &)#1},void,void>(
        (std::function<ForeachPolicy(GCGCard&)> *const)&v14,
        (GCGSkillLogic::doCurControllerOnStageAllModifyCardEffects::<lambda(GCGCard&)>)__PAIR128__(
                                                                                         (unsigned __int64)skill_result,
                                                                                         (unsigned __int64)param));
      GCGCardZone::foreachCard(ModifyZone, (std::function<ForeachPolicy(GCGCard&)> *)&v14);
      std::function<ForeachPolicy ()(GCGCard &)>::~function((std::function<ForeachPolicy(GCGCard&)> *const)&v14);
    }
  }
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 32));
  if ( v15 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2375: range 000000000E301FD6-000000000E302050
ForeachPolicy __cdecl GCGSkillLogic::doCurControllerOnStageAllModifyCardEffects(proto::GCGControllerValue,GCGSkillUseParam const&,GCGSkillResult &)::{lambda(GCGCard &)#1}::operator()(
        const GCGSkillLogic::doCurControllerOnStageAllModifyCardEffects::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  GCGSkillResult *skill_result; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&__closure->__skill_result >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__skill_result);
  skill_result = __closure->__skill_result;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  GCGCard::doAllSkills(card, __closure->__param, skill_result);
  return 0;
};

// Line 2383: range 000000000E30252A-000000000E302950
void __cdecl GCGSkillLogic::foreachCardOnControllerId(
        GCGSkillLogic *const this,
        GCGControllerValue controller_id,
        std::function<void(GCGCard&)> *p_func,
        std::function<bool(GCGCardZone&)> *p_zone_filter_func)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  GCGDuel *Duel; // rax
  GCGCharacterZone *CharacterZone; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  GCGCard *v11; // rdx
  GCGCard *v12; // rax
  GCGModifyZone *ModifyZone; // rax
  GCGCardZone *v14; // rax
  GCGCard *v15; // rdx
  GCGCard *v16; // rax
  GCGModifyZone *v17; // rax
  GCGCardZone *SummonZone; // rax
  GCGCardZone *AssistZone; // rax
  std::vector<std::shared_ptr<GCGCard>>::iterator __for_begin; // [rsp+28h] [rbp-118h] BYREF
  std::vector<std::shared_ptr<GCGCard>>::iterator __for_end; // [rsp+30h] [rbp-110h] BYREF
  GCGField *cur_field; // [rsp+38h] [rbp-108h]
  std::vector<std::shared_ptr<GCGCard>> *__for_range; // [rsp+40h] [rbp-100h]
  std::shared_ptr<GCGCard> *card_ptr; // [rsp+48h] [rbp-F8h]
  std::function<ForeachPolicy(GCGCard&)> v27; // [rsp+50h] [rbp-F0h] BYREF
  char v28[208]; // [rsp+70h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 16 20 foreachZoneCard:2385 64 16 22 on_stage_card_ptr:2399 96 24 24 back_stage_card_vec:2400";
  *(_QWORD *)(v4 + 16) = GCGSkillLogic::foreachCardOnControllerId;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -219021312;
  v6[536862723] = -218103808;
  v6[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  Duel = GCGGameMode::getDuel(this->game_mode_);
  cur_field = GCGDuel::getField(Duel, controller_id);
  *(_QWORD *)(v4 + 32) = p_zone_filter_func;
  *(_QWORD *)(v4 + 40) = p_func;
  GCGField::getCharacterZone(cur_field);
  GCGCharacterZone::getOnStageCard((GCGCharacterZone *const)(v4 + 64));
  std::vector<std::shared_ptr<GCGCard>>::vector((std::vector<std::shared_ptr<GCGCard>> *const)(v4 + 96));
  CharacterZone = GCGField::getCharacterZone(cur_field);
  std::function<ForeachPolicy ()(GCGCard &)>::function<GCGSkillLogic::foreachCardOnControllerId(proto::GCGControllerValue,std::function<void ()(GCGCard &)>,std::function<bool ()(GCGCardZone &)>)::{lambda(GCGCard &)#2},void,void>(
    &v27,
    (GCGSkillLogic::foreachCardOnControllerId::<lambda(GCGCard&)>)(v4 + 96));
  GCGCharacterZone::foreachBackStageCharater(CharacterZone, &v27);
  std::function<ForeachPolicy ()(GCGCard &)>::~function(&v27);
  if ( std::operator!=<GCGCard>((const std::shared_ptr<GCGCard> *)(v4 + 64), 0LL) )
  {
    v9 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    if ( GCGCard::isActivated(v9) )
    {
      v11 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      std::function<void ()(GCGCard &)>::operator()(p_func, v11);
      v12 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      ModifyZone = GCGCard::getModifyZone(v12);
      GCGSkillLogic::foreachCardOnControllerId(proto::GCGControllerValue,std::function<void ()(GCGCard &)>,std::function<bool ()(GCGCardZone &)>)::{lambda(GCGCardZone &)#1}::operator()(
        (const GCGSkillLogic::foreachCardOnControllerId::<lambda(GCGCardZone&)> *const)(v4 + 32),
        ModifyZone);
    }
  }
  v14 = GCGField::getOnStageZone(cur_field);
  GCGSkillLogic::foreachCardOnControllerId(proto::GCGControllerValue,std::function<void ()(GCGCard &)>,std::function<bool ()(GCGCardZone &)>)::{lambda(GCGCardZone &)#1}::operator()(
    (const GCGSkillLogic::foreachCardOnControllerId::<lambda(GCGCardZone&)> *const)(v4 + 32),
    v14);
  __for_range = (std::vector<std::shared_ptr<GCGCard>> *)(v4 + 96);
  __for_begin._M_current = std::vector<std::shared_ptr<GCGCard>>::begin((std::vector<std::shared_ptr<GCGCard>> *const)(v4 + 96))._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<GCGCard>>::end((std::vector<std::shared_ptr<GCGCard>> *const)(v4 + 96))._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>(
            &__for_begin,
            &__for_end) )
  {
    card_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>::operator*(&__for_begin);
    v15 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
    std::function<void ()(GCGCard &)>::operator()(p_func, v15);
    v16 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)card_ptr);
    v17 = GCGCard::getModifyZone(v16);
    GCGSkillLogic::foreachCardOnControllerId(proto::GCGControllerValue,std::function<void ()(GCGCard &)>,std::function<bool ()(GCGCardZone &)>)::{lambda(GCGCardZone &)#1}::operator()(
      (const GCGSkillLogic::foreachCardOnControllerId::<lambda(GCGCardZone&)> *const)(v4 + 32),
      v17);
    __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>::operator++(&__for_begin);
  }
  SummonZone = GCGField::getSummonZone(cur_field);
  GCGSkillLogic::foreachCardOnControllerId(proto::GCGControllerValue,std::function<void ()(GCGCard &)>,std::function<bool ()(GCGCardZone &)>)::{lambda(GCGCardZone &)#1}::operator()(
    (const GCGSkillLogic::foreachCardOnControllerId::<lambda(GCGCardZone&)> *const)(v4 + 32),
    SummonZone);
  AssistZone = GCGField::getAssistZone(cur_field);
  GCGSkillLogic::foreachCardOnControllerId(proto::GCGControllerValue,std::function<void ()(GCGCard &)>,std::function<bool ()(GCGCardZone &)>)::{lambda(GCGCardZone &)#1}::operator()(
    (const GCGSkillLogic::foreachCardOnControllerId::<lambda(GCGCardZone&)> *const)(v4 + 32),
    AssistZone);
  std::vector<std::shared_ptr<GCGCard>>::~vector((std::vector<std::shared_ptr<GCGCard>> *const)(v4 + 96));
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 64));
  if ( v28 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 2385: range 000000000E3023C4-000000000E302496
void __cdecl GCGSkillLogic::foreachCardOnControllerId(proto::GCGControllerValue,std::function<void ()(GCGCard &)>,std::function<bool ()(GCGCardZone &)>)::{lambda(GCGCardZone &)#1}::operator()(
        const GCGSkillLogic::foreachCardOnControllerId::<lambda(GCGCardZone&)> *const __closure,
        GCGCardZone *zone)
{
  std::function<ForeachPolicy(GCGCard&)> p_func; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  if ( std::function<bool ()(GCGCardZone &)>::operator()(__closure->__zone_filter_func, zone) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__func >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__func);
    std::function<ForeachPolicy ()(GCGCard &)>::function<GCGSkillLogic::foreachCardOnControllerId(proto::GCGControllerValue,std::function<void ()(GCGCard &)>,std::function<bool ()(GCGCardZone &)>)::{lambda(GCGCardZone &)#1}::operator() const(GCGCardZone &)::{lambda(GCGCard &)#1},void,void>(
      &p_func,
      (GCGSkillLogic::foreachCardOnControllerId::<lambda(GCGCardZone&)>::operator()::<lambda(GCGCard&)>)__closure->__func);
    GCGCardZone::foreachCard(zone, &p_func);
    std::function<ForeachPolicy ()(GCGCard &)>::~function(&p_func);
  }
};

// Line 2392: range 000000000E302376-000000000E3023C3
ForeachPolicy __cdecl GCGSkillLogic::foreachCardOnControllerId(proto::GCGControllerValue,std::function<void ()(GCGCard &)>,std::function<bool ()(GCGCardZone &)>)::{lambda(GCGCardZone &)#1}::operator() const(GCGCardZone &)::{lambda(GCGCard &)#1}::operator()(
        const GCGSkillLogic::foreachCardOnControllerId::<lambda(GCGCardZone&)>::operator()::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  std::function<void ()(GCGCard &)>::operator()(__closure->__func, card);
  return 0;
};

// Line 2401: range 000000000E302498-000000000E302528
ForeachPolicy __cdecl GCGSkillLogic::foreachCardOnControllerId(proto::GCGControllerValue,std::function<void ()(GCGCard &)>,std::function<bool ()(GCGCardZone &)>)::{lambda(GCGCard &)#2}::operator()(
        const GCGSkillLogic::foreachCardOnControllerId::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  std::vector<std::shared_ptr<GCGCard>> *back_stage_card_vec; // rbx
  std::enable_shared_from_this<GCGCard> v4; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  back_stage_card_vec = __closure->__back_stage_card_vec;
  std::enable_shared_from_this<GCGCard>::shared_from_this(&v4);
  std::vector<std::shared_ptr<GCGCard>>::push_back(
    back_stage_card_vec,
    (std::vector<std::shared_ptr<GCGCard>>::value_type *)&v4);
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)&v4);
  return 0;
};

// Line 2430: range 000000000E302952-000000000E302E02
void __cdecl GCGSkillLogic::refreshPreviewSkillUse(GCGSkillLogic *const this, GCGSkillResult *skill_result)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::function<int()> *v5; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  GCGSkill *v7; // rax
  GCGSkill *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::vector<unsigned int>::value_type __x; // [rsp+14h] [rbp-15Ch] BYREF
  std::vector<std::shared_ptr<GCGSkill>>::iterator __for_begin_0; // [rsp+18h] [rbp-158h] BYREF
  std::vector<std::shared_ptr<GCGSkill>>::iterator __for_end_0; // [rsp+20h] [rbp-150h] BYREF
  std::vector<std::function<int()>>::iterator __for_begin; // [rsp+28h] [rbp-148h] BYREF
  std::vector<std::function<int()>>::iterator __for_end; // [rsp+30h] [rbp-140h] BYREF
  std::vector<std::function<int()>> *__for_range; // [rsp+38h] [rbp-138h]
  std::vector<std::shared_ptr<GCGSkill>> *__for_range_0; // [rsp+40h] [rbp-130h]
  std::shared_ptr<GCGSkill> *skill_ptr; // [rsp+48h] [rbp-128h]
  char v18[288]; // [rsp+50h] [rbp-120h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 24 21 effect_skill_vec:2440 96 32 23 delay_refresh_func:2432 160 56 18 skill_ptr_set:2439";
  *(_QWORD *)(v2 + 16) = GCGSkillLogic::refreshPreviewSkillUse;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218103808;
  v4[536862727] = -202116109;
  __for_range = &skill_result->cur_real_task_effect_delay_func_vec;
  __for_begin._M_current = std::vector<std::function<int ()(void)>>::begin(&skill_result->cur_real_task_effect_delay_func_vec)._M_current;
  __for_end._M_current = std::vector<std::function<int ()(void)>>::end(&skill_result->cur_real_task_effect_delay_func_vec)._M_current;
  while ( __gnu_cxx::operator!=<std::function<int ()(void)> *,std::vector<std::function<int ()(void)>>>(
            &__for_begin,
            &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<std::function<int ()(void)> *,std::vector<std::function<int ()(void)>>>::operator*(&__for_begin);
    std::function<int ()(void)>::function((std::function<int()> *const)(v2 + 96), v5);
    if ( std::function<int ()(void)>::operator bool((const std::function<int()> *const)(v2 + 96)) )
      std::function<int ()(void)>::operator()((const std::function<int()> *const)(v2 + 96));
    std::function<int ()(void)>::~function((std::function<int()> *const)(v2 + 96));
    __gnu_cxx::__normal_iterator<std::function<int ()(void)> *,std::vector<std::function<int ()(void)>>>::operator++(&__for_begin);
  }
  std::unordered_set<std::shared_ptr<GCGSkill>>::unordered_set((std::unordered_set<std::shared_ptr<GCGSkill>> *const)(v2 + 160));
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 32));
  __for_range_0 = &skill_result->cur_real_take_effect_skill_ptr_vec;
  __for_begin_0._M_current = std::vector<std::shared_ptr<GCGSkill>>::begin(&skill_result->cur_real_take_effect_skill_ptr_vec)._M_current;
  __for_end_0._M_current = std::vector<std::shared_ptr<GCGSkill>>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<GCGSkill> *,std::vector<std::shared_ptr<GCGSkill>>>(
            &__for_begin_0,
            &__for_end_0) )
  {
    skill_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<GCGSkill> *,std::vector<std::shared_ptr<GCGSkill>>>::operator*(&__for_begin_0);
    if ( !std::operator==<GCGSkill>(skill_ptr, 0LL) )
    {
      __for_end._M_current = (std::function<int()> *)std::unordered_set<std::shared_ptr<GCGSkill>>::end((std::unordered_set<std::shared_ptr<GCGSkill>> *const)(v2 + 160))._M_cur;
      __for_begin._M_current = (std::function<int()> *)std::unordered_set<std::shared_ptr<GCGSkill>>::find(
                                                         (std::unordered_set<std::shared_ptr<GCGSkill>> *const)(v2 + 160),
                                                         skill_ptr)._M_cur;
      if ( !std::__detail::operator!=<std::shared_ptr<GCGSkill>,false>(
              (const std::__detail::_Node_iterator_base<std::shared_ptr<GCGSkill>,false> *)&__for_begin,
              (const std::__detail::_Node_iterator_base<std::shared_ptr<GCGSkill>,false> *)&__for_end) )
      {
        std::unordered_set<std::shared_ptr<GCGSkill>>::insert(
          (std::unordered_set<std::shared_ptr<GCGSkill>> *const)(v2 + 160),
          skill_ptr);
        v6 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)skill_ptr);
        __x = GCGSkill::getSkillId(v6);
        std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 32), &__x);
        v7 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)skill_ptr);
        GCGSkill::setActivate(v7);
        v8 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)skill_ptr);
        GCGSkill::refreshActivate(v8);
      }
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<GCGSkill> *,std::vector<std::shared_ptr<GCGSkill>>>::operator++(&__for_begin_0);
  }
  std::vector<std::shared_ptr<GCGSkill>>::clear(&skill_result->cur_real_take_effect_skill_ptr_vec);
  if ( !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/skill/gcg_skill_logic.cpp",
      "refreshPreviewSkillUse",
      2461);
    v9 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[41])"refreshPreviewSkillUse effect_skill_vec:");
    common::milog::MiLogStream::operator<<<unsigned int>(v9, (const std::vector<unsigned int> *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 32));
  std::unordered_set<std::shared_ptr<GCGSkill>>::~unordered_set((std::unordered_set<std::shared_ptr<GCGSkill>> *const)(v2 + 160));
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2467: range 000000000E302E04-000000000E3033C0
GCGCardPtr __cdecl GCGSkillLogic::getSkillThisCard(
        const GCGSkillLogic *const this,
        const GCGSkill *skill,
        const GCGSkillUseParam *param)
{
  const GCGSkillUseParam *v3; // rcx
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  GCGCardPtr result; // rax
  const GCGSkillUseParam *parama; // [rsp+0h] [rbp-110h]
  common::milog::MiLogStream v20; // [rsp+20h] [rbp-F0h] BYREF
  std::string val; // [rsp+40h] [rbp-D0h] BYREF
  std::string v22; // [rsp+60h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+80h] [rbp-90h] BYREF

  parama = v3;
  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 16 25 skill_owned_card_ptr:2470 64 16 25 trigger_src_card_ptr:2485";
  *(_QWORD *)(v4 + 16) = GCGSkillLogic::getSkillThisCard;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -202178560;
  GCGSkill::getOwnerCard((const GCGSkill *const)(v4 + 32));
  if ( std::operator!=<GCGCard>((const std::shared_ptr<GCGCard> *)(v4 + 32), 0LL) )
  {
    std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)this, (std::shared_ptr<GCGCard> *)(v4 + 32));
  }
  else if ( !GCGSkill::isReaction((const GCGSkill *const)param) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/skill/gcg_skill_logic.cpp",
      "getSkillThisCard",
      2477);
    v7 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v20,
           (const char (*)[32])"getSkillThisCard failed, skill:");
    GCGSkill::getName[abi:cxx11](&val, (const GCGSkill *const)param);
    v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
    v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])",param:");
    GCGSkillUseParam::getDesc[abi:cxx11](&v22, parama);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &v22);
    std::string::~string(&v22);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v20);
    std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)this, 0LL);
  }
  else if ( std::operator==<GCGSkillUseParam>(0LL, &parama->trigger_window_param_ptr) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/skill/gcg_skill_logic.cpp",
      "getSkillThisCard",
      2482);
    v10 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
            &v20,
            (const char (*)[69])"getSkillThisCard failed, trigger_window_param_ptr is nullptr, skill:");
    GCGSkill::getName[abi:cxx11](&val, (const GCGSkill *const)param);
    v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &val);
    v12 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])",param:");
    GCGSkillUseParam::getDesc[abi:cxx11](&v22, parama);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, &v22);
    std::string::~string(&v22);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v20);
    std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)this, 0LL);
  }
  else
  {
    v13 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)&parama->trigger_window_param_ptr);
    std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 64), &v13->source_card_ptr);
    if ( std::operator!=<GCGCard>((const std::shared_ptr<GCGCard> *)(v4 + 64), 0LL) )
    {
      std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)this, (std::shared_ptr<GCGCard> *)(v4 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_skill_logic.cpp",
        "getSkillThisCard",
        2490);
      v14 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v20,
              (const char (*)[32])"getSkillThisCard failed, skill:");
      GCGSkill::getName[abi:cxx11](&val, (const GCGSkill *const)param);
      v15 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, &val);
      v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])", param:");
      GCGSkillUseParam::getDesc[abi:cxx11](&v22, parama);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, &v22);
      std::string::~string(&v22);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v20);
      std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)this, 0LL);
    }
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 64));
  }
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v4 + 32));
  if ( v23 == (char *)v4 )
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
  result._M_ptr = (std::__shared_ptr<GCGCard,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 2495: range 000000000E3033C2-000000000E3033EA
std::string *__cdecl GCGSkillLogic::getSkillPreviewFormatStrResult[abi:cxx11](
        std::string *retstr,
        const GCGSkillLogic *const this)
{
  std::string::basic_string(retstr, this);
  return retstr;
};

// Line 2501: range 000000000E3033EC-000000000E303A0C
__int64 __fastcall GCGSkillLogic::trySendSpecialControllerSkillPreview(
        GCGSkillLogic *const this,
        GCGControllerValue controller_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int v5; // r14d
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned __int64 v7; // rdx
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  unsigned __int64 v10; // rdx
  GCGPhaseBase *v11; // rax
  common::milog::MiLogStream *v12; // rax
  bool v13; // r14
  common::milog::MiLogStream *v14; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+1Ch] [rbp-134h] BYREF
  std::_Rb_tree_const_iterator<proto::GCGControllerValue>::_Self __x; // [rsp+20h] [rbp-130h] BYREF
  std::_Rb_tree_const_iterator<proto::GCGControllerValue>::_Self __y; // [rsp+28h] [rbp-128h] BYREF
  std::shared_ptr<GCGControllerBase> __r; // [rsp+30h] [rbp-120h] BYREF
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-110h] BYREF
  char v21[240]; // [rsp+60h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 18 controller_id:2500 48 16 18 cur_phase_ptr:2503 80 16 19 controller_ptr:2520 112 48 25 "
                        "allow_controller_set:2514";
  *(_QWORD *)(v2 + 16) = GCGSkillLogic::trySendSpecialControllerSkillPreview;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 32) = controller_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  GCGGameMode::getPhaseMgr(this->game_mode_);
  GCGPhaseMgr::getCurPhase((GCGPhaseMgr *const)(v2 + 48));
  if ( std::operator==<GCGPhaseBase>((const std::shared_ptr<GCGPhaseBase> *)(v2 + 48), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/skill/gcg_skill_logic.cpp",
      "trySendSpecialControllerSkillPreview",
      2506);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v20,
      (const char (*)[25])"cur_phase_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v20);
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v6);
    v7 = (unsigned __int64)(v6->_vptr_GCGPhaseBase + 3);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v6->_vptr_GCGPhaseBase + 3);
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v7)(v6) == 5 )
    {
      v11 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      GCGPhaseBase::getAllowControllerSet((std::set<proto::GCGControllerValue> *)(v2 + 112), v11);
      __y._M_node = std::set<proto::GCGControllerValue>::end((const std::set<proto::GCGControllerValue> *const)(v2 + 112))._M_node;
      __x._M_node = std::set<proto::GCGControllerValue>::find(
                      (const std::set<proto::GCGControllerValue> *const)(v2 + 112),
                      (const std::set<proto::GCGControllerValue>::key_type *)(v2 + 32))._M_node;
      if ( std::operator==(&__x, &__y) )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/skill/gcg_skill_logic.cpp",
          "trySendSpecialControllerSkillPreview",
          2517);
        v12 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(&v20, (const char (*)[38])off_1BD96660);
        val = *(_DWORD *)(v2 + 32);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
        common::milog::MiLogStream::~MiLogStream(&v20);
        v5 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->game_mode_);
        GCGGameMode::getController((GCGGameMode *const)(v2 + 80), (__int64)this->game_mode_, *(_DWORD *)(v2 + 32));
        std::dynamic_pointer_cast<GCGPlayerController,GCGControllerBase>(&__r);
        v13 = std::operator==<GCGPlayerController>((const std::shared_ptr<GCGPlayerController> *)&__r, 0LL);
        std::shared_ptr<GCGPlayerController>::~shared_ptr((std::shared_ptr<GCGPlayerController> *const)&__r);
        if ( v13 )
        {
          common::milog::MiLogStream::create(
            &v20,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/card_game/skill/gcg_skill_logic.cpp",
            "trySendSpecialControllerSkillPreview",
            2523);
          v14 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                  &v20,
                  (const char (*)[37])"preview controller is not player, c:");
          val = *(_DWORD *)(v2 + 32);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
          common::milog::MiLogStream::~MiLogStream(&v20);
          v5 = -1;
        }
        else
        {
          v5 = GCGSkillLogic::doSpecificControllerSkillPreview(this, *(GCGControllerValue *)(v2 + 32));
        }
        std::shared_ptr<GCGControllerBase>::~shared_ptr((std::shared_ptr<GCGControllerBase> *const)(v2 + 80));
      }
      std::set<proto::GCGControllerValue>::~set((std::set<proto::GCGControllerValue> *const)(v2 + 112));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/skill/gcg_skill_logic.cpp",
        "trySendSpecialControllerSkillPreview",
        2511);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(&v20, (const char (*)[29])off_1BD96620);
      v9 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v9);
      v10 = (unsigned __int64)(v9->_vptr_GCGPhaseBase + 3);
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v9->_vptr_GCGPhaseBase + 3);
      val = (*(__int64 (__fastcall **)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v10)(v9);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v20);
      v5 = -1;
    }
  }
  std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v2 + 48));
  result = v5;
  if ( v21 == (char *)v2 )
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

// Line 2530: range 000000000E303A0E-000000000E30401C
int32_t __cdecl GCGSkillLogic::doSkillPreview(GCGSkillLogic *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v4; // r14d
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  unsigned __int64 v9; // rdx
  GCGPhaseBase *v10; // rax
  proto::GCGControllerValue *v11; // rax
  proto::GCGControllerValue *v12; // rdx
  bool v13; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-144h] BYREF
  GCGControllerValue cur_preview_controller_id; // [rsp+20h] [rbp-140h]
  proto::GCGControllerValue controller_id; // [rsp+24h] [rbp-13Ch]
  std::set<proto::GCGControllerValue>::iterator __for_begin; // [rsp+28h] [rbp-138h] BYREF
  std::set<proto::GCGControllerValue>::iterator __for_end; // [rsp+30h] [rbp-130h] BYREF
  const std::set<proto::GCGControllerValue> *__for_range; // [rsp+38h] [rbp-128h]
  std::shared_ptr<GCGControllerBase> __r; // [rsp+40h] [rbp-120h] BYREF
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-110h] BYREF
  char v23[240]; // [rsp+70h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 16 18 cur_phase_ptr:2533 80 16 19 controller_ptr:2554 112 48 25 allow_controller_set:2544";
  *(_QWORD *)(v1 + 16) = GCGSkillLogic::doSkillPreview;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862723] = 62194;
  v3[536862725] = -202116109;
  std::string::clear(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  GCGGameMode::getPhaseMgr(this->game_mode_);
  GCGPhaseMgr::getCurPhase((GCGPhaseMgr *const)(v1 + 48));
  if ( std::operator==<GCGPhaseBase>((const std::shared_ptr<GCGPhaseBase> *)(v1 + 48), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/skill/gcg_skill_logic.cpp",
      "doSkillPreview",
      2536);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v22,
      (const char (*)[25])"cur_phase_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v22);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v5);
    v6 = (unsigned __int64)(v5->_vptr_GCGPhaseBase + 3);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v5->_vptr_GCGPhaseBase + 3);
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v6)(v5) == 5 )
    {
      v10 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
      GCGPhaseBase::getAllowControllerSet((std::set<proto::GCGControllerValue> *)(v1 + 112), v10);
      if ( std::set<proto::GCGControllerValue>::empty((const std::set<proto::GCGControllerValue> *const)(v1 + 112)) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/skill/gcg_skill_logic.cpp",
          "doSkillPreview",
          2547);
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(&v22, (const char (*)[34])off_1BD967C0);
        common::milog::MiLogStream::~MiLogStream(&v22);
        v4 = 0;
      }
      else
      {
        cur_preview_controller_id = GCG_CONTROLLER_NONE;
        __for_range = (const std::set<proto::GCGControllerValue> *)(v1 + 112);
        __for_begin._M_node = std::set<proto::GCGControllerValue>::begin((const std::set<proto::GCGControllerValue> *const)(v1 + 112))._M_node;
        __for_end._M_node = std::set<proto::GCGControllerValue>::end((const std::set<proto::GCGControllerValue> *const)(v1 + 112))._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          v11 = (proto::GCGControllerValue *)std::_Rb_tree_const_iterator<proto::GCGControllerValue>::operator*(&__for_begin);
          v12 = v11;
          if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v11);
          }
          controller_id = *v12;
          if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->game_mode_);
          GCGGameMode::getController((GCGGameMode *const)(v1 + 80), (__int64)this->game_mode_, controller_id);
          std::dynamic_pointer_cast<GCGPlayerController,GCGControllerBase>(&__r);
          v13 = std::operator==<GCGPlayerController>((const std::shared_ptr<GCGPlayerController> *)&__r, 0LL);
          std::shared_ptr<GCGPlayerController>::~shared_ptr((std::shared_ptr<GCGPlayerController> *const)&__r);
          if ( !v13 )
            GCGSkillLogic::doSpecificControllerSkillPreview(this, controller_id);
          std::shared_ptr<GCGControllerBase>::~shared_ptr((std::shared_ptr<GCGControllerBase> *const)(v1 + 80));
          std::_Rb_tree_const_iterator<proto::GCGControllerValue>::operator++(&__for_begin);
        }
        v4 = 0;
      }
      std::set<proto::GCGControllerValue>::~set((std::set<proto::GCGControllerValue> *const)(v1 + 112));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/skill/gcg_skill_logic.cpp",
        "doSkillPreview",
        2541);
      v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(&v22, (const char (*)[29])off_1BD96620);
      v8 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v8);
      v9 = (unsigned __int64)(v8->_vptr_GCGPhaseBase + 3);
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v8->_vptr_GCGPhaseBase + 3);
      val = (*(__int64 (__fastcall **)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v9)(v8);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v22);
      v4 = 0;
    }
  }
  std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v1 + 48));
  result = v4;
  if ( v23 == (char *)v1 )
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
  return result;
};

// Line 2568: range 000000000E3041BA-000000000E304B34
void __cdecl GCGSkillLogic::execPreviewActions(GCGSkillLogic *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // r14
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  int v7; // eax
  std::__shared_ptr_access<GCGPhaseMain,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  unsigned __int64 v9; // rdx
  int v10; // r14d
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<GCGPhaseMain,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  bool *PreviewQueueRunningState; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  unsigned __int64 v20; // rdx
  common::milog::MiLogStream *v21; // r14
  std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  int v25; // r14d
  int32_t i; // [rsp+1Ch] [rbp-154h]
  common::milog::MiLogStream v27; // [rsp+20h] [rbp-150h] BYREF
  common::milog::MiLogStream v28; // [rsp+40h] [rbp-130h] BYREF
  char v29[272]; // [rsp+60h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "7 48 1 26 check_can_exec_action:2582 64 1 24 check_special_break:2611 80 4 8 ret:2661 96 8 10 gu"
                        "ard:2659 128 16 18 cur_phase_ptr:2569 160 16 23 cur_main_phase_ptr:2575 192 16 15 action_ptr:2641";
  *(_QWORD *)(v1 + 16) = GCGSkillLogic::execPreviewActions;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234556927;
  v3[536862723] = -218959360;
  v3[536862724] = -219021312;
  v3[536862725] = -219021312;
  v3[536862726] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  GCGGameMode::getPhaseMgr(this->game_mode_);
  GCGPhaseMgr::getCurPhase((GCGPhaseMgr *const)(v1 + 128));
  if ( std::operator==<GCGPhaseBase>((const std::shared_ptr<GCGPhaseBase> *)(v1 + 128), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/skill/gcg_skill_logic.cpp",
      "execPreviewActions",
      2572);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v28,
      (const char (*)[25])"cur_phase_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v28);
  }
  else
  {
    std::dynamic_pointer_cast<GCGPhaseMain,GCGPhaseBase>((const std::shared_ptr<GCGPhaseBase> *)(v1 + 160));
    if ( std::operator==<GCGPhaseMain>((const std::shared_ptr<GCGPhaseMain> *)(v1 + 160), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_skill_logic.cpp",
        "execPreviewActions",
        2578);
      v4 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(&v28, (const char (*)[29])off_1BD96620);
      v5 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v5);
      v6 = (unsigned __int64)(v5->_vptr_GCGPhaseBase + 3);
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v5->_vptr_GCGPhaseBase + 3);
      *(_DWORD *)(v1 + 80) = (*(__int64 (__fastcall **)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v6)(v5);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, (const unsigned int *)(v1 + 80));
      common::milog::MiLogStream::~MiLogStream(&v28);
    }
    else
    {
      i = 100;
      do
      {
        v7 = i--;
        if ( v7 <= 0 )
          break;
        v8 = std::__shared_ptr_access<GCGPhaseMain,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseMain,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
        if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v8);
        v9 = (unsigned __int64)(v8->_vptr_GCGPhaseBase + 6);
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v8->_vptr_GCGPhaseBase + 6);
        (*(void (__fastcall **)(unsigned __int64, std::__shared_ptr_access<GCGPhaseMain,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v9)(
          v1 + 192,
          v8);
        if ( std::operator==<GCGActionBase>((const std::shared_ptr<GCGActionBase> *)(v1 + 192), 0LL) )
        {
          v10 = 0;
        }
        else if ( GCGSkillLogic::execPreviewActions(void)::{lambda(std::shared_ptr<GCGActionBase> const&)#2}::operator()(
                    (const GCGSkillLogic::execPreviewActions::<lambda(const GCGActionBasePtr&)> *const)(v1 + 64),
                    (const GCGActionBasePtr *)(v1 + 192)) )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/skill/gcg_skill_logic.cpp",
            "execPreviewActions",
            2649);
          v11 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  &v27,
                  (const char (*)[26])"[PREVIEW] special break: ");
          v12 = std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 192));
          GCGActionBase::getDesc[abi:cxx11]((std::string *)&v28, v12);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, (const std::string *)&v28);
          std::string::~string(&v28);
          common::milog::MiLogStream::~MiLogStream(&v27);
          v10 = 0;
        }
        else if ( !GCGSkillLogic::execPreviewActions(void)::{lambda(std::shared_ptr<GCGActionBase> const&)#1}::operator()(
                     (const GCGSkillLogic::execPreviewActions::<lambda(const GCGActionBasePtr&)> *const)(v1 + 48),
                     (const GCGActionBasePtr *)(v1 + 192)) )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/skill/gcg_skill_logic.cpp",
            "execPreviewActions",
            2655);
          v13 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  &v27,
                  (const char (*)[19])"[PREVIEW] ignore: ");
          v14 = std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 192));
          GCGActionBase::getDesc[abi:cxx11]((std::string *)&v28, v14);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, (const std::string *)&v28);
          std::string::~string(&v28);
          common::milog::MiLogStream::~MiLogStream(&v27);
          v10 = 1;
        }
        else
        {
          v15 = std::__shared_ptr_access<GCGPhaseMain,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseMain,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
          PreviewQueueRunningState = GCGPhaseMain::getPreviewQueueRunningState(v15);
          GCGUtils::RunGuard::RunGuard((GCGUtils::RunGuard *const)(v1 + 96), PreviewQueueRunningState);
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/skill/gcg_skill_logic.cpp",
            "execPreviewActions",
            2660);
          v17 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  &v27,
                  (const char (*)[30])"[PREVIEW] action exec start: ");
          v18 = std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 192));
          GCGActionBase::getDesc[abi:cxx11]((std::string *)&v28, v18);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, (const std::string *)&v28);
          std::string::~string(&v28);
          common::milog::MiLogStream::~MiLogStream(&v27);
          v19 = std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 192));
          if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v19);
          v20 = (unsigned __int64)(v19->_vptr_GCGActionBase + 2);
          if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v19->_vptr_GCGActionBase + 2);
          *(_DWORD *)(v1 + 80) = (*(__int64 (__fastcall **)(std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v20)(v19);
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/skill/gcg_skill_logic.cpp",
            "execPreviewActions",
            2662);
          v21 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  &v27,
                  (const char (*)[30])"[PREVIEW] action exec end  : ");
          v22 = std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 192));
          GCGActionBase::getDesc[abi:cxx11]((std::string *)&v28, v22);
          v23 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, (const std::string *)&v28);
          v24 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v23, (const char (*)[7])" ret: ");
          common::milog::MiLogStream::operator<<<int,(int *)0>(v24, (const int *)(v1 + 80));
          std::string::~string(&v28);
          common::milog::MiLogStream::~MiLogStream(&v27);
          if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->game_mode_);
          if ( GCGGameMode::isNeedBreakForSpecialAsk(this->game_mode_) )
          {
            common::milog::MiLogStream::create(
              &v28,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/card_game/skill/gcg_skill_logic.cpp",
              "execPreviewActions",
              2668);
            common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              &v28,
              (const char (*)[24])"[PREVIEW] special break");
            common::milog::MiLogStream::~MiLogStream(&v28);
            v25 = 0;
          }
          else
          {
            v25 = 1;
          }
          GCGUtils::RunGuard::~RunGuard((GCGUtils::RunGuard *const)(v1 + 96));
          v10 = v25 == 1 ? 2 : 0;
        }
        std::shared_ptr<GCGActionBase>::~shared_ptr((std::shared_ptr<GCGActionBase> *const)(v1 + 192));
      }
      while ( v10 );
    }
    std::shared_ptr<GCGPhaseMain>::~shared_ptr((std::shared_ptr<GCGPhaseMain> *const)(v1 + 160));
  }
  std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v1 + 128));
  if ( v29 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 2582: range 000000000E30401E-000000000E3040ED
bool __cdecl GCGSkillLogic::execPreviewActions(void)::{lambda(std::shared_ptr<GCGActionBase> const&)#1}::operator()(
        const GCGSkillLogic::execPreviewActions::<lambda(const GCGActionBasePtr&)> *const __closure,
        const GCGActionBasePtr *action_ptr)
{
  std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  unsigned __int64 v4; // rdx
  bool ret; // [rsp+1Bh] [rbp-5h]

  if ( std::operator==<GCGActionBase>(action_ptr, 0LL) )
    return 0;
  v3 = std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)action_ptr);
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3);
  v4 = (unsigned __int64)(v3->_vptr_GCGActionBase + 3);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3->_vptr_GCGActionBase + 3);
  switch ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v4)(v3) )
  {
    case 9u:
    case 0xDu:
    case 0x12u:
    case 0x14u:
    case 0x15u:
    case 0x18u:
      ret = 1;
      break;
    default:
      ret = 0;
      break;
  }
  return ret;
};

// Line 2611: range 000000000E3040EE-000000000E3041B9
bool __cdecl GCGSkillLogic::execPreviewActions(void)::{lambda(std::shared_ptr<GCGActionBase> const&)#2}::operator()(
        const GCGSkillLogic::execPreviewActions::<lambda(const GCGActionBasePtr&)> *const __closure,
        const GCGActionBasePtr *action_ptr)
{
  std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  unsigned __int64 v4; // rdx
  unsigned int v5; // eax

  if ( std::operator==<GCGActionBase>(action_ptr, 0LL) )
    return 0;
  v3 = std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)action_ptr);
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3);
  v4 = (unsigned __int64)(v3->_vptr_GCGActionBase + 3);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3->_vptr_GCGActionBase + 3);
  v5 = (*(__int64 (__fastcall **)(std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v4)(v3);
  return v5 <= 0x15 && ((1LL << v5) & 0x205006) != 0;
};

// Line 2675: range 000000000E307792-000000000E3082EE
int32_t __cdecl GCGSkillLogic::doSpecificControllerSkillPreview(
        GCGSkillLogic *const this,
        GCGControllerValue controller_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  GCGDuel *Duel; // rax
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  proto::ServerGCGVerify *v17; // rax
  std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  GCGCard *v19; // r14
  GCGCharacterZone *CharacterZone; // r14
  GCGCharacterZone *v21; // rax
  std::vector<std::shared_ptr<GCGCard>> *CardVec; // rax
  GCGCardZone *HandZone; // r14
  common::milog::MiLogStream *v24; // rax
  std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  int32_t result; // eax
  GCGSkillLogic::doSpecificControllerSkillPreview::<lambda(GCGCard&)> v27; // [rsp-30h] [rbp-4B0h]
  GCGSkillLogic::doSpecificControllerSkillPreview::<lambda(GCGSkill&)> v28; // [rsp-20h] [rbp-4A0h]
  GCGSkillLogic::doSpecificControllerSkillPreview::<lambda(GCGCard&)>_0 v29; // [rsp-20h] [rbp-4A0h]
  unsigned int val; // [rsp+10h] [rbp-470h] BYREF
  uint32_t onstage_card_guid; // [rsp+14h] [rbp-46Ch]
  GCGField *cur_field; // [rsp+18h] [rbp-468h]
  std::function<ForeachPolicy(GCGCard&)> p_func; // [rsp+20h] [rbp-460h] BYREF
  common::milog::MiLogStream v34; // [rsp+40h] [rbp-440h] BYREF
  common::milog::MiLogStream v35; // [rsp+60h] [rbp-420h] BYREF
  GCGSkillLogic::doSpecificControllerSkillPreview::<lambda(GCGCard&)> __f; // [rsp+80h] [rbp-400h]
  char v37[976]; // [rsp+B0h] [rbp-3D0h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(928LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 8 28 fill_skill_preview_func:2716 80 8 37 fill_change_onstage_preview_func:2808 112 8 31 fi"
                        "ll_playcard_preview_func:2871 144 16 19 controller_ptr:2676 176 16 21 onstage_card_ptr:2683 208 "
                        "24 35 cur_all_character_card_ptr_vec:2881 272 112 19 preview_notify:2699 416 192 19 before_previ"
                        "ew:2711 672 192 18 after_preview:2712";
  *(_QWORD *)(v2 + 16) = GCGSkillLogic::doSpecificControllerSkillPreview;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862723] = -234881024;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862726] = 62194;
  v4[536862727] = -218959360;
  v4[536862728] = 62194;
  v4[536862732] = -218959118;
  v4[536862739] = -218959118;
  v4[536862740] = -218959118;
  v4[536862747] = -202116109;
  v4[536862748] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  GCGGameMode::getController<GCGPlayerController>(
    (GCGGameMode *const)(v2 + 144),
    (__int64)this->game_mode_,
    controller_id);
  if ( std::operator==<GCGPlayerController>((const std::shared_ptr<GCGPlayerController> *)(v2 + 144), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/skill/gcg_skill_logic.cpp",
      "doSpecificControllerSkillPreview",
      2679);
    v5 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v35, (const char (*)[15])"controller_id:");
    val = controller_id;
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v6, (const char (*)[26])off_1BD972E0);
    common::milog::MiLogStream::~MiLogStream(&v35);
    v7 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    Duel = GCGGameMode::getDuel(this->game_mode_);
    cur_field = GCGDuel::getField(Duel, controller_id);
    GCGField::getCharacterZone(cur_field);
    GCGCharacterZone::getOnStageCard((GCGCharacterZone *const)(v2 + 176));
    if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v2 + 176), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/skill/gcg_skill_logic.cpp",
        "doSpecificControllerSkillPreview",
        2686);
      v9 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v35,
             (const char (*)[41])"onstage_card_ptr is nullptr, controller:");
      val = controller_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v35);
      v7 = -1;
    }
    else
    {
      v10 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176));
      if ( !GCGUtils::isCanAttack(v10) )
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/skill/gcg_skill_logic.cpp",
          "doSpecificControllerSkillPreview",
          2691);
        v11 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(&v34, (const char (*)[55])off_1BD97380);
        val = controller_id;
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
        v13 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v12, (const char (*)[8])", card:");
        v14 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176));
        GCGCard::getDesc[abi:cxx11]((std::string *)&v35, v14);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, (const std::string *)&v35);
        std::string::~string(&v35);
        common::milog::MiLogStream::~MiLogStream(&v34);
        v7 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->game_mode_);
        GCGGameMode::trySendMsgPack(this->game_mode_);
        v15 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176));
        onstage_card_guid = GCGCard::getGuid(v15);
        proto::ServerGCGSkillPreviewNotify::ServerGCGSkillPreviewNotify((proto::ServerGCGSkillPreviewNotify *const)(v2 + 272));
        v16 = std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
        v17 = proto::ServerGCGSkillPreviewNotify::mutable_verify((proto::ServerGCGSkillPreviewNotify *const)(v2 + 272));
        GCGPlayerController::fillVerify(v16, v17);
        proto::ServerGCGSkillPreviewNotify::set_controller_id(
          (proto::ServerGCGSkillPreviewNotify *const)(v2 + 272),
          controller_id);
        proto::ServerGCGSkillPreviewNotify::set_onstage_card_guid(
          (proto::ServerGCGSkillPreviewNotify *const)(v2 + 272),
          onstage_card_guid);
        if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->game_mode_);
        if ( !GCGGameMode::isPreviewSwitchOpen(this->game_mode_) )
        {
          v18 = std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
          GCGPlayerController::sendProto(v18, (const google::protobuf::Message *)(v2 + 272));
          v7 = 0;
        }
        else
        {
          GCGGameBriefInfo::GCGGameBriefInfo((GCGGameBriefInfo *const)(v2 + 416));
          GCGGameBriefInfo::GCGGameBriefInfo((GCGGameBriefInfo *const)(v2 + 672));
          GCGSkillLogic::recordGameModeBriefInfo(this, (GCGGameBriefInfo *)(v2 + 416));
          *(_QWORD *)(v2 + 48) = v2 + 272;
          v19 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176));
          v34.log_ = (common::milog::MiLog *)this;
          v34.ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)(v2 + 176);
          LODWORD(v34.ostr_ptr_._M_refcount._M_pi) = controller_id;
          v34.ostr_ = (common::milog::MilogStringStream *)(v2 + 48);
          v28.__fill_skill_preview_func = (GCGSkillLogic::doSpecificControllerSkillPreview::<lambda(const GCGSkill&, GCGSkillPreviewContext&)> *)(v2 + 48);
          *(_QWORD *)&v28.__controller_id = v34.ostr_ptr_._M_refcount._M_pi;
          v28.__onstage_card_ptr = (std::shared_ptr<GCGCard> *)(v2 + 176);
          v28.__this = this;
          std::function<ForeachPolicy ()(GCGSkill &)>::function<GCGSkillLogic::doSpecificControllerSkillPreview(proto::GCGControllerValue)::{lambda(GCGSkill &)#2},void,void>(
            (std::function<ForeachPolicy(GCGSkill&)> *const)&v35,
            v28);
          GCGCard::foreachSkill(v19, (std::function<ForeachPolicy(GCGSkill&)> *)&v35);
          std::function<ForeachPolicy ()(GCGSkill &)>::~function((std::function<ForeachPolicy(GCGSkill&)> *const)&v35);
          *(_QWORD *)(v2 + 80) = v2 + 272;
          CharacterZone = GCGField::getCharacterZone(cur_field);
          __f.__this = this;
          __f.__cur_field = cur_field;
          *(_QWORD *)&__f.__onstage_card_guid = __PAIR64__(controller_id, onstage_card_guid);
          __f.__onstage_card_ptr = (std::shared_ptr<GCGCard> *)(v2 + 176);
          __f.__fill_change_onstage_preview_func.__preview_notify = *(proto::ServerGCGSkillPreviewNotify **)(v2 + 80);
          v27.__fill_change_onstage_preview_func.__preview_notify = __f.__fill_change_onstage_preview_func.__preview_notify;
          v27.__onstage_card_ptr = (std::shared_ptr<GCGCard> *)(v2 + 176);
          *(_QWORD *)&v27.__onstage_card_guid = __PAIR64__(controller_id, onstage_card_guid);
          v27.__cur_field = cur_field;
          v27.__this = this;
          std::function<ForeachPolicy ()(GCGCard &)>::function<GCGSkillLogic::doSpecificControllerSkillPreview(proto::GCGControllerValue)::{lambda(GCGCard &)#4},void,void>(
            (std::function<ForeachPolicy(GCGCard&)> *const)&v35,
            v27);
          GCGCharacterZone::foreachAliveCharacter(CharacterZone, (std::function<ForeachPolicy(GCGCard&)> *)&v35);
          std::function<ForeachPolicy ()(GCGCard &)>::~function((std::function<ForeachPolicy(GCGCard&)> *const)&v35);
          *(_QWORD *)(v2 + 112) = v2 + 272;
          v21 = GCGField::getCharacterZone(cur_field);
          CardVec = GCGCardZone::getCardVec(v21);
          std::vector<std::shared_ptr<GCGCard>>::vector(
            (std::vector<std::shared_ptr<GCGCard>> *const)(v2 + 208),
            CardVec);
          HandZone = GCGField::getHandZone(cur_field);
          v35.log_ = (common::milog::MiLog *)this;
          LODWORD(v35.ostr_ptr_._M_ptr) = controller_id;
          v35.ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(v2 + 208);
          v35.ostr_ = (common::milog::MilogStringStream *)(v2 + 112);
          v29.__fill_playcard_preview_func = (GCGSkillLogic::doSpecificControllerSkillPreview::<lambda(uint32_t, uint32_t, GCGSkillPreviewContext&)> *)(v2 + 112);
          v29.__cur_all_character_card_ptr_vec = (std::vector<std::shared_ptr<GCGCard>> *)(v2 + 208);
          *(_OWORD *)&v29.__this = __PAIR128__((unsigned __int64)v35.ostr_ptr_._M_ptr, (unsigned __int64)this);
          std::function<ForeachPolicy ()(GCGCard &)>::function<GCGSkillLogic::doSpecificControllerSkillPreview(proto::GCGControllerValue)::{lambda(GCGCard &)#6},void,void>(
            &p_func,
            v29);
          GCGCardZone::foreachCard(HandZone, &p_func);
          std::function<ForeachPolicy ()(GCGCard &)>::~function(&p_func);
          GCGSkillLogic::recordGameModeBriefInfo(this, (GCGGameBriefInfo *)(v2 + 672));
          if ( !GCGGameBriefInfo::checkEqual((GCGGameBriefInfo *const)(v2 + 416), (const GCGGameBriefInfo *)(v2 + 672)) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&p_func,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/card_game/skill/gcg_skill_logic.cpp",
              "doSpecificControllerSkillPreview",
              2947);
            v24 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                    (common::milog::MiLogStream *const)&p_func,
                    (const char (*)[38])"preview change core data, controller:");
            val = controller_id;
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &val);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
          }
          v25 = std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
          GCGPlayerController::sendProto(v25, (const google::protobuf::Message *)(v2 + 272));
          v7 = 0;
          std::vector<std::shared_ptr<GCGCard>>::~vector((std::vector<std::shared_ptr<GCGCard>> *const)(v2 + 208));
          GCGGameBriefInfo::~GCGGameBriefInfo((GCGGameBriefInfo *const)(v2 + 672));
          GCGGameBriefInfo::~GCGGameBriefInfo((GCGGameBriefInfo *const)(v2 + 416));
        }
        proto::ServerGCGSkillPreviewNotify::~ServerGCGSkillPreviewNotify((proto::ServerGCGSkillPreviewNotify *const)(v2 + 272));
      }
    }
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v2 + 176));
  }
  std::shared_ptr<GCGPlayerController>::~shared_ptr((std::shared_ptr<GCGPlayerController> *const)(v2 + 144));
  result = v7;
  if ( v37 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF806C) = 0LL;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8070) = -168430091;
  }
  return result;
};

// Line 2716: range 000000000E304B36-000000000E304BB3
void __cdecl GCGSkillLogic::doSpecificControllerSkillPreview(proto::GCGControllerValue)::{lambda(GCGSkill const&,GCGSkillPreviewContext &)#1}::operator()(
        const GCGSkillLogic::doSpecificControllerSkillPreview::<lambda(const GCGSkill&, GCGSkillPreviewContext&)> *const __closure,
        const GCGSkill *skill,
        GCGSkillPreviewContext *preview_ctx)
{
  uint32_t SkillId; // edx
  proto::GCGSkillPreviewInfo *proto_cur_skill_preview_info; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  proto_cur_skill_preview_info = proto::ServerGCGSkillPreviewNotify::add_skill_preview_list(__closure->__preview_notify);
  SkillId = GCGSkill::getSkillId(skill);
  proto::GCGSkillPreviewInfo::set_skill_id(proto_cur_skill_preview_info, SkillId);
  GCGSkillPreviewInfo::toClient(&preview_ctx->preview_info, proto_cur_skill_preview_info);
};

// Line 2722: range 000000000E304BB4-000000000E305EC5
ForeachPolicy __cdecl GCGSkillLogic::doSpecificControllerSkillPreview(proto::GCGControllerValue)::{lambda(GCGSkill &)#2}::operator()(
        const GCGSkillLogic::doSpecificControllerSkillPreview::<lambda(GCGSkill&)> *const __closure,
        GCGSkill *skill)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  GCGSkillLogic *this; // rax
  ForeachPolicy v6; // r14d
  GCGControllerValue controller_id; // edx
  GCGSkillLogic *v8; // rax
  common::milog::MiLogStream *v9; // r14
  GCGSkillLogic *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  GCGSkillLogic *v19; // rax
  uint32_t SnapshotVersionId; // eax
  GCGSkillLogic *v21; // rax
  signed int ActionMgr; // ecx
  std::__shared_ptr_access<GCGActionPreviewAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // r14
  unsigned __int64 v26; // rax
  void (__fastcall *v27)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, unsigned __int64); // r15
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::shared_ptr<GCGCard> *onstage_card_ptr; // r14
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  GCGControllerValue v32; // r14d
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  GCGSkillLogic *v34; // rax
  GCGSkillLogic *SkillLogic; // r14
  GCGSkillLogic *v36; // rax
  signed int v37; // ecx
  uint32_t v38; // r14d
  std::__shared_ptr_access<GCGActionPreviewAfterAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // r14
  unsigned __int64 v42; // rax
  void (__fastcall *v43)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, unsigned __int64); // r15
  GCGSkillLogic *v44; // rax
  std::tuple_element<1,const std::pair<unsigned int const,int> >::type *v45; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v46; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v47; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v48; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v49; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v50; // rax
  ForeachPolicy result; // eax
  unsigned int val; // [rsp+28h] [rbp-308h] BYREF
  unsigned int Id; // [rsp+2Ch] [rbp-304h] BYREF
  unsigned int v54; // [rsp+30h] [rbp-300h] BYREF
  unsigned int SkillId; // [rsp+34h] [rbp-2FCh] BYREF
  std::map<unsigned int,int>::const_iterator __for_begin; // [rsp+38h] [rbp-2F8h] BYREF
  std::map<unsigned int,int>::const_iterator __for_end; // [rsp+40h] [rbp-2F0h] BYREF
  GCGSkillPreviewContext *preview_context; // [rsp+48h] [rbp-2E8h]
  const GCGSkillPreviewInfo *preview_ctx_info; // [rsp+50h] [rbp-2E0h]
  const GCGSkillPreviewHp *hp_info; // [rsp+58h] [rbp-2D8h]
  const std::map<unsigned int,int> *__for_range; // [rsp+60h] [rbp-2D0h]
  const std::pair<unsigned int const,int> *v62; // [rsp+68h] [rbp-2C8h]
  std::tuple_element<0,const std::pair<unsigned int const,int> >::type *guid; // [rsp+70h] [rbp-2C0h]
  std::tuple_element<1,const std::pair<unsigned int const,int> >::type *damage; // [rsp+78h] [rbp-2B8h]
  std::enable_shared_from_this<GCGSkill> v65; // [rsp+80h] [rbp-2B0h] BYREF
  std::enable_shared_from_this<GCGSkill> v66; // [rsp+90h] [rbp-2A0h] BYREF
  common::milog::MiLogStream v67; // [rsp+A0h] [rbp-290h] BYREF
  char v68[624]; // [rsp+C0h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v68;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 16 18 cur_phase_ptr:2724 80 16 10 guard:2741 112 16 30 attack_preview_action_ptr:2747 144 1"
                        "6 30 trigger_windows_param_ptr:2757 176 16 35 attack_post_preview_action_ptr:2765 208 16 14 dama"
                        "ge_ss:2783 240 257 11 holder:2744";
  *(_QWORD *)(v2 + 16) = GCGSkillLogic::doSpecificControllerSkillPreview(proto::GCGControllerValue)::{lambda(GCGSkill &)#2}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862726] = 62194;
  v4[536862727] = 62194;
  v4[536862735] = -218038272;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  this = __closure->__this;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__this->game_mode_);
  GCGGameMode::getPhaseMgr(this->game_mode_);
  GCGPhaseMgr::getCurPhase((GCGPhaseMgr *const)(v2 + 48));
  if ( std::operator==<GCGPhaseBase>((const std::shared_ptr<GCGPhaseBase> *)(v2 + 48), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v67,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/skill/gcg_skill_logic.cpp",
      "operator()",
      2727);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v67,
      (const char (*)[25])"cur_phase_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v67);
    v6 = FOREACH_BREAK;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__onstage_card_ptr >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__onstage_card_ptr);
    if ( std::operator==<GCGCard>(__closure->__onstage_card_ptr, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v67,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/skill/gcg_skill_logic.cpp",
        "operator()",
        2732);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        &v67,
        (const char (*)[28])"onstage_card_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v67);
      v6 = FOREACH_CONTINUE;
    }
    else if ( !GCGSkill::isActivelyUse(skill) )
    {
      v6 = FOREACH_CONTINUE;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__controller_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&__closure->__controller_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&__closure->__controller_id);
      }
      controller_id = __closure->__controller_id;
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      v8 = __closure->__this;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__this->game_mode_);
      GCGSkillPrevewGuard::GCGSkillPrevewGuard((GCGSkillPrevewGuard *const)(v2 + 80), v8->game_mode_, controller_id);
      common::milog::MiLogStream::create(
        &v67,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/skill/gcg_skill_logic.cpp",
        "operator()",
        2742);
      v9 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v67, (const char (*)[17])"[PREVIEW] start ");
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      v10 = __closure->__this;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__this->game_mode_);
      val = GCGGameMode::getSnapshotVersionId(v10->game_mode_);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])" card:");
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__onstage_card_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__onstage_card_ptr);
      v13 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__onstage_card_ptr);
      Id = GCGCard::getId(v13);
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &Id);
      v15 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v14, (const char (*)[2])" ");
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__onstage_card_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__onstage_card_ptr);
      v16 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__onstage_card_ptr);
      v54 = GCGCard::getGuid(v16);
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &v54);
      v18 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v17, (const char (*)[8])" skill:");
      SkillId = GCGSkill::getSkillId(skill);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &SkillId);
      common::milog::MiLogStream::~MiLogStream(&v67);
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      v19 = __closure->__this;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__this->game_mode_);
      SnapshotVersionId = GCGGameMode::getSnapshotVersionId(v19->game_mode_);
      common::milog::MilogContextHolder::MilogContextHolder(
        (common::milog::MilogContextHolder *const)(v2 + 240),
        "pw:%u",
        SnapshotVersionId);
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      v21 = __closure->__this;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__this->game_mode_);
      ActionMgr = (unsigned int)GCGGameMode::getActionMgr(v21->game_mode_);
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__controller_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&__closure->__controller_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&__closure->__controller_id);
      }
      GCGActionMgr::createAction<GCGActionPreviewAttack>((GCGActionMgr *const)(v2 + 112), (GCGControllerValue)ActionMgr);
      if ( std::operator==<GCGActionPreviewAttack>((const std::shared_ptr<GCGActionPreviewAttack> *)(v2 + 112), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v67,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/skill/gcg_skill_logic.cpp",
          "operator()",
          2750);
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          &v67,
          (const char (*)[33])"[GCG_RET] action_ptr is nullptr.");
        common::milog::MiLogStream::~MiLogStream(&v67);
        v6 = FOREACH_BREAK;
      }
      else
      {
        std::enable_shared_from_this<GCGSkill>::shared_from_this(&v65);
        v23 = std::__shared_ptr_access<GCGActionPreviewAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionPreviewAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        std::weak_ptr<GCGSkill>::operator=<GCGSkill>(&v23->skill_wtr, (const std::shared_ptr<GCGSkill> *)&v65);
        std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)&v65);
        v24 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        v25 = v24;
        if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v24);
        v26 = (unsigned __int64)(v25->_vptr_GCGPhaseBase + 5);
        if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v25->_vptr_GCGPhaseBase + 5);
        v27 = *(void (__fastcall **)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, unsigned __int64))v26;
        std::shared_ptr<GCGActionBase>::shared_ptr<GCGActionPreviewAttack,void>(
          (std::shared_ptr<GCGActionBase> *const)(v2 + 208),
          (const std::shared_ptr<GCGActionPreviewAttack> *)(v2 + 112));
        v27(v25, v2 + 208);
        std::shared_ptr<GCGActionBase>::~shared_ptr((std::shared_ptr<GCGActionBase> *const)(v2 + 208));
        common::tools::perf::make_shared<GCGSkillUseParam>();
        v28 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
        if ( *(_BYTE *)(((unsigned __int64)&v28->trigger_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v28->trigger_type >> 3) + 0x7FFF8000) <= 3 )
        {
          v28 = (std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v28->trigger_type);
        }
        v28->trigger_type = GCG_TRIGGER_ACTION_POST;
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__onstage_card_ptr >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__closure->__onstage_card_ptr);
        onstage_card_ptr = __closure->__onstage_card_ptr;
        v30 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
        std::shared_ptr<GCGCard>::operator=(&v30->source_card_ptr, onstage_card_ptr);
        std::enable_shared_from_this<GCGSkill>::shared_from_this(&v66);
        v31 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
        std::shared_ptr<GCGSkill>::operator=(&v31->skill_ptr, (std::shared_ptr<GCGSkill> *)&v66);
        std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)&v66);
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__controller_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&__closure->__controller_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&__closure->__controller_id);
        }
        v32 = __closure->__controller_id;
        v33 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
        if ( *(_BYTE *)(((unsigned __int64)&v33->controller_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v33->controller_id >> 3) + 0x7FFF8000) <= 3 )
        {
          v33 = (std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v33->controller_id);
        }
        v33->controller_id = v32;
        if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
          __asan_report_load8(__closure);
        v34 = __closure->__this;
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->game_mode_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__closure->__this->game_mode_);
        SkillLogic = GCGGameMode::getSkillLogic(v34->game_mode_);
        std::shared_ptr<GCGSkillUseParam>::shared_ptr(
          (std::shared_ptr<GCGSkillUseParam> *const)(v2 + 208),
          (const std::shared_ptr<GCGSkillUseParam> *)(v2 + 144));
        std::shared_ptr<GCGPhaseBase>::shared_ptr(
          (std::shared_ptr<GCGPhaseBase> *const)(v2 + 176),
          (const std::shared_ptr<GCGPhaseBase> *)(v2 + 48));
        GCGSkillLogic::trigger(
          SkillLogic,
          (GCGPhaseBasePtr *)(v2 + 176),
          GCG_TRIGGER_ACTION_POST,
          (GCGSkillUseParamPtr *)(v2 + 208));
        std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v2 + 176));
        std::shared_ptr<GCGSkillUseParam>::~shared_ptr((std::shared_ptr<GCGSkillUseParam> *const)(v2 + 208));
        if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
          __asan_report_load8(__closure);
        v36 = __closure->__this;
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->game_mode_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__closure->__this->game_mode_);
        v37 = (unsigned int)GCGGameMode::getActionMgr(v36->game_mode_);
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__controller_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&__closure->__controller_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&__closure->__controller_id);
        }
        GCGActionMgr::createAction<GCGActionPreviewAfterAttack>(
          (GCGActionMgr *const)(v2 + 176),
          (GCGControllerValue)v37);
        if ( std::operator==<GCGActionPreviewAfterAttack>(
               (const std::shared_ptr<GCGActionPreviewAfterAttack> *)(v2 + 176),
               0LL) )
        {
          common::milog::MiLogStream::create(
            &v67,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/card_game/skill/gcg_skill_logic.cpp",
            "operator()",
            2768);
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            &v67,
            (const char (*)[33])"[GCG_RET] action_ptr is nullptr.");
          common::milog::MiLogStream::~MiLogStream(&v67);
          v6 = FOREACH_BREAK;
        }
        else
        {
          v38 = GCGSkill::getSkillId(skill);
          v39 = std::__shared_ptr_access<GCGActionPreviewAfterAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionPreviewAfterAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176));
          if ( *(_BYTE *)(((unsigned __int64)&v39->skill_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v39->skill_id >> 3) + 0x7FFF8000) <= 3 )
          {
            v39 = (std::__shared_ptr_access<GCGActionPreviewAfterAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v39->skill_id);
          }
          v39->skill_id = v38;
          v40 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
          v41 = v40;
          if ( *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v40);
          v42 = (unsigned __int64)(v41->_vptr_GCGPhaseBase + 5);
          if ( *(_BYTE *)((v42 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v41->_vptr_GCGPhaseBase + 5);
          v43 = *(void (__fastcall **)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, unsigned __int64))v42;
          std::shared_ptr<GCGActionBase>::shared_ptr<GCGActionPreviewAfterAttack,void>(
            (std::shared_ptr<GCGActionBase> *const)(v2 + 208),
            (const std::shared_ptr<GCGActionPreviewAfterAttack> *)(v2 + 176));
          v43(v41, v2 + 208);
          std::shared_ptr<GCGActionBase>::~shared_ptr((std::shared_ptr<GCGActionBase> *const)(v2 + 208));
          if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
            __asan_report_load8(__closure);
          GCGSkillLogic::execPreviewActions(__closure->__this);
          if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
            __asan_report_load8(__closure);
          v44 = __closure->__this;
          if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->game_mode_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&__closure->__this->game_mode_);
          preview_context = GCGGameMode::getSkillPreviewContext(v44->game_mode_);
          GCGSkillPreviewContext::genPreviewResult(preview_context);
          common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 208));
          common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
            (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 208),
            "[");
          preview_ctx_info = &preview_context->preview_info;
          hp_info = &preview_context->preview_info.hp_info;
          __for_range = &preview_context->preview_info.hp_info.character_damage_info_map;
          __for_begin._M_node = std::map<unsigned int,int>::begin(&preview_context->preview_info.hp_info.character_damage_info_map)._M_node;
          __for_end._M_node = std::map<unsigned int,int>::end(__for_range)._M_node;
          while ( std::operator!=(&__for_begin, &__for_end) )
          {
            v62 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,int>>::operator*(&__for_begin);
            guid = std::get<0ul,unsigned int const,int>(v62);
            v45 = (std::tuple_element<1,const std::pair<unsigned int const,int> >::type *)std::get<1ul,unsigned int const,int>(v62);
            damage = v45;
            if ( *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v45 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v45);
            }
            if ( *damage <= 0 )
            {
              v49 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                      (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 208),
                      "|hurt|");
              if ( *(_BYTE *)(((unsigned __int64)guid >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)guid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)guid >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(guid);
              }
              v50 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v49, *guid);
              v48 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v50, ":");
              if ( *(_BYTE *)(((unsigned __int64)damage >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)damage & 7) + 3) >= *(_BYTE *)(((unsigned __int64)damage >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(damage);
              }
            }
            else
            {
              v46 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                      (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 208),
                      "|healhp|");
              if ( *(_BYTE *)(((unsigned __int64)guid >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)guid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)guid >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(guid);
              }
              v47 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v46, *guid);
              v48 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v47, ":");
              if ( *(_BYTE *)(((unsigned __int64)damage >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)damage & 7) + 3) >= *(_BYTE *)(((unsigned __int64)damage >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(damage);
              }
            }
            common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v48, *damage);
            std::_Rb_tree_const_iterator<std::pair<unsigned int const,int>>::operator++(&__for_begin);
          }
          common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
            (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 208),
            "]");
          common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
            (std::string *)&v67,
            (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 208));
          if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
            __asan_report_load8(__closure);
          std::string::operator+=(__closure->__this, &v67);
          std::string::~string(&v67);
          if ( *(_BYTE *)(((unsigned __int64)&__closure->__fill_skill_preview_func >> 3) + 0x7FFF8000) )
            __asan_report_load8(&__closure->__fill_skill_preview_func);
          GCGSkillLogic::doSpecificControllerSkillPreview(proto::GCGControllerValue)::{lambda(GCGSkill const&,GCGSkillPreviewContext &)#1}::operator()(
            __closure->__fill_skill_preview_func,
            skill,
            preview_context);
          v6 = FOREACH_CONTINUE;
          common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 208));
        }
        std::shared_ptr<GCGActionPreviewAfterAttack>::~shared_ptr((std::shared_ptr<GCGActionPreviewAfterAttack> *const)(v2 + 176));
        std::shared_ptr<GCGSkillUseParam>::~shared_ptr((std::shared_ptr<GCGSkillUseParam> *const)(v2 + 144));
      }
      std::shared_ptr<GCGActionPreviewAttack>::~shared_ptr((std::shared_ptr<GCGActionPreviewAttack> *const)(v2 + 112));
      common::milog::MilogContextHolder::~MilogContextHolder((common::milog::MilogContextHolder *const)(v2 + 240));
      GCGSkillPrevewGuard::~GCGSkillPrevewGuard((GCGSkillPrevewGuard *const)(v2 + 80));
    }
  }
  std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v2 + 48));
  result = v6;
  if ( v68 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
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
  }
  return result;
};

// Line 2808: range 000000000E305EC6-000000000E305F5E
void __cdecl GCGSkillLogic::doSpecificControllerSkillPreview(proto::GCGControllerValue)::{lambda(unsigned int,bool,GCGSkillPreviewContext &)#3}::operator()(
        const GCGSkillLogic::doSpecificControllerSkillPreview::<lambda(uint32_t, bool, GCGSkillPreviewContext&)> *const __closure,
        uint32_t target_card_guid,
        bool is_quick,
        GCGSkillPreviewContext *preview_ctx)
{
  proto::GCGChangeOnstageInfo *proto_change_onstage_info; // [rsp+20h] [rbp-10h]
  proto::GCGSkillPreviewInfo *proto_skill_preview_info; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  proto_change_onstage_info = proto::ServerGCGSkillPreviewNotify::add_change_onstage_preview_list(__closure->__preview_notify);
  proto::GCGChangeOnstageInfo::set_is_quick(proto_change_onstage_info, is_quick);
  proto::GCGChangeOnstageInfo::set_card_guid(proto_change_onstage_info, target_card_guid);
  proto_skill_preview_info = proto::GCGChangeOnstageInfo::mutable_change_onstage_preview_info(proto_change_onstage_info);
  GCGSkillPreviewInfo::toClient(&preview_ctx->preview_info, proto_skill_preview_info);
};

// Line 2820: range 000000000E305F60-000000000E3069C3
ForeachPolicy __cdecl GCGSkillLogic::doSpecificControllerSkillPreview(proto::GCGControllerValue)::{lambda(GCGCard &)#4}::operator()(
        const GCGSkillLogic::doSpecificControllerSkillPreview::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  uint32_t Guid; // ecx
  ForeachPolicy v6; // r14d
  GCGSkillLogic *this; // rax
  common::milog::MiLogStream *v8; // r14
  GCGSkillLogic *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  GCGControllerValue controller_id; // edx
  GCGSkillLogic *v15; // rax
  GCGSkillLogic *v16; // rax
  uint32_t SnapshotVersionId; // eax
  GCGControllerValue v18; // ecx
  GCGSkillLogic *v19; // rax
  GCGSkillLogic *SkillLogic; // rax
  GCGCharacterZone *CharacterZone; // r14
  uint32_t v22; // eax
  GCGSkillLogic *v23; // rax
  GCGSkillLogic *v24; // r14
  GCGSkillLogic *v25; // rax
  uint32_t v26; // eax
  ForeachPolicy result; // eax
  bool is_quick_action; // [rsp+27h] [rbp-269h]
  unsigned int val; // [rsp+28h] [rbp-268h] BYREF
  unsigned int v30; // [rsp+2Ch] [rbp-264h] BYREF
  GCGSkillUseParam *trigger_window_param; // [rsp+30h] [rbp-260h]
  GCGSkillPreviewContext *preview_context; // [rsp+38h] [rbp-258h]
  std::shared_ptr<GCGPhaseBase> p_phase_ptr; // [rsp+40h] [rbp-250h] BYREF
  std::shared_ptr<GCGSkill> __r; // [rsp+50h] [rbp-240h] BYREF
  common::milog::MiLogStream v35; // [rsp+60h] [rbp-230h] BYREF
  char v36[528]; // [rsp+80h] [rbp-210h] BYREF

  v2 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 16 18 cur_phase_ptr:2826 80 16 10 guard:2835 112 16 30 trigger_windows_param_ptr:2839 144 2"
                        "57 11 holder:2836";
  *(_QWORD *)(v2 + 16) = GCGSkillLogic::doSpecificControllerSkillPreview(proto::GCGControllerValue)::{lambda(GCGCard &)#4}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862732] = -218038272;
  v4[536862733] = -202116109;
  v4[536862734] = -202116109;
  Guid = GCGCard::getGuid(card);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__onstage_card_guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__onstage_card_guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&__closure->__onstage_card_guid);
  }
  if ( Guid == __closure->__onstage_card_guid )
  {
    v6 = FOREACH_CONTINUE;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    this = __closure->__this;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__this->game_mode_);
    GCGGameMode::getPhaseMgr(this->game_mode_);
    GCGPhaseMgr::getCurPhase((GCGPhaseMgr *const)(v2 + 48));
    if ( std::operator==<GCGPhaseBase>((const std::shared_ptr<GCGPhaseBase> *)(v2 + 48), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_skill_logic.cpp",
        "operator()",
        2829);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        &v35,
        (const char (*)[25])"cur_phase_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v35);
      v6 = FOREACH_BREAK;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/skill/gcg_skill_logic.cpp",
        "operator()",
        2833);
      v8 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v35, (const char (*)[17])"[PREVIEW] start ");
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      v9 = __closure->__this;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__this->game_mode_);
      val = GCGGameMode::getSnapshotVersionId(v9->game_mode_);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      v11 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])" from:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &__closure->__onstage_card_guid);
      v13 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v12, (const char (*)[5])" to:");
      v30 = GCGCard::getGuid(card);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &v30);
      common::milog::MiLogStream::~MiLogStream(&v35);
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__controller_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)__closure + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__closure->__controller_id >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&__closure->__controller_id);
      }
      controller_id = __closure->__controller_id;
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      v15 = __closure->__this;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__this->game_mode_);
      GCGSkillPrevewGuard::GCGSkillPrevewGuard((GCGSkillPrevewGuard *const)(v2 + 80), v15->game_mode_, controller_id);
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      v16 = __closure->__this;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__this->game_mode_);
      SnapshotVersionId = GCGGameMode::getSnapshotVersionId(v16->game_mode_);
      common::milog::MilogContextHolder::MilogContextHolder(
        (common::milog::MilogContextHolder *const)(v2 + 144),
        "pw:%u",
        SnapshotVersionId);
      common::tools::perf::make_shared<GCGSkillUseParam>();
      trigger_window_param = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
      if ( *(_BYTE *)(((unsigned __int64)&trigger_window_param->trigger_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&trigger_window_param->trigger_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&trigger_window_param->trigger_type);
      }
      trigger_window_param->trigger_type = GCG_TRIGGER_DURATION;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__onstage_card_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__onstage_card_ptr);
      std::shared_ptr<GCGCard>::operator=(&trigger_window_param->source_card_ptr, __closure->__onstage_card_ptr);
      std::shared_ptr<GCGSkill>::shared_ptr(&__r, 0LL);
      std::shared_ptr<GCGSkill>::operator=(&trigger_window_param->skill_ptr, &__r);
      std::shared_ptr<GCGSkill>::~shared_ptr(&__r);
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__controller_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)__closure + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__closure->__controller_id >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&__closure->__controller_id);
      }
      v18 = __closure->__controller_id;
      if ( *(_BYTE *)(((unsigned __int64)&trigger_window_param->controller_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&trigger_window_param->controller_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&trigger_window_param->controller_id);
      }
      trigger_window_param->controller_id = v18;
      std::enable_shared_from_this<GCGCard>::shared_from_this((std::enable_shared_from_this<GCGCard> *const)&__r);
      std::shared_ptr<GCGCard>::operator=(&trigger_window_param->target_card_ptr, (std::shared_ptr<GCGCard> *)&__r);
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)&__r);
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      v19 = __closure->__this;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__this->game_mode_);
      SkillLogic = GCGGameMode::getSkillLogic(v19->game_mode_);
      is_quick_action = GCGSkillLogic::canChangeCharacterBeQuickAction(SkillLogic, trigger_window_param);
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__cur_field >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__cur_field);
      CharacterZone = GCGField::getCharacterZone(__closure->__cur_field);
      v22 = GCGCard::getGuid(card);
      GCGCharacterZone::setOnStage(CharacterZone, v22, GCG_REASON_DEFAULT, 1);
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      v23 = __closure->__this;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__this->game_mode_);
      v24 = GCGGameMode::getSkillLogic(v23->game_mode_);
      std::shared_ptr<GCGSkillUseParam>::shared_ptr(
        (std::shared_ptr<GCGSkillUseParam> *const)&__r,
        (const std::shared_ptr<GCGSkillUseParam> *)(v2 + 112));
      std::shared_ptr<GCGPhaseBase>::shared_ptr(&p_phase_ptr, (const std::shared_ptr<GCGPhaseBase> *)(v2 + 48));
      GCGSkillLogic::trigger(v24, &p_phase_ptr, GCG_TRIGGER_ACTION_CHANGE_CHARACTER_POST, (GCGSkillUseParamPtr *)&__r);
      std::shared_ptr<GCGPhaseBase>::~shared_ptr(&p_phase_ptr);
      std::shared_ptr<GCGSkillUseParam>::~shared_ptr((std::shared_ptr<GCGSkillUseParam> *const)&__r);
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      GCGSkillLogic::execPreviewActions(__closure->__this);
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      v25 = __closure->__this;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__this->game_mode_);
      preview_context = GCGGameMode::getSkillPreviewContext(v25->game_mode_);
      GCGSkillPreviewContext::genPreviewResult(preview_context);
      v26 = GCGCard::getGuid(card);
      GCGSkillLogic::doSpecificControllerSkillPreview(proto::GCGControllerValue)::{lambda(unsigned int,bool,GCGSkillPreviewContext &)#3}::operator()(
        &__closure->__fill_change_onstage_preview_func,
        v26,
        is_quick_action,
        preview_context);
      v6 = FOREACH_CONTINUE;
      std::shared_ptr<GCGSkillUseParam>::~shared_ptr((std::shared_ptr<GCGSkillUseParam> *const)(v2 + 112));
      common::milog::MilogContextHolder::~MilogContextHolder((common::milog::MilogContextHolder *const)(v2 + 144));
      GCGSkillPrevewGuard::~GCGSkillPrevewGuard((GCGSkillPrevewGuard *const)(v2 + 80));
    }
    std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v2 + 48));
  }
  result = v6;
  if ( v36 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 2871: range 000000000E3069C4-000000000E306A59
void __cdecl GCGSkillLogic::doSpecificControllerSkillPreview(proto::GCGControllerValue)::{lambda(unsigned int,unsigned int,GCGSkillPreviewContext &)#5}::operator()(
        const GCGSkillLogic::doSpecificControllerSkillPreview::<lambda(uint32_t, uint32_t, GCGSkillPreviewContext&)> *const __closure,
        uint32_t hand_card_guid,
        uint32_t target_card_guid,
        GCGSkillPreviewContext *preview_ctx)
{
  proto::GCGSkillPreviewPlayCardInfo *proto_play_card; // [rsp+20h] [rbp-10h]
  proto::GCGSkillPreviewInfo *proto_play_card_preview_info; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  proto_play_card = proto::ServerGCGSkillPreviewNotify::add_play_card_list(__closure->__preview_notify);
  proto::GCGSkillPreviewPlayCardInfo::set_hand_card_guid(proto_play_card, hand_card_guid);
  proto::GCGSkillPreviewPlayCardInfo::set_target_card_guid(proto_play_card, target_card_guid);
  proto_play_card_preview_info = proto::GCGSkillPreviewPlayCardInfo::mutable_play_card_info(proto_play_card);
  GCGSkillPreviewInfo::toClient(&preview_ctx->preview_info, proto_play_card_preview_info);
};

// Line 2882: range 000000000E306A5A-000000000E307791
ForeachPolicy __cdecl GCGSkillLogic::doSpecificControllerSkillPreview(proto::GCGControllerValue)::{lambda(GCGCard &)#6}::operator()(
        const GCGSkillLogic::doSpecificControllerSkillPreview::<lambda(GCGCard&)>_0 *const __closure,
        GCGCard *card)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  GCGSkillLogic *this; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  GCGControllerValue controller_id; // esi
  GCGSkillLogic *v8; // rax
  GCGSkillLogic *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  GCGControllerValue v13; // edx
  GCGSkillLogic *v14; // rax
  GCGSkillLogic *v15; // rax
  uint32_t SnapshotVersionId; // eax
  GCGSkillLogic *v17; // rax
  signed int ActionMgr; // ecx
  std::__shared_ptr_access<GCGActionPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<GCGActionPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<GCGActionPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::__shared_ptr_access<GCGActionPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  unsigned __int64 v24; // rax
  GCGSkillLogic *v25; // rax
  uint32_t v26; // eax
  ForeachPolicy result; // eax
  void (__fastcall *target_card_guid)(common::milog::MiLogStream *, std::shared_ptr<GCGActionBase> *); // [rsp+8h] [rbp-308h]
  uint32_t target_card_guida; // [rsp+8h] [rbp-308h]
  char v30; // [rsp+10h] [rbp-300h]
  int v31; // [rsp+10h] [rbp-300h]
  common::milog::MiLogStream *v32; // [rsp+10h] [rbp-300h]
  common::milog::MiLogStream *v33; // [rsp+10h] [rbp-300h]
  int v34; // [rsp+10h] [rbp-300h]
  uint32_t v35; // [rsp+10h] [rbp-300h]
  std::vector<unsigned int> *v36; // [rsp+10h] [rbp-300h]
  common::milog::MiLogStream *v37; // [rsp+10h] [rbp-300h]
  GCGSkillLogic::doSpecificControllerSkillPreview::<lambda(uint32_t, uint32_t, GCGSkillPreviewContext&)> *fill_playcard_preview_func; // [rsp+10h] [rbp-300h]
  ForeachPolicy v39; // [rsp+1Ch] [rbp-2F4h]
  unsigned int val; // [rsp+38h] [rbp-2D8h] BYREF
  unsigned int Guid; // [rsp+3Ch] [rbp-2D4h] BYREF
  std::vector<std::shared_ptr<GCGCard>>::iterator __for_begin; // [rsp+40h] [rbp-2D0h] BYREF
  std::vector<std::shared_ptr<GCGCard>>::iterator __for_end; // [rsp+48h] [rbp-2C8h] BYREF
  std::vector<std::shared_ptr<GCGCard>> *__for_range; // [rsp+50h] [rbp-2C0h]
  const std::shared_ptr<GCGCard> *character_card_ptr; // [rsp+58h] [rbp-2B8h]
  const std::vector<data::GCGChooseExcelConfig> *card_choose_config_vec; // [rsp+60h] [rbp-2B0h]
  GCGSkillPreviewContext *preview_context; // [rsp+68h] [rbp-2A8h]
  std::shared_ptr<GCGActionBase> v49; // [rsp+70h] [rbp-2A0h] BYREF
  std::vector<unsigned int> p_target_guid_vec; // [rsp+80h] [rbp-290h] BYREF
  common::milog::MiLogStream v51; // [rsp+A0h] [rbp-270h] BYREF
  char v52[592]; // [rsp+C0h] [rbp-250h] BYREF

  v2 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(544LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 26 target_character_guid:2902 48 16 18 cur_phase_ptr:2888 80 16 10 guard:2917 112 16 15 a"
                        "ction_ptr:2921 144 24 21 target_param_vec:2903 208 257 11 holder:2918";
  *(_QWORD *)(v2 + 16) = GCGSkillLogic::doSpecificControllerSkillPreview(proto::GCGControllerValue)::{lambda(GCGCard &)#6}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = -218959360;
  v4[536862726] = 62194;
  v4[536862734] = -218038272;
  v4[536862735] = -202116109;
  v4[536862736] = -202116109;
  if ( !GCGCard::isConfigNeedPreview(card) )
  {
    v39 = FOREACH_CONTINUE;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    this = __closure->__this;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__this->game_mode_);
    GCGGameMode::getPhaseMgr(this->game_mode_);
    GCGPhaseMgr::getCurPhase((GCGPhaseMgr *const)(v2 + 48));
    if ( std::operator==<GCGPhaseBase>((const std::shared_ptr<GCGPhaseBase> *)(v2 + 48), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v51,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/skill/gcg_skill_logic.cpp",
        "operator()",
        2891);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        &v51,
        (const char (*)[25])"cur_phase_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v51);
      v39 = FOREACH_BREAK;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__cur_all_character_card_ptr_vec >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__cur_all_character_card_ptr_vec);
      __for_range = __closure->__cur_all_character_card_ptr_vec;
      __for_begin._M_current = std::vector<std::shared_ptr<GCGCard>>::begin(__for_range)._M_current;
      __for_end._M_current = std::vector<std::shared_ptr<GCGCard>>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>(
                &__for_begin,
                &__for_end) )
      {
        character_card_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>::operator*(&__for_begin);
        if ( std::operator==<GCGCard>(character_card_ptr, 0LL) )
        {
          common::milog::MiLogStream::create(
            &v51,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/card_game/skill/gcg_skill_logic.cpp",
            "operator()",
            2899);
          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v51,
            (const char (*)[30])"character_card_ptr is nullptr");
          common::milog::MiLogStream::~MiLogStream(&v51);
        }
        else
        {
          v6 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)character_card_ptr);
          *(_DWORD *)(v2 + 32) = GCGCard::getGuid(v6);
          std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 144));
          card_choose_config_vec = GCGCard::getChooseConfig(card);
          if ( std::vector<data::GCGChooseExcelConfig>::empty(card_choose_config_vec) )
            goto LABEL_27;
          std::vector<unsigned int>::emplace_back<unsigned int const&>(
            (std::vector<unsigned int> *const)(v2 + 144),
            (const unsigned int *)(v2 + 32),
            (const unsigned int *)(v2 + 32));
          std::vector<unsigned int>::vector(&p_target_guid_vec, (const std::vector<unsigned int> *)(v2 + 144));
          if ( *(_BYTE *)(((unsigned __int64)&__closure->__controller_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&__closure->__controller_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&__closure->__controller_id);
          }
          controller_id = __closure->__controller_id;
          if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
            __asan_report_load8(__closure);
          v8 = __closure->__this;
          if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->game_mode_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&__closure->__this->game_mode_);
          v30 = GCGUtils::isTargetValid(v8->game_mode_, controller_id, card_choose_config_vec, &p_target_guid_vec) ^ 1;
          std::vector<unsigned int>::~vector(&p_target_guid_vec);
          if ( v30 )
          {
            v31 = 0;
          }
          else
          {
LABEL_27:
            common::milog::MiLogStream::create(
              &v51,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/card_game/skill/gcg_skill_logic.cpp",
              "operator()",
              2915);
            v32 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    &v51,
                    (const char (*)[17])"[PREVIEW] start ");
            if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
              __asan_report_load8(__closure);
            v9 = __closure->__this;
            if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->game_mode_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&__closure->__this->game_mode_);
            val = GCGGameMode::getSnapshotVersionId(v9->game_mode_);
            v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &val);
            v33 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])" hand:");
            Guid = GCGCard::getGuid(card);
            v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &Guid);
            v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" target:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 32));
            common::milog::MiLogStream::~MiLogStream(&v51);
            if ( *(_BYTE *)(((unsigned __int64)&__closure->__controller_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&__closure->__controller_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&__closure->__controller_id);
            }
            v13 = __closure->__controller_id;
            if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
              __asan_report_load8(__closure);
            v14 = __closure->__this;
            if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->game_mode_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&__closure->__this->game_mode_);
            GCGSkillPrevewGuard::GCGSkillPrevewGuard((GCGSkillPrevewGuard *const)(v2 + 80), v14->game_mode_, v13);
            if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
              __asan_report_load8(__closure);
            v15 = __closure->__this;
            if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->game_mode_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&__closure->__this->game_mode_);
            SnapshotVersionId = GCGGameMode::getSnapshotVersionId(v15->game_mode_);
            common::milog::MilogContextHolder::MilogContextHolder(
              (common::milog::MilogContextHolder *const)(v2 + 208),
              "pw:%u",
              SnapshotVersionId);
            if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
              __asan_report_load8(__closure);
            v17 = __closure->__this;
            if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->game_mode_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&__closure->__this->game_mode_);
            ActionMgr = (unsigned int)GCGGameMode::getActionMgr(v17->game_mode_);
            if ( *(_BYTE *)(((unsigned __int64)&__closure->__controller_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&__closure->__controller_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&__closure->__controller_id);
            }
            GCGActionMgr::createAction<GCGActionPlayCard>(
              (GCGActionMgr *const)(v2 + 112),
              (GCGControllerValue)ActionMgr);
            if ( std::operator==<GCGActionPlayCard>((const std::shared_ptr<GCGActionPlayCard> *)(v2 + 112), 0LL) )
            {
              v39 = FOREACH_BREAK;
              v34 = 0;
            }
            else
            {
              v35 = GCGCard::getGuid(card);
              v19 = std::__shared_ptr_access<GCGActionPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionPlayCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
              if ( *(_BYTE *)(((unsigned __int64)&v19->hand_card_guid >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v19->hand_card_guid >> 3) + 0x7FFF8000) <= 3 )
              {
                v19 = (std::__shared_ptr_access<GCGActionPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v19->hand_card_guid);
              }
              v19->hand_card_guid = v35;
              v20 = std::__shared_ptr_access<GCGActionPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionPlayCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
              std::set<unsigned int>::operator=(&v20->cost_dice_set, (std::initializer_list<unsigned int>)0LL);
              v36 = std::move<std::vector<unsigned int> &>((std::vector<unsigned int> *)(v2 + 144));
              v21 = std::__shared_ptr_access<GCGActionPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionPlayCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
              std::vector<unsigned int>::operator=(&v21->target_param_vec, v36);
              v22 = std::__shared_ptr_access<GCGActionPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionPlayCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
              if ( *(_BYTE *)(((unsigned __int64)&v22->cost_energy >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v22->cost_energy >> 3) + 0x7FFF8000) <= 3 )
              {
                v22 = (std::__shared_ptr_access<GCGActionPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v22->cost_energy);
              }
              v22->cost_energy = 0;
              v23 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
              v37 = (common::milog::MiLogStream *)v23;
              if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
                __asan_report_load8(v23);
              v24 = (unsigned __int64)&v37->log_->milog_file_map_._M_t._M_impl.std::_Rb_tree_header;
              if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
                __asan_report_load8(&v37->log_->milog_file_map_._M_t._M_impl.std::_Rb_tree_header);
              target_card_guid = *(void (__fastcall **)(common::milog::MiLogStream *, std::shared_ptr<GCGActionBase> *))v24;
              std::shared_ptr<GCGActionBase>::shared_ptr<GCGActionPlayCard,void>(
                &v49,
                (const std::shared_ptr<GCGActionPlayCard> *)(v2 + 112));
              target_card_guid(v37, &v49);
              std::shared_ptr<GCGActionBase>::~shared_ptr(&v49);
              if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
                __asan_report_load8(__closure);
              GCGSkillLogic::execPreviewActions(__closure->__this);
              if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
                __asan_report_load8(__closure);
              v25 = __closure->__this;
              if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->game_mode_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&__closure->__this->game_mode_);
              preview_context = GCGGameMode::getSkillPreviewContext(v25->game_mode_);
              GCGSkillPreviewContext::genPreviewResult(preview_context);
              if ( *(_BYTE *)(((unsigned __int64)&__closure->__fill_playcard_preview_func >> 3) + 0x7FFF8000) )
                __asan_report_load8(&__closure->__fill_playcard_preview_func);
              fill_playcard_preview_func = __closure->__fill_playcard_preview_func;
              target_card_guida = *(_DWORD *)(v2 + 32);
              v26 = GCGCard::getGuid(card);
              GCGSkillLogic::doSpecificControllerSkillPreview(proto::GCGControllerValue)::{lambda(unsigned int,unsigned int,GCGSkillPreviewContext &)#5}::operator()(
                fill_playcard_preview_func,
                v26,
                target_card_guida,
                preview_context);
              v34 = 1;
            }
            std::shared_ptr<GCGActionPlayCard>::~shared_ptr((std::shared_ptr<GCGActionPlayCard> *const)(v2 + 112));
            common::milog::MilogContextHolder::~MilogContextHolder((common::milog::MilogContextHolder *const)(v2 + 208));
            GCGSkillPrevewGuard::~GCGSkillPrevewGuard((GCGSkillPrevewGuard *const)(v2 + 80));
            if ( v34 == 1 )
              v31 = 2;
            else
              v31 = 1;
          }
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 144));
          if ( v31 && v31 != 2 )
            goto LABEL_73;
        }
        __gnu_cxx::__normal_iterator<std::shared_ptr<GCGCard> *,std::vector<std::shared_ptr<GCGCard>>>::operator++(&__for_begin);
      }
      v39 = FOREACH_CONTINUE;
    }
LABEL_73:
    std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v2 + 48));
  }
  result = v39;
  if ( v52 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 2954: range 000000000E30897C-000000000E308ADF
int32_t __cdecl GCGSkillLogic::recordGameModeBriefInfo(GCGSkillLogic *const this, GCGGameBriefInfo *brief_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t result; // eax
  GCGDuel *duel; // [rsp+18h] [rbp-78h]
  GCGField *field1; // [rsp+20h] [rbp-70h]
  GCGField *field2; // [rsp+28h] [rbp-68h]
  char v9[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 14 copy_func:2958";
  *(_QWORD *)(v2 + 16) = GCGSkillLogic::recordGameModeBriefInfo;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  duel = GCGGameMode::getDuel(this->game_mode_);
  field1 = GCGDuel::getField(duel, GCG_CONTROLLER_A);
  field2 = GCGDuel::getField(duel, GCG_CONTROLLER_B);
  GCGSkillLogic::recordGameModeBriefInfo(GCGGameBriefInfo &)::{lambda(GCGField &,GCGFieldBriefInfo &)#1}::operator()(
    (const GCGSkillLogic::recordGameModeBriefInfo::<lambda(GCGField&, GCGFieldBriefInfo&)> *const)(v2 + 32),
    field1,
    &brief_info->field1);
  GCGSkillLogic::recordGameModeBriefInfo(GCGGameBriefInfo &)::{lambda(GCGField &,GCGFieldBriefInfo &)#1}::operator()(
    (const GCGSkillLogic::recordGameModeBriefInfo::<lambda(GCGField&, GCGFieldBriefInfo&)> *const)(v2 + 32),
    field2,
    &brief_info->field2);
  result = 0;
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

// Line 2958: range 000000000E3087A6-000000000E30897A
void __cdecl GCGSkillLogic::recordGameModeBriefInfo(GCGGameBriefInfo &)::{lambda(GCGField &,GCGFieldBriefInfo &)#1}::operator()(
        const GCGSkillLogic::recordGameModeBriefInfo::<lambda(GCGField&, GCGFieldBriefInfo&)> *const __closure,
        GCGField *field,
        GCGFieldBriefInfo *brief)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  GCGCardZone *SummonZone; // rax
  GCGCardZone *v7; // rax
  GCGCardZone *HandZone; // rax
  GCGCharacterZone *character_zone; // [rsp+28h] [rbp-98h]
  std::function<ForeachPolicy(GCGCard&)> p_func; // [rsp+30h] [rbp-90h] BYREF
  char v12[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 1 25 copy_card_brief_func:2975";
  *(_QWORD *)(v3 + 16) = GCGSkillLogic::recordGameModeBriefInfo(GCGGameBriefInfo &)::{lambda(GCGField &,GCGFieldBriefInfo &)#1}::operator();
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116351;
  character_zone = GCGField::getCharacterZone(field);
  std::function<ForeachPolicy ()(GCGCard &)>::function<GCGSkillLogic::recordGameModeBriefInfo(GCGGameBriefInfo &)::{lambda(GCGField &,GCGFieldBriefInfo &)#1}::operator() const(GCGField &,GCGFieldBriefInfo &)::{lambda(GCGCard &)#1},void,void>(
    &p_func,
    (GCGSkillLogic::recordGameModeBriefInfo::<lambda(GCGField&, GCGFieldBriefInfo&)>::operator()::<lambda(GCGCard&)>)brief);
  GCGCharacterZone::foreachCharacter(character_zone, &p_func);
  std::function<ForeachPolicy ()(GCGCard &)>::~function(&p_func);
  SummonZone = GCGField::getSummonZone(field);
  GCGSkillLogic::recordGameModeBriefInfo(GCGGameBriefInfo &)::{lambda(GCGField &,GCGFieldBriefInfo &)#1}::operator() const(GCGField &,GCGFieldBriefInfo &)::{lambda(GCGCardZone &,std::vector<GCGCardBriefInfo> &)#2}::operator()(
    (const GCGSkillLogic::recordGameModeBriefInfo::<lambda(GCGField&, GCGFieldBriefInfo&)>::operator()::<lambda(GCGCardZone&, std::vector<GCGCardBriefInfo>&)> *const)(v3 + 32),
    SummonZone,
    &brief->summon_vec);
  v7 = GCGField::getOnStageZone(field);
  GCGSkillLogic::recordGameModeBriefInfo(GCGGameBriefInfo &)::{lambda(GCGField &,GCGFieldBriefInfo &)#1}::operator() const(GCGField &,GCGFieldBriefInfo &)::{lambda(GCGCardZone &,std::vector<GCGCardBriefInfo> &)#2}::operator()(
    (const GCGSkillLogic::recordGameModeBriefInfo::<lambda(GCGField&, GCGFieldBriefInfo&)>::operator()::<lambda(GCGCardZone&, std::vector<GCGCardBriefInfo>&)> *const)(v3 + 32),
    v7,
    &brief->onstage_vec);
  HandZone = GCGField::getHandZone(field);
  GCGSkillLogic::recordGameModeBriefInfo(GCGGameBriefInfo &)::{lambda(GCGField &,GCGFieldBriefInfo &)#1}::operator() const(GCGField &,GCGFieldBriefInfo &)::{lambda(GCGCardZone &,std::vector<GCGCardBriefInfo> &)#2}::operator()(
    (const GCGSkillLogic::recordGameModeBriefInfo::<lambda(GCGField&, GCGFieldBriefInfo&)>::operator()::<lambda(GCGCardZone&, std::vector<GCGCardBriefInfo>&)> *const)(v3 + 32),
    HandZone,
    &brief->hand_vec);
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

// Line 2961: range 000000000E308358-000000000E308585
ForeachPolicy __cdecl GCGSkillLogic::recordGameModeBriefInfo(GCGGameBriefInfo &)::{lambda(GCGField &,GCGFieldBriefInfo &)#1}::operator() const(GCGField &,GCGFieldBriefInfo &)::{lambda(GCGCard &)#1}::operator()(
        const GCGSkillLogic::recordGameModeBriefInfo::<lambda(GCGField&, GCGFieldBriefInfo&)>::operator()::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::map<data::GCGTokenType,unsigned int> *TokenMap; // rax
  GCGModifyZone *ModifyZone; // r14
  ForeachPolicy result; // eax
  std::function<ForeachPolicy(GCGCard&)> p_func; // [rsp+10h] [rbp-F0h] BYREF
  char v9[208]; // [rsp+30h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 88 19 character_info:2963";
  *(_QWORD *)(v2 + 16) = GCGSkillLogic::recordGameModeBriefInfo(GCGGameBriefInfo &)::{lambda(GCGField &,GCGFieldBriefInfo &)#1}::operator() const(GCGField &,GCGFieldBriefInfo &)::{lambda(GCGCard &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  GCGCharacterBriefInfo::GCGCharacterBriefInfo((GCGCharacterBriefInfo *const)(v2 + 32));
  *(_DWORD *)(v2 + 32) = GCGCard::getGuid(card);
  TokenMap = GCGCard::getTokenMap(card);
  std::map<data::GCGTokenType,unsigned int>::operator=(
    (std::map<data::GCGTokenType,unsigned int> *const)(v2 + 40),
    TokenMap);
  *(_BYTE *)(v2 + 88) = GCGCard::isActivated(card);
  ModifyZone = GCGCard::getModifyZone(card);
  std::function<ForeachPolicy ()(GCGCard &)>::function<GCGSkillLogic::recordGameModeBriefInfo(GCGGameBriefInfo &)::{lambda(GCGField &,GCGFieldBriefInfo &)#1}::operator() const(GCGField &,GCGFieldBriefInfo &)::{lambda(GCGCard &)#1}::operator() const(GCGCard &)::{lambda(GCGCard &)#1},void,void>(
    &p_func,
    (GCGSkillLogic::recordGameModeBriefInfo::<lambda(GCGField&, GCGFieldBriefInfo&)>::operator()::<lambda(GCGCard&)>::operator()::<lambda(GCGCard&)>)(v2 + 32));
  GCGCardZone::foreachCard(ModifyZone, &p_func);
  std::function<ForeachPolicy ()(GCGCard &)>::~function(&p_func);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  std::vector<GCGCharacterBriefInfo>::push_back(
    &__closure->__brief->character_vec,
    (const std::vector<GCGCharacterBriefInfo>::value_type *)(v2 + 32));
  GCGCharacterBriefInfo::~GCGCharacterBriefInfo((GCGCharacterBriefInfo *const)(v2 + 32));
  result = FOREACH_CONTINUE;
  if ( v9 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
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

// Line 2967: range 000000000E3082F0-000000000E308356
ForeachPolicy __cdecl GCGSkillLogic::recordGameModeBriefInfo(GCGGameBriefInfo &)::{lambda(GCGField &,GCGFieldBriefInfo &)#1}::operator() const(GCGField &,GCGFieldBriefInfo &)::{lambda(GCGCard &)#1}::operator() const(GCGCard &)::{lambda(GCGCard &)#1}::operator()(
        const GCGSkillLogic::recordGameModeBriefInfo::<lambda(GCGField&, GCGFieldBriefInfo&)>::operator()::<lambda(GCGCard&)>::operator()::<lambda(GCGCard&)> *const __closure,
        GCGCard *attach_card)
{
  std::vector<unsigned int> *p_modify_vec; // rbx
  std::vector<unsigned int>::value_type __x[5]; // [rsp+1Ch] [rbp-14h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  p_modify_vec = &__closure->__character_info->modify_vec;
  __x[0] = GCGCard::getGuid(attach_card);
  std::vector<unsigned int>::push_back(p_modify_vec, __x);
  return 0;
};

// Line 2975: range 000000000E30873A-000000000E3087A5
void __cdecl GCGSkillLogic::recordGameModeBriefInfo(GCGGameBriefInfo &)::{lambda(GCGField &,GCGFieldBriefInfo &)#1}::operator() const(GCGField &,GCGFieldBriefInfo &)::{lambda(GCGCardZone &,std::vector<GCGCardBriefInfo> &)#2}::operator()(
        const GCGSkillLogic::recordGameModeBriefInfo::<lambda(GCGField&, GCGFieldBriefInfo&)>::operator()::<lambda(GCGCardZone&, std::vector<GCGCardBriefInfo>&)> *const __closure,
        GCGCardZone *zone,
        std::vector<GCGCardBriefInfo> *result)
{
  std::function<ForeachPolicy(GCGCard&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(GCGCard &)>::function<GCGSkillLogic::recordGameModeBriefInfo(GCGGameBriefInfo &)::{lambda(GCGField &,GCGFieldBriefInfo &)#1}::operator() const(GCGField &,GCGFieldBriefInfo &)::{lambda(GCGCardZone &,std::vector<GCGCardBriefInfo> &)#2}::operator() const(GCGCardZone &,std::vector<GCGCardBriefInfo> &)::{lambda(GCGCard &)#1},void,void>(
    &p_func,
    (GCGSkillLogic::recordGameModeBriefInfo::<lambda(GCGField&, GCGFieldBriefInfo&)>::operator()::<lambda(GCGCardZone&, std::vector<GCGCardBriefInfo>&)>::operator()::<lambda(GCGCard&)>)result);
  GCGCardZone::foreachCard(zone, &p_func);
  std::function<ForeachPolicy ()(GCGCard &)>::~function(&p_func);
};

// Line 2977: range 000000000E308586-000000000E308739
ForeachPolicy __cdecl GCGSkillLogic::recordGameModeBriefInfo(GCGGameBriefInfo &)::{lambda(GCGField &,GCGFieldBriefInfo &)#1}::operator() const(GCGField &,GCGFieldBriefInfo &)::{lambda(GCGCardZone &,std::vector<GCGCardBriefInfo> &)#2}::operator() const(GCGCardZone &,std::vector<GCGCardBriefInfo> &)::{lambda(GCGCard &)#1}::operator()(
        const GCGSkillLogic::recordGameModeBriefInfo::<lambda(GCGField&, GCGFieldBriefInfo&)>::operator()::<lambda(GCGCardZone&, std::vector<GCGCardBriefInfo>&)>::operator()::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::map<data::GCGTokenType,unsigned int> *TokenMap; // rax
  ForeachPolicy result; // eax
  char v7[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 64 14 card_info:2979";
  *(_QWORD *)(v2 + 16) = GCGSkillLogic::recordGameModeBriefInfo(GCGGameBriefInfo &)::{lambda(GCGField &,GCGFieldBriefInfo &)#1}::operator() const(GCGField &,GCGFieldBriefInfo &)::{lambda(GCGCardZone &,std::vector<GCGCardBriefInfo> &)#2}::operator() const(GCGCardZone &,std::vector<GCGCardBriefInfo> &)::{lambda(GCGCard &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450892) = -202116109;
  GCGCardBriefInfo::GCGCardBriefInfo((GCGCardBriefInfo *const)(v2 + 32));
  *(_DWORD *)(v2 + 32) = GCGCard::getGuid(card);
  TokenMap = GCGCard::getTokenMap(card);
  std::map<data::GCGTokenType,unsigned int>::operator=(
    (std::map<data::GCGTokenType,unsigned int> *const)(v2 + 40),
    TokenMap);
  *(_BYTE *)(v2 + 88) = GCGCard::isActivated(card);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  std::vector<GCGCardBriefInfo>::push_back(
    __closure->__result,
    (const std::vector<GCGCardBriefInfo>::value_type *)(v2 + 32));
  GCGCardBriefInfo::~GCGCardBriefInfo((GCGCardBriefInfo *const)(v2 + 32));
  result = FOREACH_CONTINUE;
  if ( v7 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2997: range 000000000E308D04-000000000E3090CF
bool __cdecl GCGSkillLogic::checkCardOnUseContion(GCGSkillLogic *const this, GCGCard *card)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  bool result; // al
  GCGSkillLogic::checkCardOnUseContion::<lambda(const GCGSkill&)> v11; // [rsp-20h] [rbp-1E0h]
  unsigned int val; // [rsp+10h] [rbp-1B0h] BYREF
  proto::GCGControllerValue ControllerId; // [rsp+14h] [rbp-1ACh] BYREF
  const GCGCard *const_card; // [rsp+18h] [rbp-1A8h]
  std::enable_shared_from_this<GCGCard> v15; // [rsp+20h] [rbp-1A0h] BYREF
  GCGSkillLogic::checkCardOnUseContion::<lambda(const GCGSkill&)> __f; // [rsp+30h] [rbp-190h]
  std::function<ForeachPolicy(const GCGSkill&)> p_func; // [rsp+50h] [rbp-170h] BYREF
  char v18[336]; // [rsp+70h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 1 12 can_use:3012 48 168 16 skill_param:3005";
  *(_QWORD *)(v2 + 16) = GCGSkillLogic::checkCardOnUseContion;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61953;
  v4[536862726] = -218103808;
  v4[536862727] = -202116109;
  v4[536862728] = -202116109;
  if ( !GCGCard::isHasTrigger(card, GCG_TRIGGER_ON_USE) )
  {
    v5 = 1;
  }
  else
  {
    GCGSkillUseParam::GCGSkillUseParam((GCGSkillUseParam *const)(v2 + 48));
    std::enable_shared_from_this<GCGCard>::shared_from_this(&v15);
    std::shared_ptr<GCGCard>::operator=((std::shared_ptr<GCGCard> *const)(v2 + 72), (std::shared_ptr<GCGCard> *)&v15);
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)&v15);
    *(_DWORD *)(v2 + 64) = 25;
    *(_DWORD *)(v2 + 160) = GCGCard::getControllerId(card);
    GCGSkillUseParam::setEffectCategroyType((GCGSkillUseParam *const)(v2 + 48), ACTIVE_CATEGORY);
    GCGSkillUseParam::setTriggerWindowParam((GCGSkillUseParam *const)(v2 + 48), (const GCGSkillUseParam *)(v2 + 48));
    *(_BYTE *)(v2 + 32) = 0;
    const_card = card;
    __f.__skill_param = (GCGSkillUseParam *)(v2 + 48);
    __f.__can_use = (bool *)(v2 + 32);
    __f.__const_card = card;
    v11.__const_card = card;
    v11.__can_use = (bool *)(v2 + 32);
    v11.__skill_param = (GCGSkillUseParam *)(v2 + 48);
    std::function<ForeachPolicy ()(GCGSkill const&)>::function<GCGSkillLogic::checkCardOnUseContion(GCGCard &)::{lambda(GCGSkill const&)#1},void,void>(
      &p_func,
      v11);
    GCGCard::foreachSkill(card, &p_func);
    std::function<ForeachPolicy ()(GCGSkill const&)>::~function(&p_func);
    if ( *(_BYTE *)(v2 + 32) != 1 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&p_func,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/skill/gcg_skill_logic.cpp",
        "checkCardOnUseContion",
        3027);
      v6 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             (common::milog::MiLogStream *const)&p_func,
             (const char (*)[31])"checkCardOnUseContion card_id:");
      val = GCGCard::getId(card);
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
      v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])" controller:");
      ControllerId = GCGCard::getControllerId(card);
      v9 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
             v8,
             &ControllerId);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v9, (const char (*)[18])" cannot use skill");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
    }
    v5 = *(_BYTE *)(v2 + 32);
    GCGSkillUseParam::~GCGSkillUseParam((GCGSkillUseParam *const)(v2 + 48));
  }
  result = v5;
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 3015: range 000000000E308AE0-000000000E308D03
ForeachPolicy __cdecl GCGSkillLogic::checkCardOnUseContion(GCGCard &)::{lambda(GCGSkill const&)#1}::operator()(
        const GCGSkillLogic::checkCardOnUseContion::<lambda(const GCGSkill&)> *const __closure,
        const GCGSkill *skill)
{
  bool *can_use; // rdx
  common::milog::MiLogStream *v3; // rbx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rbx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  unsigned int val; // [rsp+18h] [rbp-58h] BYREF
  proto::GCGControllerValue ControllerId; // [rsp+1Ch] [rbp-54h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-50h] BYREF
  std::string v12; // [rsp+40h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  if ( !GCGSkill::checkSkillCondition(skill, __closure->__skill_param) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__can_use >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__can_use);
  can_use = __closure->__can_use;
  if ( *(_BYTE *)(((unsigned __int64)can_use >> 3) + 0x7FFF8000) != 0
    && ((__int64)__closure->__can_use & 7) >= *(_BYTE *)(((unsigned __int64)can_use >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(__closure->__can_use);
  }
  *can_use = 1;
  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/skill/gcg_skill_logic.cpp",
    "operator()",
    3020);
  v3 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
         &v11,
         (const char (*)[31])"checkCardOnUseContion card_id:");
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__const_card >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__const_card);
  val = GCGCard::getId(__closure->__const_card);
  v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
  v5 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v4, (const char (*)[13])" controller:");
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__const_card >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__const_card);
  ControllerId = GCGCard::getControllerId(__closure->__const_card);
  v6 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
         v5,
         &ControllerId);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v6, (const char (*)[16])" can use skill:");
  GCGSkill::getName[abi:cxx11](&v12, skill);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &v12);
  std::string::~string(&v12);
  common::milog::MiLogStream::~MiLogStream(&v11);
  return 1;
};
