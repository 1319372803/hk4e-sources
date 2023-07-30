// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/gcg_game_mgr.cpp

// Line 21: range 000000000E10579C-000000000E10598A
int32_t __cdecl GCGGameMgr::init(GCGGameMgr *const this)
{
  GCGGameMgr::init::<lambda(uint64_t)> *v1; // rax
  std::__shared_ptr_access<common::tools::MiTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  unsigned __int64 v4; // rdx
  std::shared_ptr<common::tools::TimerMgr> __args_0; // [rsp+18h] [rbp-48h] BYREF
  common::milog::MiLogStream v6; // [rsp+30h] [rbp-30h] BYREF

  __args_0._M_ptr = (std::__shared_ptr<common::tools::TimerMgr,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  v1 = (GCGGameMgr::init::<lambda(uint64_t)> *)ZTWN11ThreadLocal13timer_mgr_ptrE();
  common::tools::perf::make_shared<common::tools::MiTimer,std::shared_ptr<common::tools::TimerMgr> &,GCGGameMgr::init(void)::{lambda(unsigned long)#1}>(
    (std::shared_ptr<common::tools::TimerMgr> *)&__args_0._M_refcount,
    v1,
    &__args_0,
    v1);
  std::shared_ptr<common::tools::MiTimer>::operator=(
    &this->timer_ptr_,
    (std::shared_ptr<common::tools::MiTimer> *)&__args_0._M_refcount);
  std::shared_ptr<common::tools::MiTimer>::~shared_ptr((std::shared_ptr<common::tools::MiTimer> *const)&__args_0._M_refcount);
  if ( std::operator==<common::tools::MiTimer>(&this->timer_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/gcg_game_mgr.cpp",
      "init",
      25);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(&v6, (const char (*)[25])"[GCG] timer_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
  else
  {
    v3 = std::__shared_ptr_access<common::tools::MiTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::tools::MiTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->timer_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3);
    v4 = (unsigned __int64)(v3->_vptr_MiTimer + 2);
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3->_vptr_MiTimer + 2);
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<common::tools::MiTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64, __int64, const char *, const char *, __int64, _QWORD, _QWORD))v4)(
           v3,
           1LL,
           1LL,
           "./src/card_game/gcg_game_mgr.cpp",
           "init",
           29LL,
           0LL,
           0LL) )
    {
      common::milog::MiLogStream::create(
        &v6,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_game/gcg_game_mgr.cpp",
        "init",
        31);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        &v6,
        (const char (*)[30])"[GCG] timer_ptr_ startS fails");
      common::milog::MiLogStream::~MiLogStream(&v6);
      return -1;
    }
    else
    {
      return 0;
    }
  }
};

// Line 22: range 000000000E105752-000000000E10579A
void __cdecl GCGGameMgr::init(void)::{lambda(unsigned long)#1}::operator()(
        const GCGGameMgr::init::<lambda(uint64_t)> *const __closure,
        uint64_t now_ms)
{
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  GCGGameMgr::onTimer(__closure->__this, now_ms);
};

// Line 38: range 000000000E10598C-000000000E105AA6
int32_t __cdecl GCGGameMgr::destroy(GCGGameMgr *const this)
{
  common::tools::MiTimer *v1; // rax
  GCGGameMode *v2; // rax
  GCGGameMode *v3; // rax
  std::map<unsigned int,std::shared_ptr<GCGGameMode>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,std::shared_ptr<GCGGameMode>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<unsigned int,std::shared_ptr<GCGGameMode>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,std::shared_ptr<GCGGameMode> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<GCGGameMode> > >::type *game_uid; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<GCGGameMode> > >::type *game_mode_ptr; // [rsp+38h] [rbp-8h]

  if ( std::operator!=<common::tools::MiTimer>(&this->timer_ptr_, 0LL) )
  {
    v1 = std::__shared_ptr_access<common::tools::MiTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::tools::MiTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->timer_ptr_);
    common::tools::MiTimer::cancel(v1);
    std::__shared_ptr<common::tools::MiTimer,(__gnu_cxx::_Lock_policy)2>::reset(&this->timer_ptr_);
  }
  __for_range = &this->game_mode_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<GCGGameMode>>::begin(&this->game_mode_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<GCGGameMode>>::end(&this->game_mode_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGGameMode>>>::operator*(&__for_begin);
    game_uid = std::get<0ul,unsigned int const,std::shared_ptr<GCGGameMode>>(__in);
    game_mode_ptr = std::get<1ul,unsigned int const,std::shared_ptr<GCGGameMode>>(__in);
    v2 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)game_mode_ptr);
    GCGGameMode::stop(v2);
    v3 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)game_mode_ptr);
    GCGGameMode::destroy(v3);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGGameMode>>>::operator++(&__for_begin);
  }
  std::map<unsigned int,std::shared_ptr<GCGGameMode>>::clear(&this->game_mode_map_);
  std::map<unsigned int,unsigned int>::clear(&this->uid_map_);
  return 0;
};

// Line 56: range 000000000E105AA8-000000000E105BFD
void __cdecl GCGGameMgr::onReloadConfig(GCGGameMgr *const this)
{
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  GCGGameMode *v4; // rax
  uint32_t client_version; // [rsp+14h] [rbp-4Ch]
  std::map<unsigned int,std::shared_ptr<GCGGameMode>>::iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::map<unsigned int,std::shared_ptr<GCGGameMode>>::iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  ClientVersionConfig *version_config; // [rsp+28h] [rbp-38h]
  std::map<unsigned int,std::shared_ptr<GCGGameMode>> *__for_range; // [rsp+30h] [rbp-30h]
  std::pair<unsigned int const,std::shared_ptr<GCGGameMode> > *__in; // [rsp+38h] [rbp-28h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<GCGGameMode> > >::type *_; // [rsp+40h] [rbp-20h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<GCGGameMode> > >::type *game_mode_ptr; // [rsp+48h] [rbp-18h]
  std::shared_ptr<Config> v13; // [rsp+50h] [rbp-10h] BYREF

  Config::getConfig();
  version_config = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config_.version_config;
  std::shared_ptr<Config>::~shared_ptr(&v13);
  client_version = ClientVersionConfig::getClientDataVersion(version_config);
  if ( ClientVersionConfig::isDataVersionNeedGCGForbidRelogin(version_config) )
  {
    __for_range = &this->game_mode_map_;
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<GCGGameMode>>::begin(&this->game_mode_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<GCGGameMode>>::end(&this->game_mode_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGGameMode>>>::operator*(&__for_begin);
      _ = std::get<0ul,unsigned int const,std::shared_ptr<GCGGameMode>>(__in);
      game_mode_ptr = std::get<1ul,unsigned int const,std::shared_ptr<GCGGameMode>>(__in);
      if ( std::operator!=<GCGGameMode>(game_mode_ptr, 0LL) )
      {
        v1 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)game_mode_ptr);
        if ( !GCGGameMode::getForbidClientVersion(v1) )
        {
          v2 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)game_mode_ptr);
          if ( client_version > GCGGameMode::getClientDataVersion(v2) )
          {
            v4 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)game_mode_ptr);
            GCGGameMode::setForbidClientVersion(v4, client_version);
          }
        }
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGGameMode>>>::operator++(&__for_begin);
    }
  }
};

// Line 77: range 000000000E105BFE-000000000E105C6C
bool __cdecl GCGGameMgr::isClientDataVersionLatest(GCGGameMgr *const this, uint32_t client_version)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  bool v3; // bl
  std::shared_ptr<Config> v5[2]; // [rsp+10h] [rbp-20h] BYREF

  Config::getConfig();
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5);
  v3 = client_version == ClientVersionConfig::getClientDataVersion(&v2->design_config_.version_config);
  std::shared_ptr<Config>::~shared_ptr(v5);
  return v3;
};

