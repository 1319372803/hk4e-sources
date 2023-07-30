// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/common/gcg_operation_timer.cpp

// Line 20: range 000000000DED4518-000000000DED46F7
void __cdecl GCGOperationTimer::GCGOperationTimer(
        GCGOperationTimer *const this,
        GCGGameMode *game_mode,
        GCGControllerValue controller_id)
{
  GCGOperationTimer::GCGOperationTimer::<lambda(uint64_t)> *v3; // rax
  std::shared_ptr<common::tools::TimerMgr> __args_0; // [rsp+28h] [rbp-28h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->game_mode_ = game_mode;
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->controller_id_);
  }
  this->controller_id_ = controller_id;
  std::function<void ()(proto::GCGControllerValue)>::function(&this->cb_func_);
  std::shared_ptr<common::tools::MiTimer>::shared_ptr(&this->timer_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->base_time_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->base_time_);
  this->base_time_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->bonus_time_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->bonus_time_);
  this->bonus_time_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_bonus_time_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_bonus_time_);
  this->last_bonus_time_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_time_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->begin_time_);
  this->begin_time_ = 0LL;
  __args_0._M_ptr = (std::__shared_ptr<common::tools::TimerMgr,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  v3 = (GCGOperationTimer::GCGOperationTimer::<lambda(uint64_t)> *)ZTWN11ThreadLocal13timer_mgr_ptrE();
  common::tools::perf::make_shared<common::tools::MiTimer,std::shared_ptr<common::tools::TimerMgr> &,GCGOperationTimer::GCGOperationTimer(GCGGameMode &,proto::GCGControllerValue)::{lambda(unsigned long)#1}>(
    (std::shared_ptr<common::tools::TimerMgr> *)&__args_0._M_refcount,
    v3,
    &__args_0,
    v3);
  std::shared_ptr<common::tools::MiTimer>::operator=(
    &this->timer_ptr_,
    (std::shared_ptr<common::tools::MiTimer> *)&__args_0._M_refcount);
  std::shared_ptr<common::tools::MiTimer>::~shared_ptr((std::shared_ptr<common::tools::MiTimer> *const)&__args_0._M_refcount);
};

// Line 24: range 000000000DED44D6-000000000DED4517
void __cdecl GCGOperationTimer::GCGOperationTimer(GCGGameMode &,proto::GCGControllerValue)::{lambda(unsigned long)#1}::operator()(
        const GCGOperationTimer::GCGOperationTimer::<lambda(uint64_t)> *const __closure,
        uint64_t now_ms)
{
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  GCGOperationTimer::onTimer(__closure->__this);
};

// Line 28: range 000000000DED46F8-000000000DED49A2
void __fastcall GCGOperationTimer::decreaseTime(GCGOperationTimer *const this, uint64_t time)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream v12; // [rsp+10h] [rbp-80h] BYREF
  char v13[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 7 time:27";
  *(_QWORD *)(v2 + 16) = GCGOperationTimer::decreaseTime;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(_QWORD *)(v2 + 32) = time;
  common::milog::MiLogStream::create(
    &v12,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/common/gcg_operation_timer.cpp",
    "decreaseTime",
    29);
  v5 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v12, (const char (*)[12])"base_time: ");
  v6 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v5, &this->base_time_);
  v7 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v6, (const char (*)[19])" last_bonus_time: ");
  v8 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, &this->last_bonus_time_);
  v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])" cost: ");
  v10 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v9,
          (const unsigned __int64 *)(v2 + 32));
  v11 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v10, (const char (*)[5])off_1BB59E60);
  common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
    v11,
    &this->controller_id_);
  common::milog::MiLogStream::~MiLogStream(&v12);
  if ( *(_BYTE *)(((unsigned __int64)&this->base_time_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->base_time_);
  if ( this->base_time_ < *(_QWORD *)(v2 + 32) )
  {
    *(_QWORD *)(v2 + 32) -= this->base_time_;
    if ( *(_BYTE *)(((unsigned __int64)&this->last_bonus_time_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->last_bonus_time_);
    if ( this->last_bonus_time_ >= *(_QWORD *)(v2 + 32) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->last_bonus_time_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->last_bonus_time_);
      this->last_bonus_time_ -= *(_QWORD *)(v2 + 32);
    }
    else
    {
      this->last_bonus_time_ = 0LL;
    }
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 45: range 000000000DED49A4-000000000DED4A76
void __cdecl GCGOperationTimer::registCallbackFunc(
        GCGOperationTimer *const this,
        std::function<void(proto::GCGControllerValue)> *p_func)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( std::function<void ()(proto::GCGControllerValue)>::operator bool(&this->cb_func_) )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/common/gcg_operation_timer.cpp",
      "registCallbackFunc",
      48);
    v2 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v4, (const char (*)[18])"already registed.");
    v3 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v2, (const char (*)[4])" c:");
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
      v3,
      &this->controller_id_);
    common::milog::MiLogStream::~MiLogStream(&v4);
  }
  else
  {
    std::function<void ()(proto::GCGControllerValue)>::operator=(&this->cb_func_, p_func);
  }
};

