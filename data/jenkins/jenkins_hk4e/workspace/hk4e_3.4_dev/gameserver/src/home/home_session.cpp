// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_session.cpp

// Line 24: range 00000000145B3E60-00000000145B4072
// local variable allocation has failed, the output may be wrong!
void __cdecl HomeSession::HomeSession(HomeSession *const this, uint32_t home_uid)
{
  unsigned __int64 v2; // rdx
  uint32_t v3; // ecx
  HomeSession *thisa; // [rsp+8h] [rbp-18h]

  thisa = this;
  std::enable_shared_from_this<HomeSession>::enable_shared_from_this(this);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->home_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    this = (HomeSession *const)((char *)this + 16);
    __asan_report_store4(&thisa->home_uid_);
  }
  thisa->home_uid_ = home_uid;
  v2 = ZTWN11ThreadLocal17work_thread_indexE(this, *(_QWORD *)&home_uid);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    __asan_report_load4();
  v3 = *(_DWORD *)v2;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->thread_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->thread_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&thisa->thread_index_);
  }
  thisa->thread_index_ = v3;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->last_load_rand_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&thisa->last_load_rand_);
  thisa->last_load_rand_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->load_rand_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&thisa->load_rand_);
  thisa->load_rand_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&thisa->state_);
  }
  thisa->state_ = HOME_SESSION_STATE_INIT;
  std::weak_ptr<Home>::weak_ptr(&thisa->home_wtr_);
  std::shared_ptr<UnixTimer>::shared_ptr(&thisa->timer_ptr_);
  std::map<unsigned int,HomeTryEnterPlayerInfo>::map(&thisa->try_enter_player_map_);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->init_module_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->init_module_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&thisa->init_module_id_);
  }
  thisa->init_module_id_ = 0;
};

// Line 30: range 00000000145B41BA-00000000145B46F7
int32_t __cdecl HomeSession::addTimer(HomeSession *const this)
{
  int32_t v1; // r14d
  std::weak_ptr<HomeSession> *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r15d
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r13
  unsigned __int64 v8; // rax
  unsigned int (__fastcall *v9)(std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD, _QWORD, const char *, const char *, __int64, __int64, _QWORD); // r14
  __int64 home_uid; // r15
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rdx
  bool v12; // r13
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int32_t result; // eax
  std::weak_ptr<HomeSession> v17; // [rsp+10h] [rbp-B0h] BYREF
  std::enable_shared_from_this<HomeSession> v18; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-90h] BYREF
  char v20[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (std::weak_ptr<HomeSession> *)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (std::weak_ptr<HomeSession> *)v3;
  }
  v2->_M_ptr = (std::__weak_ptr<HomeSession,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v2->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 14 session_wtr:33";
  v2[1]._M_ptr = (std::__weak_ptr<HomeSession,(__gnu_cxx::_Lock_policy)2>::element_type *)HomeSession::addTimer;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( std::operator==<UnixTimer>(&this->timer_ptr_, 0LL) )
  {
    std::enable_shared_from_this<HomeSession>::shared_from_this(&v18);
    std::weak_ptr<HomeSession>::weak_ptr<HomeSession,void>(v2 + 2, (const std::shared_ptr<HomeSession> *)&v18);
    std::shared_ptr<HomeSession>::~shared_ptr((std::shared_ptr<HomeSession> *const)&v18);
    std::weak_ptr<HomeSession>::weak_ptr(&v17, v2 + 2);
    common::tools::perf::make_shared<UnixTimer,HomeSession::addTimer(void)::{lambda(unsigned long)#1}>(
      (HomeSession::addTimer::<lambda(uint64_t)> *)&v18,
      (HomeSession::addTimer::<lambda(uint64_t)> *)&v17);
    std::shared_ptr<UnixTimer>::operator=(&this->timer_ptr_, (std::shared_ptr<UnixTimer> *)&v18);
    std::shared_ptr<UnixTimer>::~shared_ptr((std::shared_ptr<UnixTimer> *const)&v18);
    HomeSession::addTimer(void)::{lambda(unsigned long)#1}::~addTimer((HomeSession::addTimer::<lambda(uint64_t)> *const)&v17);
    if ( std::operator==<UnixTimer>(&this->timer_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_session.cpp",
        "addTimer",
        45);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        &v19,
        (const char (*)[29])"make_shared UnixTimer failed");
      common::milog::MiLogStream::~MiLogStream(&v19);
      v1 = -1;
      v5 = 0;
    }
    else
    {
      v5 = 1;
    }
    std::weak_ptr<HomeSession>::~weak_ptr(v2 + 2);
    if ( v5 != 1 )
      goto LABEL_22;
  }
  else
  {
    v6 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->timer_ptr_);
    common::tools::MiTimer::cancel(v6);
  }
  v7 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->timer_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = (unsigned __int64)(v7->_vptr_MiTimer + 2);
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8();
  v9 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD, _QWORD, const char *, const char *, __int64, __int64, _QWORD))v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  home_uid = this->home_uid_;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v18);
  v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18);
  if ( *(_BYTE *)(((unsigned __int64)&v11->session_timeout >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->session_timeout >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v12 = v9(v7, v11->session_timeout, 0LL, "./src/home/home_session.cpp", "addTimer", 54LL, home_uid, 0LL) != 0;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v18);
  if ( v12 )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_session.cpp",
      "addTimer",
      56);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      &v19,
      (const char (*)[31])"HomeSession timer start failed");
    common::milog::MiLogStream::~MiLogStream(&v19);
    v1 = -1;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/home/home_session.cpp",
      "addTimer",
      60);
    v13 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
            &v19,
            (const char (*)[36])"[HOME][SESSION] addTimer home_uid: ");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->home_uid_);
    v15 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v14, (const char (*)[15])" thread index:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->thread_index_);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v1 = 0;
  }