// Line 83: range 000000000E105C6E-000000000E106329
int32_t __cdecl GCGGameMgr::checkCreateGame(GCGGameMgr *const this, GCGGameModeParam *param)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-C4h]
  std::shared_ptr<Config> v20; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 17 client_version:99 64 16 13 config_ptr:90";
  *(_QWORD *)(v2 + 16) = GCGGameMgr::checkCreateGame;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  if ( GCGGameMgr::checkOverload(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&param->controller_a.uid >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&param->controller_a.uid >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&param->controller_a.uid);
    }
    GCGGameMgr::sendCreateGameFailNotify(param->controller_a.uid, 1u);
    if ( *(_BYTE *)(((unsigned __int64)&param->controller_b.uid >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&param->controller_b.uid >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&param->controller_b.uid);
    }
    GCGGameMgr::sendCreateGameFailNotify(param->controller_b.uid, 1u);
    v5 = -1;
  }
  else
  {
    Config::getConfig();
    if ( std::operator==<Config>((const std::shared_ptr<Config> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/gcg_game_mgr.cpp",
        "checkCreateGame",
        93);
      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v21, (const char (*)[17])"getConfig failed");
      common::milog::MiLogStream::~MiLogStream(&v21);
      v5 = -1;
    }
    else
    {
      v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(char *)(((unsigned __int64)&v6->is_client_data_version_not_latest_ban_gcg >> 3) + 0x7FFF8000) < 0 )
        v6 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v6->is_client_data_version_not_latest_ban_gcg);
      if ( !v6->is_client_data_version_not_latest_ban_gcg )
        goto LABEL_35;
      ret = 0;
      Config::getConfig();
      v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
      *(_DWORD *)(v2 + 48) = ClientVersionConfig::getClientDataVersion(&v7->design_config_.version_config);
      std::shared_ptr<Config>::~shared_ptr(&v20);
      if ( *(_BYTE *)(((unsigned __int64)&param->controller_a.uid >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&param->controller_a.uid >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&param->controller_a.uid);
      }
      if ( param->controller_a.uid )
      {
        if ( *(_BYTE *)(((unsigned __int64)&param->controller_a.client_version >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&param->controller_a.client_version >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&param->controller_a.client_version);
        }
        if ( param->controller_a.client_version != *(_DWORD *)(v2 + 48) )
        {
          common::milog::MiLogStream::create(
            &v21,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/gcg_game_mgr.cpp",
            "checkCreateGame",
            104);
          v8 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                 &v21,
                 (const char (*)[66])"player client_data_version is not latest. latest_client_version: ");
          v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v8,
                 (const unsigned int *)(v2 + 48));
          v10 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  v9,
                  (const char (*)[18])" client_version: ");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v10,
                  &param->controller_a.client_version);
          v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])" uid: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &param->controller_a.uid);
          common::milog::MiLogStream::~MiLogStream(&v21);
          ret = -1;
          if ( *(_BYTE *)(((unsigned __int64)&param->controller_a.uid >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&param->controller_a.uid >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&param->controller_a.uid);
          }
          GCGGameMgr::sendCreateGameFailNotify(param->controller_a.uid, 2u);
        }
      }
      if ( *(_BYTE *)(((unsigned __int64)&param->controller_b.uid >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&param->controller_b.uid >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&param->controller_b.uid);
      }
      if ( param->controller_b.uid )
      {
        if ( *(_BYTE *)(((unsigned __int64)&param->controller_b.client_version >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&param->controller_b.client_version >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&param->controller_b.client_version);
        }
        if ( param->controller_b.client_version != *(_DWORD *)(v2 + 48) )
        {
          common::milog::MiLogStream::create(
            &v21,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/gcg_game_mgr.cpp",
            "checkCreateGame",
            115);
          v13 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                  &v21,
                  (const char (*)[66])"player client_data_version is not latest. latest_client_version: ");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v13,
                  (const unsigned int *)(v2 + 48));
          v15 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  v14,
                  (const char (*)[18])" client_version: ");
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v15,
                  &param->controller_b.client_version);
          v17 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])" uid: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &param->controller_b.uid);
          common::milog::MiLogStream::~MiLogStream(&v21);
          if ( *(_BYTE *)(((unsigned __int64)&param->controller_b.uid >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&param->controller_b.uid >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&param->controller_b.uid);
          }
          GCGGameMgr::sendCreateGameFailNotify(param->controller_b.uid, 2u);
          ret = -1;
        }
      }
      if ( ret )
        v5 = ret;
      else
LABEL_35:
        v5 = 0;
    }
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
  }
  result = v5;
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 131: range 000000000E10632A-000000000E106806
int32_t __cdecl GCGGameMgr::checkOverload(GCGGameMgr *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  unsigned __int64 v4; // rax
  _BYTE *v5; // rdx
  int32_t v6; // r14d
  uint32_t WorkThreadNum; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::map<unsigned int,std::shared_ptr<GCGGameMode>>::size_type v12; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  int32_t result; // eax
  unsigned __int64 val; // [rsp+10h] [rbp-C0h] BYREF
  GCGService *gcg_service; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v21; // [rsp+20h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 4 18 total_load_num:144 48 4 16 max_load_num:145 64 16 14 config_ptr:138";
  *(_QWORD *)(v1 + 16) = GCGGameMgr::checkOverload;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -202178560;
  v4 = ZTWN11ThreadLocal17is_in_work_threadE();
  v5 = (_BYTE *)v4;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) != 0 && (char)(v4 & 7) >= *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    __asan_report_load1(v4);
  if ( *v5 != 1 )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/gcg_game_mgr.cpp",
      "checkOverload",
      134);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v21,
      (const char (*)[27])"need called in work thread");
    common::milog::MiLogStream::~MiLogStream(&v21);
    v6 = -1;
  }
  else
  {
    gcg_service = ServiceBox::findService<GCGService>();
    Config::getConfig();
    if ( std::operator==<Config>((const std::shared_ptr<Config> *)(v1 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/gcg_game_mgr.cpp",
        "checkOverload",
        141);
      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v21, (const char (*)[17])"getConfig failed");
      common::milog::MiLogStream::~MiLogStream(&v21);
      v6 = -1;
    }
    else
    {
      *(_DWORD *)(v1 + 32) = GCGService::getTotalLoadNum(gcg_service);
      WorkThreadNum = GCGService::getWorkThreadNum(gcg_service);
      v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v8->max_gcg_game_num_per_thread >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v8->max_gcg_game_num_per_thread >> 3) + 0x7FFF8000) <= 3 )
      {
        v8 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v8->max_gcg_game_num_per_thread);
      }
      *(_DWORD *)(v1 + 48) = WorkThreadNum * v8->max_gcg_game_num_per_thread;
      if ( *(_DWORD *)(v1 + 32) < *(_DWORD *)(v1 + 48) )
      {
        v12 = std::map<unsigned int,std::shared_ptr<GCGGameMode>>::size(&this->game_mode_map_);
        v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v13->max_gcg_game_num_per_thread >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v13->max_gcg_game_num_per_thread >> 3) + 0x7FFF8000) <= 3 )
        {
          v13 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v13->max_gcg_game_num_per_thread);
        }
        if ( v12 < v13->max_gcg_game_num_per_thread )
        {
          v6 = 0;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v21,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/card_game/gcg_game_mgr.cpp",
            "checkOverload",
            153);
          v14 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  &v21,
                  (const char (*)[18])"online_game_num: ");
          val = std::map<unsigned int,std::shared_ptr<GCGGameMode>>::size(&this->game_mode_map_);
          v15 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v14, &val);
          v16 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  v15,
                  (const char (*)[19])" max_online_game: ");
          v17 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &v17->max_gcg_game_num_per_thread);
          common::milog::MiLogStream::~MiLogStream(&v21);
          v6 = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/gcg_game_mgr.cpp",
          "checkOverload",
          148);
        v9 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
               &v21,
               (const char (*)[17])"total_load_num: ");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v9,
                (const unsigned int *)(v1 + 32));
        v11 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v10,
                (const char (*)[19])" max_online_game: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v1 + 48));
        common::milog::MiLogStream::~MiLogStream(&v21);
        v6 = -1;
      }
    }
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 64));
  }
  result = v6;
  if ( v22 == (char *)v1 )
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
  return result;
};

