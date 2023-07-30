// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/dispatch/src/network/gateserver_session.cpp

// Line 24: range 000000000C611F20-000000000C6121B0
int32_t __cdecl GateserverSession::onRecv(
        GateserverSession *const this,
        char *data,
        uint32_t len,
        boost::asio::yield_context *p_yield)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int32_t v7; // r14d
  unsigned __int64 v8; // rax
  __int64 (__fastcall *v9)(GateserverSession *const, std::shared_ptr<common::minet::Packet> *, boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *); // r14
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> v13; // [rsp+20h] [rbp-D0h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-C0h] BYREF
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > v15; // [rsp+50h] [rbp-A0h] BYREF
  char v16[112]; // [rsp+80h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 13 packet_ptr:26";
  *(_QWORD *)(v4 + 16) = GateserverSession::onRecv;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket(data, len);
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v4 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/gateserver_session.cpp",
      "onRecv",
      29);
    common::milog::MiLogStream::operator()(&v14, "create packet failed");
    common::milog::MiLogStream::~MiLogStream(&v14);
    v7 = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v8 = (unsigned __int64)(this->_vptr_AServerSession + 5);
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8(this->_vptr_AServerSession + 5);
    v9 = *(__int64 (__fastcall **)(GateserverSession *const, std::shared_ptr<common::minet::Packet> *, boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *))v8;
    boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
      &v15,
      p_yield);
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v13, (const std::shared_ptr<common::minet::Packet> *)(v4 + 32));
    v7 = v9(this, &v13, &v15);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v13);
    boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&v15);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 32));
  result = v7;
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

// Line 37: range 000000000C6121B2-000000000C612364
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl GateserverSession::onRecvPacket(
        GateserverSession *const this,
        common::minet::PacketPtr *p_packet_ptr,
        boost::asio::yield_context *p_yield)
{
  const std::shared_ptr<common::minet::Packet> *v3; // rsi
  int v4; // ebx
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v5; // rsi
  common::minet::Packet *v6; // rbx
  uint64_t NowMs; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v9; // rsi
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  const std::shared_ptr<common::minet::Packet> *v12; // rsi
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v13; // rsi
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  const std::shared_ptr<common::minet::Packet> *v15; // rsi
  common::minet::PacketPtr v16; // rdi
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-20h] BYREF

  if ( std::operator==<common::minet::Packet>(0LL, v3) )
    return -1;
  v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v5);
  NowMs = common::tools::TimeUtils::getNowMs();
  common::minet::Packet::setRecvTimeMs(v6, NowMs);
  v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v5);
  if ( common::minet::Packet::getCmdId(v8) == 72
    || (v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v9),
        !common::minet::Packet::getCmdId(v10)) )
  {
    std::shared_ptr<common::minet::Packet>::shared_ptr(&packet_ptr, v12);
    v4 = GateserverSession::onGateserverKeepAlive(this, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  else
  {
    v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v13);
    if ( common::minet::Packet::getCmdId(v14) == 10035 )
    {
      std::shared_ptr<common::minet::Packet>::shared_ptr(&packet_ptr, v15);
      v4 = GateserverSession::onAddGateserverNotify(this, &packet_ptr);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    }
    else
    {
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &packet_ptr,
        (const std::shared_ptr<common::minet::Packet> *)v16._M_refcount._M_pi);
      v16._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&packet_ptr;
      ServiceBox::pushPacketToService(v16);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
      return 0;
    }
  }
  return v4;
};

// Line 64: range 000000000C612366-000000000C61244A
int32_t __cdecl GateserverSession::onConnect(GateserverSession *const this, boost::asio::yield_context *p_)
{
  uint32_t AppId; // eax
  const char *v3; // rbx
  const char *ClientIp; // rax
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-50h] BYREF
  std::string v7; // [rsp+30h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v6,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/network/gateserver_session.cpp",
    "onConnect",
    65);
  AppId = common::minet::AServerSession::getAppId(this);
  common::tools::AppIdUtils::getAppIdStr[abi:cxx11](&v7, AppId);
  v3 = (const char *)std::string::c_str(&v7);
  ClientIp = common::minet::AServerSession::getClientIp(this);
  common::milog::MiLogStream::operator()(&v6, "recv connect from %s app_id=%s", ClientIp, v3);
  std::string::~string(&v7);
  common::milog::MiLogStream::~MiLogStream(&v6);
  return 0;
};

// Line 70: range 000000000C61244C-000000000C6125E5
int32_t __cdecl GateserverSession::onDisconnect(GateserverSession *const this, boost::asio::yield_context *p_)
{
  common::milog::MiLogStream *v2; // rbx
  const char *v4; // rbx
  const char *ClientIp; // rax
  DispatchService *v6; // rax
  unsigned int val; // [rsp+18h] [rbp-58h] BYREF
  uint32_t app_id; // [rsp+1Ch] [rbp-54h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-50h] BYREF
  common::milog::MiLogStream v10; // [rsp+40h] [rbp-30h] BYREF

  app_id = common::minet::AServerSession::getAppId(this);
  if ( app_id )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/gateserver_session.cpp",
      "onDisconnect",
      78);
    common::tools::AppIdUtils::getAppIdStr[abi:cxx11]((std::string *)&v10, app_id);
    v4 = (const char *)std::string::c_str(&v10);
    ClientIp = common::minet::AServerSession::getClientIp(this);
    common::milog::MiLogStream::operator()(&v9, "disconnect to %s app_id=%s", ClientIp, v4);
    std::string::~string(&v10);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v6 = ServiceBox::findService<DispatchService>();
    GateserverMgr::delGateserver(&v6->gateserver_mgr, app_id);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/gateserver_session.cpp",
      "onDisconnect",
      74);
    v2 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v10,
           (const char (*)[38])"onDisconnect app_id is 0, session_id:");
    val = common::minet::AServerSession::getSessionId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v10);
    return -1;
  }
};

