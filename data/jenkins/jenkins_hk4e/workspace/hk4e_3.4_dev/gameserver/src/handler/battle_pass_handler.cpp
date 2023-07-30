// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/battle_pass_handler.cpp

// Line 28: range 00000000130F73E8-00000000130F791D
int32_t __cdecl BattlePassHandler::addPacketFuncToMap(
        BattlePassHandler *const this,
        PacketFuncMap *process_packet_func_map)
{
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v3; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v4; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v5; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v6; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v7; // rax
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+1Ch] [rbp-44h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v9; // [rsp+20h] [rbp-40h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+28h] [rbp-38h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-30h] BYREF

  __x = 2602;
  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                  process_packet_func_map,
                  &__x)._M_node;
  v9._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
  if ( std::operator!=(&v9, &__y) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/battle_pass_handler.cpp",
      "addPacketFuncToMap",
      29);
    common::milog::MiLogStream::operator()(&v11, format, 2602LL);
    common::milog::MiLogStream::~MiLogStream(&v11);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
    __x = 2602;
    v3 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_map,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<BattlePassHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}>(
      v3,
      (BattlePassHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
    __x = 2629;
    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                    process_packet_func_map,
                    &__x)._M_node;
    v9._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
    if ( std::operator!=(&v9, &__y) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/battle_pass_handler.cpp",
        "addPacketFuncToMap",
        30);
      common::milog::MiLogStream::operator()(&v11, format, 2629LL);
      common::milog::MiLogStream::~MiLogStream(&v11);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
      __x = 2629;
      v4 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
             process_packet_func_map,
             &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<BattlePassHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}>(
        v4,
        (BattlePassHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
      __x = 2644;
      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                      process_packet_func_map,
                      &__x)._M_node;
      v9._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
      if ( std::operator!=(&v9, &__y) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/battle_pass_handler.cpp",
          "addPacketFuncToMap",
          31);
        common::milog::MiLogStream::operator()(&v11, format, 2644LL);
        common::milog::MiLogStream::~MiLogStream(&v11);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
        __x = 2644;
        v5 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
               process_packet_func_map,
               &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<BattlePassHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}>(
          v5,
          (BattlePassHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
        __x = 2641;
        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                        process_packet_func_map,
                        &__x)._M_node;
        v9._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
        if ( std::operator!=(&v9, &__y) )
        {
          common::milog::MiLogStream::create(
            &v11,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/battle_pass_handler.cpp",
            "addPacketFuncToMap",
            32);
          common::milog::MiLogStream::operator()(&v11, format, 2641LL);
          common::milog::MiLogStream::~MiLogStream(&v11);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
          __x = 2641;
          v6 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                 process_packet_func_map,
                 &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<BattlePassHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}>(
            v6,
            (BattlePassHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
          __x = 2647;
          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                          process_packet_func_map,
                          &__x)._M_node;
          v9._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
          if ( std::operator!=(&v9, &__y) )
          {
            common::milog::MiLogStream::create(
              &v11,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/handler/battle_pass_handler.cpp",
              "addPacketFuncToMap",
              33);
            common::milog::MiLogStream::operator()(&v11, format, 2647LL);
            common::milog::MiLogStream::~MiLogStream(&v11);
            return -1;
          }
          else
          {
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
            __x = 2647;
            v7 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                   process_packet_func_map,
                   &__x);
            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<BattlePassHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}>(
              v7,
              (BattlePassHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
            return 0;
          }
        }
      }
    }
  }
};

