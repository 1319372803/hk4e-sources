// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/phase/gcg_phase_main.cpp

// Line 23: range 000000000D78CB16-000000000D78CBB7
void __cdecl GCGPhaseMain::onInit(GCGPhaseMain *const this)
{
  GCGDuel *Duel; // rax
  GCGDuel *v2; // rax
  GCGControllerValue CurControllerId; // eax

  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  Duel = GCGGameMode::getDuel(this->game_mode_);
  GCGDuel::resetOperationVars(Duel);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  v2 = GCGGameMode::getDuel(this->game_mode_);
  CurControllerId = GCGDuel::getCurControllerId(v2);
  GCGPhaseBase::addAllowController(this, CurControllerId, 1u);
};

// Line 31: range 000000000D78CBB8-000000000D78CBD2
void __cdecl GCGPhaseMain::onPhaseEnter(GCGPhaseMain *const this)
{
  GCGPhaseMain::onBeforeOperation(this);
};

// Line 37: range 000000000D78CBD4-000000000D78CC1F
void __cdecl GCGPhaseMain::onPhaseExit(GCGPhaseMain *const this)
{
  GCGDuel *Duel; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  Duel = GCGGameMode::getDuel(this->game_mode_);
  GCGDuel::switchHand(Duel);
};

// Line 45: range 000000000D78CC20-000000000D78CFAF
void __cdecl GCGPhaseMain::onBeforeOperation(GCGPhaseMain *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  GCGDuel *Duel; // rax
  GCGDuel *v5; // rax
  unsigned __int64 v6; // rax
  void (__fastcall *v7)(GCGPhaseMain *const, std::shared_ptr<GCGOperationBase> *); // r14
  GCGSkillLogic *SkillLogic; // r14
  std::enable_shared_from_this<GCGPhaseBase> v9; // [rsp+20h] [rbp-90h] BYREF
  std::shared_ptr<GCGOperationBase> v10; // [rsp+30h] [rbp-80h] BYREF
  char v11[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 16 operation_ptr:53";
  *(_QWORD *)(v1 + 16) = GCGPhaseMain::onBeforeOperation;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  GCGGameMode::resetSkillTriggerVars(this->game_mode_);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  Duel = GCGGameMode::getDuel(this->game_mode_);
  GCGDuel::resetOperationVars(Duel);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  v5 = GCGGameMode::getDuel(this->game_mode_);
  GCGDuel::getCurControllerId(v5);
  GCGPhaseMain::tryCreateAutoOperation((GCGPhaseMain *const)(v1 + 32), (GCGControllerValue)this);
  if ( std::operator!=<GCGOperationBase>(0LL, (const std::shared_ptr<GCGOperationBase> *)(v1 + 32)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v6 = (unsigned __int64)(this->_vptr_GCGPhaseBase + 7);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8(this->_vptr_GCGPhaseBase + 7);
    v7 = *(void (__fastcall **)(GCGPhaseMain *const, std::shared_ptr<GCGOperationBase> *))v6;
    std::shared_ptr<GCGOperationBase>::shared_ptr(&v10, (const std::shared_ptr<GCGOperationBase> *)(v1 + 32));
    v7(this, &v10);
    std::shared_ptr<GCGOperationBase>::~shared_ptr(&v10);
  }
  if ( !GCGPhaseBase::isAllowControllerAllDone(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    SkillLogic = GCGGameMode::getSkillLogic(this->game_mode_);
    std::shared_ptr<GCGSkillUseParam>::shared_ptr((std::shared_ptr<GCGSkillUseParam> *const)&v10, 0LL);
    std::enable_shared_from_this<GCGPhaseBase>::shared_from_this(&v9);
    GCGSkillLogic::trigger(
      SkillLogic,
      (GCGPhaseBasePtr *)&v9,
      GCG_TRIGGER_PHASE_ONSTAGE_SELECT_ACTION_BEFORE,
      (GCGSkillUseParamPtr *)&v10);
    std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)&v9);
    std::shared_ptr<GCGSkillUseParam>::~shared_ptr((std::shared_ptr<GCGSkillUseParam> *const)&v10);
    GCGPhaseMain::notifyCost(this);
    GCGPhaseMain::notifySkillPreview(this);
  }
  std::shared_ptr<GCGOperationBase>::~shared_ptr((std::shared_ptr<GCGOperationBase> *const)(v1 + 32));
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 74: range 000000000D78CFB0-000000000D78F64F
int32_t __cdecl GCGPhaseMain::handleOperation(GCGPhaseMain *const this, const GCGOperationBasePtr *p_operation_ptr)
{
  int32_t v2; // r13d
  unsigned __int64 v3; // r14
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned __int64 v7; // rdx
  GCGDuel *v8; // r13
  std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  int v10; // r15d
  std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  GCGDuel *v12; // r15
  std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  GCGField *v14; // rax
  uint32_t v15; // r15d
  uint32_t *p_skill_id; // rax
  common::milog::MiLogStream *v17; // r15
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r15
  std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  GCGControllerValue v26; // r15d
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  int v28; // r15d
  std::__shared_ptr_access<GCGOperationPass,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  _BOOL4 v30; // r15d
  std::__shared_ptr_access<GCGOperationReboot,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  std::__shared_ptr_access<GCGOperationReboot,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  GCGControllerValue v34; // r15d
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  GCGDuel *v36; // r15
  std::__shared_ptr_access<GCGOperationReboot,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  std::__shared_ptr_access<GCGOperationReboot,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  common::milog::MiLogStream *v39; // r13
  std::__shared_ptr_access<GCGOperationReboot,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  std::__shared_ptr_access<GCGOperationReboot,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  std::__shared_ptr_access<GCGOperationReboot,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  common::milog::MiLogStream *v43; // r13
  std::__shared_ptr_access<GCGOperationReboot,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v45; // rax
  _DWORD *v46; // rdx
  uint32_t v47; // eax
  common::milog::MiLogStream *v48; // rax
  int v49; // r15d
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rax
  int v51; // r15d
  std::__shared_ptr_access<GCGOperationPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rax
  GCGDuel *v53; // r15
  std::__shared_ptr_access<GCGOperationPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v54; // rax
  uint32_t HandZone; // r15d
  uint32_t *p_card_guid; // rax
  common::milog::MiLogStream *v57; // r15
  std::__shared_ptr_access<GCGOperationPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // r15
  std::__shared_ptr_access<GCGOperationPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v61; // rax
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v62; // rax
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v63; // rax
  std::__shared_ptr_access<GCGOperationPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v64; // rax
  GCGControllerValue v65; // r15d
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v66; // rax
  _BOOL4 v67; // r15d
  std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v68; // rax
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v69; // rax
  std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v70; // rax
  GCGControllerValue controller_id; // r15d
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v72; // rax
  GCGDuel *Duel; // r15
  std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v74; // rax
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v75; // rax
  GCGCardMgr *CardMgr; // rax
  int v77; // r15d
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v78; // rax
  common::milog::MiLogStream *v79; // r15
  std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v80; // rax
  unsigned __int64 v81; // rdx
  common::milog::MiLogStream *v82; // r13
  std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v83; // rax
  unsigned __int64 v84; // rdx
  unsigned __int64 v85; // rax
  void (__fastcall *v86)(GCGPhaseMain *const, unsigned __int64); // r15
  GCGSkillLogic *SkillLogic; // r15
  GCGSkillLogic *v89; // r15
  signed int ActionMgr; // r15d
  std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v91; // rax
  unsigned __int64 v92; // rax
  void (__fastcall *v93)(GCGPhaseMain *const, unsigned __int64); // r15
  GCGPhaseMgr *PhaseMgr; // rax
  signed int v95; // r15d
  std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v96; // rax
  int v97; // r15d
  unsigned __int64 v98; // rax
  void (__fastcall *v99)(GCGPhaseMain *const, unsigned __int64); // r15
  int32_t result; // eax
  bool is_set_skill_param; // [rsp+27h] [rbp-269h]
  GCGTriggerType post_trigger; // [rsp+28h] [rbp-268h]
  proto::GCGControllerValue winner; // [rsp+2Ch] [rbp-264h]
  unsigned __int64 val; // [rsp+30h] [rbp-260h] BYREF
  GCGField *field; // [rsp+38h] [rbp-258h]
  GCGField *field_0; // [rsp+40h] [rbp-250h]
  GCGField *field_1; // [rsp+48h] [rbp-248h]
  std::shared_ptr<GCGSkillUseParam> __r; // [rsp+50h] [rbp-240h] BYREF
  std::shared_ptr<GCGSkillUseParam> v109; // [rsp+60h] [rbp-230h] BYREF
  std::shared_ptr<GCGSkillUseParam> v110; // [rsp+70h] [rbp-220h] BYREF
  std::tuple<int,std::shared_ptr<GCGActionBase> > __in; // [rsp+80h] [rbp-210h] BYREF
  std::tuple<int,std::shared_ptr<GCGActionBase> > v112; // [rsp+A0h] [rbp-1F0h] BYREF
  std::tuple<int,std::shared_ptr<GCGActionBase> > v113; // [rsp+C0h] [rbp-1D0h] BYREF
  std::tuple<int,std::shared_ptr<GCGActionBase> > v114; // [rsp+E0h] [rbp-1B0h] BYREF
  std::tuple<int,std::shared_ptr<GCGActionBase> > v115; // [rsp+100h] [rbp-190h] BYREF
  common::milog::MiLogStream v116; // [rsp+120h] [rbp-170h] BYREF
  common::milog::MiLogStream v117; // [rsp+140h] [rbp-150h] BYREF
  char v118[304]; // [rsp+160h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v118;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 4 6 ret:92 48 4 15 target_guid:195 64 8 24 cost_card_begin_iter:189 96 16 13 action_ptr:81 "
                        "128 16 28 trigger_windows_param_ptr:84 160 16 23 after_op_action_ptr:305 192 16 29 before_next_o"
                        "p_action_ptr:320 224 16 13 skill_ptr:126";
  *(_QWORD *)(v3 + 16) = GCGPhaseMain::handleOperation;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -202178560;
  if ( std::operator==<GCGOperationBase>(p_operation_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v117,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/phase/gcg_phase_main.cpp",
      "handleOperation",
      77);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v117,
      (const char (*)[36])"[GCG_RET] operation_ptr is nullptr.");
    common::milog::MiLogStream::~MiLogStream(&v117);
    v2 = -1;
    goto LABEL_182;
  }
  post_trigger = GCG_TRIGGER_INVALID;
  std::shared_ptr<GCGActionBase>::shared_ptr((std::shared_ptr<GCGActionBase> *const)(v3 + 96), 0LL);
  std::shared_ptr<GCGSkillUseParam>::shared_ptr((std::shared_ptr<GCGSkillUseParam> *const)(v3 + 128), 0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  GCGGameMode::resetSkillTriggerVars(this->game_mode_);
  is_set_skill_param = 0;
  *(_DWORD *)(v3 + 32) = -1;
  v6 = std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_operation_ptr);
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v6);
  v7 = (unsigned __int64)(v6->_vptr_GCGOperationBase + 2);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v6->_vptr_GCGOperationBase + 2);
  switch ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v7)(v6) )
  {
    case 3u:
      std::dynamic_pointer_cast<GCGOperationOnStageSelect,GCGOperationBase>((const std::shared_ptr<GCGOperationBase> *)(v3 + 160));
      if ( std::operator==<GCGOperationOnStageSelect>(
             (const std::shared_ptr<GCGOperationOnStageSelect> *)(v3 + 160),
             0LL) )
      {
        common::milog::MiLogStream::create(
          &v117,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/phase/gcg_phase_main.cpp",
          "handleOperation",
          243);
        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
          &v117,
          (const char (*)[36])"[GCG_RET] operation ptr is nullptr.");
        common::milog::MiLogStream::~MiLogStream(&v117);
        v2 = 12001;
        v67 = 0;
      }
      else
      {
        *(_DWORD *)(v3 + 48) = 0;
        v68 = std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        GCGPhaseMain::selectOnstage(&v115, this, v68, (uint32_t *)(v3 + 48));
        std::tie<int,std::shared_ptr<GCGActionBase>>(
          (int *)(v3 + 224),
          (std::shared_ptr<GCGActionBase> *)(v3 + 32),
          (int *)(v3 + 96),
          (std::shared_ptr<GCGActionBase> *)(v3 + 32));
        std::tuple<int &,std::shared_ptr<GCGActionBase> &>::operator=<int,std::shared_ptr<GCGActionBase>>(
          (std::tuple<int&,std::shared_ptr<GCGActionBase>&> *const)(v3 + 224),
          &v115);
        std::tuple<int,std::shared_ptr<GCGActionBase>>::~tuple(&v115);
        if ( std::operator==<GCGActionBase>((const std::shared_ptr<GCGActionBase> *)(v3 + 96), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v117,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/phase/gcg_phase_main.cpp",
            "handleOperation",
            250);
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            &v117,
            (const char (*)[33])"[GCG_RET] action_ptr is nullptr.");
          common::milog::MiLogStream::~MiLogStream(&v117);
          v2 = *(_DWORD *)(v3 + 32);
          v67 = 0;
        }
        else
        {
          post_trigger = GCG_TRIGGER_ACTION_CHANGE_CHARACTER_POST;
          common::tools::perf::make_shared<GCGSkillUseParam>();
          std::shared_ptr<GCGSkillUseParam>::operator=((std::shared_ptr<GCGSkillUseParam> *const)(v3 + 128), &v110);
          std::shared_ptr<GCGSkillUseParam>::~shared_ptr(&v110);
          if ( std::operator==<GCGSkillUseParam>((const std::shared_ptr<GCGSkillUseParam> *)(v3 + 128), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v117,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/card_game/phase/gcg_phase_main.cpp",
              "handleOperation",
              259);
            common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              &v117,
              (const char (*)[37])"trigger_windows_param_ptr is nullptr");
            common::milog::MiLogStream::~MiLogStream(&v117);
            v2 = -1;
            v67 = 0;
          }
          else
          {
            v69 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            if ( *(_BYTE *)(((unsigned __int64)&v69->trigger_type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v69->trigger_type >> 3) + 0x7FFF8000) <= 3 )
            {
              v69 = (std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v69->trigger_type);
            }
            v69->trigger_type = GCG_TRIGGER_ACTION_CHANGE_CHARACTER_POST;
            v70 = std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
            if ( *(_BYTE *)(((unsigned __int64)&v70->controller_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v70->controller_id >> 3) + 0x7FFF8000) <= 3 )
            {
              v70 = (std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v70->controller_id);
            }
            controller_id = v70->controller_id;
            v72 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            if ( *(_BYTE *)(((unsigned __int64)&v72->controller_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v72->controller_id >> 3) + 0x7FFF8000) <= 3 )
            {
              v72 = (std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v72->controller_id);
            }
            v72->controller_id = controller_id;
            if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->game_mode_);
            Duel = GCGGameMode::getDuel(this->game_mode_);
            v74 = std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
            if ( *(_BYTE *)(((unsigned __int64)&v74->controller_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v74->controller_id >> 3) + 0x7FFF8000) <= 3 )
            {
              v74 = (std::__shared_ptr_access<GCGOperationOnStageSelect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v74->controller_id);
            }
            field_1 = GCGDuel::getField(Duel, v74->controller_id);
            GCGField::getCharacterZone(field_1);
            GCGCharacterZone::getOnStageCard((GCGCharacterZone *const)(v3 + 192));
            v75 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            std::shared_ptr<GCGCard>::operator=(&v75->source_card_ptr, (std::shared_ptr<GCGCard> *)(v3 + 192));
            std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 192));
            if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->game_mode_);
            CardMgr = GCGGameMode::getCardMgr(this->game_mode_);
            GCGCardMgr::findCard((GCGCardMgr *const)(v3 + 224), CardMgr, *(_DWORD *)(v3 + 48));
            if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v3 + 224), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v117,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/card_game/phase/gcg_phase_main.cpp",
                "handleOperation",
                269);
              common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                &v117,
                (const char (*)[27])"target_card_ptr is nullptr");
              common::milog::MiLogStream::~MiLogStream(&v117);
              v2 = -1;
              v77 = 0;
            }
            else
            {
              v78 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              std::shared_ptr<GCGCard>::operator=(&v78->target_card_ptr, (const std::shared_ptr<GCGCard> *)(v3 + 224));
              is_set_skill_param = 1;
              v77 = 1;
            }
            std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 224));
            v67 = v77 != 0;
          }
        }
      }
      std::shared_ptr<GCGOperationOnStageSelect>::~shared_ptr((std::shared_ptr<GCGOperationOnStageSelect> *const)(v3 + 160));
      if ( v67 )
        goto LABEL_131;
      goto LABEL_181;
    case 5u:
      std::dynamic_pointer_cast<GCGOperationAttack,GCGOperationBase>((const std::shared_ptr<GCGOperationBase> *)(v3 + 160));
      if ( std::operator==<GCGOperationAttack>((const std::shared_ptr<GCGOperationAttack> *)(v3 + 160), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v117,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/phase/gcg_phase_main.cpp",
          "handleOperation",
          108);
        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
          &v117,
          (const char (*)[36])"[GCG_RET] operation ptr is nullptr.");
        common::milog::MiLogStream::~MiLogStream(&v117);
        v2 = 12001;
        v10 = 0;
      }
      else
      {
        v11 = std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        GCGPhaseMain::attack(&__in, this, v11);
        std::tie<int,std::shared_ptr<GCGActionBase>>(
          (int *)(v3 + 224),
          (std::shared_ptr<GCGActionBase> *)(v3 + 32),
          (int *)(v3 + 96),
          (std::shared_ptr<GCGActionBase> *)(v3 + 32));
        std::tuple<int &,std::shared_ptr<GCGActionBase> &>::operator=<int,std::shared_ptr<GCGActionBase>>(
          (std::tuple<int&,std::shared_ptr<GCGActionBase>&> *const)(v3 + 224),
          &__in);
        std::tuple<int,std::shared_ptr<GCGActionBase>>::~tuple(&__in);
        if ( std::operator==<GCGActionBase>((const std::shared_ptr<GCGActionBase> *)(v3 + 96), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v117,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/phase/gcg_phase_main.cpp",
            "handleOperation",
            114);
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            &v117,
            (const char (*)[33])"[GCG_RET] action_ptr is nullptr.");
          common::milog::MiLogStream::~MiLogStream(&v117);
          v2 = *(_DWORD *)(v3 + 32);
          v10 = 0;
        }
        else
        {
          post_trigger = GCG_TRIGGER_ACTION_POST;
          if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->game_mode_);
          v12 = GCGGameMode::getDuel(this->game_mode_);
          v13 = std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
          if ( *(_BYTE *)(((unsigned __int64)&v13->controller_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v13->controller_id >> 3) + 0x7FFF8000) <= 3 )
          {
            v13 = (std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v13->controller_id);
          }
          v14 = GCGDuel::getField(v12, v13->controller_id);
          GCGField::getCharacterZone(v14);
          GCGCharacterZone::getOnStageCard((GCGCharacterZone *const)(v3 + 192));
          if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v3 + 192), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v117,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/card_game/phase/gcg_phase_main.cpp",
              "handleOperation",
              123);
            common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v117,
              (const char (*)[35])"[GCG_RET] onstage card is nullptr.");
            common::milog::MiLogStream::~MiLogStream(&v117);
          }
          else
          {
            v15 = (unsigned int)std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
            p_skill_id = &std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160))->skill_id;
            if ( *(_BYTE *)(((unsigned __int64)p_skill_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_skill_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_skill_id >> 3)
                                                                           + 0x7FFF8000) )
            {
              __asan_report_load4(p_skill_id);
            }
            GCGCard::getSkill((GCGCard *const)(v3 + 224), v15);
            if ( std::operator==<GCGSkill>((const std::shared_ptr<GCGSkill> *)(v3 + 224), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v116,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/card_game/phase/gcg_phase_main.cpp",
                "handleOperation",
                130);
              v17 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                      &v116,
                      (const char (*)[52])"[GCG_RET] on stage character get skill fail. card: ");
              v18 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
              GCGCard::getDesc[abi:cxx11]((std::string *)&v117, v18);
              v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, (const std::string *)&v117);
              v20 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v19,
                      (const char (*)[12])" skill_id: ");
              v21 = std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &v21->skill_id);
              std::string::~string(&v117);
              common::milog::MiLogStream::~MiLogStream(&v116);
            }
            else
            {
              common::tools::perf::make_shared<GCGSkillUseParam>();
              std::shared_ptr<GCGSkillUseParam>::operator=((std::shared_ptr<GCGSkillUseParam> *const)(v3 + 128), &__r);
              std::shared_ptr<GCGSkillUseParam>::~shared_ptr(&__r);
              v22 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              if ( *(_BYTE *)(((unsigned __int64)&v22->trigger_type >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v22->trigger_type >> 3) + 0x7FFF8000) <= 3 )
              {
                v22 = (std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v22->trigger_type);
              }
              v22->trigger_type = GCG_TRIGGER_ACTION_POST;
              v23 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              std::shared_ptr<GCGCard>::operator=(&v23->source_card_ptr, (const std::shared_ptr<GCGCard> *)(v3 + 192));
              v24 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              std::shared_ptr<GCGSkill>::operator=(&v24->skill_ptr, (const std::shared_ptr<GCGSkill> *)(v3 + 224));
              v25 = std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
              if ( *(_BYTE *)(((unsigned __int64)&v25->controller_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v25->controller_id >> 3) + 0x7FFF8000) <= 3 )
              {
                v25 = (std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v25->controller_id);
              }
              v26 = v25->controller_id;
              v27 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              if ( *(_BYTE *)(((unsigned __int64)&v27->controller_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v27->controller_id >> 3) + 0x7FFF8000) <= 3 )
              {
                v27 = (std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v27->controller_id);
              }
              v27->controller_id = v26;
              is_set_skill_param = 1;
            }
            std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v3 + 224));
          }
          std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 192));
          v10 = 1;
        }
      }
      std::shared_ptr<GCGOperationAttack>::~shared_ptr((std::shared_ptr<GCGOperationAttack> *const)(v3 + 160));
      if ( v10 )
        goto LABEL_131;
      goto LABEL_181;
    case 6u:
      std::dynamic_pointer_cast<GCGOperationPlayCard,GCGOperationBase>((const std::shared_ptr<GCGOperationBase> *)(v3 + 160));
      if ( std::operator==<GCGOperationPlayCard>((const std::shared_ptr<GCGOperationPlayCard> *)(v3 + 160), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v117,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/phase/gcg_phase_main.cpp",
          "handleOperation",
          212);
        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
          &v117,
          (const char (*)[36])"[GCG_RET] operation ptr is nullptr.");
        common::milog::MiLogStream::~MiLogStream(&v117);
        v2 = 12001;
        v51 = 0;
      }
      else
      {
        v52 = std::__shared_ptr_access<GCGOperationPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGOperationPlayCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        GCGPhaseMain::playCard(&v114, this, v52);
        std::tie<int,std::shared_ptr<GCGActionBase>>(
          (int *)(v3 + 224),
          (std::shared_ptr<GCGActionBase> *)(v3 + 32),
          (int *)(v3 + 96),
          (std::shared_ptr<GCGActionBase> *)(v3 + 32));
        std::tuple<int &,std::shared_ptr<GCGActionBase> &>::operator=<int,std::shared_ptr<GCGActionBase>>(
          (std::tuple<int&,std::shared_ptr<GCGActionBase>&> *const)(v3 + 224),
          &v114);
        std::tuple<int,std::shared_ptr<GCGActionBase>>::~tuple(&v114);
        if ( std::operator==<GCGActionBase>((const std::shared_ptr<GCGActionBase> *)(v3 + 96), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v117,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/phase/gcg_phase_main.cpp",
            "handleOperation",
            218);
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            &v117,
            (const char (*)[33])"[GCG_RET] action_ptr is nullptr.");
          common::milog::MiLogStream::~MiLogStream(&v117);
          v2 = *(_DWORD *)(v3 + 32);
          v51 = 0;
        }
        else
        {
          post_trigger = GCG_TRIGGER_ACTION_PAY_CARD_POST;
          if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->game_mode_);
          v53 = GCGGameMode::getDuel(this->game_mode_);
          v54 = std::__shared_ptr_access<GCGOperationPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationPlayCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
          if ( *(_BYTE *)(((unsigned __int64)&v54->controller_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v54->controller_id >> 3) + 0x7FFF8000) <= 3 )
          {
            v54 = (std::__shared_ptr_access<GCGOperationPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v54->controller_id);
          }
          field_0 = GCGDuel::getField(v53, v54->controller_id);
          HandZone = (unsigned int)GCGField::getHandZone(field_0);
          p_card_guid = &std::__shared_ptr_access<GCGOperationPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationPlayCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160))->card_guid;
          if ( *(_BYTE *)(((unsigned __int64)p_card_guid >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_card_guid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_card_guid >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load4(p_card_guid);
          }
          GCGCardZone::findCard((GCGCardZone *const)(v3 + 192), HandZone);
          if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v3 + 192), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v117,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/card_game/phase/gcg_phase_main.cpp",
              "handleOperation",
              228);
            v57 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    &v117,
                    (const char (*)[39])"[GCG_RET] can't find card. card_guid: ");
            v58 = std::__shared_ptr_access<GCGOperationPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationPlayCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
            v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v57, &v58->card_guid);
            v60 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    v59,
                    (const char (*)[17])" controller_id: ");
            v61 = std::__shared_ptr_access<GCGOperationPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationPlayCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
            common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
              v60,
              &v61->controller_id);
            common::milog::MiLogStream::~MiLogStream(&v117);
          }
          else
          {
            common::tools::perf::make_shared<GCGSkillUseParam>();
            std::shared_ptr<GCGSkillUseParam>::operator=(
              (std::shared_ptr<GCGSkillUseParam> *const)(v3 + 128),
              (std::shared_ptr<GCGSkillUseParam> *)(v3 + 224));
            std::shared_ptr<GCGSkillUseParam>::~shared_ptr((std::shared_ptr<GCGSkillUseParam> *const)(v3 + 224));
            v62 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            if ( *(_BYTE *)(((unsigned __int64)&v62->trigger_type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v62->trigger_type >> 3) + 0x7FFF8000) <= 3 )
            {
              v62 = (std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v62->trigger_type);
            }
            v62->trigger_type = GCG_TRIGGER_ACTION_PAY_CARD_POST;
            v63 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            std::shared_ptr<GCGCard>::operator=(&v63->source_card_ptr, (const std::shared_ptr<GCGCard> *)(v3 + 192));
            v64 = std::__shared_ptr_access<GCGOperationPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationPlayCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
            if ( *(_BYTE *)(((unsigned __int64)&v64->controller_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v64->controller_id >> 3) + 0x7FFF8000) <= 3 )
            {
              v64 = (std::__shared_ptr_access<GCGOperationPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v64->controller_id);
            }
            v65 = v64->controller_id;
            v66 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            if ( *(_BYTE *)(((unsigned __int64)&v66->controller_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v66->controller_id >> 3) + 0x7FFF8000) <= 3 )
            {
              v66 = (std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v66->controller_id);
            }
            v66->controller_id = v65;
            is_set_skill_param = 1;
          }
          std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 192));
          v51 = 1;
        }
      }
      std::shared_ptr<GCGOperationPlayCard>::~shared_ptr((std::shared_ptr<GCGOperationPlayCard> *const)(v3 + 160));
      if ( v51 )
        goto LABEL_131;
      goto LABEL_181;
    case 7u:
      std::dynamic_pointer_cast<GCGOperationPass,GCGOperationBase>((const std::shared_ptr<GCGOperationBase> *)(v3 + 192));
      if ( std::operator==<GCGOperationPass>((const std::shared_ptr<GCGOperationPass> *)(v3 + 192), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v117,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/phase/gcg_phase_main.cpp",
          "handleOperation",
          146);
        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
          &v117,
          (const char (*)[36])"[GCG_RET] operation ptr is nullptr.");
        common::milog::MiLogStream::~MiLogStream(&v117);
        v2 = 12001;
        v28 = 0;
      }
      else
      {
        v29 = std::__shared_ptr_access<GCGOperationPass,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGOperationPass,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
        GCGPhaseMain::pass(&v112, this, v29);
        std::tie<int,std::shared_ptr<GCGActionBase>>(
          (int *)(v3 + 224),
          (std::shared_ptr<GCGActionBase> *)(v3 + 32),
          (int *)(v3 + 96),
          (std::shared_ptr<GCGActionBase> *)(v3 + 32));
        std::tuple<int &,std::shared_ptr<GCGActionBase> &>::operator=<int,std::shared_ptr<GCGActionBase>>(
          (std::tuple<int&,std::shared_ptr<GCGActionBase>&> *const)(v3 + 224),
          &v112);
        std::tuple<int,std::shared_ptr<GCGActionBase>>::~tuple(&v112);
        if ( std::operator==<GCGActionBase>((const std::shared_ptr<GCGActionBase> *)(v3 + 96), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v117,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/phase/gcg_phase_main.cpp",
            "handleOperation",
            152);
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            &v117,
            (const char (*)[33])"[GCG_RET] action_ptr is nullptr.");
          common::milog::MiLogStream::~MiLogStream(&v117);
          v2 = *(_DWORD *)(v3 + 32);
          v28 = 0;
        }
        else
        {
          post_trigger = GCG_TRIGGER_ACTION_PASS_POST;
          v28 = 1;
        }
      }
      std::shared_ptr<GCGOperationPass>::~shared_ptr((std::shared_ptr<GCGOperationPass> *const)(v3 + 192));
      if ( v28 )
        goto LABEL_131;
      goto LABEL_181;
    case 8u:
      std::dynamic_pointer_cast<GCGOperationReboot,GCGOperationBase>((const std::shared_ptr<GCGOperationBase> *)(v3 + 192));
      if ( std::operator==<GCGOperationReboot>((const std::shared_ptr<GCGOperationReboot> *)(v3 + 192), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v117,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/phase/gcg_phase_main.cpp",
          "handleOperation",
          163);
        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
          &v117,
          (const char (*)[36])"[GCG_RET] operation ptr is nullptr.");
        common::milog::MiLogStream::~MiLogStream(&v117);
        v2 = 12001;
        v30 = 0;
      }
      else
      {
        v31 = std::__shared_ptr_access<GCGOperationReboot,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGOperationReboot,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
        GCGPhaseMain::reboot(&v113, this, v31);
        std::tie<int,std::shared_ptr<GCGActionBase>>(
          (int *)(v3 + 224),
          (std::shared_ptr<GCGActionBase> *)(v3 + 32),
          (int *)(v3 + 96),
          (std::shared_ptr<GCGActionBase> *)(v3 + 32));
        std::tuple<int &,std::shared_ptr<GCGActionBase> &>::operator=<int,std::shared_ptr<GCGActionBase>>(
          (std::tuple<int&,std::shared_ptr<GCGActionBase>&> *const)(v3 + 224),
          &v113);
        std::tuple<int,std::shared_ptr<GCGActionBase>>::~tuple(&v113);
        if ( std::operator==<GCGActionBase>((const std::shared_ptr<GCGActionBase> *)(v3 + 96), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v117,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/phase/gcg_phase_main.cpp",
            "handleOperation",
            169);
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            &v117,
            (const char (*)[33])"[GCG_RET] action_ptr is nullptr.");
          common::milog::MiLogStream::~MiLogStream(&v117);
          v2 = *(_DWORD *)(v3 + 32);
          v30 = 0;
        }
        else
        {
          post_trigger = GCG_TRIGGER_ACTION_REBOOT_POST;
          common::tools::perf::make_shared<GCGSkillUseParam>();
          std::shared_ptr<GCGSkillUseParam>::operator=((std::shared_ptr<GCGSkillUseParam> *const)(v3 + 128), &v109);
          std::shared_ptr<GCGSkillUseParam>::~shared_ptr(&v109);
          if ( std::operator==<GCGSkillUseParam>((const std::shared_ptr<GCGSkillUseParam> *)(v3 + 128), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v117,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/card_game/phase/gcg_phase_main.cpp",
              "handleOperation",
              178);
            common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              &v117,
              (const char (*)[37])"trigger_windows_param_ptr is nullptr");
            common::milog::MiLogStream::~MiLogStream(&v117);
            v2 = -1;
            v30 = 0;
          }
          else
          {
            v32 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            if ( *(_BYTE *)(((unsigned __int64)&v32->trigger_type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v32->trigger_type >> 3) + 0x7FFF8000) <= 3 )
            {
              v32 = (std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v32->trigger_type);
            }
            v32->trigger_type = GCG_TRIGGER_ACTION_REBOOT_POST;
            v33 = std::__shared_ptr_access<GCGOperationReboot,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationReboot,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
            if ( *(_BYTE *)(((unsigned __int64)&v33->controller_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v33->controller_id >> 3) + 0x7FFF8000) <= 3 )
            {
              v33 = (std::__shared_ptr_access<GCGOperationReboot,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v33->controller_id);
            }
            v34 = v33->controller_id;
            v35 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            if ( *(_BYTE *)(((unsigned __int64)&v35->controller_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v35->controller_id >> 3) + 0x7FFF8000) <= 3 )
            {
              v35 = (std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v35->controller_id);
            }
            v35->controller_id = v34;
            if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->game_mode_);
            v36 = GCGGameMode::getDuel(this->game_mode_);
            v37 = std::__shared_ptr_access<GCGOperationReboot,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationReboot,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
            if ( *(_BYTE *)(((unsigned __int64)&v37->controller_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v37->controller_id >> 3) + 0x7FFF8000) <= 3 )
            {
              v37 = (std::__shared_ptr_access<GCGOperationReboot,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v37->controller_id);
            }
            field = GCGDuel::getField(v36, v37->controller_id);
            v38 = std::__shared_ptr_access<GCGOperationReboot,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationReboot,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
            if ( std::set<unsigned int>::size(&v38->cost_card_set) == 1 )
            {
              v41 = std::__shared_ptr_access<GCGOperationReboot,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationReboot,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
              *(std::set<unsigned int>::iterator *)(v3 + 64) = std::set<unsigned int>::begin(&v41->cost_card_set);
              v42 = std::__shared_ptr_access<GCGOperationReboot,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationReboot,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
              val = (unsigned __int64)std::set<unsigned int>::end(&v42->cost_card_set)._M_node;
              if ( std::operator==(
                     (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 64),
                     (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&val) )
              {
                common::milog::MiLogStream::create(
                  &v117,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/card_game/phase/gcg_phase_main.cpp",
                  "handleOperation",
                  192);
                v43 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                        &v117,
                        (const char (*)[41])"cost_card_begin_iter is not valid, size:");
                v44 = std::__shared_ptr_access<GCGOperationReboot,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationReboot,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                val = std::set<unsigned int>::size(&v44->cost_card_set);
                common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v43, &val);
                common::milog::MiLogStream::~MiLogStream(&v117);
                v2 = -1;
                v30 = 0;
              }
              else
              {
                v45 = std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 64));
                v46 = v45;
                if ( *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v45 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v45);
                }
                *(_DWORD *)(v3 + 48) = *v46;
                v47 = (unsigned int)GCGField::getHandZone(field);
                GCGCardZone::findCard((GCGCardZone *const)(v3 + 224), v47);
                if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v3 + 224), 0LL) )
                {
                  common::milog::MiLogStream::create(
                    &v117,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/card_game/phase/gcg_phase_main.cpp",
                    "handleOperation",
                    199);
                  v48 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                          &v117,
                          (const char (*)[43])"played_card_ptr is not valid, target_guid:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v48,
                    (const unsigned int *)(v3 + 48));
                  common::milog::MiLogStream::~MiLogStream(&v117);
                  v2 = -1;
                  v49 = 0;
                }
                else
                {
                  v50 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                  std::shared_ptr<GCGCard>::operator=(
                    &v50->source_card_ptr,
                    (const std::shared_ptr<GCGCard> *)(v3 + 224));
                  is_set_skill_param = 1;
                  v49 = 1;
                }
                std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 224));
                v30 = v49 != 0;
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v117,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/card_game/phase/gcg_phase_main.cpp",
                "handleOperation",
                186);
              v39 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                      &v117,
                      (const char (*)[47])"reboot_ptr cost_card_set is valid, need 1 cur:");
              v40 = std::__shared_ptr_access<GCGOperationReboot,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationReboot,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
              val = std::set<unsigned int>::size(&v40->cost_card_set);
              common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v39, &val);
              common::milog::MiLogStream::~MiLogStream(&v117);
              v2 = -1;
              v30 = 0;
            }
          }
        }
      }
      std::shared_ptr<GCGOperationReboot>::~shared_ptr((std::shared_ptr<GCGOperationReboot> *const)(v3 + 192));
      if ( v30 )
        goto LABEL_131;
      goto LABEL_181;
    case 9u:
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      v8 = GCGGameMode::getDuel(this->game_mode_);
      v9 = std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_operation_ptr);
      if ( *(_BYTE *)(((unsigned __int64)&v9->controller_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v9->controller_id >> 3) + 0x7FFF8000) <= 3 )
      {
        v9 = (std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v9->controller_id);
      }
      winner = (unsigned int)GCGDuel::getOtherControllerId(v8, v9->controller_id);
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      GCGGameMode::toFinPhase(this->game_mode_, winner, GCG_END_REASON_SURRENDER);
      v2 = 0;
      goto LABEL_181;
    default:
      common::milog::MiLogStream::create(
        &v117,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/phase/gcg_phase_main.cpp",
        "handleOperation",
        279);
      v79 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v117,
              (const char (*)[30])"[GCG_RET] op type not match: ");
      v80 = std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_operation_ptr);
      if ( *(_BYTE *)(((unsigned __int64)v80 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v80);
      v81 = (unsigned __int64)(v80->_vptr_GCGOperationBase + 2);
      if ( *(_BYTE *)((v81 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v80->_vptr_GCGOperationBase + 2);
      *(_DWORD *)(v3 + 48) = (*(__int64 (__fastcall **)(std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v81)(v80);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v79, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v117);
      *(_DWORD *)(v3 + 32) = 12004;
LABEL_131:
      if ( !std::operator==<GCGActionBase>((const std::shared_ptr<GCGActionBase> *)(v3 + 96), 0LL) )
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v85 = (unsigned __int64)(this->_vptr_GCGPhaseBase + 5);
        if ( *(_BYTE *)((v85 >> 3) + 0x7FFF8000) )
          __asan_report_load8(this->_vptr_GCGPhaseBase + 5);
        v86 = *(void (__fastcall **)(GCGPhaseMain *const, unsigned __int64))v85;
        std::shared_ptr<GCGActionBase>::shared_ptr(
          (std::shared_ptr<GCGActionBase> *const)(v3 + 224),
          (const std::shared_ptr<GCGActionBase> *)(v3 + 96));
        v86(this, v3 + 224);
        std::shared_ptr<GCGActionBase>::~shared_ptr((std::shared_ptr<GCGActionBase> *const)(v3 + 224));
        if ( post_trigger )
        {
          if ( is_set_skill_param
            && std::operator==<GCGSkillUseParam>((const std::shared_ptr<GCGSkillUseParam> *)(v3 + 128), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v117,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/card_game/phase/gcg_phase_main.cpp",
              "handleOperation",
              295);
            common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
              &v117,
              (const char (*)[71])"[GCG_RET] trigger_windows_param_ptr is nullptr, which need not nullptr");
            common::milog::MiLogStream::~MiLogStream(&v117);
            v2 = -1;
            goto LABEL_181;
          }
          if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->game_mode_);
          SkillLogic = GCGGameMode::getSkillLogic(this->game_mode_);
          std::shared_ptr<GCGSkillUseParam>::shared_ptr(
            (std::shared_ptr<GCGSkillUseParam> *const)(v3 + 224),
            (const std::shared_ptr<GCGSkillUseParam> *)(v3 + 128));
          std::enable_shared_from_this<GCGPhaseBase>::shared_from_this((std::enable_shared_from_this<GCGPhaseBase> *const)(v3 + 192));
          GCGSkillLogic::trigger(
            SkillLogic,
            (GCGPhaseBasePtr *)(v3 + 192),
            post_trigger,
            (GCGSkillUseParamPtr *)(v3 + 224));
          std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v3 + 192));
          std::shared_ptr<GCGSkillUseParam>::~shared_ptr((std::shared_ptr<GCGSkillUseParam> *const)(v3 + 224));
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->game_mode_);
        v89 = GCGGameMode::getSkillLogic(this->game_mode_);
        std::shared_ptr<GCGSkillUseParam>::shared_ptr((std::shared_ptr<GCGSkillUseParam> *const)(v3 + 224), 0LL);
        std::enable_shared_from_this<GCGPhaseBase>::shared_from_this((std::enable_shared_from_this<GCGPhaseBase> *const)(v3 + 192));
        GCGSkillLogic::trigger(
          v89,
          (GCGPhaseBasePtr *)(v3 + 192),
          GCG_TRIGGER_PHASE_ONSTAGE_SETTLE_POST,
          (GCGSkillUseParamPtr *)(v3 + 224));
        std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v3 + 192));
        std::shared_ptr<GCGSkillUseParam>::~shared_ptr((std::shared_ptr<GCGSkillUseParam> *const)(v3 + 224));
        if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->game_mode_);
        ActionMgr = (unsigned int)GCGGameMode::getActionMgr(this->game_mode_);
        v91 = std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_operation_ptr);
        if ( *(_BYTE *)(((unsigned __int64)&v91->controller_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v91->controller_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v91->controller_id);
        }
        GCGActionMgr::createAction<GCGActionAfterOperation>(
          (GCGActionMgr *const)(v3 + 160),
          (GCGControllerValue)ActionMgr);
        if ( std::operator==<GCGActionAfterOperation>(0LL, (const std::shared_ptr<GCGActionAfterOperation> *)(v3 + 160)) )
        {
          common::milog::MiLogStream::create(
            &v117,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/card_game/phase/gcg_phase_main.cpp",
            "handleOperation",
            308);
          common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            &v117,
            (const char (*)[29])"[GCG_RET] createAction fail.");
          common::milog::MiLogStream::~MiLogStream(&v117);
          v2 = -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          v92 = (unsigned __int64)(this->_vptr_GCGPhaseBase + 5);
          if ( *(_BYTE *)((v92 >> 3) + 0x7FFF8000) )
            __asan_report_load8(this->_vptr_GCGPhaseBase + 5);
          v93 = *(void (__fastcall **)(GCGPhaseMain *const, unsigned __int64))v92;
          std::shared_ptr<GCGActionBase>::shared_ptr<GCGActionAfterOperation,void>(
            (std::shared_ptr<GCGActionBase> *const)(v3 + 224),
            (const std::shared_ptr<GCGActionAfterOperation> *)(v3 + 160));
          v93(this, v3 + 224);
          std::shared_ptr<GCGActionBase>::~shared_ptr((std::shared_ptr<GCGActionBase> *const)(v3 + 224));
          if ( GCGPhaseBase::isAllowControllerAllDone(this) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->game_mode_);
            PhaseMgr = GCGGameMode::getPhaseMgr(this->game_mode_);
            GCGPhaseMgr::toNextPhase(PhaseMgr);
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->game_mode_);
            v95 = (unsigned int)GCGGameMode::getActionMgr(this->game_mode_);
            v96 = std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_operation_ptr);
            if ( *(_BYTE *)(((unsigned __int64)&v96->controller_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v96->controller_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&v96->controller_id);
            }
            GCGActionMgr::createAction<ActionBeforeNextOperation>(
              (GCGActionMgr *const)(v3 + 192),
              (GCGControllerValue)v95);
            if ( std::operator==<ActionBeforeNextOperation>(
                   0LL,
                   (const std::shared_ptr<ActionBeforeNextOperation> *)(v3 + 192)) )
            {
              common::milog::MiLogStream::create(
                &v117,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/card_game/phase/gcg_phase_main.cpp",
                "handleOperation",
                323);
              common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v117,
                (const char (*)[29])"[GCG_RET] createAction fail.");
              common::milog::MiLogStream::~MiLogStream(&v117);
              v2 = -1;
              v97 = 0;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                __asan_report_load8(this);
              v98 = (unsigned __int64)(this->_vptr_GCGPhaseBase + 5);
              if ( *(_BYTE *)((v98 >> 3) + 0x7FFF8000) )
                __asan_report_load8(this->_vptr_GCGPhaseBase + 5);
              v99 = *(void (__fastcall **)(GCGPhaseMain *const, unsigned __int64))v98;
              std::shared_ptr<GCGActionBase>::shared_ptr<ActionBeforeNextOperation,void>(
                (std::shared_ptr<GCGActionBase> *const)(v3 + 224),
                (const std::shared_ptr<ActionBeforeNextOperation> *)(v3 + 192));
              v99(this, v3 + 224);
              std::shared_ptr<GCGActionBase>::~shared_ptr((std::shared_ptr<GCGActionBase> *const)(v3 + 224));
              v97 = 1;
            }
            std::shared_ptr<ActionBeforeNextOperation>::~shared_ptr((std::shared_ptr<ActionBeforeNextOperation> *const)(v3 + 192));
            if ( v97 != 1 )
              goto LABEL_180;
          }
          v2 = 0;
        }
