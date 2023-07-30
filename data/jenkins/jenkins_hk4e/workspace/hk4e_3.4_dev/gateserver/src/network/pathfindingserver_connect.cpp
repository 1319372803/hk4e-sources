// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gateserver/src/network/pathfindingserver_connect.cpp

// Line 20: range 000000000C751D3A-000000000C752255
int32_t __cdecl PathfindingserverConnect::onRecv(
        PathfindingserverConnect *const this,
        char *data,
        uint32_t len,
        boost::asio::yield_context *p_yield)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::minet::Packet *v8; // rax
  common::minet::Packet *v9; // rax
  common::minet::Packet *v10; // rax
  common::minet::Packet *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint16_t CmdId; // ax
  const std::string *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::minet::PacketPtr v32; // rdi
  int32_t result; // eax
  unsigned __int16 val; // [rsp+22h] [rbp-12Eh] BYREF
  unsigned int UserId; // [rsp+24h] [rbp-12Ch] BYREF
  uint32_t cmd_id; // [rsp+28h] [rbp-128h]
  uint32_t now_ts_ms; // [rsp+2Ch] [rbp-124h]
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-120h] BYREF
  common::milog::MiLogStream v40; // [rsp+40h] [rbp-110h] BYREF
  char v41[240]; // [rsp+60h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 15 gate_recv_ms:34 64 8 15 game_recv_ms:36 96 8 15 game_send_ms:37 128 8 9 now_ms:38 160 "
                        "16 13 packet_ptr:21";
  *(_QWORD *)(v4 + 16) = PathfindingserverConnect::onRecv;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -202178560;
  common::minet::PacketUtils::createPacket(v4 + 160, data, len);
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 160), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/pathfindingserver_connect.cpp",
      "onRecv",
      24);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v40, (const char (*)[19])"createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v40);
  }
  else
  {
    v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
    cmd_id = common::minet::Packet::getCmdId(v7);
    v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
    if ( common::minet::Packet::getExt(v8, 0x2711u) )
    {
      now_ts_ms = common::tools::TimeUtils::getNowMs();
      v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
      *(_DWORD *)(v4 + 48) = common::minet::Packet::getExt(v9, 0x2711u);
      v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
      *(_QWORD *)(v4 + 64) = common::minet::Packet::getExt(v10, 0x2712u) - (unsigned __int64)*(unsigned int *)(v4 + 48);
      v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
      *(_QWORD *)(v4 + 96) = common::minet::Packet::getExt(v11, 0x2713u) - (unsigned __int64)*(unsigned int *)(v4 + 48);
      *(_QWORD *)(v4 + 128) = now_ts_ms - *(_DWORD *)(v4 + 48);
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/network/pathfindingserver_connect.cpp",
        "onRecv",
        39);
      v12 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v40,
              (const char (*)[27])"[PACKET TIMESTAMP] cmd_id:");
      v13 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
      val = common::minet::Packet::getCmdId(v13);
      v14 = common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(v12, &val);
      v15 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v14, (const char (*)[12])", cmd_name:");
      v16 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
      CmdId = common::minet::Packet::getCmdId(v16);
      v18 = ProtoUtils::getCmdName[abi:cxx11](CmdId);
      v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, v18);
      v20 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v19, (const char (*)[7])", uid:");
      v21 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
      UserId = common::minet::Packet::getUserId(v21);
      v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &UserId);
      v23 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v22, (const char (*)[17])", timestamp(ms):");
      v24 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v23, (const char (*)[3])"0(");
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v4 + 48));
      v26 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v25, (const char (*)[3])")-");
      v27 = common::milog::MiLogStream::operator<<<long,(long *)0>(v26, (const __int64 *)(v4 + 64));
      v28 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v27, (const char (*)[2])"-");
      v29 = common::milog::MiLogStream::operator<<<long,(long *)0>(v28, (const __int64 *)(v4 + 96));
      v30 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v29, (const char (*)[2])"-");
      v31 = common::milog::MiLogStream::operator<<<long,(long *)0>(v30, (const __int64 *)(v4 + 128));
      common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
        v31,
        (const char (*)[50])" gate(recv) - path(recv) - path(send) - now(gate)");
      common::milog::MiLogStream::~MiLogStream(&v40);
    }
    if ( cmd_id && cmd_id != 72 )
    {
      v32._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(v4 + 160);
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &packet_ptr,
        (const std::shared_ptr<common::minet::Packet> *)(v4 + 160));
      v32._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&packet_ptr;
      ServiceBox::pushPacketToService(v32);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 160));
  result = 0;
  if ( v41 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
