// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/action/gcg_action_mgr.cpp

// Line 20: range 000000000E111BFC-000000000E111DA2
void __cdecl GCGActionQueue::enqueueAction(GCGActionQueue_0 *const this, GCGActionBasePtr *p_action_ptr)
{
  std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-50h] BYREF
  common::milog::MiLogStream v4; // [rsp+30h] [rbp-30h] BYREF

  if ( std::operator==<GCGActionBase>(p_action_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/action/gcg_action_mgr.cpp",
      "enqueueAction",
      23);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v4, (const char (*)[23])"action_ptr is nullptr.");
    common::milog::MiLogStream::~MiLogStream(&v4);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v3,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/action/gcg_action_mgr.cpp",
      "enqueueAction",
      26);
    v2 = std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_action_ptr);
    GCGActionBase::getDesc[abi:cxx11]((std::string *)&v4, v2);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v3, (const std::string *)&v4);
    std::string::~string(&v4);
    common::milog::MiLogStream::~MiLogStream(&v3);
    if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(this);
    if ( this->is_running_ )
      std::deque<std::shared_ptr<GCGActionBase>>::push_back(&this->sub_action_queue_, p_action_ptr);
    else
      std::deque<std::shared_ptr<GCGActionBase>>::push_back(&this->action_queue_, p_action_ptr);
  }
};

// Line 37: range 000000000E111DA4-000000000E111FFA
GCGActionBasePtr __cdecl GCGActionQueue::dequeueAction(GCGActionQueue_0 *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  GCGActionBasePtr result; // rax
  const std::shared_ptr<GCGActionBase> *v6; // rax
  std::deque<std::shared_ptr<GCGActionBase>>::iterator v7; // [rsp+10h] [rbp-110h] BYREF
  std::_Deque_iterator<std::shared_ptr<GCGActionBase>,const std::shared_ptr<GCGActionBase>&,const std::shared_ptr<GCGActionBase>*> __position; // [rsp+30h] [rbp-F0h] BYREF
  std::deque<std::shared_ptr<GCGActionBase>>_0::iterator v9; // [rsp+50h] [rbp-D0h] BYREF
  std::deque<std::shared_ptr<GCGActionBase>>::iterator v10; // [rsp+70h] [rbp-B0h] BYREF
  std::deque<std::shared_ptr<GCGActionBase>>::iterator v11; // [rsp+90h] [rbp-90h] BYREF
  char v12[112]; // [rsp+B0h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 action_ptr:47";
  *(_QWORD *)(v2 + 16) = GCGActionQueue::dequeueAction;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( !std::deque<std::shared_ptr<GCGActionBase>>::empty((const std::deque<std::shared_ptr<GCGActionBase>>_0 *const)(v1 + 88)) )
  {
    std::deque<std::shared_ptr<GCGActionBase>>::end(&v10, (std::deque<std::shared_ptr<GCGActionBase>> *const)(v1 + 88));
    std::deque<std::shared_ptr<GCGActionBase>>::begin(
      &v11,
      (std::deque<std::shared_ptr<GCGActionBase>> *const)(v1 + 88));
    std::deque<std::shared_ptr<GCGActionBase>>::begin(&v7, (std::deque<std::shared_ptr<GCGActionBase>> *const)(v1 + 8));
    std::_Deque_iterator<std::shared_ptr<GCGActionBase>,std::shared_ptr<GCGActionBase> const&,std::shared_ptr<GCGActionBase> const*>::_Deque_iterator<std::_Deque_iterator<std::shared_ptr<GCGActionBase>,std::shared_ptr<GCGActionBase>&,std::shared_ptr<GCGActionBase>*>,void>(
      &__position,
      (const std::_Deque_iterator<std::shared_ptr<GCGActionBase>,std::shared_ptr<GCGActionBase>&,std::shared_ptr<GCGActionBase>*>_0 *)&v7);
    std::deque<std::shared_ptr<GCGActionBase>>::insert<std::_Deque_iterator<std::shared_ptr<GCGActionBase>,std::shared_ptr<GCGActionBase>&,std::shared_ptr<GCGActionBase>*>,void>(
      &v9,
      (std::deque<std::shared_ptr<GCGActionBase>>_0 *const)(v1 + 8),
      __position,
      (std::_Deque_iterator<std::shared_ptr<GCGActionBase>,std::shared_ptr<GCGActionBase>&,std::shared_ptr<GCGActionBase>*>_0)v11,
      (std::_Deque_iterator<std::shared_ptr<GCGActionBase>,std::shared_ptr<GCGActionBase>&,std::shared_ptr<GCGActionBase>*>_0)v10);
    std::deque<std::shared_ptr<GCGActionBase>>::clear((std::deque<std::shared_ptr<GCGActionBase>> *const)(v1 + 88));
  }
  if ( std::deque<std::shared_ptr<GCGActionBase>>::empty((const std::deque<std::shared_ptr<GCGActionBase>>_0 *const)(v1 + 8)) )
  {
    std::shared_ptr<GCGActionBase>::shared_ptr((std::shared_ptr<GCGActionBase> *const)this, 0LL);
  }
  else
  {
    v6 = std::deque<std::shared_ptr<GCGActionBase>>::front((std::deque<std::shared_ptr<GCGActionBase>>_0 *const)(v1 + 8));
    std::shared_ptr<GCGActionBase>::shared_ptr((std::shared_ptr<GCGActionBase> *const)(v2 + 32), v6);
    std::deque<std::shared_ptr<GCGActionBase>>::pop_front((std::deque<std::shared_ptr<GCGActionBase>>_0 *const)(v1 + 8));
    std::shared_ptr<GCGActionBase>::shared_ptr(
      (std::shared_ptr<GCGActionBase> *const)this,
      (std::shared_ptr<GCGActionBase> *)(v2 + 32));
    std::shared_ptr<GCGActionBase>::~shared_ptr((std::shared_ptr<GCGActionBase> *const)(v2 + 32));
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<GCGActionBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 53: range 000000000E111FFC-000000000E112273
int32_t __cdecl GCGActionMgr::enqueueAction(GCGActionMgr *const this, GCGActionBasePtr *p_action_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  unsigned __int64 v8; // rax
  void (__fastcall *v9)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<GCGActionBase> *); // r15
  int32_t result; // eax
  std::shared_ptr<GCGActionBase> v11; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-90h] BYREF
  char v13[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 16 cur_phase_ptr:54";
  *(_QWORD *)(v2 + 16) = GCGActionMgr::enqueueAction;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  GCGGameMode::getPhaseMgr(this->game_mode_);
  GCGPhaseMgr::getCurPhase((GCGPhaseMgr *const)(v2 + 32));
  if ( std::operator==<GCGPhaseBase>((const std::shared_ptr<GCGPhaseBase> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/action/gcg_action_mgr.cpp",
      "enqueueAction",
      57);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v12,
      (const char (*)[26])"cur_phase_ptr is nullptr.");
    common::milog::MiLogStream::~MiLogStream(&v12);
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v6);
    v8 = (unsigned __int64)(v7->_vptr_GCGPhaseBase + 5);
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v7->_vptr_GCGPhaseBase + 5);
    v9 = *(void (__fastcall **)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<GCGActionBase> *))v8;
    std::shared_ptr<GCGActionBase>::shared_ptr(&v11, p_action_ptr);
    v9(v7, &v11);
    std::shared_ptr<GCGActionBase>::~shared_ptr(&v11);
    v5 = 0;
  }
  std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v2 + 32));
  result = v5;
  if ( v13 == (char *)v2 )
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

