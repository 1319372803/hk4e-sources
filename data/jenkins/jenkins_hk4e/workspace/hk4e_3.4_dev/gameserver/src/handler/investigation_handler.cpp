// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/investigation_handler.cpp

// Line 28: range 0000000015107C58-000000001510818D
int32_t __cdecl InvestigationHandler::addPacketFuncToMap(
        InvestigationHandler *const this,
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

  __x = 1912;
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
      "./src/handler/investigation_handler.cpp",
      "addPacketFuncToMap",
      29);
    common::milog::MiLogStream::operator()(&v11, off_2570C7C0, 1912LL);
    common::milog::MiLogStream::~MiLogStream(&v11);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
    __x = 1912;
    v3 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_map,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<InvestigationHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}>(
      v3,
      (InvestigationHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
    __x = 1918;
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
        "./src/handler/investigation_handler.cpp",
        "addPacketFuncToMap",
        30);
      common::milog::MiLogStream::operator()(&v11, off_2570C7C0, 1918LL);
      common::milog::MiLogStream::~MiLogStream(&v11);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
      __x = 1918;
      v4 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
             process_packet_func_map,
             &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<InvestigationHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}>(
        v4,
        (InvestigationHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
      __x = 1901;
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
          "./src/handler/investigation_handler.cpp",
          "addPacketFuncToMap",
          31);
        common::milog::MiLogStream::operator()(&v11, off_2570C7C0, 1901LL);
        common::milog::MiLogStream::~MiLogStream(&v11);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
        __x = 1901;
        v5 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
               process_packet_func_map,
               &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<InvestigationHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}>(
          v5,
          (InvestigationHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
        __x = 1915;
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
            "./src/handler/investigation_handler.cpp",
            "addPacketFuncToMap",
            32);
          common::milog::MiLogStream::operator()(&v11, off_2570C7C0, 1915LL);
          common::milog::MiLogStream::~MiLogStream(&v11);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
          __x = 1915;
          v6 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                 process_packet_func_map,
                 &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<InvestigationHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}>(
            v6,
            (InvestigationHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
          __x = 1902;
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
              "./src/handler/investigation_handler.cpp",
              "addPacketFuncToMap",
              33);
            common::milog::MiLogStream::operator()(&v11, off_2570C7C0, 1902LL);
            common::milog::MiLogStream::~MiLogStream(&v11);
            return -1;
          }
          else
          {
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
            __x = 1902;
            v7 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                   process_packet_func_map,
                   &__x);
            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<InvestigationHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}>(
              v7,
              (InvestigationHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
            return 0;
          }
        }
      }
    }
  }
};