// Line 160: range 000000000E106808-000000000E106BEF
GCGGameModePtr __cdecl GCGGameMgr::createPVEGameMode(GCGGameMgr *const this, GCGGameModeParam *param)
{
  GCGGameModeParam *v2; // rdx
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool v6; // r14
  GCGGameModePtr result; // rax
  common::milog::MiLogStream *v8; // rdx
  int v9; // r14d
  GCGGameMode *v10; // rax
  GCGGameMode *v11; // rax
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t GameUid; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v14; // rax
  uint32_t *v15; // rdx
  GCGGameModeParam *parama; // [rsp+8h] [rbp-C8h]
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-B0h] BYREF
  char v18[144]; // [rsp+40h] [rbp-90h] BYREF

  parama = v2;
  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 7 uid:161 64 16 17 game_mode_ptr:169";
  *(_QWORD *)(v3 + 16) = GCGGameMgr::createPVEGameMode;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&parama->controller_a.uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&parama->controller_a.uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&parama->controller_a.uid);
  }
  *(_DWORD *)(v3 + 48) = parama->controller_a.uid;
  GCGGameMgr::findRunningGameModeByUid((GCGGameMgr *const)(v3 + 64), (uint32_t)param);
  v6 = std::operator!=<GCGGameMode>(0LL, (const std::shared_ptr<GCGGameMode> *)(v3 + 64));
  std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(v3 + 64));
  if ( v6 )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/gcg_game_mgr.cpp",
      "createPVEGameMode",
      164);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(&v17, (const char (*)[25])off_1BC71040);
    common::milog::MiLogStream::~MiLogStream(&v17);
    std::shared_ptr<GCGGameMode>::shared_ptr((std::shared_ptr<GCGGameMode> *const)this, 0LL);
  }
  else
  {
    GCGGameMgr::createGameMode((GCGGameMgr *const)(v3 + 64), param);
    if ( std::operator==<GCGGameMode>((const std::shared_ptr<GCGGameMode> *)(v3 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/gcg_game_mgr.cpp",
        "createPVEGameMode",
        172);
      v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v17,
             (const char (*)[33])"create game mode fail. game_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &parama->game_id);
      common::milog::MiLogStream::~MiLogStream(&v17);
      v9 = 0;
    }
    else
    {
      v10 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      GCGGameMode::addPlayerController(v10, GCG_CONTROLLER_A, &parama->controller_a);
      v11 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      GCGGameMode::addMonsterController(v11, GCG_CONTROLLER_B, &parama->controller_b);
      v12 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      GameUid = GCGGameMode::getGameUid(v12);
      v14 = std::map<unsigned int,unsigned int>::operator[](
              (std::map<unsigned int,unsigned int> *const)&param->controller_a.card_back_id,
              (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 48));
      v15 = v14;
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v14);
      }
      *v15 = GameUid;
      std::shared_ptr<GCGGameMode>::shared_ptr(
        (std::shared_ptr<GCGGameMode> *const)this,
        (std::shared_ptr<GCGGameMode> *)(v3 + 64));
      v9 = 1;
    }
    std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(v3 + 64));
    if ( !v9 )
      std::shared_ptr<GCGGameMode>::shared_ptr((std::shared_ptr<GCGGameMode> *const)this, 0LL);
  }
  if ( v18 == (char *)v3 )
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
  result._M_ptr = (std::__shared_ptr<GCGGameMode,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 185: range 000000000E106BF0-000000000E107122
GCGGameModePtr __cdecl GCGGameMgr::createAIGameMode(GCGGameMgr *const this, GCGGameModeParam *param)
{
  GCGGameModeParam *v2; // rdx
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool v6; // r14
  GCGGameModePtr result; // rax
  common::milog::MiLogStream *v8; // rdx
  int v9; // r14d
  GCGGameMode *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  GCGGameMode *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t GameUid; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v18; // rax
  uint32_t *v19; // rdx
  GCGGameModeParam *parama; // [rsp+8h] [rbp-C8h]
  common::milog::MiLogStream v21; // [rsp+20h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+40h] [rbp-90h] BYREF

  parama = v2;
  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 7 uid:186 64 16 17 game_mode_ptr:194";
  *(_QWORD *)(v3 + 16) = GCGGameMgr::createAIGameMode;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&parama->controller_a.uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&parama->controller_a.uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&parama->controller_a.uid);
  }
  *(_DWORD *)(v3 + 48) = parama->controller_a.uid;
  GCGGameMgr::findRunningGameModeByUid((GCGGameMgr *const)(v3 + 64), (uint32_t)param);
  v6 = std::operator!=<GCGGameMode>(0LL, (const std::shared_ptr<GCGGameMode> *)(v3 + 64));
  std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(v3 + 64));
  if ( v6 )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/gcg_game_mgr.cpp",
      "createAIGameMode",
      189);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(&v21, (const char (*)[25])off_1BC71040);
    common::milog::MiLogStream::~MiLogStream(&v21);
    std::shared_ptr<GCGGameMode>::shared_ptr((std::shared_ptr<GCGGameMode> *const)this, 0LL);
  }
  else
  {
    GCGGameMgr::createGameMode((GCGGameMgr *const)(v3 + 64), param);
    if ( std::operator==<GCGGameMode>((const std::shared_ptr<GCGGameMode> *)(v3 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/gcg_game_mgr.cpp",
        "createAIGameMode",
        197);
      v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v21,
             (const char (*)[33])"create game mode fail. game_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &parama->game_id);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v9 = 0;
    }
    else
    {
      v10 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( (unsigned int)GCGGameMode::addPlayerController(v10, GCG_CONTROLLER_A, &parama->controller_a) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/gcg_game_mgr.cpp",
          "createAIGameMode",
          202);
        v11 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                &v21,
                (const char (*)[58])"create game mode fail. add player controller failed, uid:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v3 + 48));
        v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])", game_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &parama->game_id);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v9 = 0;
      }
      else
      {
        v14 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        if ( (unsigned int)GCGGameMode::addAIController(v14, GCG_CONTROLLER_B, &parama->controller_b) )
        {
          common::milog::MiLogStream::create(
            &v21,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/card_game/gcg_game_mgr.cpp",
            "createAIGameMode",
            207);
          v15 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                  &v21,
                  (const char (*)[58])"create game mode fail. add ai controller failed, game_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &parama->game_id);
          common::milog::MiLogStream::~MiLogStream(&v21);
          v9 = 0;
        }
        else
        {
          v16 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          GameUid = GCGGameMode::getGameUid(v16);
          v18 = std::map<unsigned int,unsigned int>::operator[](
                  (std::map<unsigned int,unsigned int> *const)&param->controller_a.card_back_id,
                  (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 48));
          v19 = v18;
          if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v18);
          }
          *v19 = GameUid;
          std::shared_ptr<GCGGameMode>::shared_ptr(
            (std::shared_ptr<GCGGameMode> *const)this,
            (std::shared_ptr<GCGGameMode> *)(v3 + 64));
          v9 = 1;
        }
      }
    }
    std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(v3 + 64));
    if ( !v9 )
      std::shared_ptr<GCGGameMode>::shared_ptr((std::shared_ptr<GCGGameMode> *const)this, 0LL);
  }
  if ( v22 == (char *)v3 )
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
  result._M_ptr = (std::__shared_ptr<GCGGameMode,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 218: range 000000000E107124-000000000E1077DA
GCGGameModePtr __cdecl GCGGameMgr::createPVPGameMode(GCGGameMgr *const this, GCGGameModeParam *param)
{
  GCGGameModeParam *v2; // rdx
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  uint32_t uid; // ecx
  common::milog::MiLogStream *v7; // rax
  GCGGameModePtr result; // rax
  bool v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  int v12; // r14d
  GCGGameMode *v13; // rax
  GCGGameMode *v14; // rax
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  uint32_t GameUid; // r14d
  unsigned __int64 v17; // rax
  int v18; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v19; // rax
  _DWORD *v20; // rdx
  GCGGameModeParam *parama; // [rsp+8h] [rbp-F8h]
  std::initializer_list<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-E0h]
  std::initializer_list<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-D0h]
  int v24[2]; // [rsp+38h] [rbp-C8h] BYREF
  std::initializer_list<unsigned int> v25; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v26; // [rsp+50h] [rbp-B0h] BYREF
  char v27[144]; // [rsp+70h] [rbp-90h] BYREF

  parama = v2;
  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 7 uid:224 64 16 17 game_mode_ptr:234";
  *(_QWORD *)(v3 + 16) = GCGGameMgr::createPVPGameMode;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&parama->controller_a.uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&parama->controller_a.uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&parama->controller_a.uid);
  }
  uid = parama->controller_a.uid;
  if ( *(_BYTE *)(((unsigned __int64)&parama->controller_b.uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&parama->controller_b.uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&parama->controller_b.uid);
  }
  if ( uid == parama->controller_b.uid )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/gcg_game_mgr.cpp",
      "createPVPGameMode",
      221);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v26, (const char (*)[16])"same uid. uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &parama->controller_a.uid);
    common::milog::MiLogStream::~MiLogStream(&v26);
    std::shared_ptr<GCGGameMode>::shared_ptr((std::shared_ptr<GCGGameMode> *const)this, 0LL);
  }
  else
  {
    v25._M_array = 0LL;
    v25._M_len = 2LL;
    if ( *(_BYTE *)(((unsigned __int64)&parama->controller_a.uid >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&parama->controller_a.uid >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&parama->controller_a.uid);
    }
    v24[0] = parama->controller_a.uid;
    if ( *(_BYTE *)(((unsigned __int64)&parama->controller_b.uid >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&parama->controller_b.uid >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&parama->controller_b.uid);
    }
    v24[1] = parama->controller_b.uid;
    v25._M_array = (std::initializer_list<unsigned int>::iterator)v24;
    __for_begin = std::initializer_list<unsigned int>::begin(&v25);
    __for_end = std::initializer_list<unsigned int>::end(&v25);
    while ( __for_begin != __for_end )
    {
      if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(__for_begin);
      }
      *(_DWORD *)(v3 + 48) = *__for_begin;
      GCGGameMgr::findRunningGameModeByUid((GCGGameMgr *const)(v3 + 64), (uint32_t)param);
      v9 = std::operator!=<GCGGameMode>(0LL, (const std::shared_ptr<GCGGameMode> *)(v3 + 64));
      std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(v3 + 64));
      if ( v9 )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/gcg_game_mgr.cpp",
          "createPVPGameMode",
          228);
        v10 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(&v26, (const char (*)[31])off_1BC71320);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v26);
        std::shared_ptr<GCGGameMode>::shared_ptr((std::shared_ptr<GCGGameMode> *const)this, 0LL);
        goto LABEL_30;
      }
      ++__for_begin;
    }
    GCGGameMgr::createGameMode((GCGGameMgr *const)(v3 + 64), param);
    if ( std::operator==<GCGGameMode>((const std::shared_ptr<GCGGameMode> *)(v3 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/gcg_game_mgr.cpp",
        "createPVPGameMode",
        237);
      v11 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v26,
              (const char (*)[33])"create game mode fail. game_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &parama->game_id);
      common::milog::MiLogStream::~MiLogStream(&v26);
      v12 = 0;
    }
    else
    {
      v13 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      GCGGameMode::addPlayerController(v13, GCG_CONTROLLER_A, &parama->controller_a);
      v14 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      GCGGameMode::addPlayerController(v14, GCG_CONTROLLER_B, &parama->controller_b);
      v15 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      GameUid = GCGGameMode::getGameUid(v15);
      v17 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](
                                (std::map<unsigned int,unsigned int> *const)&param->controller_a.card_back_id,
                                &parama->controller_b.uid);
      if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) != 0 && (char)((v17 & 7) + 3) >= *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
        v17 = __asan_report_store4(v17);
      *(_DWORD *)v17 = GameUid;
      v18 = *(_DWORD *)v17;
      v19 = std::map<unsigned int,unsigned int>::operator[](
              (std::map<unsigned int,unsigned int> *const)&param->controller_a.card_back_id,
              &parama->controller_a.uid);
      v20 = v19;
      if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v19);
      }
      *v20 = v18;
      std::shared_ptr<GCGGameMode>::shared_ptr(
        (std::shared_ptr<GCGGameMode> *const)this,
        (std::shared_ptr<GCGGameMode> *)(v3 + 64));
      v12 = 1;
    }
    std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(v3 + 64));
    if ( !v12 )
      std::shared_ptr<GCGGameMode>::shared_ptr((std::shared_ptr<GCGGameMode> *const)this, 0LL);
  }
