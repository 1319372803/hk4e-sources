// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/fishing_handler.cpp

// Line 28: range 00000000150F4460-00000000150F4B9D
int32_t __cdecl FishingHandler::addPacketFuncToMap(FishingHandler *const this, PacketFuncMap *process_packet_func_map)
{
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v3; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v4; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v5; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v6; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v7; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v8; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v9; // rax
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+1Ch] [rbp-44h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v11; // [rsp+20h] [rbp-40h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+28h] [rbp-38h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-30h] BYREF

  __x = 5826;
  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                  process_packet_func_map,
                  &__x)._M_node;
  v11._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
  if ( std::operator!=(&v11, &__y) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/fishing_handler.cpp",
      "addPacketFuncToMap",
      29);
    common::milog::MiLogStream::operator()(&v13, off_2570C7C0, 5826LL);
    common::milog::MiLogStream::~MiLogStream(&v13);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
    __x = 5826;
    v3 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_map,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<FishingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}>(
      v3,
      (FishingHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
    __x = 5825;
    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                    process_packet_func_map,
                    &__x)._M_node;
    v11._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
    if ( std::operator!=(&v11, &__y) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/fishing_handler.cpp",
        "addPacketFuncToMap",
        30);
      common::milog::MiLogStream::operator()(&v13, off_2570C7C0, 5825LL);
      common::milog::MiLogStream::~MiLogStream(&v13);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
      __x = 5825;
      v4 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
             process_packet_func_map,
             &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<FishingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}>(
        v4,
        (FishingHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
      __x = 5802;
      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                      process_packet_func_map,
                      &__x)._M_node;
      v11._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
      if ( std::operator!=(&v11, &__y) )
      {
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/fishing_handler.cpp",
          "addPacketFuncToMap",
          31);
        common::milog::MiLogStream::operator()(&v13, off_2570C7C0, 5802LL);
        common::milog::MiLogStream::~MiLogStream(&v13);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
        __x = 5802;
        v5 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
               process_packet_func_map,
               &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<FishingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}>(
          v5,
          (FishingHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
        __x = 5844;
        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                        process_packet_func_map,
                        &__x)._M_node;
        v11._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
        if ( std::operator!=(&v11, &__y) )
        {
          common::milog::MiLogStream::create(
            &v13,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/fishing_handler.cpp",
            "addPacketFuncToMap",
            32);
          common::milog::MiLogStream::operator()(&v13, off_2570C7C0, 5844LL);
          common::milog::MiLogStream::~MiLogStream(&v13);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
          __x = 5844;
          v6 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                 process_packet_func_map,
                 &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<FishingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}>(
            v6,
            (FishingHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
          __x = 5820;
          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                          process_packet_func_map,
                          &__x)._M_node;
          v11._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
          if ( std::operator!=(&v11, &__y) )
          {
            common::milog::MiLogStream::create(
              &v13,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/handler/fishing_handler.cpp",
              "addPacketFuncToMap",
              33);
            common::milog::MiLogStream::operator()(&v13, off_2570C7C0, 5820LL);
            common::milog::MiLogStream::~MiLogStream(&v13);
            return -1;
          }
          else
          {
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
            __x = 5820;
            v7 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                   process_packet_func_map,
                   &__x);
            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<FishingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}>(
              v7,
              (FishingHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
            __x = 5841;
            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                            process_packet_func_map,
                            &__x)._M_node;
            v11._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
            if ( std::operator!=(&v11, &__y) )
            {
              common::milog::MiLogStream::create(
                &v13,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/handler/fishing_handler.cpp",
                "addPacketFuncToMap",
                34);
              common::milog::MiLogStream::operator()(&v13, off_2570C7C0, 5841LL);
              common::milog::MiLogStream::~MiLogStream(&v13);
              return -1;
            }
            else
            {
              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
              __x = 5841;
              v8 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                     process_packet_func_map,
                     &__x);
              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<FishingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}>(
                v8,
                (FishingHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
              __x = 5814;
              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                              process_packet_func_map,
                              &__x)._M_node;
              v11._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
              if ( std::operator!=(&v11, &__y) )
              {
                common::milog::MiLogStream::create(
                  &v13,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/handler/fishing_handler.cpp",
                  "addPacketFuncToMap",
                  35);
                common::milog::MiLogStream::operator()(&v13, off_2570C7C0, 5814LL);
                common::milog::MiLogStream::~MiLogStream(&v13);
                return -1;
              }
              else
              {
                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                __x = 5814;
                v9 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                       process_packet_func_map,
                       &__x);
                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<FishingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}>(
                  v9,
                  (FishingHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                return 0;
              }
            }
          }
        }
      }
    }
  }
};

