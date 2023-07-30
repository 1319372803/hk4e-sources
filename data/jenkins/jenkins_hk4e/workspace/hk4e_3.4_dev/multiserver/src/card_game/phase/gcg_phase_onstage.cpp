// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/phase/gcg_phase_onstage.cpp

// Line 21: range 000000000D7B50FC-000000000D7B51B5
void __cdecl GCGPhaseOnStage::onInit(GCGPhaseOnStage *const this)
{
  GCGCharacterZone *CharacterZone; // rax
  GCGCharacterZone *v2; // rax
  GCGDuel *duel; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  duel = GCGGameMode::getDuel(this->game_mode_);
  CharacterZone = GCGField::getCharacterZone(&duel->field_1);
  if ( !GCGCharacterZone::getOnStageCardGuid(CharacterZone) )
    GCGPhaseBase::addAllowController(this, GCG_CONTROLLER_A, 1u);
  v2 = GCGField::getCharacterZone(&duel->field_2);
  if ( !GCGCharacterZone::getOnStageCardGuid(v2) )
    GCGPhaseBase::addAllowController(this, GCG_CONTROLLER_B, 1u);
};

// Line 34: range 000000000D7B51B6-000000000D7B5211
void __cdecl GCGPhaseOnStage::onPhaseEnter(GCGPhaseOnStage *const this)
{
  GCGPhaseMgr *PhaseMgr; // rax

  if ( GCGPhaseBase::isAllowControllerAllDone(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    PhaseMgr = GCGGameMode::getPhaseMgr(this->game_mode_);
    GCGPhaseMgr::toNextPhase(PhaseMgr);
  }
};

// Line 42: range 000000000D7B5212-000000000D7B5832
void __cdecl GCGPhaseOnStage::onPhaseExit(GCGPhaseOnStage *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  GCGDuel *Duel; // rax
  GCGDuel *v5; // rax
  GCGSkillLogic *SkillLogic; // r15
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  GCGTriggerType trigger_type; // r14d
  signed int ActionMgr; // eax
  std::__shared_ptr_access<GCGMsgDuelDataChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<GCGActionSendMessage,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  unsigned __int64 v12; // rax
  void (__fastcall *v13)(GCGPhaseOnStage *const, std::shared_ptr<GCGSkillUseParam> *); // r15
  GCGControllerValue first_controller_id; // [rsp+18h] [rbp-118h]
  GCGControllerValue second_controller_id; // [rsp+1Ch] [rbp-114h]
  std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGSkillUseParam> > >::_Self __y; // [rsp+20h] [rbp-110h] BYREF
  std::initializer_list<proto::GCGControllerValue>::const_iterator __for_begin; // [rsp+28h] [rbp-108h]
  std::initializer_list<proto::GCGControllerValue> *__for_range; // [rsp+30h] [rbp-100h]
  std::initializer_list<proto::GCGControllerValue>::const_iterator __for_end; // [rsp+38h] [rbp-F8h]
  std::shared_ptr<GCGSkillUseParam> *trigger_windows_ptr; // [rsp+40h] [rbp-F0h]
  int v21[2]; // [rsp+48h] [rbp-E8h] BYREF
  std::shared_ptr<GCGSkillUseParam> p_trigger_windows_param_ptr; // [rsp+50h] [rbp-E0h] BYREF
  char v23[208]; // [rsp+60h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 4 16 controller_id:45 64 8 7 iter:47 96 16 13 action_ptr:58 128 16 10 msg_ptr:61";
  *(_QWORD *)(v1 + 16) = GCGPhaseOnStage::onPhaseExit;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -219021312;
  v3[536862724] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  Duel = GCGGameMode::getDuel(this->game_mode_);
  first_controller_id = GCGDuel::getCurControllerId(Duel);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  v5 = GCGGameMode::getDuel(this->game_mode_);
  second_controller_id = (unsigned int)GCGDuel::getOtherControllerId(v5, first_controller_id);
  *(_QWORD *)(v1 + 96) = 0LL;
  *(_QWORD *)(v1 + 104) = 0LL;
  *(_QWORD *)(v1 + 104) = 2LL;
  v21[0] = first_controller_id;
  v21[1] = second_controller_id;
  *(_QWORD *)(v1 + 96) = v21;
  __for_range = (std::initializer_list<proto::GCGControllerValue> *)(v1 + 96);
  __for_begin = std::initializer_list<proto::GCGControllerValue>::begin((const std::initializer_list<proto::GCGControllerValue> *const)(v1 + 96));
  __for_end = std::initializer_list<proto::GCGControllerValue>::end((const std::initializer_list<proto::GCGControllerValue> *const)(v1 + 96));
  while ( __for_begin != __for_end )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(__for_begin);
    }
    *(proto::GCGControllerValue *)(v1 + 48) = *__for_begin;
    *(std::map<proto::GCGControllerValue,std::shared_ptr<GCGSkillUseParam>>::iterator *)(v1 + 64) = std::map<proto::GCGControllerValue,std::shared_ptr<GCGSkillUseParam>>::find(&this->trigger_map_, (const std::map<proto::GCGControllerValue,std::shared_ptr<GCGSkillUseParam>>::key_type *)(v1 + 48));
    __y._M_node = std::map<proto::GCGControllerValue,std::shared_ptr<GCGSkillUseParam>>::end(&this->trigger_map_)._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGSkillUseParam> > >::_Self *)(v1 + 64),
           &__y) )
    {
      trigger_windows_ptr = &std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGSkillUseParam>>>::operator->((const std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGSkillUseParam> > > *const)(v1 + 64))->second;
      if ( std::operator!=<GCGSkillUseParam>(trigger_windows_ptr, 0LL) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->game_mode_);
        SkillLogic = GCGGameMode::getSkillLogic(this->game_mode_);
        std::shared_ptr<GCGSkillUseParam>::shared_ptr(&p_trigger_windows_param_ptr, trigger_windows_ptr);
        v7 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)trigger_windows_ptr);
        if ( *(_BYTE *)(((unsigned __int64)&v7->trigger_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v7->trigger_type >> 3) + 0x7FFF8000) <= 3 )
        {
          v7 = (std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v7->trigger_type);
        }
        trigger_type = v7->trigger_type;
        std::enable_shared_from_this<GCGPhaseBase>::shared_from_this((std::enable_shared_from_this<GCGPhaseBase> *const)(v1 + 128));
        GCGSkillLogic::trigger(SkillLogic, (GCGPhaseBasePtr *)(v1 + 128), trigger_type, &p_trigger_windows_param_ptr);
        std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v1 + 128));
        std::shared_ptr<GCGSkillUseParam>::~shared_ptr(&p_trigger_windows_param_ptr);
      }
    }
    ++__for_begin;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  ActionMgr = (unsigned int)GCGGameMode::getActionMgr(this->game_mode_);
  GCGActionMgr::createAction<GCGActionSendMessage>((GCGActionMgr *const)(v1 + 96), (GCGControllerValue)ActionMgr);
  if ( std::operator!=<GCGActionSendMessage>((const std::shared_ptr<GCGActionSendMessage> *)(v1 + 96), 0LL) )
  {
    common::tools::perf::make_shared<GCGMsgDuelDataChange>();
    v10 = std::__shared_ptr_access<GCGMsgDuelDataChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgDuelDataChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
    if ( *(_BYTE *)(((unsigned __int64)&v10->round >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v10->round >> 3) + 0x7FFF8000) <= 3 )
    {
      v10 = (std::__shared_ptr_access<GCGMsgDuelDataChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v10->round);
    }
    v10->round = 1;
    v11 = std::__shared_ptr_access<GCGActionSendMessage,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionSendMessage,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    std::shared_ptr<GCGMessage>::operator=<GCGMsgDuelDataChange>(
      &v11->msg_ptr,
      (const std::shared_ptr<GCGMsgDuelDataChange> *)(v1 + 128));
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v12 = (unsigned __int64)(this->_vptr_GCGPhaseBase + 5);
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(this->_vptr_GCGPhaseBase + 5);
    v13 = *(void (__fastcall **)(GCGPhaseOnStage *const, std::shared_ptr<GCGSkillUseParam> *))v12;
    std::shared_ptr<GCGActionBase>::shared_ptr<GCGActionSendMessage,void>(
      (std::shared_ptr<GCGActionBase> *const)&p_trigger_windows_param_ptr,
      (const std::shared_ptr<GCGActionSendMessage> *)(v1 + 96));
    v13(this, &p_trigger_windows_param_ptr);
    std::shared_ptr<GCGActionBase>::~shared_ptr((std::shared_ptr<GCGActionBase> *const)&p_trigger_windows_param_ptr);
    std::shared_ptr<GCGMsgDuelDataChange>::~shared_ptr((std::shared_ptr<GCGMsgDuelDataChange> *const)(v1 + 128));
  }
  std::shared_ptr<GCGActionSendMessage>::~shared_ptr((std::shared_ptr<GCGActionSendMessage> *const)(v1 + 96));
  if ( v23 == (char *)v1 )
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
};

