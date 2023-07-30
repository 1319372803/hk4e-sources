// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/nodeserver/src/network/service_session.cpp

// Line 23: range 00000000038537B2-0000000003853A42
int32_t __cdecl ServiceSession::onRecv(
        ServiceSession *const this,
        char *data,
        uint32_t len,
        boost::asio::yield_context *p_yield)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int32_t v7; // r14d
  unsigned __int64 v8; // rax
  __int64 (__fastcall *v9)(ServiceSession *const, std::shared_ptr<common::minet::Packet> *, boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *); // r14
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
  *(_QWORD *)(v4 + 8) = "1 32 16 13 packet_ptr:25";
  *(_QWORD *)(v4 + 16) = ServiceSession::onRecv;
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
      "./src/network/service_session.cpp",
      "onRecv",
      28);
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
    v9 = *(__int64 (__fastcall **)(ServiceSession *const, std::shared_ptr<common::minet::Packet> *, boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *))v8;
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

// Line 36: range 0000000003853A44-0000000003853D4B
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl ServiceSession::onRecvPacket(
        ServiceSession *const this,
        common::minet::PacketPtr *p_packet_ptr,
        boost::asio::yield_context *p_yield)
{
  const std::shared_ptr<common::minet::Packet> *v3; // rsi
  int32_t v4; // ebx
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v5; // rsi
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint16_t CmdId; // ax
  const std::shared_ptr<common::minet::Packet> *v8; // rsi
  const std::shared_ptr<common::minet::Packet> *v9; // rsi
  bool v10; // bl
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v11; // rsi
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t SenderAppId; // eax
  const char *v14; // rax
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v15; // rsi
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  unsigned int v17; // ebx
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  uint32_t UserId; // eax
  common::minet::PacketPtr v20; // rdi
  std::shared_ptr<common::minet::Packet> p_; // [rsp+30h] [rbp-60h] BYREF
  common::milog::MiLogStream v23; // [rsp+40h] [rbp-50h] BYREF
  std::string v24; // [rsp+60h] [rbp-30h] BYREF

  if ( std::operator==<common::minet::Packet>(0LL, v3) )
    return -1;
  v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v5);
  CmdId = common::minet::Packet::getCmdId(v6);
  if ( CmdId && CmdId != 72 )
  {
    if ( CmdId == 10007 )
    {
      std::shared_ptr<common::minet::Packet>::shared_ptr(&p_, v9);
      v10 = ServiceSession::onRegisterServiceNotify(this, &p_) == 0;
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_);
      if ( v10 )
      {
        return ServiceSession::sendRegisterSuccNotify(this);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/network/service_session.cpp",
          "onRecvPacket",
          58);
        v12 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v11);
        SenderAppId = common::minet::Packet::getSenderAppId(v12);
        common::tools::AppIdUtils::getAppIdStr[abi:cxx11](&v24, SenderAppId);
        v14 = (const char *)std::string::c_str(&v24);
        common::milog::MiLogStream::operator()(&v23, "onRegisterServiceNotify fail send_app_id:%s", v14);
        std::string::~string(&v24);
        common::milog::MiLogStream::~MiLogStream(&v23);
        return -1;
      }
    }
    else
    {
      if ( !ServiceSession::isServiceRegistered(this) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/network/service_session.cpp",
          "onRecvPacket",
          66);
        v16 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v15);
        v17 = common::minet::Packet::getCmdId(v16);
        v18 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v15);
        UserId = common::minet::Packet::getUserId(v18);
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)&v24,
          "can not recv packet uid=%u, cmd_id=%u before register succ",
          UserId,
          v17);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v24);
      }
      else
      {
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          &p_,
          (const std::shared_ptr<common::minet::Packet> *)v20._M_refcount._M_pi);
        v20._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&p_;
        ServiceBox::pushPacketToService(v20);
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_);
      }
      return 0;
    }
  }
  else
  {
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_, v8);
    v4 = ServiceSession::onKeepAliveNotify(this, &p_);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_);
  }
  return v4;
};

// Line 77: range 0000000003853D4C-0000000003853DE5
int32_t __cdecl ServiceSession::onConnect(ServiceSession *const this, boost::asio::yield_context *p_)
{
  const char *ClientIp; // rax
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/network/service_session.cpp",
    "onConnect",
    78);
  ClientIp = common::minet::AServerSession::getClientIp(this);
  common::milog::MiLogStream::operator()(&v4, "recv connect from %s", ClientIp);
  common::milog::MiLogStream::~MiLogStream(&v4);
  return 0;
};

