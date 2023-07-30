// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/offering_handler.cpp

// Line 23: range 00000000168A5876-00000000168A5BA3
int32_t __cdecl OfferingHandler::addPacketFuncToMap(
        OfferingHandler *const this,
        PacketFuncMap *process_packet_func_map)
{
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v3; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v4; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v5; // rax
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+1Ch] [rbp-44h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v7; // [rsp+20h] [rbp-40h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+28h] [rbp-38h] BYREF
  common::milog::MiLogStream v9; // [rsp+30h] [rbp-30h] BYREF

  __x = 2907;
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
      "./src/handler/offering_handler.cpp",
      "addPacketFuncToMap",
      24);
    common::milog::MiLogStream::operator()(&v9, off_25E0B640, 2907LL);
    common::milog::MiLogStream::~MiLogStream(&v9);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
    __x = 2907;
    v3 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_map,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<OfferingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}>(
      v3,
      (OfferingHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
    __x = 2919;
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
        "./src/handler/offering_handler.cpp",
        "addPacketFuncToMap",
        25);
      common::milog::MiLogStream::operator()(&v9, off_25E0B640, 2919LL);
      common::milog::MiLogStream::~MiLogStream(&v9);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
      __x = 2919;
      v4 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
             process_packet_func_map,
             &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<OfferingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}>(
        v4,
        (OfferingHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
      __x = 2918;
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
          "./src/handler/offering_handler.cpp",
          "addPacketFuncToMap",
          26);
        common::milog::MiLogStream::operator()(&v9, off_25E0B640, 2918LL);
        common::milog::MiLogStream::~MiLogStream(&v9);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
        __x = 2918;
        v5 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
               process_packet_func_map,
               &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<OfferingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}>(
          v5,
          (OfferingHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
        return 0;
      }
    }
  }
};

