// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/mechanicus_handler.cpp

// Line 29: range 0000000015120004-0000000015120845
int32_t __cdecl MechanicusHandler::addPacketFuncToMap(
        MechanicusHandler *const this,
        PacketFuncMap *process_packet_func_map)
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

  __x = 3972;
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
      "./src/handler/mechanicus_handler.cpp",
      "addPacketFuncToMap",
      30);
    common::milog::MiLogStream::operator()(&v14, off_2570C7C0, 3972LL);
    common::milog::MiLogStream::~MiLogStream(&v14);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
    __x = 3972;
    v3 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_map,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<MechanicusHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}>(
      v3,
      (MechanicusHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
    __x = 3903;
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
        "./src/handler/mechanicus_handler.cpp",
        "addPacketFuncToMap",
        31);
      common::milog::MiLogStream::operator()(&v14, off_2570C7C0, 3903LL);
      common::milog::MiLogStream::~MiLogStream(&v14);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
      __x = 3903;
      v4 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
             process_packet_func_map,
             &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<MechanicusHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}>(
        v4,
        (MechanicusHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
      __x = 3973;
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
          "./src/handler/mechanicus_handler.cpp",
          "addPacketFuncToMap",
          32);
        common::milog::MiLogStream::operator()(&v14, off_2570C7C0, 3973LL);
        common::milog::MiLogStream::~MiLogStream(&v14);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
        __x = 3973;
        v5 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
               process_packet_func_map,
               &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<MechanicusHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}>(
          v5,
          (MechanicusHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
        __x = 3931;
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
            "./src/handler/mechanicus_handler.cpp",
            "addPacketFuncToMap",
            34);
          common::milog::MiLogStream::operator()(&v14, off_2570C7C0, 3931LL);
          common::milog::MiLogStream::~MiLogStream(&v14);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
          __x = 3931;
          v6 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                 process_packet_func_map,
                 &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<MechanicusHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}>(
            v6,
            (MechanicusHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
          __x = 3981;
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
              "./src/handler/mechanicus_handler.cpp",
              "addPacketFuncToMap",
              35);
            common::milog::MiLogStream::operator()(&v14, off_2570C7C0, 3981LL);
            common::milog::MiLogStream::~MiLogStream(&v14);
            return -1;
          }
          else
          {
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
            __x = 3981;
            v7 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                   process_packet_func_map,
                   &__x);
            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<MechanicusHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}>(
              v7,
              (MechanicusHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
            __x = 5398;
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
                "./src/handler/mechanicus_handler.cpp",
                "addPacketFuncToMap",
                38);
              common::milog::MiLogStream::operator()(&v14, off_2570C7C0, 5398LL);
              common::milog::MiLogStream::~MiLogStream(&v14);
              return -1;
            }
            else
            {
              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
              __x = 5398;
              v8 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                     process_packet_func_map,
                     &__x);
              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<MechanicusHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}>(
                v8,
                (MechanicusHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
              __x = 5390;
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
                  "./src/handler/mechanicus_handler.cpp",
                  "addPacketFuncToMap",
                  39);
                common::milog::MiLogStream::operator()(&v14, off_2570C7C0, 5390LL);
                common::milog::MiLogStream::~MiLogStream(&v14);
                return -1;
              }
              else
              {
                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                __x = 5390;
                v9 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                       process_packet_func_map,
                       &__x);
                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<MechanicusHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}>(
                  v9,
                  (MechanicusHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                __x = 5331;
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
                    "./src/handler/mechanicus_handler.cpp",
                    "addPacketFuncToMap",
                    40);
                  common::milog::MiLogStream::operator()(&v14, off_2570C7C0, 5331LL);
                  common::milog::MiLogStream::~MiLogStream(&v14);
                  return -1;
                }
                else
                {
                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                  __x = 5331;
                  v10 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                          process_packet_func_map,
                          &__x);
                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<MechanicusHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#8}>(
                    v10,
                    (MechanicusHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
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

// Line 30: range 000000001511E714-000000001511EA30
int __cdecl MechanicusHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator()(
        const MechanicusHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  MechanicusHandler *this; // r14
  std::__shared_ptr_access<const proto::GetMechanicusInfoReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GetMechanicusInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GetMechanicusInfoRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = MechanicusHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetMechanicusInfoReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetMechanicusInfoReq const>(
         (const std::shared_ptr<const proto::GetMechanicusInfoReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mechanicus_handler.cpp",
      "operator()",
      30);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetMechanicusInfoReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetMechanicusInfoReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetMechanicusInfoRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetMechanicusInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetMechanicusInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetMechanicusInfoRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GetMechanicusInfoReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetMechanicusInfoReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = MechanicusHandler::onGetMechanicusInfoReq(this, v8, rsp_0);
    proto::GetMechanicusInfoRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GetMechanicusInfoRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GetMechanicusInfoRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GetMechanicusInfoRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GetMechanicusInfoRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GetMechanicusInfoRsp>::~shared_ptr((std::shared_ptr<proto::GetMechanicusInfoRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetMechanicusInfoReq const>::~shared_ptr((std::shared_ptr<const proto::GetMechanicusInfoReq> *const)(v2 + 32));
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

// Line 31: range 000000001511EA32-000000001511ED4E
int __cdecl MechanicusHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator()(
        const MechanicusHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  MechanicusHandler *this; // r14
  std::__shared_ptr_access<const proto::MechanicusUnlockGearReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::MechanicusUnlockGearRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::MechanicusUnlockGearRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = MechanicusHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::MechanicusUnlockGearReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::MechanicusUnlockGearReq const>(
         (const std::shared_ptr<const proto::MechanicusUnlockGearReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mechanicus_handler.cpp",
      "operator()",
      31);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::MechanicusUnlockGearReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::MechanicusUnlockGearReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::MechanicusUnlockGearRsp>();
    rsp_0 = std::__shared_ptr_access<proto::MechanicusUnlockGearRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::MechanicusUnlockGearRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::MechanicusUnlockGearRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::MechanicusUnlockGearReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::MechanicusUnlockGearReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = MechanicusHandler::onMechanicusUnlockGearReq(this, v8, rsp_0);
    proto::MechanicusUnlockGearRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::MechanicusUnlockGearRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::MechanicusUnlockGearRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::MechanicusUnlockGearRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::MechanicusUnlockGearRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::MechanicusUnlockGearRsp>::~shared_ptr((std::shared_ptr<proto::MechanicusUnlockGearRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::MechanicusUnlockGearReq const>::~shared_ptr((std::shared_ptr<const proto::MechanicusUnlockGearReq> *const)(v2 + 32));
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

// Line 32: range 000000001511ED50-000000001511F06C
int __cdecl MechanicusHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator()(
        const MechanicusHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  MechanicusHandler *this; // r14
  std::__shared_ptr_access<const proto::MechanicusLevelupGearReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::MechanicusLevelupGearRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::MechanicusLevelupGearRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = MechanicusHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::MechanicusLevelupGearReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::MechanicusLevelupGearReq const>(
         (const std::shared_ptr<const proto::MechanicusLevelupGearReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mechanicus_handler.cpp",
      "operator()",
      32);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::MechanicusLevelupGearReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::MechanicusLevelupGearReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::MechanicusLevelupGearRsp>();
    rsp_0 = std::__shared_ptr_access<proto::MechanicusLevelupGearRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::MechanicusLevelupGearRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::MechanicusLevelupGearRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::MechanicusLevelupGearReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::MechanicusLevelupGearReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = MechanicusHandler::onMechanicusLevelupGearReq(this, v8, rsp_0);
    proto::MechanicusLevelupGearRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::MechanicusLevelupGearRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::MechanicusLevelupGearRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::MechanicusLevelupGearRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::MechanicusLevelupGearRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::MechanicusLevelupGearRsp>::~shared_ptr((std::shared_ptr<proto::MechanicusLevelupGearRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::MechanicusLevelupGearReq const>::~shared_ptr((std::shared_ptr<const proto::MechanicusLevelupGearReq> *const)(v2 + 32));
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

// Line 34: range 000000001511F06E-000000001511F38A
int __cdecl MechanicusHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator()(
        const MechanicusHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  MechanicusHandler *this; // r14
  std::__shared_ptr_access<const proto::EnterMechanicusDungeonReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::EnterMechanicusDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::EnterMechanicusDungeonRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = MechanicusHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::EnterMechanicusDungeonReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::EnterMechanicusDungeonReq const>(
         (const std::shared_ptr<const proto::EnterMechanicusDungeonReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mechanicus_handler.cpp",
      "operator()",
      34);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::EnterMechanicusDungeonReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::EnterMechanicusDungeonReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::EnterMechanicusDungeonRsp>();
    rsp_0 = std::__shared_ptr_access<proto::EnterMechanicusDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::EnterMechanicusDungeonRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::EnterMechanicusDungeonRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::EnterMechanicusDungeonReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::EnterMechanicusDungeonReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = MechanicusHandler::onEnterMechanicusDungeonReq(this, v8, rsp_0);
    proto::EnterMechanicusDungeonRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::EnterMechanicusDungeonRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::EnterMechanicusDungeonRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::EnterMechanicusDungeonRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::EnterMechanicusDungeonRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::EnterMechanicusDungeonRsp>::~shared_ptr((std::shared_ptr<proto::EnterMechanicusDungeonRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::EnterMechanicusDungeonReq const>::~shared_ptr((std::shared_ptr<const proto::EnterMechanicusDungeonReq> *const)(v2 + 32));
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

// Line 35: range 000000001511F38C-000000001511F6A8
int __cdecl MechanicusHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator()(
        const MechanicusHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  MechanicusHandler *this; // r14
  std::__shared_ptr_access<const proto::MechanicusCandidateTeamCreateReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::MechanicusCandidateTeamCreateRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::MechanicusCandidateTeamCreateRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = MechanicusHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::MechanicusCandidateTeamCreateReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::MechanicusCandidateTeamCreateReq const>(
         (const std::shared_ptr<const proto::MechanicusCandidateTeamCreateReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mechanicus_handler.cpp",
      "operator()",
      35);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::MechanicusCandidateTeamCreateReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::MechanicusCandidateTeamCreateReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::MechanicusCandidateTeamCreateRsp>();
    rsp_0 = std::__shared_ptr_access<proto::MechanicusCandidateTeamCreateRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::MechanicusCandidateTeamCreateRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::MechanicusCandidateTeamCreateRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::MechanicusCandidateTeamCreateReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::MechanicusCandidateTeamCreateReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = MechanicusHandler::onMechanicusCandidateTeamCreateReq(this, v8, rsp_0);
    proto::MechanicusCandidateTeamCreateRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::MechanicusCandidateTeamCreateRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::MechanicusCandidateTeamCreateRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::MechanicusCandidateTeamCreateRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::MechanicusCandidateTeamCreateRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::MechanicusCandidateTeamCreateRsp>::~shared_ptr((std::shared_ptr<proto::MechanicusCandidateTeamCreateRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::MechanicusCandidateTeamCreateReq const>::~shared_ptr((std::shared_ptr<const proto::MechanicusCandidateTeamCreateReq> *const)(v2 + 32));
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

// Line 38: range 000000001511F6AA-000000001511F9C6
int __cdecl MechanicusHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}::operator()(
        const MechanicusHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  MechanicusHandler *this; // r14
  std::__shared_ptr_access<const proto::MultistagePlayFinishStageReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::MultistagePlayFinishStageRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::MultistagePlayFinishStageRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:38 64 16 10 rsp_ptr:38";
  *(_QWORD *)(v2 + 16) = MechanicusHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::MultistagePlayFinishStageReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::MultistagePlayFinishStageReq const>(
         (const std::shared_ptr<const proto::MultistagePlayFinishStageReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mechanicus_handler.cpp",
      "operator()",
      38);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::MultistagePlayFinishStageReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::MultistagePlayFinishStageReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::MultistagePlayFinishStageRsp>();
    rsp_0 = std::__shared_ptr_access<proto::MultistagePlayFinishStageRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::MultistagePlayFinishStageRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::MultistagePlayFinishStageRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::MultistagePlayFinishStageReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::MultistagePlayFinishStageReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = MechanicusHandler::onMultistagePlayFinishStageReq(this, v8, rsp_0);
    proto::MultistagePlayFinishStageRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::MultistagePlayFinishStageRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::MultistagePlayFinishStageRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::MultistagePlayFinishStageRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::MultistagePlayFinishStageRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::MultistagePlayFinishStageRsp>::~shared_ptr((std::shared_ptr<proto::MultistagePlayFinishStageRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::MultistagePlayFinishStageReq const>::~shared_ptr((std::shared_ptr<const proto::MultistagePlayFinishStageReq> *const)(v2 + 32));
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

// Line 39: range 000000001511F9C8-000000001511FCE4
int __cdecl MechanicusHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}::operator()(
        const MechanicusHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  MechanicusHandler *this; // r14
  std::__shared_ptr_access<const proto::InBattleMechanicusPickCardReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::InBattleMechanicusPickCardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::InBattleMechanicusPickCardRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:39 64 16 10 rsp_ptr:39";
  *(_QWORD *)(v2 + 16) = MechanicusHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::InBattleMechanicusPickCardReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::InBattleMechanicusPickCardReq const>(
         (const std::shared_ptr<const proto::InBattleMechanicusPickCardReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mechanicus_handler.cpp",
      "operator()",
      39);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::InBattleMechanicusPickCardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::InBattleMechanicusPickCardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::InBattleMechanicusPickCardRsp>();
    rsp_0 = std::__shared_ptr_access<proto::InBattleMechanicusPickCardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::InBattleMechanicusPickCardRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::InBattleMechanicusPickCardRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::InBattleMechanicusPickCardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::InBattleMechanicusPickCardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = MechanicusHandler::onInBattleMechanicusPickCardReq(this, v8, rsp_0);
    proto::InBattleMechanicusPickCardRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::InBattleMechanicusPickCardRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::InBattleMechanicusPickCardRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::InBattleMechanicusPickCardRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::InBattleMechanicusPickCardRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::InBattleMechanicusPickCardRsp>::~shared_ptr((std::shared_ptr<proto::InBattleMechanicusPickCardRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::InBattleMechanicusPickCardReq const>::~shared_ptr((std::shared_ptr<const proto::InBattleMechanicusPickCardReq> *const)(v2 + 32));
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

// Line 40: range 000000001511FCE6-0000000015120002
int __cdecl MechanicusHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#8}::operator()(
        const MechanicusHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  MechanicusHandler *this; // r14
  std::__shared_ptr_access<const proto::InBattleMechanicusConfirmCardReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::InBattleMechanicusConfirmCardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::InBattleMechanicusConfirmCardRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:40 64 16 10 rsp_ptr:40";
  *(_QWORD *)(v2 + 16) = MechanicusHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#8}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::InBattleMechanicusConfirmCardReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::InBattleMechanicusConfirmCardReq const>(
         (const std::shared_ptr<const proto::InBattleMechanicusConfirmCardReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mechanicus_handler.cpp",
      "operator()",
      40);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::InBattleMechanicusConfirmCardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::InBattleMechanicusConfirmCardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::InBattleMechanicusConfirmCardRsp>();
    rsp_0 = std::__shared_ptr_access<proto::InBattleMechanicusConfirmCardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::InBattleMechanicusConfirmCardRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::InBattleMechanicusConfirmCardRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::InBattleMechanicusConfirmCardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::InBattleMechanicusConfirmCardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = MechanicusHandler::onInBattleMechanicusConfirmCardReq(this, v8, rsp_0);
    proto::InBattleMechanicusConfirmCardRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::InBattleMechanicusConfirmCardRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::InBattleMechanicusConfirmCardRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::InBattleMechanicusConfirmCardRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::InBattleMechanicusConfirmCardRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::InBattleMechanicusConfirmCardRsp>::~shared_ptr((std::shared_ptr<proto::InBattleMechanicusConfirmCardRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::InBattleMechanicusConfirmCardReq const>::~shared_ptr((std::shared_ptr<const proto::InBattleMechanicusConfirmCardReq> *const)(v2 + 32));
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

// Line 47: range 0000000015120846-00000000151208B2
int32_t __cdecl MechanicusHandler::onGetMechanicusInfoReq(
        MechanicusHandler *const this,
        const proto::GetMechanicusInfoReq *req,
        proto::GetMechanicusInfoRsp *rsp_0)
{
  PlayerMechanicusComp *MechanicusComp; // rdx
  proto::MechanicusInfo *mechanicus_info; // [rsp+28h] [rbp-8h]

  mechanicus_info = proto::GetMechanicusInfoRsp::mutable_mechanicus_info(rsp_0);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  MechanicusComp = Player::getMechanicusComp(this->player_);
  return PlayerMechanicusComp::toClient(MechanicusComp, mechanicus_info);
};

// Line 53: range 00000000151208B4-0000000015120951
int32_t __cdecl MechanicusHandler::onMechanicusUnlockGearReq(
        MechanicusHandler *const this,
        const proto::MechanicusUnlockGearReq *req,
        proto::MechanicusUnlockGearRsp *rsp_0)
{
  PlayerMechanicusComp *MechanicusComp; // rax
  uint32_t mechanicus_id; // [rsp+28h] [rbp-8h]
  uint32_t gear_id; // [rsp+2Ch] [rbp-4h]

  mechanicus_id = proto::MechanicusUnlockGearReq::mechanicus_id(req);
  gear_id = proto::MechanicusUnlockGearReq::gear_id(req);
  proto::MechanicusUnlockGearRsp::set_mechanicus_id(rsp_0, mechanicus_id);
  proto::MechanicusUnlockGearRsp::set_gear_id(rsp_0, gear_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  MechanicusComp = Player::getMechanicusComp(this->player_);
  return PlayerMechanicusComp::unlockGear(MechanicusComp, mechanicus_id, gear_id);
};

// Line 62: range 0000000015120952-0000000015120A4E
int32_t __cdecl MechanicusHandler::onMechanicusLevelupGearReq(
        MechanicusHandler *const this,
        const proto::MechanicusLevelupGearReq *req,
        proto::MechanicusLevelupGearRsp *rsp_0)
{
  PlayerMechanicusComp *MechanicusComp; // rax
  PlayerMechanicusComp *v4; // rax
  google::protobuf::uint32 GearLevel; // edx
  uint32_t mechanicus_id; // [rsp+20h] [rbp-10h]
  uint32_t gear_id; // [rsp+24h] [rbp-Ch]
  int32_t ret; // [rsp+28h] [rbp-8h]

  mechanicus_id = proto::MechanicusLevelupGearReq::mechanicus_id(req);
  gear_id = proto::MechanicusLevelupGearReq::gear_id(req);
  proto::MechanicusLevelupGearRsp::set_mechanicus_id(rsp_0, mechanicus_id);
  proto::MechanicusLevelupGearRsp::set_gear_id(rsp_0, gear_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  MechanicusComp = Player::getMechanicusComp(this->player_);
  ret = PlayerMechanicusComp::levelupGear(MechanicusComp, mechanicus_id, gear_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = Player::getMechanicusComp(this->player_);
  GearLevel = PlayerMechanicusComp::findGearLevel(v4, gear_id);
  proto::MechanicusLevelupGearRsp::set_after_gear_level(rsp_0, GearLevel);
  return ret;
};

// Line 74: range 0000000015120A50-0000000015121645
int32_t __cdecl MechanicusHandler::onEnterMechanicusDungeonReq(
        MechanicusHandler *const this,
        const proto::EnterMechanicusDungeonReq *req,
        proto::EnterMechanicusDungeonRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerSceneComp *SceneComp; // rax
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // r14
  PlayerWorld *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  bool v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  PlayerMechanicusComp *MechanicusComp; // rax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  uint32_t Uid; // eax
  PlayerMechanicusComp *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  common::milog::MiLogStream *v26; // rax
  PlayerDungeonComp *DungeonComp; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  __int32 SceneId; // eax
  PlayerMechanicusComp *v30; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+28h] [rbp-188h] BYREF
  int32_t ret; // [rsp+2Ch] [rbp-184h]
  DungeonCandidateTeam *dungeon_candidate_team; // [rsp+30h] [rbp-180h]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+38h] [rbp-178h]
  std::shared_ptr<Config> v37; // [rsp+40h] [rbp-170h] BYREF
  std::pair<int,std::shared_ptr<DungeonScene> > v38; // [rsp+50h] [rbp-160h] BYREF
  EnterDungeonOption v39; // [rsp+70h] [rbp-140h] BYREF
  common::milog::MiLogStream v40; // [rsp+90h] [rbp-120h] BYREF
  std::map<unsigned int,unsigned int> level_config_id_map; // [rsp+B0h] [rbp-100h] BYREF
  char v42[208]; // [rsp+E0h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 18 difficult_level:93 64 4 13 dungeon_id:97 80 4 7 ret:113 96 16 12 scene_ptr:80 128 16 1"
                        "6 cur_world_ptr:86";
  *(_QWORD *)(v3 + 16) = MechanicusHandler::onEnterMechanicusDungeonReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    v7 = 512;
    goto LABEL_50;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 96));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mechanicus_handler.cpp",
      "onEnterMechanicusDungeonReq",
      83);
    v8 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v40,
           (const char (*)[24])"scene_ptr is null, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v40);
    v7 = 512;
    goto LABEL_49;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v3 + 128));
  if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v3 + 128), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mechanicus_handler.cpp",
      "onEnterMechanicusDungeonReq",
      89);
    v9 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v40,
           (const char (*)[25])"getCurWorld fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v40);
    v7 = -1;
    goto LABEL_48;
  }
  *(_DWORD *)(v3 + 48) = proto::EnterMechanicusDungeonReq::difficult_level(req);
  proto::EnterMechanicusDungeonRsp::set_difficult_level(rsp_0, *(_DWORD *)(v3 + 48));
  v10 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
  dungeon_candidate_team = PlayerWorld::getDungeonCandidateTeam(v10);
  *(_DWORD *)(v3 + 64) = 0;
  if ( !DungeonCandidateTeam::isVaild(dungeon_candidate_team) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MechanicusComp = Player::getMechanicusComp(this->player_);
    *(_DWORD *)(v3 + 80) = PlayerMechanicusComp::checkEnterDungeon(MechanicusComp, *(_DWORD *)(v3 + 48), 0);
    if ( *(_DWORD *)(v3 + 80) )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/mechanicus_handler.cpp",
        "onEnterMechanicusDungeonReq",
        116);
      v18 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v40, (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
      v20 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              v19,
              (const char (*)[24])" checkEnterDungeon ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v20, (const int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream(&v40);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      proto::EnterMechanicusDungeonRsp::set_wrong_uid(rsp_0, Uid);
      v7 = *(_DWORD *)(v3 + 80);
      goto LABEL_48;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v22 = Player::getMechanicusComp(this->player_);
    *(_DWORD *)(v3 + 64) = PlayerMechanicusComp::randomDungeonId(v22, *(_DWORD *)(v3 + 48));
    if ( !*(_DWORD *)(v3 + 64) )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/mechanicus_handler.cpp",
        "onEnterMechanicusDungeonReq",
        123);
      v23 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
              &v40,
              (const char (*)[17])"randomDungeonId ");
      v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v24, (const char (*)[7])" fails");
      common::milog::MiLogStream::~MiLogStream(&v40);
      v7 = -1;
      goto LABEL_48;
    }
LABEL_35:
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v37);
    v25 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37);
    dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                           &v25->design_config.txt_config_mgr.dungeon_config_mgr,
                           *(_DWORD *)(v3 + 64));
    std::shared_ptr<Config>::~shared_ptr(&v37);
    if ( dungeon_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( dungeon_config_ptr->type == DUNGEON_THEATRE_MECHANICUS )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        DungeonComp = Player::getDungeonComp(this->player_);
        memset(&v39, 0, sizeof(v39));
        EnterDungeonOption::EnterDungeonOption(&v39);
        memset(&level_config_id_map, 0, sizeof(level_config_id_map));
        std::map<unsigned int,unsigned int>::map(&level_config_id_map);
        v28 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        SceneId = Scene::getSceneId(v28);
        PlayerDungeonComp::enterDungeon(&v38, DungeonComp, *(_DWORD *)(v3 + 64), SceneId, 0, &level_config_id_map, v39);
        ret = v38.first;
        std::pair<int,std::shared_ptr<DungeonScene>>::~pair(&v38);
        std::map<unsigned int,unsigned int>::~map(&level_config_id_map);
        if ( ret )
        {
          v7 = ret;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v30 = Player::getMechanicusComp(this->player_);
          PlayerMechanicusComp::onEnterDungeon(v30, *(_DWORD *)(v3 + 64));
          v7 = 0;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v40,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/mechanicus_handler.cpp",
          "onEnterMechanicusDungeonReq",
          136);
        common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(&v40, (const char (*)[53])off_2571DF00);
        common::milog::MiLogStream::~MiLogStream(&v40);
        v7 = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/mechanicus_handler.cpp",
        "onEnterMechanicusDungeonReq",
        131);
      v26 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v40,
              (const char (*)[30])"findDungeonExcelConfig fails:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v40);
      v7 = -1;
    }
    goto LABEL_48;
  }
  *(_DWORD *)(v3 + 64) = DungeonCandidateTeam::getDungeonId(dungeon_candidate_team);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v37);
  v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37);
  v12 = TreatreMechanicusExcelConfigMgr::findDungeonDifficultLevel(
          &v11->design_config.txt_config_mgr.mechanicus_config_mgr,
          *(_DWORD *)(v3 + 64)) != *(_DWORD *)(v3 + 48);
  std::shared_ptr<Config>::~shared_ptr(&v37);
  if ( !v12 )
    goto LABEL_35;
  common::milog::MiLogStream::create(
    &v40,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/handler/mechanicus_handler.cpp",
    "onEnterMechanicusDungeonReq",
    106);
  v13 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v40, (const char (*)[21])off_2571DD40);
  v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
  v15 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v14, (const char (*)[18])" team dungeon_id:");
  v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 64));
  common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v16, (const char (*)[12])" not match!");
  common::milog::MiLogStream::~MiLogStream(&v40);
  v7 = -1;
LABEL_48:
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 128));
LABEL_49:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 96));
LABEL_50:
  result = v7;
  if ( v42 == (char *)v3 )
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

// Line 155: range 0000000015121646-00000000151220A3
int32_t __cdecl MechanicusHandler::onMechanicusCandidateTeamCreateReq(
        MechanicusHandler *const this,
        const proto::MechanicusCandidateTeamCreateReq *req,
        proto::MechanicusCandidateTeamCreateRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v7; // rbx
  int32_t v8; // r14d
  PlayerMpComp *MpComp; // rax
  common::milog::MiLogStream *v10; // rbx
  common::milog::MiLogStream *v11; // r14
  PlayerMechanicusComp *MechanicusComp; // rax
  common::milog::MiLogStream *v13; // rax
  PlayerMechanicusComp *v14; // rax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  PlayerMechanicusComp *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  PlayerWorld *v21; // rax
  bool v22; // r14
  common::milog::MiLogStream *v23; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+20h] [rbp-110h] BYREF
  uint32_t dungeon_id; // [rsp+24h] [rbp-10Ch]
  DungeonCandidateTeam *dungeon_team; // [rsp+28h] [rbp-108h]
  std::shared_ptr<Player> p_player_ptr; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v30; // [rsp+40h] [rbp-F0h] BYREF
  char v31[208]; // [rsp+60h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 16 player_limit:173 64 4 19 difficult_level:179 80 4 7 ret:180 96 16 17 cur_world_ptr:166"
                        " 128 16 14 player_ptr:197";
  *(_QWORD *)(v3 + 16) = MechanicusHandler::onMechanicusCandidateTeamCreateReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mechanicus_handler.cpp",
      "onMechanicusCandidateTeamCreateReq",
      158);
    v7 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v30,
           (const char (*)[32])"is not in my world player_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v30);
    v8 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MpComp = Player::getMpComp(this->player_);
    if ( !PlayerMpComp::isInMpMode(MpComp) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/mechanicus_handler.cpp",
        "onMechanicusCandidateTeamCreateReq",
        163);
      v10 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v30,
              (const char (*)[31])"is not in mp mode player_uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v30);
      v8 = 1211;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v3 + 96));
      if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v3 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/mechanicus_handler.cpp",
          "onMechanicusCandidateTeamCreateReq",
          169);
        v11 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v30,
                (const char (*)[32])"cur_world_ptr null player_uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
        common::milog::MiLogStream::~MiLogStream(&v30);
        v8 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        MechanicusComp = Player::getMechanicusComp(this->player_);
        *(_DWORD *)(v3 + 48) = PlayerMechanicusComp::getTeamPlayerLimit(MechanicusComp);
        if ( *(_DWORD *)(v3 + 48) > 1u )
        {
          *(_DWORD *)(v3 + 64) = proto::MechanicusCandidateTeamCreateReq::difficult_level(req);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v14 = Player::getMechanicusComp(this->player_);
          *(_DWORD *)(v3 + 80) = PlayerMechanicusComp::checkEnterDungeon(
                                   v14,
                                   *(_DWORD *)(v3 + 64),
                                   *(_DWORD *)(v3 + 48));
          if ( *(_DWORD *)(v3 + 80) )
          {
            common::milog::MiLogStream::create(
              &v30,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/mechanicus_handler.cpp",
              "onMechanicusCandidateTeamCreateReq",
              183);
            v15 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v30, (const char (*)[5])"uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
            v17 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                    v16,
                    (const char (*)[24])" checkEnterDungeon ret:");
            common::milog::MiLogStream::operator<<<int,(int *)0>(v17, (const int *)(v3 + 80));
            common::milog::MiLogStream::~MiLogStream(&v30);
            v8 = *(_DWORD *)(v3 + 80);
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v18 = Player::getMechanicusComp(this->player_);
            dungeon_id = PlayerMechanicusComp::randomDungeonId(v18, *(_DWORD *)(v3 + 64));
            if ( dungeon_id )
            {
              v21 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
              dungeon_team = PlayerWorld::getDungeonCandidateTeam(v21);
              DungeonCandidateTeam::resetAll(dungeon_team, dungeon_id, 0, 3u, *(_DWORD *)(v3 + 48));
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              toThisPtr<Player>((Player *)(v3 + 128));
              std::shared_ptr<Player>::shared_ptr(&p_player_ptr, (const std::shared_ptr<Player> *)(v3 + 128));
              v22 = DungeonCandidateTeam::addPlayer(dungeon_team, &p_player_ptr) != 0;
              std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
              if ( v22 )
              {
                common::milog::MiLogStream::create(
                  &v30,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/handler/mechanicus_handler.cpp",
                  "onMechanicusCandidateTeamCreateReq",
                  200);
                v23 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                        &v30,
                        (const char (*)[30])off_2571E140);
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                val = Player::getUid(this->player_);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
                common::milog::MiLogStream::~MiLogStream(&v30);
                v8 = -1;
              }
              else
              {
                std::shared_ptr<Player>::shared_ptr(&p_player_ptr, (const std::shared_ptr<Player> *)(v3 + 128));
                DungeonCandidateTeam::setPlayerIsReady(dungeon_team, &p_player_ptr, 1);
                std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
                DungeonCandidateTeam::notifyTeamInfo(dungeon_team, 0);
                proto::MechanicusCandidateTeamCreateRsp::set_difficult_level(rsp_0, *(_DWORD *)(v3 + 64));
                proto::MechanicusCandidateTeamCreateRsp::set_dungeon_id(rsp_0, dungeon_id);
                v8 = 0;
              }
              std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 128));
            }
            else
            {
              common::milog::MiLogStream::create(
                &v30,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/handler/mechanicus_handler.cpp",
                "onMechanicusCandidateTeamCreateReq",
                191);
              v19 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                      &v30,
                      (const char (*)[17])"randomDungeonId ");
              v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v19,
                      (const unsigned int *)(v3 + 64));
              common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v20, (const char (*)[7])" fails");
              common::milog::MiLogStream::~MiLogStream(&v30);
              v8 = -1;
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/mechanicus_handler.cpp",
            "onMechanicusCandidateTeamCreateReq",
            176);
          v13 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  &v30,
                  (const char (*)[27])"getTeamPlayerLimit return:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v30);
          v8 = -1;
        }
      }
      std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 96));
    }
  }
  result = v8;
  if ( v31 == (char *)v3 )
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

