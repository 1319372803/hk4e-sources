// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/service/match/match_service.cpp

// Line 23: range 000000000D7A9EAA-000000000D7AA283
int32_t __cdecl MatchService::init(MatchService *const this, common::tools::PTree *pt)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-91h] BYREF
  std::string child_name; // [rsp+20h] [rbp-90h] BYREF
  char v9[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 ms_pt:25";
  *(_QWORD *)(v2 + 16) = MatchService::init;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&child_name, "Root.ServiceList.Matchservice", &__a);
  common::tools::PTree::getChild(pt, &child_name);
  std::string::~string(&child_name);
  std::allocator<char>::~allocator(&__a);
  if ( ServiceBase::init(this, (common::tools::PTree *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&child_name,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/match/match_service.cpp",
      "init",
      30);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      (common::milog::MiLogStream *const)&child_name,
      (const char (*)[32])"[MATCH] ServiceBase init failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
    v5 = -1;
  }
  else if ( ServiceBase::findStatLogMgr(this, 0x1Bu) )
  {
    if ( MatchMgr::init(&this->match_mgr_) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&child_name,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/service/match/match_service.cpp",
        "init",
        44);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        (common::milog::MiLogStream *const)&child_name,
        (const char (*)[30])"[MATCH] match mgr init failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
      v5 = -1;
    }
    else if ( ServiceBase::addHandler<MatchHandler>(this) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&child_name,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/service/match/match_service.cpp",
        "init",
        49);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&child_name, off_1BA1C2C0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
      v5 = -1;
    }
    else
    {
      v5 = 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&child_name,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/match/match_service.cpp",
      "init",
      37);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
      (common::milog::MiLogStream *const)&child_name,
      (const char (*)[21])"miss stat log config");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
    v5 = -1;
  }
  common::tools::PTree::~PTree((common::tools::PTree *const)(v2 + 32));
  result = v5;
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

// Line 55: range 000000000D7AA284-000000000D7AA3AD
int32_t __cdecl MatchService::start(MatchService *const this)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( ServiceBase::start(this) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/match/match_service.cpp",
      "start",
      58);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      &v2,
      (const char (*)[33])"[MATCH] ServiceBase start failed");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else if ( MatchMgr::start(&this->match_mgr_) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/match/match_service.cpp",
      "start",
      64);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      &v2,
      (const char (*)[31])"[MATCH] match mgr start failed");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else
  {
    return 0;
  }
};

// Line 72: range 000000000D7AA3AE-000000000D7AA4E3
int32_t __cdecl MatchService::stop(MatchService *const this)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( MatchMgr::stop(&this->match_mgr_) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/match/match_service.cpp",
      "stop",
      75);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      &v2,
      (const char (*)[30])"[MATCH] match mgr stop failed");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else
  {
    MatchService::notifyMatchServiceStop(this);
    if ( ServiceBase::stop(this) )
    {
      common::milog::MiLogStream::create(
        &v2,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/service/match/match_service.cpp",
        "stop",
        83);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        &v2,
        (const char (*)[32])"[MATCH] ServiceBase stop failed");
      common::milog::MiLogStream::~MiLogStream(&v2);
      return -1;
    }
    else
    {
      return 0;
    }
  }
};