// Line 85: range 000000000C6125E6-000000000C6129D4
int32_t __cdecl GateserverSession::onAddGateserverNotify(
        GateserverSession *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::minet::Packet *v5; // rax
  int32_t v6; // r14d
  uint32_t SessionId; // eax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  int SenderLoad; // r15d
  const std::string *v10; // r14
  uint32_t v11; // eax
  const char *ClientIp; // rax
  int32_t result; // eax
  uint16_t listen_port; // [rsp+10h] [rbp-120h]
  char use_domain_name; // [rsp+14h] [rbp-11Ch]
  GateserverMgr *p_gateserver_mgr; // [rsp+18h] [rbp-118h]
  std::allocator<char> __a; // [rsp+3Bh] [rbp-F5h] BYREF
  uint32_t app_id; // [rsp+3Ch] [rbp-F4h]
  std::string inner_ip; // [rsp+40h] [rbp-F0h] BYREF
  common::milog::MiLogStream v20; // [rsp+60h] [rbp-D0h] BYREF
  char v21[176]; // [rsp+80h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 40 9 notify:87";
  *(_QWORD *)(v2 + 16) = GateserverSession::onAddGateserverNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  proto::AddGateserverNotify::AddGateserverNotify((proto::AddGateserverNotify *const)(v2 + 48));
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  if ( common::minet::Packet::getProto<proto::AddGateserverNotify>(v5, (proto::AddGateserverNotify *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/gateserver_session.cpp",
      "onAddGateserverNotify",
      90);
    common::milog::MiLogStream::operator()(&v20, "get packet failed");
    common::milog::MiLogStream::~MiLogStream(&v20);
    v6 = -1;
  }
  else
  {
    app_id = common::minet::AServerSession::getAppId(this);
    if ( app_id )
    {
      p_gateserver_mgr = &ServiceBox::findService<DispatchService>()->gateserver_mgr;
      v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      SenderLoad = common::minet::Packet::getSenderLoad(v8);
      v10 = proto::AddGateserverNotify::domain_name[abi:cxx11]((const proto::AddGateserverNotify *const)(v2 + 48));
      use_domain_name = proto::AddGateserverNotify::use_domain_name((const proto::AddGateserverNotify *const)(v2 + 48));
      listen_port = proto::AddGateserverNotify::listen_port((const proto::AddGateserverNotify *const)(v2 + 48));
      v11 = proto::AddGateserverNotify::outer_ip((const proto::AddGateserverNotify *const)(v2 + 48));
      common::tools::NetUtils::inetNtoa[abi:cxx11]((std::string *)&v20, v11);
      std::allocator<char>::allocator(&__a);
      ClientIp = common::minet::AServerSession::getClientIp(this);
      std::string::basic_string<std::allocator<char>>(&inner_ip, ClientIp, &__a);
      GateserverMgr::addGateserver(
        p_gateserver_mgr,
        app_id,
        &inner_ip,
        (const std::string *)&v20,
        listen_port,
        use_domain_name,
        v10,
        SenderLoad);
      std::string::~string(&inner_ip);
      std::allocator<char>::~allocator(&__a);
      std::string::~string(&v20);
      v6 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/network/gateserver_session.cpp",
        "onAddGateserverNotify",
        97);
      SessionId = common::minet::AServerSession::getSessionId(this);
      common::milog::MiLogStream::operator()(&v20, "getAppId is 0, session_id=%u", SessionId);
      common::milog::MiLogStream::~MiLogStream(&v20);
      v6 = -1;
    }
  }
  proto::AddGateserverNotify::~AddGateserverNotify((proto::AddGateserverNotify *const)(v2 + 48));
  result = v6;
  if ( v21 == (char *)v2 )
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
  return result;
};

// Line 108: range 000000000C6129D6-000000000C612AB9
int __cdecl GateserverSession::onGateserverKeepAlive(
        GateserverSession *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  uint32_t SessionId; // eax
  GateserverMgr *p_gateserver_mgr; // rbx
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  int SenderLoad; // eax
  uint32_t app_id; // [rsp+1Ch] [rbp-34h]
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-30h] BYREF

  app_id = common::minet::AServerSession::getAppId(this);
  if ( app_id )
  {
    p_gateserver_mgr = &ServiceBox::findService<DispatchService>()->gateserver_mgr;
    v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    SenderLoad = common::minet::Packet::getSenderLoad(v5);
    GateserverMgr::syncGateserverLoad(p_gateserver_mgr, app_id, SenderLoad);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/gateserver_session.cpp",
      "onGateserverKeepAlive",
      112);
    SessionId = common::minet::AServerSession::getSessionId(this);
    common::milog::MiLogStream::operator()(&v8, "getAppId is 0, session_id=%u", SessionId);
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
};