LABEL_30:
  if ( v27 == (char *)v3 )
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
  result._M_ptr = (std::__shared_ptr<GCGGameMode,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 251: range 000000000E1077DC-000000000E107E41
// local variable allocation has failed, the output may be wrong!
GCGGameModePtr __cdecl GCGGameMgr::createBothAIGameMode(
        GCGGameMgr *const this,
        uint32_t level_id,
        uint32_t card_group1,
        uint32_t card_group2,
        const GCGBothAIAttackTask *attack_task,
        GCGGameBusinessType business_type)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // r14
  GCGControllerBase *v12; // rax
  GCGGameModePtr result; // rax
  const GCGBothAIAttackTask *attack_taska; // [rsp+8h] [rbp-338h]
  uint32_t card_group2a; // [rsp+14h] [rbp-32Ch]
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::iterator __for_begin; // [rsp+38h] [rbp-308h] BYREF
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::iterator __for_end; // [rsp+40h] [rbp-300h] BYREF
  GCGGameMode *game_mode; // [rsp+48h] [rbp-2F8h]
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>> *__for_range; // [rsp+50h] [rbp-2F0h]
  std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > *__in; // [rsp+58h] [rbp-2E8h]
  std::tuple_element<0,std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::type *_; // [rsp+60h] [rbp-2E0h]
  std::tuple_element<1,std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::type *controller_ptr; // [rsp+68h] [rbp-2D8h]
  common::milog::MiLogStream v25; // [rsp+70h] [rbp-2D0h] BYREF
  std::string val; // [rsp+90h] [rbp-2B0h] BYREF
  char v27[656]; // [rsp+B0h] [rbp-290h] BYREF
  GCGGameBusinessType business_typea; // [rsp+350h] [rbp+10h]

  card_group2a = (unsigned int)attack_task;
  attack_taska = *(const GCGBothAIAttackTask **)&business_type;
  v6 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_4(608LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 32 16 17 game_mode_ptr:257 64 472 9 param:252";
  *(_QWORD *)(v6 + 16) = GCGGameMgr::createBothAIGameMode;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -219021312;
  v8[536862736] = -218103808;
  v8[536862737] = -202116109;
  v8[536862738] = -202116109;
  GCGGameModeParam::GCGGameModeParam((GCGGameModeParam *const)(v6 + 64));
  *(_DWORD *)(v6 + 64) = card_group1;
  *(_DWORD *)(v6 + 72) = business_typea;
  *(_DWORD *)(v6 + 80) = card_group2;
  *(_DWORD *)(v6 + 304) = card_group2a;
  GCGGameMgr::createGameMode((GCGGameMgr *const)(v6 + 32), *(GCGGameModeParam **)&level_id);
  if ( std::operator==<GCGGameMode>((const std::shared_ptr<GCGGameMode> *)(v6 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/gcg_game_mgr.cpp",
      "createBothAIGameMode",
      260);
    v9 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v25,
           (const char (*)[23])"create game mode fail.");
    GCGBothAIAttackTask::getDesc[abi:cxx11](&val, attack_taska);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v25);
    std::shared_ptr<GCGGameMode>::shared_ptr((std::shared_ptr<GCGGameMode> *const)this, 0LL);
  }
  else
  {
    game_mode = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
    if ( (unsigned int)GCGGameMode::addAIController(game_mode, GCG_CONTROLLER_A, (const GCGControllerParam *)(v6 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/gcg_game_mgr.cpp",
        "createBothAIGameMode",
        266);
      v10 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              &v25,
              (const char (*)[50])"create game mode fail. add ai controller 1 failed");
      GCGBothAIAttackTask::getDesc[abi:cxx11](&val, attack_taska);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v25);
      std::shared_ptr<GCGGameMode>::shared_ptr((std::shared_ptr<GCGGameMode> *const)this, 0LL);
    }
    else if ( (unsigned int)GCGGameMode::addAIController(
                              game_mode,
                              GCG_CONTROLLER_B,
                              (const GCGControllerParam *)(v6 + 304)) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/gcg_game_mgr.cpp",
        "createBothAIGameMode",
        271);
      v11 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              &v25,
              (const char (*)[50])"create game mode fail. add ai controller 2 failed");
      GCGBothAIAttackTask::getDesc[abi:cxx11](&val, attack_taska);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v25);
      std::shared_ptr<GCGGameMode>::shared_ptr((std::shared_ptr<GCGGameMode> *const)this, 0LL);
    }
    else
    {
      GCGGameMode::setExtraBothAITask(game_mode, attack_taska);
      __for_range = GCGGameMode::getControllerMap(game_mode);
      __for_begin._M_node = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::begin(__for_range)._M_node;
      __for_end._M_node = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::end(__for_range)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        __in = std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>>::operator*(&__for_begin);
        _ = std::get<0ul,proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>(__in);
        controller_ptr = std::get<1ul,proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>(__in);
        if ( !std::operator==<GCGControllerBase>(controller_ptr, 0LL) )
        {
          v12 = std::__shared_ptr_access<GCGControllerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGControllerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)controller_ptr);
          GCGControllerBase::setIsIgnoreThink(v12);
        }
        std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>>::operator++(&__for_begin);
      }
      std::shared_ptr<GCGGameMode>::shared_ptr(
        (std::shared_ptr<GCGGameMode> *const)this,
        (std::shared_ptr<GCGGameMode> *)(v6 + 32));
    }
  }
  std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(v6 + 32));
  GCGGameModeParam::~GCGGameModeParam((GCGGameModeParam *const)(v6 + 64));
  if ( v27 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8048) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8048) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<GCGGameMode,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 288: range 000000000E107E42-000000000E108481