// Line 91: range 000000000D7AA526-000000000D7AA7B3
int32_t __cdecl MatchService::onWorkThreadStart(MatchService *const this, uint32_t thread_index)
{
  MatchService::onWorkThreadStart::<lambda(uint64_t)> *v3; // rax
  std::__shared_ptr_access<common::tools::MiTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  unsigned __int64 v5; // rdx
  std::shared_ptr<common::tools::TimerMgr> __args_0; // [rsp+18h] [rbp-48h] BYREF
  common::milog::MiLogStream v7; // [rsp+30h] [rbp-30h] BYREF

  if ( thread_index )
    return 0;
  if ( std::operator!=<common::tools::MiTimer>(0LL, &this->timer_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_service.cpp",
      "onWorkThreadStart",
      100);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      &v7,
      (const char (*)[30])"[MATCH] timer_ptr is not null");
    common::milog::MiLogStream::~MiLogStream(&v7);
    return -1;
  }
  else
  {
    __args_0._M_ptr = (std::__shared_ptr<common::tools::TimerMgr,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
    v3 = (MatchService::onWorkThreadStart::<lambda(uint64_t)> *)ZTWN11ThreadLocal13timer_mgr_ptrE();
    common::tools::perf::make_shared<common::tools::MiTimer,std::shared_ptr<common::tools::TimerMgr> &,MatchService::onWorkThreadStart(unsigned int)::{lambda(unsigned long)#1}>(
      (std::shared_ptr<common::tools::TimerMgr> *)&__args_0._M_refcount,
      v3,
      &__args_0,
      v3);
    std::shared_ptr<common::tools::MiTimer>::operator=(
      &this->timer_ptr_,
      (std::shared_ptr<common::tools::MiTimer> *)&__args_0._M_refcount);
    std::shared_ptr<common::tools::MiTimer>::~shared_ptr((std::shared_ptr<common::tools::MiTimer> *const)&__args_0._M_refcount);
    if ( std::operator==<common::tools::MiTimer>(0LL, &this->timer_ptr_) )
    {
      common::milog::MiLogStream::create(
        &v7,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/match/match_service.cpp",
        "onWorkThreadStart",
        107);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        &v7,
        (const char (*)[27])"[MATCH] timer_ptr_ is null");
      common::milog::MiLogStream::~MiLogStream(&v7);
      return -1;
    }
    else
    {
      v4 = std::__shared_ptr_access<common::tools::MiTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::tools::MiTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->timer_ptr_);
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v4);
      v5 = (unsigned __int64)(v4->_vptr_MiTimer + 2);
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v4->_vptr_MiTimer + 2);
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<common::tools::MiTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64, __int64, const char *, const char *, __int64, _QWORD, _QWORD))v5)(
             v4,
             1LL,
             1LL,
             "./src/service/match/match_service.cpp",
             "onWorkThreadStart",
             111LL,
             0LL,
             0LL) )
      {
        common::milog::MiLogStream::create(
          &v7,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/service/match/match_service.cpp",
          "onWorkThreadStart",
          113);
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          &v7,
          (const char (*)[32])"[MATCH] timer_ptr_ startS fails");
        common::milog::MiLogStream::~MiLogStream(&v7);
        return -1;
      }
      else
      {
        return 0;
      }
    }
  }
};

// Line 104: range 000000000D7AA4E4-000000000D7AA525
void __cdecl MatchService::onWorkThreadStart(unsigned int)::{lambda(unsigned long)#1}::operator()(
        const MatchService::onWorkThreadStart::<lambda(uint64_t)> *const __closure,
        uint64_t a2)
{
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  MatchService::onTimer(__closure->__this);
};

// Line 122: range 000000000D7AA7B4-000000000D7AA986
ConfigPtr __cdecl MatchService::getConfig(MatchService *const this)
{
  std::shared_ptr<ConfigBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  const std::shared_ptr<ConfigBase> *v4; // rax
  std::shared_ptr<ConfigBase> *p_r; // rsi
  std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned __int64 v7; // rdx
  ConfigPtr result; // rax
  std::shared_ptr<ConfigBase> *v9; // [rsp+8h] [rbp-78h]
  std::shared_ptr<ConfigBase> __r; // [rsp+10h] [rbp-70h] BYREF
  char v11[96]; // [rsp+20h] [rbp-60h] BYREF

  v9 = (std::shared_ptr<ConfigBase> *)this;
  v1 = (std::shared_ptr<ConfigBase> *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (MatchService *const)64;
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<ConfigBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 12 base_ptr:124";
  v1[1]._M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)MatchService::getConfig;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  v4 = (const std::shared_ptr<ConfigBase> *)ZTWN11ThreadLocal15config_base_ptrE(this);
  std::shared_ptr<ConfigBase>::shared_ptr(v1 + 2, v4);
  p_r = v1 + 2;
  if ( std::operator==<ConfigBase>(0LL, v1 + 2) )
  {
    v6 = std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::config_mgr_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v6);
    v7 = (unsigned __int64)(v6->_vptr_ConfigMgrBase + 4);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v6->_vptr_ConfigMgrBase + 4);
    (*(void (__fastcall **)(std::shared_ptr<ConfigBase> *, std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v7)(
      &__r,
      v6);
    p_r = &__r;
    std::shared_ptr<ConfigBase>::operator=(v1 + 2, &__r);
    std::shared_ptr<ConfigBase>::~shared_ptr(&__r);
  }
  if ( *(_WORD *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    __asan_report_store16(v9, p_r);
  std::dynamic_pointer_cast<Config,ConfigBase>(v9);
  std::shared_ptr<ConfigBase>::~shared_ptr(v1 + 2);
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<Config,(__gnu_cxx::_Lock_policy)2>::element_type *)v9;
  return result;
};

// Line 136: range 000000000D7AA988-000000000D7AAD78
void __cdecl MatchService::notifyMatchServiceStop(MatchService *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<proto::MatchServiceStopNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // r14
  MultiserverApp *v5; // rax
  uint32_t AppId; // eax
  MatchService *v7; // r14
  unsigned __int64 v8; // rdx
  common::minet::Packet *v9; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  unsigned __int64 v12; // rax
  void (__fastcall *v13)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<proto::MatchServiceStopNotify> *); // r15
  std::shared_ptr<proto::MatchServiceStopNotify> __r; // [rsp+10h] [rbp-C0h] BYREF
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 14 notify_ptr:138 64 16 14 packet_ptr:140";
  *(_QWORD *)(v1 + 16) = MatchService::notifyMatchServiceStop;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/service/match/match_service.cpp",
    "notifyMatchServiceStop",
    137);
  common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
    &v15,
    (const char (*)[34])"[MATCH] notifyMatchServiceStop...");
  common::milog::MiLogStream::~MiLogStream(&v15);
  common::tools::perf::make_shared<proto::MatchServiceStopNotify>();
  v4 = std::__shared_ptr_access<proto::MatchServiceStopNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::MatchServiceStopNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  v5 = Singleton<MultiserverApp>::instance();
  AppId = AppBase::getAppId((AppBase *const)v5);
  proto::MatchServiceStopNotify::set_server_id(v4, AppId);
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::MatchServiceStopNotify>(&__r);
  common::minet::PacketUtils::createPacket(v1 + 64, (common::minet::ConstMessagePtr)__PAIR128__(&__r, 10048LL));
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v1 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_service.cpp",
      "notifyMatchServiceStop",
      143);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v15,
      (const char (*)[28])"[MATCH] createPacket failed");
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  else
  {
    v7 = ServiceBox::findService<MatchService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      (std::shared_ptr<common::minet::Packet> *const)&__r,
      (const std::shared_ptr<common::minet::Packet> *)(v1 + 64));
    ServiceBase::setPacketSource(v7, (common::minet::PacketPtr)__PAIR128__(v8, &__r));
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&__r);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    common::minet::Packet::setTarget(v9, 3u, 0xFFFFFFFF);
    v10 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v10);
    v12 = (unsigned __int64)(v11->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v11->_vptr_NetworkMgrBase + 8);
    v13 = *(void (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<proto::MatchServiceStopNotify> *))v12;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      (std::shared_ptr<common::minet::Packet> *const)&__r,
      (const std::shared_ptr<common::minet::Packet> *)(v1 + 64));
    v13(v11, &__r);
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&__r);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v1 + 64));
  std::shared_ptr<proto::MatchServiceStopNotify>::~shared_ptr((std::shared_ptr<proto::MatchServiceStopNotify> *const)(v1 + 32));
  if ( v16 == (char *)v1 )
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

