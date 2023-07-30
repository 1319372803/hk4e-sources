// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/draft_handler.cpp

// Line 23: range 000000001310235C-0000000013102689
int32_t __cdecl DraftHandler::addPacketFuncToMap(DraftHandler *const this, PacketFuncMap *process_packet_func_map)
{
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v3; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v4; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v5; // rax
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+1Ch] [rbp-44h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v7; // [rsp+20h] [rbp-40h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+28h] [rbp-38h] BYREF
  common::milog::MiLogStream v9; // [rsp+30h] [rbp-30h] BYREF

  __x = 5412;
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
      "./src/handler/draft_handler.cpp",
      "addPacketFuncToMap",
      24);
    common::milog::MiLogStream::operator()(&v9, format, 5412LL);
    common::milog::MiLogStream::~MiLogStream(&v9);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
    __x = 5412;
    v3 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_map,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<DraftHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}>(
      v3,
      (DraftHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
    __x = 5421;
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
        "./src/handler/draft_handler.cpp",
        "addPacketFuncToMap",
        25);
      common::milog::MiLogStream::operator()(&v9, format, 5421LL);
      common::milog::MiLogStream::~MiLogStream(&v9);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
      __x = 5421;
      v4 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
             process_packet_func_map,
             &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<DraftHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}>(
        v4,
        (DraftHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
      __x = 5431;
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
          "./src/handler/draft_handler.cpp",
          "addPacketFuncToMap",
          26);
        common::milog::MiLogStream::operator()(&v9, format, 5431LL);
        common::milog::MiLogStream::~MiLogStream(&v9);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
        __x = 5431;
        v5 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
               process_packet_func_map,
               &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<DraftHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}>(
          v5,
          (DraftHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
        return 0;
      }
    }
  }
};