LABEL_180:
        std::shared_ptr<GCGActionAfterOperation>::~shared_ptr((std::shared_ptr<GCGActionAfterOperation> *const)(v3 + 160));
        goto LABEL_181;
      }
      common::milog::MiLogStream::create(
        &v117,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/phase/gcg_phase_main.cpp",
        "handleOperation",
        286);
      v82 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v117,
              (const char (*)[33])"[GCG_RET] action_ptr is nullptr.");
      v83 = std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_operation_ptr);
      if ( *(_BYTE *)(((unsigned __int64)v83 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v83);
      v84 = (unsigned __int64)(v83->_vptr_GCGOperationBase + 2);
      if ( *(_BYTE *)((v84 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v83->_vptr_GCGOperationBase + 2);
      *(_DWORD *)(v3 + 48) = (*(__int64 (__fastcall **)(std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v84)(v83);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v82, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v117);
      v2 = *(_DWORD *)(v3 + 32);
LABEL_181:
      std::shared_ptr<GCGSkillUseParam>::~shared_ptr((std::shared_ptr<GCGSkillUseParam> *const)(v3 + 128));
      std::shared_ptr<GCGActionBase>::~shared_ptr((std::shared_ptr<GCGActionBase> *const)(v3 + 96));
LABEL_182:
      result = v2;
      if ( v118 == (char *)v3 )
      {
        *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
        *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
        *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
        *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
      }
      else
      {
        *(_QWORD *)v3 = 1172321806LL;
        *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
        *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
        *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
        *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
      }
      return result;
  }
};

// Line 332: range 000000000D78F650-000000000D78F691
GCGOperationBasePtr __cdecl GCGPhaseMain::defaultOperation(GCGPhaseMain *const this)
{
  GCGOperationBasePtr result; // rax
  std::shared_ptr<GCGOperationPass> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<GCGOperationPass>();
  std::shared_ptr<GCGOperationBase>::shared_ptr<GCGOperationPass,void>(
    (std::shared_ptr<GCGOperationBase> *const)this,
    &__r);
  std::shared_ptr<GCGOperationPass>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<GCGOperationBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 337: range 000000000D78F692-000000000D79097A
std::tuple<int,std::shared_ptr<GCGActionBase> > *__cdecl GCGPhaseMain::attack(
        std::tuple<int,std::shared_ptr<GCGActionBase> > *retstr,
        GCGPhaseMain *const this,
        const GCGOperationAttack *op)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  GCGField *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t v11; // ecx
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v18; // rax
  GCGSkillLogic *SkillLogic; // r14
  GCGSkill *v20; // rax
  std::map<data::GCGCostType,unsigned int>::mapped_type *v21; // rax
  int *v22; // rdx
  int v23; // eax
  bool v24; // r14
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  std::vector<proto::GCGDiceSideType> *DiceVec; // rax
  common::milog::MiLogStream *v29; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  int v34; // r14d
  uint32_t v35; // r14d
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  common::milog::MiLogStream *v37; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  signed int ActionMgr; // ecx
  GCGSkillLogic *v45; // rax
  uint32_t skill_id; // r14d
  std::__shared_ptr_access<GCGActionAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  std::__shared_ptr_access<GCGActionAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v48; // rax
  uint32_t v49; // r14d
  std::__shared_ptr_access<GCGActionAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rax
  GCGPhaseMain *v51; // rdx
  std::map<data::GCGCostType,unsigned int>::key_type __x; // [rsp+28h] [rbp-428h] BYREF
  int __a1; // [rsp+2Ch] [rbp-424h] BYREF
  __int64 __a2; // [rsp+30h] [rbp-420h] BYREF
  GCGDuel *duel; // [rsp+38h] [rbp-418h]
  GCGField *field; // [rsp+40h] [rbp-410h]
  GCGDiceZone *dice_zone; // [rsp+48h] [rbp-408h]
  std::tuple<int,std::nullptr_t> __in; // [rsp+50h] [rbp-400h] BYREF
  std::tuple<int,std::shared_ptr<GCGActionAttack> > v61; // [rsp+60h] [rbp-3F0h] BYREF
  common::milog::MiLogStream v62; // [rsp+80h] [rbp-3D0h] BYREF
  common::milog::MiLogStream v63; // [rsp+A0h] [rbp-3B0h] BYREF
  common::milog::MiLogStream v64; // [rsp+C0h] [rbp-390h] BYREF
  std::map<data::GCGCostType,unsigned int> p_need_cost_map; // [rsp+E0h] [rbp-370h] BYREF
  std::map<proto::GCGDiceSideType,unsigned int> p_dice_side_map; // [rsp+110h] [rbp-340h] BYREF
  char v67[784]; // [rsp+140h] [rbp-310h] BYREF

  v3 = (unsigned __int64)v67;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(736LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 4 15 cost_energy:367 48 16 19 source_card_ptr:339 80 16 13 skill_ptr:350 112 16 14 action_p"
                        "tr:394 144 48 19 select_dice_map:372 224 48 12 cost_map:373 304 368 16 skill_result:368";
  *(_QWORD *)(v3 + 16) = GCGPhaseMain::attack;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862726] = -218959118;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862741] = -202116109;
  v5[536862742] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  duel = GCGGameMode::getDuel(this->game_mode_);
  if ( *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&op->controller_id);
  }
  v6 = GCGDuel::getField(duel, op->controller_id);
  GCGField::getCharacterZone(v6);
  GCGCharacterZone::getOnStageCard((GCGCharacterZone *const)(v3 + 48));
  if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v3 + 48), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v64,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/phase/gcg_phase_main.cpp",
      "attack",
      342);
    v7 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v64,
           (const char (*)[49])"[GCG_RET] get onstage card fail. controller_id: ");
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
      v7,
      &op->controller_id);
    common::milog::MiLogStream::~MiLogStream(&v64);
    __a2 = 0LL;
    __a1 = -1;
    std::tuple<int,decltype(nullptr)>::tuple<int,decltype(nullptr),true>(&__in, &__a1, &__a2);
    std::tuple<int,std::shared_ptr<GCGActionBase>>::tuple<int,decltype(nullptr),true>(retstr, &__in);
  }
  else
  {
    v8 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
    if ( !GCGUtils::isCanAttack(v8) )
    {
      common::milog::MiLogStream::create(
        &v63,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/phase/gcg_phase_main.cpp",
        "attack",
        347);
      v9 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             &v63,
             (const char (*)[31])"[GCG_RET] is can attack fail. ");
      v10 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
      GCGCard::getDesc[abi:cxx11]((std::string *)&v64, v10);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, (const std::string *)&v64);
      std::string::~string(&v64);
      common::milog::MiLogStream::~MiLogStream(&v63);
      __a2 = 0LL;
      __a1 = 12010;
      std::tuple<proto::Retcode,decltype(nullptr)>::tuple<proto::Retcode,decltype(nullptr),true>(
        (std::tuple<proto::Retcode,std::nullptr_t> *const)&__in,
        (proto::Retcode *)&__a1,
        &__a2);
      std::tuple<int,std::shared_ptr<GCGActionBase>>::tuple<proto::Retcode,decltype(nullptr),true>(
        retstr,
        (std::tuple<proto::Retcode,std::nullptr_t> *)&__in);
    }
    else
    {
      v11 = (unsigned int)std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&op->skill_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)op + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&op->skill_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&op->skill_id);
      }
      GCGCard::getSkill((GCGCard *const)(v3 + 80), v11);
      if ( std::operator==<GCGSkill>((const std::shared_ptr<GCGSkill> *)(v3 + 80), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v63,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/phase/gcg_phase_main.cpp",
          "attack",
          353);
        v12 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                &v63,
                (const char (*)[52])"[GCG_RET] on stage character get skill fail. card: ");
        v13 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
        GCGCard::getDesc[abi:cxx11]((std::string *)&v64, v13);
        v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)&v64);
        v15 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v14, (const char (*)[12])" skill_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &op->skill_id);
        std::string::~string(&v64);
        common::milog::MiLogStream::~MiLogStream(&v63);
        __a2 = 0LL;
        __a1 = 12012;
        std::tuple<proto::Retcode,decltype(nullptr)>::tuple<proto::Retcode,decltype(nullptr),true>(
          (std::tuple<proto::Retcode,std::nullptr_t> *const)&__in,
          (proto::Retcode *)&__a1,
          &__a2);
        std::tuple<int,std::shared_ptr<GCGActionBase>>::tuple<proto::Retcode,decltype(nullptr),true>(
          retstr,
          (std::tuple<proto::Retcode,std::nullptr_t> *)&__in);
      }
      else
      {
        if ( *(char *)(((unsigned __int64)&op->is_auto_use >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&op->is_auto_use);
        if ( !op->is_auto_use
          && (v16 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80)),
              !GCGSkill::isActivelyUse(v16)) )
        {
          common::milog::MiLogStream::create(
            &v64,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/phase/gcg_phase_main.cpp",
            "attack",
            360);
          v18 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  &v64,
                  (const char (*)[38])"[GCG_RET] skill can't use. skill_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &op->skill_id);
          common::milog::MiLogStream::~MiLogStream(&v64);
          __a2 = 0LL;
          __a1 = 12013;
          std::tuple<proto::Retcode,decltype(nullptr)>::tuple<proto::Retcode,decltype(nullptr),true>(
            (std::tuple<proto::Retcode,std::nullptr_t> *const)&__in,
            (proto::Retcode *)&__a1,
            &__a2);
          std::tuple<int,std::shared_ptr<GCGActionBase>>::tuple<proto::Retcode,decltype(nullptr),true>(
            retstr,
            (std::tuple<proto::Retcode,std::nullptr_t> *)&__in);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&op->controller_id);
          }
          field = GCGDuel::getField(duel, op->controller_id);
          dice_zone = GCGField::getDiceZone(field);
          *(_DWORD *)(v3 + 32) = 0;
          GCGSkillResult::GCGSkillResult((GCGSkillResult *const)(v3 + 304));
          if ( *(char *)(((unsigned __int64)&op->is_auto_use >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&op->is_auto_use);
          if ( op->is_auto_use )
            goto LABEL_72;
          GCGDiceZone::getDiceSideMap(
            (std::map<proto::GCGDiceSideType,unsigned int> *)(v3 + 144),
            dice_zone,
            &op->cost_dice_set);
          if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->game_mode_);
          SkillLogic = GCGGameMode::getSkillLogic(this->game_mode_);
          v20 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
          GCGSkillLogic::getReviseSkillCost(
            (std::map<data::GCGCostType,unsigned int> *)(v3 + 224),
            SkillLogic,
            v20,
            (GCGSkillResult *)(v3 + 304));
          __x = GCG_COST_ENERGY;
          if ( std::map<data::GCGCostType,unsigned int>::count(
                 (const std::map<data::GCGCostType,unsigned int> *const)(v3 + 224),
                 &__x) )
          {
            __a1 = 1;
            v21 = std::map<data::GCGCostType,unsigned int>::operator[](
                    (std::map<data::GCGCostType,unsigned int> *const)(v3 + 224),
                    (std::map<data::GCGCostType,unsigned int>::key_type *)&__a1);
            v22 = (int *)v21;
            if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v21);
            }
            v23 = *v22;
          }
          else
          {
            v23 = 0;
          }
          *(_DWORD *)(v3 + 32) = v23;
          if ( !GCGDiceZone::isNoNeedCost(dice_zone)
            && (std::map<proto::GCGDiceSideType,unsigned int>::map(
                  &p_dice_side_map,
                  (const std::map<proto::GCGDiceSideType,unsigned int> *)(v3 + 144)),
                std::map<data::GCGCostType,unsigned int>::map(
                  &p_need_cost_map,
                  (const std::map<data::GCGCostType,unsigned int> *)(v3 + 224)),
                v24 = !GCGUtils::isDiceCostValid(&p_need_cost_map, &p_dice_side_map),
                std::map<data::GCGCostType,unsigned int>::~map(&p_need_cost_map),
                std::map<proto::GCGDiceSideType,unsigned int>::~map(&p_dice_side_map),
                v24) )
          {
            common::milog::MiLogStream::create(
              &v62,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/card_game/phase/gcg_phase_main.cpp",
              "attack",
              379);
            v25 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                    &v62,
                    (const char (*)[49])"[GCG_RET] check dice cost invalid. select dice: ");
            v26 = common::milog::MiLogStream::operator<<<unsigned int>(v25, &op->cost_dice_set);
            v27 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v26,
                    (const char (*)[12])" dice pool:");
            DiceVec = GCGDiceZone::getDiceVec(dice_zone);
            v29 = common::milog::MiLogStream::operator<<<proto::GCGDiceSideType>(v27, DiceVec);
            v30 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
            GCGCard::getDesc[abi:cxx11]((std::string *)&v63, v30);
            v31 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v29, (const std::string *)&v63);
            v32 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v31, (const char (*)[9])" skill: ");
            v33 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
            GCGSkill::getName[abi:cxx11]((std::string *)&v64, v33);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v32, (const std::string *)&v64);
            std::string::~string(&v64);
            std::string::~string(&v63);
            common::milog::MiLogStream::~MiLogStream(&v62);
            __a2 = 0LL;
            __a1 = 12006;
            std::tuple<proto::Retcode,decltype(nullptr)>::tuple<proto::Retcode,decltype(nullptr),true>(
              (std::tuple<proto::Retcode,std::nullptr_t> *const)&__in,
              (proto::Retcode *)&__a1,
              &__a2);
            std::tuple<int,std::shared_ptr<GCGActionBase>>::tuple<proto::Retcode,decltype(nullptr),true>(
              retstr,
              (std::tuple<proto::Retcode,std::nullptr_t> *)&__in);
            v34 = 0;
          }
          else if ( *(_DWORD *)(v3 + 32)
                 && (v35 = *(_DWORD *)(v3 + 32),
                     v36 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48)),
                     !GCGUtils::isEnergyCostValid(v36, v35)) )
          {
            common::milog::MiLogStream::create(
              &v63,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/card_game/phase/gcg_phase_main.cpp",
              "attack",
              387);
            v37 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                    &v63,
                    (const char (*)[36])"[GCG_RET] energy not enough. card: ");
            v38 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
            GCGCard::getDesc[abi:cxx11]((std::string *)&v64, v38);
            v39 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v37, (const std::string *)&v64);
            v40 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v39, (const char (*)[9])" token: ");
            v41 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
            __a1 = GCGCard::getToken(v41, GCG_TOKEN_ENERGY);
            v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v40,
                    (const unsigned int *)&__a1);
            v43 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v42, (const char (*)[8])" need: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, (const unsigned int *)(v3 + 32));
            std::string::~string(&v64);
            common::milog::MiLogStream::~MiLogStream(&v63);
            __a2 = 0LL;
            __a1 = 12014;
            std::tuple<proto::Retcode,decltype(nullptr)>::tuple<proto::Retcode,decltype(nullptr),true>(
              (std::tuple<proto::Retcode,std::nullptr_t> *const)&__in,
              (proto::Retcode *)&__a1,
              &__a2);
            std::tuple<int,std::shared_ptr<GCGActionBase>>::tuple<proto::Retcode,decltype(nullptr),true>(
              retstr,
              (std::tuple<proto::Retcode,std::nullptr_t> *)&__in);
            v34 = 0;
          }
          else
          {
            v34 = 1;
          }
          std::map<data::GCGCostType,unsigned int>::~map((std::map<data::GCGCostType,unsigned int> *const)(v3 + 224));
          std::map<proto::GCGDiceSideType,unsigned int>::~map((std::map<proto::GCGDiceSideType,unsigned int> *const)(v3 + 144));
          if ( v34 == 1 )
          {
LABEL_72:
            if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->game_mode_);
            ActionMgr = (unsigned int)GCGGameMode::getActionMgr(this->game_mode_);
            if ( *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&op->controller_id);
            }
            GCGActionMgr::createAction<GCGActionAttack>((GCGActionMgr *const)(v3 + 112), (GCGControllerValue)ActionMgr);
            if ( std::operator==<GCGActionAttack>((const std::shared_ptr<GCGActionAttack> *)(v3 + 112), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v64,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/card_game/phase/gcg_phase_main.cpp",
                "attack",
                397);
              common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v64,
                (const char (*)[29])"[GCG_RET] createAction fail.");
              common::milog::MiLogStream::~MiLogStream(&v64);
              __a2 = 0LL;
              __a1 = -1;
              std::tuple<int,decltype(nullptr)>::tuple<int,decltype(nullptr),true>(&__in, &__a1, &__a2);
              std::tuple<int,std::shared_ptr<GCGActionBase>>::tuple<int,decltype(nullptr),true>(retstr, &__in);
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->game_mode_);
              v45 = GCGGameMode::getSkillLogic(this->game_mode_);
              GCGSkillLogic::refreshPreviewSkillUse(v45, (GCGSkillResult *)(v3 + 304));
              if ( *(_BYTE *)(((unsigned __int64)&op->skill_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)op + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&op->skill_id >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(&op->skill_id);
              }
              skill_id = op->skill_id;
              v47 = std::__shared_ptr_access<GCGActionAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
              if ( *(_BYTE *)(((unsigned __int64)&v47->skill_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v47->skill_id >> 3) + 0x7FFF8000) <= 3 )
              {
                v47 = (std::__shared_ptr_access<GCGActionAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v47->skill_id);
              }
              v47->skill_id = skill_id;
              if ( !GCGDiceZone::isNoNeedCost(dice_zone) )
              {
                v48 = std::__shared_ptr_access<GCGActionAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
                std::set<unsigned int>::operator=(&v48->cost_dice_set, &op->cost_dice_set);
              }
              v49 = *(_DWORD *)(v3 + 32);
              v50 = std::__shared_ptr_access<GCGActionAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
              if ( *(_BYTE *)(((unsigned __int64)&v50->cost_energy >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v50->cost_energy >> 3) + 0x7FFF8000) <= 3 )
              {
                v50 = (std::__shared_ptr_access<GCGActionAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v50->cost_energy);
              }
              v50->cost_energy = v49;
              v51 = this;
              if ( *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&op->controller_id);
              }
              GCGPhaseBase::markControllerDone(v51, op->controller_id);
              __a1 = 0;
              std::tuple<int,std::shared_ptr<GCGActionAttack>>::tuple<int,std::shared_ptr<GCGActionAttack>&,true>(
                &v61,
                &__a1,
                (std::shared_ptr<GCGActionAttack> *)(v3 + 112));
              std::tuple<int,std::shared_ptr<GCGActionBase>>::tuple<int,std::shared_ptr<GCGActionAttack>,true>(
                retstr,
                &v61);
              std::tuple<int,std::shared_ptr<GCGActionAttack>>::~tuple(&v61);
            }
            std::shared_ptr<GCGActionAttack>::~shared_ptr((std::shared_ptr<GCGActionAttack> *const)(v3 + 112));
          }
          GCGSkillResult::~GCGSkillResult((GCGSkillResult *const)(v3 + 304));
        }
      }
      std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v3 + 80));
    }
  }
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 48));
  if ( v67 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
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
  return retstr;
};

