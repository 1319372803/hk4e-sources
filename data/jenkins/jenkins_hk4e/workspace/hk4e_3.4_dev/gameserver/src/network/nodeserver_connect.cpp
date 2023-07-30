// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/network/nodeserver_connect.cpp

// Line 22: range 00000000175A6BE0-00000000175A6E6B
int32_t __cdecl NodeserverConnect::onRegisterSucc(NodeserverConnect *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  proto::NodeserverConnectedAndRegisteredNotify *v4; // r14
  uint32_t TargetAppId; // eax
  GameserverService *v6; // r14
  int32_t result; // eax
  std::shared_ptr<proto::NodeserverConnectedAndRegisteredNotify> p_proto_ptr; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-90h] BYREF
  char v10[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 notify_ptr:30";
  *(_QWORD *)(v1 + 16) = NodeserverConnect::onRegisterSucc;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( !std::atomic<bool>::operator bool(&this->is_start_func_finish_) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/nodeserver_connect.cpp",
      "onRegisterSucc",
      25);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v9, (const char (*)[23])"register succ in start");
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/nodeserver_connect.cpp",
      "onRegisterSucc",
      29);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v9,
      (const char (*)[36])"NodeserverConnect onRegisterSucc...");
    common::milog::MiLogStream::~MiLogStream(&v9);
    common::tools::perf::make_shared<proto::NodeserverConnectedAndRegisteredNotify>();
    v4 = std::__shared_ptr_access<proto::NodeserverConnectedAndRegisteredNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::NodeserverConnectedAndRegisteredNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    TargetAppId = common::minet::AClientConnect::getTargetAppId(this);
    proto::NodeserverConnectedAndRegisteredNotify::set_nodeserver_id(v4, TargetAppId);
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::NodeserverConnectedAndRegisteredNotify>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::NodeserverConnectedAndRegisteredNotify> *)(v1 + 32));
    GameserverService::broadcastToAllThread<proto::NodeserverConnectedAndRegisteredNotify>(v6, &p_proto_ptr);
    std::shared_ptr<proto::NodeserverConnectedAndRegisteredNotify>::~shared_ptr(&p_proto_ptr);
    std::shared_ptr<proto::NodeserverConnectedAndRegisteredNotify>::~shared_ptr((std::shared_ptr<proto::NodeserverConnectedAndRegisteredNotify> *const)(v1 + 32));
  }
  result = 0;
  if ( v10 == (char *)v1 )
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