// Line 29: range 00000000150F2E8E-00000000150F31AA
int __cdecl FishingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator()(
        const FishingHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  FishingHandler *this; // r14
  std::__shared_ptr_access<const proto::EnterFishingReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::EnterFishingRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::EnterFishingRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:29 64 16 10 rsp_ptr:29";
  *(_QWORD *)(v2 + 16) = FishingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::EnterFishingReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::EnterFishingReq const>(
         (const std::shared_ptr<const proto::EnterFishingReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fishing_handler.cpp",
      "operator()",
      29);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::EnterFishingReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::EnterFishingReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::EnterFishingRsp>();
    rsp_0 = std::__shared_ptr_access<proto::EnterFishingRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::EnterFishingRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::EnterFishingRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::EnterFishingReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::EnterFishingReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = FishingHandler::onEnterFishingReq(this, v8, rsp_0);
    proto::EnterFishingRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::EnterFishingRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::EnterFishingRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::EnterFishingRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::EnterFishingRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::EnterFishingRsp>::~shared_ptr((std::shared_ptr<proto::EnterFishingRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::EnterFishingReq const>::~shared_ptr((std::shared_ptr<const proto::EnterFishingReq> *const)(v2 + 32));
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

// Line 30: range 00000000150F31AC-00000000150F34C8
int __cdecl FishingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator()(
        const FishingHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  FishingHandler *this; // r14
  std::__shared_ptr_access<const proto::StartFishingReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::StartFishingRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::StartFishingRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = FishingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::StartFishingReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::StartFishingReq const>(
         (const std::shared_ptr<const proto::StartFishingReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fishing_handler.cpp",
      "operator()",
      30);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::StartFishingReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::StartFishingReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::StartFishingRsp>();
    rsp_0 = std::__shared_ptr_access<proto::StartFishingRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::StartFishingRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::StartFishingRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::StartFishingReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::StartFishingReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = FishingHandler::onStartFishingReq(this, v8, rsp_0);
    proto::StartFishingRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::StartFishingRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::StartFishingRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::StartFishingRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::StartFishingRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::StartFishingRsp>::~shared_ptr((std::shared_ptr<proto::StartFishingRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::StartFishingReq const>::~shared_ptr((std::shared_ptr<const proto::StartFishingReq> *const)(v2 + 32));
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

// Line 31: range 00000000150F34CA-00000000150F37E6
int __cdecl FishingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator()(
        const FishingHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  FishingHandler *this; // r14
  std::__shared_ptr_access<const proto::FishCastRodReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::FishCastRodRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::FishCastRodRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = FishingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::FishCastRodReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::FishCastRodReq const>(
         (const std::shared_ptr<const proto::FishCastRodReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fishing_handler.cpp",
      "operator()",
      31);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::FishCastRodReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::FishCastRodReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::FishCastRodRsp>();
    rsp_0 = std::__shared_ptr_access<proto::FishCastRodRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::FishCastRodRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::FishCastRodRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::FishCastRodReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::FishCastRodReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = FishingHandler::onFishCastRodReq(this, v8, rsp_0);
    proto::FishCastRodRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::FishCastRodRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::FishCastRodRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::FishCastRodRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::FishCastRodRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::FishCastRodRsp>::~shared_ptr((std::shared_ptr<proto::FishCastRodRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::FishCastRodReq const>::~shared_ptr((std::shared_ptr<const proto::FishCastRodReq> *const)(v2 + 32));
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

// Line 32: range 00000000150F37E8-00000000150F3B04
int __cdecl FishingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator()(
        const FishingHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  FishingHandler *this; // r14
  std::__shared_ptr_access<const proto::FishBiteReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::FishBiteRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::FishBiteRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = FishingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::FishBiteReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::FishBiteReq const>((const std::shared_ptr<const proto::FishBiteReq> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fishing_handler.cpp",
      "operator()",
      32);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::FishBiteReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::FishBiteReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::FishBiteRsp>();
    rsp_0 = std::__shared_ptr_access<proto::FishBiteRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::FishBiteRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::FishBiteRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::FishBiteReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::FishBiteReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = FishingHandler::onFishBiteReq(this, v8, rsp_0);
    proto::FishBiteRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::FishBiteRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::FishBiteRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::FishBiteRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::FishBiteRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::FishBiteRsp>::~shared_ptr((std::shared_ptr<proto::FishBiteRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::FishBiteReq const>::~shared_ptr((std::shared_ptr<const proto::FishBiteReq> *const)(v2 + 32));
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

// Line 33: range 00000000150F3B06-00000000150F3E22
int __cdecl FishingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator()(
        const FishingHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  FishingHandler *this; // r14
  std::__shared_ptr_access<const proto::FishBattleBeginReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::FishBattleBeginRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::FishBattleBeginRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:33 64 16 10 rsp_ptr:33";
  *(_QWORD *)(v2 + 16) = FishingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::FishBattleBeginReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::FishBattleBeginReq const>(
         (const std::shared_ptr<const proto::FishBattleBeginReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fishing_handler.cpp",
      "operator()",
      33);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::FishBattleBeginReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::FishBattleBeginReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::FishBattleBeginRsp>();
    rsp_0 = std::__shared_ptr_access<proto::FishBattleBeginRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::FishBattleBeginRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::FishBattleBeginRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::FishBattleBeginReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::FishBattleBeginReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = FishingHandler::onFishBattleBeginReq(this, v8, rsp_0);
    proto::FishBattleBeginRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::FishBattleBeginRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::FishBattleBeginRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::FishBattleBeginRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::FishBattleBeginRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::FishBattleBeginRsp>::~shared_ptr((std::shared_ptr<proto::FishBattleBeginRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::FishBattleBeginReq const>::~shared_ptr((std::shared_ptr<const proto::FishBattleBeginReq> *const)(v2 + 32));
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

// Line 34: range 00000000150F3E24-00000000150F4140
int __cdecl FishingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}::operator()(
        const FishingHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  FishingHandler *this; // r14
  std::__shared_ptr_access<const proto::FishBattleEndReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::FishBattleEndRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::FishBattleEndRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:34 64 16 10 rsp_ptr:34";
  *(_QWORD *)(v2 + 16) = FishingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::FishBattleEndReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::FishBattleEndReq const>(
         (const std::shared_ptr<const proto::FishBattleEndReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fishing_handler.cpp",
      "operator()",
      34);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::FishBattleEndReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::FishBattleEndReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::FishBattleEndRsp>();
    rsp_0 = std::__shared_ptr_access<proto::FishBattleEndRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::FishBattleEndRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::FishBattleEndRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::FishBattleEndReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::FishBattleEndReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = FishingHandler::onFishBattleEndReq(this, v8, rsp_0);
    proto::FishBattleEndRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::FishBattleEndRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::FishBattleEndRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::FishBattleEndRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::FishBattleEndRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::FishBattleEndRsp>::~shared_ptr((std::shared_ptr<proto::FishBattleEndRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::FishBattleEndReq const>::~shared_ptr((std::shared_ptr<const proto::FishBattleEndReq> *const)(v2 + 32));
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

// Line 35: range 00000000150F4142-00000000150F445E
int __cdecl FishingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}::operator()(
        const FishingHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  FishingHandler *this; // r14
  std::__shared_ptr_access<const proto::ExitFishingReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::ExitFishingRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::ExitFishingRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:35 64 16 10 rsp_ptr:35";
  *(_QWORD *)(v2 + 16) = FishingHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ExitFishingReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ExitFishingReq const>(
         (const std::shared_ptr<const proto::ExitFishingReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fishing_handler.cpp",
      "operator()",
      35);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::ExitFishingReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ExitFishingReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ExitFishingRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ExitFishingRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ExitFishingRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ExitFishingRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::ExitFishingReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ExitFishingReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = FishingHandler::onExitFishingReq(this, v8, rsp_0);
    proto::ExitFishingRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::ExitFishingRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::ExitFishingRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::ExitFishingRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::ExitFishingRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::ExitFishingRsp>::~shared_ptr((std::shared_ptr<proto::ExitFishingRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ExitFishingReq const>::~shared_ptr((std::shared_ptr<const proto::ExitFishingReq> *const)(v2 + 32));
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

// Line 41: range 00000000150F4B9E-00000000150F508F
int32_t __cdecl FishingHandler::onEnterFishingReq(
        FishingHandler *const this,
        const proto::EnterFishingReq *req,
        proto::EnterFishingRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  uint32_t v8; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<FishPoolComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rcx
  int32_t result; // eax
  int32_t ret; // [rsp+2Ch] [rbp-F4h]
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-F0h] BYREF
  char v18[208]; // [rsp+50h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 17 pool_entity_id:52 64 16 12 scene_ptr:46 96 16 13 gadget_ptr:53 128 16 16 fish_pool_ptr:59";
  *(_QWORD *)(v3 + 16) = FishingHandler::onEnterFishingReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  proto::EnterFishingRsp::set_retcode(rsp_0, -1);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 64));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/fishing_handler.cpp",
      "onEnterFishingReq",
      49);
    v6 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(&v17, (const char (*)[31])off_2570C8E0);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v3 + 48) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v17);
    v7 = -1;
  }
  else
  {
    *(_DWORD *)(v3 + 48) = proto::EnterFishingReq::fish_pool_id(req);
    v8 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    Scene::findEntity<Gadget>((const Scene *const)(v3 + 96), v8);
    if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/fishing_handler.cpp",
        "onEnterFishingReq",
        56);
      v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v17, (const char (*)[13])"find entity:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])" failed");
      common::milog::MiLogStream::~MiLogStream(&v17);
      v7 = -1;
    }
    else
    {
      std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      EcsBase<Gadget,GadgetCompBase,28u>::findComp<FishPoolComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v3 + 128));
      if ( std::operator==<FishPoolComp>(0LL, (const std::shared_ptr<FishPoolComp> *)(v3 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/fishing_handler.cpp",
          "onEnterFishingReq",
          62);
        v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v17, (const char (*)[11])"entity id:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v12, (const char (*)[18])off_2570C9A0);
        common::milog::MiLogStream::~MiLogStream(&v17);
        v7 = -1;
      }
      else
      {
        v13 = std::__shared_ptr_access<FishPoolComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FishPoolComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        ret = FishPoolComp::playerEnterFishing(v13, this->player_);
        proto::EnterFishingRsp::set_fish_pool_id(rsp_0, *(_DWORD *)(v3 + 48));
        v7 = ret;
      }
      std::shared_ptr<FishPoolComp>::~shared_ptr((std::shared_ptr<FishPoolComp> *const)(v3 + 128));
    }
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 96));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
  result = v7;
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 72: range 00000000150F5090-00000000150F548F
int32_t __cdecl FishingHandler::onStartFishingReq(
        FishingHandler *const this,
        const proto::StartFishingReq *req,
        proto::StartFishingRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<FishPoolComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  uint32_t v12; // r15d
  uint32_t Uid; // eax
  google::protobuf::uint32 v14; // edx
  int32_t result; // eax
  unsigned int val; // [rsp+28h] [rbp-B8h] BYREF
  int32_t ret; // [rsp+2Ch] [rbp-B4h]
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 13 gadget_ptr:73 64 16 16 fish_pool_ptr:79";
  *(_QWORD *)(v3 + 16) = FishingHandler::onStartFishingReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getFishingComp(this->player_);
  PlayerFishingComp::getCurFishPool((PlayerFishingComp *const)(v3 + 32));
  if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/fishing_handler.cpp",
      "onStartFishingReq",
      76);
    v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v19,
           (const char (*)[32])"find cur fish pool failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v7 = -1;
  }
  else
  {
    std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    EcsBase<Gadget,GadgetCompBase,28u>::findComp<FishPoolComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v3 + 64));
    if ( std::operator==<FishPoolComp>(0LL, (const std::shared_ptr<FishPoolComp> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/fishing_handler.cpp",
        "onStartFishingReq",
        82);
      v8 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v19, (const char (*)[11])"entity id:");
      v9 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      val = Entity::getEntityId((const Entity *const)v9);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v10, (const char (*)[18])off_2570C9A0);
      common::milog::MiLogStream::~MiLogStream(&v19);
      v7 = -1;
    }
    else
    {
      v11 = std::__shared_ptr_access<FishPoolComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FishPoolComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      v12 = proto::StartFishingReq::rod_entity_id(req);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      ret = FishPoolComp::playerStartFishing(v11, Uid, v12);
      v14 = proto::StartFishingReq::fish_pool_id(req);
      proto::StartFishingRsp::set_fish_pool_id(rsp_0, v14);
      v7 = ret;
    }
    std::shared_ptr<FishPoolComp>::~shared_ptr((std::shared_ptr<FishPoolComp> *const)(v3 + 64));
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 32));
  result = v7;
  if ( v20 == (char *)v3 )
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

// Line 93: range 00000000150F5490-00000000150F5859
int32_t __cdecl FishingHandler::onFishCastRodReq(
        FishingHandler *const this,
        const proto::FishCastRodReq *req,
        proto::FishCastRodRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<FishPoolComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  uint32_t Uid; // ecx
  int32_t result; // eax
  unsigned int val; // [rsp+28h] [rbp-B8h] BYREF
  int32_t ret; // [rsp+2Ch] [rbp-B4h]
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
  *(_QWORD *)(v3 + 8) = "2 32 16 13 gadget_ptr:95 64 16 17 fish_pool_ptr:101";
  *(_QWORD *)(v3 + 16) = FishingHandler::onFishCastRodReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getFishingComp(this->player_);
  PlayerFishingComp::getCurFishPool((PlayerFishingComp *const)(v3 + 32));
  if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/fishing_handler.cpp",
      "onFishCastRodReq",
      98);
    v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v16,
           (const char (*)[32])"find cur fish pool failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v7 = -1;
  }
  else
  {
    std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    EcsBase<Gadget,GadgetCompBase,28u>::findComp<FishPoolComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v3 + 64));
    if ( std::operator==<FishPoolComp>(0LL, (const std::shared_ptr<FishPoolComp> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/fishing_handler.cpp",
        "onFishCastRodReq",
        104);
      v8 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v16, (const char (*)[11])"entity id:");
      v9 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      val = Entity::getEntityId((const Entity *const)v9);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v10, (const char (*)[18])off_2570C9A0);
      common::milog::MiLogStream::~MiLogStream(&v16);
      v7 = -1;
    }
    else
    {
      v11 = std::__shared_ptr_access<FishPoolComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FishPoolComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      ret = FishPoolComp::playerCastRod(v11, Uid, req);
      v7 = ret;
    }
    std::shared_ptr<FishPoolComp>::~shared_ptr((std::shared_ptr<FishPoolComp> *const)(v3 + 64));
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 32));
  result = v7;
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

// Line 113: range 00000000150F585A-00000000150F5C17
int32_t __cdecl FishingHandler::onFishBiteReq(
        FishingHandler *const this,
        const proto::FishBiteReq *req,
        proto::FishBiteRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<FishPoolComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  uint32_t Uid; // eax
  int32_t result; // eax
  unsigned int val; // [rsp+28h] [rbp-B8h] BYREF
  int32_t ret; // [rsp+2Ch] [rbp-B4h]
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
  *(_QWORD *)(v3 + 8) = "2 32 16 14 gadget_ptr:114 64 16 17 fish_pool_ptr:120";
  *(_QWORD *)(v3 + 16) = FishingHandler::onFishBiteReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getFishingComp(this->player_);
  PlayerFishingComp::getCurFishPool((PlayerFishingComp *const)(v3 + 32));
  if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/fishing_handler.cpp",
      "onFishBiteReq",
      117);
    v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v16,
           (const char (*)[32])"find cur fish pool failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v7 = -1;
  }
  else
  {
    std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    EcsBase<Gadget,GadgetCompBase,28u>::findComp<FishPoolComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v3 + 64));
    if ( std::operator==<FishPoolComp>(0LL, (const std::shared_ptr<FishPoolComp> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/fishing_handler.cpp",
        "onFishBiteReq",
        123);
      v8 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v16, (const char (*)[11])"entity id:");
      v9 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      val = Entity::getEntityId((const Entity *const)v9);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v10, (const char (*)[18])off_2570C9A0);
      common::milog::MiLogStream::~MiLogStream(&v16);
      v7 = -1;
    }
    else
    {
      v11 = std::__shared_ptr_access<FishPoolComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FishPoolComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      ret = FishPoolComp::fishBite(v11, Uid);
      v7 = ret;
    }
    std::shared_ptr<FishPoolComp>::~shared_ptr((std::shared_ptr<FishPoolComp> *const)(v3 + 64));
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 32));
  result = v7;
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

// Line 132: range 00000000150F5C18-00000000150F5FD5
int32_t __cdecl FishingHandler::onFishBattleBeginReq(
        FishingHandler *const this,
        const proto::FishBattleBeginReq *req,
        proto::FishBattleBeginRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<FishPoolComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  uint32_t Uid; // eax
  int32_t result; // eax
  unsigned int val; // [rsp+28h] [rbp-B8h] BYREF
  int32_t ret; // [rsp+2Ch] [rbp-B4h]
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
  *(_QWORD *)(v3 + 8) = "2 32 16 14 gadget_ptr:133 64 16 17 fish_pool_ptr:139";
  *(_QWORD *)(v3 + 16) = FishingHandler::onFishBattleBeginReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getFishingComp(this->player_);
  PlayerFishingComp::getCurFishPool((PlayerFishingComp *const)(v3 + 32));
  if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/fishing_handler.cpp",
      "onFishBattleBeginReq",
      136);
    v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v16,
           (const char (*)[32])"find cur fish pool failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v7 = -1;
  }
  else
  {
    std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    EcsBase<Gadget,GadgetCompBase,28u>::findComp<FishPoolComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v3 + 64));
    if ( std::operator==<FishPoolComp>(0LL, (const std::shared_ptr<FishPoolComp> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/fishing_handler.cpp",
        "onFishBattleBeginReq",
        142);
      v8 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v16, (const char (*)[11])"entity id:");
      v9 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      val = Entity::getEntityId((const Entity *const)v9);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v10, (const char (*)[18])off_2570C9A0);
      common::milog::MiLogStream::~MiLogStream(&v16);
      v7 = -1;
    }
    else
    {
      v11 = std::__shared_ptr_access<FishPoolComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FishPoolComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      ret = FishPoolComp::fishBattleBegin(v11, Uid);
      v7 = ret;
    }
    std::shared_ptr<FishPoolComp>::~shared_ptr((std::shared_ptr<FishPoolComp> *const)(v3 + 64));
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 32));
  result = v7;
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