GCGGameMgr *__fastcall GCGGameMgr::createAIAndPVEGameMode(
        GCGGameMgr *const this,
        GCGGameModeParam *level_id,
        uint32_t card_group1,
        uint32_t card_group2,
        const GCGBothAIAttackTask *attack_task,
        const GCGBothAIAttackTask *business_type,
        GCGGameBusinessType business_typea)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // r14
  GCGControllerBase *v13; // rax
  uint32_t card_group2a; // [rsp+14h] [rbp-34Ch]
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::iterator __for_begin; // [rsp+38h] [rbp-328h] BYREF
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::iterator __for_end; // [rsp+40h] [rbp-320h] BYREF
  GCGGameMode *game_mode; // [rsp+48h] [rbp-318h]
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>> *__for_range; // [rsp+50h] [rbp-310h]
  std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > *__in; // [rsp+58h] [rbp-308h]
  std::tuple_element<0,std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::type *_; // [rsp+60h] [rbp-300h]
  std::tuple_element<1,std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::type *controller_ptr; // [rsp+68h] [rbp-2F8h]
  common::milog::MiLogStream v26; // [rsp+70h] [rbp-2F0h] BYREF
  common::milog::MiLogStream v27; // [rsp+90h] [rbp-2D0h] BYREF
  char v28[688]; // [rsp+B0h] [rbp-2B0h] BYREF

  card_group2a = (unsigned int)attack_task;
  v7 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_4(640LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "3 48 4 12 level_id:287 64 16 17 game_mode_ptr:295 96 472 9 param:290";
  *(_QWORD *)(v7 + 16) = GCGGameMgr::createAIAndPVEGameMode;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234556943;
  v9[536862722] = -219021312;
  v9[536862737] = -218103808;
  v9[536862738] = -202116109;
  v9[536862739] = -202116109;
  *(_DWORD *)(v7 + 48) = card_group1;
  GCGGameModeParam::GCGGameModeParam((GCGGameModeParam *const)(v7 + 96));
  *(_DWORD *)(v7 + 96) = *(_DWORD *)(v7 + 48);
  *(_DWORD *)(v7 + 112) = card_group2;
  *(_DWORD *)(v7 + 336) = card_group2a;
  *(_DWORD *)(v7 + 104) = business_typea;
  GCGGameMgr::createGameMode((GCGGameMgr *const)(v7 + 64), level_id);
  if ( std::operator==<GCGGameMode>((const std::shared_ptr<GCGGameMode> *)(v7 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/gcg_game_mgr.cpp",
      "createAIAndPVEGameMode",
      298);
    v10 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            &v27,
            (const char (*)[34])"create game mode fail. level_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v7 + 48));
    common::milog::MiLogStream::~MiLogStream(&v27);
    std::shared_ptr<GCGGameMode>::shared_ptr((std::shared_ptr<GCGGameMode> *const)this, 0LL);
  }
  else
  {
    game_mode = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 64));
    if ( (unsigned int)GCGGameMode::addAIController(game_mode, GCG_CONTROLLER_A, (const GCGControllerParam *)(v7 + 112)) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/gcg_game_mgr.cpp",
        "createAIAndPVEGameMode",
        304);
      v11 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              &v26,
              (const char (*)[50])"create game mode fail. add ai controller 1 failed");
      GCGBothAIAttackTask::getDesc[abi:cxx11]((std::string *)&v27, business_type);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, (const std::string *)&v27);
      std::string::~string(&v27);
      common::milog::MiLogStream::~MiLogStream(&v26);
      std::shared_ptr<GCGGameMode>::shared_ptr((std::shared_ptr<GCGGameMode> *const)this, 0LL);
    }
    else if ( (unsigned int)GCGGameMode::addMonsterController(
                              game_mode,
                              GCG_CONTROLLER_B,
                              (const GCGControllerParam *)(v7 + 336)) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/gcg_game_mgr.cpp",
        "createAIAndPVEGameMode",
        309);
      v12 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
              &v26,
              (const char (*)[55])"create game mode fail. add monster controller 2 failed");
      GCGBothAIAttackTask::getDesc[abi:cxx11]((std::string *)&v27, business_type);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)&v27);
      std::string::~string(&v27);
      common::milog::MiLogStream::~MiLogStream(&v26);
      std::shared_ptr<GCGGameMode>::shared_ptr((std::shared_ptr<GCGGameMode> *const)this, 0LL);
    }
    else
    {
      GCGGameMode::setExtraBothAITask(game_mode, business_type);
      __for_range = GCGGameMode::getControllerMap(game_mode);
      __for_begin._M_node = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::begin(__for_range)._M_node;
      __for_end._M_node = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::end(__for_range)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        __in = std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>>::operator*(&__for_begin);
        _ = std::get<0ul,proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>(__in);
        controller_ptr = std::get<1ul,proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>(__in);
        if ( !std::operator==<GCGControllerBase>(controller_ptr, 0LL) )
        {
          v13 = std::__shared_ptr_access<GCGControllerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGControllerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)controller_ptr);
          GCGControllerBase::setIsIgnoreThink(v13);
        }
        std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>>::operator++(&__for_begin);
      }
      std::shared_ptr<GCGGameMode>::shared_ptr(
        (std::shared_ptr<GCGGameMode> *const)this,
        (std::shared_ptr<GCGGameMode> *)(v7 + 64));
    }
  }
  std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(v7 + 64));
  GCGGameModeParam::~GCGGameModeParam((GCGGameModeParam *const)(v7 + 96));
  if ( v28 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8044) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF804C) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return this;
};

