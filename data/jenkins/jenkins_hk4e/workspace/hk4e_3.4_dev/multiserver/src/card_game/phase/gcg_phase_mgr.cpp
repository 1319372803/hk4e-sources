// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/phase/gcg_phase_mgr.cpp

// Line 29: range 000000000D7B2D40-000000000D7B2DCD
GCGPhaseType __cdecl GCGPhaseMgr::getCurPhaseType(GCGPhaseMgr *const this)
{
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  unsigned __int64 v3; // rdx

  if ( std::operator==<GCGPhaseBase>(&this->cur_phase_ptr_, 0LL) )
    return 0;
  v2 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_phase_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v2);
  v3 = (unsigned __int64)(v2->_vptr_GCGPhaseBase + 3);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v2->_vptr_GCGPhaseBase + 3);
  return (*(unsigned int (__fastcall **)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v3)(v2);
};

// Line 38: range 000000000D7B2DCE-000000000D7B3395
// local variable allocation has failed, the output may be wrong!
GCGPhaseBasePtr __cdecl GCGPhaseMgr::createPhase(GCGPhaseMgr *const this, GCGPhaseType phase)
{
  GCGPhaseType v2; // edx
  GCGPhaseBasePtr result; // rax
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  unsigned __int64 v5; // rdx
  GCGPhaseType phasea; // [rsp+Ch] [rbp-E4h]
  std::shared_ptr<GCGPhaseStart> __r; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<GCGPhaseDraw> v8; // [rsp+30h] [rbp-C0h] BYREF
  std::shared_ptr<GCGPhaseOnStage> v9; // [rsp+40h] [rbp-B0h] BYREF
  std::shared_ptr<GCGPhaseDice> v10; // [rsp+50h] [rbp-A0h] BYREF
  std::shared_ptr<GCGPhasePreMain> v11; // [rsp+60h] [rbp-90h] BYREF
  std::shared_ptr<GCGPhaseMain> v12; // [rsp+70h] [rbp-80h] BYREF
  std::shared_ptr<GCGPhaseEnd> v13; // [rsp+80h] [rbp-70h] BYREF
  std::shared_ptr<GCGPhaseDie> v14; // [rsp+90h] [rbp-60h] BYREF
  std::shared_ptr<GCGPhaseFin> v15; // [rsp+A0h] [rbp-50h] BYREF
  std::shared_ptr<GCGPhaseReroll> v16; // [rsp+B0h] [rbp-40h] BYREF
  common::milog::MiLogStream v17; // [rsp+C0h] [rbp-30h] BYREF

  phasea = v2;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&phase);
  this->game_mode_ = 0LL;
  *(_QWORD *)&this->pre_phase_type = 0LL;
  switch ( phasea )
  {
    case GCG_PHASE_START:
      if ( *(_BYTE *)((*(_QWORD *)&phase >> 3) + 0x7FFF8000LL) )
        __asan_report_load8(phase);
      common::tools::perf::make_shared<GCGPhaseStart,GCGGameMode &>((GCGGameMode *)&__r, **(GCGGameMode ***)&phase);
      std::shared_ptr<GCGPhaseBase>::operator=<GCGPhaseStart>((std::shared_ptr<GCGPhaseBase> *const)this, &__r);
      std::shared_ptr<GCGPhaseStart>::~shared_ptr(&__r);
      break;
    case GCG_PHASE_DRAW:
      if ( *(_BYTE *)((*(_QWORD *)&phase >> 3) + 0x7FFF8000LL) )
        __asan_report_load8(phase);
      common::tools::perf::make_shared<GCGPhaseDraw,GCGGameMode &>((GCGGameMode *)&v8, **(GCGGameMode ***)&phase);
      std::shared_ptr<GCGPhaseBase>::operator=<GCGPhaseDraw>((std::shared_ptr<GCGPhaseBase> *const)this, &v8);
      std::shared_ptr<GCGPhaseDraw>::~shared_ptr(&v8);
      break;
    case GCG_PHASE_ON_STAGE:
      if ( *(_BYTE *)((*(_QWORD *)&phase >> 3) + 0x7FFF8000LL) )
        __asan_report_load8(phase);
      common::tools::perf::make_shared<GCGPhaseOnStage,GCGGameMode &>((GCGGameMode *)&v9, **(GCGGameMode ***)&phase);
      std::shared_ptr<GCGPhaseBase>::operator=<GCGPhaseOnStage>((std::shared_ptr<GCGPhaseBase> *const)this, &v9);
      std::shared_ptr<GCGPhaseOnStage>::~shared_ptr(&v9);
      break;
    case GCG_PHASE_DICE:
      if ( *(_BYTE *)((*(_QWORD *)&phase >> 3) + 0x7FFF8000LL) )
        __asan_report_load8(phase);
      common::tools::perf::make_shared<GCGPhaseDice,GCGGameMode &>((GCGGameMode *)&v10, **(GCGGameMode ***)&phase);
      std::shared_ptr<GCGPhaseBase>::operator=<GCGPhaseDice>((std::shared_ptr<GCGPhaseBase> *const)this, &v10);
      std::shared_ptr<GCGPhaseDice>::~shared_ptr(&v10);
      break;
    case GCG_PHASE_MAIN:
      if ( *(_BYTE *)((*(_QWORD *)&phase >> 3) + 0x7FFF8000LL) )
        __asan_report_load8(phase);
      common::tools::perf::make_shared<GCGPhaseMain,GCGGameMode &>((GCGGameMode *)&v12, **(GCGGameMode ***)&phase);
      std::shared_ptr<GCGPhaseBase>::operator=<GCGPhaseMain>((std::shared_ptr<GCGPhaseBase> *const)this, &v12);
      std::shared_ptr<GCGPhaseMain>::~shared_ptr(&v12);
      break;
    case GCG_PHASE_END:
      if ( *(_BYTE *)((*(_QWORD *)&phase >> 3) + 0x7FFF8000LL) )
        __asan_report_load8(phase);
      common::tools::perf::make_shared<GCGPhaseEnd,GCGGameMode &>((GCGGameMode *)&v13, **(GCGGameMode ***)&phase);
      std::shared_ptr<GCGPhaseBase>::operator=<GCGPhaseEnd>((std::shared_ptr<GCGPhaseBase> *const)this, &v13);
      std::shared_ptr<GCGPhaseEnd>::~shared_ptr(&v13);
      break;
    case GCG_PHASE_DIE:
      if ( *(_BYTE *)((*(_QWORD *)&phase >> 3) + 0x7FFF8000LL) )
        __asan_report_load8(phase);
      common::tools::perf::make_shared<GCGPhaseDie,GCGGameMode &>((GCGGameMode *)&v14, **(GCGGameMode ***)&phase);
      std::shared_ptr<GCGPhaseBase>::operator=<GCGPhaseDie>((std::shared_ptr<GCGPhaseBase> *const)this, &v14);
      std::shared_ptr<GCGPhaseDie>::~shared_ptr(&v14);
      break;
    case GCG_PHASE_FIN:
      if ( *(_BYTE *)((*(_QWORD *)&phase >> 3) + 0x7FFF8000LL) )
        __asan_report_load8(phase);
      common::tools::perf::make_shared<GCGPhaseFin,GCGGameMode &>((GCGGameMode *)&v15, **(GCGGameMode ***)&phase);
      std::shared_ptr<GCGPhaseBase>::operator=<GCGPhaseFin>((std::shared_ptr<GCGPhaseBase> *const)this, &v15);
      std::shared_ptr<GCGPhaseFin>::~shared_ptr(&v15);
      break;
    case GCG_PHASE_PRE_MAIN:
      if ( *(_BYTE *)((*(_QWORD *)&phase >> 3) + 0x7FFF8000LL) )
        __asan_report_load8(phase);
      common::tools::perf::make_shared<GCGPhasePreMain,GCGGameMode &>((GCGGameMode *)&v11, **(GCGGameMode ***)&phase);
      std::shared_ptr<GCGPhaseBase>::operator=<GCGPhasePreMain>((std::shared_ptr<GCGPhaseBase> *const)this, &v11);
      std::shared_ptr<GCGPhasePreMain>::~shared_ptr(&v11);
      break;
    case GCG_PHASE_REROLL:
      if ( *(_BYTE *)((*(_QWORD *)&phase >> 3) + 0x7FFF8000LL) )
        __asan_report_load8(phase);
      common::tools::perf::make_shared<GCGPhaseReroll,GCGGameMode &>((GCGGameMode *)&v16, **(GCGGameMode ***)&phase);
      std::shared_ptr<GCGPhaseBase>::operator=<GCGPhaseReroll>((std::shared_ptr<GCGPhaseBase> *const)this, &v16);
      std::shared_ptr<GCGPhaseReroll>::~shared_ptr(&v16);
      break;
    default:
      break;
  }
  if ( std::operator!=<GCGPhaseBase>((const std::shared_ptr<GCGPhaseBase> *)this, 0LL) )
  {
    v4 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v4);
    v5 = (unsigned __int64)(v4->_vptr_GCGPhaseBase + 3);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v4->_vptr_GCGPhaseBase + 3);
    if ( phasea != (*(unsigned int (__fastcall **)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v5)(v4) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/phase/gcg_phase_mgr.cpp",
        "createPhase",
        79);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v17, (const char (*)[18])"phase type error.");
      common::milog::MiLogStream::~MiLogStream(&v17);
      std::__shared_ptr<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2>::reset((std::__shared_ptr<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2> *const)this);
    }
  }
  result._M_ptr = (std::__shared_ptr<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 87: range 000000000D7B3396-000000000D7B3481
GCGPhaseType __cdecl GCGPhaseMgr::getNextPhase(GCGPhaseMgr *const this)
{
  GCGDuel *Duel; // rax
  GCGPhaseType next_phase; // [rsp+1Ch] [rbp-4h]

  next_phase = GCG_PHASE_INVALID;
  switch ( GCGPhaseMgr::getCurPhaseType(this) )
  {
    case GCG_PHASE_INVALID:
      next_phase = GCG_PHASE_START;
      break;
    case GCG_PHASE_START:
      next_phase = GCG_PHASE_DRAW;
      break;
    case GCG_PHASE_DRAW:
      next_phase = GCG_PHASE_ON_STAGE;
      break;
    case GCG_PHASE_ON_STAGE:
      next_phase = GCG_PHASE_DICE;
      break;
    case GCG_PHASE_DICE:
      next_phase = GCG_PHASE_PRE_MAIN;
      break;
    case GCG_PHASE_MAIN:
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      Duel = GCGGameMode::getDuel(this->game_mode_);
      if ( GCGDuel::isAllPassed(Duel) )
        next_phase = GCG_PHASE_END;
      else
        next_phase = GCG_PHASE_MAIN;
      break;
    case GCG_PHASE_END:
      next_phase = GCG_PHASE_DICE;
      break;
    case GCG_PHASE_FIN:
      next_phase = GCG_PHASE_FIN;
      break;
    case GCG_PHASE_PRE_MAIN:
      next_phase = GCG_PHASE_MAIN;
      break;
    default:
      return next_phase;
  }
  return next_phase;
};

// Line 136: range 000000000D7B3482-000000000D7B375C
void __cdecl GCGPhaseMgr::enterPhase(GCGPhaseMgr *const this, GCGPhaseType next_phase)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rax
  GCGPhaseBase *v6; // rax
  GCGPhaseBase *v7; // rax
  unsigned int val; // [rsp+1Ch] [rbp-B4h] BYREF
  std::shared_ptr<GCGPhaseBase> p_pre_phase_ptr; // [rsp+20h] [rbp-B0h] BYREF
  std::shared_ptr<GCGPhaseBase> p_next_phase_ptr; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+40h] [rbp-90h] BYREF
  char v12[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 17 new_phase_ptr:137";
  *(_QWORD *)(v2 + 16) = GCGPhaseMgr::enterPhase;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  GCGPhaseMgr::createPhase((GCGPhaseMgr *const)(v2 + 32), (GCGPhaseType)this);
  if ( std::operator==<GCGPhaseBase>((const std::shared_ptr<GCGPhaseBase> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/phase/gcg_phase_mgr.cpp",
      "enterPhase",
      140);
    v5 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v11,
           (const char (*)[26])"createPhase fail. phase: ");
    val = next_phase;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
  else
  {
    if ( std::operator!=<GCGPhaseBase>(&this->cur_phase_ptr_, 0LL) )
      std::stack<std::shared_ptr<GCGPhaseBase>>::push(&this->phase_stack_, &this->cur_phase_ptr_);
    v6 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    GCGPhaseBase::init(v6);
    std::shared_ptr<GCGPhaseBase>::shared_ptr(&p_next_phase_ptr, (const std::shared_ptr<GCGPhaseBase> *)(v2 + 32));
    std::shared_ptr<GCGPhaseBase>::shared_ptr(&p_pre_phase_ptr, &this->cur_phase_ptr_);
    GCGPhaseMgr::notifyPhaseChange(this, &p_pre_phase_ptr, &p_next_phase_ptr);
    std::shared_ptr<GCGPhaseBase>::~shared_ptr(&p_pre_phase_ptr);
    std::shared_ptr<GCGPhaseBase>::~shared_ptr(&p_next_phase_ptr);
    std::shared_ptr<GCGPhaseBase>::operator=(&this->cur_phase_ptr_, (const std::shared_ptr<GCGPhaseBase> *)(v2 + 32));
    v7 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    GCGPhaseBase::phaseEnter(v7);
  }
  std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v2 + 32));
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 155: range 000000000D7B375E-000000000D7B3B8E
void __fastcall GCGPhaseMgr::enterSpecialPhase(
        GCGPhaseMgr *const this,
        GCGPhaseType next_phase,
        const std::__shared_ptr_access<GCGPhaseParam,(__gnu_cxx::_Lock_policy)2,false,false> *p_phase_param_ptr)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  GCGPhaseBase *v8; // rax
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // r14
  unsigned __int64 v11; // rax
  void (__fastcall *v12)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<GCGPhaseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *); // r15
  std::__shared_ptr_access<GCGPhaseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  GCGPhaseBase *v14; // rax
  unsigned int val; // [rsp+2Ch] [rbp-D4h] BYREF
  std::shared_ptr<GCGPhaseBase> p_pre_phase_ptr; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<GCGPhaseBase> p_next_phase_ptr; // [rsp+40h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v3 + 8) = "2 48 4 14 next_phase:154 64 16 17 new_phase_ptr:161";
  *(_QWORD *)(v3 + 16) = GCGPhaseMgr::enterSpecialPhase;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = next_phase;
  if ( !GCGUtils::isSpecialPhase(*(GCGPhaseType *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/phase/gcg_phase_mgr.cpp",
      "enterSpecialPhase",
      158);
    v6 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v19,
           (const char (*)[26])"phase type error. phase: ");
    common::milog::MiLogStream::operator<<<proto::GCGPhaseType,(proto::GCGPhaseType*)0>(
      v6,
      (const proto::GCGPhaseType *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
  else
  {
    GCGPhaseMgr::createPhase((GCGPhaseMgr *const)(v3 + 64), (GCGPhaseType)this);
    if ( std::operator==<GCGPhaseBase>((const std::shared_ptr<GCGPhaseBase> *)(v3 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/phase/gcg_phase_mgr.cpp",
        "enterSpecialPhase",
        164);
      v7 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             &v19,
             (const char (*)[26])"createPhase fail. phase: ");
      val = *(_DWORD *)(v3 + 48);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
    else
    {
      if ( std::operator!=<GCGPhaseBase>(&this->cur_phase_ptr_, 0LL) )
        std::stack<std::shared_ptr<GCGPhaseBase>>::push(&this->phase_stack_, &this->cur_phase_ptr_);
      v8 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      GCGPhaseBase::init(v8);
      if ( std::operator!=<GCGPhaseParam>((const std::shared_ptr<GCGPhaseParam> *)p_phase_param_ptr, 0LL) )
      {
        v9 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        v10 = v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v9);
        v11 = (unsigned __int64)(v10->_vptr_GCGPhaseBase + 2);
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v10->_vptr_GCGPhaseBase + 2);
        v12 = *(void (__fastcall **)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<GCGPhaseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v11;
        v13 = std::__shared_ptr_access<GCGPhaseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator*(p_phase_param_ptr);
        v12(v10, v13);
      }
      std::shared_ptr<GCGPhaseBase>::shared_ptr(&p_next_phase_ptr, (const std::shared_ptr<GCGPhaseBase> *)(v3 + 64));
      std::shared_ptr<GCGPhaseBase>::shared_ptr(&p_pre_phase_ptr, &this->cur_phase_ptr_);
      GCGPhaseMgr::notifyPhaseChange(this, &p_pre_phase_ptr, &p_next_phase_ptr);
      std::shared_ptr<GCGPhaseBase>::~shared_ptr(&p_pre_phase_ptr);
      std::shared_ptr<GCGPhaseBase>::~shared_ptr(&p_next_phase_ptr);
      std::shared_ptr<GCGPhaseBase>::operator=(&this->cur_phase_ptr_, (const std::shared_ptr<GCGPhaseBase> *)(v3 + 64));
      v14 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      GCGPhaseBase::phaseEnter(v14);
    }
    std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v3 + 64));
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

// Line 183: range 000000000D7B3B90-000000000D7B3D12
void __cdecl GCGPhaseMgr::enterNext(GCGPhaseMgr *const this)
{
  std::shared_ptr<GCGPhaseBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  GCGPhaseType NextPhase; // edx
  const std::shared_ptr<GCGPhaseBase> *v5; // rax
  std::shared_ptr<GCGPhaseBase> p_next_phase_ptr; // [rsp+10h] [rbp-70h] BYREF
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v1 = (std::shared_ptr<GCGPhaseBase> *)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<GCGPhaseBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 13 phase_ptr:190";
  v1[1]._M_ptr = (std::__shared_ptr<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2>::element_type *)GCGPhaseMgr::enterNext;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( std::stack<std::shared_ptr<GCGPhaseBase>>::empty(&this->phase_stack_) )
  {
    NextPhase = GCGPhaseMgr::getNextPhase(this);
    GCGPhaseMgr::onPhaseChange(this, NextPhase);
  }
  else
  {
    v5 = std::stack<std::shared_ptr<GCGPhaseBase>>::top(&this->phase_stack_);
    std::shared_ptr<GCGPhaseBase>::shared_ptr(v1 + 2, v5);
    std::stack<std::shared_ptr<GCGPhaseBase>>::pop(&this->phase_stack_);
    std::shared_ptr<GCGPhaseBase>::shared_ptr(&p_next_phase_ptr, v1 + 2);
    GCGPhaseMgr::onPhaseChange(this, &p_next_phase_ptr);
    std::shared_ptr<GCGPhaseBase>::~shared_ptr(&p_next_phase_ptr);
    std::shared_ptr<GCGPhaseBase>::~shared_ptr(v1 + 2);
  }
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 197: range 000000000D7B3D14-000000000D7B42D7
void __fastcall GCGPhaseMgr::toSpecialPhase(
        GCGPhaseMgr *const this,
        GCGPhaseType phase_type,
        GCGPhaseParamPtr *p_phase_param_ptr)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  signed int ActionMgr; // eax
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  unsigned __int64 v9; // rdx
  GCGPhaseType v10; // r14d
  std::__shared_ptr_access<GCGActionSpecialPhase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rdx
  GCGPhaseType *p_cur_phase_type; // rax
  GCGPhaseType v13; // r14d
  std::__shared_ptr_access<GCGActionSpecialPhase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<GCGActionSpecialPhase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // r14
  unsigned __int64 v18; // rax
  void (__fastcall *v19)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<GCGActionBase> *); // r15
  std::shared_ptr<GCGActionBase> v21; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v22; // [rsp+30h] [rbp-D0h] BYREF
  char v23[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 14 phase_type:196 64 16 18 cur_phase_ptr_:208 96 16 14 action_ptr:215";
  *(_QWORD *)(v3 + 16) = GCGPhaseMgr::toSpecialPhase;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = phase_type;
  if ( *(_DWORD *)(v3 + 48) )
  {
    if ( !GCGUtils::isSpecialPhase(*(GCGPhaseType *)(v3 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/phase/gcg_phase_mgr.cpp",
        "toSpecialPhase",
        205);
      v6 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             &v22,
             (const char (*)[26])"phase type error. phase: ");
      common::milog::MiLogStream::operator<<<proto::GCGPhaseType,(proto::GCGPhaseType*)0>(
        v6,
        (const proto::GCGPhaseType *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
    else
    {
      GCGPhaseMgr::getCurPhase((GCGPhaseMgr *const)(v3 + 64));
      if ( std::operator==<GCGPhaseBase>((const std::shared_ptr<GCGPhaseBase> *)(v3 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/phase/gcg_phase_mgr.cpp",
          "toSpecialPhase",
          211);
        common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
          &v22,
          (const char (*)[24])"getCurPhase is nullptr.");
        common::milog::MiLogStream::~MiLogStream(&v22);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        ActionMgr = (unsigned int)GCGGameMode::getActionMgr(this->game_mode_);
        GCGActionMgr::createAction<GCGActionSpecialPhase>((GCGActionMgr *const)(v3 + 96), (GCGControllerValue)ActionMgr);
        if ( std::operator==<GCGActionSpecialPhase>((const std::shared_ptr<GCGActionSpecialPhase> *)(v3 + 96), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/card_game/phase/gcg_phase_mgr.cpp",
            "toSpecialPhase",
            218);
          common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
            &v22,
            (const char (*)[19])"createAction fail.");
          common::milog::MiLogStream::~MiLogStream(&v22);
        }
        else
        {
          v8 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v8);
          v9 = (unsigned __int64)(v8->_vptr_GCGPhaseBase + 3);
          if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v8->_vptr_GCGPhaseBase + 3);
          v10 = (*(unsigned int (__fastcall **)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v9)(v8);
          v11 = std::__shared_ptr_access<GCGActionSpecialPhase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionSpecialPhase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          p_cur_phase_type = &v11->cur_phase_type;
          if ( *(_BYTE *)(((unsigned __int64)p_cur_phase_type >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_cur_phase_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_cur_phase_type >> 3)
                                                                               + 0x7FFF8000) )
          {
            __asan_report_store4(p_cur_phase_type);
          }
          v11->cur_phase_type = v10;
          v13 = *(_DWORD *)(v3 + 48);
          v14 = std::__shared_ptr_access<GCGActionSpecialPhase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionSpecialPhase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          if ( *(_BYTE *)(((unsigned __int64)&v14->target_phase_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v14->target_phase_type >> 3) + 0x7FFF8000) <= 3 )
          {
            v14 = (std::__shared_ptr_access<GCGActionSpecialPhase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v14->target_phase_type);
          }
          v14->target_phase_type = v13;
          v15 = std::__shared_ptr_access<GCGActionSpecialPhase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionSpecialPhase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          std::shared_ptr<GCGPhaseParam>::operator=(&v15->phase_param_ptr, p_phase_param_ptr);
          v16 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          v17 = v16;
          if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v16);
          v18 = (unsigned __int64)(v17->_vptr_GCGPhaseBase + 5);
          if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v17->_vptr_GCGPhaseBase + 5);
          v19 = *(void (__fastcall **)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<GCGActionBase> *))v18;
          std::shared_ptr<GCGActionBase>::shared_ptr<GCGActionSpecialPhase,void>(
            &v21,
            (const std::shared_ptr<GCGActionSpecialPhase> *)(v3 + 96));
          v19(v17, &v21);
          std::shared_ptr<GCGActionBase>::~shared_ptr(&v21);
        }
        std::shared_ptr<GCGActionSpecialPhase>::~shared_ptr((std::shared_ptr<GCGActionSpecialPhase> *const)(v3 + 96));
      }
      std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v3 + 64));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/phase/gcg_phase_mgr.cpp",
      "toSpecialPhase",
      200);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v22, (const char (*)[18])"error phase type.");
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  if ( v23 == (char *)v3 )
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
};

