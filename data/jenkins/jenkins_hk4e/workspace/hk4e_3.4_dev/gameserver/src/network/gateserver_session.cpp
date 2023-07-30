// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/network/gateserver_session.cpp

// Line 28: range 00000000175A374C-00000000175A39DC
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
  *(_QWORD *)(v4 + 8) = "1 32 16 13 packet_ptr:30";
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
      33);
    common::milog::MiLogStream::operator()(&v14, "create packet failed");
    common::milog::MiLogStream::~MiLogStream(&v14);
    v7 = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v8 = (unsigned __int64)(this->_vptr_AServerSession + 5);
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8();
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

// Line 41: range 00000000175A39DE-00000000175A3B3E
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl GateserverSession::onRecvPacket(
        GateserverSession *const this,
        common::minet::PacketPtr *p_packet_ptr,
        boost::asio::yield_context *p_yield)
{
  const std::shared_ptr<common::minet::Packet> *v3; // rsi
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v5; // rsi
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint16_t CmdId; // ax
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v8; // rsi
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  const std::shared_ptr<common::minet::Packet> *v11; // rsi
  common::minet::PacketPtr v12; // rdi
  common::minet::Packet *v13; // rax
  uint32_t cmd_id; // [rsp+28h] [rbp-28h]
  uint32_t now_ms; // [rsp+2Ch] [rbp-24h]
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-20h] BYREF

  if ( std::operator==<common::minet::Packet>(0LL, v3) )
    return -1;
  v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v5);
  CmdId = common::minet::Packet::getCmdId(v6);
  cmd_id = CmdId;
  if ( !CmdId || CmdId == 72 )
    return 0;
  v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v8);
  if ( common::minet::Packet::getEnetIsReliable(v9) || cmd_id != 290 )
  {
    std::shared_ptr<common::minet::Packet>::shared_ptr(&packet_ptr, v11);
    GateserverSession::printRecvPacketLog(this, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  now_ms = common::tools::TimeUtils::getNowMs();
  v13 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)v12._M_refcount._M_pi);
  common::minet::Packet::setExt(v13, 0x2712u, now_ms);
  std::shared_ptr<common::minet::Packet>::shared_ptr(
    &packet_ptr,
    (const std::shared_ptr<common::minet::Packet> *)v12._M_refcount._M_pi);
  v12._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&packet_ptr;
  ServiceBox::pushPacketToService(v12);
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  return 0;
};