// Line 24: range 0000000013101A02-0000000013101D1E
int __cdecl DraftHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator()(
        const DraftHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  DraftHandler *this; // r14
  std::__shared_ptr_access<const proto::DraftOwnerStartInviteReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::DraftOwnerStartInviteRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::DraftOwnerStartInviteRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:24 64 16 10 rsp_ptr:24";
  *(_QWORD *)(v2 + 16) = DraftHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::DraftOwnerStartInviteReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::DraftOwnerStartInviteReq const>(
         (const std::shared_ptr<const proto::DraftOwnerStartInviteReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/draft_handler.cpp",
      "operator()",
      24);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::DraftOwnerStartInviteReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DraftOwnerStartInviteReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::DraftOwnerStartInviteRsp>();
    rsp_0 = std::__shared_ptr_access<proto::DraftOwnerStartInviteRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::DraftOwnerStartInviteRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::DraftOwnerStartInviteRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::DraftOwnerStartInviteReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DraftOwnerStartInviteReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = DraftHandler::onDraftOwnerStartInviteReq(this, v8, rsp_0);
    proto::DraftOwnerStartInviteRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::DraftOwnerStartInviteRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::DraftOwnerStartInviteRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::DraftOwnerStartInviteRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::DraftOwnerStartInviteRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::DraftOwnerStartInviteRsp>::~shared_ptr((std::shared_ptr<proto::DraftOwnerStartInviteRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::DraftOwnerStartInviteReq const>::~shared_ptr((std::shared_ptr<const proto::DraftOwnerStartInviteReq> *const)(v2 + 32));
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

// Line 25: range 0000000013101D20-000000001310203C
int __cdecl DraftHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator()(
        const DraftHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  DraftHandler *this; // r14
  std::__shared_ptr_access<const proto::DraftGuestReplyInviteReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::DraftGuestReplyInviteRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::DraftGuestReplyInviteRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:25 64 16 10 rsp_ptr:25";
  *(_QWORD *)(v2 + 16) = DraftHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::DraftGuestReplyInviteReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::DraftGuestReplyInviteReq const>(
         (const std::shared_ptr<const proto::DraftGuestReplyInviteReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/draft_handler.cpp",
      "operator()",
      25);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::DraftGuestReplyInviteReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DraftGuestReplyInviteReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::DraftGuestReplyInviteRsp>();
    rsp_0 = std::__shared_ptr_access<proto::DraftGuestReplyInviteRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::DraftGuestReplyInviteRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::DraftGuestReplyInviteRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::DraftGuestReplyInviteReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DraftGuestReplyInviteReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = DraftHandler::onDraftGuestReplyInviteReq(this, v8, rsp_0);
    proto::DraftGuestReplyInviteRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::DraftGuestReplyInviteRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::DraftGuestReplyInviteRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::DraftGuestReplyInviteRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::DraftGuestReplyInviteRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::DraftGuestReplyInviteRsp>::~shared_ptr((std::shared_ptr<proto::DraftGuestReplyInviteRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::DraftGuestReplyInviteReq const>::~shared_ptr((std::shared_ptr<const proto::DraftGuestReplyInviteReq> *const)(v2 + 32));
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

// Line 26: range 000000001310203E-000000001310235A
int __cdecl DraftHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator()(
        const DraftHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  DraftHandler *this; // r14
  std::__shared_ptr_access<const proto::DraftGuestReplyTwiceConfirmReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::DraftGuestReplyTwiceConfirmRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::DraftGuestReplyTwiceConfirmRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:26 64 16 10 rsp_ptr:26";
  *(_QWORD *)(v2 + 16) = DraftHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::DraftGuestReplyTwiceConfirmReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::DraftGuestReplyTwiceConfirmReq const>(
         (const std::shared_ptr<const proto::DraftGuestReplyTwiceConfirmReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/draft_handler.cpp",
      "operator()",
      26);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::DraftGuestReplyTwiceConfirmReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DraftGuestReplyTwiceConfirmReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::DraftGuestReplyTwiceConfirmRsp>();
    rsp_0 = std::__shared_ptr_access<proto::DraftGuestReplyTwiceConfirmRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::DraftGuestReplyTwiceConfirmRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::DraftGuestReplyTwiceConfirmRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::DraftGuestReplyTwiceConfirmReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DraftGuestReplyTwiceConfirmReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = DraftHandler::onDraftGuestReplyTwiceConfirmReq(this, v8, rsp_0);
    proto::DraftGuestReplyTwiceConfirmRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::DraftGuestReplyTwiceConfirmRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::DraftGuestReplyTwiceConfirmRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::DraftGuestReplyTwiceConfirmRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::DraftGuestReplyTwiceConfirmRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::DraftGuestReplyTwiceConfirmRsp>::~shared_ptr((std::shared_ptr<proto::DraftGuestReplyTwiceConfirmRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::DraftGuestReplyTwiceConfirmReq const>::~shared_ptr((std::shared_ptr<const proto::DraftGuestReplyTwiceConfirmReq> *const)(v2 + 32));
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

// Line 31: range 000000001310268A-0000000013102C00
int32_t __cdecl DraftHandler::onDraftOwnerStartInviteReq(
        DraftHandler *const this,
        const proto::DraftOwnerStartInviteReq *req,
        proto::DraftOwnerStartInviteRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t DraftComp; // r14d
  google::protobuf::uint32 v7; // eax
  google::protobuf::uint32 v8; // edx
  std::tuple_element<1,const std::pair<unsigned int const,int> >::type v9; // eax
  common::milog::MiLogStream *v10; // rax
  int32_t v11; // r14d
  int32_t result; // eax
  std::unordered_map<unsigned int,int>::iterator __for_begin; // [rsp+20h] [rbp-120h] BYREF
  std::unordered_map<unsigned int,int>::iterator __for_end; // [rsp+28h] [rbp-118h] BYREF
  std::tuple_element<0,std::tuple<int,unsigned int> >::type *retcode; // [rsp+30h] [rbp-110h]
  std::tuple_element<0,std::tuple<unsigned int> >::type *uid; // [rsp+38h] [rbp-108h]
  std::unordered_map<unsigned int,int> *__for_range; // [rsp+40h] [rbp-100h]
  const std::pair<unsigned int const,int> *v19; // [rsp+48h] [rbp-F8h]
  std::tuple_element<0,const std::pair<unsigned int const,int> >::type *uid_0; // [rsp+50h] [rbp-F0h]
  std::tuple_element<1,const std::pair<unsigned int const,int> >::type *reason_ret; // [rsp+58h] [rbp-E8h]
  proto::DraftInviteFailInfo *fail_info; // [rsp+60h] [rbp-E0h]
  std::tuple<int,unsigned int> __t; // [rsp+68h] [rbp-D8h] BYREF
  common::milog::MiLogStream v24; // [rsp+70h] [rbp-D0h] BYREF
  char v25[176]; // [rsp+90h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 56 22 fail_uid_reason_map:32";
  *(_QWORD *)(v3 + 16) = DraftHandler::onDraftOwnerStartInviteReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  std::unordered_map<unsigned int,int>::unordered_map((std::unordered_map<unsigned int,int> *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  DraftComp = (unsigned int)Player::getDraftComp(this->player_);
  v7 = proto::DraftOwnerStartInviteReq::draft_id(req);
  PlayerDraftComp::startDraftProgress(
    (PlayerDraftComp *const)&__t,
    DraftComp,
    (std::unordered_map<unsigned int,int> *)v7);
  retcode = std::get<0ul,int,unsigned int>(&__t);
  uid = std::get<1ul,int,unsigned int>(&__t);
  v8 = proto::DraftOwnerStartInviteReq::draft_id(req);
  proto::DraftOwnerStartInviteRsp::set_draft_id(rsp_0, v8);
  if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::DraftOwnerStartInviteRsp::set_wrong_uid(rsp_0, *uid);
  __for_range = (std::unordered_map<unsigned int,int> *)(v3 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,int>::begin((std::unordered_map<unsigned int,int> *const)(v3 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,int>::end((std::unordered_map<unsigned int,int> *const)(v3 + 32))._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,int>,false>(&__for_begin, &__for_end) )
  {
    v19 = std::__detail::_Node_iterator<std::pair<unsigned int const,int>,false,false>::operator*(&__for_begin);
    uid_0 = std::get<0ul,unsigned int const,int>(v19);
    reason_ret = (std::tuple_element<1,const std::pair<unsigned int const,int> >::type *)std::get<1ul,unsigned int const,int>(v19);
    fail_info = proto::DraftOwnerStartInviteRsp::add_invite_fail_info_list(rsp_0);
    if ( *(_BYTE *)(((unsigned __int64)uid_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)uid_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::DraftInviteFailInfo::set_uid(fail_info, *uid_0);
    if ( *(_BYTE *)(((unsigned __int64)reason_ret >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)reason_ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reason_ret >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v9 = *reason_ret;
    if ( *reason_ret == 10447 )
    {
LABEL_32:
      proto::DraftInviteFailInfo::set_reason(fail_info, DRAFT_PLAY_LIMIT_NOT_MEET);
      goto LABEL_34;
    }
    if ( v9 <= 10447 )
    {
      if ( v9 == 10446 )
        goto LABEL_29;
      if ( v9 <= 10446 )
      {
        if ( v9 == 10371 )
          goto LABEL_29;
        if ( v9 <= 10371 )
        {
          if ( v9 == 9161 )
            goto LABEL_32;
          if ( v9 <= 9161 )
          {
            if ( v9 == 9160 )
            {
LABEL_29:
              proto::DraftInviteFailInfo::set_reason(fail_info, DRAFT_ACTIVITY_PLAY_NOT_OPEN);
              goto LABEL_34;
            }
            if ( v9 == 860 )
            {
              proto::DraftInviteFailInfo::set_reason(fail_info, DRAFT_ACTIVITY_NOT_OPEN);
              goto LABEL_34;
            }
            if ( v9 <= 860 )
            {
              if ( v9 == 527 )
              {
                proto::DraftInviteFailInfo::set_reason(fail_info, DRAFT_WORLD_NOT_MEET);
                goto LABEL_34;
              }
              if ( v9 == 528 )
              {
                proto::DraftInviteFailInfo::set_reason(fail_info, DRAFT_SCENE_NOT_MEET);
                goto LABEL_34;
              }
            }
          }
        }
      }
    }
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/draft_handler.cpp",
      "onDraftOwnerStartInviteReq",
      73);
    v10 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            &v24,
            (const char (*)[21])"unknown reason, ret:");
    common::milog::MiLogStream::operator<<<int,(int *)0>(v10, reason_ret);
    common::milog::MiLogStream::~MiLogStream(&v24);
    proto::DraftInviteFailInfo::set_reason(fail_info, DRAFT_FAIL_UNKNOWN);
LABEL_34:
    std::__detail::_Node_iterator<std::pair<unsigned int const,int>,false,false>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)retcode >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)retcode & 7) + 3) >= *(_BYTE *)(((unsigned __int64)retcode >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v11 = *retcode;
  std::unordered_map<unsigned int,int>::~unordered_map((std::unordered_map<unsigned int,int> *const)(v3 + 32));
  result = v11;
  if ( v25 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
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

// Line 83: range 0000000013102C02-000000001310306D
int32_t __cdecl DraftHandler::onDraftGuestReplyInviteReq(
        DraftHandler *const this,
        const proto::DraftGuestReplyInviteReq *req,
        proto::DraftGuestReplyInviteRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  google::protobuf::uint32 v6; // edx
  bool is_agree; // dl
  int32_t v8; // r14d
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  Player *v11; // rax
  PlayerDraftComp *DraftComp; // r15
  bool v13; // r14
  uint32_t v14; // eax
  int32_t result; // eax
  uint32_t guest_uid; // [rsp+14h] [rbp-CCh]
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 12 world_ptr:86 64 16 19 owner_player_ptr:93";
  *(_QWORD *)(v3 + 16) = DraftHandler::onDraftGuestReplyInviteReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  v6 = proto::DraftGuestReplyInviteReq::draft_id(req);
  proto::DraftGuestReplyInviteRsp::set_draft_id(rsp_0, v6);
  is_agree = proto::DraftGuestReplyInviteReq::is_agree(req);
  proto::DraftGuestReplyInviteRsp::set_is_agree(rsp_0, is_agree);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v3 + 32));
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/draft_handler.cpp",
      "onDraftGuestReplyInviteReq",
      89);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v18, (const char (*)[22])"[DRAFT] world is null");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v8 = -1;
  }
  else
  {
    std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    PlayerWorld::getOwnPlayer((const PlayerWorld *const)(v3 + 64));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/draft_handler.cpp",
        "onDraftGuestReplyInviteReq",
        96);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        &v18,
        (const char (*)[28])"[DRAFT] getOwnPlayer failed");
      common::milog::MiLogStream::~MiLogStream(&v18);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( Uid == Player::getUid(v10) )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/draft_handler.cpp",
          "onDraftGuestReplyInviteReq",
          102);
        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
          &v18,
          (const char (*)[29])"[DRAFT] guest is world owner");
        common::milog::MiLogStream::~MiLogStream(&v18);
        v8 = -1;
      }
      else
      {
        v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        DraftComp = Player::getDraftComp(v11);
        v13 = proto::DraftGuestReplyInviteReq::is_agree(req);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        guest_uid = Player::getUid(this->player_);
        v14 = proto::DraftGuestReplyInviteReq::draft_id(req);
        v8 = PlayerDraftComp::onGuestReplyDraftInvite(DraftComp, v14, guest_uid, v13);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 32));
  result = v8;
  if ( v19 == (char *)v3 )
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

// Line 110: range 000000001310306E-000000001310340A
int32_t __cdecl DraftHandler::onDraftGuestReplyTwiceConfirmReq(
        DraftHandler *const this,
        const proto::DraftGuestReplyTwiceConfirmReq *req,
        proto::DraftGuestReplyTwiceConfirmRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  google::protobuf::uint32 v6; // edx
  bool is_agree; // dl
  int32_t v8; // r14d
  Player *v9; // rax
  PlayerDraftComp *DraftComp; // r15
  bool v11; // r14
  uint32_t v12; // eax
  int32_t result; // eax
  uint32_t guest_uid; // [rsp+14h] [rbp-CCh]
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 13 world_ptr:113 64 16 20 owner_player_ptr:120";
  *(_QWORD *)(v3 + 16) = DraftHandler::onDraftGuestReplyTwiceConfirmReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  v6 = proto::DraftGuestReplyTwiceConfirmReq::draft_id(req);
  proto::DraftGuestReplyTwiceConfirmRsp::set_draft_id(rsp_0, v6);
  is_agree = proto::DraftGuestReplyTwiceConfirmReq::is_agree(req);
  proto::DraftGuestReplyTwiceConfirmRsp::set_is_agree(rsp_0, is_agree);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v3 + 32));
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/draft_handler.cpp",
      "onDraftGuestReplyTwiceConfirmReq",
      116);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v16, (const char (*)[22])"[DRAFT] world is null");
    common::milog::MiLogStream::~MiLogStream(&v16);
    v8 = -1;
  }
  else
  {
    std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    PlayerWorld::getOwnPlayer((const PlayerWorld *const)(v3 + 64));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/draft_handler.cpp",
        "onDraftGuestReplyTwiceConfirmReq",
        123);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        &v16,
        (const char (*)[28])"[DRAFT] getOwnPlayer failed");
      common::milog::MiLogStream::~MiLogStream(&v16);
      v8 = -1;
    }
    else
    {
      v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      DraftComp = Player::getDraftComp(v9);
      v11 = proto::DraftGuestReplyTwiceConfirmReq::is_agree(req);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      guest_uid = Player::getUid(this->player_);
      v12 = proto::DraftGuestReplyTwiceConfirmReq::draft_id(req);
      v8 = PlayerDraftComp::onGuestReplyDraftTwiceConfirm(DraftComp, v12, guest_uid, v11);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 32));
  result = v8;
  if ( v17 == (char *)v3 )
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