// Line 229: range 000000000D7B42D8-000000000D7B4938
void __cdecl GCGPhaseMgr::toNextPhase(GCGPhaseMgr *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  signed int ActionMgr; // eax
  int v5; // r14d
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned __int64 v7; // rdx
  GCGPhaseType v8; // r14d
  std::__shared_ptr_access<GCGActionPhaseExit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  unsigned __int64 v12; // rax
  void (__fastcall *v13)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<GCGActionBase> *); // r15
  signed int v14; // eax
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  unsigned __int64 v16; // rdx
  GCGPhaseType v17; // r14d
  std::__shared_ptr_access<GCGActionNextPhase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // r14
  unsigned __int64 v21; // rax
  void (__fastcall *v22)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<GCGActionBase> *); // r15
  std::shared_ptr<GCGActionBase> v23; // [rsp+10h] [rbp-C0h] BYREF
  common::milog::MiLogStream v24; // [rsp+20h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 18 cur_phase_ptr_:230 64 16 14 action_ptr:248";
  *(_QWORD *)(v1 + 16) = GCGPhaseMgr::toNextPhase;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  GCGPhaseMgr::getCurPhase((GCGPhaseMgr *const)(v1 + 32));
  if ( std::operator==<GCGPhaseBase>((const std::shared_ptr<GCGPhaseBase> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/phase/gcg_phase_mgr.cpp",
      "toNextPhase",
      233);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v24, (const char (*)[24])"getCurPhase is nullptr.");
    common::milog::MiLogStream::~MiLogStream(&v24);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    ActionMgr = (unsigned int)GCGGameMode::getActionMgr(this->game_mode_);
    GCGActionMgr::createAction<GCGActionPhaseExit>((GCGActionMgr *const)(v1 + 64), (GCGControllerValue)ActionMgr);
    if ( std::operator==<GCGActionPhaseExit>((const std::shared_ptr<GCGActionPhaseExit> *)(v1 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/phase/gcg_phase_mgr.cpp",
        "toNextPhase",
        241);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v24, (const char (*)[19])"createAction fail.");
      common::milog::MiLogStream::~MiLogStream(&v24);
      v5 = 0;
    }
    else
    {
      v6 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v6);
      v7 = (unsigned __int64)(v6->_vptr_GCGPhaseBase + 3);
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v6->_vptr_GCGPhaseBase + 3);
      v8 = (*(unsigned int (__fastcall **)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v7)(v6);
      v9 = std::__shared_ptr_access<GCGActionPhaseExit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionPhaseExit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v9->cur_phase_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v9->cur_phase_type >> 3) + 0x7FFF8000) <= 3 )
      {
        v9 = (std::__shared_ptr_access<GCGActionPhaseExit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v9->cur_phase_type);
      }
      v9->cur_phase_type = v8;
      v10 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v10);
      v12 = (unsigned __int64)(v11->_vptr_GCGPhaseBase + 5);
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v11->_vptr_GCGPhaseBase + 5);
      v13 = *(void (__fastcall **)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<GCGActionBase> *))v12;
      std::shared_ptr<GCGActionBase>::shared_ptr<GCGActionPhaseExit,void>(
        &v23,
        (const std::shared_ptr<GCGActionPhaseExit> *)(v1 + 64));
      v13(v11, &v23);
      std::shared_ptr<GCGActionBase>::~shared_ptr(&v23);
      v5 = 1;
    }
    std::shared_ptr<GCGActionPhaseExit>::~shared_ptr((std::shared_ptr<GCGActionPhaseExit> *const)(v1 + 64));
    if ( v5 == 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v14 = (unsigned int)GCGGameMode::getActionMgr(this->game_mode_);
      GCGActionMgr::createAction<GCGActionNextPhase>((GCGActionMgr *const)(v1 + 64), (GCGControllerValue)v14);
      if ( std::operator==<GCGActionNextPhase>((const std::shared_ptr<GCGActionNextPhase> *)(v1 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/phase/gcg_phase_mgr.cpp",
          "toNextPhase",
          251);
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v24, (const char (*)[19])"createAction fail.");
        common::milog::MiLogStream::~MiLogStream(&v24);
      }
      else
      {
        v15 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v15);
        v16 = (unsigned __int64)(v15->_vptr_GCGPhaseBase + 3);
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v15->_vptr_GCGPhaseBase + 3);
        v17 = (*(unsigned int (__fastcall **)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v16)(v15);
        v18 = std::__shared_ptr_access<GCGActionNextPhase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionNextPhase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v18->cur_phase_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v18->cur_phase_type >> 3) + 0x7FFF8000) <= 3 )
        {
          v18 = (std::__shared_ptr_access<GCGActionNextPhase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v18->cur_phase_type);
        }
        v18->cur_phase_type = v17;
        v19 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        v20 = v19;
        if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v19);
        v21 = (unsigned __int64)(v20->_vptr_GCGPhaseBase + 5);
        if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v20->_vptr_GCGPhaseBase + 5);
        v22 = *(void (__fastcall **)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<GCGActionBase> *))v21;
        std::shared_ptr<GCGActionBase>::shared_ptr<GCGActionNextPhase,void>(
          &v23,
          (const std::shared_ptr<GCGActionNextPhase> *)(v1 + 64));
        v22(v20, &v23);
        std::shared_ptr<GCGActionBase>::~shared_ptr(&v23);
      }
      std::shared_ptr<GCGActionNextPhase>::~shared_ptr((std::shared_ptr<GCGActionNextPhase> *const)(v1 + 64));
    }
  }
  std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v1 + 32));
  if ( v25 == (char *)v1 )
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

