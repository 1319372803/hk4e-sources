// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/npc_handler.cpp

// Line 29: range 00000000168A3EEC-00000000168A4219
int32_t __cdecl NpcHandler::addPacketFuncToMap(NpcHandler *const this, PacketFuncMap *process_packet_func_map)
{
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v3; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v4; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v5; // rax
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+1Ch] [rbp-44h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v7; // [rsp+20h] [rbp-40h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+28h] [rbp-38h] BYREF
  common::milog::MiLogStream v9; // [rsp+30h] [rbp-30h] BYREF

  __x = 572;
  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                  process_packet_func_map,
                  &__x)._M_node;
  v7._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
  if ( std::operator!=(&v7, &__y) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/npc_handler.cpp",
      "addPacketFuncToMap",
      30);
    common::milog::MiLogStream::operator()(&v9, off_25E0B640, 572LL);
    common::milog::MiLogStream::~MiLogStream(&v9);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
    __x = 572;
    v3 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_map,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<NpcHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}>(
      v3,
      (NpcHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
    __x = 535;
    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                    process_packet_func_map,
                    &__x)._M_node;
    v7._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
    if ( std::operator!=(&v7, &__y) )
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/npc_handler.cpp",
        "addPacketFuncToMap",
        31);
      common::milog::MiLogStream::operator()(&v9, off_25E0B640, 535LL);
      common::milog::MiLogStream::~MiLogStream(&v9);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
      __x = 535;
      v4 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
             process_packet_func_map,
             &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<NpcHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}>(
        v4,
        (NpcHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
      __x = 503;
      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                      process_packet_func_map,
                      &__x)._M_node;
      v7._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
      if ( std::operator!=(&v7, &__y) )
      {
        common::milog::MiLogStream::create(
          &v9,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/npc_handler.cpp",
          "addPacketFuncToMap",
          32);
        common::milog::MiLogStream::operator()(&v9, off_25E0B640, 503LL);
        common::milog::MiLogStream::~MiLogStream(&v9);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
        __x = 503;
        v5 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
               process_packet_func_map,
               &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<NpcHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}>(
          v5,
          (NpcHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
        return 0;
      }
    }
  }
};

