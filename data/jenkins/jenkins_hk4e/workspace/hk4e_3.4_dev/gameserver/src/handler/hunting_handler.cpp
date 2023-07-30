// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/hunting_handler.cpp

// Line 20: range 000000001510683E-0000000015106C6F
int32_t __cdecl HuntingHandler::addPacketFuncToMap(HuntingHandler *const this, PacketFuncMap *process_packet_func_map)
{
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v3; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v4; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v5; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v6; // rax
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+1Ch] [rbp-44h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v8; // [rsp+20h] [rbp-40h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+28h] [rbp-38h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-30h] BYREF

  __x = 4326;
  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                  process_packet_func_map,
                  &__x)._M_node;
  v8._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
  if ( std::operator!=(&v8, &__y) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/hunting_handler.cpp",
      "addPacketFuncToMap",
      21);
    common::milog::MiLogStream::operator()(&v10, off_2570C7C0, 4326LL);
    common::milog::MiLogStream::~MiLogStream(&v10);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
    __x = 4326;
    v3 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_map,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<HuntingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}>(
      v3,
      (HuntingHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
    __x = 4325;
    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                    process_packet_func_map,
                    &__x)._M_node;
    v8._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
    if ( std::operator!=(&v8, &__y) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/hunting_handler.cpp",
        "addPacketFuncToMap",
        22);
      common::milog::MiLogStream::operator()(&v10, off_2570C7C0, 4325LL);
      common::milog::MiLogStream::~MiLogStream(&v10);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
      __x = 4325;
      v4 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
             process_packet_func_map,
             &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<HuntingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}>(
        v4,
        (HuntingHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
      __x = 4302;
      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                      process_packet_func_map,
                      &__x)._M_node;
      v8._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
      if ( std::operator!=(&v8, &__y) )
      {
        common::milog::MiLogStream::create(
          &v10,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/hunting_handler.cpp",
          "addPacketFuncToMap",
          23);
        common::milog::MiLogStream::operator()(&v10, off_2570C7C0, 4302LL);
        common::milog::MiLogStream::~MiLogStream(&v10);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
        __x = 4302;
        v5 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
               process_packet_func_map,
               &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<HuntingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}>(
          v5,
          (HuntingHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
        __x = 4341;
        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                        process_packet_func_map,
                        &__x)._M_node;
        v8._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
        if ( std::operator!=(&v8, &__y) )
        {
          common::milog::MiLogStream::create(
            &v10,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/hunting_handler.cpp",
            "addPacketFuncToMap",
            24);
          common::milog::MiLogStream::operator()(&v10, off_2570C7C0, 4341LL);
          common::milog::MiLogStream::~MiLogStream(&v10);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
          __x = 4341;
          v6 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                 process_packet_func_map,
                 &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<HuntingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}>(
            v6,
            (HuntingHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
          return 0;
        }
      }
    }
  }
};