// Line 83: range 0000000003853DE6-0000000003854057
int32_t __cdecl ServiceSession::onDisconnect(ServiceSession *const this, boost::asio::yield_context *p_)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  _BOOL4 isServiceRegistered; // r14d
  const char *ClientIp; // rax
  std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  ServiceSessionMgr *ServiceSessionMgr; // r14
  uint32_t AppId; // eax
  int32_t result; // eax
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-90h] BYREF
  char v12[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 network_ptr:89";
  *(_QWORD *)(v2 + 16) = ServiceSession::onDisconnect;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/network/service_session.cpp",
    "onDisconnect",
    84);
  isServiceRegistered = ServiceSession::isServiceRegistered(this);
  ClientIp = common::minet::AServerSession::getClientIp(this);
  common::milog::MiLogStream::operator()(&v11, "disconnect to %s, is_registered %d", ClientIp, isServiceRegistered);
  common::milog::MiLogStream::~MiLogStream(&v11);
  if ( ServiceSession::isServiceRegistered(this) )
  {
    std::dynamic_pointer_cast<NetworkMgr,NetworkMgrBase>((const std::shared_ptr<NetworkMgrBase> *)(v2 + 32));
    if ( std::operator!=<NetworkMgr>(0LL, (const std::shared_ptr<NetworkMgr> *)(v2 + 32)) )
    {
      v7 = std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      ServiceSessionMgr = NetworkMgr::getServiceSessionMgr(v7);
      AppId = common::minet::AServerSession::getAppId(this);
      ServiceSessionMgr::delSession(ServiceSessionMgr, AppId);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/network/service_session.cpp",
        "onDisconnect",
        97);
      common::milog::MiLogStream::operator()(&v11, "fail to get network_mgr");
      common::milog::MiLogStream::~MiLogStream(&v11);
    }
    std::shared_ptr<NetworkMgr>::~shared_ptr((std::shared_ptr<NetworkMgr> *const)(v2 + 32));
  }
  result = 0;
  if ( v12 == (char *)v2 )
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

// Line 106: range 0000000003854058-000000000385406A
int32_t __cdecl ServiceSession::onKeepAliveNotify(ServiceSession *const this, common::minet::PacketPtr *p_)
{
  return 0;
};

// Line 112: range 000000000385406C-00000000038546EF
int32_t __cdecl ServiceSession::onRegisterServiceNotify(
        ServiceSession *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  int v6; // eax
  std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  ServiceSessionMgr *ServiceSessionMgr; // r14
  int32_t result; // eax
  std::vector<unsigned int>::value_type __x; // [rsp+10h] [rbp-F0h] BYREF
  int idx; // [rsp+14h] [rbp-ECh]
  const proto::RegisterServiceNotify *notify; // [rsp+18h] [rbp-E8h]
  std::enable_shared_from_this<common::minet::AServerSession> v13; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-D0h] BYREF
  char v15[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 14 notify_ptr:126 64 16 12 this_ptr:141 96 16 15 network_ptr:142";
  *(_QWORD *)(v2 + 16) = ServiceSession::onRegisterServiceNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  if ( ServiceSession::isServiceRegistered(this) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/service_session.cpp",
      "onRegisterServiceNotify",
      116);
    common::milog::MiLogStream::operator()(&v14, "can not re register, skip this call");
    common::milog::MiLogStream::~MiLogStream(&v14);
    v5 = 0;
  }
  else if ( std::operator==<common::minet::Packet>(0LL, p_packet_ptr) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/service_session.cpp",
      "onRegisterServiceNotify",
      123);
    common::milog::MiLogStream::operator()(&v14, "packet is null");
    common::milog::MiLogStream::~MiLogStream(&v14);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    common::minet::Packet::getConstProto<proto::RegisterServiceNotify>((common::minet::Packet *const)(v2 + 32));
    if ( std::operator==<proto::RegisterServiceNotify const>(
           (const std::shared_ptr<const proto::RegisterServiceNotify> *)(v2 + 32),
           0LL) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/network/service_session.cpp",
        "onRegisterServiceNotify",
        126);
      common::milog::MiLogStream::operator()(&v14, "get RegisterServiceNotify failed");
      common::milog::MiLogStream::~MiLogStream(&v14);
      v5 = -1;
    }
    else
    {
      notify = std::__shared_ptr_access<proto::RegisterServiceNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::RegisterServiceNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      std::vector<unsigned int>::clear(&this->service_type_vec_);
      for ( idx = 0; ; ++idx )
      {
        v6 = proto::RegisterServiceNotify::service_type_list_size(notify);
        if ( idx >= v6 )
          break;
        __x = proto::RegisterServiceNotify::service_type_list(notify, idx);
        std::vector<unsigned int>::push_back(&this->service_type_vec_, &__x);
      }
      if ( std::vector<unsigned int>::empty(&this->service_type_vec_) )
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/network/service_session.cpp",
          "onRegisterServiceNotify",
          136);
        common::milog::MiLogStream::operator()(&v14, "service_type_list is empty");
        common::milog::MiLogStream::~MiLogStream(&v14);
        v5 = -1;
      }
      else
      {
        std::enable_shared_from_this<common::minet::AServerSession>::shared_from_this(&v13);
        std::dynamic_pointer_cast<ServiceSession,common::minet::AServerSession>((const std::shared_ptr<common::minet::AServerSession> *)(v2 + 64));
        std::shared_ptr<common::minet::AServerSession>::~shared_ptr((std::shared_ptr<common::minet::AServerSession> *const)&v13);
        std::dynamic_pointer_cast<NetworkMgr,NetworkMgrBase>((const std::shared_ptr<NetworkMgrBase> *)(v2 + 96));
        if ( std::operator==<NetworkMgr>(0LL, (const std::shared_ptr<NetworkMgr> *)(v2 + 96)) )
        {
          common::milog::MiLogStream::create(
            &v14,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/network/service_session.cpp",
            "onRegisterServiceNotify",
            145);
          common::milog::MiLogStream::operator()(&v14, "get network ptr failed");
          common::milog::MiLogStream::~MiLogStream(&v14);
          v5 = -1;
        }
        else
        {
          v7 = std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          ServiceSessionMgr = NetworkMgr::getServiceSessionMgr(v7);
          std::shared_ptr<ServiceSession>::shared_ptr(
            (std::shared_ptr<ServiceSession> *const)&v13,
            (const std::shared_ptr<ServiceSession> *)(v2 + 64));
          LOBYTE(ServiceSessionMgr) = ServiceSessionMgr::addSession(
                                        ServiceSessionMgr,
                                        (std::shared_ptr<ServiceSession> *)&v13) != 0;
          std::shared_ptr<ServiceSession>::~shared_ptr((std::shared_ptr<ServiceSession> *const)&v13);
          if ( (_BYTE)ServiceSessionMgr )
          {
            common::milog::MiLogStream::create(
              &v14,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/network/service_session.cpp",
              "onRegisterServiceNotify",
              150);
            common::milog::MiLogStream::operator()(&v14, "add service session failed");
            common::milog::MiLogStream::~MiLogStream(&v14);
            v5 = -1;
          }
          else
          {
            if ( *(char *)(((unsigned __int64)&this->is_service_registered_ >> 3) + 0x7FFF8000) < 0 )
              __asan_report_store1(&this->is_service_registered_);
            this->is_service_registered_ = 1;
            v5 = 0;
          }
        }
        std::shared_ptr<NetworkMgr>::~shared_ptr((std::shared_ptr<NetworkMgr> *const)(v2 + 96));
        std::shared_ptr<ServiceSession>::~shared_ptr((std::shared_ptr<ServiceSession> *const)(v2 + 64));
      }
    }
    std::shared_ptr<proto::RegisterServiceNotify const>::~shared_ptr((std::shared_ptr<const proto::RegisterServiceNotify> *const)(v2 + 32));
  }
  result = v5;
  if ( v15 == (char *)v2 )
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