// Line 38: range 00000000175A6E6C-00000000175A736A
int32_t __cdecl NodeserverConnect::onRecv(
        NodeserverConnect *const this,
        char *data,
        uint32_t len,
        boost::asio::yield_context *p_)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int v7; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  unsigned __int64 v9; // rax
  common::minet::Packet *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  const std::string *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::minet::PacketPtr v24; // rdi
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-10Ch] BYREF
  int ret; // [rsp+28h] [rbp-108h]
  uint32_t now_ms; // [rsp+2Ch] [rbp-104h]
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v31; // [rsp+40h] [rbp-F0h] BYREF
  char v32[208]; // [rsp+60h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 9 cmd_id:45 64 8 15 game_send_ms:69 96 8 14 now_cost_ms:73 128 16 13 packet_ptr:39";
  *(_QWORD *)(v4 + 16) = NodeserverConnect::onRecv;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -202178560;
  common::minet::PacketUtils::createPacket(data, len);
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 128), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/nodeserver_connect.cpp",
      "onRecv",
      42);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v31, (const char (*)[19])"createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v31);
    v7 = 0;
  }
  else
  {
    v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
    *(_DWORD *)(v4 + 48) = common::minet::Packet::getCmdId(v8);
    if ( *(_DWORD *)(v4 + 48) )
    {
      if ( *(_DWORD *)(v4 + 48) == 10099 && !std::atomic<bool>::operator bool(&this->is_register_succ_) )
      {
        std::atomic<bool>::operator=(&this->is_register_succ_, 1);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v9 = (unsigned __int64)(this->_vptr_AClientConnect + 13);
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
          v9 = __asan_report_load8();
        v7 = (*(__int64 (__fastcall **)(NodeserverConnect *const))v9)(this);
      }
      else if ( *(_DWORD *)(v4 + 48) == 10275
             && (ret = NodeserverConnect::interceptQueryPlayerMemDataByMuipReq(
                         this,
                         (common::minet::PacketPtr *)(v4 + 128))) != 0 )
      {
        v7 = ret;
      }
      else
      {
        v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        *(_QWORD *)(v4 + 64) = common::minet::Packet::getExt(v10, 0x2713u);
        if ( *(_QWORD *)(v4 + 64) )
        {
          now_ms = common::tools::TimeUtils::getNowMs();
          *(_QWORD *)(v4 + 96) = now_ms - *(_QWORD *)(v4 + 64);
          common::milog::MiLogStream::create(
            &v31,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/network/nodeserver_connect.cpp",
            "onRecv",
            74);
          v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  &v31,
                  (const char (*)[27])"[PACKET TIMESTAMP] cmd_id:");
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v11,
                  (const unsigned int *)(v4 + 48));
          v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])", cmd_name:");
          v14 = ProtoUtils::getCmdName[abi:cxx11](*(_DWORD *)(v4 + 48));
          v15 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, v14);
          v16 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])", uid:");
          v17 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
          val = common::minet::Packet::getUserId(v17);
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
          v19 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                  v18,
                  (const char (*)[17])", timestamp(ms):");
          v20 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v19, (const char (*)[3])"0(");
          v21 = common::milog::MiLogStream::operator<<<long,(long *)0>(v20, (const __int64 *)(v4 + 64));
          v22 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v21, (const char (*)[3])")-");
          v23 = common::milog::MiLogStream::operator<<<long,(long *)0>(v22, (const __int64 *)(v4 + 96));
          common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            v23,
            (const char (*)[29])" game(send) - now(game recv)");
          common::milog::MiLogStream::~MiLogStream(&v31);
        }
        v24._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(v4 + 128);
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          &packet_ptr,
          (const std::shared_ptr<common::minet::Packet> *)(v4 + 128));
        v24._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&packet_ptr;
        ServiceBox::pushPacketToService(v24);
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
        v7 = 0;
      }
    }
    else
    {
      v7 = 0;
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 128));
  result = v7;
  if ( v32 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 88: range 00000000175A736C-00000000175A75A7
int32_t __cdecl NodeserverConnect::interceptQueryPlayerMemDataByMuipReq(
        NodeserverConnect *const this,
        common::minet::PacketPtr *packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  GameserverService *v5; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t UserId; // eax
  GameserverService *v8; // rax
  std::__shared_ptr_access<proto::QueryPlayerMemDataByMuipRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  GameserverService *v10; // r14
  int32_t v11; // r14d
  int32_t result; // eax
  int32_t ret; // [rsp+18h] [rbp-98h]
  int thread_index; // [rsp+1Ch] [rbp-94h]
  std::shared_ptr<proto::QueryPlayerMemDataByMuipRsp> p_rsp_ptr; // [rsp+20h] [rbp-90h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+30h] [rbp-80h] BYREF
  char v17[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 11 rsp_ptr:109";
  *(_QWORD *)(v2 + 16) = NodeserverConnect::interceptQueryPlayerMemDataByMuipReq;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  ret = 0;
  v5 = ServiceBox::findService<GameserverService>();
  v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
  UserId = common::minet::Packet::getUserId(v6);
  thread_index = GameserverService::findPlayerThreadIndex(v5, UserId);
  if ( thread_index >= 0 )
  {
    v8 = ServiceBox::findService<GameserverService>();
    if ( ServiceBase::getWorkThreadQueueSize(v8, thread_index) > 0x7D0 )
      ret = 6;
  }
  else
  {
    ret = 140;
  }
  if ( ret )
  {
    common::tools::perf::make_shared<proto::QueryPlayerMemDataByMuipRsp>();
    v9 = std::__shared_ptr_access<proto::QueryPlayerMemDataByMuipRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::QueryPlayerMemDataByMuipRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    proto::QueryPlayerMemDataByMuipRsp::set_retcode(v9, ret);
    v10 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, packet_ptr);
    std::shared_ptr<proto::QueryPlayerMemDataByMuipRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::QueryPlayerMemDataByMuipRsp> *)(v2 + 32));
    v11 = ServiceBase::sendRsp<proto::QueryPlayerMemDataByMuipRsp>(v10, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::QueryPlayerMemDataByMuipRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    std::shared_ptr<proto::QueryPlayerMemDataByMuipRsp>::~shared_ptr((std::shared_ptr<proto::QueryPlayerMemDataByMuipRsp> *const)(v2 + 32));
  }
  else
  {
    v11 = 0;
  }
  result = v11;
  if ( v17 == (char *)v2 )
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

// Line 118: range 00000000175A75A8-00000000175A76C4
int32_t __cdecl NodeserverConnect::sendPacket(NodeserverConnect *const this, common::minet::PacketPtr *p_packet_ptr)
{
  int32_t v2; // ebx
  common::minet::Packet *v3; // rax
  unsigned __int64 v4; // rdx
  uint32_t now_ms; // [rsp+1Ch] [rbp-44h]
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  if ( std::operator==<common::minet::Packet>(0LL, p_packet_ptr) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/nodeserver_connect.cpp",
      "sendPacket",
      121);
    common::milog::MiLogStream::operator()(&v8, "packet is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
  else
  {
    now_ms = common::tools::TimeUtils::getNowMs();
    v3 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    common::minet::Packet::setExt(v3, 0x2713u, now_ms);
    std::shared_ptr<common::minet::Packet>::shared_ptr(&packet_ptr, p_packet_ptr);
    v2 = common::minet::AClientConnect::sendPacket(this, (common::minet::PacketPtr)__PAIR128__(v4, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  return v2;
};