// Line 77: range 00000000175A3B40-00000000175A40FF
int32_t __cdecl GateserverSession::sendPacket(GateserverSession *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::minet::Packet *v6; // rax
  common::minet::Packet *v7; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint64_t ClientSequenceId; // rax
  common::minet::Packet *v10; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint64_t SentMs; // rax
  common::minet::Packet *v13; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  uint32_t RpcId; // eax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::minet::Packet *v20; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  char v22; // r14
  common::minet::Packet *v23; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  common::minet::Packet *v25; // r14
  common::minet::Packet *v26; // rax
  uint32_t Ext; // eax
  common::minet::Packet *v28; // r14
  common::minet::Packet *v29; // rax
  uint32_t v30; // eax
  common::minet::Packet *v31; // rax
  common::minet::Packet *v32; // rax
  unsigned __int64 v33; // rdx
  bool v34; // r14
  common::milog::MiLogStream *v35; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  int32_t v40; // r14d
  int32_t result; // eax
  unsigned __int16 CmdId; // [rsp+12h] [rbp-AEh] BYREF
  unsigned int val; // [rsp+14h] [rbp-ACh] BYREF
  uint32_t cmd_id; // [rsp+18h] [rbp-A8h]
  uint32_t now_ms; // [rsp+1Ch] [rbp-A4h]
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  std::string p_span_context_str; // [rsp+30h] [rbp-90h] BYREF
  char v48[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 17 cur_packet_ptr:82";
  *(_QWORD *)(v2 + 16) = GateserverSession::sendPacket;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  cmd_id = common::minet::Packet::getCmdId(v5);
  v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::setEnetIsReliable(v6, 1u);
  CoroutineHelper::getContextPacketPtr();
  if ( std::operator!=<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    ClientSequenceId = common::minet::Packet::getClientSequenceId(v8);
    common::minet::Packet::setClientSequenceId(v7, ClientSequenceId);
    v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    SentMs = common::minet::Packet::getSentMs(v11);
    common::minet::Packet::setSentMs(v10, SentMs);
    v13 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    RpcId = common::minet::Packet::getRpcId(v14);
    common::minet::Packet::setRpcId(v13, RpcId);
    v16 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( !common::minet::Packet::getEnetIsReliable(v16) )
    {
      if ( (v17 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32)),
            common::minet::Packet::getCmdId(v17) == 290)
        && (cmd_id == 275 || cmd_id == 273)
        || (v18 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32)),
            common::minet::Packet::getCmdId(v18) == 279)
        && (cmd_id == 3387 || cmd_id == 255) )
      {
        v20 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
        common::minet::Packet::setEnetIsReliable(v20, 0);
      }
    }
    v21 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    common::minet::Packet::getSpanContextStr[abi:cxx11](&p_span_context_str, v21);
    v22 = std::string::empty(&p_span_context_str);
    std::string::~string(&p_span_context_str);
    if ( v22 )
    {
      v23 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      v24 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      common::minet::Packet::getSpanContextStr[abi:cxx11](&p_span_context_str, v24);
      common::minet::Packet::setSpanContextStr(v23, &p_span_context_str);
      std::string::~string(&p_span_context_str);
    }
    now_ms = common::tools::TimeUtils::getNowMs();
    v25 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    v26 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Ext = common::minet::Packet::getExt(v26, 0x2711u);
    common::minet::Packet::setExt(v25, 0x2711u, Ext);
    v28 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    v29 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v30 = common::minet::Packet::getExt(v29, 0x2712u);
    common::minet::Packet::setExt(v28, 0x2712u, v30);
    v31 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    common::minet::Packet::setExt(v31, 0x2713u, now_ms);
  }
  if ( ProtoUtils::isEnetReliable(cmd_id) )
  {
    v32 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    common::minet::Packet::setEnetIsReliable(v32, 1u);
    std::shared_ptr<common::minet::Packet>::shared_ptr(&packet_ptr, p_packet_ptr);
    GateserverSession::printSendPacketLog(this, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::shared_ptr(&packet_ptr, p_packet_ptr);
  v34 = common::minet::AServerSession::sendPacket(this, (common::minet::PacketPtr)__PAIR128__(v33, &packet_ptr)) != 0;
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  if ( v34 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&p_span_context_str,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/gateserver_session.cpp",
      "sendPacket",
      121);
    v35 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            (common::milog::MiLogStream *const)&p_span_context_str,
            (const char (*)[25])"sendPacket failed, uid: ");
    v36 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    val = common::minet::Packet::getUserId(v36);
    v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &val);
    v38 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v37, (const char (*)[9])" cmdid: ");
    v39 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    CmdId = common::minet::Packet::getCmdId(v39);
    common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(v38, &CmdId);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_span_context_str);
    v40 = -1;
  }
  else
  {
    v40 = 0;
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v40;
  if ( v48 == (char *)v2 )
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

// Line 129: range 00000000175A4100-00000000175A4518
int32_t __cdecl GateserverSession::printRecvPacketLog(
        GateserverSession *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool v7; // al
  bool v8; // r14
  common::minet::Packet *v9; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  GameserverService *v11; // r14
  std::shared_ptr<common::minet::Packet> *v12; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Bh] [rbp-D5h] BYREF
  uint32_t cmd_id; // [rsp+1Ch] [rbp-D4h]
  std::bitset<30000>::reference v16; // [rsp+20h] [rbp-D0h] BYREF
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-C0h] BYREF
  PacketLog packet_log; // [rsp+50h] [rbp-A0h] BYREF
  char v19[112]; // [rsp+80h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 19 copy_packet_ptr:143";
  *(_QWORD *)(v2 + 16) = GateserverSession::printRecvPacketLog;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( std::operator==<common::minet::Packet>(p_packet_ptr, 0LL) )
  {
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    cmd_id = common::minet::Packet::getCmdId(v6);
    v7 = !std::atomic<bool>::operator bool(&Config::is_high_freq_packet_log_open)
      && std::bitset<30000ul>::size(&Config::packet_log_black_bs) > cmd_id;
    if ( v7
      && (std::bitset<30000ul>::operator[]((std::bitset<30000> *const)&v16, (std::size_t)&Config::packet_log_black_bs),
          v8 = std::bitset<30000ul>::reference::operator bool(&v16),
          std::bitset<30000ul>::reference::~reference(&v16),
          v8) )
    {
      v5 = 0;
    }
    else
    {
      common::minet::PacketUtils::createPacket();
      if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v2 + 32), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/network/gateserver_session.cpp",
          "printRecvPacketLog",
          146);
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v17, (const char (*)[19])"createPacket fails");
        common::milog::MiLogStream::~MiLogStream(&v17);
        v5 = -1;
      }
      else
      {
        v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
        if ( common::minet::Packet::copyHeadAndStr(v9, v10) )
        {
          common::milog::MiLogStream::create(
            &v17,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/network/gateserver_session.cpp",
            "printRecvPacketLog",
            152);
          common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            &v17,
            (const char (*)[21])"copyHeadAndStr fails");
          common::milog::MiLogStream::~MiLogStream(&v17);
          v5 = -1;
        }
        else
        {
          v11 = ServiceBox::findService<GameserverService>();
          std::allocator<char>::allocator(&__a);
          std::string::basic_string<std::allocator<char>>((std::string *const)&v17, "RECV", &__a);
          v12 = std::move<std::shared_ptr<common::minet::Packet> &>((std::shared_ptr<common::minet::Packet> *)(v2 + 32));
          std::shared_ptr<common::minet::Packet>::shared_ptr((std::shared_ptr<common::minet::Packet> *const)&v16, v12);
          PacketLog::PacketLog(&packet_log, (common::minet::PacketPtr *)&v16, (std::string *)&v17);
          ServiceBase::pushPacketLog(v11, &packet_log);
          PacketLog::~PacketLog(&packet_log);
          std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&v16);
          std::string::~string(&v17);
          std::allocator<char>::~allocator(&__a);
          v5 = 0;
        }
      }
      std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
    }
  }
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 161: range 00000000175A451A-00000000175A46E8
int32_t __cdecl GateserverSession::printSendPacketLog(
        GateserverSession *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  bool v5; // bl
  GameserverService *v6; // rbx
  std::shared_ptr<common::minet::Packet> *v7; // rax
  std::allocator<char> __a; // [rsp+1Bh] [rbp-75h] BYREF
  uint32_t cmd_id; // [rsp+1Ch] [rbp-74h]
  std::bitset<30000>::reference v10; // [rsp+20h] [rbp-70h] BYREF
  std::string p_tag; // [rsp+30h] [rbp-60h] BYREF
  PacketLog packet_log; // [rsp+50h] [rbp-40h] BYREF

  if ( std::operator==<common::minet::Packet>(p_packet_ptr, 0LL) )
    return -1;
  v3 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  cmd_id = common::minet::Packet::getCmdId(v3);
  if ( !std::atomic<bool>::operator bool(&Config::is_high_freq_packet_log_open)
    && std::bitset<30000ul>::size(&Config::packet_log_black_bs) > cmd_id )
  {
    std::bitset<30000ul>::operator[]((std::bitset<30000> *const)&v10, (std::size_t)&Config::packet_log_black_bs);
    v5 = std::bitset<30000ul>::reference::operator bool(&v10);
    std::bitset<30000ul>::reference::~reference(&v10);
    if ( v5 )
      return 0;
  }
  v6 = ServiceBox::findService<GameserverService>();
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&p_tag, "SEND", &__a);
  v7 = std::move<std::shared_ptr<common::minet::Packet> &>(p_packet_ptr);
  std::shared_ptr<common::minet::Packet>::shared_ptr((std::shared_ptr<common::minet::Packet> *const)&v10, v7);
  PacketLog::PacketLog(&packet_log, (common::minet::PacketPtr *)&v10, &p_tag);
  ServiceBase::pushPacketLog(v6, &packet_log);
  PacketLog::~PacketLog(&packet_log);
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&v10);
  std::string::~string(&p_tag);
  std::allocator<char>::~allocator(&__a);
  return 0;
};