// Line 29: range 00000000130F6452-00000000130F676E
int __cdecl BattlePassHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator()(
        const BattlePassHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  BattlePassHandler *this; // r14
  std::__shared_ptr_access<const proto::TakeBattlePassRewardReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::TakeBattlePassRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::TakeBattlePassRewardRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = BattlePassHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::TakeBattlePassRewardReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::TakeBattlePassRewardReq const>(
         (const std::shared_ptr<const proto::TakeBattlePassRewardReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/battle_pass_handler.cpp",
      "operator()",
      29);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::TakeBattlePassRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TakeBattlePassRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::TakeBattlePassRewardRsp>();
    rsp_0 = std::__shared_ptr_access<proto::TakeBattlePassRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::TakeBattlePassRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::TakeBattlePassRewardRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::TakeBattlePassRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TakeBattlePassRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = BattlePassHandler::onTakeBattlePassRewardReq(this, v8, rsp_0);
    proto::TakeBattlePassRewardRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::TakeBattlePassRewardRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::TakeBattlePassRewardRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::TakeBattlePassRewardRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::TakeBattlePassRewardRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::TakeBattlePassRewardRsp>::~shared_ptr((std::shared_ptr<proto::TakeBattlePassRewardRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::TakeBattlePassRewardReq const>::~shared_ptr((std::shared_ptr<const proto::TakeBattlePassRewardReq> *const)(v2 + 32));
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

// Line 30: range 00000000130F6770-00000000130F6A8C
int __cdecl BattlePassHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator()(
        const BattlePassHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  BattlePassHandler *this; // r14
  std::__shared_ptr_access<const proto::TakeBattlePassMissionPointReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::TakeBattlePassMissionPointRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::TakeBattlePassMissionPointRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = BattlePassHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::TakeBattlePassMissionPointReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::TakeBattlePassMissionPointReq const>(
         (const std::shared_ptr<const proto::TakeBattlePassMissionPointReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/battle_pass_handler.cpp",
      "operator()",
      30);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::TakeBattlePassMissionPointReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TakeBattlePassMissionPointReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::TakeBattlePassMissionPointRsp>();
    rsp_0 = std::__shared_ptr_access<proto::TakeBattlePassMissionPointRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::TakeBattlePassMissionPointRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::TakeBattlePassMissionPointRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::TakeBattlePassMissionPointReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TakeBattlePassMissionPointReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = BattlePassHandler::onTakeBattlePassMissionPointReq(this, v8, rsp_0);
    proto::TakeBattlePassMissionPointRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::TakeBattlePassMissionPointRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::TakeBattlePassMissionPointRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::TakeBattlePassMissionPointRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::TakeBattlePassMissionPointRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::TakeBattlePassMissionPointRsp>::~shared_ptr((std::shared_ptr<proto::TakeBattlePassMissionPointRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::TakeBattlePassMissionPointReq const>::~shared_ptr((std::shared_ptr<const proto::TakeBattlePassMissionPointReq> *const)(v2 + 32));
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

// Line 31: range 00000000130F6A8E-00000000130F6DAA
int __cdecl BattlePassHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator()(
        const BattlePassHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  BattlePassHandler *this; // r14
  std::__shared_ptr_access<const proto::GetBattlePassProductReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GetBattlePassProductRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GetBattlePassProductRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = BattlePassHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetBattlePassProductReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetBattlePassProductReq const>(
         (const std::shared_ptr<const proto::GetBattlePassProductReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/battle_pass_handler.cpp",
      "operator()",
      31);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetBattlePassProductReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetBattlePassProductReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetBattlePassProductRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetBattlePassProductRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetBattlePassProductRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetBattlePassProductRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GetBattlePassProductReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetBattlePassProductReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = BattlePassHandler::onGetBattlePassProductReq(this, v8, rsp_0);
    proto::GetBattlePassProductRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GetBattlePassProductRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GetBattlePassProductRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GetBattlePassProductRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GetBattlePassProductRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GetBattlePassProductRsp>::~shared_ptr((std::shared_ptr<proto::GetBattlePassProductRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetBattlePassProductReq const>::~shared_ptr((std::shared_ptr<const proto::GetBattlePassProductReq> *const)(v2 + 32));
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

// Line 32: range 00000000130F6DAC-00000000130F70C8
int __cdecl BattlePassHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator()(
        const BattlePassHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  BattlePassHandler *this; // r14
  std::__shared_ptr_access<const proto::SetBattlePassViewedReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::SetBattlePassViewedRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::SetBattlePassViewedRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = BattlePassHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SetBattlePassViewedReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SetBattlePassViewedReq const>(
         (const std::shared_ptr<const proto::SetBattlePassViewedReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/battle_pass_handler.cpp",
      "operator()",
      32);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::SetBattlePassViewedReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SetBattlePassViewedReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::SetBattlePassViewedRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SetBattlePassViewedRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SetBattlePassViewedRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::SetBattlePassViewedRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::SetBattlePassViewedReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SetBattlePassViewedReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = BattlePassHandler::onSetBattlePassViewedReq(this, v8, rsp_0);
    proto::SetBattlePassViewedRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::SetBattlePassViewedRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::SetBattlePassViewedRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::SetBattlePassViewedRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::SetBattlePassViewedRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::SetBattlePassViewedRsp>::~shared_ptr((std::shared_ptr<proto::SetBattlePassViewedRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::SetBattlePassViewedReq const>::~shared_ptr((std::shared_ptr<const proto::SetBattlePassViewedReq> *const)(v2 + 32));
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

// Line 33: range 00000000130F70CA-00000000130F73E6
int __cdecl BattlePassHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator()(
        const BattlePassHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  BattlePassHandler *this; // r14
  std::__shared_ptr_access<const proto::BuyBattlePassLevelReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::BuyBattlePassLevelRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::BuyBattlePassLevelRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = BattlePassHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::BuyBattlePassLevelReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::BuyBattlePassLevelReq const>(
         (const std::shared_ptr<const proto::BuyBattlePassLevelReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/battle_pass_handler.cpp",
      "operator()",
      33);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::BuyBattlePassLevelReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::BuyBattlePassLevelReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::BuyBattlePassLevelRsp>();
    rsp_0 = std::__shared_ptr_access<proto::BuyBattlePassLevelRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::BuyBattlePassLevelRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::BuyBattlePassLevelRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::BuyBattlePassLevelReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::BuyBattlePassLevelReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = BattlePassHandler::onBuyBattlePassLevelReq(this, v8, rsp_0);
    proto::BuyBattlePassLevelRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::BuyBattlePassLevelRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::BuyBattlePassLevelRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::BuyBattlePassLevelRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::BuyBattlePassLevelRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::BuyBattlePassLevelRsp>::~shared_ptr((std::shared_ptr<proto::BuyBattlePassLevelRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::BuyBattlePassLevelReq const>::~shared_ptr((std::shared_ptr<const proto::BuyBattlePassLevelReq> *const)(v2 + 32));
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

// Line 38: range 00000000130F791E-00000000130F7EAB
int32_t __cdecl BattlePassHandler::onTakeBattlePassRewardReq(
        BattlePassHandler *const this,
        const proto::TakeBattlePassRewardReq *req,
        proto::TakeBattlePassRewardRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool isBattlePassClosed; // r14
  common::milog::MiLogStream *v8; // rcx
  int32_t v9; // r14d
  PlayerBattlePassComp *BattlePassComp; // rax
  common::milog::MiLogStream *v11; // rax
  proto::BattlePassRewardTakeOption *v12; // rax
  PlayerBattlePassComp *v13; // rax
  PlayerItemComp *ItemComp; // rax
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::BattlePassRewardTakeOption>::const_iterator __for_begin; // [rsp+28h] [rbp-138h] BYREF
  google::protobuf::RepeatedPtrField<proto::BattlePassRewardTakeOption>::const_iterator __for_end; // [rsp+30h] [rbp-130h] BYREF
  const google::protobuf::RepeatedPtrField<proto::BattlePassRewardTakeOption> *__for_range; // [rsp+38h] [rbp-128h]
  std::vector<ItemParam> *__for_range_0; // [rsp+40h] [rbp-120h]
  ItemParam *p; // [rsp+48h] [rbp-118h]
  proto::ItemParam *proto_item; // [rsp+50h] [rbp-110h]
  const proto::BattlePassRewardTakeOption *opt; // [rsp+58h] [rbp-108h]
  std::shared_ptr<Config> v24; // [rsp+60h] [rbp-100h] BYREF
  std::vector<ItemParam> __x; // [rsp+70h] [rbp-F0h] BYREF
  common::milog::MiLogStream v26; // [rsp+90h] [rbp-D0h] BYREF
  char v27[176]; // [rsp+B0h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 6 ret:40 64 24 14 display_vec:39";
  *(_QWORD *)(v3 + 16) = BattlePassHandler::onTakeBattlePassRewardReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 64));
  *(_DWORD *)(v3 + 48) = -1;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v24);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
  isBattlePassClosed = FeatureSwitchMgr::isBattlePassClosed(&v6->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v24);
  if ( isBattlePassClosed )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/battle_pass_handler.cpp",
      "onTakeBattlePassRewardReq",
      43);
    v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v26,
           (const char (*)[29])"battle pass closed, player_:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v8, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v26);
    v9 = 142;
  }
  else
  {
    __for_range = proto::TakeBattlePassRewardReq::take_option_list(req);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::BattlePassRewardTakeOption>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::BattlePassRewardTakeOption>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::BattlePassRewardTakeOption const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      opt = google::protobuf::internal::RepeatedPtrIterator<proto::BattlePassRewardTakeOption const>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      BattlePassComp = Player::getBattlePassComp(this->player_);
      *(_DWORD *)(v3 + 48) = PlayerBattlePassComp::checkCanTakeBattlePassReward(BattlePassComp, opt);
      if ( *(_DWORD *)(v3 + 48) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/battle_pass_handler.cpp",
          "onTakeBattlePassRewardReq",
          51);
        v11 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v26,
                (const char (*)[25])"cannot take reward, ret:");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v11, (const int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v26);
      }
      else
      {
        v12 = proto::TakeBattlePassRewardRsp::add_take_option_list(rsp_0);
        proto::BattlePassRewardTakeOption::CopyFrom(v12, opt);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v13 = Player::getBattlePassComp(this->player_);
        PlayerBattlePassComp::takeBattlePassReward(v13, opt, (std::vector<ItemParam> *)(v3 + 64));
      }
      google::protobuf::internal::RepeatedPtrIterator<proto::BattlePassRewardTakeOption const>::operator++(&__for_begin);
    }
    if ( proto::TakeBattlePassRewardRsp::take_option_list_size(rsp_0) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      ItemComp = Player::getItemComp(this->player_);
      PlayerItemComp::getMergedItemParamVec(&__x, ItemComp, (const std::vector<ItemParam> *)(v3 + 64));
      std::vector<ItemParam>::operator=((std::vector<ItemParam> *const)(v3 + 64), &__x);
      std::vector<ItemParam>::~vector(&__x);
      __for_range_0 = (std::vector<ItemParam> *)(v3 + 64);
      __for_begin.it_ = (void *const *)std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v3 + 64))._M_current;
      __for_end.it_ = (void *const *)std::vector<ItemParam>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<ItemParam *,std::vector<ItemParam>>(
                (const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *)&__for_begin,
                (const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *)&__for_end) )
      {
        p = __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator*((const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *const)&__for_begin);
        proto_item = proto::TakeBattlePassRewardRsp::add_item_list(rsp_0);
        ItemParam::toClient(p, proto_item);
        __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator++((__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *const)&__for_begin);
      }
      v9 = 0;
    }
    else
    {
      v9 = *(_DWORD *)(v3 + 48);
    }
  }
  std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 64));
  result = v9;
  if ( v27 == (char *)v3 )
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

// Line 71: range 00000000130F7EAC-00000000130F82CB
int32_t __cdecl BattlePassHandler::onTakeBattlePassMissionPointReq(
        BattlePassHandler *const this,
        const proto::TakeBattlePassMissionPointReq *req,
        proto::TakeBattlePassMissionPointRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool isBattlePassClosed; // r14
  common::milog::MiLogStream *v8; // rcx
  int32_t v9; // r14d
  PlayerBattlePassComp *BattlePassComp; // rax
  int32_t result; // eax
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-F8h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+30h] [rbp-F0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<Config> v16; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-D0h] BYREF
  char v18[176]; // [rsp+70h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 mission_id:78 64 24 17 mission_id_vec:77";
  *(_QWORD *)(v3 + 16) = BattlePassHandler::onTakeBattlePassMissionPointReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
  isBattlePassClosed = FeatureSwitchMgr::isBattlePassClosed(&v6->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v16);
  if ( isBattlePassClosed )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/battle_pass_handler.cpp",
      "onTakeBattlePassMissionPointReq",
      74);
    v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v17,
           (const char (*)[29])"battle pass closed, player_:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v8, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v17);
    v9 = 142;
  }
  else
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 64));
    __for_range = proto::TakeBattlePassMissionPointReq::mission_id_list(req);
    __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
    __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
    while ( __for_begin != __for_end )
    {
      if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 48) = *__for_begin;
      std::vector<unsigned int>::push_back(
        (std::vector<unsigned int> *const)(v3 + 64),
        (const std::vector<unsigned int>::value_type *)(v3 + 48));
      ++__for_begin;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BattlePassComp = Player::getBattlePassComp(this->player_);
    if ( PlayerBattlePassComp::takeMissionPoint(BattlePassComp, (std::vector<unsigned int> *)(v3 + 64))
      || std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/battle_pass_handler.cpp",
        "onTakeBattlePassMissionPointReq",
        85);
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
        &v17,
        (const char (*)[24])"takeMissionPoint failed");
      common::milog::MiLogStream::~MiLogStream(&v17);
      v9 = -1;
    }
    else
    {
      v9 = 0;
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 64));
  }
  result = v9;
  if ( v18 == (char *)v3 )
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

