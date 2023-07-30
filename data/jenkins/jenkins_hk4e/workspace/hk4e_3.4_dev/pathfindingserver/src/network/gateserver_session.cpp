// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/network/gateserver_session.cpp

// Line 24: range 000000000CB712A4-000000000CB71534
int32_t __cdecl GateserverSession::onRecv(
        GateserverSession *const this,
        char *data,
        uint32_t len,
        boost::asio::yield_context *p_yield)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  char *v7; // rsi
  int32_t v8; // r14d
  unsigned __int64 v9; // rax
  __int64 (__fastcall *v10)(GateserverSession *const, std::shared_ptr<common::minet::Packet> *, boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *); // r14
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> v14; // [rsp+20h] [rbp-D0h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-C0h] BYREF
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > v16; // [rsp+50h] [rbp-A0h] BYREF
  char v17[112]; // [rsp+80h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v17;
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
  common::minet::PacketUtils::createPacket(v4 + 32, data, len);
  v7 = (char *)(v4 + 32);
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v4 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/gateserver_session.cpp",
      "onRecv",
      29);
    common::milog::MiLogStream::operator()(&v15, "create packet failed");
    common::milog::MiLogStream::~MiLogStream(&v15);
    v8 = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this, v7);
    v9 = (unsigned __int64)(this->_vptr_AServerSession + 5);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8(this->_vptr_AServerSession + 5, v7);
    v10 = *(__int64 (__fastcall **)(GateserverSession *const, std::shared_ptr<common::minet::Packet> *, boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *))v9;
    boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
      &v16,
      p_yield);
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v14, (const std::shared_ptr<common::minet::Packet> *)(v4 + 32));
    v8 = v10(this, &v14, &v16);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v14);
    boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&v16);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 32));
  result = v8;
  if ( v17 == (char *)v4 )
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

// Line 37: range 000000000CB71536-000000000CB71633
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl GateserverSession::onRecvPacket(
        GateserverSession *const this,
        common::minet::PacketPtr *p_packet_ptr,
        boost::asio::yield_context *p_yield)
{
  const std::shared_ptr<common::minet::Packet> *v3; // rsi
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v5; // rsi
  common::minet::Packet *v6; // rbx
  uint64_t NowMs; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint16_t CmdId; // ax
  common::minet::PacketPtr v10; // rdi
  common::minet::Packet *v11; // rax
  uint32_t now_ms; // [rsp+2Ch] [rbp-24h]
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-20h] BYREF

  if ( std::operator==<common::minet::Packet>(0LL, v3) )
    return -1;
  v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v5);
  NowMs = common::tools::TimeUtils::getNowMs();
  common::minet::Packet::setRecvTimeMs(v6, NowMs);
  v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v5);
  CmdId = common::minet::Packet::getCmdId(v8);
  if ( !CmdId || CmdId == 72 )
    return 0;
  now_ms = common::tools::TimeUtils::getNowMs();
  v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v10._M_refcount._M_pi);
  common::minet::Packet::setExt(v11, 0x2712u, now_ms);
  std::shared_ptr<common::minet::Packet>::shared_ptr(
    &packet_ptr,
    (const std::shared_ptr<common::minet::Packet> *)v10._M_refcount._M_pi);
  v10._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&packet_ptr;
  ServiceBox::pushPacketToService(v10);
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  return 0;
};

// Line 62: range 000000000CB71634-000000000CB716DB
int32_t __cdecl GateserverSession::onConnect(GateserverSession *const this, boost::asio::yield_context *p_)
{
  common::milog::MiLogStream *v2; // rbx
  char *val; // [rsp+18h] [rbp-38h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/network/gateserver_session.cpp",
    "onConnect",
    63);
  v2 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v5, (const char (*)[15])"connect from: ");
  val = (char *)common::minet::AServerSession::getClientIp(this);
  common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v2, (const char *const *)&val);
  common::milog::MiLogStream::~MiLogStream(&v5);
  return 0;
};

// Line 69: range 000000000CB716DC-000000000CB71783
int32_t __cdecl GateserverSession::onDisconnect(GateserverSession *const this, boost::asio::yield_context *p_)
{
  common::milog::MiLogStream *v2; // rbx
  char *val; // [rsp+18h] [rbp-38h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/network/gateserver_session.cpp",
    "onDisconnect",
    70);
  v2 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v5, (const char (*)[20])"onDisconnect from: ");
  val = (char *)common::minet::AServerSession::getClientIp(this);
  common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v2, (const char *const *)&val);
  common::milog::MiLogStream::~MiLogStream(&v5);
  return 0;
};

// Line 76: range 000000000CB71784-000000000CB71A5C
int32_t __cdecl GateserverSession::sendPacket(GateserverSession *const this, common::minet::PacketPtr *p_packet_ptr)
{
  std::shared_ptr<common::minet::Packet> *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  const std::shared_ptr<common::minet::Packet> *v5; // rax
  common::minet::Packet *v6; // r14
  common::minet::Packet *v7; // rax
  uint32_t Ext; // eax
  common::minet::Packet *v9; // r14
  common::minet::Packet *v10; // rax
  uint32_t v11; // eax
  common::minet::Packet *v12; // rax
  unsigned __int64 v13; // rdx
  bool v14; // r14
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  int32_t v17; // r14d
  int32_t result; // eax
  unsigned int val; // [rsp+18h] [rbp-A8h] BYREF
  uint32_t now_ms; // [rsp+1Ch] [rbp-A4h]
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v22; // [rsp+30h] [rbp-90h] BYREF
  char v23[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (std::shared_ptr<common::minet::Packet> *)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (std::shared_ptr<common::minet::Packet> *)v3;
  }
  v2->_M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v2->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 17 cur_packet_ptr:78";
  v2[1]._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)GateserverSession::sendPacket;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  v5 = (const std::shared_ptr<common::minet::Packet> *)ZTWN11ThreadLocal14cur_packet_ptrE();
  std::shared_ptr<common::minet::Packet>::shared_ptr(v2 + 2, v5);
  if ( std::operator!=<common::minet::Packet>(v2 + 2, 0LL) )
  {
    now_ms = common::tools::TimeUtils::getNowMs();
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v2[2]);
    Ext = common::minet::Packet::getExt(v7, 0x2711u);
    common::minet::Packet::setExt(v6, 0x2711u, Ext);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v2[2]);
    v11 = common::minet::Packet::getExt(v10, 0x2712u);
    common::minet::Packet::setExt(v9, 0x2712u, v11);
    v12 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    common::minet::Packet::setExt(v12, 0x2713u, now_ms);
  }
  std::shared_ptr<common::minet::Packet>::shared_ptr(&packet_ptr, p_packet_ptr);
  v14 = (unsigned int)common::minet::AServerSession::sendPacket(
                        this,
                        (common::minet::PacketPtr)__PAIR128__(v13, &packet_ptr)) != 0;
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  if ( v14 )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/gateserver_session.cpp",
      "sendPacket",
      88);
    v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            &v22,
            (const char (*)[25])"sendPacket failed, uid: ");
    v16 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    val = common::minet::Packet::getUserId(v16);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
    common::milog::MiLogStream::~MiLogStream(&v22);
    v17 = -1;
  }
  else
  {
    v17 = 0;
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr(v2 + 2);
  result = v17;
  if ( v23 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v2->_M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
