// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/phase/gcg_phase_die.cpp

// Line 22: range 000000000D788B4C-000000000D788E7F
void __cdecl GCGPhaseDie::onInit(GCGPhaseDie *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  GCGDuel *Duel; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  int v7; // r14d
  proto::GCGControllerValue controller_id; // [rsp+14h] [rbp-ACh]
  std::initializer_list<proto::GCGControllerValue>::const_iterator __for_begin; // [rsp+18h] [rbp-A8h]
  std::initializer_list<proto::GCGControllerValue>::const_iterator __for_end; // [rsp+28h] [rbp-98h]
  GCGField *field; // [rsp+30h] [rbp-90h]
  GCGCharacterZone *character_zone; // [rsp+38h] [rbp-88h]
  std::initializer_list<proto::GCGControllerValue> v13; // [rsp+40h] [rbp-80h] BYREF
  char v14[112]; // [rsp+50h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 11 card_ptr:27";
  *(_QWORD *)(v1 + 16) = GCGPhaseDie::onInit;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  v13._M_len = 2LL;
  v13._M_array = (std::initializer_list<proto::GCGControllerValue>::iterator)&C_1270_6957905;
  __for_begin = std::initializer_list<proto::GCGControllerValue>::begin(&v13);
  __for_end = std::initializer_list<proto::GCGControllerValue>::end(&v13);
  while ( __for_begin != __for_end )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(__for_begin);
    }
    controller_id = *__for_begin;
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    Duel = GCGGameMode::getDuel(this->game_mode_);
    field = GCGDuel::getField(Duel, controller_id);
    character_zone = GCGField::getCharacterZone(field);
    GCGCharacterZone::getOnStageCard((GCGCharacterZone *const)(v1 + 32));
    if ( std::operator!=<GCGCard>((const std::shared_ptr<GCGCard> *)(v1 + 32), 0LL)
      && (v5 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32)),
          GCGCard::isAlive(v5)) )
    {
      v7 = 0;
    }
    else
    {
      if ( GCGCharacterZone::isAllCharacterDie(character_zone) )
        GCGField::processWaitingCharacter(field, GCG_REASON_DEFAULT);
      if ( GCGCharacterZone::isAllCharacterDie(character_zone) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->game_mode_);
        GCGGameMode::toFinPhase(this->game_mode_, GCG_CONTROLLER_NONE, GCG_END_REASON_DIE);
        v7 = 1;
      }
      else
      {
        GCGPhaseBase::addAllowController(this, controller_id, 1u);
        v7 = 2;
      }
    }
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v1 + 32));
    if ( v7 )
    {
      if ( v7 != 2 )
        break;
    }
    ++__for_begin;
  }
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

// Line 50: range 000000000D788E80-000000000D788F0C
void __cdecl GCGPhaseDie::setPhaseParam(GCGPhaseDie *const this, const GCGPhaseParam *param)
{
  GCGControllerValue first_die_controller_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&param->first_die_controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&param->first_die_controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&param->first_die_controller_id);
  }
  first_die_controller_id = param->first_die_controller_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->first_die_controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->first_die_controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->first_die_controller_id);
  }
  this->first_die_controller_id = first_die_controller_id;
};

// Line 55: range 000000000D788F0E-000000000D788FDC
void __cdecl GCGPhaseDie::onPhaseEnter(GCGPhaseDie *const this)
{
  GCGPhaseMgr *PhaseMgr; // rax
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( GCGPhaseBase::isAllowControllerAllDone(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    PhaseMgr = GCGGameMode::getPhaseMgr(this->game_mode_);
    GCGPhaseMgr::toNextPhase(PhaseMgr);
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/phase/gcg_phase_die.cpp",
      "onPhaseEnter",
      60);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v2, (const char (*)[19])"direct exit phase.");
    common::milog::MiLogStream::~MiLogStream(&v2);
  }
};