// Line 413: range 000000000D79097C-000000000D792288
std::tuple<int,std::shared_ptr<GCGActionBase> > *__cdecl GCGPhaseMain::playCard(
        std::tuple<int,std::shared_ptr<GCGActionBase> > *retstr,
        GCGPhaseMain *const this,
        const GCGOperationPlayCard *op)
{
  unsigned __int64 p_name; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  GCGDuel *Duel; // rcx
  uint32_t HandZone; // ecx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  GCGSkillLogic *SkillLogic; // r14
  GCGCard *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  const std::vector<data::GCGChooseExcelConfig> *ChooseConfig; // rdi
  GCGControllerValue controller_id; // esi
  char v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  GCGDiceZone *DiceZone; // rax
  GCGSkillLogic *v26; // r15
  GCGCard *v27; // rax
  std::map<data::GCGCostType,unsigned int>::mapped_type *v28; // rax
  int *v29; // rdx
  int v30; // eax
  bool v31; // r14
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // r14
  GCGDiceZone *v35; // rax
  std::vector<proto::GCGDiceSideType> *DiceVec; // rax
  common::milog::MiLogStream *v37; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  std::vector<unsigned int>::const_reference v39; // rax
  _DWORD *v40; // rdx
  GCGCardMgr *CardMgr; // rax
  common::milog::MiLogStream *v42; // rax
  int v43; // r14d
  uint32_t v44; // r14d
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  common::milog::MiLogStream *v46; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v53; // rax
  uint32_t *v54; // rdx
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v55; // rax
  uint32_t CardType; // eax
  GCGCardZone *v57; // r14
  char v58; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v59; // rax
  uint32_t v60; // ecx
  char v61; // r15
  common::milog::MiLogStream *v62; // r14
  std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v63; // rax
  signed int ActionMgr; // ecx
  GCGSkillLogic *v65; // rax
  uint32_t card_guid; // r14d
  std::__shared_ptr_access<GCGActionPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v67; // rax
  std::__shared_ptr_access<GCGActionPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v68; // rax
  std::__shared_ptr_access<GCGActionPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v69; // rax
  uint32_t v70; // r14d
  std::__shared_ptr_access<GCGActionPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v71; // rax
  uint32_t v72; // r14d
  std::__shared_ptr_access<GCGActionPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v73; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v74; // rax
  GCGPhaseMain *v75; // rdx
  proto::Retcode __a1; // [rsp+20h] [rbp-420h] BYREF
  uint32_t param; // [rsp+24h] [rbp-41Ch]
  uint32_t replace_card_guid; // [rsp+28h] [rbp-418h]
  int32_t ret; // [rsp+2Ch] [rbp-414h]
  __int64 __a2; // [rsp+30h] [rbp-410h] BYREF
  GCGField *field; // [rsp+38h] [rbp-408h]
  GCGCardZone __in[3]; // [rsp+40h] [rbp-400h] BYREF

  p_name = (unsigned __int64)&__in[0].name_;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(768LL);
    if ( v4 )
      p_name = v4;
  }
  *(_QWORD *)p_name = 1102416563LL;
  *(_QWORD *)(p_name + 8) = "8 48 4 15 cost_energy:439 64 4 13 card_guid:453 80 16 12 card_ptr:416 112 16 12 zone_ptr:472"
                            " 144 16 14 action_ptr:499 176 48 19 select_dice_map:436 256 48 12 cost_map:438 336 368 16 skill_result:437";
  *(_QWORD *)(p_name + 16) = GCGPhaseMain::playCard;
  v5 = (_DWORD *)(p_name >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862727] = -218959118;
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862742] = -202116109;
  v5[536862743] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  Duel = GCGGameMode::getDuel(this->game_mode_);
  if ( *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&op->controller_id);
  }
  field = GCGDuel::getField(Duel, op->controller_id);
  HandZone = (unsigned int)GCGField::getHandZone(field);
  if ( *(_BYTE *)(((unsigned __int64)&op->card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)op + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&op->card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&op->card_guid);
  }
  GCGCardZone::findCard((GCGCardZone *const)(p_name + 80), HandZone);
  if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(p_name + 80), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/phase/gcg_phase_main.cpp",
      "playCard",
      420);
    v8 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           (common::milog::MiLogStream *const)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin,
           (const char (*)[49])"[GCG_RET] hand zone can't find card. card_guid: ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &op->card_guid);
    v10 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" controller_id: ");
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
      v10,
      &op->controller_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin);
    __a2 = 0LL;
    __a1 = RET_GCG_SELECT_HAND_CARD_GUID_ERROR;
    std::tuple<proto::Retcode,decltype(nullptr)>::tuple<proto::Retcode,decltype(nullptr),true>(
      (std::tuple<proto::Retcode,std::nullptr_t> *const)__in,
      &__a1,
      &__a2);
    std::tuple<int,std::shared_ptr<GCGActionBase>>::tuple<proto::Retcode,decltype(nullptr),true>(
      retstr,
      (std::tuple<proto::Retcode,std::nullptr_t> *)__in);
    goto LABEL_95;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  SkillLogic = GCGGameMode::getSkillLogic(this->game_mode_);
  v12 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_name + 80));
  if ( !GCGSkillLogic::checkCardOnUseContion(SkillLogic, v12) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/phase/gcg_phase_main.cpp",
      "playCard",
      426);
    v13 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            (common::milog::MiLogStream *const)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin,
            (const char (*)[44])"[GCG_RET] check condition fail. card_guid: ");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &op->card_guid);
    v15 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v14, (const char (*)[17])" controller_id: ");
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
      v15,
      &op->controller_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin);
    __a2 = 0LL;
    __a1 = RET_GCG_PLAY_CARD_CONDITION_CHECK_FAIL;
    std::tuple<proto::Retcode,decltype(nullptr)>::tuple<proto::Retcode,decltype(nullptr),true>(
      (std::tuple<proto::Retcode,std::nullptr_t> *const)__in,
      &__a1,
      &__a2);
    std::tuple<int,std::shared_ptr<GCGActionBase>>::tuple<proto::Retcode,decltype(nullptr),true>(
      retstr,
      (std::tuple<proto::Retcode,std::nullptr_t> *)__in);
    goto LABEL_95;
  }
  std::vector<unsigned int>::vector(
    (std::vector<unsigned int> *const)&__in[0]._M_weak_this._M_refcount,
    &op->target_param_vec);
  v16 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_name + 80));
  ChooseConfig = GCGCard::getChooseConfig(v16);
  if ( *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    ChooseConfig = (const std::vector<data::GCGChooseExcelConfig> *)&op->controller_id;
    __asan_report_load4(&op->controller_id);
  }
  controller_id = op->controller_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
  {
    ChooseConfig = (const std::vector<data::GCGChooseExcelConfig> *)&this->game_mode_;
    __asan_report_load8(&this->game_mode_);
  }
  v19 = GCGUtils::isTargetValid(
          this->game_mode_,
          controller_id,
          ChooseConfig,
          (const std::vector<unsigned int> *)&__in[0]._M_weak_this._M_refcount) ^ 1;
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)&__in[0]._M_weak_this._M_refcount);
  if ( v19 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/phase/gcg_phase_main.cpp",
      "playCard",
      432);
    v20 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
            (common::milog::MiLogStream *const)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin,
            (const char (*)[41])"[GCG_RET] target check fail. card_guid: ");
    v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &op->card_guid);
    v22 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v21, (const char (*)[17])" controller_id: ");
    v23 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
            v22,
            &op->controller_id);
    v24 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v23, (const char (*)[19])" target_param_vec:");
    common::milog::MiLogStream::operator<<<unsigned int>(v24, &op->target_param_vec);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin);
    __a2 = 0LL;
    __a1 = RET_GCG_PLAY_CARD_TARGET_NOT_MATCH;
    std::tuple<proto::Retcode,decltype(nullptr)>::tuple<proto::Retcode,decltype(nullptr),true>(
      (std::tuple<proto::Retcode,std::nullptr_t> *const)__in,
      &__a1,
      &__a2);
    std::tuple<int,std::shared_ptr<GCGActionBase>>::tuple<proto::Retcode,decltype(nullptr),true>(
      retstr,
      (std::tuple<proto::Retcode,std::nullptr_t> *)__in);
    goto LABEL_95;
  }
  DiceZone = GCGField::getDiceZone(field);
  GCGDiceZone::getDiceSideMap(
    (std::map<proto::GCGDiceSideType,unsigned int> *)(p_name + 176),
    DiceZone,
    &op->cost_dice_set);
  GCGSkillResult::GCGSkillResult((GCGSkillResult *const)(p_name + 336));
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  v26 = GCGGameMode::getSkillLogic(this->game_mode_);
  v27 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_name + 80));
  GCGSkillLogic::getRevisePlayCardCost(
    (std::map<data::GCGCostType,unsigned int> *)(p_name + 256),
    v26,
    v27,
    &op->target_param_vec,
    (GCGSkillResult *)(p_name + 336));
  *(_DWORD *)(p_name + 64) = 1;
  if ( std::map<data::GCGCostType,unsigned int>::count(
         (const std::map<data::GCGCostType,unsigned int> *const)(p_name + 256),
         (const std::map<data::GCGCostType,unsigned int>::key_type *)(p_name + 64)) )
  {
    __a1 = RET_SVR_ERROR;
    v28 = std::map<data::GCGCostType,unsigned int>::operator[](
            (std::map<data::GCGCostType,unsigned int> *const)(p_name + 256),
            (std::map<data::GCGCostType,unsigned int>::key_type *)&__a1);
    v29 = (int *)v28;
    if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v28);
    }
    v30 = *v29;
  }
  else
  {
    v30 = 0;
  }
  *(_DWORD *)(p_name + 48) = v30;
  std::map<proto::GCGDiceSideType,unsigned int>::map(
    (std::map<proto::GCGDiceSideType,unsigned int> *const)&__in[0].snapshot_data_.zone_skill_category_set_._M_h._M_before_begin,
    (const std::map<proto::GCGDiceSideType,unsigned int> *)(p_name + 176));
  std::map<data::GCGCostType,unsigned int>::map(
    (std::map<data::GCGCostType,unsigned int> *const)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_single_bucket,
    (const std::map<data::GCGCostType,unsigned int> *)(p_name + 256));
  v31 = !GCGUtils::isDiceCostValid(
           (std::map<data::GCGCostType,unsigned int> *)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_single_bucket,
           (std::map<proto::GCGDiceSideType,unsigned int> *)&__in[0].snapshot_data_.zone_skill_category_set_._M_h._M_before_begin);
  std::map<data::GCGCostType,unsigned int>::~map((std::map<data::GCGCostType,unsigned int> *const)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_single_bucket);
  std::map<proto::GCGDiceSideType,unsigned int>::~map((std::map<proto::GCGDiceSideType,unsigned int> *const)&__in[0].snapshot_data_.zone_skill_category_set_._M_h._M_before_begin);
  if ( !v31 )
  {
    if ( *(_DWORD *)(p_name + 48) )
    {
      if ( std::vector<unsigned int>::empty(&op->target_param_vec) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/phase/gcg_phase_main.cpp",
          "playCard",
          450);
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          (common::milog::MiLogStream *const)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin,
          (const char (*)[34])"[GCG_RET] target size not enough.");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin);
        __a2 = 0LL;
        __a1 = RET_GCG_PLAY_CARD_TARGET_NOT_MATCH;
        std::tuple<proto::Retcode,decltype(nullptr)>::tuple<proto::Retcode,decltype(nullptr),true>(
          (std::tuple<proto::Retcode,std::nullptr_t> *const)__in,
          &__a1,
          &__a2);
        std::tuple<int,std::shared_ptr<GCGActionBase>>::tuple<proto::Retcode,decltype(nullptr),true>(
          retstr,
          (std::tuple<proto::Retcode,std::nullptr_t> *)__in);
        goto LABEL_94;
      }
      v39 = std::vector<unsigned int>::operator[](&op->target_param_vec, 0LL);
      v40 = v39;
      if ( *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v39 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v39);
      }
      *(_DWORD *)(p_name + 64) = *v40;
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      CardMgr = GCGGameMode::getCardMgr(this->game_mode_);
      GCGCardMgr::findCard((GCGCardMgr *const)(p_name + 144), CardMgr, *(_DWORD *)(p_name + 64));
      if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(p_name + 144), 0LL) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/phase/gcg_phase_main.cpp",
          "playCard",
          457);
        v42 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                (common::milog::MiLogStream *const)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin,
                (const char (*)[58])"[GCG_RET] op target param invalid. find card fail. guid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, (const unsigned int *)(p_name + 64));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin);
        __a2 = 0LL;
        __a1 = RET_GCG_PLAY_CARD_TARGET_NOT_MATCH;
        std::tuple<proto::Retcode,decltype(nullptr)>::tuple<proto::Retcode,decltype(nullptr),true>(
          (std::tuple<proto::Retcode,std::nullptr_t> *const)__in,
          &__a1,
          &__a2);
        std::tuple<int,std::shared_ptr<GCGActionBase>>::tuple<proto::Retcode,decltype(nullptr),true>(
          retstr,
          (std::tuple<proto::Retcode,std::nullptr_t> *)__in);
        v43 = 0;
      }
      else
      {
        v44 = *(_DWORD *)(p_name + 48);
        v45 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_name + 144));
        if ( !GCGUtils::isEnergyCostValid(v45, v44) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&__in[0].normal_data_.card_vec_._M_impl._M_finish,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/phase/gcg_phase_main.cpp",
            "playCard",
            462);
          v46 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  (common::milog::MiLogStream *const)&__in[0].normal_data_.card_vec_._M_impl._M_finish,
                  (const char (*)[36])"[GCG_RET] energy not enough. card: ");
          v47 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_name + 144));
          GCGCard::getDesc[abi:cxx11](
            (std::string *)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin,
            v47);
          v48 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                  v46,
                  (const std::string *)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin);
          v49 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v48,
                  (const char (*)[14])" now energy: ");
          v50 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_name + 144));
          __a1 = (unsigned int)GCGCard::getToken(v50, GCG_TOKEN_ENERGY);
          v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, (const unsigned int *)&__a1);
          v52 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v51, (const char (*)[8])" need: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v52,
            (const unsigned int *)(p_name + 48));
          std::string::~string(&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__in[0].normal_data_.card_vec_._M_impl._M_finish);
          __a2 = 0LL;
          __a1 = RET_GCG_ENERGY_NOT_ENOUGH;
          std::tuple<proto::Retcode,decltype(nullptr)>::tuple<proto::Retcode,decltype(nullptr),true>(
            (std::tuple<proto::Retcode,std::nullptr_t> *const)__in,
            &__a1,
            &__a2);
          std::tuple<int,std::shared_ptr<GCGActionBase>>::tuple<proto::Retcode,decltype(nullptr),true>(
            retstr,
            (std::tuple<proto::Retcode,std::nullptr_t> *)__in);
          v43 = 0;
        }
        else
        {
          v43 = 1;
        }
      }
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(p_name + 144));
      if ( v43 != 1 )
        goto LABEL_94;
    }
    param = 0;
    if ( !std::vector<unsigned int>::empty(&op->target_param_vec) )
    {
      v53 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                  &op->target_param_vec,
                                                                                                  0LL);
      v54 = v53;
      if ( *(_BYTE *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v53 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v53);
      }
      param = *v54;
    }
    v55 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_name + 80));
    CardType = GCGCard::getCardType(v55);
    GCGField::getZoneByCardType((GCGField *const)(p_name + 112), (GCGCardType)field, CardType);
    replace_card_guid = 0;
    if ( std::operator!=<GCGCardZone>((const std::shared_ptr<GCGCardZone> *)(p_name + 112), 0LL) )
    {
      v57 = std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_name + 112));
      std::shared_ptr<GCGCard>::shared_ptr(
        (std::shared_ptr<GCGCard> *const)__in,
        (const std::shared_ptr<GCGCard> *)(p_name + 80));
      ret = GCGCardZone::checkCanAdd(v57, (GCGCardPtr *)__in, 0);
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)__in);
      if ( ret )
      {
        v58 = 0;
        if ( ret != 1 )
          goto LABEL_58;
        v59 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_name + 80));
        if ( GCGCard::getCardType(v59) != GCG_CARD_ASSIST )
          goto LABEL_58;
        if ( *(_BYTE *)(((unsigned __int64)&op->replace_card_guid >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&op->replace_card_guid >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&op->replace_card_guid);
        }
        if ( !op->replace_card_guid )
          goto LABEL_58;
        v60 = (unsigned int)std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_name + 112));
        if ( *(_BYTE *)(((unsigned __int64)&op->replace_card_guid >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&op->replace_card_guid >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&op->replace_card_guid);
        }
        GCGCardZone::findCard(__in, v60);
        v58 = 1;
        if ( !std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)__in, 0LL) )
          v61 = 0;
        else
