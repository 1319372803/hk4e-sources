// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/phase/gcg_phase_start.cpp

// Line 22: range 000000000D7B736C-000000000D7B73A6
void __cdecl GCGPhaseStart::onInit(GCGPhaseStart *const this)
{
  GCGPhaseBase::addAllowController(this, GCG_CONTROLLER_A, 1u);
  GCGPhaseBase::addAllowController(this, GCG_CONTROLLER_B, 1u);
};

// Line 29: range 000000000D7B73A8-000000000D7B78A9
void __cdecl GCGPhaseStart::onPhaseEnter(GCGPhaseStart *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int init_hand; // eax
  std::mt19937 *v5; // rax
  common::milog::MiLogStream *v6; // rax
  GCGCardZone *DeckZone; // rax
  GCGCardZone *v8; // rax
  GCGOperationTimer *p_op_timer_1; // rcx
  GCGOperationTimer *p_op_timer_2; // rcx
  const GCGRule *rule; // [rsp+10h] [rbp-90h]
  GCGDuel *duel; // [rsp+18h] [rbp-88h]
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-80h] BYREF
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 13 first_hand:33";
  *(_QWORD *)(v1 + 16) = GCGPhaseStart::onPhaseEnter;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  rule = GCGGameMode::rule(this->game_mode_);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  duel = GCGGameMode::getDuel(this->game_mode_);
  *(_DWORD *)(v1 + 32) = 1;
  if ( *(_BYTE *)(((unsigned __int64)&rule->init_hand >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rule + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rule->init_hand >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rule->init_hand);
  }
  init_hand = rule->init_hand;
  if ( init_hand == 2 )
  {
    *(_DWORD *)(v1 + 32) = 2;
  }
  else if ( init_hand <= 2 )
  {
    if ( init_hand )
    {
      if ( init_hand == 1 )
        *(_DWORD *)(v1 + 32) = 1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      v5 = GCGGameMode::gen(this->game_mode_);
      if ( common::tools::RandomUtils::rand<int>(0, 1, v5) == 1 )
        *(_DWORD *)(v1 + 32) = 1;
      else
        *(_DWORD *)(v1 + 32) = 2;
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/phase/gcg_phase_start.cpp",
        "onPhaseEnter",
        46);
      v6 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             &v13,
             (const char (*)[22])"[RANDOM] first_hand: ");
      common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
        v6,
        (const proto::GCGControllerValue *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
  }
  GCGDuel::setFirstHand(duel, *(GCGControllerValue *)(v1 + 32));
  if ( *(char *)(((unsigned __int64)&rule->is_ignore_deck_shuffle >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&rule->is_ignore_deck_shuffle);
  if ( !rule->is_ignore_deck_shuffle )
  {
    DeckZone = GCGField::getDeckZone(&duel->field_1);
    GCGCardZone::shuffle(DeckZone);
    v8 = GCGField::getDeckZone(&duel->field_2);
    GCGCardZone::shuffle(v8);
  }
  if ( *(_BYTE *)(((unsigned __int64)&rule->init_onstage_character_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rule - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rule->init_onstage_character_index >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&rule->init_onstage_character_index);
  }
  if ( rule->init_onstage_character_index )
    GCGPhaseStart::trySetInitOnStageCharacter(this, GCG_CONTROLLER_A, rule->init_onstage_character_index - 1);
  if ( *(_BYTE *)(((unsigned __int64)&rule->enemy_init_onstage_character_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&rule->enemy_init_onstage_character_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&rule->enemy_init_onstage_character_index);
  }
  if ( rule->enemy_init_onstage_character_index )
    GCGPhaseStart::trySetInitOnStageCharacter(this, GCG_CONTROLLER_B, rule->enemy_init_onstage_character_index - 1);
  p_op_timer_1 = &duel->op_timer_1;
  if ( *(_BYTE *)(((unsigned __int64)&rule->init_time_out >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rule - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rule->init_time_out >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rule->init_time_out);
  }
  GCGOperationTimer::setTime(p_op_timer_1, 0, rule->init_time_out);
  p_op_timer_2 = &duel->op_timer_2;
  if ( *(_BYTE *)(((unsigned __int64)&rule->init_time_out >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rule - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rule->init_time_out >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rule->init_time_out);
  }
  GCGOperationTimer::setTime(p_op_timer_2, 0, rule->init_time_out);
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 81: range 000000000D7B78AA-000000000D7B7B3C
void __cdecl GCGPhaseStart::onPhaseExit(GCGPhaseStart *const this)
{
  GCGOperationTimer *v1; // rdi
  uint32_t v2; // ecx
  GCGOperationTimer *v3; // rdi
  uint32_t v4; // ecx
  GCGGameMode *game_mode; // rbx
  std::allocator<unsigned int> __a; // [rsp+1Bh] [rbp-55h] BYREF
  _DWORD __l[5]; // [rsp+1Ch] [rbp-54h] BYREF
  std::vector<unsigned int> param_vec; // [rsp+30h] [rbp-40h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  *(_QWORD *)&__l[1] = GCGGameMode::getDuel(this->game_mode_);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  *(_QWORD *)&__l[3] = GCGGameMode::rule(this->game_mode_);
  v1 = (GCGOperationTimer *)(*(_QWORD *)&__l[1] + 1720LL);
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 120LL) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 120LL) >> 3) + 0x7FFF8000) <= 3 )
  {
    v1 = (GCGOperationTimer *)(*(_QWORD *)&__l[3] + 120LL);
    __asan_report_load4(*(_QWORD *)&__l[3] + 120LL);
  }
  v2 = *(_DWORD *)(*(_QWORD *)&__l[3] + 120LL);
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 132LL) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(__l[3]) - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 132LL) >> 3)
                                                            + 0x7FFF8000) )
  {
    v1 = (GCGOperationTimer *)(*(_QWORD *)&__l[3] + 132LL);
    __asan_report_load4(*(_QWORD *)&__l[3] + 132LL);
  }
  GCGOperationTimer::setTime(v1, *(_DWORD *)(*(_QWORD *)&__l[3] + 132LL), v2);
  v3 = (GCGOperationTimer *)(*(_QWORD *)&__l[1] + 1816LL);
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 120LL) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 120LL) >> 3) + 0x7FFF8000) <= 3 )
  {
    v3 = (GCGOperationTimer *)(*(_QWORD *)&__l[3] + 120LL);
    __asan_report_load4(*(_QWORD *)&__l[3] + 120LL);
  }
  v4 = *(_DWORD *)(*(_QWORD *)&__l[3] + 120LL);
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 132LL) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(__l[3]) - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 132LL) >> 3)
                                                            + 0x7FFF8000) )
  {
    v3 = (GCGOperationTimer *)(*(_QWORD *)&__l[3] + 132LL);
    __asan_report_load4(*(_QWORD *)&__l[3] + 132LL);
  }
  GCGOperationTimer::setTime(v3, *(_DWORD *)(*(_QWORD *)&__l[3] + 132LL), v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  game_mode = this->game_mode_;
  __l[0] = GCGDuel::getCurControllerId(*(GCGDuel *const *)&__l[1]);
  std::allocator<unsigned int>::allocator(&__a);
  std::vector<unsigned int>::vector(&param_vec, (std::initializer_list<unsigned int>)__PAIR128__(1LL, __l), &__a);
  GCGGameMode::sendClientPerform(game_mode, GCG_PERFORM_FIRST_HAND, &param_vec);
  std::vector<unsigned int>::~vector(&param_vec);
  std::allocator<unsigned int>::~allocator(&__a);
};