// Line 214: range 00000000151220A4-00000000151225B7
int32_t __cdecl MechanicusHandler::onMultistagePlayFinishStageReq(
        MechanicusHandler *const this,
        const proto::MultistagePlayFinishStageReq *req,
        proto::MultistagePlayFinishStageRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  Scene *v11; // rax
  uint32_t MultistagePlayComp; // eax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 (__fastcall *v20)(unsigned __int64, Player *); // rcx
  int32_t result; // eax
  int32_t retcode; // [rsp+2Ch] [rbp-D4h]
  common::milog::MiLogStream v24; // [rsp+30h] [rbp-D0h] BYREF
  char v25[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 12 group_id:216 48 4 14 play_index:217 64 16 13 scene_ptr:224 96 16 12 play_ptr:232";
  *(_QWORD *)(v3 + 16) = MechanicusHandler::onMultistagePlayFinishStageReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 32) = proto::MultistagePlayFinishStageReq::group_id(req);
  *(_DWORD *)(v3 + 48) = proto::MultistagePlayFinishStageReq::play_index(req);
  proto::MultistagePlayFinishStageRsp::set_group_id(rsp_0, *(_DWORD *)(v3 + 32));
  proto::MultistagePlayFinishStageRsp::set_play_index(rsp_0, *(_DWORD *)(v3 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 64));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/mechanicus_handler.cpp",
      "onMultistagePlayFinishStageReq",
      227);
    v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v24,
           (const char (*)[43])"[MULTISTAGE] player not in scene. @group: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])", play_index:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v9, (const char (*)[10])" player: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v10, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v24);
    retcode = 9501;
  }
  else
  {
    v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    MultistagePlayComp = (unsigned int)Scene::getMultistagePlayComp(v11);
    SceneMultistagePlayComp::findPlay<SceneMultistagePlay>(
      (const SceneMultistagePlayComp *const)(v3 + 96),
      MultistagePlayComp,
      *(_DWORD *)(v3 + 32));
    if ( std::operator==<SceneMultistagePlay>(0LL, (const std::shared_ptr<SceneMultistagePlay> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/mechanicus_handler.cpp",
        "onMultistagePlayFinishStageReq",
        235);
      v13 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v24,
              (const char (*)[38])"[MULTISTAGE] play not exist. @group: ");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 32));
      v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v14, (const char (*)[14])", play_index:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
      v17 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v16, (const char (*)[10])" player: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v17, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v24);
      retcode = 9502;
    }
    else
    {
      v18 = (unsigned __int64)std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
        v18 = __asan_report_load8();
      v19 = *(_QWORD *)v18 + 208LL;
      if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
        v18 = __asan_report_load8();
      v20 = *(__int64 (__fastcall **)(unsigned __int64, Player *))v19;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        v18 = __asan_report_load8();
      retcode = v20(v18, this->player_);
    }
    std::shared_ptr<SceneMultistagePlay>::~shared_ptr((std::shared_ptr<SceneMultistagePlay> *const)(v3 + 96));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
  result = retcode;
  if ( v25 == (char *)v3 )
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