// Line 55: range 000000000DED4A78-000000000DED537D
void __cdecl GCGOperationTimer::tryStart(GCGOperationTimer *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::tools::MiTimer *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<common::tools::MiTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  unsigned __int64 v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  __int64 NowMs; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  GCGControllerValue controller_id; // r14d
  std::__shared_ptr_access<GCGMsgOpTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  uint64_t begin_time; // r14
  std::__shared_ptr_access<GCGMsgOpTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  uint64_t v25; // r14
  std::__shared_ptr_access<GCGMsgOpTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  unsigned __int64 v28; // rdx
  GCGPhaseType v29; // r14d
  std::__shared_ptr_access<GCGMsgOpTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  GCGGameMode *game_mode; // r14
  std::shared_ptr<GCGMessage> p_msg; // [rsp+10h] [rbp-E0h] BYREF
  common::milog::MiLogStream v33; // [rsp+20h] [rbp-D0h] BYREF
  char v34[176]; // [rsp+40h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 8 7 time:63 64 16 12 phase_ptr:91 96 16 14 message_ptr:92";
  *(_QWORD *)(v1 + 16) = GCGOperationTimer::tryStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( !GCGGameMode::isGMStopTimer(this->game_mode_) )
  {
    *(_QWORD *)(v1 + 32) = GCGOperationTimer::getTotalTime(this);
    if ( *(_QWORD *)(v1 + 32) )
    {
      if ( std::operator==<common::tools::MiTimer>(&this->timer_ptr_, 0LL) )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/common/gcg_operation_timer.cpp",
          "tryStart",
          70);
        v4 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
               &v33,
               (const char (*)[23])"timer_ptr_ is nullptr.");
        v5 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v4, (const char (*)[4])" c:");
        common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
          v5,
          &this->controller_id_);
        common::milog::MiLogStream::~MiLogStream(&v33);
      }
      else
      {
        v6 = std::__shared_ptr_access<common::tools::MiTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::tools::MiTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->timer_ptr_);
        if ( common::tools::MiTimer::isActive(v6) )
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/card_game/common/gcg_operation_timer.cpp",
            "tryStart",
            75);
          v7 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                 &v33,
                 (const char (*)[23])"timer already started.");
          v8 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v7, (const char (*)[4])" c:");
          common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
            v8,
            &this->controller_id_);
          common::milog::MiLogStream::~MiLogStream(&v33);
        }
        else if ( !std::function<void ()(proto::GCGControllerValue)>::operator bool(&this->cb_func_) )
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/card_game/common/gcg_operation_timer.cpp",
            "tryStart",
            80);
          v9 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                 &v33,
                 (const char (*)[18])"no func registed.");
          v10 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v9, (const char (*)[4])" c:");
          common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
            v10,
            &this->controller_id_);
          common::milog::MiLogStream::~MiLogStream(&v33);
        }
        else
        {
          v11 = std::__shared_ptr_access<common::tools::MiTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::tools::MiTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->timer_ptr_);
          if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v11);
          v12 = (unsigned __int64)(v11->_vptr_MiTimer + 3);
          if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v11->_vptr_MiTimer + 3);
          if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<common::tools::MiTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD, _QWORD, const char *, const char *, __int64, _QWORD, _QWORD))v12)(
                 v11,
                 (unsigned int)*(_QWORD *)(v1 + 32),
                 0LL,
                 "./src/card_game/common/gcg_operation_timer.cpp",
                 "tryStart",
                 83LL,
                 0LL,
                 0LL) )
          {
            common::milog::MiLogStream::create(
              &v33,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/card_game/common/gcg_operation_timer.cpp",
              "tryStart",
              85);
            v13 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                    &v33,
                    (const char (*)[24])"timer_ptr_ startS fails");
            v14 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v13, (const char (*)[4])" c:");
            common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
              v14,
              &this->controller_id_);
            common::milog::MiLogStream::~MiLogStream(&v33);
          }
          else
          {
            NowMs = common::tools::TimeUtils::getNowMs();
            if ( *(_BYTE *)(((unsigned __int64)&this->begin_time_ >> 3) + 0x7FFF8000) )
              NowMs = __asan_report_store8(&this->begin_time_);
            this->begin_time_ = NowMs;
            common::milog::MiLogStream::create(
              &v33,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/card_game/common/gcg_operation_timer.cpp",
              "tryStart",
              89);
            v16 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                    &v33,
                    (const char (*)[20])"start timer. time: ");
            v17 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                    v16,
                    (const unsigned __int64 *)(v1 + 32));
            v18 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v17, (const char (*)[10])" now_ms: ");
            v19 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v18, &this->begin_time_);
            v20 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v19, (const char (*)[4])" c:");
            common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
              v20,
              &this->controller_id_);
            common::milog::MiLogStream::~MiLogStream(&v33);
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            GCGGameMode::getPhaseMgr(this->game_mode_);
            GCGPhaseMgr::getCurPhase((GCGPhaseMgr *const)(v1 + 64));
            common::tools::perf::make_shared<GCGMsgOpTimer>();
            if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->controller_id_);
            }
            controller_id = this->controller_id_;
            v22 = std::__shared_ptr_access<GCGMsgOpTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgOpTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            if ( *(_BYTE *)(((unsigned __int64)&v22->controller_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v22->controller_id >> 3) + 0x7FFF8000) <= 3 )
            {
              v22 = (std::__shared_ptr_access<GCGMsgOpTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v22->controller_id);
            }
            v22->controller_id = controller_id;
            if ( *(_BYTE *)(((unsigned __int64)&this->begin_time_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->begin_time_);
            begin_time = this->begin_time_;
            v24 = std::__shared_ptr_access<GCGMsgOpTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgOpTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            if ( *(_BYTE *)(((unsigned __int64)&v24->begin_time >> 3) + 0x7FFF8000) )
              v24 = (std::__shared_ptr_access<GCGMsgOpTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store8(&v24->begin_time);
            v24->begin_time = begin_time;
            if ( *(_BYTE *)(((unsigned __int64)&this->begin_time_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->begin_time_);
            v25 = this->begin_time_ + *(_QWORD *)(v1 + 32);
            v26 = std::__shared_ptr_access<GCGMsgOpTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgOpTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            if ( *(_BYTE *)(((unsigned __int64)&v26->time_stamp >> 3) + 0x7FFF8000) )
              v26 = (std::__shared_ptr_access<GCGMsgOpTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store8(&v26->time_stamp);
            v26->time_stamp = v25;
            if ( std::operator!=<GCGPhaseBase>((const std::shared_ptr<GCGPhaseBase> *)(v1 + 64), 0LL) )
            {
              v27 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
              if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
                __asan_report_load8(v27);
              v28 = (unsigned __int64)(v27->_vptr_GCGPhaseBase + 3);
              if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
                __asan_report_load8(v27->_vptr_GCGPhaseBase + 3);
              v29 = (*(unsigned int (__fastcall **)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v28)(v27);
              v30 = std::__shared_ptr_access<GCGMsgOpTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgOpTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
              if ( *(_BYTE *)(((unsigned __int64)&v30->phase >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v30->phase >> 3) + 0x7FFF8000) <= 3 )
              {
                v30 = (std::__shared_ptr_access<GCGMsgOpTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v30->phase);
              }
              v30->phase = v29;
            }
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            game_mode = this->game_mode_;
            std::shared_ptr<GCGMessage>::shared_ptr<GCGMsgOpTimer,void>(
              &p_msg,
              (const std::shared_ptr<GCGMsgOpTimer> *)(v1 + 96));
            GCGGameMode::sendMessage(game_mode, &p_msg);
            std::shared_ptr<GCGMessage>::~shared_ptr(&p_msg);
            std::shared_ptr<GCGMsgOpTimer>::~shared_ptr((std::shared_ptr<GCGMsgOpTimer> *const)(v1 + 96));
            std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v1 + 64));
          }
        }
      }
    }
  }
  if ( v34 == (char *)v1 )
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