// Line 325: range 000000000E108482-000000000E108776
GCGGameMgr *__fastcall GCGGameMgr::findGameModeByUid(
        GCGGameMgr *const this,
        std::map<unsigned int,unsigned int> *uid,
        int a3)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v6; // rdx
  unsigned int *p_second; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+28h] [rbp-C8h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-C0h] BYREF
  char v15[160]; // [rsp+50h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 12 game_uid:331 48 4 7 uid:324 64 8 17 game_uid_iter:326 96 16 12 game_ptr:332";
  *(_QWORD *)(v3 + 16) = GCGGameMgr::findGameModeByUid;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                  uid + 1,
                                                                  (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,unsigned int>::end(uid + 1)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 64),
         &__y) )
  {
    std::shared_ptr<GCGGameMode>::shared_ptr((std::shared_ptr<GCGGameMode> *const)this, 0LL);
  }
  else
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 64));
    p_second = &v6->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    *(_DWORD *)(v3 + 32) = v6->second;
    GCGGameMgr::findGameMode((GCGGameMgr *const)(v3 + 96), (uint32_t)uid);
    if ( std::operator==<GCGGameMode>((const std::shared_ptr<GCGGameMode> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/gcg_game_mgr.cpp",
        "findGameModeByUid",
        335);
      v8 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v14,
             (const char (*)[27])"find game fail. game_uid: ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
      v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])" uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v14);
      std::map<unsigned int,unsigned int>::erase[abi:cxx11](
        uid + 1,
        *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 64));
    }
    std::shared_ptr<GCGGameMode>::shared_ptr(
      (std::shared_ptr<GCGGameMode> *const)this,
      (std::shared_ptr<GCGGameMode> *)(v3 + 96));
    std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(v3 + 96));
  }
  if ( v15 == (char *)v3 )
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

// Line 342: range 000000000E108778-000000000E1088BC
// local variable allocation has failed, the output may be wrong!
GCGGameModePtr __cdecl GCGGameMgr::findRunningGameModeByUid(GCGGameMgr *const this, uint32_t uid)
{
  int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  GCGGameModePtr result; // rax
  int uida; // [rsp+Ch] [rbp-74h]
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  uida = v2;
  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 17 game_mode_ptr:343";
  *(_QWORD *)(v3 + 16) = GCGGameMgr::findRunningGameModeByUid;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  GCGGameMgr::findGameModeByUid((GCGGameMgr *const)(v3 + 32), *(std::map<unsigned int,unsigned int> **)&uid, uida);
  if ( std::operator!=<GCGGameMode>((const std::shared_ptr<GCGGameMode> *)(v3 + 32), 0LL)
    && (v6 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
        GCGGameMode::isRunning(v6)) )
  {
    std::shared_ptr<GCGGameMode>::shared_ptr(
      (std::shared_ptr<GCGGameMode> *const)this,
      (std::shared_ptr<GCGGameMode> *)(v3 + 32));
  }
  else
  {
    std::shared_ptr<GCGGameMode>::shared_ptr((std::shared_ptr<GCGGameMode> *const)this, 0LL);
  }
  std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(v3 + 32));
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<GCGGameMode,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 352: range 000000000E1088BE-000000000E108A3E
GCGGameMgr *__fastcall GCGGameMgr::findGameMode(
        GCGGameMgr *const this,
        std::map<unsigned int,std::shared_ptr<GCGGameMode>> *game_uid,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGGameMode> > >::pointer v6; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGGameMode> > >::_Self __y; // [rsp+28h] [rbp-88h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 game_uid:351 64 8 8 iter:353";
  *(_QWORD *)(v3 + 16) = GCGGameMgr::findGameMode;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::map<unsigned int,std::shared_ptr<GCGGameMode>>::iterator *)(v3 + 64) = std::map<unsigned int,std::shared_ptr<GCGGameMode>>::find(
                                                                                  game_uid,
                                                                                  (const std::map<unsigned int,std::shared_ptr<GCGGameMode>>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<GCGGameMode>>::end(game_uid)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGGameMode> > >::_Self *)(v3 + 64),
         &__y) )
  {
    std::shared_ptr<GCGGameMode>::shared_ptr((std::shared_ptr<GCGGameMode> *const)this, 0LL);
  }
  else
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGGameMode>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGGameMode> > > *const)(v3 + 64));
    std::shared_ptr<GCGGameMode>::shared_ptr((std::shared_ptr<GCGGameMode> *const)this, &v6->second);
  }
  if ( v10 == (char *)v3 )
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
  return this;
};