// Line 151: range 00000000150F5FD6-00000000150F63CC
int32_t __cdecl FishingHandler::onFishBattleEndReq(
        FishingHandler *const this,
        const proto::FishBattleEndReq *req,
        proto::FishBattleEndRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<FishPoolComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  uint32_t Uid; // esi
  proto::FishBattleResult v13; // edx
  int32_t result; // eax
  unsigned int val; // [rsp+28h] [rbp-B8h] BYREF
  int32_t ret; // [rsp+2Ch] [rbp-B4h]
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 14 gadget_ptr:152 64 16 17 fish_pool_ptr:158";
  *(_QWORD *)(v3 + 16) = FishingHandler::onFishBattleEndReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getFishingComp(this->player_);
  PlayerFishingComp::getCurFishPool((PlayerFishingComp *const)(v3 + 32));
  if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/fishing_handler.cpp",
      "onFishBattleEndReq",
      155);
    v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v19,
           (const char (*)[32])"find cur fish pool failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v7 = -1;
  }
  else
  {
    std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    EcsBase<Gadget,GadgetCompBase,28u>::findComp<FishPoolComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v3 + 64));
    if ( std::operator==<FishPoolComp>(0LL, (const std::shared_ptr<FishPoolComp> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/fishing_handler.cpp",
        "onFishBattleEndReq",
        161);
      v8 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v19, (const char (*)[11])"entity id:");
      v9 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      val = Entity::getEntityId((const Entity *const)v9);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v10, (const char (*)[18])off_2570C9A0);
      common::milog::MiLogStream::~MiLogStream(&v19);
      v7 = -1;
    }
    else
    {
      v11 = std::__shared_ptr_access<FishPoolComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FishPoolComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      ret = FishPoolComp::fishBattleEnd(v11, Uid, req, rsp_0);
      v13 = proto::FishBattleEndReq::battle_result(req);
      proto::FishBattleEndRsp::set_battle_result(rsp_0, v13);
      v7 = ret;
    }
    std::shared_ptr<FishPoolComp>::~shared_ptr((std::shared_ptr<FishPoolComp> *const)(v3 + 64));
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 32));
  result = v7;
  if ( v20 == (char *)v3 )
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

