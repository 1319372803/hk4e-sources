// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/phase/gcg_phase_dice.cpp

// Line 21: range 000000000D786EDE-000000000D7872BC
void __cdecl GCGPhaseDice::onInit(GCGPhaseDice *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  __gnu_cxx::__normal_iterator<const proto::GCGControllerValue*,std::vector<proto::GCGControllerValue> >::reference v4; // rax
  _DWORD *v5; // rdx
  GCGSkillLogic *SkillLogic; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::allocator<proto::GCGControllerValue> __a; // [rsp+1Bh] [rbp-F5h] BYREF
  uint32_t action_count; // [rsp+1Ch] [rbp-F4h]
  uint32_t DEFAULT_DICE_ACTION_COUNT; // [rsp+20h] [rbp-F0h]
  uint32_t revise_times_uint; // [rsp+24h] [rbp-ECh]
  std::vector<proto::GCGControllerValue>::const_iterator __for_begin; // [rsp+28h] [rbp-E8h] BYREF
  const std::vector<proto::GCGControllerValue> *__for_range; // [rsp+30h] [rbp-E0h]
  std::vector<proto::GCGControllerValue>::const_iterator __for_end; // [rsp+38h] [rbp-D8h] BYREF
  common::milog::MiLogStream v17; // [rsp+40h] [rbp-D0h] BYREF
  char v18[176]; // [rsp+60h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 4 16 controller_id:24 48 4 15 revise_times:27 64 24 23 allow_controller_vec:23";
  *(_QWORD *)(v1 + 16) = GCGPhaseDice::onInit;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  DEFAULT_DICE_ACTION_COUNT = 1;
  __for_end._M_current = (const proto::GCGControllerValue *)0x200000001LL;
  std::allocator<proto::GCGControllerValue>::allocator(&__a);
  std::vector<proto::GCGControllerValue>::vector(
    (std::vector<proto::GCGControllerValue> *const)(v1 + 64),
    (std::initializer_list<proto::GCGControllerValue>)__PAIR128__(2LL, &__for_end),
    &__a);
  std::allocator<proto::GCGControllerValue>::~allocator(&__a);
  __for_range = (const std::vector<proto::GCGControllerValue> *)(v1 + 64);
  __for_begin._M_current = std::vector<proto::GCGControllerValue>::begin((const std::vector<proto::GCGControllerValue> *const)(v1 + 64))._M_current;
  __for_end._M_current = std::vector<proto::GCGControllerValue>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<proto::GCGControllerValue const*,std::vector<proto::GCGControllerValue>>(
            &__for_begin,
            &__for_end) )
  {
    v4 = __gnu_cxx::__normal_iterator<proto::GCGControllerValue const*,std::vector<proto::GCGControllerValue>>::operator*(&__for_begin);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    *(_DWORD *)(v1 + 32) = *v5;
    action_count = 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    SkillLogic = GCGGameMode::getSkillLogic(this->game_mode_);
    *(_DWORD *)(v1 + 48) = GCGSkillLogic::getRerollReviseTimes(SkillLogic, *(GCGControllerValue *)(v1 + 32));
    if ( *(_DWORD *)(v1 + 48) )
    {
      if ( *(int *)(v1 + 48) >= 0 )
      {
        action_count += *(_DWORD *)(v1 + 48);
      }
      else
      {
        revise_times_uint = -*(_DWORD *)(v1 + 48);
        if ( action_count > revise_times_uint )
          action_count -= revise_times_uint;
        else
          action_count = 0;
      }
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/phase/gcg_phase_dice.cpp",
        "onInit",
        46);
      v7 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             &v17,
             (const char (*)[22])"reroll revise result:");
      v8 = common::milog::MiLogStream::operator<<<int,(int *)0>(v7, (const int *)(v1 + 48));
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v8, (const char (*)[16])" controller_id:");
      common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
        v9,
        (const proto::GCGControllerValue *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
    GCGPhaseBase::addAllowController(this, *(GCGControllerValue *)(v1 + 32), action_count);
    __gnu_cxx::__normal_iterator<proto::GCGControllerValue const*,std::vector<proto::GCGControllerValue>>::operator++(&__for_begin);
  }
  std::vector<proto::GCGControllerValue>::~vector((std::vector<proto::GCGControllerValue> *const)(v1 + 64));
  if ( v18 == (char *)v1 )
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