LABEL_58:
          v61 = 1;
        if ( v58 )
          std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)__in);
        if ( v61 )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&__in[0].normal_data_.card_vec_._M_impl._M_finish,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/phase/gcg_phase_main.cpp",
            "playCard",
            484);
          v62 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  (common::milog::MiLogStream *const)&__in[0].normal_data_.card_vec_._M_impl._M_finish,
                  (const char (*)[34])"[GCG_RET] target zone can't add. ");
          v63 = std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_name + 112));
          GCGCardZone::getDesc[abi:cxx11](
            (std::string *)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin,
            v63);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
            v62,
            (const std::string *)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin);
          std::string::~string(&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__in[0].normal_data_.card_vec_._M_impl._M_finish);
          __a2 = 0LL;
          __a1 = RET_GCG_PLAY_CARD_ZONE_CANNOT_ADD;
          std::tuple<proto::Retcode,decltype(nullptr)>::tuple<proto::Retcode,decltype(nullptr),true>(
            (std::tuple<proto::Retcode,std::nullptr_t> *const)__in,
            &__a1,
            &__a2);
          std::tuple<int,std::shared_ptr<GCGActionBase>>::tuple<proto::Retcode,decltype(nullptr),true>(
            retstr,
            (std::tuple<proto::Retcode,std::nullptr_t> *)__in);
