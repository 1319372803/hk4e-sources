// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/phase/gcg_phase_draw.cpp

// Line 22: range 000000000D78A896-000000000D78A955
void __cdecl GCGPhaseDraw::onInit(GCGPhaseDraw *const this)
{
  const GCGRule *rule; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  rule = GCGGameMode::rule(this->game_mode_);
  if ( *(_BYTE *)(((unsigned __int64)&rule->is_ignore_redraw >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)rule - 95) & 7) >= *(_BYTE *)(((unsigned __int64)&rule->is_ignore_redraw >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&rule->is_ignore_redraw);
  }
  if ( !rule->is_ignore_redraw )
  {
    GCGPhaseBase::addAllowController(this, GCG_CONTROLLER_A, 1u);
    GCGPhaseBase::addAllowController(this, GCG_CONTROLLER_B, 1u);
  }
};

// Line 32: range 000000000D78A956-000000000D78AF32
void __cdecl GCGPhaseDraw::onPhaseEnter(GCGPhaseDraw *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  GCGField *Field; // rax
  GCGCardZone *DeckZone; // rax
  signed int ActionMgr; // eax
  uint32_t first_hand_card_num; // r14d
  std::__shared_ptr_access<GCGActionDraw,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  unsigned __int64 v9; // rax
  void (__fastcall *v10)(GCGPhaseDraw *const, std::shared_ptr<GCGActionBase> *); // r15
  GCGField *v11; // rax
  GCGCardZone *v12; // rax
  signed int v13; // eax
  uint32_t second_hand_card_num; // r14d
  std::__shared_ptr_access<GCGActionDraw,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  unsigned __int64 v16; // rax
  void (__fastcall *v17)(GCGPhaseDraw *const, std::shared_ptr<GCGActionBase> *); // r15
  GCGPhaseMgr *PhaseMgr; // rax
  GCGControllerValue cur_controller_id; // [rsp+18h] [rbp-98h]
  GCGControllerValue other_controller_id; // [rsp+1Ch] [rbp-94h]
  const GCGRule *rule; // [rsp+20h] [rbp-90h]
  GCGDuel *duel; // [rsp+28h] [rbp-88h]
  std::shared_ptr<GCGActionBase> v23; // [rsp+30h] [rbp-80h] BYREF
  char v24[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 action_ptr:54";
  *(_QWORD *)(v1 + 16) = GCGPhaseDraw::onPhaseEnter;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  rule = GCGGameMode::rule(this->game_mode_);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  duel = GCGGameMode::getDuel(this->game_mode_);
  cur_controller_id = GCGDuel::getCurControllerId(duel);
  other_controller_id = (unsigned int)GCGDuel::getOtherControllerId(duel, cur_controller_id);
  Field = GCGDuel::getField(duel, cur_controller_id);
  DeckZone = GCGField::getDeckZone(Field);
  if ( GCGCardZone::getSize(DeckZone) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    ActionMgr = (unsigned int)GCGGameMode::getActionMgr(this->game_mode_);
    GCGActionMgr::createAction<GCGActionDraw>((GCGActionMgr *const)(v1 + 32), (GCGControllerValue)ActionMgr);
    if ( std::operator!=<GCGActionDraw>((const std::shared_ptr<GCGActionDraw> *)(v1 + 32), 0LL) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&rule->first_hand_card_num >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&rule->first_hand_card_num >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&rule->first_hand_card_num);
      }
      first_hand_card_num = rule->first_hand_card_num;
      v8 = std::__shared_ptr_access<GCGActionDraw,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionDraw,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v8->count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v8->count >> 3) + 0x7FFF8000) <= 3 )
      {
        v8 = (std::__shared_ptr_access<GCGActionDraw,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v8->count);
      }
      v8->count = first_hand_card_num;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v9 = (unsigned __int64)(this->_vptr_GCGPhaseBase + 5);
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        __asan_report_load8(this->_vptr_GCGPhaseBase + 5);
      v10 = *(void (__fastcall **)(GCGPhaseDraw *const, std::shared_ptr<GCGActionBase> *))v9;
      std::shared_ptr<GCGActionBase>::shared_ptr<GCGActionDraw,void>(
        &v23,
        (const std::shared_ptr<GCGActionDraw> *)(v1 + 32));
      v10(this, &v23);
      std::shared_ptr<GCGActionBase>::~shared_ptr(&v23);
    }
    std::shared_ptr<GCGActionDraw>::~shared_ptr((std::shared_ptr<GCGActionDraw> *const)(v1 + 32));
  }
  else
  {
    GCGPhaseBase::markControllerAllDone(this, cur_controller_id);
  }
  v11 = GCGDuel::getField(duel, other_controller_id);
  v12 = GCGField::getDeckZone(v11);
  if ( GCGCardZone::getSize(v12) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    v13 = (unsigned int)GCGGameMode::getActionMgr(this->game_mode_);
    GCGActionMgr::createAction<GCGActionDraw>((GCGActionMgr *const)(v1 + 32), (GCGControllerValue)v13);
    if ( std::operator!=<GCGActionDraw>((const std::shared_ptr<GCGActionDraw> *)(v1 + 32), 0LL) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&rule->second_hand_card_num >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)rule + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rule->second_hand_card_num >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&rule->second_hand_card_num);
      }
      second_hand_card_num = rule->second_hand_card_num;
      v15 = std::__shared_ptr_access<GCGActionDraw,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionDraw,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v15->count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v15->count >> 3) + 0x7FFF8000) <= 3 )
      {
        v15 = (std::__shared_ptr_access<GCGActionDraw,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v15->count);
      }
      v15->count = second_hand_card_num;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v16 = (unsigned __int64)(this->_vptr_GCGPhaseBase + 5);
      if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        __asan_report_load8(this->_vptr_GCGPhaseBase + 5);
      v17 = *(void (__fastcall **)(GCGPhaseDraw *const, std::shared_ptr<GCGActionBase> *))v16;
      std::shared_ptr<GCGActionBase>::shared_ptr<GCGActionDraw,void>(
        &v23,
        (const std::shared_ptr<GCGActionDraw> *)(v1 + 32));
      v17(this, &v23);
      std::shared_ptr<GCGActionBase>::~shared_ptr(&v23);
    }
    std::shared_ptr<GCGActionDraw>::~shared_ptr((std::shared_ptr<GCGActionDraw> *const)(v1 + 32));
  }
  else
  {
    GCGPhaseBase::markControllerAllDone(this, other_controller_id);
  }
  if ( GCGPhaseBase::isAllowControllerAllDone(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    PhaseMgr = GCGGameMode::getPhaseMgr(this->game_mode_);
    GCGPhaseMgr::toNextPhase(PhaseMgr);
  }
  if ( v24 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 73: range 000000000D78AF34-000000000D78B468
int32_t __cdecl GCGPhaseDraw::handleOperation(GCGPhaseDraw *const this, const GCGOperationBasePtr *p_operation_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned __int64 v7; // rdx
  int v8; // r15d
  std::__shared_ptr_access<GCGOperationRedraw,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  common::milog::MiLogStream *v10; // r13
  std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  unsigned __int64 v12; // rdx
  GCGPhaseMgr *PhaseMgr; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+28h] [rbp-98h] BYREF
  int32_t ret; // [rsp+2Ch] [rbp-94h]
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-90h] BYREF
  char v18[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 redraw_ptr:85";
  *(_QWORD *)(v3 + 16) = GCGPhaseDraw::handleOperation;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( std::operator==<GCGOperationBase>(p_operation_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/phase/gcg_phase_draw.cpp",
      "handleOperation",
      76);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v17,
      (const char (*)[36])"[GCG_RET] operation ptr is nullptr.");
    common::milog::MiLogStream::~MiLogStream(&v17);
    v2 = -1;
    goto LABEL_27;
  }
  common::milog::MiLogStream::create(
    &v17,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/phase/gcg_phase_draw.cpp",
    "handleOperation",
    79);
  common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v17, (const char (*)[16])"handleOperation");
  common::milog::MiLogStream::~MiLogStream(&v17);
  ret = 0;
  v6 = std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_operation_ptr);
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v6);
  v7 = (unsigned __int64)(v6->_vptr_GCGOperationBase + 2);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v6->_vptr_GCGOperationBase + 2);
  if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v7)(v6) == 2 )
  {
    std::dynamic_pointer_cast<GCGOperationRedraw,GCGOperationBase>((const std::shared_ptr<GCGOperationBase> *)(v3 + 32));
    if ( std::operator==<GCGOperationRedraw>((const std::shared_ptr<GCGOperationRedraw> *)(v3 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/phase/gcg_phase_draw.cpp",
        "handleOperation",
        88);
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
        &v17,
        (const char (*)[36])"[GCG_RET] operation ptr is nullptr.");
      common::milog::MiLogStream::~MiLogStream(&v17);
      v2 = 12001;
      v8 = 0;
    }
    else
    {
      v9 = std::__shared_ptr_access<GCGOperationRedraw,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGOperationRedraw,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      ret = GCGPhaseDraw::redraw(this, v9);
      v8 = 1;
    }
    std::shared_ptr<GCGOperationRedraw>::~shared_ptr((std::shared_ptr<GCGOperationRedraw> *const)(v3 + 32));
    if ( !v8 )
      goto LABEL_27;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/phase/gcg_phase_draw.cpp",
      "handleOperation",
      95);
    v10 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v17,
            (const char (*)[30])"[GCG_RET] op type not match: ");
    v11 = std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_operation_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v11);
    v12 = (unsigned __int64)(v11->_vptr_GCGOperationBase + 2);
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v11->_vptr_GCGOperationBase + 2);
    val = (*(__int64 (__fastcall **)(std::__shared_ptr_access<GCGOperationBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v12)(v11);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    common::milog::MiLogStream::~MiLogStream(&v17);
    ret = 12004;
  }
  if ( !ret && GCGPhaseBase::isAllowControllerAllDone(this) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/phase/gcg_phase_draw.cpp",
      "handleOperation",
      103);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v17, (const char (*)[24])"handleOperation to next");
    common::milog::MiLogStream::~MiLogStream(&v17);
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    PhaseMgr = GCGGameMode::getPhaseMgr(this->game_mode_);
    GCGPhaseMgr::toNextPhase(PhaseMgr);
  }
  v2 = ret;
