// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/phase/gcg_phase_fin.cpp

// Line 22: range 000000000D78C320-000000000D78C36F
void __cdecl GCGPhaseFin::onPhaseEnter(GCGPhaseFin *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  GCGGameMode::recordRoundTimeUse(this->game_mode_);
  GCGPhaseFin::onGameSettle(this);
};

// Line 30: range 000000000D78C370-000000000D78CB15
void __cdecl GCGPhaseFin::onGameSettle(GCGPhaseFin *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  GCGDuel *v4; // rax
  uint32_t Now; // eax
  GCGCharacterZone *CharacterZone; // rax
  GCGCharacterZone *v7; // rax
  GCGDiceZone *DiceZone; // rax
  GCGDiceZone *v9; // rax
  std::__shared_ptr_access<GCGMsgGameOver,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<GCGMsgGameOver,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rdx
  GCGEndReason *p_end_reason; // rax
  GCGGameMode *game_mode; // r14
  GCGControllerBase *v14; // rax
  bool is_all_die_1; // [rsp+1Ah] [rbp-F6h]
  bool is_all_die_2; // [rsp+1Bh] [rbp-F5h]
  GCGControllerValue winner; // [rsp+1Ch] [rbp-F4h]
  uint32_t controller_a_win_flag; // [rsp+20h] [rbp-F0h]
  uint32_t winner_rest_dice_num; // [rsp+24h] [rbp-ECh]
  GCGEndReason reason; // [rsp+28h] [rbp-E8h]
  uint32_t round_num; // [rsp+2Ch] [rbp-E4h]
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::iterator __for_begin; // [rsp+30h] [rbp-E0h] BYREF
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::iterator __for_end; // [rsp+38h] [rbp-D8h] BYREF
  GCGDuel *duel; // [rsp+40h] [rbp-D0h]
  GCGStatistics *statistic_mgr; // [rsp+48h] [rbp-C8h]
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>> *__for_range; // [rsp+50h] [rbp-C0h]
  std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > *__in; // [rsp+58h] [rbp-B8h]
  std::tuple_element<0,std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::type *controller_id; // [rsp+60h] [rbp-B0h]
  std::tuple_element<1,std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::type *controller_ptr; // [rsp+68h] [rbp-A8h]
  std::shared_ptr<GCGMessage> p_msg; // [rsp+70h] [rbp-A0h] BYREF
  common::milog::MiLogStream v31; // [rsp+80h] [rbp-90h] BYREF
  char v32[112]; // [rsp+A0h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 10 msg_ptr:82";
  *(_QWORD *)(v1 + 16) = GCGPhaseFin::onGameSettle;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  v4 = GCGGameMode::getDuel(this->game_mode_);
  GCGDuel::resetOperationVars(v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  winner = GCGGameMode::getWinner(this->game_mode_);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  reason = GCGGameMode::getEndReason(this->game_mode_);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  duel = GCGGameMode::getDuel(this->game_mode_);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  statistic_mgr = GCGGameMode::getStatistics(this->game_mode_);
  round_num = GCGDuel::getRound(duel);
  Now = common::tools::TimeUtils::getNow();
  GCGStatistics::recordSettleTime(statistic_mgr, Now);
  controller_a_win_flag = 0;
  winner_rest_dice_num = 0;
  if ( reason == GCG_END_REASON_DIE )
  {
    winner = GCG_CONTROLLER_NONE;
    CharacterZone = GCGField::getCharacterZone(&duel->field_1);
    is_all_die_1 = GCGCharacterZone::isAllCharacterDie(CharacterZone);
    v7 = GCGField::getCharacterZone(&duel->field_2);
    is_all_die_2 = GCGCharacterZone::isAllCharacterDie(v7);
    if ( !is_all_die_1 && !is_all_die_2 )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/phase/gcg_phase_fin.cpp",
        "onGameSettle",
        55);
      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
        &v31,
        (const char (*)[42])"check winner fail. character still alive.");
      common::milog::MiLogStream::~MiLogStream(&v31);
    }
    else if ( !is_all_die_1 )
    {
      winner = GCG_CONTROLLER_A;
    }
    else if ( !is_all_die_2 )
    {
      winner = GCG_CONTROLLER_B;
    }
    else
    {
      winner = GCG_CONTROLLER_NONE;
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/phase/gcg_phase_fin.cpp",
        "onGameSettle",
        68);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v31, (const char (*)[19])"character all die.");
      common::milog::MiLogStream::~MiLogStream(&v31);
    }
    if ( winner == GCG_CONTROLLER_A )
    {
      controller_a_win_flag = 1;
      DiceZone = GCGField::getDiceZone(&duel->field_1);
      winner_rest_dice_num = GCGDiceZone::getValidDiceSize(DiceZone);
    }
    else if ( winner == GCG_CONTROLLER_B )
    {
      v9 = GCGField::getDiceZone(&duel->field_2);
      winner_rest_dice_num = GCGDiceZone::getValidDiceSize(v9);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    GCGGameMode::setWinner(this->game_mode_, winner, GCG_END_REASON_DIE);
  }
  common::tools::perf::make_shared<GCGMsgGameOver>();
  v10 = std::__shared_ptr_access<GCGMsgGameOver,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgGameOver,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&v10->win_controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->win_controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    v10 = (std::__shared_ptr_access<GCGMsgGameOver,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v10->win_controller_id);
  }
  v10->win_controller_id = winner;
  v11 = std::__shared_ptr_access<GCGMsgGameOver,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgGameOver,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  p_end_reason = &v11->end_reason;
  if ( *(_BYTE *)(((unsigned __int64)p_end_reason >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_end_reason & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_end_reason >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(p_end_reason);
  }
  v11->end_reason = reason;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  game_mode = this->game_mode_;
  std::shared_ptr<GCGMessage>::shared_ptr<GCGMsgGameOver,void>(
    &p_msg,
    (const std::shared_ptr<GCGMsgGameOver> *)(v1 + 32));
  GCGGameMode::sendMessage(game_mode, &p_msg);
  std::shared_ptr<GCGMessage>::~shared_ptr(&p_msg);
  std::shared_ptr<GCGMsgGameOver>::~shared_ptr((std::shared_ptr<GCGMsgGameOver> *const)(v1 + 32));
  GCGStatistics::reportStatisticCommonDataUint(statistic_mgr, CONTROLLER_A_WIN, controller_a_win_flag, 0);
  GCGStatistics::reportStatisticCommonDataUint(statistic_mgr, ROUND_NUM, round_num, 0);
  GCGStatistics::reportStatisticCommonDataUint(statistic_mgr, WINNER_REST_DICE, winner_rest_dice_num, 0);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  __for_range = GCGGameMode::getControllerMap(this->game_mode_);
  __for_begin._M_node = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::begin(__for_range)._M_node;
  __for_end._M_node = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>>::operator*(&__for_begin);
    controller_id = std::get<0ul,proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>(__in);
    controller_ptr = std::get<1ul,proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>(__in);
    if ( std::operator!=<GCGControllerBase>(controller_ptr, 0LL) )
    {
      v14 = std::__shared_ptr_access<GCGControllerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGControllerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)controller_ptr);
      GCGControllerBase::settleGame(v14);
    }
    std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>>::operator++(&__for_begin);
  }
  GCGStatistics::reportBothAIResult(statistic_mgr);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  GCGHandler::sendGameSettle(this->game_mode_);
  if ( v32 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