LABEL_93:
          std::shared_ptr<GCGCardZone>::~shared_ptr((std::shared_ptr<GCGCardZone> *const)(p_name + 112));
          goto LABEL_94;
        }
        if ( *(_BYTE *)(((unsigned __int64)&op->replace_card_guid >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&op->replace_card_guid >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&op->replace_card_guid);
        }
        replace_card_guid = op->replace_card_guid;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&op->replace_card_guid >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&op->replace_card_guid >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&op->replace_card_guid);
    }
    if ( replace_card_guid == op->replace_card_guid )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      ActionMgr = (unsigned int)GCGGameMode::getActionMgr(this->game_mode_);
      if ( *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&op->controller_id);
      }
      GCGActionMgr::createAction<GCGActionPlayCard>((GCGActionMgr *const)(p_name + 144), (GCGControllerValue)ActionMgr);
      if ( std::operator==<GCGActionPlayCard>((const std::shared_ptr<GCGActionPlayCard> *)(p_name + 144), 0LL) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/phase/gcg_phase_main.cpp",
          "playCard",
          502);
        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
          (common::milog::MiLogStream *const)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin,
          (const char (*)[29])"[GCG_RET] createAction fail.");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin);
        __a2 = 0LL;
        __a1 = RET_FAIL;
        std::tuple<int,decltype(nullptr)>::tuple<int,decltype(nullptr),true>(
          (std::tuple<int,std::nullptr_t> *const)__in,
          (int *)&__a1,
          &__a2);
        std::tuple<int,std::shared_ptr<GCGActionBase>>::tuple<int,decltype(nullptr),true>(
          retstr,
          (std::tuple<int,std::nullptr_t> *)__in);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->game_mode_);
        v65 = GCGGameMode::getSkillLogic(this->game_mode_);
        GCGSkillLogic::refreshPreviewSkillUse(v65, (GCGSkillResult *)(p_name + 336));
        if ( *(_BYTE *)(((unsigned __int64)&op->card_guid >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)op + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&op->card_guid >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&op->card_guid);
        }
        card_guid = op->card_guid;
        v67 = std::__shared_ptr_access<GCGActionPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionPlayCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_name + 144));
        if ( *(_BYTE *)(((unsigned __int64)&v67->hand_card_guid >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v67->hand_card_guid >> 3) + 0x7FFF8000) <= 3 )
        {
          v67 = (std::__shared_ptr_access<GCGActionPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v67->hand_card_guid);
        }
        v67->hand_card_guid = card_guid;
        v68 = std::__shared_ptr_access<GCGActionPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionPlayCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_name + 144));
        std::set<unsigned int>::operator=(&v68->cost_dice_set, &op->cost_dice_set);
        v69 = std::__shared_ptr_access<GCGActionPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionPlayCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_name + 144));
        std::vector<unsigned int>::operator=(&v69->target_param_vec, &op->target_param_vec);
        v70 = *(_DWORD *)(p_name + 48);
        v71 = std::__shared_ptr_access<GCGActionPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionPlayCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_name + 144));
        if ( *(_BYTE *)(((unsigned __int64)&v71->cost_energy >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v71->cost_energy >> 3) + 0x7FFF8000) <= 3 )
        {
          v71 = (std::__shared_ptr_access<GCGActionPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v71->cost_energy);
        }
        v71->cost_energy = v70;
        v72 = replace_card_guid;
        v73 = std::__shared_ptr_access<GCGActionPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionPlayCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_name + 144));
        if ( *(_BYTE *)(((unsigned __int64)&v73->replace_card_guid >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v73->replace_card_guid >> 3) + 0x7FFF8000) <= 3 )
        {
          v73 = (std::__shared_ptr_access<GCGActionPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v73->replace_card_guid);
        }
        v73->replace_card_guid = v72;
        v74 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_name + 80));
        if ( GCGCard::isHasTag(v74, GCG_TAG_SLOWLY) )
        {
          v75 = this;
          if ( *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&op->controller_id);
          }
          GCGPhaseBase::markControllerDone(v75, op->controller_id);
        }
        __a1 = RET_SUCC;
        std::tuple<int,std::shared_ptr<GCGActionPlayCard>>::tuple<int,std::shared_ptr<GCGActionPlayCard>&,true>(
          (std::tuple<int,std::shared_ptr<GCGActionPlayCard> > *const)&__in[0]._M_weak_this._M_refcount,
          (int *)&__a1,
          (std::shared_ptr<GCGActionPlayCard> *)(p_name + 144));
        std::tuple<int,std::shared_ptr<GCGActionBase>>::tuple<int,std::shared_ptr<GCGActionPlayCard>,true>(
          retstr,
          (std::tuple<int,std::shared_ptr<GCGActionPlayCard> > *)&__in[0]._M_weak_this._M_refcount);
        std::tuple<int,std::shared_ptr<GCGActionPlayCard>>::~tuple((std::tuple<int,std::shared_ptr<GCGActionPlayCard> > *const)&__in[0]._M_weak_this._M_refcount);
      }
      std::shared_ptr<GCGActionPlayCard>::~shared_ptr((std::shared_ptr<GCGActionPlayCard> *const)(p_name + 144));
    }
    else
    {
      __a2 = 0LL;
      __a1 = RET_GCG_PLAY_CARD_PARAM_INVALID;
      std::tuple<proto::Retcode,decltype(nullptr)>::tuple<proto::Retcode,decltype(nullptr),true>(
        (std::tuple<proto::Retcode,std::nullptr_t> *const)__in,
        &__a1,
        &__a2);
      std::tuple<int,std::shared_ptr<GCGActionBase>>::tuple<proto::Retcode,decltype(nullptr),true>(
        retstr,
        (std::tuple<proto::Retcode,std::nullptr_t> *)__in);
    }
    goto LABEL_93;
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&__in[0].normal_data_.card_vec_._M_impl._M_finish,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/phase/gcg_phase_main.cpp",
    "playCard",
    442);
  v32 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
          (common::milog::MiLogStream *const)&__in[0].normal_data_.card_vec_._M_impl._M_finish,
          (const char (*)[49])"[GCG_RET] check dice cost invalid. select dice: ");
  v33 = common::milog::MiLogStream::operator<<<unsigned int>(v32, &op->cost_dice_set);
  v34 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v33, (const char (*)[12])" dice pool:");
  v35 = GCGField::getDiceZone(field);
  DiceVec = GCGDiceZone::getDiceVec(v35);
  v37 = common::milog::MiLogStream::operator<<<proto::GCGDiceSideType>(v34, DiceVec);
  v38 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_name + 80));
  GCGCard::getDesc[abi:cxx11]((std::string *)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin, v38);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
    v37,
    (const std::string *)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin);
  std::string::~string(&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__in[0].normal_data_.card_vec_._M_impl._M_finish);
  __a2 = 0LL;
  __a1 = RET_GCG_DICE_INDEX_INVALID;
  std::tuple<proto::Retcode,decltype(nullptr)>::tuple<proto::Retcode,decltype(nullptr),true>(
    (std::tuple<proto::Retcode,std::nullptr_t> *const)__in,
    &__a1,
    &__a2);
  std::tuple<int,std::shared_ptr<GCGActionBase>>::tuple<proto::Retcode,decltype(nullptr),true>(
    retstr,
    (std::tuple<proto::Retcode,std::nullptr_t> *)__in);