// Line 171: range 00000000150F63CE-00000000150F6782
int32_t __cdecl FishingHandler::onExitFishingReq(
        FishingHandler *const this,
        const proto::ExitFishingReq *req,
        proto::ExitFishingRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<FishPoolComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rcx
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 14 gadget_ptr:172 64 16 17 fish_pool_ptr:178";
  *(_QWORD *)(v3 + 16) = FishingHandler::onExitFishingReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getFishingComp(this->player_);
  PlayerFishingComp::getCurFishPool((PlayerFishingComp *const)(v3 + 32));
  if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/fishing_handler.cpp",
      "onExitFishingReq",
      175);
    v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v14,
           (const char (*)[32])"find cur fish pool failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v7 = -1;
  }
  else
  {
    std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    EcsBase<Gadget,GadgetCompBase,28u>::findComp<FishPoolComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v3 + 64));
    if ( std::operator==<FishPoolComp>(0LL, (const std::shared_ptr<FishPoolComp> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/fishing_handler.cpp",
        "onExitFishingReq",
        181);
      v8 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v14, (const char (*)[11])"entity id:");
      v9 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      val = Entity::getEntityId((const Entity *const)v9);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v10, (const char (*)[18])off_2570C9A0);
      common::milog::MiLogStream::~MiLogStream(&v14);
      v7 = -1;
    }
    else
    {
      v11 = std::__shared_ptr_access<FishPoolComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FishPoolComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      FishPoolComp::playerExitFishing(v11, this->player_, 0);
      v7 = 0;
    }
    std::shared_ptr<FishPoolComp>::~shared_ptr((std::shared_ptr<FishPoolComp> *const)(v3 + 64));
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 32));
  result = v7;
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