// Line 53: range 000000000D7872BE-000000000D7879A5
void __cdecl GCGPhaseDice::onPhaseEnter(GCGPhaseDice *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  proto::GCGControllerValue *v4; // rax
  proto::GCGControllerValue *v5; // rdx
  GCGDuel *v6; // rax
  GCGDiceZone *DiceZone; // rax
  signed int ActionMgr; // eax
  unsigned __int64 v9; // rax
  void (__fastcall *v10)(GCGPhaseDice *const, std::shared_ptr<GCGActionBase> *); // r15
  GCGSkillLogic *SkillLogic; // r14
  GCGOperationTimer *p_op_timer_1; // rdi
  uint32_t *p_roll_bonus_time; // rax
  uint32_t roll_bonus_time; // ecx
  GCGOperationTimer *p_op_timer_2; // rdi
  uint32_t v16; // ecx
  std::allocator<proto::GCGControllerValue> __a; // [rsp+1Bh] [rbp-F5h] BYREF
  proto::GCGControllerValue controller_id; // [rsp+1Ch] [rbp-F4h]
  std::vector<proto::GCGControllerValue>::const_iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  const std::vector<proto::GCGControllerValue> *__for_range; // [rsp+28h] [rbp-E8h]
  GCGDuel *duel; // [rsp+30h] [rbp-E0h]
  const GCGRule *rule; // [rsp+38h] [rbp-D8h]
  GCGField *field; // [rsp+40h] [rbp-D0h]
  std::vector<proto::GCGControllerValue>::const_iterator __for_end; // [rsp+48h] [rbp-C8h] BYREF
  std::shared_ptr<GCGActionBase> v25; // [rsp+50h] [rbp-C0h] BYREF
  char v26[176]; // [rsp+60h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 13 action_ptr:64 64 24 17 controller_vec:57";
  *(_QWORD *)(v1 + 16) = GCGPhaseDice::onPhaseEnter;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  GCGGameMode::resetRoundStartTime(this->game_mode_);
  __for_end._M_current = (const proto::GCGControllerValue *)0x200000001LL;
  std::allocator<proto::GCGControllerValue>::allocator(&__a);
  std::vector<proto::GCGControllerValue>::vector(
    (std::vector<proto::GCGControllerValue> *const)(v1 + 64),
    (std::initializer_list<proto::GCGControllerValue>)__PAIR128__(2LL, &__for_end),
    &__a);
  std::allocator<proto::GCGControllerValue>::~allocator(&__a);
  __for_range = (const std::vector<proto::GCGControllerValue> *)(v1 + 64);
  __for_begin._M_current = std::vector<proto::GCGControllerValue>::begin((const std::vector<proto::GCGControllerValue> *const)(v1 + 64))._M_current;
  __for_end._M_current = std::vector<proto::GCGControllerValue>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<proto::GCGControllerValue const*,std::vector<proto::GCGControllerValue>>(
            &__for_begin,
            &__for_end) )
  {
    v4 = (proto::GCGControllerValue *)__gnu_cxx::__normal_iterator<proto::GCGControllerValue const*,std::vector<proto::GCGControllerValue>>::operator*(&__for_begin);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    controller_id = *v5;
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    v6 = GCGGameMode::getDuel(this->game_mode_);
    field = GCGDuel::getField(v6, controller_id);
    DiceZone = GCGField::getDiceZone(field);
    GCGDiceZone::clearRerollIdx(DiceZone);
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    ActionMgr = (unsigned int)GCGGameMode::getActionMgr(this->game_mode_);
    GCGActionMgr::createAction<GCGActionRoll>((GCGActionMgr *const)(v1 + 32), (GCGControllerValue)ActionMgr);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v9 = (unsigned __int64)(this->_vptr_GCGPhaseBase + 5);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      __asan_report_load8(this->_vptr_GCGPhaseBase + 5);
    v10 = *(void (__fastcall **)(GCGPhaseDice *const, std::shared_ptr<GCGActionBase> *))v9;
    std::shared_ptr<GCGActionBase>::shared_ptr<GCGActionRoll,void>(
      &v25,
      (const std::shared_ptr<GCGActionRoll> *)(v1 + 32));
    v10(this, &v25);
    std::shared_ptr<GCGActionBase>::~shared_ptr(&v25);
    std::shared_ptr<GCGActionRoll>::~shared_ptr((std::shared_ptr<GCGActionRoll> *const)(v1 + 32));
    __gnu_cxx::__normal_iterator<proto::GCGControllerValue const*,std::vector<proto::GCGControllerValue>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  SkillLogic = GCGGameMode::getSkillLogic(this->game_mode_);
  std::shared_ptr<GCGSkillUseParam>::shared_ptr((std::shared_ptr<GCGSkillUseParam> *const)&v25, 0LL);
  std::enable_shared_from_this<GCGPhaseBase>::shared_from_this((std::enable_shared_from_this<GCGPhaseBase> *const)(v1 + 32));
  GCGSkillLogic::trigger(
    SkillLogic,
    (GCGPhaseBasePtr *)(v1 + 32),
    GCG_TRIGGER_PHASE_DICE_REROLL_BEFORE,
    (GCGSkillUseParamPtr *)&v25);
  std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v1 + 32));
  std::shared_ptr<GCGSkillUseParam>::~shared_ptr((std::shared_ptr<GCGSkillUseParam> *const)&v25);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  duel = GCGGameMode::getDuel(this->game_mode_);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  rule = GCGGameMode::rule(this->game_mode_);
  p_op_timer_1 = &duel->op_timer_1;
  p_roll_bonus_time = &rule->roll_bonus_time;
  if ( *(_BYTE *)(((unsigned __int64)p_roll_bonus_time >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_roll_bonus_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_roll_bonus_time >> 3)
                                                                        + 0x7FFF8000) )
  {
    p_op_timer_1 = (GCGOperationTimer *)&rule->roll_bonus_time;
    __asan_report_load4(p_roll_bonus_time);
  }
  roll_bonus_time = rule->roll_bonus_time;
  if ( *(_BYTE *)(((unsigned __int64)&rule->turn_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rule - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rule->turn_time >> 3) + 0x7FFF8000) )
  {
    p_op_timer_1 = (GCGOperationTimer *)&rule->turn_time;
    __asan_report_load4(&rule->turn_time);
  }
  GCGOperationTimer::setTime(p_op_timer_1, rule->turn_time, roll_bonus_time);
  p_op_timer_2 = &duel->op_timer_2;
  if ( *(_BYTE *)(((unsigned __int64)&rule->roll_bonus_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rule + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rule->roll_bonus_time >> 3) + 0x7FFF8000) )
  {
    p_op_timer_2 = (GCGOperationTimer *)&rule->roll_bonus_time;
    __asan_report_load4(&rule->roll_bonus_time);
  }
  v16 = rule->roll_bonus_time;
  if ( *(_BYTE *)(((unsigned __int64)&rule->turn_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rule - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rule->turn_time >> 3) + 0x7FFF8000) )
  {
    p_op_timer_2 = (GCGOperationTimer *)&rule->turn_time;
    __asan_report_load4(&rule->turn_time);
  }
  GCGOperationTimer::setTime(p_op_timer_2, rule->turn_time, v16);
  std::vector<proto::GCGControllerValue>::~vector((std::vector<proto::GCGControllerValue> *const)(v1 + 64));
  if ( v26 == (char *)v1 )
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