// Line 65: range 000000000D788FDE-000000000D789688
void __cdecl GCGPhaseDie::onPhaseExit(GCGPhaseDie *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGSkillUseParam>>::mapped_type *v4; // rax
  GCGSkillLogic *SkillLogic; // r15
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  GCGTriggerType trigger_type; // r14d
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGSkillUseParam>>::mapped_type *v8; // rax
  GCGSkillLogic *v9; // r15
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  GCGTriggerType v11; // r14d
  signed int ActionMgr; // eax
  GCGControllerValue v13; // r14d
  std::__shared_ptr_access<GCGActionWaitingCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  unsigned __int64 v15; // rax
  void (__fastcall *v16)(GCGPhaseDie *const, std::shared_ptr<GCGSkillUseParam> *); // r15
  std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGSkillUseParam> > >::_Self __x; // [rsp+10h] [rbp-D0h] BYREF
  std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGSkillUseParam> > >::_Self __y; // [rsp+18h] [rbp-C8h] BYREF
  std::shared_ptr<GCGSkillUseParam> p_trigger_windows_param_ptr; // [rsp+20h] [rbp-C0h] BYREF
  char v20[176]; // [rsp+30h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 32 4 22 first_controller_id:67 48 4 23 second_controller_id:68 64 16 22 trigger_windows_ptr:83"
                        " 96 16 13 action_ptr:91";
  *(_QWORD *)(v1 + 16) = GCGPhaseDie::onPhaseExit;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  *(_DWORD *)(v1 + 32) = 1;
  *(_DWORD *)(v1 + 48) = 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->first_die_controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->first_die_controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->first_die_controller_id);
  }
  if ( this->first_die_controller_id != *(_DWORD *)(v1 + 32) )
    std::swap<proto::GCGControllerValue>((proto::GCGControllerValue *)(v1 + 32), (proto::GCGControllerValue *)(v1 + 48));
  __y._M_node = std::map<proto::GCGControllerValue,std::shared_ptr<GCGSkillUseParam>>::end(&this->trigger_map_)._M_node;
  __x._M_node = std::map<proto::GCGControllerValue,std::shared_ptr<GCGSkillUseParam>>::find(
                  &this->trigger_map_,
                  (const std::map<proto::GCGControllerValue,std::shared_ptr<GCGSkillUseParam>>::key_type *)(v1 + 32))._M_node;
  if ( std::operator!=(&__x, &__y) )
  {
    v4 = std::map<proto::GCGControllerValue,std::shared_ptr<GCGSkillUseParam>>::operator[](
           &this->trigger_map_,
           (const std::map<proto::GCGControllerValue,std::shared_ptr<GCGSkillUseParam>>::key_type *)(v1 + 32));
    std::shared_ptr<GCGSkillUseParam>::shared_ptr((std::shared_ptr<GCGSkillUseParam> *const)(v1 + 64), v4);
    if ( std::operator!=<GCGSkillUseParam>((const std::shared_ptr<GCGSkillUseParam> *)(v1 + 64), 0LL) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      SkillLogic = GCGGameMode::getSkillLogic(this->game_mode_);
      std::shared_ptr<GCGSkillUseParam>::shared_ptr(
        &p_trigger_windows_param_ptr,
        (const std::shared_ptr<GCGSkillUseParam> *)(v1 + 64));
      v6 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v6->trigger_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v6->trigger_type >> 3) + 0x7FFF8000) <= 3 )
      {
        v6 = (std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v6->trigger_type);
      }
      trigger_type = v6->trigger_type;
      std::enable_shared_from_this<GCGPhaseBase>::shared_from_this((std::enable_shared_from_this<GCGPhaseBase> *const)(v1 + 96));
      GCGSkillLogic::trigger(SkillLogic, (GCGPhaseBasePtr *)(v1 + 96), trigger_type, &p_trigger_windows_param_ptr);
      std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v1 + 96));
      std::shared_ptr<GCGSkillUseParam>::~shared_ptr(&p_trigger_windows_param_ptr);
    }
    std::shared_ptr<GCGSkillUseParam>::~shared_ptr((std::shared_ptr<GCGSkillUseParam> *const)(v1 + 64));
  }
  __y._M_node = std::map<proto::GCGControllerValue,std::shared_ptr<GCGSkillUseParam>>::end(&this->trigger_map_)._M_node;
  __x._M_node = std::map<proto::GCGControllerValue,std::shared_ptr<GCGSkillUseParam>>::find(
                  &this->trigger_map_,
                  (const std::map<proto::GCGControllerValue,std::shared_ptr<GCGSkillUseParam>>::key_type *)(v1 + 48))._M_node;
  if ( std::operator!=(&__x, &__y) )
  {
    v8 = std::map<proto::GCGControllerValue,std::shared_ptr<GCGSkillUseParam>>::operator[](
           &this->trigger_map_,
           (const std::map<proto::GCGControllerValue,std::shared_ptr<GCGSkillUseParam>>::key_type *)(v1 + 48));
    std::shared_ptr<GCGSkillUseParam>::shared_ptr((std::shared_ptr<GCGSkillUseParam> *const)(v1 + 64), v8);
    if ( std::operator!=<GCGSkillUseParam>((const std::shared_ptr<GCGSkillUseParam> *)(v1 + 64), 0LL) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      v9 = GCGGameMode::getSkillLogic(this->game_mode_);
      std::shared_ptr<GCGSkillUseParam>::shared_ptr(
        &p_trigger_windows_param_ptr,
        (const std::shared_ptr<GCGSkillUseParam> *)(v1 + 64));
      v10 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v10->trigger_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v10->trigger_type >> 3) + 0x7FFF8000) <= 3 )
      {
        v10 = (std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v10->trigger_type);
      }
      v11 = v10->trigger_type;
      std::enable_shared_from_this<GCGPhaseBase>::shared_from_this((std::enable_shared_from_this<GCGPhaseBase> *const)(v1 + 96));
      GCGSkillLogic::trigger(v9, (GCGPhaseBasePtr *)(v1 + 96), v11, &p_trigger_windows_param_ptr);
      std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v1 + 96));
      std::shared_ptr<GCGSkillUseParam>::~shared_ptr(&p_trigger_windows_param_ptr);
    }
    std::shared_ptr<GCGSkillUseParam>::~shared_ptr((std::shared_ptr<GCGSkillUseParam> *const)(v1 + 64));
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  ActionMgr = (unsigned int)GCGGameMode::getActionMgr(this->game_mode_);
  GCGActionMgr::createAction<GCGActionWaitingCharacter>((GCGActionMgr *const)(v1 + 96), (GCGControllerValue)ActionMgr);
  if ( std::operator!=<GCGActionWaitingCharacter>((const std::shared_ptr<GCGActionWaitingCharacter> *)(v1 + 96), 0LL) )
  {
    v13 = *(_DWORD *)(v1 + 32);
    v14 = std::__shared_ptr_access<GCGActionWaitingCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionWaitingCharacter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&v14->first_controller_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v14->first_controller_id >> 3) + 0x7FFF8000) <= 3 )
    {
      v14 = (std::__shared_ptr_access<GCGActionWaitingCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v14->first_controller_id);
    }
    v14->first_controller_id = v13;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v15 = (unsigned __int64)(this->_vptr_GCGPhaseBase + 5);
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      __asan_report_load8(this->_vptr_GCGPhaseBase + 5);
    v16 = *(void (__fastcall **)(GCGPhaseDie *const, std::shared_ptr<GCGSkillUseParam> *))v15;
    std::shared_ptr<GCGActionBase>::shared_ptr<GCGActionWaitingCharacter,void>(
      (std::shared_ptr<GCGActionBase> *const)&p_trigger_windows_param_ptr,
      (const std::shared_ptr<GCGActionWaitingCharacter> *)(v1 + 96));
    v16(this, &p_trigger_windows_param_ptr);
    std::shared_ptr<GCGActionBase>::~shared_ptr((std::shared_ptr<GCGActionBase> *const)&p_trigger_windows_param_ptr);
  }
  std::shared_ptr<GCGActionWaitingCharacter>::~shared_ptr((std::shared_ptr<GCGActionWaitingCharacter> *const)(v1 + 96));
  if ( v20 == (char *)v1 )
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

