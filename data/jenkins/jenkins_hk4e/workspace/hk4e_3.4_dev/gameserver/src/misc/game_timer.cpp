// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/misc/game_timer.cpp

// Line 23: range 0000000015578612-00000000155786E4
void __cdecl UnixTimer::UnixTimer(UnixTimer *const this, common::tools::TimeoutFunc *p_callback)
{
  int (**v2)(...); // rdx
  common::tools::TimerMgrPtr p_timer_mgr_ptr; // [rsp+10h] [rbp-40h] BYREF
  std::function<void(long unsigned int)> v4; // [rsp+20h] [rbp-30h] BYREF

  std::function<void ()(unsigned long)>::function(&v4, p_callback);
  ServiceBox::findService<GameserverService>();
  GameserverService::getTimerMgrPtr((GameserverService *const)&p_timer_mgr_ptr);
  common::tools::MiTimer::MiTimer(this, &p_timer_mgr_ptr, &v4);
  std::shared_ptr<common::tools::TimerMgr>::~shared_ptr(&p_timer_mgr_ptr);
  std::function<void ()(unsigned long)>::~function(&v4);
  v2 = (int (**)(...))(&`vtable for'UnixTimer + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MiTimer = v2;
};

// Line 26: range 00000000155786E6-00000000155787DB
void __cdecl UnixTimerMgr::UnixTimerMgr(UnixTimerMgr *const this)
{
  UnixTimerMgr **v1; // r8
  const std::_Placeholder<1> *v2; // r9
  int (**v3)(...); // rdx
  UnixTimerMgr *v4; // [rsp+18h] [rbp-68h] BYREF
  bool (*__f[2])(common::tools::TimerMgr *, unsigned __int64); // [rsp+20h] [rbp-60h] BYREF
  std::_Bind_helper<false,bool (common::tools::TimerMgr::*)(long unsigned int),UnixTimerMgr*,const std::_Placeholder<1>&>::type p___f; // [rsp+30h] [rbp-50h] BYREF
  std::function<void(long unsigned int)> p_callback; // [rsp+50h] [rbp-30h] BYREF

  common::tools::TimerMgr::TimerMgr(this, 0xC8u);
  v3 = (int (**)(...))(&`vtable for'UnixTimerMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TimerMgr = v3;
  v4 = this;
  __f[0] = (bool (*)(common::tools::TimerMgr *, unsigned __int64))common::tools::TimerMgr::update;
  __f[1] = 0LL;
  std::bind<bool (common::tools::TimerMgr::*)(unsigned long),UnixTimerMgr *,std::_Placeholder<1> const&>(
    &p___f,
    __f,
    &v4,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v1,
    v2);
  std::function<void ()(unsigned long)>::function<std::_Bind<bool (common::tools::TimerMgr::*)(unsigned long) ()(UnixTimerMgr *,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  UnixTimer::UnixTimer(&this->update_timer_, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
};

// Line 30: range 00000000155787DC-00000000155788B9
int32_t __cdecl UnixTimerMgr::start(
        UnixTimerMgr *const this,
        const char *file,
        const char *func,
        int32_t line,
        uint32_t uid,
        uint32_t scene_id)
{
  common::milog::MiLogStream v7; // [rsp+30h] [rbp-30h] BYREF

  if ( !common::tools::MiTimer::startMS(&this->update_timer_, 0xC8u, 1, file, func, line, uid, scene_id) )
    return 0;
  common::milog::MiLogStream::create(
    &v7,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/misc/game_timer.cpp",
    "start",
    33);
  common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
    &v7,
    (const char (*)[29])"update_timer_ startMS failed");
  common::milog::MiLogStream::~MiLogStream(&v7);
  return -1;
};

// Line 41: range 00000000155788BA-00000000155788DA
void __cdecl UnixTimerMgr::cancel(UnixTimerMgr *const this)
{
  common::tools::MiTimer::cancel(&this->update_timer_);
};

// Line 45: range 00000000155788DC-0000000015578A7D
void __cdecl PausableTimerMgr::PausableTimerMgr(PausableTimerMgr *const this)
{
  PausableTimerMgr **v1; // r8
  const std::_Placeholder<1> *v2; // r9
  int (**v3)(...); // rdx
  PausableTimerMgr *v4; // [rsp+18h] [rbp-68h] BYREF
  void (*__f[2])(PausableTimerMgr *, unsigned __int64); // [rsp+20h] [rbp-60h] BYREF
  std::_Bind_helper<false,void (PausableTimerMgr::*)(long unsigned int),PausableTimerMgr*,const std::_Placeholder<1>&>::type p___f; // [rsp+30h] [rbp-50h] BYREF
  std::function<void(long unsigned int)> p_callback; // [rsp+50h] [rbp-30h] BYREF

  common::tools::TimerMgr::TimerMgr(this, 0xC8u);
  v3 = (int (**)(...))(&`vtable for'PausableTimerMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TimerMgr = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_update_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_update_ms_);
  this->last_update_ms_ = 0LL;
  if ( *(char *)(((unsigned __int64)&this->is_last_paused_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_last_paused_);
  this->is_last_paused_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_notify_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_notify_ms_);
  this->last_notify_ms_ = 0LL;
  v4 = this;
  __f[0] = (void (*)(PausableTimerMgr *, unsigned __int64))PausableTimerMgr::update;
  __f[1] = 0LL;
  std::bind<void (PausableTimerMgr::*)(unsigned long),PausableTimerMgr*,std::_Placeholder<1> const&>(
    &p___f,
    __f,
    &v4,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v1,
    v2);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (PausableTimerMgr::*)(unsigned long) ()(PausableTimerMgr*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  UnixTimer::UnixTimer(&this->update_timer_, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
};

// Line 50: range 0000000015578A7E-0000000015579061
void __cdecl PausableTimerMgr::update(PausableTimerMgr *const this, uint64_t now)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  char is_now_paused; // [rsp+1Fh] [rbp-11h]
  uint64_t pausable_time_ms; // [rsp+20h] [rbp-10h]
  uint64_t pausable_time_msa; // [rsp+20h] [rbp-10h]
  uint64_t start_update_ms; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = (unsigned __int64)(this->_vptr_TimerMgr + 2);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  pausable_time_ms = (*(__int64 (__fastcall **)(PausableTimerMgr *const))v2)(this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = (unsigned __int64)(this->_vptr_TimerMgr + 4);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8();
  is_now_paused = (*(__int64 (__fastcall **)(PausableTimerMgr *const))v3)(this);
  if ( !is_now_paused )
    goto LABEL_13;
  if ( *(char *)(((unsigned __int64)&this->is_last_paused_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_last_paused_);
  if ( !this->is_last_paused_ )
  {
LABEL_13:
    start_update_ms = 0LL;
    if ( is_now_paused )
    {
      if ( *(char *)(((unsigned __int64)&this->is_last_paused_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_last_paused_);
      if ( !this->is_last_paused_ )
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v4 = (unsigned __int64)(this->_vptr_TimerMgr + 3);
        if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
          v4 = __asan_report_load8();
        (*(void (__fastcall **)(PausableTimerMgr *const, uint64_t, __int64, uint64_t))v4)(
          this,
          pausable_time_ms,
          1LL,
          now);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v5 = (unsigned __int64)(this->_vptr_TimerMgr + 5);
        if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
          v5 = __asan_report_load8();
        (*(void (__fastcall **)(PausableTimerMgr *const, __int64, uint64_t))v5)(this, 1LL, pausable_time_ms);
      }
    }
    if ( is_now_paused != 1 )
    {
      if ( *(char *)(((unsigned __int64)&this->is_last_paused_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_last_paused_);
      if ( this->is_last_paused_ )
      {
        start_update_ms = now;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v6 = (unsigned __int64)(this->_vptr_TimerMgr + 5);
        if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
          v6 = __asan_report_load8();
        (*(void (__fastcall **)(PausableTimerMgr *const, _QWORD, uint64_t))v6)(this, 0LL, pausable_time_ms);
      }
    }
    if ( is_now_paused )
    {
      if ( *(char *)(((unsigned __int64)&this->is_last_paused_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_last_paused_);
      this->is_last_paused_ = 1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->last_update_ms_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( !this->last_update_ms_ )
        this->last_update_ms_ = now;
      if ( *(_BYTE *)(((unsigned __int64)&this->last_update_ms_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( start_update_ms < this->last_update_ms_ )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->last_update_ms_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        pausable_time_msa = now - this->last_update_ms_ + pausable_time_ms;
      }
      else
      {
        pausable_time_msa = now - start_update_ms + pausable_time_ms;
      }
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v7 = (unsigned __int64)(this->_vptr_TimerMgr + 3);
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        v7 = __asan_report_load8();
      (*(void (__fastcall **)(PausableTimerMgr *const, uint64_t, _QWORD, uint64_t))v7)(
        this,
        pausable_time_msa,
        0LL,
        now);
      common::tools::TimerMgr::update(this, pausable_time_msa);
      if ( *(_BYTE *)(((unsigned __int64)&this->last_update_ms_ >> 3) + 0x7FFF8000) )
        __asan_report_store8(&this->last_update_ms_);
      this->last_update_ms_ = now;
      if ( *(char *)(((unsigned __int64)&this->is_last_paused_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_last_paused_);
      this->is_last_paused_ = 0;
      if ( *(_BYTE *)(((unsigned __int64)&this->last_notify_ms_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( now >= this->last_notify_ms_ + 10000 )
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v8 = (unsigned __int64)(this->_vptr_TimerMgr + 5);
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          v8 = __asan_report_load8();
        (*(void (__fastcall **)(PausableTimerMgr *const, _QWORD, uint64_t))v8)(this, 0LL, pausable_time_msa);
        if ( *(_BYTE *)(((unsigned __int64)&this->last_notify_ms_ >> 3) + 0x7FFF8000) )
          __asan_report_store8(&this->last_notify_ms_);
        this->last_notify_ms_ = now;
      }
    }
  }
};

// Line 110: range 0000000015579062-000000001557913F
int32_t __cdecl PausableTimerMgr::start(
        PausableTimerMgr *const this,
        const char *file,
        const char *func,
        int32_t line,
        uint32_t uid,
        uint32_t scene_id)
{
  common::milog::MiLogStream v7; // [rsp+30h] [rbp-30h] BYREF

  if ( !common::tools::MiTimer::startMS(&this->update_timer_, 0xC8u, 1, file, func, line, uid, scene_id) )
    return 0;
  common::milog::MiLogStream::create(
    &v7,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/misc/game_timer.cpp",
    "start",
    113);
  common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
    &v7,
    (const char (*)[29])"update_timer_ startMS failed");
  common::milog::MiLogStream::~MiLogStream(&v7);
  return -1;
};

// Line 121: range 0000000015579140-0000000015579160
void __cdecl PausableTimerMgr::cancel(PausableTimerMgr *const this)
{
  common::tools::MiTimer::cancel(&this->update_timer_);
};

// Line 125: range 0000000015579162-00000000155792A4
void __cdecl PlayerUnixTimer::PlayerUnixTimer(
        PlayerUnixTimer *const this,
        PlayerPtr *p_player_ptr,
        common::tools::TimeoutFunc *p_callback)
{
  int (**v3)(...); // rdx
  std::shared_ptr<common::tools::TimerMgr> p_timer_mgr_ptr; // [rsp+20h] [rbp-50h] BYREF
  std::shared_ptr<UnixTimerMgr> __r; // [rsp+30h] [rbp-40h] BYREF
  std::function<void(long unsigned int)> v6; // [rsp+40h] [rbp-30h] BYREF

  std::function<void ()(unsigned long)>::function(&v6, p_callback);
  if ( std::operator==<Player>(p_player_ptr, 0LL) )
  {
    std::shared_ptr<UnixTimerMgr>::shared_ptr(&__r, 0LL);
  }
  else
  {
    std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    Player::getUnixTimerMgr((Player *const)&__r);
  }
  std::shared_ptr<common::tools::TimerMgr>::shared_ptr<UnixTimerMgr,void>(&p_timer_mgr_ptr, &__r);
  common::tools::MiTimer::MiTimer(this, &p_timer_mgr_ptr, &v6);
  std::shared_ptr<common::tools::TimerMgr>::~shared_ptr(&p_timer_mgr_ptr);
  std::shared_ptr<UnixTimerMgr>::~shared_ptr(&__r);
  std::function<void ()(unsigned long)>::~function(&v6);
  v3 = (int (**)(...))(&`vtable for'PlayerUnixTimer + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MiTimer = v3;
  std::weak_ptr<Player>::weak_ptr<Player,void>(&this->player_wtr_, p_player_ptr);
};

// Line 131: range 00000000155792A6-0000000015579468
int32_t __cdecl PlayerUnixTimer::startS(
        PlayerUnixTimer *const this,
        uint32_t seconds,
        bool is_repeated,
        const char *file,
        const char *func,
        int32_t line)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  Player *v10; // rax
  PlayerSceneComp *SceneComp; // rax
  int32_t v12; // r14d
  int32_t result; // eax
  uint32_t uid; // [rsp+38h] [rbp-78h]
  uint32_t scene_id; // [rsp+3Ch] [rbp-74h]
  char v20[112]; // [rsp+40h] [rbp-70h] BYREF

  v6 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 16 14 player_ptr:134";
  *(_QWORD *)(v6 + 16) = PlayerUnixTimer::startS;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202178560;
  uid = 0;
  scene_id = 0;
  std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v6 + 32));
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v6 + 32), 0LL) )
  {
    v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
    uid = Player::getUid(v9);
    v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
    SceneComp = Player::getSceneComp(v10);
    scene_id = PlayerSceneComp::getCurSceneId(SceneComp);
  }
  v12 = common::tools::MiTimer::startS(this, seconds, is_repeated, file, func, line, uid, scene_id);
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v6 + 32));
  result = v12;
  if ( v20 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 144: range 000000001557946A-000000001557962C
int32_t __cdecl PlayerUnixTimer::startMS(
        PlayerUnixTimer *const this,
        uint32_t milliseconds,
        bool is_repeated,
        const char *file,
        const char *func,
        int32_t line)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  Player *v10; // rax
  PlayerSceneComp *SceneComp; // rax
  int32_t started; // r14d
  int32_t result; // eax
  uint32_t uid; // [rsp+38h] [rbp-78h]
  uint32_t scene_id; // [rsp+3Ch] [rbp-74h]
  char v20[112]; // [rsp+40h] [rbp-70h] BYREF

  v6 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 16 14 player_ptr:147";
  *(_QWORD *)(v6 + 16) = PlayerUnixTimer::startMS;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202178560;
  uid = 0;
  scene_id = 0;
  std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v6 + 32));
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v6 + 32), 0LL) )
  {
    v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
    uid = Player::getUid(v9);
    v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
    SceneComp = Player::getSceneComp(v10);
    scene_id = PlayerSceneComp::getCurSceneId(SceneComp);
  }
  started = common::tools::MiTimer::startMS(this, milliseconds, is_repeated, file, func, line, uid, scene_id);
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v6 + 32));
  result = started;
  if ( v20 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 156: range 000000001557962E-0000000015579770
void __cdecl PlayerTimer::PlayerTimer(
        PlayerTimer *const this,
        PlayerPtr *p_player_ptr,
        common::tools::TimeoutFunc *p_callback)
{
  int (**v3)(...); // rdx
  std::shared_ptr<common::tools::TimerMgr> p_timer_mgr_ptr; // [rsp+20h] [rbp-50h] BYREF
  std::shared_ptr<PlayerTimerMgr> __r; // [rsp+30h] [rbp-40h] BYREF
  std::function<void(long unsigned int)> v6; // [rsp+40h] [rbp-30h] BYREF

  std::function<void ()(unsigned long)>::function(&v6, p_callback);
  if ( std::operator==<Player>(p_player_ptr, 0LL) )
  {
    std::shared_ptr<PlayerTimerMgr>::shared_ptr(&__r, 0LL);
  }
  else
  {
    std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    Player::getPlayerTimerMgr((Player *const)&__r);
  }
  std::shared_ptr<common::tools::TimerMgr>::shared_ptr<PlayerTimerMgr,void>(&p_timer_mgr_ptr, &__r);
  common::tools::MiTimer::MiTimer(this, &p_timer_mgr_ptr, &v6);
  std::shared_ptr<common::tools::TimerMgr>::~shared_ptr(&p_timer_mgr_ptr);
  std::shared_ptr<PlayerTimerMgr>::~shared_ptr(&__r);
  std::function<void ()(unsigned long)>::~function(&v6);
  v3 = (int (**)(...))(&`vtable for'PlayerTimer + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MiTimer = v3;
  std::weak_ptr<Player>::weak_ptr<Player,void>(&this->player_wtr_, p_player_ptr);
};

// Line 163: range 0000000015579772-0000000015579934
int32_t __cdecl PlayerTimer::startS(
        PlayerTimer *const this,
        uint32_t seconds,
        bool is_repeated,
        const char *file,
        const char *func,
        int32_t line)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  Player *v10; // rax
  PlayerSceneComp *SceneComp; // rax
  int32_t v12; // r14d
  int32_t result; // eax
  uint32_t uid; // [rsp+38h] [rbp-78h]
  uint32_t scene_id; // [rsp+3Ch] [rbp-74h]
  char v20[112]; // [rsp+40h] [rbp-70h] BYREF

  v6 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 16 14 player_ptr:166";
  *(_QWORD *)(v6 + 16) = PlayerTimer::startS;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202178560;
  uid = 0;
  scene_id = 0;
  std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v6 + 32));
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v6 + 32), 0LL) )
  {
    v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
    uid = Player::getUid(v9);
    v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
    SceneComp = Player::getSceneComp(v10);
    scene_id = PlayerSceneComp::getCurSceneId(SceneComp);
  }
  v12 = common::tools::MiTimer::startS(this, seconds, is_repeated, file, func, line, uid, scene_id);
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v6 + 32));
  result = v12;
  if ( v20 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 176: range 0000000015579936-0000000015579AF8
int32_t __cdecl PlayerTimer::startMS(
        PlayerTimer *const this,
        uint32_t milliseconds,
        bool is_repeated,
        const char *file,
        const char *func,
        int32_t line)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  Player *v10; // rax
  PlayerSceneComp *SceneComp; // rax
  int32_t started; // r14d
  int32_t result; // eax
  uint32_t uid; // [rsp+38h] [rbp-78h]
  uint32_t scene_id; // [rsp+3Ch] [rbp-74h]
  char v20[112]; // [rsp+40h] [rbp-70h] BYREF

  v6 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 16 14 player_ptr:179";
  *(_QWORD *)(v6 + 16) = PlayerTimer::startMS;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202178560;
  uid = 0;
  scene_id = 0;
  std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v6 + 32));
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v6 + 32), 0LL) )
  {
    v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
    uid = Player::getUid(v9);
    v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
    SceneComp = Player::getSceneComp(v10);
    scene_id = PlayerSceneComp::getCurSceneId(SceneComp);
  }
  started = common::tools::MiTimer::startMS(this, milliseconds, is_repeated, file, func, line, uid, scene_id);
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v6 + 32));
  result = started;
  if ( v20 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 189: range 0000000015579AFA-0000000015579B65
void __cdecl PlayerTimerMgr::PlayerTimerMgr(PlayerTimerMgr *const this, PlayerPtr *p_player_ptr)
{
  int (**v2)(...); // rdx

  PausableTimerMgr::PausableTimerMgr(this);
  v2 = (int (**)(...))(&`vtable for'PlayerTimerMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TimerMgr = v2;
  std::weak_ptr<Player>::weak_ptr<Player,void>(&this->player_wtr_, p_player_ptr);
};

// Line 194: range 0000000015579B66-0000000015579D0E
uint64_t __cdecl PlayerTimerMgr::getPausableTimeMs(PlayerTimerMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint64_t PlayerTimeMs; // r14
  Player *v5; // rax
  PlayerBasicComp *BasicComp; // rax
  uint64_t result; // rax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-90h] BYREF
  char v9[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 player_ptr:195";
  *(_QWORD *)(v1 + 16) = PlayerTimerMgr::getPausableTimeMs;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v1 + 32));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/game_timer.cpp",
      "getPausableTimeMs",
      198);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v8, (const char (*)[21])"PlayerPtr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v8);
    PlayerTimeMs = 0LL;
  }
  else
  {
    v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    BasicComp = Player::getBasicComp(v5);
    PlayerTimeMs = PlayerBasicComp::getPlayerTimeMs(BasicComp);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  result = PlayerTimeMs;
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 206: range 0000000015579D10-0000000015579EBF
void __cdecl PlayerTimerMgr::setPausableTimeMs(
        PlayerTimerMgr *const this,
        uint64_t ms,
        bool is_paused,
        uint64_t last_update_time)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  Player *v7; // rax
  PlayerBasicComp *BasicComp; // rdx
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-80h] BYREF
  char v10[96]; // [rsp+40h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 14 player_ptr:207";
  *(_QWORD *)(v4 + 16) = PlayerTimerMgr::setPausableTimeMs;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v4 + 32));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v4 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/game_timer.cpp",
      "setPausableTimeMs",
      210);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v9, (const char (*)[21])"PlayerPtr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else
  {
    v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    BasicComp = Player::getBasicComp(v7);
    PlayerBasicComp::setPlayerTimeMs(BasicComp, ms);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 32));
  if ( v10 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 218: range 0000000015579EC0-000000001557A066
int32_t __cdecl PlayerTimerMgr::start(PlayerTimerMgr *const this, const char *file, const char *func, int32_t line)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  Player *v8; // rax
  PlayerSceneComp *SceneComp; // rax
  int32_t v10; // r14d
  int32_t result; // eax
  uint32_t uid; // [rsp+28h] [rbp-78h]
  uint32_t scene_id; // [rsp+2Ch] [rbp-74h]
  char v16[112]; // [rsp+30h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 14 player_ptr:221";
  *(_QWORD *)(v4 + 16) = PlayerTimerMgr::start;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  uid = 0;
  scene_id = 0;
  std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v4 + 32));
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v4 + 32), 0LL) )
  {
    v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    uid = Player::getUid(v7);
    v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    SceneComp = Player::getSceneComp(v8);
    scene_id = PlayerSceneComp::getCurSceneId(SceneComp);
  }
  v10 = PausableTimerMgr::start(this, file, func, line, uid, scene_id);
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 32));
  result = v10;
  if ( v16 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 231: range 000000001557A068-000000001557A210
bool __cdecl PlayerTimerMgr::isPaused(PlayerTimerMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  bool isPaused; // r14
  Player *v5; // rax
  PlayerBasicComp *BasicComp; // rax
  bool result; // al
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-90h] BYREF
  char v9[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 player_ptr:232";
  *(_QWORD *)(v1 + 16) = PlayerTimerMgr::isPaused;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v1 + 32));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/game_timer.cpp",
      "isPaused",
      235);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v8, (const char (*)[21])"PlayerPtr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v8);
    isPaused = 1;
  }
  else
  {
    v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    BasicComp = Player::getBasicComp(v5);
    isPaused = PlayerBasicComp::isPaused(BasicComp);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  result = isPaused;
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 243: range 000000001557A212-000000001557A4F5
void __fastcall PlayerTimerMgr::notifyPausableInfo(
        PlayerTimerMgr *const this,
        bool is_paused,
        uint64_t pausable_time_ms)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  Player *v6; // rax
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  unsigned int val; // [rsp+2Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 20 pausable_time_ms:242 64 16 14 player_ptr:244";
  *(_QWORD *)(v3 + 16) = PlayerTimerMgr::notifyPausableInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202178560;
  *(_QWORD *)(v3 + 32) = pausable_time_ms;
  std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 64));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/game_timer.cpp",
      "notifyPausableInfo",
      247);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v16, (const char (*)[21])"PlayerPtr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  else
  {
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    BasicComp = Player::getBasicComp(v6);
    PlayerBasicComp::notifyPlayerTime(BasicComp, is_paused, *(_QWORD *)(v3 + 32));
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/misc/game_timer.cpp",
      "notifyPausableInfo",
      252);
    v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v16,
           (const char (*)[40])"PlayerTimerMgr notifyPausableInfo, uid:");
    v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    val = Player::getUid(v9);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])" isPaused:");
    v12 = common::milog::MiLogStream::operator<<(v11, is_paused);
    v13 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v12, (const char (*)[10])" time_ms:");
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v13, (const unsigned __int64 *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  if ( v17 == (char *)v3 )
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

// Line 255: range 000000001557A4F6-000000001557A638
void __cdecl SceneUnixTimer::SceneUnixTimer(
        SceneUnixTimer *const this,
        ScenePtr *p_scene_ptr,
        common::tools::TimeoutFunc *p_callback)
{
  int (**v3)(...); // rdx
  std::shared_ptr<common::tools::TimerMgr> p_timer_mgr_ptr; // [rsp+20h] [rbp-50h] BYREF
  std::shared_ptr<UnixTimerMgr> __r; // [rsp+30h] [rbp-40h] BYREF
  std::function<void(long unsigned int)> v6; // [rsp+40h] [rbp-30h] BYREF

  std::function<void ()(unsigned long)>::function(&v6, p_callback);
  if ( std::operator==<Scene>(p_scene_ptr, 0LL) )
  {
    std::shared_ptr<UnixTimerMgr>::shared_ptr(&__r, 0LL);
  }
  else
  {
    std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_scene_ptr);
    Scene::getUnixTimerMgr((Scene *const)&__r);
  }
  std::shared_ptr<common::tools::TimerMgr>::shared_ptr<UnixTimerMgr,void>(&p_timer_mgr_ptr, &__r);
  common::tools::MiTimer::MiTimer(this, &p_timer_mgr_ptr, &v6);
  std::shared_ptr<common::tools::TimerMgr>::~shared_ptr(&p_timer_mgr_ptr);
  std::shared_ptr<UnixTimerMgr>::~shared_ptr(&__r);
  std::function<void ()(unsigned long)>::~function(&v6);
  v3 = (int (**)(...))(&`vtable for'SceneUnixTimer + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MiTimer = v3;
  std::weak_ptr<Scene>::weak_ptr<Scene,void>(&this->scene_wtr_, p_scene_ptr);
};

// Line 261: range 000000001557A63A-000000001557A7EF
int32_t __cdecl SceneUnixTimer::startS(
        SceneUnixTimer *const this,
        uint32_t seconds,
        bool is_repeated,
        const char *file,
        const char *func,
        int32_t line)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  int32_t v11; // r14d
  int32_t result; // eax
  uint32_t uid; // [rsp+38h] [rbp-78h]
  uint32_t scene_id; // [rsp+3Ch] [rbp-74h]
  char v19[112]; // [rsp+40h] [rbp-70h] BYREF

  v6 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 16 13 scene_ptr:264";
  *(_QWORD *)(v6 + 16) = SceneUnixTimer::startS;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202178560;
  uid = 0;
  scene_id = 0;
  std::weak_ptr<Scene>::lock((const std::weak_ptr<Scene> *const)(v6 + 32));
  if ( std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::operator bool((const std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2> *const)(v6 + 32)) )
  {
    v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
    uid = Scene::getOwnerUid(v9);
    v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
    scene_id = Scene::getSceneId(v10);
  }
  v11 = common::tools::MiTimer::startS(this, seconds, is_repeated, file, func, line, uid, scene_id);
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v6 + 32));
  result = v11;
  if ( v19 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 274: range 000000001557A7F0-000000001557A9A5
int32_t __cdecl SceneUnixTimer::startMS(
        SceneUnixTimer *const this,
        uint32_t milliseconds,
        bool is_repeated,
        const char *file,
        const char *func,
        int32_t line)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  int32_t started; // r14d
  int32_t result; // eax
  uint32_t uid; // [rsp+38h] [rbp-78h]
  uint32_t scene_id; // [rsp+3Ch] [rbp-74h]
  char v19[112]; // [rsp+40h] [rbp-70h] BYREF

  v6 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 16 13 scene_ptr:277";
  *(_QWORD *)(v6 + 16) = SceneUnixTimer::startMS;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202178560;
  uid = 0;
  scene_id = 0;
  std::weak_ptr<Scene>::lock((const std::weak_ptr<Scene> *const)(v6 + 32));
  if ( std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::operator bool((const std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2> *const)(v6 + 32)) )
  {
    v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
    uid = Scene::getOwnerUid(v9);
    v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
    scene_id = Scene::getSceneId(v10);
  }
  started = common::tools::MiTimer::startMS(this, milliseconds, is_repeated, file, func, line, uid, scene_id);
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v6 + 32));
  result = started;
  if ( v19 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 287: range 000000001557A9A6-000000001557AAE8
void __cdecl SceneTimer::SceneTimer(
        SceneTimer *const this,
        ScenePtr *p_scene_ptr,
        common::tools::TimeoutFunc *p_callback)
{
  int (**v3)(...); // rdx
  std::shared_ptr<common::tools::TimerMgr> p_timer_mgr_ptr; // [rsp+20h] [rbp-50h] BYREF
  std::shared_ptr<SceneTimerMgr> __r; // [rsp+30h] [rbp-40h] BYREF
  std::function<void(long unsigned int)> v6; // [rsp+40h] [rbp-30h] BYREF

  std::function<void ()(unsigned long)>::function(&v6, p_callback);
  if ( std::operator==<Scene>(p_scene_ptr, 0LL) )
  {
    std::shared_ptr<SceneTimerMgr>::shared_ptr(&__r, 0LL);
  }
  else
  {
    std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_scene_ptr);
    Scene::getSceneTimerMgr((Scene *const)&__r);
  }
  std::shared_ptr<common::tools::TimerMgr>::shared_ptr<SceneTimerMgr,void>(&p_timer_mgr_ptr, &__r);
  common::tools::MiTimer::MiTimer(this, &p_timer_mgr_ptr, &v6);
  std::shared_ptr<common::tools::TimerMgr>::~shared_ptr(&p_timer_mgr_ptr);
  std::shared_ptr<SceneTimerMgr>::~shared_ptr(&__r);
  std::function<void ()(unsigned long)>::~function(&v6);
  v3 = (int (**)(...))(&`vtable for'SceneTimer + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MiTimer = v3;
  std::weak_ptr<Scene>::weak_ptr<Scene,void>(&this->scene_wtr_, p_scene_ptr);
};

// Line 293: range 000000001557AAEA-000000001557AD69
int32_t __cdecl SceneTimer::startS(
        SceneTimer *const this,
        uint32_t seconds,
        bool is_repeated,
        const char *file,
        const char *func,
        int32_t line)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int32_t v14; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+50h] [rbp-90h] BYREF

  v6 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 32 4 7 uid:294 48 4 12 scene_id:295 64 16 13 scene_ptr:296";
  *(_QWORD *)(v6 + 16) = SceneTimer::startS;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556924;
  v8[536862722] = -202178560;
  *(_DWORD *)(v6 + 32) = 0;
  *(_DWORD *)(v6 + 48) = 0;
  std::weak_ptr<Scene>::lock((const std::weak_ptr<Scene> *const)(v6 + 64));
  if ( std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::operator bool((const std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2> *const)(v6 + 64)) )
  {
    v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
    *(_DWORD *)(v6 + 32) = Scene::getOwnerUid(v9);
    v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
    *(_DWORD *)(v6 + 48) = Scene::getSceneId(v10);
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/misc/game_timer.cpp",
      "startS",
      301);
    v11 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v20, (const char (*)[5])"uid:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v6 + 32));
    v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])" scene_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v6 + 48));
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  v14 = common::tools::MiTimer::startS(
          this,
          seconds,
          is_repeated,
          file,
          func,
          line,
          *(_DWORD *)(v6 + 32),
          *(_DWORD *)(v6 + 48));
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v6 + 64));
  result = v14;
  if ( v21 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 307: range 000000001557AD6A-000000001557AF1F
int32_t __cdecl SceneTimer::startMS(
        SceneTimer *const this,
        uint32_t milliseconds,
        bool is_repeated,
        const char *file,
        const char *func,
        int32_t line)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  int32_t started; // r14d
  int32_t result; // eax
  uint32_t uid; // [rsp+38h] [rbp-78h]
  uint32_t scene_id; // [rsp+3Ch] [rbp-74h]
  char v19[112]; // [rsp+40h] [rbp-70h] BYREF

  v6 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 16 13 scene_ptr:310";
  *(_QWORD *)(v6 + 16) = SceneTimer::startMS;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202178560;
  uid = 0;
  scene_id = 0;
  std::weak_ptr<Scene>::lock((const std::weak_ptr<Scene> *const)(v6 + 32));
  if ( std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::operator bool((const std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2> *const)(v6 + 32)) )
  {
    v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
    uid = Scene::getOwnerUid(v9);
    v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
    scene_id = Scene::getSceneId(v10);
  }
  started = common::tools::MiTimer::startMS(this, milliseconds, is_repeated, file, func, line, uid, scene_id);
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v6 + 32));
  result = started;
  if ( v19 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 319: range 000000001557AF20-000000001557AF8B
void __cdecl SceneTimerMgr::SceneTimerMgr(SceneTimerMgr *const this, ScenePtr *p_scene_ptr)
{
  int (**v2)(...); // rdx

  PausableTimerMgr::PausableTimerMgr(this);
  v2 = (int (**)(...))(&`vtable for'SceneTimerMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TimerMgr = v2;
  std::weak_ptr<Scene>::weak_ptr<Scene,void>(&this->scene_wtr_, p_scene_ptr);
};

// Line 325: range 000000001557AF8C-000000001557B12C
uint64_t __cdecl SceneTimerMgr::getPausableTimeMs(SceneTimerMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint64_t SceneDiscreteTimeMs; // r14
  Scene *v5; // rax
  uint64_t result; // rax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-90h] BYREF
  char v8[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 scene_ptr:326";
  *(_QWORD *)(v1 + 16) = SceneTimerMgr::getPausableTimeMs;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  std::weak_ptr<Scene>::lock((const std::weak_ptr<Scene> *const)(v1 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/game_timer.cpp",
      "getPausableTimeMs",
      329);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v7, (const char (*)[20])"ScenePtr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v7);
    SceneDiscreteTimeMs = 0LL;
  }
  else
  {
    v5 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    SceneDiscreteTimeMs = Scene::getSceneDiscreteTimeMs(v5);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  result = SceneDiscreteTimeMs;
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 337: range 000000001557B12E-000000001557B2C7
int32_t __cdecl SceneTimerMgr::start(SceneTimerMgr *const this, const char *file, const char *func, int32_t line)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  int32_t v9; // r14d
  int32_t result; // eax
  uint32_t uid; // [rsp+28h] [rbp-78h]
  uint32_t scene_id; // [rsp+2Ch] [rbp-74h]
  char v15[112]; // [rsp+30h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 13 scene_ptr:340";
  *(_QWORD *)(v4 + 16) = SceneTimerMgr::start;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  uid = 0;
  scene_id = 0;
  std::weak_ptr<Scene>::lock((const std::weak_ptr<Scene> *const)(v4 + 32));
  if ( std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::operator bool((const std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2> *const)(v4 + 32)) )
  {
    v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    uid = Scene::getOwnerUid(v7);
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    scene_id = Scene::getSceneId(v8);
  }
  v9 = PausableTimerMgr::start(this, file, func, line, uid, scene_id);
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 32));
  result = v9;
  if ( v15 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 350: range 000000001557B2C8-000000001557B47A
void __cdecl SceneTimerMgr::setPausableTimeMs(
        SceneTimerMgr *const this,
        uint64_t ms,
        bool is_paused,
        uint64_t last_update_time)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  Scene *v7; // rdi
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-80h] BYREF
  char v11[96]; // [rsp+40h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 13 scene_ptr:351";
  *(_QWORD *)(v4 + 16) = SceneTimerMgr::setPausableTimeMs;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  std::weak_ptr<Scene>::lock((const std::weak_ptr<Scene> *const)(v4 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v4 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/game_timer.cpp",
      "setPausableTimeMs",
      354);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v10, (const char (*)[20])"ScenePtr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  else
  {
    v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    Scene::setSceneDiscreteTimeMs(v7, ms, is_paused, last_update_time);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 32));
  if ( v11 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 362: range 000000001557B47C-000000001557B61C
bool __cdecl SceneTimerMgr::isPaused(SceneTimerMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  bool isPaused; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  bool result; // al
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-90h] BYREF
  char v8[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 scene_ptr:363";
  *(_QWORD *)(v1 + 16) = SceneTimerMgr::isPaused;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  std::weak_ptr<Scene>::lock((const std::weak_ptr<Scene> *const)(v1 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/game_timer.cpp",
      "isPaused",
      366);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v7, (const char (*)[20])"ScenePtr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v7);
    isPaused = 1;
  }
  else
  {
    v5 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    isPaused = Scene::isPaused(v5);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  result = isPaused;
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 374: range 000000001557B61E-000000001557B8E4
void __fastcall SceneTimerMgr::notifyPausableInfo(SceneTimerMgr *const this, bool is_paused, uint64_t pausable_time_ms)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  Scene *v6; // rax
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 20 pausable_time_ms:373 64 16 13 scene_ptr:375";
  *(_QWORD *)(v3 + 16) = SceneTimerMgr::notifyPausableInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202178560;
  *(_QWORD *)(v3 + 32) = pausable_time_ms;
  std::weak_ptr<Scene>::lock((const std::weak_ptr<Scene> *const)(v3 + 64));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/game_timer.cpp",
      "notifyPausableInfo",
      378);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v14, (const char (*)[20])"ScenePtr is nullptr");
  }
  else
  {
    v6 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    Scene::notifySceneTime(v6, is_paused, *(_QWORD *)(v3 + 32));
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/misc/game_timer.cpp",
      "notifyPausableInfo",
      383);
    v7 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v14,
           (const char (*)[41])"SceneTimerMgr notifyPausableInfo, scene:");
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    v9 = common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v7, v8);
    v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])" isPaused:");
    v11 = common::milog::MiLogStream::operator<<(v10, is_paused);
    v12 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])" time_ms:");
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v12, (const unsigned __int64 *)(v3 + 32));
  }
  common::milog::MiLogStream::~MiLogStream(&v14);
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
  if ( v15 == (char *)v3 )
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

// Line 386: range 000000001557B8E6-000000001557BA28
void __cdecl HomeUnixTimer::HomeUnixTimer(
        HomeUnixTimer *const this,
        HomePtr *p_home_ptr,
        common::tools::TimeoutFunc *p_callback)
{
  int (**v3)(...); // rdx
  std::shared_ptr<common::tools::TimerMgr> p_timer_mgr_ptr; // [rsp+20h] [rbp-50h] BYREF
  std::shared_ptr<UnixTimerMgr> __r; // [rsp+30h] [rbp-40h] BYREF
  std::function<void(long unsigned int)> v6; // [rsp+40h] [rbp-30h] BYREF

  std::function<void ()(unsigned long)>::function(&v6, p_callback);
  if ( std::operator==<Home>(p_home_ptr, 0LL) )
  {
    std::shared_ptr<UnixTimerMgr>::shared_ptr(&__r, 0LL);
  }
  else
  {
    std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_home_ptr);
    Home::getUnixTimerMgr((Home *const)&__r);
  }
  std::shared_ptr<common::tools::TimerMgr>::shared_ptr<UnixTimerMgr,void>(&p_timer_mgr_ptr, &__r);
  common::tools::MiTimer::MiTimer(this, &p_timer_mgr_ptr, &v6);
  std::shared_ptr<common::tools::TimerMgr>::~shared_ptr(&p_timer_mgr_ptr);
  std::shared_ptr<UnixTimerMgr>::~shared_ptr(&__r);
  std::function<void ()(unsigned long)>::~function(&v6);
  v3 = (int (**)(...))(&`vtable for'HomeUnixTimer + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MiTimer = v3;
  std::weak_ptr<Home>::weak_ptr<Home,void>(&this->home_wtr_, p_home_ptr);
};

// Line 392: range 000000001557BA2A-000000001557BBCB
int32_t __cdecl HomeUnixTimer::startS(
        HomeUnixTimer *const this,
        uint32_t seconds,
        bool is_repeated,
        const char *file,
        const char *func,
        int32_t line)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  int32_t v10; // r14d
  int32_t result; // eax
  uint32_t uid; // [rsp+38h] [rbp-78h]
  char v17[112]; // [rsp+40h] [rbp-70h] BYREF

  v6 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 16 12 home_ptr:395";
  *(_QWORD *)(v6 + 16) = HomeUnixTimer::startS;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202178560;
  uid = 0;
  std::weak_ptr<Home>::lock((const std::weak_ptr<Home> *const)(v6 + 32));
  if ( std::operator!=<Home>((const std::shared_ptr<Home> *)(v6 + 32), 0LL) )
  {
    v9 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
    uid = Home::getHomeUid(v9);
  }
  v10 = common::tools::MiTimer::startS(this, seconds, is_repeated, file, func, line, uid, 0);
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v6 + 32));
  result = v10;
  if ( v17 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 404: range 000000001557BBCC-000000001557BD6D
int32_t __cdecl HomeUnixTimer::startMS(
        HomeUnixTimer *const this,
        uint32_t milliseconds,
        bool is_repeated,
        const char *file,
        const char *func,
        int32_t line)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  int32_t started; // r14d
  int32_t result; // eax
  uint32_t uid; // [rsp+38h] [rbp-78h]
  char v17[112]; // [rsp+40h] [rbp-70h] BYREF

  v6 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 16 12 home_ptr:407";
  *(_QWORD *)(v6 + 16) = HomeUnixTimer::startMS;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202178560;
  uid = 0;
  std::weak_ptr<Home>::lock((const std::weak_ptr<Home> *const)(v6 + 32));
  if ( std::operator!=<Home>((const std::shared_ptr<Home> *)(v6 + 32), 0LL) )
  {
    v9 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
    uid = Home::getHomeUid(v9);
  }
  started = common::tools::MiTimer::startMS(this, milliseconds, is_repeated, file, func, line, uid, 0);
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v6 + 32));
  result = started;
  if ( v17 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 415: range 000000001557BD6E-000000001557BEB0
void __cdecl HomeTimer::HomeTimer(HomeTimer *const this, HomePtr *p_home_ptr, common::tools::TimeoutFunc *p_callback)
{
  int (**v3)(...); // rdx
  std::shared_ptr<common::tools::TimerMgr> p_timer_mgr_ptr; // [rsp+20h] [rbp-50h] BYREF
  std::shared_ptr<HomeTimerMgr> __r; // [rsp+30h] [rbp-40h] BYREF
  std::function<void(long unsigned int)> v6; // [rsp+40h] [rbp-30h] BYREF

  std::function<void ()(unsigned long)>::function(&v6, p_callback);
  if ( std::operator==<Home>(p_home_ptr, 0LL) )
  {
    std::shared_ptr<HomeTimerMgr>::shared_ptr(&__r, 0LL);
  }
  else
  {
    std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_home_ptr);
    Home::getHomeTimerMgr((Home *const)&__r);
  }
  std::shared_ptr<common::tools::TimerMgr>::shared_ptr<HomeTimerMgr,void>(&p_timer_mgr_ptr, &__r);
  common::tools::MiTimer::MiTimer(this, &p_timer_mgr_ptr, &v6);
  std::shared_ptr<common::tools::TimerMgr>::~shared_ptr(&p_timer_mgr_ptr);
  std::shared_ptr<HomeTimerMgr>::~shared_ptr(&__r);
  std::function<void ()(unsigned long)>::~function(&v6);
  v3 = (int (**)(...))(&`vtable for'HomeTimer + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MiTimer = v3;
  std::weak_ptr<Home>::weak_ptr<Home,void>(&this->home_wtr_, p_home_ptr);
};

// Line 422: range 000000001557BEB2-000000001557C053
int32_t __cdecl HomeTimer::startS(
        HomeTimer *const this,
        uint32_t seconds,
        bool is_repeated,
        const char *file,
        const char *func,
        int32_t line)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  int32_t v10; // r14d
  int32_t result; // eax
  uint32_t uid; // [rsp+38h] [rbp-78h]
  char v17[112]; // [rsp+40h] [rbp-70h] BYREF

  v6 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 16 12 home_ptr:425";
  *(_QWORD *)(v6 + 16) = HomeTimer::startS;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202178560;
  uid = 0;
  std::weak_ptr<Home>::lock((const std::weak_ptr<Home> *const)(v6 + 32));
  if ( std::operator!=<Home>((const std::shared_ptr<Home> *)(v6 + 32), 0LL) )
  {
    v9 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
    uid = Home::getHomeUid(v9);
  }
  v10 = common::tools::MiTimer::startS(this, seconds, is_repeated, file, func, line, uid, 0);
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v6 + 32));
  result = v10;
  if ( v17 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 434: range 000000001557C054-000000001557C1F5
int32_t __cdecl HomeTimer::startMS(
        HomeTimer *const this,
        uint32_t milliseconds,
        bool is_repeated,
        const char *file,
        const char *func,
        int32_t line)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  int32_t started; // r14d
  int32_t result; // eax
  uint32_t uid; // [rsp+38h] [rbp-78h]
  char v17[112]; // [rsp+40h] [rbp-70h] BYREF

  v6 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 16 12 home_ptr:437";
  *(_QWORD *)(v6 + 16) = HomeTimer::startMS;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202178560;
  uid = 0;
  std::weak_ptr<Home>::lock((const std::weak_ptr<Home> *const)(v6 + 32));
  if ( std::operator!=<Home>((const std::shared_ptr<Home> *)(v6 + 32), 0LL) )
  {
    v9 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
    uid = Home::getHomeUid(v9);
  }
  started = common::tools::MiTimer::startMS(this, milliseconds, is_repeated, file, func, line, uid, 0);
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v6 + 32));
  result = started;
  if ( v17 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 446: range 000000001557C1F6-000000001557C261
void __cdecl HomeTimerMgr::HomeTimerMgr(HomeTimerMgr *const this, HomePtr *p_home_ptr)
{
  int (**v2)(...); // rdx

  PausableTimerMgr::PausableTimerMgr(this);
  v2 = (int (**)(...))(&`vtable for'HomeTimerMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_TimerMgr = v2;
  std::weak_ptr<Home>::weak_ptr<Home,void>(&this->home_wtr_, p_home_ptr);
};

// Line 451: range 000000001557C262-000000001557C40A
uint64_t __cdecl HomeTimerMgr::getPausableTimeMs(HomeTimerMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint64_t HomeTimeMs; // r14
  Home *v5; // rax
  HomeBasicComp *BasicComp; // rax
  uint64_t result; // rax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-90h] BYREF
  char v9[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 12 home_ptr:452";
  *(_QWORD *)(v1 + 16) = HomeTimerMgr::getPausableTimeMs;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  std::weak_ptr<Home>::lock((const std::weak_ptr<Home> *const)(v1 + 32));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/game_timer.cpp",
      "getPausableTimeMs",
      455);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v8, (const char (*)[19])"HomePtr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v8);
    HomeTimeMs = 0LL;
  }
  else
  {
    v5 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    BasicComp = Home::getBasicComp(v5);
    HomeTimeMs = HomeBasicComp::getHomeTimeMs(BasicComp);
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v1 + 32));
  result = HomeTimeMs;
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 463: range 000000001557C40C-000000001557C591
int32_t __cdecl HomeTimerMgr::start(HomeTimerMgr *const this, const char *file, const char *func, int32_t line)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  int32_t v8; // r14d
  int32_t result; // eax
  uint32_t uid; // [rsp+28h] [rbp-78h]
  char v13[112]; // [rsp+30h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 12 home_ptr:466";
  *(_QWORD *)(v4 + 16) = HomeTimerMgr::start;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  uid = 0;
  std::weak_ptr<Home>::lock((const std::weak_ptr<Home> *const)(v4 + 32));
  if ( std::operator!=<Home>(0LL, (const std::shared_ptr<Home> *)(v4 + 32)) )
  {
    v7 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    uid = Home::getHomeUid(v7);
  }
  v8 = PausableTimerMgr::start(this, file, func, line, uid, 0);
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v4 + 32));
  result = v8;
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 475: range 000000001557C592-000000001557C741
void __cdecl HomeTimerMgr::setPausableTimeMs(
        HomeTimerMgr *const this,
        uint64_t ms,
        bool is_paused,
        uint64_t last_update_time)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  Home *v7; // rax
  HomeBasicComp *BasicComp; // rdx
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-80h] BYREF
  char v10[96]; // [rsp+40h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 12 home_ptr:476";
  *(_QWORD *)(v4 + 16) = HomeTimerMgr::setPausableTimeMs;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  std::weak_ptr<Home>::lock((const std::weak_ptr<Home> *const)(v4 + 32));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v4 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/game_timer.cpp",
      "setPausableTimeMs",
      479);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v9, (const char (*)[19])"HomePtr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else
  {
    v7 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    BasicComp = Home::getBasicComp(v7);
    HomeBasicComp::setHomeTimeMs(BasicComp, ms);
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v4 + 32));
  if ( v10 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 486: range 000000001557C742-000000001557C8EA
bool __cdecl HomeTimerMgr::isPaused(HomeTimerMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  bool isPaused; // r14
  Home *v5; // rax
  HomeBasicComp *BasicComp; // rax
  bool result; // al
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-90h] BYREF
  char v9[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 12 home_ptr:487";
  *(_QWORD *)(v1 + 16) = HomeTimerMgr::isPaused;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  std::weak_ptr<Home>::lock((const std::weak_ptr<Home> *const)(v1 + 32));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/game_timer.cpp",
      "isPaused",
      490);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v8, (const char (*)[19])"HomePtr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v8);
    isPaused = 1;
  }
  else
  {
    v5 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    BasicComp = Home::getBasicComp(v5);
    isPaused = HomeBasicComp::isPaused(BasicComp);
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v1 + 32));
  result = isPaused;
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 498: range 000000001557C8EC-000000001557CBBA
void __fastcall HomeTimerMgr::notifyPausableInfo(HomeTimerMgr *const this, bool is_paused, uint64_t pausable_time_ms)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  Home *v6; // rax
  HomeBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 20 pausable_time_ms:497 64 16 12 home_ptr:499";
  *(_QWORD *)(v3 + 16) = HomeTimerMgr::notifyPausableInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202178560;
  *(_QWORD *)(v3 + 32) = pausable_time_ms;
  std::weak_ptr<Home>::lock((const std::weak_ptr<Home> *const)(v3 + 64));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/game_timer.cpp",
      "notifyPausableInfo",
      502);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v15, (const char (*)[19])"HomePtr is nullptr");
  }
  else
  {
    v6 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    BasicComp = Home::getBasicComp(v6);
    HomeBasicComp::notifyHomeTime(BasicComp, is_paused, *(_QWORD *)(v3 + 32));
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/misc/game_timer.cpp",
      "notifyPausableInfo",
      507);
    v8 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v15,
           (const char (*)[39])"HomeTimerMgr notifyPausableInfo, home:");
    v9 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    v10 = common::milog::MiLogStream::operator<<<Home,(Home*)0>(v8, v9);
    v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])" isPaused:");
    v12 = common::milog::MiLogStream::operator<<(v11, is_paused);
    v13 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v12, (const char (*)[10])" time_ms:");
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v13, (const unsigned __int64 *)(v3 + 32));
  }
  common::milog::MiLogStream::~MiLogStream(&v15);
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v3 + 64));
  if ( v16 == (char *)v3 )
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