// Line 248: range 00000000151225B8-0000000015122AB1
int32_t __cdecl MechanicusHandler::onInBattleMechanicusPickCardReq(
        MechanicusHandler *const this,
        const proto::InBattleMechanicusPickCardReq *req,
        proto::InBattleMechanicusPickCardRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  Scene *v11; // rax
  uint32_t MultistagePlayComp; // eax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  std::__shared_ptr_access<MechanicusMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rcx
  int32_t result; // eax
  int32_t retcode; // [rsp+28h] [rbp-D8h]
  uint32_t card_id; // [rsp+2Ch] [rbp-D4h]
  common::milog::MiLogStream v23; // [rsp+30h] [rbp-D0h] BYREF
  char v24[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 12 group_id:250 48 4 14 play_index:251 64 16 21 dungeon_scene_ptr:260 96 16 12 play_ptr:268";
  *(_QWORD *)(v3 + 16) = MechanicusHandler::onInBattleMechanicusPickCardReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 32) = proto::InBattleMechanicusPickCardReq::group_id(req);
  *(_DWORD *)(v3 + 48) = proto::InBattleMechanicusPickCardReq::play_index(req);
  card_id = proto::InBattleMechanicusPickCardReq::card_id(req);
  proto::InBattleMechanicusPickCardRsp::set_group_id(rsp_0, *(_DWORD *)(v3 + 32));
  proto::InBattleMechanicusPickCardRsp::set_play_index(rsp_0, *(_DWORD *)(v3 + 48));
  proto::InBattleMechanicusPickCardRsp::set_card_id(rsp_0, card_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene<DungeonScene>((PlayerSceneComp *const)(v3 + 64));
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/mechanicus_handler.cpp",
      "onInBattleMechanicusPickCardReq",
      263);
    v6 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v23,
           (const char (*)[45])"[MECHANICUS] player not in dungeon. @group: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])", play_index:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v9, (const char (*)[10])" player: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v10, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v23);
    retcode = 7150;
  }
  else
  {
    v11 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    MultistagePlayComp = (unsigned int)Scene::getMultistagePlayComp(v11);
    SceneMultistagePlayComp::findPlay<MechanicusMultistagePlay>(
      (const SceneMultistagePlayComp *const)(v3 + 96),
      MultistagePlayComp,
      *(_DWORD *)(v3 + 32));
    if ( std::operator==<MechanicusMultistagePlay>(0LL, (const std::shared_ptr<MechanicusMultistagePlay> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/mechanicus_handler.cpp",
        "onInBattleMechanicusPickCardReq",
        271);
      v13 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v23,
              (const char (*)[38])"[MECHANICUS] play not exist. @group: ");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 32));
      v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v14, (const char (*)[14])", play_index:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
      v17 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v16, (const char (*)[10])" player: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v17, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v23);
      retcode = 7151;
    }
    else
    {
      v18 = std::__shared_ptr_access<MechanicusMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MechanicusMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      retcode = MechanicusMultistagePlay::onPickCardReq(v18, this->player_, card_id);
    }
    std::shared_ptr<MechanicusMultistagePlay>::~shared_ptr((std::shared_ptr<MechanicusMultistagePlay> *const)(v3 + 96));
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 64));
  result = retcode;
  if ( v24 == (char *)v3 )
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

