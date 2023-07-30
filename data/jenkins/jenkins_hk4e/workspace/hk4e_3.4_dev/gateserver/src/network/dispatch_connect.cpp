// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gateserver/src/network/dispatch_connect.cpp

// Line 22: range 000000000C74C1CA-000000000C74C852
int32_t __cdecl DispatchConnect::onConnect(DispatchConnect *const this, boost::asio::yield_context *p_yield)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  int32_t v6; // r14d
  GateserverApp *v7; // r14
  GateserverApp *v8; // rax
  uint32_t HostId; // eax
  common::milog::MiLogStream *v10; // r14
  GateserverApp *v11; // rax
  ServerConfig *v12; // rdx
  uint32_t *p_outer_ip; // rax
  ServerConfig *v14; // rax
  ServerConfig *v15; // rax
  std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t PlayerListenPort; // eax
  common::minet::Packet *v18; // r14
  GateserverService *v19; // rax
  uint32_t ServiceLoad; // eax
  unsigned __int64 v21; // rax
  void (__fastcall *v22)(DispatchConnect *const, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-1D4h] BYREF
  std::shared_ptr<common::minet::Packet> v25; // [rsp+30h] [rbp-1D0h] BYREF
  common::milog::MiLogStream v26; // [rsp+40h] [rbp-1C0h] BYREF
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > v27; // [rsp+60h] [rbp-1A0h] BYREF
  char v28[368]; // [rsp+90h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 16 18 network_mgr_ptr:40 80 16 13 packet_ptr:47 112 40 9 notify:30 192 96 20 server_config_opt:31";
  *(_QWORD *)(v2 + 16) = DispatchConnect::onConnect;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862729] = -202116109;
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
    &v27,
    p_yield);
  v5 = (unsigned int)common::minet::AClientConnect::onConnect(this, &v27) != 0;
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&v27);
  if ( v5 )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/dispatch_connect.cpp",
      "onConnect",
      25);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v26,
      (const char (*)[32])"AClientConnect onConnect failed");
    common::milog::MiLogStream::~MiLogStream(&v26);
    v6 = -1;
  }
  else
  {
    proto::AddGateserverNotify::AddGateserverNotify((proto::AddGateserverNotify *const)(v2 + 112));
    v7 = Singleton<GateserverApp>::instance();
    v8 = Singleton<GateserverApp>::instance();
    HostId = AppBase::getHostId((AppBase *const)v8);
    AppBase::findServerConfig((std::optional<ServerConfig> *)(v2 + 192), (AppBase *const)v7, HostId);
    if ( !std::optional<ServerConfig>::has_value((const std::optional<ServerConfig> *const)(v2 + 192)) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/network/dispatch_connect.cpp",
        "onConnect",
        34);
      v10 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              &v26,
              (const char (*)[37])"cannot find server_config , host_id:");
      v11 = Singleton<GateserverApp>::instance();
      val = AppBase::getHostId((AppBase *const)v11);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v26);
      v6 = -1;
    }
    else
    {
      v12 = std::optional<ServerConfig>::operator->((std::optional<ServerConfig> *const)(v2 + 192));
      p_outer_ip = &v12->outer_ip;
      if ( *(_BYTE *)(((unsigned __int64)p_outer_ip >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_outer_ip & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_outer_ip >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_outer_ip);
      }
      proto::AddGateserverNotify::set_outer_ip((proto::AddGateserverNotify *const)(v2 + 112), v12->outer_ip);
      v14 = std::optional<ServerConfig>::operator->((std::optional<ServerConfig> *const)(v2 + 192));
      if ( *(char *)(((unsigned __int64)&v14->use_domain_name >> 3) + 0x7FFF8000) < 0 )
        v14 = (ServerConfig *)__asan_report_load1(&v14->use_domain_name);
      proto::AddGateserverNotify::set_use_domain_name(
        (proto::AddGateserverNotify *const)(v2 + 112),
        v14->use_domain_name);
      v15 = std::optional<ServerConfig>::operator->((std::optional<ServerConfig> *const)(v2 + 192));
      proto::AddGateserverNotify::set_domain_name((proto::AddGateserverNotify *const)(v2 + 112), &v15->domain_name);
      std::dynamic_pointer_cast<NetworkMgr,NetworkMgrBase>((const std::shared_ptr<NetworkMgrBase> *)(v2 + 48));
      if ( std::operator!=<NetworkMgr>(0LL, (const std::shared_ptr<NetworkMgr> *)(v2 + 48)) )
      {
        v16 = std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        PlayerListenPort = NetworkMgr::getPlayerListenPort(v16);
        proto::AddGateserverNotify::set_listen_port((proto::AddGateserverNotify *const)(v2 + 112), PlayerListenPort);
      }
      common::minet::PacketUtils::createPacket<proto::AddGateserverNotify>((const proto::AddGateserverNotify *)(v2 + 80));
      if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 80)) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/network/dispatch_connect.cpp",
          "onConnect",
          50);
        common::milog::MiLogStream::operator()(&v26, "create packet failed");
        common::milog::MiLogStream::~MiLogStream(&v26);
        v6 = -1;
      }
      else
      {
        v18 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        v19 = ServiceBox::findService<GateserverService>();
        ServiceLoad = GateserverService::getServiceLoad(v19);
        common::minet::Packet::setSenderLoad(v18, ServiceLoad);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v21 = (unsigned __int64)(this->_vptr_AClientConnect + 12);
        if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
          __asan_report_load8(this->_vptr_AClientConnect + 12);
        v22 = *(void (__fastcall **)(DispatchConnect *const, std::shared_ptr<common::minet::Packet> *))v21;
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          &v25,
          (const std::shared_ptr<common::minet::Packet> *)(v2 + 80));
        v22(this, &v25);
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&v25);
        v6 = 0;
      }
      std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 80));
      std::shared_ptr<NetworkMgr>::~shared_ptr((std::shared_ptr<NetworkMgr> *const)(v2 + 48));
    }
    std::optional<ServerConfig>::~optional((std::optional<ServerConfig> *const)(v2 + 192));
    proto::AddGateserverNotify::~AddGateserverNotify((proto::AddGateserverNotify *const)(v2 + 112));
  }
  result = v6;
  if ( v28 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 60: range 000000000C74C854-000000000C74CA7D
int32_t __cdecl DispatchConnect::onRecv(
        DispatchConnect *const this,
        char *data,
        uint32_t len,
        boost::asio::yield_context *p_)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint16_t CmdId; // ax
  common::minet::PacketPtr v9; // rdi
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-90h] BYREF
  char v14[112]; // [rsp+60h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 13 packet_ptr:61";
  *(_QWORD *)(v4 + 16) = DispatchConnect::onRecv;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket(v4 + 32, data, len);
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/dispatch_connect.cpp",
      "onRecv",
      64);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v13, (const char (*)[19])"createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  else
  {
    v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    CmdId = common::minet::Packet::getCmdId(v7);
    if ( CmdId && CmdId != 72 )
    {
      v9._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(v4 + 32);
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &packet_ptr,
        (const std::shared_ptr<common::minet::Packet> *)(v4 + 32));
      v9._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&packet_ptr;
      ServiceBox::pushPacketToService(v9);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 32));
  result = 0;
  if ( v14 == (char *)v4 )
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