// Line 24: range 00000000168A4F1C-00000000168A5238
int __cdecl OfferingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator()(
        const OfferingHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  OfferingHandler *this; // r14
  std::__shared_ptr_access<const proto::PlayerOfferingReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::PlayerOfferingRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::PlayerOfferingRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = OfferingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::PlayerOfferingReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::PlayerOfferingReq const>(
         (const std::shared_ptr<const proto::PlayerOfferingReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offering_handler.cpp",
      "operator()",
      24);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::PlayerOfferingReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerOfferingReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::PlayerOfferingRsp>();
    rsp_0 = std::__shared_ptr_access<proto::PlayerOfferingRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PlayerOfferingRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::PlayerOfferingRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::PlayerOfferingReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerOfferingReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = OfferingHandler::onPlayerOfferingReq(this, v8, rsp_0);
    proto::PlayerOfferingRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::PlayerOfferingRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::PlayerOfferingRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::PlayerOfferingRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::PlayerOfferingRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::PlayerOfferingRsp>::~shared_ptr((std::shared_ptr<proto::PlayerOfferingRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::PlayerOfferingReq const>::~shared_ptr((std::shared_ptr<const proto::PlayerOfferingReq> *const)(v2 + 32));
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

// Line 25: range 00000000168A523A-00000000168A5556
int __cdecl OfferingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator()(
        const OfferingHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  OfferingHandler *this; // r14
  std::__shared_ptr_access<const proto::TakeOfferingLevelRewardReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::TakeOfferingLevelRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::TakeOfferingLevelRewardRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = OfferingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::TakeOfferingLevelRewardReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::TakeOfferingLevelRewardReq const>(
         (const std::shared_ptr<const proto::TakeOfferingLevelRewardReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offering_handler.cpp",
      "operator()",
      25);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::TakeOfferingLevelRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TakeOfferingLevelRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::TakeOfferingLevelRewardRsp>();
    rsp_0 = std::__shared_ptr_access<proto::TakeOfferingLevelRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::TakeOfferingLevelRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::TakeOfferingLevelRewardRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::TakeOfferingLevelRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TakeOfferingLevelRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = OfferingHandler::onTakeOfferingLevelRewardReq(this, v8, rsp_0);
    proto::TakeOfferingLevelRewardRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::TakeOfferingLevelRewardRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::TakeOfferingLevelRewardRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::TakeOfferingLevelRewardRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::TakeOfferingLevelRewardRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::TakeOfferingLevelRewardRsp>::~shared_ptr((std::shared_ptr<proto::TakeOfferingLevelRewardRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::TakeOfferingLevelRewardReq const>::~shared_ptr((std::shared_ptr<const proto::TakeOfferingLevelRewardReq> *const)(v2 + 32));
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

// Line 26: range 00000000168A5558-00000000168A5874
int __cdecl OfferingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator()(
        const OfferingHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  OfferingHandler *this; // r14
  std::__shared_ptr_access<const proto::OfferingInteractReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::OfferingInteractRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::OfferingInteractRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = OfferingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::OfferingInteractReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::OfferingInteractReq const>(
         (const std::shared_ptr<const proto::OfferingInteractReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offering_handler.cpp",
      "operator()",
      26);
    common::milog::MiLogStream::operator()(&v15, off_25E0B560);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::OfferingInteractReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::OfferingInteractReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::OfferingInteractRsp>();
    rsp_0 = std::__shared_ptr_access<proto::OfferingInteractRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::OfferingInteractRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::OfferingInteractRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::OfferingInteractReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::OfferingInteractReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = OfferingHandler::onOfferingInteractReq(this, v8, rsp_0);
    proto::OfferingInteractRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::OfferingInteractRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::OfferingInteractRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::OfferingInteractRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::OfferingInteractRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::OfferingInteractRsp>::~shared_ptr((std::shared_ptr<proto::OfferingInteractRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::OfferingInteractReq const>::~shared_ptr((std::shared_ptr<const proto::OfferingInteractReq> *const)(v2 + 32));
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

// Line 31: range 00000000168A5BA4-00000000168A5C52
int32_t __cdecl OfferingHandler::onPlayerOfferingReq(
        OfferingHandler *const this,
        const proto::PlayerOfferingReq *req,
        proto::PlayerOfferingRsp *rsp_0)
{
  proto::PlayerOfferingData *v3; // rbx
  google::protobuf::uint32 v4; // eax
  PlayerOfferingComp *OfferingComp; // rbx
  uint32_t v6; // ecx
  int32_t ret; // [rsp+2Ch] [rbp-14h]

  v3 = proto::PlayerOfferingRsp::mutable_offering_data(rsp_0);
  v4 = proto::PlayerOfferingReq::offering_id(req);
  proto::PlayerOfferingData::set_offering_id(v3, v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  OfferingComp = Player::getOfferingComp(this->player_);
  v6 = proto::PlayerOfferingReq::offering_id(req);
  ret = PlayerOfferingComp::playerOffering(OfferingComp, v6, rsp_0);
  proto::PlayerOfferingRsp::set_retcode(rsp_0, ret);
  return ret;
};

// Line 40: range 00000000168A5C54-00000000168A5E86
int32_t __cdecl OfferingHandler::onTakeOfferingLevelRewardReq(
        OfferingHandler *const this,
        const proto::TakeOfferingLevelRewardReq *req,
        proto::TakeOfferingLevelRewardRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  google::protobuf::uint32 v6; // edx
  google::protobuf::uint32 v7; // edx
  PlayerOfferingComp *OfferingComp; // r14
  uint32_t v9; // r15d
  uint32_t v10; // eax
  google::protobuf::RepeatedPtrField<proto::ItemParam> *v11; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+2Ch] [rbp-94h]
  char v15[144]; // [rsp+30h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 22 add_item_result_vec:43";
  *(_QWORD *)(v3 + 16) = OfferingHandler::onTakeOfferingLevelRewardReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  v6 = proto::TakeOfferingLevelRewardReq::offering_id(req);
  proto::TakeOfferingLevelRewardRsp::set_offering_id(rsp_0, v6);
  v7 = proto::TakeOfferingLevelRewardReq::level(req);
  proto::TakeOfferingLevelRewardRsp::set_take_level(rsp_0, v7);
  std::vector<AddItemResult>::vector((std::vector<AddItemResult> *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  OfferingComp = Player::getOfferingComp(this->player_);
  v9 = proto::TakeOfferingLevelRewardReq::level(req);
  v10 = proto::TakeOfferingLevelRewardReq::offering_id(req);
  ret = PlayerOfferingComp::takeLevelReward(OfferingComp, v10, v9, (std::vector<AddItemResult> *)(v3 + 32));
  v11 = proto::TakeOfferingLevelRewardRsp::mutable_item_list(rsp_0);
  ItemUtils::vecToProtoItemParam((const std::vector<AddItemResult> *)(v3 + 32), v11);
  proto::TakeOfferingLevelRewardRsp::set_retcode(rsp_0, ret);
  std::vector<AddItemResult>::~vector((std::vector<AddItemResult> *const)(v3 + 32));
  result = ret;
  if ( v15 == (char *)v3 )
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

// Line 51: range 00000000168A5E88-00000000168A5F11
int32_t __cdecl OfferingHandler::onOfferingInteractReq(
        OfferingHandler *const this,
        const proto::OfferingInteractReq *req,
        proto::OfferingInteractRsp *rsp_0)
{
  PlayerOfferingComp *OfferingComp; // rbx
  uint32_t v4; // ecx
  int32_t ret; // [rsp+2Ch] [rbp-14h]

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  OfferingComp = Player::getOfferingComp(this->player_);
  v4 = proto::OfferingInteractReq::offering_id(req);
  ret = PlayerOfferingComp::onInteract(OfferingComp, v4, rsp_0);
  proto::OfferingInteractRsp::set_retcode(rsp_0, ret);
  return ret;
};