// Line 69: range 000000000D7B5834-000000000D7B5DA4
int32_t __cdecl GCGPhaseOnStage::handleOperation(
        GCGPhaseOnStage *const this,
        const GCGOperationBasePtr *p_operation_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned __int64 v7; // rdx
  GCGDuel *Duel; // r13
  std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  unsigned __int64 v11; // rdx
  common::milog::MiLogStream *v12; // r13
  std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  unsigned __int64 v14; // rdx
  std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rdx
  GCGPhaseMgr *PhaseMgr; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-9Ch] BYREF
  int32_t ret; // [rsp+18h] [rbp-98h]
  proto::GCGControllerValue winner; // [rsp+1Ch] [rbp-94h]
  common::milog::MiLogStream v21; // [rsp+20h] [rbp-90h] BYREF
  char v22[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 op_ptr:87";
  *(_QWORD *)(v2 + 16) = GCGPhaseOnStage::handleOperation;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( std::operator==<GCGOperationBase>(p_operation_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/phase/gcg_phase_onstage.cpp",
      "handleOperation",
      72);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v21,
      (const char (*)[26])"operation ptr is nullptr.");
    common::milog::MiLogStream::~MiLogStream(&v21);
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_operation_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v6);
    v7 = (unsigned __int64)(v6->_vptr_GCGOperationBase + 2);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v6->_vptr_GCGOperationBase + 2);
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v7)(v6) == 9 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      Duel = GCGGameMode::getDuel(this->game_mode_);
      v9 = std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_operation_ptr);
      if ( *(_BYTE *)(((unsigned __int64)&v9->controller_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v9->controller_id >> 3) + 0x7FFF8000) <= 3 )
      {
        v9 = (std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v9->controller_id);
      }
      winner = (unsigned int)GCGDuel::getOtherControllerId(Duel, v9->controller_id);
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      GCGGameMode::toFinPhase(this->game_mode_, winner, GCG_END_REASON_SURRENDER);
      v5 = 0;
    }
    else
    {
      v10 = std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_operation_ptr);
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v10);
      v11 = (unsigned __int64)(v10->_vptr_GCGOperationBase + 2);
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v10->_vptr_GCGOperationBase + 2);
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v11)(v10) == 3 )
      {
        std::dynamic_pointer_cast<GCGOperationOnStageSelect,GCGOperationBase>((const std::shared_ptr<GCGOperationBase> *)(v2 + 32));
        if ( std::operator==<GCGOperationOnStageSelect>(
               (const std::shared_ptr<GCGOperationOnStageSelect> *)(v2 + 32),
               0LL) )
        {
          common::milog::MiLogStream::create(
            &v21,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/card_game/phase/gcg_phase_onstage.cpp",
            "handleOperation",
            90);
          common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            &v21,
            (const char (*)[26])"operation ptr is nullptr.");
          common::milog::MiLogStream::~MiLogStream(&v21);
          v5 = 12001;
        }
        else
        {
          v15 = std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          ret = GCGPhaseOnStage::select(this, v15);
          if ( !ret && GCGPhaseBase::isAllowControllerAllDone(this) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->game_mode_);
            PhaseMgr = GCGGameMode::getPhaseMgr(this->game_mode_);
            GCGPhaseMgr::toNextPhase(PhaseMgr);
          }
          v5 = ret;
        }
        std::shared_ptr<GCGOperationOnStageSelect>::~shared_ptr((std::shared_ptr<GCGOperationOnStageSelect> *const)(v2 + 32));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/phase/gcg_phase_onstage.cpp",
          "handleOperation",
          84);
        v12 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                &v21,
                (const char (*)[20])"op type not match: ");
        v13 = std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_operation_ptr);
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v13);
        v14 = (unsigned __int64)(v13->_vptr_GCGOperationBase + 2);
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v13->_vptr_GCGOperationBase + 2);
        val = (*(__int64 (__fastcall **)(std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v14)(v13);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v5 = 12004;
      }
    }
  }
  result = v5;
  if ( v22 == (char *)v2 )
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