// Line 161: range 00000000038546F0-0000000003854A15
int32_t __cdecl ServiceSession::sendRegisterSuccNotify(ServiceSession *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t v4; // r14d
  unsigned __int64 v5; // rax
  unsigned int (__fastcall *v6)(ServiceSession *const, std::shared_ptr<common::minet::Packet> *); // r15
  bool v7; // r14
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> v9; // [rsp+10h] [rbp-E0h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-D0h] BYREF
  char v11[176]; // [rsp+40h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 14 packet_ptr:165 64 24 10 notify:163";
  *(_QWORD *)(v1 + 16) = ServiceSession::sendRegisterSuccNotify;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  proto::RegisterServiceSuccessNotify::RegisterServiceSuccessNotify((proto::RegisterServiceSuccessNotify *const)(v1 + 64));
  common::minet::PacketUtils::createPacket<proto::RegisterServiceSuccessNotify>((const proto::RegisterServiceSuccessNotify *)(v1 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/service_session.cpp",
      "sendRegisterSuccNotify",
      168);
    common::milog::MiLogStream::operator()(&v10, "create packet failed");
    common::milog::MiLogStream::~MiLogStream(&v10);
    v4 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v5 = (unsigned __int64)(this->_vptr_AServerSession + 10);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8(this->_vptr_AServerSession + 10);
    v6 = *(unsigned int (__fastcall **)(ServiceSession *const, std::shared_ptr<common::minet::Packet> *))v5;
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v9, (const std::shared_ptr<common::minet::Packet> *)(v1 + 32));
    v7 = v6(this, &v9) != 0;
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v9);
    if ( v7 )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/network/service_session.cpp",
        "sendRegisterSuccNotify",
        174);
      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v10, (const char (*)[17])"sendPacket fails");
      common::milog::MiLogStream::~MiLogStream(&v10);
      v4 = -1;
    }
    else
    {
      v4 = 0;
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v1 + 32));
  proto::RegisterServiceSuccessNotify::~RegisterServiceSuccessNotify((proto::RegisterServiceSuccessNotify *const)(v1 + 64));
  result = v4;
  if ( v11 == (char *)v1 )
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
  return result;
};