// Line 30: range 00000000168A3592-00000000168A38AE
int __cdecl NpcHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator()(
        const NpcHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  NpcHandler *this; // r14
  std::__shared_ptr_access<const proto::NpcTalkReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::NpcTalkRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::NpcTalkRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:30 64 16 10 rsp_ptr:30";
  *(_QWORD *)(v2 + 16) = NpcHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::NpcTalkReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::NpcTalkReq const>((const std::shared_ptr<const proto::NpcTalkReq> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/npc_handler.cpp",
      "operator()",
      30);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::NpcTalkReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::NpcTalkReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::NpcTalkRsp>();
    rsp_0 = std::__shared_ptr_access<proto::NpcTalkRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::NpcTalkRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::NpcTalkRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::NpcTalkReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::NpcTalkReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = NpcHandler::onNpcTalkReq(this, v8, rsp_0);
    proto::NpcTalkRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::NpcTalkRsp>::shared_ptr(&p_proto_ptr, (const std::shared_ptr<proto::NpcTalkRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::NpcTalkRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::NpcTalkRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::NpcTalkRsp>::~shared_ptr((std::shared_ptr<proto::NpcTalkRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::NpcTalkReq const>::~shared_ptr((std::shared_ptr<const proto::NpcTalkReq> *const)(v2 + 32));
  result = v5;
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 31: range 00000000168A38B0-00000000168A3BCC
int __cdecl NpcHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator()(
        const NpcHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  NpcHandler *this; // r14
  std::__shared_ptr_access<const proto::GetSceneNpcPositionReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GetSceneNpcPositionRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GetSceneNpcPositionRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:31 64 16 10 rsp_ptr:31";
  *(_QWORD *)(v2 + 16) = NpcHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetSceneNpcPositionReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetSceneNpcPositionReq const>(
         (const std::shared_ptr<const proto::GetSceneNpcPositionReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/npc_handler.cpp",
      "operator()",
      31);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetSceneNpcPositionReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetSceneNpcPositionReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetSceneNpcPositionRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetSceneNpcPositionRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetSceneNpcPositionRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetSceneNpcPositionRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GetSceneNpcPositionReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetSceneNpcPositionReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = NpcHandler::onGetSceneNpcPositionReq(this, v8, rsp_0);
    proto::GetSceneNpcPositionRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GetSceneNpcPositionRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GetSceneNpcPositionRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GetSceneNpcPositionRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GetSceneNpcPositionRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GetSceneNpcPositionRsp>::~shared_ptr((std::shared_ptr<proto::GetSceneNpcPositionRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetSceneNpcPositionReq const>::~shared_ptr((std::shared_ptr<const proto::GetSceneNpcPositionReq> *const)(v2 + 32));
  result = v5;
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 32: range 00000000168A3BCE-00000000168A3EEA
int __cdecl NpcHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator()(
        const NpcHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  NpcHandler *this; // r14
  std::__shared_ptr_access<const proto::MeetNpcReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::MeetNpcRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::MeetNpcRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:32 64 16 10 rsp_ptr:32";
  *(_QWORD *)(v2 + 16) = NpcHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::MeetNpcReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::MeetNpcReq const>((const std::shared_ptr<const proto::MeetNpcReq> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/npc_handler.cpp",
      "operator()",
      32);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::MeetNpcReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::MeetNpcReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::MeetNpcRsp>();
    rsp_0 = std::__shared_ptr_access<proto::MeetNpcRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::MeetNpcRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::MeetNpcRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::MeetNpcReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::MeetNpcReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = NpcHandler::onMeetNpcReq(this, v8, rsp_0);
    proto::MeetNpcRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::MeetNpcRsp>::shared_ptr(&p_proto_ptr, (const std::shared_ptr<proto::MeetNpcRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::MeetNpcRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::MeetNpcRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::MeetNpcRsp>::~shared_ptr((std::shared_ptr<proto::MeetNpcRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::MeetNpcReq const>::~shared_ptr((std::shared_ptr<const proto::MeetNpcReq> *const)(v2 + 32));
  result = v5;
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 37: range 00000000168A421A-00000000168A48C7
int32_t __cdecl NpcHandler::onNpcTalkReq(
        NpcHandler *const this,
        const proto::NpcTalkReq *req,
        proto::NpcTalkRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  google::protobuf::uint32 v6; // edx
  google::protobuf::uint32 v7; // edx
  google::protobuf::uint32 v8; // edx
  bool v9; // r14
  common::milog::MiLogStream *v10; // r14
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  PlayerSceneComp *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  unsigned __int64 v17; // rax
  void (__fastcall **v18)(std::string *, unsigned __int64); // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  int32_t v21; // r14d
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v23; // rcx
  uint32_t v24; // r14d
  uint32_t v25; // eax
  int32_t result; // eax
  EnterSceneState val; // [rsp+2Ch] [rbp-F4h] BYREF
  unsigned int EnterSceneToken; // [rsp+30h] [rbp-F0h] BYREF
  int32_t ret; // [rsp+34h] [rbp-ECh]
  PlayerTalkComp *talk_comp; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<Scene> __a; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v33; // [rsp+50h] [rbp-D0h] BYREF
  std::string v34; // [rsp+70h] [rbp-B0h] BYREF
  std::string output; // [rsp+90h] [rbp-90h] BYREF
  char v36[112]; // [rsp+B0h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 scene_ptr:42";
  *(_QWORD *)(v3 + 16) = NpcHandler::onNpcTalkReq;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  ret = 0;
  v6 = proto::NpcTalkReq::npc_entity_id(req);
  proto::NpcTalkRsp::set_npc_entity_id(rsp_0, v6);
  v7 = proto::NpcTalkReq::talk_id(req);
  proto::NpcTalkRsp::set_cur_talk_id(rsp_0, v7);
  v8 = proto::NpcTalkReq::entity_id(req);
  proto::NpcTalkRsp::set_entity_id(rsp_0, v8);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getDestScene((const PlayerSceneComp *const)&__a);
    v9 = std::operator!=<Scene>(&__a, 0LL);
    std::shared_ptr<Scene>::~shared_ptr(&__a);
    if ( v9 )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/npc_handler.cpp",
        "onNpcTalkReq",
        47);
      v10 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v33,
              (const char (*)[38])"scene_ptr is null, enter_scene_state:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SceneComp = Player::getSceneComp(this->player_);
      val = PlayerSceneComp::getEnterSceneState(SceneComp);
      v12 = common::milog::MiLogStream::operator<<<EnterSceneState,(EnterSceneState*)0>(v10, &val);
      v13 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v12,
              (const char (*)[21])", enter_scene_token:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v14 = Player::getSceneComp(this->player_);
      EnterSceneToken = PlayerSceneComp::getEnterSceneToken(v14);
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &EnterSceneToken);
      v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v15, (const char (*)[14])", dest_scene:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getDestScene((const PlayerSceneComp *const)&__a);
      v17 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__a);
      if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
        v17 = __asan_report_load8();
      v18 = *(void (__fastcall ***)(std::string *, unsigned __int64))v17;
      if ( *(_BYTE *)((*(_QWORD *)v17 >> 3) + 0x7FFF8000LL) )
        v17 = __asan_report_load8();
      (*v18)(&v34, v17);
      v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, &v34);
      v20 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v19, (const char (*)[7])", req:");
      google::protobuf::Message::Utf8DebugString[abi:cxx11](&output, &req->google::protobuf::Message);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, &output);
      std::string::~string(&output);
      std::string::~string(&v34);
      std::shared_ptr<Scene>::~shared_ptr(&__a);
      common::milog::MiLogStream::~MiLogStream(&v33);
    }
    v21 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    AvatarComp = Player::getAvatarComp(this->player_);
    if ( !PlayerAvatarComp::isCurAvatarOnScene(AvatarComp) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&output,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/npc_handler.cpp",
        "onNpcTalkReq",
        53);
      v23 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)&output,
              (const char (*)[27])off_25E10860);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v23, this->player_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&output);
      v21 = 103;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      talk_comp = Player::getTalkComp(this->player_);
      v24 = proto::NpcTalkReq::talk_id(req);
      v25 = proto::NpcTalkReq::entity_id(req);
      ret = PlayerTalkComp::onTalk(talk_comp, v25, v24);
      if ( ret )
        v21 = ret;
      else
        v21 = 0;
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = v21;
  if ( v36 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 76: range 00000000168A48C8-00000000168A4C7C
int32_t __cdecl NpcHandler::onGetSceneNpcPositionReq(
        NpcHandler *const this,
        const proto::GetSceneNpcPositionReq *req,
        proto::GetSceneNpcPositionRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  bool v8; // r14
  common::milog::MiLogStream *v9; // rax
  int32_t v10; // r14d
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v12; // rax
  int32_t result; // eax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,SceneScriptConfig>,false> __y; // [rsp+28h] [rbp-D8h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-D0h] BYREF
  char v17[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 11 scene_id:77 64 8 5 it:78 96 16 12 scene_ptr:84";
  *(_QWORD *)(v3 + 16) = NpcHandler::onGetSceneNpcPositionReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = proto::GetSceneNpcPositionReq::scene_id(req);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 96));
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
  *(std::unordered_map<unsigned int,SceneScriptConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,SceneScriptConfig>::find(
                                                                                       &v6->design_config.lua_config_mgr.scene_script_config_map,
                                                                                       (const std::unordered_map<unsigned int,SceneScriptConfig>::key_type *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 96));
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
  __y._M_cur = std::unordered_map<unsigned int,SceneScriptConfig>::end(&v7->design_config.lua_config_mgr.scene_script_config_map)._M_cur;
  v8 = std::__detail::operator==<std::pair<unsigned int const,SceneScriptConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,SceneScriptConfig>,false> *)(v3 + 64),
         &__y);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
  if ( v8 )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/npc_handler.cpp",
      "onGetSceneNpcPositionReq",
      81);
    v9 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v16, (const char (*)[21])off_25E10920);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v16);
    v10 = 5;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneComp = (unsigned int)Player::getSceneComp(this->player_);
    PlayerSceneComp::findScene((const PlayerSceneComp *const)(v3 + 96), SceneComp);
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/npc_handler.cpp",
        "onGetSceneNpcPositionReq",
        88);
      v12 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v16, (const char (*)[21])off_25E10920);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v16);
      v10 = 5;
    }
    else
    {
      proto::GetSceneNpcPositionRsp::set_scene_id(rsp_0, *(_DWORD *)(v3 + 48));
      v10 = 0;
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 96));
  }
  result = v10;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 135: range 00000000168A4C7E-00000000168A4F1B