LABEL_22:
  result = v1;
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v2->_M_ptr = (std::__weak_ptr<HomeSession,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 34: range 00000000145F49B0-00000000145F49D5
void __cdecl HomeSession::addTimer(void)::{lambda(unsigned long)#1}::addTimer(
        HomeSession::addTimer::<lambda(uint64_t)> *const this,
        HomeSession::addTimer::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<HomeSession>::weak_ptr(&this->__session_wtr, &a2->__session_wtr);
};

// Line 34: range 00000000145F670C-00000000145F6731
void __cdecl HomeSession::addTimer(void)::{lambda(unsigned long)#1}::addTimer(
        HomeSession::addTimer::<lambda(uint64_t)> *const this,
        const HomeSession::addTimer::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<HomeSession>::weak_ptr(&this->__session_wtr, &a2->__session_wtr);
};

// Line 34: range 00000000145B4074-00000000145B419C
void __cdecl HomeSession::addTimer(void)::{lambda(unsigned long)#1}::operator()(
        const HomeSession::addTimer::<lambda(uint64_t)> *const __closure,
        uint64_t now_ms)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  HomeSession *v5; // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 session_ptr:36";
  *(_QWORD *)(v2 + 16) = HomeSession::addTimer(void)::{lambda(unsigned long)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<HomeSession>::lock((const std::weak_ptr<HomeSession> *const)(v2 + 32));
  if ( std::operator!=<HomeSession>((const std::shared_ptr<HomeSession> *)(v2 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    HomeSession::onTimer(v5, now_ms);
  }
  std::shared_ptr<HomeSession>::~shared_ptr((std::shared_ptr<HomeSession> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 34: range 00000000145B419E-00000000145B41B8
void __cdecl HomeSession::addTimer(void)::{lambda(unsigned long)#1}::~addTimer(
        HomeSession::addTimer::<lambda(uint64_t)> *const this)
{
  std::weak_ptr<HomeSession>::~weak_ptr(&this->__session_wtr);
};

// Line 65: range 00000000145B46F8-00000000145B4909
void __cdecl HomeSession::destroy(HomeSession *const this)
{
  common::milog::MiLogStream *v1; // rax
  common::milog::MiLogStream *v2; // rax
  uint64_t load_rand; // rdx
  GameserverService *v4; // rcx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    5u,
    "./src/home/home_session.cpp",
    "destroy",
    66);
  v1 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
         &v5,
         (const char (*)[47])"[HOME][SESSION] HomeSession destroy, home_uid:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->home_uid_);
  common::milog::MiLogStream::~MiLogStream(&v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->state_ == HOME_SESSION_STATE_LOADING )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_session.cpp",
      "destroy",
      70);
    v2 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
           &v5,
           (const char (*)[58])"[HOME][SESSION] state_ is LOADING clean status. home_uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->home_uid_);
    common::milog::MiLogStream::~MiLogStream(&v5);
    if ( *(_BYTE *)(((unsigned __int64)&this->load_rand_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    load_rand = this->load_rand_;
    if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    HomeMgr::cleanHomeStatus(this->home_uid_, load_rand);
  }
  v4 = ServiceBox::findService<GameserverService>();
  if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  GameserverService::removeHomeSession(v4, this->home_uid_);
};

// Line 78: range 00000000145B490A-00000000145B4A64
void __cdecl HomeSession::onTimer(HomeSession *const this, uint64_t now_ms)
{
  bool v2; // bl
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  std::shared_ptr<Home> __a; // [rsp+10h] [rbp-40h] BYREF
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  HomeSession::getHome((HomeSession *const)&__a);
  v2 = std::operator==<Home>(&__a, 0LL);
  std::shared_ptr<Home>::~shared_ptr(&__a);
  if ( v2 )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_session.cpp",
      "onTimer",
      81);
    v3 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
           &v6,
           (const char (*)[67])"[HOME][SESSION] HomeSession is timeout, auto erase self, home_uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->home_uid_);
    common::milog::MiLogStream::~MiLogStream(&v6);
    HomeSession::destroy(this);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_session.cpp",
      "onTimer",
      86);
    v4 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
           &v6,
           (const char (*)[73])"[HOME][SESSION] HomeSession is timeout, but getHome() not null home_uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->home_uid_);
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
};

// Line 91: range 00000000145B4A66-00000000145B4C0C
void __cdecl HomeSession::bindHome(HomeSession *const this, HomePtr *p_home_ptr)
{
  common::milog::MiLogStream *v2; // rax
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Home>(p_home_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_session.cpp",
      "bindHome",
      94);
    v2 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v7,
           (const char (*)[44])"[HOME][SESSION] home_ptr is null home_uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->home_uid_);
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
  else
  {
    std::weak_ptr<Home>::operator=<Home>(&this->home_wtr_, p_home_ptr);
    if ( std::__shared_ptr<UnixTimer,(__gnu_cxx::_Lock_policy)2>::operator bool(&this->timer_ptr_) )
    {
      v3 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->timer_ptr_);
      common::tools::MiTimer::cancel(v3);
    }
    HomeSession::setHomeSessionState(this, HOME_SESSION_STATE_BINDED);
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      5u,
      "./src/home/home_session.cpp",
      "bindHome",
      105);
    v4 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v7,
           (const char (*)[36])"[HOME][SESSION] bindHome home_uid: ");
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->home_uid_);
    v6 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v5, (const char (*)[18])off_25412480);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->thread_index_);
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
};

// Line 109: range 00000000145B4C0E-00000000145B4CE6
void __cdecl HomeSession::unbindHome(HomeSession *const this)
{
  common::milog::MiLogStream *v1; // rax
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  std::__weak_ptr<Home,(__gnu_cxx::_Lock_policy)2>::reset(&this->home_wtr_);
  HomeSession::setHomeSessionState(this, HOME_SESSION_STATE_UNBINDED);
  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    5u,
    "./src/home/home_session.cpp",
    "unbindHome",
    112);
  v1 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
         &v4,
         (const char (*)[38])"[HOME][SESSION] unbindHome home_uid: ");
  v2 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->home_uid_);
  v3 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v2, (const char (*)[15])" thread index:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->thread_index_);
  common::milog::MiLogStream::~MiLogStream(&v4);
};

// Line 116: range 00000000145B4CE8-00000000145B4EBF
void __fastcall HomeSession::setHomeSessionState(HomeSession *const this, HomeSessionState state)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  HomeSessionState v10; // ecx
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-80h] BYREF
  char v12[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 state:115";
  *(_QWORD *)(v2 + 16) = HomeSession::setHomeSessionState;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = state;
  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/home/home_session.cpp",
    "setHomeSessionState",
    117);
  v5 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
         &v11,
         (const char (*)[26])"[HOME][SESSION] home_uid:");
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->home_uid_);
  v7 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v6, (const char (*)[17])" set state from ");
  v8 = common::milog::MiLogStream::operator<<<HomeSessionState,(HomeSessionState*)0>(v7, &this->state_);
  v9 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v8, (const char (*)[5])off_25407FC0);
  common::milog::MiLogStream::operator<<<HomeSessionState,(HomeSessionState*)0>(v9, (const HomeSessionState *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v11);
  v10 = *(_DWORD *)(v2 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->state_);
  }
  this->state_ = v10;
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

// Line 122: range 00000000145B4EC0-00000000145B5665
int32_t __cdecl HomeSession::loadHomeDataFromSaveWait(HomeSession *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  GameserverService *v8; // rax
  std::unordered_map<unsigned int,std::shared_ptr<HomeSaveWaitData>> *p_home_mgr; // rcx
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  proto::HomeData *v12; // r14
  std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::minet::Packet *v15; // rcx
  common::minet::Packet *v16; // rcx
  GameserverService *v17; // r14
  common::minet::PacketPtr v18; // rdi
  common::milog::MiLogStream *v19; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-124h]
  std::shared_ptr<common::minet::Packet> p_packet_ptr; // [rsp+20h] [rbp-120h] BYREF
  common::milog::MiLogStream v24; // [rsp+30h] [rbp-110h] BYREF
  char v25[240]; // [rsp+50h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 16 12 save_ptr:129 64 16 18 rsp_packet_ptr:145 96 56 7 rsp:137";
  *(_QWORD *)(v1 + 16) = HomeSession::loadHomeDataFromSaveWait;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862724] = -218103808;
  v3[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->state_ == HOME_SESSION_STATE_UNBINDED )
  {
    v8 = ServiceBox::findService<GameserverService>();
    p_home_mgr = (std::unordered_map<unsigned int,std::shared_ptr<HomeSaveWaitData>> *)&GameserverService::getGameThreadLocal(v8)->home_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    HomeMgr::findSaveWaitHome((HomeMgr *const)(v1 + 32), p_home_mgr, this->home_uid_);
    if ( std::operator==<HomeSaveWaitData>((const std::shared_ptr<HomeSaveWaitData> *)(v1 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_session.cpp",
        "loadHomeDataFromSaveWait",
        132);
      v10 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v24,
              (const char (*)[31])"save_ptr is nullptr, home_uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->home_uid_);
      common::milog::MiLogStream::~MiLogStream(&v24);
      v7 = -1;
    }
    else
    {
      proto::GetHomeDataRsp::GetHomeDataRsp((proto::GetHomeDataRsp *const)(v1 + 96));
      proto::GetHomeDataRsp::set_retcode((proto::GetHomeDataRsp *const)(v1 + 96), 0);
      proto::GetHomeDataRsp::set_is_new_home((proto::GetHomeDataRsp *const)(v1 + 96), 0);
      if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::GetHomeDataRsp::set_home_uid((proto::GetHomeDataRsp *const)(v1 + 96), this->home_uid_);
      v11 = std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v11->data_version >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v11->data_version >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::GetHomeDataRsp::set_data_version((proto::GetHomeDataRsp *const)(v1 + 96), v11->data_version);
      v12 = proto::GetHomeDataRsp::mutable_home_data((proto::GetHomeDataRsp *const)(v1 + 96));
      v13 = std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      proto::HomeData::CopyFrom(v12, &v13->bin_data);
      if ( *(_BYTE *)(((unsigned __int64)&this->load_rand_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      proto::GetHomeDataRsp::set_load_rand((proto::GetHomeDataRsp *const)(v1 + 96), this->load_rand_);
      common::minet::PacketUtils::createPacket<proto::GetHomeDataRsp>((const proto::GetHomeDataRsp *)(v1 + 64));
      if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v1 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/home/home_session.cpp",
          "loadHomeDataFromSaveWait",
          148);
        v14 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v24,
                (const char (*)[31])"createPacket failed, home_uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->home_uid_);
        common::milog::MiLogStream::~MiLogStream(&v24);
        v7 = -1;
      }
      else
      {
        v15 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        common::minet::Packet::setUserId(v15, this->home_uid_);
        v16 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        common::minet::Packet::setHomeUserId(v16, this->home_uid_);
        v17 = ServiceBox::findService<GameserverService>();
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          &p_packet_ptr,
          (const std::shared_ptr<common::minet::Packet> *)(v1 + 64));
        GameserverService::setPacketGameThreadIndex(v17, &p_packet_ptr);
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_packet_ptr);
        v18._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(v1 + 64);
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          &p_packet_ptr,
          (const std::shared_ptr<common::minet::Packet> *)(v1 + 64));
        v18._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&p_packet_ptr;
        ret = ServiceBox::pushPacketToService(v18);
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_packet_ptr);
        if ( ret )
        {
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/home/home_session.cpp",
            "loadHomeDataFromSaveWait",
            157);
          v19 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                  &v24,
                  (const char (*)[54])"[HOME][SESSION] pushPacketToService failed. home_uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &this->home_uid_);
          common::milog::MiLogStream::~MiLogStream(&v24);
          v7 = ret;
        }
        else
        {
          HomeSession::setHomeSessionState(this, HOME_SESSION_STATE_LOADING);
          v7 = 0;
        }
      }
      std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v1 + 64));
      proto::GetHomeDataRsp::~GetHomeDataRsp((proto::GetHomeDataRsp *const)(v1 + 96));
    }
    std::shared_ptr<HomeSaveWaitData>::~shared_ptr((std::shared_ptr<HomeSaveWaitData> *const)(v1 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_session.cpp",
      "loadHomeDataFromSaveWait",
      125);
    v4 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v24,
           (const char (*)[26])"[HOME][SESSION] home_uid:");
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->home_uid_);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v5, (const char (*)[16])" invalid_state:");
    common::milog::MiLogStream::operator<<<HomeSessionState,(HomeSessionState*)0>(v6, &this->state_);
    common::milog::MiLogStream::~MiLogStream(&v24);
    v7 = -1;
  }
  result = v7;
  if ( v25 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
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

// Line 165: range 00000000145B5666-00000000145B5728
int32_t __cdecl HomeSession::loadHomeDataFromDb(HomeSession *const this)
{
  common::milog::MiLogStream *v1; // rax
  int32_t ret; // [rsp+1Ch] [rbp-34h]
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  ret = HomeSession::sendGetHomeDataReq(this);
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_session.cpp",
      "loadHomeDataFromDb",
      169);
    v1 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
           &v4,
           (const char (*)[53])"[HOME][SESSION] sendGetHomeDataReq failed. home_uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->home_uid_);
    common::milog::MiLogStream::~MiLogStream(&v4);
    return ret;
  }
  else
  {
    HomeSession::setHomeSessionState(this, HOME_SESSION_STATE_LOADING);
    return 0;
  }
};