// Line 90: range 000000000D7B7B3E-000000000D7B7DBA
void __fastcall GCGPhaseStart::trySetInitOnStageCharacter(
        GCGPhaseStart *const this,
        GCGControllerValue controller_id,
        uint32_t card_index)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  GCGDuel *Duel; // rax
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t Guid; // eax
  GCGField *field; // [rsp+10h] [rbp-C0h]
  GCGCharacterZone *character_zone; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 card_index:89 64 16 11 card_ptr:93";
  *(_QWORD *)(v3 + 16) = GCGPhaseStart::trySetInitOnStageCharacter;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = card_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  Duel = GCGGameMode::getDuel(this->game_mode_);
  field = GCGDuel::getField(Duel, controller_id);
  character_zone = GCGField::getCharacterZone(field);
  GCGCardZone::findCardByIndex((GCGCardZone *const)(v3 + 64), (uint32_t)character_zone);
  if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/phase/gcg_phase_start.cpp",
      "trySetInitOnStageCharacter",
      96);
    v7 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v13,
           (const char (*)[35])"findCardByIndex fail. card_index: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  else
  {
    v8 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    Guid = GCGCard::getGuid(v8);
    GCGCharacterZone::setOnStage(character_zone, Guid, GCG_REASON_DEFAULT, 0);
  }
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 64));
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