int32_t __cdecl NpcHandler::onMeetNpcReq(
        NpcHandler *const this,
        const proto::MeetNpcReq *req,
        proto::MeetNpcRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  PlayerTalkComp *TalkComp; // rax
  uint32_t npc_first_met_id; // [rsp+24h] [rbp-9Ch]
  const data::NpcExcelConfig *npc_config_ptr; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v13; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-80h] BYREF
  char v15[96]; // [rsp+60h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 10 npc_id:136";
  *(_QWORD *)(v3 + 16) = NpcHandler::onMeetNpcReq;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = proto::MeetNpcReq::npc_id(req);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
  npc_config_ptr = data::NpcExcelConfigMgrBase::findNpcExcelConfig(
                     &v6->design_config.txt_config_mgr.npc_config_mgr,
                     *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( npc_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&npc_config_ptr->first_met_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)npc_config_ptr - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&npc_config_ptr->first_met_id >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    npc_first_met_id = npc_config_ptr->first_met_id;
    proto::MeetNpcRsp::set_npc_first_met_id(rsp_0, npc_first_met_id);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    TalkComp = Player::getTalkComp(this->player_);
    result = PlayerTalkComp::tryAddFisrtMetNpc(TalkComp, npc_first_met_id);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/npc_handler.cpp",
      "onMeetNpcReq",
      140);
    v7 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v14,
           (const char (*)[26])"config not found. npc_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = 5;
  }
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