// Line 362: range 000000000E108B84-000000000E108FA5
void __fastcall GCGGameMgr::removeGameMode(GCGGameMgr *const this, uint32_t game_uid, uint32_t now)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  GCGGameMode *v6; // rax
  std::vector<unsigned int>::iterator v7; // rax
  GCGGameMgr::removeGameMode::<lambda(uint32_t)> v8; // rdx
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v9; // rax
  _DWORD *v10; // rdx
  std::map<unsigned int,unsigned int>::mapped_type *v11; // rax
  _DWORD *v12; // rdx
  GCGGameMode *v13; // rax
  GCGService *v14; // rax
  unsigned int *__last; // [rsp+8h] [rbp-118h]
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > v17; // [rsp+28h] [rbp-F8h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > __i; // [rsp+30h] [rbp-F0h] BYREF
  std::vector<unsigned int>::iterator __for_begin; // [rsp+38h] [rbp-E8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+40h] [rbp-E0h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-D8h]
  char v22[208]; // [rsp+50h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 7 uid:376 48 4 12 game_uid:361 64 16 12 game_ptr:363 96 24 11 uid_vec:369";
  *(_QWORD *)(v3 + 16) = GCGGameMgr::removeGameMode;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  *(_DWORD *)(v3 + 48) = game_uid;
  GCGGameMgr::findGameMode((GCGGameMgr *const)(v3 + 64), &this->game_mode_map_, *(_DWORD *)(v3 + 48));
  if ( std::operator==<GCGGameMode>((const std::shared_ptr<GCGGameMode> *)(v3 + 64), 0LL) )
  {
    std::map<unsigned int,std::shared_ptr<GCGGameMode>>::erase(
      &this->game_mode_map_,
      (const std::map<unsigned int,std::shared_ptr<GCGGameMode>>::key_type *)(v3 + 48));
  }
  else
  {
    v6 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    GCGGameMode::getUidVec((std::vector<unsigned int> *)(v3 + 96), v6);
    __i._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 96))._M_current;
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_end,
      &__i);
    __last = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 96))._M_current;
    v7._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 96))._M_current;
    v8.__this = this;
    v8.__game_ptr = (std::shared_ptr<GCGGameMode> *)(v3 + 64);
    v17._M_current = std::remove_if<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,GCGGameMgr::removeGameMode(unsigned int,unsigned int)::{lambda(unsigned int)#1}>(
                       v7,
                       (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)__last,
                       v8)._M_current;
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin,
      &v17);
    std::vector<unsigned int>::erase(
      (std::vector<unsigned int> *const)(v3 + 96),
      (std::vector<unsigned int>::const_iterator)__for_begin._M_current,
      (std::vector<unsigned int>::const_iterator)__for_end._M_current);
    __for_range = (std::vector<unsigned int> *)(v3 + 96);
    __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 96))._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v9 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      v10 = v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      *(_DWORD *)(v3 + 32) = *v10;
      std::map<unsigned int,unsigned int>::erase(
        &this->uid_map_,
        (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 32));
      v11 = std::map<unsigned int,unsigned int>::operator[](
              &this->destroy_uid_map_,
              (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 32));
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v11);
      }
      *v12 = now;
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    v13 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    GCGGameMode::destroy(v13);
    std::map<unsigned int,std::shared_ptr<GCGGameMode>>::erase(
      &this->game_mode_map_,
      (const std::map<unsigned int,std::shared_ptr<GCGGameMode>>::key_type *)(v3 + 48));
    v14 = ServiceBox::findService<GCGService>();
    GCGService::decreaseThreadLoad(v14, *(_DWORD *)(v3 + 48));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 96));
  }
  std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(v3 + 64));
  if ( v22 == (char *)v3 )
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
};

// Line 372: range 000000000E108A40-000000000E108B82
bool __fastcall GCGGameMgr::removeGameMode(unsigned int,unsigned int)::{lambda(unsigned int)#1}::operator()(
        unsigned __int64 __closure,
        uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // rdx
  unsigned __int64 v5; // r12
  std::map<unsigned int,unsigned int>::mapped_type v6; // r13d
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  bool result; // al
  char v9[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 64);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:372";
  *(_QWORD *)(v2 + 16) = GCGGameMgr::removeGameMode(unsigned int,unsigned int)::{lambda(unsigned int)#1}::operator();
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  v6 = common::tools::MiscUtils::findMapWithDefaultValue<std::map<unsigned int,unsigned int>>(
         (const std::map<unsigned int,unsigned int> *)(*(_QWORD *)__closure + 48LL),
         (const std::map<unsigned int,unsigned int>::key_type *)v4 - 8,
         0);
  if ( *(_BYTE *)(((__closure + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure + 8);
  v7 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(*(const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const *)(__closure + 8));
  result = v6 != GCGGameMode::getGameUid(v7);
  if ( v9 == (char *)v2 )
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

// Line 387: range 000000000E10903E-000000000E109679
void __cdecl GCGGameMgr::onTimer(GCGGameMgr *const this, uint64_t now_ms)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  GCGGameMode *v10; // rax
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t LastRecvTime; // eax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  GCGGameMode *v17; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v18; // rax
  uint32_t *v19; // rdx
  unsigned int v20; // [rsp+18h] [rbp-158h] BYREF
  uint32_t no_recv_expire_time; // [rsp+1Ch] [rbp-154h]
  uint32_t retain_time; // [rsp+20h] [rbp-150h]
  uint32_t game_uid_0; // [rsp+24h] [rbp-14Ch]
  std::map<unsigned int,std::shared_ptr<GCGGameMode>>::iterator __for_begin; // [rsp+28h] [rbp-148h] BYREF
  std::map<unsigned int,std::shared_ptr<GCGGameMode>>::iterator __for_end; // [rsp+30h] [rbp-140h] BYREF
  std::map<unsigned int,std::shared_ptr<GCGGameMode>> *__for_range; // [rsp+38h] [rbp-138h]
  std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-130h]
  std::pair<unsigned int const,std::shared_ptr<GCGGameMode> > *__in; // [rsp+48h] [rbp-128h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<GCGGameMode> > >::type *game_uid; // [rsp+50h] [rbp-120h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<GCGGameMode> > >::type *game_mode_ptr; // [rsp+58h] [rbp-118h]
  std::shared_ptr<Config> v31; // [rsp+60h] [rbp-110h] BYREF
  std::shared_ptr<Config> v32; // [rsp+70h] [rbp-100h] BYREF
  common::milog::MiLogStream v33; // [rsp+80h] [rbp-F0h] BYREF
  std::string val; // [rsp+A0h] [rbp-D0h] BYREF
  char v35[176]; // [rsp+C0h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 7 now:388 64 24 17 delete_id_vec:389";
  *(_QWORD *)(v2 + 16) = GCGGameMgr::onTimer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = now_ms / 0x3E8;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 64));
  Config::getConfig();
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31);
  if ( *(_BYTE *)(((unsigned __int64)&v5->gcg_game_no_recv_expire_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v5 - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v5->gcg_game_no_recv_expire_time >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&v5->gcg_game_no_recv_expire_time);
  }
  no_recv_expire_time = v5->gcg_game_no_recv_expire_time;
  std::shared_ptr<Config>::~shared_ptr(&v31);
  Config::getConfig();
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
  if ( *(_BYTE *)(((unsigned __int64)&v6->gcg_game_retain_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v6->gcg_game_retain_time >> 3) + 0x7FFF8000) <= 3 )
  {
    v6 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v6->gcg_game_retain_time);
  }
  retain_time = v6->gcg_game_retain_time;
  std::shared_ptr<Config>::~shared_ptr(&v32);
  common::tools::MiscUtils::erase_if<unsigned int,unsigned int,GCGGameMgr::onTimer(unsigned long)::{lambda(std::pair<unsigned int,unsigned int> const&)#1}>(
    &this->destroy_uid_map_,
    (GCGGameMgr::onTimer::<lambda(const std::pair<unsigned int, unsigned int>&)>)(*(_DWORD *)(v2 + 48) - retain_time));
  __for_range = &this->game_mode_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<GCGGameMode>>::begin(&this->game_mode_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<GCGGameMode>>::end(&this->game_mode_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGGameMode>>>::operator*(&__for_begin);
    game_uid = std::get<0ul,unsigned int const,std::shared_ptr<GCGGameMode>>(__in);
    game_mode_ptr = std::get<1ul,unsigned int const,std::shared_ptr<GCGGameMode>>(__in);
    if ( std::operator==<GCGGameMode>(game_mode_ptr, 0LL) )
    {
      std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 64), game_uid);
    }
    else
    {
      v7 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)game_mode_ptr);
      if ( !GCGGameMode::isRunning(v7) )
      {
        std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 64), game_uid);
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/gcg_game_mgr.cpp",
          "onTimer",
          410);
        v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v33, (const char (*)[9])"delete. ");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
        v10 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)game_mode_ptr);
        GCGGameMode::getDesc[abi:cxx11](&val, v10);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v33);
      }
      else
      {
        v11 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)game_mode_ptr);
        LastRecvTime = GCGGameMode::getLastRecvTime(v11);
        if ( LastRecvTime + no_recv_expire_time < *(_DWORD *)(v2 + 48) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&val,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/gcg_game_mgr.cpp",
            "onTimer",
            415);
          v13 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  (common::milog::MiLogStream *const)&val,
                  (const char (*)[31])"last recv time too long. now: ");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v13,
                  (const unsigned int *)(v2 + 48));
          v15 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  v14,
                  (const char (*)[19])" last_recv_time_: ");
          v16 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)game_mode_ptr);
          v20 = GCGGameMode::getLastRecvTime(v16);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &v20);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
          v17 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)game_mode_ptr);
          GCGGameMode::setGameOver(v17, GCG_CONTROLLER_NONE, GCG_END_REASON_NO_PLAYER);
        }
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGGameMode>>>::operator++(&__for_begin);
  }
  __for_range_0 = (std::vector<unsigned int> *)(v2 + 64);
  __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGGameMode> > >::_Base_ptr)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 64))._M_current;
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<GCGGameMode> > >::_Base_ptr)std::vector<unsigned int>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
  {
    v18 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
    v19 = v18;
    if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v18);
    }
    game_uid_0 = *v19;
    GCGGameMgr::removeGameMode(this, game_uid_0, *(_DWORD *)(v2 + 48));
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 64));
  if ( v35 == (char *)v2 )
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