// Line 103: range 000000000D7B7DBC-000000000D7B8048
int32_t __cdecl GCGPhaseStart::handleOperation(GCGPhaseStart *const this, const GCGOperationBasePtr *p_operation_ptr)
{
  std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  unsigned __int64 v4; // rdx
  common::milog::MiLogStream *v5; // rbx
  std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned __int64 v7; // rdx
  std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  GCGPhaseMgr *PhaseMgr; // rax
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<GCGOperationBase>(p_operation_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/phase/gcg_phase_start.cpp",
      "handleOperation",
      106);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v11,
      (const char (*)[26])"operation ptr is nullptr.");
    common::milog::MiLogStream::~MiLogStream(&v11);
    return -1;
  }
  else
  {
    v3 = std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_operation_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3);
    v4 = (unsigned __int64)(v3->_vptr_GCGOperationBase + 2);
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3->_vptr_GCGOperationBase + 2);
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v4)(v3) == 1 )
    {
      v8 = std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_operation_ptr);
      if ( *(_BYTE *)(((unsigned __int64)&v8->controller_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v8->controller_id >> 3) + 0x7FFF8000) <= 3 )
      {
        v8 = (std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v8->controller_id);
      }
      GCGPhaseBase::markControllerDone(this, v8->controller_id);
      if ( GCGPhaseBase::isAllowControllerAllDone(this) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->game_mode_);
        PhaseMgr = GCGGameMode::getPhaseMgr(this->game_mode_);
        GCGPhaseMgr::toNextPhase(PhaseMgr);
      }
      return 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_game/phase/gcg_phase_start.cpp",
        "handleOperation",
        111);
      v5 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
             &v11,
             (const char (*)[20])"op type not match: ");
      v6 = std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_operation_ptr);
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v6);
      v7 = (unsigned __int64)(v6->_vptr_GCGOperationBase + 2);
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v6->_vptr_GCGOperationBase + 2);
      val = (*(__int64 (__fastcall **)(std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v7)(v6);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
      common::milog::MiLogStream::~MiLogStream(&v11);
      return 12004;
    }
  }
};

// Line 125: range 000000000D7B804A-000000000D7B808B
GCGOperationBasePtr __cdecl GCGPhaseStart::defaultOperation(GCGPhaseStart *const this)
{
  GCGOperationBasePtr result; // rax
  std::shared_ptr<GCGOperationStart> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<GCGOperationStart>();
  std::shared_ptr<GCGOperationBase>::shared_ptr<GCGOperationStart,void>(
    (std::shared_ptr<GCGOperationBase> *const)this,
    &__r);
  std::shared_ptr<GCGOperationStart>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<GCGOperationBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};