LABEL_94:
  std::map<data::GCGCostType,unsigned int>::~map((std::map<data::GCGCostType,unsigned int> *const)(p_name + 256));
  GCGSkillResult::~GCGSkillResult((GCGSkillResult *const)(p_name + 336));
  std::map<proto::GCGDiceSideType,unsigned int>::~map((std::map<proto::GCGDiceSideType,unsigned int> *const)(p_name + 176));
LABEL_95:
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(p_name + 80));
  if ( &__in[0].name_ == (std::string *)p_name )
  {
    *(_QWORD *)((p_name >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_name >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((p_name >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((p_name >> 3) + 0x7FFF801C) = 0;
    *(_QWORD *)((p_name >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((p_name >> 3) + 0x7FFF8058) = 0LL;
  }
  else
  {
    *(_QWORD *)p_name = 1172321806LL;
    *(_QWORD *)((p_name >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_name >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_name >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_name >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_name >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_name >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_name >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_name >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_name >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_name >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_name >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_name >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 521: range 000000000D79228A-000000000D793281
std::tuple<int,std::shared_ptr<GCGActionBase> > *__cdecl GCGPhaseMain::reboot(
        std::tuple<int,std::shared_ptr<GCGActionBase> > *retstr,
        GCGPhaseMain *const this,
        const GCGOperationReboot *op)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  GCGDuel *Duel; // rcx
  std::set<unsigned int>::size_type v7; // rcx
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v11; // rax
  _DWORD *v12; // rdx
  GCGDiceZone *DiceZone; // rax
  common::milog::MiLogStream *v14; // rax
  std::set<unsigned int>::size_type v15; // rcx
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v19; // rax
  _DWORD *v20; // rdx
  GCGCardZone *HandZone; // rax
  common::milog::MiLogStream *v22; // rax
  GCGCard *v23; // rax
  GCGEffectElementType ElementType; // eax
  common::milog::MiLogStream *v25; // r14
  GCGCard *v26; // rax
  proto::GCGDiceSideType *v27; // rax
  _DWORD *v28; // rdx
  common::milog::MiLogStream *v29; // r14
  GCGCard *v30; // rax
  signed int ActionMgr; // ecx
  std::__shared_ptr_access<GCGActionReboot,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  std::__shared_ptr_access<GCGActionReboot,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  proto::GCGDiceSideType *v34; // rax
  GCGDiceSideType *v35; // rdx
  GCGDiceSideType v36; // r14d
  std::__shared_ptr_access<GCGActionReboot,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  proto::Retcode __a1; // [rsp+28h] [rbp-158h] BYREF
  std::set<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-150h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+38h] [rbp-148h] BYREF
  const GCGRule *rule; // [rsp+40h] [rbp-140h]
  GCGField *field; // [rsp+48h] [rbp-138h]
  const std::set<unsigned int> *__for_range; // [rsp+50h] [rbp-130h]
  const std::set<unsigned int> *__for_range_0; // [rsp+58h] [rbp-128h]
  std::tuple<proto::Retcode,std::nullptr_t> __in; // [rsp+60h] [rbp-120h] BYREF
  std::tuple<int,std::shared_ptr<GCGActionReboot> > v49; // [rsp+70h] [rbp-110h] BYREF
  common::milog::MiLogStream v50; // [rsp+90h] [rbp-F0h] BYREF
  char v51[208]; // [rsp+B0h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 13 card_guid:550 64 8 17 dice_side_opt:565 96 16 12 card_ptr:559 128 16 14 action_ptr:577";
  *(_QWORD *)(v3 + 16) = GCGPhaseMain::reboot;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  if ( std::set<unsigned int>::empty(&op->select_dice_set) )
  {
    common::milog::MiLogStream::create(
      &v50,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/phase/gcg_phase_main.cpp",
      "reboot",
      524);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v50,
      (const char (*)[32])"[GCG_RET] reboot dice num is 0.");
    common::milog::MiLogStream::~MiLogStream(&v50);
    *(_QWORD *)(v3 + 64) = 0LL;
    __a1 = RET_GCG_REBOOT_SELECT_DICE_INVALID;
    std::tuple<proto::Retcode,decltype(nullptr)>::tuple<proto::Retcode,decltype(nullptr),true>(
      &__in,
      &__a1,
      (void *)(v3 + 64));
    std::tuple<int,std::shared_ptr<GCGActionBase>>::tuple<proto::Retcode,decltype(nullptr),true>(retstr, &__in);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    rule = GCGGameMode::rule(this->game_mode_);
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    Duel = GCGGameMode::getDuel(this->game_mode_);
    if ( *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&op->controller_id);
    }
    field = GCGDuel::getField(Duel, op->controller_id);
    v7 = std::set<unsigned int>::size(&op->select_dice_set);
    if ( *(_BYTE *)(((unsigned __int64)&rule->reboot_dice_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rule + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rule->reboot_dice_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&rule->reboot_dice_num);
    }
    if ( v7 <= rule->reboot_dice_num )
    {
      __for_range = &op->select_dice_set;
      __for_begin._M_node = std::set<unsigned int>::begin(&op->select_dice_set)._M_node;
      __for_end._M_node = std::set<unsigned int>::end(&op->select_dice_set)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v11 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
        v12 = v11;
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v11);
        }
        *(_DWORD *)(v3 + 48) = *v12;
        DiceZone = GCGField::getDiceZone(field);
        if ( !GCGDiceZone::isDiceValid(DiceZone, *(_DWORD *)(v3 + 48)) )
        {
          common::milog::MiLogStream::create(
            &v50,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/phase/gcg_phase_main.cpp",
            "reboot",
            540);
          v14 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  &v50,
                  (const char (*)[38])"[GCG_RET] dice index invalid. index: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v50);
          *(_QWORD *)(v3 + 64) = 0LL;
          __a1 = RET_GCG_REBOOT_SELECT_DICE_INVALID;
          std::tuple<proto::Retcode,decltype(nullptr)>::tuple<proto::Retcode,decltype(nullptr),true>(
            &__in,
            &__a1,
            (void *)(v3 + 64));
          std::tuple<int,std::shared_ptr<GCGActionBase>>::tuple<proto::Retcode,decltype(nullptr),true>(retstr, &__in);
          goto LABEL_55;
        }
        std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
      }
      v15 = std::set<unsigned int>::size(&op->cost_card_set);
      if ( *(_BYTE *)(((unsigned __int64)&rule->reboot_cost_card_num >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&rule->reboot_cost_card_num >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&rule->reboot_cost_card_num);
      }
      if ( v15 == rule->reboot_cost_card_num )
      {
        __for_range_0 = &op->cost_card_set;
        __for_begin._M_node = std::set<unsigned int>::begin(&op->cost_card_set)._M_node;
        __for_end._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          v19 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
          v20 = v19;
          if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v19);
          }
          *(_DWORD *)(v3 + 48) = *v20;
          HandZone = GCGField::getHandZone(field);
          if ( !GCGCardZone::isHasCard(HandZone, *(_DWORD *)(v3 + 48)) )
          {
            common::milog::MiLogStream::create(
              &v50,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/card_game/phase/gcg_phase_main.cpp",
              "reboot",
              555);
            v22 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                    &v50,
                    (const char (*)[42])"[GCG_RET] hand card_guid invalid. index: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream(&v50);
            *(_QWORD *)(v3 + 64) = 0LL;
            __a1 = RET_GCG_REBOOT_SELECT_CARD_INVALID;
            std::tuple<proto::Retcode,decltype(nullptr)>::tuple<proto::Retcode,decltype(nullptr),true>(
              &__in,
              &__a1,
              (void *)(v3 + 64));
            std::tuple<int,std::shared_ptr<GCGActionBase>>::tuple<proto::Retcode,decltype(nullptr),true>(retstr, &__in);
            goto LABEL_55;
          }
          std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
        }
        GCGField::getCharacterZone(field);
        GCGCharacterZone::getOnStageCard((GCGCharacterZone *const)(v3 + 96));
        if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v3 + 96), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v50,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/card_game/phase/gcg_phase_main.cpp",
            "reboot",
            562);
          common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
            &v50,
            (const char (*)[32])"[GCG_RET] getOnStageCard fail. ");
          common::milog::MiLogStream::~MiLogStream(&v50);
          *(_QWORD *)(v3 + 64) = 0LL;
          __a1 = RET_FAIL;
          std::tuple<int,decltype(nullptr)>::tuple<int,decltype(nullptr),true>(
            (std::tuple<int,std::nullptr_t> *const)&__in,
            (int *)&__a1,
            (void *)(v3 + 64));
          std::tuple<int,std::shared_ptr<GCGActionBase>>::tuple<int,decltype(nullptr),true>(
            retstr,
            (std::tuple<int,std::nullptr_t> *)&__in);
        }
        else
        {
          v23 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          ElementType = GCGCard::getElementType(v23);
          *(_QWORD *)(v3 + 64) = GCGUtils::elementCover<proto::GCGDiceSideType,data::GCGEffectElementType>(
                                   ElementType,
                                   0);
          if ( !std::optional<proto::GCGDiceSideType>::has_value((const std::optional<proto::GCGDiceSideType> *const)(v3 + 64)) )
          {
            common::milog::MiLogStream::create(
              &v50,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/card_game/phase/gcg_phase_main.cpp",
              "reboot",
              568);
            v25 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                    &v50,
                    (const char (*)[58])"[GCG_RET] cover element type to dice side fail. element: ");
            v26 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            __a1 = GCGCard::getElementType(v26);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)&__a1);
            common::milog::MiLogStream::~MiLogStream(&v50);
            __for_end._M_node = 0LL;
            __a1 = RET_FAIL;
            std::tuple<int,decltype(nullptr)>::tuple<int,decltype(nullptr),true>(
              (std::tuple<int,std::nullptr_t> *const)&__in,
              (int *)&__a1,
              &__for_end);
            std::tuple<int,std::shared_ptr<GCGActionBase>>::tuple<int,decltype(nullptr),true>(
              retstr,
              (std::tuple<int,std::nullptr_t> *)&__in);
          }
          else
          {
            v27 = std::optional<proto::GCGDiceSideType>::value((std::optional<proto::GCGDiceSideType> *const)(v3 + 64));
            v28 = v27;
            if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v27);
            }
            if ( *v28 )
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->game_mode_);
              ActionMgr = (unsigned int)GCGGameMode::getActionMgr(this->game_mode_);
              if ( *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&op->controller_id);
              }
              GCGActionMgr::createAction<GCGActionReboot>(
                (GCGActionMgr *const)(v3 + 128),
                (GCGControllerValue)ActionMgr);
              if ( std::operator==<GCGActionReboot>((const std::shared_ptr<GCGActionReboot> *)(v3 + 128), 0LL) )
              {
                common::milog::MiLogStream::create(
                  &v50,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/card_game/phase/gcg_phase_main.cpp",
                  "reboot",
                  580);
                common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  &v50,
                  (const char (*)[29])"[GCG_RET] createAction fail.");
                common::milog::MiLogStream::~MiLogStream(&v50);
                __for_end._M_node = 0LL;
                __a1 = RET_FAIL;
                std::tuple<int,decltype(nullptr)>::tuple<int,decltype(nullptr),true>(
                  (std::tuple<int,std::nullptr_t> *const)&__in,
                  (int *)&__a1,
                  &__for_end);
                std::tuple<int,std::shared_ptr<GCGActionBase>>::tuple<int,decltype(nullptr),true>(
                  retstr,
                  (std::tuple<int,std::nullptr_t> *)&__in);
              }
              else
              {
                v32 = std::__shared_ptr_access<GCGActionReboot,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionReboot,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                std::set<unsigned int>::operator=(&v32->cost_card_set, &op->cost_card_set);
                v33 = std::__shared_ptr_access<GCGActionReboot,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionReboot,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                std::set<unsigned int>::operator=(&v33->select_dice_set, &op->select_dice_set);
                v34 = std::optional<proto::GCGDiceSideType>::value((std::optional<proto::GCGDiceSideType> *const)(v3 + 64));
                v35 = v34;
                if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v34);
                }
                v36 = *v35;
                v37 = std::__shared_ptr_access<GCGActionReboot,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionReboot,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                if ( *(_BYTE *)(((unsigned __int64)&v37->dice_side >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&v37->dice_side >> 3) + 0x7FFF8000) <= 3 )
                {
                  v37 = (std::__shared_ptr_access<GCGActionReboot,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v37->dice_side);
                }
                v37->dice_side = v36;
                __a1 = RET_SUCC;
                std::tuple<int,std::shared_ptr<GCGActionReboot>>::tuple<int,std::shared_ptr<GCGActionReboot>&,true>(
                  &v49,
                  (int *)&__a1,
                  (std::shared_ptr<GCGActionReboot> *)(v3 + 128));
                std::tuple<int,std::shared_ptr<GCGActionBase>>::tuple<int,std::shared_ptr<GCGActionReboot>,true>(
                  retstr,
                  &v49);
                std::tuple<int,std::shared_ptr<GCGActionReboot>>::~tuple(&v49);
              }
              std::shared_ptr<GCGActionReboot>::~shared_ptr((std::shared_ptr<GCGActionReboot> *const)(v3 + 128));
            }
            else
            {
              common::milog::MiLogStream::create(
                &v50,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/card_game/phase/gcg_phase_main.cpp",
                "reboot",
                574);
              v29 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                      &v50,
                      (const char (*)[58])"[GCG_RET] cover element type to dice side fail. element: ");
              v30 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
              __a1 = GCGCard::getElementType(v30);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)&__a1);
              common::milog::MiLogStream::~MiLogStream(&v50);
              __for_end._M_node = 0LL;
              __a1 = RET_FAIL;
              std::tuple<int,decltype(nullptr)>::tuple<int,decltype(nullptr),true>(
                (std::tuple<int,std::nullptr_t> *const)&__in,
                (int *)&__a1,
                &__for_end);
              std::tuple<int,std::shared_ptr<GCGActionBase>>::tuple<int,decltype(nullptr),true>(
                retstr,
                (std::tuple<int,std::nullptr_t> *)&__in);
            }
          }
        }
        std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 96));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v50,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/phase/gcg_phase_main.cpp",
          "reboot",
          547);
        v16 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v50,
                (const char (*)[32])"[GCG_RET] reboot cost card num:");
        *(_QWORD *)(v3 + 64) = std::set<unsigned int>::size(&op->cost_card_set);
        v17 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v16,
                (const unsigned __int64 *)(v3 + 64));
        v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v17, (const char (*)[14])" larger than ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &rule->reboot_cost_card_num);
        common::milog::MiLogStream::~MiLogStream(&v50);
        *(_QWORD *)(v3 + 64) = 0LL;
        __a1 = RET_GCG_REBOOT_SELECT_CARD_INVALID;
        std::tuple<proto::Retcode,decltype(nullptr)>::tuple<proto::Retcode,decltype(nullptr),true>(
          &__in,
          &__a1,
          (void *)(v3 + 64));
        std::tuple<int,std::shared_ptr<GCGActionBase>>::tuple<proto::Retcode,decltype(nullptr),true>(retstr, &__in);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v50,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/phase/gcg_phase_main.cpp",
        "reboot",
        532);
      v8 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v50,
             (const char (*)[27])"[GCG_RET] reboot dice num:");
      *(_QWORD *)(v3 + 64) = std::set<unsigned int>::size(&op->select_dice_set);
      v9 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
             v8,
             (const unsigned __int64 *)(v3 + 64));
      v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v9, (const char (*)[14])" larger than ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &rule->reboot_dice_num);
      common::milog::MiLogStream::~MiLogStream(&v50);
      *(_QWORD *)(v3 + 64) = 0LL;
      __a1 = RET_GCG_REBOOT_SELECT_DICE_INVALID;
      std::tuple<proto::Retcode,decltype(nullptr)>::tuple<proto::Retcode,decltype(nullptr),true>(
        &__in,
        &__a1,
        (void *)(v3 + 64));
      std::tuple<int,std::shared_ptr<GCGActionBase>>::tuple<proto::Retcode,decltype(nullptr),true>(retstr, &__in);
    }
  }
LABEL_55:
  if ( v51 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return retstr;
};