// Line 100: range 000000000D78968A-000000000D789BFB
int32_t __cdecl GCGPhaseDie::handleOperation(GCGPhaseDie *const this, const GCGOperationBasePtr *p_operation_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  int v9; // eax
  GCGDuel *Duel; // r13
  std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int v13; // r15d
  std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rdx
  common::milog::MiLogStream *v15; // r13
  std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  unsigned __int64 v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  int32_t result; // eax
  unsigned int v21; // [rsp+2Ch] [rbp-A4h] BYREF
  unsigned int val; // [rsp+30h] [rbp-A0h] BYREF
  int32_t ret; // [rsp+34h] [rbp-9Ch]
  proto::GCGControllerValue controller_id; // [rsp+38h] [rbp-98h]
  proto::GCGControllerValue winner; // [rsp+3Ch] [rbp-94h]
  common::milog::MiLogStream v26; // [rsp+40h] [rbp-90h] BYREF
  char v27[112]; // [rsp+60h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 10 op_ptr:120";
  *(_QWORD *)(v3 + 16) = GCGPhaseDie::handleOperation;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( std::operator==<GCGOperationBase>(p_operation_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/phase/gcg_phase_die.cpp",
      "handleOperation",
      103);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v26,
      (const char (*)[36])"[GCG_RET] operation ptr is nullptr.");
    common::milog::MiLogStream::~MiLogStream(&v26);
    v2 = -1;
    goto LABEL_32;
  }
  ret = -1;
  v6 = std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_operation_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&v6->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v6->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    v6 = (std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v6->controller_id);
  }
  controller_id = v6->controller_id;
  v7 = std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_operation_ptr);
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v7);
  v8 = (unsigned __int64)(v7->_vptr_GCGOperationBase + 2);
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v7->_vptr_GCGOperationBase + 2);
  v9 = (*(__int64 (__fastcall **)(std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v8)(v7);
  if ( v9 == 3 )
  {
    std::dynamic_pointer_cast<GCGOperationOnStageSelect,GCGOperationBase>((const std::shared_ptr<GCGOperationBase> *)(v3 + 32));
    if ( std::operator==<GCGOperationOnStageSelect>((const std::shared_ptr<GCGOperationOnStageSelect> *)(v3 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/phase/gcg_phase_die.cpp",
        "handleOperation",
        123);
      v12 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
              &v26,
              (const char (*)[51])"[GCG_RET] operation ptr is nullptr. controller_id:");
      val = controller_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v26);
      v2 = 12001;
      v13 = 0;
    }
    else
    {
      v14 = std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      ret = GCGPhaseDie::select(this, v14);
      v13 = 1;
    }
    std::shared_ptr<GCGOperationOnStageSelect>::~shared_ptr((std::shared_ptr<GCGOperationOnStageSelect> *const)(v3 + 32));
    if ( !v13 )
      goto LABEL_32;
LABEL_31:
    v2 = ret;
    goto LABEL_32;
  }
  if ( v9 != 9 )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/phase/gcg_phase_die.cpp",
      "handleOperation",
      130);
    v15 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v26,
            (const char (*)[30])"[GCG_RET] op type not match: ");
    v16 = std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_operation_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v16);
    v17 = (unsigned __int64)(v16->_vptr_GCGOperationBase + 2);
    if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v16->_vptr_GCGOperationBase + 2);
    v21 = (*(__int64 (__fastcall **)(std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v17)(v16);
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &v21);
    v19 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v18, (const char (*)[17])", controller_id:");
    val = controller_id;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
    common::milog::MiLogStream::~MiLogStream(&v26);
    ret = 12004;
    goto LABEL_31;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  Duel = GCGGameMode::getDuel(this->game_mode_);
  v11 = std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_operation_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&v11->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    v11 = (std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v11->controller_id);
  }
  winner = (unsigned int)GCGDuel::getOtherControllerId(Duel, v11->controller_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  GCGGameMode::toFinPhase(this->game_mode_, winner, GCG_END_REASON_SURRENDER);
  v2 = 0;
LABEL_32:
  result = v2;
  if ( v27 == (char *)v3 )
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

// Line 138: range 000000000D789BFC-000000000D789C3D
GCGOperationBasePtr __cdecl GCGPhaseDie::defaultOperation(GCGPhaseDie *const this)
{
  GCGOperationBasePtr result; // rax
  std::shared_ptr<GCGOperationOnStageSelect> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<GCGOperationOnStageSelect>();
  std::shared_ptr<GCGOperationBase>::shared_ptr<GCGOperationOnStageSelect,void>(
    (std::shared_ptr<GCGOperationBase> *const)this,
    &__r);
  std::shared_ptr<GCGOperationOnStageSelect>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<GCGOperationBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 143: range 000000000D789C3E-000000000D78A894
int32_t __cdecl GCGPhaseDie::select(GCGPhaseDie *const this, const GCGOperationOnStageSelect *op)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  GCGDuel *v6; // rcx
  GCGField *v7; // rax
  uint32_t v8; // eax
  common::milog::MiLogStream *v9; // rax
  int v10; // r15d
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  GCGDuel *Duel; // rcx
  GCGField *v15; // rax
  GCGCharacterZone *CharacterZone; // rax
  signed int ActionMgr; // ecx
  uint32_t v18; // r14d
  std::__shared_ptr_access<GCGActionSelectOnStage,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  GCGPhaseDie *v20; // rdx
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  GCGControllerValue controller_id; // r14d
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  GCGDuel *v24; // rcx
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  GCGCardMgr *CardMgr; // rax
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  unsigned __int64 v28; // rax
  void (__fastcall *v29)(GCGPhaseDie *const, unsigned __int64); // r15
  std::shared_ptr<GCGSkillUseParam> *v30; // rax
  GCGPhaseMgr *PhaseMgr; // rax
  int32_t result; // eax
  GCGField *field; // [rsp+28h] [rbp-138h]
  common::milog::MiLogStream v34; // [rsp+30h] [rbp-130h] BYREF
  common::milog::MiLogStream v35; // [rsp+50h] [rbp-110h] BYREF
  char v36[240]; // [rsp+70h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 13 card_guid:144 64 16 14 action_ptr:173 96 16 29 trigger_windows_param_ptr:183 128 16 19"
                        " target_card_ptr:193 160 16 12 card_ptr:147";
  *(_QWORD *)(v3 + 16) = GCGPhaseDie::select;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&op->card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)op + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&op->card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&op->card_guid);
  }
  *(_DWORD *)(v3 + 48) = op->card_guid;
  if ( !*(_DWORD *)(v3 + 48) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    Duel = GCGGameMode::getDuel(this->game_mode_);
    if ( *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&op->controller_id);
    }
    v15 = GCGDuel::getField(Duel, op->controller_id);
    CharacterZone = GCGField::getCharacterZone(v15);
    *(_DWORD *)(v3 + 48) = GCGCharacterZone::getDefaultOnstageGuid(CharacterZone);
    if ( !*(_DWORD *)(v3 + 48) )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/phase/gcg_phase_die.cpp",
        "select",
        164);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v35, (const char (*)[21])"op.card_guid is zero");
      common::milog::MiLogStream::~MiLogStream(&v35);
      v2 = 12007;
      goto LABEL_64;
    }
    goto LABEL_24;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  v6 = GCGGameMode::getDuel(this->game_mode_);
  if ( *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&op->controller_id);
  }
  v7 = GCGDuel::getField(v6, op->controller_id);
  v8 = (unsigned int)GCGField::getCharacterZone(v7);
  GCGCardZone::findCard((GCGCardZone *const)(v3 + 160), v8);
  if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v3 + 160), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/phase/gcg_phase_die.cpp",
      "select",
      150);
    v9 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v35,
           (const char (*)[41])"[GCG_RET] character card guid not found.");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v35);
    v2 = 12007;
    v10 = 0;
  }
  else
  {
    v11 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
    if ( !GCGCard::isAlive(v11) )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_game/phase/gcg_phase_die.cpp",
        "select",
        155);
      v12 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v34,
              (const char (*)[38])"[GCG_RET] character card already die.");
      v13 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      GCGCard::getDesc[abi:cxx11]((std::string *)&v35, v13);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)&v35);
      std::string::~string(&v35);
      common::milog::MiLogStream::~MiLogStream(&v34);
      v2 = 12008;
      v10 = 0;
    }
    else
    {
      v10 = 1;
    }
  }
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 160));
  if ( v10 == 1 )
  {
LABEL_24:
    if ( !std::set<unsigned int>::empty(&op->select_dice_set) )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_game/phase/gcg_phase_die.cpp",
        "select",
        170);
      common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
        &v35,
        (const char (*)[50])"[GCG_RET] die phase select onstage not need dice.");
      common::milog::MiLogStream::~MiLogStream(&v35);
      v2 = 12011;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      ActionMgr = (unsigned int)GCGGameMode::getActionMgr(this->game_mode_);
      if ( *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&op->controller_id);
      }
      GCGActionMgr::createAction<GCGActionSelectOnStage>((GCGActionMgr *const)(v3 + 64), (GCGControllerValue)ActionMgr);
      if ( std::operator==<GCGActionSelectOnStage>((const std::shared_ptr<GCGActionSelectOnStage> *)(v3 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/phase/gcg_phase_die.cpp",
          "select",
          176);
        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
          &v35,
          (const char (*)[29])"[GCG_RET] createAction fail.");
        common::milog::MiLogStream::~MiLogStream(&v35);
        v2 = -1;
      }
      else
      {
        v18 = *(_DWORD *)(v3 + 48);
        v19 = std::__shared_ptr_access<GCGActionSelectOnStage,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionSelectOnStage,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v19->card_guid >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v19->card_guid >> 3) + 0x7FFF8000) <= 3 )
        {
          v19 = (std::__shared_ptr_access<GCGActionSelectOnStage,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v19->card_guid);
        }
        v19->card_guid = v18;
        v20 = this;
        if ( *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&op->controller_id);
        }
        GCGPhaseBase::markControllerDone(v20, op->controller_id);
        common::tools::perf::make_shared<GCGSkillUseParam>();
        if ( std::operator==<GCGSkillUseParam>(0LL, (const std::shared_ptr<GCGSkillUseParam> *)(v3 + 96)) )
        {
          common::milog::MiLogStream::create(
            &v35,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/card_game/phase/gcg_phase_die.cpp",
            "select",
            186);
          common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
            &v35,
            (const char (*)[37])"trigger_windows_param_ptr is nullptr");
          common::milog::MiLogStream::~MiLogStream(&v35);
          v2 = -1;
        }
        else
        {
          v21 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          if ( *(_BYTE *)(((unsigned __int64)&v21->trigger_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v21->trigger_type >> 3) + 0x7FFF8000) <= 3 )
          {
            v21 = (std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v21->trigger_type);
          }
          v21->trigger_type = GCG_TRIGGER_ACTION_CHANGE_CHARACTER_POST;
          if ( *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&op->controller_id);
          }
          controller_id = op->controller_id;
          v23 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          if ( *(_BYTE *)(((unsigned __int64)&v23->controller_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v23->controller_id >> 3) + 0x7FFF8000) <= 3 )
          {
            v23 = (std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v23->controller_id);
          }
          v23->controller_id = controller_id;
          if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->game_mode_);
          v24 = GCGGameMode::getDuel(this->game_mode_);
          if ( *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&op->controller_id);
          }
          field = GCGDuel::getField(v24, op->controller_id);
          GCGField::getCharacterZone(field);
          GCGCharacterZone::getOnStageCard((GCGCharacterZone *const)(v3 + 160));
          v25 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          std::shared_ptr<GCGCard>::operator=(&v25->source_card_ptr, (std::shared_ptr<GCGCard> *)(v3 + 160));
          std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 160));
          if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->game_mode_);
          CardMgr = GCGGameMode::getCardMgr(this->game_mode_);
          GCGCardMgr::findCard((GCGCardMgr *const)(v3 + 128), CardMgr, *(_DWORD *)(v3 + 48));
          if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v3 + 128)) )
          {
            common::milog::MiLogStream::create(
              &v35,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/card_game/phase/gcg_phase_die.cpp",
              "select",
              196);
            common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v35,
              (const char (*)[27])"target_card_ptr is nullptr");
            common::milog::MiLogStream::~MiLogStream(&v35);
            v2 = -1;
          }
          else
          {
            v27 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            std::shared_ptr<GCGCard>::operator=(&v27->target_card_ptr, (const std::shared_ptr<GCGCard> *)(v3 + 128));
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            v28 = (unsigned __int64)(this->_vptr_GCGPhaseBase + 5);
            if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
              __asan_report_load8(this->_vptr_GCGPhaseBase + 5);
            v29 = *(void (__fastcall **)(GCGPhaseDie *const, unsigned __int64))v28;
            std::shared_ptr<GCGActionBase>::shared_ptr<GCGActionSelectOnStage,void>(
              (std::shared_ptr<GCGActionBase> *const)(v3 + 160),
              (const std::shared_ptr<GCGActionSelectOnStage> *)(v3 + 64));
            v29(this, v3 + 160);
            std::shared_ptr<GCGActionBase>::~shared_ptr((std::shared_ptr<GCGActionBase> *const)(v3 + 160));
            v30 = std::map<proto::GCGControllerValue,std::shared_ptr<GCGSkillUseParam>>::operator[](
                    &this->trigger_map_,
                    &op->controller_id);
            std::shared_ptr<GCGSkillUseParam>::operator=(v30, (const std::shared_ptr<GCGSkillUseParam> *)(v3 + 96));
            if ( GCGPhaseBase::isAllowControllerAllDone(this) )
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->game_mode_);
              PhaseMgr = GCGGameMode::getPhaseMgr(this->game_mode_);
              GCGPhaseMgr::toNextPhase(PhaseMgr);
            }
            v2 = 0;
          }
          std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 128));
        }
        std::shared_ptr<GCGSkillUseParam>::~shared_ptr((std::shared_ptr<GCGSkillUseParam> *const)(v3 + 96));
      }
      std::shared_ptr<GCGActionSelectOnStage>::~shared_ptr((std::shared_ptr<GCGActionSelectOnStage> *const)(v3 + 64));
    }
  }
LABEL_64:
  result = v2;
  if ( v36 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