LABEL_27:
  result = v2;
  if ( v18 == (char *)v3 )
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

// Line 111: range 000000000D78B46A-000000000D78B4AB
GCGOperationBasePtr __cdecl GCGPhaseDraw::defaultOperation(GCGPhaseDraw *const this)
{
  GCGOperationBasePtr result; // rax
  std::shared_ptr<GCGOperationRedraw> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<GCGOperationRedraw>();
  std::shared_ptr<GCGOperationBase>::shared_ptr<GCGOperationRedraw,void>(
    (std::shared_ptr<GCGOperationBase> *const)this,
    &__r);
  std::shared_ptr<GCGOperationRedraw>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<GCGOperationBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 116: range 000000000D78B4AC-000000000D78BAA5
int32_t __cdecl GCGPhaseDraw::redraw(GCGPhaseDraw *const this, const GCGOperationRedraw *op)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  GCGDuel *Duel; // rcx
  GCGField *Field; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v8; // rax
  _DWORD *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  signed int ActionMgr; // ecx
  int v12; // r14d
  std::__shared_ptr_access<GCGActionRedraw,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  GCGPhaseDraw *v14; // rdx
  unsigned __int64 v15; // rax
  GCGPhaseDraw *v16; // rdx
  int32_t result; // eax
  void (__fastcall *v18)(GCGPhaseDraw *const, std::shared_ptr<GCGActionBase> *); // [rsp+8h] [rbp-F8h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-E0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-D8h] BYREF
  GCGCardZone *hand_zone; // [rsp+30h] [rbp-D0h]
  const std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<GCGActionBase> v23; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v24; // [rsp+50h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 card_guid:120 64 16 14 action_ptr:129";
  *(_QWORD *)(v3 + 16) = GCGPhaseDraw::redraw;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  if ( std::set<unsigned int>::empty(&op->select_card_set) )
  {
    v16 = this;
    if ( *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&op->controller_id);
    }
    GCGPhaseBase::markControllerAllDone(v16, op->controller_id);
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
  hand_zone = GCGField::getHandZone(Field);
  __for_range = &op->select_card_set;
  __for_begin._M_node = std::set<unsigned int>::begin(&op->select_card_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&op->select_card_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v8 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    *(_DWORD *)(v3 + 48) = *v9;
    if ( !GCGCardZone::isHasCard(hand_zone, *(_DWORD *)(v3 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/phase/gcg_phase_draw.cpp",
        "redraw",
        124);
      v10 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v24,
              (const char (*)[43])"[GCG_RET] hand zone find card fail. guid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v24);
      v2 = 12005;
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
  GCGActionMgr::createAction<GCGActionRedraw>((GCGActionMgr *const)(v3 + 64), (GCGControllerValue)ActionMgr);
  if ( std::operator==<GCGActionRedraw>((const std::shared_ptr<GCGActionRedraw> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/phase/gcg_phase_draw.cpp",
      "redraw",
      132);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v24,
      (const char (*)[29])"[GCG_RET] createAction fail.");
    common::milog::MiLogStream::~MiLogStream(&v24);
    v2 = -1;
    v12 = 0;
  }
  else
  {
    v13 = std::__shared_ptr_access<GCGActionRedraw,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionRedraw,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    std::set<unsigned int>::operator=(&v13->selected_card_set, &op->select_card_set);
    v14 = this;
    if ( *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&op->controller_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&op->controller_id);
    }
    GCGPhaseBase::markControllerDone(v14, op->controller_id);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v15 = (unsigned __int64)(this->_vptr_GCGPhaseBase + 5);
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      __asan_report_load8(this->_vptr_GCGPhaseBase + 5);
    v18 = *(void (__fastcall **)(GCGPhaseDraw *const, std::shared_ptr<GCGActionBase> *))v15;
    std::shared_ptr<GCGActionBase>::shared_ptr<GCGActionRedraw,void>(
      &v23,
      (const std::shared_ptr<GCGActionRedraw> *)(v3 + 64));
    v18(this, &v23);
    std::shared_ptr<GCGActionBase>::~shared_ptr(&v23);
    v12 = 1;
  }
  std::shared_ptr<GCGActionRedraw>::~shared_ptr((std::shared_ptr<GCGActionRedraw> *const)(v3 + 64));
  if ( v12 == 1 )
    goto LABEL_34;
LABEL_35:
  result = v2;
  if ( v25 == (char *)v3 )
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
  return result;
};