// Line 177: range 00000000145B572A-00000000145B5BFE
int32_t __cdecl HomeSession::sendGetHomeDataReq(HomeSession *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rax
  int32_t v5; // r14d
  common::minet::Packet *v6; // rcx
  common::minet::Packet *v7; // rcx
  GameserverService *v8; // r14
  unsigned __int64 v9; // rdx
  GameserverService *v10; // r14
  NetworkMgrBase *v11; // r14
  uint32_t v12; // r8d
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+10h] [rbp-E0h] BYREF
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-D0h] BYREF
  char v16[176]; // [rsp+40h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 14 packet_ptr:181 64 32 7 req:178";
  *(_QWORD *)(v1 + 16) = HomeSession::sendGetHomeDataReq;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862723] = -202116109;
  proto::GetHomeDataReq::GetHomeDataReq((proto::GetHomeDataReq *const)(v1 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::GetHomeDataReq::set_home_uid((proto::GetHomeDataReq *const)(v1 + 64), this->home_uid_);
  if ( *(_BYTE *)(((unsigned __int64)&this->load_rand_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  proto::GetHomeDataReq::set_load_rand((proto::GetHomeDataReq *const)(v1 + 64), this->load_rand_);
  common::minet::PacketUtils::createPacket<proto::GetHomeDataReq>((const proto::GetHomeDataReq *)(v1 + 32));
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_session.cpp",
      "sendGetHomeDataReq",
      184);
    v4 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v15,
           (const char (*)[31])"createPacket failed, home_uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->home_uid_);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    common::minet::Packet::setUserId(v6, this->home_uid_);
    v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    common::minet::Packet::setHomeUserId(v7, this->home_uid_);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v1 + 32));
    ServiceBase::setPacketSource(v8, (common::minet::PacketPtr)__PAIR128__(v9, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v10 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v1 + 32));
    GameserverService::setPacketGameThreadIndex(v10, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v11 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v1 + 32));
    LOBYTE(v11) = NetworkMgrBase::sendPacketToTargetService(
                    v11,
                    (common::minet::PacketPtr)__PAIR128__(5LL, &packet_ptr),
                    0,
                    v12) != 0;
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( (_BYTE)v11 )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_session.cpp",
        "sendGetHomeDataReq",
        193);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        &v15,
        (const char (*)[33])"sendPacketToTargetService failed");
      common::milog::MiLogStream::~MiLogStream(&v15);
      v5 = -1;
    }
    else
    {
      v5 = 0;
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v1 + 32));
  proto::GetHomeDataReq::~GetHomeDataReq((proto::GetHomeDataReq *const)(v1 + 64));
  result = v5;
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 201: range 00000000145B5C00-00000000145B5EA0
__int64 __fastcall HomeSession::addTryEnterPlayer(
        HomeSession *const this,
        uint32_t uid,
        uint32_t gameserver_app_id,
        uint32_t try_times)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  uint32_t v7; // edx
  __int64 result; // rax
  HomeTryEnterPlayerInfo *v9; // rax
  unsigned int *v10; // rcx
  HomeTryEnterPlayerInfo *v11; // r8
  uint32_t max_count; // [rsp+2Ch] [rbp-94h]
  char v15[144]; // [rsp+30h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 7 uid:200 64 16 15 player_info:202";
  *(_QWORD *)(v4 + 16) = HomeSession::addTryEnterPlayer;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  *(_DWORD *)(v4 + 48) = uid;
  *(_DWORD *)(v4 + 64) = 0;
  *(_DWORD *)(v4 + 68) = 0;
  *(_DWORD *)(v4 + 72) = 0;
  *(_DWORD *)(v4 + 76) = 0;
  *(_DWORD *)(v4 + 64) = *(_DWORD *)(v4 + 48);
  *(_DWORD *)(v4 + 68) = gameserver_app_id;
  *(_DWORD *)(v4 + 72) = common::tools::TimeUtils::getNow();
  *(_DWORD *)(v4 + 76) = try_times;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->home_uid_ == *(_DWORD *)(v4 + 48) )
    goto LABEL_13;
  max_count = 3;
  if ( std::map<unsigned int,HomeTryEnterPlayerInfo>::count(&this->try_enter_player_map_, &this->home_uid_) )
    max_count = 4;
  if ( std::map<unsigned int,HomeTryEnterPlayerInfo>::size(&this->try_enter_player_map_) < max_count )
  {
LABEL_13:
    v9 = std::move<HomeTryEnterPlayerInfo &>((HomeTryEnterPlayerInfo *)(v4 + 64));
    std::map<unsigned int,HomeTryEnterPlayerInfo>::emplace<unsigned int &,HomeTryEnterPlayerInfo>(
      &this->try_enter_player_map_,
      (unsigned int *)(v4 + 48),
      v9,
      v10,
      v11);
    result = 0LL;
  }
  else
  {
    v7 = *(_DWORD *)(v4 + 48);
    if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    HomeHandler::sendServerTryEnterHomeRsp(9705, this->home_uid_, v7, gameserver_app_id);
    result = 0LL;
  }
  if ( v15 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 229: range 00000000145B5EA2-00000000145B6393
void __cdecl HomeSession::processTryEnterPlayerMap(HomeSession *const this, int32_t retcode)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t gameserver_app_id; // ecx
  uint32_t v6; // edx
  Home *p_load_rand; // rdi
  uint64_t load_rand; // rcx
  uint32_t v9; // esi
  std::map<unsigned int,HomeTryEnterPlayerInfo>::iterator __for_begin; // [rsp+10h] [rbp-E0h] BYREF
  std::map<unsigned int,HomeTryEnterPlayerInfo>::iterator __for_end; // [rsp+18h] [rbp-D8h] BYREF
  std::map<unsigned int,HomeTryEnterPlayerInfo> *__for_range_0; // [rsp+20h] [rbp-D0h]
  std::pair<unsigned int const,HomeTryEnterPlayerInfo> *v14; // [rsp+28h] [rbp-C8h]
  std::tuple_element<0,std::pair<unsigned int const,HomeTryEnterPlayerInfo> >::type *uid_0; // [rsp+30h] [rbp-C0h]
  std::tuple_element<1,std::pair<unsigned int const,HomeTryEnterPlayerInfo> >::type *player_info_0; // [rsp+38h] [rbp-B8h]
  std::map<unsigned int,HomeTryEnterPlayerInfo> *__for_range; // [rsp+40h] [rbp-B0h]
  std::pair<unsigned int const,HomeTryEnterPlayerInfo> *__in; // [rsp+48h] [rbp-A8h]
  std::tuple_element<0,std::pair<unsigned int const,HomeTryEnterPlayerInfo> >::type *uid; // [rsp+50h] [rbp-A0h]
  std::tuple_element<1,std::pair<unsigned int const,HomeTryEnterPlayerInfo> >::type *player_info; // [rsp+58h] [rbp-98h]
  common::milog::MiLogStream v21; // [rsp+60h] [rbp-90h] BYREF
  char v22[112]; // [rsp+80h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 home_ptr:240";
  *(_QWORD *)(v2 + 16) = HomeSession::processTryEnterPlayerMap;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( retcode )
  {
    __for_range = &this->try_enter_player_map_;
    __for_begin._M_node = std::map<unsigned int,HomeTryEnterPlayerInfo>::begin(&this->try_enter_player_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,HomeTryEnterPlayerInfo>::end(&this->try_enter_player_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeTryEnterPlayerInfo>>::operator*(&__for_begin);
      uid = std::get<0ul,unsigned int const,HomeTryEnterPlayerInfo>(__in);
      player_info = std::get<1ul,unsigned int const,HomeTryEnterPlayerInfo>(__in);
      if ( *(_BYTE *)(((unsigned __int64)&player_info->gameserver_app_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)player_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&player_info->gameserver_app_id >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      gameserver_app_id = player_info->gameserver_app_id;
      if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v6 = *uid;
      if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      HomeHandler::sendServerTryEnterHomeRsp(retcode, this->home_uid_, v6, gameserver_app_id);
      std::_Rb_tree_iterator<std::pair<unsigned int const,HomeTryEnterPlayerInfo>>::operator++(&__for_begin);
    }
    std::map<unsigned int,HomeTryEnterPlayerInfo>::clear(&this->try_enter_player_map_);
  }
  else
  {
    HomeSession::getHome((HomeSession *const)(v2 + 32));
    if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v2 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_session.cpp",
        "processTryEnterPlayerMap",
        243);
      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v21, (const char (*)[17])"home_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
    else
    {
      __for_range_0 = &this->try_enter_player_map_;
      __for_begin._M_node = std::map<unsigned int,HomeTryEnterPlayerInfo>::begin(&this->try_enter_player_map_)._M_node;
      __for_end._M_node = std::map<unsigned int,HomeTryEnterPlayerInfo>::end(&this->try_enter_player_map_)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeTryEnterPlayerInfo>>::operator*(&__for_begin);
        uid_0 = std::get<0ul,unsigned int const,HomeTryEnterPlayerInfo>(v14);
        player_info_0 = std::get<1ul,unsigned int const,HomeTryEnterPlayerInfo>(v14);
        p_load_rand = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&this->load_rand_ >> 3) + 0x7FFF8000) )
        {
          p_load_rand = (Home *)&this->load_rand_;
          __asan_report_load8();
        }
        load_rand = this->load_rand_;
        if ( *(_BYTE *)(((unsigned __int64)&player_info_0->gameserver_app_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)player_info_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&player_info_0->gameserver_app_id >> 3)
                                                                      + 0x7FFF8000) )
        {
          p_load_rand = (Home *)&player_info_0->gameserver_app_id;
          __asan_report_load4();
        }
        v9 = player_info_0->gameserver_app_id;
        if ( *(_BYTE *)(((unsigned __int64)uid_0 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)uid_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid_0 >> 3) + 0x7FFF8000) )
        {
          p_load_rand = (Home *)uid_0;
          __asan_report_load4();
        }
        Home::processTryEnterPlayer(p_load_rand, *uid_0, v9, load_rand);
        std::_Rb_tree_iterator<std::pair<unsigned int const,HomeTryEnterPlayerInfo>>::operator++(&__for_begin);
      }
      std::map<unsigned int,HomeTryEnterPlayerInfo>::clear(&this->try_enter_player_map_);
    }
    std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v2 + 32));
  }
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 255: range 00000000145B6394-00000000145B6646
void __cdecl HomeSession::onModifyHomeStatusModifyed(
        HomeSession *const this,
        uint32_t target_app_id,
        uint64_t new_load_rand)
{
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  uint32_t v6; // edi
  uint32_t init_module_id; // r8d
  uint32_t home_uid; // esi
  std::map<unsigned int,HomeTryEnterPlayerInfo>::iterator __for_begin; // [rsp+20h] [rbp-60h] BYREF
  std::map<unsigned int,HomeTryEnterPlayerInfo>::iterator __for_end; // [rsp+28h] [rbp-58h] BYREF
  std::map<unsigned int,HomeTryEnterPlayerInfo> *__for_range; // [rsp+30h] [rbp-50h]
  std::pair<unsigned int const,HomeTryEnterPlayerInfo> *__in; // [rsp+38h] [rbp-48h]
  std::tuple_element<0,std::pair<unsigned int const,HomeTryEnterPlayerInfo> >::type *uid; // [rsp+40h] [rbp-40h]
  std::tuple_element<1,std::pair<unsigned int const,HomeTryEnterPlayerInfo> >::type *player_info; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v18; // [rsp+50h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->state_ == HOME_SESSION_STATE_MODIFYING_REDIS )
  {
    __for_range = &this->try_enter_player_map_;
    __for_begin._M_node = std::map<unsigned int,HomeTryEnterPlayerInfo>::begin(&this->try_enter_player_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,HomeTryEnterPlayerInfo>::end(&this->try_enter_player_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeTryEnterPlayerInfo>>::operator*(&__for_begin);
      uid = std::get<0ul,unsigned int const,HomeTryEnterPlayerInfo>(__in);
      player_info = std::get<1ul,unsigned int const,HomeTryEnterPlayerInfo>(__in);
      if ( *(_BYTE *)(((unsigned __int64)&player_info->try_times >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)player_info + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&player_info->try_times >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v6 = player_info->try_times + 1;
      if ( *(_BYTE *)(((unsigned __int64)&this->init_module_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->init_module_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        v6 = (_DWORD)this + 128;
        __asan_report_load4();
      }
      init_module_id = this->init_module_id_;
      if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
      {
        v6 = (_DWORD)this + 16;
        __asan_report_load4();
      }
      home_uid = this->home_uid_;
      if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
      {
        v6 = (unsigned int)uid;
        __asan_report_load4();
      }
      HomeHandler::sendServerTryEnterHomeReq(*uid, home_uid, target_app_id, new_load_rand, init_module_id, -1, v6);
      std::_Rb_tree_iterator<std::pair<unsigned int const,HomeTryEnterPlayerInfo>>::operator++(&__for_begin);
    }
    HomeSession::destroy(this);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_session.cpp",
      "onModifyHomeStatusModifyed",
      258);
    v3 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v18,
           (const char (*)[26])"[HOME][SESSION] home_uid:");
    v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->home_uid_);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v4, (const char (*)[16])" invalid_state:");
    common::milog::MiLogStream::operator<<<HomeSessionState,(HomeSessionState*)0>(v5, &this->state_);
    common::milog::MiLogStream::~MiLogStream(&v18);
  }
};

// Line 272: range 00000000145B6648-00000000145B6888
void __cdecl HomeSession::onModifyHomeStatusSuccess(HomeSession *const this, uint64_t new_load_rand)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  GameserverService *v5; // rax
  std::unordered_map<unsigned int,std::shared_ptr<HomeSaveWaitData>> *p_home_mgr; // rcx
  bool v7; // bl
  common::milog::MiLogStream *v8; // rax
  std::shared_ptr<HomeSaveWaitData> __a; // [rsp+10h] [rbp-40h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->state_ == HOME_SESSION_STATE_MODIFYING_REDIS )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->load_rand_ >> 3) + 0x7FFF8000) )
      __asan_report_store8(&this->load_rand_);
    this->load_rand_ = new_load_rand;
    v5 = ServiceBox::findService<GameserverService>();
    p_home_mgr = (std::unordered_map<unsigned int,std::shared_ptr<HomeSaveWaitData>> *)&GameserverService::getGameThreadLocal(v5)->home_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    HomeMgr::findSaveWaitHome((HomeMgr *const)&__a, p_home_mgr, this->home_uid_);
    v7 = std::operator!=<HomeSaveWaitData>(&__a, 0LL);
    std::shared_ptr<HomeSaveWaitData>::~shared_ptr(&__a);
    if ( v7 )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_session.cpp",
        "onModifyHomeStatusSuccess",
        283);
      v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v10,
             (const char (*)[40])"[HOME] findSaveWaitHome succ, home_uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->home_uid_);
      common::milog::MiLogStream::~MiLogStream(&v10);
    }
    else
    {
      HomeSession::loadHomeDataFromDb(this);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_session.cpp",
      "onModifyHomeStatusSuccess",
      275);
    v2 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v10,
           (const char (*)[26])"[HOME][SESSION] home_uid:");
    v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->home_uid_);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v3, (const char (*)[16])" invalid_state:");
    common::milog::MiLogStream::operator<<<HomeSessionState,(HomeSessionState*)0>(v4, &this->state_);
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
};

