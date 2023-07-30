// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/coop_handler.cpp

// Line 24: range 00000000130FAC92-00000000130FB4D3
int32_t __cdecl CoopHandler::addPacketFuncToMap(CoopHandler *const this, PacketFuncMap *process_packet_func_map)
{
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v3; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v4; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v5; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v6; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v7; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v8; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v9; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v10; // rax
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+1Ch] [rbp-44h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v12; // [rsp+20h] [rbp-40h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+28h] [rbp-38h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-30h] BYREF

  __x = 1975;
  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                  process_packet_func_map,
                  &__x)._M_node;
  v12._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
  if ( std::operator!=(&v12, &__y) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/coop_handler.cpp",
      "addPacketFuncToMap",
      25);
    common::milog::MiLogStream::operator()(&v14, format, 1975LL);
    common::milog::MiLogStream::~MiLogStream(&v14);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
    __x = 1975;
    v3 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_map,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<CoopHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}>(
      v3,
      (CoopHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
    __x = 1952;
    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                    process_packet_func_map,
                    &__x)._M_node;
    v12._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
    if ( std::operator!=(&v12, &__y) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/coop_handler.cpp",
        "addPacketFuncToMap",
        26);
      common::milog::MiLogStream::operator()(&v14, format, 1952LL);
      common::milog::MiLogStream::~MiLogStream(&v14);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
      __x = 1952;
      v4 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
             process_packet_func_map,
             &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<CoopHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}>(
        v4,
        (CoopHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
      __x = 1970;
      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                      process_packet_func_map,
                      &__x)._M_node;
      v12._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
      if ( std::operator!=(&v12, &__y) )
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/coop_handler.cpp",
          "addPacketFuncToMap",
          27);
        common::milog::MiLogStream::operator()(&v14, format, 1970LL);
        common::milog::MiLogStream::~MiLogStream(&v14);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
        __x = 1970;
        v5 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
               process_packet_func_map,
               &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<CoopHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}>(
          v5,
          (CoopHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
        __x = 1992;
        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                        process_packet_func_map,
                        &__x)._M_node;
        v12._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
        if ( std::operator!=(&v12, &__y) )
        {
          common::milog::MiLogStream::create(
            &v14,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/coop_handler.cpp",
            "addPacketFuncToMap",
            28);
          common::milog::MiLogStream::operator()(&v14, format, 1992LL);
          common::milog::MiLogStream::~MiLogStream(&v14);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
          __x = 1992;
          v6 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                 process_packet_func_map,
                 &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<CoopHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}>(
            v6,
            (CoopHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
          __x = 1997;
          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                          process_packet_func_map,
                          &__x)._M_node;
          v12._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
          if ( std::operator!=(&v12, &__y) )
          {
            common::milog::MiLogStream::create(
              &v14,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/handler/coop_handler.cpp",
              "addPacketFuncToMap",
              29);
            common::milog::MiLogStream::operator()(&v14, format, 1997LL);
            common::milog::MiLogStream::~MiLogStream(&v14);
            return -1;
          }
          else
          {
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
            __x = 1997;
            v7 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                   process_packet_func_map,
                   &__x);
            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<CoopHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}>(
              v7,
              (CoopHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
            __x = 1973;
            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                            process_packet_func_map,
                            &__x)._M_node;
            v12._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
            if ( std::operator!=(&v12, &__y) )
            {
              common::milog::MiLogStream::create(
                &v14,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/handler/coop_handler.cpp",
                "addPacketFuncToMap",
                30);
              common::milog::MiLogStream::operator()(&v14, format, 1973LL);
              common::milog::MiLogStream::~MiLogStream(&v14);
              return -1;
            }
            else
            {
              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
              __x = 1973;
              v8 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                     process_packet_func_map,
                     &__x);
              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<CoopHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}>(
                v8,
                (CoopHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
              __x = 2000;
              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                              process_packet_func_map,
                              &__x)._M_node;
              v12._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
              if ( std::operator!=(&v12, &__y) )
              {
                common::milog::MiLogStream::create(
                  &v14,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/handler/coop_handler.cpp",
                  "addPacketFuncToMap",
                  31);
                common::milog::MiLogStream::operator()(&v14, format, 2000LL);
                common::milog::MiLogStream::~MiLogStream(&v14);
                return -1;
              }
              else
              {
                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                __x = 2000;
                v9 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                       process_packet_func_map,
                       &__x);
                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<CoopHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}>(
                  v9,
                  (CoopHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                __x = 1965;
                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                process_packet_func_map,
                                &__x)._M_node;
                v12._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
                if ( std::operator!=(&v12, &__y) )
                {
                  common::milog::MiLogStream::create(
                    &v14,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/handler/coop_handler.cpp",
                    "addPacketFuncToMap",
                    32);
                  common::milog::MiLogStream::operator()(&v14, format, 1965LL);
                  common::milog::MiLogStream::~MiLogStream(&v14);
                  return -1;
                }
                else
                {
                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                  __x = 1965;
                  v10 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                          process_packet_func_map,
                          &__x);
                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<CoopHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#8}>(
                    v10,
                    (CoopHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                  return 0;
                }
              }
            }
          }
        }
      }
    }
  }
};