// Line 65: range 000000000E112274-000000000E112443
void __cdecl GCGActionMgr::clearAllAction(GCGActionMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  GCGPhaseBase *v4; // rax
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-90h] BYREF
  char v6[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 16 cur_phase_ptr:66";
  *(_QWORD *)(v1 + 16) = GCGActionMgr::clearAllAction;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  GCGGameMode::getPhaseMgr(this->game_mode_);
  GCGPhaseMgr::getCurPhase((GCGPhaseMgr *const)(v1 + 32));
  if ( std::operator==<GCGPhaseBase>((const std::shared_ptr<GCGPhaseBase> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/action/gcg_action_mgr.cpp",
      "clearAllAction",
      69);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v5,
      (const char (*)[26])"cur_phase_ptr is nullptr.");
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
  else
  {
    v4 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    GCGPhaseBase::clearAllAction(v4);
  }
  std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v1 + 32));
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 76: range 000000000E112444-000000000E112BE9
int32_t __cdecl GCGActionMgr::tryLoop(GCGActionMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  _BOOL4 v4; // r14d
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rdx
  int v7; // r14d
  GCGPhaseBase *v8; // rax
  bool *QueueRunningState; // rax
  GCGGameMode *game_mode; // r14
  std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  unsigned __int64 v15; // rdx
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  int32_t result; // eax
  uint32_t i; // [rsp+1Ch] [rbp-134h]
  common::milog::MiLogStream v22; // [rsp+20h] [rbp-130h] BYREF
  common::milog::MiLogStream v23; // [rsp+40h] [rbp-110h] BYREF
  char v24[240]; // [rsp+60h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 48 4 7 ret:111 64 8 8 guard:86 96 8 9 guard:108 128 16 16 cur_phase_ptr:96 160 16 14 action_ptr:102";
  *(_QWORD *)(v1 + 16) = GCGActionMgr::tryLoop;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -218959360;
  v3[536862724] = -219021312;
  v3[536862725] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( GCGGameMode::isRunning(this->game_mode_) )
  {
    if ( *(char *)(((unsigned __int64)&this->is_running_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_running_);
    if ( this->is_running_ )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/action/gcg_action_mgr.cpp",
        "tryLoop",
        83);
      common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v23, (const char (*)[15])"still running.");
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
    else
    {
      GCGUtils::RunGuard::RunGuard((GCGUtils::RunGuard *const)(v1 + 64), &this->is_running_);
      i = 0;
      while ( ++i <= 0x63 )
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        GCGGameMode::getPhaseMgr(this->game_mode_);
        GCGPhaseMgr::getCurPhase((GCGPhaseMgr *const)(v1 + 128));
        if ( std::operator==<GCGPhaseBase>((const std::shared_ptr<GCGPhaseBase> *)(v1 + 128), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v23,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/card_game/action/gcg_action_mgr.cpp",
            "tryLoop",
            99);
          common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            &v23,
            (const char (*)[24])"getCurPhase is nullptr.");
          common::milog::MiLogStream::~MiLogStream(&v23);
          v4 = 0;
        }
        else
        {
          v5 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
          if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v5);
          v6 = (unsigned __int64)(v5->_vptr_GCGPhaseBase + 6);
          if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v5->_vptr_GCGPhaseBase + 6);
          (*(void (__fastcall **)(unsigned __int64, std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v6)(
            v1 + 160,
            v5);
          if ( std::operator==<GCGActionBase>((const std::shared_ptr<GCGActionBase> *)(v1 + 160), 0LL) )
          {
            v7 = 0;
          }
          else
          {
            v8 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
            QueueRunningState = GCGPhaseBase::getQueueRunningState(v8);
            GCGUtils::RunGuard::RunGuard((GCGUtils::RunGuard *const)(v1 + 96), QueueRunningState);
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            game_mode = this->game_mode_;
            v11 = std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
            GCGGameMode::onActionBegin(game_mode, v11);
            common::milog::MiLogStream::create(
              &v22,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/card_game/action/gcg_action_mgr.cpp",
              "tryLoop",
              110);
            v12 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                    &v22,
                    (const char (*)[20])"action exec start: ");
            v13 = std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
            GCGActionBase::getDesc[abi:cxx11]((std::string *)&v23, v13);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)&v23);
            std::string::~string(&v23);
            common::milog::MiLogStream::~MiLogStream(&v22);
            v14 = std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
            if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v14);
            v15 = (unsigned __int64)(v14->_vptr_GCGActionBase + 2);
            if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v14->_vptr_GCGActionBase + 2);
            *(_DWORD *)(v1 + 48) = (*(__int64 (__fastcall **)(std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v15)(v14);
            common::milog::MiLogStream::create(
              &v22,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/card_game/action/gcg_action_mgr.cpp",
              "tryLoop",
              112);
            v16 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                    &v22,
                    (const char (*)[20])"action exec end  : ");
            v17 = std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
            GCGActionBase::getDesc[abi:cxx11]((std::string *)&v23, v17);
            v18 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, (const std::string *)&v23);
            v19 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v18, (const char (*)[7])" ret: ");
            common::milog::MiLogStream::operator<<<int,(int *)0>(v19, (const int *)(v1 + 48));
            std::string::~string(&v23);
            common::milog::MiLogStream::~MiLogStream(&v22);
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            GCGGameMode::onActionEnd(this->game_mode_);
            GCGUtils::RunGuard::~RunGuard((GCGUtils::RunGuard *const)(v1 + 96));
            v7 = 1;
          }
          std::shared_ptr<GCGActionBase>::~shared_ptr((std::shared_ptr<GCGActionBase> *const)(v1 + 160));
          v4 = v7 == 1;
        }
        std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v1 + 128));
        if ( !v4 )
          goto LABEL_35;
      }
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/action/gcg_action_mgr.cpp",
        "tryLoop",
        93);
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v23, (const char (*)[22])off_1BC72E40);
      common::milog::MiLogStream::~MiLogStream(&v23);
LABEL_35:
      GCGUtils::RunGuard::~RunGuard((GCGUtils::RunGuard *const)(v1 + 64));
    }
  }
  result = 0;
  if ( v24 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