// Line 285: range 0000000015122AB2-0000000015122FAB
int32_t __cdecl MechanicusHandler::onInBattleMechanicusConfirmCardReq(
        MechanicusHandler *const this,
        const proto::InBattleMechanicusConfirmCardReq *req,
        proto::InBattleMechanicusConfirmCardRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  Scene *v11; // rax
  uint32_t MultistagePlayComp; // eax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  std::__shared_ptr_access<MechanicusMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rcx
  int32_t result; // eax
  int32_t retcode; // [rsp+28h] [rbp-D8h]
  uint32_t card_id; // [rsp+2Ch] [rbp-D4h]
  common::milog::MiLogStream v23; // [rsp+30h] [rbp-D0h] BYREF
  char v24[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 12 group_id:287 48 4 14 play_index:288 64 16 21 dungeon_scene_ptr:297 96 16 12 play_ptr:305";
  *(_QWORD *)(v3 + 16) = MechanicusHandler::onInBattleMechanicusConfirmCardReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 32) = proto::InBattleMechanicusConfirmCardReq::group_id(req);
  *(_DWORD *)(v3 + 48) = proto::InBattleMechanicusConfirmCardReq::play_index(req);
  card_id = proto::InBattleMechanicusConfirmCardReq::card_id(req);
  proto::InBattleMechanicusConfirmCardRsp::set_group_id(rsp_0, *(_DWORD *)(v3 + 32));
  proto::InBattleMechanicusConfirmCardRsp::set_play_index(rsp_0, *(_DWORD *)(v3 + 48));
  proto::InBattleMechanicusConfirmCardRsp::set_card_id(rsp_0, card_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene<DungeonScene>((PlayerSceneComp *const)(v3 + 64));
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/mechanicus_handler.cpp",
      "onInBattleMechanicusConfirmCardReq",
      300);
    v6 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v23,
           (const char (*)[45])"[MECHANICUS] player not in dungeon. @group: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])", play_index:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v9, (const char (*)[10])" player: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v10, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v23);
    retcode = 7150;
  }
  else
  {
    v11 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    MultistagePlayComp = (unsigned int)Scene::getMultistagePlayComp(v11);
    SceneMultistagePlayComp::findPlay<MechanicusMultistagePlay>(
      (const SceneMultistagePlayComp *const)(v3 + 96),
      MultistagePlayComp,
      *(_DWORD *)(v3 + 32));
    if ( std::operator==<MechanicusMultistagePlay>(0LL, (const std::shared_ptr<MechanicusMultistagePlay> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/mechanicus_handler.cpp",
        "onInBattleMechanicusConfirmCardReq",
        308);
      v13 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v23,
              (const char (*)[38])"[MECHANICUS] play not exist. @group: ");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 32));
      v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v14, (const char (*)[14])", play_index:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
      v17 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v16, (const char (*)[10])" player: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v17, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v23);
      retcode = 7151;
    }
    else
    {
      v18 = std::__shared_ptr_access<MechanicusMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MechanicusMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      retcode = MechanicusMultistagePlay::onConfirmCardReq(v18, this->player_, card_id);
    }
    std::shared_ptr<MechanicusMultistagePlay>::~shared_ptr((std::shared_ptr<MechanicusMultistagePlay> *const)(v3 + 96));
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 64));
  result = retcode;
  if ( v24 == (char *)v3 )
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
