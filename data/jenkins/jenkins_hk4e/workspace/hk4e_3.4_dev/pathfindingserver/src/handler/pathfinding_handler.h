// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/handler/pathfinding_handler.h

// Line 25: range 000000000D0A6ADC-000000000D0A6B29
void __cdecl PathfindingHandler::PathfindingHandler(PathfindingHandler *const this)
{
  int (**v1)(...); // rdx

  HandlerBase::HandlerBase(this);
  v1 = (int (**)(...))(&`vtable for'PathfindingHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_HandlerBase = v1;
};

// Line 25: range 000000000D0C2F24-000000000D0C2F71
void __cdecl PathfindingHandler::~PathfindingHandler(PathfindingHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'PathfindingHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_HandlerBase = v1;
  HandlerBase::~HandlerBase(this);
};

// Line 25: range 000000000D0C2F72-000000000D0C2F9C
void __cdecl PathfindingHandler::~PathfindingHandler(PathfindingHandler *const this)
{
  PathfindingHandler::~PathfindingHandler(this);
  operator delete(this, 8uLL);
};

// Line 52: range 000000000CDAE324-000000000CDAE7C0
int32_t __cdecl PathfindingHandler::sendRspPacket<proto::PathfindingEnterSceneRsp>(
        PathfindingHandler *const this,
        common::minet::PacketPtr *p_packet_ptr,
        proto::PathfindingEnterSceneRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t v6; // r14d
  common::minet::Packet *v7; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  const proto::PacketHead *Head; // rax
  common::milog::MiLogStream *v10; // rax
  common::minet::Packet *v11; // rax
  common::minet::Packet *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  unsigned __int64 v15; // rax
  __int64 (__fastcall *v16)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  int32_t result; // eax
  unsigned __int16 val; // [rsp+2Eh] [rbp-C2h] BYREF
  std::shared_ptr<common::minet::Packet> v23; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v24; // [rsp+40h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 error_code:60 64 16 17 rsp_packet_ptr:54";
  *(_QWORD *)(v3 + 16) = PathfindingHandler::sendRspPacket<proto::PathfindingEnterSceneRsp>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  common::minet::PacketUtils::createPacket<proto::PathfindingEnterSceneRsp>((const proto::PathfindingEnterSceneRsp *)(v3 + 64));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/pathfinding_handler.h",
      "sendRspPacket",
      57);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v24, (const char (*)[22])"create packet failed!");
    common::milog::MiLogStream::~MiLogStream(&v24);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    Head = common::minet::Packet::getHead(v8);
    *(_DWORD *)(v3 + 48) = common::minet::Packet::copyHead(v7, Head);
    if ( *(_DWORD *)(v3 + 48) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/pathfinding_handler.h",
        "sendRspPacket",
        63);
      v10 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v24,
              (const char (*)[28])"copyHead fails! error code:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v24);
      v6 = *(_DWORD *)(v3 + 48);
    }
    else
    {
      v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      common::minet::Packet::setSourceService(v11, 0xEu);
      v12 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      common::minet::Packet::setTargetService(v12, 2u);
      v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
      v14 = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v13, 2LL);
      v15 = (unsigned __int64)(v14->_vptr_NetworkMgrBase + 8);
      if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        v15 = __asan_report_load8(v14->_vptr_NetworkMgrBase + 8, 2LL);
      v16 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v15;
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &v23,
        (const std::shared_ptr<common::minet::Packet> *)(v3 + 64));
      *(_DWORD *)(v3 + 48) = v16(v14, &v23);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&v23);
      if ( *(_DWORD *)(v3 + 48) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/pathfinding_handler.h",
          "sendRspPacket",
          73);
        v17 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                &v24,
                (const char (*)[47])"sendRspPacketToGateService failed: error code:");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v17, (const int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v24);
        v6 = *(_DWORD *)(v3 + 48);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/pathfinding_handler.h",
          "sendRspPacket",
          76);
        v18 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v24,
                (const char (*)[25])"send rsp packet cmdid = ");
        v19 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        val = common::minet::Packet::getCmdId(v19);
        common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(v18, &val);
        common::milog::MiLogStream::~MiLogStream(&v24);
        v6 = proto::PathfindingEnterSceneRsp::retcode(rsp_0);
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v3 + 64));
  result = v6;
  if ( v25 == (char *)v3 )
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
  return result;
};

// Line 52: range 000000000CDAD9C8-000000000CDADE64
int32_t __cdecl PathfindingHandler::sendRspPacket<proto::QueryPathRsp>(
        PathfindingHandler *const this,
        common::minet::PacketPtr *p_packet_ptr,
        proto::QueryPathRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t v6; // r14d
  common::minet::Packet *v7; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  const proto::PacketHead *Head; // rax
  common::milog::MiLogStream *v10; // rax
  common::minet::Packet *v11; // rax
  common::minet::Packet *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  unsigned __int64 v15; // rax
  __int64 (__fastcall *v16)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  int32_t result; // eax
  unsigned __int16 val; // [rsp+2Eh] [rbp-C2h] BYREF
  std::shared_ptr<common::minet::Packet> v23; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v24; // [rsp+40h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 error_code:60 64 16 17 rsp_packet_ptr:54";
  *(_QWORD *)(v3 + 16) = PathfindingHandler::sendRspPacket<proto::QueryPathRsp>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  common::minet::PacketUtils::createPacket<proto::QueryPathRsp>((const proto::QueryPathRsp *)(v3 + 64));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/pathfinding_handler.h",
      "sendRspPacket",
      57);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v24, (const char (*)[22])"create packet failed!");
    common::milog::MiLogStream::~MiLogStream(&v24);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    Head = common::minet::Packet::getHead(v8);
    *(_DWORD *)(v3 + 48) = common::minet::Packet::copyHead(v7, Head);
    if ( *(_DWORD *)(v3 + 48) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/pathfinding_handler.h",
        "sendRspPacket",
        63);
      v10 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v24,
              (const char (*)[28])"copyHead fails! error code:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v24);
      v6 = *(_DWORD *)(v3 + 48);
    }
    else
    {
      v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      common::minet::Packet::setSourceService(v11, 0xEu);
      v12 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      common::minet::Packet::setTargetService(v12, 2u);
      v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
      v14 = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v13, 2LL);
      v15 = (unsigned __int64)(v14->_vptr_NetworkMgrBase + 8);
      if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        v15 = __asan_report_load8(v14->_vptr_NetworkMgrBase + 8, 2LL);
      v16 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v15;
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &v23,
        (const std::shared_ptr<common::minet::Packet> *)(v3 + 64));
      *(_DWORD *)(v3 + 48) = v16(v14, &v23);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&v23);
      if ( *(_DWORD *)(v3 + 48) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/pathfinding_handler.h",
          "sendRspPacket",
          73);
        v17 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                &v24,
                (const char (*)[47])"sendRspPacketToGateService failed: error code:");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v17, (const int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v24);
        v6 = *(_DWORD *)(v3 + 48);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/pathfinding_handler.h",
          "sendRspPacket",
          76);
        v18 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v24,
                (const char (*)[25])"send rsp packet cmdid = ");
        v19 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        val = common::minet::Packet::getCmdId(v19);
        common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(v18, &val);
        common::milog::MiLogStream::~MiLogStream(&v24);
        v6 = proto::QueryPathRsp::retcode(rsp_0);
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v3 + 64));
  result = v6;
  if ( v25 == (char *)v3 )
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
  return result;
};