// Line 292: range 00000000145B688A-00000000145B79C5
int32_t __cdecl HomeSession::onGetHomeDataRsp(HomeSession *const this, const proto::GetHomeDataRsp *rsp_0)
{
  unsigned __int64 p_M_next_resize; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t v8; // r14d
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  google::protobuf::uint64 rand; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  GameserverService *v22; // rax
  HomeMgr *p_home_mgr; // rcx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  GameserverService *v26; // rax
  std::unordered_map<unsigned int,std::shared_ptr<HomeSaveWaitData>> *v27; // rcx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  google::protobuf::uint32 v31; // r14d
  std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  common::milog::MiLogStream *v33; // r14
  std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // r14
  GameserverService *v37; // rax
  uint32_t v38; // ecx
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  Home *v41; // r14
  Home *v42; // rdx
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  GameserverService *v46; // rax
  HomeMgr *v47; // rcx
  common::milog::MiLogStream *v48; // rax
  GameserverService *v49; // rax
  HomeMgr *v50; // r14
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  const proto::HomeData *v56; // rax
  const std::string *v57; // rax
  MonitorReport *v58; // rax
  int32_t result; // eax
  int32_t home_bin_size; // [rsp+14h] [rbp-11Ch]
  unsigned __int64 val; // [rsp+18h] [rbp-118h] BYREF
  HomeMgr v62; // [rsp+20h] [rbp-110h] BYREF

  p_M_next_resize = (unsigned __int64)&v62.save_wait_home_map_._M_h._M_rehash_policy._M_next_resize;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      p_M_next_resize = v3;
  }
  *(_QWORD *)p_M_next_resize = 1102416563LL;
  *(_QWORD *)(p_M_next_resize + 8) = "4 32 4 11 retcode:299 48 4 7 ret:365 64 16 12 home_ptr:300 96 16 12 save_ptr:301";
  *(_QWORD *)(p_M_next_resize + 16) = HomeSession::onGetHomeDataRsp;
  v4 = (_DWORD *)(p_M_next_resize >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->state_ != HOME_SESSION_STATE_LOADING )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v62.save_wait_home_map_._M_h._M_bucket_count,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_session.cpp",
      "onGetHomeDataRsp",
      295);
    v5 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           (common::milog::MiLogStream *const)&v62.save_wait_home_map_._M_h._M_bucket_count,
           (const char (*)[26])"[HOME][SESSION] home_uid:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->home_uid_);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v6, (const char (*)[16])" invalid_state:");
    common::milog::MiLogStream::operator<<<HomeSessionState,(HomeSessionState*)0>(v7, &this->state_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v62.save_wait_home_map_._M_h._M_bucket_count);
    v8 = -1;
    goto LABEL_55;
  }
  *(_DWORD *)(p_M_next_resize + 32) = 0;
  std::shared_ptr<Home>::shared_ptr((std::shared_ptr<Home> *const)(p_M_next_resize + 64), 0LL);
  std::shared_ptr<HomeSaveWaitData>::shared_ptr((std::shared_ptr<HomeSaveWaitData> *const)(p_M_next_resize + 96), 0LL);
  if ( !proto::GetHomeDataRsp::retcode(rsp_0) )
  {
    rand = proto::GetHomeDataRsp::load_rand(rsp_0);
    if ( *(_BYTE *)(((unsigned __int64)&this->load_rand_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( rand != this->load_rand_ )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v62.save_wait_home_map_._M_h._M_bucket_count,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_session.cpp",
        "onGetHomeDataRsp",
        312);
      v13 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
              (common::milog::MiLogStream *const)&v62.save_wait_home_map_._M_h._M_bucket_count,
              (const char (*)[10])"home_uid:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->home_uid_);
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v14, (const char (*)[16])" rsp.load_rand:");
      val = proto::GetHomeDataRsp::load_rand(rsp_0);
      v16 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v15, &val);
      v17 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v16, (const char (*)[13])" load_rand_:");
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v17, &this->load_rand_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v62.save_wait_home_map_._M_h._M_bucket_count);
    }
    if ( proto::GetHomeDataRsp::is_new_home(rsp_0) )
    {
      if ( !std::map<unsigned int,HomeTryEnterPlayerInfo>::count(&this->try_enter_player_map_, &this->home_uid_) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v62.save_wait_home_map_._M_h._M_bucket_count,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/home/home_session.cpp",
          "onGetHomeDataRsp",
          319);
        v18 = common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(
                (common::milog::MiLogStream *const)&v62.save_wait_home_map_._M_h._M_bucket_count,
                (const char (*)[75])"[HOME] home is new but not found owner in try_enter_player_map_. home_uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &this->home_uid_);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v62.save_wait_home_map_._M_h._M_bucket_count);
        *(_DWORD *)(p_M_next_resize + 32) = 9703;
        goto LABEL_43;
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v62.save_wait_home_map_._M_h._M_bucket_count,
        &common::milog::MiLogDefault::default_log_obj_,
        5u,
        "./src/home/home_session.cpp",
        "onGetHomeDataRsp",
        323);
      v19 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              (common::milog::MiLogStream *const)&v62.save_wait_home_map_._M_h._M_bucket_count,
              (const char (*)[30])"[HOME] home is new. home_uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &this->home_uid_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v62.save_wait_home_map_._M_h._M_bucket_count);
    }
    HomeSession::getHome((HomeSession *const)&v62.online_home_map_._M_h._M_single_bucket);
    std::shared_ptr<Home>::operator=(
      (std::shared_ptr<Home> *const)(p_M_next_resize + 64),
      (std::shared_ptr<Home> *)&v62.online_home_map_._M_h._M_single_bucket);
    std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)&v62.online_home_map_._M_h._M_single_bucket);
    if ( std::operator!=<Home>((const std::shared_ptr<Home> *)(p_M_next_resize + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v62.save_wait_home_map_._M_h._M_bucket_count,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_session.cpp",
        "onGetHomeDataRsp",
        329);
      v20 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
              (common::milog::MiLogStream *const)&v62.save_wait_home_map_._M_h._M_bucket_count,
              (const char (*)[17])"[HOME] home_uid:");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &this->home_uid_);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        v21,
        (const char (*)[26])" session already has home");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v62.save_wait_home_map_._M_h._M_bucket_count);
      *(_DWORD *)(p_M_next_resize + 32) = -1;
    }
    else
    {
      v22 = ServiceBox::findService<GameserverService>();
      p_home_mgr = &GameserverService::getGameThreadLocal(v22)->home_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      HomeMgr::findOnlineHome(&v62, &p_home_mgr->online_home_map_, this->home_uid_);
      std::shared_ptr<Home>::operator=(
        (std::shared_ptr<Home> *const)(p_M_next_resize + 64),
        (std::shared_ptr<Home> *)&v62);
      std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)&v62);
      if ( std::operator!=<Home>((const std::shared_ptr<Home> *)(p_M_next_resize + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v62.save_wait_home_map_._M_h._M_bucket_count,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/home/home_session.cpp",
          "onGetHomeDataRsp",
          337);
        v24 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                (common::milog::MiLogStream *const)&v62.save_wait_home_map_._M_h._M_bucket_count,
                (const char (*)[17])"[HOME] home_uid:");
        v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &this->home_uid_);
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          v25,
          (const char (*)[32])" home_mgr already has this home");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v62.save_wait_home_map_._M_h._M_bucket_count);
        *(_DWORD *)(p_M_next_resize + 32) = -1;
      }
      else
      {
        v26 = ServiceBox::findService<GameserverService>();
        v27 = (std::unordered_map<unsigned int,std::shared_ptr<HomeSaveWaitData>> *)&GameserverService::getGameThreadLocal(v26)->home_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        HomeMgr::findSaveWaitHome((HomeMgr *const)&v62.online_home_map_._M_h._M_before_begin, v27, this->home_uid_);
        std::shared_ptr<HomeSaveWaitData>::operator=(
          (std::shared_ptr<HomeSaveWaitData> *const)(p_M_next_resize + 96),
          (std::shared_ptr<HomeSaveWaitData> *)&v62.online_home_map_._M_h._M_before_begin);
        std::shared_ptr<HomeSaveWaitData>::~shared_ptr((std::shared_ptr<HomeSaveWaitData> *const)&v62.online_home_map_._M_h._M_before_begin);
        if ( !std::operator!=<HomeSaveWaitData>((const std::shared_ptr<HomeSaveWaitData> *)(p_M_next_resize + 96), 0LL) )
          goto LABEL_31;
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v62.save_wait_home_map_._M_h._M_bucket_count,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/home/home_session.cpp",
          "onGetHomeDataRsp",
          346);
        v28 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                (common::milog::MiLogStream *const)&v62.save_wait_home_map_._M_h._M_bucket_count,
                (const char (*)[41])"[HOME] findSaveWaitHome succ, home_uid_:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &this->home_uid_);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v62.save_wait_home_map_._M_h._M_bucket_count);
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v62.save_wait_home_map_._M_h._M_bucket_count,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/home/home_session.cpp",
          "onGetHomeDataRsp",
          347);
        v29 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                (common::milog::MiLogStream *const)&v62.save_wait_home_map_._M_h._M_bucket_count,
                (const char (*)[12])" home_uid: ");
        v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &this->home_uid_);
        common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
          v30,
          (const char (*)[25])" home is in saving state");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v62.save_wait_home_map_._M_h._M_bucket_count);
        v31 = proto::GetHomeDataRsp::data_version(rsp_0);
        v32 = std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_next_resize + 96));
        if ( *(_BYTE *)(((unsigned __int64)&v32->data_version >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v32->data_version >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( v31 == v32->data_version )
        {
LABEL_31:
          v37 = ServiceBox::findService<GameserverService>();
          v38 = (unsigned int)GameserverService::getGameThreadLocal(v37) + 704;
          if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          HomeMgr::createHome((HomeMgr *const)&v62.online_home_map_._M_h._M_rehash_policy, v38, this->home_uid_);
          std::shared_ptr<Home>::operator=(
            (std::shared_ptr<Home> *const)(p_M_next_resize + 64),
            (std::shared_ptr<Home> *)&v62.online_home_map_._M_h._M_rehash_policy);
          std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)&v62.online_home_map_._M_h._M_rehash_policy);
          if ( std::operator==<Home>((const std::shared_ptr<Home> *)(p_M_next_resize + 64), 0LL) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&v62.save_wait_home_map_._M_h._M_bucket_count,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/home/home_session.cpp",
              "onGetHomeDataRsp",
              359);
            v39 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    (common::milog::MiLogStream *const)&v62.save_wait_home_map_._M_h._M_bucket_count,
                    (const char (*)[17])"[HOME] home_uid:");
            v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, &this->home_uid_);
            common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v40,
              (const char (*)[19])" createHome failed");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v62.save_wait_home_map_._M_h._M_bucket_count);
            *(_DWORD *)(p_M_next_resize + 32) = -1;
          }
          else
          {
            v41 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_next_resize + 64));
            std::enable_shared_from_this<HomeSession>::shared_from_this((std::enable_shared_from_this<HomeSession> *const)&v62.online_home_map_._M_h._M_single_bucket);
            Home::bindHomeSession(v41, (HomeSessionPtr *)&v62.online_home_map_._M_h._M_single_bucket);
            std::shared_ptr<HomeSession>::~shared_ptr((std::shared_ptr<HomeSession> *const)&v62.online_home_map_._M_h._M_single_bucket);
            v42 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_next_resize + 64));
            *(_DWORD *)(p_M_next_resize + 48) = Home::onGetHomeDataRsp(v42, rsp_0);
            if ( *(_DWORD *)(p_M_next_resize + 48) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&v62.save_wait_home_map_._M_h._M_bucket_count,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/home/home_session.cpp",
                "onGetHomeDataRsp",
                368);
              v43 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                      (common::milog::MiLogStream *const)&v62.save_wait_home_map_._M_h._M_bucket_count,
                      (const char (*)[17])"[HOME] home_uid:");
              v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, &this->home_uid_);
              v45 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                      v44,
                      (const char (*)[25])" loadFromDb failed. ret:");
              common::milog::MiLogStream::operator<<<int,(int *)0>(v45, (const int *)(p_M_next_resize + 48));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v62.save_wait_home_map_._M_h._M_bucket_count);
              *(_DWORD *)(p_M_next_resize + 32) = *(_DWORD *)(p_M_next_resize + 48);
            }
            else
            {
              if ( std::operator!=<HomeSaveWaitData>(
                     (const std::shared_ptr<HomeSaveWaitData> *)(p_M_next_resize + 96),
                     0LL) )
              {
                v46 = ServiceBox::findService<GameserverService>();
                v47 = &GameserverService::getGameThreadLocal(v46)->home_mgr;
                if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                HomeMgr::delSaveWaitHome(v47, this->home_uid_);
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&v62.save_wait_home_map_._M_h._M_bucket_count,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/home/home_session.cpp",
                  "onGetHomeDataRsp",
                  376);
                v48 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                        (common::milog::MiLogStream *const)&v62.save_wait_home_map_._M_h._M_bucket_count,
                        (const char (*)[24])off_25412F20);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, &this->home_uid_);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v62.save_wait_home_map_._M_h._M_bucket_count);
              }
              v49 = ServiceBox::findService<GameserverService>();
              v50 = &GameserverService::getGameThreadLocal(v49)->home_mgr;
              std::shared_ptr<Home>::shared_ptr(
                (std::shared_ptr<Home> *const)&v62.online_home_map_._M_h._M_single_bucket,
                (const std::shared_ptr<Home> *)(p_M_next_resize + 64));
              *(_DWORD *)(p_M_next_resize + 48) = HomeMgr::addOnlineHome(
                                                    v50,
                                                    (HomePtr *)&v62.online_home_map_._M_h._M_single_bucket);
              std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)&v62.online_home_map_._M_h._M_single_bucket);
              if ( *(_DWORD *)(p_M_next_resize + 48) )
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&v62.save_wait_home_map_._M_h._M_bucket_count,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/home/home_session.cpp",
                  "onGetHomeDataRsp",
                  382);
                v51 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                        (common::milog::MiLogStream *const)&v62.save_wait_home_map_._M_h._M_bucket_count,
                        (const char (*)[32])"addOnlineHome failed, home_uid:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, &this->home_uid_);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v62.save_wait_home_map_._M_h._M_bucket_count);
                *(_DWORD *)(p_M_next_resize + 32) = -1;
              }
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v62.save_wait_home_map_._M_h._M_bucket_count,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/home/home_session.cpp",
            "onGetHomeDataRsp",
            350);
          v33 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                  (common::milog::MiLogStream *const)&v62.save_wait_home_map_._M_h._M_bucket_count,
                  (const char (*)[28])"data version not save,save:");
          v34 = std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_next_resize + 96));
          v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &v34->data_version);
          v36 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v35, (const char (*)[9])" packet:");
          *(_DWORD *)(p_M_next_resize + 48) = proto::GetHomeDataRsp::data_version(rsp_0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v36,
            (const unsigned int *)(p_M_next_resize + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v62.save_wait_home_map_._M_h._M_bucket_count);
          *(_DWORD *)(p_M_next_resize + 32) = -1;
        }
      }
    }
    goto LABEL_43;
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&v62.save_wait_home_map_._M_h._M_bucket_count,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/home/home_session.cpp",
    "onGetHomeDataRsp",
    306);
  v9 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
         (common::milog::MiLogStream *const)&v62.save_wait_home_map_._M_h._M_bucket_count,
         (const char (*)[17])"[HOME] home_uid:");
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->home_uid_);
  v11 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          v10,
          (const char (*)[33])" GetHomeDataRsp failed. retcode:");
  *(_DWORD *)(p_M_next_resize + 48) = proto::GetHomeDataRsp::retcode(rsp_0);
  common::milog::MiLogStream::operator<<<int,(int *)0>(v11, (const int *)(p_M_next_resize + 48));
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v62.save_wait_home_map_._M_h._M_bucket_count);
  *(_DWORD *)(p_M_next_resize + 32) = proto::GetHomeDataRsp::retcode(rsp_0);