// Line 78: range 000000000D7879A6-000000000D787FCD
void __cdecl GCGPhaseDice::onPhaseExit(GCGPhaseDice *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  proto::GCGControllerValue *v4; // rax
  proto::GCGControllerValue *v5; // rdx
  GCGDuel *v6; // rax
  GCGDiceZone *DiceZone; // rax
  GCGStatistics *Statistics; // r14
  GCGDiceZone *v9; // rax
  GCGSkillLogic *SkillLogic; // r14
  GCGOperationTimer *p_op_timer_1; // rdi
  uint32_t round_bonus_time; // ecx
  GCGOperationTimer *p_op_timer_2; // rdi
  uint32_t v14; // ecx
  std::allocator<proto::GCGControllerValue> __a; // [rsp+1Bh] [rbp-105h] BYREF
  proto::GCGControllerValue controller_id; // [rsp+1Ch] [rbp-104h]
  std::vector<proto::GCGControllerValue>::const_iterator __for_begin; // [rsp+20h] [rbp-100h] BYREF
  const std::vector<proto::GCGControllerValue> *__for_range; // [rsp+28h] [rbp-F8h]
  GCGDuel *duel; // [rsp+30h] [rbp-F0h]
  const GCGRule *rule; // [rsp+38h] [rbp-E8h]
  GCGField *field; // [rsp+40h] [rbp-E0h]
  std::vector<proto::GCGControllerValue>::const_iterator __for_end; // [rsp+48h] [rbp-D8h] BYREF
  std::enable_shared_from_this<GCGPhaseBase> v23; // [rsp+50h] [rbp-D0h] BYREF
  std::shared_ptr<GCGSkillUseParam> p_trigger_windows_param_ptr; // [rsp+60h] [rbp-C0h] BYREF
  std::vector<unsigned int> p_param_list; // [rsp+70h] [rbp-B0h] BYREF
  char v26[144]; // [rsp+90h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 17 controller_vec:79";
  *(_QWORD *)(v1 + 16) = GCGPhaseDice::onPhaseExit;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  __for_end._M_current = (const proto::GCGControllerValue *)0x200000001LL;
  std::allocator<proto::GCGControllerValue>::allocator(&__a);
  std::vector<proto::GCGControllerValue>::vector(
    (std::vector<proto::GCGControllerValue> *const)(v1 + 32),
    (std::initializer_list<proto::GCGControllerValue>)__PAIR128__(2LL, &__for_end),
    &__a);
  std::allocator<proto::GCGControllerValue>::~allocator(&__a);
  __for_range = (const std::vector<proto::GCGControllerValue> *)(v1 + 32);
  __for_begin._M_current = std::vector<proto::GCGControllerValue>::begin((const std::vector<proto::GCGControllerValue> *const)(v1 + 32))._M_current;
  __for_end._M_current = std::vector<proto::GCGControllerValue>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<proto::GCGControllerValue const*,std::vector<proto::GCGControllerValue>>(
            &__for_begin,
            &__for_end) )
  {
    v4 = (proto::GCGControllerValue *)__gnu_cxx::__normal_iterator<proto::GCGControllerValue const*,std::vector<proto::GCGControllerValue>>::operator*(&__for_begin);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    controller_id = *v5;
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    v6 = GCGGameMode::getDuel(this->game_mode_);
    field = GCGDuel::getField(v6, controller_id);
    DiceZone = GCGField::getDiceZone(field);
    GCGDiceZone::clearRerollIdx(DiceZone);
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    Statistics = GCGGameMode::getStatistics(this->game_mode_);
    v9 = GCGField::getDiceZone(field);
    GCGDiceZone::getAllDiceTypeCountVec(&p_param_list, v9);
    GCGStatistics::reportStatisticOperationData(Statistics, GCG_OPERATION_TYPE_ROLL, controller_id, 0, &p_param_list);
    std::vector<unsigned int>::~vector(&p_param_list);
    __gnu_cxx::__normal_iterator<proto::GCGControllerValue const*,std::vector<proto::GCGControllerValue>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  SkillLogic = GCGGameMode::getSkillLogic(this->game_mode_);
  std::shared_ptr<GCGSkillUseParam>::shared_ptr(&p_trigger_windows_param_ptr, 0LL);
  std::enable_shared_from_this<GCGPhaseBase>::shared_from_this(&v23);
  GCGSkillLogic::trigger(
    SkillLogic,
    (GCGPhaseBasePtr *)&v23,
    GCG_TRIGGER_PHASE_DICE_REROLL_POST,
    &p_trigger_windows_param_ptr);
  std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)&v23);
  std::shared_ptr<GCGSkillUseParam>::~shared_ptr(&p_trigger_windows_param_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  duel = GCGGameMode::getDuel(this->game_mode_);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  rule = GCGGameMode::rule(this->game_mode_);
  p_op_timer_1 = &duel->op_timer_1;
  if ( *(_BYTE *)(((unsigned __int64)&rule->round_bonus_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&rule->round_bonus_time >> 3) + 0x7FFF8000) <= 3 )
  {
    p_op_timer_1 = (GCGOperationTimer *)&rule->round_bonus_time;
    __asan_report_load4(&rule->round_bonus_time);
  }
  round_bonus_time = rule->round_bonus_time;
  if ( *(_BYTE *)(((unsigned __int64)&rule->turn_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rule - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rule->turn_time >> 3) + 0x7FFF8000) )
  {
    p_op_timer_1 = (GCGOperationTimer *)&rule->turn_time;
    __asan_report_load4(&rule->turn_time);
  }
  GCGOperationTimer::setTime(p_op_timer_1, rule->turn_time, round_bonus_time);
  p_op_timer_2 = &duel->op_timer_2;
  if ( *(_BYTE *)(((unsigned __int64)&rule->round_bonus_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&rule->round_bonus_time >> 3) + 0x7FFF8000) <= 3 )
  {
    p_op_timer_2 = (GCGOperationTimer *)&rule->round_bonus_time;
    __asan_report_load4(&rule->round_bonus_time);
  }
  v14 = rule->round_bonus_time;
  if ( *(_BYTE *)(((unsigned __int64)&rule->turn_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rule - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rule->turn_time >> 3) + 0x7FFF8000) )
  {
    p_op_timer_2 = (GCGOperationTimer *)&rule->turn_time;
    __asan_report_load4(&rule->turn_time);
  }
  GCGOperationTimer::setTime(p_op_timer_2, rule->turn_time, v14);
  std::vector<proto::GCGControllerValue>::~vector((std::vector<proto::GCGControllerValue> *const)(v1 + 32));
  if ( v26 == (char *)v1 )
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

// Line 100: range 000000000D787FCE-000000000D7884FB
int32_t __cdecl GCGPhaseDice::handleOperation(GCGPhaseDice *const this, const GCGOperationBasePtr *p_operation_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned __int64 v7; // rdx
  int v8; // eax
  int v9; // r15d
  std::__shared_ptr_access<GCGOperationReroll,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  GCGDuel *Duel; // r13
  std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // r13
  std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  unsigned __int64 v15; // rdx
  GCGPhaseMgr *PhaseMgr; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-9Ch] BYREF
  int32_t ret; // [rsp+28h] [rbp-98h]
  proto::GCGControllerValue winner; // [rsp+2Ch] [rbp-94h]
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-90h] BYREF
  char v22[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 reroll_ptr:111";
  *(_QWORD *)(v3 + 16) = GCGPhaseDice::handleOperation;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( std::operator==<GCGOperationBase>(p_operation_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/phase/gcg_phase_dice.cpp",
      "handleOperation",
      103);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      &v21,
      (const char (*)[35])"[GCG_RET] operation_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v21);
    v2 = -1;
    goto LABEL_35;
  }
  ret = -1;
  v6 = std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_operation_ptr);
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v6);
  v7 = (unsigned __int64)(v6->_vptr_GCGOperationBase + 2);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v6->_vptr_GCGOperationBase + 2);
  v8 = (*(__int64 (__fastcall **)(std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v7)(v6);
  if ( v8 == 4 )
  {
    std::dynamic_pointer_cast<GCGOperationReroll,GCGOperationBase>((const std::shared_ptr<GCGOperationBase> *)(v3 + 32));
    if ( std::operator==<GCGOperationReroll>((const std::shared_ptr<GCGOperationReroll> *)(v3 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/phase/gcg_phase_dice.cpp",
        "handleOperation",
        114);
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
        &v21,
        (const char (*)[36])"[GCG_RET] operation ptr is nullptr.");
      common::milog::MiLogStream::~MiLogStream(&v21);
      v2 = 12001;
      v9 = 0;
    }
    else
    {
      v10 = std::__shared_ptr_access<GCGOperationReroll,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGOperationReroll,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      ret = GCGPhaseDice::reroll(this, v10);
      v9 = 1;
    }
    std::shared_ptr<GCGOperationReroll>::~shared_ptr((std::shared_ptr<GCGOperationReroll> *const)(v3 + 32));
    if ( !v9 )
      goto LABEL_35;
  }
  else if ( v8 == 9 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    Duel = GCGGameMode::getDuel(this->game_mode_);
    v12 = std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_operation_ptr);
    if ( *(_BYTE *)(((unsigned __int64)&v12->controller_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v12->controller_id >> 3) + 0x7FFF8000) <= 3 )
    {
      v12 = (std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v12->controller_id);
    }
    winner = (unsigned int)GCGDuel::getOtherControllerId(Duel, v12->controller_id);
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    GCGGameMode::toFinPhase(this->game_mode_, winner, GCG_END_REASON_SURRENDER);
    ret = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/phase/gcg_phase_dice.cpp",
      "handleOperation",
      128);
    v13 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v21,
            (const char (*)[30])"[GCG_RET] op type not match: ");
    v14 = std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_operation_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v14);
    v15 = (unsigned __int64)(v14->_vptr_GCGOperationBase + 2);
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v14->_vptr_GCGOperationBase + 2);
    val = (*(__int64 (__fastcall **)(std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v15)(v14);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    ret = 12004;
  }
  if ( GCGPhaseBase::isAllowControllerAllDone(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    PhaseMgr = GCGGameMode::getPhaseMgr(this->game_mode_);
    GCGPhaseMgr::toNextPhase(PhaseMgr);
  }
  v2 = ret;
LABEL_35:
  result = v2;
  if ( v22 == (char *)v3 )
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

// Line 140: range 000000000D7884FC-000000000D78853D
GCGOperationBasePtr __cdecl GCGPhaseDice::defaultOperation(GCGPhaseDice *const this)
{
  GCGOperationBasePtr result; // rax
  std::shared_ptr<GCGOperationReroll> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<GCGOperationReroll>();
  std::shared_ptr<GCGOperationBase>::shared_ptr<GCGOperationReroll,void>(
    (std::shared_ptr<GCGOperationBase> *const)this,
    &__r);
  std::shared_ptr<GCGOperationReroll>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<GCGOperationBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 145: range 000000000D78853E-000000000D788B4B
int32_t __cdecl GCGPhaseDice::reroll(GCGPhaseDice *const this, const GCGOperationReroll *op)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  GCGDuel *Duel; // rcx
  GCGField *Field; // rax
  unsigned int *v8; // rax
  uint32_t *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r12
  const std::vector<proto::GCGDiceSideType> *DiceVec; // rax
  signed int ActionMgr; // ecx
  int v15; // r14d
  std::__shared_ptr_access<GCGActionReroll,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  GCGPhaseDice *v17; // rdx
  unsigned __int64 v18; // rax
  GCGPhaseDice *v19; // rdx
  int32_t result; // eax
  void (__fastcall *v21)(GCGPhaseDice *const, std::shared_ptr<GCGActionBase> *); // [rsp+8h] [rbp-E8h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-C0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+38h] [rbp-B8h] BYREF
  const GCGDiceZone *dice_zone; // [rsp+40h] [rbp-B0h]
  const std::set<unsigned int> *__for_range; // [rsp+48h] [rbp-A8h]
  std::shared_ptr<GCGActionBase> v26; // [rsp+50h] [rbp-A0h] BYREF
  common::milog::MiLogStream v27; // [rsp+60h] [rbp-90h] BYREF
  char v28[112]; // [rsp+80h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 action_ptr:157";
  *(_QWORD *)(v3 + 16) = GCGPhaseDice::reroll;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( std::set<unsigned int>::empty(&op->select_dice_set) )
  {
    v19 = this;
    if ( *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&op->controller_id);
    }
    GCGPhaseBase::markControllerAllDone(v19, op->controller_id);
LABEL_34:
    v2 = 0;
    goto LABEL_35;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  Duel = GCGGameMode::getDuel(this->game_mode_);
  if ( *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&op->controller_id);
  }
  Field = GCGDuel::getField(Duel, op->controller_id);
  dice_zone = GCGField::getDiceZone(Field);
  __for_range = &op->select_dice_set;
  __for_begin._M_node = std::set<unsigned int>::begin(&op->select_dice_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&op->select_dice_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v8 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    if ( !GCGDiceZone::isDiceValid(dice_zone, *v9) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_game/phase/gcg_phase_dice.cpp",
        "reroll",
        153);
      v10 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v27,
              (const char (*)[35])"[GCG_RET] dice not valid. select: ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int>(v10, &op->select_dice_set);
      v12 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v11, (const char (*)[2])" ");
      DiceVec = GCGDiceZone::getDiceVec(dice_zone);
      common::milog::MiLogStream::operator<<<proto::GCGDiceSideType>(v12, DiceVec);
      common::milog::MiLogStream::~MiLogStream(&v27);
      v2 = 12006;
      goto LABEL_35;
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  ActionMgr = (unsigned int)GCGGameMode::getActionMgr(this->game_mode_);
  if ( *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&op->controller_id);
  }
  GCGActionMgr::createAction<GCGActionReroll>((GCGActionMgr *const)(v3 + 32), (GCGControllerValue)ActionMgr);
  if ( std::operator==<GCGActionReroll>((const std::shared_ptr<GCGActionReroll> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/phase/gcg_phase_dice.cpp",
      "reroll",
      160);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v27,
      (const char (*)[29])"[GCG_RET] createAction fail.");
    common::milog::MiLogStream::~MiLogStream(&v27);
    v2 = -1;
    v15 = 0;
  }
  else
  {
    v16 = std::__shared_ptr_access<GCGActionReroll,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionReroll,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    std::set<unsigned int>::operator=(&v16->selected_dice_set, &op->select_dice_set);
    v17 = this;
    if ( *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&op->controller_id);
    }
    GCGPhaseBase::markControllerDone(v17, op->controller_id);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v18 = (unsigned __int64)(this->_vptr_GCGPhaseBase + 5);
    if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
      __asan_report_load8(this->_vptr_GCGPhaseBase + 5);
    v21 = *(void (__fastcall **)(GCGPhaseDice *const, std::shared_ptr<GCGActionBase> *))v18;
    std::shared_ptr<GCGActionBase>::shared_ptr<GCGActionReroll,void>(
      &v26,
      (const std::shared_ptr<GCGActionReroll> *)(v3 + 32));
    v21(this, &v26);
    std::shared_ptr<GCGActionBase>::~shared_ptr(&v26);
    v15 = 1;
  }
  std::shared_ptr<GCGActionReroll>::~shared_ptr((std::shared_ptr<GCGActionReroll> *const)(v3 + 32));
  if ( v15 == 1 )
    goto LABEL_34;
LABEL_35:
  result = v2;
  if ( v28 == (char *)v3 )
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
