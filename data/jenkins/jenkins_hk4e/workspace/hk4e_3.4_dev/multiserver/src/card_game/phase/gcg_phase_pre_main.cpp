// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/phase/gcg_phase_pre_main.cpp

// Line 17: range 000000000D7B67FC-000000000D7B6C20
void __cdecl GCGPhasePreMain::onPhaseEnter(GCGPhasePreMain *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  proto::GCGControllerValue *v4; // rax
  proto::GCGControllerValue *v5; // rdx
  GCGDuel *Duel; // rax
  GCGCharacterZone *CharacterZone; // rax
  GCGSkillLogic *SkillLogic; // r14
  GCGPhaseMgr *PhaseMgr; // rax
  std::allocator<proto::GCGControllerValue> __a; // [rsp+1Bh] [rbp-D5h] BYREF
  proto::GCGControllerValue controller_id; // [rsp+1Ch] [rbp-D4h]
  std::vector<proto::GCGControllerValue>::const_iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  const std::vector<proto::GCGControllerValue> *__for_range; // [rsp+28h] [rbp-C8h]
  GCGField *field; // [rsp+30h] [rbp-C0h]
  std::vector<proto::GCGControllerValue>::const_iterator __for_end; // [rsp+38h] [rbp-B8h] BYREF
  std::enable_shared_from_this<GCGPhaseBase> v16; // [rsp+40h] [rbp-B0h] BYREF
  std::shared_ptr<GCGSkillUseParam> p_trigger_windows_param_ptr; // [rsp+50h] [rbp-A0h] BYREF
  char v18[144]; // [rsp+60h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 17 controller_vec:22";
  *(_QWORD *)(v1 + 16) = GCGPhasePreMain::onPhaseEnter;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  GCGGameMode::resetSkillTriggerVars(this->game_mode_);
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
    Duel = GCGGameMode::getDuel(this->game_mode_);
    field = GCGDuel::getField(Duel, controller_id);
    CharacterZone = GCGField::getCharacterZone(field);
    GCGCharacterZone::triggerAllNewAddCharacters(CharacterZone);
    __gnu_cxx::__normal_iterator<proto::GCGControllerValue const*,std::vector<proto::GCGControllerValue>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  SkillLogic = GCGGameMode::getSkillLogic(this->game_mode_);
  std::shared_ptr<GCGSkillUseParam>::shared_ptr(&p_trigger_windows_param_ptr, 0LL);
  std::enable_shared_from_this<GCGPhaseBase>::shared_from_this(&v16);
  GCGSkillLogic::trigger(
    SkillLogic,
    (GCGPhaseBasePtr *)&v16,
    GCG_TRIGGER_PHASE_ONSTAGE_PHASE_START,
    &p_trigger_windows_param_ptr);
  std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)&v16);
  std::shared_ptr<GCGSkillUseParam>::~shared_ptr(&p_trigger_windows_param_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  PhaseMgr = GCGGameMode::getPhaseMgr(this->game_mode_);
  GCGPhaseMgr::toNextPhase(PhaseMgr);
  std::vector<proto::GCGControllerValue>::~vector((std::vector<proto::GCGControllerValue> *const)(v1 + 32));
  if ( v18 == (char *)v1 )
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

// Line 36: range 000000000D7B6C22-000000000D7B6C2C
void __cdecl GCGPhasePreMain::onPhaseExit(GCGPhasePreMain *const this)
{
  ;
};