// Line 29: range 0000000015106F36-0000000015107252
int __cdecl InvestigationHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator()(
        const InvestigationHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  InvestigationHandler *this; // r14
  std::__shared_ptr_access<const proto::TakeInvestigationRewardReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::TakeInvestigationRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::TakeInvestigationRewardRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = InvestigationHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::TakeInvestigationRewardReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::TakeInvestigationRewardReq const>(
         (const std::shared_ptr<const proto::TakeInvestigationRewardReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/investigation_handler.cpp",
      "operator()",
      29);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::TakeInvestigationRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TakeInvestigationRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::TakeInvestigationRewardRsp>();
    rsp_0 = std::__shared_ptr_access<proto::TakeInvestigationRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::TakeInvestigationRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::TakeInvestigationRewardRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::TakeInvestigationRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TakeInvestigationRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = InvestigationHandler::onTakeInvestigationRewardReq(this, v8, rsp_0);
    proto::TakeInvestigationRewardRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::TakeInvestigationRewardRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::TakeInvestigationRewardRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::TakeInvestigationRewardRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::TakeInvestigationRewardRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::TakeInvestigationRewardRsp>::~shared_ptr((std::shared_ptr<proto::TakeInvestigationRewardRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::TakeInvestigationRewardReq const>::~shared_ptr((std::shared_ptr<const proto::TakeInvestigationRewardReq> *const)(v2 + 32));
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

// Line 30: range 0000000015107254-0000000015107570
int __cdecl InvestigationHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator()(
        const InvestigationHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  InvestigationHandler *this; // r14
  std::__shared_ptr_access<const proto::TakeInvestigationTargetRewardReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::TakeInvestigationTargetRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::TakeInvestigationTargetRewardRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = InvestigationHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::TakeInvestigationTargetRewardReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::TakeInvestigationTargetRewardReq const>(
         (const std::shared_ptr<const proto::TakeInvestigationTargetRewardReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/investigation_handler.cpp",
      "operator()",
      30);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::TakeInvestigationTargetRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TakeInvestigationTargetRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::TakeInvestigationTargetRewardRsp>();
    rsp_0 = std::__shared_ptr_access<proto::TakeInvestigationTargetRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::TakeInvestigationTargetRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::TakeInvestigationTargetRewardRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::TakeInvestigationTargetRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TakeInvestigationTargetRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = InvestigationHandler::onTakeInvestigationTargetRewardReq(this, v8, rsp_0);
    proto::TakeInvestigationTargetRewardRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::TakeInvestigationTargetRewardRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::TakeInvestigationTargetRewardRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::TakeInvestigationTargetRewardRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::TakeInvestigationTargetRewardRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::TakeInvestigationTargetRewardRsp>::~shared_ptr((std::shared_ptr<proto::TakeInvestigationTargetRewardRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::TakeInvestigationTargetRewardReq const>::~shared_ptr((std::shared_ptr<const proto::TakeInvestigationTargetRewardReq> *const)(v2 + 32));
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

// Line 31: range 0000000015107572-000000001510788E
int __cdecl InvestigationHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator()(
        const InvestigationHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  InvestigationHandler *this; // r14
  std::__shared_ptr_access<const proto::GetInvestigationMonsterReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GetInvestigationMonsterRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GetInvestigationMonsterRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = InvestigationHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetInvestigationMonsterReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetInvestigationMonsterReq const>(
         (const std::shared_ptr<const proto::GetInvestigationMonsterReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/investigation_handler.cpp",
      "operator()",
      31);
    common::milog::MiLogStream::operator()(&v15, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetInvestigationMonsterReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetInvestigationMonsterReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetInvestigationMonsterRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetInvestigationMonsterRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetInvestigationMonsterRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetInvestigationMonsterRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GetInvestigationMonsterReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetInvestigationMonsterReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = InvestigationHandler::onGetInvestigationMonsterReq(this, v8, rsp_0);
    proto::GetInvestigationMonsterRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GetInvestigationMonsterRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GetInvestigationMonsterRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GetInvestigationMonsterRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GetInvestigationMonsterRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GetInvestigationMonsterRsp>::~shared_ptr((std::shared_ptr<proto::GetInvestigationMonsterRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetInvestigationMonsterReq const>::~shared_ptr((std::shared_ptr<const proto::GetInvestigationMonsterReq> *const)(v2 + 32));
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

// Line 32: range 0000000015107890-0000000015107A72
int __cdecl InvestigationHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator()(
        const InvestigationHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r14d
  InvestigationHandler *this; // r14
  std::__shared_ptr_access<const proto::MarkTargetInvestigationMonsterNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  int result; // eax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-90h] BYREF
  char v10[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 notify_ptr:32";
  *(_QWORD *)(v2 + 16) = InvestigationHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::MarkTargetInvestigationMonsterNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::MarkTargetInvestigationMonsterNotify const>(
         (const std::shared_ptr<const proto::MarkTargetInvestigationMonsterNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/investigation_handler.cpp",
      "operator()",
      32);
    common::milog::MiLogStream::operator()(&v9, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v7 = std::__shared_ptr_access<proto::MarkTargetInvestigationMonsterNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::MarkTargetInvestigationMonsterNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v5 = InvestigationHandler::onMarkTargetInvestigationMonsterNotify(this, v7);
  }
  std::shared_ptr<proto::MarkTargetInvestigationMonsterNotify const>::~shared_ptr((std::shared_ptr<const proto::MarkTargetInvestigationMonsterNotify> *const)(v2 + 32));
  result = v5;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 33: range 0000000015107A74-0000000015107C56
int __cdecl InvestigationHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator()(
        const InvestigationHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int QuestDailyNotify; // r14d
  InvestigationHandler *this; // r14
  std::__shared_ptr_access<const proto::InvestigationReadQuestDailyNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  int result; // eax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-90h] BYREF
  char v10[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 notify_ptr:33";
  *(_QWORD *)(v2 + 16) = InvestigationHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::InvestigationReadQuestDailyNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::InvestigationReadQuestDailyNotify const>(
         (const std::shared_ptr<const proto::InvestigationReadQuestDailyNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/investigation_handler.cpp",
      "operator()",
      33);
    common::milog::MiLogStream::operator()(&v9, off_2570C620);
    common::milog::MiLogStream::~MiLogStream(&v9);
    QuestDailyNotify = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v7 = std::__shared_ptr_access<proto::InvestigationReadQuestDailyNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::InvestigationReadQuestDailyNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    QuestDailyNotify = InvestigationHandler::onInvestigationReadQuestDailyNotify(this, v7);
  }
  std::shared_ptr<proto::InvestigationReadQuestDailyNotify const>::~shared_ptr((std::shared_ptr<const proto::InvestigationReadQuestDailyNotify> *const)(v2 + 32));
  result = QuestDailyNotify;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 38: range 000000001510818E-0000000015108202
int32_t __cdecl InvestigationHandler::onTakeInvestigationRewardReq(
        InvestigationHandler *const this,
        const proto::TakeInvestigationRewardReq *req,
        proto::TakeInvestigationRewardRsp *rsp_0)
{
  PlayerInvestigationComp *InvestigationComp; // rax
  google::protobuf::uint32 id; // [rsp+28h] [rbp-8h]

  id = proto::TakeInvestigationRewardReq::id(req);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  InvestigationComp = Player::getInvestigationComp(this->player_);
  return PlayerInvestigationComp::takeInvestigationReward(InvestigationComp, id, 1);
};

// Line 46: range 0000000015108204-0000000015108278
int32_t __cdecl InvestigationHandler::onTakeInvestigationTargetRewardReq(
        InvestigationHandler *const this,
        const proto::TakeInvestigationTargetRewardReq *req,
        proto::TakeInvestigationTargetRewardRsp *rsp_0)
{
  PlayerInvestigationComp *InvestigationComp; // rax
  google::protobuf::uint32 quest_id; // [rsp+28h] [rbp-8h]

  quest_id = proto::TakeInvestigationTargetRewardReq::quest_id(req);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  InvestigationComp = Player::getInvestigationComp(this->player_);
  return PlayerInvestigationComp::takeInvestigationTargetReward(InvestigationComp, quest_id, 1);
};

// Line 53: range 000000001510827A-00000000151086AA
int32_t __cdecl InvestigationHandler::onGetInvestigationMonsterReq(
        InvestigationHandler *const this,
        const proto::GetInvestigationMonsterReq *req,
        proto::GetInvestigationMonsterRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // rbx
  PlayerInvestigationComp *InvestigationComp; // rax
  proto::InvestigationMonster *v7; // rax
  int32_t result; // eax
  bool is_for_mark; // [rsp+27h] [rbp-1A9h]
  std::unordered_map<unsigned int,data::InvestigationMonsterConfig>::const_iterator __for_begin_0; // [rsp+28h] [rbp-1A8h] BYREF
  std::unordered_map<unsigned int,data::InvestigationMonsterConfig>::const_iterator __for_end_0; // [rsp+30h] [rbp-1A0h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+38h] [rbp-198h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+40h] [rbp-190h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+48h] [rbp-188h]
  const std::unordered_map<unsigned int,data::InvestigationMonsterConfig> *__for_range_0; // [rsp+50h] [rbp-180h]
  const std::pair<unsigned int const,data::InvestigationMonsterConfig> *v17; // [rsp+58h] [rbp-178h]
  std::tuple_element<0,const std::pair<unsigned int const,data::InvestigationMonsterConfig> >::type *investigation_monster_id; // [rsp+60h] [rbp-170h]
  std::tuple_element<1,const std::pair<unsigned int const,data::InvestigationMonsterConfig> >::type *monster_config; // [rsp+68h] [rbp-168h]
  std::shared_ptr<Config> v20; // [rsp+70h] [rbp-160h] BYREF
  char v21[336]; // [rsp+80h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 10 city_id:55 64 56 14 city_id_set:54 160 96 30 proto_investigation_monster:67";
  *(_QWORD *)(v3 + 16) = InvestigationHandler::onGetInvestigationMonsterReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862728] = -202116109;
  std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v3 + 64));
  __for_range = proto::GetInvestigationMonsterReq::city_id_list(req);
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
    std::unordered_set<unsigned int>::insert(
      (std::unordered_set<unsigned int> *const)(v3 + 64),
      (const std::unordered_set<unsigned int>::value_type *)(v3 + 48));
    ++__for_begin;
  }
  is_for_mark = proto::GetInvestigationMonsterReq::is_for_mark(req);
  proto::GetInvestigationMonsterRsp::set_is_for_mark(rsp_0, is_for_mark);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  __for_range_0 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.txt_config_mgr.investigation_config_mgr.investigation_monster_config_map;
  std::shared_ptr<Config>::~shared_ptr(&v20);
  __for_begin_0._M_cur = std::unordered_map<unsigned int,data::InvestigationMonsterConfig>::begin(__for_range_0)._M_cur;
  __for_end_0._M_cur = std::unordered_map<unsigned int,data::InvestigationMonsterConfig>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::InvestigationMonsterConfig>,false>(
            &__for_begin_0,
            &__for_end_0) )
  {
    v17 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InvestigationMonsterConfig>,false,false>::operator*(&__for_begin_0);
    investigation_monster_id = std::get<0ul,unsigned int const,data::InvestigationMonsterConfig>(v17);
    monster_config = (std::tuple_element<1,const std::pair<unsigned int const,data::InvestigationMonsterConfig> >::type *)std::get<1ul,unsigned int const,data::InvestigationMonsterConfig>(v17);
    if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
           (std::unordered_set<unsigned int> *)(v3 + 64),
           &monster_config->city_id) )
    {
      proto::InvestigationMonster::InvestigationMonster((proto::InvestigationMonster *const)(v3 + 160));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      InvestigationComp = Player::getInvestigationComp(this->player_);
      if ( !PlayerInvestigationComp::getStatusByInvestigationMonsterConfig(
              InvestigationComp,
              monster_config,
              (proto::InvestigationMonster *)(v3 + 160),
              is_for_mark) )
      {
        v7 = proto::GetInvestigationMonsterRsp::add_monster_list(rsp_0);
        proto::InvestigationMonster::Swap(v7, (proto::InvestigationMonster *)(v3 + 160));
      }
      proto::InvestigationMonster::~InvestigationMonster((proto::InvestigationMonster *const)(v3 + 160));
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InvestigationMonsterConfig>,false,false>::operator++(&__for_begin_0);
  }
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v3 + 64));
  result = 0;
  if ( v21 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF800C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 77: range 00000000151086AC-00000000151089AC
int32_t __cdecl InvestigationHandler::onMarkTargetInvestigationMonsterNotify(
        InvestigationHandler *const this,
        const proto::MarkTargetInvestigationMonsterNotify *notify)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  InvestigationExcelConfigMgr *p_investigation_config_mgr; // r14
  uint32_t v6; // eax
  common::milog::MiLogStream *v7; // rbx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  int32_t result; // eax
  PlayerInvestigationComp *InvestigationComp; // rax
  unsigned int val; // [rsp+14h] [rbp-9Ch] BYREF
  const data::InvestigationMonsterConfig *investigation_monster_config_ptr; // [rsp+18h] [rbp-98h]
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-90h] BYREF
  char v15[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 16 tracking_info:85";
  *(_QWORD *)(v2 + 16) = InvestigationHandler::onMarkTargetInvestigationMonsterNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 32));
  p_investigation_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32))->design_config.txt_config_mgr.investigation_config_mgr;
  v6 = proto::MarkTargetInvestigationMonsterNotify::investigation_monster_id(notify);
  investigation_monster_config_ptr = data::InvestigationExcelConfigMgrBase::findInvestigationMonsterConfig(
                                       p_investigation_config_mgr,
                                       v6);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 32));
  if ( investigation_monster_config_ptr )
  {
    *(_DWORD *)(v2 + 32) = 0;
    *(_DWORD *)(v2 + 36) = 0;
    *(_DWORD *)(v2 + 40) = 0;
    *(_DWORD *)(v2 + 44) = 0;
    *(_DWORD *)(v2 + 32) = proto::MarkTargetInvestigationMonsterNotify::investigation_monster_id(notify);
    *(_DWORD *)(v2 + 36) = proto::MarkTargetInvestigationMonsterNotify::scene_id(notify);
    *(_DWORD *)(v2 + 40) = proto::MarkTargetInvestigationMonsterNotify::group_id(notify);
    *(_DWORD *)(v2 + 44) = proto::MarkTargetInvestigationMonsterNotify::monster_id(notify);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    InvestigationComp = Player::getInvestigationComp(this->player_);
    PlayerInvestigationComp::setTrackingInvestigationMonsterInfo(
      InvestigationComp,
      (const TrackingInvestigationMonsterInfo *)(v2 + 32));
    result = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/investigation_handler.cpp",
      "onMarkTargetInvestigationMonsterNotify",
      81);
    v7 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
           &v14,
           (const char (*)[63])"findInvestigationMonsterConfig fail, investigation_monster_id:");
    val = proto::MarkTargetInvestigationMonsterNotify::investigation_monster_id(notify);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v9, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = -1;
  }
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 95: range 00000000151089AE-0000000015108A01
int32_t __cdecl InvestigationHandler::onInvestigationReadQuestDailyNotify(
        InvestigationHandler *const this,
        const proto::InvestigationReadQuestDailyNotify *notify)
{
  PlayerInvestigationComp *InvestigationComp; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  InvestigationComp = Player::getInvestigationComp(this->player_);
  PlayerInvestigationComp::clientAckQuestDailyNotify(InvestigationComp);
  return 0;
};