// Line 395: range 000000000E108FA6-000000000E10903C
bool __cdecl GCGGameMgr::onTimer(unsigned long)::{lambda(std::pair<unsigned int,unsigned int> const&)#1}::operator()(
        const GCGGameMgr::onTimer::<lambda(const std::pair<unsigned int, unsigned int>&)> *const __closure,
        const std::pair<unsigned int,unsigned int> *item)
{
  unsigned int second; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&item->second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)item + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item->second >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&item->second);
  }
  second = item->second;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  return second < __closure->__expire_time;
};

// Line 427: range 000000000E10967A-000000000E1096A4
void __cdecl GCGGameMgr::clear(GCGGameMgr *const this)
{
  std::map<unsigned int,std::shared_ptr<GCGGameMode>>::clear(&this->game_mode_map_);
  std::map<unsigned int,unsigned int>::clear(&this->uid_map_);
};

// Line 433: range 000000000E1096A6-000000000E10977B
bool __fastcall GCGGameMgr::isRecentGameDestroyByUid(const GCGGameMgr *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:432";
  *(_QWORD *)(v2 + 16) = GCGGameMgr::isRecentGameDestroyByUid;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  result = std::map<unsigned int,unsigned int>::count(
             &this->destroy_uid_map_,
             (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 32)) != 0;
  if ( v6 == (char *)v2 )
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

// Line 438: range 000000000E10977C-000000000E109A22
GCGGameModePtr __cdecl GCGGameMgr::createGameMode(GCGGameMgr *const this, GCGGameModeParam *param)
{
  GCGGameModeParam *v2; // rdx
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  GCGGameModePtr result; // rax
  GCGService *v7; // rax
  GCGGameMode *v8; // rdx
  common::milog::MiLogStream *v9; // rdx
  std::shared_ptr<GCGGameMode> *v10; // rax
  GCGService *v11; // r14
  std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t GameUid; // eax
  GCGGameModeParam *parama; // [rsp+8h] [rbp-C8h]
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+40h] [rbp-90h] BYREF

  parama = v2;
  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 game_uid:443 64 16 17 game_mode_ptr:444";
  *(_QWORD *)(v3 + 16) = GCGGameMgr::createGameMode;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  if ( GCGGameMgr::checkCreateGame((GCGGameMgr *const)param, parama) )
  {
    std::shared_ptr<GCGGameMode>::shared_ptr((std::shared_ptr<GCGGameMode> *const)this, 0LL);
  }
  else
  {
    v7 = ServiceBox::findService<GCGService>();
    *(_DWORD *)(v3 + 48) = GCGService::getGenGameModeUid(v7);
    common::tools::perf::make_shared<GCGGameMode,unsigned int &>((unsigned int *)(v3 + 64), (unsigned int *)(v3 + 48));
    v8 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( GCGGameMode::init(v8, parama) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/gcg_game_mgr.cpp",
        "createGameMode",
        447);
      v9 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             &v15,
             (const char (*)[31])"game mode init fail. game_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &parama->game_id);
      common::milog::MiLogStream::~MiLogStream(&v15);
      std::shared_ptr<GCGGameMode>::shared_ptr((std::shared_ptr<GCGGameMode> *const)this, 0LL);
    }
    else
    {
      v10 = std::map<unsigned int,std::shared_ptr<GCGGameMode>>::operator[](
              (std::map<unsigned int,std::shared_ptr<GCGGameMode>> *const)param,
              (const std::map<unsigned int,std::shared_ptr<GCGGameMode>>::key_type *)(v3 + 48));
      std::shared_ptr<GCGGameMode>::operator=(v10, (const std::shared_ptr<GCGGameMode> *)(v3 + 64));
      v11 = ServiceBox::findService<GCGService>();
      v12 = std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGGameMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      GameUid = GCGGameMode::getGameUid(v12);
      GCGService::increaseThreadLoad(v11, GameUid);
      std::shared_ptr<GCGGameMode>::shared_ptr(
        (std::shared_ptr<GCGGameMode> *const)this,
        (std::shared_ptr<GCGGameMode> *)(v3 + 64));
    }
    std::shared_ptr<GCGGameMode>::~shared_ptr((std::shared_ptr<GCGGameMode> *const)(v3 + 64));
  }
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
  result._M_ptr = (std::__shared_ptr<GCGGameMode,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 457: range 000000000E109A24-000000000E109D8B
void __fastcall GCGGameMgr::sendCreateGameFailNotify(
        uint32_t uid,
        proto::GCGGameCreateFailReasonNotify_GCGGameCreateReason reason)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::minet::Packet *v5; // rax
  NetworkMgrBase *v6; // r14
  uint32_t v7; // r8d
  common::milog::MiLogStream *v8; // rax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+10h] [rbp-100h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-F0h] BYREF
  char v11[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 uid:456 64 16 14 packet_ptr:464 96 24 10 notify:462";
  *(_QWORD *)(v2 + 16) = GCGGameMgr::sendCreateGameFailNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 48) = uid;
  if ( *(_DWORD *)(v2 + 48) )
  {
    proto::GCGGameCreateFailReasonNotify::GCGGameCreateFailReasonNotify((proto::GCGGameCreateFailReasonNotify *const)(v2 + 96));
    proto::GCGGameCreateFailReasonNotify::set_reason((proto::GCGGameCreateFailReasonNotify *const)(v2 + 96), reason);
    common::minet::PacketUtils::createPacket<proto::GCGGameCreateFailReasonNotify>((const proto::GCGGameCreateFailReasonNotify *)(v2 + 64));
    if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_game/gcg_game_mgr.cpp",
        "sendCreateGameFailNotify",
        467);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v10, (const char (*)[19])"createPacket fails");
      common::milog::MiLogStream::~MiLogStream(&v10);
    }
    else
    {
      v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      common::minet::Packet::setUserId(v5, *(_DWORD *)(v2 + 48));
      v6 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &packet_ptr,
        (const std::shared_ptr<common::minet::Packet> *)(v2 + 64));
      LOBYTE(v6) = NetworkMgrBase::sendPacketToTargetService(
                     v6,
                     (common::minet::PacketPtr)__PAIR128__(3LL, &packet_ptr),
                     0,
                     v7) != 0;
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
      if ( (_BYTE)v6 )
      {
        common::milog::MiLogStream::create(
          &v10,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/gcg_game_mgr.cpp",
          "sendCreateGameFailNotify",
          473);
        v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
               &v10,
               (const char (*)[40])"sendPacketToTargetService failed. uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v10);
      }
    }
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 64));
    proto::GCGGameCreateFailReasonNotify::~GCGGameCreateFailReasonNotify((proto::GCGGameCreateFailReasonNotify *const)(v2 + 96));
  }
  if ( v11 == (char *)v2 )
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
};