// Line 180: range 00000000175A46EA-00000000175A4791
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
    181);
  v2 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v5, (const char (*)[15])"connect from: ");
  val = (char *)common::minet::AServerSession::getClientIp(this);
  common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v2, (const char *const *)&val);
  common::milog::MiLogStream::~MiLogStream(&v5);
  return 0;
};

// Line 187: range 00000000175A4792-00000000175A4839
int32_t __cdecl GateserverSession::onDisconnect(GateserverSession *const this, boost::asio::yield_context *p_)
{
  common::milog::MiLogStream *v2; // rbx
  char *val; // [rsp+18h] [rbp-38h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/network/gateserver_session.cpp",
    "onDisconnect",
    188);
  v2 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v5, (const char (*)[20])"onDisconnect from: ");
  val = (char *)common::minet::AServerSession::getClientIp(this);
  common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v2, (const char *const *)&val);
  common::milog::MiLogStream::~MiLogStream(&v5);
  return 0;
};

// Line 194: range 00000000175A483A-00000000175A4ABA
int32_t __cdecl GateserverSession::keepAlive(GateserverSession *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  common::minet::Packet *v5; // r14
  GameserverApp *v6; // rax
  uint32_t AppId; // eax
  common::minet::Packet *v8; // r14
  GameserverService *v9; // rax
  uint32_t ServiceLoad; // eax
  unsigned __int64 v11; // rax
  void (__fastcall *v12)(GateserverSession *const, std::shared_ptr<common::minet::Packet> *); // r14
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> v14; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 packet_ptr:195";
  *(_QWORD *)(v1 + 16) = GateserverSession::keepAlive;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/gateserver_session.cpp",
      "keepAlive",
      198);
    common::milog::MiLogStream::operator()(&v15, "createPacket failed");
    common::milog::MiLogStream::~MiLogStream(&v15);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    v6 = Singleton<GameserverApp>::instance();
    AppId = AppBase::getAppId((AppBase *const)v6);
    common::minet::Packet::setSenderAppId(v5, AppId);
    v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    v9 = ServiceBox::findService<GameserverService>();
    ServiceLoad = GameserverService::getServiceLoad(v9);
    common::minet::Packet::setSenderLoad(v8, ServiceLoad);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v11 = (unsigned __int64)(this->_vptr_AServerSession + 10);
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8();
    v12 = *(void (__fastcall **)(GateserverSession *const, std::shared_ptr<common::minet::Packet> *))v11;
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v14, (const std::shared_ptr<common::minet::Packet> *)(v1 + 32));
    v12(this, &v14);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v14);
    v4 = 0;
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v1 + 32));
  result = v4;
  if ( v16 == (char *)v1 )
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
