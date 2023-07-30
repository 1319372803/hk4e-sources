// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/phase/gcg_phase_end.cpp

// Line 18: range 000000000D78BAA6-000000000D78C1A9
void __cdecl GCGPhaseEnd::onPhaseEnter(GCGPhaseEnd *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  GCGDuel *v4; // rax
  GCGSkillLogic *SkillLogic; // r14
  GCGControllerValue CurControllerId; // edx
  signed int ActionMgr; // eax
  uint32_t draw_card_num_per_round; // r14d
  std::__shared_ptr_access<GCGActionDraw,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  unsigned __int64 v10; // rax
  void (__fastcall *v11)(GCGPhaseEnd *const, std::shared_ptr<GCGSkillUseParam> *); // r15
  signed int v12; // eax
  uint32_t v13; // r14d
  std::__shared_ptr_access<GCGActionDraw,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  unsigned __int64 v15; // rax
  void (__fastcall *v16)(GCGPhaseEnd *const, std::shared_ptr<GCGSkillUseParam> *); // r15
  GCGSkillLogic *v17; // r14
  GCGPhaseMgr *PhaseMgr; // rax
  const GCGRule *rule; // [rsp+20h] [rbp-90h]
  GCGDuel *duel; // [rsp+28h] [rbp-88h]
  std::shared_ptr<GCGSkillUseParam> p_trigger_windows_param_ptr; // [rsp+30h] [rbp-80h] BYREF
  char v22[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 action_ptr:27";
  *(_QWORD *)(v1 + 16) = GCGPhaseEnd::onPhaseEnter;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  v4 = GCGGameMode::getDuel(this->game_mode_);
  GCGDuel::clearPassState(v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  SkillLogic = GCGGameMode::getSkillLogic(this->game_mode_);
  std::shared_ptr<GCGSkillUseParam>::shared_ptr(&p_trigger_windows_param_ptr, 0LL);
  std::enable_shared_from_this<GCGPhaseBase>::shared_from_this((std::enable_shared_from_this<GCGPhaseBase> *const)(v1 + 32));
  GCGSkillLogic::trigger(
    SkillLogic,
    (GCGPhaseBasePtr *)(v1 + 32),
    GCG_TRIGGER_PHASE_END_DRAW_BEFORE,
    &p_trigger_windows_param_ptr);
  std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v1 + 32));
  std::shared_ptr<GCGSkillUseParam>::~shared_ptr(&p_trigger_windows_param_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  rule = GCGGameMode::rule(this->game_mode_);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  duel = GCGGameMode::getDuel(this->game_mode_);
  CurControllerId = GCGDuel::getCurControllerId(duel);
  GCGDuel::getOtherControllerId(duel, CurControllerId);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  ActionMgr = (unsigned int)GCGGameMode::getActionMgr(this->game_mode_);
  GCGActionMgr::createAction<GCGActionDraw>((GCGActionMgr *const)(v1 + 32), (GCGControllerValue)ActionMgr);
  if ( std::operator!=<GCGActionDraw>((const std::shared_ptr<GCGActionDraw> *)(v1 + 32), 0LL) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&rule->draw_card_num_per_round >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&rule->draw_card_num_per_round >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&rule->draw_card_num_per_round);
    }
    draw_card_num_per_round = rule->draw_card_num_per_round;
    v9 = std::__shared_ptr_access<GCGActionDraw,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionDraw,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v9->count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v9->count >> 3) + 0x7FFF8000) <= 3 )
    {
      v9 = (std::__shared_ptr_access<GCGActionDraw,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v9->count);
    }
    v9->count = draw_card_num_per_round;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v10 = (unsigned __int64)(this->_vptr_GCGPhaseBase + 5);
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      __asan_report_load8(this->_vptr_GCGPhaseBase + 5);
    v11 = *(void (__fastcall **)(GCGPhaseEnd *const, std::shared_ptr<GCGSkillUseParam> *))v10;
    std::shared_ptr<GCGActionBase>::shared_ptr<GCGActionDraw,void>(
      (std::shared_ptr<GCGActionBase> *const)&p_trigger_windows_param_ptr,
      (const std::shared_ptr<GCGActionDraw> *)(v1 + 32));
    v11(this, &p_trigger_windows_param_ptr);
    std::shared_ptr<GCGActionBase>::~shared_ptr((std::shared_ptr<GCGActionBase> *const)&p_trigger_windows_param_ptr);
  }
  std::shared_ptr<GCGActionDraw>::~shared_ptr((std::shared_ptr<GCGActionDraw> *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  v12 = (unsigned int)GCGGameMode::getActionMgr(this->game_mode_);
  GCGActionMgr::createAction<GCGActionDraw>((GCGActionMgr *const)(v1 + 32), (GCGControllerValue)v12);
  if ( std::operator!=<GCGActionDraw>((const std::shared_ptr<GCGActionDraw> *)(v1 + 32), 0LL) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&rule->draw_card_num_per_round >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&rule->draw_card_num_per_round >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&rule->draw_card_num_per_round);
    }
    v13 = rule->draw_card_num_per_round;
    v14 = std::__shared_ptr_access<GCGActionDraw,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionDraw,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v14->count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v14->count >> 3) + 0x7FFF8000) <= 3 )
    {
      v14 = (std::__shared_ptr_access<GCGActionDraw,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v14->count);
    }
    v14->count = v13;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v15 = (unsigned __int64)(this->_vptr_GCGPhaseBase + 5);
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      __asan_report_load8(this->_vptr_GCGPhaseBase + 5);
    v16 = *(void (__fastcall **)(GCGPhaseEnd *const, std::shared_ptr<GCGSkillUseParam> *))v15;
    std::shared_ptr<GCGActionBase>::shared_ptr<GCGActionDraw,void>(
      (std::shared_ptr<GCGActionBase> *const)&p_trigger_windows_param_ptr,
      (const std::shared_ptr<GCGActionDraw> *)(v1 + 32));
    v16(this, &p_trigger_windows_param_ptr);
    std::shared_ptr<GCGActionBase>::~shared_ptr((std::shared_ptr<GCGActionBase> *const)&p_trigger_windows_param_ptr);
  }
  std::shared_ptr<GCGActionDraw>::~shared_ptr((std::shared_ptr<GCGActionDraw> *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  v17 = GCGGameMode::getSkillLogic(this->game_mode_);
  std::shared_ptr<GCGSkillUseParam>::shared_ptr(&p_trigger_windows_param_ptr, 0LL);
  std::enable_shared_from_this<GCGPhaseBase>::shared_from_this((std::enable_shared_from_this<GCGPhaseBase> *const)(v1 + 32));
  GCGSkillLogic::trigger(
    v17,
    (GCGPhaseBasePtr *)(v1 + 32),
    GCG_TRIGGER_PHASE_END_DRAW_POST,
    &p_trigger_windows_param_ptr);
  std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v1 + 32));
  std::shared_ptr<GCGSkillUseParam>::~shared_ptr(&p_trigger_windows_param_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  PhaseMgr = GCGGameMode::getPhaseMgr(this->game_mode_);
  GCGPhaseMgr::toNextPhase(PhaseMgr);
  if ( v22 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 47: range 000000000D78C1AA-000000000D78C31F
void __cdecl GCGPhaseEnd::onPhaseExit(GCGPhaseEnd *const this)
{
  const GCGRule *v1; // rax
  uint32_t round_limit; // ebx
  GCGDuel *Duel; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  GCGGameMode::onRoundChange(this->game_mode_);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  v1 = GCGGameMode::rule(this->game_mode_);
  if ( *(_BYTE *)(((unsigned __int64)&v1->round_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v1->round_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    v1 = (const GCGRule *)__asan_report_load4(&v1->round_limit);
  }
  round_limit = v1->round_limit;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  Duel = GCGGameMode::getDuel(this->game_mode_);
  if ( round_limit > GCGDuel::getRound(Duel) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    GCGGameMode::recordRoundTimeUse(this->game_mode_);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    GCGGameMode::toFinPhase(this->game_mode_, GCG_CONTROLLER_NONE, GCG_END_REASON_ROUND_LIMIT);
  }
};