// Line 105: range 000000000D7B5DA6-000000000D7B5DE7
GCGOperationBasePtr __cdecl GCGPhaseOnStage::defaultOperation(GCGPhaseOnStage *const this)
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

// Line 111: range 000000000D7B5DE8-000000000D7B67FB
int32_t __cdecl GCGPhaseOnStage::select(GCGPhaseOnStage *const this, const GCGOperationOnStageSelect *op)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  GCGDuel *Duel; // rcx
  GCGField *Field; // rax
  GCGCharacterZone *CharacterZone; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r14d
  GCGDuel *v10; // rcx
  GCGField *v11; // rax
  GCGCharacterZone *v12; // rax
  signed int ActionMgr; // ecx
  uint32_t v14; // r14d
  std::__shared_ptr_access<GCGActionSelectOnStage,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  GCGPhaseOnStage *v16; // rdx
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  GCGControllerValue controller_id; // r14d
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  GCGCardMgr *CardMgr; // rax
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  unsigned __int64 v23; // rax
  void (__fastcall *v24)(GCGPhaseOnStage *const, std::shared_ptr<GCGCard> *); // r15
  std::shared_ptr<GCGSkillUseParam> *v25; // rax
  int32_t result; // eax
  std::shared_ptr<GCGCard> __r; // [rsp+20h] [rbp-100h] BYREF
  common::milog::MiLogStream v28; // [rsp+30h] [rbp-F0h] BYREF
  char v29[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 13 card_guid:112 64 16 14 action_ptr:135 96 16 29 trigger_windows_param_ptr:146 128 16 19"
                        " target_card_ptr:156";
  *(_QWORD *)(v2 + 16) = GCGPhaseOnStage::select;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&op->card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)op + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&op->card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&op->card_guid);
  }
  *(_DWORD *)(v2 + 48) = op->card_guid;
  if ( *(_DWORD *)(v2 + 48) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    Duel = GCGGameMode::getDuel(this->game_mode_);
    if ( *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&op->controller_id);
    }
    Field = GCGDuel::getField(Duel, op->controller_id);
    CharacterZone = GCGField::getCharacterZone(Field);
    if ( !GCGCardZone::isHasCard(CharacterZone, *(_DWORD *)(v2 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/phase/gcg_phase_onstage.cpp",
        "select",
        117);
      v8 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
             &v28,
             (const char (*)[43])"character zone find card fail. card_guid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v28);
      v9 = 12007;
      goto LABEL_51;
    }
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    v10 = GCGGameMode::getDuel(this->game_mode_);
    if ( *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&op->controller_id);
    }
    v11 = GCGDuel::getField(v10, op->controller_id);
    v12 = GCGField::getCharacterZone(v11);
    *(_DWORD *)(v2 + 48) = GCGCharacterZone::getDefaultOnstageGuid(v12);
    if ( !*(_DWORD *)(v2 + 48) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/phase/gcg_phase_onstage.cpp",
        "select",
        126);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v28, (const char (*)[18])"card_guid is zero");
      common::milog::MiLogStream::~MiLogStream(&v28);
      v9 = 12007;
      goto LABEL_51;
    }
  }
  if ( !std::set<unsigned int>::empty(&op->select_dice_set) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/phase/gcg_phase_onstage.cpp",
      "select",
      132);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      &v28,
      (const char (*)[31])"select onstage not need dice. ");
    common::milog::MiLogStream::~MiLogStream(&v28);
    v9 = 12006;
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
    GCGActionMgr::createAction<GCGActionSelectOnStage>((GCGActionMgr *const)(v2 + 64), (GCGControllerValue)ActionMgr);
    if ( std::operator==<GCGActionSelectOnStage>((const std::shared_ptr<GCGActionSelectOnStage> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/phase/gcg_phase_onstage.cpp",
        "select",
        138);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v28, (const char (*)[19])"createAction fail.");
      common::milog::MiLogStream::~MiLogStream(&v28);
      v9 = -1;
    }
    else
    {
      v14 = *(_DWORD *)(v2 + 48);
      v15 = std::__shared_ptr_access<GCGActionSelectOnStage,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionSelectOnStage,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v15->card_guid >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v15->card_guid >> 3) + 0x7FFF8000) <= 3 )
      {
        v15 = (std::__shared_ptr_access<GCGActionSelectOnStage,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v15->card_guid);
      }
      v15->card_guid = v14;
      v16 = this;
      if ( *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&op->controller_id);
      }
      GCGPhaseBase::markControllerDone(v16, op->controller_id);
      common::tools::perf::make_shared<GCGSkillUseParam>();
      if ( std::operator==<GCGSkillUseParam>(0LL, (const std::shared_ptr<GCGSkillUseParam> *)(v2 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/phase/gcg_phase_onstage.cpp",
          "select",
          149);
        common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
          &v28,
          (const char (*)[37])"trigger_windows_param_ptr is nullptr");
        common::milog::MiLogStream::~MiLogStream(&v28);
        v9 = -1;
      }
      else
      {
        v17 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&v17->trigger_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v17->trigger_type >> 3) + 0x7FFF8000) <= 3 )
        {
          v17 = (std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v17->trigger_type);
        }
        v17->trigger_type = GCG_TRIGGER_ACTION_CHANGE_CHARACTER_POST;
        if ( *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&op->controller_id);
        }
        controller_id = op->controller_id;
        v19 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&v19->controller_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v19->controller_id >> 3) + 0x7FFF8000) <= 3 )
        {
          v19 = (std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v19->controller_id);
        }
        v19->controller_id = controller_id;
        std::shared_ptr<GCGCard>::shared_ptr(&__r, 0LL);
        v20 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        std::shared_ptr<GCGCard>::operator=(&v20->source_card_ptr, &__r);
        std::shared_ptr<GCGCard>::~shared_ptr(&__r);
        if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->game_mode_);
        CardMgr = GCGGameMode::getCardMgr(this->game_mode_);
        GCGCardMgr::findCard((GCGCardMgr *const)(v2 + 128), CardMgr, *(_DWORD *)(v2 + 48));
        if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v2 + 128)) )
        {
          common::milog::MiLogStream::create(
            &v28,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/card_game/phase/gcg_phase_onstage.cpp",
            "select",
            159);
          common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            &v28,
            (const char (*)[27])"target_card_ptr is nullptr");
          common::milog::MiLogStream::~MiLogStream(&v28);
          v9 = -1;
        }
        else
        {
          v22 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          std::shared_ptr<GCGCard>::operator=(&v22->target_card_ptr, (const std::shared_ptr<GCGCard> *)(v2 + 128));
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          v23 = (unsigned __int64)(this->_vptr_GCGPhaseBase + 5);
          if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
            __asan_report_load8(this->_vptr_GCGPhaseBase + 5);
          v24 = *(void (__fastcall **)(GCGPhaseOnStage *const, std::shared_ptr<GCGCard> *))v23;
          std::shared_ptr<GCGActionBase>::shared_ptr<GCGActionSelectOnStage,void>(
            (std::shared_ptr<GCGActionBase> *const)&__r,
            (const std::shared_ptr<GCGActionSelectOnStage> *)(v2 + 64));
          v24(this, &__r);
          std::shared_ptr<GCGActionBase>::~shared_ptr((std::shared_ptr<GCGActionBase> *const)&__r);
          v25 = std::map<proto::GCGControllerValue,std::shared_ptr<GCGSkillUseParam>>::operator[](
                  &this->trigger_map_,
                  &op->controller_id);
          std::shared_ptr<GCGSkillUseParam>::operator=(v25, (const std::shared_ptr<GCGSkillUseParam> *)(v2 + 96));
          v9 = 0;
        }
        std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v2 + 128));
      }
      std::shared_ptr<GCGSkillUseParam>::~shared_ptr((std::shared_ptr<GCGSkillUseParam> *const)(v2 + 96));
    }
    std::shared_ptr<GCGActionSelectOnStage>::~shared_ptr((std::shared_ptr<GCGActionSelectOnStage> *const)(v2 + 64));
  }
LABEL_51:
  result = v9;
  if ( v29 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
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