// Line 25: range 00000000130F93A2-00000000130F96BE
int __cdecl CoopHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator()(
        const CoopHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  CoopHandler *this; // r14
  std::__shared_ptr_access<const proto::SaveMainCoopReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::SaveMainCoopRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::SaveMainCoopRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = CoopHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SaveMainCoopReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SaveMainCoopReq const>(
         (const std::shared_ptr<const proto::SaveMainCoopReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/coop_handler.cpp",
      "operator()",
      25);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::SaveMainCoopReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SaveMainCoopReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::SaveMainCoopRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SaveMainCoopRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SaveMainCoopRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::SaveMainCoopRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::SaveMainCoopReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SaveMainCoopReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = CoopHandler::onSaveMainCoopReq(this, v8, rsp_0);
    proto::SaveMainCoopRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::SaveMainCoopRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::SaveMainCoopRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::SaveMainCoopRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::SaveMainCoopRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::SaveMainCoopRsp>::~shared_ptr((std::shared_ptr<proto::SaveMainCoopRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::SaveMainCoopReq const>::~shared_ptr((std::shared_ptr<const proto::SaveMainCoopReq> *const)(v2 + 32));
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

// Line 26: range 00000000130F96C0-00000000130F99DC
int __cdecl CoopHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator()(
        const CoopHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  CoopHandler *this; // r14
  std::__shared_ptr_access<const proto::FinishMainCoopReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::FinishMainCoopRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::FinishMainCoopRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = CoopHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::FinishMainCoopReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::FinishMainCoopReq const>(
         (const std::shared_ptr<const proto::FinishMainCoopReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/coop_handler.cpp",
      "operator()",
      26);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::FinishMainCoopReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::FinishMainCoopReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::FinishMainCoopRsp>();
    rsp_0 = std::__shared_ptr_access<proto::FinishMainCoopRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::FinishMainCoopRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::FinishMainCoopRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::FinishMainCoopReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::FinishMainCoopReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = CoopHandler::onFinishMainCoopReq(this, v8, rsp_0);
    proto::FinishMainCoopRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::FinishMainCoopRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::FinishMainCoopRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::FinishMainCoopRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::FinishMainCoopRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::FinishMainCoopRsp>::~shared_ptr((std::shared_ptr<proto::FinishMainCoopRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::FinishMainCoopReq const>::~shared_ptr((std::shared_ptr<const proto::FinishMainCoopReq> *const)(v2 + 32));
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

// Line 27: range 00000000130F99DE-00000000130F9CFA
int __cdecl CoopHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator()(
        const CoopHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  CoopHandler *this; // r14
  std::__shared_ptr_access<const proto::UnlockCoopChapterReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::UnlockCoopChapterRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::UnlockCoopChapterRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:27 64 16 10 rsp_ptr:27";
  *(_QWORD *)(v2 + 16) = CoopHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::UnlockCoopChapterReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::UnlockCoopChapterReq const>(
         (const std::shared_ptr<const proto::UnlockCoopChapterReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/coop_handler.cpp",
      "operator()",
      27);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::UnlockCoopChapterReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::UnlockCoopChapterReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::UnlockCoopChapterRsp>();
    rsp_0 = std::__shared_ptr_access<proto::UnlockCoopChapterRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::UnlockCoopChapterRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::UnlockCoopChapterRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::UnlockCoopChapterReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::UnlockCoopChapterReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = CoopHandler::onUnlockCoopChapterReq(this, v8, rsp_0);
    proto::UnlockCoopChapterRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::UnlockCoopChapterRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::UnlockCoopChapterRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::UnlockCoopChapterRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::UnlockCoopChapterRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::UnlockCoopChapterRsp>::~shared_ptr((std::shared_ptr<proto::UnlockCoopChapterRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::UnlockCoopChapterReq const>::~shared_ptr((std::shared_ptr<const proto::UnlockCoopChapterReq> *const)(v2 + 32));
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

// Line 28: range 00000000130F9CFC-00000000130FA018
int __cdecl CoopHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator()(
        const CoopHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  CoopHandler *this; // r14
  std::__shared_ptr_access<const proto::StartCoopPointReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::StartCoopPointRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::StartCoopPointRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:28 64 16 10 rsp_ptr:28";
  *(_QWORD *)(v2 + 16) = CoopHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::StartCoopPointReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::StartCoopPointReq const>(
         (const std::shared_ptr<const proto::StartCoopPointReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/coop_handler.cpp",
      "operator()",
      28);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::StartCoopPointReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::StartCoopPointReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::StartCoopPointRsp>();
    rsp_0 = std::__shared_ptr_access<proto::StartCoopPointRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::StartCoopPointRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::StartCoopPointRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::StartCoopPointReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::StartCoopPointReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = CoopHandler::onStartCoopPointReq(this, v8, rsp_0);
    proto::StartCoopPointRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::StartCoopPointRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::StartCoopPointRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::StartCoopPointRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::StartCoopPointRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::StartCoopPointRsp>::~shared_ptr((std::shared_ptr<proto::StartCoopPointRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::StartCoopPointReq const>::~shared_ptr((std::shared_ptr<const proto::StartCoopPointReq> *const)(v2 + 32));
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

// Line 29: range 00000000130FA01A-00000000130FA336
int __cdecl CoopHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator()(
        const CoopHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  CoopHandler *this; // r14
  std::__shared_ptr_access<const proto::CancelCoopTaskReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::CancelCoopTaskRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::CancelCoopTaskRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = CoopHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::CancelCoopTaskReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::CancelCoopTaskReq const>(
         (const std::shared_ptr<const proto::CancelCoopTaskReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/coop_handler.cpp",
      "operator()",
      29);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::CancelCoopTaskReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::CancelCoopTaskReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::CancelCoopTaskRsp>();
    rsp_0 = std::__shared_ptr_access<proto::CancelCoopTaskRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::CancelCoopTaskRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::CancelCoopTaskRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::CancelCoopTaskReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::CancelCoopTaskReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = CoopHandler::onCancelCoopTaskReq(this, v8, rsp_0);
    proto::CancelCoopTaskRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::CancelCoopTaskRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::CancelCoopTaskRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::CancelCoopTaskRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::CancelCoopTaskRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::CancelCoopTaskRsp>::~shared_ptr((std::shared_ptr<proto::CancelCoopTaskRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::CancelCoopTaskReq const>::~shared_ptr((std::shared_ptr<const proto::CancelCoopTaskReq> *const)(v2 + 32));
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

// Line 30: range 00000000130FA338-00000000130FA654
int __cdecl CoopHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}::operator()(
        const CoopHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  CoopHandler *this; // r14
  std::__shared_ptr_access<const proto::TakeCoopRewardReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::TakeCoopRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::TakeCoopRewardRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = CoopHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::TakeCoopRewardReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::TakeCoopRewardReq const>(
         (const std::shared_ptr<const proto::TakeCoopRewardReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/coop_handler.cpp",
      "operator()",
      30);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::TakeCoopRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TakeCoopRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::TakeCoopRewardRsp>();
    rsp_0 = std::__shared_ptr_access<proto::TakeCoopRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::TakeCoopRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::TakeCoopRewardRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::TakeCoopRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TakeCoopRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = CoopHandler::onTakeCoopRewardReq(this, v8, rsp_0);
    proto::TakeCoopRewardRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::TakeCoopRewardRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::TakeCoopRewardRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::TakeCoopRewardRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::TakeCoopRewardRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::TakeCoopRewardRsp>::~shared_ptr((std::shared_ptr<proto::TakeCoopRewardRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::TakeCoopRewardReq const>::~shared_ptr((std::shared_ptr<const proto::TakeCoopRewardReq> *const)(v2 + 32));
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

// Line 31: range 00000000130FA656-00000000130FA972
int __cdecl CoopHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}::operator()(
        const CoopHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  CoopHandler *this; // r14
  std::__shared_ptr_access<const proto::SaveCoopDialogReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::SaveCoopDialogRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::SaveCoopDialogRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = CoopHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SaveCoopDialogReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SaveCoopDialogReq const>(
         (const std::shared_ptr<const proto::SaveCoopDialogReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/coop_handler.cpp",
      "operator()",
      31);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::SaveCoopDialogReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SaveCoopDialogReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::SaveCoopDialogRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SaveCoopDialogRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SaveCoopDialogRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::SaveCoopDialogRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::SaveCoopDialogReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SaveCoopDialogReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = CoopHandler::onSaveCoopDialogReq(this, v8, rsp_0);
    proto::SaveCoopDialogRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::SaveCoopDialogRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::SaveCoopDialogRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::SaveCoopDialogRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::SaveCoopDialogRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::SaveCoopDialogRsp>::~shared_ptr((std::shared_ptr<proto::SaveCoopDialogRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::SaveCoopDialogReq const>::~shared_ptr((std::shared_ptr<const proto::SaveCoopDialogReq> *const)(v2 + 32));
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

// Line 32: range 00000000130FA974-00000000130FAC90
int __cdecl CoopHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#8}::operator()(
        const CoopHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  CoopHandler *this; // r14
  std::__shared_ptr_access<const proto::SetCoopChapterViewedReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::SetCoopChapterViewedRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::SetCoopChapterViewedRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = CoopHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#8}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SetCoopChapterViewedReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SetCoopChapterViewedReq const>(
         (const std::shared_ptr<const proto::SetCoopChapterViewedReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/coop_handler.cpp",
      "operator()",
      32);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::SetCoopChapterViewedReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SetCoopChapterViewedReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::SetCoopChapterViewedRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SetCoopChapterViewedRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SetCoopChapterViewedRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::SetCoopChapterViewedRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::SetCoopChapterViewedReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SetCoopChapterViewedReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = CoopHandler::onSetCoopChapterViewedReq(this, v8, rsp_0);
    proto::SetCoopChapterViewedRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::SetCoopChapterViewedRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::SetCoopChapterViewedRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::SetCoopChapterViewedRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::SetCoopChapterViewedRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::SetCoopChapterViewedRsp>::~shared_ptr((std::shared_ptr<proto::SetCoopChapterViewedRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::SetCoopChapterViewedReq const>::~shared_ptr((std::shared_ptr<const proto::SetCoopChapterViewedReq> *const)(v2 + 32));
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

// Line 37: range 00000000130FB4D4-00000000130FB550
int32_t __cdecl CoopHandler::onSaveMainCoopReq(
        CoopHandler *const this,
        const proto::SaveMainCoopReq *req,
        proto::SaveMainCoopRsp *rsp_0)
{
  google::protobuf::uint32 v3; // edx
  PlayerCoopComp *CoopComp; // rcx

  v3 = proto::SaveMainCoopReq::id(req);
  proto::SaveMainCoopRsp::set_id(rsp_0, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  CoopComp = Player::getCoopComp(this->player_);
  return PlayerCoopComp::saveMainCoop(CoopComp, req, rsp_0);
};

// Line 43: range 00000000130FB552-00000000130FB6AF
int32_t __cdecl CoopHandler::onFinishMainCoopReq(
        CoopHandler *const this,
        const proto::FinishMainCoopReq *req,
        proto::FinishMainCoopRsp *rsp_0)
{
  google::protobuf::uint32 v3; // edx
  google::protobuf::uint32 v4; // edx
  common::milog::MiLogStream *v5; // rbx
  PlayerCoopComp *CoopComp; // rbx
  uint32_t v8; // r12d
  uint32_t v9; // eax
  unsigned int val; // [rsp+2Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-30h] BYREF

  v3 = proto::FinishMainCoopReq::id(req);
  proto::FinishMainCoopRsp::set_id(rsp_0, v3);
  v4 = proto::FinishMainCoopReq::ending_save_point_id(req);
  proto::FinishMainCoopRsp::set_ending_save_point_id(rsp_0, v4);
  if ( proto::FinishMainCoopReq::ending_save_point_id(req) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    CoopComp = Player::getCoopComp(this->player_);
    v8 = proto::FinishMainCoopReq::ending_save_point_id(req);
    v9 = proto::FinishMainCoopReq::id(req);
    return PlayerCoopComp::finishMainCoop(CoopComp, v9, v8);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/coop_handler.cpp",
      "onFinishMainCoopReq",
      48);
    v5 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v12,
           (const char (*)[34])"save main coop point id is 0, id:");
    val = proto::FinishMainCoopReq::id(req);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v12);
    return -1;
  }
};

// Line 55: range 00000000130FB6B0-00000000130FB735
int32_t __cdecl CoopHandler::onUnlockCoopChapterReq(
        CoopHandler *const this,
        const proto::UnlockCoopChapterReq *req,
        proto::UnlockCoopChapterRsp *rsp_0)
{
  google::protobuf::uint32 v3; // edx
  PlayerCoopComp *CoopComp; // rbx
  uint32_t v5; // eax

  v3 = proto::UnlockCoopChapterReq::chapter_id(req);
  proto::UnlockCoopChapterRsp::set_chapter_id(rsp_0, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  CoopComp = Player::getCoopComp(this->player_);
  v5 = proto::UnlockCoopChapterReq::chapter_id(req);
  return PlayerCoopComp::unlockCoopChapter(CoopComp, v5);
};

// Line 61: range 00000000130FB736-00000000130FB796
int32_t __cdecl CoopHandler::onStartCoopPointReq(
        CoopHandler *const this,
        const proto::StartCoopPointReq *req,
        proto::StartCoopPointRsp *rsp_0)
{
  PlayerCoopComp *CoopComp; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  CoopComp = Player::getCoopComp(this->player_);
  return PlayerCoopComp::startCoopPoint(CoopComp, req, rsp_0);
};

// Line 66: range 00000000130FB798-00000000130FB81D
int32_t __cdecl CoopHandler::onCancelCoopTaskReq(
        CoopHandler *const this,
        const proto::CancelCoopTaskReq *req,
        proto::CancelCoopTaskRsp *rsp_0)
{
  google::protobuf::uint32 v3; // edx
  PlayerCoopComp *CoopComp; // rbx
  uint32_t v5; // eax

  v3 = proto::CancelCoopTaskReq::chapter_id(req);
  proto::CancelCoopTaskRsp::set_chapter_id(rsp_0, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  CoopComp = Player::getCoopComp(this->player_);
  v5 = proto::CancelCoopTaskReq::chapter_id(req);
  return PlayerCoopComp::cancelCookTask(CoopComp, v5);
};

// Line 72: range 00000000130FB81E-00000000130FB8A3
int32_t __cdecl CoopHandler::onTakeCoopRewardReq(
        CoopHandler *const this,
        const proto::TakeCoopRewardReq *req,
        proto::TakeCoopRewardRsp *rsp_0)
{
  google::protobuf::uint32 v3; // edx
  PlayerCoopComp *CoopComp; // rbx
  uint32_t v5; // eax

  v3 = proto::TakeCoopRewardReq::reward_config_id(req);
  proto::TakeCoopRewardRsp::set_reward_config_id(rsp_0, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  CoopComp = Player::getCoopComp(this->player_);
  v5 = proto::TakeCoopRewardReq::reward_config_id(req);
  return PlayerCoopComp::takeCoopReward(CoopComp, v5);
};

// Line 78: range 00000000130FB8A4-00000000130FB95B
int32_t __cdecl CoopHandler::onSaveCoopDialogReq(
        CoopHandler *const this,
        const proto::SaveCoopDialogReq *req,
        proto::SaveCoopDialogRsp *rsp_0)
{
  google::protobuf::uint32 v3; // edx
  google::protobuf::uint32 v4; // edx
  PlayerCoopComp *CoopComp; // rbx
  uint32_t v6; // r12d
  uint32_t v7; // eax

  v3 = proto::SaveCoopDialogReq::main_coop_id(req);
  proto::SaveCoopDialogRsp::set_main_coop_id(rsp_0, v3);
  v4 = proto::SaveCoopDialogReq::dialog_id(req);
  proto::SaveCoopDialogRsp::set_dialog_id(rsp_0, v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  CoopComp = Player::getCoopComp(this->player_);
  v6 = proto::SaveCoopDialogReq::dialog_id(req);
  v7 = proto::SaveCoopDialogReq::main_coop_id(req);
  return PlayerCoopComp::saveCoopDialog(CoopComp, v7, v6);
};

// Line 85: range 00000000130FB95C-00000000130FB9E1
int32_t __cdecl CoopHandler::onSetCoopChapterViewedReq(
        CoopHandler *const this,
        const proto::SetCoopChapterViewedReq *req,
        proto::SetCoopChapterViewedRsp *rsp_0)
{
  google::protobuf::uint32 v3; // edx
  PlayerCoopComp *CoopComp; // rbx
  uint32_t v5; // eax

  v3 = proto::SetCoopChapterViewedReq::chapter_id(req);
  proto::SetCoopChapterViewedRsp::set_chapter_id(rsp_0, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  CoopComp = Player::getCoopComp(this->player_);
  v5 = proto::SetCoopChapterViewedReq::chapter_id(req);
  return PlayerCoopComp::setCoopChapterViewed(CoopComp, v5);
};