// Line 21: range 0000000015105BC6-0000000015105EE2
int __cdecl HuntingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator()(
        const HuntingHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  HuntingHandler *this; // r14
  std::__shared_ptr_access<const proto::TakeHuntingOfferReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::TakeHuntingOfferRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::TakeHuntingOfferRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:21 64 16 10 rsp_ptr:21";
  *(_QWORD *)(v2 + 16) = HuntingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::TakeHuntingOfferReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::TakeHuntingOfferReq const>(
         (const std::shared_ptr<const proto::TakeHuntingOfferReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/hunting_handler.cpp",
      "operator()",
      21);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::TakeHuntingOfferReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TakeHuntingOfferReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::TakeHuntingOfferRsp>();
    rsp_0 = std::__shared_ptr_access<proto::TakeHuntingOfferRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::TakeHuntingOfferRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::TakeHuntingOfferRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::TakeHuntingOfferReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TakeHuntingOfferReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = HuntingHandler::onTakeHuntingOfferReq(this, v8, rsp_0);
    proto::TakeHuntingOfferRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::TakeHuntingOfferRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::TakeHuntingOfferRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::TakeHuntingOfferRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::TakeHuntingOfferRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::TakeHuntingOfferRsp>::~shared_ptr((std::shared_ptr<proto::TakeHuntingOfferRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::TakeHuntingOfferReq const>::~shared_ptr((std::shared_ptr<const proto::TakeHuntingOfferReq> *const)(v2 + 32));
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

// Line 22: range 0000000015105EE4-0000000015106200
int __cdecl HuntingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator()(
        const HuntingHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  HuntingHandler *this; // r14
  std::__shared_ptr_access<const proto::GetCityHuntingOfferReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GetCityHuntingOfferRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GetCityHuntingOfferRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:22 64 16 10 rsp_ptr:22";
  *(_QWORD *)(v2 + 16) = HuntingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetCityHuntingOfferReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetCityHuntingOfferReq const>(
         (const std::shared_ptr<const proto::GetCityHuntingOfferReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/hunting_handler.cpp",
      "operator()",
      22);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetCityHuntingOfferReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetCityHuntingOfferReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetCityHuntingOfferRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetCityHuntingOfferRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetCityHuntingOfferRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetCityHuntingOfferRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GetCityHuntingOfferReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetCityHuntingOfferReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = HuntingHandler::onGetCityHuntingOfferReq(this, v8, rsp_0);
    proto::GetCityHuntingOfferRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GetCityHuntingOfferRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GetCityHuntingOfferRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GetCityHuntingOfferRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GetCityHuntingOfferRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GetCityHuntingOfferRsp>::~shared_ptr((std::shared_ptr<proto::GetCityHuntingOfferRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetCityHuntingOfferReq const>::~shared_ptr((std::shared_ptr<const proto::GetCityHuntingOfferReq> *const)(v2 + 32));
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

// Line 23: range 0000000015106202-000000001510651E
int __cdecl HuntingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator()(
        const HuntingHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  HuntingHandler *this; // r14
  std::__shared_ptr_access<const proto::GetHuntingOfferRewardReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GetHuntingOfferRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GetHuntingOfferRewardRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:23 64 16 10 rsp_ptr:23";
  *(_QWORD *)(v2 + 16) = HuntingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetHuntingOfferRewardReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetHuntingOfferRewardReq const>(
         (const std::shared_ptr<const proto::GetHuntingOfferRewardReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/hunting_handler.cpp",
      "operator()",
      23);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetHuntingOfferRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetHuntingOfferRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetHuntingOfferRewardRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetHuntingOfferRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetHuntingOfferRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetHuntingOfferRewardRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GetHuntingOfferRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetHuntingOfferRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = HuntingHandler::onGetHuntingOfferRewardReq(this, v8, rsp_0);
    proto::GetHuntingOfferRewardRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GetHuntingOfferRewardRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GetHuntingOfferRewardRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GetHuntingOfferRewardRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GetHuntingOfferRewardRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GetHuntingOfferRewardRsp>::~shared_ptr((std::shared_ptr<proto::GetHuntingOfferRewardRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetHuntingOfferRewardReq const>::~shared_ptr((std::shared_ptr<const proto::GetHuntingOfferRewardReq> *const)(v2 + 32));
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

// Line 24: range 0000000015106520-000000001510683C
int __cdecl HuntingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator()(
        const HuntingHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  HuntingHandler *this; // r14
  std::__shared_ptr_access<const proto::HuntingGiveUpReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::HuntingGiveUpRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::HuntingGiveUpRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = HuntingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::HuntingGiveUpReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::HuntingGiveUpReq const>(
         (const std::shared_ptr<const proto::HuntingGiveUpReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/hunting_handler.cpp",
      "operator()",
      24);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::HuntingGiveUpReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::HuntingGiveUpReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::HuntingGiveUpRsp>();
    rsp_0 = std::__shared_ptr_access<proto::HuntingGiveUpRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::HuntingGiveUpRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::HuntingGiveUpRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::HuntingGiveUpReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::HuntingGiveUpReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = HuntingHandler::onHuntingGiveUpReq(this, v8, rsp_0);
    proto::HuntingGiveUpRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::HuntingGiveUpRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::HuntingGiveUpRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::HuntingGiveUpRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::HuntingGiveUpRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::HuntingGiveUpRsp>::~shared_ptr((std::shared_ptr<proto::HuntingGiveUpRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::HuntingGiveUpReq const>::~shared_ptr((std::shared_ptr<const proto::HuntingGiveUpReq> *const)(v2 + 32));
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

// Line 29: range 0000000015106C70-0000000015106CD0
int32_t __cdecl HuntingHandler::onTakeHuntingOfferReq(
        HuntingHandler *const this,
        const proto::TakeHuntingOfferReq *req,
        proto::TakeHuntingOfferRsp *rsp_0)
{
  PlayerHuntingComp *HuntingComp; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  HuntingComp = Player::getHuntingComp(this->player_);
  return PlayerHuntingComp::takeHuntingOffer(HuntingComp, req, rsp_0);
};

// Line 34: range 0000000015106CD2-0000000015106D32
int32_t __cdecl HuntingHandler::onGetCityHuntingOfferReq(
        HuntingHandler *const this,
        const proto::GetCityHuntingOfferReq *req,
        proto::GetCityHuntingOfferRsp *rsp_0)
{
  PlayerHuntingComp *HuntingComp; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  HuntingComp = Player::getHuntingComp(this->player_);
  return PlayerHuntingComp::clientRequestOfferData(HuntingComp, req, rsp_0);
};

// Line 39: range 0000000015106D34-0000000015106E4D
int32_t __cdecl HuntingHandler::onGetHuntingOfferRewardReq(
        HuntingHandler *const this,
        const proto::GetHuntingOfferRewardReq *req,
        proto::GetHuntingOfferRewardRsp *rsp_0)
{
  google::protobuf::uint32 v3; // edx
  const proto::HuntingPair *v4; // rax
  google::protobuf::uint32 refreshed; // edx
  const proto::HuntingPair *v6; // rax
  google::protobuf::uint32 v7; // edx
  PlayerHuntingComp *HuntingComp; // rbx
  const proto::HuntingPair *v9; // rax
  uint32_t v10; // r13d
  const proto::HuntingPair *v11; // rax
  uint32_t v12; // r12d
  uint32_t v13; // eax
  proto::HuntingPair *hunting_pair; // [rsp+28h] [rbp-28h]

  v3 = proto::GetHuntingOfferRewardReq::city_id(req);
  proto::GetHuntingOfferRewardRsp::set_city_id(rsp_0, v3);
  hunting_pair = proto::GetHuntingOfferRewardRsp::mutable_hunting_pair(rsp_0);
  v4 = proto::GetHuntingOfferRewardReq::hunting_pair(req);
  refreshed = proto::HuntingPair::refresh_id(v4);
  proto::HuntingPair::set_refresh_id(hunting_pair, refreshed);
  v6 = proto::GetHuntingOfferRewardReq::hunting_pair(req);
  v7 = proto::HuntingPair::monster_config_id(v6);
  proto::HuntingPair::set_monster_config_id(hunting_pair, v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  HuntingComp = Player::getHuntingComp(this->player_);
  v9 = proto::GetHuntingOfferRewardReq::hunting_pair(req);
  v10 = proto::HuntingPair::refresh_id(v9);
  v11 = proto::GetHuntingOfferRewardReq::hunting_pair(req);
  v12 = proto::HuntingPair::monster_config_id(v11);
  v13 = proto::GetHuntingOfferRewardReq::city_id(req);
  return PlayerHuntingComp::getHuntingOfferReward(HuntingComp, v13, v12, v10);
};

// Line 48: range 0000000015106E4E-0000000015106F35
int32_t __cdecl HuntingHandler::onHuntingGiveUpReq(
        HuntingHandler *const this,
        const proto::HuntingGiveUpReq *req,
        proto::HuntingGiveUpRsp *rsp_0)
{
  const proto::HuntingPair *v3; // rax
  google::protobuf::uint32 refreshed; // edx
  const proto::HuntingPair *v5; // rax
  google::protobuf::uint32 v6; // edx
  PlayerHuntingComp *HuntingComp; // rbx
  const proto::HuntingPair *v8; // rax
  uint32_t v9; // r12d
  const proto::HuntingPair *v10; // rax
  uint32_t v11; // eax
  proto::HuntingPair *hunting_pair; // [rsp+28h] [rbp-18h]

  hunting_pair = proto::HuntingGiveUpRsp::mutable_hunting_pair(rsp_0);
  v3 = proto::HuntingGiveUpReq::hunting_pair(req);
  refreshed = proto::HuntingPair::refresh_id(v3);
  proto::HuntingPair::set_refresh_id(hunting_pair, refreshed);
  v5 = proto::HuntingGiveUpReq::hunting_pair(req);
  v6 = proto::HuntingPair::monster_config_id(v5);
  proto::HuntingPair::set_monster_config_id(hunting_pair, v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  HuntingComp = Player::getHuntingComp(this->player_);
  v8 = proto::HuntingGiveUpReq::hunting_pair(req);
  v9 = proto::HuntingPair::monster_config_id(v8);
  v10 = proto::HuntingGiveUpReq::hunting_pair(req);
  v11 = proto::HuntingPair::refresh_id(v10);
  return PlayerHuntingComp::giveUpHuntingOffer(HuntingComp, v11, v9);
};