// Line 590: range 000000000D793282-000000000D79358D
std::tuple<int,std::shared_ptr<GCGActionBase> > *__cdecl GCGPhaseMain::pass(
        std::tuple<int,std::shared_ptr<GCGActionBase> > *retstr,
        GCGPhaseMain *const this,
        const GCGOperationPass *op)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  signed int ActionMgr; // ecx
  GCGPhaseMain *v7; // rdx
  int __a1; // [rsp+24h] [rbp-BCh] BYREF
  __int64 __a2; // [rsp+28h] [rbp-B8h] BYREF
  std::tuple<int,std::nullptr_t> __in; // [rsp+30h] [rbp-B0h] BYREF
  std::tuple<int,std::shared_ptr<GCGActionPass> > v13; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v14; // [rsp+60h] [rbp-80h] BYREF
  char v15[96]; // [rsp+80h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 action_ptr:591";
  *(_QWORD *)(v3 + 16) = GCGPhaseMain::pass;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  ActionMgr = (unsigned int)GCGGameMode::getActionMgr(this->game_mode_);
  if ( *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&op->controller_id);
  }
  GCGActionMgr::createAction<GCGActionPass>((GCGActionMgr *const)(v3 + 32), (GCGControllerValue)ActionMgr);
  if ( std::operator==<GCGActionPass>((const std::shared_ptr<GCGActionPass> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/phase/gcg_phase_main.cpp",
      "pass",
      594);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v14,
      (const char (*)[29])"[GCG_RET] createAction fail.");
    common::milog::MiLogStream::~MiLogStream(&v14);
    __a2 = 0LL;
    __a1 = -1;
    std::tuple<int,decltype(nullptr)>::tuple<int,decltype(nullptr),true>(&__in, &__a1, &__a2);
    std::tuple<int,std::shared_ptr<GCGActionBase>>::tuple<int,decltype(nullptr),true>(retstr, &__in);
  }
  else
  {
    v7 = this;
    if ( *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&op->controller_id);
    }
    GCGPhaseBase::markControllerAllDone(v7, op->controller_id);
    __a1 = 0;
    std::tuple<int,std::shared_ptr<GCGActionPass>>::tuple<int,std::shared_ptr<GCGActionPass>&,true>(
      &v13,
      &__a1,
      (std::shared_ptr<GCGActionPass> *)(v3 + 32));
    std::tuple<int,std::shared_ptr<GCGActionBase>>::tuple<int,std::shared_ptr<GCGActionPass>,true>(retstr, &v13);
    std::tuple<int,std::shared_ptr<GCGActionPass>>::~tuple(&v13);
  }
  std::shared_ptr<GCGActionPass>::~shared_ptr((std::shared_ptr<GCGActionPass> *const)(v3 + 32));
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 603: range 000000000D793612-000000000D794AFC
std::tuple<int,std::shared_ptr<GCGActionBase> > *__cdecl GCGPhaseMain::selectOnstage(
        std::tuple<int,std::shared_ptr<GCGActionBase> > *retstr,
        GCGPhaseMain *const this,
        const GCGOperationOnStageSelect *op,
        uint32_t *target_card_guid)
{
  unsigned __int64 p_M_single_bucket; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  GCGDuel *Duel; // rcx
  uint32_t card_guid; // r14d
  GCGCharacterZone *CharacterZone; // rax
  uint32_t v10; // edi
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  GCGCharacterZone *v15; // r14
  common::milog::MiLogStream *v16; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  uint32_t Guid; // ecx
  GCGSkillLogic *SkillLogic; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v28; // rax
  _DWORD *v29; // rdx
  GCGDiceZone *DiceZone; // rax
  common::milog::MiLogStream *v31; // rax
  signed int ActionMgr; // ecx
  GCGSkillLogic *v33; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  uint32_t v35; // r14d
  std::__shared_ptr_access<GCGActionSelectOnStage,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  std::__shared_ptr_access<GCGActionSelectOnStage,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  GCGSkillLogic *v38; // rax
  GCGPhaseMain *v39; // rdx
  std::__shared_ptr_access<GCGActionSelectOnStage,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  proto::Retcode __a1; // [rsp+30h] [rbp-420h] BYREF
  int32_t ret; // [rsp+34h] [rbp-41Ch]
  std::set<unsigned int>::iterator __for_begin; // [rsp+38h] [rbp-418h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+40h] [rbp-410h] BYREF
  __int64 __a2; // [rsp+48h] [rbp-408h] BYREF
  GCGField *field; // [rsp+50h] [rbp-400h]
  GCGDiceZone *dice_zone; // [rsp+58h] [rbp-3F8h]
  const GCGRule *rule; // [rsp+60h] [rbp-3F0h]
  const std::set<unsigned int> *__for_range; // [rsp+68h] [rbp-3E8h]
  GCGCardZone __in[3]; // [rsp+70h] [rbp-3E0h] BYREF

  p_M_single_bucket = (unsigned __int64)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_single_bucket;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(832LL);
    if ( v5 )
      p_M_single_bucket = v5;
  }
  *(_QWORD *)p_M_single_bucket = 1102416563LL;
  *(_QWORD *)(p_M_single_bucket + 8) = "7 32 4 19 cost_revise_num:659 48 4 14 dice_index:665 64 16 19 target_card_ptr:613"
                                       " 96 16 12 card_ptr:654 128 16 14 action_ptr:684 160 168 24 trigger_window_param:7"
                                       "01 400 368 16 skill_result:655";
  *(_QWORD *)(p_M_single_bucket + 16) = GCGPhaseMain::selectOnstage;
  v6 = (_DWORD *)(p_M_single_bucket >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862730] = -218959360;
  v6[536862731] = -218959118;
  v6[536862732] = 62194;
  v6[536862744] = -202116109;
  v6[536862745] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  Duel = GCGGameMode::getDuel(this->game_mode_);
  if ( *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&op->controller_id);
  }
  field = GCGDuel::getField(Duel, op->controller_id);
  dice_zone = GCGField::getDiceZone(field);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  rule = GCGGameMode::rule(this->game_mode_);
  ret = -1;
  if ( *(_BYTE *)(((unsigned __int64)&op->card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)op + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&op->card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&op->card_guid);
  }
  card_guid = op->card_guid;
  CharacterZone = GCGField::getCharacterZone(field);
  if ( card_guid == GCGCharacterZone::getOnStageCardGuid(CharacterZone) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/phase/gcg_phase_main.cpp",
      "selectOnstage",
      610);
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      (common::milog::MiLogStream *const)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin,
      (const char (*)[41])"[GCG_RET] select card already on stage. ");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin);
    __a2 = 0LL;
    __a1 = RET_GCG_CHARACTER_ALREADY_ON_STAGE;
    std::tuple<proto::Retcode,decltype(nullptr)>::tuple<proto::Retcode,decltype(nullptr),true>(
      (std::tuple<proto::Retcode,std::nullptr_t> *const)__in,
      &__a1,
      &__a2);
    std::tuple<int,std::shared_ptr<GCGActionBase>>::tuple<proto::Retcode,decltype(nullptr),true>(
      retstr,
      (std::tuple<proto::Retcode,std::nullptr_t> *)__in);
    goto LABEL_71;
  }
  *(_QWORD *)(p_M_single_bucket + 64) = 0LL;
  *(_QWORD *)(p_M_single_bucket + 72) = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&op->card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)op + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&op->card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&op->card_guid);
  }
  if ( !op->card_guid )
  {
    v15 = GCGField::getCharacterZone(field);
    std::function<ForeachPolicy ()(GCGCard &)>::function<GCGPhaseMain::selectOnstage(GCGOperationOnStageSelect const&,unsigned int &)::{lambda(GCGCard &)#1},void,void>(
      (std::function<ForeachPolicy(GCGCard&)> *const)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin,
      (GCGPhaseMain::selectOnstage::<lambda(GCGCard&)>)(p_M_single_bucket + 64));
    GCGCharacterZone::foreachCharacter(
      v15,
      (std::function<ForeachPolicy(GCGCard&)> *)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin);
    std::function<ForeachPolicy ()(GCGCard &)>::~function((std::function<ForeachPolicy(GCGCard&)> *const)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin);
    goto LABEL_24;
  }
  v10 = (unsigned int)GCGField::getCharacterZone(field);
  if ( *(_BYTE *)(((unsigned __int64)&op->card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)op + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&op->card_guid >> 3) + 0x7FFF8000) )
  {
    v10 = (_DWORD)op + 12;
    __asan_report_load4(&op->card_guid);
  }
  GCGCardZone::findCard(__in, v10);
  std::shared_ptr<GCGCard>::operator=(
    (std::shared_ptr<GCGCard> *const)(p_M_single_bucket + 64),
    (std::shared_ptr<GCGCard> *)__in);
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)__in);
  if ( !std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(p_M_single_bucket + 64), 0LL) )
  {
    v12 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 64));
    if ( !GCGCard::isAlive(v12) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&__in[0].normal_data_.card_vec_._M_impl._M_finish,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/phase/gcg_phase_main.cpp",
        "selectOnstage",
        624);
      v13 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              (common::milog::MiLogStream *const)&__in[0].normal_data_.card_vec_._M_impl._M_finish,
              (const char (*)[38])"[GCG_RET] character card already die.");
      v14 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 64));
      GCGCard::getDesc[abi:cxx11](
        (std::string *)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin,
        v14);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
        v13,
        (const std::string *)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin);
      std::string::~string(&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__in[0].normal_data_.card_vec_._M_impl._M_finish);
      __a2 = 0LL;
      __a1 = RET_GCG_CHARACTER_ALREADY_DIE;
      std::tuple<proto::Retcode,decltype(nullptr)>::tuple<proto::Retcode,decltype(nullptr),true>(
        (std::tuple<proto::Retcode,std::nullptr_t> *const)__in,
        &__a1,
        &__a2);
      std::tuple<int,std::shared_ptr<GCGActionBase>>::tuple<proto::Retcode,decltype(nullptr),true>(
        retstr,
        (std::tuple<proto::Retcode,std::nullptr_t> *)__in);
      goto LABEL_70;
    }
LABEL_24:
    if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(p_M_single_bucket + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/phase/gcg_phase_main.cpp",
        "selectOnstage",
        643);
      v16 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              (common::milog::MiLogStream *const)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin,
              (const char (*)[38])"[GCG_RET] can't find alive character.");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &op->card_guid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin);
      __a2 = 0LL;
      __a1 = RET_GCG_CHARACTER_GUID_INVALID;
      std::tuple<proto::Retcode,decltype(nullptr)>::tuple<proto::Retcode,decltype(nullptr),true>(
        (std::tuple<proto::Retcode,std::nullptr_t> *const)__in,
        &__a1,
        &__a2);
      std::tuple<int,std::shared_ptr<GCGActionBase>>::tuple<proto::Retcode,decltype(nullptr),true>(
        retstr,
        (std::tuple<proto::Retcode,std::nullptr_t> *)__in);
      goto LABEL_70;
    }
    v17 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 64));
    if ( !GCGCard::isActivated(v17) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&__in[0].normal_data_.card_vec_._M_impl._M_finish,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/phase/gcg_phase_main.cpp",
        "selectOnstage",
        649);
      v18 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              (common::milog::MiLogStream *const)&__in[0].normal_data_.card_vec_._M_impl._M_finish,
              (const char (*)[41])"[GCG_RET] character card is deactivated.");
      v19 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 64));
      GCGCard::getDesc[abi:cxx11](
        (std::string *)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin,
        v19);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
        v18,
        (const std::string *)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin);
      std::string::~string(&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__in[0].normal_data_.card_vec_._M_impl._M_finish);
      __a2 = 0LL;
      __a1 = RET_GCG_CHARACTER_ALREADY_DIE;
      std::tuple<proto::Retcode,decltype(nullptr)>::tuple<proto::Retcode,decltype(nullptr),true>(
        (std::tuple<proto::Retcode,std::nullptr_t> *const)__in,
        &__a1,
        &__a2);
      std::tuple<int,std::shared_ptr<GCGActionBase>>::tuple<proto::Retcode,decltype(nullptr),true>(
        retstr,
        (std::tuple<proto::Retcode,std::nullptr_t> *)__in);
      goto LABEL_70;
    }
    v20 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 64));
    Guid = GCGCard::getGuid(v20);
    if ( *(_BYTE *)(((unsigned __int64)target_card_guid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)target_card_guid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)target_card_guid >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_store4(target_card_guid);
    }
    *target_card_guid = Guid;
    GCGField::getCharacterZone(field);
    GCGCharacterZone::getOnStageCard((GCGCharacterZone *const)(p_M_single_bucket + 96));
    GCGSkillResult::GCGSkillResult((GCGSkillResult *const)(p_M_single_bucket + 400));
    if ( !GCGDiceZone::isNoNeedCost(dice_zone) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      SkillLogic = GCGGameMode::getSkillLogic(this->game_mode_);
      std::shared_ptr<GCGCard>::shared_ptr(
        (std::shared_ptr<GCGCard> *const)__in,
        (const std::shared_ptr<GCGCard> *)(p_M_single_bucket + 64));
      std::shared_ptr<GCGCard>::shared_ptr(
        (std::shared_ptr<GCGCard> *const)(p_M_single_bucket + 128),
        (const std::shared_ptr<GCGCard> *)(p_M_single_bucket + 96));
      if ( *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&op->controller_id);
      }
      *(_DWORD *)(p_M_single_bucket + 32) = GCGSkillLogic::getReviseOnStageChangeCost(
                                              SkillLogic,
                                              op->controller_id,
                                              (GCGCardPtr *)(p_M_single_bucket + 128),
                                              (GCGCardPtr *)__in,
                                              (GCGSkillResult *)(p_M_single_bucket + 400),
                                              0);
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(p_M_single_bucket + 128));
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)__in);
      if ( std::set<unsigned int>::size(&op->select_dice_set) != *(_DWORD *)(p_M_single_bucket + 32) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/phase/gcg_phase_main.cpp",
          "selectOnstage",
          662);
        v23 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                (common::milog::MiLogStream *const)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin,
                (const char (*)[37])"[GCG_RET] dice size invalid. need:  ");
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v23,
                (const unsigned int *)(p_M_single_bucket + 32));
        v25 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v24, (const char (*)[10])" select: ");
        v26 = common::milog::MiLogStream::operator<<<unsigned int>(v25, &op->select_dice_set);
        v27 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v26, (const char (*)[9])" revise:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v27,
          (const unsigned int *)(p_M_single_bucket + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin);
        __a2 = 0LL;
        __a1 = RET_GCG_DICE_INDEX_INVALID;
        std::tuple<proto::Retcode,decltype(nullptr)>::tuple<proto::Retcode,decltype(nullptr),true>(
          (std::tuple<proto::Retcode,std::nullptr_t> *const)__in,
          &__a1,
          &__a2);
        std::tuple<int,std::shared_ptr<GCGActionBase>>::tuple<proto::Retcode,decltype(nullptr),true>(
          retstr,
          (std::tuple<proto::Retcode,std::nullptr_t> *)__in);
LABEL_69:
        GCGSkillResult::~GCGSkillResult((GCGSkillResult *const)(p_M_single_bucket + 400));
        std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(p_M_single_bucket + 96));
        goto LABEL_70;
      }
      __for_range = &op->select_dice_set;
      __for_begin._M_node = std::set<unsigned int>::begin(&op->select_dice_set)._M_node;
      __for_end._M_node = std::set<unsigned int>::end(&op->select_dice_set)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v28 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
        v29 = v28;
        if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v28);
        }
        *(_DWORD *)(p_M_single_bucket + 48) = *v29;
        DiceZone = GCGField::getDiceZone(field);
        if ( !GCGDiceZone::isDiceValid(DiceZone, *(_DWORD *)(p_M_single_bucket + 48)) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/phase/gcg_phase_main.cpp",
            "selectOnstage",
            670);
          v31 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  (common::milog::MiLogStream *const)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin,
                  (const char (*)[38])"[GCG_RET] dice index invalid. index: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v31,
            (const unsigned int *)(p_M_single_bucket + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin);
          __a2 = 0LL;
          __a1 = RET_GCG_DICE_INDEX_INVALID;
          std::tuple<proto::Retcode,decltype(nullptr)>::tuple<proto::Retcode,decltype(nullptr),true>(
            (std::tuple<proto::Retcode,std::nullptr_t> *const)__in,
            &__a1,
            &__a2);
          std::tuple<int,std::shared_ptr<GCGActionBase>>::tuple<proto::Retcode,decltype(nullptr),true>(
            retstr,
            (std::tuple<proto::Retcode,std::nullptr_t> *)__in);
          goto LABEL_69;
        }
        std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
      }
    }
    else if ( !std::set<unsigned int>::empty(&op->select_dice_set) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/phase/gcg_phase_main.cpp",
        "selectOnstage",
        679);
      common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
        (common::milog::MiLogStream *const)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin,
        (const char (*)[62])"[GCG_RET] no_dice_cost is true but select_dice_set not empty.");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin);
      __a2 = 0LL;
      __a1 = RET_GCG_DICE_INDEX_INVALID;
      std::tuple<proto::Retcode,decltype(nullptr)>::tuple<proto::Retcode,decltype(nullptr),true>(
        (std::tuple<proto::Retcode,std::nullptr_t> *const)__in,
        &__a1,
        &__a2);
      std::tuple<int,std::shared_ptr<GCGActionBase>>::tuple<proto::Retcode,decltype(nullptr),true>(
        retstr,
        (std::tuple<proto::Retcode,std::nullptr_t> *)__in);
      goto LABEL_69;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    ActionMgr = (unsigned int)GCGGameMode::getActionMgr(this->game_mode_);
    if ( *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&op->controller_id);
    }
    GCGActionMgr::createAction<GCGActionSelectOnStage>(
      (GCGActionMgr *const)(p_M_single_bucket + 128),
      (GCGControllerValue)ActionMgr);
    if ( std::operator==<GCGActionSelectOnStage>(
           (const std::shared_ptr<GCGActionSelectOnStage> *)(p_M_single_bucket + 128),
           0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/phase/gcg_phase_main.cpp",
        "selectOnstage",
        687);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        (common::milog::MiLogStream *const)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin,
        (const char (*)[29])"[GCG_RET] createAction fail.");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin);
      __a2 = 0LL;
      __a1 = RET_FAIL;
      std::tuple<int,decltype(nullptr)>::tuple<int,decltype(nullptr),true>(
        (std::tuple<int,std::nullptr_t> *const)__in,
        (int *)&__a1,
        &__a2);
      std::tuple<int,std::shared_ptr<GCGActionBase>>::tuple<int,decltype(nullptr),true>(
        retstr,
        (std::tuple<int,std::nullptr_t> *)__in);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      v33 = GCGGameMode::getSkillLogic(this->game_mode_);
      GCGSkillLogic::refreshPreviewSkillUse(v33, (GCGSkillResult *)(p_M_single_bucket + 400));
      v34 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 64));
      v35 = GCGCard::getGuid(v34);
      v36 = std::__shared_ptr_access<GCGActionSelectOnStage,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionSelectOnStage,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 128));
      if ( *(_BYTE *)(((unsigned __int64)&v36->card_guid >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v36->card_guid >> 3) + 0x7FFF8000) <= 3 )
      {
        v36 = (std::__shared_ptr_access<GCGActionSelectOnStage,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v36->card_guid);
      }
      v36->card_guid = v35;
      if ( !GCGDiceZone::isNoNeedCost(dice_zone) )
      {
        v37 = std::__shared_ptr_access<GCGActionSelectOnStage,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionSelectOnStage,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 128));
        std::set<unsigned int>::operator=(&v37->select_dice_set, &op->select_dice_set);
      }
      GCGSkillUseParam::GCGSkillUseParam((GCGSkillUseParam *const)(p_M_single_bucket + 160));
      *(_DWORD *)(p_M_single_bucket + 176) = 1;
      std::shared_ptr<GCGCard>::operator=(
        (std::shared_ptr<GCGCard> *const)(p_M_single_bucket + 184),
        (const std::shared_ptr<GCGCard> *)(p_M_single_bucket + 96));
      std::shared_ptr<GCGSkill>::shared_ptr((std::shared_ptr<GCGSkill> *const)__in, 0LL);
      std::shared_ptr<GCGSkill>::operator=(
        (std::shared_ptr<GCGSkill> *const)(p_M_single_bucket + 160),
        (std::shared_ptr<GCGSkill> *)__in);
      std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)__in);
      *(_DWORD *)(p_M_single_bucket + 272) = GCGField::getControllerId(field);
      std::shared_ptr<GCGCard>::operator=(
        (std::shared_ptr<GCGCard> *const)(p_M_single_bucket + 200),
        (const std::shared_ptr<GCGCard> *)(p_M_single_bucket + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      v38 = GCGGameMode::getSkillLogic(this->game_mode_);
      if ( !GCGSkillLogic::canChangeCharacterBeQuickAction(v38, (const GCGSkillUseParam *)(p_M_single_bucket + 160)) )
      {
        v39 = this;
        if ( *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&op->controller_id);
        }
        GCGPhaseBase::markControllerDone(v39, op->controller_id);
      }
      else
      {
        v40 = std::__shared_ptr_access<GCGActionSelectOnStage,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionSelectOnStage,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 128));
        if ( *(char *)(((unsigned __int64)&v40->is_quickly >> 3) + 0x7FFF8000) < 0 )
          v40 = (std::__shared_ptr_access<GCGActionSelectOnStage,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store1(&v40->is_quickly);
        v40->is_quickly = 1;
      }
      __a1 = RET_SUCC;
      std::tuple<int,std::shared_ptr<GCGActionSelectOnStage>>::tuple<int,std::shared_ptr<GCGActionSelectOnStage>&,true>(
        (std::tuple<int,std::shared_ptr<GCGActionSelectOnStage> > *const)&__in[0]._M_weak_this._M_refcount,
        (int *)&__a1,
        (std::shared_ptr<GCGActionSelectOnStage> *)(p_M_single_bucket + 128));
      std::tuple<int,std::shared_ptr<GCGActionBase>>::tuple<int,std::shared_ptr<GCGActionSelectOnStage>,true>(
        retstr,
        (std::tuple<int,std::shared_ptr<GCGActionSelectOnStage> > *)&__in[0]._M_weak_this._M_refcount);
      std::tuple<int,std::shared_ptr<GCGActionSelectOnStage>>::~tuple((std::tuple<int,std::shared_ptr<GCGActionSelectOnStage> > *const)&__in[0]._M_weak_this._M_refcount);
      GCGSkillUseParam::~GCGSkillUseParam((GCGSkillUseParam *const)(p_M_single_bucket + 160));
    }
    std::shared_ptr<GCGActionSelectOnStage>::~shared_ptr((std::shared_ptr<GCGActionSelectOnStage> *const)(p_M_single_bucket + 128));
    goto LABEL_69;
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/phase/gcg_phase_main.cpp",
    "selectOnstage",
    619);
  v11 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
          (common::milog::MiLogStream *const)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin,
          (const char (*)[41])"[GCG_RET] character card guid not found.");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &op->card_guid);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__in[0].normal_data_.zone_skill_category_set_._M_h._M_before_begin);
  __a2 = 0LL;
  __a1 = RET_GCG_CHARACTER_GUID_INVALID;
  std::tuple<proto::Retcode,decltype(nullptr)>::tuple<proto::Retcode,decltype(nullptr),true>(
    (std::tuple<proto::Retcode,std::nullptr_t> *const)__in,
    &__a1,
    &__a2);
  std::tuple<int,std::shared_ptr<GCGActionBase>>::tuple<proto::Retcode,decltype(nullptr),true>(
    retstr,
    (std::tuple<proto::Retcode,std::nullptr_t> *)__in);
