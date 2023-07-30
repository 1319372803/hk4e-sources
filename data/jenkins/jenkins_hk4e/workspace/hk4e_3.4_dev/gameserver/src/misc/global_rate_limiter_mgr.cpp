// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/misc/global_rate_limiter_mgr.cpp

// Line 20: range 000000001557CBBC-000000001557CE7A
int32_t __cdecl GlobalRateLimiterMgr::init(GlobalRateLimiterMgr *const this)
{
  double v1; // xmm1_8
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  common::tools::ConcurrentRateLimiter *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  int32_t result; // eax
  std::shared_ptr<ConfigBase> v12; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-90h] BYREF
  char v14[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 config_ptr:21";
  *(_QWORD *)(v2 + 16) = GlobalRateLimiterMgr::init;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  v5 = (unsigned __int64)std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::config_mgr_ptr);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  v6 = *(_QWORD *)v5 + 32LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  (*(void (__fastcall **)(std::shared_ptr<ConfigBase> *, unsigned __int64))v6)(&v12, v5);
  std::dynamic_pointer_cast<Config,ConfigBase>((const std::shared_ptr<ConfigBase> *)(v2 + 32));
  std::shared_ptr<ConfigBase>::~shared_ptr(&v12);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&v7->rate_limit_login >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v7 - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v7->rate_limit_login >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v8 = common::tools::ConcurrentRateLimiter::create(v1);
  std::shared_ptr<common::tools::ConcurrentRateLimiter>::shared_ptr<common::tools::ConcurrentRateLimiter,void>(
    (std::shared_ptr<common::tools::ConcurrentRateLimiter> *const)&v12,
    v8);
  std::shared_ptr<common::tools::ConcurrentRateLimiter>::operator=(
    &this->login_rate_limiter_ptr_,
    (std::shared_ptr<common::tools::ConcurrentRateLimiter> *)&v12);
  std::shared_ptr<common::tools::ConcurrentRateLimiter>::~shared_ptr((std::shared_ptr<common::tools::ConcurrentRateLimiter> *const)&v12);
  common::milog::MiLogStream::create(
    &v13,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/misc/global_rate_limiter_mgr.cpp",
    "init",
    23);
  v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v13, (const char (*)[13])"login_limit:");
  v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &v10->rate_limit_login);
  common::milog::MiLogStream::~MiLogStream(&v13);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 32));
  result = 0;
  if ( v14 == (char *)v2 )
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

// Line 30: range 000000001557CE7C-000000001557D0B8
int32_t __cdecl GlobalRateLimiterMgr::onReloadConfig(GlobalRateLimiterMgr *const this)
{
  double v1; // xmm1_8
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<common::tools::ConcurrentRateLimiter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  int32_t result; // eax
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-90h] BYREF
  char v11[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 config_ptr:34";
  *(_QWORD *)(v2 + 16) = GlobalRateLimiterMgr::onReloadConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( !std::operator==<common::tools::ConcurrentRateLimiter>(&this->login_rate_limiter_ptr_, 0LL) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 32));
    v5 = std::__shared_ptr_access<common::tools::ConcurrentRateLimiter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::tools::ConcurrentRateLimiter,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v6->rate_limit_login >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v6 - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->rate_limit_login >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    common::tools::ConcurrentRateLimiter::setRate(v5, v1);
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/misc/global_rate_limiter_mgr.cpp",
      "onReloadConfig",
      37);
    v7 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v10, (const char (*)[13])"login_limit:");
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &v8->rate_limit_login);
    common::milog::MiLogStream::~MiLogStream(&v10);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 32));
  }
  result = 0;
  if ( v11 == (char *)v2 )
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