// Line 155: range 000000000D7AAD7A-000000000D7AB0A2
void __cdecl MatchService::onTimer(MatchService *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<proto::MatchserverWorkloadInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  MatchService *v5; // r14
  unsigned __int64 v6; // rdx
  NetworkMgrBase *v7; // r14
  uint32_t v8; // ecx
  std::shared_ptr<proto::MatchserverWorkloadInfoNotify> __r; // [rsp+10h] [rbp-C0h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-B0h] BYREF
  char v11[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 14 notify_ptr:157 64 16 14 packet_ptr:159";
  *(_QWORD *)(v1 + 16) = MatchService::onTimer;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  common::tools::perf::make_shared<proto::MatchserverWorkloadInfoNotify>();
  v4 = std::__shared_ptr_access<proto::MatchserverWorkloadInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::MatchserverWorkloadInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  MatchMgr::fillMatchserverWorkloadInfoNotify(&this->match_mgr_, v4);
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::MatchserverWorkloadInfoNotify>(&__r);
  common::minet::PacketUtils::createPacket(v1 + 64, (common::minet::ConstMessagePtr)__PAIR128__(&__r, 10947LL));
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v1 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_service.cpp",
      "onTimer",
      162);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v10,
      (const char (*)[28])"[MATCH] createPacket failed");
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  else
  {
    v5 = ServiceBox::findService<MatchService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      (std::shared_ptr<common::minet::Packet> *const)&__r,
      (const std::shared_ptr<common::minet::Packet> *)(v1 + 64));
    ServiceBase::setPacketSource(v5, (common::minet::PacketPtr)__PAIR128__(v6, &__r));
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&__r);
    v7 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      (std::shared_ptr<common::minet::Packet> *const)&__r,
      (const std::shared_ptr<common::minet::Packet> *)(v1 + 64));
    NetworkMgrBase::broadcastPacketToTargetService(v7, (common::minet::PacketPtr)__PAIR128__(4LL, &__r), v8);
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&__r);
    MatchMgr::monitorReport(&this->match_mgr_);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v1 + 64));
  std::shared_ptr<proto::MatchserverWorkloadInfoNotify>::~shared_ptr((std::shared_ptr<proto::MatchserverWorkloadInfoNotify> *const)(v1 + 32));
  if ( v11 == (char *)v1 )
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