// Line 260: range 000000000D7B493A-000000000D7B4C67
void __cdecl GCGPhaseMgr::onPhaseChange(GCGPhaseMgr *const this, GCGPhaseBasePtr *p_next_phase_ptr)
{
  std::shared_ptr<GCGPhaseBase> *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  GCGPhaseType v7; // edx
  GCGPhaseBase *v8; // rax
  std::shared_ptr<GCGPhaseBase> p_pre_phase_ptr; // [rsp+10h] [rbp-A0h] BYREF
  std::shared_ptr<GCGPhaseBase> v10; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-80h] BYREF
  char v12[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (std::shared_ptr<GCGPhaseBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (std::shared_ptr<GCGPhaseBase> *)v3;
  }
  v2->_M_ptr = (std::__shared_ptr<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v2->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 17 pre_phase_ptr:271";
  v2[1]._M_ptr = (std::__shared_ptr<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2>::element_type *)GCGPhaseMgr::onPhaseChange;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( std::operator==<GCGPhaseBase>(p_next_phase_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/phase/gcg_phase_mgr.cpp",
      "onPhaseChange",
      263);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v11,
      (const char (*)[27])"next_phase_ptr is nullptr.");
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
  else
  {
    if ( std::operator!=<GCGPhaseBase>(&this->cur_phase_ptr_, 0LL) )
    {
      v5 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cur_phase_ptr_);
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v5);
      v6 = (unsigned __int64)(v5->_vptr_GCGPhaseBase + 3);
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v5->_vptr_GCGPhaseBase + 3);
      v7 = (*(unsigned int (__fastcall **)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v6)(v5);
      if ( *(_BYTE *)(((unsigned __int64)&this->pre_phase_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->pre_phase_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->pre_phase_type);
      }
      this->pre_phase_type = v7;
    }
    std::shared_ptr<GCGPhaseBase>::shared_ptr(v2 + 2, &this->cur_phase_ptr_);
    std::shared_ptr<GCGPhaseBase>::operator=(&this->cur_phase_ptr_, p_next_phase_ptr);
    std::shared_ptr<GCGPhaseBase>::shared_ptr(&v10, p_next_phase_ptr);
    std::shared_ptr<GCGPhaseBase>::shared_ptr(&p_pre_phase_ptr, v2 + 2);
    GCGPhaseMgr::notifyPhaseChange(this, &p_pre_phase_ptr, &v10);
    std::shared_ptr<GCGPhaseBase>::~shared_ptr(&p_pre_phase_ptr);
    std::shared_ptr<GCGPhaseBase>::~shared_ptr(&v10);
    if ( std::operator!=<GCGPhaseBase>(p_next_phase_ptr, 0LL) )
    {
      v8 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_next_phase_ptr);
      GCGPhaseBase::phaseEnter(v8);
    }
    std::shared_ptr<GCGPhaseBase>::~shared_ptr(v2 + 2);
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v2->_M_ptr = (std::__shared_ptr<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 282: range 000000000D7B4C68-000000000D7B4DCD
void __cdecl GCGPhaseMgr::onPhaseChange(GCGPhaseMgr *const this, GCGPhaseType next_phase)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  GCGPhaseBase *v5; // rax
  std::shared_ptr<GCGPhaseBase> p_next_phase_ptr; // [rsp+10h] [rbp-70h] BYREF
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 phase_ptr:283";
  *(_QWORD *)(v2 + 16) = GCGPhaseMgr::onPhaseChange;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  GCGPhaseMgr::createPhase((GCGPhaseMgr *const)(v2 + 32), (GCGPhaseType)this);
  if ( std::operator!=<GCGPhaseBase>((const std::shared_ptr<GCGPhaseBase> *)(v2 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    GCGPhaseBase::init(v5);
  }
  std::shared_ptr<GCGPhaseBase>::shared_ptr(&p_next_phase_ptr, (const std::shared_ptr<GCGPhaseBase> *)(v2 + 32));
  GCGPhaseMgr::onPhaseChange(this, &p_next_phase_ptr);
  std::shared_ptr<GCGPhaseBase>::~shared_ptr(&p_next_phase_ptr);
  std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v2 + 32));
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 292: range 000000000D7B4DCE-000000000D7B50FB
void __cdecl GCGPhaseMgr::notifyPhaseChange(
        GCGPhaseMgr *const this,
        GCGPhaseBasePtr *p_pre_phase_ptr,
        GCGPhaseBasePtr *p_next_phase_ptr)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned __int64 v7; // rdx
  GCGPhaseType v8; // r14d
  std::__shared_ptr_access<GCGMsgPhaseChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  unsigned __int64 v11; // rdx
  GCGPhaseType v12; // r14d
  std::__shared_ptr_access<GCGMsgPhaseChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rdx
  GCGPhaseType *p_after_phase; // rax
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  const std::map<proto::GCGControllerValue,unsigned int> *AllowControllerMap; // r14
  std::__shared_ptr_access<GCGMsgPhaseChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  GCGGameMode *game_mode; // r14
  std::shared_ptr<GCGMessage> p_msg; // [rsp+20h] [rbp-80h] BYREF
  char v21[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 15 message_ptr:297";
  *(_QWORD *)(v3 + 16) = GCGPhaseMgr::notifyPhaseChange;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( !std::operator==<GCGPhaseBase>(p_next_phase_ptr, 0LL) )
  {
    common::tools::perf::make_shared<GCGMsgPhaseChange>();
    if ( std::operator!=<GCGPhaseBase>(p_pre_phase_ptr, 0LL) )
    {
      v6 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_pre_phase_ptr);
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v6);
      v7 = (unsigned __int64)(v6->_vptr_GCGPhaseBase + 3);
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v6->_vptr_GCGPhaseBase + 3);
      v8 = (*(unsigned int (__fastcall **)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v7)(v6);
      v9 = std::__shared_ptr_access<GCGMsgPhaseChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgPhaseChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v9->before_phase >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v9->before_phase >> 3) + 0x7FFF8000) <= 3 )
      {
        v9 = (std::__shared_ptr_access<GCGMsgPhaseChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v9->before_phase);
      }
      v9->before_phase = v8;
    }
    v10 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_next_phase_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v10);
    v11 = (unsigned __int64)(v10->_vptr_GCGPhaseBase + 3);
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v10->_vptr_GCGPhaseBase + 3);
    v12 = (*(unsigned int (__fastcall **)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v11)(v10);
    v13 = std::__shared_ptr_access<GCGMsgPhaseChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgPhaseChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    p_after_phase = &v13->after_phase;
    if ( *(_BYTE *)(((unsigned __int64)p_after_phase >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_after_phase & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_after_phase >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_store4(p_after_phase);
    }
    v13->after_phase = v12;
    v15 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_next_phase_ptr);
    AllowControllerMap = GCGPhaseBase::getAllowControllerMap(v15);
    v17 = std::__shared_ptr_access<GCGMsgPhaseChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgPhaseChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    std::map<proto::GCGControllerValue,unsigned int>::operator=(&v17->allow_controller_map, AllowControllerMap);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    game_mode = this->game_mode_;
    std::shared_ptr<GCGMessage>::shared_ptr<GCGMsgPhaseChange,void>(
      &p_msg,
      (const std::shared_ptr<GCGMsgPhaseChange> *)(v3 + 32));
    GCGGameMode::sendMessage(game_mode, &p_msg);
    std::shared_ptr<GCGMessage>::~shared_ptr(&p_msg);
    std::shared_ptr<GCGMsgPhaseChange>::~shared_ptr((std::shared_ptr<GCGMsgPhaseChange> *const)(v3 + 32));
  }
  if ( v21 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
