// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/tower_handler.cpp

// Line 28: range 000000001803C2AE-000000001803C9EB
int32_t __cdecl TowerHandler::addPacketFuncToMap(TowerHandler *const this, PacketFuncMap *process_packet_func_map)
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

  __x = 2490;
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
      "./src/handler/tower_handler.cpp",
      "addPacketFuncToMap",
      29);
    common::milog::MiLogStream::operator()(&v13, off_2649F220, 2490LL);
    common::milog::MiLogStream::~MiLogStream(&v13);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
    __x = 2490;
    v3 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_map,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<TowerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}>(
      v3,
      (TowerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
    __x = 2421;
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
        "./src/handler/tower_handler.cpp",
        "addPacketFuncToMap",
        30);
      common::milog::MiLogStream::operator()(&v13, off_2649F220, 2421LL);
      common::milog::MiLogStream::~MiLogStream(&v13);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
      __x = 2421;
      v4 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
             process_packet_func_map,
             &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<TowerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}>(
        v4,
        (TowerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
      __x = 2431;
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
          "./src/handler/tower_handler.cpp",
          "addPacketFuncToMap",
          31);
        common::milog::MiLogStream::operator()(&v13, off_2649F220, 2431LL);
        common::milog::MiLogStream::~MiLogStream(&v13);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
        __x = 2431;
        v5 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
               process_packet_func_map,
               &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<TowerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}>(
          v5,
          (TowerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
        __x = 2448;
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
            "./src/handler/tower_handler.cpp",
            "addPacketFuncToMap",
            32);
          common::milog::MiLogStream::operator()(&v13, off_2649F220, 2448LL);
          common::milog::MiLogStream::~MiLogStream(&v13);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
          __x = 2448;
          v6 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                 process_packet_func_map,
                 &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<TowerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}>(
            v6,
            (TowerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
          __x = 2422;
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
              "./src/handler/tower_handler.cpp",
              "addPacketFuncToMap",
              33);
            common::milog::MiLogStream::operator()(&v13, off_2649F220, 2422LL);
            common::milog::MiLogStream::~MiLogStream(&v13);
            return -1;
          }
          else
          {
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
            __x = 2422;
            v7 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                   process_packet_func_map,
                   &__x);
            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<TowerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}>(
              v7,
              (TowerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
            __x = 2404;
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
                "./src/handler/tower_handler.cpp",
                "addPacketFuncToMap",
                34);
              common::milog::MiLogStream::operator()(&v13, off_2649F220, 2404LL);
              common::milog::MiLogStream::~MiLogStream(&v13);
              return -1;
            }
            else
            {
              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
              __x = 2404;
              v8 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                     process_packet_func_map,
                     &__x);
              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<TowerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}>(
                v8,
                (TowerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
              __x = 2450;
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
                  "./src/handler/tower_handler.cpp",
                  "addPacketFuncToMap",
                  35);
                common::milog::MiLogStream::operator()(&v13, off_2649F220, 2450LL);
                common::milog::MiLogStream::~MiLogStream(&v13);
                return -1;
              }
              else
              {
                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
                __x = 2450;
                v9 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                       process_packet_func_map,
                       &__x);
                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<TowerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}>(
                  v9,
                  (TowerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                return 0;
              }
            }
          }
        }
      }
    }
  }
};