LABEL_70:
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(p_M_single_bucket + 64));
LABEL_71:
  if ( &__in[0].normal_data_.zone_skill_category_set_._M_h._M_single_bucket == (std::_Hashtable<GCGEffectCategoryType,GCGEffectCategoryType,std::allocator<GCGEffectCategoryType>,std::__detail::_Identity,std::equal_to<GCGEffectCategoryType>,std::hash<GCGEffectCategoryType>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,false> >::__bucket_type *)p_M_single_bucket )
  {
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((p_M_single_bucket >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((p_M_single_bucket >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8060) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_single_bucket = 1172321806LL;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 630: range 000000000D79358E-000000000D793611
ForeachPolicy __cdecl GCGPhaseMain::selectOnstage(GCGOperationOnStageSelect const&,unsigned int &)::{lambda(GCGCard &)#1}::operator()(
        const GCGPhaseMain::selectOnstage::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  std::enable_shared_from_this<GCGCard> v3; // [rsp+10h] [rbp-10h] BYREF

  if ( !GCGCard::isAlive(card) )
    return 0;
  std::enable_shared_from_this<GCGCard>::shared_from_this(&v3);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  std::shared_ptr<GCGCard>::operator=(__closure->__target_card_ptr, (std::shared_ptr<GCGCard> *)&v3);
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)&v3);
  return 1;
};

// Line 721: range 000000000D794AFE-000000000D794EC5
GCGPhaseMain *__fastcall GCGPhaseMain::tryCreateAutoOperation(
        GCGPhaseMain *const this,
        GCGPhaseMain *controller_id,
        int a3)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  GCGDuel *Duel; // rax
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  GCGControllerValue v9; // r14d
  std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rdx
  uint32_t *p_skill_id; // rax
  std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  uint32_t assign_use_skill_id; // [rsp+24h] [rbp-DCh]
  GCGField *field; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-D0h] BYREF
  char v20[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 17 controller_id:720 64 16 19 source_card_ptr:723 96 16 17 attack_op_ptr:734";
  *(_QWORD *)(v3 + 16) = GCGPhaseMain::tryCreateAutoOperation;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = a3;
  if ( *(_BYTE *)(((unsigned __int64)&controller_id->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&controller_id->game_mode_);
  Duel = GCGGameMode::getDuel(controller_id->game_mode_);
  field = GCGDuel::getField(Duel, (GCGControllerValue)*(_DWORD *)(v3 + 48));
  GCGField::getCharacterZone(field);
  GCGCharacterZone::getOnStageCard((GCGCharacterZone *const)(v3 + 64));
  if ( std::operator==<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/phase/gcg_phase_main.cpp",
      "tryCreateAutoOperation",
      726);
    v7 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v19,
           (const char (*)[49])"[GCG_RET] get onstage card fail. controller_id: ");
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
      v7,
      (const proto::GCGControllerValue *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v19);
    std::shared_ptr<GCGOperationBase>::shared_ptr((std::shared_ptr<GCGOperationBase> *const)this, 0LL);
  }
  else
  {
    v8 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    assign_use_skill_id = GCGPhaseMain::assignUseSkill(controller_id, v8);
    if ( assign_use_skill_id )
    {
      common::tools::perf::make_shared<GCGOperationAttack>();
      v9 = *(_DWORD *)(v3 + 48);
      v10 = std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v10->controller_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v10->controller_id >> 3) + 0x7FFF8000) <= 3 )
      {
        v10 = (std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v10->controller_id);
      }
      v10->controller_id = v9;
      v11 = std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      p_skill_id = &v11->skill_id;
      if ( *(_BYTE *)(((unsigned __int64)p_skill_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_skill_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_skill_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(p_skill_id);
      }
      v11->skill_id = assign_use_skill_id;
      v13 = std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      std::set<unsigned int>::clear(&v13->cost_dice_set);
      v14 = std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( *(char *)(((unsigned __int64)&v14->is_auto_use >> 3) + 0x7FFF8000) < 0 )
        v14 = (std::__shared_ptr_access<GCGOperationAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store1(&v14->is_auto_use);
      v14->is_auto_use = 1;
      std::shared_ptr<GCGOperationBase>::shared_ptr<GCGOperationAttack,void>(
        (std::shared_ptr<GCGOperationBase> *const)this,
        (std::shared_ptr<GCGOperationAttack> *)(v3 + 96));
      std::shared_ptr<GCGOperationAttack>::~shared_ptr((std::shared_ptr<GCGOperationAttack> *const)(v3 + 96));
    }
    else
    {
      std::shared_ptr<GCGOperationBase>::shared_ptr((std::shared_ptr<GCGOperationBase> *const)this, 0LL);
    }
  }
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 64));
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return this;
};

// Line 748: range 000000000D794EC6-000000000D79517C
uint32_t __cdecl GCGPhaseMain::assignUseSkill(GCGPhaseMain *const this, const GCGCard *card)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  GCGSkillLogic *SkillLogic; // r14
  GCGControllerValue ControllerId; // eax
  uint32_t result; // eax
  int __u; // [rsp+1Ch] [rbp-2F4h] BYREF
  char v9[752]; // [rsp+20h] [rbp-2F0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(704LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 168 15 skill_param:749 272 368 16 skill_result:753";
  *(_QWORD *)(v2 + 16) = GCGPhaseMain::assignUseSkill;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862726] = -218959360;
  v4[536862727] = -218959118;
  v4[536862728] = 62194;
  v4[536862740] = -202116109;
  v4[536862741] = -202116109;
  GCGSkillUseParam::GCGSkillUseParam((GCGSkillUseParam *const)(v2 + 32));
  *(_DWORD *)(v2 + 48) = 1;
  *(_DWORD *)(v2 + 144) = GCGCard::getControllerId(card);
  GCGSkillUseParam::setEffectCategroyType((GCGSkillUseParam *const)(v2 + 32), PASSIVE_CATEGORY_ASSIGN_USE_SKILL);
  GCGSkillResult::GCGSkillResult((GCGSkillResult *const)(v2 + 272));
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  SkillLogic = GCGGameMode::getSkillLogic(this->game_mode_);
  ControllerId = GCGCard::getControllerId(card);
  GCGSkillLogic::doCurControllerOnStageAllModifyCardEffects(
    SkillLogic,
    ControllerId,
    (const GCGSkillUseParam *)(v2 + 32),
    (GCGSkillResult *)(v2 + 272));
  __u = 0;
  LODWORD(SkillLogic) = std::optional<unsigned int>::value_or<int>(
                          (const std::optional<unsigned int> *const)(v2 + 472),
                          &__u);
  GCGSkillResult::~GCGSkillResult((GCGSkillResult *const)(v2 + 272));
  GCGSkillUseParam::~GCGSkillUseParam((GCGSkillUseParam *const)(v2 + 32));
  result = (unsigned int)SkillLogic;
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

// Line 759: range 000000000D79517E-000000000D7953F1
void __cdecl GCGPhaseMain::notifyCost(GCGPhaseMain *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  signed int ActionMgr; // eax
  unsigned __int64 v5; // rax
  void (__fastcall *v6)(GCGPhaseMain *const, std::shared_ptr<GCGActionBase> *); // r14
  std::shared_ptr<GCGActionBase> v7; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-90h] BYREF
  char v9[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 action_ptr:761";
  *(_QWORD *)(v1 + 16) = GCGPhaseMain::notifyCost;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  ActionMgr = (unsigned int)GCGGameMode::getActionMgr(this->game_mode_);
  GCGActionMgr::createAction<GCGActionNotifyCost>((GCGActionMgr *const)(v1 + 32), (GCGControllerValue)ActionMgr);
  if ( std::operator==<GCGActionNotifyCost>((const std::shared_ptr<GCGActionNotifyCost> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/phase/gcg_phase_main.cpp",
      "notifyCost",
      764);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v8,
      (const char (*)[29])"[GCG_RET] createAction fail.");
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v5 = (unsigned __int64)(this->_vptr_GCGPhaseBase + 5);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8(this->_vptr_GCGPhaseBase + 5);
    v6 = *(void (__fastcall **)(GCGPhaseMain *const, std::shared_ptr<GCGActionBase> *))v5;
    std::shared_ptr<GCGActionBase>::shared_ptr<GCGActionNotifyCost,void>(
      &v7,
      (const std::shared_ptr<GCGActionNotifyCost> *)(v1 + 32));
    v6(this, &v7);
    std::shared_ptr<GCGActionBase>::~shared_ptr(&v7);
  }
  std::shared_ptr<GCGActionNotifyCost>::~shared_ptr((std::shared_ptr<GCGActionNotifyCost> *const)(v1 + 32));
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 771: range 000000000D7953F2-000000000D795665
void __cdecl GCGPhaseMain::notifySkillPreview(GCGPhaseMain *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  signed int ActionMgr; // eax
  unsigned __int64 v5; // rax
  void (__fastcall *v6)(GCGPhaseMain *const, std::shared_ptr<GCGActionBase> *); // r14
  std::shared_ptr<GCGActionBase> v7; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-90h] BYREF
  char v9[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 action_ptr:772";
  *(_QWORD *)(v1 + 16) = GCGPhaseMain::notifySkillPreview;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  ActionMgr = (unsigned int)GCGGameMode::getActionMgr(this->game_mode_);
  GCGActionMgr::createAction<GCGActionNotifySkillPreview>((GCGActionMgr *const)(v1 + 32), (GCGControllerValue)ActionMgr);
  if ( std::operator==<GCGActionNotifySkillPreview>(
         (const std::shared_ptr<GCGActionNotifySkillPreview> *)(v1 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/phase/gcg_phase_main.cpp",
      "notifySkillPreview",
      775);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v8,
      (const char (*)[29])"[GCG_RET] createAction fail.");
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v5 = (unsigned __int64)(this->_vptr_GCGPhaseBase + 5);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8(this->_vptr_GCGPhaseBase + 5);
    v6 = *(void (__fastcall **)(GCGPhaseMain *const, std::shared_ptr<GCGActionBase> *))v5;
    std::shared_ptr<GCGActionBase>::shared_ptr<GCGActionNotifySkillPreview,void>(
      &v7,
      (const std::shared_ptr<GCGActionNotifySkillPreview> *)(v1 + 32));
    v6(this, &v7);
    std::shared_ptr<GCGActionBase>::~shared_ptr(&v7);
  }
  std::shared_ptr<GCGActionNotifySkillPreview>::~shared_ptr((std::shared_ptr<GCGActionNotifySkillPreview> *const)(v1 + 32));
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 782: range 000000000D795666-000000000D79584B
int32_t __cdecl GCGPhaseMain::enqueueAction(GCGPhaseMain *const this, GCGActionBasePtr *p_action_ptr)
{
  int32_t v2; // ebx
  common::milog::MiLogStream *v3; // rbx
  std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::shared_ptr<GCGActionBase> v6; // [rsp+10h] [rbp-60h] BYREF
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-50h] BYREF
  std::string val; // [rsp+40h] [rbp-30h] BYREF

  if ( std::operator==<GCGActionBase>(p_action_ptr, 0LL) )
    return -1;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  if ( !GCGGameMode::isDuringSnapshot(this->game_mode_) )
  {
    std::shared_ptr<GCGActionBase>::shared_ptr(&v6, p_action_ptr);
    v2 = GCGPhaseBase::enqueueAction(this, &v6);
    std::shared_ptr<GCGActionBase>::~shared_ptr(&v6);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/phase/gcg_phase_main.cpp",
      "enqueueAction",
      791);
    v3 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v7,
           (const char (*)[26])"[PREVIEW] action enqueue:");
    v4 = std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_action_ptr);
    GCGActionBase::getDesc[abi:cxx11](&val, v4);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v3, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v7);
    GCGPhaseMain::refreshPreviewActionQueue(this);
    std::shared_ptr<GCGActionBase>::shared_ptr(&v6, p_action_ptr);
    GCGActionQueue::enqueueAction((GCGActionQueue_0 *const)&this->preview_action_queue_, &v6);
    std::shared_ptr<GCGActionBase>::~shared_ptr(&v6);
    return 0;
  }
  return v2;
};

// Line 799: range 000000000D79584C-000000000D79591C
GCGActionBasePtr __cdecl GCGPhaseMain::dequeueAction(GCGPhaseMain *const this)
{
  GCGPhaseMain *v1; // rsi
  GCGActionBasePtr result; // rax

  if ( *(_BYTE *)(((unsigned __int64)&v1->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&v1->game_mode_);
  if ( !GCGGameMode::isDuringSnapshot(v1->game_mode_) )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, v1);
    result = GCGPhaseBase::dequeueAction(this);
  }
  else
  {
    GCGPhaseMain::refreshPreviewActionQueue(v1);
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, v1);
    result = GCGActionQueue::dequeueAction((GCGActionQueue_0 *const)this);
  }
  result._M_ptr = (std::__shared_ptr<GCGActionBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 810: range 000000000D79591E-000000000D795A81
void __cdecl GCGPhaseMain::refreshPreviewActionQueue(GCGPhaseMain *const this)
{
  uint32_t last_preview_snapshot_id; // ebx
  uint32_t SnapshotVersionId; // edx

  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  if ( GCGGameMode::isDuringSnapshot(this->game_mode_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->last_preview_snapshot_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_preview_snapshot_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->last_preview_snapshot_id_);
    }
    last_preview_snapshot_id = this->last_preview_snapshot_id_;
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    if ( last_preview_snapshot_id != GCGGameMode::getSnapshotVersionId(this->game_mode_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      SnapshotVersionId = GCGGameMode::getSnapshotVersionId(this->game_mode_);
      if ( *(_BYTE *)(((unsigned __int64)&this->last_preview_snapshot_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->last_preview_snapshot_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->last_preview_snapshot_id_);
      }
      this->last_preview_snapshot_id_ = SnapshotVersionId;
      GCGActionQueue::clear(&this->preview_action_queue_);
    }
  }
};