// Line 81: range 000000000C74CA7E-000000000C74CD0F
int32_t __cdecl DispatchConnect::onKeepAlive(DispatchConnect *const this, boost::asio::yield_context *p_yield)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  common::minet::Packet *v6; // r14
  uint32_t SelfAppId; // eax
  common::minet::Packet *v8; // r14
  GateserverService *v9; // rax
  uint32_t ServiceLoad; // eax
  unsigned __int64 v11; // rax
  void (__fastcall *v12)(DispatchConnect *const, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> v14; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-90h] BYREF
  char v16[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 packet_ptr:82";
  *(_QWORD *)(v2 + 16) = DispatchConnect::onKeepAlive;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/dispatch_connect.cpp",
      "onKeepAlive",
      85);
    common::milog::MiLogStream::operator()(&v15, "create packet failed");
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    SelfAppId = common::minet::AClientConnect::getSelfAppId(this);
    common::minet::Packet::setSenderAppId(v6, SelfAppId);
    v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v9 = ServiceBox::findService<GateserverService>();
    ServiceLoad = GateserverService::getServiceLoad(v9);
    common::minet::Packet::setSenderLoad(v8, ServiceLoad);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v11 = (unsigned __int64)(this->_vptr_AClientConnect + 12);
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      __asan_report_load8(this->_vptr_AClientConnect + 12);
    v12 = *(void (__fastcall **)(DispatchConnect *const, std::shared_ptr<common::minet::Packet> *))v11;
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v14, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v12(this, &v14);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v14);
    v5 = 0;
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v16 == (char *)v2 )
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