// Line 92: range 00000000130F82CC-00000000130F88C4
int32_t __cdecl BattlePassHandler::onGetBattlePassProductReq(
        BattlePassHandler *const this,
        const proto::GetBattlePassProductReq *req,
        proto::GetBattlePassProductRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned __int64 BattlePassComp; // rax
  unsigned __int64 v7; // rdx
  google::protobuf::uint32 v8; // edx
  PlayerBattlePassComp *v9; // rax
  int32_t v10; // r14d
  PlayerBattlePassComp *v11; // r14
  uint32_t v12; // ecx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  ShopmallExcelConfigMgr *p_shopmall_config_mgr; // r14
  signed int v18; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  int32_t result; // eax
  bool is_internal; // [rsp+22h] [rbp-BEh]
  bool is_epic; // [rsp+23h] [rbp-BDh]
  unsigned int val; // [rsp+24h] [rbp-BCh] BYREF
  int32_t ret; // [rsp+28h] [rbp-B8h]
  uint32_t platform_type; // [rsp+2Ch] [rbp-B4h]
  const BattlePassSchedule *schedule_ptr; // [rsp+30h] [rbp-B0h]
  const data::ProductPlayDetailConfig *play_config_ptr; // [rsp+38h] [rbp-A8h]
  std::shared_ptr<Config> v29; // [rsp+40h] [rbp-A0h] BYREF
  char v30[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 32 14 product_id:111";
  *(_QWORD *)(v3 + 16) = BattlePassHandler::onGetBattlePassProductReq;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450888) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BattlePassComp = (unsigned __int64)Player::getBattlePassComp(this->player_);
  if ( *(_BYTE *)((BattlePassComp >> 3) + 0x7FFF8000) )
    BattlePassComp = __asan_report_load8();
  v7 = *(_QWORD *)BattlePassComp + 120LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    BattlePassComp = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64))v7)(BattlePassComp);
  v8 = proto::GetBattlePassProductReq::battle_pass_product_play_type(req);
  proto::GetBattlePassProductRsp::set_battle_pass_product_play_type(rsp_0, v8);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v9 = Player::getBattlePassComp(this->player_);
  schedule_ptr = PlayerBattlePassComp::findCurSchedule(v9);
  if ( schedule_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v11 = Player::getBattlePassComp(this->player_);
    v12 = proto::GetBattlePassProductReq::battle_pass_product_play_type(req);
    if ( *(_BYTE *)(((unsigned __int64)schedule_ptr >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)schedule_ptr >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    ret = PlayerBattlePassComp::checkCanBuyBattlePass(v11, schedule_ptr->schedule_id, v12);
    if ( ret )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 32),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/battle_pass_handler.cpp",
        "onGetBattlePassProductReq",
        105);
      v13 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              (common::milog::MiLogStream *const)(v3 + 32),
              (const char (*)[43])"checkCanBuyBattlePass failed, schedule_id:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &schedule_ptr->schedule_id);
      v15 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v14, (const char (*)[12])" play_type:");
      val = proto::GetBattlePassProductReq::battle_pass_product_play_type(req);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 32));
      v10 = ret;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v29);
      v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
      is_internal = Config::isInternalServer(v16);
      std::shared_ptr<Config>::~shared_ptr(&v29);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      platform_type = Player::getPlatformType(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      is_epic = Player::isEpic(this->player_);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v29);
      p_shopmall_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29)->design_config.txt_config_mgr.shopmall_config_mgr;
      v18 = proto::GetBattlePassProductReq::battle_pass_product_play_type(req);
      ShopmallExcelConfigMgr::getFirstProductIdByPlayType[abi:cxx11](
        (std::string *)(v3 + 32),
        p_shopmall_config_mgr,
        is_internal,
        platform_type,
        is_epic,
        (data::ProductPlayType)v18);
      std::shared_ptr<Config>::~shared_ptr(&v29);
      if ( *(_BYTE *)(((unsigned __int64)schedule_ptr >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)schedule_ptr >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::GetBattlePassProductRsp::set_cur_schedule_id(rsp_0, schedule_ptr->schedule_id);
      proto::GetBattlePassProductRsp::set_product_id(rsp_0, (const std::string *)(v3 + 32));
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v29);
      v19 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
      play_config_ptr = ShopmallExcelConfigMgr::findProductPlayDetailConfig(
                          &v19->design_config.txt_config_mgr.shopmall_config_mgr,
                          (const std::string *)(v3 + 32));
      std::shared_ptr<Config>::~shared_ptr(&v29);
      if ( play_config_ptr )
        proto::GetBattlePassProductRsp::set_price_tier(rsp_0, &play_config_ptr->price_tier);
      v10 = 0;
      std::string::~string((void *)(v3 + 32));
    }
  }
  else
  {
    v10 = 1541;
  }
  result = v10;
  if ( v30 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
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

// Line 125: range 00000000130F88C6-00000000130F8A10
int32_t __cdecl BattlePassHandler::onSetBattlePassViewedReq(
        BattlePassHandler *const this,
        const proto::SetBattlePassViewedReq *req,
        proto::SetBattlePassViewedRsp *rsp_0)
{
  PlayerBattlePassComp *BattlePassComp; // rbx
  uint32_t v4; // eax
  common::milog::MiLogStream *v5; // rbx
  unsigned int val; // [rsp+24h] [rbp-3Ch] BYREF
  BattlePassSchedule *schedule_ptr; // [rsp+28h] [rbp-38h]
  common::milog::MiLogStream v9; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BattlePassComp = Player::getBattlePassComp(this->player_);
  v4 = proto::SetBattlePassViewedReq::schedule_id(req);
  schedule_ptr = PlayerBattlePassComp::findSchedule(BattlePassComp, v4);
  if ( schedule_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&schedule_ptr->is_viewed >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)schedule_ptr + 73) & 7) >= *(_BYTE *)(((unsigned __int64)&schedule_ptr->is_viewed >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_store1(&schedule_ptr->is_viewed);
    }
    schedule_ptr->is_viewed = 1;
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/battle_pass_handler.cpp",
      "onSetBattlePassViewedReq",
      129);
    v5 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
           &v9,
           (const char (*)[21])"schedule_id invalid:");
    val = proto::SetBattlePassViewedReq::schedule_id(req);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v9);
    return -1;
  }
};

// Line 137: range 00000000130F8A12-00000000130F8B92
int32_t __cdecl BattlePassHandler::onBuyBattlePassLevelReq(
        BattlePassHandler *const this,
        const proto::BuyBattlePassLevelReq *req,
        proto::BuyBattlePassLevelRsp *rsp_0)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  bool isBattlePassClosed; // bl
  common::milog::MiLogStream *v5; // rcx
  PlayerBattlePassComp *BattlePassComp; // rbx
  uint32_t v8; // eax
  std::shared_ptr<Config> v9; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v10; // [rsp+40h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9);
  isBattlePassClosed = FeatureSwitchMgr::isBattlePassClosed(&v3->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v9);
  if ( isBattlePassClosed )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/battle_pass_handler.cpp",
      "onBuyBattlePassLevelReq",
      140);
    v5 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v10,
           (const char (*)[29])"battle pass closed, player_:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v5, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v10);
    return 142;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BattlePassComp = Player::getBattlePassComp(this->player_);
    v8 = proto::BuyBattlePassLevelReq::buy_level(req);
    return PlayerBattlePassComp::tryBuyBattlePassLevel(BattlePassComp, v8);
  }
};