LABEL_43:
  HomeSession::processTryEnterPlayerMap(this, *(_DWORD *)(p_M_next_resize + 32));
  if ( *(_DWORD *)(p_M_next_resize + 32) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v62.save_wait_home_map_._M_h._M_bucket_count,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_session.cpp",
      "onGetHomeDataRsp",
      394);
    v52 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
            (common::milog::MiLogStream *const)&v62.save_wait_home_map_._M_h._M_bucket_count,
            (const char (*)[41])"[HOME] onGetHomeDataRsp failed, retcode:");
    v53 = common::milog::MiLogStream::operator<<<int,(int *)0>(v52, (const int *)(p_M_next_resize + 32));
    v54 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v53, (const char (*)[11])" home_uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v54, &this->home_uid_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v62.save_wait_home_map_._M_h._M_bucket_count);
    if ( std::operator!=<Home>((const std::shared_ptr<Home> *)(p_M_next_resize + 64), 0LL) )
    {
      std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_next_resize + 64));
      Home::unbindHomeSession((Home *const)&v62.online_home_map_._M_h._M_single_bucket);
      std::shared_ptr<HomeSession>::~shared_ptr((std::shared_ptr<HomeSession> *const)&v62.online_home_map_._M_h._M_single_bucket);
      HomeSession::addTimer(this);
    }
    if ( std::operator==<Home>((const std::shared_ptr<Home> *)(p_M_next_resize + 64), 0LL)
      && std::operator==<HomeSaveWaitData>((const std::shared_ptr<HomeSaveWaitData> *)(p_M_next_resize + 96), 0LL) )
    {
      HomeSession::destroy(this);
    }
  }
  v56 = proto::GetHomeDataRsp::home_data(rsp_0);
  v57 = proto::HomeData::bin_data[abi:cxx11](v56);
  home_bin_size = std::string::size(v57);
  if ( home_bin_size )
  {
    v58 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
    MonitorReport::addValue(v58, MONITOR_BIN_HOME_SIZE, home_bin_size);
  }
  v8 = 0;
  std::shared_ptr<HomeSaveWaitData>::~shared_ptr((std::shared_ptr<HomeSaveWaitData> *const)(p_M_next_resize + 96));
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(p_M_next_resize + 64));
LABEL_55:
  result = v8;
  if ( &v62.save_wait_home_map_._M_h._M_rehash_policy._M_next_resize == (std::size_t *)p_M_next_resize )
  {
    *(_QWORD *)((p_M_next_resize >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_M_next_resize >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_next_resize = 1172321806LL;
    *(_QWORD *)((p_M_next_resize >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_next_resize >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 421: range 00000000145B79C6-00000000145B89B1
int32_t __cdecl HomeSession::onServerTryEnterHomeReq(
        HomeSession *const this,
        common::minet::PacketPtr *p_packet_ptr,
        const proto::ServerTryEnterHomeReq *req)
{
  std::shared_ptr<common::minet::Packet> *v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  google::protobuf::uint64 rand; // rdx
  google::protobuf::uint64 v7; // rdx
  char v8; // al
  common::milog::MiLogStream *v9; // rbx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rbx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  int32_t v18; // r14d
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  google::protobuf::uint32 v28; // ecx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rbx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  uint32_t inited; // edx
  uint64_t last_load_rand; // rcx
  bool v35; // r14
  common::milog::MiLogStream *v36; // rax
  uint32_t v37; // r14d
  uint32_t v38; // ebx
  uint32_t v39; // esi
  common::milog::MiLogStream *v40; // rbx
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  uint32_t v43; // r14d
  uint32_t v44; // esi
  common::milog::MiLogStream *v45; // rbx
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  uint32_t v48; // r14d
  uint32_t v49; // esi
  common::milog::MiLogStream *v50; // rax
  Home *v51; // rdx
  uint32_t v52; // r15d
  uint32_t v53; // r14d
  uint32_t v54; // esi
  GameserverService *v55; // rax
  std::unordered_map<unsigned int,std::shared_ptr<HomeSaveWaitData>> *p_home_mgr; // rcx
  bool v57; // r14
  common::milog::MiLogStream *v58; // rbx
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rbx
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rbx
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  int32_t result; // eax
  unsigned int v73; // [rsp+24h] [rbp-9Ch] BYREF
  unsigned __int64 val; // [rsp+28h] [rbp-98h] BYREF
  common::milog::MiLogStream v75; // [rsp+30h] [rbp-90h] BYREF
  char v76[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (std::shared_ptr<common::minet::Packet> *)v76;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = (std::shared_ptr<common::minet::Packet> *)v4;
  }
  v3->_M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v3->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 12 home_ptr:471";
  v3[1]._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)HomeSession::onServerTryEnterHomeReq;
  v5 = (unsigned __int64)v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  rand = proto::ServerTryEnterHomeReq::cur_load_rand(req);
  if ( *(_BYTE *)(((unsigned __int64)&this->load_rand_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( rand == this->load_rand_ )
    goto LABEL_11;
  v7 = proto::ServerTryEnterHomeReq::cur_load_rand(req);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_load_rand_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( v7 == this->last_load_rand_ )
LABEL_11:
    v8 = 0;
  else
    v8 = 1;
  if ( v8 )
  {
    common::milog::MiLogStream::create(
      &v75,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_session.cpp",
      "onServerTryEnterHomeReq",
      424);
    v9 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v75,
           (const char (*)[22])"[HOME] req.load_rand:");
    val = proto::ServerTryEnterHomeReq::cur_load_rand(req);
    v10 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v9, &val);
    v11 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            v10,
            (const char (*)[33])" not equal to session load_rand:");
    v12 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v11, &this->load_rand_);
    v13 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            v12,
            (const char (*)[21])" and last_load_rand:");
    v14 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v13, &this->last_load_rand_);
    v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])". req_uid:");
    v73 = proto::ServerTryEnterHomeReq::source_uid(req);
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &v73);
    v17 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v16, (const char (*)[12])" home_uid_:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &this->home_uid_);
    common::milog::MiLogStream::~MiLogStream(&v75);
    v18 = -1;
    goto LABEL_47;
  }
  common::milog::MiLogStream::create(
    &v75,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/home/home_session.cpp",
    "onServerTryEnterHomeReq",
    431);
  v19 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v75, (const char (*)[18])"session home_uid:");
  v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &this->home_uid_);
  v21 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v20, (const char (*)[19])" last_load_rand_: ");
  v22 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v21, &this->last_load_rand_);
  v23 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v22, (const char (*)[13])" load_rand_:");
  v24 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v23, &this->load_rand_);
  v25 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v24, (const char (*)[20])" req.cur_load_rand:");
  val = proto::ServerTryEnterHomeReq::cur_load_rand(req);
  v26 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v25, &val);
  v27 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v26, (const char (*)[12])" try_times:");
  v73 = proto::ServerTryEnterHomeReq::try_times(req);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &v73);
  common::milog::MiLogStream::~MiLogStream(&v75);
  v28 = proto::ServerTryEnterHomeReq::source_uid(req);
  if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( v28 == this->home_uid_ )
  {
    if ( !proto::ServerTryEnterHomeReq::owner_init_home_module_id(req) )
    {
      common::milog::MiLogStream::create(
        &v75,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_session.cpp",
        "onServerTryEnterHomeReq",
        437);
      v29 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v75,
              (const char (*)[43])"[HOME] req.owner_init_home_module_id is 0.");
      v30 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v29, (const char (*)[11])". req_uid:");
      v73 = proto::ServerTryEnterHomeReq::source_uid(req);
      v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &v73);
      v32 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v31, (const char (*)[12])" home_uid_:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &this->home_uid_);
      common::milog::MiLogStream::~MiLogStream(&v75);
      v18 = -1;
      goto LABEL_47;
    }
    inited = proto::ServerTryEnterHomeReq::owner_init_home_module_id(req);
    if ( *(_BYTE *)(((unsigned __int64)&this->init_module_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->init_module_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->init_module_id_);
    }
    this->init_module_id_ = inited;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  switch ( this->state_ )
  {
    case HOME_SESSION_STATE_INIT:
      std::shared_ptr<common::minet::Packet>::shared_ptr(v3 + 2, p_packet_ptr);
      if ( *(_BYTE *)(((unsigned __int64)&this->last_load_rand_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      last_load_rand = this->last_load_rand_;
      if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v35 = HomeMgr::modifyHomeStatus(this->home_uid_, last_load_rand, v3 + 2) != 0;
      std::shared_ptr<common::minet::Packet>::~shared_ptr(v3 + 2);
      if ( !v35 )
      {
        HomeSession::setHomeSessionState(this, HOME_SESSION_STATE_MODIFYING_REDIS);
        v37 = proto::ServerTryEnterHomeReq::try_times(req);
        v38 = proto::ServerTryEnterHomeReq::source_app_id(req);
        v39 = proto::ServerTryEnterHomeReq::source_uid(req);
        HomeSession::addTryEnterPlayer(this, v39, v38, v37);
        goto LABEL_46;
      }
      common::milog::MiLogStream::create(
        &v75,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_session.cpp",
        "onServerTryEnterHomeReq",
        450);
      v36 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
              &v75,
              (const char (*)[61])"[HOME][SESSION] HomeMgr::modifyHomeStatus failed. home_uid_:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &this->home_uid_);
      common::milog::MiLogStream::~MiLogStream(&v75);
      v18 = -1;
      break;
    case HOME_SESSION_STATE_MODIFYING_REDIS:
      common::milog::MiLogStream::create(
        &v75,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/home/home_session.cpp",
        "onServerTryEnterHomeReq",
        459);
      v40 = common::milog::MiLogStream::operator<<<char [84],(char *[84])0>(
              &v75,
              (const char (*)[84])"[HOME][SESSION] recv ServerTryEnterHomeReq while in modifying redis state, req_uid:");
      v73 = proto::ServerTryEnterHomeReq::source_uid(req);
      v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, &v73);
      v42 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v41, (const char (*)[12])" home_uid_:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, &this->home_uid_);
      common::milog::MiLogStream::~MiLogStream(&v75);
      v43 = proto::ServerTryEnterHomeReq::try_times(req);
      LODWORD(v40) = proto::ServerTryEnterHomeReq::source_app_id(req);
      v44 = proto::ServerTryEnterHomeReq::source_uid(req);
      HomeSession::addTryEnterPlayer(this, v44, (uint32_t)v40, v43);
      goto LABEL_46;
    case HOME_SESSION_STATE_LOADING:
      common::milog::MiLogStream::create(
        &v75,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/home/home_session.cpp",
        "onServerTryEnterHomeReq",
        465);
      v45 = common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(
              &v75,
              (const char (*)[76])"[HOME][SESSION] recv ServerTryEnterHomeReq while in loading state, req_uid:");
      v73 = proto::ServerTryEnterHomeReq::source_uid(req);
      v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, &v73);
      v47 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v46, (const char (*)[12])" home_uid_:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, &this->home_uid_);
      common::milog::MiLogStream::~MiLogStream(&v75);
      v48 = proto::ServerTryEnterHomeReq::try_times(req);
      LODWORD(v45) = proto::ServerTryEnterHomeReq::source_app_id(req);
      v49 = proto::ServerTryEnterHomeReq::source_uid(req);
      HomeSession::addTryEnterPlayer(this, v49, (uint32_t)v45, v48);
      goto LABEL_46;
    case HOME_SESSION_STATE_BINDED:
      HomeSession::getHome((HomeSession *const)&v3[2]);
      if ( std::operator==<Home>((const std::shared_ptr<Home> *)&v3[2], 0LL) )
      {
        common::milog::MiLogStream::create(
          &v75,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/home/home_session.cpp",
          "onServerTryEnterHomeReq",
          474);
        v50 = common::milog::MiLogStream::operator<<<char [81],(char *[81])0>(
                &v75,
                (const char (*)[81])"[HOME][SESSION] state is HOME_SESSION_STATE_BINDED but not found home home_uid_:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v50, &this->home_uid_);
        common::milog::MiLogStream::~MiLogStream(&v75);
        v18 = -1;
      }
      else
      {
        v51 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v3[2]);
        v18 = Home::onServerTryEnterHomeReq(v51, req);
      }
      std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)&v3[2]);
      break;
    case HOME_SESSION_STATE_UNBINDED:
      v52 = proto::ServerTryEnterHomeReq::try_times(req);
      v53 = proto::ServerTryEnterHomeReq::source_app_id(req);
      v54 = proto::ServerTryEnterHomeReq::source_uid(req);
      HomeSession::addTryEnterPlayer(this, v54, v53, v52);
      v55 = ServiceBox::findService<GameserverService>();
      p_home_mgr = (std::unordered_map<unsigned int,std::shared_ptr<HomeSaveWaitData>> *)&GameserverService::getGameThreadLocal(v55)->home_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      HomeMgr::findSaveWaitHome((HomeMgr *const)&v3[2], p_home_mgr, this->home_uid_);
      v57 = std::operator!=<HomeSaveWaitData>((const std::shared_ptr<HomeSaveWaitData> *)&v3[2], 0LL);
      std::shared_ptr<HomeSaveWaitData>::~shared_ptr((std::shared_ptr<HomeSaveWaitData> *const)&v3[2]);
      if ( v57 )
      {
        common::milog::MiLogStream::create(
          &v75,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/home/home_session.cpp",
          "onServerTryEnterHomeReq",
          484);
        v58 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                &v75,
                (const char (*)[39])"[HOME] findSaveWaitHome succ, req_uid:");
        v73 = proto::ServerTryEnterHomeReq::source_uid(req);
        v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, &v73);
        v60 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v59, (const char (*)[12])" home_uid_:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, &this->home_uid_);
        common::milog::MiLogStream::~MiLogStream(&v75);
        if ( HomeSession::loadHomeDataFromSaveWait(this) )
        {
          common::milog::MiLogStream::create(
            &v75,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/home/home_session.cpp",
            "onServerTryEnterHomeReq",
            487);
          v61 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                  &v75,
                  (const char (*)[49])"[HOME] loadHomeDataFromSaveWait failed, req_uid:");
          v73 = proto::ServerTryEnterHomeReq::source_uid(req);
          v62 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v61, &v73);
          v63 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v62, (const char (*)[12])" home_uid_:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v63, &this->home_uid_);
          common::milog::MiLogStream::~MiLogStream(&v75);
          v18 = -1;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v75,
            &common::milog::MiLogDefault::default_log_obj_,
            2u,
            "./src/home/home_session.cpp",
            "onServerTryEnterHomeReq",
            492);
          v64 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                  &v75,
                  (const char (*)[47])"[HOME] load home data from save wait, req_uid:");
          v73 = proto::ServerTryEnterHomeReq::source_uid(req);
          v65 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v64, &v73);
          v66 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v65, (const char (*)[12])" home_uid_:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v66, &this->home_uid_);
          common::milog::MiLogStream::~MiLogStream(&v75);
LABEL_46:
          v18 = 0;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v75,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/home/home_session.cpp",
          "onServerTryEnterHomeReq",
          497);
        v67 = common::milog::MiLogStream::operator<<<char [93],(char *[93])0>(
                &v75,
                (const char (*)[93])"[HOME][SESSION] state_ is HOME_SESSION_STATE_UNBINDED but not found SaveWaitHome. home_uid_:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v67, &this->home_uid_);
        common::milog::MiLogStream::~MiLogStream(&v75);
        v18 = -1;
      }
      break;
    default:
      common::milog::MiLogStream::create(
        &v75,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_session.cpp",
        "onServerTryEnterHomeReq",
        503);
      v68 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v75,
              (const char (*)[41])"[HOME][SESSION] state invalid home_uid_:");
      v69 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v68, &this->home_uid_);
      v70 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v69, (const char (*)[9])" state_:");
      common::milog::MiLogStream::operator<<<HomeSessionState,(HomeSessionState*)0>(v70, &this->state_);
      common::milog::MiLogStream::~MiLogStream(&v75);
      v18 = -1;
      break;
  }
LABEL_47:
  result = v18;
  if ( v76 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v3->_M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