// Line 105: range 000000000DED537E-000000000DED5457
bool __cdecl GCGOperationTimer::isActive(GCGOperationTimer *const this)
{
  common::milog::MiLogStream *v1; // rax
  common::milog::MiLogStream *v2; // rax
  common::tools::MiTimer *v4; // rax
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<common::tools::MiTimer>(&this->timer_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/common/gcg_operation_timer.cpp",
      "isActive",
      108);
    v1 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v5,
           (const char (*)[23])"timer_ptr_ is nullptr.");
    v2 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v1, (const char (*)[4])" c:");
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
      v2,
      &this->controller_id_);
    common::milog::MiLogStream::~MiLogStream(&v5);
    return 0;
  }
  else
  {
    v4 = std::__shared_ptr_access<common::tools::MiTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::tools::MiTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->timer_ptr_);
    return common::tools::MiTimer::isActive(v4);
  }
};

// Line 115: range 000000000DED5458-000000000DED5A9E
void __cdecl GCGOperationTimer::tryStop(GCGOperationTimer *const this, bool is_count_time)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::tools::MiTimer *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::tools::MiTimer *v15; // rax
  GCGControllerValue controller_id; // r14d
  std::__shared_ptr_access<GCGMsgOpTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<GCGMsgOpTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  GCGGameMode *game_mode; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  std::shared_ptr<GCGMessage> p_msg; // [rsp+10h] [rbp-E0h] BYREF
  common::milog::MiLogStream v26; // [rsp+20h] [rbp-D0h] BYREF
  char v27[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 10 now_ms:126 64 8 19 temp_begin_time:129 96 16 15 message_ptr:132";
  *(_QWORD *)(v2 + 16) = GCGOperationTimer::tryStop;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  if ( std::operator==<common::tools::MiTimer>(&this->timer_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/common/gcg_operation_timer.cpp",
      "tryStop",
      118);
    v5 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v26,
           (const char (*)[23])"timer_ptr_ is nullptr.");
    v6 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v5, (const char (*)[4])" c:");
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
      v6,
      &this->controller_id_);
    common::milog::MiLogStream::~MiLogStream(&v26);
  }
  else
  {
    v7 = std::__shared_ptr_access<common::tools::MiTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::tools::MiTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->timer_ptr_);
    if ( !common::tools::MiTimer::isActive(v7) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/common/gcg_operation_timer.cpp",
        "tryStop",
        123);
      v8 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
             &v26,
             (const char (*)[19])"timer not started.");
      v9 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v8, (const char (*)[4])" c:");
      common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
        v9,
        &this->controller_id_);
      common::milog::MiLogStream::~MiLogStream(&v26);
    }
    else
    {
      *(_QWORD *)(v2 + 32) = common::tools::TimeUtils::getNowMs();
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/common/gcg_operation_timer.cpp",
        "tryStop",
        127);
      v10 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v26,
              (const char (*)[28])"stop timer. is_count_time: ");
      v11 = common::milog::MiLogStream::operator<<(v10, is_count_time);
      v12 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])" now_ms: ");
      v13 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v12,
              (const unsigned __int64 *)(v2 + 32));
      v14 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v13, (const char (*)[4])" c:");
      common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
        v14,
        &this->controller_id_);
      common::milog::MiLogStream::~MiLogStream(&v26);
      v15 = std::__shared_ptr_access<common::tools::MiTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::tools::MiTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->timer_ptr_);
      common::tools::MiTimer::cancel(v15);
      if ( *(_BYTE *)(((unsigned __int64)&this->begin_time_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->begin_time_);
      *(_QWORD *)(v2 + 64) = this->begin_time_;
      this->begin_time_ = 0LL;
      common::tools::perf::make_shared<GCGMsgOpTimer>();
      if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->controller_id_);
      }
      controller_id = this->controller_id_;
      v17 = std::__shared_ptr_access<GCGMsgOpTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgOpTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v17->controller_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v17->controller_id >> 3) + 0x7FFF8000) <= 3 )
      {
        v17 = (std::__shared_ptr_access<GCGMsgOpTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v17->controller_id);
      }
      v17->controller_id = controller_id;
      v18 = std::__shared_ptr_access<GCGMsgOpTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgOpTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v18->time_stamp >> 3) + 0x7FFF8000) )
        v18 = (std::__shared_ptr_access<GCGMsgOpTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store8(&v18->time_stamp);
      v18->time_stamp = 0LL;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      game_mode = this->game_mode_;
      std::shared_ptr<GCGMessage>::shared_ptr<GCGMsgOpTimer,void>(
        &p_msg,
        (const std::shared_ptr<GCGMsgOpTimer> *)(v2 + 96));
      GCGGameMode::sendMessage(game_mode, &p_msg);
      std::shared_ptr<GCGMessage>::~shared_ptr(&p_msg);
      std::shared_ptr<GCGMsgOpTimer>::~shared_ptr((std::shared_ptr<GCGMsgOpTimer> *const)(v2 + 96));
      if ( is_count_time )
      {
        if ( *(_QWORD *)(v2 + 64) && *(_QWORD *)(v2 + 64) <= *(_QWORD *)(v2 + 32) )
        {
          GCGOperationTimer::decreaseTime(this, *(_QWORD *)(v2 + 32) - *(_QWORD *)(v2 + 64));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/card_game/common/gcg_operation_timer.cpp",
            "tryStop",
            143);
          v20 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  &v26,
                  (const char (*)[26])"begin time error. begin: ");
          v21 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v20,
                  (const unsigned __int64 *)(v2 + 64));
          v22 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v21, (const char (*)[10])" now_ms: ");
          v23 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v22,
                  (const unsigned __int64 *)(v2 + 32));
          v24 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v23, (const char (*)[4])" c:");
          common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
            v24,
            &this->controller_id_);
          common::milog::MiLogStream::~MiLogStream(&v26);
        }
      }
    }
  }
  if ( v27 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 151: range 000000000DED5AA0-000000000DED5D7D
void __cdecl GCGOperationTimer::onTimer(GCGOperationTimer *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // rbx
  GCGControllerValue controller_id; // r14d
  uint32_t GameUid; // eax
  std::function<void(proto::GCGControllerValue)> *p_cb_func; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-1D0h] BYREF
  char v9[432]; // [rsp+30h] [rbp-1B0h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(384LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 257 10 holder:152";
  *(_QWORD *)(v1 + 16) = GCGOperationTimer::onTimer;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862729] = -218038272;
  v3[536862730] = -202116109;
  v3[536862731] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id_);
  }
  controller_id = this->controller_id_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  GameUid = GCGGameMode::getGameUid(this->game_mode_);
  common::milog::MilogContextHolder::MilogContextHolder(
    (common::milog::MilogContextHolder *const)(v1 + 48),
    "gcg_game: %u c:%u",
    GameUid,
    (unsigned int)controller_id);
  if ( std::function<void ()(proto::GCGControllerValue)>::operator bool(&this->cb_func_) )
  {
    p_cb_func = &this->cb_func_;
    if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->controller_id_);
    }
    std::function<void ()(proto::GCGControllerValue)>::operator()(p_cb_func, this->controller_id_);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/common/gcg_operation_timer.cpp",
      "onTimer",
      159);
    v7 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v8,
           (const char (*)[22])"no callback func. c: ");
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
      v7,
      &this->controller_id_);
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  common::milog::MilogContextHolder::~MilogContextHolder((common::milog::MilogContextHolder *const)(v1 + 48));
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF802C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