// Line 29: range 000000001803ACDC-000000001803AFF8
int __cdecl TowerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator()(
        const TowerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  TowerHandler *this; // r14
  std::__shared_ptr_access<const proto::TowerAllDataReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::TowerAllDataRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::TowerAllDataRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = TowerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::TowerAllDataReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::TowerAllDataReq const>(
         (const std::shared_ptr<const proto::TowerAllDataReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/tower_handler.cpp",
      "operator()",
      29);
    common::milog::MiLogStream::operator()(&v15, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::TowerAllDataReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TowerAllDataReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::TowerAllDataRsp>();
    rsp_0 = std::__shared_ptr_access<proto::TowerAllDataRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::TowerAllDataRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::TowerAllDataRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::TowerAllDataReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TowerAllDataReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = TowerHandler::onTowerAllDataReq(this, v8, rsp_0);
    proto::TowerAllDataRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::TowerAllDataRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::TowerAllDataRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::TowerAllDataRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::TowerAllDataRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::TowerAllDataRsp>::~shared_ptr((std::shared_ptr<proto::TowerAllDataRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::TowerAllDataReq const>::~shared_ptr((std::shared_ptr<const proto::TowerAllDataReq> *const)(v2 + 32));
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

// Line 30: range 000000001803AFFA-000000001803B316
int __cdecl TowerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator()(
        const TowerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  TowerHandler *this; // r14
  std::__shared_ptr_access<const proto::TowerTeamSelectReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::TowerTeamSelectRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::TowerTeamSelectRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = TowerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::TowerTeamSelectReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::TowerTeamSelectReq const>(
         (const std::shared_ptr<const proto::TowerTeamSelectReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/tower_handler.cpp",
      "operator()",
      30);
    common::milog::MiLogStream::operator()(&v15, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::TowerTeamSelectReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TowerTeamSelectReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::TowerTeamSelectRsp>();
    rsp_0 = std::__shared_ptr_access<proto::TowerTeamSelectRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::TowerTeamSelectRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::TowerTeamSelectRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::TowerTeamSelectReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TowerTeamSelectReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = TowerHandler::onTowerTeamSelectReq(this, v8, rsp_0);
    proto::TowerTeamSelectRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::TowerTeamSelectRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::TowerTeamSelectRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::TowerTeamSelectRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::TowerTeamSelectRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::TowerTeamSelectRsp>::~shared_ptr((std::shared_ptr<proto::TowerTeamSelectRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::TowerTeamSelectReq const>::~shared_ptr((std::shared_ptr<const proto::TowerTeamSelectReq> *const)(v2 + 32));
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

// Line 31: range 000000001803B318-000000001803B634
int __cdecl TowerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator()(
        const TowerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  TowerHandler *this; // r14
  std::__shared_ptr_access<const proto::TowerEnterLevelReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::TowerEnterLevelRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::TowerEnterLevelRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = TowerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::TowerEnterLevelReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::TowerEnterLevelReq const>(
         (const std::shared_ptr<const proto::TowerEnterLevelReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/tower_handler.cpp",
      "operator()",
      31);
    common::milog::MiLogStream::operator()(&v15, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::TowerEnterLevelReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TowerEnterLevelReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::TowerEnterLevelRsp>();
    rsp_0 = std::__shared_ptr_access<proto::TowerEnterLevelRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::TowerEnterLevelRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::TowerEnterLevelRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::TowerEnterLevelReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TowerEnterLevelReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = TowerHandler::onTowerEnterLevelReq(this, v8, rsp_0);
    proto::TowerEnterLevelRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::TowerEnterLevelRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::TowerEnterLevelRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::TowerEnterLevelRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::TowerEnterLevelRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::TowerEnterLevelRsp>::~shared_ptr((std::shared_ptr<proto::TowerEnterLevelRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::TowerEnterLevelReq const>::~shared_ptr((std::shared_ptr<const proto::TowerEnterLevelReq> *const)(v2 + 32));
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

// Line 32: range 000000001803B636-000000001803B952
int __cdecl TowerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator()(
        const TowerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  TowerHandler *this; // r14
  std::__shared_ptr_access<const proto::TowerBuffSelectReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::TowerBuffSelectRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::TowerBuffSelectRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = TowerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::TowerBuffSelectReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::TowerBuffSelectReq const>(
         (const std::shared_ptr<const proto::TowerBuffSelectReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/tower_handler.cpp",
      "operator()",
      32);
    common::milog::MiLogStream::operator()(&v15, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::TowerBuffSelectReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TowerBuffSelectReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::TowerBuffSelectRsp>();
    rsp_0 = std::__shared_ptr_access<proto::TowerBuffSelectRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::TowerBuffSelectRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::TowerBuffSelectRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::TowerBuffSelectReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TowerBuffSelectReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = TowerHandler::onTowerBuffSelectReq(this, v8, rsp_0);
    proto::TowerBuffSelectRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::TowerBuffSelectRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::TowerBuffSelectRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::TowerBuffSelectRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::TowerBuffSelectRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::TowerBuffSelectRsp>::~shared_ptr((std::shared_ptr<proto::TowerBuffSelectRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::TowerBuffSelectReq const>::~shared_ptr((std::shared_ptr<const proto::TowerBuffSelectReq> *const)(v2 + 32));
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

// Line 33: range 000000001803B954-000000001803BC70
int __cdecl TowerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator()(
        const TowerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  TowerHandler *this; // r14
  std::__shared_ptr_access<const proto::TowerSurrenderReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::TowerSurrenderRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::TowerSurrenderRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = TowerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::TowerSurrenderReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::TowerSurrenderReq const>(
         (const std::shared_ptr<const proto::TowerSurrenderReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/tower_handler.cpp",
      "operator()",
      33);
    common::milog::MiLogStream::operator()(&v15, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::TowerSurrenderReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TowerSurrenderReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::TowerSurrenderRsp>();
    rsp_0 = std::__shared_ptr_access<proto::TowerSurrenderRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::TowerSurrenderRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::TowerSurrenderRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::TowerSurrenderReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TowerSurrenderReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = TowerHandler::onTowerSurrenderReq(this, v8, rsp_0);
    proto::TowerSurrenderRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::TowerSurrenderRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::TowerSurrenderRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::TowerSurrenderRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::TowerSurrenderRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::TowerSurrenderRsp>::~shared_ptr((std::shared_ptr<proto::TowerSurrenderRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::TowerSurrenderReq const>::~shared_ptr((std::shared_ptr<const proto::TowerSurrenderReq> *const)(v2 + 32));
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

// Line 34: range 000000001803BC72-000000001803BF8E
int __cdecl TowerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}::operator()(
        const TowerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  TowerHandler *this; // r14
  std::__shared_ptr_access<const proto::TowerGetFloorStarRewardReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::TowerGetFloorStarRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::TowerGetFloorStarRewardRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = TowerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#6}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::TowerGetFloorStarRewardReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::TowerGetFloorStarRewardReq const>(
         (const std::shared_ptr<const proto::TowerGetFloorStarRewardReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/tower_handler.cpp",
      "operator()",
      34);
    common::milog::MiLogStream::operator()(&v15, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::TowerGetFloorStarRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TowerGetFloorStarRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::TowerGetFloorStarRewardRsp>();
    rsp_0 = std::__shared_ptr_access<proto::TowerGetFloorStarRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::TowerGetFloorStarRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::TowerGetFloorStarRewardRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::TowerGetFloorStarRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TowerGetFloorStarRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = TowerHandler::onTowerGetFloorStarRewardReq(this, v8, rsp_0);
    proto::TowerGetFloorStarRewardRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::TowerGetFloorStarRewardRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::TowerGetFloorStarRewardRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::TowerGetFloorStarRewardRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::TowerGetFloorStarRewardRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::TowerGetFloorStarRewardRsp>::~shared_ptr((std::shared_ptr<proto::TowerGetFloorStarRewardRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::TowerGetFloorStarRewardReq const>::~shared_ptr((std::shared_ptr<const proto::TowerGetFloorStarRewardReq> *const)(v2 + 32));
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

// Line 35: range 000000001803BF90-000000001803C2AC
int __cdecl TowerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}::operator()(
        const TowerHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  TowerHandler *this; // r14
  std::__shared_ptr_access<const proto::TowerRecordHandbookReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::TowerRecordHandbookRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::TowerRecordHandbookRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = TowerHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#7}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::TowerRecordHandbookReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::TowerRecordHandbookReq const>(
         (const std::shared_ptr<const proto::TowerRecordHandbookReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/tower_handler.cpp",
      "operator()",
      35);
    common::milog::MiLogStream::operator()(&v15, off_2649EF60);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::TowerRecordHandbookReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TowerRecordHandbookReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::TowerRecordHandbookRsp>();
    rsp_0 = std::__shared_ptr_access<proto::TowerRecordHandbookRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::TowerRecordHandbookRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::TowerRecordHandbookRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::TowerRecordHandbookReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TowerRecordHandbookReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = TowerHandler::onTowerRecordHandbookReq(this, v8, rsp_0);
    proto::TowerRecordHandbookRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::TowerRecordHandbookRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::TowerRecordHandbookRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::TowerRecordHandbookRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::TowerRecordHandbookRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::TowerRecordHandbookRsp>::~shared_ptr((std::shared_ptr<proto::TowerRecordHandbookRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::TowerRecordHandbookReq const>::~shared_ptr((std::shared_ptr<const proto::TowerRecordHandbookReq> *const)(v2 + 32));
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

// Line 41: range 000000001803C9EC-000000001803CA5D
int32_t __cdecl TowerHandler::onTowerAllDataReq(
        TowerHandler *const this,
        const proto::TowerAllDataReq *req,
        proto::TowerAllDataRsp *rsp_0)
{
  PlayerTowerComp *TowerComp; // rbx
  bool is_interact; // dl

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  TowerComp = Player::getTowerComp(this->player_);
  is_interact = proto::TowerAllDataReq::is_interact(req);
  return PlayerTowerComp::requestAllData(TowerComp, rsp_0, is_interact);
};

// Line 47: range 000000001803CA5E-000000001803D086
int32_t __cdecl TowerHandler::onTowerTeamSelectReq(
        TowerHandler *const this,
        const proto::TowerTeamSelectReq *req,
        proto::TowerTeamSelectRsp *rsp_0)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  const google::protobuf::RepeatedField<long unsigned int> *v7; // rax
  std::vector<long unsigned int> *v8; // rax
  std::vector<long unsigned int> *v9; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<long unsigned int> > >,bool> v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // r15d
  std::map<unsigned int,std::vector<long unsigned int>>::size_type v13; // r14
  common::milog::MiLogStream *v14; // rax
  std::vector<long unsigned int> *v15; // rax
  std::vector<std::vector<long unsigned int>>::value_type *v16; // rax
  PlayerTowerComp *TowerComp; // r14
  std::vector<std::vector<long unsigned int>> *v18; // rax
  int32_t result; // eax
  uint32_t now; // [rsp+24h] [rbp-17Ch]
  google::protobuf::uint32 floor_id; // [rsp+28h] [rbp-178h]
  int32_t ret; // [rsp+2Ch] [rbp-174h]
  google::protobuf::RepeatedPtrField<proto::TowerTeam>::const_iterator __for_begin; // [rsp+30h] [rbp-170h] BYREF
  google::protobuf::RepeatedPtrField<proto::TowerTeam>::const_iterator __for_end; // [rsp+38h] [rbp-168h] BYREF
  const google::protobuf::RepeatedPtrField<proto::TowerTeam> *__for_range; // [rsp+40h] [rbp-160h]
  const proto::TowerTeam *proto_tower_team; // [rsp+48h] [rbp-158h]
  common::milog::MiLogStream v27; // [rsp+50h] [rbp-150h] BYREF
  char v28[304]; // [rsp+70h] [rbp-130h] BYREF

  v4 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 16 tower_team_id:67 48 24 17 tower_team_vec:66 112 24 11 guid_vec:58 176 48 17 tower_team_map:54";
  *(_QWORD *)(v4 + 16) = TowerHandler::onTowerTeamSelectReq;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862722] = -218959360;
  v6[536862723] = 62194;
  v6[536862724] = -218959360;
  v6[536862725] = 62194;
  v6[536862727] = -202116109;
  now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->last_select_tower_team_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_select_tower_team_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( now > this->last_select_tower_team_time_ + 3 )
  {
    floor_id = proto::TowerTeamSelectReq::floor_id(req);
    std::map<unsigned int,std::vector<unsigned long>>::map((std::map<unsigned int,std::vector<long unsigned int>> *const)(v4 + 176));
    __for_range = proto::TowerTeamSelectReq::tower_team_list(req);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::TowerTeam>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::TowerTeam>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::TowerTeam const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      proto_tower_team = google::protobuf::internal::RepeatedPtrIterator<proto::TowerTeam const>::operator*(&__for_begin);
      *(_DWORD *)(v4 + 32) = proto::TowerTeam::tower_team_id(proto_tower_team);
      std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v4 + 112));
      v7 = proto::TowerTeam::avatar_guid_list(proto_tower_team);
      common::tools::MiscUtils::repeatedToVector<unsigned long,unsigned long>(
        v7,
        (std::vector<long unsigned int> *)(v4 + 112));
      v8 = std::move<std::vector<unsigned long> &>((std::vector<long unsigned int> *)(v4 + 112));
      v10 = std::map<unsigned int,std::vector<unsigned long>>::emplace<unsigned int &,std::vector<unsigned long>>(
              (std::map<unsigned int,std::vector<long unsigned int>> *const)(v4 + 176),
              (unsigned int *)(v4 + 32),
              v8,
              (unsigned int *)(v4 + 32),
              v9);
      if ( !v10.second )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/tower_handler.cpp",
          "onTowerTeamSelectReq",
          62);
        v11 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v27,
                (const char (*)[25])"duplicate tower_team_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 32));
        common::milog::MiLogStream::~MiLogStream(&v27);
        v3 = -1;
        v12 = 0;
      }
      else
      {
        v12 = 1;
      }
      std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v4 + 112));
      if ( v12 != 1 )
        goto LABEL_28;
      google::protobuf::internal::RepeatedPtrIterator<proto::TowerTeam const>::operator++(&__for_begin);
    }
    std::vector<std::vector<unsigned long>>::vector((std::vector<std::vector<long unsigned int>> *const)(v4 + 48));
    for ( *(_DWORD *)(v4 + 32) = 1; ; ++*(_DWORD *)(v4 + 32) )
    {
      v13 = *(unsigned int *)(v4 + 32);
      if ( v13 > std::map<unsigned int,std::vector<unsigned long>>::size((const std::map<unsigned int,std::vector<long unsigned int>> *const)(v4 + 176)) )
        break;
      if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,std::vector<unsigned long>>,unsigned int>(
              (std::map<unsigned int,std::vector<long unsigned int>> *)(v4 + 176),
              (const unsigned int *)(v4 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/tower_handler.cpp",
          "onTowerTeamSelectReq",
          71);
        v14 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v27,
                (const char (*)[32])"tower not found. tower_team_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 32));
        common::milog::MiLogStream::~MiLogStream(&v27);
        v3 = -1;
        goto LABEL_27;
      }
      v15 = std::map<unsigned int,std::vector<unsigned long>>::operator[](
              (std::map<unsigned int,std::vector<long unsigned int>> *const)(v4 + 176),
              (const std::map<unsigned int,std::vector<long unsigned int>>::key_type *)(v4 + 32));
      v16 = std::move<std::vector<unsigned long> &>(v15);
      std::vector<std::vector<unsigned long>>::push_back(
        (std::vector<std::vector<long unsigned int>> *const)(v4 + 48),
        v16);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    TowerComp = Player::getTowerComp(this->player_);
    v18 = std::move<std::vector<std::vector<unsigned long>> &>((std::vector<std::vector<long unsigned int>> *)(v4 + 48));
    std::vector<std::vector<unsigned long>>::vector((std::vector<std::vector<long unsigned int>> *const)(v4 + 112), v18);
    ret = PlayerTowerComp::selectTowerTeam(
            TowerComp,
            floor_id,
            (std::vector<std::vector<long unsigned int>> *)(v4 + 112));
    std::vector<std::vector<unsigned long>>::~vector((std::vector<std::vector<long unsigned int>> *const)(v4 + 112));
    if ( ret )
    {
      v3 = ret;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->last_select_tower_team_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->last_select_tower_team_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->last_select_tower_team_time_);
      }
      this->last_select_tower_team_time_ = now;
      v3 = 0;
    }
LABEL_27:
    std::vector<std::vector<unsigned long>>::~vector((std::vector<std::vector<long unsigned int>> *const)(v4 + 48));
LABEL_28:
    std::map<unsigned int,std::vector<unsigned long>>::~map((std::map<unsigned int,std::vector<long unsigned int>> *const)(v4 + 176));
  }
  else
  {
    v3 = 3;
  }
  result = v3;
  if ( v28 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 87: range 000000001803D088-000000001803D269
int32_t __cdecl TowerHandler::onTowerEnterLevelReq(
        TowerHandler *const this,
        const proto::TowerEnterLevelReq *req,
        proto::TowerEnterLevelRsp *rsp_0)
{
  PlayerSceneComp *SceneComp; // rax
  PlayerSceneComp *v5; // rax
  PlayerTowerComp *TowerComp; // rax
  uint32_t scene_id; // [rsp+28h] [rbp-38h]
  google::protobuf::uint32 enter_point_id; // [rsp+2Ch] [rbp-34h]
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  scene_id = PlayerSceneComp::getCurSceneId(SceneComp);
  if ( scene_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = Player::getSceneComp(this->player_);
    if ( !PlayerSceneComp::isInMyPlayerWorld(v5) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/tower_handler.cpp",
        "onTowerEnterLevelReq",
        97);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v10, (const char (*)[21])"is not in self world");
      common::milog::MiLogStream::~MiLogStream(&v10);
      return 512;
    }
    else
    {
      enter_point_id = proto::TowerEnterLevelReq::enter_point_id(req);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      TowerComp = Player::getTowerComp(this->player_);
      return PlayerTowerComp::enterTowerLevelDungeon(TowerComp, scene_id, enter_point_id, rsp_0);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/tower_handler.cpp",
      "onTowerEnterLevelReq",
      92);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v10, (const char (*)[18])"cur_scene_id is 0");
    common::milog::MiLogStream::~MiLogStream(&v10);
    return -1;
  }
};

// Line 106: range 000000001803D26A-000000001803D2E4
int32_t __cdecl TowerHandler::onTowerBuffSelectReq(
        TowerHandler *const this,
        const proto::TowerBuffSelectReq *req,
        proto::TowerBuffSelectRsp *rsp_0)
{
  PlayerTowerComp *TowerComp; // rax
  uint32_t selected_tower_buff_id; // [rsp+2Ch] [rbp-4h]

  selected_tower_buff_id = proto::TowerBuffSelectReq::tower_buff_id(req);
  proto::TowerBuffSelectRsp::set_tower_buff_id(rsp_0, selected_tower_buff_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  TowerComp = Player::getTowerComp(this->player_);
  return PlayerTowerComp::selectTowerBuff(TowerComp, selected_tower_buff_id);
};

// Line 114: range 000000001803D2E6-000000001803D338
int32_t __cdecl TowerHandler::onTowerSurrenderReq(
        TowerHandler *const this,
        const proto::TowerSurrenderReq *req,
        proto::TowerSurrenderRsp *rsp_0)
{
  PlayerTowerComp *TowerComp; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  TowerComp = Player::getTowerComp(this->player_);
  return PlayerTowerComp::surrenderTowerProgress(TowerComp);
};

// Line 120: range 000000001803D33A-000000001803D3B4
int32_t __cdecl TowerHandler::onTowerGetFloorStarRewardReq(
        TowerHandler *const this,
        const proto::TowerGetFloorStarRewardReq *req,
        proto::TowerGetFloorStarRewardRsp *rsp_0)
{
  PlayerTowerComp *TowerComp; // rax
  uint32_t floor_id; // [rsp+2Ch] [rbp-4h]

  floor_id = proto::TowerGetFloorStarRewardReq::floor_id(req);
  proto::TowerGetFloorStarRewardRsp::set_floor_id(rsp_0, floor_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  TowerComp = Player::getTowerComp(this->player_);
  return PlayerTowerComp::getFloorStarReward(TowerComp, floor_id);
};

// Line 127: range 000000001803D3B6-000000001803D412
int32_t __cdecl TowerHandler::onTowerRecordHandbookReq(
        TowerHandler *const this,
        const proto::TowerRecordHandbookReq *req,
        proto::TowerRecordHandbookRsp *rsp_0)
{
  PlayerTowerComp *TowerComp; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  TowerComp = Player::getTowerComp(this->player_);
  return PlayerTowerComp::requestRecordHandbook(TowerComp, rsp_0);
};
